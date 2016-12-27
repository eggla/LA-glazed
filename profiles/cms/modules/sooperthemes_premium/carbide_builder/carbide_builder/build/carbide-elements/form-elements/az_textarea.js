  {
    base: 'az_textarea',
    name: Drupal.t('Textarea'),
    icon: 'fa fa-file-text-o',
    // description: Drupal.t('Form text area field'),
    params: [],
    hidden: true,
    show_settings_on_create: true,
    render: function($) {
      var required = (this.attrs['required'] == 'yes') ? 'required' : '';
      this.dom_element = $('<div class="az-element az-textarea form-group' + this.attrs['el_class'] +
        '" style="' + this.attrs['style'] + '"><div><textarea class="form-control" rows="10" cols="45" name="' + this.attrs['name'] + '" " placeholder="' + this.attrs[
          'title'] + '" ' + required + '></textarea></div></div>');
      this.baseclass.prototype.render.apply(this, arguments);
    },
  },
