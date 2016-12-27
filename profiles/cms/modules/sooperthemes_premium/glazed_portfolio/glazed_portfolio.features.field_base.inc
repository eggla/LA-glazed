<?php
/**
 * @file
 * glazed_portfolio.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function glazed_portfolio_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_mdp_categories'
  $field_bases['field_mdp_categories'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mdp_categories',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'md_taxonomy_portfolio',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
