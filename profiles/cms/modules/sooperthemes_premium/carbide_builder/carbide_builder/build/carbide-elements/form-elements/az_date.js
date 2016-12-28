  {
    base: 'az_date',
    name: Drupal.t('Date'),
    icon: 'fa fa-calendar',
    // description: Drupal.t('Form date field'),
    params: [{
      type: 'checkbox',
      heading: Drupal.t('Time is enabled?'),
      param_name: 'time',
      value: {
        'yes': Drupal.t("Yes"),
      },
    },],
    hidden: true,
    show_settings_on_create: true,
    frontend_render: true,
    showed: function($) {
      this.baseclass.prototype.showed.apply(this, arguments);
      var element = this;
      this.add_css('vendor/datetimepicker/jquery.datetimepicker.css', 'datetimepicker' in $.fn, function() {});
      this.add_js({
        path: 'vendor/datetimepicker/jquery.datetimepicker.js',
        callback: function() {
          $(element.dom_element).find('input').datetimepicker({
            format: (element.attrs['time'] == 'yes') ? 'Y/m/d H:i' : 'Y/m/d',
            timepicker: (element.attrs['time'] == 'yes'),
            datepicker: true,
            inline: true,
          });
        }
      });
    },
    render: function($) {
      var required = (this.attrs['required'] == 'yes') ? 'required' : '';
      this.dom_element = $('<div class="az-element az-date form-group' + this.attrs['el_class'] +
        '" style="' + this.attrs['style'] + '"><label>' + this.attrs['title'] + '</label><div><input class="' +
        'form-control" name="' + this.attrs['name'] + '" type="text" ' + required + '></div></div>');
      this.baseclass.prototype.render.apply(this, arguments);
    },
  },
