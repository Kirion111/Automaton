#ifndef INCLUDED_lime__internal_backend_native_TextEventInfo
#define INCLUDED_lime__internal_backend_native_TextEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_48b909785036aaec_882_new)
HX_DECLARE_CLASS4(lime,_internal,backend,native,TextEventInfo)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES TextEventInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextEventInfo_obj OBJ_;
		TextEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x7946ae53 };

		void __construct( ::Dynamic type,::hx::Null< int >  __o_windowID,::String text,::hx::Null< int >  __o_start,::hx::Null< int >  __o_length);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._internal.backend.native.TextEventInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime._internal.backend.native.TextEventInfo"); }

		inline static ::hx::ObjectPtr< TextEventInfo_obj > __new( ::Dynamic type,::hx::Null< int >  __o_windowID,::String text,::hx::Null< int >  __o_start,::hx::Null< int >  __o_length) {
			::hx::ObjectPtr< TextEventInfo_obj > __this = new TextEventInfo_obj();
			__this->__construct(type,__o_windowID,text,__o_start,__o_length);
			return __this;
		}

		inline static ::hx::ObjectPtr< TextEventInfo_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic type,::hx::Null< int >  __o_windowID,::String text,::hx::Null< int >  __o_start,::hx::Null< int >  __o_length) {
			TextEventInfo_obj *__this = (TextEventInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextEventInfo_obj), true, "lime._internal.backend.native.TextEventInfo"));
			*(void **)__this = TextEventInfo_obj::_hx_vtable;
{
            		int windowID = __o_windowID.Default(0);
            		int start = __o_start.Default(0);
            		int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_48b909785036aaec_882_new)
HXLINE( 883)		( ( ::lime::_internal::backend::native::TextEventInfo)(__this) )->type = ( (int)(type) );
HXLINE( 884)		( ( ::lime::_internal::backend::native::TextEventInfo)(__this) )->windowID = windowID;
HXLINE( 885)		( ( ::lime::_internal::backend::native::TextEventInfo)(__this) )->text = text;
HXLINE( 886)		( ( ::lime::_internal::backend::native::TextEventInfo)(__this) )->start = start;
HXLINE( 887)		( ( ::lime::_internal::backend::native::TextEventInfo)(__this) )->length = length;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextEventInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextEventInfo",1b,27,4b,f4); }

		int id;
		int length;
		int start;
		::String text;
		int type;
		int windowID;
		 ::lime::_internal::backend::native::TextEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_TextEventInfo */ 
