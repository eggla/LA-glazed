/*!
 * classie v1.0.1
 * class helper functions
 * from bonzo https://github.com/ded/bonzo
 * MIT license
 * 
 * classie.has( elem, 'my-class' ) -> true/false
 * classie.add( elem, 'my-new-class' )
 * classie.remove( elem, 'my-unwanted-class' )
 * classie.toggle( elem, 'my-class' )
 */

/*jshint browser: true, strict: true, undef: true, unused: true */
/*global define: false, module: false */

( function( window ) {

'use strict';

// class helper functions from bonzo https://github.com/ded/bonzo

function classReg( className ) {
  return new RegExp("(^|\\s+)" + className + "(\\s+|$)");
}

// classList support for class management
// altho to be fair, the api sucks because it won't accept multiple classes at once
var hasClass, addClass, removeClass;

if ( 'classList' in document.documentElement ) {
  hasClass = function( elem, c ) {
    return elem.classList.contains( c );
  };
  addClass = function( elem, c ) {
    elem.classList.add( c );
  };
  removeClass = function( elem, c ) {
    elem.classList.remove( c );
  };
}
else {
  hasClass = function( elem, c ) {
    return classReg( c ).test( elem.className );
  };
  addClass = function( elem, c ) {
    if ( !hasClass( elem, c ) ) {
      elem.className = elem.className + ' ' + c;
    }
  };
  removeClass = function( elem, c ) {
    elem.className = elem.className.replace( classReg( c ), ' ' );
  };
}

function toggleClass( elem, c ) {
  var fn = hasClass( elem, c ) ? removeClass : addClass;
  fn( elem, c );
}

var classie = {
  // full names
  hasClass: hasClass,
  addClass: addClass,
  removeClass: removeClass,
  toggleClass: toggleClass,
  // short names
  has: hasClass,
  add: addClass,
  remove: removeClass,
  toggle: toggleClass
};

// transport
if ( typeof define === 'function' && define.amd ) {
  // AMD
  define( classie );
} else if ( typeof exports === 'object' ) {
  // CommonJS
  module.exports = classie;
} else {
  // browser global
  window.classie = classie;
}

})( window );;
/*! modernizr 3.2.0 (Custom Build) | MIT *
 * http://modernizr.com/download/?-cssanimations-prefixed !*/
!function(e,n,t){function r(e,n){return typeof e===n}function o(){var e,n,t,o,i,s,a;for(var f in C)if(C.hasOwnProperty(f)){if(e=[],n=C[f],n.name&&(e.push(n.name.toLowerCase()),n.options&&n.options.aliases&&n.options.aliases.length))for(t=0;t<n.options.aliases.length;t++)e.push(n.options.aliases[t].toLowerCase());for(o=r(n.fn,"function")?n.fn():n.fn,i=0;i<e.length;i++)s=e[i],a=s.split("."),1===a.length?Modernizr[a[0]]=o:(!Modernizr[a[0]]||Modernizr[a[0]]instanceof Boolean||(Modernizr[a[0]]=new Boolean(Modernizr[a[0]])),Modernizr[a[0]][a[1]]=o),g.push((o?"":"no-")+a.join("-"))}}function i(e){var n=w.className,t=Modernizr._config.classPrefix||"";if(x&&(n=n.baseVal),Modernizr._config.enableJSClass){var r=new RegExp("(^|\\s)"+t+"no-js(\\s|$)");n=n.replace(r,"$1"+t+"js$2")}Modernizr._config.enableClasses&&(n+=" "+t+e.join(" "+t),x?w.className.baseVal=n:w.className=n)}function s(e){return e.replace(/([a-z])-([a-z])/g,function(e,n,t){return n+t.toUpperCase()}).replace(/^-/,"")}function a(e,n){return!!~(""+e).indexOf(n)}function f(){return"function"!=typeof n.createElement?n.createElement(arguments[0]):x?n.createElementNS.call(n,"http://www.w3.org/2000/svg",arguments[0]):n.createElement.apply(n,arguments)}function l(e,n){return function(){return e.apply(n,arguments)}}function u(e,n,t){var o;for(var i in e)if(e[i]in n)return t===!1?e[i]:(o=n[e[i]],r(o,"function")?l(o,t||n):o);return!1}function p(e){return e.replace(/([A-Z])/g,function(e,n){return"-"+n.toLowerCase()}).replace(/^ms-/,"-ms-")}function d(){var e=n.body;return e||(e=f(x?"svg":"body"),e.fake=!0),e}function c(e,t,r,o){var i,s,a,l,u="modernizr",p=f("div"),c=d();if(parseInt(r,10))for(;r--;)a=f("div"),a.id=o?o[r]:u+(r+1),p.appendChild(a);return i=f("style"),i.type="text/css",i.id="s"+u,(c.fake?c:p).appendChild(i),c.appendChild(p),i.styleSheet?i.styleSheet.cssText=e:i.appendChild(n.createTextNode(e)),p.id=u,c.fake&&(c.style.background="",c.style.overflow="hidden",l=w.style.overflow,w.style.overflow="hidden",w.appendChild(c)),s=t(p,e),c.fake?(c.parentNode.removeChild(c),w.style.overflow=l,w.offsetHeight):p.parentNode.removeChild(p),!!s}function m(n,r){var o=n.length;if("CSS"in e&&"supports"in e.CSS){for(;o--;)if(e.CSS.supports(p(n[o]),r))return!0;return!1}if("CSSSupportsRule"in e){for(var i=[];o--;)i.push("("+p(n[o])+":"+r+")");return i=i.join(" or "),c("@supports ("+i+") { #modernizr { position: absolute; } }",function(e){return"absolute"==getComputedStyle(e,null).position})}return t}function v(e,n,o,i){function l(){p&&(delete z.style,delete z.modElem)}if(i=r(i,"undefined")?!1:i,!r(o,"undefined")){var u=m(e,o);if(!r(u,"undefined"))return u}for(var p,d,c,v,h,y=["modernizr","tspan"];!z.style;)p=!0,z.modElem=f(y.shift()),z.style=z.modElem.style;for(c=e.length,d=0;c>d;d++)if(v=e[d],h=z.style[v],a(v,"-")&&(v=s(v)),z.style[v]!==t){if(i||r(o,"undefined"))return l(),"pfx"==n?v:!0;try{z.style[v]=o}catch(g){}if(z.style[v]!=h)return l(),"pfx"==n?v:!0}return l(),!1}function h(e,n,t,o,i){var s=e.charAt(0).toUpperCase()+e.slice(1),a=(e+" "+b.join(s+" ")+s).split(" ");return r(n,"string")||r(n,"undefined")?v(a,n,o,i):(a=(e+" "+N.join(s+" ")+s).split(" "),u(a,n,t))}function y(e,n,r){return h(e,t,t,n,r)}var g=[],C=[],_={_version:"3.2.0",_config:{classPrefix:"",enableClasses:!0,enableJSClass:!0,usePrefixes:!0},_q:[],on:function(e,n){var t=this;setTimeout(function(){n(t[e])},0)},addTest:function(e,n,t){C.push({name:e,fn:n,options:t})},addAsyncTest:function(e){C.push({name:null,fn:e})}},Modernizr=function(){};Modernizr.prototype=_,Modernizr=new Modernizr;var w=n.documentElement,x="svg"===w.nodeName.toLowerCase(),S="Moz O ms Webkit",b=_._config.usePrefixes?S.split(" "):[];_._cssomPrefixes=b;var E=function(n){var r,o=prefixes.length,i=e.CSSRule;if("undefined"==typeof i)return t;if(!n)return!1;if(n=n.replace(/^@/,""),r=n.replace(/-/g,"_").toUpperCase()+"_RULE",r in i)return"@"+n;for(var s=0;o>s;s++){var a=prefixes[s],f=a.toUpperCase()+"_"+r;if(f in i)return"@-"+a.toLowerCase()+"-"+n}return!1};_.atRule=E;var N=_._config.usePrefixes?S.toLowerCase().split(" "):[];_._domPrefixes=N;var P={elem:f("modernizr")};Modernizr._q.push(function(){delete P.elem});var z={style:P.elem.style};Modernizr._q.unshift(function(){delete z.style}),_.testAllProps=h;_.prefixed=function(e,n,t){return 0===e.indexOf("@")?E(e):(-1!=e.indexOf("-")&&(e=s(e)),n?h(e,n,t):h(e,"pfx"))};_.testAllProps=y,Modernizr.addTest("cssanimations",y("animationName","a",!0)),o(),i(g),delete _.addTest,delete _.addAsyncTest;for(var T=0;T<Modernizr._q.length;T++)Modernizr._q[T]();e.Modernizr=Modernizr}(window,document);;
/**
 * main.js
 * http://www.codrops.com
 *
 * Licensed under the MIT license.
 * http://www.opensource.org/licenses/mit-license.php
 *
 * Copyright 2015, Codrops
 * http://www.codrops.com
 */
;(function(window) {

	'use strict';

	var support = { animations : Modernizr.cssanimations },
		animEndEventNames = { 'WebkitAnimation' : 'webkitAnimationEnd', 'OAnimation' : 'oAnimationEnd', 'msAnimation' : 'MSAnimationEnd', 'animation' : 'animationend' },
		animEndEventName = animEndEventNames[ Modernizr.prefixed( 'animation' ) ],
		onEndAnimation = function( el, callback ) {
			var onEndCallbackFn = function( ev ) {
				if( support.animations ) {
					if( ev.target != this ) return;
					this.removeEventListener( animEndEventName, onEndCallbackFn );
				}
				if( callback && typeof callback === 'function' ) { callback.call(); }
			};
			if( support.animations ) {
				el.addEventListener( animEndEventName, onEndCallbackFn );
			}
			else {
				onEndCallbackFn();
			}
		};

	function extend( a, b ) {
		for( var key in b ) {
			if( b.hasOwnProperty( key ) ) {
				a[key] = b[key];
			}
		}
		return a;
	}

	function MLMenu(el, options) {
		this.el = el;
		this.options = extend( {}, this.options );
		extend( this.options, options );

		// the menus (<ul>´s)
		this.menus = [].slice.call(this.el.querySelectorAll('.menu__level'));
		// index of current menu
		this.current = 0;

		this._init();
	}

	MLMenu.prototype.options = {
		// show breadcrumbs
		breadcrumbsCtrl : true,
		// initial breadcrumb text
		initialBreadcrumb : 'all',
		// show back button
		backCtrl : true,
		// delay between each menu item sliding animation
		itemsDelayInterval : 60,
		// direction
		direction : 'r2l',
		// callback: item that doesn´t have a submenu gets clicked
		// onItemClick([event], [inner HTML of the clicked item])
		onItemClick : function(ev, itemName) { return false; }
	};

	MLMenu.prototype._init = function() {
		// iterate the existing menus and create an array of menus, more specifically an array of objects where each one holds the info of each menu element and its menu items
		this.menusArr = [];
		var self = this;
		this.menus.forEach(function(menuEl, pos) {
			var menu = {menuEl : menuEl, menuItems : [].slice.call(menuEl.children)};
			self.menusArr.push(menu);

			// set current menu class
			if( pos === self.current ) {
				classie.add(menuEl, 'menu__level--current');
			}
		});

		// create back button
		if( this.options.backCtrl ) {
			this.backCtrl = document.createElement('button');
			this.backCtrl.className = 'menu__back menu__back--hidden';
			this.backCtrl.setAttribute('aria-label', 'Go back');
			this.backCtrl.innerHTML = '<span class="icon icon--arrow-left"></span>';
			this.el.insertBefore(this.backCtrl, this.el.firstChild);
		}


		// create breadcrumbs
		if( self.options.breadcrumbsCtrl ) {
			this.breadcrumbsCtrl = document.createElement('nav');
			this.breadcrumbsCtrl.className = 'menu__breadcrumbs';
			this.el.insertBefore(this.breadcrumbsCtrl, this.el.firstChild);
			// add initial breadcrumb
			this._addBreadcrumb(0);
		}

		// event binding
		this._initEvents();
	};

	MLMenu.prototype._initEvents = function() {
		var self = this;

		for(var i = 0, len = this.menusArr.length; i < len; ++i) {
			this.menusArr[i].menuItems.forEach(function(item, pos) {
				item.querySelector('a').addEventListener('click', function(ev) {
					var submenu = ev.target.getAttribute('data-submenu'),
						itemName = ev.target.innerHTML,
						subMenuEl = self.el.querySelector('ul[data-menu="' + submenu + '"]');

					// check if there's a sub menu for this item
					if( submenu && subMenuEl ) {
						ev.preventDefault();
						// open it
						self._openSubMenu(subMenuEl, pos, itemName);
					}
					else {
						// add class current
						var currentlink = self.el.querySelector('.menu__link--current');
						if( currentlink ) {
							classie.remove(self.el.querySelector('.menu__link--current'), 'menu__link--current');
						}
						classie.add(ev.target, 'menu__link--current');

						// callback
						self.options.onItemClick(ev, itemName);
					}
				});
			});
		}

		// back navigation
		if( this.options.backCtrl ) {
			this.backCtrl.addEventListener('click', function() {
				self._back();
			});
		}
	};

	MLMenu.prototype._openSubMenu = function(subMenuEl, clickPosition, subMenuName) {
		if( this.isAnimating ) {
			return false;
		}
		this.isAnimating = true;

		// save "parent" menu index for back navigation
		this.menusArr[this.menus.indexOf(subMenuEl)].backIdx = this.current;
		// save "parent" menu´s name
		this.menusArr[this.menus.indexOf(subMenuEl)].name = subMenuName;
		// current menu slides out
		this._menuOut(clickPosition);
		// next menu (submenu) slides in
		this._menuIn(subMenuEl, clickPosition);
	};

	MLMenu.prototype._back = function() {
		if( this.isAnimating ) {
			return false;
		}
		this.isAnimating = true;

		// current menu slides out
		this._menuOut();
		// next menu (previous menu) slides in
		var backMenu = this.menusArr[this.menusArr[this.current].backIdx].menuEl;
		this._menuIn(backMenu);

		// remove last breadcrumb
		if( this.options.breadcrumbsCtrl ) {
			this.breadcrumbsCtrl.removeChild(this.breadcrumbsCtrl.lastElementChild);
		}
	};

	MLMenu.prototype._menuOut = function(clickPosition) {
		// the current menu
		var self = this,
			currentMenu = this.menusArr[this.current].menuEl,
			isBackNavigation = typeof clickPosition == 'undefined' ? true : false;

		// slide out current menu items - first, set the delays for the items
		this.menusArr[this.current].menuItems.forEach(function(item, pos) {
			item.style.WebkitAnimationDelay = item.style.animationDelay = isBackNavigation ? parseInt(pos * self.options.itemsDelayInterval) + 'ms' : parseInt(Math.abs(clickPosition - pos) * self.options.itemsDelayInterval) + 'ms';
		});
		// animation class
		if( this.options.direction === 'r2l' ) {
			classie.add(currentMenu, !isBackNavigation ? 'animate-outToLeft' : 'animate-outToRight');
		}
		else {
			classie.add(currentMenu, isBackNavigation ? 'animate-outToLeft' : 'animate-outToRight');
		}
	};

	MLMenu.prototype._menuIn = function(nextMenuEl, clickPosition) {
		var self = this,
			// the current menu
			currentMenu = this.menusArr[this.current].menuEl,
			isBackNavigation = typeof clickPosition == 'undefined' ? true : false,
			// index of the nextMenuEl
			nextMenuIdx = this.menus.indexOf(nextMenuEl),

			nextMenuItems = this.menusArr[nextMenuIdx].menuItems,
			nextMenuItemsTotal = nextMenuItems.length;

		// slide in next menu items - first, set the delays for the items
		nextMenuItems.forEach(function(item, pos) {
			item.style.WebkitAnimationDelay = item.style.animationDelay = isBackNavigation ? parseInt(pos * self.options.itemsDelayInterval) + 'ms' : parseInt(Math.abs(clickPosition - pos) * self.options.itemsDelayInterval) + 'ms';

			// we need to reset the classes once the last item animates in
			// the "last item" is the farthest from the clicked item
			// let's calculate the index of the farthest item
			var farthestIdx = clickPosition <= nextMenuItemsTotal/2 || isBackNavigation ? nextMenuItemsTotal - 1 : 0;

			if( pos === farthestIdx ) {
				onEndAnimation(item, function() {
					// reset classes
					if( self.options.direction === 'r2l' ) {
						classie.remove(currentMenu, !isBackNavigation ? 'animate-outToLeft' : 'animate-outToRight');
						classie.remove(nextMenuEl, !isBackNavigation ? 'animate-inFromRight' : 'animate-inFromLeft');
					}
					else {
						classie.remove(currentMenu, isBackNavigation ? 'animate-outToLeft' : 'animate-outToRight');
						classie.remove(nextMenuEl, isBackNavigation ? 'animate-inFromRight' : 'animate-inFromLeft');
					}
					classie.remove(currentMenu, 'menu__level--current');
					classie.add(nextMenuEl, 'menu__level--current');

					//reset current
					self.current = nextMenuIdx;

					// control back button and breadcrumbs navigation elements
					if( !isBackNavigation ) {
						// show back button
						if( self.options.backCtrl ) {
							classie.remove(self.backCtrl, 'menu__back--hidden');
						}

						// add breadcrumb
						self._addBreadcrumb(nextMenuIdx);
					}
					else if( self.current === 0 && self.options.backCtrl ) {
						// hide back button
						classie.add(self.backCtrl, 'menu__back--hidden');
					}

					// we can navigate again..
					self.isAnimating = false;
				});
			}
		});

		// animation class
		if( this.options.direction === 'r2l' ) {
			classie.add(nextMenuEl, !isBackNavigation ? 'animate-inFromRight' : 'animate-inFromLeft');
		}
		else {
			classie.add(nextMenuEl, isBackNavigation ? 'animate-inFromRight' : 'animate-inFromLeft');
		}
	};

	MLMenu.prototype._addBreadcrumb = function(idx) {
		if( !this.options.breadcrumbsCtrl ) {
			return false;
		}

		var bc = document.createElement('a');
		bc.innerHTML = idx ? this.menusArr[idx].name : this.options.initialBreadcrumb;
		this.breadcrumbsCtrl.appendChild(bc);

		var self = this;
		bc.addEventListener('click', function(ev) {
			ev.preventDefault();

			// do nothing if this breadcrumb is the last one in the list of breadcrumbs
			if( !bc.nextSibling || self.isAnimating ) {
				return false;
			}
			self.isAnimating = true;

			// current menu slides out
			self._menuOut();
			// next menu slides in
			var nextMenu = self.menusArr[idx].menuEl;
			self._menuIn(nextMenu);

			// remove breadcrumbs that are ahead
			var siblingNode;
			while (siblingNode = bc.nextSibling) {
				self.breadcrumbsCtrl.removeChild(siblingNode);
			}
		});
	};

	window.MLMenu = MLMenu;

})(window);;
/**
 * @file
 * A JavaScript file that styles the page with bootstrap classes.
 *
 * @see sass/styles.scss for more info
 */
(function ($, Drupal, window, document, undefined) {
var glazedMenuState = '';

Drupal.behaviors.fullScreenSearch = {
    attach: function(context, settings) {
        function clearSearchForm() {
            $searchForm.toggleClass("hidden"),
            setTimeout(function() {
                $searchFormInput.val("")
            }, 350)
        }
        var $searchButton = $(".full-screen-search-button")
          , $searchForm = $(".full-screen-search-form")
          , $searchFormInput = $searchForm.find(".search-query")
          , escapeCode = 27;
        $searchButton.on("touchstart click", function(event) {
            event.preventDefault(),
            $searchForm.toggleClass("hidden"),
            $searchFormInput.focus()
        }),
        $searchForm.on("touchstart click", function($searchButton) {
            $($searchButton.target).hasClass("search-query") || clearSearchForm()
        }),
        $(document).keydown(function(event) {
            event.which === escapeCode && !$searchForm.hasClass("hidden") && clearSearchForm()
        })
    }
}

Drupal.behaviors.glazed = {
  attach: function(context, settings) {
    var windowHeight = $(window).height();
    glazedMenuGovernor(context);

    // Fix for conditions where Glazed Controls are hidden behind menu
    if (($('#block-system-main .glazed-editor').length)
        && ($('#page-title').length == 0)
        && ($('.glazed-header--top.glazed-header--overlay,.glazed-header--top.glazed-header--fixed').length)) {

        var controlsTop = $('#block-system-main .glazed-editor').scrollTop() - 35;
        var menuBottom = $('.glazed-header--overlay, .glazed-header--fixed').scrollTop() + $('.glazed-header--overlay, .glazed-header--fixed').height();
        var marginTop = menuBottom - controlsTop;
        if (controlsTop < menuBottom) {
            $('#block-system-main .glazed-editor > .controls').css('margin-top', marginTop);
            $('#block-system-main .glazed-editor > .az-section').first().find('> .controls').css('margin-top', marginTop);
        }
    }

    // Helper classes
    $('.glazed-util-full-height', context).css('min-height', windowHeight);

    // User page
    $('.page-user .main-container', context).find('> .row > .col-sm-12')
        .once('glazed')
        .removeClass('col-sm-12')
        .addClass('col-sm-8 col-md-offset-2');

    // Main content layout
    $('.glazed-util-content-center-4-col .main-container', context).find('> .row > .col-sm-12')
        .once('glazed')
        .removeClass('col-sm-12')
        .addClass('col-sm-4 col-md-offset-4');

    $('.glazed-util-content-center-6-col .main-container', context).find('> .row > .col-sm-12')
        .once('glazed')
        .removeClass('col-sm-12')
        .addClass('col-sm-6 col-md-offset-3');

    $('.glazed-util-content-center-8-col .main-container', context).find('> .row > .col-sm-12')
        .once('glazed')
        .removeClass('col-sm-12')
        .addClass('col-sm-8 col-md-offset-2');

    $('.glazed-util-content-center-10-col .main-container', context).find('> .row > .col-sm-12')
        .once('glazed')
        .removeClass('col-sm-12')
        .addClass('col-sm-8 col-md-offset-1');

    // Breadcrumbs
    $('.breadcrumb a', context)
        .once('glazed')
        .after(' <span class="glazed-breadcrumb-spacer">/</span> ');

    // Comments
    $('#comments .links a', context)
        .once('glazed')
        .addClass('btn-sm');

    $('#comments .links .comment-reply a', context)
        .once('glazed')
        .addClass('btn-primary');

    // Sidebar nav blocks
    $('.region-sidebar-first .block .view ul, .region-sidebar-second .block .view ul', context)
        .once('glazed')
        .addClass('nav');

    // Portfolio content

    // Blog styling

    // Events styling
    $('.node-event [class^="field-event-"]', context)
        .once('glazed').each(function() {
          $(this).prev().andSelf().wrapAll('<div class="row">');
        });

    $('.node-event .field-label', context)
        .once('glazed')
        .addClass('col-sm-3');

    $('.node-event [class^="field-event-"]', context)
        .once('glazed')
        .addClass('col-sm-9');

    $('.node-event .field-event-location', context)
        .once('glazed')
        .wrapInner('<a href="https://maps.google.com/?q=' + $('.node-event .field-event-location').text() + '">');
  }
};

// Create underscore debounce function if it doesn't exist already
if(typeof _ != 'function'){
  window._ = {};
  window._.debounce = function(func, wait, immediate) {
    var timeout, result;

    var later = function(context, args) {
      timeout = null;
      if (args) result = func.apply(context, args);
    };

    var debounced = restArgs(function(args) {
      var callNow = immediate && !timeout;
      if (timeout) clearTimeout(timeout);
      if (callNow) {
        timeout = setTimeout(later, wait);
        result = func.apply(this, args);
      } else if (!immediate) {
        timeout = _.delay(later, wait, this, args);
      }

      return result;
    });

    debounced.cancel = function() {
      clearTimeout(timeout);
      timeout = null;
    };

    return debounced;
  };
  var restArgs = function(func, startIndex) {
    startIndex = startIndex == null ? func.length - 1 : +startIndex;
    return function() {
      var length = Math.max(arguments.length - startIndex, 0);
      var rest = Array(length);
      for (var index = 0; index < length; index++) {
        rest[index] = arguments[index + startIndex];
      }
      switch (startIndex) {
        case 0: return func.call(this, rest);
        case 1: return func.call(this, arguments[0], rest);
        case 2: return func.call(this, arguments[0], arguments[1], rest);
      }
      var args = Array(startIndex + 1);
      for (index = 0; index < startIndex; index++) {
        args[index] = arguments[index];
      }
      args[startIndex] = rest;
      return func.apply(this, args);
    };
  }
  _.delay = restArgs(function(func, wait, args) {
    return setTimeout(function() {
      return func.apply(null, args);
    }, wait);
  });

}

$(window).resize(_.debounce(function(){
    if ($('#glazed-main-menu .menu').length == 0) {
      return false;
    }
    glazedMenuGovernorBodyClass(document);
    glazedMenuGovernor(document);
}, 250));

function glazedMenuGovernor(context) {
  // Bootstrap dropdown multi-column smart menu
  var navBreak = 1200;
  if('glazedNavBreakpoint' in window) {
    navBreak = window.glazedNavBreakpoint;
  }
  if (($('.body--glazed-header-side').length == 0) && $(window).width() > navBreak) {
    if (glazedMenuState == 'top') {
      return false;
    }
    $('.glazed-header--side').removeClass('glazed-header--side').addClass('glazed-header--top');
    $('#glazed-main-menu .menu__breadcrumbs').remove();
    $('.menu__level').removeClass('menu__level').css('margin-top', 0).css('height', 'auto');
    $('.menu__item').removeClass('menu__item');
    $('[data-submenu]').removeAttr('data-submenu');
    $('[data-menu]').removeAttr('data-menu');

    var bodyWidth = $('body').innerWidth();
    var margin = 10;
    $('#glazed-main-menu .menu .dropdown-menu', context)
      .each(function() {
        var width = $(this).width();
        if ($(this).find('.glazed-megamenu__heading').length > 0) {
          var columns = $(this).find('.glazed-megamenu__heading').length;
        }
        else {
          var columns = Math.floor($(this).find('li').length / 8) + 1;
        }
        if (columns > 2) {
          $(this).css({
              'width' : '100%', // Full Width Mega Menu
              'left:' : '0',
          }).parent().css({
              'position' : 'static',
          }).find('.dropdown-menu >li').css({
              'width' : 100 / columns + '%',
          });
        }
        else {
          var $this = $(this);
          if (columns > 1) {
            // Accounts for 1px border.
            $this
              .css('min-width', width * columns + 2)
              .find('>li').css('width', width)
          }
          // Workaround for drop down overlapping.
          // See https://github.com/twbs/bootstrap/issues/13477.
          var $topLevelItem = $this.parent();
          // Set timeout to let the rendering threads catch up.
          setTimeout(function() {
            var delta = Math.round(bodyWidth - $topLevelItem.offset().left - $this.outerWidth() - margin);
            // Only fix items that went out of screen.
            if (delta < 0) {
              $this.css('left', delta + 'px');
            }
          }, 0)
        }
      });
    glazedMenuState = 'top';
  }
  // Mobile Menu with sliding panels and breadcrumb
  // @dsee glazed-mobile-nav.js
  else {
    if (glazedMenuState == 'side') {
      return false;
    }
    // Temporary hiding while settings up @see #290
    $('#glazed-main-menu').hide();
    // Set up classes
    $('.glazed-header--top').removeClass('glazed-header--top').addClass('glazed-header--side');
    // Remove split-megamenu columns
    $('#glazed-main-menu .menu .dropdown-menu, #glazed-main-menu .menu .dropdown-menu li').removeAttr('style');
    $('#glazed-main-menu .menu').addClass('menu__level');
    $('#glazed-main-menu .menu .dropdown-menu').addClass('menu__level');
    $('#glazed-main-menu .menu .glazed-megamenu').addClass('menu__level');
    $('#glazed-main-menu .menu a').addClass('menu__link');
    $('#glazed-main-menu .menu li').addClass('menu__item');
    // Set up data attributes
    $('#glazed-main-menu .menu a.dropdown-toggle').each(function( index ) {
        $(this).attr('data-submenu', $(this).text())
          .next().attr('data-menu', $(this).text());
      });
    $('#glazed-main-menu .menu a.glazed-megamenu__heading').each(function( index ) {
        $(this).attr('data-submenu', $(this).text())
          .next().attr('data-menu', $(this).text());
      });

      var bc = ($('#glazed-main-menu .menu .dropdown-menu').length > 0);
      var menuEl = document.getElementById('glazed-main-menu'),
          mlmenu = new MLMenu(menuEl, {
              breadcrumbsCtrl : bc, // show breadcrumbs
              initialBreadcrumb : 'menu', // initial breadcrumb text
              backCtrl : false, // show back button
              itemsDelayInterval : 10, // delay between each menu item sliding animation
              // onItemClick: loadDummyData // callback: item that doesn´t have a submenu gets clicked - onItemClick([event], [inner HTML of the clicked item])
          });
      // mobile menu toggle
      $('#glazed-menu-toggle').once('glazedMenuToggle').click(function() {
        $(this).toggleClass( 'navbar-toggle--active' );
        $(menuEl).toggleClass( 'menu--open' );
        $('body').toggleClass( 'body--glazed-nav-mobile--open' );
      });
      $('#glazed-main-menu').show();

      // See if logo  or block content overlaps menu and apply correction
      if ($('.wrap-branding').length > 0) {
        var brandingBottom = $('.wrap-branding').position().top + jQuery('.wrap-branding').height();
      }
      else {
        var brandingBottom = 0;
      }
      var $lastBlock = $('#glazed-main-menu .block:not(.block-menu)').last();
      if ($lastBlock.length > 0) {
        var lastBlockBottom = $lastBlock.position().top + $lastBlock.height();
      }
      else {
        var lastBlockBottom = 0;
      }

      // Show menu after completing setup
      // See if blocks overlap menu and apply correction
      if (($('.body--glazed-header-side').length > 0) && ($(window).width() > navBreak) && ($lastBlock.length > 0) && (brandingBottom > 0)) {
        $('#glazed-main-menu').css('padding-top', brandingBottom + 40);
      }
      if (($lastBlock.length > 0) && (lastBlockBottom > 0)) {
        $('.menu__breadcrumbs, .menu__level').css('margin-top', lastBlockBottom-40);
        var offset = 40 + lastBlockBottom;
        $('.glazed-header--side .menu__level').css('height', 'calc(100vh - ' + offset + 'px)');
      }
      else if (($('.body--glazed-header-side').length > 0) && ($('.wrap-branding').length > 0) && (brandingBottom > 120)) {
        $('.menu__breadcrumbs, .menu__level').css('margin-top', brandingBottom-40);
        var offset = 40 + brandingBottom;
        $('.glazed-header--side .menu__level').css('height', 'calc(100vh - ' + offset + 'px)');
      }


    glazedMenuState = 'side';
  }

}

function glazedMenuGovernorBodyClass() {
  var navBreak = 1200;
  if('glazedNavBreakpoint' in window) {
    navBreak = window.glazedNavBreakpoint;
  }
  if ($(window).width() > navBreak) {
    $('.body--glazed-nav-mobile').removeClass('body--glazed-nav-mobile').addClass('body--glazed-nav-desktop');
  }
  else {
    $('.body--glazed-nav-desktop').removeClass('body--glazed-nav-desktop').addClass('body--glazed-nav-mobile');
  }
}

})(jQuery, Drupal, this, this.document);
;
