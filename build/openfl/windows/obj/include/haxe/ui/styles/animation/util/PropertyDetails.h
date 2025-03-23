#ifndef INCLUDED_haxe_ui_styles_animation_util_PropertyDetails
#define INCLUDED_haxe_ui_styles_animation_util_PropertyDetails

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_44b0ea3dfecdba61_3_new)
HX_DECLARE_CLASS5(haxe,ui,styles,animation,util,PropertyDetails)

namespace haxe{
namespace ui{
namespace styles{
namespace animation{
namespace util{


class HXCPP_CLASS_ATTRIBUTES PropertyDetails_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PropertyDetails_obj OBJ_;
		PropertyDetails_obj();

	public:
		enum { _hx_ClassId = 0x63155a23 };

		void __construct( ::Dynamic target,::String propertyName,Float start,Float change);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.animation.util.PropertyDetails")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.animation.util.PropertyDetails"); }

		inline static ::hx::ObjectPtr< PropertyDetails_obj > __new( ::Dynamic target,::String propertyName,Float start,Float change) {
			::hx::ObjectPtr< PropertyDetails_obj > __this = new PropertyDetails_obj();
			__this->__construct(target,propertyName,start,change);
			return __this;
		}

		inline static ::hx::ObjectPtr< PropertyDetails_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,::String propertyName,Float start,Float change) {
			PropertyDetails_obj *__this = (PropertyDetails_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertyDetails_obj), true, "haxe.ui.styles.animation.util.PropertyDetails"));
			*(void **)__this = PropertyDetails_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_44b0ea3dfecdba61_3_new)
HXLINE(   8)		( ( ::haxe::ui::styles::animation::util::PropertyDetails)(__this) )->lastValue = null();
HXLINE(  11)		( ( ::haxe::ui::styles::animation::util::PropertyDetails)(__this) )->target = target;
HXLINE(  12)		( ( ::haxe::ui::styles::animation::util::PropertyDetails)(__this) )->propertyName = propertyName;
HXLINE(  13)		( ( ::haxe::ui::styles::animation::util::PropertyDetails)(__this) )->start = start;
HXLINE(  14)		( ( ::haxe::ui::styles::animation::util::PropertyDetails)(__this) )->change = change;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PropertyDetails_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PropertyDetails",cd,a8,d4,d1); }

		Float change;
		::String propertyName;
		Float start;
		 ::Dynamic target;
		 ::Dynamic lastValue;
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
} // end namespace util

#endif /* INCLUDED_haxe_ui_styles_animation_util_PropertyDetails */ 
