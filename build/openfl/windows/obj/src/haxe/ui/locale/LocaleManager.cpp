#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <haxe/ui/backend/AssetsImpl.h>
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
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#include <haxe/ui/backend/PlatformImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_Platform
#include <haxe/ui/core/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleEvent
#include <haxe/ui/locale/LocaleEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleString
#include <haxe/ui/locale/LocaleString.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_locale_LocaleParser
#include <haxe/ui/parsers/locale/LocaleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_util_EventMap
#include <haxe/ui/util/EventMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_ExpressionUtil
#include <haxe/ui/util/ExpressionUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_MathUtil
#include <haxe/ui/util/MathUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_SimpleExpressionEvaluator
#include <haxe/ui/util/SimpleExpressionEvaluator.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c866bb869b01b7dd_22_new,"haxe.ui.locale.LocaleManager","new",0x7778ab83,"haxe.ui.locale.LocaleManager.new","haxe/ui/locale/LocaleManager.hx",22,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_41_init,"haxe.ui.locale.LocaleManager","init",0x0ed61e8d,"haxe.ui.locale.LocaleManager.init","haxe/ui/locale/LocaleManager.hx",41,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_55_registerComponent,"haxe.ui.locale.LocaleManager","registerComponent",0xc963b83d,"haxe.ui.locale.LocaleManager.registerComponent","haxe/ui/locale/LocaleManager.hx",55,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_85_unregisterComponent,"haxe.ui.locale.LocaleManager","unregisterComponent",0xac3a3c84,"haxe.ui.locale.LocaleManager.unregisterComponent","haxe/ui/locale/LocaleManager.hx",85,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_88_findBindingExpr,"haxe.ui.locale.LocaleManager","findBindingExpr",0x47c6ef04,"haxe.ui.locale.LocaleManager.findBindingExpr","haxe/ui/locale/LocaleManager.hx",88,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_101_cloneForComponent,"haxe.ui.locale.LocaleManager","cloneForComponent",0x6c6ec9d4,"haxe.ui.locale.LocaleManager.cloneForComponent","haxe/ui/locale/LocaleManager.hx",101,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_113_onComponentReady,"haxe.ui.locale.LocaleManager","onComponentReady",0x08780ae2,"haxe.ui.locale.LocaleManager.onComponentReady","haxe/ui/locale/LocaleManager.hx",113,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_118_refreshFor,"haxe.ui.locale.LocaleManager","refreshFor",0x76061f2b,"haxe.ui.locale.LocaleManager.refreshFor","haxe/ui/locale/LocaleManager.hx",118,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_156_refreshAll,"haxe.ui.locale.LocaleManager","refreshAll",0x76025143,"haxe.ui.locale.LocaleManager.refreshAll","haxe/ui/locale/LocaleManager.hx",156,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_167_get_language,"haxe.ui.locale.LocaleManager","get_language",0xb2415cde,"haxe.ui.locale.LocaleManager.get_language","haxe/ui/locale/LocaleManager.hx",167,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_169_set_language,"haxe.ui.locale.LocaleManager","set_language",0xc73a8052,"haxe.ui.locale.LocaleManager.set_language","haxe/ui/locale/LocaleManager.hx",169,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_184_applyLocale,"haxe.ui.locale.LocaleManager","applyLocale",0x2cb36acb,"haxe.ui.locale.LocaleManager.applyLocale","haxe/ui/locale/LocaleManager.hx",184,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_196_hasLocale,"haxe.ui.locale.LocaleManager","hasLocale",0x90d27ef7,"haxe.ui.locale.LocaleManager.hasLocale","haxe/ui/locale/LocaleManager.hx",196,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_206_registerEvent,"haxe.ui.locale.LocaleManager","registerEvent",0x9b7acf9a,"haxe.ui.locale.LocaleManager.registerEvent","haxe/ui/locale/LocaleManager.hx",206,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_213_hasEvent,"haxe.ui.locale.LocaleManager","hasEvent",0x4efbf85d,"haxe.ui.locale.LocaleManager.hasEvent","haxe/ui/locale/LocaleManager.hx",213,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_222_unregisterEvent,"haxe.ui.locale.LocaleManager","unregisterEvent",0xfa79e461,"haxe.ui.locale.LocaleManager.unregisterEvent","haxe/ui/locale/LocaleManager.hx",222,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_227_parseResource,"haxe.ui.locale.LocaleManager","parseResource",0x881cd904,"haxe.ui.locale.LocaleManager.parseResource","haxe/ui/locale/LocaleManager.hx",227,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_244_addStrings,"haxe.ui.locale.LocaleManager","addStrings",0xcf5fd99e,"haxe.ui.locale.LocaleManager.addStrings","haxe/ui/locale/LocaleManager.hx",244,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_274_getStrings,"haxe.ui.locale.LocaleManager","getStrings",0xb73733c9,"haxe.ui.locale.LocaleManager.getStrings","haxe/ui/locale/LocaleManager.hx",274,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_288_hasString,"haxe.ui.locale.LocaleManager","hasString",0x4843332e,"haxe.ui.locale.LocaleManager.hasString","haxe/ui/locale/LocaleManager.hx",288,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_297_lookupString,"haxe.ui.locale.LocaleManager","lookupString",0x46b07f68,"haxe.ui.locale.LocaleManager.lookupString","haxe/ui/locale/LocaleManager.hx",297,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_301_translateTo,"haxe.ui.locale.LocaleManager","translateTo",0x2198468c,"haxe.ui.locale.LocaleManager.translateTo","haxe/ui/locale/LocaleManager.hx",301,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_358_findRoot,"haxe.ui.locale.LocaleManager","findRoot",0xeb21e0f8,"haxe.ui.locale.LocaleManager.findRoot","haxe/ui/locale/LocaleManager.hx",358,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_25_get_instance,"haxe.ui.locale.LocaleManager","get_instance",0x9210fc1b,"haxe.ui.locale.LocaleManager.get_instance","haxe/ui/locale/LocaleManager.hx",25,0x996fe4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c866bb869b01b7dd_54_boot,"haxe.ui.locale.LocaleManager","boot",0x0a3667af,"haxe.ui.locale.LocaleManager.boot","haxe/ui/locale/LocaleManager.hx",54,0x996fe4ae)
namespace haxe{
namespace ui{
namespace locale{

void LocaleManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_22_new)
HXLINE( 300)		this->_localeStringMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 243)		this->_localeMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 164)		this->_language = HX_("en",69,58,00,00);
HXLINE( 163)		this->_localeSet = false;
HXLINE( 161)		this->autoSetLocale = true;
HXLINE(  36)		this->_eventMap = null();
            	}

Dynamic LocaleManager_obj::__CreateEmpty() { return new LocaleManager_obj; }

void *LocaleManager_obj::_hx_vtable = 0;

Dynamic LocaleManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LocaleManager_obj > _hx_result = new LocaleManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LocaleManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4926143f;
}

void LocaleManager_obj::init(){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_41_init)
HXLINE(  43)		::String autoDetectedLocale = ::haxe::ui::core::Platform_obj::get_instance()->getSystemLocale();
HXLINE(  44)		bool _hx_tmp;
HXDLIN(  44)		bool _hx_tmp1;
HXDLIN(  44)		bool _hx_tmp2;
HXDLIN(  44)		if (!(this->_localeSet)) {
HXLINE(  44)			_hx_tmp2 = this->autoSetLocale;
            		}
            		else {
HXLINE(  44)			_hx_tmp2 = false;
            		}
HXDLIN(  44)		if (_hx_tmp2) {
HXLINE(  44)			_hx_tmp1 = ::hx::IsNotNull( autoDetectedLocale );
            		}
            		else {
HXLINE(  44)			_hx_tmp1 = false;
            		}
HXDLIN(  44)		if (_hx_tmp1) {
HXLINE(  44)			_hx_tmp = this->hasLocale(autoDetectedLocale);
            		}
            		else {
HXLINE(  44)			_hx_tmp = false;
            		}
HXDLIN(  44)		if (_hx_tmp) {
HXLINE(  48)			this->_language = autoDetectedLocale;
HXLINE(  49)			this->applyLocale(this->_language);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LocaleManager_obj,init,(void))

void LocaleManager_obj::registerComponent( ::haxe::ui::core::Component component,::String prop, ::Dynamic callback,::String expr,::hx::Null< bool >  __o_fix){
            		bool fix = __o_fix.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_55_registerComponent)
HXLINE(  56)		bool _hx_tmp;
HXDLIN(  56)		if (::hx::IsNull( callback )) {
HXLINE(  56)			_hx_tmp = ::hx::IsNull( expr );
            		}
            		else {
HXLINE(  56)			_hx_tmp = false;
            		}
HXDLIN(  56)		if (_hx_tmp) {
HXLINE(  57)			return;
            		}
HXLINE(  60)		::String fixedExpr = null();
HXLINE(  61)		if ((fix == true)) {
HXLINE(  62)			if (::hx::IsNotNull( expr )) {
HXLINE(  63)				fixedExpr = ::haxe::ui::util::ExpressionUtil_obj::stringToLanguageExpression(expr,HX_("LocaleManager",d3,bc,32,59));
HXLINE(  64)				if ((::StringTools_obj::endsWith(fixedExpr,HX_(";",3b,00,00,00)) == true)) {
HXLINE(  65)					fixedExpr = fixedExpr.substr(0,(fixedExpr.length - 1));
            				}
            			}
            		}
            		else {
HXLINE(  69)			fixedExpr = expr;
            		}
HXLINE(  72)		 ::haxe::ds::StringMap propMap = ( ( ::haxe::ds::StringMap)(::haxe::ui::locale::LocaleManager_obj::_registeredComponents->get(component)) );
HXLINE(  73)		if (::hx::IsNull( propMap )) {
HXLINE(  74)			propMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  75)			::haxe::ui::locale::LocaleManager_obj::_registeredComponents->set(component,propMap);
            		}
HXLINE(  77)		propMap->set(prop, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("expr",35,fd,1d,43),fixedExpr)
            			->setFixed(1,HX_("callback",c5,99,06,7f),callback)));
HXLINE(  81)		this->refreshFor(component);
            	}


HX_DEFINE_DYNAMIC_FUNC5(LocaleManager_obj,registerComponent,(void))

void LocaleManager_obj::unregisterComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_85_unregisterComponent)
HXDLIN(  85)		::haxe::ui::locale::LocaleManager_obj::_registeredComponents->remove(component);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,unregisterComponent,(void))

::String LocaleManager_obj::findBindingExpr( ::haxe::ui::core::Component component,::String prop){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_88_findBindingExpr)
HXLINE(  89)		 ::haxe::ds::StringMap propMap = ( ( ::haxe::ds::StringMap)(::haxe::ui::locale::LocaleManager_obj::_registeredComponents->get(component)) );
HXLINE(  90)		if (::hx::IsNull( propMap )) {
HXLINE(  91)			return null();
            		}
HXLINE(  94)		 ::Dynamic entry = propMap->get(prop);
HXLINE(  95)		if (::hx::IsNull( entry )) {
HXLINE(  96)			return null();
            		}
HXLINE(  98)		return ( (::String)(entry->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(LocaleManager_obj,findBindingExpr,return )

void LocaleManager_obj::cloneForComponent( ::haxe::ui::core::Component from, ::haxe::ui::core::Component to){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_101_cloneForComponent)
HXLINE( 102)		 ::haxe::ds::StringMap propMap = ( ( ::haxe::ds::StringMap)(::haxe::ui::locale::LocaleManager_obj::_registeredComponents->get(from)) );
HXLINE( 103)		if (::hx::IsNull( propMap )) {
HXLINE( 104)			return;
            		}
HXLINE( 107)		{
HXLINE( 107)			 ::Dynamic prop = propMap->keys();
HXDLIN( 107)			while(( (bool)(prop->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 107)				::String prop1 = ( (::String)(prop->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 108)				 ::Dynamic entry = propMap->get(prop1);
HXLINE( 109)				this->registerComponent(to,prop1,entry->__Field(HX_("callback",c5,99,06,7f),::hx::paccDynamic),( (::String)(entry->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)) ),false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(LocaleManager_obj,cloneForComponent,(void))

void LocaleManager_obj::onComponentReady( ::haxe::ui::events::UIEvent e){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_113_onComponentReady)
HXLINE( 114)		e->target->unregisterEvent(::haxe::ui::events::UIEvent_obj::READY,this->onComponentReady_dyn());
HXLINE( 115)		this->refreshFor(e->target);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,onComponentReady,(void))

void LocaleManager_obj::refreshFor( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_118_refreshFor)
HXLINE( 119)		if ((component->get_isReady() == false)) {
HXLINE( 120)			component->registerEvent(::haxe::ui::events::UIEvent_obj::READY,this->onComponentReady_dyn(),null());
HXLINE( 121)			return;
            		}
HXLINE( 124)		 ::haxe::ds::StringMap propMap = ( ( ::haxe::ds::StringMap)(::haxe::ui::locale::LocaleManager_obj::_registeredComponents->get(component)) );
HXLINE( 125)		if (::hx::IsNull( propMap )) {
HXLINE( 126)			return;
            		}
HXLINE( 129)		 ::Dynamic context =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("LocaleManager",d3,bc,32,59),::hx::ClassOf< ::haxe::ui::locale::LocaleManager >())
            			->setFixed(1,HX_("MathUtil",0a,06,68,71),::hx::ClassOf< ::haxe::ui::util::MathUtil >()));
HXLINE( 134)		 ::haxe::ui::core::Component root = this->findRoot(component);
HXLINE( 135)		{
HXLINE( 135)			int _g = 0;
HXDLIN( 135)			::Array< ::Dynamic> _g1 = root->get_namedComponents();
HXDLIN( 135)			while((_g < _g1->length)){
HXLINE( 135)				 ::haxe::ui::core::Component k = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 135)				_g = (_g + 1);
HXLINE( 136)				if ((k->get_scriptAccess() == false)) {
HXLINE( 137)					continue;
            				}
HXLINE( 139)				::Reflect_obj::setField(context,k->get_id(),k);
            			}
            		}
HXLINE( 143)		{
HXLINE( 143)			 ::Dynamic prop = propMap->keys();
HXDLIN( 143)			while(( (bool)(prop->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 143)				::String prop1 = ( (::String)(prop->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 144)				 ::Dynamic entry = propMap->get(prop1);
HXLINE( 145)				if (::hx::IsNotNull( entry->__Field(HX_("callback",c5,99,06,7f),::hx::paccDynamic) )) {
HXLINE( 146)					 ::Dynamic value = entry->__Field(HX_("callback",c5,99,06,7f),::hx::paccDynamic)();
HXLINE( 147)					::Reflect_obj::setProperty(component,prop1,value);
            				}
            				else {
HXLINE( 148)					if (::hx::IsNotNull( entry->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic) )) {
HXLINE( 149)						 ::Dynamic value = ::haxe::ui::util::SimpleExpressionEvaluator_obj::eval(( (::String)(entry->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)) ),context);
HXLINE( 150)						::Reflect_obj::setProperty(component,prop1,value);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,refreshFor,(void))

void LocaleManager_obj::refreshAll(){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_156_refreshAll)
HXDLIN( 156)		 ::Dynamic c = ::haxe::ui::locale::LocaleManager_obj::_registeredComponents->keys();
HXDLIN( 156)		while(( (bool)(c->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 156)			 ::haxe::ui::core::Component c1 = ( ( ::haxe::ui::core::Component)(c->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 157)			this->refreshFor(c1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LocaleManager_obj,refreshAll,(void))

::String LocaleManager_obj::get_language(){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_167_get_language)
HXDLIN( 167)		return this->_language;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LocaleManager_obj,get_language,return )

::String LocaleManager_obj::set_language(::String value){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_169_set_language)
HXLINE( 170)		if (::hx::IsNull( value )) {
HXLINE( 171)			return value;
            		}
HXLINE( 173)		if ((this->_language == value)) {
HXLINE( 174)			return value;
            		}
HXLINE( 177)		this->_localeSet = true;
HXLINE( 178)		this->_language = value;
HXLINE( 180)		this->applyLocale(this->_language);
HXLINE( 181)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,set_language,return )

void LocaleManager_obj::applyLocale(::String locale){
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_184_applyLocale)
HXLINE( 185)		bool _hx_tmp = ::hx::IsNull( this->getStrings(locale) );
HXLINE( 189)		this->refreshAll();
HXLINE( 190)		if (::hx::IsNotNull( this->_eventMap )) {
HXLINE( 191)			 ::haxe::ui::locale::LocaleEvent event =  ::haxe::ui::locale::LocaleEvent_obj::__alloc( HX_CTX ,HX_("localeChanged",7a,8b,4d,ca));
HXLINE( 192)			this->_eventMap->invoke(HX_("localeChanged",7a,8b,4d,ca),event,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,applyLocale,(void))

bool LocaleManager_obj::hasLocale(::String localeId){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_196_hasLocale)
HXLINE( 197)		localeId = ::StringTools_obj::replace(localeId,HX_("-",2d,00,00,00),HX_("_",5f,00,00,00));
HXLINE( 198)		if (this->_localeMap->exists(localeId)) {
HXLINE( 199)			return true;
            		}
HXLINE( 202)		::Array< ::String > parts = localeId.split(HX_("_",5f,00,00,00));
HXLINE( 203)		return this->_localeMap->exists(parts->__get(0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,hasLocale,return )

void LocaleManager_obj::registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  __o_priority){
            		int priority = __o_priority.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_206_registerEvent)
HXLINE( 207)		if (::hx::IsNull( this->_eventMap )) {
HXLINE( 208)			this->_eventMap =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 210)		this->_eventMap->add(type,listener,priority);
            	}


HX_DEFINE_DYNAMIC_FUNC3(LocaleManager_obj,registerEvent,(void))

bool LocaleManager_obj::hasEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_213_hasEvent)
HXLINE( 214)		if (::hx::IsNull( this->_eventMap )) {
HXLINE( 215)			return false;
            		}
HXLINE( 217)		return this->_eventMap->contains(type,listener);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LocaleManager_obj,hasEvent,return )

void LocaleManager_obj::unregisterEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_222_unregisterEvent)
HXDLIN( 222)		if (::hx::IsNotNull( this->_eventMap )) {
HXLINE( 223)			this->_eventMap->remove(type,listener);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(LocaleManager_obj,unregisterEvent,(void))

void LocaleManager_obj::parseResource(::String localeId,::String resourceId){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_227_parseResource)
HXLINE( 228)		::String content = ::haxe::ui::ToolkitAssets_obj::get_instance()->getText(resourceId);
HXLINE( 229)		if (::hx::IsNotNull( content )) {
HXLINE( 230)			::Array< ::String > parts = resourceId.split(HX_(".",2e,00,00,00));
HXLINE( 231)			::String extension = ( (::String)(parts->pop()) );
HXLINE( 232)			::String filename = parts->join(HX_(".",2e,00,00,00));
HXLINE( 233)			int n = filename.lastIndexOf(HX_("/",2f,00,00,00),null());
HXLINE( 234)			if ((n != -1)) {
HXLINE( 235)				filename = filename.substr((n + 1),null());
            			}
HXLINE( 237)			 ::haxe::ui::parsers::locale::LocaleParser parser = ::haxe::ui::parsers::locale::LocaleParser_obj::get(extension);
HXLINE( 238)			 ::haxe::ds::StringMap map = parser->parse(content);
HXLINE( 239)			this->addStrings(localeId,map,filename);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(LocaleManager_obj,parseResource,(void))

void LocaleManager_obj::addStrings(::String localeId, ::haxe::ds::StringMap map,::String filename){
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_244_addStrings)
HXLINE( 245)		localeId = ::StringTools_obj::replace(localeId,HX_("-",2d,00,00,00),HX_("_",5f,00,00,00));
HXLINE( 246)		 ::haxe::ds::StringMap stringMap = ( ( ::haxe::ds::StringMap)(this->_localeMap->get(localeId)) );
HXLINE( 247)		if (::hx::IsNull( stringMap )) {
HXLINE( 248)			stringMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 249)			this->_localeMap->set(localeId,stringMap);
            		}
HXLINE( 251)		{
HXLINE( 251)			 ::Dynamic k = map->keys();
HXDLIN( 251)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 251)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 252)				::String v = map->get_string(k1);
HXLINE( 253)				bool _hx_tmp;
HXDLIN( 253)				bool _hx_tmp1;
HXDLIN( 253)				if (::hx::IsNotNull( filename )) {
HXLINE( 253)					_hx_tmp1 = (filename != localeId);
            				}
            				else {
HXLINE( 253)					_hx_tmp1 = false;
            				}
HXDLIN( 253)				if (_hx_tmp1) {
HXLINE( 253)					_hx_tmp = (::StringTools_obj::startsWith(k1,filename) == false);
            				}
            				else {
HXLINE( 253)					_hx_tmp = false;
            				}
HXDLIN( 253)				if (_hx_tmp) {
HXLINE( 254)					::String altKey = ((filename + HX_(".",2e,00,00,00)) + k1);
HXLINE( 255)					stringMap->set(altKey,v);
            				}
HXLINE( 257)				stringMap->set(k1,v);
            			}
            		}
HXLINE( 260)		localeId = ::StringTools_obj::replace(localeId,HX_("-",2d,00,00,00),HX_("_",5f,00,00,00));
HXLINE( 261)		::Array< ::String > parts = localeId.split(HX_("_",5f,00,00,00));
HXLINE( 262)		if ((parts->length > 1)) {
HXLINE( 263)			 ::haxe::ds::StringMap parent = ( ( ::haxe::ds::StringMap)(this->_localeMap->get(parts->__get(0))) );
HXLINE( 264)			if (::hx::IsNotNull( parent )) {
HXLINE( 265)				 ::Dynamic k = parent->keys();
HXDLIN( 265)				while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 265)					::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 266)					if ((stringMap->exists(k1) == false)) {
HXLINE( 267)						stringMap->set(k1,parent->get_string(k1));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(LocaleManager_obj,addStrings,(void))

 ::haxe::ds::StringMap LocaleManager_obj::getStrings(::String localeId){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_274_getStrings)
HXLINE( 275)		 ::haxe::ds::StringMap strings = ( ( ::haxe::ds::StringMap)(this->_localeMap->get(localeId)) );
HXLINE( 276)		if (::hx::IsNotNull( strings )) {
HXLINE( 277)			return strings;
            		}
HXLINE( 280)		localeId = ::StringTools_obj::replace(localeId,HX_("-",2d,00,00,00),HX_("_",5f,00,00,00));
HXLINE( 281)		::Array< ::String > parts = localeId.split(HX_("_",5f,00,00,00));
HXLINE( 282)		if (!(this->_localeMap->exists(parts->__get(0)))) {
HXLINE( 283)			return ( ( ::haxe::ds::StringMap)(this->_localeMap->get(HX_("en",69,58,00,00))) );
            		}
HXLINE( 285)		return ( ( ::haxe::ds::StringMap)(this->_localeMap->get(parts->__get(0))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,getStrings,return )

bool LocaleManager_obj::hasString(::String id){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_288_hasString)
HXLINE( 289)		 ::haxe::ds::StringMap strings = this->getStrings(this->get_language());
HXLINE( 290)		if (::hx::IsNull( strings )) {
HXLINE( 291)			return false;
            		}
HXLINE( 293)		return strings->exists(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,hasString,return )

::String LocaleManager_obj::lookupString(::String id, ::Dynamic param0, ::Dynamic param1, ::Dynamic param2, ::Dynamic param3){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_297_lookupString)
HXDLIN( 297)		return this->translateTo(this->get_language(),id,param0,param1,param2,param3);
            	}


HX_DEFINE_DYNAMIC_FUNC5(LocaleManager_obj,lookupString,return )

::String LocaleManager_obj::translateTo(::String lang,::String id, ::Dynamic param0, ::Dynamic param1, ::Dynamic param2, ::Dynamic param3){
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_301_translateTo)
HXLINE( 302)		lang = ::StringTools_obj::replace(lang,HX_("-",2d,00,00,00),HX_("_",5f,00,00,00));
HXLINE( 303)		 ::haxe::ds::StringMap map = ( ( ::haxe::ds::StringMap)(this->_localeStringMap->get(lang)) );
HXLINE( 304)		 ::haxe::ui::locale::LocaleString localeString = null();
HXLINE( 305)		if (::hx::IsNotNull( map )) {
HXLINE( 306)			localeString = ( ( ::haxe::ui::locale::LocaleString)(map->get(id)) );
            		}
HXLINE( 309)		if (::hx::IsNull( localeString )) {
HXLINE( 310)			 ::haxe::ds::StringMap strings = this->getStrings(lang);
HXLINE( 311)			if (::hx::IsNull( strings )) {
HXLINE( 312)				return id;
            			}
HXLINE( 314)			::String value = strings->get_string(id);
HXLINE( 315)			if (::hx::IsNull( value )) {
HXLINE( 316)				return id;
            			}
HXLINE( 325)			bool isCompound = false;
HXLINE( 326)			bool _hx_tmp;
HXDLIN( 326)			if ((value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1)) {
HXLINE( 326)				_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            			}
            			else {
HXLINE( 326)				_hx_tmp = false;
            			}
HXDLIN( 326)			if (_hx_tmp) {
HXLINE( 327)				isCompound = true;
HXLINE( 328)				int n1 = value.indexOf(HX_("{{",a0,6b,00,00),null());
HXLINE( 329)				while((n1 != -1)){
HXLINE( 330)					int n2 = value.indexOf(HX_("}}",60,6d,00,00),n1);
HXLINE( 331)					::String before = value.substring(0,n1);
HXLINE( 332)					::String part = value.substring((n1 + 2),n2);
HXLINE( 333)					::String after = value.substring((n2 + 2),null());
HXLINE( 335)					::String partValue = this->translateTo(lang,part,param0,param1,param2,param3);
HXLINE( 336)					value = ((before + partValue) + after);
HXLINE( 338)					n1 = value.indexOf(HX_("{{",a0,6b,00,00),n1);
            				}
            			}
HXLINE( 342)			localeString =  ::haxe::ui::locale::LocaleString_obj::__alloc( HX_CTX );
HXLINE( 343)			localeString->parse(((id + HX_("=",3d,00,00,00)) + value));
HXLINE( 345)			if (!(isCompound)) {
HXLINE( 346)				if (::hx::IsNull( map )) {
HXLINE( 347)					map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 348)					this->_localeStringMap->set(lang,map);
            				}
HXLINE( 350)				map->set(id,localeString);
            			}
            		}
HXLINE( 354)		::String result = localeString->build(param0,param1,param2,param3);
HXLINE( 355)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC6(LocaleManager_obj,translateTo,return )

 ::haxe::ui::core::Component LocaleManager_obj::findRoot( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_c866bb869b01b7dd_358_findRoot)
HXLINE( 359)		 ::haxe::ui::core::Component root = c;
HXLINE( 361)		 ::haxe::ui::core::Component ref = c;
HXLINE( 362)		while(::hx::IsNotNull( ref )){
HXLINE( 363)			root = ref;
HXLINE( 364)			if (root->bindingRoot) {
HXLINE( 365)				goto _hx_goto_29;
            			}
HXLINE( 367)			ref = ref->get_parentComponent();
            		}
            		_hx_goto_29:;
HXLINE( 370)		return root;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleManager_obj,findRoot,return )

 ::haxe::ui::locale::LocaleManager LocaleManager_obj::_instance;

 ::haxe::ui::locale::LocaleManager LocaleManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_25_get_instance)
HXLINE(  26)		if (::hx::IsNull( ::haxe::ui::locale::LocaleManager_obj::_instance )) {
HXLINE(  27)			::haxe::ui::locale::LocaleManager_obj::_instance =  ::haxe::ui::locale::LocaleManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  29)		return ::haxe::ui::locale::LocaleManager_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LocaleManager_obj,get_instance,return )

 ::haxe::ds::ObjectMap LocaleManager_obj::_registeredComponents;


::hx::ObjectPtr< LocaleManager_obj > LocaleManager_obj::__new() {
	::hx::ObjectPtr< LocaleManager_obj > __this = new LocaleManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LocaleManager_obj > LocaleManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LocaleManager_obj *__this = (LocaleManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LocaleManager_obj), true, "haxe.ui.locale.LocaleManager"));
	*(void **)__this = LocaleManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LocaleManager_obj::LocaleManager_obj()
{
}

void LocaleManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LocaleManager);
	HX_MARK_MEMBER_NAME(_eventMap,"_eventMap");
	HX_MARK_MEMBER_NAME(autoSetLocale,"autoSetLocale");
	HX_MARK_MEMBER_NAME(_localeSet,"_localeSet");
	HX_MARK_MEMBER_NAME(_language,"_language");
	HX_MARK_MEMBER_NAME(_localeMap,"_localeMap");
	HX_MARK_MEMBER_NAME(_localeStringMap,"_localeStringMap");
	HX_MARK_END_CLASS();
}

void LocaleManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_eventMap,"_eventMap");
	HX_VISIT_MEMBER_NAME(autoSetLocale,"autoSetLocale");
	HX_VISIT_MEMBER_NAME(_localeSet,"_localeSet");
	HX_VISIT_MEMBER_NAME(_language,"_language");
	HX_VISIT_MEMBER_NAME(_localeMap,"_localeMap");
	HX_VISIT_MEMBER_NAME(_localeStringMap,"_localeStringMap");
}

::hx::Val LocaleManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_language() ); }
		if (HX_FIELD_EQ(inName,"hasEvent") ) { return ::hx::Val( hasEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"findRoot") ) { return ::hx::Val( findRoot_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { return ::hx::Val( _eventMap ); }
		if (HX_FIELD_EQ(inName,"_language") ) { return ::hx::Val( _language ); }
		if (HX_FIELD_EQ(inName,"hasLocale") ) { return ::hx::Val( hasLocale_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasString") ) { return ::hx::Val( hasString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"refreshFor") ) { return ::hx::Val( refreshFor_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshAll") ) { return ::hx::Val( refreshAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"_localeSet") ) { return ::hx::Val( _localeSet ); }
		if (HX_FIELD_EQ(inName,"_localeMap") ) { return ::hx::Val( _localeMap ); }
		if (HX_FIELD_EQ(inName,"addStrings") ) { return ::hx::Val( addStrings_dyn() ); }
		if (HX_FIELD_EQ(inName,"getStrings") ) { return ::hx::Val( getStrings_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"applyLocale") ) { return ::hx::Val( applyLocale_dyn() ); }
		if (HX_FIELD_EQ(inName,"translateTo") ) { return ::hx::Val( translateTo_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_language") ) { return ::hx::Val( get_language_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_language") ) { return ::hx::Val( set_language_dyn() ); }
		if (HX_FIELD_EQ(inName,"lookupString") ) { return ::hx::Val( lookupString_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"autoSetLocale") ) { return ::hx::Val( autoSetLocale ); }
		if (HX_FIELD_EQ(inName,"registerEvent") ) { return ::hx::Val( registerEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseResource") ) { return ::hx::Val( parseResource_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"findBindingExpr") ) { return ::hx::Val( findBindingExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"unregisterEvent") ) { return ::hx::Val( unregisterEvent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onComponentReady") ) { return ::hx::Val( onComponentReady_dyn() ); }
		if (HX_FIELD_EQ(inName,"_localeStringMap") ) { return ::hx::Val( _localeStringMap ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComponent") ) { return ::hx::Val( registerComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneForComponent") ) { return ::hx::Val( cloneForComponent_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"unregisterComponent") ) { return ::hx::Val( unregisterComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LocaleManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_instance() ); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_registeredComponents") ) { outValue = ( _registeredComponents ); return true; }
	}
	return false;
}

::hx::Val LocaleManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_language(inValue.Cast< ::String >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { _eventMap=inValue.Cast<  ::haxe::ui::util::EventMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_language") ) { _language=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_localeSet") ) { _localeSet=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localeMap") ) { _localeMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"autoSetLocale") ) { autoSetLocale=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_localeStringMap") ) { _localeStringMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LocaleManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::locale::LocaleManager >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_registeredComponents") ) { _registeredComponents=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
	}
	return false;
}

void LocaleManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_eventMap",01,7e,68,08));
	outFields->push(HX_("autoSetLocale",6d,04,b9,9a));
	outFields->push(HX_("_localeSet",e9,b6,0d,76));
	outFields->push(HX_("_language",b7,77,a7,c1));
	outFields->push(HX_("language",58,80,11,7a));
	outFields->push(HX_("_localeMap",e3,25,09,76));
	outFields->push(HX_("_localeStringMap",d2,7c,e9,b5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LocaleManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::util::EventMap */ ,(int)offsetof(LocaleManager_obj,_eventMap),HX_("_eventMap",01,7e,68,08)},
	{::hx::fsBool,(int)offsetof(LocaleManager_obj,autoSetLocale),HX_("autoSetLocale",6d,04,b9,9a)},
	{::hx::fsBool,(int)offsetof(LocaleManager_obj,_localeSet),HX_("_localeSet",e9,b6,0d,76)},
	{::hx::fsString,(int)offsetof(LocaleManager_obj,_language),HX_("_language",b7,77,a7,c1)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(LocaleManager_obj,_localeMap),HX_("_localeMap",e3,25,09,76)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(LocaleManager_obj,_localeStringMap),HX_("_localeStringMap",d2,7c,e9,b5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LocaleManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::locale::LocaleManager */ ,(void *) &LocaleManager_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &LocaleManager_obj::_registeredComponents,HX_("_registeredComponents",17,17,c4,94)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LocaleManager_obj_sMemberFields[] = {
	HX_("_eventMap",01,7e,68,08),
	HX_("init",10,3b,bb,45),
	HX_("registerComponent",da,c5,2e,fb),
	HX_("unregisterComponent",61,ab,19,31),
	HX_("findBindingExpr",61,6b,f4,75),
	HX_("cloneForComponent",71,d7,39,9e),
	HX_("onComponentReady",e5,5f,17,42),
	HX_("refreshFor",ee,ff,23,07),
	HX_("refreshAll",06,32,20,07),
	HX_("autoSetLocale",6d,04,b9,9a),
	HX_("_localeSet",e9,b6,0d,76),
	HX_("_language",b7,77,a7,c1),
	HX_("get_language",61,34,2b,2f),
	HX_("set_language",d5,57,24,44),
	HX_("applyLocale",a8,34,ba,95),
	HX_("hasLocale",94,27,a8,9a),
	HX_("registerEvent",b7,8a,2d,6b),
	HX_("hasEvent",60,12,1d,02),
	HX_("unregisterEvent",be,60,a7,28),
	HX_("parseResource",21,94,cf,57),
	HX_("_localeMap",e3,25,09,76),
	HX_("addStrings",61,ba,7d,60),
	HX_("getStrings",8c,14,55,48),
	HX_("hasString",cb,db,18,52),
	HX_("lookupString",eb,56,9a,c3),
	HX_("_localeStringMap",d2,7c,e9,b5),
	HX_("translateTo",69,10,9f,8a),
	HX_("findRoot",fb,fa,42,9e),
	::String(null()) };

static void LocaleManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LocaleManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(LocaleManager_obj::_registeredComponents,"_registeredComponents");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LocaleManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LocaleManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(LocaleManager_obj::_registeredComponents,"_registeredComponents");
};

#endif

::hx::Class LocaleManager_obj::__mClass;

static ::String LocaleManager_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("get_instance",9e,d3,fa,0e),
	HX_("_registeredComponents",17,17,c4,94),
	::String(null())
};

void LocaleManager_obj::__register()
{
	LocaleManager_obj _hx_dummy;
	LocaleManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.locale.LocaleManager",11,2e,3e,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LocaleManager_obj::__GetStatic;
	__mClass->mSetStaticField = &LocaleManager_obj::__SetStatic;
	__mClass->mMarkFunc = LocaleManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LocaleManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LocaleManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LocaleManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LocaleManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocaleManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocaleManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LocaleManager_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_c866bb869b01b7dd_54_boot)
HXDLIN(  54)		_registeredComponents =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace locale
