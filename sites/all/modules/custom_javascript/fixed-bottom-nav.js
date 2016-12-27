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
})(jQuery);