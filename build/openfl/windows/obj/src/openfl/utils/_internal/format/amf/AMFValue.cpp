#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFValue
#include <openfl/utils/_internal/format/amf/AMFValue.h>
#endif
namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf{

::openfl::utils::_internal::format::amf::AMFValue AMFValue_obj::AArray(::Array< ::Dynamic> values)
{
	return ::hx::CreateEnum< AMFValue_obj >(HX_("AArray",98,51,ef,b5),7,1)->_hx_init(0,values);
}

::openfl::utils::_internal::format::amf::AMFValue AMFValue_obj::ABool(bool b)
{
	return ::hx::CreateEnum< AMFValue_obj >(HX_("ABool",0b,65,00,99),1,1)->_hx_init(0,b);
}

::openfl::utils::_internal::format::amf::AMFValue AMFValue_obj::ADate( ::Date d)
{
	return ::hx::CreateEnum< AMFValue_obj >(HX_("ADate",0f,37,48,9a),4,1)->_hx_init(0,d);
}

::openfl::utils::_internal::format::amf::AMFValue AMFValue_obj::ANull;

::openfl::utils::_internal::format::amf::AMFValue AMFValue_obj::ANumber(Float f)
{
	return ::hx::CreateEnum< AMFValue_obj >(HX_("ANumber",ea,21,02,65),0,1)->_hx_init(0,f);
}

::openfl::utils::_internal::format::amf::AMFValue AMFValue_obj::AObject( ::haxe::ds::StringMap fields, ::Dynamic size)
{
	return ::hx::CreateEnum< AMFValue_obj >(HX_("AObject",e0,19,c7,d8),3,2)->_hx_init(0,fields)->_hx_init(1,size);
}

::openfl::utils::_internal::format::amf::AMFValue AMFValue_obj::AString(::String s)
{
	return ::hx::CreateEnum< AMFValue_obj >(HX_("AString",f2,c3,b7,d4),2,1)->_hx_init(0,s);
}

::openfl::utils::_internal::format::amf::AMFValue AMFValue_obj::AUndefined;

bool AMFValue_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AArray",98,51,ef,b5)) { outValue = AMFValue_obj::AArray_dyn(); return true; }
	if (inName==HX_("ABool",0b,65,00,99)) { outValue = AMFValue_obj::ABool_dyn(); return true; }
	if (inName==HX_("ADate",0f,37,48,9a)) { outValue = AMFValue_obj::ADate_dyn(); return true; }
	if (inName==HX_("ANull",68,7f,f3,a0)) { outValue = AMFValue_obj::ANull; return true; }
	if (inName==HX_("ANumber",ea,21,02,65)) { outValue = AMFValue_obj::ANumber_dyn(); return true; }
	if (inName==HX_("AObject",e0,19,c7,d8)) { outValue = AMFValue_obj::AObject_dyn(); return true; }
	if (inName==HX_("AString",f2,c3,b7,d4)) { outValue = AMFValue_obj::AString_dyn(); return true; }
	if (inName==HX_("AUndefined",0f,8e,c5,11)) { outValue = AMFValue_obj::AUndefined; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(AMFValue_obj)

int AMFValue_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AArray",98,51,ef,b5)) return 7;
	if (inName==HX_("ABool",0b,65,00,99)) return 1;
	if (inName==HX_("ADate",0f,37,48,9a)) return 4;
	if (inName==HX_("ANull",68,7f,f3,a0)) return 6;
	if (inName==HX_("ANumber",ea,21,02,65)) return 0;
	if (inName==HX_("AObject",e0,19,c7,d8)) return 3;
	if (inName==HX_("AString",f2,c3,b7,d4)) return 2;
	if (inName==HX_("AUndefined",0f,8e,c5,11)) return 5;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMFValue_obj,AArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMFValue_obj,ABool,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMFValue_obj,ADate,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMFValue_obj,ANumber,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(AMFValue_obj,AObject,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMFValue_obj,AString,return)

int AMFValue_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AArray",98,51,ef,b5)) return 1;
	if (inName==HX_("ABool",0b,65,00,99)) return 1;
	if (inName==HX_("ADate",0f,37,48,9a)) return 1;
	if (inName==HX_("ANull",68,7f,f3,a0)) return 0;
	if (inName==HX_("ANumber",ea,21,02,65)) return 1;
	if (inName==HX_("AObject",e0,19,c7,d8)) return 2;
	if (inName==HX_("AString",f2,c3,b7,d4)) return 1;
	if (inName==HX_("AUndefined",0f,8e,c5,11)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val AMFValue_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AArray",98,51,ef,b5)) return AArray_dyn();
	if (inName==HX_("ABool",0b,65,00,99)) return ABool_dyn();
	if (inName==HX_("ADate",0f,37,48,9a)) return ADate_dyn();
	if (inName==HX_("ANull",68,7f,f3,a0)) return ANull;
	if (inName==HX_("ANumber",ea,21,02,65)) return ANumber_dyn();
	if (inName==HX_("AObject",e0,19,c7,d8)) return AObject_dyn();
	if (inName==HX_("AString",f2,c3,b7,d4)) return AString_dyn();
	if (inName==HX_("AUndefined",0f,8e,c5,11)) return AUndefined;
	return super::__Field(inName,inCallProp);
}

static ::String AMFValue_obj_sStaticFields[] = {
	HX_("ANumber",ea,21,02,65),
	HX_("ABool",0b,65,00,99),
	HX_("AString",f2,c3,b7,d4),
	HX_("AObject",e0,19,c7,d8),
	HX_("ADate",0f,37,48,9a),
	HX_("AUndefined",0f,8e,c5,11),
	HX_("ANull",68,7f,f3,a0),
	HX_("AArray",98,51,ef,b5),
	::String(null())
};

::hx::Class AMFValue_obj::__mClass;

Dynamic __Create_AMFValue_obj() { return new AMFValue_obj; }

void AMFValue_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("openfl.utils._internal.format.amf.AMFValue",15,dc,f5,e7), ::hx::TCanCast< AMFValue_obj >,AMFValue_obj_sStaticFields,0,
	&__Create_AMFValue_obj, &__Create,
	&super::__SGetClass(), &CreateAMFValue_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &AMFValue_obj::__GetStatic;
}

void AMFValue_obj::__boot()
{
ANull = ::hx::CreateConstEnum< AMFValue_obj >(HX_("ANull",68,7f,f3,a0),6);
AUndefined = ::hx::CreateConstEnum< AMFValue_obj >(HX_("AUndefined",0f,8e,c5,11),5);
}


} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf
