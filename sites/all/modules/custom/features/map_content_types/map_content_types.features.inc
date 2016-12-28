<?php
/**
 * @file
 * map_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function map_content_types_node_info() {
  $items = array(
    'tour' => array(
      'name' => t('Tour'),
      'base' => 'node_content',
      'description' => t('Use this to add all of the details of a tour, including its location and description'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tour_region' => array(
      'name' => t('Tour Region'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
