<?php

class MdPortfolioPluginStyle extends views_plugin_style {

  public function option_definition() {
    $options = parent::option_definition();
    $MDP = new MDP_PORTFOLIO();
    $mds_options_default = $MDP->var_plugin_style();
    //load options for mdsp when setting first
    if (!isset($options['md_style_flag'])) {
      foreach ($mds_options_default as $mds_key => $mds_value) {
        $options[$mds_key] = array('default' => $mds_value);
      }
    }
    return $options;
  }

  function options_form(&$form, &$form_state) {
    $view = $this->view;
    $MDP = new MDP_PORTFOLIO();
    $MDP->view_input_style($view);
    $mds_options_load = $MDP->var_plugin_style();

    //load options value with view
    if ($this->options['md_style_flag'] == '0') {//check flag == 0
      foreach ($mds_options_load as $mds_key => $mds_value) {
        $this->options[$mds_key] = $mds_value;
      }
      $this->options['md_style_flag'] = '1';
    }
      foreach ($mds_options_load['md_style_view'] as $temp_key => $temp_value) {
      if ($temp_key != 'filter_tax_id_field_name') {
        $form['md_style_view'][$temp_key] = array(
          '#type' => 'hidden',
          '#default_value' => $temp_value
        );
      }
    }

    $form['md_style_flag'] = array(
      '#type' => 'hidden',
      '#default_value' => $this->options['md_style_flag']
    );

    $form['md_style_container_type'] = array(
      '#type' => 'select',
      '#title' => t('Template'),
      '#options' => array(
        'cbp-l-grid-blog' => t('Blog posts'),
        'cbp-l-grid-fullScreen' => t('Full screen'),
        'cbp-l-grid-gallery' => t('Lightbox gallery'),
        'cbp-l-grid-projects' => t('Juicy projects'),
        'cbp-l-grid-gallery' => t('Lightbox gallary'),
        'cbp-l-grid-masonry' => t('Masonry'),
      ),
      '#default_value' => $this->options['md_style_container_type'],
      '#weight' => -1,
      '#suffix' => '<div style="margin: 10px 0px 10px 0px;"><hr></div>',
      '#attributes' => array(
        'id' => 'md-style-container-type'
      )
    );

    $taxonomy_options = array('0' => 'Disabled') + $MDP->load_taxonomy;
    if($MDP->check_filter() == true) {
      $form['md_style_view']['filter_tax_id_field_name'] = array(
        '#type' => 'select',
        '#title' => 'Taxonomy filter',
        '#description' => 'filter load to taxonomy in content type',
        '#options' => $taxonomy_options,
        '#default_value' => array($this->options['md_style_view']['filter_tax_id_field_name'])
      );
    } else {
      $form['md_style_view']['filter_tax_id_field_name'] = array(
        '#type' => 'hidden',
        '#prefix' => '<h4 style="color: #de903e;">Do not find Taxonomy filter</h4>',
        '#default_value' => '0',
      );
    }
    $form['md_style_layout_mode'] = array(
      '#type' => 'select',
      '#title' => t('Layout Mode'),
      '#options' => array(
        'grid' => t('Grid'),
        'mosaic' => t('Mosaic'),
      ),
      '#default_value' => $this->options['md_style_layout_mode'],
      '#description' => t('Layout Mode for this plugin'),
      '#attributes' => array(
        'id' => 'md-style-layout-mode'
      )
    );
    $form['md_style_filter_type'] = array(
      '#type' => 'select',
      '#title' => t('Filter style'),
      '#options' => array(
        'cbp-l-filters-list' => t('List'),
        'cbp-l-filters-button' => t('Button'),
        'cbp-l-filters-buttonCenter' => t('Button Center'),
        'cbp-l-filters-dropdown' => t('Dropdown'),
        'cbp-l-filters-alignRight' => t('Align right'),
        'cbp-l-filters-alignCenter' => t('Align center'),
        'cbp-l-filters-alignLeft' => t('Align left'),
      ),
      '#default_value' => $this->options['md_style_filter_type'],
      '#attributes' => array(
        'id' => 'md-style-filter-type'
      )
    );

    $form['md_style_filter_dropdown_header'] = array(
      '#type' => 'textfield',
      '#title' => t('Header for Dropdown'),
      '#process' => array('ctools_dependent_process'),
      '#dependency' => array('md-style-filter-type' => array('cbp-l-filters-dropdown')),
      '#default_value' => $this->options['md_style_filter_dropdown_header'],
    );

    $form['md_style_animationType'] = array(
      '#type' => 'select',
      '#title' => t('Animations for filters'),
      '#options' => array(
        'fadeOut' => t('Fade Out'),
        'quicksand' => t('Quicksand'),
        'boxShadow' => t('Box Shadow'),
        'bounceLeft' => t('Bounce Left'),
        'bounceTop' => t('Bounce Top'),
        'bounceBottom' => t('Bounce Bottom'),
        'moveLeft' => t('Move Left'),
        'slideLeft' => t('Slide Left'),
        'fadeOutTop' => t('Fade Out Top'),
        'sequentially' => t('Sequentially'),
        'skew' => t('Skew'),
        'slideDelay' => t('SlideDelay'),
        '3dflip' => t('3D Flip'),
        'rotateSides' => t('RotateSides'),
        'flipOutDelay' => t('FlipOutDelay'),
        'flipOut' => t('FlipOut'),
        'unfold' => t('Unfold'),
        'foldLeft' => t('FoldLeft'),
        'scaleDown' => t('ScaleDown'),
        'scaleSides' => t('ScaleSides'),
        'frontRow' => t('FrontRow'),
        'flipBottom' => t('FlipBottom'),
        'rotateRoom' => t('RotateRoom')
      ),
      '#default_value' => $this->options['md_style_animationType'],
    );

    $form['md_style_filter_count']['flag_check'] = array(
      '#type' => 'checkbox',
      '#title' => t('Filter with items count'),
      '#default_value' => $this->options['md_style_filter_count']['flag_check'],
      '#attributes' => array(
        'id' => 'mds-style-filter-count-flag-check'
      )
    );

    $form['md_style_filter_count']['options'] = array(
      '#type' => 'fieldset',
      '#process' => array('ctools_dependent_process'),
      '#dependency' => array('mds-style-filter-count-flag-check' => array('1')),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );

    $form['md_style_filter_count']['options']['count_type'] = array(
      '#type' => 'select',
      '#title' => 'Count type',
      '#options' => array(
        'cbp-count-default' => t('Inline'),
        'cbp-count-tooltip' => t('Tooltip')
      ),
      '#default_value' => $this->options['md_style_filter_count']['options']['count_type']
    );

    $form['md_style_filter_count']['options']['field_prefix'] = array(
      '#type' => 'textfield',
      '#title' => 'Field Prefix',
      '#default_value' => $this->options['md_style_filter_count']['options']['field_prefix']
    );

    $form['md_style_filter_count']['options']['field_suffix'] = array(
      '#type' => 'textfield',
      '#title' => 'Field Suffix',
      '#default_value' => $this->options['md_style_filter_count']['options']['field_suffix'],
    );
    $form['md_style_gridAdjustment'] = array(
      '#type' => 'select',
      '#title' => t('Grid Adjustment'),
      '#options' => array(
        'default' => t('Default'),
        'alignCenter' => t('Align Center'),
        'responsive' => t('Responsive'),
      ),
      '#default_value' => $this->options['md_style_gridAdjustment'],
    );
    $form['md_style_mediaQueries'] = array(
      '#type' => 'textarea',
      '#title' => t('Columns layout'),
      '#default_value' => $this->options['md_style_mediaQueries'],
      '#description' => t('Define `media queries` for columns layout'),
    );
    $form['md_style_gapHorizontal'] = array(
      '#type' => 'textfield',
      '#field_suffix' => 'px',
      '#required' => TRUE,
      '#title' => t('Gap Horizontal'),
      '#default_value' => $this->options['md_style_gapHorizontal'],
      '#size' => 13,
    );

    $form['md_style_gapVertical'] = array(
      '#type' => 'textfield',
      '#field_suffix' => 'px',
      '#required' => TRUE,
      '#title' => t('Gap Vertical'),
      '#default_value' => $this->options['md_style_gapVertical'],
      '#size' => 13,
    );

    $form['md_style_displayType'] = array(
      '#type' => 'select',
      '#description' => t('The plugin will display his content based on the following values. '),
      '#title' => t('Item appear style'),
      '#options' => array(
        'default' => t('default'),
        'fadeIn' => t('fadeIn'),
        'lazyLoading' => t('Lazy Loading'),
        'fadeInToTop' => t('Fade In To Top'),
        'sequentially' => t('Sequentially'),
        'bottomToTop' => t('Bottom To Top')
      ),
      '#default_value' => $this->options['md_style_displayType'],
    );

    $form['md_style_displayTypeSpeed'] = array(
      '#type' => 'textfield',
      '#description' => t('only integers, values in ms ex: 200, 300, 500'),
      '#title' => t('Appear speed'),
      '#default_value' => $this->options['md_style_displayTypeSpeed'],
      '#size' => 13,
    );

    $form['md_style_caption'] = array(
      '#type' => 'select',
      '#title' => t('Caption'),
      '#description' => t('Caption - the overlay that is shown when you put the mouse over an item.'),
      '#options' => array(
        'pushTop' => t('Push Top'),
        'pushDown' => t('Push Down'),
        'revealBottom' => t('Reveal Bottom'),
        'revealTop' => t('Reveal Top'),
        'revealLeft' => t('Reveal Left'),
        'moveRight' => t('Move Right'),
        'overlayBottomPush' => t('Overlay Bottom Push'),
        'overlayBottom' => t('Overlay Bottom'),
        'overlayBottomReveal' => t('Overlay Bottom Reveal'),
        'overlayBottomAlong' => t('Overlay Bottom Along'),
        'overlayRightAlong' => t('Overlay Right Along'),
        'minimal' => t('Minimal'),
        'fadeIn' => t('Fade In'),
        'zoom' => t('Zoom'),
      ),
      '#default_value' => $this->options['md_style_caption'],
    );

    $form['md_style_view_node'] = array(
      '#type' => 'select',
      '#title' => 'View node for content',
      '#description' => 'view node',
      '#options' => $MDP->load_view_mode,
      '#default_value' => array($this->options['md_style_view_node']),
    );

    $form['inline_page_popup'] = array(
      '#type' => 'select',
      '#title' => 'Page inline position',
      '#options' => array(
        'below' => t('Below'),
        'top' => t('Top'),
        'above' => t('Above'),
      ),
      '#default_value' => array($this->options['inline_page_popup']),
    );


    $form['md_style_class_add_filter'] = array(
      '#type' => 'textfield',
      '#title' => t('Filter class'),
      '#default_value' => $this->options['md_style_class_add_filter'],
    );

    $form['md_style_class_add_style'] = array(
      '#type' => 'textfield',
      '#title' => t('Wrapper class'),
      '#default_value' => $this->options['md_style_class_add_style'],
    );

  }

  function get_field_img_url($index, $field) {
    $field_name = 'field_' . $field;
    $data_field = $this->view->result[$index];
    $images = $data_field->$field_name;
    $image = $images[0];
    $image_style = $image['rendered']['#image_style'];
    $image_uri = $image['raw']['uri'];
    $image_url = array(
      'original' => file_create_url($image_uri)
    );
    $image_url['style'] = $image_style == '' ? file_create_url($image_uri) : image_style_url($image_style, $image_uri);
    return $image_url;
  }
}

