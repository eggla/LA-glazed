(function() { var co=document.createElement("script"); co.type="text/javascript"; co.async=true; co.src="https://xola.com/checkout.js"; var s=document.getElementsByTagName("script")[0]; s.parentNode.insertBefore(co, s); })();;
(function(){
  function sortDrupalBehaviors() {
    var weights = {};
    for (var k in Drupal.behaviors) {
      var v = Drupal.behaviors[k];
      var pieces = k.split('.');
      if (pieces.length == 2 && pieces[1] === 'weight') {
        // This v is not a behavior, but a weight setting for another behavior.
        weights[pieces[0]] = v;
        delete Drupal.behaviors[k];
      }
      else if (typeof weights[k] != 'number') {
        // This v is a behavior object, but it might contain a weight setting.
        if (typeof v == 'object' && v && typeof v.weight == 'number') {
          weights[k] = v.weight;
        }
        else if (weights[k] == undefined) {
          weights[k] = false;
        }
      }
    }

    var ww = [0];
    var by_weight = {0: {}};
    for (var k in weights) {
      if (Drupal.behaviors[k] == undefined) {
        continue;
      }
      var w = weights[k];
      w = (typeof w == 'number') ? w : 0;
      if (by_weight[w] == undefined) {
        by_weight[w] = {};
        ww.push(w);
      }
      by_weight[w][k] = Drupal.behaviors[k];
    }
    ww.sort(function(a,b){return a - b;});

    // Other scripts that want to mess with behaviors, will only see those with weight = 0.
    Drupal.behaviors = by_weight[0];

    var sorted = [];
    for (var i = 0; i < ww.length; ++i) {
      var w = ww[i];
      sorted.push(by_weight[w]);
    }
    return sorted;
  }

  var attachBehaviors_original = Drupal.attachBehaviors;

  Drupal.attachBehaviors = function(context, settings) {
    var sorted = sortDrupalBehaviors();
    Drupal.attachBehaviors = function(context, settings) {
      context = context || document;
      settings = settings || Drupal.settings;
      // Execute all of them.
      for (var i = 0; i < sorted.length; ++i) {
        jQuery.each(sorted[i], function() {
          if (typeof this.attach == 'function') {
            this.attach(context, settings);
          }
        });
      }
    }
    Drupal.attachBehaviors.apply(this, [context, settings]);
  };

})();

;
// jQuery Scrollstop Plugin v1.2.0
// https://github.com/ssorallen/jquery-scrollstop

(function (factory) {
  // UMD[2] wrapper for jQuery plugins to work in AMD or in CommonJS.
  //
  // [2] https://github.com/umdjs/umd

  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['jquery'], factory);
  } else if (typeof exports === 'object') {
    // Node/CommonJS
    module.exports = factory(require('jquery'));
  } else {
    // Browser globals
    factory(jQuery);
  }
}(function ($) {
  // $.event.dispatch was undocumented and was deprecated in jQuery 1.7[1]. It
  // was replaced by $.event.handle in jQuery 1.9.
  //
  // Use the first of the available functions to support jQuery <1.8.
  //
  // [1] https://github.com/jquery/jquery-migrate/blob/master/src/event.js#L25
  var dispatch = $.event.dispatch || $.event.handle;

  var special = $.event.special,
      uid1 = 'D' + (+new Date()),
      uid2 = 'D' + (+new Date() + 1);

  special.scrollstart = {
    setup: function(data) {
      var _data = $.extend({
        latency: special.scrollstop.latency
      }, data);

      var timer,
          handler = function(evt) {
            var _self = this,
                _args = arguments;

            if (timer) {
              clearTimeout(timer);
            } else {
              evt.type = 'scrollstart';
              dispatch.apply(_self, _args);
            }

            timer = setTimeout(function() {
              timer = null;
            }, _data.latency);
          };

      $(this).bind('scroll', handler).data(uid1, handler);
    },
    teardown: function() {
      $(this).unbind('scroll', $(this).data(uid1));
    }
  };

  special.scrollstop = {
    latency: 250,
    setup: function(data) {
      var _data = $.extend({
        latency: special.scrollstop.latency
      }, data);

      var timer,
          handler = function(evt) {
            var _self = this,
                _args = arguments;

            if (timer) {
              clearTimeout(timer);
            }

            timer = setTimeout(function() {
              timer = null;
              evt.type = 'scrollstop';
              dispatch.apply(_self, _args);
            }, _data.latency);
          };

      $(this).bind('scroll', handler).data(uid2, handler);
    },
    teardown: function() {
      $(this).unbind('scroll', $(this).data(uid2));
    }
  };
}));;
(function($) {
	$(document).ready(function() {
		if ( $( "article").hasClass( "add-bottom-nav" ) ) {
		
			// 		Remove carbide class from footer because of z-index issue
			$("footer .carbide").removeClass("carbide");
			// 		Set up waypoint anchors and give them classes as they get triggered
			var bottomNav = $('.fixed-bottom-nav .container-fluid');
			var previousNav = $('.fixed-bottom-nav .previous-button');
			var nextNav = $('.fixed-bottom-nav .next-button');
			var anchors = $(".nav-anchor");
			anchors.eq(0).addClass("first-anchor current-anchor");
			anchors.eq(1).addClass("next-anchor");
			var otherAnchors = $('.nav-anchor');
			// 		This is for the first waypoint on the page. It's different because the offset is a different height due to the sticky nav
/*
			var waypoints = $(firstAnchor).waypoint(function(direction) {
				var previousWaypoint = this.previous();
				var nextWaypoint = this.next();
				anchors.removeClass('previous-anchor current-anchor next-anchor');
					$(this.element).addClass('current-anchor');
				if (previousWaypoint) {
					$(previousWaypoint.element).addClass('previous-anchor');
				}
	
					if (nextWaypoint) {
					$(nextWaypoint.element).addClass('next-anchor');
				}
	
			}, {
				group: "group-nav-anchor",
				offset: 'topHeight'
			});
*/
			// 		All other anchors
			otherAnchors.each(function() {
				var waypoints = $(this).waypoint(function(direction) {
					topHeight = $(".navbar").outerHeight();
					var previousWaypoint = this.previous();
					var nextWaypoint = this.next();
					anchors.removeClass('previous-anchor current-anchor next-anchor');
					$(this.element).addClass('current-anchor');
					if (previousWaypoint) {
						$(previousWaypoint.element).addClass('previous-anchor');
					}
					if (nextWaypoint) {
						$(nextWaypoint.element).addClass('next-anchor');
					}
				}, {
					group: "group-nav-anchor",
					offset: 61
				});
			});
	// 		Bottom Navigation Functions
			$(document).on("scrollstart", function() {
				bottomNav.stop(true).fadeTo("fast", 0.99);
			});
			$(document).on("scrollstop", function() {
				bottomNav.delay(1000).fadeTo("fast", 0.2);
			});
			bottomNav.hover(function() {
				$(this).stop(true).fadeTo("fast", 0.99);
			}, function() {
				$(this).fadeTo("fast", 0.2);
			});
	// 		Hide buttons contextually
			$(window).scroll(function() {
			   if($(window).scrollTop() == 0) {
			       $(".previous-button").css("display", "none");
			   }else {
				   $(".previous-button").css("display", "block");
			   }
			   if($(window).scrollTop() + $(window).height() >= $(document).height() - $('.glazed-footer').height()) {
			       $(".next-button").css("display", "none");
			   }else {
				   $(".next-button").css("display", "block");
			   }
			});
			previousNav.on("click", function() {
				// 			Test to see if the target anchor is the first
				if ($(".nav-anchor.previous-anchor").hasClass("first-anchor") || $(".nav-anchor.previous-anchor").length == 0) {
					$('html, body').animate({
						scrollTop: 0
					}, 1000);
				} else {

					$('html, body').animate({
						scrollTop: $(".nav-anchor.previous-anchor").offset().top - 62
					}, 1000);
				}
			});
			nextNav.on("click", function() {
				$('html, body').animate({
					scrollTop: $(".nav-anchor.next-anchor").offset().top - 60
				}, 1000);
			});
		}
	});
})(jQuery);;
(function($) {
	$(document).ready(function() {
		$('.text-reveal').click(function(e){
				e.preventDefault();

				$('.fade-text').removeClass('fade-text');
				$('.text-reveal').remove();
		});
	});
})(jQuery);;
