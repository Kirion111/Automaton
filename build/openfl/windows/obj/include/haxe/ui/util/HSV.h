#ifndef INCLUDED_haxe_ui_util_HSV
#define INCLUDED_haxe_ui_util_HSV

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_aab02d088fa7d9db_11_new)
HX_DECLARE_CLASS3(haxe,ui,util,HSV)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES HSV_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HSV_obj OBJ_;
		HSV_obj();

	public:
		enum { _hx_ClassId = 0x04f7196f };

		void __construct(Float h,Float s,Float v);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.HSV")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util.HSV"); }

		inline static ::hx::ObjectPtr< HSV_obj > __new(Float h,Float s,Float v) {
			::hx::ObjectPtr< HSV_obj > __this = new HSV_obj();
			__this->__construct(h,s,v);
			return __this;
		}

		inline static ::hx::ObjectPtr< HSV_obj > __alloc(::hx::Ctx *_hx_ctx,Float h,Float s,Float v) {
			HSV_obj *__this = (HSV_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HSV_obj), false, "haxe.ui.util.HSV"));
			*(void **)__this = HSV_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_aab02d088fa7d9db_11_new)
HXDLIN(  11)		( ( ::haxe::ui::util::HSV)(__this) )->h = h;
HXDLIN(  11)		( ( ::haxe::ui::util::HSV)(__this) )->s = s;
HXDLIN(  11)		( ( ::haxe::ui::util::HSV)(__this) )->v = v;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HSV_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HSV",eb,ea,36,00); }

		Float h;
		Float s;
		Float v;
};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_HSV */ 
