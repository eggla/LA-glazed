  {
    base: 'az_number',
    name: Drupal.t('Number'),
    icon: 'fa fa-arrows-h',
    // description: Drupal.t('Form number field with slider'),
    params: [{
      type: 'textfield',
      heading: Drupal.t('Minimum'),
      param_name: 'minimum',
      description: Drupal.t('Required.'),
      required: true,
      value: '0',
    }, {
      type: 'textfield',
      heading: Drupal.t('Maximum'),
      param_name: 'maximum',
      description: Drupal.t('Required.'),
      required: true,
      value: '100',
    }, {
      type: 'textfield',
      heading: Drupal.t('Step'),
      param_name: 'step',
      description: Drupal.t('Required.'),
      required: true,
      value: '1',
    },],
    hidden: true,
    show_settings_on_create: true,
    showed: function($) {
      var element = this;
      this.baseclass.prototype.showed.apply(this, arguments);
      function nouislider(slider, min, max, value, step, target) {
        element.add_css('vendor/noUiSlider/nouislider.min.css', function() {});
        element.add_js({
          path: 'vendor/noUiSlider/jquery.nouislider.min.js',
          callback: function() {
            $(slider).noUiSlider({
              start: [(value == '' || isNaN(parseFloat(value)) || value == 'NaN') ? min : parseFloat(
                value)],
              step: parseFloat(step),
              range: {
                min: [parseFloat(min)],
                max: [parseFloat(max)]
              },
            }).on('change', function() {
              $(target).val($(slider).val());
            });
          }
        });
      }
      nouislider($(this.dom_element).find('.slider'), this.attrs['minimum'], this.attrs['maximum'], '', this.attrs[
        'step'], $(this.dom_element).find('input'));
    },
    render: function($) {
      var required = (this.attrs['required'] == 'yes') ? 'required' : '';
      this.dom_element = $('<div class="az-element az-number form-group' + this.attrs['el_class'] +
        '" style="' + this.attrs['style'] + '"><div><input class="form-control" name="' + this.attrs[
          'name'] + '" type="text" ' + required + ' placeholder="' + this.attrs['title'] +
        '"></div><div class="slider"></div></div>');
      this.baseclass.prototype.render.apply(this, arguments);
    },
  },
