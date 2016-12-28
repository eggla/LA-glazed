<?php
/**
 * @file
 * Default view for list of Glazed GridStack Examples.
 */

/**
 * Implements hook_views_default_views().
 */
function glazed_gridstack_examples_views_default_views() {
  $views = array();

  // --- Paste exported view below ---

$view = new view();
$view->name = 'glazed_gridstack_examples';
$view->description = '';
$view->tag = 'gridstack';
$view->base_table = 'node';
$view->human_name = 'Glazed GridStack Examples';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Gridstack 5';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'glazed_gridstack_gridstack_plugin_style';
$handler->display->display_options['style_options']['gridstack_layout'] = 'example_1';
$handler->display->display_options['style_options']['gridstack_gap'] = '2';
$handler->display->display_options['style_options']['gridstack_layout_data'] = '[{"x":0,"y":0,"width":6,"height":8},{"x":6,"y":0,"width":3,"height":4},{"x":9,"y":0,"width":3,"height":4},{"x":6,"y":4,"width":3,"height":4},{"x":9,"y":4,"width":3,"height":4}]';
$handler->display->display_options['row_plugin'] = 'glazed_gridstack_gridstack_plugin_rows';
$handler->display->display_options['row_options']['image'] = 'field_blog_image';
$handler->display->display_options['row_options']['title'] = 'title';
$handler->display->display_options['row_options']['category'] = 'field_blog_category';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Blog Category */
$handler->display->display_options['fields']['field_blog_category']['id'] = 'field_blog_category';
$handler->display->display_options['fields']['field_blog_category']['table'] = 'field_data_field_blog_category';
$handler->display->display_options['fields']['field_blog_category']['field'] = 'field_blog_category';
$handler->display->display_options['fields']['field_blog_category']['label'] = '';
$handler->display->display_options['fields']['field_blog_category']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_blog_category']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_blog_category']['settings'] = array(
  'field_formatter_class' => '',
);
/* Field: Content: Image */
$handler->display->display_options['fields']['field_blog_image']['id'] = 'field_blog_image';
$handler->display->display_options['fields']['field_blog_image']['table'] = 'field_data_field_blog_image';
$handler->display->display_options['fields']['field_blog_image']['field'] = 'field_blog_image';
$handler->display->display_options['fields']['field_blog_image']['label'] = '';
$handler->display->display_options['fields']['field_blog_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_blog_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_blog_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_blog_image']['type'] = 'glazed_gridstack_formatter';
$handler->display->display_options['fields']['field_blog_image']['settings'] = array(
  'image_style' => '',
  'image_link' => 'content',
  'field_formatter_class' => '',
);
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
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'blog' => 'blog',
);

/* Display: Gridstack 5 */
$handler = $view->new_display('block', 'Gridstack 5', 'gridstack_5');

/* Display: Gridstack 4 */
$handler = $view->new_display('block', 'Gridstack 4', 'gridstack_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Gridstack 4';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'glazed_gridstack_gridstack_plugin_style';
$handler->display->display_options['style_options']['gridstack_layout'] = 'example_2';
$handler->display->display_options['style_options']['gridstack_gap'] = '2';
$handler->display->display_options['style_options']['gridstack_layout_data'] = '[{"x":6,"y":0,"width":6,"height":4},{"x":0,"y":0,"width":6,"height":8},{"x":6,"y":4,"width":3,"height":4},{"x":9,"y":4,"width":3,"height":4}]';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'glazed_gridstack_gridstack_plugin_rows';
$handler->display->display_options['row_options']['image'] = 'field_blog_image';
$handler->display->display_options['row_options']['title'] = 'title';
$handler->display->display_options['row_options']['category'] = 'field_blog_category';
$handler->display->display_options['defaults']['row_options'] = FALSE;

/* Display: GridStack 7 Rainbow */
$handler = $view->new_display('block', 'GridStack 7 Rainbow', 'gridstack_7');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'GridStack 7 Rainbow';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '7';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'glazed_gridstack_gridstack_plugin_style';
$handler->display->display_options['style_options']['gridstack_layout'] = 'example_3';
$handler->display->display_options['style_options']['gridstack_overlay'] = 'rainbow';
$handler->display->display_options['style_options']['gridstack_layout_data'] = '[{"x":0,"y":0,"width":4,"height":6},{"x":4,"y":0,"width":4,"height":3},{"x":8,"y":0,"width":4,"height":3},{"x":8,"y":3,"width":4,"height":6},{"x":4,"y":3,"width":4,"height":3},{"x":0,"y":6,"width":4,"height":3},{"x":4,"y":6,"width":4,"height":3}]';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'glazed_gridstack_gridstack_plugin_rows';
$handler->display->display_options['row_options']['image'] = 'field_blog_image';
$handler->display->display_options['row_options']['title'] = 'title';
$handler->display->display_options['row_options']['category'] = 'field_blog_category';
$handler->display->display_options['defaults']['row_options'] = FALSE;

/* Display: Gridstack 3 */
$handler = $view->new_display('block', 'Gridstack 3', 'gridstack_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Gridstack 3';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'glazed_gridstack_gridstack_plugin_style';
$handler->display->display_options['style_options']['gridstack_items'] = '3';
$handler->display->display_options['style_options']['gridstack_gap'] = '2';
$handler->display->display_options['style_options']['gridstack_layout_data'] = '[{"x":0,"y":0,"width":6,"height":6},{"x":6,"y":0,"width":3,"height":6},{"x":9,"y":0,"width":3,"height":6}]';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'glazed_gridstack_gridstack_plugin_rows';
$handler->display->display_options['row_options']['image'] = 'field_blog_image';
$handler->display->display_options['row_options']['title'] = 'title';
$handler->display->display_options['row_options']['category'] = 'field_blog_category';
$handler->display->display_options['defaults']['row_options'] = FALSE;


  // --- Paste exported view above ---

  $views[$view->name] = $view;

  return $views;
}
