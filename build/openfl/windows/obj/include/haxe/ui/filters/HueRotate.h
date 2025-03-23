#ifndef INCLUDED_haxe_ui_filters_HueRotate
#define INCLUDED_haxe_ui_filters_HueRotate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_00034fad02b51635_3_new)
HX_DECLARE_CLASS3(haxe,ui,filters,Filter)
HX_DECLARE_CLASS3(haxe,ui,filters,HueRotate)

namespace haxe{
namespace ui{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES HueRotate_obj : public  ::haxe::ui::filters::Filter_obj
{
	public:
		typedef  ::haxe::ui::filters::Filter_obj super;
		typedef HueRotate_obj OBJ_;
		HueRotate_obj();

	public:
		enum { _hx_ClassId = 0x5562c332 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.filters.HueRotate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.filters.HueRotate"); }

		inline static ::hx::ObjectPtr< HueRotate_obj > __new() {
			::hx::ObjectPtr< HueRotate_obj > __this = new HueRotate_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HueRotate_obj > __alloc(::hx::Ctx *_hx_ctx) {
			HueRotate_obj *__this = (HueRotate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HueRotate_obj), false, "haxe.ui.filters.HueRotate"));
			*(void **)__this = HueRotate_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_00034fad02b51635_3_new)
HXDLIN(   3)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HueRotate_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HueRotate",13,45,a0,df); }

		static void __boot();
		static ::cpp::VirtualArray DEFAULTS;
		Float angleDegree;
		void parse(::cpp::VirtualArray filterDetails);

};

} // end namespace haxe
} // end namespace ui
} // end namespace filters

#endif /* INCLUDED_haxe_ui_filters_HueRotate */ 
