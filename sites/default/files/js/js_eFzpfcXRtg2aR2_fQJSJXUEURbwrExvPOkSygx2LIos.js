
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
/*
 * We are overriding a large part of the JS defined in leaflet (leaflet.drupal.js).
 * Not nice, but we can't do otherwise without refactoring code in Leaflet.
 */

(function ($) {

  var LEAFLET_MARKERCLUSTER_EXCLUDE_FROM_CLUSTER = 0x01;

  Drupal.behaviors.leaflet = { // overrides same behavior in leaflet/leaflet.drupal.js
    attach: function(context, settings) {
      var start = (new Date()).getTime();

      $(settings.leaflet).each(function () {
        // skip to the next iteration if the map already exists
        var container = L.DomUtil.get(this.mapId);
        if (!container || container._leaflet) {
          return false;
        }

        // load a settings object with all of our map settings
        var settings = {};
        for (var setting in this.map.settings) {
          settings[setting] = this.map.settings[setting];
        }

        // instantiate our new map
        var lMap = new L.Map(this.mapId, settings);
        lMap.bounds = [];

        // add map layers
        var layers = {}, overlays = {};
        var i = 0;
        for (var key in this.map.layers) {
          var layer = this.map.layers[key];
          var map_layer = Drupal.leaflet.create_layer(layer, key);

          layers[key] = map_layer;

          // keep the reference of first layer
          // Distinguish between "base layers" and "overlays", fallback to "base"
          // in case "layer_type" has not been defined in hook_leaflet_map_info()
          layer.layer_type = (typeof layer.layer_type === 'undefined') ? 'base' : layer.layer_type;
          // as written in the doc (http://leafletjs.com/examples/layers-control.html)
          // Always add overlays layers when instantiate, and keep track of
          // them for Control.Layers.
          // Only add the very first "base layer" when instantiating the map
          // if we have map controls enabled
          switch (layer.layer_type) {
            case 'overlay':
              lMap.addLayer(map_layer);
              overlays[key] = map_layer;
              break;
            default:
              if (i === 0 || !this.map.settings.layerControl) {
                lMap.addLayer(map_layer);
                i++;
              }
              layers[key] = map_layer;
              break;
          }
          i++;
        }
        // We loop through the layers once they have all been created to connect them to their switchlayer if necessary.
        var switchEnable = false;
        for (var key in layers) {
          if (layers[key].options.switchLayer) {
            layers[key].setSwitchLayer(layers[layers[key].options.switchLayer]);
            switchEnable = true;
          }
        }
        if (switchEnable) {
          switchManager = new SwitchLayerManager(lMap, {baseLayers: layers});
        }

        // keep an instance of leaflet layers
        this.map.lLayers = layers;

        // keep an instance of map_id
        this.map.map_id = this.mapId;

        // @RdB create marker cluster layers if leaflet.markercluster.js is included
        // There will be one cluster layer for each "clusterGroup".
        var clusterLayers = {};
        if (typeof L.MarkerClusterGroup !== 'undefined') {

          // If we specified a custom cluster icon, use that.
          if (this.map.markercluster_icon) {
            var icon_settings = this.map.markercluster_icon;

            settings['iconCreateFunction'] = function(cluster) {
              var icon = new L.Icon({iconUrl: icon_settings.iconUrl});

              // override applicable marker defaults
              if (icon_settings.iconSize) {
                icon.options.iconSize = new L.Point(parseInt(icon_settings.iconSize.x), parseInt(icon_settings.iconSize.y));
              }
              if (icon_settings.iconAnchor) {
                icon.options.iconAnchor = new L.Point(parseFloat(icon_settings.iconAnchor.x), parseFloat(icon_settings.iconAnchor.y));
              }
              if (icon_settings.popupAnchor) {
                icon.options.popupAnchor = new L.Point(parseFloat(icon_settings.popupAnchor.x), parseFloat(icon_settings.popupAnchor.y));
              }
              if (icon_settings.shadowUrl !== undefined) {
                icon.options.shadowUrl = icon_settings.shadowUrl;
              }
              if (icon_settings.shadowSize) {
                icon.options.shadowSize = new L.Point(parseInt(icon_settings.shadowSize.x), parseInt(icon_settings.shadowSize.y));
              }
              if (icon_settings.shadowAnchor) {
                icon.options.shadowAnchor = new L.Point(parseInt(icon_settings.shadowAnchor.x), parseInt(icon_settings.shadowAnchor.y));
              }

              return icon;
            }
          }
        }

        // add features
        for (i = 0; i < this.features.length; i++) {
          var feature = this.features[i];
         
          var cluster = (feature.type === 'point') && (!feature.flags || !(feature.flags & LEAFLET_MARKERCLUSTER_EXCLUDE_FROM_CLUSTER));
          if (cluster) {
            var clusterGroup = feature.clusterGroup ? feature.clusterGroup : 'global';
            if (!clusterLayers[clusterGroup]) {
              // Note: only applicable settings will be used, remainder are ignored
              clusterLayers[clusterGroup] = new L.MarkerClusterGroup(settings);
              lMap.addLayer(clusterLayers[clusterGroup]);
            }
          }
          var lFeature;

          // dealing with a layer group
          if (feature.group) {
            var lGroup = new L.LayerGroup();
            for (var groupKey in feature.features) {
              var groupFeature = feature.features[groupKey];
              lFeature = leaflet_create_feature(groupFeature, lMap);
              lFeature.options.regions = feature.regions;
              if (groupFeature.popup) {
                lFeature.bindPopup(groupFeature.popup);
              }
              lGroup.addLayer(lFeature);
            }

            // add the group to the layer switcher
            overlays[feature.label] = lGroup;

            if (cluster && clusterLayers[clusterGroup])  {
              clusterLayers[clusterGroup].addLayer(lGroup);
            } else {
              lMap.addLayer(lGroup);
            }
          }
          else {
            lFeature = leaflet_create_feature(feature, lMap);
            // @RdB add to cluster layer if one is defined, else to map
            if (cluster && clusterLayers[clusterGroup]) {
              lFeature.options.regions = feature.regions;
              clusterLayers[clusterGroup].addLayer(lFeature);
            }
            else {
              lMap.addLayer(lFeature);
            }
            if (feature.popup) {
              lFeature.bindPopup(feature.popup/*, {autoPanPadding: L.point(25,25)}*/);
            }
          }

          // Allow others to do something with the feature that was just added to the map
          $(document).trigger('leaflet.feature', [lFeature, feature]);
        }

        // add layer switcher
        if (this.map.settings.layerControl) {
          lMap.addControl(new L.Control.Layers(layers, overlays));
        }

        // center the map
        var zoom = this.map.settings.zoom ? this.map.settings.zoom : this.map.settings.zoomDefault;
        if (this.map.center && (this.map.center.force || this.features.length === 0)) {
          lMap.setView(new L.LatLng(this.map.center.lat, this.map.center.lon), zoom);
        }
        else if (this.features.length > 0) {
          Drupal.leaflet.fitbounds(lMap);
          if (this.map.settings.zoom) { // or: if (zoom) ?
            lMap.setZoom(zoom);
          }
        }

        // associate the center and zoom level proprerties to the built lMap.
        // useful for post-interaction with it
        lMap.center = lMap.getCenter();
        lMap.zoom = lMap.getZoom();

        // add attribution
        if (this.map.settings.attributionControl && this.map.attribution) {
          lMap.attributionControl.setPrefix(this.map.attribution.prefix);
          lMap.attributionControl.addAttribution(this.map.attribution.text);
        }

        // add the leaflet map to our settings object to make it accessible
        this.lMap = lMap;

        // allow other modules to get access to the map object using jQuery's trigger method
        $(document).trigger('leaflet.map', [this.map, lMap]);

        // Destroy features so that an AJAX reload does not get parts of the old set.
        // Required when the View has "Use AJAX" set to Yes.
        this.features = null;
      });

      function leaflet_create_feature(feature, lMap) {
        var lFeature;
        switch (feature.type) {
          case 'point':
            lFeature = Drupal.leaflet.create_point(feature, lMap);
            break;
          case 'linestring':
            lFeature = Drupal.leaflet.create_linestring(feature, lMap);
            break;
          case 'polygon':
            lFeature = Drupal.leaflet.create_polygon(feature, lMap);
            break;
          case 'multipolygon':
          case 'multipolyline':
            lFeature = Drupal.leaflet.create_multipoly(feature, lMap);
            break;
          case 'json':
            lFeature = Drupal.leaflet.create_json(feature.json, lMap);
            break;
          case 'popup':
            lFeature = Drupal.leaflet.create_popup(feature, lMap);
            break;
          case 'circle':
            lFeature = Drupal.leaflet.create_circle(feature, lMap);
            break;
        }

        // assign our given unique ID, useful for associating nodes
        if (feature.leaflet_id) {
          lFeature._leaflet_id = feature.leaflet_id;
        }

        var options = {};
        if (feature.options) {
          for (var option in feature.options) {
            options[option] = feature.options[option];
          }
          lFeature.setStyle(options);
        }
        return lFeature;
      }

      if (console) {
        //var renderTime = (new Date()).getTime() - start;
        //console.log('leaflet_markercluster.drupal.js render time: ' + renderTime/1000 + ' s');
      }
    }
  };

})(jQuery);
;
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
