#ifndef INCLUDED_haxe_ui_geom_Point
#define INCLUDED_haxe_ui_geom_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,geom,Point)

namespace haxe{
namespace ui{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Point_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();

	public:
		enum { _hx_ClassId = 0x0c1d003a };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.geom.Point")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.geom.Point"); }
		static ::hx::ObjectPtr< Point_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static ::hx::ObjectPtr< Point_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Point_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Point",30,24,bd,59); }

		Float x;
		Float y;
		void add( ::haxe::ui::geom::Point point);
		::Dynamic add_dyn();

		void subtract( ::haxe::ui::geom::Point point);
		::Dynamic subtract_dyn();

		void addCoords(Float dx,Float dy);
		::Dynamic addCoords_dyn();

		void subtractCoords(Float dx,Float dy);
		::Dynamic subtractCoords_dyn();

		 ::haxe::ui::geom::Point sum( ::haxe::ui::geom::Point point);
		::Dynamic sum_dyn();

		 ::haxe::ui::geom::Point diff( ::haxe::ui::geom::Point point);
		::Dynamic diff_dyn();

		 ::haxe::ui::geom::Point orthogonalCW();
		::Dynamic orthogonalCW_dyn();

		 ::haxe::ui::geom::Point orthogonalCCW();
		::Dynamic orthogonalCCW_dyn();

		 ::haxe::ui::geom::Point opposite();
		::Dynamic opposite_dyn();

		void revert();
		::Dynamic revert_dyn();

		void rotate(Float radians);
		::Dynamic rotate_dyn();

		 ::haxe::ui::geom::Point rotated(Float radians);
		::Dynamic rotated_dyn();

		Float length();
		::Dynamic length_dyn();

		void multiply(Float factor);
		::Dynamic multiply_dyn();

		 ::haxe::ui::geom::Point product(Float factor);
		::Dynamic product_dyn();

		void normalize(Float targetLength);
		::Dynamic normalize_dyn();

		 ::haxe::ui::geom::Point normalized(Float targetLength);
		::Dynamic normalized_dyn();

		 ::haxe::ui::geom::Point orth();
		::Dynamic orth_dyn();

		 ::haxe::ui::geom::Point copy();
		::Dynamic copy_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace geom

#endif /* INCLUDED_haxe_ui_geom_Point */ 
