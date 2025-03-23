#ifndef INCLUDED_haxe_ui_backend_openfl_filters_TintFilter
#define INCLUDED_haxe_ui_backend_openfl_filters_TintFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,backend,openfl,filters,TintFilter)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,ColorMatrixFilter)

namespace haxe{
namespace ui{
namespace backend{
namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES TintFilter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TintFilter_obj OBJ_;
		TintFilter_obj();

	public:
		enum { _hx_ClassId = 0x0450dec0 };

		void __construct(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_amount);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.openfl.filters.TintFilter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.openfl.filters.TintFilter"); }
		static ::hx::ObjectPtr< TintFilter_obj > __new(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_amount);
		static ::hx::ObjectPtr< TintFilter_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_amount);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TintFilter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TintFilter",33,d3,a3,c2); }

		static void __boot();
		static Float LUMA_R;
		static Float LUMA_G;
		static Float LUMA_B;
		 ::openfl::filters::ColorMatrixFilter filter;
};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_haxe_ui_backend_openfl_filters_TintFilter */ 
