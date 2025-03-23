#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_FocusManagerBase
#include <haxe/ui/backend/FocusManagerBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_FocusManagerImpl
#include <haxe/ui/backend/FocusManagerImpl.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f746c4b41c390674_5_new,"haxe.ui.backend.FocusManagerImpl","new",0x25ca0333,"haxe.ui.backend.FocusManagerImpl.new","haxe/ui/backend/FocusManagerImpl.hx",5,0xcee2159c)
HX_LOCAL_STACK_FRAME(_hx_pos_f746c4b41c390674_7_applyFocus,"haxe.ui.backend.FocusManagerImpl","applyFocus",0xc402f917,"haxe.ui.backend.FocusManagerImpl.applyFocus","haxe/ui/backend/FocusManagerImpl.hx",7,0xcee2159c)
HX_LOCAL_STACK_FRAME(_hx_pos_f746c4b41c390674_11_unapplyFocus,"haxe.ui.backend.FocusManagerImpl","unapplyFocus",0xa07e65f0,"haxe.ui.backend.FocusManagerImpl.unapplyFocus","haxe/ui/backend/FocusManagerImpl.hx",11,0xcee2159c)
namespace haxe{
namespace ui{
namespace backend{

void FocusManagerImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f746c4b41c390674_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic FocusManagerImpl_obj::__CreateEmpty() { return new FocusManagerImpl_obj; }

void *FocusManagerImpl_obj::_hx_vtable = 0;

Dynamic FocusManagerImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FocusManagerImpl_obj > _hx_result = new FocusManagerImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FocusManagerImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4fcb91bc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4fcb91bc;
	} else {
		return inClassId==(int)0x5475288b;
	}
}

void FocusManagerImpl_obj::applyFocus( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_f746c4b41c390674_7_applyFocus)
HXDLIN(   7)		this->super::applyFocus(c);
            	}


void FocusManagerImpl_obj::unapplyFocus( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_f746c4b41c390674_11_unapplyFocus)
HXDLIN(  11)		this->super::applyFocus(c);
            	}



::hx::ObjectPtr< FocusManagerImpl_obj > FocusManagerImpl_obj::__new() {
	::hx::ObjectPtr< FocusManagerImpl_obj > __this = new FocusManagerImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FocusManagerImpl_obj > FocusManagerImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FocusManagerImpl_obj *__this = (FocusManagerImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FocusManagerImpl_obj), false, "haxe.ui.backend.FocusManagerImpl"));
	*(void **)__this = FocusManagerImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FocusManagerImpl_obj::FocusManagerImpl_obj()
{
}

::hx::Val FocusManagerImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"applyFocus") ) { return ::hx::Val( applyFocus_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"unapplyFocus") ) { return ::hx::Val( unapplyFocus_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FocusManagerImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FocusManagerImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String FocusManagerImpl_obj_sMemberFields[] = {
	HX_("applyFocus",8a,db,da,af),
	HX_("unapplyFocus",23,0b,ea,1b),
	::String(null()) };

::hx::Class FocusManagerImpl_obj::__mClass;

void FocusManagerImpl_obj::__register()
{
	FocusManagerImpl_obj _hx_dummy;
	FocusManagerImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.FocusManagerImpl",c1,ed,bd,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FocusManagerImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FocusManagerImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FocusManagerImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FocusManagerImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
