  {
    base: 'az_hidden',
    name: Drupal.t('Hidden data'),
    icon: 'fa fa-ticket',
    // description: Drupal.t('Hidden text field'),
    params: [{
      type: 'textfield',
      heading: Drupal.t('Data'),
      param_name: 'data',
    },],
    hidden: true,
    show_settings_on_create: true,
    render: function($) {
      this.dom_element = $('<input name="' + this.attrs['name'] + '" type="hidden" value="' + this.attrs['data'] +
        '" >');
      this.baseclass.prototype.render.apply(this, arguments);
    },
  },
