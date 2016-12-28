(function($) {
  // PORTFOLIO NODES
  // @see cms_portfolio_field_group_pre_render
  Drupal.behaviors.cmsPortfolio = {
    attach: function(context, settings) {
      // If details on top or bottom, split details in 2 columns
      var sidebar = $('article.node-portfolio').data('sidebar');
      var main = $('article.node-portfolio').data('main');
      $('.node-portfolio.node-details-top .cms-portfolio-details,.node-portfolio.node-details-bottom .cms-portfolio-details')
        .once('cmsPortfolio')
        .addClass('row')
        .find('.cms-portfolio-content')
        .addClass('col-sm-' + main)
        .parent()
        .find('.cms-portfolio-extra')
        .addClass('col-sm-' + sidebar);


      // Project Details
      $('.node-portfolio.node-details-left,.node-portfolio.node-details-right')
        .once('cmsPortfolio')
        .find('.content')
        .addClass('row')
        .find('.cms-portfolio-details')
        .addClass('col-sm-' + sidebar)
        .parent()
        .find('.cms-portfolio-images')
        .addClass('col-sm-' + main);
      // Project Details
      $('.node-portfolio.node-details-left .cms-portfolio-extra,.node-portfolio.node-details-right .cms-portfolio-extra')
        .once('cmsPortfolio')
        .prepend('<hr>');

      // Project Images With Side Caption
      $('.node-portfolio.node-images-sidecaption .field-portfolio-images')
        .once('cmsPortfolio')
        .wrapInner("<div class='row'></div>")
        .find('img')
        .wrap('<div class="col-md-8">')
        .parent()
        .find('+ .image-field-caption')
        .wrap('<div class="col-md-4">');

      // Proejct Images As Gallery Grid
      $('.node-portfolio.node-images-grid .field-portfolio-images img').each(function( index ) {
        $(this).once('cmsPortfolio-gallery').wrap('<a class="ilightbox" data-type="image" href="' + this.src + '">');
      });
      $('.node-portfolio.node-images-grid .cms-portfolio-images')
        .once('cmsPortfolio-gallery')
        .wrapInner('<div class="row">')
        .find('.field-comparison-images')
        .addClass('col-sm-12');
      $('.node-portfolio.node-images-grid.node-details-top, .node-portfolio.node-images-grid.node-details-bottom')
        .once('cmsPortfolio-gallery')
        .find('.field-portfolio-images')
        .addClass('col-sm-3');
      $('.node-portfolio.node-images-grid.node-details-left, .node-portfolio.node-images-grid.node-details-right')
        .once('cmsPortfolio-gallery')
        .find('.field-portfolio-images')
        .addClass('col-sm-6');
    }
  };
  // Image Compare
  Drupal.behaviors.zurbTwentytwenty = {
      attach: function(context, settings) {
          // Create a selector object for all twenty twenty elements.
          var $selector = $('.twentytwenty-container', context).once('twentytwenty');
          if ($selector.length > 0) {
            $selector.once('cmsPortfolio-twentytwenty').twentytwenty({
                default_offset_pct: settings.zurbTwentytwenty.default_offset_pct
            });

          }
      }
  }
})(jQuery);
