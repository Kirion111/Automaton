#ifndef INCLUDED_haxe_ui_filters_Blur
#define INCLUDED_haxe_ui_filters_Blur

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_74e540f925efc24d_3_new)
HX_DECLARE_CLASS3(haxe,ui,filters,Blur)
HX_DECLARE_CLASS3(haxe,ui,filters,Filter)

namespace haxe{
namespace ui{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES Blur_obj : public  ::haxe::ui::filters::Filter_obj
{
	public:
		typedef  ::haxe::ui::filters::Filter_obj super;
		typedef Blur_obj OBJ_;
		Blur_obj();

	public:
		enum { _hx_ClassId = 0x43367024 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.filters.Blur")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.filters.Blur"); }

		inline static ::hx::ObjectPtr< Blur_obj > __new() {
			::hx::ObjectPtr< Blur_obj > __this = new Blur_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Blur_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Blur_obj *__this = (Blur_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Blur_obj), false, "haxe.ui.filters.Blur"));
			*(void **)__this = Blur_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_74e540f925efc24d_3_new)
HXDLIN(   3)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Blur_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Blur",c7,6e,f2,2b); }

		static void __boot();
		static ::cpp::VirtualArray DEFAULTS;
		Float amount;
		void parse(::cpp::VirtualArray filterDetails);

};

} // end namespace haxe
} // end namespace ui
} // end namespace filters

#endif /* INCLUDED_haxe_ui_filters_Blur */ 
