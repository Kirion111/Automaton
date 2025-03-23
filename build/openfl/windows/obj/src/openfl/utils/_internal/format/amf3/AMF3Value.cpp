#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IExternalizable
#include <openfl/utils/IExternalizable.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Value
#include <openfl/utils/_internal/format/amf3/AMF3Value.h>
#endif
namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf3{

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::AArray(::Array< ::Dynamic> values, ::haxe::ds::StringMap extra)
{
	return ::hx::CreateEnum< AMF3Value_obj >(HX_("AArray",98,51,ef,b5),9,2)->_hx_init(0,values)->_hx_init(1,extra);
}

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::ABool(bool b)
{
	return ::hx::CreateEnum< AMF3Value_obj >(HX_("ABool",0b,65,00,99),2,1)->_hx_init(0,b);
}

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::AByteArray( ::openfl::utils::ByteArrayData ba)
{
	return ::hx::CreateEnum< AMF3Value_obj >(HX_("AByteArray",f0,90,7f,30),14,1)->_hx_init(0,ba);
}

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::ADate( ::Date d)
{
	return ::hx::CreateEnum< AMF3Value_obj >(HX_("ADate",0f,37,48,9a),6,1)->_hx_init(0,d);
}

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::AExternal(::Dynamic o)
{
	return ::hx::CreateEnum< AMF3Value_obj >(HX_("AExternal",ac,a7,80,4c),8,1)->_hx_init(0,o);
}

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::AFloatVector( ::openfl::_Vector::FloatVector v)
{
	return ::hx::CreateEnum< AMF3Value_obj >(HX_("AFloatVector",be,74,4c,d4),11,1)->_hx_init(0,v);
}

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::AInt(int i)
{
	return ::hx::CreateEnum< AMF3Value_obj >(HX_("AInt",2e,a3,2e,2b),3,1)->_hx_init(0,i);
}

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::AIntVector( ::openfl::_Vector::IntVector v)
{
	return ::hx::CreateEnum< AMF3Value_obj >(HX_("AIntVector",91,5e,18,31),10,1)->_hx_init(0,v);
}

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::AMap( ::haxe::ds::EnumValueMap m)
{
	return ::hx::CreateEnum< AMF3Value_obj >(HX_("AMap",db,a0,31,2b),15,1)->_hx_init(0,m);
}

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::ANull;

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::ANumber(Float f)
{
	return ::hx::CreateEnum< AMF3Value_obj >(HX_("ANumber",ea,21,02,65),4,1)->_hx_init(0,f);
}

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::AObject( ::haxe::ds::StringMap fields, ::Dynamic size,::String className)
{
	return ::hx::CreateEnum< AMF3Value_obj >(HX_("AObject",e0,19,c7,d8),7,3)->_hx_init(0,fields)->_hx_init(1,size)->_hx_init(2,className);
}

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::AObjectVector( ::openfl::_Vector::ObjectVector v,::String type)
{
	return ::hx::CreateEnum< AMF3Value_obj >(HX_("AObjectVector",c3,e6,59,ef),12,2)->_hx_init(0,v)->_hx_init(1,type);
}

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::AString(::String s)
{
	return ::hx::CreateEnum< AMF3Value_obj >(HX_("AString",f2,c3,b7,d4),5,1)->_hx_init(0,s);
}

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::AUndefined;

::openfl::utils::_internal::format::amf3::AMF3Value AMF3Value_obj::AXml( ::Xml x)
{
	return ::hx::CreateEnum< AMF3Value_obj >(HX_("AXml",16,04,3a,2b),13,1)->_hx_init(0,x);
}

bool AMF3Value_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AArray",98,51,ef,b5)) { outValue = AMF3Value_obj::AArray_dyn(); return true; }
	if (inName==HX_("ABool",0b,65,00,99)) { outValue = AMF3Value_obj::ABool_dyn(); return true; }
	if (inName==HX_("AByteArray",f0,90,7f,30)) { outValue = AMF3Value_obj::AByteArray_dyn(); return true; }
	if (inName==HX_("ADate",0f,37,48,9a)) { outValue = AMF3Value_obj::ADate_dyn(); return true; }
	if (inName==HX_("AExternal",ac,a7,80,4c)) { outValue = AMF3Value_obj::AExternal_dyn(); return true; }
	if (inName==HX_("AFloatVector",be,74,4c,d4)) { outValue = AMF3Value_obj::AFloatVector_dyn(); return true; }
	if (inName==HX_("AInt",2e,a3,2e,2b)) { outValue = AMF3Value_obj::AInt_dyn(); return true; }
	if (inName==HX_("AIntVector",91,5e,18,31)) { outValue = AMF3Value_obj::AIntVector_dyn(); return true; }
	if (inName==HX_("AMap",db,a0,31,2b)) { outValue = AMF3Value_obj::AMap_dyn(); return true; }
	if (inName==HX_("ANull",68,7f,f3,a0)) { outValue = AMF3Value_obj::ANull; return true; }
	if (inName==HX_("ANumber",ea,21,02,65)) { outValue = AMF3Value_obj::ANumber_dyn(); return true; }
	if (inName==HX_("AObject",e0,19,c7,d8)) { outValue = AMF3Value_obj::AObject_dyn(); return true; }
	if (inName==HX_("AObjectVector",c3,e6,59,ef)) { outValue = AMF3Value_obj::AObjectVector_dyn(); return true; }
	if (inName==HX_("AString",f2,c3,b7,d4)) { outValue = AMF3Value_obj::AString_dyn(); return true; }
	if (inName==HX_("AUndefined",0f,8e,c5,11)) { outValue = AMF3Value_obj::AUndefined; return true; }
	if (inName==HX_("AXml",16,04,3a,2b)) { outValue = AMF3Value_obj::AXml_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(AMF3Value_obj)

int AMF3Value_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AArray",98,51,ef,b5)) return 9;
	if (inName==HX_("ABool",0b,65,00,99)) return 2;
	if (inName==HX_("AByteArray",f0,90,7f,30)) return 14;
	if (inName==HX_("ADate",0f,37,48,9a)) return 6;
	if (inName==HX_("AExternal",ac,a7,80,4c)) return 8;
	if (inName==HX_("AFloatVector",be,74,4c,d4)) return 11;
	if (inName==HX_("AInt",2e,a3,2e,2b)) return 3;
	if (inName==HX_("AIntVector",91,5e,18,31)) return 10;
	if (inName==HX_("AMap",db,a0,31,2b)) return 15;
	if (inName==HX_("ANull",68,7f,f3,a0)) return 1;
	if (inName==HX_("ANumber",ea,21,02,65)) return 4;
	if (inName==HX_("AObject",e0,19,c7,d8)) return 7;
	if (inName==HX_("AObjectVector",c3,e6,59,ef)) return 12;
	if (inName==HX_("AString",f2,c3,b7,d4)) return 5;
	if (inName==HX_("AUndefined",0f,8e,c5,11)) return 0;
	if (inName==HX_("AXml",16,04,3a,2b)) return 13;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(AMF3Value_obj,AArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Value_obj,ABool,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Value_obj,AByteArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Value_obj,ADate,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Value_obj,AExternal,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Value_obj,AFloatVector,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Value_obj,AInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Value_obj,AIntVector,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Value_obj,AMap,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Value_obj,ANumber,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(AMF3Value_obj,AObject,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(AMF3Value_obj,AObjectVector,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Value_obj,AString,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Value_obj,AXml,return)

int AMF3Value_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AArray",98,51,ef,b5)) return 2;
	if (inName==HX_("ABool",0b,65,00,99)) return 1;
	if (inName==HX_("AByteArray",f0,90,7f,30)) return 1;
	if (inName==HX_("ADate",0f,37,48,9a)) return 1;
	if (inName==HX_("AExternal",ac,a7,80,4c)) return 1;
	if (inName==HX_("AFloatVector",be,74,4c,d4)) return 1;
	if (inName==HX_("AInt",2e,a3,2e,2b)) return 1;
	if (inName==HX_("AIntVector",91,5e,18,31)) return 1;
	if (inName==HX_("AMap",db,a0,31,2b)) return 1;
	if (inName==HX_("ANull",68,7f,f3,a0)) return 0;
	if (inName==HX_("ANumber",ea,21,02,65)) return 1;
	if (inName==HX_("AObject",e0,19,c7,d8)) return 3;
	if (inName==HX_("AObjectVector",c3,e6,59,ef)) return 2;
	if (inName==HX_("AString",f2,c3,b7,d4)) return 1;
	if (inName==HX_("AUndefined",0f,8e,c5,11)) return 0;
	if (inName==HX_("AXml",16,04,3a,2b)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val AMF3Value_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AArray",98,51,ef,b5)) return AArray_dyn();
	if (inName==HX_("ABool",0b,65,00,99)) return ABool_dyn();
	if (inName==HX_("AByteArray",f0,90,7f,30)) return AByteArray_dyn();
	if (inName==HX_("ADate",0f,37,48,9a)) return ADate_dyn();
	if (inName==HX_("AExternal",ac,a7,80,4c)) return AExternal_dyn();
	if (inName==HX_("AFloatVector",be,74,4c,d4)) return AFloatVector_dyn();
	if (inName==HX_("AInt",2e,a3,2e,2b)) return AInt_dyn();
	if (inName==HX_("AIntVector",91,5e,18,31)) return AIntVector_dyn();
	if (inName==HX_("AMap",db,a0,31,2b)) return AMap_dyn();
	if (inName==HX_("ANull",68,7f,f3,a0)) return ANull;
	if (inName==HX_("ANumber",ea,21,02,65)) return ANumber_dyn();
	if (inName==HX_("AObject",e0,19,c7,d8)) return AObject_dyn();
	if (inName==HX_("AObjectVector",c3,e6,59,ef)) return AObjectVector_dyn();
	if (inName==HX_("AString",f2,c3,b7,d4)) return AString_dyn();
	if (inName==HX_("AUndefined",0f,8e,c5,11)) return AUndefined;
	if (inName==HX_("AXml",16,04,3a,2b)) return AXml_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String AMF3Value_obj_sStaticFields[] = {
	HX_("AUndefined",0f,8e,c5,11),
	HX_("ANull",68,7f,f3,a0),
	HX_("ABool",0b,65,00,99),
	HX_("AInt",2e,a3,2e,2b),
	HX_("ANumber",ea,21,02,65),
	HX_("AString",f2,c3,b7,d4),
	HX_("ADate",0f,37,48,9a),
	HX_("AObject",e0,19,c7,d8),
	HX_("AExternal",ac,a7,80,4c),
	HX_("AArray",98,51,ef,b5),
	HX_("AIntVector",91,5e,18,31),
	HX_("AFloatVector",be,74,4c,d4),
	HX_("AObjectVector",c3,e6,59,ef),
	HX_("AXml",16,04,3a,2b),
	HX_("AByteArray",f0,90,7f,30),
	HX_("AMap",db,a0,31,2b),
	::String(null())
};

::hx::Class AMF3Value_obj::__mClass;

Dynamic __Create_AMF3Value_obj() { return new AMF3Value_obj; }

void AMF3Value_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("openfl.utils._internal.format.amf3.AMF3Value",4d,da,50,6c), ::hx::TCanCast< AMF3Value_obj >,AMF3Value_obj_sStaticFields,0,
	&__Create_AMF3Value_obj, &__Create,
	&super::__SGetClass(), &CreateAMF3Value_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &AMF3Value_obj::__GetStatic;
}

void AMF3Value_obj::__boot()
{
ANull = ::hx::CreateConstEnum< AMF3Value_obj >(HX_("ANull",68,7f,f3,a0),1);
AUndefined = ::hx::CreateConstEnum< AMF3Value_obj >(HX_("AUndefined",0f,8e,c5,11),0);
}


} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf3
