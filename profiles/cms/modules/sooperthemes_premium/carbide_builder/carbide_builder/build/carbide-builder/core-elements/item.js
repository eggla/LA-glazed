
  function ItemElement(parent, position) {
    ItemElement.baseclass.apply(this, arguments);
  }
  register_element('az_item', true, ItemElement);
  mixin(ItemElement.prototype, {
    name: Drupal.t('Item'),
    params: [
      make_param_type({
        type: 'textfield',
        heading: Drupal.t('Item tags'),
        param_name: 'tags',
        descritption: Drupal.t('Separated by comma.'),
      }),
      make_param_type({
        type: 'textfield',
        heading: Drupal.t('Item height'),
        param_name: 'height',
        description: Drupal.t('For example 100px, or 50%.'),
      }),
    ].concat(ItemElement.prototype.params),
    hidden: true,
    is_container: true,
    disallowed_elements: ['az_tabs', 'az_accordion', 'az_carousel', 'az_form'],
    show_parent_controls: true,
    get_empty: function() {
      return '<div class="az-empty"><div class="top-left well"><h1>↖</h1>' + Drupal.t(
          'Settings for this grid element and for current item element. You can add new item via clone current item by click on this button:'
        ) + '<span class="glyphicon glyphicon-repeat"></span></div><div class="bottom well"><strong>' + Drupal.t(
          '1) Create one item as template. 2) Clone it as much as you want. 3) Customize every item.') +
        '</strong></div></div>';
    },
    get_my_shortcode: function() {
      return this.get_children_shortcode();
    },
    remove: function() {
      this.parent.item_removing = true;
      ItemElement.baseclass.prototype.remove.apply(this, arguments);
      delete this.parent.item_removing;
      this.parent.showed($);
    },
    clone: function() {
      var shortcode = ItemElement.baseclass.prototype.get_my_shortcode.apply(this, arguments);
      $('#carbide-clipboard').html(encodeURIComponent(shortcode));
      for (var i = 0; i < this.parent.children.length; i++) {
        if (this.parent.children[i].id == this.id) {
          this.parent.paste(i);
          break;
        }
      }
      this.parent.update_dom();
    },
    show_controls: function() {
      if (window.carbide_editor) {
        ItemElement.baseclass.prototype.show_controls.apply(this, arguments);
        this.parent.add_control(this);
      }
    },
    edited: function() {
      ItemElement.baseclass.prototype.edited.apply(this, arguments);
      this.parent.showed($);
    },
    showed: function($) {
      ItemElement.baseclass.prototype.showed.apply(this, arguments);
      var width = Math.floor($(this.parent.parent.dom_content_element).width() / parseInt(this.parent.attrs[
        'columns_number']));
      $(this.dom_element).css('width', width);
    },
    render: function($) {
      this.dom_element = $('<li class="az-element az-ctnr az-item ' + this.attrs['el_class'] + '" style="' +
        this.attrs['style'] + '" data-az-tags="' + this.attrs['tags'] + '"></li>');
      this.dom_content_element = this.dom_element;
      if ('height' in this.attrs)
        $(this.dom_element).css('height', this.attrs['height']);
      ItemElement.baseclass.prototype.render.apply(this, arguments);
    },
  });