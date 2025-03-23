#ifndef INCLUDED_haxe_ui_backend_openfl_filters_HueRotateFilter
#define INCLUDED_haxe_ui_backend_openfl_filters_HueRotateFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,backend,openfl,filters,HueRotateFilter)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,ColorMatrixFilter)

namespace haxe{
namespace ui{
namespace backend{
namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES HueRotateFilter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HueRotateFilter_obj OBJ_;
		HueRotateFilter_obj();

	public:
		enum { _hx_ClassId = 0x4f47a0fa };

		void __construct(::hx::Null< Float >  __o_degreeAngle);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.openfl.filters.HueRotateFilter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.openfl.filters.HueRotateFilter"); }
		static ::hx::ObjectPtr< HueRotateFilter_obj > __new(::hx::Null< Float >  __o_degreeAngle);
		static ::hx::ObjectPtr< HueRotateFilter_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_degreeAngle);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HueRotateFilter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HueRotateFilter",2b,69,83,70); }

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

#endif /* INCLUDED_haxe_ui_backend_openfl_filters_HueRotateFilter */ 
