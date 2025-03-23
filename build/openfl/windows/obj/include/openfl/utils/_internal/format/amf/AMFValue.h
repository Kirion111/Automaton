#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFValue
#define INCLUDED_openfl_utils__internal_format_amf_AMFValue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf,AMFValue)
namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf{


class AMFValue_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef AMFValue_obj OBJ_;

	public:
		AMFValue_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("openfl.utils._internal.format.amf.AMFValue",15,dc,f5,e7); }
		::String __ToString() const { return HX_("AMFValue.",17,ed,a1,a6) + _hx_tag; }

		static ::openfl::utils::_internal::format::amf::AMFValue AArray(::Array< ::Dynamic> values);
		static ::Dynamic AArray_dyn();
		static ::openfl::utils::_internal::format::amf::AMFValue ABool(bool b);
		static ::Dynamic ABool_dyn();
		static ::openfl::utils::_internal::format::amf::AMFValue ADate( ::Date d);
		static ::Dynamic ADate_dyn();
		static ::openfl::utils::_internal::format::amf::AMFValue ANull;
		static inline ::openfl::utils::_internal::format::amf::AMFValue ANull_dyn() { return ANull; }
		static ::openfl::utils::_internal::format::amf::AMFValue ANumber(Float f);
		static ::Dynamic ANumber_dyn();
		static ::openfl::utils::_internal::format::amf::AMFValue AObject( ::haxe::ds::StringMap fields, ::Dynamic size);
		static ::Dynamic AObject_dyn();
		static ::openfl::utils::_internal::format::amf::AMFValue AString(::String s);
		static ::Dynamic AString_dyn();
		static ::openfl::utils::_internal::format::amf::AMFValue AUndefined;
		static inline ::openfl::utils::_internal::format::amf::AMFValue AUndefined_dyn() { return AUndefined; }
};

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf

#endif /* INCLUDED_openfl_utils__internal_format_amf_AMFValue */ 
