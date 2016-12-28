(function ($) {
  
  $(document).bind('leaflet.map', function(event, map, lMap) {
	//Hide polygons on front page map after a certain zoom level
	var show_polygon_zoom = 10; // zoom level threshold for showing/hiding polygons
	var polygon_visible = true;
	function show_hide_polygon() {
	    var cur_zoom = lMap.getZoom();
	    if(polygon_visible && cur_zoom > show_polygon_zoom) {          
	        polygon_visible = false;
	        $( "div.leaflet-overlay-pane" ).css( "display", "none" );
	                     
	    }
	    else if(!polygon_visible && cur_zoom <= show_polygon_zoom) {           
	        polygon_visible = true;
	        $( "div.leaflet-overlay-pane" ).css( "display", "block" );
	                    
	    }
	}
	lMap.on('zoomend', show_hide_polygon);
	show_hide_polygon();
        
  });
    

})(jQuery);