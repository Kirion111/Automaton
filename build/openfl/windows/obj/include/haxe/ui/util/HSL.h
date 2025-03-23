#ifndef INCLUDED_haxe_ui_util_HSL
#define INCLUDED_haxe_ui_util_HSL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e3920487ee966361_4_new)
HX_DECLARE_CLASS3(haxe,ui,util,HSL)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES HSL_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HSL_obj OBJ_;
		HSL_obj();

	public:
		enum { _hx_ClassId = 0x04f71965 };

		void __construct(Float h,Float s,Float l);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.HSL")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util.HSL"); }

		inline static ::hx::ObjectPtr< HSL_obj > __new(Float h,Float s,Float l) {
			::hx::ObjectPtr< HSL_obj > __this = new HSL_obj();
			__this->__construct(h,s,l);
			return __this;
		}

		inline static ::hx::ObjectPtr< HSL_obj > __alloc(::hx::Ctx *_hx_ctx,Float h,Float s,Float l) {
			HSL_obj *__this = (HSL_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HSL_obj), false, "haxe.ui.util.HSL"));
			*(void **)__this = HSL_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e3920487ee966361_4_new)
HXDLIN(   4)		( ( ::haxe::ui::util::HSL)(__this) )->h = h;
HXDLIN(   4)		( ( ::haxe::ui::util::HSL)(__this) )->s = s;
HXDLIN(   4)		( ( ::haxe::ui::util::HSL)(__this) )->l = l;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HSL_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HSL",e1,ea,36,00); }

		Float h;
		Float s;
		Float l;
};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_HSL */ 
