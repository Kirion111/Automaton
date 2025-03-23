#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Array
#define INCLUDED_openfl_utils__internal_format_amf3_AMF3Array

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf3,AMF3Array)

namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf3{


class HXCPP_CLASS_ATTRIBUTES AMF3Array_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AMF3Array_obj OBJ_;
		AMF3Array_obj();

	public:
		enum { _hx_ClassId = 0x7288e055 };

		void __construct(::cpp::VirtualArray initA, ::haxe::ds::StringMap initExtra);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils._internal.format.amf3.AMF3Array")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.utils._internal.format.amf3.AMF3Array"); }
		static ::hx::ObjectPtr< AMF3Array_obj > __new(::cpp::VirtualArray initA, ::haxe::ds::StringMap initExtra);
		static ::hx::ObjectPtr< AMF3Array_obj > __alloc(::hx::Ctx *_hx_ctx,::cpp::VirtualArray initA, ::haxe::ds::StringMap initExtra);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AMF3Array_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AMF3Array",c0,b9,46,3f); }

		static void __boot();
		static  ::Dynamic __meta__;
		::cpp::VirtualArray a;
		 ::haxe::ds::StringMap extra;
};

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf3

#endif /* INCLUDED_openfl_utils__internal_format_amf3_AMF3Array */ 
