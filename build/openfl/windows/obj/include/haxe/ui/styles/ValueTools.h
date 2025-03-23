#ifndef INCLUDED_haxe_ui_styles_ValueTools
#define INCLUDED_haxe_ui_styles_ValueTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS3(haxe,ui,styles,Value)
HX_DECLARE_CLASS3(haxe,ui,styles,ValueTools)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)

namespace haxe{
namespace ui{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES ValueTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ValueTools_obj OBJ_;
		ValueTools_obj();

	public:
		enum { _hx_ClassId = 0x3ea297a6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.styles.ValueTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.styles.ValueTools"); }

		inline static ::hx::ObjectPtr< ValueTools_obj > __new() {
			::hx::ObjectPtr< ValueTools_obj > __this = new ValueTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ValueTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ValueTools_obj *__this = (ValueTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ValueTools_obj), false, "haxe.ui.styles.ValueTools"));
			*(void **)__this = ValueTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ValueTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ValueTools",0a,ed,7b,b2); }

		static void __boot();
		static  ::EReg timeEReg;
		static  ::haxe::ui::styles::Value parse(::String s);
		static ::Dynamic parse_dyn();

		static ::Array< ::String > paramsSplitter(::String s);
		static ::Dynamic paramsSplitter_dyn();

		static ::Array< ::String > extractCalls(::String s);
		static ::Dynamic extractCalls_dyn();

		static int compositeParts( ::haxe::ui::styles::Value value);
		static ::Dynamic compositeParts_dyn();

		static ::Array< ::Dynamic> composite( ::haxe::ui::styles::Value value);
		static ::Dynamic composite_dyn();

		static bool isNum(::String s);
		static ::Dynamic isNum_dyn();

		static  ::haxe::ui::styles::Value parseColor(::String s);
		static ::Dynamic parseColor_dyn();

		static bool validColor(::String s);
		static ::Dynamic validColor_dyn();

		static  ::Dynamic time( ::haxe::ui::styles::Value value);
		static ::Dynamic time_dyn();

		static  ::haxe::ui::util::VariantType variant( ::haxe::ui::styles::Value value);
		static ::Dynamic variant_dyn();

		static ::String string( ::haxe::ui::styles::Value value);
		static ::Dynamic string_dyn();

		static  ::Dynamic _hx_bool( ::haxe::ui::styles::Value value);
		static ::Dynamic _hx_bool_dyn();

		static  ::Dynamic none( ::haxe::ui::styles::Value value);
		static ::Dynamic none_dyn();

		static  ::Dynamic _hx_int( ::haxe::ui::styles::Value value);
		static ::Dynamic _hx_int_dyn();

		static  ::Dynamic _hx_float( ::haxe::ui::styles::Value value);
		static ::Dynamic _hx_float_dyn();

		static  ::Dynamic any( ::haxe::ui::styles::Value v);
		static ::Dynamic any_dyn();

		static ::cpp::VirtualArray array(::Array< ::Dynamic> vl);
		static ::Dynamic array_dyn();

		static  ::Dynamic percent( ::haxe::ui::styles::Value value);
		static ::Dynamic percent_dyn();

		static bool constant( ::haxe::ui::styles::Value value,::String required);
		static ::Dynamic constant_dyn();

		static  ::Dynamic calcDimension( ::haxe::ui::styles::Value value);
		static ::Dynamic calcDimension_dyn();

		static ::String calcEasing( ::haxe::ui::styles::Value value);
		static ::Dynamic calcEasing_dyn();

		static  ::Dynamic call(::String f,::Array< ::Dynamic> vl);
		static ::Dynamic call_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_ValueTools */ 
