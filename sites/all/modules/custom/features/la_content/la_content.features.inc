<?php
/**
 * @file
 * la_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function la_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function la_content_node_info() {
  $items = array(
    'panopoly_page' => array(
      'name' => t('LA Content Page'),
      'base' => 'node_content',
      'description' => t('Any new (post 2014) Content Pages should be added via this content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
