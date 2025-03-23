#ifndef INCLUDED_haxe_ui_filters_Tint
#define INCLUDED_haxe_ui_filters_Tint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_3b04ed1d1f36f4f9_3_new)
HX_DECLARE_CLASS3(haxe,ui,filters,Filter)
HX_DECLARE_CLASS3(haxe,ui,filters,Tint)

namespace haxe{
namespace ui{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES Tint_obj : public  ::haxe::ui::filters::Filter_obj
{
	public:
		typedef  ::haxe::ui::filters::Filter_obj super;
		typedef Tint_obj OBJ_;
		Tint_obj();

	public:
		enum { _hx_ClassId = 0x4f19fa78 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.filters.Tint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.filters.Tint"); }

		inline static ::hx::ObjectPtr< Tint_obj > __new() {
			::hx::ObjectPtr< Tint_obj > __this = new Tint_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tint_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tint_obj *__this = (Tint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tint_obj), false, "haxe.ui.filters.Tint"));
			*(void **)__this = Tint_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_3b04ed1d1f36f4f9_3_new)
HXDLIN(   3)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tint",1b,f9,d5,37); }

		static void __boot();
		static ::cpp::VirtualArray DEFAULTS;
		int color;
		Float amount;
		void parse(::cpp::VirtualArray filterDetails);

};

} // end namespace haxe
} // end namespace ui
} // end namespace filters

#endif /* INCLUDED_haxe_ui_filters_Tint */ 
