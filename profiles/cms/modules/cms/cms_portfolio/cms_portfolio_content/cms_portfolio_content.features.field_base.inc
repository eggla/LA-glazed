<?php
/**
 * @file
 * cms_portfolio_content.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function cms_portfolio_content_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_side_header_text_color'.
  $field_bases['field_side_header_text_color'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_side_header_text_color',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
