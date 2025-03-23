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
#ifndef INCLUDED_haxe_ui_styles_DirectiveHandler
#include <haxe/ui/styles/DirectiveHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Directive
#include <haxe/ui/styles/elements/Directive.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_fd316e3bb3d7fcc7_7_new,"haxe.ui.styles.DirectiveHandler","new",0x36e431c7,"haxe.ui.styles.DirectiveHandler.new","haxe/ui/styles/DirectiveHandler.hx",7,0x2bc706c8)
HX_LOCAL_STACK_FRAME(_hx_pos_fd316e3bb3d7fcc7_10_apply,"haxe.ui.styles.DirectiveHandler","apply",0x68b44e95,"haxe.ui.styles.DirectiveHandler.apply","haxe/ui/styles/DirectiveHandler.hx",10,0x2bc706c8)
HX_LOCAL_STACK_FRAME(_hx_pos_fd316e3bb3d7fcc7_17_registerDirectiveHandler,"haxe.ui.styles.DirectiveHandler","registerDirectiveHandler",0xcc034af7,"haxe.ui.styles.DirectiveHandler.registerDirectiveHandler","haxe/ui/styles/DirectiveHandler.hx",17,0x2bc706c8)
HX_LOCAL_STACK_FRAME(_hx_pos_fd316e3bb3d7fcc7_21_hasDirectiveHandler,"haxe.ui.styles.DirectiveHandler","hasDirectiveHandler",0x0bc0761c,"haxe.ui.styles.DirectiveHandler.hasDirectiveHandler","haxe/ui/styles/DirectiveHandler.hx",21,0x2bc706c8)
HX_LOCAL_STACK_FRAME(_hx_pos_fd316e3bb3d7fcc7_24_getDirectiveHandler,"haxe.ui.styles.DirectiveHandler","getDirectiveHandler",0xd336ef58,"haxe.ui.styles.DirectiveHandler.getDirectiveHandler","haxe/ui/styles/DirectiveHandler.hx",24,0x2bc706c8)
HX_LOCAL_STACK_FRAME(_hx_pos_fd316e3bb3d7fcc7_14_boot,"haxe.ui.styles.DirectiveHandler","boot",0xc8e05ceb,"haxe.ui.styles.DirectiveHandler.boot","haxe/ui/styles/DirectiveHandler.hx",14,0x2bc706c8)
HX_LOCAL_STACK_FRAME(_hx_pos_fd316e3bb3d7fcc7_15_boot,"haxe.ui.styles.DirectiveHandler","boot",0xc8e05ceb,"haxe.ui.styles.DirectiveHandler.boot","haxe/ui/styles/DirectiveHandler.hx",15,0x2bc706c8)
namespace haxe{
namespace ui{
namespace styles{

void DirectiveHandler_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fd316e3bb3d7fcc7_7_new)
            	}

Dynamic DirectiveHandler_obj::__CreateEmpty() { return new DirectiveHandler_obj; }

void *DirectiveHandler_obj::_hx_vtable = 0;

Dynamic DirectiveHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DirectiveHandler_obj > _hx_result = new DirectiveHandler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DirectiveHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07322fbf;
}

void DirectiveHandler_obj::apply( ::haxe::ui::core::Component component, ::haxe::ui::styles::elements::Directive directive){
            	HX_STACKFRAME(&_hx_pos_fd316e3bb3d7fcc7_10_apply)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DirectiveHandler_obj,apply,(void))

 ::haxe::ds::StringMap DirectiveHandler_obj::_directiveHandlers;

 ::haxe::ds::StringMap DirectiveHandler_obj::_directiveHandlerInstances;

void DirectiveHandler_obj::registerDirectiveHandler(::String name, ::Dynamic ctor){
            	HX_STACKFRAME(&_hx_pos_fd316e3bb3d7fcc7_17_registerDirectiveHandler)
HXDLIN(  17)		::haxe::ui::styles::DirectiveHandler_obj::_directiveHandlers->set(name,ctor);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DirectiveHandler_obj,registerDirectiveHandler,(void))

bool DirectiveHandler_obj::hasDirectiveHandler(::String name){
            	HX_STACKFRAME(&_hx_pos_fd316e3bb3d7fcc7_21_hasDirectiveHandler)
HXDLIN(  21)		return ::haxe::ui::styles::DirectiveHandler_obj::_directiveHandlers->exists(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DirectiveHandler_obj,hasDirectiveHandler,return )

 ::haxe::ui::styles::DirectiveHandler DirectiveHandler_obj::getDirectiveHandler(::String name){
            	HX_STACKFRAME(&_hx_pos_fd316e3bb3d7fcc7_24_getDirectiveHandler)
HXLINE(  25)		 ::haxe::ui::styles::DirectiveHandler instance = ( ( ::haxe::ui::styles::DirectiveHandler)(::haxe::ui::styles::DirectiveHandler_obj::_directiveHandlerInstances->get(name)) );
HXLINE(  26)		if (::hx::IsNotNull( instance )) {
HXLINE(  27)			return instance;
            		}
HXLINE(  29)		 ::Dynamic ctor = ::haxe::ui::styles::DirectiveHandler_obj::_directiveHandlers->get(name);
HXLINE(  30)		if (::hx::IsNull( ctor )) {
HXLINE(  31)			return null();
            		}
HXLINE(  34)		instance = ( ( ::haxe::ui::styles::DirectiveHandler)(ctor()) );
HXLINE(  36)		::haxe::ui::styles::DirectiveHandler_obj::_directiveHandlerInstances->set(name,instance);
HXLINE(  37)		return instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DirectiveHandler_obj,getDirectiveHandler,return )


::hx::ObjectPtr< DirectiveHandler_obj > DirectiveHandler_obj::__new() {
	::hx::ObjectPtr< DirectiveHandler_obj > __this = new DirectiveHandler_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DirectiveHandler_obj > DirectiveHandler_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DirectiveHandler_obj *__this = (DirectiveHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DirectiveHandler_obj), false, "haxe.ui.styles.DirectiveHandler"));
	*(void **)__this = DirectiveHandler_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DirectiveHandler_obj::DirectiveHandler_obj()
{
}

::hx::Val DirectiveHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DirectiveHandler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"_directiveHandlers") ) { outValue = ( _directiveHandlers ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hasDirectiveHandler") ) { outValue = hasDirectiveHandler_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getDirectiveHandler") ) { outValue = getDirectiveHandler_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"registerDirectiveHandler") ) { outValue = registerDirectiveHandler_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_directiveHandlerInstances") ) { outValue = ( _directiveHandlerInstances ); return true; }
	}
	return false;
}

bool DirectiveHandler_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"_directiveHandlers") ) { _directiveHandlers=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_directiveHandlerInstances") ) { _directiveHandlerInstances=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DirectiveHandler_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo DirectiveHandler_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &DirectiveHandler_obj::_directiveHandlers,HX_("_directiveHandlers",99,51,53,fd)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &DirectiveHandler_obj::_directiveHandlerInstances,HX_("_directiveHandlerInstances",44,4a,4f,a7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DirectiveHandler_obj_sMemberFields[] = {
	HX_("apply",6e,85,3b,24),
	::String(null()) };

static void DirectiveHandler_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DirectiveHandler_obj::_directiveHandlers,"_directiveHandlers");
	HX_MARK_MEMBER_NAME(DirectiveHandler_obj::_directiveHandlerInstances,"_directiveHandlerInstances");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DirectiveHandler_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DirectiveHandler_obj::_directiveHandlers,"_directiveHandlers");
	HX_VISIT_MEMBER_NAME(DirectiveHandler_obj::_directiveHandlerInstances,"_directiveHandlerInstances");
};

#endif

::hx::Class DirectiveHandler_obj::__mClass;

static ::String DirectiveHandler_obj_sStaticFields[] = {
	HX_("_directiveHandlers",99,51,53,fd),
	HX_("_directiveHandlerInstances",44,4a,4f,a7),
	HX_("registerDirectiveHandler",be,5f,e5,c6),
	HX_("hasDirectiveHandler",b5,96,84,a2),
	HX_("getDirectiveHandler",f1,0f,fb,69),
	::String(null())
};

void DirectiveHandler_obj::__register()
{
	DirectiveHandler_obj _hx_dummy;
	DirectiveHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.DirectiveHandler",55,42,d0,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DirectiveHandler_obj::__GetStatic;
	__mClass->mSetStaticField = &DirectiveHandler_obj::__SetStatic;
	__mClass->mMarkFunc = DirectiveHandler_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DirectiveHandler_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DirectiveHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DirectiveHandler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DirectiveHandler_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DirectiveHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DirectiveHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DirectiveHandler_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_fd316e3bb3d7fcc7_14_boot)
HXDLIN(  14)		_directiveHandlers =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_fd316e3bb3d7fcc7_15_boot)
HXDLIN(  15)		_directiveHandlerInstances =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
