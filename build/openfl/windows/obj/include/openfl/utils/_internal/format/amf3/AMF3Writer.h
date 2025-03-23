#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Writer
#define INCLUDED_openfl_utils__internal_format_amf3_AMF3Writer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,utils,IExternalizable)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf3,AMF3Value)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf3,AMF3Writer)

namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf3{


class HXCPP_CLASS_ATTRIBUTES AMF3Writer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AMF3Writer_obj OBJ_;
		AMF3Writer_obj();

	public:
		enum { _hx_ClassId = 0x286917a3 };

		void __construct( ::haxe::io::Output o);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils._internal.format.amf3.AMF3Writer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.utils._internal.format.amf3.AMF3Writer"); }
		static ::hx::ObjectPtr< AMF3Writer_obj > __new( ::haxe::io::Output o);
		static ::hx::ObjectPtr< AMF3Writer_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Output o);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AMF3Writer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AMF3Writer",ac,2c,91,e4); }

		 ::haxe::io::Output o;
		void writeInt(int i);
		::Dynamic writeInt_dyn();

		void writeUInt(int u,::hx::Null< bool >  shiftLeft);
		::Dynamic writeUInt_dyn();

		void writeString(::String s);
		::Dynamic writeString_dyn();

		void writeIntVector( ::openfl::_Vector::IntVector v);
		::Dynamic writeIntVector_dyn();

		void writeFloatVector( ::openfl::_Vector::FloatVector v);
		::Dynamic writeFloatVector_dyn();

		void writeObjectVector( ::openfl::_Vector::ObjectVector v,::String type);
		::Dynamic writeObjectVector_dyn();

		void writeObject( ::haxe::ds::StringMap h, ::Dynamic size,::String className);
		::Dynamic writeObject_dyn();

		void writeExternal(::Dynamic external);
		::Dynamic writeExternal_dyn();

		void write( ::openfl::utils::_internal::format::amf3::AMF3Value v);
		::Dynamic write_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf3

#endif /* INCLUDED_openfl_utils__internal_format_amf3_AMF3Writer */ 
