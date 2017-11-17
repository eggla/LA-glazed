/**
 * @file
 * Some basic behaviors and utility functions for Views.
 */
(function ($) {

Drupal.Views = {};

/**
 * jQuery UI tabs, Views integration component
 */
Drupal.behaviors.viewsTabs = {
  attach: function (context) {
    if ($.viewsUi && $.viewsUi.tabs) {
      $('#views-tabset').once('views-processed').viewsTabs({
        selectedClass: 'active'
      });
    }

    $('a.views-remove-link').once('views-processed').click(function(event) {
      var id = $(this).attr('id').replace('views-remove-link-', '');
      $('#views-row-' + id).hide();
      $('#views-removed-' + id).attr('checked', true);
      event.preventDefault();
   });
  /**
    * Here is to handle display deletion
    * (checking in the hidden checkbox and hiding out the row)
    */
  $('a.display-remove-link')
    .addClass('display-processed')
    .click(function() {
      var id = $(this).attr('id').replace('display-remove-link-', '');
      $('#display-row-' + id).hide();
      $('#display-removed-' + id).attr('checked', true);
      return false;
  });
  }
};

/**
 * Helper function to parse a querystring.
 */
Drupal.Views.parseQueryString = function (query) {
  var args = {};
  var pos = query.indexOf('?');
  if (pos != -1) {
    query = query.substring(pos + 1);
  }
  var pairs = query.split('&');
  for(var i in pairs) {
    if (typeof(pairs[i]) == 'string') {
      var pair = pairs[i].split('=');
      // Ignore the 'q' path argument, if present.
      if (pair[0] != 'q' && pair[1]) {
        args[decodeURIComponent(pair[0].replace(/\+/g, ' '))] = decodeURIComponent(pair[1].replace(/\+/g, ' '));
      }
    }
  }
  return args;
};

/**
 * Helper function to return a view's arguments based on a path.
 */
Drupal.Views.parseViewArgs = function (href, viewPath) {
  var returnObj = {};
  var path = Drupal.Views.getPath(href);
  // Ensure we have a correct path.
  if (viewPath && path.substring(0, viewPath.length + 1) == viewPath + '/') {
    var args = decodeURIComponent(path.substring(viewPath.length + 1, path.length));
    returnObj.view_args = args;
    returnObj.view_path = path;
  }
  return returnObj;
};

/**
 * Strip off the protocol plus domain from an href.
 */
Drupal.Views.pathPortion = function (href) {
  // Remove e.g. http://example.com if present.
  var protocol = window.location.protocol;
  if (href.substring(0, protocol.length) == protocol) {
    // 2 is the length of the '//' that normally follows the protocol
    href = href.substring(href.indexOf('/', protocol.length + 2));
  }
  return href;
};

/**
 * Return the Drupal path portion of an href.
 */
Drupal.Views.getPath = function (href) {
  href = Drupal.Views.pathPortion(href);
  href = href.substring(Drupal.settings.basePath.length, href.length);
  // 3 is the length of the '?q=' added to the url without clean urls.
  if (href.substring(0, 3) == '?q=') {
    href = href.substring(3, href.length);
  }
  var chars = ['#', '?', '&'];
  for (i in chars) {
    if (href.indexOf(chars[i]) > -1) {
      href = href.substr(0, href.indexOf(chars[i]));
    }
  }
  return href;
};

})(jQuery);
;
(function ($) {

/**
 * A progressbar object. Initialized with the given id. Must be inserted into
 * the DOM afterwards through progressBar.element.
 *
 * method is the function which will perform the HTTP request to get the
 * progress bar state. Either "GET" or "POST".
 *
 * e.g. pb = new progressBar('myProgressBar');
 *      some_element.appendChild(pb.element);
 */
Drupal.progressBar = function (id, updateCallback, method, errorCallback) {
  var pb = this;
  this.id = id;
  this.method = method || 'GET';
  this.updateCallback = updateCallback;
  this.errorCallback = errorCallback;

  // The WAI-ARIA setting aria-live="polite" will announce changes after users
  // have completed their current activity and not interrupt the screen reader.
  this.element = $('<div class="progress" aria-live="polite"></div>').attr('id', id);
  this.element.html('<div class="bar"><div class="filled"></div></div>' +
                    '<div class="percentage"></div>' +
                    '<div class="message">&nbsp;</div>');
};

/**
 * Set the percentage and status message for the progressbar.
 */
Drupal.progressBar.prototype.setProgress = function (percentage, message) {
  if (percentage >= 0 && percentage <= 100) {
    $('div.filled', this.element).css('width', percentage + '%');
    $('div.percentage', this.element).html(percentage + '%');
  }
  $('div.message', this.element).html(message);
  if (this.updateCallback) {
    this.updateCallback(percentage, message, this);
  }
};

/**
 * Start monitoring progress via Ajax.
 */
Drupal.progressBar.prototype.startMonitoring = function (uri, delay) {
  this.delay = delay;
  this.uri = uri;
  this.sendPing();
};

/**
 * Stop monitoring progress via Ajax.
 */
Drupal.progressBar.prototype.stopMonitoring = function () {
  clearTimeout(this.timer);
  // This allows monitoring to be stopped from within the callback.
  this.uri = null;
};

/**
 * Request progress data from server.
 */
Drupal.progressBar.prototype.sendPing = function () {
  if (this.timer) {
    clearTimeout(this.timer);
  }
  if (this.uri) {
    var pb = this;
    // When doing a post request, you need non-null data. Otherwise a
    // HTTP 411 or HTTP 406 (with Apache mod_security) error may result.
    $.ajax({
      type: this.method,
      url: this.uri,
      data: '',
      dataType: 'json',
      success: function (progress) {
        // Display errors.
        if (progress.status == 0) {
          pb.displayError(progress.data);
          return;
        }
        // Update display.
        pb.setProgress(progress.percentage, progress.message);
        // Schedule next timer.
        pb.timer = setTimeout(function () { pb.sendPing(); }, pb.delay);
      },
      error: function (xmlhttp) {
        pb.displayError(Drupal.ajaxError(xmlhttp, pb.uri));
      }
    });
  }
};

/**
 * Display errors on the page.
 */
Drupal.progressBar.prototype.displayError = function (string) {
  var error = $('<div class="messages error"></div>').html(string);
  $(this.element).before(error).hide();

  if (this.errorCallback) {
    this.errorCallback(this);
  }
};

})(jQuery);
;
/**
 * @file
 * Handles AJAX fetching of views, including filter submission and response.
 */
(function ($) {

/**
 * Attaches the AJAX behavior to Views exposed filter forms and key View links.
 */
Drupal.behaviors.ViewsAjaxView = {};
Drupal.behaviors.ViewsAjaxView.attach = function() {
  if (Drupal.settings && Drupal.settings.views && Drupal.settings.views.ajaxViews) {
    $.each(Drupal.settings.views.ajaxViews, function(i, settings) {
      Drupal.views.instances[i] = new Drupal.views.ajaxView(settings);
    });
  }
};

Drupal.views = {};
Drupal.views.instances = {};

/**
 * Javascript object for a certain view.
 */
Drupal.views.ajaxView = function(settings) {
  var selector = '.view-dom-id-' + settings.view_dom_id;
  this.$view = $(selector);

  // Retrieve the path to use for views' ajax.
  var ajax_path = Drupal.settings.views.ajax_path;

  // If there are multiple views this might've ended up showing up multiple times.
  if (ajax_path.constructor.toString().indexOf("Array") != -1) {
    ajax_path = ajax_path[0];
  }

  // Check if there are any GET parameters to send to views.
  var queryString = window.location.search || '';
  if (queryString !== '') {
    // Remove the question mark and Drupal path component if any.
    var queryString = queryString.slice(1).replace(/q=[^&]+&?|&?render=[^&]+/, '');
    if (queryString !== '') {
      // If there is a '?' in ajax_path, clean url are on and & should be used to add parameters.
      queryString = ((/\?/.test(ajax_path)) ? '&' : '?') + queryString;
    }
  }

  this.element_settings = {
    url: ajax_path + queryString,
    submit: settings,
    setClick: true,
    event: 'click',
    selector: selector,
    progress: { type: 'throbber' }
  };

  this.settings = settings;

  // Add the ajax to exposed forms.
  this.$exposed_form = $('#views-exposed-form-'+ settings.view_name.replace(/_/g, '-') + '-' + settings.view_display_id.replace(/_/g, '-'));
  this.$exposed_form.once(jQuery.proxy(this.attachExposedFormAjax, this));

  // Add the ajax to pagers.
  this.$view
    // Don't attach to nested views. Doing so would attach multiple behaviors
    // to a given element.
    .filter(jQuery.proxy(this.filterNestedViews, this))
    .once(jQuery.proxy(this.attachPagerAjax, this));

  // Add a trigger to update this view specifically. In order to trigger a
  // refresh use the following code.
  //
  // @code
  // jQuery('.view-name').trigger('RefreshView');
  // @endcode
  // Add a trigger to update this view specifically.
  var self_settings = this.element_settings;
  self_settings.event = 'RefreshView';
  this.refreshViewAjax = new Drupal.ajax(this.selector, this.$view, self_settings);
};

Drupal.views.ajaxView.prototype.attachExposedFormAjax = function() {
  var button = $('input[type=submit], button[type=submit], input[type=image]', this.$exposed_form);
  button = button[0];

  this.exposedFormAjax = new Drupal.ajax($(button).attr('id'), button, this.element_settings);
};

Drupal.views.ajaxView.prototype.filterNestedViews= function() {
  // If there is at least one parent with a view class, this view
  // is nested (e.g., an attachment). Bail.
  return !this.$view.parents('.view').size();
};

/**
 * Attach the ajax behavior to each link.
 */
Drupal.views.ajaxView.prototype.attachPagerAjax = function() {
  this.$view.find('ul.pager > li > a, th.views-field a, .attachment .views-summary a')
  .each(jQuery.proxy(this.attachPagerLinkAjax, this));
};

/**
 * Attach the ajax behavior to a singe link.
 */
Drupal.views.ajaxView.prototype.attachPagerLinkAjax = function(id, link) {
  var $link = $(link);
  var viewData = {};
  var href = $link.attr('href');
  // Construct an object using the settings defaults and then overriding
  // with data specific to the link.
  $.extend(
    viewData,
    this.settings,
    Drupal.Views.parseQueryString(href),
    // Extract argument data from the URL.
    Drupal.Views.parseViewArgs(href, this.settings.view_base_path)
  );

  // For anchor tags, these will go to the target of the anchor rather
  // than the usual location.
  $.extend(viewData, Drupal.Views.parseViewArgs(href, this.settings.view_base_path));

  this.element_settings.submit = viewData;
  this.pagerAjax = new Drupal.ajax(false, $link, this.element_settings);
};

Drupal.ajax.prototype.commands.viewsScrollTop = function (ajax, response, status) {
  // Scroll to the top of the view. This will allow users
  // to browse newly loaded content after e.g. clicking a pager
  // link.
  var offset = $(response.selector).offset();
  // We can't guarantee that the scrollable object should be
  // the body, as the view could be embedded in something
  // more complex such as a modal popup. Recurse up the DOM
  // and scroll the first element that has a non-zero top.
  var scrollTarget = response.selector;
  while ($(scrollTarget).scrollTop() == 0 && $(scrollTarget).parent()) {
    scrollTarget = $(scrollTarget).parent();
  }
  // Only scroll upward
  if (offset.top - 10 < $(scrollTarget).scrollTop()) {
    $(scrollTarget).animate({scrollTop: (offset.top - 10)}, 500);
  }
};

})(jQuery);
;

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
// Take advantage of Leaflet's Class idiom
L.Sync =  L.Class.extend({

	statics: {
    SYNC_CONTENT_TO_MARKER: 1 << 1,
    SYNC_MARKER_TO_CONTENT: 1 << 2,
    SYNC_MARKER_TO_CONTENT_WITH_POPUP: 1 << 3,

    SYNCED_CONTENT_HOVER: 'synced-content-hover',
    SYNCED_MARKER_HOVER : 'synced-marker-hover',
    SYNCED_MARKER_HIDDEN: 'leaflet-marker-hidden'
  },

  options: {
    // Maybe one day
	},

	initialize: function (map, options) {
    L.setOptions(this, options);
    this.map = map;
    this.lastMarker = null;
	},

  closePopup: function(marker) {
    if (marker && marker.closePopup) {
      marker.closePopup();
    }
  },

  hide: function(marker) {
    // Not marker.setOpacity(0) to avoid interference with leaflet.markercluster
    this.addClass(marker, L.Sync.SYNCED_MARKER_HIDDEN);
    if (marker === this.lastMarker) {
      this.lastMarker = null;
    }
  },

  hideIfAddedViaSync: function(marker) {
    if (marker) {
      this.unhighlight(marker);
      if (marker && marker.addedViaSync) {
        this.hide(marker);
      }
    }
  },

  show: function(marker) {
    // Not marker.setOpacity(1) to avoid interference with leaflet.markercluster
    this.removeClass(marker, L.Sync.SYNCED_MARKER_HIDDEN);
  },

  highlight: function(marker) {
    this.addClass(marker, L.Sync.SYNCED_CONTENT_HOVER);
  },

  unhighlight: function(marker) {
    this.removeClass(marker, L.Sync.SYNCED_CONTENT_HOVER);
  },

  syncContentToMarker: function(contentSelector, marker) {
    marker.on('mouseover', function(event) {
      jQuery(contentSelector).addClass(L.Sync.SYNCED_MARKER_HOVER);
    });
    marker.on('mouseout', function(event) {
      jQuery(contentSelector).removeClass(L.Sync.SYNCED_MARKER_HOVER);
    });
  },

  syncMarkerToContent: function(contentSelector, marker) {
    var sync = this;

    marker.on('popupclose', function(event) {
      var marker = event.target;
      if (marker === sync.lastMarker) {
        if (marker._icon && (marker.flags & L.Sync.SYNC_MARKER_TO_CONTENT_WITH_POPUP)) {
          marker._popup.options.offset.y = sync.popupOffsetY;
        }
        sync.unhighlight(marker);
        //sync.hideIfAddedViaSync(marker);
        sync.lastMarker = null;
      }
    });
    
    // Using bind() as D7 core's jQuery is old and does not support on()
 jQuery(contentSelector).bind('click', function(event, map, lMap) {
    //make sure to pass contentSelector here
	sync.handleContentMouseOver(contentSelector, marker);
       //	move marker to bottom of map to allow space for popup
         

  });
    

  },
  	
	//and pass contentSelector here
  handleContentMouseOver: function(contentSelector, marker) {
  //add variable to set zoom level and speed for flyTo animation
    var zoomnumber = jQuery(contentSelector).find('.field-zoom-level').text();
    
		if (zoomnumber == 0) {
			var zoomfly = 10;
		}
		else {
			var zoomfly = zoomnumber;
		}
    	
    //add variable to set fly speed for flyTo animation
	var speednumber = jQuery(contentSelector).find('.field-fly-speed').text();
		
		if (speednumber == 0) {
			var speedfly = 3;
		}
		else {
			var speedfly = speednumber;
		}
    if (marker === null || marker === this.lastMarker) {
      return;
    }
	
    this.hideIfAddedViaSync(this.lastMarker);

    var addedViaSync = !marker._map || !marker.options.opacity;
    if (!marker._map) {
      marker.addTo(this.map);
    }

    marker.addedViaSync = addedViaSync || marker.addedViaSync;
    


    var point = marker.getLatLngs ? marker.getLatLngs()[2] : marker.getLatLng();
    this.map.flyTo(point, zoomfly, {
		animate: true,
        easeLinearity: 0.1,
        duration: speedfly // in seconds
    }); 
    //adjust map so markers appear closer to bottom of screen, allowing room for popups    
    this.map.once('zoomend', function(event, point) {
    	this.setZoom(zoomfly);
    	this.once('zoomend', function(event) {
    		this.panBy([0, -100]);
    	});
        marker.openPopup();
//        popupcontent = marker._popup.getContent();
//        alert(popupcontent);
    });
    // Make geometry visible, in case it was hidden.
    
    this.show(marker);
    this.highlight(marker);

    if (marker.flags & L.Sync.SYNC_MARKER_TO_CONTENT_WITH_POPUP) {
      if (marker._icon) {
        // Adjust popup position for markers, not other geometries.
        if (!this.popupOffsetY) {
          this.popupOffsetY = marker._popup.options.offset.y;
        }
        marker._popup.options.offset.y = this.popupOffsetY - 20;
      }
    }
    if (marker._icon && marker._icon.style) {
      // This does NOT work in most browsers.
      marker._bringToFront();
      marker.setZIndexOffset(9999);
    }
    this.lastMarker = marker;

  },
  
  addClass: function(marker, className) {
    var elements = this.getMarkerElements(marker);
    for (var i = 0; i < elements.length; i++) {
      L.DomUtil.addClass(elements[i], className);
    }
  },

  removeClass: function(marker, className) {
    var elements = this.getMarkerElements(marker);
    for (var i = 0; i < elements.length; i++) {
      L.DomUtil.removeClass(elements[i], className);
    }
  },

  markerClusterGroup: function() {
    for (var id in this.map._layers) {
      if (this.map._layers[id]._topClusterLevel) {
        return this.map._layers[id];
      }
    }
    return null;
  },

  getMarkersInClusters: function() {
    var markerClusterGroup = this.markerClusterGroup();
    return markerClusterGroup ? markerClusterGroup._topClusterLevel.getAllChildMarkers() : [];
  },

  getMarkerElements: function(marker) {
    var elements = [];
    if (marker) {
      if (marker._icon) {
        elements.push(marker._icon);
      }
      if (marker._container) {
        elements.push(marker._container);
      }
      if (marker._layers) {
        for (var key in marker._layers) elements.push(marker._layers[key]._container);
      }
    }
    return elements;
  }
});

// Gets triggered before 'leaflet.map'. Extend marker data for further use.
jQuery(document).bind('leaflet.feature', function(event, marker, feature) {
  // marker is the feature just added to the map, it could be a polygon too.
  // feature.feature_id is the node ID, as set by ip_geoloc_plugin_style_leaflet.inc
  if (feature.feature_id) {
    marker.feature_id = feature.feature_id;
  }
  if (feature.flags) {
    marker.flags = feature.flags;
  }
});

jQuery(document).bind('leaflet.map', function(event, map, lMap) {

  var sync = new L.Sync(lMap, {});
  
  lMap.on('zoomend', function(event) {
    // To avoid interference with Leaflet's way of controlling visibility via
    // setOpacity(), we remove the special 'hidden' class on 'zoomend'.
    
    if (sync.lastMarker) {
      sync.show(sync.lastMarker);
      sync.lastMarker.addedViaSync = false;
    }
  });

  if (map.settings.revertLastMarkerOnMapOut) {
    lMap.on('mouseout', function(event) {
      if (sync.lastMarker) {
        sync.lastMarker.closePopup();
        sync.hideIfAddedViaSync(sync.lastMarker);
        sync.lastMarker = null;
      }
    });
  }

  var clusterMarkers = sync.getMarkersInClusters();
  // Convert lMap._layers to array before concatenating
  var otherMarkers = Object.keys(lMap._layers).map(function(key) { return lMap._layers[key]; });
  var allMarkers = clusterMarkers.concat(otherMarkers);

  for (var i = 0; i < allMarkers.length; i++) {
    var marker = allMarkers[i];
    if (marker.flags) {
      // A CSS class, not an ID as multiple markers may be attached to same node.
      var contentSelector = ".sync-id-" + marker.feature_id;

      if (marker.flags & L.Sync.SYNC_CONTENT_TO_MARKER) {
        sync.syncContentToMarker(contentSelector, marker);
      }
      if (marker.flags & L.Sync.SYNC_MARKER_TO_CONTENT) {
        sync.syncMarkerToContent(contentSelector, marker);
      }
      marker.on('add', function(event) {
        event.target.addedViaSync = false;
      });
      marker.on('remove', function(event) {
        event.target.addedViaSync = false;
      });
    }
  }

});
;
