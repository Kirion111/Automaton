#ifndef INCLUDED_haxe_ui_styles_elements_ImportElement
#define INCLUDED_haxe_ui_styles_elements_ImportElement

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_3c806458e7607a0b_7_new)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,ImportElement)

namespace haxe{
namespace ui{
namespace styles{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES ImportElement_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ImportElement_obj OBJ_;
		ImportElement_obj();

	public:
		enum { _hx_ClassId = 0x2a33c6a0 };

		void __construct(::String url);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.elements.ImportElement")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.elements.ImportElement"); }

		inline static ::hx::ObjectPtr< ImportElement_obj > __new(::String url) {
			::hx::ObjectPtr< ImportElement_obj > __this = new ImportElement_obj();
			__this->__construct(url);
			return __this;
		}

		inline static ::hx::ObjectPtr< ImportElement_obj > __alloc(::hx::Ctx *_hx_ctx,::String url) {
			ImportElement_obj *__this = (ImportElement_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImportElement_obj), true, "haxe.ui.styles.elements.ImportElement"));
			*(void **)__this = ImportElement_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_3c806458e7607a0b_7_new)
HXDLIN(   7)		( ( ::haxe::ui::styles::elements::ImportElement)(__this) )->url = url;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImportElement_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImportElement",b7,ab,00,52); }

		::String url;
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements

#endif /* INCLUDED_haxe_ui_styles_elements_ImportElement */ 
