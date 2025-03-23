#ifndef INCLUDED_haxe_http_HttpBase
#define INCLUDED_haxe_http_HttpBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,http,HttpBase)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace haxe{
namespace http{


class HXCPP_CLASS_ATTRIBUTES HttpBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HttpBase_obj OBJ_;
		HttpBase_obj();

	public:
		enum { _hx_ClassId = 0x10c0921f };

		void __construct(::String url);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.http.HttpBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.http.HttpBase"); }
		static ::hx::ObjectPtr< HttpBase_obj > __new(::String url);
		static ::hx::ObjectPtr< HttpBase_obj > __alloc(::hx::Ctx *_hx_ctx,::String url);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,HttpBase_obj *_hx_obj);
		//~HttpBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HttpBase",d9,cf,1a,f8); }

		::String url;
		 ::haxe::io::Bytes responseBytes;
		::String responseAsString;
		::String postData;
		 ::haxe::io::Bytes postBytes;
		::Array< ::Dynamic> headers;
		::Array< ::Dynamic> params;
		 ::Dynamic emptyOnData;
		Dynamic emptyOnData_dyn() { return emptyOnData;}
		::Dynamic onData;
		inline ::Dynamic &onData_dyn() {return onData; }

		::Dynamic onBytes;
		inline ::Dynamic &onBytes_dyn() {return onBytes; }

		::Dynamic onError;
		inline ::Dynamic &onError_dyn() {return onError; }

		::Dynamic onStatus;
		inline ::Dynamic &onStatus_dyn() {return onStatus; }

		bool hasOnData();
		::Dynamic hasOnData_dyn();

		void success( ::haxe::io::Bytes data);
		::Dynamic success_dyn();

		::String get_responseData();
		::Dynamic get_responseData_dyn();

};

} // end namespace haxe
} // end namespace http

#endif /* INCLUDED_haxe_http_HttpBase */ 
