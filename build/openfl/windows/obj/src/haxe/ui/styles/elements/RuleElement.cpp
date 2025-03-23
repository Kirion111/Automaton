#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentContainer
#include <haxe/ui/core/IComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Dimension
#include <haxe/ui/styles/Dimension.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_ValueTools
#include <haxe/ui/styles/ValueTools.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Directive
#include <haxe/ui/styles/elements/Directive.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_RuleElement
#include <haxe/ui/styles/elements/RuleElement.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Selector
#include <haxe/ui/styles/elements/Selector.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_SelectorPart
#include <haxe/ui/styles/elements/SelectorPart.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8b9957a42d1340b9_7_new,"haxe.ui.styles.elements.RuleElement","new",0xe0db6eb5,"haxe.ui.styles.elements.RuleElement.new","haxe/ui/styles/elements/RuleElement.hx",7,0x55caecdb)
HX_LOCAL_STACK_FRAME(_hx_pos_8b9957a42d1340b9_22_addDirective,"haxe.ui.styles.elements.RuleElement","addDirective",0x34e2f8f9,"haxe.ui.styles.elements.RuleElement.addDirective","haxe/ui/styles/elements/RuleElement.hx",22,0x55caecdb)
HX_LOCAL_STACK_FRAME(_hx_pos_8b9957a42d1340b9_28_match,"haxe.ui.styles.elements.RuleElement","match",0xcb8ee6da,"haxe.ui.styles.elements.RuleElement.match","haxe/ui/styles/elements/RuleElement.hx",28,0x55caecdb)
HX_LOCAL_STACK_FRAME(_hx_pos_8b9957a42d1340b9_89_processDirective,"haxe.ui.styles.elements.RuleElement","processDirective",0x7bc8b06b,"haxe.ui.styles.elements.RuleElement.processDirective","haxe/ui/styles/elements/RuleElement.hx",89,0x55caecdb)
static const ::String _hx_array_data_e40ef043_7[] = {
	HX_("animation-name",74,af,fd,ae),HX_("animation-duration",fd,94,5c,5e),HX_("animation-timing-function",f2,dd,68,8f),HX_("animation-delay",3a,1e,9e,af),HX_("animation-iteration-count",56,1d,0c,30),HX_("animation-direction",76,d0,26,5b),HX_("animation-fill-mode",e4,12,c9,b7),
};
static const ::String _hx_array_data_e40ef043_8[] = {
	HX_("background-color",84,e8,6d,de),HX_("background-color-end",52,18,72,2e),HX_("background-gradient-style",93,4c,5d,f2),
};
static const ::String _hx_array_data_e40ef043_9[] = {
	HX_("background-image-clip-top",89,46,05,ca),HX_("background-image-clip-left",93,1d,47,f5),HX_("background-image-clip-bottom",77,77,29,f7),HX_("background-image-clip-right",d0,d0,ff,1f),
};
static const ::String _hx_array_data_e40ef043_10[] = {
	HX_("background-image-slice-top",89,71,91,06),HX_("background-image-slice-left",93,92,60,b3),HX_("background-image-slice-bottom",77,2c,4a,86),HX_("background-image-slice-right",d0,bb,2c,b8),
};
static const ::String _hx_array_data_e40ef043_11[] = {
	HX_("background-position-x",d3,15,69,2f),HX_("background-position-y",d4,15,69,2f),
};
static const ::String _hx_array_data_e40ef043_12[] = {
	HX_("background-width",27,2d,74,5e),HX_("background-height",a6,cd,82,fd),
};
static const ::String _hx_array_data_e40ef043_13[] = {
	HX_("background-width",27,2d,74,5e),HX_("background-height",a6,cd,82,fd),
};
static const ::String _hx_array_data_e40ef043_14[] = {
	HX_("border-size",02,17,a7,2e),HX_("border-style",d0,a7,d1,aa),HX_("border-color",02,74,10,71),
};
static const ::String _hx_array_data_e40ef043_15[] = {
	HX_("border-bottom-size",82,24,35,2c),HX_("border-style",d0,a7,d1,aa),HX_("border-bottom-color",82,36,ce,4f),
};
static const ::String _hx_array_data_e40ef043_16[] = {
	HX_("border-top-color",8a,f0,a5,c6),HX_("border-left-color",5e,12,2b,99),HX_("border-right-color",d1,4a,d2,a1),HX_("border-bottom-color",82,36,ce,4f),
};
static const ::String _hx_array_data_e40ef043_17[] = {
	HX_("border-left-size",26,78,a1,a1),HX_("border-style",d0,a7,d1,aa),HX_("border-left-color",5e,12,2b,99),
};
static const ::String _hx_array_data_e40ef043_18[] = {
	HX_("border-right-size",13,4f,36,fb),HX_("border-style",d0,a7,d1,aa),HX_("border-right-color",d1,4a,d2,a1),
};
static const ::String _hx_array_data_e40ef043_19[] = {
	HX_("border-top-size",7a,83,50,ad),HX_("border-left-size",26,78,a1,a1),HX_("border-right-size",13,4f,36,fb),HX_("border-bottom-size",82,24,35,2c),
};
static const ::String _hx_array_data_e40ef043_20[] = {
	HX_("border-top-size",7a,83,50,ad),HX_("border-style",d0,a7,d1,aa),HX_("border-top-color",8a,f0,a5,c6),
};
static const ::String _hx_array_data_e40ef043_21[] = {
	HX_("cursor-name",62,76,bb,27),HX_("cursor-offset-x",95,65,48,66),HX_("cursor-offset-y",96,65,48,66),
};
static const ::String _hx_array_data_e40ef043_22[] = {
	HX_("cursor-name",62,76,bb,27),HX_("cursor-offset-x",95,65,48,66),HX_("cursor-offset-y",96,65,48,66),
};
static const ::String _hx_array_data_e40ef043_23[] = {
	HX_("margin-top",b6,1f,6b,70),HX_("margin-left",c6,4b,ff,e7),HX_("margin-right",3d,0f,70,8e),HX_("margin-bottom",6a,d8,ef,2a),
};
static const ::String _hx_array_data_e40ef043_24[] = {
	HX_("margin-top",b6,1f,6b,70),HX_("margin-bottom",6a,d8,ef,2a),
};
static const ::String _hx_array_data_e40ef043_25[] = {
	HX_("margin-left",c6,4b,ff,e7),HX_("margin-right",3d,0f,70,8e),
};
static const ::String _hx_array_data_e40ef043_26[] = {
	HX_("padding-top",d9,16,74,71),HX_("padding-left",43,93,ce,ce),HX_("padding-right",20,55,ff,9c),HX_("padding-bottom",27,b9,bd,d9),
};
static const ::String _hx_array_data_e40ef043_27[] = {
	HX_("padding-top",d9,16,74,71),HX_("padding-bottom",27,b9,bd,d9),
};
static const ::String _hx_array_data_e40ef043_28[] = {
	HX_("padding-left",43,93,ce,ce),HX_("padding-right",20,55,ff,9c),
};
static const ::String _hx_array_data_e40ef043_29[] = {
	HX_("padding-top",d9,16,74,71),HX_("padding-left",43,93,ce,ce),HX_("padding-right",20,55,ff,9c),HX_("padding-bottom",27,b9,bd,d9),
};
static const ::String _hx_array_data_e40ef043_30[] = {
	HX_("horizontal-spacing",da,c3,ba,32),HX_("vertical-spacing",6c,65,11,2b),
};
HX_LOCAL_STACK_FRAME(_hx_pos_8b9957a42d1340b9_168_processComposite,"haxe.ui.styles.elements.RuleElement","processComposite",0x7e2d5823,"haxe.ui.styles.elements.RuleElement.processComposite","haxe/ui/styles/elements/RuleElement.hx",168,0x55caecdb)
HX_LOCAL_STACK_FRAME(_hx_pos_8b9957a42d1340b9_31_ruleMatch,"haxe.ui.styles.elements.RuleElement","ruleMatch",0x24abbabe,"haxe.ui.styles.elements.RuleElement.ruleMatch","haxe/ui/styles/elements/RuleElement.hx",31,0x55caecdb)
namespace haxe{
namespace ui{
namespace styles{
namespace elements{

void RuleElement_obj::__construct(::String selector,::Array< ::Dynamic> directives){
            	HX_GC_STACKFRAME(&_hx_pos_8b9957a42d1340b9_7_new)
HXLINE(  10)		this->directiveCount = 0;
HXLINE(   9)		this->directives =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  13)		this->selector =  ::haxe::ui::styles::elements::Selector_obj::__alloc( HX_CTX ,selector);
HXLINE(  16)		{
HXLINE(  16)			int _g = 0;
HXDLIN(  16)			while((_g < directives->length)){
HXLINE(  16)				 ::haxe::ui::styles::elements::Directive d = directives->__get(_g).StaticCast<  ::haxe::ui::styles::elements::Directive >();
HXDLIN(  16)				_g = (_g + 1);
HXLINE(  17)				this->processDirective(d);
HXLINE(  18)				this->directiveCount++;
            			}
            		}
            	}

Dynamic RuleElement_obj::__CreateEmpty() { return new RuleElement_obj; }

void *RuleElement_obj::_hx_vtable = 0;

Dynamic RuleElement_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RuleElement_obj > _hx_result = new RuleElement_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool RuleElement_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c42e88d;
}

void RuleElement_obj::addDirective(::String directive, ::haxe::ui::styles::Value value){
            	HX_GC_STACKFRAME(&_hx_pos_8b9957a42d1340b9_22_addDirective)
HXLINE(  23)		 ::haxe::ui::styles::elements::Directive d =  ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,directive,value,null());
HXLINE(  24)		this->processDirective(d);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RuleElement_obj,addDirective,(void))

bool RuleElement_obj::match( ::haxe::ui::core::Component d){
            	HX_STACKFRAME(&_hx_pos_8b9957a42d1340b9_28_match)
HXDLIN(  28)		return ::haxe::ui::styles::elements::RuleElement_obj::ruleMatch(this->selector->parts->__get((this->selector->parts->length - 1)).StaticCast<  ::haxe::ui::styles::elements::SelectorPart >(),d);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RuleElement_obj,match,return )

void RuleElement_obj::processDirective( ::haxe::ui::styles::elements::Directive d){
            	HX_GC_STACKFRAME(&_hx_pos_8b9957a42d1340b9_89_processDirective)
HXDLIN(  89)		::String _hx_switch_0 = d->directive;
            		if (  (_hx_switch_0==HX_("animation",04,ef,34,4b)) ){
HXLINE( 133)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_7,7),null());
HXDLIN( 133)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("background",ee,93,1d,26)) ){
HXLINE( 113)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_8,3),null());
HXDLIN( 113)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("background-image-clip",81,f1,70,5b)) ){
HXLINE( 129)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_9,4),null());
HXDLIN( 129)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("background-image-slice",81,9c,cb,dd)) ){
HXLINE( 131)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_10,4),null());
HXDLIN( 131)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("background-position",28,94,bd,15)) ){
HXLINE( 109)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_11,2),null());
HXDLIN( 109)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("background-size",c0,28,19,65)) ){
HXLINE( 142)			::Array< ::Dynamic> vl = ::haxe::ui::styles::ValueTools_obj::composite(d->value);
HXLINE( 143)			if ((vl->length == 1)) {
HXLINE( 144)				this->processComposite( ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >(),null()),::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_12,2),null());
            			}
            			else {
HXLINE( 145)				if ((vl->length == 2)) {
HXLINE( 146)					this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_13,2),null());
            				}
            			}
HXLINE( 141)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("border",ec,4c,1a,64)) ){
HXLINE( 115)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_14,3),null());
HXDLIN( 115)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("border-bottom",6c,2f,47,1c)) ){
HXLINE( 121)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_15,3),null());
HXDLIN( 121)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("border-color",02,74,10,71)) ){
HXLINE( 127)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_16,4),true);
HXDLIN( 127)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("border-left",48,7e,03,2a)) ){
HXLINE( 119)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_17,3),null());
HXDLIN( 119)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("border-right",7b,0e,18,10)) ){
HXLINE( 123)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_18,3),null());
HXDLIN( 123)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("border-size",02,17,a7,2e)) ){
HXLINE( 125)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_19,4),null());
HXDLIN( 125)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("border-top",74,33,d8,ed)) ){
HXLINE( 117)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_20,3),null());
HXDLIN( 117)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("cursor",d6,8e,e8,3e)) ){
HXLINE( 135)			::Array< ::Dynamic> vl = ::haxe::ui::styles::ValueTools_obj::composite(d->value);
HXLINE( 136)			if ((vl->length == 1)) {
HXLINE( 137)				this->processComposite( ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),::haxe::ui::styles::Value_obj::VComposite(::Array_obj< ::Dynamic>::__new(3)->init(0,vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >())->init(1,::haxe::ui::styles::Value_obj::VNumber(0))->init(2,::haxe::ui::styles::Value_obj::VNumber(0))),null()),::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_21,3),null());
            			}
            			else {
HXLINE( 138)				if ((vl->length == 3)) {
HXLINE( 139)					this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_22,3),null());
            				}
            			}
HXLINE( 134)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("font-style",f3,04,ec,01)) ){
HXLINE( 149)			::Array< ::Dynamic> v1 = ::haxe::ui::styles::ValueTools_obj::composite(d->value);
HXLINE( 150)			if (::hx::IsNull( v1 )) {
HXLINE( 151)				v1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,d->value);
            			}
HXLINE( 153)			{
HXLINE( 153)				int _g = 0;
HXDLIN( 153)				while((_g < v1->length)){
HXLINE( 153)					 ::haxe::ui::styles::Value v = v1->__get(_g).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN( 153)					_g = (_g + 1);
HXLINE( 154)					::String s = ::haxe::ui::styles::ValueTools_obj::string(v).toLowerCase();
HXLINE( 155)					if ((s == HX_("bold",85,81,1b,41))) {
HXLINE( 156)						::Dynamic this1 = this->directives;
HXDLIN( 156)						( ( ::haxe::ds::StringMap)(this1) )->set(HX_("font-bold",03,d0,d1,42), ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("font-bold",03,d0,d1,42),::haxe::ui::styles::Value_obj::VBool(true),null()));
            					}
            					else {
HXLINE( 157)						if ((s == HX_("italic",f0,2e,64,06))) {
HXLINE( 158)							::Dynamic this1 = this->directives;
HXDLIN( 158)							( ( ::haxe::ds::StringMap)(this1) )->set(HX_("font-italic",ee,98,29,9d), ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("font-italic",ee,98,29,9d),::haxe::ui::styles::Value_obj::VBool(true),null()));
            						}
            						else {
HXLINE( 159)							if ((s == HX_("underline",0c,15,d1,87))) {
HXLINE( 160)								::Dynamic this1 = this->directives;
HXDLIN( 160)								( ( ::haxe::ds::StringMap)(this1) )->set(HX_("font-underline",ce,7d,77,c9), ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("font-underline",ce,7d,77,c9),::haxe::ui::styles::Value_obj::VBool(true),null()));
            							}
            						}
            					}
            				}
            			}
HXLINE( 148)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("margin",2e,70,6d,ba)) ){
HXLINE( 101)			::Array< ::Dynamic> vl = ::haxe::ui::styles::ValueTools_obj::composite(d->value);
HXLINE( 102)			bool _hx_tmp;
HXDLIN( 102)			if ((vl->length != 4)) {
HXLINE( 102)				_hx_tmp = (vl->length == 1);
            			}
            			else {
HXLINE( 102)				_hx_tmp = true;
            			}
HXDLIN( 102)			if (_hx_tmp) {
HXLINE( 103)				this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_23,4),null());
            			}
            			else {
HXLINE( 104)				if ((vl->length == 2)) {
HXLINE( 105)					this->processComposite( ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >(),null()),::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_24,2),null());
HXLINE( 106)					this->processComposite( ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),vl->__get(1).StaticCast<  ::haxe::ui::styles::Value >(),null()),::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_25,2),null());
            				}
            			}
HXLINE( 100)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("padding",d1,59,7d,d0)) ){
HXLINE(  91)			::Array< ::Dynamic> vl = ::haxe::ui::styles::ValueTools_obj::composite(d->value);
HXLINE(  92)			bool _hx_tmp;
HXDLIN(  92)			if ((vl->length != 4)) {
HXLINE(  92)				_hx_tmp = (vl->length == 1);
            			}
            			else {
HXLINE(  92)				_hx_tmp = true;
            			}
HXDLIN(  92)			if (_hx_tmp) {
HXLINE(  93)				this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_26,4),null());
            			}
            			else {
HXLINE(  94)				if ((vl->length == 2)) {
HXLINE(  95)					this->processComposite( ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >(),null()),::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_27,2),null());
HXLINE(  96)					this->processComposite( ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),vl->__get(1).StaticCast<  ::haxe::ui::styles::Value >(),null()),::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_28,2),null());
            				}
            				else {
HXLINE(  97)					if ((vl->length == 0)) {
HXLINE(  98)						this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_29,4),null());
            					}
            				}
            			}
HXLINE(  90)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("spacing",83,33,bb,91)) ){
HXLINE( 111)			this->processComposite(d,::Array_obj< ::String >::fromData( _hx_array_data_e40ef043_30,2),null());
HXDLIN( 111)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE( 164)			this->directives->set(d->directive,d);
            		}
            		_hx_goto_4:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RuleElement_obj,processDirective,(void))

void RuleElement_obj::processComposite( ::haxe::ui::styles::elements::Directive d,::Array< ::String > parts,::hx::Null< bool >  __o_duplicate){
            		bool duplicate = __o_duplicate.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_8b9957a42d1340b9_168_processComposite)
HXLINE( 169)		{
HXLINE( 169)			int _g = 0;
HXDLIN( 169)			while((_g < parts->length)){
HXLINE( 169)				::String p = parts->__get(_g);
HXDLIN( 169)				_g = (_g + 1);
HXLINE( 170)				this->directives->remove(p);
            			}
            		}
HXLINE( 173)		{
HXLINE( 173)			 ::haxe::ui::styles::Value _g1 = d->value;
HXDLIN( 173)			switch((int)(_g1->_hx_getIndex())){
            				case (int)1: {
HXLINE( 187)					Float _g = _g1->_hx_getFloat(0);
HXLINE( 188)					{
HXLINE( 188)						int _g2 = 0;
HXDLIN( 188)						while((_g2 < parts->length)){
HXLINE( 188)							::String p = parts->__get(_g2);
HXDLIN( 188)							_g2 = (_g2 + 1);
HXLINE( 189)							{
HXLINE( 189)								::Dynamic this1 = this->directives;
HXDLIN( 189)								( ( ::haxe::ds::StringMap)(this1) )->set(p, ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,p,d->value,null()));
            							}
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 183)					 ::haxe::ui::styles::Dimension v = _g1->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXLINE( 184)					{
HXLINE( 184)						int _g = 0;
HXDLIN( 184)						while((_g < parts->length)){
HXLINE( 184)							::String p = parts->__get(_g);
HXDLIN( 184)							_g = (_g + 1);
HXLINE( 185)							{
HXLINE( 185)								::Dynamic this1 = this->directives;
HXDLIN( 185)								( ( ::haxe::ds::StringMap)(this1) )->set(p, ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,p,::haxe::ui::styles::Value_obj::VDimension(v),null()));
            							}
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 175)					int _g = _g1->_hx_getInt(0);
HXLINE( 176)					if ((duplicate == false)) {
HXLINE( 177)						::Dynamic this1 = this->directives;
HXDLIN( 177)						 ::haxe::ui::styles::elements::Directive value =  ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,parts->__get(0),d->value,null());
HXDLIN( 177)						( ( ::haxe::ds::StringMap)(this1) )->set(parts->__get(0),value);
            					}
            					else {
HXLINE( 179)						int _g = 0;
HXDLIN( 179)						while((_g < parts->length)){
HXLINE( 179)							::String p = parts->__get(_g);
HXDLIN( 179)							_g = (_g + 1);
HXLINE( 180)							{
HXLINE( 180)								::Dynamic this1 = this->directives;
HXDLIN( 180)								( ( ::haxe::ds::StringMap)(this1) )->set(p, ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,p,d->value,null()));
            							}
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 207)					::String f = _g1->_hx_getString(0);
HXDLIN( 207)					::Array< ::Dynamic> vl = _g1->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 208)					{
HXLINE( 208)						int _g = 0;
HXDLIN( 208)						while((_g < parts->length)){
HXLINE( 208)							::String p = parts->__get(_g);
HXDLIN( 208)							_g = (_g + 1);
HXLINE( 209)							{
HXLINE( 209)								::Dynamic this1 = this->directives;
HXDLIN( 209)								( ( ::haxe::ds::StringMap)(this1) )->set(p, ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,p,d->value,null()));
            							}
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 174)					::String _g = _g1->_hx_getString(0);
            				}
            				break;
            				case (int)7: {
HXLINE( 191)					::Array< ::Dynamic> vl = _g1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 191)					{
HXLINE( 192)						int n = 0;
HXLINE( 193)						{
HXLINE( 193)							int _g = 0;
HXDLIN( 193)							while((_g < parts->length)){
HXLINE( 193)								::String p = parts->__get(_g);
HXDLIN( 193)								_g = (_g + 1);
HXLINE( 194)								if (::hx::IsNotNull( vl->__get(n).StaticCast<  ::haxe::ui::styles::Value >() )) {
HXLINE( 195)									 ::haxe::ui::styles::elements::Directive nd =  ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,p,vl->__get(n).StaticCast<  ::haxe::ui::styles::Value >(),null());
HXLINE( 196)									this->processDirective(nd);
HXLINE( 197)									this->directives->set(p,nd);
            								}
HXLINE( 199)								n = (n + 1);
            							}
            						}
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 202)					int _g = 0;
HXDLIN( 202)					while((_g < parts->length)){
HXLINE( 202)						::String p = parts->__get(_g);
HXDLIN( 202)						_g = (_g + 1);
HXLINE( 203)						 ::haxe::ui::styles::elements::Directive nd =  ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,p,d->value,null());
HXLINE( 204)						this->processDirective(nd);
HXLINE( 205)						this->directives->set(p,nd);
            					}
            				}
            				break;
            				default:{
HXLINE( 212)					::haxe::Log_obj::trace(HX_("unknown value type",9f,a6,aa,f1), ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("className",a3,92,3d,dc),HX_("haxe.ui.styles.elements.RuleElement",43,f0,0e,e4))
            						->setFixed(1,HX_("customParams",d7,51,18,ed),::cpp::VirtualArray_obj::__new(1)->init(0,d->value))
            						->setFixed(2,HX_("methodName",cc,19,0f,12),HX_("processComposite",98,07,13,ca))
            						->setFixed(3,HX_("fileName",e7,5a,43,62),HX_("haxe/ui/styles/elements/RuleElement.hx",db,ec,ca,55))
            						->setFixed(4,HX_("lineNumber",dd,81,22,76),212)));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(RuleElement_obj,processComposite,(void))

bool RuleElement_obj::ruleMatch( ::haxe::ui::styles::elements::SelectorPart c, ::haxe::ui::core::Component d){
            	HX_STACKFRAME(&_hx_pos_8b9957a42d1340b9_31_ruleMatch)
HXLINE(  32)		if ((c->nodeName == HX_("*",2a,00,00,00))) {
HXLINE(  33)			return true;
            		}
HXLINE(  36)		bool _hx_tmp;
HXDLIN(  36)		if (::hx::IsNotNull( c->id )) {
HXLINE(  36)			::String c1 = c->id;
HXDLIN(  36)			_hx_tmp = (c1 != d->get_id());
            		}
            		else {
HXLINE(  36)			_hx_tmp = false;
            		}
HXDLIN(  36)		if (_hx_tmp) {
HXLINE(  37)			return false;
            		}
HXLINE(  40)		if (::hx::IsNotNull( c->className )) {
HXLINE(  41)			int _g = 0;
HXDLIN(  41)			::Array< ::String > _g1 = c->get_classNameParts();
HXDLIN(  41)			while((_g < _g1->length)){
HXLINE(  41)				::String p = _g1->__get(_g);
HXDLIN(  41)				_g = (_g + 1);
HXLINE(  42)				if (((d->classes->indexOf(p,null()) != -1) == false)) {
HXLINE(  43)					return false;
            				}
            			}
            		}
HXLINE(  48)		if (::hx::IsNotNull( c->pseudoClass )) {
HXLINE(  49)			::String pc = (HX_(":",3a,00,00,00) + c->pseudoClass);
HXLINE(  50)			if (((d->classes->indexOf(pc,null()) != -1) == false)) {
HXLINE(  51)				return false;
            			}
            		}
HXLINE(  55)		if (::hx::IsNotNull( c->nodeName )) {
HXLINE(  56)			::String classNodeName = d->get_nodeName();
HXLINE(  57)			if ((c->nodeName != classNodeName)) {
HXLINE(  58)				return false;
            			}
            		}
HXLINE(  62)		if (::hx::IsNotNull( c->parent )) {
HXLINE(  63)			if ((c->direct == true)) {
HXLINE(  64)				 ::haxe::ui::core::Component p = d->get_parentComponent();
HXLINE(  65)				if (::hx::IsNull( p )) {
HXLINE(  66)					return false;
            				}
HXLINE(  68)				if (!(::haxe::ui::styles::elements::RuleElement_obj::ruleMatch(c->parent,p))) {
HXLINE(  69)					return false;
            				}
            			}
            			else {
HXLINE(  72)				 ::haxe::ui::core::Component p = d->get_parentComponent();
HXLINE(  73)				while(::hx::IsNotNull( p )){
HXLINE(  74)					if (::haxe::ui::styles::elements::RuleElement_obj::ruleMatch(c->parent,p)) {
HXLINE(  75)						goto _hx_goto_40;
            					}
HXLINE(  77)					p = p->get_parentComponent();
            				}
            				_hx_goto_40:;
HXLINE(  79)				if (::hx::IsNull( p )) {
HXLINE(  80)					return false;
            				}
            			}
            		}
HXLINE(  85)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RuleElement_obj,ruleMatch,return )


::hx::ObjectPtr< RuleElement_obj > RuleElement_obj::__new(::String selector,::Array< ::Dynamic> directives) {
	::hx::ObjectPtr< RuleElement_obj > __this = new RuleElement_obj();
	__this->__construct(selector,directives);
	return __this;
}

::hx::ObjectPtr< RuleElement_obj > RuleElement_obj::__alloc(::hx::Ctx *_hx_ctx,::String selector,::Array< ::Dynamic> directives) {
	RuleElement_obj *__this = (RuleElement_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RuleElement_obj), true, "haxe.ui.styles.elements.RuleElement"));
	*(void **)__this = RuleElement_obj::_hx_vtable;
	__this->__construct(selector,directives);
	return __this;
}

RuleElement_obj::RuleElement_obj()
{
}

void RuleElement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RuleElement);
	HX_MARK_MEMBER_NAME(selector,"selector");
	HX_MARK_MEMBER_NAME(directives,"directives");
	HX_MARK_MEMBER_NAME(directiveCount,"directiveCount");
	HX_MARK_END_CLASS();
}

void RuleElement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(selector,"selector");
	HX_VISIT_MEMBER_NAME(directives,"directives");
	HX_VISIT_MEMBER_NAME(directiveCount,"directiveCount");
}

::hx::Val RuleElement_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return ::hx::Val( match_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { return ::hx::Val( selector ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"directives") ) { return ::hx::Val( directives ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addDirective") ) { return ::hx::Val( addDirective_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"directiveCount") ) { return ::hx::Val( directiveCount ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"processDirective") ) { return ::hx::Val( processDirective_dyn() ); }
		if (HX_FIELD_EQ(inName,"processComposite") ) { return ::hx::Val( processComposite_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool RuleElement_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"ruleMatch") ) { outValue = ruleMatch_dyn(); return true; }
	}
	return false;
}

::hx::Val RuleElement_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { selector=inValue.Cast<  ::haxe::ui::styles::elements::Selector >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"directives") ) { directives=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"directiveCount") ) { directiveCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RuleElement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selector",1f,33,6d,b1));
	outFields->push(HX_("directives",44,dd,1a,28));
	outFields->push(HX_("directiveCount",00,ce,08,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RuleElement_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::styles::elements::Selector */ ,(int)offsetof(RuleElement_obj,selector),HX_("selector",1f,33,6d,b1)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(RuleElement_obj,directives),HX_("directives",44,dd,1a,28)},
	{::hx::fsInt,(int)offsetof(RuleElement_obj,directiveCount),HX_("directiveCount",00,ce,08,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RuleElement_obj_sStaticStorageInfo = 0;
#endif

static ::String RuleElement_obj_sMemberFields[] = {
	HX_("selector",1f,33,6d,b1),
	HX_("directives",44,dd,1a,28),
	HX_("directiveCount",00,ce,08,99),
	HX_("addDirective",ee,89,94,0f),
	HX_("match",45,49,23,03),
	HX_("processDirective",e0,5f,ae,c7),
	HX_("processComposite",98,07,13,ca),
	::String(null()) };

::hx::Class RuleElement_obj::__mClass;

static ::String RuleElement_obj_sStaticFields[] = {
	HX_("ruleMatch",a9,2e,f9,96),
	::String(null())
};

void RuleElement_obj::__register()
{
	RuleElement_obj _hx_dummy;
	RuleElement_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.elements.RuleElement",43,f0,0e,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RuleElement_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(RuleElement_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RuleElement_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RuleElement_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RuleElement_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RuleElement_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements
