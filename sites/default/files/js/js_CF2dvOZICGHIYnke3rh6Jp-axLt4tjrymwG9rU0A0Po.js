/* Modernizr 2.7.1 (Custom Build) | MIT & BSD
 * Build: http://modernizr.com/download/#-inputtypes-svg-touch-cssclasses-addtest-teststyles-prefixes-elem_details
 */
;window.Modernizr=function(a,b,c){function y(a){j.cssText=a}function z(a,b){return y(n.join(a+";")+(b||""))}function A(a,b){return typeof a===b}function B(a,b){return!!~(""+a).indexOf(b)}function C(a,b,d){for(var e in a){var f=b[a[e]];if(f!==c)return d===!1?a[e]:A(f,"function")?f.bind(d||b):f}return!1}function D(){e.inputtypes=function(a){for(var d=0,e,f,h,i=a.length;d<i;d++)k.setAttribute("type",f=a[d]),e=k.type!=="text",e&&(k.value=l,k.style.cssText="position:absolute;visibility:hidden;",/^range$/.test(f)&&k.style.WebkitAppearance!==c?(g.appendChild(k),h=b.defaultView,e=h.getComputedStyle&&h.getComputedStyle(k,null).WebkitAppearance!=="textfield"&&k.offsetHeight!==0,g.removeChild(k)):/^(search|tel)$/.test(f)||(/^(url|email)$/.test(f)?e=k.checkValidity&&k.checkValidity()===!1:e=k.value!=l)),q[a[d]]=!!e;return q}("search tel url email datetime date month week time datetime-local number range color".split(" "))}var d="2.7.1",e={},f=!0,g=b.documentElement,h="modernizr",i=b.createElement(h),j=i.style,k=b.createElement("input"),l=":)",m={}.toString,n=" -webkit- -moz- -o- -ms- ".split(" "),o={svg:"http://www.w3.org/2000/svg"},p={},q={},r={},s=[],t=s.slice,u,v=function(a,c,d,e){var f,i,j,k,l=b.createElement("div"),m=b.body,n=m||b.createElement("body");if(parseInt(d,10))while(d--)j=b.createElement("div"),j.id=e?e[d]:h+(d+1),l.appendChild(j);return f=["&#173;",'<style id="s',h,'">',a,"</style>"].join(""),l.id=h,(m?l:n).innerHTML+=f,n.appendChild(l),m||(n.style.background="",n.style.overflow="hidden",k=g.style.overflow,g.style.overflow="hidden",g.appendChild(n)),i=c(l,a),m?l.parentNode.removeChild(l):(n.parentNode.removeChild(n),g.style.overflow=k),!!i},w={}.hasOwnProperty,x;!A(w,"undefined")&&!A(w.call,"undefined")?x=function(a,b){return w.call(a,b)}:x=function(a,b){return b in a&&A(a.constructor.prototype[b],"undefined")},Function.prototype.bind||(Function.prototype.bind=function(b){var c=this;if(typeof c!="function")throw new TypeError;var d=t.call(arguments,1),e=function(){if(this instanceof e){var a=function(){};a.prototype=c.prototype;var f=new a,g=c.apply(f,d.concat(t.call(arguments)));return Object(g)===g?g:f}return c.apply(b,d.concat(t.call(arguments)))};return e}),p.touch=function(){var c;return"ontouchstart"in a||a.DocumentTouch&&b instanceof DocumentTouch?c=!0:v(["@media (",n.join("touch-enabled),("),h,")","{#modernizr{top:9px;position:absolute}}"].join(""),function(a){c=a.offsetTop===9}),c},p.svg=function(){return!!b.createElementNS&&!!b.createElementNS(o.svg,"svg").createSVGRect};for(var E in p)x(p,E)&&(u=E.toLowerCase(),e[u]=p[E](),s.push((e[u]?"":"no-")+u));return e.input||D(),e.addTest=function(a,b){if(typeof a=="object")for(var d in a)x(a,d)&&e.addTest(d,a[d]);else{a=a.toLowerCase();if(e[a]!==c)return e;b=typeof b=="function"?b():b,typeof f!="undefined"&&f&&(g.className+=" "+(b?"":"no-")+a),e[a]=b}return e},y(""),i=k=null,e._version=d,e._prefixes=n,e.testStyles=v,g.className=g.className.replace(/(^|\s)no-js(\s|$)/,"$1$2")+(f?" js "+s.join(" "):""),e}(this,this.document),Modernizr.addTest("details",function(){var a=document,b=a.createElement("details"),c,d,e;return"open"in b?(d=a.body||function(){var b=a.documentElement;return c=!0,b.insertBefore(a.createElement("body"),b.firstElementChild||b.firstChild)}(),b.innerHTML="<summary>a</summary>b",b.style.display="block",d.appendChild(b),e=b.offsetHeight,b.open=!0,e=e!=b.offsetHeight,d.removeChild(b),c&&d.parentNode.removeChild(d),e):!1});;
//     Underscore.js 1.5.0
//     http://underscorejs.org
//     (c) 2009-2011 Jeremy Ashkenas, DocumentCloud Inc.
//     (c) 2011-2013 Jeremy Ashkenas, DocumentCloud and Investigative Reporters & Editors
//     Underscore may be freely distributed under the MIT license.
!function(){var n=this,t=n._,r={},e=Array.prototype,u=Object.prototype,i=Function.prototype,a=e.push,o=e.slice,c=e.concat,l=u.toString,f=u.hasOwnProperty,s=e.forEach,p=e.map,v=e.reduce,h=e.reduceRight,d=e.filter,g=e.every,m=e.some,y=e.indexOf,b=e.lastIndexOf,x=Array.isArray,_=Object.keys,w=i.bind,j=function(n){return n instanceof j?n:this instanceof j?(this._wrapped=n,void 0):new j(n)};"undefined"!=typeof exports?("undefined"!=typeof module&&module.exports&&(exports=module.exports=j),exports._=j):n._=j,j.VERSION="1.5.0";var A=j.each=j.forEach=function(n,t,e){if(null!=n)if(s&&n.forEach===s)n.forEach(t,e);else if(n.length===+n.length){for(var u=0,i=n.length;i>u;u++)if(t.call(e,n[u],u,n)===r)return}else for(var a in n)if(j.has(n,a)&&t.call(e,n[a],a,n)===r)return};j.map=j.collect=function(n,t,r){var e=[];return null==n?e:p&&n.map===p?n.map(t,r):(A(n,function(n,u,i){e.push(t.call(r,n,u,i))}),e)};var E="Reduce of empty array with no initial value";j.reduce=j.foldl=j.inject=function(n,t,r,e){var u=arguments.length>2;if(null==n&&(n=[]),v&&n.reduce===v)return e&&(t=j.bind(t,e)),u?n.reduce(t,r):n.reduce(t);if(A(n,function(n,i,a){u?r=t.call(e,r,n,i,a):(r=n,u=!0)}),!u)throw new TypeError(E);return r},j.reduceRight=j.foldr=function(n,t,r,e){var u=arguments.length>2;if(null==n&&(n=[]),h&&n.reduceRight===h)return e&&(t=j.bind(t,e)),u?n.reduceRight(t,r):n.reduceRight(t);var i=n.length;if(i!==+i){var a=j.keys(n);i=a.length}if(A(n,function(o,c,l){c=a?a[--i]:--i,u?r=t.call(e,r,n[c],c,l):(r=n[c],u=!0)}),!u)throw new TypeError(E);return r},j.find=j.detect=function(n,t,r){var e;return O(n,function(n,u,i){return t.call(r,n,u,i)?(e=n,!0):void 0}),e},j.filter=j.select=function(n,t,r){var e=[];return null==n?e:d&&n.filter===d?n.filter(t,r):(A(n,function(n,u,i){t.call(r,n,u,i)&&e.push(n)}),e)},j.reject=function(n,t,r){return j.filter(n,function(n,e,u){return!t.call(r,n,e,u)},r)},j.every=j.all=function(n,t,e){t||(t=j.identity);var u=!0;return null==n?u:g&&n.every===g?n.every(t,e):(A(n,function(n,i,a){return(u=u&&t.call(e,n,i,a))?void 0:r}),!!u)};var O=j.some=j.any=function(n,t,e){t||(t=j.identity);var u=!1;return null==n?u:m&&n.some===m?n.some(t,e):(A(n,function(n,i,a){return u||(u=t.call(e,n,i,a))?r:void 0}),!!u)};j.contains=j.include=function(n,t){return null==n?!1:y&&n.indexOf===y?n.indexOf(t)!=-1:O(n,function(n){return n===t})},j.invoke=function(n,t){var r=o.call(arguments,2),e=j.isFunction(t);return j.map(n,function(n){return(e?t:n[t]).apply(n,r)})},j.pluck=function(n,t){return j.map(n,function(n){return n[t]})},j.where=function(n,t,r){return j.isEmpty(t)?r?void 0:[]:j[r?"find":"filter"](n,function(n){for(var r in t)if(t[r]!==n[r])return!1;return!0})},j.findWhere=function(n,t){return j.where(n,t,!0)},j.max=function(n,t,r){if(!t&&j.isArray(n)&&n[0]===+n[0]&&n.length<65535)return Math.max.apply(Math,n);if(!t&&j.isEmpty(n))return-1/0;var e={computed:-1/0,value:-1/0};return A(n,function(n,u,i){var a=t?t.call(r,n,u,i):n;a>e.computed&&(e={value:n,computed:a})}),e.value},j.min=function(n,t,r){if(!t&&j.isArray(n)&&n[0]===+n[0]&&n.length<65535)return Math.min.apply(Math,n);if(!t&&j.isEmpty(n))return 1/0;var e={computed:1/0,value:1/0};return A(n,function(n,u,i){var a=t?t.call(r,n,u,i):n;a<e.computed&&(e={value:n,computed:a})}),e.value},j.shuffle=function(n){var t,r=0,e=[];return A(n,function(n){t=j.random(r++),e[r-1]=e[t],e[t]=n}),e};var F=function(n){return j.isFunction(n)?n:function(t){return t[n]}};j.sortBy=function(n,t,r){var e=F(t);return j.pluck(j.map(n,function(n,t,u){return{value:n,index:t,criteria:e.call(r,n,t,u)}}).sort(function(n,t){var r=n.criteria,e=t.criteria;if(r!==e){if(r>e||r===void 0)return 1;if(e>r||e===void 0)return-1}return n.index<t.index?-1:1}),"value")};var k=function(n,t,r,e){var u={},i=F(null==t?j.identity:t);return A(n,function(t,a){var o=i.call(r,t,a,n);e(u,o,t)}),u};j.groupBy=function(n,t,r){return k(n,t,r,function(n,t,r){(j.has(n,t)?n[t]:n[t]=[]).push(r)})},j.countBy=function(n,t,r){return k(n,t,r,function(n,t){j.has(n,t)||(n[t]=0),n[t]++})},j.sortedIndex=function(n,t,r,e){r=null==r?j.identity:F(r);for(var u=r.call(e,t),i=0,a=n.length;a>i;){var o=i+a>>>1;r.call(e,n[o])<u?i=o+1:a=o}return i},j.toArray=function(n){return n?j.isArray(n)?o.call(n):n.length===+n.length?j.map(n,j.identity):j.values(n):[]},j.size=function(n){return null==n?0:n.length===+n.length?n.length:j.keys(n).length},j.first=j.head=j.take=function(n,t,r){return null==n?void 0:null==t||r?n[0]:o.call(n,0,t)},j.initial=function(n,t,r){return o.call(n,0,n.length-(null==t||r?1:t))},j.last=function(n,t,r){return null==n?void 0:null==t||r?n[n.length-1]:o.call(n,Math.max(n.length-t,0))},j.rest=j.tail=j.drop=function(n,t,r){return o.call(n,null==t||r?1:t)},j.compact=function(n){return j.filter(n,j.identity)};var R=function(n,t,r){return t&&j.every(n,j.isArray)?c.apply(r,n):(A(n,function(n){j.isArray(n)||j.isArguments(n)?t?a.apply(r,n):R(n,t,r):r.push(n)}),r)};j.flatten=function(n,t){return R(n,t,[])},j.without=function(n){return j.difference(n,o.call(arguments,1))},j.uniq=j.unique=function(n,t,r,e){j.isFunction(t)&&(e=r,r=t,t=!1);var u=r?j.map(n,r,e):n,i=[],a=[];return A(u,function(r,e){(t?e&&a[a.length-1]===r:j.contains(a,r))||(a.push(r),i.push(n[e]))}),i},j.union=function(){return j.uniq(j.flatten(arguments,!0))},j.intersection=function(n){var t=o.call(arguments,1);return j.filter(j.uniq(n),function(n){return j.every(t,function(t){return j.indexOf(t,n)>=0})})},j.difference=function(n){var t=c.apply(e,o.call(arguments,1));return j.filter(n,function(n){return!j.contains(t,n)})},j.zip=function(){return j.unzip.apply(j,o.call(arguments))},j.unzip=function(){for(var n=j.max(j.pluck(arguments,"length").concat(0)),t=new Array(n),r=0;n>r;r++)t[r]=j.pluck(arguments,""+r);return t},j.object=function(n,t){if(null==n)return{};for(var r={},e=0,u=n.length;u>e;e++)t?r[n[e]]=t[e]:r[n[e][0]]=n[e][1];return r},j.indexOf=function(n,t,r){if(null==n)return-1;var e=0,u=n.length;if(r){if("number"!=typeof r)return e=j.sortedIndex(n,t),n[e]===t?e:-1;e=0>r?Math.max(0,u+r):r}if(y&&n.indexOf===y)return n.indexOf(t,r);for(;u>e;e++)if(n[e]===t)return e;return-1},j.lastIndexOf=function(n,t,r){if(null==n)return-1;var e=null!=r;if(b&&n.lastIndexOf===b)return e?n.lastIndexOf(t,r):n.lastIndexOf(t);for(var u=e?r:n.length;u--;)if(n[u]===t)return u;return-1},j.range=function(n,t,r){arguments.length<=1&&(t=n||0,n=0),r=arguments[2]||1;for(var e=Math.max(Math.ceil((t-n)/r),0),u=0,i=new Array(e);e>u;)i[u++]=n,n+=r;return i};var M=function(){};j.bind=function(n,t){var r,e;if(w&&n.bind===w)return w.apply(n,o.call(arguments,1));if(!j.isFunction(n))throw new TypeError;return r=o.call(arguments,2),e=function(){if(!(this instanceof e))return n.apply(t,r.concat(o.call(arguments)));M.prototype=n.prototype;var u=new M;M.prototype=null;var i=n.apply(u,r.concat(o.call(arguments)));return Object(i)===i?i:u}},j.partial=function(n){var t=o.call(arguments,1);return function(){return n.apply(this,t.concat(o.call(arguments)))}},j.bindAll=function(n){var t=o.call(arguments,1);if(0===t.length)throw new Error("bindAll must be passed function names");return A(t,function(t){n[t]=j.bind(n[t],n)}),n},j.memoize=function(n,t){var r={};return t||(t=j.identity),function(){var e=t.apply(this,arguments);return j.has(r,e)?r[e]:r[e]=n.apply(this,arguments)}},j.delay=function(n,t){var r=o.call(arguments,2);return setTimeout(function(){return n.apply(null,r)},t)},j.defer=function(n){return j.delay.apply(j,[n,1].concat(o.call(arguments,1)))},j.throttle=function(n,t,r){var e,u,i,a=null,o=0;r||(r={});var c=function(){o=new Date,a=null,i=n.apply(e,u)};return function(){var l=new Date;o||r.leading!==!1||(o=l);var f=t-(l-o);return e=this,u=arguments,0>=f?(clearTimeout(a),a=null,o=l,i=n.apply(e,u)):a||r.trailing===!1||(a=setTimeout(c,f)),i}},j.debounce=function(n,t,r){var e,u=null;return function(){var i=this,a=arguments,o=function(){u=null,r||(e=n.apply(i,a))},c=r&&!u;return clearTimeout(u),u=setTimeout(o,t),c&&(e=n.apply(i,a)),e}},j.once=function(n){var t,r=!1;return function(){return r?t:(r=!0,t=n.apply(this,arguments),n=null,t)}},j.wrap=function(n,t){return function(){var r=[n];return a.apply(r,arguments),t.apply(this,r)}},j.compose=function(){var n=arguments;return function(){for(var t=arguments,r=n.length-1;r>=0;r--)t=[n[r].apply(this,t)];return t[0]}},j.after=function(n,t){return function(){return--n<1?t.apply(this,arguments):void 0}},j.keys=_||function(n){if(n!==Object(n))throw new TypeError("Invalid object");var t=[];for(var r in n)j.has(n,r)&&t.push(r);return t},j.values=function(n){var t=[];for(var r in n)j.has(n,r)&&t.push(n[r]);return t},j.pairs=function(n){var t=[];for(var r in n)j.has(n,r)&&t.push([r,n[r]]);return t},j.invert=function(n){var t={};for(var r in n)j.has(n,r)&&(t[n[r]]=r);return t},j.functions=j.methods=function(n){var t=[];for(var r in n)j.isFunction(n[r])&&t.push(r);return t.sort()},j.extend=function(n){return A(o.call(arguments,1),function(t){if(t)for(var r in t)n[r]=t[r]}),n},j.pick=function(n){var t={},r=c.apply(e,o.call(arguments,1));return A(r,function(r){r in n&&(t[r]=n[r])}),t},j.omit=function(n){var t={},r=c.apply(e,o.call(arguments,1));for(var u in n)j.contains(r,u)||(t[u]=n[u]);return t},j.defaults=function(n){return A(o.call(arguments,1),function(t){if(t)for(var r in t)n[r]===void 0&&(n[r]=t[r])}),n},j.clone=function(n){return j.isObject(n)?j.isArray(n)?n.slice():j.extend({},n):n},j.tap=function(n,t){return t(n),n};var S=function(n,t,r,e){if(n===t)return 0!==n||1/n==1/t;if(null==n||null==t)return n===t;n instanceof j&&(n=n._wrapped),t instanceof j&&(t=t._wrapped);var u=l.call(n);if(u!=l.call(t))return!1;switch(u){case"[object String]":return n==String(t);case"[object Number]":return n!=+n?t!=+t:0==n?1/n==1/t:n==+t;case"[object Date]":case"[object Boolean]":return+n==+t;case"[object RegExp]":return n.source==t.source&&n.global==t.global&&n.multiline==t.multiline&&n.ignoreCase==t.ignoreCase}if("object"!=typeof n||"object"!=typeof t)return!1;for(var i=r.length;i--;)if(r[i]==n)return e[i]==t;var a=n.constructor,o=t.constructor;if(a!==o&&!(j.isFunction(a)&&a instanceof a&&j.isFunction(o)&&o instanceof o))return!1;r.push(n),e.push(t);var c=0,f=!0;if("[object Array]"==u){if(c=n.length,f=c==t.length)for(;c--&&(f=S(n[c],t[c],r,e)););}else{for(var s in n)if(j.has(n,s)&&(c++,!(f=j.has(t,s)&&S(n[s],t[s],r,e))))break;if(f){for(s in t)if(j.has(t,s)&&!c--)break;f=!c}}return r.pop(),e.pop(),f};j.isEqual=function(n,t){return S(n,t,[],[])},j.isEmpty=function(n){if(null==n)return!0;if(j.isArray(n)||j.isString(n))return 0===n.length;for(var t in n)if(j.has(n,t))return!1;return!0},j.isElement=function(n){return!(!n||1!==n.nodeType)},j.isArray=x||function(n){return"[object Array]"==l.call(n)},j.isObject=function(n){return n===Object(n)},A(["Arguments","Function","String","Number","Date","RegExp"],function(n){j["is"+n]=function(t){return l.call(t)=="[object "+n+"]"}}),j.isArguments(arguments)||(j.isArguments=function(n){return!(!n||!j.has(n,"callee"))}),"function"!=typeof/./&&(j.isFunction=function(n){return"function"==typeof n}),j.isFinite=function(n){return isFinite(n)&&!isNaN(parseFloat(n))},j.isNaN=function(n){return j.isNumber(n)&&n!=+n},j.isBoolean=function(n){return n===!0||n===!1||"[object Boolean]"==l.call(n)},j.isNull=function(n){return null===n},j.isUndefined=function(n){return n===void 0},j.has=function(n,t){return f.call(n,t)},j.noConflict=function(){return n._=t,this},j.identity=function(n){return n},j.times=function(n,t,r){for(var e=Array(Math.max(0,n)),u=0;n>u;u++)e[u]=t.call(r,u);return e},j.random=function(n,t){return null==t&&(t=n,n=0),n+Math.floor(Math.random()*(t-n+1))};var I={escape:{"&":"&amp;","<":"&lt;",">":"&gt;",'"':"&quot;","'":"&#x27;","/":"&#x2F;"}};I.unescape=j.invert(I.escape);var T={escape:new RegExp("["+j.keys(I.escape).join("")+"]","g"),unescape:new RegExp("("+j.keys(I.unescape).join("|")+")","g")};j.each(["escape","unescape"],function(n){j[n]=function(t){return null==t?"":(""+t).replace(T[n],function(t){return I[n][t]})}}),j.result=function(n,t){if(null==n)return void 0;var r=n[t];return j.isFunction(r)?r.call(n):r},j.mixin=function(n){A(j.functions(n),function(t){var r=j[t]=n[t];j.prototype[t]=function(){var n=[this._wrapped];return a.apply(n,arguments),D.call(this,r.apply(j,n))}})};var N=0;j.uniqueId=function(n){var t=++N+"";return n?n+t:t},j.templateSettings={evaluate:/<%([\s\S]+?)%>/g,interpolate:/<%=([\s\S]+?)%>/g,escape:/<%-([\s\S]+?)%>/g};var q=/(.)^/,B={"'":"'","\\":"\\","\r":"r","\n":"n","	":"t","\u2028":"u2028","\u2029":"u2029"},z=/\\|'|\r|\n|\t|\u2028|\u2029/g;j.template=function(n,t,r){var e;r=j.defaults({},r,j.templateSettings);var u=new RegExp([(r.escape||q).source,(r.interpolate||q).source,(r.evaluate||q).source].join("|")+"|$","g"),i=0,a="__p+='";n.replace(u,function(t,r,e,u,o){return a+=n.slice(i,o).replace(z,function(n){return"\\"+B[n]}),r&&(a+="'+\n((__t=("+r+"))==null?'':_.escape(__t))+\n'"),e&&(a+="'+\n((__t=("+e+"))==null?'':__t)+\n'"),u&&(a+="';\n"+u+"\n__p+='"),i=o+t.length,t}),a+="';\n",r.variable||(a="with(obj||{}){\n"+a+"}\n"),a="var __t,__p='',__j=Array.prototype.join,"+"print=function(){__p+=__j.call(arguments,'');};\n"+a+"return __p;\n";try{e=new Function(r.variable||"obj","_",a)}catch(o){throw o.source=a,o}if(t)return e(t,j);var c=function(n){return e.call(this,n,j)};return c.source="function("+(r.variable||"obj")+"){\n"+a+"}",c},j.chain=function(n){return j(n).chain()};var D=function(n){return this._chain?j(n).chain():n};j.mixin(j),A(["pop","push","reverse","shift","sort","splice","unshift"],function(n){var t=e[n];j.prototype[n]=function(){var r=this._wrapped;return t.apply(r,arguments),"shift"!=n&&"splice"!=n||0!==r.length||delete r[0],D.call(this,r)}}),A(["concat","join","slice"],function(n){var t=e[n];j.prototype[n]=function(){return D.call(this,t.apply(this._wrapped,arguments))}}),j.extend(j.prototype,{chain:function(){return this._chain=!0,this},value:function(){return this._wrapped}})}.call(this);
//# sourceMappingURL=underscore-min.map;
(function(){var root=this;var previousBackbone=root.Backbone;var array=[];var push=array.push;var slice=array.slice;var splice=array.splice;var Backbone;if(typeof exports!=="undefined"){Backbone=exports}else{Backbone=root.Backbone={}}Backbone.VERSION="1.0.0";var _=root._;if(!_&&typeof require!=="undefined")_=require("underscore");Backbone.$=root.jQuery||root.Zepto||root.ender||root.$;Backbone.noConflict=function(){root.Backbone=previousBackbone;return this};Backbone.emulateHTTP=false;Backbone.emulateJSON=false;var Events=Backbone.Events={on:function(name,callback,context){if(!eventsApi(this,"on",name,[callback,context])||!callback)return this;this._events||(this._events={});var events=this._events[name]||(this._events[name]=[]);events.push({callback:callback,context:context,ctx:context||this});return this},once:function(name,callback,context){if(!eventsApi(this,"once",name,[callback,context])||!callback)return this;var self=this;var once=_.once(function(){self.off(name,once);callback.apply(this,arguments)});once._callback=callback;return this.on(name,once,context)},off:function(name,callback,context){var retain,ev,events,names,i,l,j,k;if(!this._events||!eventsApi(this,"off",name,[callback,context]))return this;if(!name&&!callback&&!context){this._events={};return this}names=name?[name]:_.keys(this._events);for(i=0,l=names.length;i<l;i++){name=names[i];if(events=this._events[name]){this._events[name]=retain=[];if(callback||context){for(j=0,k=events.length;j<k;j++){ev=events[j];if(callback&&callback!==ev.callback&&callback!==ev.callback._callback||context&&context!==ev.context){retain.push(ev)}}}if(!retain.length)delete this._events[name]}}return this},trigger:function(name){if(!this._events)return this;var args=slice.call(arguments,1);if(!eventsApi(this,"trigger",name,args))return this;var events=this._events[name];var allEvents=this._events.all;if(events)triggerEvents(events,args);if(allEvents)triggerEvents(allEvents,arguments);return this},stopListening:function(obj,name,callback){var listeners=this._listeners;if(!listeners)return this;var deleteListener=!name&&!callback;if(typeof name==="object")callback=this;if(obj)(listeners={})[obj._listenerId]=obj;for(var id in listeners){listeners[id].off(name,callback,this);if(deleteListener)delete this._listeners[id]}return this}};var eventSplitter=/\s+/;var eventsApi=function(obj,action,name,rest){if(!name)return true;if(typeof name==="object"){for(var key in name){obj[action].apply(obj,[key,name[key]].concat(rest))}return false}if(eventSplitter.test(name)){var names=name.split(eventSplitter);for(var i=0,l=names.length;i<l;i++){obj[action].apply(obj,[names[i]].concat(rest))}return false}return true};var triggerEvents=function(events,args){var ev,i=-1,l=events.length,a1=args[0],a2=args[1],a3=args[2];switch(args.length){case 0:while(++i<l)(ev=events[i]).callback.call(ev.ctx);return;case 1:while(++i<l)(ev=events[i]).callback.call(ev.ctx,a1);return;case 2:while(++i<l)(ev=events[i]).callback.call(ev.ctx,a1,a2);return;case 3:while(++i<l)(ev=events[i]).callback.call(ev.ctx,a1,a2,a3);return;default:while(++i<l)(ev=events[i]).callback.apply(ev.ctx,args)}};var listenMethods={listenTo:"on",listenToOnce:"once"};_.each(listenMethods,function(implementation,method){Events[method]=function(obj,name,callback){var listeners=this._listeners||(this._listeners={});var id=obj._listenerId||(obj._listenerId=_.uniqueId("l"));listeners[id]=obj;if(typeof name==="object")callback=this;obj[implementation](name,callback,this);return this}});Events.bind=Events.on;Events.unbind=Events.off;_.extend(Backbone,Events);var Model=Backbone.Model=function(attributes,options){var defaults;var attrs=attributes||{};options||(options={});this.cid=_.uniqueId("c");this.attributes={};_.extend(this,_.pick(options,modelOptions));if(options.parse)attrs=this.parse(attrs,options)||{};if(defaults=_.result(this,"defaults")){attrs=_.defaults({},attrs,defaults)}this.set(attrs,options);this.changed={};this.initialize.apply(this,arguments)};var modelOptions=["url","urlRoot","collection"];_.extend(Model.prototype,Events,{changed:null,validationError:null,idAttribute:"id",initialize:function(){},toJSON:function(options){return _.clone(this.attributes)},sync:function(){return Backbone.sync.apply(this,arguments)},get:function(attr){return this.attributes[attr]},escape:function(attr){return _.escape(this.get(attr))},has:function(attr){return this.get(attr)!=null},set:function(key,val,options){var attr,attrs,unset,changes,silent,changing,prev,current;if(key==null)return this;if(typeof key==="object"){attrs=key;options=val}else{(attrs={})[key]=val}options||(options={});if(!this._validate(attrs,options))return false;unset=options.unset;silent=options.silent;changes=[];changing=this._changing;this._changing=true;if(!changing){this._previousAttributes=_.clone(this.attributes);this.changed={}}current=this.attributes,prev=this._previousAttributes;if(this.idAttribute in attrs)this.id=attrs[this.idAttribute];for(attr in attrs){val=attrs[attr];if(!_.isEqual(current[attr],val))changes.push(attr);if(!_.isEqual(prev[attr],val)){this.changed[attr]=val}else{delete this.changed[attr]}unset?delete current[attr]:current[attr]=val}if(!silent){if(changes.length)this._pending=true;for(var i=0,l=changes.length;i<l;i++){this.trigger("change:"+changes[i],this,current[changes[i]],options)}}if(changing)return this;if(!silent){while(this._pending){this._pending=false;this.trigger("change",this,options)}}this._pending=false;this._changing=false;return this},unset:function(attr,options){return this.set(attr,void 0,_.extend({},options,{unset:true}))},clear:function(options){var attrs={};for(var key in this.attributes)attrs[key]=void 0;return this.set(attrs,_.extend({},options,{unset:true}))},hasChanged:function(attr){if(attr==null)return!_.isEmpty(this.changed);return _.has(this.changed,attr)},changedAttributes:function(diff){if(!diff)return this.hasChanged()?_.clone(this.changed):false;var val,changed=false;var old=this._changing?this._previousAttributes:this.attributes;for(var attr in diff){if(_.isEqual(old[attr],val=diff[attr]))continue;(changed||(changed={}))[attr]=val}return changed},previous:function(attr){if(attr==null||!this._previousAttributes)return null;return this._previousAttributes[attr]},previousAttributes:function(){return _.clone(this._previousAttributes)},fetch:function(options){options=options?_.clone(options):{};if(options.parse===void 0)options.parse=true;var model=this;var success=options.success;options.success=function(resp){if(!model.set(model.parse(resp,options),options))return false;if(success)success(model,resp,options);model.trigger("sync",model,resp,options)};wrapError(this,options);return this.sync("read",this,options)},save:function(key,val,options){var attrs,method,xhr,attributes=this.attributes;if(key==null||typeof key==="object"){attrs=key;options=val}else{(attrs={})[key]=val}if(attrs&&(!options||!options.wait)&&!this.set(attrs,options))return false;options=_.extend({validate:true},options);if(!this._validate(attrs,options))return false;if(attrs&&options.wait){this.attributes=_.extend({},attributes,attrs)}if(options.parse===void 0)options.parse=true;var model=this;var success=options.success;options.success=function(resp){model.attributes=attributes;var serverAttrs=model.parse(resp,options);if(options.wait)serverAttrs=_.extend(attrs||{},serverAttrs);if(_.isObject(serverAttrs)&&!model.set(serverAttrs,options)){return false}if(success)success(model,resp,options);model.trigger("sync",model,resp,options)};wrapError(this,options);method=this.isNew()?"create":options.patch?"patch":"update";if(method==="patch")options.attrs=attrs;xhr=this.sync(method,this,options);if(attrs&&options.wait)this.attributes=attributes;return xhr},destroy:function(options){options=options?_.clone(options):{};var model=this;var success=options.success;var destroy=function(){model.trigger("destroy",model,model.collection,options)};options.success=function(resp){if(options.wait||model.isNew())destroy();if(success)success(model,resp,options);if(!model.isNew())model.trigger("sync",model,resp,options)};if(this.isNew()){options.success();return false}wrapError(this,options);var xhr=this.sync("delete",this,options);if(!options.wait)destroy();return xhr},url:function(){var base=_.result(this,"urlRoot")||_.result(this.collection,"url")||urlError();if(this.isNew())return base;return base+(base.charAt(base.length-1)==="/"?"":"/")+encodeURIComponent(this.id)},parse:function(resp,options){return resp},clone:function(){return new this.constructor(this.attributes)},isNew:function(){return this.id==null},isValid:function(options){return this._validate({},_.extend(options||{},{validate:true}))},_validate:function(attrs,options){if(!options.validate||!this.validate)return true;attrs=_.extend({},this.attributes,attrs);var error=this.validationError=this.validate(attrs,options)||null;if(!error)return true;this.trigger("invalid",this,error,_.extend(options||{},{validationError:error}));return false}});var modelMethods=["keys","values","pairs","invert","pick","omit"];_.each(modelMethods,function(method){Model.prototype[method]=function(){var args=slice.call(arguments);args.unshift(this.attributes);return _[method].apply(_,args)}});var Collection=Backbone.Collection=function(models,options){options||(options={});if(options.url)this.url=options.url;if(options.model)this.model=options.model;if(options.comparator!==void 0)this.comparator=options.comparator;this._reset();this.initialize.apply(this,arguments);if(models)this.reset(models,_.extend({silent:true},options))};var setOptions={add:true,remove:true,merge:true};var addOptions={add:true,merge:false,remove:false};_.extend(Collection.prototype,Events,{model:Model,initialize:function(){},toJSON:function(options){return this.map(function(model){return model.toJSON(options)})},sync:function(){return Backbone.sync.apply(this,arguments)},add:function(models,options){return this.set(models,_.defaults(options||{},addOptions))},remove:function(models,options){models=_.isArray(models)?models.slice():[models];options||(options={});var i,l,index,model;for(i=0,l=models.length;i<l;i++){model=this.get(models[i]);if(!model)continue;delete this._byId[model.id];delete this._byId[model.cid];index=this.indexOf(model);this.models.splice(index,1);this.length--;if(!options.silent){options.index=index;model.trigger("remove",model,this,options)}this._removeReference(model)}return this},set:function(models,options){options=_.defaults(options||{},setOptions);if(options.parse)models=this.parse(models,options);if(!_.isArray(models))models=models?[models]:[];var i,l,model,attrs,existing,sort;var at=options.at;var sortable=this.comparator&&at==null&&options.sort!==false;var sortAttr=_.isString(this.comparator)?this.comparator:null;var toAdd=[],toRemove=[],modelMap={};for(i=0,l=models.length;i<l;i++){if(!(model=this._prepareModel(models[i],options)))continue;if(existing=this.get(model)){if(options.remove)modelMap[existing.cid]=true;if(options.merge){existing.set(model.attributes,options);if(sortable&&!sort&&existing.hasChanged(sortAttr))sort=true}}else if(options.add){toAdd.push(model);model.on("all",this._onModelEvent,this);this._byId[model.cid]=model;if(model.id!=null)this._byId[model.id]=model}}if(options.remove){for(i=0,l=this.length;i<l;++i){if(!modelMap[(model=this.models[i]).cid])toRemove.push(model)}if(toRemove.length)this.remove(toRemove,options)}if(toAdd.length){if(sortable)sort=true;this.length+=toAdd.length;if(at!=null){splice.apply(this.models,[at,0].concat(toAdd))}else{push.apply(this.models,toAdd)}}if(sort)this.sort({silent:true});if(options.silent)return this;for(i=0,l=toAdd.length;i<l;i++){(model=toAdd[i]).trigger("add",model,this,options)}if(sort)this.trigger("sort",this,options);return this},reset:function(models,options){options||(options={});for(var i=0,l=this.models.length;i<l;i++){this._removeReference(this.models[i])}options.previousModels=this.models;this._reset();this.add(models,_.extend({silent:true},options));if(!options.silent)this.trigger("reset",this,options);return this},push:function(model,options){model=this._prepareModel(model,options);this.add(model,_.extend({at:this.length},options));return model},pop:function(options){var model=this.at(this.length-1);this.remove(model,options);return model},unshift:function(model,options){model=this._prepareModel(model,options);this.add(model,_.extend({at:0},options));return model},shift:function(options){var model=this.at(0);this.remove(model,options);return model},slice:function(begin,end){return this.models.slice(begin,end)},get:function(obj){if(obj==null)return void 0;return this._byId[obj.id!=null?obj.id:obj.cid||obj]},at:function(index){return this.models[index]},where:function(attrs,first){if(_.isEmpty(attrs))return first?void 0:[];return this[first?"find":"filter"](function(model){for(var key in attrs){if(attrs[key]!==model.get(key))return false}return true})},findWhere:function(attrs){return this.where(attrs,true)},sort:function(options){if(!this.comparator)throw new Error("Cannot sort a set without a comparator");options||(options={});if(_.isString(this.comparator)||this.comparator.length===1){this.models=this.sortBy(this.comparator,this)}else{this.models.sort(_.bind(this.comparator,this))}if(!options.silent)this.trigger("sort",this,options);return this},sortedIndex:function(model,value,context){value||(value=this.comparator);var iterator=_.isFunction(value)?value:function(model){return model.get(value)};return _.sortedIndex(this.models,model,iterator,context)},pluck:function(attr){return _.invoke(this.models,"get",attr)},fetch:function(options){options=options?_.clone(options):{};if(options.parse===void 0)options.parse=true;var success=options.success;var collection=this;options.success=function(resp){var method=options.reset?"reset":"set";collection[method](resp,options);if(success)success(collection,resp,options);collection.trigger("sync",collection,resp,options)};wrapError(this,options);return this.sync("read",this,options)},create:function(model,options){options=options?_.clone(options):{};if(!(model=this._prepareModel(model,options)))return false;if(!options.wait)this.add(model,options);var collection=this;var success=options.success;options.success=function(resp){if(options.wait)collection.add(model,options);if(success)success(model,resp,options)};model.save(null,options);return model},parse:function(resp,options){return resp},clone:function(){return new this.constructor(this.models)},_reset:function(){this.length=0;this.models=[];this._byId={}},_prepareModel:function(attrs,options){if(attrs instanceof Model){if(!attrs.collection)attrs.collection=this;return attrs}options||(options={});options.collection=this;var model=new this.model(attrs,options);if(!model._validate(attrs,options)){this.trigger("invalid",this,attrs,options);return false}return model},_removeReference:function(model){if(this===model.collection)delete model.collection;model.off("all",this._onModelEvent,this)},_onModelEvent:function(event,model,collection,options){if((event==="add"||event==="remove")&&collection!==this)return;if(event==="destroy")this.remove(model,options);if(model&&event==="change:"+model.idAttribute){delete this._byId[model.previous(model.idAttribute)];if(model.id!=null)this._byId[model.id]=model}this.trigger.apply(this,arguments)}});var methods=["forEach","each","map","collect","reduce","foldl","inject","reduceRight","foldr","find","detect","filter","select","reject","every","all","some","any","include","contains","invoke","max","min","toArray","size","first","head","take","initial","rest","tail","drop","last","without","indexOf","shuffle","lastIndexOf","isEmpty","chain"];_.each(methods,function(method){Collection.prototype[method]=function(){var args=slice.call(arguments);args.unshift(this.models);return _[method].apply(_,args)}});var attributeMethods=["groupBy","countBy","sortBy"];_.each(attributeMethods,function(method){Collection.prototype[method]=function(value,context){var iterator=_.isFunction(value)?value:function(model){return model.get(value)};return _[method](this.models,iterator,context)}});var View=Backbone.View=function(options){this.cid=_.uniqueId("view");this._configure(options||{});this._ensureElement();this.initialize.apply(this,arguments);this.delegateEvents()};var delegateEventSplitter=/^(\S+)\s*(.*)$/;var viewOptions=["model","collection","el","id","attributes","className","tagName","events"];_.extend(View.prototype,Events,{tagName:"div",$:function(selector){return this.$el.find(selector)},initialize:function(){},render:function(){return this},remove:function(){this.$el.remove();this.stopListening();return this},setElement:function(element,delegate){if(this.$el)this.undelegateEvents();this.$el=element instanceof Backbone.$?element:Backbone.$(element);this.el=this.$el[0];if(delegate!==false)this.delegateEvents();return this},delegateEvents:function(events){if(!(events||(events=_.result(this,"events"))))return this;this.undelegateEvents();for(var key in events){var method=events[key];if(!_.isFunction(method))method=this[events[key]];if(!method)continue;var match=key.match(delegateEventSplitter);var eventName=match[1],selector=match[2];method=_.bind(method,this);eventName+=".delegateEvents"+this.cid;if(selector===""){this.$el.on(eventName,method)}else{this.$el.on(eventName,selector,method)}}return this},undelegateEvents:function(){this.$el.off(".delegateEvents"+this.cid);return this},_configure:function(options){if(this.options)options=_.extend({},_.result(this,"options"),options);_.extend(this,_.pick(options,viewOptions));this.options=options},_ensureElement:function(){if(!this.el){var attrs=_.extend({},_.result(this,"attributes"));if(this.id)attrs.id=_.result(this,"id");if(this.className)attrs["class"]=_.result(this,"className");var $el=Backbone.$("<"+_.result(this,"tagName")+">").attr(attrs);this.setElement($el,false)}else{this.setElement(_.result(this,"el"),false)}}});Backbone.sync=function(method,model,options){var type=methodMap[method];_.defaults(options||(options={}),{emulateHTTP:Backbone.emulateHTTP,emulateJSON:Backbone.emulateJSON});var params={type:type,dataType:"json"};if(!options.url){params.url=_.result(model,"url")||urlError()}if(options.data==null&&model&&(method==="create"||method==="update"||method==="patch")){params.contentType="application/json";params.data=JSON.stringify(options.attrs||model.toJSON(options))}if(options.emulateJSON){params.contentType="application/x-www-form-urlencoded";params.data=params.data?{model:params.data}:{}}if(options.emulateHTTP&&(type==="PUT"||type==="DELETE"||type==="PATCH")){params.type="POST";if(options.emulateJSON)params.data._method=type;var beforeSend=options.beforeSend;options.beforeSend=function(xhr){xhr.setRequestHeader("X-HTTP-Method-Override",type);if(beforeSend)return beforeSend.apply(this,arguments)}}if(params.type!=="GET"&&!options.emulateJSON){params.processData=false}if(params.type==="PATCH"&&window.ActiveXObject&&!(window.external&&window.external.msActiveXFilteringEnabled)){params.xhr=function(){return new ActiveXObject("Microsoft.XMLHTTP")}}var xhr=options.xhr=Backbone.ajax(_.extend(params,options));model.trigger("request",model,xhr,options);return xhr};var methodMap={create:"POST",update:"PUT",patch:"PATCH","delete":"DELETE",read:"GET"};Backbone.ajax=function(){return Backbone.$.ajax.apply(Backbone.$,arguments)};var Router=Backbone.Router=function(options){options||(options={});if(options.routes)this.routes=options.routes;this._bindRoutes();this.initialize.apply(this,arguments)};var optionalParam=/\((.*?)\)/g;var namedParam=/(\(\?)?:\w+/g;var splatParam=/\*\w+/g;var escapeRegExp=/[\-{}\[\]+?.,\\\^$|#\s]/g;_.extend(Router.prototype,Events,{initialize:function(){},route:function(route,name,callback){if(!_.isRegExp(route))route=this._routeToRegExp(route);if(_.isFunction(name)){callback=name;name=""}if(!callback)callback=this[name];var router=this;Backbone.history.route(route,function(fragment){var args=router._extractParameters(route,fragment);callback&&callback.apply(router,args);router.trigger.apply(router,["route:"+name].concat(args));router.trigger("route",name,args);Backbone.history.trigger("route",router,name,args)});return this},navigate:function(fragment,options){Backbone.history.navigate(fragment,options);return this},_bindRoutes:function(){if(!this.routes)return;this.routes=_.result(this,"routes");var route,routes=_.keys(this.routes);while((route=routes.pop())!=null){this.route(route,this.routes[route])}},_routeToRegExp:function(route){route=route.replace(escapeRegExp,"\\$&").replace(optionalParam,"(?:$1)?").replace(namedParam,function(match,optional){return optional?match:"([^/]+)"}).replace(splatParam,"(.*?)");return new RegExp("^"+route+"$")},_extractParameters:function(route,fragment){var params=route.exec(fragment).slice(1);return _.map(params,function(param){return param?decodeURIComponent(param):null})}});var History=Backbone.History=function(){this.handlers=[];_.bindAll(this,"checkUrl");if(typeof window!=="undefined"){this.location=window.location;this.history=window.history}};var routeStripper=/^[#\/]|\s+$/g;var rootStripper=/^\/+|\/+$/g;var isExplorer=/msie [\w.]+/;var trailingSlash=/\/$/;History.started=false;_.extend(History.prototype,Events,{interval:50,getHash:function(window){var match=(window||this).location.href.match(/#(.*)$/);return match?match[1]:""},getFragment:function(fragment,forcePushState){if(fragment==null){if(this._hasPushState||!this._wantsHashChange||forcePushState){fragment=this.location.pathname;var root=this.root.replace(trailingSlash,"");if(!fragment.indexOf(root))fragment=fragment.substr(root.length)}else{fragment=this.getHash()}}return fragment.replace(routeStripper,"")},start:function(options){if(History.started)throw new Error("Backbone.history has already been started");History.started=true;this.options=_.extend({},{root:"/"},this.options,options);this.root=this.options.root;this._wantsHashChange=this.options.hashChange!==false;this._wantsPushState=!!this.options.pushState;this._hasPushState=!!(this.options.pushState&&this.history&&this.history.pushState);var fragment=this.getFragment();var docMode=document.documentMode;var oldIE=isExplorer.exec(navigator.userAgent.toLowerCase())&&(!docMode||docMode<=7);this.root=("/"+this.root+"/").replace(rootStripper,"/");if(oldIE&&this._wantsHashChange){this.iframe=Backbone.$('<iframe src="javascript:0" tabindex="-1" />').hide().appendTo("body")[0].contentWindow;this.navigate(fragment)}if(this._hasPushState){Backbone.$(window).on("popstate",this.checkUrl)}else if(this._wantsHashChange&&"onhashchange"in window&&!oldIE){Backbone.$(window).on("hashchange",this.checkUrl)}else if(this._wantsHashChange){this._checkUrlInterval=setInterval(this.checkUrl,this.interval)}this.fragment=fragment;var loc=this.location;var atRoot=loc.pathname.replace(/[^\/]$/,"$&/")===this.root;if(this._wantsHashChange&&this._wantsPushState&&!this._hasPushState&&!atRoot){this.fragment=this.getFragment(null,true);this.location.replace(this.root+this.location.search+"#"+this.fragment);return true}else if(this._wantsPushState&&this._hasPushState&&atRoot&&loc.hash){this.fragment=this.getHash().replace(routeStripper,"");this.history.replaceState({},document.title,this.root+this.fragment+loc.search)}if(!this.options.silent)return this.loadUrl()},stop:function(){Backbone.$(window).off("popstate",this.checkUrl).off("hashchange",this.checkUrl);clearInterval(this._checkUrlInterval);History.started=false},route:function(route,callback){this.handlers.unshift({route:route,callback:callback})},checkUrl:function(e){var current=this.getFragment();if(current===this.fragment&&this.iframe){current=this.getFragment(this.getHash(this.iframe))}if(current===this.fragment)return false;if(this.iframe)this.navigate(current);this.loadUrl()||this.loadUrl(this.getHash())},loadUrl:function(fragmentOverride){var fragment=this.fragment=this.getFragment(fragmentOverride);var matched=_.any(this.handlers,function(handler){if(handler.route.test(fragment)){handler.callback(fragment);return true}});return matched},navigate:function(fragment,options){if(!History.started)return false;if(!options||options===true)options={trigger:options};fragment=this.getFragment(fragment||"");if(this.fragment===fragment)return;this.fragment=fragment;var url=this.root+fragment;if(this._hasPushState){this.history[options.replace?"replaceState":"pushState"]({},document.title,url)}else if(this._wantsHashChange){this._updateHash(this.location,fragment,options.replace);if(this.iframe&&fragment!==this.getFragment(this.getHash(this.iframe))){if(!options.replace)this.iframe.document.open().close();this._updateHash(this.iframe.location,fragment,options.replace)}}else{return this.location.assign(url)}if(options.trigger)this.loadUrl(fragment)},_updateHash:function(location,fragment,replace){if(replace){var href=location.href.replace(/(javascript:|#).*$/,"");location.replace(href+"#"+fragment)}else{location.hash="#"+fragment}}});Backbone.history=new History;var extend=function(protoProps,staticProps){var parent=this;var child;if(protoProps&&_.has(protoProps,"constructor")){child=protoProps.constructor}else{child=function(){return parent.apply(this,arguments)}}_.extend(child,parent,staticProps);var Surrogate=function(){this.constructor=child};Surrogate.prototype=parent.prototype;child.prototype=new Surrogate;if(protoProps)_.extend(child.prototype,protoProps);child.__super__=parent.prototype;return child};Model.extend=Collection.extend=Router.extend=View.extend=History.extend=extend;var urlError=function(){throw new Error('A "url" property or function must be specified')};var wrapError=function(model,options){var error=options.error;options.error=function(resp){if(error)error(model,resp,options);model.trigger("error",model,resp,options)}}}).call(this);
/*
//@ sourceMappingURL=backbone-min.map
*/;
/*!
Waypoints - 4.0.0
Copyright © 2011-2015 Caleb Troughton
Licensed under the MIT license.
https://github.com/imakewebthings/waypoints/blog/master/licenses.txt
*/
!function(){"use strict";function t(o){if(!o)throw new Error("No options passed to Waypoint constructor");if(!o.element)throw new Error("No element option passed to Waypoint constructor");if(!o.handler)throw new Error("No handler option passed to Waypoint constructor");this.key="waypoint-"+e,this.options=t.Adapter.extend({},t.defaults,o),this.element=this.options.element,this.adapter=new t.Adapter(this.element),this.callback=o.handler,this.axis=this.options.horizontal?"horizontal":"vertical",this.enabled=this.options.enabled,this.triggerPoint=null,this.group=t.Group.findOrCreate({name:this.options.group,axis:this.axis}),this.context=t.Context.findOrCreateByElement(this.options.context),t.offsetAliases[this.options.offset]&&(this.options.offset=t.offsetAliases[this.options.offset]),this.group.add(this),this.context.add(this),i[this.key]=this,e+=1}var e=0,i={};t.prototype.queueTrigger=function(t){this.group.queueTrigger(this,t)},t.prototype.trigger=function(t){this.enabled&&this.callback&&this.callback.apply(this,t)},t.prototype.destroy=function(){this.context.remove(this),this.group.remove(this),delete i[this.key]},t.prototype.disable=function(){return this.enabled=!1,this},t.prototype.enable=function(){return this.context.refresh(),this.enabled=!0,this},t.prototype.next=function(){return this.group.next(this)},t.prototype.previous=function(){return this.group.previous(this)},t.invokeAll=function(t){var e=[];for(var o in i)e.push(i[o]);for(var n=0,r=e.length;r>n;n++)e[n][t]()},t.destroyAll=function(){t.invokeAll("destroy")},t.disableAll=function(){t.invokeAll("disable")},t.enableAll=function(){t.invokeAll("enable")},t.refreshAll=function(){t.Context.refreshAll()},t.viewportHeight=function(){return window.innerHeight||document.documentElement.clientHeight},t.viewportWidth=function(){return document.documentElement.clientWidth},t.adapters=[],t.defaults={context:window,continuous:!0,enabled:!0,group:"default",horizontal:!1,offset:0},t.offsetAliases={"bottom-in-view":function(){return this.context.innerHeight()-this.adapter.outerHeight()},"right-in-view":function(){return this.context.innerWidth()-this.adapter.outerWidth()}},window.Waypoint=t}(),function(){"use strict";function t(t){window.setTimeout(t,1e3/60)}function e(t){this.element=t,this.Adapter=n.Adapter,this.adapter=new this.Adapter(t),this.key="waypoint-context-"+i,this.didScroll=!1,this.didResize=!1,this.oldScroll={x:this.adapter.scrollLeft(),y:this.adapter.scrollTop()},this.waypoints={vertical:{},horizontal:{}},t.waypointContextKey=this.key,o[t.waypointContextKey]=this,i+=1,this.createThrottledScrollHandler(),this.createThrottledResizeHandler()}var i=0,o={},n=window.Waypoint,r=window.onload;e.prototype.add=function(t){var e=t.options.horizontal?"horizontal":"vertical";this.waypoints[e][t.key]=t,this.refresh()},e.prototype.checkEmpty=function(){var t=this.Adapter.isEmptyObject(this.waypoints.horizontal),e=this.Adapter.isEmptyObject(this.waypoints.vertical);t&&e&&(this.adapter.off(".waypoints"),delete o[this.key])},e.prototype.createThrottledResizeHandler=function(){function t(){e.handleResize(),e.didResize=!1}var e=this;this.adapter.on("resize.waypoints",function(){e.didResize||(e.didResize=!0,n.requestAnimationFrame(t))})},e.prototype.createThrottledScrollHandler=function(){function t(){e.handleScroll(),e.didScroll=!1}var e=this;this.adapter.on("scroll.waypoints",function(){(!e.didScroll||n.isTouch)&&(e.didScroll=!0,n.requestAnimationFrame(t))})},e.prototype.handleResize=function(){n.Context.refreshAll()},e.prototype.handleScroll=function(){var t={},e={horizontal:{newScroll:this.adapter.scrollLeft(),oldScroll:this.oldScroll.x,forward:"right",backward:"left"},vertical:{newScroll:this.adapter.scrollTop(),oldScroll:this.oldScroll.y,forward:"down",backward:"up"}};for(var i in e){var o=e[i],n=o.newScroll>o.oldScroll,r=n?o.forward:o.backward;for(var s in this.waypoints[i]){var a=this.waypoints[i][s],l=o.oldScroll<a.triggerPoint,h=o.newScroll>=a.triggerPoint,p=l&&h,u=!l&&!h;(p||u)&&(a.queueTrigger(r),t[a.group.id]=a.group)}}for(var c in t)t[c].flushTriggers();this.oldScroll={x:e.horizontal.newScroll,y:e.vertical.newScroll}},e.prototype.innerHeight=function(){return this.element==this.element.window?n.viewportHeight():this.adapter.innerHeight()},e.prototype.remove=function(t){delete this.waypoints[t.axis][t.key],this.checkEmpty()},e.prototype.innerWidth=function(){return this.element==this.element.window?n.viewportWidth():this.adapter.innerWidth()},e.prototype.destroy=function(){var t=[];for(var e in this.waypoints)for(var i in this.waypoints[e])t.push(this.waypoints[e][i]);for(var o=0,n=t.length;n>o;o++)t[o].destroy()},e.prototype.refresh=function(){var t,e=this.element==this.element.window,i=e?void 0:this.adapter.offset(),o={};this.handleScroll(),t={horizontal:{contextOffset:e?0:i.left,contextScroll:e?0:this.oldScroll.x,contextDimension:this.innerWidth(),oldScroll:this.oldScroll.x,forward:"right",backward:"left",offsetProp:"left"},vertical:{contextOffset:e?0:i.top,contextScroll:e?0:this.oldScroll.y,contextDimension:this.innerHeight(),oldScroll:this.oldScroll.y,forward:"down",backward:"up",offsetProp:"top"}};for(var r in t){var s=t[r];for(var a in this.waypoints[r]){var l,h,p,u,c,d=this.waypoints[r][a],f=d.options.offset,w=d.triggerPoint,y=0,g=null==w;d.element!==d.element.window&&(y=d.adapter.offset()[s.offsetProp]),"function"==typeof f?f=f.apply(d):"string"==typeof f&&(f=parseFloat(f),d.options.offset.indexOf("%")>-1&&(f=Math.ceil(s.contextDimension*f/100))),l=s.contextScroll-s.contextOffset,d.triggerPoint=y+l-f,h=w<s.oldScroll,p=d.triggerPoint>=s.oldScroll,u=h&&p,c=!h&&!p,!g&&u?(d.queueTrigger(s.backward),o[d.group.id]=d.group):!g&&c?(d.queueTrigger(s.forward),o[d.group.id]=d.group):g&&s.oldScroll>=d.triggerPoint&&(d.queueTrigger(s.forward),o[d.group.id]=d.group)}}return n.requestAnimationFrame(function(){for(var t in o)o[t].flushTriggers()}),this},e.findOrCreateByElement=function(t){return e.findByElement(t)||new e(t)},e.refreshAll=function(){for(var t in o)o[t].refresh()},e.findByElement=function(t){return o[t.waypointContextKey]},window.onload=function(){r&&r(),e.refreshAll()},n.requestAnimationFrame=function(e){var i=window.requestAnimationFrame||window.mozRequestAnimationFrame||window.webkitRequestAnimationFrame||t;i.call(window,e)},n.Context=e}(),function(){"use strict";function t(t,e){return t.triggerPoint-e.triggerPoint}function e(t,e){return e.triggerPoint-t.triggerPoint}function i(t){this.name=t.name,this.axis=t.axis,this.id=this.name+"-"+this.axis,this.waypoints=[],this.clearTriggerQueues(),o[this.axis][this.name]=this}var o={vertical:{},horizontal:{}},n=window.Waypoint;i.prototype.add=function(t){this.waypoints.push(t)},i.prototype.clearTriggerQueues=function(){this.triggerQueues={up:[],down:[],left:[],right:[]}},i.prototype.flushTriggers=function(){for(var i in this.triggerQueues){var o=this.triggerQueues[i],n="up"===i||"left"===i;o.sort(n?e:t);for(var r=0,s=o.length;s>r;r+=1){var a=o[r];(a.options.continuous||r===o.length-1)&&a.trigger([i])}}this.clearTriggerQueues()},i.prototype.next=function(e){this.waypoints.sort(t);var i=n.Adapter.inArray(e,this.waypoints),o=i===this.waypoints.length-1;return o?null:this.waypoints[i+1]},i.prototype.previous=function(e){this.waypoints.sort(t);var i=n.Adapter.inArray(e,this.waypoints);return i?this.waypoints[i-1]:null},i.prototype.queueTrigger=function(t,e){this.triggerQueues[e].push(t)},i.prototype.remove=function(t){var e=n.Adapter.inArray(t,this.waypoints);e>-1&&this.waypoints.splice(e,1)},i.prototype.first=function(){return this.waypoints[0]},i.prototype.last=function(){return this.waypoints[this.waypoints.length-1]},i.findOrCreate=function(t){return o[t.axis][t.name]||new i(t)},n.Group=i}(),function(){"use strict";function t(t){this.$element=e(t)}var e=window.jQuery,i=window.Waypoint;e.each(["innerHeight","innerWidth","off","offset","on","outerHeight","outerWidth","scrollLeft","scrollTop"],function(e,i){t.prototype[i]=function(){var t=Array.prototype.slice.call(arguments);return this.$element[i].apply(this.$element,t)}}),e.each(["extend","inArray","isEmptyObject"],function(i,o){t[o]=e[o]}),i.adapters.push({name:"jquery",Adapter:t}),i.Adapter=t}(),function(){"use strict";function t(t){return function(){var i=[],o=arguments[0];return t.isFunction(arguments[0])&&(o=t.extend({},arguments[1]),o.handler=arguments[0]),this.each(function(){var n=t.extend({},o,{element:this});"string"==typeof n.context&&(n.context=t(this).closest(n.context)[0]),i.push(new e(n))}),i}}var e=window.Waypoint;window.jQuery&&(window.jQuery.fn.waypoint=t(window.jQuery)),window.Zepto&&(window.Zepto.fn.waypoint=t(window.Zepto))}();;
/*jslint browser: true */ /*global jQuery: true */

/**
 * jQuery Cookie plugin
 *
 * Copyright (c) 2010 Klaus Hartl (stilbuero.de)
 * Dual licensed under the MIT and GPL licenses:
 * http://www.opensource.org/licenses/mit-license.php
 * http://www.gnu.org/licenses/gpl.html
 *
 */

// TODO JsDoc

/**
 * Create a cookie with the given key and value and other optional parameters.
 *
 * @example $.cookie('the_cookie', 'the_value');
 * @desc Set the value of a cookie.
 * @example $.cookie('the_cookie', 'the_value', { expires: 7, path: '/', domain: 'jquery.com', secure: true });
 * @desc Create a cookie with all available options.
 * @example $.cookie('the_cookie', 'the_value');
 * @desc Create a session cookie.
 * @example $.cookie('the_cookie', null);
 * @desc Delete a cookie by passing null as value. Keep in mind that you have to use the same path and domain
 *       used when the cookie was set.
 *
 * @param String key The key of the cookie.
 * @param String value The value of the cookie.
 * @param Object options An object literal containing key/value pairs to provide optional cookie attributes.
 * @option Number|Date expires Either an integer specifying the expiration date from now on in days or a Date object.
 *                             If a negative value is specified (e.g. a date in the past), the cookie will be deleted.
 *                             If set to null or omitted, the cookie will be a session cookie and will not be retained
 *                             when the the browser exits.
 * @option String path The value of the path atribute of the cookie (default: path of page that created the cookie).
 * @option String domain The value of the domain attribute of the cookie (default: domain of page that created the cookie).
 * @option Boolean secure If true, the secure attribute of the cookie will be set and the cookie transmission will
 *                        require a secure protocol (like HTTPS).
 * @type undefined
 *
 * @name $.cookie
 * @cat Plugins/Cookie
 * @author Klaus Hartl/klaus.hartl@stilbuero.de
 */

/**
 * Get the value of a cookie with the given key.
 *
 * @example $.cookie('the_cookie');
 * @desc Get the value of a cookie.
 *
 * @param String key The key of the cookie.
 * @return The value of the cookie.
 * @type String
 *
 * @name $.cookie
 * @cat Plugins/Cookie
 * @author Klaus Hartl/klaus.hartl@stilbuero.de
 */
jQuery.cookie = function (key, value, options) {

    // key and value given, set cookie...
    if (arguments.length > 1 && (value === null || typeof value !== "object")) {
        options = jQuery.extend({}, options);

        if (value === null) {
            options.expires = -1;
        }

        if (typeof options.expires === 'number') {
            var days = options.expires, t = options.expires = new Date();
            t.setDate(t.getDate() + days);
        }

        return (document.cookie = [
            encodeURIComponent(key), '=',
            options.raw ? String(value) : encodeURIComponent(String(value)),
            options.expires ? '; expires=' + options.expires.toUTCString() : '', // use expires attribute, max-age is not supported by IE
            options.path ? '; path=' + options.path : '',
            options.domain ? '; domain=' + options.domain : '',
            options.secure ? '; secure' : ''
        ].join(''));
    }

    // key and possibly options given, get cookie...
    options = value || {};
    var result, decode = options.raw ? function (s) { return s; } : decodeURIComponent;
    return (result = new RegExp('(?:^|; )' + encodeURIComponent(key) + '=([^;]*)').exec(document.cookie)) ? decode(result[1]) : null;
};
;
/**
 * Polyfill the behavior of window.matchMedia.
 *
 * @see http://dev.w3.org/csswg/cssom-view/#widl-Window-matchMedia-MediaQueryList-DOMString-query
 *
 * Test whether a CSS media type or media query applies. Register listeners
 * to MediaQueryList objects.
 *
 * Adapted from https://github.com/paulirish/matchMedia.js with the addition
 * of addListener and removeListener. The polyfill referenced above uses
 * polling to trigger registered listeners on matchMedia tests.
 * This polyfill triggers tests on window resize and orientationchange.
 */

window.matchMedia = window.matchMedia || (function (doc, window) {

  "use strict";

  var docElem = doc.documentElement;
  var refNode = docElem.firstElementChild || docElem.firstChild;
  // fakeBody required for <FF4 when executed in <head>.
  var fakeBody = doc.createElement("body");
  var div = doc.createElement("div");

  div.id = "mq-test-1";
  div.style.cssText = "position:absolute;top:-100em";
  fakeBody.style.background = "none";
  fakeBody.appendChild(div);

  /**
   * A replacement for the native MediaQueryList object.
   *
   * @param {String} q
   *   A media query e.g. "screen" or "screen and (min-width: 28em)".
   */
  function MediaQueryList (q) {
    this.media = q;
    this.matches = false;
    this.check.call(this);
  }

  /**
   * Polyfill the addListener and removeListener methods.
   */
  MediaQueryList.prototype = {
    listeners: [],

    /**
     * Perform the media query application check.
     */
    check: function () {
      var isApplied;
      div.innerHTML = "&shy;<style media=\"" + this.media + "\"> #mq-test-1 {width: 42px;}</style>";
      docElem.insertBefore(fakeBody, refNode);
      isApplied = div.offsetWidth === 42;
      docElem.removeChild(fakeBody);
      this.matches = isApplied;
    },

    /**
     * Polyfill the addListener method of the MediaQueryList object.
     *
     * @param {Function} callback
     *   The callback to be invoked when the media query is applicable.
     *
     * @return {Object MediaQueryList}
     *   A MediaQueryList object that indicates whether the registered media
     *   query applies. The matches property is true when the media query
     *   applies and false when not. The original media query is referenced in
     *   the media property.
     */
    addListener: function (callback) {
      var handler = (function (mql, debounced) {
        return function () {
          // Only execute the callback if the state has changed.
          var oldstate = mql.matches;
          mql.check();
          if (oldstate !== mql.matches) {
            debounced.call(mql, mql);
          }
        };
      }(this, debounce(callback, 250)));
      this.listeners.push({
        'callback': callback,
        'handler': handler
      });

      // Associate the handler to the resize and orientationchange events.
      if ('addEventListener' in window) {
        window.addEventListener('resize', handler);
        window.addEventListener('orientationchange', handler);
      }
      else if ('attachEvent' in window) {
        window.attachEvent('onresize', handler);
        window.attachEvent('onorientationchange', handler);
      }
    },

    /**
     * Polyfill the removeListener method of the MediaQueryList object.
     *
     * @param {Function} callback
     *   The callback to be removed from the set of listeners.
     */
    removeListener: function (callback) {
      for (var i = 0, listeners = this.listeners; i < listeners.length; i++) {
        if (listeners[i].callback === callback) {
          // Disassociate the handler to the resize and orientationchange events.
          if ('removeEventListener' in window) {
            window.removeEventListener('resize', listeners[i].handler);
            window.removeEventListener('orientationchange', listeners[i].handler);
          }
          else if ('detachEvent' in window) {
            window.detachEvent('onresize', listeners[i].handler);
            window.detachEvent('onorientationchange', listeners[i].handler);
          }
          listeners.splice(i, 1);
        }
      }
    }
  };

  /**
   * Limits the invocations of a function in a given time frame.
   *
   * @param {Function} callback
   *   The function to be invoked.
   *
   * @param {Number} wait
   *   The time period within which the callback function should only be
   *   invoked once. For example if the wait period is 250ms, then the callback
   *   will only be called at most 4 times per second.
   */
  function debounce (callback, wait) {
    var timeout, result;
    return function () {
      var context = this;
      var args = arguments;
      var later = function () {
        timeout = null;
        result = callback.apply(context, args);
      };
      window.clearTimeout(timeout);
      timeout = window.setTimeout(later, wait);
      return result;
    };
  }

  /**
   * Return a MediaQueryList.
   *
   * @param {String} q
   *   A media query e.g. "screen" or "screen and (min-width: 28em)". The media
   *   query is checked for applicability before the object is returned.
   */
  return function (q) {
    // Build a new MediaQueryList object with the result of the check.
    return new MediaQueryList(q);
  };
}(document, window));
;
/**
 * Limits the invocations of a function in a given time frame.
 *
 * The debounce function wrapper should be used sparingly. One clear use case
 * is limiting the invocation of a callback attached to the window resize event.
 *
 * Before using the debounce function wrapper, consider first whether the
 * callback could be attache to an event that fires less frequently or if the
 * function can be written in such a way that it is only invoked under specific
 * conditions.
 *
 * @param {Function} callback
 *   The function to be invoked.
 *
 * @param {Number} wait
 *   The time period within which the callback function should only be
 *   invoked once. For example if the wait period is 250ms, then the callback
 *   will only be called at most 4 times per second.
 */

var Drupal = Drupal || {};

Drupal.debounce = function (callback, wait) {

  "use strict";

  var timeout, result;
  return function () {
    var context = this;
    var args = arguments;
    var later = function () {
      timeout = null;
      result = callback.apply(context, args);
    };
    window.clearTimeout(timeout);
    timeout = window.setTimeout(later, wait);
    return result;
  };
};
;
/**
 * Adds an HTML element and method to trigger audio UAs to read system messages.
 *
 * Use Drupal.announce() to indicate to screen reader users that an element on
 * the page has changed state. For instance, if clicking a link loads 10 more
 * items into a list, one might announce the change like this.
 * $('#search-list')
 *   .on('itemInsert', function (event, data) {
 *     // Insert the new items.
 *     $(data.container.el).append(data.items.el);
 *     // Announce the change to the page contents.
 *     Drupal.announce(Drupal.t('@count items added to @container',
 *       {'@count': data.items.length, '@container': data.container.title}
 *     ));
 *   });
 */
(function (Drupal, debounce) {

  "use strict";

  var liveElement;
  var announcements = [];

  /**
   * Builds a div element with the aria-live attribute and attaches it
   * to the DOM.
   */
  Drupal.behaviors.drupalAnnounce = {
    attach: function (context) {
      // Create only one aria-live element.
      if (!liveElement) {
        liveElement = document.createElement('div');
        liveElement.id = 'drupal-live-announce';
        liveElement.className = 'element-invisible';
        liveElement.setAttribute('aria-live', 'polite');
        liveElement.setAttribute('aria-busy', 'false');
        document.body.appendChild(liveElement);
      }
    }
  };

  /**
   * Concatenates announcements to a single string; appends to the live region.
   */
  function announce () {
    var text = [];
    var priority = 'polite';
    var announcement;

    // Create an array of announcement strings to be joined and appended to the
    // aria live region.
    for (var i = 0, il = announcements.length; i < il; i++) {
      announcement = announcements.pop();
      text.unshift(announcement.text);
      // If any of the announcements has a priority of assertive then the group
      // of joined announcements will have this priority.
      if (announcement.priority === 'assertive') {
        priority = 'assertive';
      }
    }

    if (text.length) {
      // Clear the liveElement so that repeated strings will be read.
      liveElement.innerHTML = '';
      // Set the busy state to true until the node changes are complete.
      liveElement.setAttribute('aria-busy', 'true');
      // Set the priority to assertive, or default to polite.
      liveElement.setAttribute('aria-live', priority);
      // Print the text to the live region. Text should be run through
      // Drupal.t() before being passed to Drupal.announce().
      liveElement.innerHTML = text.join('\n');
      // The live text area is updated. Allow the AT to announce the text.
      liveElement.setAttribute('aria-busy', 'false');
    }
  }

  /**
   * Triggers audio UAs to read the supplied text.
   *
   * The aria-live region will only read the text that currently populates its
   * text node. Replacing text quickly in rapid calls to announce results in
   * only the text from the most recent call to Drupal.announce() being read.
   * By wrapping the call to announce in a debounce function, we allow for
   * time for multiple calls to Drupal.announce() to queue up their messages.
   * These messages are then joined and append to the aria-live region as one
   * text node.
   *
   * @param String text
   *   A string to be read by the UA.
   * @param String priority
   *   A string to indicate the priority of the message. Can be either
   *   'polite' or 'assertive'. Polite is the default.
   *
   * @see http://www.w3.org/WAI/PF/aria-practices/#liveprops
   */
  Drupal.announce = function (text, priority) {
    // Save the text and priority into a closure variable. Multiple simultaneous
    // announcements will be concatenated and read in sequence.
    announcements.push({
      text: text,
      priority: priority
    });
    // Immediately invoke the function that debounce returns. 200 ms is right at
    // the cusp where humans notice a pause, so we will wait
    // at most this much time before the set of queued announcements is read.
    return (debounce(announce, 200)());
  };
}(Drupal, Drupal.debounce));
;
/**
 * Manages elements that can offset the size of the viewport.
 */
(function ($, Drupal, debounce) {

  "use strict";

  var offsets = {
    top: 0,
    right: 0,
    bottom: 0,
    left: 0
  };

  /**
   * Registers a resize hanlder on the window.
   */
  Drupal.behaviors.drupalDisplace = {
    attach: function () {
      // Do not process the window of the overlay.
      if (parent.Drupal.overlay && parent.Drupal.overlay.iframeWindow === window) {
        return;
      }
      // Mark this behavior as processed on the first pass.
      if (this.displaceProcessed) {
        return;
      }
      this.displaceProcessed = true;

      $(window).bind('resize.drupalDisplace', debounce(displace, 200));
    }
  };

  /**
   * Informs listeners of the current offset dimensions.
   *
   * @param {boolean} broadcast
   *   (optional) When true or undefined, causes the recalculated offsets values to be
   *   broadcast to listeners.
   *
   * @return {object}
   *   An object whose keys are the for sides an element -- top, right, bottom
   *   and left. The value of each key is the viewport displacement distance for
   *   that edge.
   */
  function displace (broadcast) {
    offsets = Drupal.displace.offsets = calculateOffsets();
    if (typeof broadcast === 'undefined' || broadcast) {
      $(document).trigger('drupalViewportOffsetChange', offsets);
    }
    return offsets;
  }

  /**
   * Determines the viewport offsets.
   *
   * @return {object}
   *   An object whose keys are the for sides an element -- top, right, bottom
   *   and left. The value of each key is the viewport displacement distance for
   *   that edge.
   */
  function calculateOffsets () {
    return {
      top: calculateOffset('top'),
      right: calculateOffset('right'),
      bottom: calculateOffset('bottom'),
      left: calculateOffset('left')
    };
  }

  /**
   * Gets a specific edge's offset.
   *
   * Any element with the attribute data-offset-{edge} e.g. data-offset-top will
   * be considered in the viewport offset calculations. If the attribute has a
   * numeric value, that value will be used. If no value is provided, one will
   * be calculated using the element's dimensions and placement.
   *
   * @param {string} edge
   *   The name of the edge to calculate. Can be 'top', 'right',
   *   'bottom' or 'left'.
   *
   * @return {number}
   *   The viewport displacement distance for the requested edge.
   */
  function calculateOffset (edge) {
    var edgeOffset = 0;
    var displacingElements = document.querySelectorAll('[data-offset-' + edge + ']');
    for (var i = 0, n = displacingElements.length; i < n; i++) {
      var el = displacingElements[i];
      // If the element is not visble, do consider its dimensions.
      if (el.style.display === 'none') {
        continue;
      }
      // If the offset data attribute contains a displacing value, use it.
      var displacement = parseInt(el.getAttribute('data-offset-' + edge), 10);
      // If the element's offset data attribute exits
      // but is not a valid number then get the displacement
      // dimensions directly from the element.
      if (isNaN(displacement)) {
          displacement = getRawOffset(el, edge);
      }
      // If the displacement value is larger than the current value for this
      // edge, use the displacement value.
      edgeOffset = Math.max(edgeOffset, displacement);
    }

    return edgeOffset;
  }

  /**
   * Calculates displacement for element based on its dimensions and placement.
   *
   * @param {jQuery} $el
   *   The jQuery element whose dimensions and placement will be measured.
   *
   * @param {string} edge
   *   The name of the edge of the viewport that the element is associated
   *   with.
   *
   * @return {number}
   *   The viewport displacement distance for the requested edge.
   */
  function getRawOffset (el, edge) {
    var $el = $(el);
    var documentElement = document.documentElement;
    var displacement = 0;
    var horizontal = (edge === 'left' || edge === 'right');
    // Get the offset of the element itself.
    var placement = $el.offset()[ horizontal ? 'left' : 'top'];
    // Subtract scroll distance from placement to get the distance
    // to the edge of the viewport.
    placement -= window['scroll' + (horizontal ? 'X' : 'Y')] || window['page' + (horizontal ? 'X' : 'Y') + 'Offset'] || document.documentElement['scroll' + (horizontal) ? 'Left' : 'Top'] || 0;
    // Find the displacement value according to the edge.
    switch (edge) {
      // Left and top elements displace as a sum of their own offset value
      // plus their size.
      case 'top':
        // Total displacment is the sum of the elements placement and size.
        displacement = placement + $el.outerHeight(true);
        break;

      case 'left':
        // Total displacment is the sum of the elements placement and size.
        displacement = placement + $el.outerWidth(true);
        break;

      // Right and bottom elements displace according to their left and
      // top offset. Their size isn't important.
      case 'bottom':
        displacement = documentElement.clientHeight - placement;
        break;

      case 'right':
        displacement = documentElement.clientWidth - placement;
        break;

      default:
        displacement = 0;
    }
    return displacement;
  }

  /**
   * Assign the displace function to a property of the Drupal global object.
   */
  Drupal.displace = displace;
  $.extend(Drupal.displace, {
    /**
     * Expose offsets to other scripts to avoid having to recalculate offsets
     */
    offsets: offsets,
    /**
     * Expose method to compute a single edge offsets.
     */
    calculateOffset: calculateOffset
  });

})(jQuery, Drupal, Drupal.debounce);
;
/**
 * Builds a nested accordion widget.
 *
 * Invoke on an HTML list element with the jQuery plugin pattern.
 * - For example, $('.navbar-menu').drupalNavbarMenu();
 */

(function ($, Drupal) {

"use strict";

/**
 * Store the open menu tray.
 */

  $.fn.drupalNavbarMenu = function (options) {

    // Merge options onto defaults.
    var settings = $.extend({}, {
      twisties: true,
      activeTrail: true,
      listLevels: true,
      //A function that returns the list (li) element.
      findItem: null,
      // A function that returns the element which should be treated as the
      // "link" for a menu item.
      findItemElement: null,
      // A function that returns the sub-menu element of a menu item.
      findItemSubMenu: null
    }, options);

    var ui = {
      'handleOpen': Drupal.t('Extend'),
      'handleClose': Drupal.t('Collapse')
    };
    /**
     * Handle clicks from the disclosure button on an item with sub-items.
     *
     * @param {Object} event
     *   A jQuery Event object.
     */
    function toggleClickHandler (event) {
      var $toggle = $(event.target).filter('.navbar-handle');
      if ($toggle.length) {
        var $item = $toggle.closest('li');
        // Toggle the list item.
        toggleList($item);
        // Close open sibling menus.
        var $openItems = $item.siblings().filter('.open');
        toggleList($openItems, false);
      }
    }
    /**
     * Toggle the open/close state of a list is a menu.
     *
     * @param {jQuery} $item
     *   The li item to be toggled.
     *
     * @param {Boolean} switcher
     *   A flag that forces toggleClass to add or a remove a class, rather than
     *   simply toggling its presence.
     */
    function toggleList ($item, switcher) {
      var $toggle = $item.children('.navbar-box').children('.navbar-handle');
      switcher = (typeof switcher !== 'undefined') ? switcher : !$item.hasClass('open');
      // Toggle the item open state.
      $item.toggleClass('open', switcher);
      // Twist the toggle.
      $toggle.toggleClass('open', switcher);
      // Adjust the toggle text.
      $toggle
        .find('.action')
        // Expand Structure, Collapse Structure
        .text((switcher) ?  ui.handleClose : ui.handleOpen);
    }
    /**
     * Wrap menu links is standardized markup.
     *
     * Items with sub-elements have a list toggle attached to them. Menu item
     * links and the corresponding list toggle are wrapped with in a div
     * classed with .navbar-box. The .navbar-box div provides a positioning
     * context for the item list toggle twisty.
     *
     * @param {jQuery} $menu
     *   The root of the menu to be initialized.
     */
    function processMenuLinks ($items, settings, $menu) {
      // Initialize items and their links.
      $items
        .once('navbar-menu-item')
        .each(function (index, element) {
          var $item = $(element);
          var $handle = settings.findItemElement && settings.findItemElement($item, $menu) || $item.children('a, span');
          if ($handle.length) {
            $handle
              // Add a handle to each list item if it has a menu.
              .addClass('navbar-menu-item')
              .wrap('<div class="navbar-box">');
          }
          // Store a reference to the box wrapping element so that it needn't be
          // found again through DOM searching.
          $item.data({'box': $handle.parent().get(0)});
        });
      // Twisties allow for expand/collapse of nested menu items.
      if (settings.twisties) {
        var options = {
          'class': 'navbar-icon navbar-handle',
          'action': ui.handleOpen,
          'text': ''
        };
        $items
          .each(function (index, element) {
            var $item = $(element);
            // The following code involves a lot of DOM traversing. Exit early
            // if possible, but don't mark the menu as processed just yet, so
            // $.once() can't be called here.
            if ($item.hasClass('navbar-menu-twisties-processed')) {
              return;
            }
            var $menu = settings.findItemSubMenu && settings.findItemSubMenu($item, $menu) || $item.children('ul');
            if ($menu.length) {
              // Get the item 'link' element.
              var $box = $($item.data('box'));
              if ($box.length) {
                var $twistyItem = $item.once('navbar-menu-twisties');
                if ($twistyItem.length) {
                  options.text = Drupal.t('@label', {'@label': $box.text()});
                  $item.addClass('navbar-twisty');
                  $box.append(Drupal.theme('navbarMenuItemToggle', options));
                }
              }
            }
          });
      }
    }
    /**
     * Adds a level class to each list based on its depth in the menu.
     *
     * This function is called recursively on each sub level of lists elements
     * until the depth of the menu is exhausted.
     *
     * @param {jQuery} $lists
     *   A jQuery object of ul elements.
     *
     * @param {Integer} level
     *   The current level number to be assigned to the list elements.
     */
    function markListLevels ($lists, level, settings, $menu) {
      level = (!level) ? 1 : level;
      var $items = settings.findItem && settings.findItem($lists, $menu) || $lists.children('li');
      $items.addClass('navbar-level-' + level);
        // Retrieve child menus.
      var $lists = settings.findItemSubMenu && settings.findItemSubMenu($items, $menu) || $items.children('ul');
      if ($lists.length) {
        markListLevels($lists, level + 1, settings, $menu);
      }
    }
    /**
     * On page load, open the active menu item.
     *
     * Marks the trail of the active link in the menu back to the root of the
     * menu with .active-trail.
     *
     * @param {jQuery} $menu
     *   The root of the menu.
     */
    function openActiveItem ($menu) {
      var pathname = location.pathname;
      // Get all menu items that start with the location path.
      var $pathItem = $menu.find('a[href^="' + pathname + '"]');

      // Clear any existing menu trails.
      $menu.find('.navbar-active, .navbar-active-trail').removeClass('navbar-active navbar-active-trail');
      /**
       * Adds the navbar-active class active menu item.
       *
       * In addition a navbar-active-trail class is added to all parent menu
       * list items.
       *
       * @param jQuery $pathItem
       *   A jQuery object of the active menu item.
       */
      function markItemTrail ($pathItem) {
        $pathItem.addClass('navbar-active');
        var $activeTrail = $pathItem.parentsUntil('.navbar-root', 'li').addClass('navbar-active-trail');
        toggleList($activeTrail, true);
      }

      if ($pathItem.length) {
        // If the path yields more than one match, try to narrow the items down
        // by the params and hash.
        if ($pathItem.length > 1) {
          for (var i = 0, aspects = ['', location.search, location.hash, (location.search + location.hash)], len = aspects.length; i < len; i++) {
            $pathItem = $menu.find('a[href="' + pathname + aspects[i] + '"]');
            if ($pathItem.length === 1) {
              break;
            }
          }
        }
        if ($pathItem.length === 1) {
          markItemTrail($pathItem);
        }
      }
    }
    // Return the jQuery object.
    return this.each(function (selector) {
      var $menu = $(this);
      var rootNotProcessed = $menu.once('navbar-menu');
      if (rootNotProcessed.length) {
        $menu
          .addClass('navbar-menu-root navbar-root')
          .on('click.navbar', toggleClickHandler);
      }
      // Process components of the menu.
      processMenuLinks($menu.find('li'), settings, $menu);
      // Add a menu level class to each menu item.
      if (settings.listLevels) {
        markListLevels($menu, 1, settings, $menu);
      }
      // Restore previous and active states.
      if (settings.activeTrail) {
        openActiveItem($menu);
      }
    });
  };

  /**
   * A toggle is an interactive element often bound to a click handler.
   *
   * @return {String}
   *   A string representing a DOM fragment.
   */
  Drupal.theme.navbarMenuItemToggle = function (options) {
    return '<button class="' + options['class'] + '"><span class="action">' + options.action + '</span><span class="label">' + options.text + '</span></button>';
  };

}(jQuery, Drupal));
;
/**
 * @file
 *
 * Replaces the home link in navbar with a back to site link.
 */
(function ($) {

"use strict";

/**
 * Replaces the "Home" link with "Back to site" link.
 *
 * Back to site link points to the last non-administrative page the user visited
 * within the same browser tab.
 */
Drupal.behaviors.escapeAdmin = {
  attach: function (context, settings) {
    var escapeAdminPath = sessionStorage.getItem('escapeAdminPath');
    var windowLocation = window.location;

    // Saves the last non-administrative page in the browser to be able to link back
    // to it when browsing administrative pages. If there is a destination parameter
    // there is not need to save the current path because the page is loaded within
    // an existing "workflow".
    if (!settings.currentPathIsAdmin && !/destination=/.test(window.location.search)) {
      sessionStorage.setItem('escapeAdminPath', windowLocation);
    }

    var $toolbarEscape = $('[data-navbar-escape-admin]').once('escape-admin');
    if ($toolbarEscape.length && settings.currentPathIsAdmin) {
      if (escapeAdminPath !== null) {
        $toolbarEscape.attr('href', escapeAdminPath);
      }
      else {
        $toolbarEscape.text(Drupal.t('Home'));
      }
      $toolbarEscape.removeClass('element-hidden');
    }
  }
};

})(jQuery);
;
/**
 * @file
 * Defines the behavior of the Drupal administration navbar.
 */

(function ($, Backbone, Drupal) {

"use strict";

/**
 * Registers tabs with the navbar.
 *
 * The navbar allows modules to register top-level tabs. These may point
 * directly to a resource or toggle the visibility of a tray.
 *
 * Modules register tabs with hook_navbar().
 */
Drupal.behaviors.navbar = {

  attach: function (context) {
    // Verify that the user agent understands media queries. Complex admin
    // navbar layouts require media query support.
    if (!window.matchMedia('only screen').matches) {
      return;
    }
    // Process the administrative navbar.
    $(context).find('#navbar-administration').once('navbar', function () {

      // Add a class to the body indicating that the navbar is present on the
      // page.
      // @see https://drupal.org/node/1940104
      $('body').addClass('navbar-administration');

      // Merge run-time settings with the defaults.
      var options = $.extend(
        {
          breakpoints: {
            'narrow': '',
            'standard': '',
            'wide': ''
          }
        },
        Drupal.settings.navbar,
        // Merge strings on top of drupalSettings so that they are not mutable.
        {
          strings: {
            horizontal: Drupal.t('Horizontal orientation'),
            vertical: Drupal.t('Vertical orientation')
          }
        }
      );

      // Establish the navbar models and views.
      var model = Drupal.navbar.models.navbarModel = new Drupal.navbar.NavbarModel({
        locked: JSON.parse(localStorage.getItem('Drupal.navbar.trayVerticalLocked')) || false,
        activeTab: JSON.parse(localStorage.getItem('Drupal.navbar.activeTab'))
      });
      Drupal.navbar.views.navbarVisualView = new Drupal.navbar.NavbarVisualView({
        el: this,
        model: model,
        strings: options.strings
      });
      Drupal.navbar.views.navbarAuralView = new Drupal.navbar.NavbarAuralView({
        el: this,
        model: model,
        strings: options.strings
      });
      Drupal.navbar.views.NavbarVisualView = new Drupal.navbar.BodyVisualView({
        el: this,
        model: model
      });

      // Render collapsible menus.
      var menuModel = Drupal.navbar.models.menuModel = new Drupal.navbar.MenuModel();
      Drupal.navbar.views.menuVisualView = new Drupal.navbar.MenuVisualView({
        el: $(this).find('.navbar-menu-administration').get(0),
        model: menuModel,
        strings: options.strings
      });

      // Handle the resolution of Drupal.navbar.setSubtrees.
      // This is handled with a deferred so that the function may be invoked
      // asynchronously.
      Drupal.navbar.setSubtrees.done(function (subtrees) {
        menuModel.set('subtrees', subtrees);
        localStorage.setItem('Drupal.navbar.subtrees', JSON.stringify(subtrees));
        // Indicate on the navbarModel that subtrees are now loaded.
        model.set('areSubtreesLoaded', true);
      });
      // Resolve this immediately since we're simply loading all the submenu
      // items right from the server each time until we can resolve the JSONP
      // loading issue in Drupal 7.
      Drupal.navbar.setSubtrees.resolve(null);

      // Attach a listener to the configured media query breakpoints.
      for (var label in options.breakpoints) {
        if (options.breakpoints.hasOwnProperty(label)) {
          var mq = options.breakpoints[label];
          var mql = Drupal.navbar.mql[label] = window.matchMedia(mq);
          // Curry the model and the label of the media query breakpoint to the
          // mediaQueryChangeHandler function.
          mql.addListener(Drupal.navbar.mediaQueryChangeHandler.bind(null, model, label));
          // Fire the mediaQueryChangeHandler for each configured breakpoint
          // so that they process once.
          Drupal.navbar.mediaQueryChangeHandler.call(null, model, label, mql);
        }
      }

      // Trigger an initial attempt to load menu subitems. This first attempt
      // is made after the media query handlers have had an opportunity to
      // process. The navbar starts in the vertical orientation by default,
      // unless the viewport is wide enough to accomodate a horizontal
      // orientation. Thus we give the Navbar a chance to determine if it
      // should be set to horizontal orientation before attempting to load menu
      // subtrees.
      Drupal.navbar.views.navbarVisualView.loadSubtrees();

      $(document)
        // Update the model when the viewport offset changes.
        .on('drupalViewportOffsetChange.navbar', function (event, offsets) {
          model.set('offsets', offsets);
        })
        // The overlay will hide viewport overflow, potentially stranding tray
        // items that are offscreen. The navbar will adjust tray presentation
        // to prevent this when viewport overflow is hidden.
        .on('drupalOverlayOpen.navbar', function () {
          model.set('isViewportOverflowConstrained', true);
        })
        .on('drupalOverlayClose.navbar', function () {
          model.set('isViewportOverflowConstrained', false);
        });

      // Broadcast model changes to other modules.
      model
        .on('change:orientation', function (model, orientation) {
          $(document).trigger('drupalNavbarOrientationChange', orientation);
        })
        .on('change:activeTab', function (model, tab) {
          $(document).trigger('drupalNavbarTabChange', tab);
        })
        .on('change:activeTray', function (model, tray) {
          $(document).trigger('drupalNavbarTrayChange', tray);
        });
    });

    // Invoke the Navbar menu script for core modules.
    $('.navbar-menu-user').drupalNavbarMenu();
    $('.navbar-menu-shortcuts .navbar-lining > .navbar-menu').drupalNavbarMenu();
  }
};

/**
 * Navbar Backbone objects.
 */
Drupal.navbar = {

  // A hash of View instances.
  views: {},

  // A hash of Model instances.
  models: {},

  // A hash of MediaQueryList objects tracked by the navbar.
  mql: {},

  /**
   * Accepts a list of subtree menu elements.
   *
   * A deferred object that is resolved by an inlined JavaScript callback.
   *
   * JSONP callback.
   * @see navbar_subtrees_jsonp().
   *
   * Let's build our own $.Deferred()!
   */
  setSubtrees: (function () {
    return {
      resolve: function (subtrees) {
        this.callback.call(null, subtrees);
      },
      done: function (callback) {
        this.callback = callback;
      }
    };
  }()),

  /**
   * Respond to configured narrow media query changes.
   */
  mediaQueryChangeHandler: function (model, label, mql) {
    switch (label) {
      case 'narrow':
        model.set({
          'isOriented': mql.matches,
          'isTrayToggleVisible': false
        });
        // If the navbar doesn't have an explicit orientation yet, or if the
        // narrow media query doesn't match then set the orientation to
        // vertical.
        if (!mql.matches || !model.get('orientation')) {
          model.set({'orientation': 'vertical'}, {validate: true});
        }
        break;
      case 'standard':
        model.set({
          'isFixed': mql.matches
        });
        break;
      case 'wide':
        model.set({
          'orientation': ((mql.matches) ? 'horizontal' : 'vertical')
        }, {validate: true});
        // The tray orientation toggle visibility does not need to be validated.
        model.set({
          'isTrayToggleVisible': mql.matches
        });
        break;
      default:
        break;
    }
  },

  /**
   * Backbone model for the navbar.
   */
  NavbarModel: Backbone.Model.extend({
    defaults: {
      // The active navbar tab. All other tabs should be inactive under
      // normal circumstances. It will remain active across page loads. The
      // active item is stored as an ID selector e.g. '#navbar-item--1'.
      activeTab: null,
      // Represents whether a tray is open or not. Stored as an ID selector e.g.
      // '#navbar-item--1-tray'.
      activeTray: null,
      // Indicates whether the navbar is displayed in an oriented fashion,
      // either horizontal or vertical.
      isOriented: false,
      // Indicates whether the navbar is positioned absolute (false) or fixed
      // (true).
      isFixed: false,
      // Menu subtrees are loaded through an AJAX request only when the Navbar
      // is set to a vertical orientation.
      areSubtreesLoaded: false,
      // If the viewport overflow becomes constrained, such as when the overlay
      // is open, isFixed must be true so that elements in the trays aren't
      // lost offscreen and impossible to get to.
      isViewportOverflowConstrained: false,
      // The orientation of the active tray.
      orientation: 'vertical',
      // A tray is locked if a user toggled it to vertical. Otherwise a tray
      // will switch between vertical and horizontal orientation based on the
      // configured breakpoints. The locked state will be maintained across page
      // loads.
      locked: false,
      // Indicates whether the tray orientation toggle is visible.
      isTrayToggleVisible: false,
      // The height of the navbar.
      height: null,
      // The current viewport offsets determined by Drupal.displace(). The
      // offsets suggest how a module might position is components relative to
      // the viewport.
      offsets: {
        top: 0,
        right: 0,
        bottom: 0,
        left: 0
      }
    },

    /**
     * {@inheritdoc}
     */
    validate: function (attributes, options) {
      // Prevent the orientation being set to horizontal if it is locked, unless
      // override has not been passed as an option.
      if (attributes.orientation === 'horizontal' && this.get('locked') && !options.override) {
        return Drupal.t('The navbar cannot be set to a horizontal orientation when it is locked.');
      }
    }
  }),

  /**
   * Backbone view for the aural feedback of the navbar.
   */
  NavbarAuralView: Backbone.View.extend({

    /**
     * {@inheritdoc}
     */
    initialize: function (options) {
      this.strings = options.strings;

      this.model.on('change:orientation', this.onOrientationChange, this);
      this.model.on('change:activeTray', this.onActiveTrayChange, this);
    },

    /**
     * Announces an orientation change.
     *
     * @param Drupal.Navbar.NavbarModel model
     * @param String orientation
     *   The new value of the orientation attribute in the model.
     */
    onOrientationChange: function (model, orientation) {
      Drupal.announce(Drupal.t('Tray orientation changed to @orientation.', {
        '@orientation': orientation
      }));
    },

    /**
     * Announces a changed active tray.
     *
     * @param Drupal.Navbar.NavbarModel model
     * @param Element orientation
     *   The new value of the tray attribute in the model.
     */
    onActiveTrayChange: function (model, tray) {
      var relevantTray = (tray === null) ? model.previous('activeTray') : tray;
      var trayName = relevantTray.querySelector('.navbar-tray-name').textContent;
      var text;
      if (tray === null) {
        text = Drupal.t('Tray "@tray" closed.', { '@tray': trayName });
      }
      else {
        text = Drupal.t('Tray "@tray" opened.', { '@tray': trayName });
      }
      Drupal.announce(text);
    }
  }),

  /**
   * Backbone view for the navbar element. Listens to mouse & touch.
   */
  NavbarVisualView: Backbone.View.extend({

    events: function () {
      // Prevents delay and simulated mouse events.
      var touchEndToClick = function (event) {
        event.preventDefault();
        event.target.click();
      };

      return {
        'click .navbar-bar [data-navbar-tab-trigger]': 'onTabClick',
        'click .navbar-toggle-orientation button': 'onOrientationToggleClick',
        'touchend .navbar-bar [data-navbar-tab-trigger]': touchEndToClick,
        'touchend .navbar-toggle-orientation button': touchEndToClick
      };
    },

    /**
     * {@inheritdoc}
     */
    initialize: function (options) {
      this.strings = options.strings;

      this.model.on('change:activeTab change:orientation change:isOriented change:isTrayToggleVisible', this.render, this);
      this.model.on('change:mqMatches', this.onMediaQueryChange, this);
      this.model.on('change:offsets', this.adjustPlacement, this);

      // Add the tray orientation toggles.
      this.$el
        .find('.navbar-tray .navbar-lining')
        .append(Drupal.theme('navbarOrientationToggle'));

      // Trigger an activeTab change so that listening scripts can respond on
      // page load. This will call render.
      this.model.trigger('change:activeTab');
    },

    /**
     * {@inheritdoc}
     */
    render: function () {
      this.updateTabs();
      this.updateTrayOrientation();
      this.updateBarAttributes();
      // Load the subtrees if the orientation of the navbar is changed to
      // vertical. This condition responds to the case that the navbar switches
      // from horizontal to vertical orientation. The navbar starts in a
      // vertical orientation by default and then switches to horizontal during
      // initialization if the media query conditions are met. Simply checking
      // that the orientation is vertical here would result in the subtrees
      // always being loaded, even when the navbar initialization ultimately
      // results in a horizontal orientation.
      //
      // @see Drupal.behaviors.navbar.attach() where admin menu subtrees
      // loading is invoked during initialization after media query conditions
      // have been processed.
      if (this.model.changed.orientation === 'vertical' || this.model.changed.activeTab) {
        this.loadSubtrees();
      }
      // Trigger a recalculation of viewport displacing elements. Use setTimeout
      // to ensure this recalculation happens after changes to visual elements
      // have processed.
      window.setTimeout(function () {
        Drupal.displace(true);
      }, 0);
      return this;
    },

    /**
     * Responds to a navbar tab click.
     *
     * @param jQuery.Event event
     */
    onTabClick: function (event) {
      // If this tab has a tray associated with it, it is considered an
      // activatable tab.
      if (event.target.hasAttribute('data-navbar-tray')) {
        var activeTab = this.model.get('activeTab');
        var id = event.target.id;
        // Set the event target as the active item if it is not already.
        this.model.set('activeTab', (!activeTab || id !== activeTab) ? id : null);

        event.preventDefault();
        event.stopPropagation();
      }
    },

    /**
     * Toggles the orientation of a navbar tray.
     *
     * @param jQuery.Event event
     */
    onOrientationToggleClick: function (event) {
      if ($(event.target).hasClass('navbar-toggle')) {
        var orientation = this.model.get('orientation');
        // Determine the toggle-to orientation.
        var antiOrientation = (orientation === 'vertical') ? 'horizontal' : 'vertical';
        var locked = (antiOrientation === 'vertical') ? true : false;
        // Remember the locked state.
        if (locked) {
          localStorage.setItem('Drupal.navbar.trayVerticalLocked', 'true');
        }
        else {
          localStorage.removeItem('Drupal.navbar.trayVerticalLocked');
        }
        // Update the model.
        this.model.set({
          locked: locked,
          orientation: antiOrientation
        }, {
          validate: true,
          override: true
        });

        event.preventDefault();
        event.stopPropagation();
      }
    },

    /**
     * Updates the display of the tabs: toggles a tab and the associated tray.
     */
    updateTabs: function () {
      var $tab = $('#' + this.model.get('activeTab'));
      // Deactivate the previous tab.
      $('#' + this.model.previous('activeTab'))
        .removeClass('navbar-active')
        .attr('aria-pressed', false);
      // Deactivate the previous tray.
      $(this.model.previous('activeTray'))
        .removeClass('navbar-active');

      // Activate the selected tab.
      if ($tab.length > 0) {
        $tab
          .addClass('navbar-active')
          // Mark the tab as pressed.
          .attr('aria-pressed', true);
        var name = $tab.attr('data-navbar-tray');
        // Store the active tab name or remove the setting.
        var id = $tab.get(0).id;
        if (id) {
          localStorage.setItem('Drupal.navbar.activeTab', JSON.stringify(id));
        }
        // Activate the associated tray.
        var $tray = this.$el.find('[data-navbar-tray="' + name + '"].navbar-tray');
        if ($tray.length) {
          $tray.addClass('navbar-active');
          this.model.set('activeTray', $tray.get(0));
        }
        else {
          // There is no active tray.
          this.model.set('activeTray', null);
        }
      }
      else {
        // There is no active tray.
        this.model.set('activeTray', null);
        localStorage.removeItem('Drupal.navbar.activeTab');
      }
    },

    /**
     * Update the attributes of the navbar bar element.
     */
    updateBarAttributes: function () {
      var isOriented = this.model.get('isOriented');
      if (isOriented) {
        this.$el.find('.navbar-bar').attr('data-offset-top', '');
      }
      else {
        this.$el.find('.navbar-bar').removeAttr('data-offset-top');
      }
      // Toggle between a basic vertical view and a more sophisticated
      // horizontal and vertical display of the navbar bar and trays.
      this.$el.toggleClass('navbar-oriented', isOriented);
    },

    /**
     * Updates the orientation of the active tray if necessary.
     */
    updateTrayOrientation: function () {
      var orientation = this.model.get('orientation');
      // The antiOrientation is used to render the view of action buttons like
      // the tray orientation toggle.
      var antiOrientation = (orientation === 'vertical') ? 'horizontal' : 'vertical';
      // Update the orientation of the trays.
      var $trays = this.$el.find('.navbar-tray')
        .removeClass('navbar-tray-horizontal navbar-tray-vertical')
        .addClass('navbar-tray-' + orientation);

      // Update the tray orientation toggle button.
      var iconClass = 'navbar-icon-toggle-' + orientation;
      var iconAntiClass = 'navbar-icon-toggle-' + antiOrientation;
      var $orientationToggle = this.$el.find('.navbar-toggle-orientation')
        .toggle(this.model.get('isTrayToggleVisible'));
      $orientationToggle.find('button')
        .val(antiOrientation)
        .text(this.strings[antiOrientation])
        .removeClass(iconClass)
        .addClass(iconAntiClass);

      // Update data offset attributes for the trays.
      var dir = document.documentElement.dir;
      var edge = (dir === 'rtl') ? 'right' : 'left';
      // Remove data-offset attributes from the trays so they can be refreshed.
      $trays
        .removeAttr('data-offset-left')
        .removeAttr('data-offset-right')
        .removeAttr('data-offset-top');
      // If an active vertical tray exists, mark it as an offset element.
      $trays.filter('.navbar-tray-vertical.navbar-active').attr('data-offset-' + edge, '');
      // If an active horizontal tray exists, mark it as an offset element.
      $trays.filter('.navbar-tray-horizontal.navbar-active').attr('data-offset-top', '');
    },

    /**
     * Sets the tops of the trays so that they align with the bottom of the bar.
     */
    adjustPlacement: function () {
      var $trays = this.$el.find('.navbar-tray');
      if (!this.model.get('isOriented')) {
        $trays.css('padding-top', 0);
        $trays.removeClass('navbar-tray-horizontal').addClass('navbar-tray-vertical');
      }
      else {
        // The navbar container is invisible. Its placement is used to determine
        // the container for the trays.
        $trays.css('padding-top', this.$el.find('.navbar-bar').outerHeight(true));
      }
    },

    /**
     * Calls the endpoint URI that will return rendered subtrees with JSONP.
     *
     * The rendered admin menu subtrees HTML is cached on the client in
     * localStorage until the cache of the admin menu subtrees on the server-
     * side is invalidated. The subtreesHash is stored in localStorage as well
     * and compared to the subtreesHash in drupalSettings to determine when the
     * admin menu subtrees cache has been invalidated.
     */
    loadSubtrees: function () {
      var $activeTab = $('#' + this.model.get('activeTab'));
      var orientation = this.model.get('orientation');
      // Only load and render the admin menu subtrees if:
      //   (1) They have not been loaded yet.
      //   (2) The active tab is the administration menu tab, indicated by the
      //       presence of the data-drupal-subtrees attribute.
      //   (3) The orientation of the tray is vertical.
      if (!this.model.get('areSubtreesLoaded') && $activeTab.data('drupal-subtrees') !== undefined && orientation === 'vertical') {
        var subtreesHash = drupalSettings.navbar.subtreesHash;
        var endpoint = Drupal.url('navbar/subtrees/' + subtreesHash);
        var cachedSubtreesHash = localStorage.getItem('Drupal.navbar.subtreesHash');
        var cachedSubtrees = JSON.parse(localStorage.getItem('Drupal.navbar.subtrees'));
        var isVertical = this.model.get('orientation') === 'vertical';
        // If we have the subtrees in localStorage and the subtree hash has not
        // changed, then use the cached data.
        if (isVertical && subtreesHash === cachedSubtreesHash && cachedSubtrees) {
          Drupal.navbar.setSubtrees.resolve(cachedSubtrees);
        }
        // Only make the call to get the subtrees if the orientation of the
        // navbar is vertical.
        else if (isVertical) {
          // Remove the cached menu information.
          localStorage.removeItem('Drupal.navbar.subtreesHash');
          localStorage.removeItem('Drupal.navbar.subtrees');
          // The response from the server will call the resolve method of the
          // Drupal.navbar.setSubtrees Promise.
          $.ajax(endpoint);
          // Cache the hash for the subtrees locally.
          localStorage.setItem('Drupal.navbar.subtreesHash', subtreesHash);
        }
      }
    }
  }),

  /**
   * Backbone Model for collapsible menus.
   */
  MenuModel: Backbone.Model.extend({
    defaults: {
      subtrees: {}
    }
  }),

  /**
   * Backbone View for collapsible menus.
   */
  MenuVisualView: Backbone.View.extend({
    /**
     * {@inheritdoc}
     */
    initialize: function () {
      this.model.on('change:subtrees', this.render, this);
    },

    /**
     * {@inheritdoc}
     */
    render: function () {
      var subtrees = this.model.get('subtrees');
      // Add subtrees.
      for (var id in subtrees) {
        if (subtrees.hasOwnProperty(id)) {
          this.$el
            .find('#navbar-link-' + id)
            .once('navbar-subtrees')
            .after(subtrees[id]);
        }
      }
      // Render the main menu as a nested, collapsible accordion.
      if ('drupalNavbarMenu' in $.fn) {
        this.$el
          .children('.navbar-menu')
          .drupalNavbarMenu();
      }
    }
  }),

  /**
   * Adjusts the body element with the navbar position and dimension changes.
   */
  BodyVisualView: Backbone.View.extend({

    /**
     * {@inheritdoc}
     */
    initialize: function () {
      this.model.on('change:orientation change:offsets change:activeTray change:isOriented change:isFixed change:isViewportOverflowConstrained', this.render, this);
    },

    /**
     * {@inheritdoc}
     */
    render: function () {
      var $body = $('body');
      var orientation = this.model.get('orientation');
      var isOriented = this.model.get('isOriented');
      var isViewportOverflowConstrained = this.model.get('isViewportOverflowConstrained');

      $body
        // We are using JavaScript to control media-query handling for two
        // reasons: (1) Using JavaScript let's us leverage the breakpoint
        // configurations and (2) the CSS is really complex if we try to hide
        // some styling from browsers that don't understand CSS media queries.
        // If we drive the CSS from classes added through JavaScript,
        // then the CSS becomes simpler and more robust.
        .toggleClass('navbar-vertical', (orientation === 'vertical'))
        .toggleClass('navbar-horizontal', (isOriented && orientation === 'horizontal'))
        // When the navbar is fixed, it will not scroll with page scrolling.
        .toggleClass('navbar-fixed', (isViewportOverflowConstrained || this.model.get('isFixed')))
        // Toggle the navbar-tray-open class on the body element. The class is
        // applied when a navbar tray is active. Padding might be applied to
        // the body element to prevent the tray from overlapping content.
        .toggleClass('navbar-tray-open', !!this.model.get('activeTray'))
        // Apply padding to the top of the body to offset the placement of the
        // navbar bar element.
        .css('padding-top', this.model.get('offsets').top);
    }
  })
};

/**
 * A toggle is an interactive element often bound to a click handler.
 *
 * @return {String}
 *   A string representing a DOM fragment.
 */
Drupal.theme.navbarOrientationToggle = function () {
  return '<div class="navbar-toggle-orientation"><div class="navbar-lining">' +
    '<button class="navbar-icon navbar-toggle" type="button"></button>' +
    '</div></div>';
};

}(jQuery, Backbone, Drupal));
;
/**
 * @file
 * Provide displacement information sticky tableheaders.
 */

(function ($, Drupal, displace) {

"use strict";

Drupal.navbar = Drupal.navbar || {};
  $.extend(Drupal.navbar, {
    calculatedHeight: NaN,
    calculateHeight: function () {
      var self = this;
      // Set the initial value of the height.
      if (isNaN(this.calculatedHeight)) {
        this.calculatedHeight = this.models.navbarModel.get('offsets').top;
      }
      // Add a listener to the model to update the offset only when changed.
      this.models.navbarModel.on('change:offsets', function(updated) {
        self.calculatedHeight = updated.changed.offsets.top;
      });
      return this.calculatedHeight;
    },
    // Height function required for sticky table headers.
    height: function () {
      // Returns the cached height value.
      return this.calculateHeight();
    }
  });

}(jQuery, Drupal, Drupal.displace));
;
