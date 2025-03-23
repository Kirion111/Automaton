#ifndef INCLUDED_haxe_ui_styles_animation_util__Actuator_Ease
#define INCLUDED_haxe_ui_styles_animation_util__Actuator_Ease

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(haxe,ui,styles,animation,util,_Actuator,Ease)

namespace haxe{
namespace ui{
namespace styles{
namespace animation{
namespace util{
namespace _Actuator{


class HXCPP_CLASS_ATTRIBUTES Ease_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Ease_obj OBJ_;
		Ease_obj();

	public:
		enum { _hx_ClassId = 0x795806dc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.styles.animation.util._Actuator.Ease")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.styles.animation.util._Actuator.Ease"); }

		inline static ::hx::ObjectPtr< Ease_obj > __new() {
			::hx::ObjectPtr< Ease_obj > __this = new Ease_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Ease_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Ease_obj *__this = (Ease_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Ease_obj), false, "haxe.ui.styles.animation.util._Actuator.Ease"));
			*(void **)__this = Ease_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Ease_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Ease",0e,b8,e5,2d); }

		static  ::Dynamic get(::String easingFunction);
		static ::Dynamic get_dyn();

		static Float linear(Float k);
		static ::Dynamic linear_dyn();

		static Float easeIn(Float k);
		static ::Dynamic easeIn_dyn();

		static Float easeOut(Float k);
		static ::Dynamic easeOut_dyn();

		static Float easeInOut(Float k);
		static ::Dynamic easeInOut_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
} // end namespace util
} // end namespace _Actuator

#endif /* INCLUDED_haxe_ui_styles_animation_util__Actuator_Ease */ 
