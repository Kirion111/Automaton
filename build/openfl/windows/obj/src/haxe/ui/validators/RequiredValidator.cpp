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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_haxe_ui_validators_IValidator
#include <haxe/ui/validators/IValidator.h>
#endif
#ifndef INCLUDED_haxe_ui_validators_RequiredValidator
#include <haxe/ui/validators/RequiredValidator.h>
#endif
#ifndef INCLUDED_haxe_ui_validators_Validator
#include <haxe/ui/validators/Validator.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d325de7356b9f30d_6_new,"haxe.ui.validators.RequiredValidator","new",0x9e7ab20a,"haxe.ui.validators.RequiredValidator.new","haxe/ui/validators/RequiredValidator.hx",6,0x476c4087)
HX_LOCAL_STACK_FRAME(_hx_pos_d325de7356b9f30d_13_setup,"haxe.ui.validators.RequiredValidator","setup",0x1911cea7,"haxe.ui.validators.RequiredValidator.setup","haxe/ui/validators/RequiredValidator.hx",13,0x476c4087)
HX_LOCAL_STACK_FRAME(_hx_pos_d325de7356b9f30d_16_validateString,"haxe.ui.validators.RequiredValidator","validateString",0xb5098c9d,"haxe.ui.validators.RequiredValidator.validateString","haxe/ui/validators/RequiredValidator.hx",16,0x476c4087)
HX_LOCAL_STACK_FRAME(_hx_pos_d325de7356b9f30d_29_onValid,"haxe.ui.validators.RequiredValidator","onValid",0x7bc01207,"haxe.ui.validators.RequiredValidator.onValid","haxe/ui/validators/RequiredValidator.hx",29,0x476c4087)
HX_LOCAL_STACK_FRAME(_hx_pos_d325de7356b9f30d_33_onInvalid,"haxe.ui.validators.RequiredValidator","onInvalid",0xcc3910c2,"haxe.ui.validators.RequiredValidator.onInvalid","haxe/ui/validators/RequiredValidator.hx",33,0x476c4087)
namespace haxe{
namespace ui{
namespace validators{

void RequiredValidator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d325de7356b9f30d_6_new)
HXLINE(   7)		super::__construct();
HXLINE(   8)		this->invalidMessage = HX_("{{form.field.required}}",7d,0a,0d,be);
HXLINE(   9)		this->invalidStyleName = HX_("required-value",c3,1e,64,ee);
            	}

Dynamic RequiredValidator_obj::__CreateEmpty() { return new RequiredValidator_obj; }

void *RequiredValidator_obj::_hx_vtable = 0;

Dynamic RequiredValidator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RequiredValidator_obj > _hx_result = new RequiredValidator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RequiredValidator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x175c8f58) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x175c8f58;
	} else {
		return inClassId==(int)0x227df7b7;
	}
}

void RequiredValidator_obj::setup( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_d325de7356b9f30d_13_setup)
HXDLIN(  13)		component->addClass(HX_("required",5f,91,62,b2),null(),null());
            	}


 ::Dynamic RequiredValidator_obj::validateString(::String s){
            	HX_STACKFRAME(&_hx_pos_d325de7356b9f30d_16_validateString)
HXLINE(  17)		 ::Dynamic valid = null();
HXLINE(  19)		if (::hx::IsNull( s )) {
HXLINE(  20)			valid = false;
            		}
            		else {
HXLINE(  22)			valid = (s.length > 0);
            		}
HXLINE(  25)		return valid;
            	}


void RequiredValidator_obj::onValid( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_d325de7356b9f30d_29_onValid)
HXDLIN(  29)		component->removeClass(this->invalidStyleName,true,true);
            	}


void RequiredValidator_obj::onInvalid( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_d325de7356b9f30d_33_onInvalid)
HXDLIN(  33)		component->addClass(this->invalidStyleName,true,true);
            	}



::hx::ObjectPtr< RequiredValidator_obj > RequiredValidator_obj::__new() {
	::hx::ObjectPtr< RequiredValidator_obj > __this = new RequiredValidator_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RequiredValidator_obj > RequiredValidator_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RequiredValidator_obj *__this = (RequiredValidator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RequiredValidator_obj), true, "haxe.ui.validators.RequiredValidator"));
	*(void **)__this = RequiredValidator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RequiredValidator_obj::RequiredValidator_obj()
{
}

::hx::Val RequiredValidator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return ::hx::Val( setup_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onValid") ) { return ::hx::Val( onValid_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onInvalid") ) { return ::hx::Val( onInvalid_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"validateString") ) { return ::hx::Val( validateString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RequiredValidator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RequiredValidator_obj_sStaticStorageInfo = 0;
#endif

static ::String RequiredValidator_obj_sMemberFields[] = {
	HX_("setup",7d,ae,2f,7a),
	HX_("validateString",07,02,f8,64),
	HX_("onValid",5d,13,f6,c7),
	HX_("onInvalid",98,93,f2,12),
	::String(null()) };

::hx::Class RequiredValidator_obj::__mClass;

void RequiredValidator_obj::__register()
{
	RequiredValidator_obj _hx_dummy;
	RequiredValidator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.validators.RequiredValidator",18,a5,6a,93);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RequiredValidator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RequiredValidator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RequiredValidator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RequiredValidator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace validators
