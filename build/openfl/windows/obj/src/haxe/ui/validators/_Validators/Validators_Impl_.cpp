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
#ifndef INCLUDED_haxe_ui_validators__Validators_ValidatorsImpl
#include <haxe/ui/validators/_Validators/ValidatorsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_validators__Validators_Validators_Impl_
#include <haxe/ui/validators/_Validators/Validators_Impl_.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_d041730c4c583817_11_get,"haxe.ui.validators._Validators.Validators_Impl_","get",0x4b5649f2,"haxe.ui.validators._Validators.Validators_Impl_.get","haxe/ui/validators/Validators.hx",11,0x2c6e0b21)
HX_LOCAL_STACK_FRAME(_hx_pos_d041730c4c583817_15_fromArray,"haxe.ui.validators._Validators.Validators_Impl_","fromArray",0xf0538e2b,"haxe.ui.validators._Validators.Validators_Impl_.fromArray","haxe/ui/validators/Validators.hx",15,0x2c6e0b21)
namespace haxe{
namespace ui{
namespace validators{
namespace _Validators{

void Validators_Impl__obj::__construct() { }

Dynamic Validators_Impl__obj::__CreateEmpty() { return new Validators_Impl__obj; }

void *Validators_Impl__obj::_hx_vtable = 0;

Dynamic Validators_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Validators_Impl__obj > _hx_result = new Validators_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Validators_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5a7618c6;
}

::Dynamic Validators_Impl__obj::get( ::haxe::ui::validators::_Validators::ValidatorsImpl this1,int index){
            	HX_STACKFRAME(&_hx_pos_d041730c4c583817_11_get)
HXDLIN(  11)		return this1->list->__get(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Validators_Impl__obj,get,return )

 ::haxe::ui::validators::_Validators::ValidatorsImpl Validators_Impl__obj::fromArray(::Array< ::Dynamic> list){
            	HX_GC_STACKFRAME(&_hx_pos_d041730c4c583817_15_fromArray)
HXLINE(  16)		 ::haxe::ui::validators::_Validators::ValidatorsImpl ret =  ::haxe::ui::validators::_Validators::ValidatorsImpl_obj::__alloc( HX_CTX ,null());
HXLINE(  17)		ret->list = list;
HXLINE(  18)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Validators_Impl__obj,fromArray,return )


Validators_Impl__obj::Validators_Impl__obj()
{
}

bool Validators_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Validators_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Validators_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Validators_Impl__obj::__mClass;

static ::String Validators_Impl__obj_sStaticFields[] = {
	HX_("get",96,80,4e,00),
	HX_("fromArray",cf,57,18,da),
	::String(null())
};

void Validators_Impl__obj::__register()
{
	Validators_Impl__obj _hx_dummy;
	Validators_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.validators._Validators.Validators_Impl_",ca,4b,ad,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Validators_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Validators_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Validators_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Validators_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Validators_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace validators
} // end namespace _Validators
