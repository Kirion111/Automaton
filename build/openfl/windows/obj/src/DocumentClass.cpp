#include <hxcpp.h>

#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif


void DocumentClass_obj::__construct() { }

Dynamic DocumentClass_obj::__CreateEmpty() { return new DocumentClass_obj; }

void *DocumentClass_obj::_hx_vtable = 0;

Dynamic DocumentClass_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DocumentClass_obj > _hx_result = new DocumentClass_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DocumentClass_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x07825a7d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x07825a7d;
	} else {
		return inClassId==(int)0x1a4abc3d;
	}
}


DocumentClass_obj::DocumentClass_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DocumentClass_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DocumentClass_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DocumentClass_obj::__mClass;

void DocumentClass_obj::__register()
{
	DocumentClass_obj _hx_dummy;
	DocumentClass_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DocumentClass",fd,a6,03,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DocumentClass_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DocumentClass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DocumentClass_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

