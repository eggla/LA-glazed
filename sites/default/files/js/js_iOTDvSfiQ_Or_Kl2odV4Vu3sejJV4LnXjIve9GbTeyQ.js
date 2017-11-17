
// Inspired by Roger Codina and
// http://gis.stackexchange.com/questions/87199/how-does-one-reset-map-fitbounds-zoomtofeature-to-the-original-zoom

(function ($) {

  $(document).bind('leaflet.map', function(event, map_and_features, lMap) {
    var mapSettings = map_and_features.settings;
    // Use a flag on the map object to prevent controls being added multiple
    // times. This can happen in AJAX contexts.
    if (lMap && mapSettings) {
      if (mapSettings.zoomIndicator) {
        lMap.addControl(L.control.zoomIndicator(mapSettings.zoomIndicator));
      }
      if (mapSettings.resetControl) {
        lMap.addControl(L.control.reset(mapSettings.resetControl));
      }
      if (mapSettings.clusterControl) {
        lMap.addControl(L.control.clusterToggle(mapSettings.clusterControl));
      }
      if (mapSettings.scaleControl) {
        lMap.addControl(L.control.scale(mapSettings.scaleControl));
      }
      if (mapSettings.miniMap) {
        for (var key in lMap._layers) {
          var layer = lMap._layers[key];
          if (layer instanceof L.TileLayer) {
            // Copy the (first) main map layer for use in a mini-map inset.
            var tileLayer = (layer._type === 'quad')
              // See leaflet_more_maps/leaflet_more_maps.js
              ? L.tileLayerQuad(layer._url, layer.options)
              : L.tileLayer(layer._url, layer.options);
            lMap.addControl(L.control.minimap(tileLayer, mapSettings.miniMap));
            break;
          }
        }
      }
    }
  });
})(jQuery);

L.Control.ZoomIndicator = L.Control.extend({

  options: {
    position: 'topleft',
    prefix: 'z'
  },

  onAdd: function(map) {
    this.indicator = L.DomUtil.create('div', 'leaflet-control-zoom-indicator leaflet-bar');
    this.indicator.setAttribute('title', Drupal.t('Zoom level'));
    this.indicator.innerHTML = this.options.prefix + map.getZoom();
    map.on('zoomend', this.update, this);
    return this.indicator;
  },

  update: function(event) {
    this.indicator.innerHTML = event.target.getZoom();
  }
});
L.control.zoomIndicator = function(options) {
  return new L.Control.ZoomIndicator(options);
};

L.Control.Reset = L.Control.extend({

  options: {
    position: 'topleft',
    label: 'R'
  },

  onAdd: function(map) {
    this._map._initialBounds = map.getBounds();

    var button = L.DomUtil.create('a', 'leaflet-control-reset leaflet-bar');
    if (this.options.label.length <= 2) {
      button.innerHTML = this.options.label;
    }
    else {
      // Assume label is a font-icon specification, e.g. 'fa fa-repeat'.
      L.DomUtil.addClass(button, this.options.label);
    }
    button.setAttribute('title', Drupal.t('Reset'));

    // Must pass "this" in as context, or onClick() will not know us.
    L.DomEvent
      .on(button, 'click', this.onClick, this)
      .on(button, 'dblclick', L.DomEvent.stopPropagation)
      .on(button, 'dblclick', function(event) {
         alert(Drupal.t('A single click is sufficient!'));
      });

    return button;
  },

  onClick: function(event) {
    this._map.fitBounds(this._map._initialBounds);
  }
});
L.control.reset = function(options) {
  return new L.Control.Reset(options);
};

L.Control.ClusterToggle = L.Control.extend({

  options: {
    position: 'topright'
  },

  onAdd: function(map) {
    var leafletSettings = Drupal.settings.leaflet;
    for (var m = 0; m < leafletSettings.length; m++) {
      // Get here once per map, i.e. once per containing div.
      if (L.DomUtil.get(leafletSettings[m].mapId) === map._container) {
        this._masterSettings = leafletSettings[m].map.settings;
        break;
      }
    }
    var button = L.DomUtil.create('a', 'leaflet-control-cluster leaflet-bar');
    button.setAttribute('title', Drupal.t('Toggle clustering'));

    // Must pass "this" in as context, or onClick() will not know us.
    L.DomEvent
      .on(button, 'click', this.onClick, this)
      .on(button, 'dblclick', L.DomEvent.stopPropagation)
      .on(button, 'dblclick', function(event) {
         alert(Drupal.t('A single click is sufficient!'));
      });

    return button;
  },

  onClick: function(event) {
    // This normally only loops once, as there's only one _topClusterLevel
    for (var leaflet_id in this._map._layers) {
      if (this._map._layers[leaflet_id]._topClusterLevel) {
        var clusterGroup = this._map._layers[leaflet_id];
        clusterGroup._map = null;
        if (clusterGroup.options.disableClusteringAtZoom < 0) {
          // Restore the old disableClusteringAtZoom setting.
          clusterGroup.options.disableClusteringAtZoom = this._masterSettings ? this._masterSettings.disableClusteringAtZoom : null;
        }
        else {
          // Easiest way to stop clustering safely is this way:
          clusterGroup.options.disableClusteringAtZoom = -1;
        }
        clusterGroup.clearLayers();
        // In order for the clusterGroup to be reinitialised with the new
        // option value(s) set above, clusterGroup._needsClustering needs to
        // hold all markers to be added, before onAdd(map) can be called.
        clusterGroup._needsClustering = clusterGroup._topClusterLevel.getAllChildMarkers();
        clusterGroup.onAdd(this._map);
      }
    }
  }
});
L.control.clusterToggle = function(options) {
  return new L.Control.ClusterToggle(options);
};

if (L.Control.MiniMap) {
  L.extend(L.Control.MiniMap.prototype, {
    hideText: Drupal.t('Hide this inset'),
    showText: Drupal.t('Show map inset')
  });
};
/* This thing is getting a bit big and complicated... time to refactor! */

(function ($) {

  Drupal.leaflet._create_point_orig = Drupal.leaflet.create_point;

  Drupal.leaflet.create_point = function(marker, lMap) {

    // Follow create_point() in leaflet.drupal.js
    var latLng = new L.LatLng(marker.lat, marker.lon);
    latLng = latLng.wrap();
    lMap.bounds.push(latLng);

    var options = { title: marker.tooltip, riseOnHover: true };
    if (marker.zIndex) {
      options.zIndexOffset = marker.zIndex;
    }
    if (marker.regions) {
      options.regions = marker.regions;
    }
    if (marker.aggregationValue) {
      options.aggregationValue = marker.aggregationValue;
    }

    if (!marker.tag) {
      // Handle cases where no tag is required and icon is default or none.
      if (marker.icon === false) {
        // No marker. Need to create an icon "stub" or we'll have no map at all!
        options.icon = new L.Icon({iconUrl: '//'});
        return new L.Marker(latLng, options);
      }
      if (!marker.icon) {
        // Marker with default img, without tag.
        // Note: marker.specialChar cannot be handled in this case and is ignored.
        return new L.Marker(latLng, options);
      }
    }
    if (marker.icon === false) {
      // Marker without img, but with tag. marker.specialChar does not apply.
      var divIcon = new L.DivIcon({html: marker.tag, className: marker.cssClass});
      // Prevent div style tag being set, so that upper left corner becomes anchor.
      divIcon.options.iconSize = null;
      options.icon = divIcon;
      return new L.Marker(latLng, options);
    }

    if (marker.tag && !marker.icon) {
      // Use default img, custom tag the marker.
      options.icon = new L.Icon.Tagged(marker.tag, marker.specialChar, {className: marker.cssClass, specialCharClass: marker.special_char_class});
      return new L.Marker(latLng, options);
    }
    // Custom img and custom tag or specialChar.
    var icon = marker.tag || marker.specialChar || marker.specialCharClass
      ? new L.Icon.Tagged(marker.tag, marker.specialChar, {iconUrl: marker.icon.iconUrl, className: marker.cssClass, specialCharClass: marker.specialCharClass})
      : new L.Icon({iconUrl: marker.icon.iconUrl});

    // All of this is like create_point() in leaflet.drupal.js, but with tooltip.
    if (marker.icon.iconSize) {
      icon.options.iconSize = new L.Point(parseInt(marker.icon.iconSize.x), parseInt(marker.icon.iconSize.y));
    }
    if (marker.icon.iconAnchor) {
      icon.options.iconAnchor = new L.Point(parseFloat(marker.icon.iconAnchor.x), parseFloat(marker.icon.iconAnchor.y));
    }
    if (marker.icon.popupAnchor) {
      icon.options.popupAnchor = new L.Point(parseFloat(marker.icon.popupAnchor.x), parseFloat(marker.icon.popupAnchor.y));
    }
    if (marker.icon.shadowUrl !== undefined) {
      icon.options.shadowUrl = marker.icon.shadowUrl;
    }
    if (marker.icon.shadowSize) {
      icon.options.shadowSize = new L.Point(parseInt(marker.icon.shadowSize.x), parseInt(marker.icon.shadowSize.y));
    }
    if (marker.icon.shadowAnchor) {
      icon.options.shadowAnchor = new L.Point(parseInt(marker.icon.shadowAnchor.x), parseInt(marker.icon.shadowAnchor.y));
    }
    options.icon = icon;
    return new L.Marker(latLng, options);
  };

})(jQuery);

L.Icon.Tagged = L.Icon.extend({

  initialize: function (tag, specialChar, options) {
    L.Icon.prototype.initialize.apply(this, [options]);
    this._tag = tag;
    this._specialChar = specialChar;
  },

  // Create an icon as per normal, but wrap it in an outerdiv together with the tag.
  createIcon: function() {
    if (!this.options.iconUrl) {
      var iconDefault = new L.Icon.Default();
      this.options.iconUrl = iconDefault._getIconUrl('icon');
      this.options.iconSize = iconDefault.options.iconSize;
      this.options.iconAnchor = iconDefault.options.iconAnchor;
      // Does this work?
      this.options.popupAnchor = iconDefault.options.popupAnchor;
      this.options.shadowSize = iconDefault.options.shadowSize;
    }

    var outer = document.createElement('div');
    outer.setAttribute('class', 'leaflet-tagged-marker');
    // The order of appending img, div and i makes little difference.

    var img = this._createIcon('icon');
    outer.appendChild(img);

    if (this._specialChar || this.options.specialCharClass) {
      // Convention seems to be to use the i element.
      // Other elements like div and span work also, just make sure that
      // display:block is set implicitly or explicitly.
      var specialChar = document.createElement('i');
      specialChar.innerHTML = this._specialChar ? this._specialChar.trim() : '';
      if (this.options.specialCharClass) {
        specialChar.setAttribute('class', this.options.specialCharClass);
      }
      outer.appendChild(specialChar);
    }
    if (this._tag) {
      var tag = document.createElement('div');
      tag.innerHTML = this._tag;
      if (this.options.className) {
        tag.setAttribute('class', this.options.className);
      }
      outer.appendChild(tag);
    }

    return outer;
  },

  createShadow: function() {
    return this._createIcon('shadow');
  }
});
;
