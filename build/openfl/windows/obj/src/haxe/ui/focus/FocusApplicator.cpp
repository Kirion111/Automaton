#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_focus_FocusApplicator
#include <haxe/ui/focus/FocusApplicator.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusApplicator
#include <haxe/ui/focus/IFocusApplicator.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4431de93eed7c264_15_new,"haxe.ui.focus.FocusApplicator","new",0x7c7553fd,"haxe.ui.focus.FocusApplicator.new","haxe/ui/focus/FocusApplicator.hx",15,0x67f724f4)
HX_LOCAL_STACK_FRAME(_hx_pos_4431de93eed7c264_9_apply,"haxe.ui.focus.FocusApplicator","apply",0x0e7aea4b,"haxe.ui.focus.FocusApplicator.apply","haxe/ui/focus/FocusApplicator.hx",9,0x67f724f4)
HX_LOCAL_STACK_FRAME(_hx_pos_4431de93eed7c264_12_unapply,"haxe.ui.focus.FocusApplicator","unapply",0xa5549292,"haxe.ui.focus.FocusApplicator.unapply","haxe/ui/focus/FocusApplicator.hx",12,0x67f724f4)
HX_LOCAL_STACK_FRAME(_hx_pos_4431de93eed7c264_17_set_enabled,"haxe.ui.focus.FocusApplicator","set_enabled",0xfa825441,"haxe.ui.focus.FocusApplicator.set_enabled","haxe/ui/focus/FocusApplicator.hx",17,0x67f724f4)
HX_LOCAL_STACK_FRAME(_hx_pos_4431de93eed7c264_22_get_enabled,"haxe.ui.focus.FocusApplicator","get_enabled",0xf0154d35,"haxe.ui.focus.FocusApplicator.get_enabled","haxe/ui/focus/FocusApplicator.hx",22,0x67f724f4)
namespace haxe{
namespace ui{
namespace focus{

void FocusApplicator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4431de93eed7c264_15_new)
HXDLIN(  15)		this->_enabled = true;
            	}

Dynamic FocusApplicator_obj::__CreateEmpty() { return new FocusApplicator_obj; }

void *FocusApplicator_obj::_hx_vtable = 0;

Dynamic FocusApplicator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FocusApplicator_obj > _hx_result = new FocusApplicator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FocusApplicator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c6f58c1;
}

static ::haxe::ui::focus::IFocusApplicator_obj _hx_haxe_ui_focus_FocusApplicator__hx_haxe_ui_focus_IFocusApplicator= {
	( bool (::hx::Object::*)())&::haxe::ui::focus::FocusApplicator_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::haxe::ui::focus::FocusApplicator_obj::set_enabled,
	( void (::hx::Object::*)( ::haxe::ui::core::Component))&::haxe::ui::focus::FocusApplicator_obj::apply,
	( void (::hx::Object::*)( ::haxe::ui::core::Component))&::haxe::ui::focus::FocusApplicator_obj::unapply,
};

void *FocusApplicator_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x421e4aa8: return &_hx_haxe_ui_focus_FocusApplicator__hx_haxe_ui_focus_IFocusApplicator;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FocusApplicator_obj::apply( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_4431de93eed7c264_9_apply)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FocusApplicator_obj,apply,(void))

void FocusApplicator_obj::unapply( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_4431de93eed7c264_12_unapply)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FocusApplicator_obj,unapply,(void))

bool FocusApplicator_obj::set_enabled(bool value){
            	HX_STACKFRAME(&_hx_pos_4431de93eed7c264_17_set_enabled)
HXLINE(  18)		this->_enabled = value;
HXLINE(  19)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FocusApplicator_obj,set_enabled,return )

bool FocusApplicator_obj::get_enabled(){
            	HX_STACKFRAME(&_hx_pos_4431de93eed7c264_22_get_enabled)
HXDLIN(  22)		return this->_enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FocusApplicator_obj,get_enabled,return )


::hx::ObjectPtr< FocusApplicator_obj > FocusApplicator_obj::__new() {
	::hx::ObjectPtr< FocusApplicator_obj > __this = new FocusApplicator_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FocusApplicator_obj > FocusApplicator_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FocusApplicator_obj *__this = (FocusApplicator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FocusApplicator_obj), false, "haxe.ui.focus.FocusApplicator"));
	*(void **)__this = FocusApplicator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FocusApplicator_obj::FocusApplicator_obj()
{
}

::hx::Val FocusApplicator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unapply") ) { return ::hx::Val( unapply_dyn() ); }
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_enabled() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enabled") ) { return ::hx::Val( _enabled ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return ::hx::Val( set_enabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return ::hx::Val( get_enabled_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FocusApplicator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enabled(inValue.Cast< bool >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FocusApplicator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_enabled",02,5e,e9,b7));
	outFields->push(HX_("enabled",81,04,31,7e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FocusApplicator_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FocusApplicator_obj,_enabled),HX_("_enabled",02,5e,e9,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FocusApplicator_obj_sStaticStorageInfo = 0;
#endif

static ::String FocusApplicator_obj_sMemberFields[] = {
	HX_("apply",6e,85,3b,24),
	HX_("unapply",75,7c,cc,20),
	HX_("_enabled",02,5e,e9,b7),
	HX_("set_enabled",a4,6b,98,0e),
	HX_("get_enabled",98,64,2b,04),
	::String(null()) };

::hx::Class FocusApplicator_obj::__mClass;

void FocusApplicator_obj::__register()
{
	FocusApplicator_obj _hx_dummy;
	FocusApplicator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.focus.FocusApplicator",8b,91,ea,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FocusApplicator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FocusApplicator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FocusApplicator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FocusApplicator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace focus
