#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__internal_format_Zlib
#include <lime/_internal/format/Zlib.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1e53264516846038_20_compress,"lime._internal.format.Zlib","compress",0x612ac019,"lime._internal.format.Zlib.compress","lime/_internal/format/Zlib.hx",20,0x132edd28)
HX_LOCAL_STACK_FRAME(_hx_pos_1e53264516846038_50_decompress,"lime._internal.format.Zlib","decompress",0x83a84c5a,"lime._internal.format.Zlib.decompress","lime/_internal/format/Zlib.hx",50,0x132edd28)
namespace lime{
namespace _internal{
namespace format{

void Zlib_obj::__construct() { }

Dynamic Zlib_obj::__CreateEmpty() { return new Zlib_obj; }

void *Zlib_obj::_hx_vtable = 0;

Dynamic Zlib_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Zlib_obj > _hx_result = new Zlib_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Zlib_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f314115;
}

 ::haxe::io::Bytes Zlib_obj::compress( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_1e53264516846038_20_compress)
HXDLIN(  20)		::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > _hx_tmp = ::lime::_internal::backend::native::NativeCFFI_obj::lime_zlib_compress;
HXDLIN(  20)		return ( ( ::Dynamic)(_hx_tmp(::hx::DynamicPtr(bytes),::hx::DynamicPtr(::haxe::io::Bytes_obj::alloc(0)))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Zlib_obj,compress,return )

 ::haxe::io::Bytes Zlib_obj::decompress( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_1e53264516846038_50_decompress)
HXDLIN(  50)		::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > _hx_tmp = ::lime::_internal::backend::native::NativeCFFI_obj::lime_zlib_decompress;
HXDLIN(  50)		return ( ( ::Dynamic)(_hx_tmp(::hx::DynamicPtr(bytes),::hx::DynamicPtr(::haxe::io::Bytes_obj::alloc(0)))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Zlib_obj,decompress,return )


Zlib_obj::Zlib_obj()
{
}

bool Zlib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decompress") ) { outValue = decompress_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Zlib_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Zlib_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Zlib_obj::__mClass;

static ::String Zlib_obj_sStaticFields[] = {
	HX_("compress",a2,47,bf,83),
	HX_("decompress",23,88,14,da),
	::String(null())
};

void Zlib_obj::__register()
{
	Zlib_obj _hx_dummy;
	Zlib_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.format.Zlib",d7,d2,35,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Zlib_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Zlib_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Zlib_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Zlib_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Zlib_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace format
