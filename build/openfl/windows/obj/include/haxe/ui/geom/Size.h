#ifndef INCLUDED_haxe_ui_geom_Size
#define INCLUDED_haxe_ui_geom_Size

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,geom,Size)

namespace haxe{
namespace ui{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Size_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Size_obj OBJ_;
		Size_obj();

	public:
		enum { _hx_ClassId = 0x0ef82b7b };

		void __construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.geom.Size")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.geom.Size"); }
		static ::hx::ObjectPtr< Size_obj > __new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		static ::hx::ObjectPtr< Size_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Size_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Size",e1,cc,2c,37); }

		Float width;
		Float height;
		void round();
		::Dynamic round_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace geom

#endif /* INCLUDED_haxe_ui_geom_Size */ 
