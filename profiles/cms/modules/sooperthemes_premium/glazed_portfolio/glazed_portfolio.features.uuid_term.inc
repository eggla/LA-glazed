<?php
/**
 * @file
 * glazed_portfolio.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function glazed_portfolio_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Print design',
    'description' => '<p>Print design desc</p>',
    'format' => 'wysiwyg_simple',
    'weight' => 0,
    'uuid' => '2020ba32-3910-41ba-ab55-f688cb8984ee',
    'vocabulary_machine_name' => 'md_taxonomy_portfolio',
    'url_alias' => array(
      0 => array(
        'alias' => 'md-portfolio-taxonomy/print-design',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Typography',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '27db446d-edcd-47fe-a13e-7ee94963fd31',
    'vocabulary_machine_name' => 'md_taxonomy_portfolio',
    'url_alias' => array(
      0 => array(
        'alias' => 'md-portfolio-taxonomy/typography',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Photography',
    'description' => '<p>Photography desc</p>',
    'format' => 'wysiwyg_simple',
    'weight' => 0,
    'uuid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
    'vocabulary_machine_name' => 'md_taxonomy_portfolio',
    'url_alias' => array(
      0 => array(
        'alias' => 'md-portfolio-taxonomy/photography',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Branding',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cf638595-348f-4486-a34d-ecf7cb91b9c5',
    'vocabulary_machine_name' => 'md_taxonomy_portfolio',
    'url_alias' => array(
      0 => array(
        'alias' => 'md-portfolio-taxonomy/branding',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
