<?php

/**
 * Implementation of template preprocess for the view.
 */
function template_preprocess_glazed_gridstack_gridstack_plugin_style(&$vars) {
  $view     = $vars['view'];
  $options  = $view->style_plugin->options;
  $layout_data = $options['gridstack_layout_data'];
  $vars['layout_data'] = drupal_json_decode($layout_data);
  if ($options['gridstack_overlay']) {
    $vars['classes_array'][] = 'glazed-gridstack--' . $options['gridstack_overlay'];
  }
  if ($options['gridstack_zoom']) {
    $vars['classes_array'][] = 'glazed-gridstack--zoom';
  }

  if (!empty($options['gridstack_gap'])) {
    $vars['gridstack_margin'] = 'style="margin: ' . round($options['gridstack_gap']/2, 2) . 'px"';
  }
  if (!empty($options['gridstack_items_mobile'])) {
    $vars['gridstack_items_mobile'] = $options['gridstack_items_mobile'] - 1; // -1 because $key counts from 0
  } else {
    $vars['gridstack_items_mobile'] = 2;
  }
  drupal_add_library('glazed_gridstack','glazed_gridstack_lib');
}

/**
 * Implementation of template preprocess for the view fields.
 */
function template_preprocess_glazed_gridstack_gridstack_plugin_rows(&$vars) {
  $view = &$vars['view'];

  foreach ($vars['options'] as $id => $field) {
    switch ($id) {
      case 'image':
      case 'title':
      case 'category':
        if (isset($view->field[$field])) {
          $fields = &drupal_static(__FUNCTION__);
          if (!isset($fields)) {
            $fields = $view->display_handler->get_option('fields');
          }
          $exclude = isset($fields[$field]['exclude']) ? $fields[$field]['exclude'] : FALSE;
          if (!$exclude) {
            $vars[$id] = $view->field[$field]->advanced_render($vars['row']);
          }
        }
        break;
    }
  }
}
