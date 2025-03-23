#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Label_Builder
#include <haxe/ui/components/_Label/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Label_HtmlTextBehaviour
#include <haxe/ui/components/_Label/HtmlTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Label_LabelLayout
#include <haxe/ui/components/_Label/LabelLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Label_SelectableBehaviour
#include <haxe/ui/components/_Label/SelectableBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Label_TextBehaviour
#include <haxe/ui/components/_Label/TextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleBorderType
#include <haxe/ui/styles/StyleBorderType.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_AnimationOptions
#include <haxe/ui/styles/animation/AnimationOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_164a75306b06a4aa_15_new,"haxe.ui.components.Label","new",0x9c253780,"haxe.ui.components.Label.new","haxe/ui/components/Label.hx",15,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_204_registerComposite,"haxe.ui.components.Label","registerComposite",0x22cb8444,"haxe.ui.components.Label.registerComposite","haxe/ui/macros/Macros.hx",204,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_550_registerBehaviours,"haxe.ui.components.Label","registerBehaviours",0xd24744b9,"haxe.ui.components.Label.registerBehaviours","haxe/ui/macros/Macros.hx",550,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_597_get_htmlText,"haxe.ui.components.Label","get_htmlText",0xa6ea88a1,"haxe.ui.components.Label.get_htmlText","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_630_set_htmlText,"haxe.ui.components.Label","set_htmlText",0xbbe3ac15,"haxe.ui.components.Label.set_htmlText","haxe/ui/macros/Macros.hx",630,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_597_get_selectable,"haxe.ui.components.Label","get_selectable",0x3af7ebbf,"haxe.ui.components.Label.get_selectable","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_648_set_selectable,"haxe.ui.components.Label","set_selectable",0x5b17d433,"haxe.ui.components.Label.set_selectable","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_724_get_value,"haxe.ui.components.Label","get_value",0x99695ae8,"haxe.ui.components.Label.get_value","haxe/ui/macros/Macros.hx",724,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_728_set_value,"haxe.ui.components.Label","set_value",0x7cba46f4,"haxe.ui.components.Label.set_value","haxe/ui/macros/Macros.hx",728,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_278_get_textAlign,"haxe.ui.components.Label","get_textAlign",0xffe849cf,"haxe.ui.components.Label.get_textAlign","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_292_set_textAlign,"haxe.ui.components.Label","set_textAlign",0x44ee2bdb,"haxe.ui.components.Label.set_textAlign","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_278_get_wordWrap,"haxe.ui.components.Label","get_wordWrap",0x978d7d9d,"haxe.ui.components.Label.get_wordWrap","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_292_set_wordWrap,"haxe.ui.components.Label","set_wordWrap",0xac86a111,"haxe.ui.components.Label.set_wordWrap","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_4cad304492000fff_700_cloneComponent,"haxe.ui.components.Label","cloneComponent",0x272e9680,"haxe.ui.components.Label.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_abef53e53bf6fa76_521_self,"haxe.ui.components.Label","self",0x07b9606c,"haxe.ui.components.Label.self","haxe/ui/macros/Macros.hx",521,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Label_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_164a75306b06a4aa_15_new)
HXDLIN(  15)		super::__construct();
            	}

Dynamic Label_obj::__CreateEmpty() { return new Label_obj; }

void *Label_obj::_hx_vtable = 0;

Dynamic Label_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Label_obj > _hx_result = new Label_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Label_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x0f2dd418;
			}
		} else {
			return inClassId==(int)0x13d76ae7 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x599bcb44) {
				return inClassId==(int)0x4af7dd8e || inClassId==(int)0x599bcb44;
			} else {
				return inClassId==(int)0x6b353933;
			}
		} else {
			return inClassId==(int)0x72c347e4;
		}
	}
}

void Label_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_204_registerComposite)
HXLINE( 205)		this->super::registerComposite();
HXLINE( 217)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::_Label::Builder >();
HXLINE( 221)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::_Label::LabelLayout >();
            	}


void Label_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_550_registerBehaviours)
HXLINE( 551)		this->super::registerBehaviours();
HXLINE( 667)		this->behaviours->_hx_register(HX_("text",ad,cc,f9,4c),::hx::ClassOf< ::haxe::ui::components::_Label::TextBehaviour >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("htmlText",b8,1f,38,10),::hx::ClassOf< ::haxe::ui::components::_Label::HtmlTextBehaviour >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("selectable",96,b6,2a,c4),::hx::ClassOf< ::haxe::ui::components::_Label::SelectableBehaviour >(),null());
            	}


::String Label_obj::get_htmlText(){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_597_get_htmlText)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("htmlText",b8,1f,38,10)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_htmlText,return )

::String Label_obj::set_htmlText(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_abef53e53bf6fa76_630_set_htmlText)
HXLINE( 631)		{
HXLINE( 631)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 631)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 632)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 633)					bool _hx_tmp;
HXDLIN( 633)					bool _hx_tmp1;
HXDLIN( 633)					if (::hx::IsNotNull( value )) {
HXLINE( 633)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 633)						_hx_tmp1 = false;
            					}
HXDLIN( 633)					if (_hx_tmp1) {
HXLINE( 633)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 633)						_hx_tmp = false;
            					}
HXDLIN( 633)					if (_hx_tmp) {
HXLINE( 634)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("htmlText",b8,1f,38,10),null(),value,null());
HXLINE( 635)						return value;
            					}
            				}
            			}
            		}
HXLINE( 639)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 640)			this->behaviours =  ::haxe::ui::behaviours::Behaviours_obj::__alloc( HX_CTX ,( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ));
HXLINE( 641)			this->registerBehaviours();
            		}
HXLINE( 643)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 643)		_hx_tmp->set(HX_("htmlText",b8,1f,38,10),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 644)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("htmlText",b8,1f,38,10)),null());
HXLINE( 645)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_htmlText,return )

bool Label_obj::get_selectable(){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_597_get_selectable)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return false;
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("selectable",96,b6,2a,c4)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_selectable,return )

bool Label_obj::set_selectable(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_abef53e53bf6fa76_648_set_selectable)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("selectable",96,b6,2a,c4),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("selectable",96,b6,2a,c4)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_selectable,return )

 ::Dynamic Label_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_724_get_value)
HXDLIN( 724)		return this->get_text();
            	}


 ::Dynamic Label_obj::set_value( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_728_set_value)
HXLINE( 729)		{
HXLINE( 729)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 729)			switch((int)(_g->_hx_getIndex())){
            				case (int)1: case (int)2: case (int)3: {
HXLINE( 734)					this->set_text(::Std_obj::string(value));
            				}
            				break;
            				case (int)7: {
HXLINE( 730)					if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::haxe::ui::util::VariantType >() )) {
HXLINE( 731)						 ::haxe::ui::util::VariantType v = value;
HXLINE( 732)						this->set_text(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(v));
            					}
            					else {
HXLINE( 736)						this->set_text(( (::String)(value) ));
            					}
            				}
            				break;
            				default:{
HXLINE( 736)					this->set_text(( (::String)(value) ));
            				}
            			}
            		}
HXLINE( 739)		return value;
            	}


::String Label_obj::get_textAlign(){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_278_get_textAlign)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->textAlign )) {
HXLINE( 280)			return this->get_customStyle()->textAlign;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->textAlign );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->textAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_textAlign,return )

::String Label_obj::set_textAlign(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_abef53e53bf6fa76_292_set_textAlign)
HXLINE( 293)		if ((this->get_customStyle()->textAlign == value)) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->textAlign = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->textAlign = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 326)		{
HXLINE( 326)			bool _hx_tmp;
HXDLIN( 326)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 326)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 326)				_hx_tmp = true;
            			}
HXDLIN( 326)			if (!(_hx_tmp)) {
HXLINE( 326)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_textAlign,return )

 ::Dynamic Label_obj::get_wordWrap(){
            	HX_STACKFRAME(&_hx_pos_abef53e53bf6fa76_278_get_wordWrap)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->wordWrap )) {
HXLINE( 280)			return this->get_customStyle()->wordWrap;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->wordWrap );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->wordWrap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_wordWrap,return )

 ::Dynamic Label_obj::set_wordWrap( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_abef53e53bf6fa76_292_set_wordWrap)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->wordWrap,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->wordWrap = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->wordWrap = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 326)		{
HXLINE( 326)			bool _hx_tmp;
HXDLIN( 326)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 326)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 326)				_hx_tmp = true;
            			}
HXDLIN( 326)			if (!(_hx_tmp)) {
HXLINE( 326)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_wordWrap,return )

 ::haxe::ui::backend::ComponentBase Label_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_4cad304492000fff_700_cloneComponent)
HXLINE( 469)		 ::haxe::ui::components::Label c = ( ( ::haxe::ui::components::Label)(this->super::cloneComponent()) );
HXLINE( 478)		if (::hx::IsNotNull( this->get_htmlText() )) {
HXLINE( 478)			c->set_htmlText(this->get_htmlText());
            		}
HXLINE( 480)		c->set_selectable(this->get_selectable());
HXLINE( 484)		{
HXLINE( 485)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 485)			if (::hx::IsNull( this->_children )) {
HXLINE( 485)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 485)				_hx_tmp = this->_children;
            			}
HXDLIN( 485)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 485)			if (::hx::IsNull( c->_children )) {
HXLINE( 485)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 485)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 485)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 486)				int _g = 0;
HXDLIN( 486)				::Array< ::Dynamic> _g1;
HXDLIN( 486)				if (::hx::IsNull( this->_children )) {
HXLINE( 486)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 486)					_g1 = this->_children;
            				}
HXDLIN( 486)				while((_g < _g1->length)){
HXLINE( 486)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 486)					_g = (_g + 1);
HXLINE( 487)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 491)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 493)		return c;
            	}


 ::haxe::ui::backend::ComponentBase Label_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_abef53e53bf6fa76_521_self)
HXDLIN( 521)		return  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Label_obj > Label_obj::__new() {
	::hx::ObjectPtr< Label_obj > __this = new Label_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Label_obj > Label_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Label_obj *__this = (Label_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Label_obj), true, "haxe.ui.components.Label"));
	*(void **)__this = Label_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Label_obj::Label_obj()
{
}

::hx::Val Label_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_htmlText() ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_wordWrap() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textAlign() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectable() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return ::hx::Val( get_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return ::hx::Val( set_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return ::hx::Val( get_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return ::hx::Val( set_wordWrap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_textAlign") ) { return ::hx::Val( get_textAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textAlign") ) { return ::hx::Val( set_textAlign_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return ::hx::Val( get_selectable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return ::hx::Val( set_selectable_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Label_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_htmlText(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wordWrap(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textAlign(inValue.Cast< ::String >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectable(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Label_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("htmlText",b8,1f,38,10));
	outFields->push(HX_("selectable",96,b6,2a,c4));
	outFields->push(HX_("textAlign",d8,e6,7e,ba));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Label_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Label_obj_sStaticStorageInfo = 0;
#endif

static ::String Label_obj_sMemberFields[] = {
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_htmlText",c1,d3,51,c5),
	HX_("set_htmlText",35,f7,4a,da),
	HX_("get_selectable",df,3e,20,3a),
	HX_("set_selectable",53,27,40,5a),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("get_textAlign",af,ba,e2,7b),
	HX_("set_textAlign",bb,9c,e8,c0),
	HX_("get_wordWrap",bd,c8,f4,b5),
	HX_("set_wordWrap",31,ec,ed,ca),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Label_obj::__mClass;

void Label_obj::__register()
{
	Label_obj _hx_dummy;
	Label_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Label",8e,b7,db,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Label_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Label_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Label_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Label_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
