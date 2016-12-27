(function ($) {
  Drupal.behaviors.initGridstack = {
    attach: function (context, settings) {
      var gridstackSelector = '.glazed-gridstack-gridstack-live';
      if ($(document).find(gridstackSelector + ' .grid-stack').length <= 0){
        return false;
      }
      var options = {
        'vertical_margin': 0,
        'static_grid': true,
      };
      $(gridstackSelector + ' .grid-stack').gridstack(options);
    }
  };
})(jQuery)
