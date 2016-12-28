(function($) {

  $(document).bind('leaflet.map', function(event, map, lMap) {

    // See if this detects mobile browser. Use it to turn off touch panning.

//    if (Modernizr.touch) { 
//      alert('Touch Screen');
//    } else { 
//      alert('No Touch Screen');
//    }
    // Move zoom control to a new position

    lMap.zoomControl.setPosition('topright');        // Spiderfy Clusters on hover
    
    lMap.eachLayer(function(layer){     //iterate over map rather than clusters
     if (layer.getChildCount){         // if layer is markerCluster
	      layer.on('mouseover', function(e){
	          layer.spiderfy();
	          setTimeout(function() {
		          (function wait() {
		              if ($('.leaflet-marker-icon:hover').length == 0) {
		                layer.unspiderfy();
		              } else {
		              	setTimeout( wait, 3000 );
		              }
		          })();
	          }, 3000);
	      }); 
      }
    });
  });

})(jQuery);
