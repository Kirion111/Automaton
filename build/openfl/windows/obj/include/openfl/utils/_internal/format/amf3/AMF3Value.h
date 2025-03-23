#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Value
#define INCLUDED_openfl_utils__internal_format_amf3_AMF3Value

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(openfl,utils,IExternalizable)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf3,AMF3Value)
namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf3{


class AMF3Value_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef AMF3Value_obj OBJ_;

	public:
		AMF3Value_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("openfl.utils._internal.format.amf3.AMF3Value",4d,da,50,6c); }
		::String __ToString() const { return HX_("AMF3Value.",96,59,62,b6) + _hx_tag; }

		static ::openfl::utils::_internal::format::amf3::AMF3Value AArray(::Array< ::Dynamic> values, ::haxe::ds::StringMap extra);
		static ::Dynamic AArray_dyn();
		static ::openfl::utils::_internal::format::amf3::AMF3Value ABool(bool b);
		static ::Dynamic ABool_dyn();
		static ::openfl::utils::_internal::format::amf3::AMF3Value AByteArray( ::openfl::utils::ByteArrayData ba);
		static ::Dynamic AByteArray_dyn();
		static ::openfl::utils::_internal::format::amf3::AMF3Value ADate( ::Date d);
		static ::Dynamic ADate_dyn();
		static ::openfl::utils::_internal::format::amf3::AMF3Value AExternal(::Dynamic o);
		static ::Dynamic AExternal_dyn();
		static ::openfl::utils::_internal::format::amf3::AMF3Value AFloatVector( ::openfl::_Vector::FloatVector v);
		static ::Dynamic AFloatVector_dyn();
		static ::openfl::utils::_internal::format::amf3::AMF3Value AInt(int i);
		static ::Dynamic AInt_dyn();
		static ::openfl::utils::_internal::format::amf3::AMF3Value AIntVector( ::openfl::_Vector::IntVector v);
		static ::Dynamic AIntVector_dyn();
		static ::openfl::utils::_internal::format::amf3::AMF3Value AMap( ::haxe::ds::EnumValueMap m);
		static ::Dynamic AMap_dyn();
		static ::openfl::utils::_internal::format::amf3::AMF3Value ANull;
		static inline ::openfl::utils::_internal::format::amf3::AMF3Value ANull_dyn() { return ANull; }
		static ::openfl::utils::_internal::format::amf3::AMF3Value ANumber(Float f);
		static ::Dynamic ANumber_dyn();
		static ::openfl::utils::_internal::format::amf3::AMF3Value AObject( ::haxe::ds::StringMap fields, ::Dynamic size,::String className);
		static ::Dynamic AObject_dyn();
		static ::openfl::utils::_internal::format::amf3::AMF3Value AObjectVector( ::openfl::_Vector::ObjectVector v,::String type);
		static ::Dynamic AObjectVector_dyn();
		static ::openfl::utils::_internal::format::amf3::AMF3Value AString(::String s);
		static ::Dynamic AString_dyn();
		static ::openfl::utils::_internal::format::amf3::AMF3Value AUndefined;
		static inline ::openfl::utils::_internal::format::amf3::AMF3Value AUndefined_dyn() { return AUndefined; }
		static ::openfl::utils::_internal::format::amf3::AMF3Value AXml( ::Xml x);
		static ::Dynamic AXml_dyn();
};

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf3

#endif /* INCLUDED_openfl_utils__internal_format_amf3_AMF3Value */ 
