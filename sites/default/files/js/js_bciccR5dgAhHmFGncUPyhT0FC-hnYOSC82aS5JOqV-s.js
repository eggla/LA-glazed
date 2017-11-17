/* ========================================================================
 * bootstrap-switch - v3.3.2
 * http://www.bootstrap-switch.org
 * ========================================================================
 * Copyright 2012-2013 Mattia Larentis
 *
 * ========================================================================
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ========================================================================
 */

(function(){var t=[].slice;!function(e,i){"use strict";var n;return n=function(){function t(t,i){null==i&&(i={}),this.$element=e(t),this.options=e.extend({},e.fn.bootstrapSwitch.defaults,{state:this.$element.is(":checked"),size:this.$element.data("size"),animate:this.$element.data("animate"),disabled:this.$element.is(":disabled"),readonly:this.$element.is("[readonly]"),indeterminate:this.$element.data("indeterminate"),inverse:this.$element.data("inverse"),radioAllOff:this.$element.data("radio-all-off"),onColor:this.$element.data("on-color"),offColor:this.$element.data("off-color"),onText:this.$element.data("on-text"),offText:this.$element.data("off-text"),labelText:this.$element.data("label-text"),handleWidth:this.$element.data("handle-width"),labelWidth:this.$element.data("label-width"),baseClass:this.$element.data("base-class"),wrapperClass:this.$element.data("wrapper-class")},i),this.$wrapper=e("<div>",{"class":function(t){return function(){var e;return e=[""+t.options.baseClass].concat(t._getClasses(t.options.wrapperClass)),e.push(t.options.state?""+t.options.baseClass+"-on":""+t.options.baseClass+"-off"),null!=t.options.size&&e.push(""+t.options.baseClass+"-"+t.options.size),t.options.disabled&&e.push(""+t.options.baseClass+"-disabled"),t.options.readonly&&e.push(""+t.options.baseClass+"-readonly"),t.options.indeterminate&&e.push(""+t.options.baseClass+"-indeterminate"),t.options.inverse&&e.push(""+t.options.baseClass+"-inverse"),t.$element.attr("id")&&e.push(""+t.options.baseClass+"-id-"+t.$element.attr("id")),e.join(" ")}}(this)()}),this.$container=e("<div>",{"class":""+this.options.baseClass+"-container"}),this.$on=e("<span>",{html:this.options.onText,"class":""+this.options.baseClass+"-handle-on "+this.options.baseClass+"-"+this.options.onColor}),this.$off=e("<span>",{html:this.options.offText,"class":""+this.options.baseClass+"-handle-off "+this.options.baseClass+"-"+this.options.offColor}),this.$label=e("<span>",{html:this.options.labelText,"class":""+this.options.baseClass+"-label"}),this.$element.on("init.bootstrapSwitch",function(e){return function(){return e.options.onInit.apply(t,arguments)}}(this)),this.$element.on("switchChange.bootstrapSwitch",function(e){return function(){return e.options.onSwitchChange.apply(t,arguments)}}(this)),this.$container=this.$element.wrap(this.$container).parent(),this.$wrapper=this.$container.wrap(this.$wrapper).parent(),this.$element.before(this.options.inverse?this.$off:this.$on).before(this.$label).before(this.options.inverse?this.$on:this.$off),this.options.indeterminate&&this.$element.prop("indeterminate",!0),this._init(),this._elementHandlers(),this._handleHandlers(),this._labelHandlers(),this._formHandler(),this._externalLabelHandler(),this.$element.trigger("init.bootstrapSwitch")}return t.prototype._constructor=t,t.prototype.state=function(t,e){return"undefined"==typeof t?this.options.state:this.options.disabled||this.options.readonly?this.$element:this.options.state&&!this.options.radioAllOff&&this.$element.is(":radio")?this.$element:(this.options.indeterminate&&this.indeterminate(!1),t=!!t,this.$element.prop("checked",t).trigger("change.bootstrapSwitch",e),this.$element)},t.prototype.toggleState=function(t){return this.options.disabled||this.options.readonly?this.$element:this.options.indeterminate?(this.indeterminate(!1),this.state(!0)):this.$element.prop("checked",!this.options.state).trigger("change.bootstrapSwitch",t)},t.prototype.size=function(t){return"undefined"==typeof t?this.options.size:(null!=this.options.size&&this.$wrapper.removeClass(""+this.options.baseClass+"-"+this.options.size),t&&this.$wrapper.addClass(""+this.options.baseClass+"-"+t),this._width(),this._containerPosition(),this.options.size=t,this.$element)},t.prototype.animate=function(t){return"undefined"==typeof t?this.options.animate:(t=!!t,t===this.options.animate?this.$element:this.toggleAnimate())},t.prototype.toggleAnimate=function(){return this.options.animate=!this.options.animate,this.$wrapper.toggleClass(""+this.options.baseClass+"-animate"),this.$element},t.prototype.disabled=function(t){return"undefined"==typeof t?this.options.disabled:(t=!!t,t===this.options.disabled?this.$element:this.toggleDisabled())},t.prototype.toggleDisabled=function(){return this.options.disabled=!this.options.disabled,this.$element.prop("disabled",this.options.disabled),this.$wrapper.toggleClass(""+this.options.baseClass+"-disabled"),this.$element},t.prototype.readonly=function(t){return"undefined"==typeof t?this.options.readonly:(t=!!t,t===this.options.readonly?this.$element:this.toggleReadonly())},t.prototype.toggleReadonly=function(){return this.options.readonly=!this.options.readonly,this.$element.prop("readonly",this.options.readonly),this.$wrapper.toggleClass(""+this.options.baseClass+"-readonly"),this.$element},t.prototype.indeterminate=function(t){return"undefined"==typeof t?this.options.indeterminate:(t=!!t,t===this.options.indeterminate?this.$element:this.toggleIndeterminate())},t.prototype.toggleIndeterminate=function(){return this.options.indeterminate=!this.options.indeterminate,this.$element.prop("indeterminate",this.options.indeterminate),this.$wrapper.toggleClass(""+this.options.baseClass+"-indeterminate"),this._containerPosition(),this.$element},t.prototype.inverse=function(t){return"undefined"==typeof t?this.options.inverse:(t=!!t,t===this.options.inverse?this.$element:this.toggleInverse())},t.prototype.toggleInverse=function(){var t,e;return this.$wrapper.toggleClass(""+this.options.baseClass+"-inverse"),e=this.$on.clone(!0),t=this.$off.clone(!0),this.$on.replaceWith(t),this.$off.replaceWith(e),this.$on=t,this.$off=e,this.options.inverse=!this.options.inverse,this.$element},t.prototype.onColor=function(t){var e;return e=this.options.onColor,"undefined"==typeof t?e:(null!=e&&this.$on.removeClass(""+this.options.baseClass+"-"+e),this.$on.addClass(""+this.options.baseClass+"-"+t),this.options.onColor=t,this.$element)},t.prototype.offColor=function(t){var e;return e=this.options.offColor,"undefined"==typeof t?e:(null!=e&&this.$off.removeClass(""+this.options.baseClass+"-"+e),this.$off.addClass(""+this.options.baseClass+"-"+t),this.options.offColor=t,this.$element)},t.prototype.onText=function(t){return"undefined"==typeof t?this.options.onText:(this.$on.html(t),this._width(),this._containerPosition(),this.options.onText=t,this.$element)},t.prototype.offText=function(t){return"undefined"==typeof t?this.options.offText:(this.$off.html(t),this._width(),this._containerPosition(),this.options.offText=t,this.$element)},t.prototype.labelText=function(t){return"undefined"==typeof t?this.options.labelText:(this.$label.html(t),this._width(),this.options.labelText=t,this.$element)},t.prototype.handleWidth=function(t){return"undefined"==typeof t?this.options.handleWidth:(this.options.handleWidth=t,this._width(),this._containerPosition(),this.$element)},t.prototype.labelWidth=function(t){return"undefined"==typeof t?this.options.labelWidth:(this.options.labelWidth=t,this._width(),this._containerPosition(),this.$element)},t.prototype.baseClass=function(){return this.options.baseClass},t.prototype.wrapperClass=function(t){return"undefined"==typeof t?this.options.wrapperClass:(t||(t=e.fn.bootstrapSwitch.defaults.wrapperClass),this.$wrapper.removeClass(this._getClasses(this.options.wrapperClass).join(" ")),this.$wrapper.addClass(this._getClasses(t).join(" ")),this.options.wrapperClass=t,this.$element)},t.prototype.radioAllOff=function(t){return"undefined"==typeof t?this.options.radioAllOff:(t=!!t,t===this.options.radioAllOff?this.$element:(this.options.radioAllOff=t,this.$element))},t.prototype.onInit=function(t){return"undefined"==typeof t?this.options.onInit:(t||(t=e.fn.bootstrapSwitch.defaults.onInit),this.options.onInit=t,this.$element)},t.prototype.onSwitchChange=function(t){return"undefined"==typeof t?this.options.onSwitchChange:(t||(t=e.fn.bootstrapSwitch.defaults.onSwitchChange),this.options.onSwitchChange=t,this.$element)},t.prototype.destroy=function(){var t;return t=this.$element.closest("form"),t.length&&t.off("reset.bootstrapSwitch").removeData("bootstrap-switch"),this.$container.children().not(this.$element).remove(),this.$element.unwrap().unwrap().off(".bootstrapSwitch").removeData("bootstrap-switch"),this.$element},t.prototype._width=function(){var t,e;return t=this.$on.add(this.$off),t.add(this.$label).css("width",""),e="auto"===this.options.handleWidth?Math.max(this.$on.width(),this.$off.width()):this.options.handleWidth,t.width(e),this.$label.width(function(t){return function(i,n){return"auto"!==t.options.labelWidth?t.options.labelWidth:e>n?e:n}}(this)),this._handleWidth=this.$on.outerWidth(),this._labelWidth=this.$label.outerWidth(),this.$container.width(2*this._handleWidth+this._labelWidth),this.$wrapper.width(this._handleWidth+this._labelWidth)},t.prototype._containerPosition=function(t,e){return null==t&&(t=this.options.state),this.$container.css("margin-left",function(e){return function(){var i;return i=[0,"-"+e._handleWidth+"px"],e.options.indeterminate?"-"+e._handleWidth/2+"px":t?e.options.inverse?i[1]:i[0]:e.options.inverse?i[0]:i[1]}}(this)),e?setTimeout(function(){return e()},50):void 0},t.prototype._init=function(){var t,e;return t=function(t){return function(){return t._width(),t._containerPosition(null,function(){return t.options.animate?t.$wrapper.addClass(""+t.options.baseClass+"-animate"):void 0})}}(this),this.$wrapper.is(":visible")?t():e=i.setInterval(function(n){return function(){return n.$wrapper.is(":visible")?(t(),i.clearInterval(e)):void 0}}(this),50)},t.prototype._elementHandlers=function(){return this.$element.on({"change.bootstrapSwitch":function(t){return function(i,n){var o;return i.preventDefault(),i.stopImmediatePropagation(),o=t.$element.is(":checked"),t._containerPosition(o),o!==t.options.state?(t.options.state=o,t.$wrapper.toggleClass(""+t.options.baseClass+"-off").toggleClass(""+t.options.baseClass+"-on"),n?void 0:(t.$element.is(":radio")&&e("[name='"+t.$element.attr("name")+"']").not(t.$element).prop("checked",!1).trigger("change.bootstrapSwitch",!0),t.$element.trigger("switchChange.bootstrapSwitch",[o]))):void 0}}(this),"focus.bootstrapSwitch":function(t){return function(e){return e.preventDefault(),t.$wrapper.addClass(""+t.options.baseClass+"-focused")}}(this),"blur.bootstrapSwitch":function(t){return function(e){return e.preventDefault(),t.$wrapper.removeClass(""+t.options.baseClass+"-focused")}}(this),"keydown.bootstrapSwitch":function(t){return function(e){if(e.which&&!t.options.disabled&&!t.options.readonly)switch(e.which){case 37:return e.preventDefault(),e.stopImmediatePropagation(),t.state(!1);case 39:return e.preventDefault(),e.stopImmediatePropagation(),t.state(!0)}}}(this)})},t.prototype._handleHandlers=function(){return this.$on.on("click.bootstrapSwitch",function(t){return function(e){return e.preventDefault(),e.stopPropagation(),t.state(!1),t.$element.trigger("focus.bootstrapSwitch")}}(this)),this.$off.on("click.bootstrapSwitch",function(t){return function(e){return e.preventDefault(),e.stopPropagation(),t.state(!0),t.$element.trigger("focus.bootstrapSwitch")}}(this))},t.prototype._labelHandlers=function(){return this.$label.on({"mousedown.bootstrapSwitch touchstart.bootstrapSwitch":function(t){return function(e){return t._dragStart||t.options.disabled||t.options.readonly?void 0:(e.preventDefault(),e.stopPropagation(),t._dragStart=(e.pageX||e.originalEvent.touches[0].pageX)-parseInt(t.$container.css("margin-left"),10),t.options.animate&&t.$wrapper.removeClass(""+t.options.baseClass+"-animate"),t.$element.trigger("focus.bootstrapSwitch"))}}(this),"mousemove.bootstrapSwitch touchmove.bootstrapSwitch":function(t){return function(e){var i;if(null!=t._dragStart&&(e.preventDefault(),i=(e.pageX||e.originalEvent.touches[0].pageX)-t._dragStart,!(i<-t._handleWidth||i>0)))return t._dragEnd=i,t.$container.css("margin-left",""+t._dragEnd+"px")}}(this),"mouseup.bootstrapSwitch touchend.bootstrapSwitch":function(t){return function(e){var i;if(t._dragStart)return e.preventDefault(),t.options.animate&&t.$wrapper.addClass(""+t.options.baseClass+"-animate"),t._dragEnd?(i=t._dragEnd>-(t._handleWidth/2),t._dragEnd=!1,t.state(t.options.inverse?!i:i)):t.state(!t.options.state),t._dragStart=!1}}(this),"mouseleave.bootstrapSwitch":function(t){return function(){return t.$label.trigger("mouseup.bootstrapSwitch")}}(this)})},t.prototype._externalLabelHandler=function(){var t;return t=this.$element.closest("label"),t.on("click",function(e){return function(i){return i.preventDefault(),i.stopImmediatePropagation(),i.target===t[0]?e.toggleState():void 0}}(this))},t.prototype._formHandler=function(){var t;return t=this.$element.closest("form"),t.data("bootstrap-switch")?void 0:t.on("reset.bootstrapSwitch",function(){return i.setTimeout(function(){return t.find("input").filter(function(){return e(this).data("bootstrap-switch")}).each(function(){return e(this).bootstrapSwitch("state",this.checked)})},1)}).data("bootstrap-switch",!0)},t.prototype._getClasses=function(t){var i,n,o,s;if(!e.isArray(t))return[""+this.options.baseClass+"-"+t];for(n=[],o=0,s=t.length;s>o;o++)i=t[o],n.push(""+this.options.baseClass+"-"+i);return n},t}(),e.fn.bootstrapSwitch=function(){var i,o,s;return o=arguments[0],i=2<=arguments.length?t.call(arguments,1):[],s=this,this.each(function(){var t,a;return t=e(this),a=t.data("bootstrap-switch"),a||t.data("bootstrap-switch",a=new n(this,o)),"string"==typeof o?s=a[o].apply(a,i):void 0}),s},e.fn.bootstrapSwitch.Constructor=n,e.fn.bootstrapSwitch.defaults={state:!0,size:null,animate:!0,disabled:!1,readonly:!1,indeterminate:!1,inverse:!1,radioAllOff:!1,onColor:"primary",offColor:"default",onText:"ON",offText:"OFF",labelText:"&nbsp;",handleWidth:"auto",labelWidth:"auto",baseClass:"bootstrap-switch",wrapperClass:"wrapper",onInit:function(){},onSwitchChange:function(){}}}(window.jQuery,window)}).call(this);;
/*! =======================================================
                      VERSION  4.9.1              
========================================================= */
/*! =========================================================
 * bootstrap-slider.js
 *
 * Maintainers:
 *		Kyle Kemp
 *			- Twitter: @seiyria
 *			- Github:  seiyria
 *		Rohit Kalkur
 *			- Twitter: @Rovolutionary
 *			- Github:  rovolution
 *
 * =========================================================
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ========================================================= */
!function(a,b){if("function"==typeof define&&define.amd)define(["jquery"],b);else if("object"==typeof module&&module.exports){var c;try{c=require("jquery")}catch(d){c=null}module.exports=b(c)}else a.Slider=b(a.jQuery)}(this,function(a){var b;return function(a){"use strict";function b(){}function c(a){function c(b){b.prototype.option||(b.prototype.option=function(b){a.isPlainObject(b)&&(this.options=a.extend(!0,this.options,b))})}function e(b,c){a.fn[b]=function(e){if("string"==typeof e){for(var g=d.call(arguments,1),h=0,i=this.length;i>h;h++){var j=this[h],k=a.data(j,b);if(k)if(a.isFunction(k[e])&&"_"!==e.charAt(0)){var l=k[e].apply(k,g);if(void 0!==l&&l!==k)return l}else f("no such method '"+e+"' for "+b+" instance");else f("cannot call methods on "+b+" prior to initialization; attempted to call '"+e+"'")}return this}var m=this.map(function(){var d=a.data(this,b);return d?(d.option(e),d._init()):(d=new c(this,e),a.data(this,b,d)),a(this)});return!m||m.length>1?m:m[0]}}if(a){var f="undefined"==typeof console?b:function(a){console.error(a)};return a.bridget=function(a,b){c(b),e(a,b)},a.bridget}}var d=Array.prototype.slice;c(a)}(a),function(a){function c(b,c){function d(a,b){var c="data-slider-"+b.replace(/_/g,"-"),d=a.getAttribute(c);try{return JSON.parse(d)}catch(e){return d}}"string"==typeof b?this.element=document.querySelector(b):b instanceof HTMLElement&&(this.element=b),c=c?c:{};for(var f=Object.keys(this.defaultOptions),g=0;g<f.length;g++){var h=f[g],i=c[h];i="undefined"!=typeof i?i:d(this.element,h),i=null!==i?i:this.defaultOptions[h],this.options||(this.options={}),this.options[h]=i}var j,k,l,m,n,o=this.element.style.width,p=!1,q=this.element.parentNode;if(this.sliderElem)p=!0;else{this.sliderElem=document.createElement("div"),this.sliderElem.className="slider";var r=document.createElement("div");if(r.className="slider-track",k=document.createElement("div"),k.className="slider-track-low",j=document.createElement("div"),j.className="slider-selection",l=document.createElement("div"),l.className="slider-track-high",m=document.createElement("div"),m.className="slider-handle min-slider-handle",n=document.createElement("div"),n.className="slider-handle max-slider-handle",r.appendChild(k),r.appendChild(j),r.appendChild(l),this.ticks=[],Array.isArray(this.options.ticks)&&this.options.ticks.length>0){for(g=0;g<this.options.ticks.length;g++){var s=document.createElement("div");s.className="slider-tick",this.ticks.push(s),r.appendChild(s)}j.className+=" tick-slider-selection"}if(r.appendChild(m),r.appendChild(n),this.tickLabels=[],Array.isArray(this.options.ticks_labels)&&this.options.ticks_labels.length>0)for(this.tickLabelContainer=document.createElement("div"),this.tickLabelContainer.className="slider-tick-label-container",g=0;g<this.options.ticks_labels.length;g++){var t=document.createElement("div");t.className="slider-tick-label",t.innerHTML=this.options.ticks_labels[g],this.tickLabels.push(t),this.tickLabelContainer.appendChild(t)}var u=function(a){var b=document.createElement("div");b.className="tooltip-arrow";var c=document.createElement("div");c.className="tooltip-inner",a.appendChild(b),a.appendChild(c)},v=document.createElement("div");v.className="tooltip tooltip-main",u(v);var w=document.createElement("div");w.className="tooltip tooltip-min",u(w);var x=document.createElement("div");x.className="tooltip tooltip-max",u(x),this.sliderElem.appendChild(r),this.sliderElem.appendChild(v),this.sliderElem.appendChild(w),this.sliderElem.appendChild(x),this.tickLabelContainer&&this.sliderElem.appendChild(this.tickLabelContainer),q.insertBefore(this.sliderElem,this.element),this.element.style.display="none"}if(a&&(this.$element=a(this.element),this.$sliderElem=a(this.sliderElem)),this.eventToCallbackMap={},this.sliderElem.id=this.options.id,this.touchCapable="ontouchstart"in window||window.DocumentTouch&&document instanceof window.DocumentTouch,this.tooltip=this.sliderElem.querySelector(".tooltip-main"),this.tooltipInner=this.tooltip.querySelector(".tooltip-inner"),this.tooltip_min=this.sliderElem.querySelector(".tooltip-min"),this.tooltipInner_min=this.tooltip_min.querySelector(".tooltip-inner"),this.tooltip_max=this.sliderElem.querySelector(".tooltip-max"),this.tooltipInner_max=this.tooltip_max.querySelector(".tooltip-inner"),e[this.options.scale]&&(this.options.scale=e[this.options.scale]),p===!0&&(this._removeClass(this.sliderElem,"slider-horizontal"),this._removeClass(this.sliderElem,"slider-vertical"),this._removeClass(this.tooltip,"hide"),this._removeClass(this.tooltip_min,"hide"),this._removeClass(this.tooltip_max,"hide"),["left","top","width","height"].forEach(function(a){this._removeProperty(this.trackLow,a),this._removeProperty(this.trackSelection,a),this._removeProperty(this.trackHigh,a)},this),[this.handle1,this.handle2].forEach(function(a){this._removeProperty(a,"left"),this._removeProperty(a,"top")},this),[this.tooltip,this.tooltip_min,this.tooltip_max].forEach(function(a){this._removeProperty(a,"left"),this._removeProperty(a,"top"),this._removeProperty(a,"margin-left"),this._removeProperty(a,"margin-top"),this._removeClass(a,"right"),this._removeClass(a,"top")},this)),"vertical"===this.options.orientation?(this._addClass(this.sliderElem,"slider-vertical"),this.stylePos="top",this.mousePos="pageY",this.sizePos="offsetHeight",this._addClass(this.tooltip,"right"),this.tooltip.style.left="100%",this._addClass(this.tooltip_min,"right"),this.tooltip_min.style.left="100%",this._addClass(this.tooltip_max,"right"),this.tooltip_max.style.left="100%"):(this._addClass(this.sliderElem,"slider-horizontal"),this.sliderElem.style.width=o,this.options.orientation="horizontal",this.stylePos="left",this.mousePos="pageX",this.sizePos="offsetWidth",this._addClass(this.tooltip,"top"),this.tooltip.style.top=-this.tooltip.outerHeight-14+"px",this._addClass(this.tooltip_min,"top"),this.tooltip_min.style.top=-this.tooltip_min.outerHeight-14+"px",this._addClass(this.tooltip_max,"top"),this.tooltip_max.style.top=-this.tooltip_max.outerHeight-14+"px"),Array.isArray(this.options.ticks)&&this.options.ticks.length>0&&(this.options.max=Math.max.apply(Math,this.options.ticks),this.options.min=Math.min.apply(Math,this.options.ticks)),Array.isArray(this.options.value)?this.options.range=!0:this.options.range&&(this.options.value=[this.options.value,this.options.max]),this.trackLow=k||this.trackLow,this.trackSelection=j||this.trackSelection,this.trackHigh=l||this.trackHigh,"none"===this.options.selection&&(this._addClass(this.trackLow,"hide"),this._addClass(this.trackSelection,"hide"),this._addClass(this.trackHigh,"hide")),this.handle1=m||this.handle1,this.handle2=n||this.handle2,p===!0)for(this._removeClass(this.handle1,"round triangle"),this._removeClass(this.handle2,"round triangle hide"),g=0;g<this.ticks.length;g++)this._removeClass(this.ticks[g],"round triangle hide");var y=["round","triangle","custom"],z=-1!==y.indexOf(this.options.handle);if(z)for(this._addClass(this.handle1,this.options.handle),this._addClass(this.handle2,this.options.handle),g=0;g<this.ticks.length;g++)this._addClass(this.ticks[g],this.options.handle);this.offset=this._offset(this.sliderElem),this.size=this.sliderElem[this.sizePos],this.setValue(this.options.value),this.handle1Keydown=this._keydown.bind(this,0),this.handle1.addEventListener("keydown",this.handle1Keydown,!1),this.handle2Keydown=this._keydown.bind(this,1),this.handle2.addEventListener("keydown",this.handle2Keydown,!1),this.mousedown=this._mousedown.bind(this),this.touchCapable&&this.sliderElem.addEventListener("touchstart",this.mousedown,!1),this.sliderElem.addEventListener("mousedown",this.mousedown,!1),"hide"===this.options.tooltip?(this._addClass(this.tooltip,"hide"),this._addClass(this.tooltip_min,"hide"),this._addClass(this.tooltip_max,"hide")):"always"===this.options.tooltip?(this._showTooltip(),this._alwaysShowTooltip=!0):(this.showTooltip=this._showTooltip.bind(this),this.hideTooltip=this._hideTooltip.bind(this),this.sliderElem.addEventListener("mouseenter",this.showTooltip,!1),this.sliderElem.addEventListener("mouseleave",this.hideTooltip,!1),this.handle1.addEventListener("focus",this.showTooltip,!1),this.handle1.addEventListener("blur",this.hideTooltip,!1),this.handle2.addEventListener("focus",this.showTooltip,!1),this.handle2.addEventListener("blur",this.hideTooltip,!1)),this.options.enabled?this.enable():this.disable()}var d={formatInvalidInputErrorMsg:function(a){return"Invalid input value '"+a+"' passed in"},callingContextNotSliderInstance:"Calling context element does not have instance of Slider bound to it. Check your code to make sure the JQuery object returned from the call to the slider() initializer is calling the method"},e={linear:{toValue:function(a){var b=a/100*(this.options.max-this.options.min);if(this.options.ticks_positions.length>0){for(var c,d,e,f=0,g=0;g<this.options.ticks_positions.length;g++)if(a<=this.options.ticks_positions[g]){c=g>0?this.options.ticks[g-1]:0,e=g>0?this.options.ticks_positions[g-1]:0,d=this.options.ticks[g],f=this.options.ticks_positions[g];break}if(g>0){var h=(a-e)/(f-e);b=c+h*(d-c)}}var i=this.options.min+Math.round(b/this.options.step)*this.options.step;return i<this.options.min?this.options.min:i>this.options.max?this.options.max:i},toPercentage:function(a){if(this.options.max===this.options.min)return 0;if(this.options.ticks_positions.length>0){for(var b,c,d,e=0,f=0;f<this.options.ticks.length;f++)if(a<=this.options.ticks[f]){b=f>0?this.options.ticks[f-1]:0,d=f>0?this.options.ticks_positions[f-1]:0,c=this.options.ticks[f],e=this.options.ticks_positions[f];break}if(f>0){var g=(a-b)/(c-b);return d+g*(e-d)}}return 100*(a-this.options.min)/(this.options.max-this.options.min)}},logarithmic:{toValue:function(a){var b=0===this.options.min?0:Math.log(this.options.min),c=Math.log(this.options.max),d=Math.exp(b+(c-b)*a/100);return d=this.options.min+Math.round((d-this.options.min)/this.options.step)*this.options.step,d<this.options.min?this.options.min:d>this.options.max?this.options.max:d},toPercentage:function(a){if(this.options.max===this.options.min)return 0;var b=Math.log(this.options.max),c=0===this.options.min?0:Math.log(this.options.min),d=0===a?0:Math.log(a);return 100*(d-c)/(b-c)}}};if(b=function(a,b){return c.call(this,a,b),this},b.prototype={_init:function(){},constructor:b,defaultOptions:{id:"",min:0,max:10,step:1,precision:0,orientation:"horizontal",value:5,range:!1,selection:"before",tooltip:"show",tooltip_split:!1,handle:"round",reversed:!1,enabled:!0,formatter:function(a){return Array.isArray(a)?a[0]+" : "+a[1]:a},natural_arrow_keys:!1,ticks:[],ticks_positions:[],ticks_labels:[],ticks_snap_bounds:0,scale:"linear",focus:!1},over:!1,inDrag:!1,getValue:function(){return this.options.range?this.options.value:this.options.value[0]},setValue:function(a,b,c){a||(a=0);var d=this.getValue();this.options.value=this._validateInputValue(a);var e=this._applyPrecision.bind(this);this.options.range?(this.options.value[0]=e(this.options.value[0]),this.options.value[1]=e(this.options.value[1]),this.options.value[0]=Math.max(this.options.min,Math.min(this.options.max,this.options.value[0])),this.options.value[1]=Math.max(this.options.min,Math.min(this.options.max,this.options.value[1]))):(this.options.value=e(this.options.value),this.options.value=[Math.max(this.options.min,Math.min(this.options.max,this.options.value))],this._addClass(this.handle2,"hide"),this.options.value[1]="after"===this.options.selection?this.options.max:this.options.min),this.percentage=this.options.max>this.options.min?[this._toPercentage(this.options.value[0]),this._toPercentage(this.options.value[1]),100*this.options.step/(this.options.max-this.options.min)]:[0,0,100],this._layout();var f=this.options.range?this.options.value:this.options.value[0];return b===!0&&this._trigger("slide",f),d!==f&&c===!0&&this._trigger("change",{oldValue:d,newValue:f}),this._setDataVal(f),this},destroy:function(){this._removeSliderEventHandlers(),this.sliderElem.parentNode.removeChild(this.sliderElem),this.element.style.display="",this._cleanUpEventCallbacksMap(),this.element.removeAttribute("data"),a&&(this._unbindJQueryEventHandlers(),this.$element.removeData("slider"))},disable:function(){return this.options.enabled=!1,this.handle1.removeAttribute("tabindex"),this.handle2.removeAttribute("tabindex"),this._addClass(this.sliderElem,"slider-disabled"),this._trigger("slideDisabled"),this},enable:function(){return this.options.enabled=!0,this.handle1.setAttribute("tabindex",0),this.handle2.setAttribute("tabindex",0),this._removeClass(this.sliderElem,"slider-disabled"),this._trigger("slideEnabled"),this},toggle:function(){return this.options.enabled?this.disable():this.enable(),this},isEnabled:function(){return this.options.enabled},on:function(a,b){return this._bindNonQueryEventHandler(a,b),this},getAttribute:function(a){return a?this.options[a]:this.options},setAttribute:function(a,b){return this.options[a]=b,this},refresh:function(){return this._removeSliderEventHandlers(),c.call(this,this.element,this.options),a&&a.data(this.element,"slider",this),this},relayout:function(){return this._layout(),this},_removeSliderEventHandlers:function(){this.handle1.removeEventListener("keydown",this.handle1Keydown,!1),this.handle1.removeEventListener("focus",this.showTooltip,!1),this.handle1.removeEventListener("blur",this.hideTooltip,!1),this.handle2.removeEventListener("keydown",this.handle2Keydown,!1),this.handle2.removeEventListener("focus",this.handle2Keydown,!1),this.handle2.removeEventListener("blur",this.handle2Keydown,!1),this.sliderElem.removeEventListener("mouseenter",this.showTooltip,!1),this.sliderElem.removeEventListener("mouseleave",this.hideTooltip,!1),this.sliderElem.removeEventListener("touchstart",this.mousedown,!1),this.sliderElem.removeEventListener("mousedown",this.mousedown,!1)},_bindNonQueryEventHandler:function(a,b){void 0===this.eventToCallbackMap[a]&&(this.eventToCallbackMap[a]=[]),this.eventToCallbackMap[a].push(b)},_cleanUpEventCallbacksMap:function(){for(var a=Object.keys(this.eventToCallbackMap),b=0;b<a.length;b++){var c=a[b];this.eventToCallbackMap[c]=null}},_showTooltip:function(){this.options.tooltip_split===!1?(this._addClass(this.tooltip,"in"),this.tooltip_min.style.display="none",this.tooltip_max.style.display="none"):(this._addClass(this.tooltip_min,"in"),this._addClass(this.tooltip_max,"in"),this.tooltip.style.display="none"),this.over=!0},_hideTooltip:function(){this.inDrag===!1&&this.alwaysShowTooltip!==!0&&(this._removeClass(this.tooltip,"in"),this._removeClass(this.tooltip_min,"in"),this._removeClass(this.tooltip_max,"in")),this.over=!1},_layout:function(){var a;if(a=this.options.reversed?[100-this.percentage[0],this.percentage[1]]:[this.percentage[0],this.percentage[1]],this.handle1.style[this.stylePos]=a[0]+"%",this.handle2.style[this.stylePos]=a[1]+"%",Array.isArray(this.options.ticks)&&this.options.ticks.length>0){var b=Math.max.apply(Math,this.options.ticks),c=Math.min.apply(Math,this.options.ticks),d="vertical"===this.options.orientation?"height":"width",e="vertical"===this.options.orientation?"marginTop":"marginLeft",f=this.size/(this.options.ticks.length-1);if(this.tickLabelContainer){var g=0;if(0===this.options.ticks_positions.length)this.tickLabelContainer.style[e]=-f/2+"px",g=this.tickLabelContainer.offsetHeight;else for(h=0;h<this.tickLabelContainer.childNodes.length;h++)this.tickLabelContainer.childNodes[h].offsetHeight>g&&(g=this.tickLabelContainer.childNodes[h].offsetHeight);"horizontal"===this.options.orientation&&(this.sliderElem.style.marginBottom=g+"px")}for(var h=0;h<this.options.ticks.length;h++){var i=this.options.ticks_positions[h]||100*(this.options.ticks[h]-c)/(b-c);this.ticks[h].style[this.stylePos]=i+"%",this._removeClass(this.ticks[h],"in-selection"),this.options.range?i>=a[0]&&i<=a[1]&&this._addClass(this.ticks[h],"in-selection"):"after"===this.options.selection&&i>=a[0]?this._addClass(this.ticks[h],"in-selection"):"before"===this.options.selection&&i<=a[0]&&this._addClass(this.ticks[h],"in-selection"),this.tickLabels[h]&&(this.tickLabels[h].style[d]=f+"px",void 0!==this.options.ticks_positions[h]&&(this.tickLabels[h].style.position="absolute",this.tickLabels[h].style[this.stylePos]=this.options.ticks_positions[h]+"%",this.tickLabels[h].style[e]=-f/2+"px"))}}if("vertical"===this.options.orientation)this.trackLow.style.top="0",this.trackLow.style.height=Math.min(a[0],a[1])+"%",this.trackSelection.style.top=Math.min(a[0],a[1])+"%",this.trackSelection.style.height=Math.abs(a[0]-a[1])+"%",this.trackHigh.style.bottom="0",this.trackHigh.style.height=100-Math.min(a[0],a[1])-Math.abs(a[0]-a[1])+"%";else{this.trackLow.style.left="0",this.trackLow.style.width=Math.min(a[0],a[1])+"%",this.trackSelection.style.left=Math.min(a[0],a[1])+"%",this.trackSelection.style.width=Math.abs(a[0]-a[1])+"%",this.trackHigh.style.right="0",this.trackHigh.style.width=100-Math.min(a[0],a[1])-Math.abs(a[0]-a[1])+"%";var j=this.tooltip_min.getBoundingClientRect(),k=this.tooltip_max.getBoundingClientRect();j.right>k.left?(this._removeClass(this.tooltip_max,"top"),this._addClass(this.tooltip_max,"bottom"),this.tooltip_max.style.top="18px"):(this._removeClass(this.tooltip_max,"bottom"),this._addClass(this.tooltip_max,"top"),this.tooltip_max.style.top=this.tooltip_min.style.top)}var l;if(this.options.range){l=this.options.formatter(this.options.value),this._setText(this.tooltipInner,l),this.tooltip.style[this.stylePos]=(a[1]+a[0])/2+"%","vertical"===this.options.orientation?this._css(this.tooltip,"margin-top",-this.tooltip.offsetHeight/2+"px"):this._css(this.tooltip,"margin-left",-this.tooltip.offsetWidth/2+"px"),"vertical"===this.options.orientation?this._css(this.tooltip,"margin-top",-this.tooltip.offsetHeight/2+"px"):this._css(this.tooltip,"margin-left",-this.tooltip.offsetWidth/2+"px");var m=this.options.formatter(this.options.value[0]);this._setText(this.tooltipInner_min,m);var n=this.options.formatter(this.options.value[1]);this._setText(this.tooltipInner_max,n),this.tooltip_min.style[this.stylePos]=a[0]+"%","vertical"===this.options.orientation?this._css(this.tooltip_min,"margin-top",-this.tooltip_min.offsetHeight/2+"px"):this._css(this.tooltip_min,"margin-left",-this.tooltip_min.offsetWidth/2+"px"),this.tooltip_max.style[this.stylePos]=a[1]+"%","vertical"===this.options.orientation?this._css(this.tooltip_max,"margin-top",-this.tooltip_max.offsetHeight/2+"px"):this._css(this.tooltip_max,"margin-left",-this.tooltip_max.offsetWidth/2+"px")}else l=this.options.formatter(this.options.value[0]),this._setText(this.tooltipInner,l),this.tooltip.style[this.stylePos]=a[0]+"%","vertical"===this.options.orientation?this._css(this.tooltip,"margin-top",-this.tooltip.offsetHeight/2+"px"):this._css(this.tooltip,"margin-left",-this.tooltip.offsetWidth/2+"px")},_removeProperty:function(a,b){a.style.removeProperty?a.style.removeProperty(b):a.style.removeAttribute(b)},_mousedown:function(a){if(!this.options.enabled)return!1;this.offset=this._offset(this.sliderElem),this.size=this.sliderElem[this.sizePos];var b=this._getPercentage(a);if(this.options.range){var c=Math.abs(this.percentage[0]-b),d=Math.abs(this.percentage[1]-b);this.dragged=d>c?0:1}else this.dragged=0;this.percentage[this.dragged]=this.options.reversed?100-b:b,this._layout(),this.touchCapable&&(document.removeEventListener("touchmove",this.mousemove,!1),document.removeEventListener("touchend",this.mouseup,!1)),this.mousemove&&document.removeEventListener("mousemove",this.mousemove,!1),this.mouseup&&document.removeEventListener("mouseup",this.mouseup,!1),this.mousemove=this._mousemove.bind(this),this.mouseup=this._mouseup.bind(this),this.touchCapable&&(document.addEventListener("touchmove",this.mousemove,!1),document.addEventListener("touchend",this.mouseup,!1)),document.addEventListener("mousemove",this.mousemove,!1),document.addEventListener("mouseup",this.mouseup,!1),this.inDrag=!0;var e=this._calculateValue();return this._trigger("slideStart",e),this._setDataVal(e),this.setValue(e,!1,!0),this._pauseEvent(a),this.options.focus&&this._triggerFocusOnHandle(this.dragged),!0},_triggerFocusOnHandle:function(a){0===a&&this.handle1.focus(),1===a&&this.handle2.focus()},_keydown:function(a,b){if(!this.options.enabled)return!1;var c;switch(b.keyCode){case 37:case 40:c=-1;break;case 39:case 38:c=1}if(c){if(this.options.natural_arrow_keys){var d="vertical"===this.options.orientation&&!this.options.reversed,e="horizontal"===this.options.orientation&&this.options.reversed;(d||e)&&(c=-c)}var f=this.options.value[a]+c*this.options.step;return this.options.range&&(f=[a?this.options.value[0]:f,a?f:this.options.value[1]]),this._trigger("slideStart",f),this._setDataVal(f),this.setValue(f,!0,!0),this._trigger("slideStop",f),this._setDataVal(f),this._layout(),this._pauseEvent(b),!1}},_pauseEvent:function(a){a.stopPropagation&&a.stopPropagation(),a.preventDefault&&a.preventDefault(),a.cancelBubble=!0,a.returnValue=!1},_mousemove:function(a){if(!this.options.enabled)return!1;var b=this._getPercentage(a);this._adjustPercentageForRangeSliders(b),this.percentage[this.dragged]=this.options.reversed?100-b:b,this._layout();var c=this._calculateValue(!0);return this.setValue(c,!0,!0),!1},_adjustPercentageForRangeSliders:function(a){if(this.options.range){var b=this._getNumDigitsAfterDecimalPlace(a);b=b?b-1:0;var c=this._applyToFixedAndParseFloat(a,b);0===this.dragged&&this._applyToFixedAndParseFloat(this.percentage[1],b)<c?(this.percentage[0]=this.percentage[1],this.dragged=1):1===this.dragged&&this._applyToFixedAndParseFloat(this.percentage[0],b)>c&&(this.percentage[1]=this.percentage[0],this.dragged=0)}},_mouseup:function(){if(!this.options.enabled)return!1;this.touchCapable&&(document.removeEventListener("touchmove",this.mousemove,!1),document.removeEventListener("touchend",this.mouseup,!1)),document.removeEventListener("mousemove",this.mousemove,!1),document.removeEventListener("mouseup",this.mouseup,!1),this.inDrag=!1,this.over===!1&&this._hideTooltip();var a=this._calculateValue(!0);return this._layout(),this._trigger("slideStop",a),this._setDataVal(a),!1},_calculateValue:function(a){var b;if(this.options.range?(b=[this.options.min,this.options.max],0!==this.percentage[0]&&(b[0]=this._toValue(this.percentage[0]),b[0]=this._applyPrecision(b[0])),100!==this.percentage[1]&&(b[1]=this._toValue(this.percentage[1]),b[1]=this._applyPrecision(b[1]))):(b=this._toValue(this.percentage[0]),b=parseFloat(b),b=this._applyPrecision(b)),a){for(var c=[b,1/0],d=0;d<this.options.ticks.length;d++){var e=Math.abs(this.options.ticks[d]-b);e<=c[1]&&(c=[this.options.ticks[d],e])}if(c[1]<=this.options.ticks_snap_bounds)return c[0]}return b},_applyPrecision:function(a){var b=this.options.precision||this._getNumDigitsAfterDecimalPlace(this.options.step);return this._applyToFixedAndParseFloat(a,b)},_getNumDigitsAfterDecimalPlace:function(a){var b=(""+a).match(/(?:\.(\d+))?(?:[eE]([+-]?\d+))?$/);return b?Math.max(0,(b[1]?b[1].length:0)-(b[2]?+b[2]:0)):0},_applyToFixedAndParseFloat:function(a,b){var c=a.toFixed(b);return parseFloat(c)},_getPercentage:function(a){!this.touchCapable||"touchstart"!==a.type&&"touchmove"!==a.type||(a=a.touches[0]);var b=a[this.mousePos],c=this.offset[this.stylePos],d=b-c,e=d/this.size*100;return e=Math.round(e/this.percentage[2])*this.percentage[2],Math.max(0,Math.min(100,e))},_validateInputValue:function(a){if("number"==typeof a)return a;if(Array.isArray(a))return this._validateArray(a),a;throw new Error(d.formatInvalidInputErrorMsg(a))},_validateArray:function(a){for(var b=0;b<a.length;b++){var c=a[b];if("number"!=typeof c)throw new Error(d.formatInvalidInputErrorMsg(c))}},_setDataVal:function(a){var b="value: '"+a+"'";this.element.setAttribute("data",b),this.element.setAttribute("value",a),this.element.value=a},_trigger:function(b,c){c=c||0===c?c:void 0;var d=this.eventToCallbackMap[b];if(d&&d.length)for(var e=0;e<d.length;e++){var f=d[e];f(c)}a&&this._triggerJQueryEvent(b,c)},_triggerJQueryEvent:function(a,b){var c={type:a,value:b};this.$element.trigger(c),this.$sliderElem.trigger(c)},_unbindJQueryEventHandlers:function(){this.$element.off(),this.$sliderElem.off()},_setText:function(a,b){"undefined"!=typeof a.innerText?a.innerText=b:"undefined"!=typeof a.textContent&&(a.textContent=b)},_removeClass:function(a,b){for(var c=b.split(" "),d=a.className,e=0;e<c.length;e++){var f=c[e],g=new RegExp("(?:\\s|^)"+f+"(?:\\s|$)");d=d.replace(g," ")}a.className=d.trim()},_addClass:function(a,b){for(var c=b.split(" "),d=a.className,e=0;e<c.length;e++){var f=c[e],g=new RegExp("(?:\\s|^)"+f+"(?:\\s|$)"),h=g.test(d);h||(d+=" "+f)}a.className=d.trim()},_offsetLeft:function(a){for(var b=a.offsetLeft;(a=a.offsetParent)&&!isNaN(a.offsetLeft);)b+=a.offsetLeft;return b},_offsetTop:function(a){for(var b=a.offsetTop;(a=a.offsetParent)&&!isNaN(a.offsetTop);)b+=a.offsetTop;return b},_offset:function(a){return{left:this._offsetLeft(a),top:this._offsetTop(a)}},_css:function(b,c,d){if(a)a.style(b,c,d);else{var e=c.replace(/^-ms-/,"ms-").replace(/-([\da-z])/gi,function(a,b){return b.toUpperCase()});b.style[e]=d}},_toValue:function(a){return this.options.scale.toValue.apply(this,[a])},_toPercentage:function(a){return this.options.scale.toPercentage.apply(this,[a])}},a){var f=a.fn.slider?"bootstrapSlider":"slider";a.bridget(f,b)}}(a),b});;
(function ($, Drupal) {
  /*global jQuery:false */
  /*global Drupal:false */
  "use strict";

  $(window).load(function() {
    // Re-call attachBehaviors, without this the states.js api doens't work on radios
    Drupal.attachBehaviors('#system-theme-settings');

    // remove color module locks, they are broken when bootstrap theme loads
    // $('.lock, .hook').remove();
  });

  Drupal.attachBehaviors('#system-theme-settings');

  /**
   * Provide vertical tab summaries for Bootstrap settings.
   */
  Drupal.behaviors.glazedSettingsControls = {
    attach: function (context) {
      var $context = $(context);

      $('#system-theme-settings h2 > small').addClass('well form-header');
      var $input = '';
      $('#system-theme-settings .form-type-radio .control-label').each( function() {
        $(this).once('myslider', function() {
          $input = $(this).find('input').remove();
          $(this).wrapInner('<span>').prepend($input);
        });
      });

      function glazed_map_color (color) {
        if (color in Drupal.settings.glazed.palette) {
          color = Drupal.settings.glazed.palette[color];
        }
        return color;
      }

      // CONVERT CHECKBOXES TO SWITCHES
      $.fn.bootstrapSwitch.defaults.onColor = "success";
      $.fn.bootstrapSwitch.defaults.onText = "On";
      $.fn.bootstrapSwitch.defaults.offText = "Off";
      $.fn.bootstrapSwitch.defaults.size = "small";
      $.fn.bootstrapSwitch.defaults.onSwitchChange = function(event, state) { setTimeout(function(){ $('.slider + input').bootstrapSlider('relayout'); }, 10); };
      $("[type='checkbox']").bootstrapSwitch();
      // This patched up incompatibility with $ <1.10
      // https://github.com/nostalgiaz/bootstrap-switch/issues/474
      $("[type='checkbox']").on('switchChange.bootstrapSwitch', function(event, state) {
        $(this).trigger('change');
      });

      // BOOTSTRAP SLIDER CONFIG

      // Opacity Sliders
      var $opacitySliders = $(
        '#edit-header-top-bg-opacity-scroll, #edit-header-top-bg-opacity, #edit-header-side-bg-opacity, #edit-side-header-background-opacity,#edit-page-title-image-opacity,#edit-header-top-opacity,#edit-header-top-opacity-scroll,#edit-menu-full-screen-opacity'
      );
      var startValue = 1;
      $opacitySliders.each( function() {
        startValue = $(this).val();
        $(this).bootstrapSlider({
          step: 0.01,
          min: 0,
          max: 1,
          tooltip: 'show',
          value: parseFloat(startValue)
        });
      });

      // Line Height Sliders
      var $lhSliders = $('.line-height-slider');
      var startValue = 1;
      $lhSliders.each( function() {
        startValue = $(this).val();
        $(this).bootstrapSlider({
          step: 0.1,
          min: 0,
          max: 3,
          tooltip: 'show',
        formatter: function(value) {return value + 'em';},
          value: parseFloat(startValue)
        });
      });

      // Border Size Sliders
      var $lhSliders = $('.border-size-slider');
      var startValue = 1;
      $lhSliders.each( function() {
        startValue = $(this).val();
        $(this).bootstrapSlider({
          step: 1,
          min: 0,
          max: 30,
          tooltip: 'show',
          formatter: function(value) {return value + 'px';},
          value: parseFloat(startValue)
        });
      });

      // Border Radius Sliders
      var $lhSliders = $('.border-radius-slider');
      var startValue = 1;
      $lhSliders.each( function() {
        startValue = $(this).val();
        $(this).bootstrapSlider({
          step: 1,
          min: 0,
          max: 100,
          tooltip: 'show',
          formatter: function(value) {return value + 'px';},
          value: parseFloat(startValue)
        });
      });

      // Body Font Size
      var $input = $('#edit-body-font-size');
      $input.bootstrapSlider({
        step: 1,
        min: 8,
        max: 30,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Nav Font Size
      $input = $('#edit-nav-font-size');
      $input.bootstrapSlider({
        step: 1,
        min: 8,
        max: 30,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Body Mobile Font Size
      $input = $('#edit-body-mobile-font-size');
      $input.bootstrapSlider({
        step: 1,
        min: 8,
        max: 30,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Nav Mobile Font Size
      $input = $('#edit-nav-mobile-font-size');
      $input.bootstrapSlider({
        step: 1,
        min: 8,
        max: 30,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Other Font Sizes
      var $fsSliders = $('.font-size-slider');
      var startValue = 1;
      $fsSliders.each( function() {
        startValue = $(this).val();
        $(this).bootstrapSlider({
          step: 1,
          min: 8,
          max: 100,
          tooltip: 'show',
          formatter: function(value) {return value + 'px';},
          value: parseFloat(startValue)
        });
      });

      // Scale Factor
      $input = $('#edit-scale-factor');
      $input.bootstrapSlider({
        step: 0.01,
        min: 1,
        max: 2,
        tooltip: 'show',
        value: parseFloat($input.val())
      });

      // Divider Thickness
      $input = $('#edit-divider-thickness');
      $input.bootstrapSlider({
        step: 1,
        min: 0,
        max: 20,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Divider Thickness
      $input = $('#edit-block-divider-thickness');
      $input.bootstrapSlider({
        step: 1,
        min: 0,
        max: 20,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Divider Length
      $input = $('#edit-divider-length');
      $input.bootstrapSlider({
        step: 10,
        min: 0,
        max: 500,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Divider Length
      $input = $('#edit-block-divider-length');
      $input.bootstrapSlider({
        step: 10,
        min: 0,
        max: 500,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      function formatPosition(pos) {
        var label = Drupal.t('Left');
        if (pos == 2) label = Drupal.t('Center');
        if (pos == 3) label = Drupal.t('Right');
        return label;
      }

      // Divider Position
      $input = $('#edit-divider-position');
      $input.bootstrapSlider({
        step: 1,
        min: 1,
        max: 3,
        selection: 'none',
        tooltip: 'show',
        formatter: formatPosition,
        value: parseFloat($input.val())
      });

      // Headings letter spacing
      $input = $('#edit-headings-letter-spacing');
      $input.bootstrapSlider({
        step: 0.01,
        min: -0.10,
        max: 0.3,
        tooltip: 'show',
        formatter: function(value) {return value + 'em';},
        value: parseFloat($input.val())
      });

      // Block Design Divider Spacing
      $input = $('#edit-block-divider-spacing');
      $input.bootstrapSlider({
        step: 1,
        min: 0,
        max: 100,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Page Title height
      $input = $('#edit-page-title-height');
      $input.bootstrapSlider({
        step: 5,
        min: 50,
        max: 500,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Header height slider
      $input = $('#edit-header-top-height');
      $input.bootstrapSlider({
        step: 1,
        min: 10,
        max: 200,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Header Mobile Breakpoint slider
      $input = $('#edit-header-mobile-breakpoint');
      $input.bootstrapSlider({
        step: 10,
        min: 480,
        max: 4100,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Header Mobile height slider
      $input = $('#edit-header-mobile-height');
      $input.bootstrapSlider({
        step: 1,
        min: 10,
        max: 200,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Header after-scroll height slider
      $input = $('#edit-header-top-height-scroll');
      $input.bootstrapSlider({
        step: 1,
        min: 10,
        max: 200,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Sticky header scroll offset
      $input = $('#edit-header-top-height-sticky-offset');
      $input.bootstrapSlider({
        step: 10,
        min: 0,
        max: 2096,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Side Header after-scroll height slider
      $input = $('#edit-header-side-width');
      $input.bootstrapSlider({
        step: 5,
        min: 50,
        max: 500,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Main Menu Hover Border Thickness
      $input = $('#edit-menu-border-size');
      $input.bootstrapSlider({
        step: 1,
        min: 1,
        max: 20,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Main Menu Hover Border Position Offset
      $input = $('#edit-menu-border-position-offset');
      $input.bootstrapSlider({
        step: 1,
        min: 0,
        max: 100,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Main Menu Hover Border Position Offset Sticky
      $input = $('#edit-menu-border-position-offset-sticky');
      $input.bootstrapSlider({
        step: 1,
        min: 0,
        max: 100,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Layout max width
      $input = $('#edit-layout-max-width');
      $input.bootstrapSlider({
        step: 10,
        min: 480,
        max: 4100,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Box max width
      $input = $('#edit-box-max-width');
      $input.bootstrapSlider({
        step: 10,
        min: 480,
        max: 4100,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Layout Gutter Horizontal
      $input = $('#edit-gutter-horizontal');
      $input.bootstrapSlider({
        step: 1,
        min: 0,
        max: 100,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Layout Gutter Vertical
      $input = $('#edit-gutter-vertical');
      $input.bootstrapSlider({
        step: 1,
        min: 0,
        max: 100,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Layout Gutter Vertical
      $input = $('#edit-gutter-container');
      $input.bootstrapSlider({
        step: 1,
        min: 0,
        max: 500,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Layout Gutter Horizontal Mobile
      $input = $('#edit-gutter-horizontal-mobile');
      $input.bootstrapSlider({
        step: 1,
        min: 0,
        max: 100,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Layout Gutter Vertical Mobile
      $input = $('#edit-gutter-vertical-mobile');
      $input.bootstrapSlider({
        step: 1,
        min: 0,
        max: 100,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Layout Gutter Vertical
      $input = $('#edit-gutter-container-mobile');
      $input.bootstrapSlider({
        step: 1,
        min: 0,
        max: 500,
        tooltip: 'show',
        formatter: function(value) {return value + 'px';},
        value: parseFloat($input.val())
      });

      // Reflow layout when showing a tab
      // var $sliders = $('.slider + input');
      // $sliders.each( function() {
      //   $slider = $(this);
      //   $('.vertical-tab-button').click(function() {
      //     $slider.bootstrapSlider('relayout');
      //   });
      // });
      $('.vertical-tab-button a').click(function() {
        $('.slider + input').bootstrapSlider('relayout');
      });
      $('input[type="radio"]').change(function() {
        $('.slider + input').bootstrapSlider('relayout');
      });

      // Typographic Scale Master Slider
      var base = 14;
      var factor = 1.25;
      $('#edit-scale-factor').change(function() {
        base = $('#edit-body-font-size').val();
        factor = $(this).bootstrapSlider('getValue');
        $('#edit-h1-font-size, #edit-h1-mobile-font-size').bootstrapSlider('setValue', base * Math.pow(factor, 4)).change();
        $('#edit-h2-font-size, #edit-h2-mobile-font-size').bootstrapSlider('setValue', base * Math.pow(factor, 3)).change();
        $('#edit-h3-font-size, #edit-h3-mobile-font-size').bootstrapSlider('setValue', base * Math.pow(factor, 2)).change();
        $('#edit-h4-font-size, #edit-h4-mobile-font-size, #edit-blockquote-font-size, #edit-blockquote-mobile-font-size').bootstrapSlider('setValue', base * factor).change();
      });

      // Block Design Preset Loader
      var preset = '';
      $('#edit-block-preset').bind('keyup change', function() {
        // Reset defaults
        $('#edit-block-advanced .slider + .form-text').bootstrapSlider('setValue', 0);
        $('#edit-block-divider-thickness').bootstrapSlider('setValue', parseInt($('#edit-divider-thickness').val()));
        $('#edit-block-divider-length').bootstrapSlider('setValue', parseInt($('#edit-divider-length').val()));
        $('#edit-block-divider-spacing').bootstrapSlider('setValue', 10);
        $('#edit-block-divider, #edit-block-divider-custom, #edit-title-sticker').bootstrapSwitch('state', false);
        $('#edit-block-background-custom, #edit-title-background-custom, #edit-block-divider-color-custom').val('');
        $('#edit-block-advanced select').val('');
        $('#edit-title-align-left').prop("checked", true);
        $('#edit-title-font-size-h2').prop("checked", true);

        // Set presets
        preset = $(this).val();
        switch (preset) {
          case 'block_boxed':
            $('#edit-block-padding').bootstrapSlider('setValue', 15);
            $('#edit-block-border').bootstrapSlider('setValue', 5);
            $('#edit-block-border-color').val('text');
            break;
          case 'block_outline':
            $('#edit-block-padding').bootstrapSlider('setValue', 15);
            $('#edit-block-border').bootstrapSlider('setValue', 1);
            $('#edit-block-border-color').val('text');
            break;
          case 'block_well':
            $('#edit-block-well').val('well');
            $('#edit-title-font-size-h3').prop("checked", true);
            break;
          case 'title_inverted':
            $('#edit-title-background').val('text');
            $('#edit-title-well').val('well glazed-util-background-gray');
            $('#edit-title-padding').bootstrapSlider('setValue', 10);
            $('#edit-title-font-size-h3').prop("checked", true);
            break;
          case 'title_inverted_shape':
            $('#edit-title-background').val('text');
            $('#edit-title-well').val('well glazed-util-background-gray');
            $('#edit-title-padding').bootstrapSlider('setValue', 10);
            $('#edit-title-border-radius').bootstrapSlider('setValue', 100);
            $('#edit-title-font-size-h4').prop("checked", true);
            $('#edit-title-align-center').prop("checked", true);
            break;
          case 'title_sticker':
            $('#edit-title-well').val('well glazed-util-background-gray');
            $('#edit-title-padding').bootstrapSlider('setValue', 10);
            $('#edit-title-sticker').bootstrapSwitch('state', true);
            $('#edit-title-font-size-body').prop("checked", true);
            break;
          case 'title_sticker_color':
            $('#edit-title-font-size-body').prop("checked", true);
            $('#edit-title-padding').bootstrapSlider('setValue', 10);
            $('#edit-title-well').val('well bg-primary');
            $('#edit-title-sticker').bootstrapSwitch('state', true);
            break;
          case 'title_outline':
            $('#edit-title-padding').bootstrapSlider('setValue', 15);
            $('#edit-title-border').bootstrapSlider('setValue', 1);
            $('#edit-title-border-color').val('text');
            $('#edit-title-font-size-h4').prop("checked", true);
            break;
          case 'default_divider':
            $('#edit-block-divider').bootstrapSwitch('state', true);
            break;
          case 'hairline_divider':
            $('#edit-block-divider').bootstrapSwitch('state', true);
            $('#edit-block-divider-custom').bootstrapSwitch('state', true);
            $('#edit-block-divider-thickness').bootstrapSlider('setValue', 1);
            break;
        }
        $('#edit-block-advanced input, #edit-block-advanced select').trigger('change');
        if ($('#edit-block-padding').val() == 0) {
          $('#edit-block .block').css('padding', '');
        }
        if ($('#edit-title-padding').val() == 0) {
          $('#edit-block .block-title').css('padding', '');
        }
         $(this).val(preset);
      });


      // TYPOGRAPHY LIVE PREVIEW

      $('#edit-body-line-height').change(function() {
        $('.type-preview, .type-preview p').css('line-height', $(this).bootstrapSlider('getValue'));
      });
      $('#edit-headings-line-height').change(function() {
        $('.type-preview h1, .type-preview h2, .type-preview h3, .type-preview h4').css('line-height', $(this).bootstrapSlider('getValue'));
      });
      $('#edit-divider-thickness').change(function() {
        $('.type-preview hr').css('height', $(this).bootstrapSlider('getValue'));
      });
      var width = '';
      $('#edit-divider-length').change(function() {
        width = $(this).bootstrapSlider('getValue');
        if (width == 0) {
          $('.type-preview hr').css('width', '100%');
        }
        else {
          $('.type-preview hr').css('width', width);
        }
      });
      var position = '';
      var $hr = false;
      $('#edit-divider-position').change(function() {
        var position = $(this).bootstrapSlider('getValue');
        $hr = $('.type-preview hr');
        if (position == 1) {
          $hr.css({'margin-left' : '0','margin-right' : 'auto'});
        }
        if (position == 2) {
          $hr.css({'margin-left' : 'auto','margin-right' : 'auto'});
        }
        if (position == 3) {
          $hr.css({'margin-left' : 'auto','margin-right' : '0'});
        }
      });
      $('#edit-divider-color').change(function() {
        $('.type-preview hr').css('background-color', glazed_map_color($(this).val()));
      });
      $('#edit-divider-color-custom').bind('keyup change', function() {
        $('.type-preview hr').css('background-color', $(this).val());
      });
      $('#edit-blockquote-line-height').change(function() {
        $('.type-preview blockquote, .type-preview blockquote p').css('line-height', $(this).bootstrapSlider('getValue'));
      });
      $('#edit-body-font-size').change(function() {
        $('.type-preview, .type-preview p').css('font-size', $(this).bootstrapSlider('getValue') + 'px');
        $('.lead').css('font-size', '21px');
        $('#edit-scale-factor').change();
      });
      $('#edit-nav-font-size').change(function() {
        $('.glazed-header--top #glazed-main-menu .nav > li > a, .glazed-header--side #glazed-main-menu .nav a').css('font-size', $(this).bootstrapSlider('getValue') + 'px');
      });
      $('#edit-h1-font-size').change(function() {
        $('.type-preview h1').css('font-size', $(this).bootstrapSlider('getValue') + 'px');
      });
      $('#edit-h2-font-size').change(function() {
        $('.type-preview h2').css('font-size', $(this).bootstrapSlider('getValue') + 'px');
      });
      $('#edit-h3-font-size').change(function() {
        $('.type-preview h3').css('font-size', $(this).bootstrapSlider('getValue') + 'px');
      });
      $('#edit-h4-font-size').change(function() {
        $('.type-preview h4').css('font-size', $(this).bootstrapSlider('getValue') + 'px');
      });
      $('#edit-blockquote-font-size').change(function() {
        $('.type-preview blockquote, .type-preview blockquote p').css('font-size', $(this).bootstrapSlider('getValue') + 'px');
      });
      $('#edit-headings-letter-spacing').change(function() {
        $('.type-preview h1, .type-preview h2, .type-preview h3, .type-preview h4')
          .css('letter-spacing', $(this).bootstrapSlider('getValue') + 'em');
      });
      $('#edit-headings-uppercase').on('switchChange.bootstrapSwitch', function(event, state) {
        if (state) {
          $('.type-preview h1, .type-preview h2, .type-preview h3, .type-preview h4').css('text-transform', 'uppercase');
        }
        else {
          $('.type-preview h1, .type-preview h2, .type-preview h3, .type-preview h4').css('text-transform', 'none');
        }
      });

      var value = '';
      // BLOCK DESIGN LIVE PREVIEW
      $('#edit-block-advanced').bind('keyup change', function() {
        $('#edit-block-preset').val('custom');
      });

      $('#edit-block-well').change(function() {
        $('.block-preview .block').removeClass('well bg-primary glazed-util-background-accent1 glazed-util-background-accent2 glazed-util-background-black glazed-util-background-white glazed-util-background-gray');
        $('.block-preview .block').addClass($(this).val());
      });
      $('#edit-block-background').change(function() {
        $('.block-preview .block').css('background-color', glazed_map_color($(this).val()));
      });
      $('#edit-block-background-custom').change(function() {
        $('.block-preview .block').css('background-color', $(this).val());
      });
      $('#edit-block-padding').bind('keyup change', function() {
        $('.block-preview .block').css('padding', $(this).bootstrapSlider('getValue') + 'px');
      });
      $('#edit-block-border').change(function() {
        $('.block-preview .block').css('border-width', $(this).bootstrapSlider('getValue') + 'px');
        if ($(this).bootstrapSlider('getValue') > 0) {
          $('.block-preview .block').css('border-style', 'solid');
        }
      });
      $('#edit-block-border-color').change(function() {
        $('.block-preview .block').css('border-color', glazed_map_color($(this).val()));
      });
      $('#edit-block-border-color-custom').bind('keyup change', function() {
        $('.block-preview .block').css('border-color', $(this).val());
      });
      $('#edit-block-border-radius').change(function() {
        $('.block-preview .block').css('border-radius', $(this).bootstrapSlider('getValue') + 'px');
      });
      // Block title
      $('#edit-title-well').change(function() {
        $('.block-preview .block-title').removeClass('well bg-primary glazed-util-background-accent1 glazed-util-background-accent2 glazed-util-background-black glazed-util-background-white glazed-util-background-gray');
        $('.block-preview .block-title').addClass($(this).val());
      });
      $('#edit-title-font-size').change(function() {
        // Retrieve the matching font size from the typography settings
        value = $(this).find(':checked').val();
        value = '#edit-' + value + '-font-size';
        value = $(value).val();
        $('.block-preview .block-title').css('font-size', value + 'px');
      });
      $('#edit-title-align').change(function() {
        $('.block-preview .block-title').css('text-align', $(this).find(':checked').val());
      });
      $('#edit-title-background').change(function() {
        $('.block-preview .block-title').css('background-color', glazed_map_color($(this).val()));
      });
      $('#edit-title-background-custom').bind('keyup change', function() {
        $('.block-preview .block-title').css('background-color', $(this).val());
      });
      $('#edit-title-sticker').on('switchChange.bootstrapSwitch', function(event, state) {
        if (state) {
          $('.block-preview .block-title').css('display', 'inline-block');
        }
        else {
          $('.block-preview .block-title').css('display', 'block');
        }
      });
      $('#edit-title-padding').change(function() {
        $('.block-preview .block-title').css('padding', $(this).bootstrapSlider('getValue') + 'px');
      });
      $('#edit-title-border').change(function() {
        $('.block-preview .block-title').css('border-width', $(this).bootstrapSlider('getValue') + 'px');
        if ($(this).bootstrapSlider('getValue') > 0) {
          $('.block-preview .block-title').css('border-style', 'solid');
        }
      });
      $('#edit-title-border-radius').change(function() {
        $('.block-preview .block-title').css('border-radius', $(this).bootstrapSlider('getValue') + 'px');
      });
      $('#edit-title-border-color').change(function() {
        $('.block-preview .block-title').css('border-color', glazed_map_color($(this).val()));
      });
      $('#edit-title-border-color-custom').bind('keyup change', function() {
        $('.block-preview .block-title').css('border-color', $(this).val());
      });
      // Block divider
      if ($('#edit-block-divider:checked').length == 0) {
        $('.block-preview hr').hide();
      }
      $('#edit-block-divider').on('switchChange.bootstrapSwitch', function(event, state) {
        if (state) {
          $('.block-preview hr').show();
        }
        else {
          $('.block-preview hr').hide();
        }
      });
      $('#edit-block-divider-color').change(function() {
        $('.block-preview hr').css('background-color', glazed_map_color($(this).val()));
      });
      $('#edit-block-divider-color-custom').bind('keyup change', function() {
        $('.block-preview hr').css('background-color', $(this).val());
      });
      $('#edit-block-divider-thickness').change(function() {
        $('.block-preview hr').css('height', $(this).bootstrapSlider('getValue') + 'px');
      });
      $('#edit-block-divider-length').change(function() {
        if ($(this).bootstrapSlider('getValue') > 0) {
          $('.block-preview hr').css('width', $(this).bootstrapSlider('getValue') + 'px');
        }
        else {
          $('.block-preview hr').css('width', '100%');
        }
      });
      $('#edit-block-divider-spacing').change(function() {
        $('.block-preview hr').css('margin-top', $(this).bootstrapSlider('getValue') + 'px');
        $('.block-preview hr').css('margin-bottom', $(this).bootstrapSlider('getValue') + 'px');
      });


    }
  };

  /**
   * Provide vertical tab summaries for Bootstrap settings.
   */
  Drupal.behaviors.glazedSettingSummaries = {
    attach: function (context) {
      var $context = $(context);

      // Page Title.
      $context.find('#edit-page-title').drupalSetSummary(function () {
        var summary = [];

        var align = $context.find('input[name="page_title_align"]:checked');
        if (align.val()) {
          summary.push(Drupal.t('Align @align', {
            '@align': align.find('+label').text()
          }));
        }

        var animate = $context.find('input[name="page_title_animate"]:checked');
        if (animate.val()) {
          summary.push(Drupal.t('@animate', {
            '@animate': animate.find('+label').text()
          }));
        }

        if ($context.find(':input[name="page_title_breadcrumbs"]').is(':checked')) {
          summary.push(Drupal.t('Crumbs'));
        } else {
          summary.push(Drupal.t('No Crumbs'));
        }
        return summary.join(', ');

      });

      // Menu.
      $context.find('#edit-menu').drupalSetSummary(function () {
        var summary = [];

        var menu = $context.find('input[name="menu_type"]:checked');
        if (menu.val()) {
          summary.push(Drupal.t('@menu', {
            '@menu': menu.find('+label').text()
          }));
        }
        return summary.join(', ');

      });

      // Colors.
      $context.find('#color_scheme_form').drupalSetSummary(function () {
        var summary = [];

        var scheme = $context.find('select[name="scheme"] :selected');
        if (scheme.val()) {
          summary.push(Drupal.t('@scheme', {
            '@scheme': scheme.text()
          }));
        }
        return summary.join(', ');

      });

      // Layout.
      $context.find('#edit-layout').drupalSetSummary(function () {
        var summary = [];

        var layoutWidth = $context.find('input[name="layout_max_width"]');
        if (layoutWidth.length) {
          summary.push(Drupal.t('@layoutWidth', {
            '@layoutWidth': layoutWidth.val() + 'px'
          }));
        }

        return summary.join(', ');

      });

      // Header.
      $context.find('#edit-header').drupalSetSummary(function () {
        var summary = [];

        if ($context.find(':input[name="header_position"]').is(':checked')) {
          summary.push(Drupal.t('Side Header'));
        } else {
          summary.push(Drupal.t('Top Header'));
        }
        return summary.join(', ');

      });

      // Typography.
      $context.find('#edit-fonts').drupalSetSummary(function () {
        var summary = [];

        var typography = $context.find('select[name="body_font_face"] :selected');
        if (typography.val()) {
          summary.push(Drupal.t('Base: @typography', {
            '@typography': typography.text()
          }));
        }
        return summary.join(', ');

      });
    }
  };

})(jQuery, Drupal);;
/**
 * @file
 * Attaches the behaviors for the Color module.
 * This is copied to Glazed theme because the color module locks break when bootstrap theme loads
 * Other unused parts are also edited out
 */

(function ($) {

Drupal.behaviors.color = {

  attach: function (context, settings) {
    var i, j, colors, field_name;
    // This behavior attaches by ID, so is only valid once on a page.
    var form = $('#system-theme-settings .color-form', context).once('color');
    if (form.length == 0) {
      return;
    }
    var inputs = [];
    var hooks = [];
    var locks = [];
    var focused = null;

    // Add Farbtastic.
    $(form).prepend('<div id="placeholder"></div>').addClass('color-processed');
    var farb = $.farbtastic('#placeholder');

    // Decode reference colors to HSL.
    var reference = settings.color.reference;
    for (i in reference) {
      reference[i] = farb.RGBToHSL(farb.unpack(reference[i]));
    }

    // Build a preview.
    var height = [];
    var width = [];
    // Loop through all defined gradients.
    // for (i in settings.gradients) {
    //   // Add element to display the gradient.
    //   $('#preview').once('color').append('<div id="gradient-' + i + '"></div>');
    //   var gradient = $('#preview #gradient-' + i);
    //   // Add height of current gradient to the list (divided by 10).
    //   height.push(parseInt(gradient.css('height'), 10) / 10);
    //   // Add width of current gradient to the list (divided by 10).
    //   width.push(parseInt(gradient.css('width'), 10) / 10);
    //   // Add rows (or columns for horizontal gradients).
    //   // Each gradient line should have a height (or width for horizontal
    //   // gradients) of 10px (because we divided the height/width by 10 above).
    //   for (j = 0; j < (settings.gradients[i]['direction'] == 'vertical' ? height[i] : width[i]); ++j) {
    //     gradient.append('<div class="gradient-line"></div>');
    //   }
    // }

    // // Fix preview background in IE6.
    // if (navigator.appVersion.match(/MSIE [0-6]\./)) {
    //   var e = $('#preview #img')[0];
    //   var image = e.currentStyle.backgroundImage;
    //   e.style.backgroundImage = 'none';
    //   e.style.filter = "progid:DXImageTransform.Microsoft.AlphaImageLoader(enabled=true, sizingMethod=crop, src='" + image.substring(5, image.length - 2) + "')";
    // }

    // Set up colorScheme selector.
    $('#edit-scheme', form).change(function () {
      var schemes = settings.color.schemes, colorScheme = this.options[this.selectedIndex].value;
      if (colorScheme != '' && schemes[colorScheme]) {
        // Get colors of active scheme.
        colors = schemes[colorScheme];
        for (field_name in colors) {
          callback($('#edit-palette-' + field_name), colors[field_name], false, true);
        }
        // preview();
      }
    });

    /**
     * Renders the preview.
     */
    // function preview() {
    //   Drupal.color.callback(context, settings, form, farb, height, width);
    // }

    /**
     * Shifts a given color, using a reference pair (ref in HSL).
     *
     * This algorithm ensures relative ordering on the saturation and luminance
     * axes is preserved, and performs a simple hue shift.
     *
     * It is also symmetrical. If: shift_color(c, a, b) == d, then
     * shift_color(d, b, a) == c.
     */
    function shift_color(given, ref1, ref2) {
      // Convert to HSL.
      given = farb.RGBToHSL(farb.unpack(given));

      // Hue: apply delta.
      given[0] += ref2[0] - ref1[0];

      // Saturation: interpolate.
      if (ref1[1] == 0 || ref2[1] == 0) {
        given[1] = ref2[1];
      }
      else {
        var d = ref1[1] / ref2[1];
        if (d > 1) {
          given[1] /= d;
        }
        else {
          given[1] = 1 - (1 - given[1]) * d;
        }
      }

      // Luminance: interpolate.
      if (ref1[2] == 0 || ref2[2] == 0) {
        given[2] = ref2[2];
      }
      else {
        var d = ref1[2] / ref2[2];
        if (d > 1) {
          given[2] /= d;
        }
        else {
          given[2] = 1 - (1 - given[2]) * d;
        }
      }

      return farb.pack(farb.HSLToRGB(given));
    }

    /**
     * Callback for Farbtastic when a new color is chosen.
     */
    function callback(input, color, propagate, colorScheme) {
      var matched;
      // Set background/foreground colors.
      $(input).css({
        backgroundColor: color,
        'color': farb.RGBToHSL(farb.unpack(color))[2] > 0.5 ? '#000' : '#fff'
      });

      // Change input value.
      if ($(input).val() && $(input).val() != color) {
        $(input).val(color);

        // Update locked values.
        // if (propagate) {
        //   i = input.i;
        //   for (j = i + 1; ; ++j) {
        //     if (!locks[j - 1] || $(locks[j - 1]).is('.unlocked')) break;
        //     matched = shift_color(color, reference[input.key], reference[inputs[j].key]);
        //     callback(inputs[j], matched, false);
        //   }
        //   for (j = i - 1; ; --j) {
        //     if (!locks[j] || $(locks[j]).is('.unlocked')) break;
        //     matched = shift_color(color, reference[input.key], reference[inputs[j].key]);
        //     callback(inputs[j], matched, false);
        //   }

        //   // Update preview.
        //   preview();
        // }

        // Reset colorScheme selector.
        if (!colorScheme) {
          resetScheme();
        }
      }
    }

    /**
     * Resets the color scheme selector.
     */
    function resetScheme() {
      $('#edit-scheme', form).each(function () {
        this.selectedIndex = this.options.length - 1;
      });
    }

    /**
     * Focuses Farbtastic on a particular field.
     */
    function focus() {
      var input = this;
      // Remove old bindings.
      focused && $(focused).unbind('keyup', farb.updateValue)
          .unbind('keyup', preview).unbind('keyup', resetScheme)
          .parent().removeClass('item-selected');

      // Add new bindings.
      focused = this;
      farb.linkTo(function (color) { callback(input, color, true, false); });
      farb.setColor(this.value);
      $(focused).keyup(farb.updateValue).keyup(preview).keyup(resetScheme)
        .parent().addClass('item-selected');
    }

    // Initialize color fields.
    $('#palette input.form-text', form)
    .each(function () {
      // Extract palette field name
      this.key = this.id.substring(13);

      // Link to color picker temporarily to initialize.
      farb.linkTo(function () {}).setColor('#000').linkTo(this);

      // Add lock.
      // var i = inputs.length;
      // if (inputs.length) {
      //   var lock = $('<div class="lock"></div>').toggle(
      //     function () {
      //       $(this).addClass('unlocked');
      //       $(hooks[i - 1]).attr('class',
      //         locks[i - 2] && $(locks[i - 2]).is(':not(.unlocked)') ? 'hook up' : 'hook'
      //       );
      //       $(hooks[i]).attr('class',
      //         locks[i] && $(locks[i]).is(':not(.unlocked)') ? 'hook down' : 'hook'
      //       );
      //     },
      //     function () {
      //       $(this).removeClass('unlocked');
      //       $(hooks[i - 1]).attr('class',
      //         locks[i - 2] && $(locks[i - 2]).is(':not(.unlocked)') ? 'hook both' : 'hook down'
      //       );
      //       $(hooks[i]).attr('class',
      //         locks[i] && $(locks[i]).is(':not(.unlocked)') ? 'hook both' : 'hook up'
      //       );
      //     }
      //   );
      //   $(this).after(lock);
      //   locks.push(lock);
      // };

      // Add hook.
      // var hook = $('<div class="hook"></div>');
      // $(this).after(hook);
      // hooks.push(hook);

      // $(this).parent().find('.lock').click();
      this.i = i;
      inputs.push(this);
    })
    .focus(focus);

    $('#palette label', form);

    // Focus first color.
    focus.call(inputs[0]);

    // Render preview.
    // preview();
  }
};

})(jQuery);
;
