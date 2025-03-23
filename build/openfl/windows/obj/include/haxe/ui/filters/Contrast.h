#ifndef INCLUDED_haxe_ui_filters_Contrast
#define INCLUDED_haxe_ui_filters_Contrast

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_027c0300e7ed4a6f_3_new)
HX_DECLARE_CLASS3(haxe,ui,filters,Contrast)
HX_DECLARE_CLASS3(haxe,ui,filters,Filter)

namespace haxe{
namespace ui{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES Contrast_obj : public  ::haxe::ui::filters::Filter_obj
{
	public:
		typedef  ::haxe::ui::filters::Filter_obj super;
		typedef Contrast_obj OBJ_;
		Contrast_obj();

	public:
		enum { _hx_ClassId = 0x0d801cff };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.filters.Contrast")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.filters.Contrast"); }

		inline static ::hx::ObjectPtr< Contrast_obj > __new() {
			::hx::ObjectPtr< Contrast_obj > __this = new Contrast_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Contrast_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Contrast_obj *__this = (Contrast_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Contrast_obj), false, "haxe.ui.filters.Contrast"));
			*(void **)__this = Contrast_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_027c0300e7ed4a6f_3_new)
HXDLIN(   3)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Contrast_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Contrast",22,a9,63,11); }

		static void __boot();
		static ::cpp::VirtualArray DEFAULTS;
		Float multiplier;
		void parse(::cpp::VirtualArray filterDetails);

};

} // end namespace haxe
} // end namespace ui
} // end namespace filters

#endif /* INCLUDED_haxe_ui_filters_Contrast */ 
