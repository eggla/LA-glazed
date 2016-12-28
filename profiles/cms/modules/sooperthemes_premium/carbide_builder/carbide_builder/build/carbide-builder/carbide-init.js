
  carbide_elements = new carbideElements();

  function toggle_editor_controls() {
    if (window.carbide_editor) {
      carbide_add_css('vendor/font-awesome/css/font-awesome.min.css', function() {});
      if ($('#carbide-clipboard').length == 0) {
        $('body').prepend('<div id="carbide-clipboard" style="display:none"></div>');
      }
      carbide_add_js({
        path: 'vendor/chosen/chosen.jquery.min.js'
      });
      carbide_add_css('vendor/chosen/chosen.min.css', function() {});
      for (var id in carbide_elements.elements_instances) {
        var el = carbide_elements.elements_instances[id];
        if (el instanceof ContainerElement) {
          $(el.dom_element).addClass('carbide-editor');
        }
        if (el.controls == null) {
          el.show_controls();
        }
        el.update_sortable();
      }
      $('#az-exporter').show();
    }
    else {
      for (var id in carbide_elements.elements_instances) {
        var el = carbide_elements.elements_instances[id];
        if (el instanceof ContainerElement) {
          $(el.dom_element).removeClass('carbide-editor');
        }
        if (el.controls != null) {
          $(el.controls).remove();
        }
        el.update_empty();
      }
      $('#az-exporter').hide();
    }
  }

  function try_login() {
    if (!('carbide_ajaxurl' in window))
      if (!window.carbide_editor || window.carbide_online)
        delete window.carbide_editor;
    carbide_login(function(data) {
      window.carbide_editor = data;
      $(function() {
        toggle_editor_controls();
      })
    });
  }
  try_login();

  function onReadyFirst(completed) {
    $.holdReady(true);
    if (document.readyState === "complete") {
      setTimeout(completed);
    }
    else if (document.addEventListener) {
      document.addEventListener("DOMContentLoaded", completed, false);
      window.addEventListener("load", completed, false);
    }
    else {
      document.attachEvent("onreadystatechange", completed);
      window.attachEvent("onload", completed);
    }
  }
  onReadyFirst(function() {
    carbide_load();
    $.holdReady(false);
  });

  function connect_container(dom_element) {
    if ($(dom_element).length > 0) {
      var html = $(dom_element).html();
      var match = /^\s*\<[\s\S]*\>\s*$/.exec(html);
      if (match || (html == '' && 'carbide_ajaxurl' in window)) {
        $(dom_element).find('> script').detach().appendTo('head');
        $(dom_element).find('> link[href]').detach().appendTo('head');
        //$(dom_element).find('> script').remove();
        //$(dom_element).find('> link[href]').remove();
        var container = new ContainerElement(null, false);
        container.attrs['container'] = $(dom_element).attr('data-az-type') + '/' + $(dom_element).attr('data-az-name');
        container.dom_element = $(dom_element);
        $(container.dom_element).attr('data-az-id', container.id);
        //container.dom_content_element = $(dom_element).closest_descendents('[data-azcnt]');
        container.dom_content_element = $(dom_element);
        $(container.dom_element).css('display', '');
        $(container.dom_element).addClass('carbide');
        $(container.dom_element).addClass('az-ctnr');
        container.parse_html(container.dom_content_element);
        container.html_content = true;
        container.loaded_container = container.attrs['container'];
        for (var i = 0; i < container.children.length; i++) {
          container.children[i].recursive_render();
        }
        if (!carbide_frontend) {
          container.dom_content_element.empty();
          if (window.carbide_editor) {
            container.show_controls();
            container.update_sortable();
          }
          container.attach_children();
        }
        container.rendered = true;
        for (var i = 0; i < container.children.length; i++) {
          container.children[i].recursive_showed();
        }
      }
      else {
        if (html.replace(/^\s+|\s+$/g, '') != '')
          carbide_containers_loaded[$(dom_element).attr('data-az-type') + '/' + $(dom_element).attr('data-az-name')] =
          html.replace(/^\s+|\s+$/g, '');
        var container = new ContainerElement(null, false);
        container.attrs['container'] = $(dom_element).attr('data-az-type') + '/' + $(dom_element).attr('data-az-name');
        container.render($);
        var classes = $(container.dom_element).attr('class') + ' ' + $(dom_element).attr('class');
        classes = $.unique(classes.split(' ')).join(' ');
        $(container.dom_element).attr('class', classes);
        $(container.dom_element).attr('style', $(dom_element).attr('style'));
        $(container.dom_element).css('display', '');
        $(container.dom_element).addClass('carbide');
        $(container.dom_element).addClass('az-ctnr');
        var type = $(dom_element).attr('data-az-type');
        var name = $(dom_element).attr('data-az-name');
        $(dom_element).replaceWith(container.dom_element);
        $(container.dom_element).attr('data-az-type', type);
        $(container.dom_element).attr('data-az-name', name);
        container.showed($);
        if (window.carbide_editor)
          container.show_controls();
      }
      if (window.carbide_editor) {
        $(container.dom_element).addClass('carbide-editor');
      }
      return container;
    }
    return null;
  }
  var carbide_loaded = false;

  function carbide_load() {
    if (carbide_loaded)
      return;
    carbide_loaded = true;
     if (Drupal.settings.carbide_builder.hasOwnProperty('DisallowContainers'));
    var carbideDisallowContainer = Drupal.settings.carbide_builder.DisallowContainers;
    $('.az-container').each(function() {
      var containerId = $(this).attr('data-az-name')
      if ($.inArray(containerId, carbideDisallowContainer) == -1) {
        var container = connect_container(this);
        if (container)
          carbide_containers.push(container);
      }
    });
    if (window.carbide_editor) {
      if ($('#carbide-clipboard').length == 0) {
        $('body').prepend('<div id="carbide-clipboard" class="carbide-backend" style="display:none"></div>');
      }
    }
  }
  $.fn.carbide_builder = function(method) {
    var methods = {
      init: function(options) {
        var settings = $.extend({
          'test': 'test',
        }, options);
        return this.each(function() {
          var textarea = this;
          var container = $(this).data('carbide_builder');
          if (!container) {
            var dom = $('<div>' + $(textarea).val() + '</div>')[0];
            $(dom).find('> script').remove();
            $(dom).find('> link[href]').remove();
            $(dom).find('> .az-container > script').remove();
            $(dom).find('> .az-container > link[href]').remove();
            $(textarea).css('display', 'none');
            var container_dom = null;
            if ($(dom).find('> .az-container[data-az-type][data-az-name]').length > 0) {
              container_dom = $(dom).children().insertAfter(textarea);
            }
            else {
              var type = 'textarea';
              var name = Math.random().toString(36).substr(2);
              if (window.carbide_online) {
                type = window.carbide_type;
                name = window.carbide_name;
              }
              container_dom = $('<div class="az-element az-container" data-az-type="' + type +
                '" data-az-name="' + name + '"></div>').insertAfter(textarea);
              container_dom.append($(dom).html());
            }

            window.carbide_title['Save container'] = Drupal.t(
              'Generate HTML and JS for all elements which placed in current container element.');
            var container = connect_container(container_dom);
            if (container) {
              carbide_containers.push(container);
              $(textarea).data('carbide_builder', container);

              container.save_container = function() {
                carbide_add_js({
                  path: 'jsON-js/json2.min.js',
                  loaded: 'JSON' in window,
                  callback: function() {
                    _.defer(function() {
                      if (container.id in carbide_elements.elements_instances) {
                        var html = container.get_container_html();
                        if (window.carbide_online) {
                          $(textarea).val(html);
                        }
                        else {
                          var type = container.attrs['container'].split('/')[0];
                          var name = container.attrs['container'].split('/')[1];
                          $(textarea).val('<div class="az-element az-container" data-az-type="' +
                            type + '" data-az-name="' + name + '">' + html + '</div>');
                        }
                      }
                    });
                  }
                });
              };
              $(document).on("carbide_add_element", container.save_container);
              $(document).on("carbide_edited_element", container.save_container);
              $(document).on("carbide_update_element", container.save_container);
              $(document).on("carbide_delete_element", container.save_container);
              $(document).on("carbide_update_sorting", container.save_container);
            }
          }
        });
      },
      show: function() {
        this.each(function() {});
      },
      hide: function() {
        this.each(function() {
          var container = $(this).data('carbide_builder');
          if (container) {
            carbide_elements.delete_element(container.id);
            for (var i = 0; i < container.children.length; i++) {
              container.children[i].remove();
            }
            $(container.dom_element).remove();
            $(this).removeData('carbide_builder');

            $(this).css('display', '');
          }
        });
      },
    };
    if (methods[method]) {
      return methods[method].apply(this, Array.prototype.slice.call(arguments, 1));
    }
    else if (typeof method === 'object' || !method) {
      return methods.init.apply(this, arguments);
    }
    else {
      $.error(method);
    }
  };