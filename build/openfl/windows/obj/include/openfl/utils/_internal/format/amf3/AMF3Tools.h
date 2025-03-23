#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Tools
#define INCLUDED_openfl_utils__internal_format_amf3_AMF3Tools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(openfl,utils,IExternalizable)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf3,AMF3Tools)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf3,AMF3Value)

namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf3{


class HXCPP_CLASS_ATTRIBUTES AMF3Tools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AMF3Tools_obj OBJ_;
		AMF3Tools_obj();

	public:
		enum { _hx_ClassId = 0x612804d7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.utils._internal.format.amf3.AMF3Tools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.utils._internal.format.amf3.AMF3Tools"); }

		inline static ::hx::ObjectPtr< AMF3Tools_obj > __new() {
			::hx::ObjectPtr< AMF3Tools_obj > __this = new AMF3Tools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AMF3Tools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AMF3Tools_obj *__this = (AMF3Tools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AMF3Tools_obj), false, "openfl.utils._internal.format.amf3.AMF3Tools"));
			*(void **)__this = AMF3Tools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AMF3Tools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AMF3Tools",42,de,e5,2d); }

		static  ::openfl::utils::_internal::format::amf3::AMF3Value encode( ::Dynamic o);
		static ::Dynamic encode_dyn();

		static  ::Dynamic decode( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic decode_dyn();

		static  ::Dynamic undefined( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic undefined_dyn();

		static  ::Dynamic anull( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic anull_dyn();

		static  ::Dynamic _hx_bool( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic _hx_bool_dyn();

		static  ::Dynamic _hx_int( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic _hx_int_dyn();

		static  ::Dynamic number( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic number_dyn();

		static ::String string( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic string_dyn();

		static  ::Date date( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic date_dyn();

		static ::cpp::VirtualArray array( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic array_dyn();

		static  ::openfl::_Vector::IntVector intVector( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic intVector_dyn();

		static  ::openfl::_Vector::FloatVector floatVector( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic floatVector_dyn();

		static  ::openfl::_Vector::ObjectVector objectVector( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic objectVector_dyn();

		static  ::Dynamic object( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic object_dyn();

		static ::Dynamic external( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic external_dyn();

		static  ::Xml xml( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic xml_dyn();

		static  ::openfl::utils::ByteArrayData byteArray( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic byteArray_dyn();

		static  ::haxe::ds::ObjectMap map( ::openfl::utils::_internal::format::amf3::AMF3Value a);
		static ::Dynamic map_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf3

#endif /* INCLUDED_openfl_utils__internal_format_amf3_AMF3Tools */ 
