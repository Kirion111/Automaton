#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFReader
#define INCLUDED_openfl_utils__internal_format_amf_AMFReader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf,AMFReader)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf,AMFValue)

namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf{


class HXCPP_CLASS_ATTRIBUTES AMFReader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AMFReader_obj OBJ_;
		AMFReader_obj();

	public:
		enum { _hx_ClassId = 0x26103655 };

		void __construct( ::haxe::io::Input i);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils._internal.format.amf.AMFReader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.utils._internal.format.amf.AMFReader"); }
		static ::hx::ObjectPtr< AMFReader_obj > __new( ::haxe::io::Input i);
		static ::hx::ObjectPtr< AMFReader_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AMFReader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AMFReader",bd,8e,7c,53); }

		 ::haxe::io::Input i;
		 ::haxe::ds::StringMap readObject();
		::Dynamic readObject_dyn();

		::Array< ::Dynamic> readArray(int n);
		::Dynamic readArray_dyn();

		int readInt();
		::Dynamic readInt_dyn();

		 ::openfl::utils::_internal::format::amf::AMFValue readWithCode(int id);
		::Dynamic readWithCode_dyn();

		 ::openfl::utils::_internal::format::amf::AMFValue read();
		::Dynamic read_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf

#endif /* INCLUDED_openfl_utils__internal_format_amf_AMFReader */ 
