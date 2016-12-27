  {
    base: 'az_dropdown',
    name: Drupal.t('Dropdown'),
    icon: 'fa fa-level-down',
    // description: Drupal.t('Form dropdown field'),
    params: [{
      type: 'rawtext',
      heading: Drupal.t('Options'),
      param_name: 'options',
      description: Drupal.t('Separated by new line.'),
    },],
    hidden: true,
    show_settings_on_create: true,
    render: function($) {
      var required = (this.attrs['required'] == 'yes') ? 'required' : '';
      var select = '<select name="' + this.attrs['name'] + '" class="form-control" ' + required + '>';
      select += '<option value="">' + Drupal.t('Select') + '</option>';
      var options = this.attrs['options'].split("\n");
      for (var i = 0; i < options.length; i++) {
        select += '<option value="' + options[i] + '">' + options[i] + '</option>';
      }
      select += '/<select>';
      this.dom_element = $('<div class="az-element az-dropdown form-group' + this.attrs['el_class'] +
        '" style="' + this.attrs['style'] + '" ><label>' + this.attrs['title'] + '</label><div>' + select +
        '</div></div>');
      this.baseclass.prototype.render.apply(this, arguments);
    },
  },
