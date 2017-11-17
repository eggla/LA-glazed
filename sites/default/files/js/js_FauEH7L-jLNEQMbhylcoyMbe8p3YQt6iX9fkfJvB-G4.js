/**
 * @file
 * A JavaScript file that styles the page with bootstrap classes.
 *
 * @see sass/styles.scss for more info
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.cmsCore = {
  attach: function(context, settings) {
  	$('.node-blog.node-teaser .content:has(".field-blog-image")')
  		.wrapInner("<div class='row'></div>")
  		.find('.field-blog-image')
  		.addClass('col-sm-6').find('+.field-body')
  		.addClass('col-sm-6');
  }
};
})(jQuery, Drupal, this, this.document);
;
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
;
/**
 * @file
 * equalheights module javascript settings.
 */
(function($) {
  Drupal.behaviors.equalHeightsModule = {
    attach: function (context, settings) {
      if (Drupal.settings.equalHeightsModule) {
        var eqClass = Drupal.settings.equalHeightsModule.classes;
      }
      if (eqClass) {
        equalHeightsTrigger();
        $(window).bind('resize', function () {
          equalHeightsTrigger();
        });
      }
      function equalHeightsTrigger() {
        $.each(eqClass, function(eqClass, setting) {
          var target = $(setting.selector);
          var minHeight = setting.minheight;
          var maxHeight = setting.maxheight;
          var overflow = setting.overflow;
          target.css('height', '');
          target.css('overflow', '');

          // Disable equalheights not matching the mediaquery
          var mediaQuery = setting.mediaquery;
          var matchMedia = window.matchMedia;
          if (mediaQuery) {
            if (matchMedia && !matchMedia(mediaQuery).matches) {
                return;
              } else {
                equalHeightsLoad(target, minHeight, maxHeight, overflow);
              }
            } else {
              equalHeightsLoad(target,minHeight, maxHeight, overflow);
          }
        });
      }
      function equalHeightsLoad(target, minHeight, maxHeight, overflow) {
          // disable imagesloaded for IE<=8
          var imagesLoadedIE8 = Drupal.settings.equalHeightsModule.imagesloaded_ie8;
          if (imagesLoadedIE8 && window.attachEvent && !window.addEventListener) {
              target.equalHeights(minHeight, maxHeight).css('overflow', overflow);
          } else {
          // imagesloaded library checks if all images are loaded before callback
           target.imagesLoaded({
           callback: function($images, $proper, $broken) {
             this.equalHeights(minHeight, maxHeight).css('overflow', overflow)
           }
          });
          }
      }

    }
  }
})(jQuery);
;

/**
 * @file
 * Attaches the behaviors for the Scroll to Destination Anchors module.
 */

// Prevent script conflicts and attach the behavior.
(function($) {
  Drupal.behaviors.scrolltoanchors = {
    attach: function(context, settings) {

      // Wait until after the window has loaded.
      $(window).load(function(){

        // Utility to check if a string is a valid selector.
        function validateSelector(a) {
          return /^#[a-z]{1}[a-z0-9_-]*$/i.test(a);
        }

        // Utility to scroll users to particular destination on the page.
        function scrollToDestination(a, b) {
          if (a > b) {
            destination = b;
          } else {
            destination = a;
          }
          var movement = 'scroll mousedown DOMMouseScroll mousewheel keyup';
          $('html, body').animate({scrollTop: destination}, 500, 'swing').bind(movement, function(){
            $('html, body').stop();
          });
        }

        // When a user clicks on a link that starts with a hashtag.
        $('a[href^="#"]', context).click(function(event) {

          // Store important values.
          var hrefValue = $(this).attr('href');
          var strippedHref = hrefValue.replace('#','');
          var heightDifference = $(document).height() - $(window).height();

          // Make sure that the link value is a valid selector.
          if (validateSelector(hrefValue)) {

            // Scroll users if there is an element with a corresponding id.
            if ($(hrefValue).length > 0) {
              var linkOffset = $(this.hash).offset().top;
              scrollToDestination(linkOffset, heightDifference);
            }

            // Scroll users if there is a link with a corresponding name.
            else if ($('a[name=' + strippedHref + ']').length > 0) {
              var linkOffset = $('a[name=' + strippedHref + ']').offset().top;
              scrollToDestination(linkOffset, heightDifference);
            }

            // Add the href value to the URL.
            document.location.hash = strippedHref;

          }

          // Prevent the event's default behavior.
          event.preventDefault();

        });

      });

    }
  };
}(jQuery));
;
