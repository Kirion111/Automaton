#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_AppBase
#include <haxe/ui/backend/AppBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AppImpl
#include <haxe/ui/backend/AppImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_events_AppEvent
#include <haxe/ui/events/AppEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a625b467a1c6a6f0_6_new,"haxe.ui.backend.AppImpl","new",0xd71fe647,"haxe.ui.backend.AppImpl.new","haxe/ui/backend/AppImpl.hx",6,0x396588ea)
HX_LOCAL_STACK_FRAME(_hx_pos_a625b467a1c6a6f0_11_init,"haxe.ui.backend.AppImpl","init",0x61824f49,"haxe.ui.backend.AppImpl.init","haxe/ui/backend/AppImpl.hx",11,0x396588ea)
HX_LOCAL_STACK_FRAME(_hx_pos_a625b467a1c6a6f0_9_init,"haxe.ui.backend.AppImpl","init",0x61824f49,"haxe.ui.backend.AppImpl.init","haxe/ui/backend/AppImpl.hx",9,0x396588ea)
namespace haxe{
namespace ui{
namespace backend{

void AppImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a625b467a1c6a6f0_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic AppImpl_obj::__CreateEmpty() { return new AppImpl_obj; }

void *AppImpl_obj::_hx_vtable = 0;

Dynamic AppImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AppImpl_obj > _hx_result = new AppImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AppImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09f65818) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09f65818;
	} else {
		return inClassId==(int)0x0e9feee7;
	}
}

void AppImpl_obj::init( ::Dynamic onReady, ::Dynamic onEnd){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::backend::AppImpl,_gthis) HXARGC(1)
            		void _hx_run(int _){
            			HX_GC_STACKFRAME(&_hx_pos_a625b467a1c6a6f0_11_init)
HXLINE(  11)			 ::haxe::ui::backend::AppImpl _gthis1 = _gthis;
HXDLIN(  11)			_gthis1->dispatch( ::haxe::ui::events::AppEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::AppEvent_obj::APP_EXITED,null(),null()));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_a625b467a1c6a6f0_9_init)
HXDLIN(   9)		 ::haxe::ui::backend::AppImpl _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  10)		::openfl::Lib_obj::get_current()->stage->application->onExit->add( ::Dynamic(new _hx_Closure_0(_gthis)),null(),null());
HXLINE(  13)		onReady();
            	}



::hx::ObjectPtr< AppImpl_obj > AppImpl_obj::__new() {
	::hx::ObjectPtr< AppImpl_obj > __this = new AppImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AppImpl_obj > AppImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AppImpl_obj *__this = (AppImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AppImpl_obj), true, "haxe.ui.backend.AppImpl"));
	*(void **)__this = AppImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AppImpl_obj::AppImpl_obj()
{
}

::hx::Val AppImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AppImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AppImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String AppImpl_obj_sMemberFields[] = {
	HX_("init",10,3b,bb,45),
	::String(null()) };

::hx::Class AppImpl_obj::__mClass;

void AppImpl_obj::__register()
{
	AppImpl_obj _hx_dummy;
	AppImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.AppImpl",d5,b6,f7,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AppImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AppImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AppImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AppImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
