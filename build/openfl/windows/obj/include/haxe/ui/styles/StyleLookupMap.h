#ifndef INCLUDED_haxe_ui_styles_StyleLookupMap
#define INCLUDED_haxe_ui_styles_StyleLookupMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,styles,StyleLookupMap)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)

namespace haxe{
namespace ui{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES StyleLookupMap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StyleLookupMap_obj OBJ_;
		StyleLookupMap_obj();

	public:
		enum { _hx_ClassId = 0x750fb18d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.StyleLookupMap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.StyleLookupMap"); }
		static ::hx::ObjectPtr< StyleLookupMap_obj > __new();
		static ::hx::ObjectPtr< StyleLookupMap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StyleLookupMap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StyleLookupMap",f1,88,c9,ec); }

		static  ::haxe::ui::styles::StyleLookupMap _instance;
		static  ::haxe::ui::styles::StyleLookupMap instance;
		static  ::haxe::ui::styles::StyleLookupMap get_instance();
		static ::Dynamic get_instance_dyn();

		 ::haxe::ds::StringMap _valueMap;
		void set(::String name, ::haxe::ui::util::VariantType value);
		::Dynamic set_dyn();

		 ::haxe::ui::util::VariantType get(::String name);
		::Dynamic get_dyn();

		void remove(::String name);
		::Dynamic remove_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_StyleLookupMap */ 
