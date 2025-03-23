#ifndef INCLUDED_openfl_net__URLVariables_URLVariables_Impl_
#define INCLUDED_openfl_net__URLVariables_URLVariables_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,net,_URLVariables,URLVariables_Impl_)

namespace openfl{
namespace net{
namespace _URLVariables{


class HXCPP_CLASS_ATTRIBUTES URLVariables_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef URLVariables_Impl__obj OBJ_;
		URLVariables_Impl__obj();

	public:
		enum { _hx_ClassId = 0x5a0b72a2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.net._URLVariables.URLVariables_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.net._URLVariables.URLVariables_Impl_"); }

		inline static ::hx::ObjectPtr< URLVariables_Impl__obj > __new() {
			::hx::ObjectPtr< URLVariables_Impl__obj > __this = new URLVariables_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< URLVariables_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			URLVariables_Impl__obj *__this = (URLVariables_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(URLVariables_Impl__obj), false, "openfl.net._URLVariables.URLVariables_Impl_"));
			*(void **)__this = URLVariables_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~URLVariables_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("URLVariables_Impl_",08,54,39,01); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::Dynamic _new(::String source);
		static ::Dynamic _new_dyn();

		static void decode( ::Dynamic this1,::String source);
		static ::Dynamic decode_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

		static  ::Dynamic __get( ::Dynamic this1,::String key);
		static ::Dynamic __get_dyn();

		static void __set( ::Dynamic this1,::String key,::String value);
		static ::Dynamic __set_dyn();

};

} // end namespace openfl
} // end namespace net
} // end namespace _URLVariables

#endif /* INCLUDED_openfl_net__URLVariables_URLVariables_Impl_ */ 
