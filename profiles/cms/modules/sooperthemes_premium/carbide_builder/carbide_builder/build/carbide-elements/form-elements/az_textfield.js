  {
    base: 'az_textfield',
    name: Drupal.t('Textfield'),
    icon: 'fa fa-pencil-square-o',
    // description: Drupal.t('Form text field'),
    params: [],
    hidden: true,
    show_settings_on_create: true,
    render: function($) {
      var required = (this.attrs['required'] == 'yes') ? 'required' : '';
      this.dom_element = $('<div class="az-element az-textfield form-group' + this.attrs['el_class'] +
        '" style="' + this.attrs['style'] + '"><div><input class="form-control" name="' + this.attrs[
          'name'] + '" type="text" placeholder="' + this.attrs['title'] + '" ' + required + '></div></div>');
      this.baseclass.prototype.render.apply(this, arguments);
    },
  },
