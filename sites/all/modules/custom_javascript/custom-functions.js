(function($) {
	$(document).ready(function() {
		$('.text-reveal').click(function(e){
				e.preventDefault();

				$('.fade-text').removeClass('fade-text');
				$('.text-reveal').remove();
		});
	});
})(jQuery);