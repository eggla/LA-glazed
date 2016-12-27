(function($) {
	$(document).bind('leaflet.map', function(event, map, lMap) {
		//  Check to see if there is anything on the page that has the class 'hide-shapes' (usually added to a map view)
			if ($('[class*=hide-shapes]')[0]) {
				//Hide polygons on front page map after a certain zoom level
				var show_polygon_zoom = 10; // zoom level threshold for showing/hiding polygons
				var polygon_visible = true;

				function show_hide_polygon() {
					var cur_zoom = lMap.getZoom();
					if (polygon_visible && cur_zoom > show_polygon_zoom) {
						polygon_visible = false;
						$("div.leaflet-overlay-pane").css("display", "none");
					} else if (!polygon_visible && cur_zoom <= show_polygon_zoom) {
						polygon_visible = true;
						$("div.leaflet-overlay-pane").css("display", "block");
					}
				}
				lMap.on('zoomend', show_hide_polygon);
				show_hide_polygon();
				//Show points on front page map after a certain zoom level
				var show_points_zoom = 10;
				var points_visible = true;

				function show_hide_points() {
					var cur_zoom = lMap.getZoom();
					if (points_visible && cur_zoom < show_points_zoom) {
						points_visible = false;
						$("div.leaflet-marker-pane").css("display", "none");
					} else if (!points_visible && cur_zoom >= show_points_zoom) {
						points_visible = true;
						$("div.leaflet-marker-pane").css("display", "block");
					}
				}
				lMap.on('zoomend', show_hide_points);
				show_hide_points();
				lMap.on('zoomend', show_hide_polygon);
				show_hide_polygon();
				//Show tags on front page map after a certain zoom level
				var show_tags_zoom = 11;
				var tags_visible = true;

				function show_hide_tags() {
					var cur_zoom = lMap.getZoom();
					if (tags_visible && cur_zoom < show_tags_zoom) {
						tags_visible = false;
						$(".tags p").css("display", "none");
					} else if (!tags_visible && cur_zoom >= show_tags_zoom) {
						tags_visible = true;
						$(".tags p").css("display", "block");
					}
				}
				lMap.on('zoomend', show_hide_tags);
				show_hide_tags();

				function hide_region_tags() {
					var tags = [];
					// Identify the master values.
					$('.tags p').each(function() {
						if ($(this).text() == 'Aialik Bay' || $(this).text() == 'Bear Glacier' || $(this).text() == 'Northwestern Fjords' || $(this).text() == 'Resurrection Bay West') {
							$(this).css("display", "none");
						}
					});
				}
				lMap.on('zoomend', hide_region_tags);
				
			}
	});
})(jQuery);