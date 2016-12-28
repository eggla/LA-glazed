  {
    base: 'az_checkbox',
    name: Drupal.t('Checkbox'),
    icon: 'fa fa-check-square-o',
    // description: Drupal.t('Form Checkbox field'),
    params: [{
      type: 'rawtext',
      heading: Drupal.t('Options'),
      param_name: 'options',
      description: Drupal.t('Name|Title separated by new line.'),
    },],
    hidden: true,
    show_settings_on_create: true,
    render: function($) {
      var inputs = '';
      var options = this.attrs['options'].split("\n");
      for (var i = 0; i < options.length; i++) {
        inputs += '<div class="checkbox"><label><input name="' + options[i].split("|")[0] +
          '" type="checkbox" value="' + options[i].split("|")[0] + '">' + options[i].split("|")[1] +
          '</label></div>';
      }
      this.dom_element = $('<div class="az-element az-checkbox form-group' + this.attrs['el_class'] +
        '" style="' + this.attrs['style'] + '"><label>' + this.attrs['title'] + '</label><div>' + inputs +
        '</div></div>');
      this.baseclass.prototype.render.apply(this, arguments);
    },
  },
