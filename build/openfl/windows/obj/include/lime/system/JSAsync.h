#ifndef INCLUDED_lime_system_JSAsync
#define INCLUDED_lime_system_JSAsync

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_hx_system,JSAsync)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES JSAsync_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef JSAsync_obj OBJ_;
		JSAsync_obj();

	public:
		enum { _hx_ClassId = 0x23f9c9ef };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.system.JSAsync")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.system.JSAsync"); }

		inline static ::hx::ObjectPtr< JSAsync_obj > __new() {
			::hx::ObjectPtr< JSAsync_obj > __this = new JSAsync_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< JSAsync_obj > __alloc(::hx::Ctx *_hx_ctx) {
			JSAsync_obj *__this = (JSAsync_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(JSAsync_obj), false, "lime.system.JSAsync"));
			*(void **)__this = JSAsync_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~JSAsync_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("JSAsync",b3,b5,3e,ee); }

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_JSAsync */ 
