<?php
/**
 * @file
 * Definition of glazed_gridstack_gridstack_plugin_rows.
 */

/**
 * Class to define a row plugin handler.
 */
class GlazedMagazineGridStackPluginRows extends views_plugin_row {
  /**
   * Definition.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['image'] = array('default' => '');
    $options['title'] = array('default' => '');
    $options['category'] = array('default' => '');
    return $options;
  }

  /**
   * Form.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Pre-build all of our option lists for the dials and switches that follow.
    $fields = array();
    foreach ($this->display->handler->get_handlers('field') as $field => $handler) {
      if ($label = $handler->label()) {
        $fields[$field] = $label;
      }
      else {
        $fields[$field] = $handler->ui_name();
      }
    }

    $form['image'] = array(
      '#type' => 'select',
      '#required' => TRUE,
      '#title' => t('Image'),
      '#options' => array('' => t('<None>')) + $fields,
      '#default_value' => $this->options['image'],
    );

    $form['title'] = array(
      '#type' => 'select',
      '#title' => t('Title'),
      '#options' => array('' => t('<None>')) + $fields,
      '#default_value' => $this->options['title'],
    );

    $form['category'] = array(
      '#type' => 'select',
      '#title' => t('Category'),
      '#options' => array('' => t('<None>')) + $fields,
      '#default_value' => $this->options['category'],
    );
  }
}
