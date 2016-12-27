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
		  		  offset: '0'
		  		})
		  		$('[class*=sync-id]').click(function (){
				    activated = true;
				});
		  	}
	});
  
//FIXME need to adjust css for button text font size
    
})(jQuery);