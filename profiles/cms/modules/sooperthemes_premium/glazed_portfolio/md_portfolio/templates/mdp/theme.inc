<?php

/**
 * Implementation of template preprocess for the view.
 */
function template_preprocess_md_portfolio_mdp_plugin_style(&$vars) {

  $options = $vars['options'];
  $view = $vars['view'];
  //check value default of options in plugin style
  $md_data = array('filter' => NULL, 'options' => NULL);

  if (!isset($options['md_style_flag']) || ($options['md_style_flag'] == NULL)) {
    $mdsp = new MDP_PORTFOLIO;
    $mdsp->view_input_style($view);
    $md_options_default = $mdsp->var_plugin_style();

    foreach ($md_options_default as $md_key => $md_value) {
      $options[$md_key] = $md_value;
    }
    $options['md_style_flag'] = 1;
  }


  if ($options['md_style_view']['filter_tax_id_field_name'] != '0') {
    $md_arg_temp = explode('/', $options['md_style_view']['filter_tax_id_field_name']);
    $options['md_style_view']['filter_default_tax_id'] = $md_arg_temp[0];
    $options['md_style_view']['filter_default_field'] = $md_arg_temp[1];
  }
  $term_filter = NULL;
  $mdsp_term = new MDP_LOADTERM;
  $term_filter_machine_name = taxonomy_vocabulary_machine_name_load($options['md_style_view']['filter_default_tax_id']);
  if ($term_filter_machine_name != NULL) {
    $term_filter = $mdsp_term->load_term($term_filter_machine_name->vid);
  }
  $md_random_div = rand(100, 999);
  $filter_content = '';
  if ($term_filter != NULL) {
    $vars['filter'] = array(
      'data' => $term_filter,
      'type' => $options['md_style_filter_type'],
      'filter_id' => 'mdp-filter-option-' . $md_random_div,
      'counter' => $options['md_style_filter_count'],
    );
    if ($options['md_style_filter_type'] == 'cbp-l-filters-dropdown')
      $vars['filter']['dropdown_header'] = $options['md_style_filter_dropdown_header'];
  }
  $md_data['options'] = $options;
  preg_match_all("/(\[(\d+),\s?(\d)])/", $options['md_style_mediaQueries'], $matches);
  $width = $matches[2];
  $column = $matches[3];
  $media_queries = array();
  foreach ($width as $key  => $value) {
    $media_queries[$key] = array(
      'width' => $width[$key],
      'cols' => $column[$key]
    );
  }
  $md_data['filter'] = $filter_content;
  $md_data['options']['md_style_view']['grid_div_id'] = 'mdp-grid-option-' . $md_random_div;
  $cube_options = array();
  $cube_options['filters'] = '#mdp-filter-option-' . $md_random_div;
  $cube_options['layoutMode'] = $options['md_style_layout_mode'];
  $cube_options['defaultFilter'] = '*';
  $cube_options['animationType'] = $options['md_style_animationType'];
  $cube_options['gapHorizontal'] = intval($options['md_style_gapHorizontal']);
  $cube_options['gapVertical'] = intval($options['md_style_gapVertical']);
  $cube_options['gridAdjustment'] = 'responsive';
  $cube_options['mediaQueries'] = $media_queries;
  $cube_options['caption'] = $options['md_style_caption'];
  $cube_options['displayType'] = $options['md_style_displayType'];
  $cube_options['displayTypeSpeed'] = $options['md_style_displayTypeSpeed'];
  $cube_options['lightboxDelegate'] = '.cbp-lightbox';
  $cube_options['lightboxGallery'] = true;
  $cube_options['lightboxTitleSrc'] = 'data-title';
  $cube_options['lightboxCounter'] = '<div class="cbp-popup-lightbox-counter">{{current}} of {{total}}</div>';
  $cube_options['singlePageInlinePosition'] = $options['inline_page_popup'];
  $cube_options['singlePageDeeplinking'] = false;
  $cube_options['singlePageStickyNavigation'] = false;
  $cube_options['singlePageCounter'] = '<div class="cbp-popup-singlePage-counter">{{current}} of {{total}}</div>';
  $cube_options['singlePageCallback'] = 'singlePageCallback';
  $cube_options['vname'] = $options['md_style_view']['vname'];
  $cube_options['display_id'] = $options['md_style_view']['display_id'];
  drupal_add_js(array(
    'mdPortfolio' => array(
      'mdp-grid-option-' . $md_random_div => $cube_options
    ),
  ), array('type' => 'setting'));

  $vars['md_data'] = $md_data;

  drupal_add_library('md_portfolio','md_portfolio_lib');
}

function template_preprocess_md_portfolio_mdp_plugin_rows(&$vars) {
  $view = $vars['view'];
  // Loop through the fields for this view.
  $previous_inline = FALSE;
  $md_fields = array(); // ensure it's at least an empty array.
  foreach ($view->field as $id => $field) {
    // render this even if set to exclude so it can be used elsewhere.
    $field_output = $view->style_plugin->get_field($view->row_index, $id);
    $empty = $field->is_value_empty($field_output, $field->options['empty_zero']);
    if (empty($field->options['exclude']) && (!$empty || (empty($field->options['hide_empty']) && empty($vars['options']['hide_empty'])))) {
      $object = new stdClass();
      $object->handler = &$view->field[$id];
      $object->inline = !empty($vars['options']['inline'][$id]);

      $object->element_type = $object->handler->element_type(TRUE, isset($vars['options']['default_field_elements']), $object->inline);
      if ($object->element_type) {
        $class = '';
        if ($object->handler->options['element_default_classes']) {
          $class = 'field-content';
        }

        if ($classes = $object->handler->element_classes($view->row_index)) {
          if ($class) {
            $class .= ' ';
          }
          $class .= $classes;
        }

        $pre = '<' . $object->element_type;
        if ($class) {
          $pre .= ' class="' . $class . '"';
        }
        if ($object->element_type != 'span') {
          $field_output = $pre . '>' . $field_output . '</' . $object->element_type . '>';
        }

      }

      // Protect ourself somewhat for backward compatibility. This will prevent
      // old templates from producing invalid HTML when no element type is selected.
      if (empty($object->element_type)) {
        $object->element_type = 'span';
      }

      $object->content = $field_output;
      if (isset($view->field[$id]->field_alias) && isset($vars['row']->{$view->field[$id]->field_alias})) {
        $object->raw = $vars['row']->{$view->field[$id]->field_alias};
      }
      else {
        $object->raw = NULL; // make sure it exists to reduce NOTICE
      }

      if (!empty($vars['options']['separator']) && $previous_inline && $object->inline && $object->content) {
        $object->separator = filter_xss_admin($vars['options']['separator']);
      }

      $object->class = drupal_clean_css_identifier($id);

      $previous_inline = $object->inline;
      $object->inline_html = $object->handler->element_wrapper_type(TRUE, TRUE);
      if ($object->inline_html === '' && (isset($vars['options']['default_field_elements']))) {
        $object->inline_html = $object->inline ? 'span' : 'div';
      }

      // Set up the wrapper HTML.
      $object->wrapper_prefix = '';
      $object->wrapper_suffix = '';

      if ($object->inline_html) {
        $class = '';
        if ($object->handler->options['element_default_classes']) {
          $class = "views-field views-field-" . $object->class;
        }

        if ($classes = $object->handler->element_wrapper_classes($view->row_index)) {
          if ($class) {
            $class .= ' ';
          }
          $class .= $classes;
        }
        $object->wrapper_prefix = '<' . $object->inline_html;
        if ($class) {
          $object->wrapper_prefix .= ' class="' . $class . '"';
        }
        $object->wrapper_prefix .= '>';
        $object->wrapper_suffix = '</' . $object->inline_html . '>';
      }

      // Set up the label for the value and the HTML to make it easier
      // on the template.
      $object->label = check_plain($view->field[$id]->label());
      $object->label_html = '';
      if ($object->label) {
        $object->label_html .= $object->label;
        if ($object->handler->options['element_label_colon']) {
          $object->label_html .= ': ';
        }

        $object->element_label_type = $object->handler->element_label_type(TRUE, isset($vars['options']['default_field_elements']));
        if ($object->element_label_type) {
          $class = '';
          if ($object->handler->options['element_default_classes']) {
            $class = 'views-label views-label-' . $object->class;
          }

          $element_label_class = $object->handler->element_label_classes($view->row_index);
          if ($element_label_class) {
            if ($class) {
              $class .= ' ';
            }

            $class .= $element_label_class;
          }

          $pre = '<' . $object->element_label_type;
          if ($class) {
            $pre .= ' class="' . $class . '"';
          }
          $pre .= '>';

          $object->label_html = $pre . $object->label_html . '</' . $object->element_label_type . '>';
        }
      }

      $md_field_render = '';
      if (!empty($object->separator)) {
        $md_field_render .= $object->separator;
      }

      $md_field_render .= $object->wrapper_prefix;
      $md_field_render .= $object->label_html;
      $md_field_render .= $object->content;
      $md_field_render .= $object->wrapper_suffix;

      $md_fields[$id] = $md_field_render;
    }
  }

  $md_data = array(
    'fields' => array(),
    'images' => array(),
    'data_filter' => '',
    'class_link' => '',
    'href' => '',
    'options' => array(),
    'row_style' => '',
    'md_level_height' => ''
  );
  $md_style = $view->style_plugin->options;
  if ((!isset($vars['options']['md_rows'])) || (count($vars['options']['md_rows']) != count($md_fields))) {
    // if field in row option != field list or do not exits md_rows
    foreach ($md_fields as $key => $value) {
      $md_data['fields'][$key]['display'] = 1;
      $md_data['fields'][$key]['content'] = $value;
    }
  }
  else {
    $md_options = $vars['options']['md_rows'];
    $md_node_view_mode = isset($md_style['md_style_view_node']) ? $md_style['md_style_view_node'] : 'full_page';

    if (count($md_options) != 0) {
      foreach ($md_options as $field_name => $field_options) {
        if (isset($md_fields[$field_name]) && ($field_options['flag'] == 1)) {
          //if exist field_name in options vs flag display = 1
          $md_data['fields'][$field_name]['display'] = 1;
          $md_data['fields'][$field_name]['content'] = $md_fields[$field_name];
        }
        if (count($field_options) > 2) {
          //when field is image
          $md_field_flag = $field_options['flag'];

          if (($md_field_flag == '0') || ($md_field_flag == '1')) {
            $md_field_flag = '0';
          }
          if ($md_field_flag != '0') {
            $image_url = $view->style_plugin->get_field_img_url($view->row_index, $field_name);
            $md_data['images'][$field_name]['url'] = $image_url['style'];
            if (count($field_options[$md_field_flag]['field_display']) != 0) {
              foreach ($field_options[$md_field_flag]['field_display'] as $field_img_display_name => $field_img_display_value) {
                if (($field_img_display_value == 1) && (isset($md_fields[$field_img_display_name]))) {
                  $md_data['images'][$field_name]['fields_display'][$field_img_display_name] = $md_fields[$field_img_display_name];
                }
              }
            }

            if ($md_field_flag == 'caption') {
              $md_data['class_link'] = $field_options['caption']['class_link'];
              if ($field_options['caption']['text'] != '') {
                $md_data['images'][$field_name]['fields_display']['0'] = $field_options['caption']['text'];
              }

              if($md_data['class_link'] == 'cbp-lightbox'){
                $md_data['href'] = ' href="'.$image_url['original'].'" ';
                $md_data['class_link'] .= ' mpd-cursor';
              }
              elseif ($md_data['class_link'] == 'none') {
                $md_data['href'] = '';
              }
              else {
                $md_data['class_link'] .= ' mpd-cursor';
                $md_load_content_url = url('md-portfolio/loadcontent/' . $md_node_view_mode . '/' . $vars['row']->nid);
                $md_data['href'] = ' href="' . $md_load_content_url . '" ';
              }
            }
            elseif ($md_field_flag == 'more') {
              $md_load_content_url = url('md-portfolio/loadcontent/' . $md_node_view_mode . '/' . $vars['row']->nid);
              if ($field_options['more']['full_page_flag'] == 1) {
                $md_data['images'][$field_name]['fields_display'][1] = '<a class="cbp-singlePage cbp-l-caption-buttonLeft" href="' . $md_load_content_url .'">' . $field_options['more']['full_page_text'] . '</a>';
              }
              if ($field_options['more']['inline_page_flag'] == 1) {
                $md_data['images'][$field_name]['fields_display'][2] = '<a class="cbp-singlePageInline cbp-l-caption-buttonLeft" href="' . $md_load_content_url . '">' . $field_options['more']['inline_page_text'] . '</a>';
              }
              if ($field_options['more']['caption_flag'] == 1) {
                $md_data['images'][$field_name]['fields_display'][0] = '<a class="cbp-lightbox cbp-l-caption-buttonRight" href="' . $image_url['original'] . '">' . $field_options['more']['caption_text'] . '</a>';
              }
            }
          }
        }
      }
    }
  }
  $md_index = $view->row_index;
  $results = $view->result;
  $options = isset($vars['options']['md_row']) ? $vars['options']['md_row'] : '';
  $md_result_row = $view->result[$md_index];
  $check_node_field_data = property_exists($md_result_row, '_field_data');
  if ($check_node_field_data) {
    if ($md_style['md_style_view']['filter_tax_id_field_name'] != '0') {
      $md_arg_temp = explode('/', $md_style['md_style_view']['filter_tax_id_field_name']);
      $md_style['md_style_view']['filter_default_tax_id'] = $md_arg_temp[0];
      $md_style['md_style_view']['filter_default_field'] = $md_arg_temp[1];
    }
    $filter_field = isset($md_style['md_style_view']['filter_default_field']) ? $md_style['md_style_view']['filter_default_field'] : NULL;
    if ($filter_field != NULL) {
      $entity = $results[$md_index]->_field_data['nid']['entity'];
      $filter_field_data = field_get_items('node', $entity, $filter_field, $entity->language);

      if (is_array($filter_field_data)) {
        foreach ($filter_field_data as $filter_field_data_key => $filter_field_data_value) {
          $md_data['data_filter'] .= ' filter-' . $filter_field_data_value['tid'];
        }
      }
    }
  }
  if (count($results) != 0) {
    $md_node_load = node_load($results[$md_index]->nid);
    $md_level_height_value = field_get_items('node', $md_node_load, 'field_mdp_height');
    if (($md_level_height_value != NULL) && (count($md_level_height_value) != 0)) {
      $md_data['md_level_height'] = 'mdp-level-height-' . $md_level_height_value[0]['value'];
    }
  }

  $md_data['options'] = $options;

  if (!isset($md_data['options']['md_row_height_flag'])) {
    $md_data['options']['md_row_height_flag'] = '1';
  }

  if (!isset($md_data['options']['md_row_height'])) {
    $md_data['options']['md_row_height'] = 300;
  }

  $wdt_json = drupal_json_encode($md_data['options']);
  drupal_add_js(array(
    'md_row' => $wdt_json,
  ), array('type' => 'setting'));

  if ($md_data['options']['md_row_height_flag'] == '0') {
    $row_style = 'style="height: ' . $md_data['options']['md_row_height'] . 'px;"';
  }
  else {
    $row_style = '';
  }

  $md_data['row_style'] = $row_style;

  $vars['md_data'] = $md_data;
}
