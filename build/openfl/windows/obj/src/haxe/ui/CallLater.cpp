#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_CallLater
#include <haxe/ui/CallLater.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_CallLaterImpl
#include <haxe/ui/backend/CallLaterImpl.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_62c77a219906a331_7_new,"haxe.ui.CallLater","new",0x309f6a8e,"haxe.ui.CallLater.new","haxe/ui/CallLater.hx",7,0xd3c24742)
namespace haxe{
namespace ui{

void CallLater_obj::__construct( ::Dynamic fn){
            	HX_STACKFRAME(&_hx_pos_62c77a219906a331_7_new)
HXDLIN(   7)		super::__construct(fn);
            	}

Dynamic CallLater_obj::__CreateEmpty() { return new CallLater_obj; }

void *CallLater_obj::_hx_vtable = 0;

Dynamic CallLater_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CallLater_obj > _hx_result = new CallLater_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CallLater_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b00791c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1b00791c;
	} else {
		return inClassId==(int)0x3586c690;
	}
}


CallLater_obj::CallLater_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CallLater_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CallLater_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CallLater_obj::__mClass;

void CallLater_obj::__register()
{
	CallLater_obj _hx_dummy;
	CallLater_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.CallLater",9c,cb,1f,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CallLater_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallLater_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallLater_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
