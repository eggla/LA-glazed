<?php
/**
 * @file
 * Provide views data and handlers.
 */
/**
 * Implements hook_views_plugins().
 */
function glazed_gridstack_views_plugins() {
  $module_path = drupal_get_path('module', 'glazed_gridstack');
  return array(
    'style' => array(
      'glazed_gridstack_gridstack_plugin_style' => array(
        'title' => t('Glazed GridStack'),
        'help' => t('Glazed GridStack gridstack style'),
        'path' => $module_path . '/plugins/glazed_gridstack',
        'handler' => 'GlazedGridStackPluginStyle',
        'parent' => 'default',
        'theme' => 'glazed_gridstack_gridstack_plugin_style',
        'theme path' => $module_path . '/templates/glazed_gridstack',
        'theme file' => 'theme.inc',
        'uses row plugin' => TRUE,
        'uses grouping' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
    'row' => array(
      'glazed_gridstack_gridstack_plugin_rows' => array(
        'title' => t('Glazed GridStack'),
        'help' => t('Choose the fields to display in Glazed GridStack Style.'),
        'path' => $module_path . '/plugins/glazed_gridstack',
        'handler' => 'GlazedMagazineGridStackPluginRows',
        'theme' => 'glazed_gridstack_gridstack_plugin_rows',
        'theme path' => $module_path . '/templates/glazed_gridstack',
        'theme file' => 'theme.inc',
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}