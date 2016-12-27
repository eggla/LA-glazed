<?php
/**
 * @file
 * cms_portfolio.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cms_portfolio_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cms_portfolio_content_pane|node|portfolio|teaser';
  $field_group->group_name = 'group_cms_portfolio_content_pane';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_cms_portfolio_row';
  $field_group->data = array(
    'label' => 'Portfolio Listing Content Pane',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_portfolio_category',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Portfolio Listing Content Pane',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-cms-portfolio-content-pane col-sm-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cms_portfolio_content_pane|node|portfolio|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cms_portfolio_fields|node|portfolio|default';
  $field_group->group_name = 'group_cms_portfolio_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_cms_portfolio_top';
  $field_group->data = array(
    'label' => 'Portfolio Extra Fields',
    'weight' => '2',
    'children' => array(
      0 => 'field_cms_portfolio_client',
      1 => 'field_cms_portfolio_links',
      2 => 'field_cms_portoflio_custom',
      3 => 'field_portfolio_category',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Portfolio Extra Fields',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'cms-portfolio-extra clearfix',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cms_portfolio_fields|node|portfolio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cms_portfolio_fields|node|portfolio|form';
  $field_group->group_name = 'group_cms_portfolio_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Portfolio extra fields',
    'weight' => '6',
    'children' => array(
      0 => 'field_cms_portfolio_client',
      1 => 'field_cms_portfolio_links',
      2 => 'field_cms_portoflio_custom',
      3 => 'field_portfolio_category',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cms-portfolio-fields field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_cms_portfolio_fields|node|portfolio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cms_portfolio_row|node|portfolio|teaser';
  $field_group->group_name = 'group_cms_portfolio_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Portfolio Listing Row',
    'weight' => '0',
    'children' => array(
      0 => 'field_portfolio_images',
      1 => 'group_cms_portfolio_content_pane',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Portfolio Listing Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-cms-portfolio-row row glazed-util-no-spacer',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cms_portfolio_row|node|portfolio|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cms_portfolio_top|node|portfolio|default';
  $field_group->group_name = 'group_cms_portfolio_top';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top Fields',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'group_cms_portfolio_fields',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Top Fields',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'cms-portfolio-details',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cms_portfolio_top|node|portfolio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_compare|node|portfolio|form';
  $field_group->group_name = 'group_image_compare';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Compare',
    'weight' => '5',
    'children' => array(
      0 => 'field_comparison_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Image Compare',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-image-compare field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_image_compare|node|portfolio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_portfolio_images|node|portfolio|default';
  $field_group->group_name = 'group_portfolio_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Portfolio Images',
    'weight' => '1',
    'children' => array(
      0 => 'field_portfolio_images',
      1 => 'field_comparison_images',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Portfolio Images',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'cms-portfolio-images',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_portfolio_images|node|portfolio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_portfolio_settings|node|portfolio|form';
  $field_group->group_name = 'group_portfolio_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Portfolio Project Settings',
    'weight' => '10',
    'children' => array(
      0 => 'field_project_details_layout',
      1 => 'field_project_sidebar',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-portfolio-settings field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_portfolio_settings|node|portfolio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_images|node|portfolio|form';
  $field_group->group_name = 'group_project_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Images',
    'weight' => '2',
    'children' => array(
      0 => 'field_portfolio_images',
      1 => 'field_image_display_style',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-images field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_project_images|node|portfolio|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Image Compare');
  t('Portfolio Extra Fields');
  t('Portfolio Images');
  t('Portfolio Listing Content Pane');
  t('Portfolio Listing Row');
  t('Portfolio Project Settings');
  t('Portfolio extra fields');
  t('Project Images');
  t('Top Fields');

  return $field_groups;
}
