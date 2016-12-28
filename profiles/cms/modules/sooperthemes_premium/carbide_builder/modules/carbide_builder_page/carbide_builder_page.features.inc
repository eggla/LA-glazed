<?php
/**
 * @file
 * carbide_builder_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function carbide_builder_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function carbide_builder_page_node_info() {
  $items = array(
    'cb_drag_drop_page' => array(
      'name' => t('Drag and Drop Page'),
      'base' => 'node_content',
      'description' => t('Page builder page with Carbide Builder frontend editing.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
