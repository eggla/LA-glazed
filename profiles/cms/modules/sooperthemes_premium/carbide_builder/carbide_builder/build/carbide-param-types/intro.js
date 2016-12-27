(function($) {
  var p = '';
  var fp = '';
  if ('carbide_prefix' in window) {
    p = window.carbide_prefix;
    fp = window.carbide_prefix.replace('-', '_');
  }

  function toAbsoluteURL(url) {
    if (url.search(/^\/\//) != -1) {
      return window.location.protocol + url
    }
    if (url.search(/:\/\//) != -1) {
      return url
    }
    if (url.search(/^\//) != -1) {
      return window.location.origin + url
    }
    var base = window.location.href.match(/(.*\/)/)[0]
    return base + url
  }

  function t(text) {
    if ('carbide_t' in window) {
      return window.carbide_t(text);
    }
    else {
      return text;
    }
  }

  window.carbide_open_popup = function(url) {
    window.open(url, '', 'location,width=800,height=600,top=0');
  }

  function chosen_select(options, input) {
    var single_select = '<select>';
    for (var key in options) {
      single_select = single_select + '<option value="' + key + '">"' + options[key] + '"</option>';
    }
    single_select = single_select + '</select>';
    $(input).css('display', 'none');
    var select = $(single_select).insertAfter(input);
    if ($(input).val().length) {
      $(select).append('<option value=""></option>');
      var value = $(input).val();
      if (!$(select).find('option[value="' + value + '"]').length) {
        $(select).append('<option value="' + value + '">"' + value + '"</option>');
      }
      $(select).find('option[value="' + value + '"]').attr("selected", "selected");
    }
    else {
      $(select).append('<option value="" selected></option>');
    }
    $(select).chosen({
      search_contains: true,
      allow_single_deselect: true,
    });
    $(select).change(function() {
      $(this).find('option:selected').each(function() {
        $(input).val($(this).val());
      });
    });
    $(select).parent().find('.chosen-container').width('100%');
    $('<div><a class="direct-input" href="#">' + Drupal.t("Switch to custom text input") + '</a></div>').insertBefore(select).click(
      function() {
        $(input).css('display', 'block');
        $(select).parent().find('.chosen-container').remove();
        $(select).remove();
        $(this).remove();
      });
    return select;
  }

  function multiple_chosen_select(options, input, delimiter) {
    var multiple_select = '<select multiple="multiple">';
    var optgroup = '';
    for (var key in options) {
      if (key.indexOf("optgroup") >= 0) {
        if (optgroup == '') {
          multiple_select = multiple_select + '</optgroup>';
        }
        multiple_select = multiple_select + '<optgroup label="' + options[key] + '">';
        optgroup = options[key];
        continue;
      }
      multiple_select = multiple_select + '<option value="' + key + '">"' + options[key] + '"</option>';
    }
    if (optgroup != '') {
      multiple_select = multiple_select + '</optgroup>';
    }
    multiple_select = multiple_select + '</select>';
    $(input).css('display', 'none');
    var select = $(multiple_select).insertAfter(input);
    if ($(input).val().length) {
      var values = $(input).val().split(delimiter);
      for (var i = 0; i < values.length; i++) {
        if (!$(select).find('option[value="' + values[i] + '"]').length) {
          $(select).append('<option value="' + values[i] + '">"' + values[i] + '"</option>');
        }
        $(select).find('option[value="' + values[i] + '"]').attr("selected", "selected");
      }
    }
    $(select).chosen({
      search_contains: true,
    });
    $(select).change(function() {
      var selected = [];
      $(this).find('option:selected').each(function() {
        selected.push($(this).val());
      });
      $(input).val(selected.join(delimiter));
    });
    $(select).parent().find('.chosen-container').width('100%');
    $('<div><a class="direct-input" href="#">' + Drupal.t("Switch to custom text input") + '</a></div>').insertBefore(select).click(
      function() {
        $(input).css('display', 'block');
        $(select).parent().find('.chosen-container').remove();
        $(select).remove();
        $(this).remove();
      });
    return select;
  }

  function image_select(input) {
    images_select(input, '');
  }

  function images_select(input, delimiter) {
    if ('images_select' in window) {
      window.images_select(input, delimiter);
    }
    else {
      function refresh_value(preview, input) {
        var value = [];
        _.each($(preview).find('> div'), function(img) {
          value.push(toAbsoluteURL(window.carbide_baseurl + 'filemanager' + $(img).attr('data-src').split(
              'filemanager')[1]));
        });
        value = value.join(delimiter);
        $(input).val(value);
      }
      $(input).css('display', 'none');
      var preview = $('<div id="images-preview"></div>').insertAfter(input);
      var images = [];
      if (delimiter == '')
        images = [$(input).val()];
      else
        images = $(input).val().split(delimiter);
      for (var i = 0; i < images.length; i++) {
        if (images[i] != '') {
          var img = render_image(images[i], 100, 100);
          $(img).appendTo(preview).append('<div class="delete"></div>').click(function() {
            $(this).remove();
            refresh_value(preview, input);
          });
        }
      }
      var filemanager_input_id = _.uniqueId();
      var filemanager_input = $('<input id="' + filemanager_input_id + '" hidden type="text" name="filemanager">').insertAfter(
        input);
      var popup = $('<a href="javascript:carbide_open_popup(\'' + window.carbide_baseurl +
        'filemanager/filemanager/dialog.php?type=1&popup=1&field_id=' + filemanager_input_id + '\')" class="btn btn-default glyphicon glyphicon-picture" type="button"></a>').insertAfter(
        input);
      $('<div><a class="direct-input" href="#">' + Drupal.t("Switch to custom text input") + '</a></div>').insertAfter(input).click(
        function() {
          $(input).css('display', 'block');
          $(preview).remove();
          $(filemanager_input).remove();
          $(popup).remove();
          $(this).remove();
        });
      var intervalID = setInterval(function() {
        if ($(filemanager_input).val() != '') {
          var srcs = [];
          _.each($(preview).find('> div'), function(img) {
            srcs.push(toAbsoluteURL(window.carbide_baseurl + 'filemanager' + $(img).attr('data-src').split(
                'filemanager')[1]));
          });
          if (_.indexOf(srcs, $(filemanager_input).val()) < 0) {
            if (delimiter == '')
              srcs = [];
            srcs.push(toAbsoluteURL(window.carbide_baseurl + 'filemanager' + $(filemanager_input).val().split(
                'filemanager')[1]));
            var img = render_image(toAbsoluteURL(window.carbide_baseurl + 'filemanager' + $(filemanager_input).val()
                .split('filemanager')[1]), 100, 100);
            if (delimiter == '')
              $(preview).empty();
            $(img).appendTo(preview).append('<div class="delete"></div>').click(function() {
              $(this).remove();
              refresh_value(preview, input);
            });
            $(filemanager_input).val('');
            $(input).val(srcs.join(delimiter));
          }
        }
      }, 200);
      $(input).on("remove", function() {
        clearInterval(intervalID);
      });
      $(input).parent().find('#images-preview').sortable({
        items: '> div',
        placeholder: 'az-sortable-placeholder',
        forcePlaceholderSize: true,
        over: function(event, ui) {
          ui.placeholder.attr('class', ui.helper.attr('class'));
          ui.placeholder.attr('width', ui.helper.attr('width'));
          ui.placeholder.attr('height', ui.helper.attr('height'));
          ui.placeholder.removeClass('ui-sortable-helper');
          ui.placeholder.addClass('az-sortable-placeholder');
        },
        update: function() {
          refresh_value(preview, input);
        },
      });
    }
  }

  function colorpicker(input) {
    if ('wpColorPicker' in $.fn) {
      $(input).wpColorPicker();
      _.defer(function() {
        $(input).wpColorPicker({
          change: _.throttle(function() {
            $(input).trigger('change');
          }, 1000)
        });
      });
    }
    else {
      window.wpColorPickerL10n = {
        "clear": Drupal.t("Clear"),
        "defaultString": Drupal.t("Default"),
        "pick": Drupal.t("Select Color"),
        "current": Drupal.t("Current Color")
      }
      carbide_add_js({
        path: 'vendor/jquery.iris/dist/iris.min.js',
        callback: function() {
          carbide_add_js({
            path: 'js/carbide.iris.min.js',
            callback: function() {
              carbide_add_css('css/color-picker.min.css', function() {
                $(input).wpColorPicker();
              });
            }
          });
        }
      });
    }
  }

  function nouislider(slider, min, max, value, step, target) {
    carbide_add_css('vendor/noUiSlider/jquery.nouislider.min.css', function() {});
    carbide_add_js({
      path: 'vendor/noUiSlider/jquery.nouislider.min.js',
      callback: function() {
        $(slider).noUiSlider({
          start: [(value == '' || isNaN(parseFloat(value)) || value == 'NaN') ? min : parseFloat(value)],
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

  function initBootstrapSlider(slider, min, max, value, step, formatter) {
    carbide_add_css('vendor/bootstrap-slider/bootstrap-slider.min.css', function() {});
    carbide_add_js({
      path: 'vendor/bootstrap-slider/bootstrap-slider.min.js',
      callback: function () {
        if (formatter) {
          $(slider).bootstrapSlider({
            step: parseFloat(step),
            min: parseFloat(min),
            max: parseFloat(max),
            tooltip: 'show',
            value: (value == '' || isNaN(parseFloat(value)) || value == 'NaN') ? min : parseFloat(value),
            formatter: function (value) {
              return value + ' px';
            },
          });
        } else {
          $(slider).bootstrapSlider({
            step: parseFloat(step),
            min: parseFloat(min),
            max: parseFloat(max),
            tooltip: 'show',
            value: (value == '' || isNaN(parseFloat(value)) || value == 'NaN') ? min : parseFloat(value),
          });
        }
      }
    });
  }

  function initBootstrapSwitch(element) {
    carbide_add_css('vendor/bootstrap-switch/bootstrap-switch.min.css', function () {
    });
    carbide_add_js({
      path: 'vendor/bootstrap-switch/bootstrap-switch.min.js',
      callback: function () {
        $(element).find('[type="checkbox"]').bootstrapSwitch({
          onColor: "success",
          onText: "On",
          offText: "Off",
          size: "small",
        }).on('switchChange.bootstrapSwitch', function(event, state) {
          $(this).trigger('change');
        });
      }
    });
  }

  function render_image(value, width, height) {
    if ($.isNumeric(width))
      width = width + 'px';
    if ($.isNumeric(height))
      height = height + 'px';
    var img = $('<div style="background-image: url(' + encodeURI(value) + ');" data-src="' + value + '" ></div>');
    if (width.length > 0)
      $(img).css('width', width);
    if (height.length > 0)
      $(img).css('height', height);
    return img;
  }

  var icons = [];
  if ('carbide_icons' in window)
    icons = window.carbide_icons;

  var carbide_param_types = [
