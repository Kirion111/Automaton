#ifndef INCLUDED_haxe_ui_filters_BoxShadow
#define INCLUDED_haxe_ui_filters_BoxShadow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_f4db388ff5c6970b_3_new)
HX_DECLARE_CLASS3(haxe,ui,filters,BoxShadow)
HX_DECLARE_CLASS3(haxe,ui,filters,Filter)

namespace haxe{
namespace ui{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES BoxShadow_obj : public  ::haxe::ui::filters::Filter_obj
{
	public:
		typedef  ::haxe::ui::filters::Filter_obj super;
		typedef BoxShadow_obj OBJ_;
		BoxShadow_obj();

	public:
		enum { _hx_ClassId = 0x74a3f24a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.filters.BoxShadow")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.filters.BoxShadow"); }

		inline static ::hx::ObjectPtr< BoxShadow_obj > __new() {
			::hx::ObjectPtr< BoxShadow_obj > __this = new BoxShadow_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< BoxShadow_obj > __alloc(::hx::Ctx *_hx_ctx) {
			BoxShadow_obj *__this = (BoxShadow_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BoxShadow_obj), false, "haxe.ui.filters.BoxShadow"));
			*(void **)__this = BoxShadow_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f4db388ff5c6970b_3_new)
HXDLIN(   3)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BoxShadow_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BoxShadow",2b,74,e1,fe); }

		static void __boot();
		static ::cpp::VirtualArray DEFAULTS;
		Float offsetX;
		Float offsetY;
		int color;
		Float alpha;
		Float blurRadius;
		Float spreadRadius;
		bool inset;
		void parse(::cpp::VirtualArray filterDetails);

};

} // end namespace haxe
} // end namespace ui
} // end namespace filters

#endif /* INCLUDED_haxe_ui_filters_BoxShadow */ 
