  /**
   * Check user access, load controls
   */
  function carbide_login(callback) {
    if ('carbide_editor' in window) {
      callback(window.carbide_editor);
      return;
    }
    if (window.carbide_online) {
      if ('carbide_ajaxurl' in window) {
        $.ajax({
          type: 'POST',
          url: window.carbide_ajaxurl,
          data: {
            action: 'carbide_login',
            url: window.location.href,
          },
          dataType: "json",
          cache: false,
          context: this
        }).done(function(data) {
          callback(data);
        });
      }
    }
    else {
      callback(false);
    }
  }

  /**
   * Check user access, load controls
   */
  function carbide_get_container_types(callback) {
    if ('carbide_ajaxurl' in window) {
      $.ajax({
        type: 'POST',
        url: window.carbide_ajaxurl,
        data: {
          action: 'carbide_get_container_types',
          url: window.location.href,
        },
        dataType: "json",
        cache: false,
        context: this
      }).done(function(data) {
        callback(data);
      });
    }
  }

  /**
   * Callback that lists all entity fields
   */
  function carbide_get_container_names(container_type, callback) {
    if ('carbide_ajaxurl' in window) {
      $.ajax({
        type: 'POST',
        url: window.carbide_ajaxurl,
        data: {
          action: 'carbide_get_container_names',
          container_type: container_type,
          url: window.location.href,
        },
        dataType: "json",
        cache: false,
        context: this
      }).done(function(data) {
        callback(data);
      });
    }
  }

  /**
   * Save Carbide Container Contents
   */
  function carbide_save_container(type, name, shortcode) {
    typeArray = type.split('|');
    nameArray = name.split('|');
    if ('carbide_ajaxurl' in window) {
      $.ajax({
        type: 'POST',
        url: window.carbide_ajaxurl,
        data: {
          action: 'carbide_save_container',
          type: type,
          name: name,
          lang: window.carbide_lang,
          shortcode: enc(encodeURIComponent(shortcode)),
        },
        dataType: "json",
        cache: false,
        context: this
      }).done(function(data) {
        $.notify(Drupal.t('Saved ' + nameArray[1] + ' field'), {
          type: 'success',
          offset: {
            x: 25,
            y: 70
          }
        }); // y offset for toolbar + shortcut bar
      }).fail(function(data) {
        $.notify(Drupal.t('Server error: Unable to save page'), {
          type: 'danger',
          offset: {
            x: 25,
            y: 70
          }
        });
      });
    }
  }

  /**
   * Load Carbide Container contents.
   */
  function carbide_load_container(type, name, callback) {
    if (carbide_containers_loaded.hasOwnProperty(type + '/' + name)) {
      callback(carbide_containers_loaded[type + '/' + name]);
      return;
    }
    if (window.carbide_online) {
      if ('carbide_ajaxurl' in window) {
        $.ajax({
          type: 'POST',
          url: window.carbide_ajaxurl,
          data: {
            action: 'carbide_load_container',
            type: type,
            name: name,
          },
          cache: !window.carbide_editor,
        }).done(function(data) {
          carbide_containers_loaded[type + '/' + name] = data;
          callback(data);
        }).fail(function() {
          callback('');
        });
      }
    }
  }

  /**
   * Load Drupal Elements (Blocks, Views).
   */
  function carbide_builder_get_cms_element_names(callback) {
    if ('carbide_cms_element_names' in window) {
      callback(window.carbide_cms_element_names);
      return;
    }
    if (window.carbide_online) {
      if ('carbide_ajaxurl' in window) {
        $.ajax({
          type: 'POST',
          url: window.carbide_ajaxurl,
          data: {
            action: 'carbide_builder_get_cms_element_names',
            url: window.location.href,
          },
          dataType: "json",
          cache: false,
          context: this
        }).done(function(data) {
          callback(data);
        }).fail(function() {
          callback(false);
        });
      }
      else {
        callback(false);
      }
    }
    else {
      callback(false);
    }
  }

  /**
   * Callback to load Drupal element contents.
   */
  function carbide_builder_load_cms_element(name, settings, container, data, callback) {
    if ('carbide_ajaxurl' in window) {
      $.ajax({
        type: 'POST',
        url: window.carbide_ajaxurl,
        data: {
          action: 'carbide_builder_load_cms_element',
          name: name,
          settings: settings,
          container: container,
          data: data
        },
        dataType: "json",
        cache: !window.carbide_editor
      }).done(function(data) {
        $(data.css).appendTo($('head'));
        $(data.js).appendTo($('head'));
        $.extend(true, Drupal.settings, data.settings);
        callback(data.data);
      });
    }
  }

  /**
   * Callback to load settings for all Drupal Elements (blocks, views).
   */
  function carbide_get_cms_element_settings(name, callback) {
    if ('carbide_ajaxurl' in window) {
      $.ajax({
        type: 'POST',
        url: window.carbide_ajaxurl,
        data: {
          action: 'carbide_get_cms_element_settings',
          name: name,
          url: window.location.href,
        },
        cache: !window.carbide_editor,
      }).done(function(data) {
        callback(data);
      });
    }
  }

  /**
   * Load all sidebar templates.
   */
  function carbide_get_elements(callback) {
    if ('carbide_template_elements' in window) {
      for (var name in window.carbide_template_elements) {
        window.carbide_template_elements[name].html = decodeURIComponent(window.carbide_template_elements[name].html);
      }
      callback(window.carbide_template_elements);
      return;
    }
  }

  /**
   * Load all user templates.
   */
  function carbide_get_templates(callback) {
    if ('carbide_ajaxurl' in window) {
      $.ajax({
        type: 'POST',
        url: window.carbide_ajaxurl,
        data: {
          action: 'carbide_get_templates',
          url: window.location.href,
        },
        dataType: "json",
        cache: false,
        context: this
      }).done(function(data) {
        callback(data);
      });
    }
  }

  /**
   * Load contents for user template.
   */
  function carbide_load_template(name, callback) {
    if ('carbide_ajaxurl' in window) {
      $.ajax({
        type: 'POST',
        url: window.carbide_ajaxurl,
        data: {
          action: 'carbide_load_template',
          url: window.location.href,
          name: name,
        },
        cache: false,
      }).done(function(data) {
        callback(data);
      }).fail(function() {
        callback('');
      });
    }
    else {
      var url = window.carbide_baseurl + '../carbide_templates/' + name;
      $.ajax({
        url: url,
        cache: false,
      }).done(function(data) {
        callback(data);
      }).fail(function() {
        callback('');
      });
    }
  }

  /**
   * Save user template.
   */
  function carbide_save_template(name, template) {
    if ('carbide_ajaxurl' in window) {
      $.ajax({
        type: 'POST',
        url: window.carbide_ajaxurl,
        data: {
          action: 'carbide_save_template',
          url: window.location.href,
          name: name,
          template: template,
        },
        cache: false,
        context: this
      }).done(function(data) {});
    }
  }

  /**
   * Delete user template.
   */
  function carbide_delete_template(name) {
    if ('carbide_ajaxurl' in window) {
      $.ajax({
        type: 'POST',
        url: window.carbide_ajaxurl,
        data: {
          action: 'carbide_delete_template',
          url: window.location.href,
          name: name,
        },
        cache: false,
        context: this
      }).done(function(data) {});
    }
  }

  /**
   * List all page templates.
   */
  function carbide_get_page_templates(callback) {
    if ('carbide_ajaxurl' in window) {
      $.ajax({
        type: 'POST',
        url: window.carbide_ajaxurl,
        data: {
          action: 'carbide_get_page_templates',
          url: window.location.href,
        },
        dataType: "json",
        cache: false,
        context: this
      }).done(function(data) {
        callback(data);
      });
    }
  }

  /**
   * Load contents for page template.
   */
  function carbide_load_page_template(uuid, callback) {
    if ('carbide_ajaxurl' in window) {
      $.ajax({
        type: 'POST',
        url: window.carbide_ajaxurl,
        data: {
          action: 'carbide_load_page_template',
          url: window.location.href,
          uuid: uuid,
        },
        cache: false,
      }).done(function(data) {
        callback(data);
      }).fail(function() {
        callback('');
      });
    }
  }


  // // -- form ---
  // function carbide_get_recaptcha_publickey(callback) {
  //   if (window.carbide_online) {
  //     if ('carbide_ajaxurl' in window) {
  //       $.ajax({
  //         type: 'POST',
  //         url: window.carbide_ajaxurl,
  //         data: {
  //           action: 'carbide_get_recaptcha_publickey',
  //         },
  //         cache: false,
  //         context: this
  //       }).done(function(data) {
  //         callback(data);
  //       });
  //     }
  //   }
  //   else {
  //     callback('');
  //   }
  // }

  // function carbide_submit_form(container_type, container_name, name, values, callback) {
  //   if (window.carbide_online) {
  //     if ('carbide_ajaxurl' in window) {
  //       $.ajax({
  //         type: 'POST',
  //         url: window.carbide_ajaxurl,
  //         data: {
  //           action: 'carbide_submit_form',
  //           container_type: container_type,
  //           container_name: container_name,
  //           name: name,
  //           values: values,
  //         },
  //         dataType: "json",
  //         cache: false,
  //         context: this
  //       }).done(function(data) {
  //         callback(data);
  //       });
  //     }
  //   }
  //   else {
  //     callback('');
  //   }
  // }

  // function carbide_load_submissions(container_type, container_name, name, callback) {
  //   if (window.carbide_online) {
  //     if ('carbide_ajaxurl' in window) {
  //       $.ajax({
  //         type: 'POST',
  //         url: window.carbide_ajaxurl,
  //         data: {
  //           action: 'carbide_load_submissions',
  //           container_type: container_type,
  //           container_name: container_name,
  //           name: name,
  //         },
  //         dataType: "json",
  //         cache: false,
  //         context: this
  //       }).done(function(data) {
  //         callback(data);
  //       });
  //     }
  //   }
  //   else {
  //     callback('');
  //   }
  // }

  // function carbide_save_submissions(name, submissions, callback) {
  //   if (window.carbide_online) {
  //     if ('carbide_ajaxurl' in window) {
  //       $.ajax({
  //         type: 'POST',
  //         url: window.carbide_ajaxurl,
  //         data: {
  //           action: 'carbide_save_submissions',
  //           submissions: submissions,
  //         },
  //         dataType: "json",
  //         cache: false,
  //         context: this
  //       }).done(function(data) {
  //         callback(data);
  //       });
  //     }
  //   }
  //   else {
  //     callback('');
  //   }
  // }