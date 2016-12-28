
  /**
   * Carbide object, to contain shortcode and html processing functions.
   */
  var carbide = {};

  /**
   * Namespace for Carbide shortcode functions
   */
  carbide.shortcode = {
    next: function(tag, text, index) {
      var re = carbide.shortcode.regexp(tag),
        match, result;

      re.lastIndex = index || 0;
      match = re.exec(text);

      if (!match) {
        return;
      }
      if ('[' === match[1] && ']' === match[7]) {
        return carbide.shortcode.next(tag, text, re.lastIndex);
      }

      result = {
        index: match.index,
        content: match[0],
        shortcode: carbide.shortcode.fromMatch(match)
      };
      if (match[1]) {
        result.match = result.match.slice(1);
        result.index++;
      }
      if (match[7]) {
        result.match = result.match.slice(0, -1);
      }

      return result;
    },
    replace: function(tag, text, callback) {
      return text.replace(carbide.shortcode.regexp(tag), function(match, left, tag, attrs, slash, content,
        closing, right) {
        if (left === '[' && right === ']') {
          return match;
        }
        var result = callback(carbide.shortcode.fromMatch(arguments));
        return result ? left + result + right : match;
      });
    },
    string: function(options) {
      return new carbide.shortcode(options).string();
    },
    regexp: _.memoize(function(tag) {
      return new RegExp('\\[(\\[?)(' + tag +
        ')(?![\\w-])([^\\]\\/]*(?:\\/(?!\\])[^\\]\\/]*)*?)(?:(\\/)\\]|\\](?:([^\\[]*(?:\\[(?!\\/\\2\\])[^\\[]*)*)(\\[\\/\\2\\]))?)(\\]?)',
        'g');
    }),
    attrs: _.memoize(function(text) {
      var named = {},
        numeric = [],
        pattern, match;
      pattern =
        /(\w+)\s*=\s*"([^"]*)"(?:\s|$)|(\w+)\s*=\s*\'([^\']*)\'(?:\s|$)|(\w+)\s*=\s*([^\s\'"]+)(?:\s|$)|"([^"]*)"(?:\s|$)|(\S+)(?:\s|$)/g;
      text = text.replace(/[\u00a0\u200b]/g, ' ');
      while ((match = pattern.exec(text))) {
        if (match[1]) {
          named[match[1].toLowerCase()] = match[2];
        }
        else if (match[3]) {
          named[match[3].toLowerCase()] = match[4];
        }
        else if (match[5]) {
          named[match[5].toLowerCase()] = match[6];
        }
        else if (match[7]) {
          numeric.push(match[7]);
        }
        else if (match[8]) {
          numeric.push(match[8]);
        }
      }

      return {
        named: named,
        numeric: numeric
      };
    }),
    fromMatch: function(match) {
      var type;

      if (match[4]) {
        type = 'self-closing';
      }
      else if (match[6]) {
        type = 'closed';
      }
      else {
        type = 'single';
      }

      return new carbide.shortcode({
        tag: match[2],
        attrs: match[3],
        type: type,
        content: match[5]
      });
    }
  };
  carbide.shortcode = _.extend(function(options) {
    _.extend(this, _.pick(options || {}, 'tag', 'attrs', 'type', 'content'));

    var attrs = this.attrs;
    this.attrs = {
      named: {},
      numeric: []
    };

    if (!attrs) {
      return;
    }
    if (_.isString(attrs)) {
      this.attrs = carbide.shortcode.attrs(attrs);
    }
    else if (_.isEqual(_.keys(attrs), ['named', 'numeric'])) {
      this.attrs = attrs;
    }
    else {
      _.each(options.attrs, function(value, key) {
        this.set(key, value);
      }, this);
    }
  }, carbide.shortcode);

  _.extend(carbide.shortcode.prototype, {
    get: function(attr) {
      return this.attrs[_.isNumber(attr) ? 'numeric' : 'named'][attr];
    },
    set: function(attr, value) {
      this.attrs[_.isNumber(attr) ? 'numeric' : 'named'][attr] = value;
      return this;
    },
    string: function() {
      var text = '[' + this.tag;

      _.each(this.attrs.numeric, function(value) {
        if (/\s/.test(value)) {
          text += ' "' + value + '"';
        }
        else {
          text += ' ' + value;
        }
      });

      _.each(this.attrs.named, function(value, name) {
        text += ' ' + name + '="' + value + '"';
      });
      if ('single' === this.type) {
        return text + ']';
      }
      else if ('self-closing' === this.type) {
        return text + ' /]';
      }
      text += ']';

      if (this.content) {
        text += this.content;
      }
      return text + '[/' + this.tag + ']';
    }
  });

  /**
   * Namespace for Carbide html functions
   */
  carbide.html = _.extend(carbide.html || {}, {
    attrs: function(content) {
      var result, attrs;
      if ('/' === content[content.length - 1]) {
        content = content.slice(0, -1);
      }

      result = carbide.shortcode.attrs(content);
      attrs = result.named;

      _.each(result.numeric, function(key) {
        if (/\s/.test(key)) {
          return;
        }

        attrs[key] = '';
      });

      return attrs;
    },
    string: function(options) {
      var text = '<' + options.tag,
        content = options.content || '';

      _.each(options.attrs, function(value, attr) {
        text += ' ' + attr;
        if ('' === value) {
          return;
        }
        if (_.isBoolean(value)) {
          value = value ? 'true' : 'false';
        }

        text += '="' + value + '"';
      });
      if (options.single) {
        return text + ' />';
      }
      text += '>';
      text += _.isObject(content) ? carbide.html.string(content) : content;

      return text + '</' + options.tag + '>';
    }
  });