<?php
/**
 * @file
 * leaflet_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function leaflet_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front_page_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Page Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front Page Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_openlayers';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: leaflet block */
  $handler = $view->new_display('block', 'leaflet block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => '',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['map'] = 'leaflet-mapbox';
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
    'field_location' => 'field_location',
    'field_location_center' => 'field_location_center',
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['default_marker']['default_marker_color'] = 'kayaking';
  $handler->display->display_options['style_options']['visitor_marker']['visitor_marker_color'] = 'none';
  $handler->display->display_options['style_options']['visitor_marker']['visitor_marker_accuracy_circle'] = 0;
  $handler->display->display_options['style_options']['differentiator']['differentiator_field'] = 'field_activity_type';
  $handler->display->display_options['style_options']['center_option'] = '4';
  $handler->display->display_options['style_options']['tags']['tag_css_class'] = 'tag-below-marker';
  $handler->display->display_options['style_options']['sync']['2'] = 0;
  $handler->display->display_options['style_options']['sync']['4'] = 0;
  $handler->display->display_options['style_options']['sync']['8'] = 1;
  $handler->display->display_options['style_options']['sync']['16'] = 1;
  $handler->display->display_options['style_options']['full_screen'] = 0;
  $handler->display->display_options['style_options']['scale_metric'] = 0;
  $handler->display->display_options['style_options']['scale_imperial'] = 1;
  $handler->display->display_options['style_options']['zoom_indicator'] = 1;
  $handler->display->display_options['style_options']['open_balloons_on_click'] = 1;
  $handler->display->display_options['style_options']['open_balloons_on_hover'] = 0;
  $handler->display->display_options['style_options']['goto_content_on_click'] = 0;
  $handler->display->display_options['style_options']['map_reset'] = 1;
  $handler->display->display_options['style_options']['map_cluster_toggle'] = 0;
  $handler->display->display_options['style_options']['mini_map']['on'] = 0;
  $handler->display->display_options['style_options']['mini_map']['height'] = '100';
  $handler->display->display_options['style_options']['mini_map']['width'] = '150';
  $handler->display->display_options['style_options']['mini_map']['toggle'] = 1;
  $handler->display->display_options['style_options']['mini_map']['zoom_delta'] = '-5';
  $handler->display->display_options['style_options']['cluster_radius'] = '50';
  $handler->display->display_options['style_options']['disable_clustering_at_zoom'] = '11';
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_differentiator_fields'] = array(
    '' => '',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['zoom_ranges'] = array(
    1 => '',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_tooltips'] = 0;
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_outline'] = '0';
  $handler->display->display_options['style_options']['cluster_aggregation']['aggregation_function'] = 'average';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['small'] = '10';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['medium'] = '100';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['large'] = '1000';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '15';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '9';
  $handler->display->display_options['style_options']['map_options']['zoom_on_click'] = '11';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '0';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: relationship taxonomy term */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['ui_name'] = 'relationship taxonomy term';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'tour_area' => 'tour_area',
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 0,
  );
  /* Field: Content: Tour Operating Area */
  $handler->display->display_options['fields']['field_tour_operating_area']['id'] = 'field_tour_operating_area';
  $handler->display->display_options['fields']['field_tour_operating_area']['table'] = 'field_data_field_tour_operating_area';
  $handler->display->display_options['fields']['field_tour_operating_area']['field'] = 'field_tour_operating_area';
  $handler->display->display_options['fields']['field_tour_operating_area']['label'] = '';
  $handler->display->display_options['fields']['field_tour_operating_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tour_operating_area']['element_label_colon'] = FALSE;
  /* Field: Content: Activity Type */
  $handler->display->display_options['fields']['field_activity_type']['id'] = 'field_activity_type';
  $handler->display->display_options['fields']['field_activity_type']['table'] = 'field_data_field_activity_type';
  $handler->display->display_options['fields']['field_activity_type']['field'] = 'field_activity_type';
  $handler->display->display_options['fields']['field_activity_type']['label'] = '';
  $handler->display->display_options['fields']['field_activity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_type']['element_label_colon'] = FALSE;
  /* Field: Field: Map Area Polygon */
  $handler->display->display_options['fields']['field_location_center']['id'] = 'field_location_center';
  $handler->display->display_options['fields']['field_location_center']['table'] = 'field_data_field_location_center';
  $handler->display->display_options['fields']['field_location_center']['field'] = 'field_location_center';
  $handler->display->display_options['fields']['field_location_center']['label'] = '';
  $handler->display->display_options['fields']['field_location_center']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_center']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_center']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location_center']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_location_center']['delta_offset'] = '0';
  /* Field: Content: Permanent label on map */
  $handler->display->display_options['fields']['field_permanent_label_on_map']['id'] = 'field_permanent_label_on_map';
  $handler->display->display_options['fields']['field_permanent_label_on_map']['table'] = 'field_data_field_permanent_label_on_map';
  $handler->display->display_options['fields']['field_permanent_label_on_map']['field'] = 'field_permanent_label_on_map';
  $handler->display->display_options['fields']['field_permanent_label_on_map']['label'] = '';
  $handler->display->display_options['fields']['field_permanent_label_on_map']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_permanent_label_on_map']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_permanent_label_on_map']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tour' => 'tour',
    'tour_region' => 'tour_region',
  );
  $export['front_page_map'] = $view;

  return $export;
}
