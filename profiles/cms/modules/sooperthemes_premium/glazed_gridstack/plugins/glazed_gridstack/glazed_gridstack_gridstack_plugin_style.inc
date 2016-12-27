<?php
/**
 * @file
 * Definition of glazed_gridstack_gridstack_plugin_style.
 */

/**
 * Class to define a style plugin handler.
 */
class GlazedGridStackPluginStyle extends views_plugin_style {
  /**
   * Definition.
   */
  public function option_definition() {
    $options = parent::option_definition();

    $initial_layout = '[{"x":0,"y":0,"width":6,"height":6},{"x":6,"y":0,"width":3,"height":6},{"x":9,"y":0,"width":3,"height":6}]';

    $options['gridstack_layout'] = array('default' => 'custom');
    $options['gridstack_items'] = array('default' => '3');
    $options['gridstack_gap'] = array('default' => '0');
    $options['gridstack_overlay'] = array('default' => 'dark');
    $options['gridstack_zoom'] = array('default' => 1);
    $options['gridstack_layout_data'] = array('default' => $initial_layout);
    return $options;
  }

  /**
   * Form.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['#prefix'] = '<div id="glazed-gridstack-grid-stack-admin">';
    $form['#sufix'] = '</div>';
    $form['gridstack_layout'] = array(
      '#type' => 'select',
      '#title' => t('Layout Presets'),
      '#options' => array(
        'custom' => t('Custom'),
        'example_1' => t('5 Items'),
        'example_2' => t('4 Items'),
        'example_3' => t('7 Items'),
      ),
      '#default_value' => $this->options['gridstack_layout'],
    );
    $form['gridstack_items'] = array(
      '#type' => 'textfield',
      '#title' => t('Number of items'),
      '#default_value' => $this->options['gridstack_items'],
      '#size' => 13,
    );
    $form['gridstack_overlay'] = array(
      '#type' => 'select',
      '#title' => t('Image overlay effect'),
      '#options' => array(
        '' => t('None'),
        'dark' => t('Dark'),
        'light' => t('Light'),
        'rainbow' => t('Rainbow'),
      ),
      '#default_value' => $this->options['gridstack_overlay'],
    );
    $form['more'] = array(
      '#type' => 'fieldset',
      '#title' => t('More settings'),
      '#collapsed' => TRUE,
      '#collapsible' => TRUE,
    );
    $form['gridstack_zoom'] = array(
      '#type' => 'checkbox',
      '#title' => t('Image zoom effect on hover'),
      '#default_value' => $this->options['gridstack_zoom'],
      '#fieldset' => 'more',
    );
    $form['gridstack_gap'] = array(
      '#type' => 'textfield',
      '#title' => t('Gap size'),
      '#default_value' => $this->options['gridstack_gap'],
      '#size' => 13,
      '#fieldset' => 'more',
    );
    $form['gridstack_items_mobile'] = array(
      '#type' => 'textfield',
      '#title' => t('Number of items in mobile view'),
      '#default_value' => $this->options['gridstack_items_mobile'],
      '#size' => 13,
      '#fieldset' => 'more',
    );
    $form['gridstack_layout_template'] = array(
      '#prefix' => '<h3>' . t('Modify layout (drag and drop)') . '</h3>',
      '#markup' => '<div class="grid-stack"></div>',
    );
    $form['gridstack_layout_data'] = array(
      '#type' => 'textarea',
      '#title' => t('Custom layout data'),
      '#default_value' => $this->options['gridstack_layout_data'],
      '#description' => t('Define `media queries` for columns/rows layout in JSON format. As example you can see predefined layouts.'),
      '#fieldset' => 'more',
    );
    drupal_add_js(array(
      'glazedMagazine' => array(
        'layoutDataAdmin' => $form['gridstack_layout_data']['#default_value']),
      ), 'setting');
    drupal_add_js(drupal_get_path('module', 'glazed_gridstack') . '/js/glazed_gridstack_admin.js');
  }
}
