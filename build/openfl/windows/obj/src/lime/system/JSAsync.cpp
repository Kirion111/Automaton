#include <hxcpp.h>

#ifndef INCLUDED_lime_system_JSAsync
#include <lime/system/JSAsync.h>
#endif

namespace lime{
namespace _hx_system{

void JSAsync_obj::__construct() { }

Dynamic JSAsync_obj::__CreateEmpty() { return new JSAsync_obj; }

void *JSAsync_obj::_hx_vtable = 0;

Dynamic JSAsync_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JSAsync_obj > _hx_result = new JSAsync_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JSAsync_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x23f9c9ef;
}


JSAsync_obj::JSAsync_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *JSAsync_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *JSAsync_obj_sStaticStorageInfo = 0;
#endif

::hx::Class JSAsync_obj::__mClass;

void JSAsync_obj::__register()
{
	JSAsync_obj _hx_dummy;
	JSAsync_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.JSAsync",6d,b2,a1,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< JSAsync_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JSAsync_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JSAsync_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
