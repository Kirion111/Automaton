#ifndef INCLUDED_haxe_ui_styles_CssFunctions
#define INCLUDED_haxe_ui_styles_CssFunctions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,styles,CssFunctions)
HX_DECLARE_CLASS3(haxe,ui,styles,Value)

namespace haxe{
namespace ui{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES CssFunctions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CssFunctions_obj OBJ_;
		CssFunctions_obj();

	public:
		enum { _hx_ClassId = 0x7c753c38 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.styles.CssFunctions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.styles.CssFunctions"); }

		inline static ::hx::ObjectPtr< CssFunctions_obj > __new() {
			::hx::ObjectPtr< CssFunctions_obj > __this = new CssFunctions_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CssFunctions_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CssFunctions_obj *__this = (CssFunctions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CssFunctions_obj), false, "haxe.ui.styles.CssFunctions"));
			*(void **)__this = CssFunctions_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CssFunctions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CssFunctions",38,a2,4d,d0); }

		static void __boot();
		static  ::haxe::ds::StringMap _cssFunctions;
		static void registerCssFunction(::String name, ::Dynamic fn);
		static ::Dynamic registerCssFunction_dyn();

		static bool hasCssFunction(::String name);
		static ::Dynamic hasCssFunction_dyn();

		static  ::Dynamic getCssFunction(::String name);
		static ::Dynamic getCssFunction_dyn();

		static  ::Dynamic calc(::Array< ::Dynamic> vl);
		static ::Dynamic calc_dyn();

		static  ::Dynamic min(::Array< ::Dynamic> vl);
		static ::Dynamic min_dyn();

		static  ::Dynamic max(::Array< ::Dynamic> vl);
		static ::Dynamic max_dyn();

		static  ::Dynamic clamp(::Array< ::Dynamic> vl);
		static ::Dynamic clamp_dyn();

		static  ::Dynamic platformColor(::Array< ::Dynamic> vl);
		static ::Dynamic platformColor_dyn();

		static  ::Dynamic themeIcon(::Array< ::Dynamic> vl);
		static ::Dynamic themeIcon_dyn();

		static  ::Dynamic rgb(::Array< ::Dynamic> vl);
		static ::Dynamic rgb_dyn();

		static  ::Dynamic lookup(::Array< ::Dynamic> vl);
		static ::Dynamic lookup_dyn();

		static  ::Dynamic lighten(::Array< ::Dynamic> vl);
		static ::Dynamic lighten_dyn();

		static  ::Dynamic darken(::Array< ::Dynamic> vl);
		static ::Dynamic darken_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_CssFunctions */ 
