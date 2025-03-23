#ifndef INCLUDED_haxe_ui_filters_Saturate
#define INCLUDED_haxe_ui_filters_Saturate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_19a002f19487a264_3_new)
HX_DECLARE_CLASS3(haxe,ui,filters,Filter)
HX_DECLARE_CLASS3(haxe,ui,filters,Saturate)

namespace haxe{
namespace ui{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES Saturate_obj : public  ::haxe::ui::filters::Filter_obj
{
	public:
		typedef  ::haxe::ui::filters::Filter_obj super;
		typedef Saturate_obj OBJ_;
		Saturate_obj();

	public:
		enum { _hx_ClassId = 0x33b3f6d0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.filters.Saturate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.filters.Saturate"); }

		inline static ::hx::ObjectPtr< Saturate_obj > __new() {
			::hx::ObjectPtr< Saturate_obj > __this = new Saturate_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Saturate_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Saturate_obj *__this = (Saturate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Saturate_obj), false, "haxe.ui.filters.Saturate"));
			*(void **)__this = Saturate_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_19a002f19487a264_3_new)
HXDLIN(   3)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Saturate_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Saturate",0f,0c,e9,57); }

		static void __boot();
		static ::cpp::VirtualArray DEFAULTS;
		Float multiplier;
		void parse(::cpp::VirtualArray filterDetails);

};

} // end namespace haxe
} // end namespace ui
} // end namespace filters

#endif /* INCLUDED_haxe_ui_filters_Saturate */ 
