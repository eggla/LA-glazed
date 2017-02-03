(function ($) {
  
	$(document).bind('leaflet.map', function(event, map, lMap) {
		    var activated = false;
		  	if ($('[class*=sync-id]')[0]) {
		  		var firstControl = $('[class*=sync-id]')[0];
		  		var waypoints = $(firstControl).waypoint(function(direction) {
		  		  if (direction === 'down' && !activated) {
		  		  	firstControl.click();
		  		  	activated = true;
		  		  }
		  		   
		  		}, {
		  		  offset: '70'
		  		})
		  		$('[class*=sync-id]').click(function (){
				    activated = true;
				});
		  	}
		  	
		  	$('[class*=sync-id]').click(function (){
		  		$('[class*=sync-id]').removeClass("active");
		  		$(this).addClass("active");
			});
	});
  
//FIXME need to adjust css for button text font size
    
})(jQuery);