#ifndef INCLUDED_haxe_ui_util_RGBF
#define INCLUDED_haxe_ui_util_RGBF

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_0b2a48cf95df95b6_18_new)
HX_DECLARE_CLASS3(haxe,ui,util,RGBF)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES RGBF_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RGBF_obj OBJ_;
		RGBF_obj();

	public:
		enum { _hx_ClassId = 0x59d21db5 };

		void __construct(Float r,Float g,Float b);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.RGBF")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util.RGBF"); }

		inline static ::hx::ObjectPtr< RGBF_obj > __new(Float r,Float g,Float b) {
			::hx::ObjectPtr< RGBF_obj > __this = new RGBF_obj();
			__this->__construct(r,g,b);
			return __this;
		}

		inline static ::hx::ObjectPtr< RGBF_obj > __alloc(::hx::Ctx *_hx_ctx,Float r,Float g,Float b) {
			RGBF_obj *__this = (RGBF_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RGBF_obj), false, "haxe.ui.util.RGBF"));
			*(void **)__this = RGBF_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_0b2a48cf95df95b6_18_new)
HXDLIN(  18)		( ( ::haxe::ui::util::RGBF)(__this) )->r = r;
HXDLIN(  18)		( ( ::haxe::ui::util::RGBF)(__this) )->g = g;
HXDLIN(  18)		( ( ::haxe::ui::util::RGBF)(__this) )->b = b;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RGBF_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RGBF",b9,98,69,36); }

		Float r;
		Float g;
		Float b;
};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_RGBF */ 
