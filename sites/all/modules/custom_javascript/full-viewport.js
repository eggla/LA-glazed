(function($) {
	// Set a full-viewport container to the correct height    
	$(document).ready(function() {
		var topHeight = $(".page-title-full-width-container").outerHeight();

		function setHeight() {
			windowHeight = $(window).innerHeight() - topHeight;
			$('.full-viewport').css('min-height', windowHeight);
		};
		setHeight();
		$(window).resize(function() {
			setHeight();
		});
		
		//Overlay settings
		$("<div></div>").css({
			position: "absolute",
			width: "100%",
			height: "100%",
			top: 0,
			left: 0,
			background: "#000",
			"z-index": 0
			
		}).addClass("overlay-fade-in").appendTo($(".add-overlay-fade-in"));
		var target = $('.overlay-fade-in');
		var targetHeight = target.outerHeight();
		$(document).scroll(function(e) {
			var scrollPercent = (window.scrollY / targetHeight) * .8;
			if (scrollPercent >= 0) {
				target.css('opacity', scrollPercent);
			}
		});
		
		//Scrolling title position
		var topMargin = targetHeight / 3
		$(".block-js-center").css("top", topMargin);
	});
})(jQuery);



