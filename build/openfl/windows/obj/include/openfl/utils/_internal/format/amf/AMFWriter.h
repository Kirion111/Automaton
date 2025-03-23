#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFWriter
#define INCLUDED_openfl_utils__internal_format_amf_AMFWriter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf,AMFValue)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf,AMFWriter)

namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf{


class HXCPP_CLASS_ATTRIBUTES AMFWriter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AMFWriter_obj OBJ_;
		AMFWriter_obj();

	public:
		enum { _hx_ClassId = 0x6dd06129 };

		void __construct( ::haxe::io::Output o);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils._internal.format.amf.AMFWriter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.utils._internal.format.amf.AMFWriter"); }
		static ::hx::ObjectPtr< AMFWriter_obj > __new( ::haxe::io::Output o);
		static ::hx::ObjectPtr< AMFWriter_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Output o);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AMFWriter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AMFWriter",2d,c0,d0,d4); }

		 ::haxe::io::Output o;
		void write( ::openfl::utils::_internal::format::amf::AMFValue v);
		::Dynamic write_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf

#endif /* INCLUDED_openfl_utils__internal_format_amf_AMFWriter */ 
