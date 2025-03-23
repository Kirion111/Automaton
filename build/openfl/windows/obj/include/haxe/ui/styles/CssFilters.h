#ifndef INCLUDED_haxe_ui_styles_CssFilters
#define INCLUDED_haxe_ui_styles_CssFilters

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,filters,Filter)
HX_DECLARE_CLASS3(haxe,ui,styles,CssFilters)

namespace haxe{
namespace ui{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES CssFilters_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CssFilters_obj OBJ_;
		CssFilters_obj();

	public:
		enum { _hx_ClassId = 0x2a5742f4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.styles.CssFilters")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.styles.CssFilters"); }

		inline static ::hx::ObjectPtr< CssFilters_obj > __new() {
			::hx::ObjectPtr< CssFilters_obj > __this = new CssFilters_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CssFilters_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CssFilters_obj *__this = (CssFilters_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CssFilters_obj), false, "haxe.ui.styles.CssFilters"));
			*(void **)__this = CssFilters_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CssFilters_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CssFilters",58,98,30,9e); }

		static void __boot();
		static  ::haxe::ds::StringMap _cssFilters;
		static void registerCssFilter(::String name, ::Dynamic ctor);
		static ::Dynamic registerCssFilter_dyn();

		static bool hasCssFilter(::String name);
		static ::Dynamic hasCssFilter_dyn();

		static  ::Dynamic getCssFilter(::String name);
		static ::Dynamic getCssFilter_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_CssFilters */ 
