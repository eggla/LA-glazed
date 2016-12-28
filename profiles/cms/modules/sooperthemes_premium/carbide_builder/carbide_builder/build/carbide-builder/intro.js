(function($) {
  /**
   * Carbide Builder Drag and Drop Visual HTML & Drupal Editor by SooperThemes.
   *
   * Users Bootstrap framework together with Drupal and various 3rd party
   * libraries to give rich site building experience without coding
   *
   */

  /**
   * Enabling Ajax cache for ajax datatype script.
   */
  $.ajaxPrefilter(function(options, originalOptions, jqXHR) {
    if (options.dataType == 'script' || originalOptions.dataType == 'script') {
      options.cache = true;
    }
  });

  /**
   * Locale
   */
  function carbide_lang() {
    if ('carbide_lang' in window) {
      return window.carbide_lang;
    } else {
      return 'en';
    }
  }

  /**
   * Legacy setup stuff @todo document or remove.
   */
  if (!('carbide_baseurl' in window)) {
    if ($('script[src*="carbide_builder.js"]').length > 0) {
      var carbide_builder_src = $('script[src*="carbide_builder.js"]').attr('src');
      window.carbide_baseurl = carbide_builder_src.slice(0, carbide_builder_src.indexOf('carbide_builder.js'));
    }
    else {
      if ($('script[src*="carbide_builder.min.js"]').length > 0) {
        var carbide_builder_src = $('script[src*="carbide_builder.min.js"]').attr('src');
        window.carbide_baseurl = carbide_builder_src.slice(0, carbide_builder_src.indexOf('carbide_builder.min.js'));
      }
    }
  }
  if (!('carbide_online' in window))
    window.carbide_online = (window.location.protocol == 'http:' || window.location.protocol == 'https:');