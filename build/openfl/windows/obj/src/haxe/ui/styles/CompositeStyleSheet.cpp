#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_CompositeStyleSheet
#include <haxe/ui/styles/CompositeStyleSheet.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleBorderType
#include <haxe/ui/styles/StyleBorderType.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleSheet
#include <haxe/ui/styles/StyleSheet.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_AnimationOptions
#include <haxe/ui/styles/animation/AnimationOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrame
#include <haxe/ui/styles/elements/AnimationKeyFrame.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrames
#include <haxe/ui/styles/elements/AnimationKeyFrames.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_RuleElement
#include <haxe/ui/styles/elements/RuleElement.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_98344b67a77a9780_9_new,"haxe.ui.styles.CompositeStyleSheet","new",0x14f9aa2d,"haxe.ui.styles.CompositeStyleSheet.new","haxe/ui/styles/CompositeStyleSheet.hx",9,0x36722804)
HX_LOCAL_STACK_FRAME(_hx_pos_98344b67a77a9780_17_get_animations,"haxe.ui.styles.CompositeStyleSheet","get_animations",0xf6c34c8b,"haxe.ui.styles.CompositeStyleSheet.get_animations","haxe/ui/styles/CompositeStyleSheet.hx",17,0x36722804)
HX_LOCAL_STACK_FRAME(_hx_pos_98344b67a77a9780_34_findAnimation,"haxe.ui.styles.CompositeStyleSheet","findAnimation",0x1bd1ab98,"haxe.ui.styles.CompositeStyleSheet.findAnimation","haxe/ui/styles/CompositeStyleSheet.hx",34,0x36722804)
HX_LOCAL_STACK_FRAME(_hx_pos_98344b67a77a9780_45_get_hasMediaQueries,"haxe.ui.styles.CompositeStyleSheet","get_hasMediaQueries",0x730ad640,"haxe.ui.styles.CompositeStyleSheet.get_hasMediaQueries","haxe/ui/styles/CompositeStyleSheet.hx",45,0x36722804)
HX_LOCAL_STACK_FRAME(_hx_pos_98344b67a77a9780_54_getAnimation,"haxe.ui.styles.CompositeStyleSheet","getAnimation",0x24849021,"haxe.ui.styles.CompositeStyleSheet.getAnimation","haxe/ui/styles/CompositeStyleSheet.hx",54,0x36722804)
HX_LOCAL_STACK_FRAME(_hx_pos_98344b67a77a9780_64_addAnimation,"haxe.ui.styles.CompositeStyleSheet","addAnimation",0x14821536,"haxe.ui.styles.CompositeStyleSheet.addAnimation","haxe/ui/styles/CompositeStyleSheet.hx",64,0x36722804)
HX_LOCAL_STACK_FRAME(_hx_pos_98344b67a77a9780_68_addStyleSheet,"haxe.ui.styles.CompositeStyleSheet","addStyleSheet",0x564a813c,"haxe.ui.styles.CompositeStyleSheet.addStyleSheet","haxe/ui/styles/CompositeStyleSheet.hx",68,0x36722804)
HX_LOCAL_STACK_FRAME(_hx_pos_98344b67a77a9780_72_removeStyleSheet,"haxe.ui.styles.CompositeStyleSheet","removeStyleSheet",0xae71a325,"haxe.ui.styles.CompositeStyleSheet.removeStyleSheet","haxe/ui/styles/CompositeStyleSheet.hx",72,0x36722804)
HX_LOCAL_STACK_FRAME(_hx_pos_98344b67a77a9780_75_parse,"haxe.ui.styles.CompositeStyleSheet","parse",0xaa7f3740,"haxe.ui.styles.CompositeStyleSheet.parse","haxe/ui/styles/CompositeStyleSheet.hx",75,0x36722804)
HX_LOCAL_STACK_FRAME(_hx_pos_98344b67a77a9780_91_findStyleSheet,"haxe.ui.styles.CompositeStyleSheet","findStyleSheet",0xb49e809a,"haxe.ui.styles.CompositeStyleSheet.findStyleSheet","haxe/ui/styles/CompositeStyleSheet.hx",91,0x36722804)
HX_LOCAL_STACK_FRAME(_hx_pos_98344b67a77a9780_101_findRule,"haxe.ui.styles.CompositeStyleSheet","findRule",0xfbf804e8,"haxe.ui.styles.CompositeStyleSheet.findRule","haxe/ui/styles/CompositeStyleSheet.hx",101,0x36722804)
HX_LOCAL_STACK_FRAME(_hx_pos_98344b67a77a9780_111_findMatchingRules,"haxe.ui.styles.CompositeStyleSheet","findMatchingRules",0xf24e008e,"haxe.ui.styles.CompositeStyleSheet.findMatchingRules","haxe/ui/styles/CompositeStyleSheet.hx",111,0x36722804)
HX_LOCAL_STACK_FRAME(_hx_pos_98344b67a77a9780_119_getAllRules,"haxe.ui.styles.CompositeStyleSheet","getAllRules",0x5f25d499,"haxe.ui.styles.CompositeStyleSheet.getAllRules","haxe/ui/styles/CompositeStyleSheet.hx",119,0x36722804)
HX_LOCAL_STACK_FRAME(_hx_pos_98344b67a77a9780_127_buildStyleFor,"haxe.ui.styles.CompositeStyleSheet","buildStyleFor",0x478bdfb3,"haxe.ui.styles.CompositeStyleSheet.buildStyleFor","haxe/ui/styles/CompositeStyleSheet.hx",127,0x36722804)
HX_LOCAL_STACK_FRAME(_hx_pos_98344b67a77a9780_137_clear,"haxe.ui.styles.CompositeStyleSheet","clear",0x3585189a,"haxe.ui.styles.CompositeStyleSheet.clear","haxe/ui/styles/CompositeStyleSheet.hx",137,0x36722804)
namespace haxe{
namespace ui{
namespace styles{

void CompositeStyleSheet_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_98344b67a77a9780_9_new)
HXLINE(  15)		this->_animations = null();
HXLINE(  10)		this->_styleSheets = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic CompositeStyleSheet_obj::__CreateEmpty() { return new CompositeStyleSheet_obj; }

void *CompositeStyleSheet_obj::_hx_vtable = 0;

Dynamic CompositeStyleSheet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CompositeStyleSheet_obj > _hx_result = new CompositeStyleSheet_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CompositeStyleSheet_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x00325c75;
}

 ::haxe::ds::StringMap CompositeStyleSheet_obj::get_animations(){
            	HX_GC_STACKFRAME(&_hx_pos_98344b67a77a9780_17_get_animations)
HXLINE(  18)		if (::hx::IsNotNull( this->_animations )) {
HXLINE(  19)			return this->_animations;
            		}
HXLINE(  22)		this->_animations =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  24)		{
HXLINE(  24)			int _g = 0;
HXDLIN(  24)			::Array< ::Dynamic> _g1 = this->_styleSheets;
HXDLIN(  24)			while((_g < _g1->length)){
HXLINE(  24)				 ::haxe::ui::styles::StyleSheet s = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::StyleSheet >();
HXDLIN(  24)				_g = (_g + 1);
HXLINE(  25)				{
HXLINE(  25)					 ::Dynamic key = s->get_animations()->keys();
HXDLIN(  25)					while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  25)						::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  26)						 ::haxe::ui::styles::elements::AnimationKeyFrames a = ( ( ::haxe::ui::styles::elements::AnimationKeyFrames)(s->get_animations()->get(key1)) );
HXLINE(  27)						this->_animations->set(key1,a);
            					}
            				}
            			}
            		}
HXLINE(  31)		return this->_animations;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeStyleSheet_obj,get_animations,return )

 ::haxe::ui::styles::elements::AnimationKeyFrames CompositeStyleSheet_obj::findAnimation(::String id){
            	HX_STACKFRAME(&_hx_pos_98344b67a77a9780_34_findAnimation)
HXLINE(  35)		{
HXLINE(  35)			 ::Dynamic a = this->get_animations()->iterator();
HXDLIN(  35)			while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  35)				 ::haxe::ui::styles::elements::AnimationKeyFrames a1 = ( ( ::haxe::ui::styles::elements::AnimationKeyFrames)(a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  36)				if ((a1->id == id)) {
HXLINE(  37)					return a1;
            				}
            			}
            		}
HXLINE(  41)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeStyleSheet_obj,findAnimation,return )

bool CompositeStyleSheet_obj::get_hasMediaQueries(){
            	HX_STACKFRAME(&_hx_pos_98344b67a77a9780_45_get_hasMediaQueries)
HXLINE(  46)		{
HXLINE(  46)			int _g = 0;
HXDLIN(  46)			::Array< ::Dynamic> _g1 = this->_styleSheets;
HXDLIN(  46)			while((_g < _g1->length)){
HXLINE(  46)				 ::haxe::ui::styles::StyleSheet styleSheet = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::StyleSheet >();
HXDLIN(  46)				_g = (_g + 1);
HXLINE(  47)				if ((styleSheet->get_hasMediaQueries() == true)) {
HXLINE(  48)					return true;
            				}
            			}
            		}
HXLINE(  51)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeStyleSheet_obj,get_hasMediaQueries,return )

 ::haxe::ui::styles::elements::AnimationKeyFrames CompositeStyleSheet_obj::getAnimation(::String id,::hx::Null< bool >  __o_create){
            		bool create = __o_create.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_98344b67a77a9780_54_getAnimation)
HXLINE(  55)		 ::haxe::ui::styles::elements::AnimationKeyFrames a = this->findAnimation(id);
HXLINE(  56)		if (::hx::IsNull( a )) {
HXLINE(  57)			a =  ::haxe::ui::styles::elements::AnimationKeyFrames_obj::__alloc( HX_CTX ,id,::Array_obj< ::Dynamic>::__new(0));
HXLINE(  58)			this->addAnimation(a);
            		}
HXLINE(  60)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompositeStyleSheet_obj,getAnimation,return )

void CompositeStyleSheet_obj::addAnimation( ::haxe::ui::styles::elements::AnimationKeyFrames animation){
            	HX_STACKFRAME(&_hx_pos_98344b67a77a9780_64_addAnimation)
HXDLIN(  64)		this->_styleSheets->__get(0).StaticCast<  ::haxe::ui::styles::StyleSheet >()->addAnimation(animation);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeStyleSheet_obj,addAnimation,(void))

void CompositeStyleSheet_obj::addStyleSheet( ::haxe::ui::styles::StyleSheet styleSheet){
            	HX_STACKFRAME(&_hx_pos_98344b67a77a9780_68_addStyleSheet)
HXDLIN(  68)		this->_styleSheets->push(styleSheet);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeStyleSheet_obj,addStyleSheet,(void))

void CompositeStyleSheet_obj::removeStyleSheet( ::haxe::ui::styles::StyleSheet styleSheet){
            	HX_STACKFRAME(&_hx_pos_98344b67a77a9780_72_removeStyleSheet)
HXDLIN(  72)		this->_styleSheets->remove(styleSheet);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeStyleSheet_obj,removeStyleSheet,(void))

void CompositeStyleSheet_obj::parse(::String css,::String __o_styleSheetName,::hx::Null< bool >  __o_invalidateAll){
            		::String styleSheetName = __o_styleSheetName;
            		if (::hx::IsNull(__o_styleSheetName)) styleSheetName = HX_("default",c1,d8,c3,9b);
            		bool invalidateAll = __o_invalidateAll.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_98344b67a77a9780_75_parse)
HXLINE(  76)		 ::haxe::ui::styles::StyleSheet s = this->findStyleSheet(styleSheetName);
HXLINE(  77)		if (::hx::IsNull( s )) {
HXLINE(  78)			s =  ::haxe::ui::styles::StyleSheet_obj::__alloc( HX_CTX );
HXLINE(  79)			s->name = styleSheetName;
HXLINE(  80)			this->_styleSheets->push(s);
            		}
HXLINE(  83)		s->parse(css);
HXLINE(  84)		this->_animations = null();
HXLINE(  86)		if ((invalidateAll == true)) {
HXLINE(  87)			::haxe::ui::core::Screen_obj::get_instance()->invalidateAll(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(CompositeStyleSheet_obj,parse,(void))

 ::haxe::ui::styles::StyleSheet CompositeStyleSheet_obj::findStyleSheet(::String styleSheetName){
            	HX_STACKFRAME(&_hx_pos_98344b67a77a9780_91_findStyleSheet)
HXLINE(  92)		{
HXLINE(  92)			int _g = 0;
HXDLIN(  92)			::Array< ::Dynamic> _g1 = this->_styleSheets;
HXDLIN(  92)			while((_g < _g1->length)){
HXLINE(  92)				 ::haxe::ui::styles::StyleSheet s = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::StyleSheet >();
HXDLIN(  92)				_g = (_g + 1);
HXLINE(  93)				if ((s->name == styleSheetName)) {
HXLINE(  94)					return s;
            				}
            			}
            		}
HXLINE(  98)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeStyleSheet_obj,findStyleSheet,return )

 ::haxe::ui::styles::elements::RuleElement CompositeStyleSheet_obj::findRule(::String selector){
            	HX_STACKFRAME(&_hx_pos_98344b67a77a9780_101_findRule)
HXLINE( 102)		{
HXLINE( 102)			int _g = 0;
HXDLIN( 102)			::Array< ::Dynamic> _g1 = this->_styleSheets;
HXDLIN( 102)			while((_g < _g1->length)){
HXLINE( 102)				 ::haxe::ui::styles::StyleSheet s = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::StyleSheet >();
HXDLIN( 102)				_g = (_g + 1);
HXLINE( 103)				 ::haxe::ui::styles::elements::RuleElement el = s->findRule(selector);
HXLINE( 104)				if (::hx::IsNotNull( el )) {
HXLINE( 105)					return el;
            				}
            			}
            		}
HXLINE( 108)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeStyleSheet_obj,findRule,return )

::Array< ::Dynamic> CompositeStyleSheet_obj::findMatchingRules(::String selector){
            	HX_STACKFRAME(&_hx_pos_98344b67a77a9780_111_findMatchingRules)
HXLINE( 112)		::Array< ::Dynamic> m = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 113)		{
HXLINE( 113)			int _g = 0;
HXDLIN( 113)			::Array< ::Dynamic> _g1 = this->_styleSheets;
HXDLIN( 113)			while((_g < _g1->length)){
HXLINE( 113)				 ::haxe::ui::styles::StyleSheet s = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::StyleSheet >();
HXDLIN( 113)				_g = (_g + 1);
HXLINE( 114)				m = m->concat(s->findMatchingRules(selector));
            			}
            		}
HXLINE( 116)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeStyleSheet_obj,findMatchingRules,return )

::Array< ::Dynamic> CompositeStyleSheet_obj::getAllRules(){
            	HX_STACKFRAME(&_hx_pos_98344b67a77a9780_119_getAllRules)
HXLINE( 120)		::Array< ::Dynamic> r = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 121)		{
HXLINE( 121)			int _g = 0;
HXDLIN( 121)			::Array< ::Dynamic> _g1 = this->_styleSheets;
HXDLIN( 121)			while((_g < _g1->length)){
HXLINE( 121)				 ::haxe::ui::styles::StyleSheet s = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::StyleSheet >();
HXDLIN( 121)				_g = (_g + 1);
HXLINE( 122)				r = r->concat(s->get_rules());
            			}
            		}
HXLINE( 124)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeStyleSheet_obj,getAllRules,return )

 ::haxe::ui::styles::Style CompositeStyleSheet_obj::buildStyleFor( ::haxe::ui::core::Component c){
            	HX_GC_STACKFRAME(&_hx_pos_98344b67a77a9780_127_buildStyleFor)
HXLINE( 128)		 ::haxe::ui::styles::Style style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 130)		{
HXLINE( 130)			int _g = 0;
HXDLIN( 130)			::Array< ::Dynamic> _g1 = this->_styleSheets;
HXDLIN( 130)			while((_g < _g1->length)){
HXLINE( 130)				 ::haxe::ui::styles::StyleSheet s = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::StyleSheet >();
HXDLIN( 130)				_g = (_g + 1);
HXLINE( 131)				style = s->buildStyleFor(c,style);
            			}
            		}
HXLINE( 134)		return style;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeStyleSheet_obj,buildStyleFor,return )

void CompositeStyleSheet_obj::clear(::String styleSheetName){
            	HX_STACKFRAME(&_hx_pos_98344b67a77a9780_137_clear)
HXLINE( 138)		 ::haxe::ui::styles::StyleSheet s = this->findStyleSheet(styleSheetName);
HXLINE( 139)		if (::hx::IsNotNull( s )) {
HXLINE( 140)			s->clear();
HXLINE( 141)			this->_animations = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeStyleSheet_obj,clear,(void))


::hx::ObjectPtr< CompositeStyleSheet_obj > CompositeStyleSheet_obj::__new() {
	::hx::ObjectPtr< CompositeStyleSheet_obj > __this = new CompositeStyleSheet_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CompositeStyleSheet_obj > CompositeStyleSheet_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CompositeStyleSheet_obj *__this = (CompositeStyleSheet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CompositeStyleSheet_obj), true, "haxe.ui.styles.CompositeStyleSheet"));
	*(void **)__this = CompositeStyleSheet_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CompositeStyleSheet_obj::CompositeStyleSheet_obj()
{
}

void CompositeStyleSheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompositeStyleSheet);
	HX_MARK_MEMBER_NAME(_styleSheets,"_styleSheets");
	HX_MARK_MEMBER_NAME(_animations,"_animations");
	HX_MARK_MEMBER_NAME(hasMediaQueries,"hasMediaQueries");
	HX_MARK_END_CLASS();
}

void CompositeStyleSheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_styleSheets,"_styleSheets");
	HX_VISIT_MEMBER_NAME(_animations,"_animations");
	HX_VISIT_MEMBER_NAME(hasMediaQueries,"hasMediaQueries");
}

::hx::Val CompositeStyleSheet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findRule") ) { return ::hx::Val( findRule_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animations() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { return ::hx::Val( _animations ); }
		if (HX_FIELD_EQ(inName,"getAllRules") ) { return ::hx::Val( getAllRules_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_styleSheets") ) { return ::hx::Val( _styleSheets ); }
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return ::hx::Val( getAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return ::hx::Val( addAnimation_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findAnimation") ) { return ::hx::Val( findAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"addStyleSheet") ) { return ::hx::Val( addStyleSheet_dyn() ); }
		if (HX_FIELD_EQ(inName,"buildStyleFor") ) { return ::hx::Val( buildStyleFor_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_animations") ) { return ::hx::Val( get_animations_dyn() ); }
		if (HX_FIELD_EQ(inName,"findStyleSheet") ) { return ::hx::Val( findStyleSheet_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasMediaQueries") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_hasMediaQueries() : hasMediaQueries ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeStyleSheet") ) { return ::hx::Val( removeStyleSheet_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"findMatchingRules") ) { return ::hx::Val( findMatchingRules_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_hasMediaQueries") ) { return ::hx::Val( get_hasMediaQueries_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CompositeStyleSheet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { _animations=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_styleSheets") ) { _styleSheets=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasMediaQueries") ) { hasMediaQueries=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompositeStyleSheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_styleSheets",06,ab,67,fd));
	outFields->push(HX_("_animations",0e,02,a6,55));
	outFields->push(HX_("animations",ef,34,1c,83));
	outFields->push(HX_("hasMediaQueries",5c,03,19,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CompositeStyleSheet_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CompositeStyleSheet_obj,_styleSheets),HX_("_styleSheets",06,ab,67,fd)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(CompositeStyleSheet_obj,_animations),HX_("_animations",0e,02,a6,55)},
	{::hx::fsBool,(int)offsetof(CompositeStyleSheet_obj,hasMediaQueries),HX_("hasMediaQueries",5c,03,19,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CompositeStyleSheet_obj_sStaticStorageInfo = 0;
#endif

static ::String CompositeStyleSheet_obj_sMemberFields[] = {
	HX_("_styleSheets",06,ab,67,fd),
	HX_("_animations",0e,02,a6,55),
	HX_("get_animations",38,bd,11,f9),
	HX_("findAnimation",8b,af,e6,2b),
	HX_("hasMediaQueries",5c,03,19,ef),
	HX_("get_hasMediaQueries",73,d2,23,7a),
	HX_("getAnimation",8e,8b,8b,5a),
	HX_("addAnimation",a3,10,89,4a),
	HX_("addStyleSheet",2f,85,5f,66),
	HX_("removeStyleSheet",12,59,bf,b5),
	HX_("parse",33,90,55,bd),
	HX_("findStyleSheet",47,f1,ec,b6),
	HX_("findRule",d5,85,47,9e),
	HX_("findMatchingRules",01,7a,ff,4e),
	HX_("getAllRules",cc,e5,2d,10),
	HX_("buildStyleFor",a6,e3,a0,57),
	HX_("clear",8d,71,5b,48),
	::String(null()) };

::hx::Class CompositeStyleSheet_obj::__mClass;

void CompositeStyleSheet_obj::__register()
{
	CompositeStyleSheet_obj _hx_dummy;
	CompositeStyleSheet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.CompositeStyleSheet",bb,0f,9c,49);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CompositeStyleSheet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CompositeStyleSheet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompositeStyleSheet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompositeStyleSheet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
