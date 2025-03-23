#ifndef INCLUDED_haxe_ui_components__VerticalScroll_VerticalScrollLayout
#define INCLUDED_haxe_ui_components__VerticalScroll_VerticalScrollLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,components,_VerticalScroll,VerticalScrollLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)

namespace haxe{
namespace ui{
namespace components{
namespace _VerticalScroll{


class HXCPP_CLASS_ATTRIBUTES VerticalScrollLayout_obj : public  ::haxe::ui::layouts::DefaultLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::DefaultLayout_obj super;
		typedef VerticalScrollLayout_obj OBJ_;
		VerticalScrollLayout_obj();

	public:
		enum { _hx_ClassId = 0x6e640bdf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._VerticalScroll.VerticalScrollLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._VerticalScroll.VerticalScrollLayout"); }
		static ::hx::ObjectPtr< VerticalScrollLayout_obj > __new();
		static ::hx::ObjectPtr< VerticalScrollLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VerticalScrollLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VerticalScrollLayout",4d,50,72,e4); }

		void resizeChildren();

		void repositionChildren();

		Float get_usableHeight();

		 ::haxe::ui::layouts::Layout cloneLayout();

		 ::haxe::ui::layouts::Layout self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _VerticalScroll

#endif /* INCLUDED_haxe_ui_components__VerticalScroll_VerticalScrollLayout */ 
