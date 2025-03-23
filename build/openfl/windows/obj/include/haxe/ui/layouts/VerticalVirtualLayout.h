#ifndef INCLUDED_haxe_ui_layouts_VerticalVirtualLayout
#define INCLUDED_haxe_ui_layouts_VerticalVirtualLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_VirtualLayout
#include <haxe/ui/layouts/VirtualLayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,geom,Size)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ScrollViewLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,VerticalVirtualLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,VirtualLayout)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES VerticalVirtualLayout_obj : public  ::haxe::ui::layouts::VirtualLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::VirtualLayout_obj super;
		typedef VerticalVirtualLayout_obj OBJ_;
		VerticalVirtualLayout_obj();

	public:
		enum { _hx_ClassId = 0x32ce0794 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.layouts.VerticalVirtualLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.layouts.VerticalVirtualLayout"); }
		static ::hx::ObjectPtr< VerticalVirtualLayout_obj > __new();
		static ::hx::ObjectPtr< VerticalVirtualLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VerticalVirtualLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VerticalVirtualLayout",9f,0c,42,14); }

		void repositionChildren();

		Float verticalConstraintModifier();
		::Dynamic verticalConstraintModifier_dyn();

		void calculateRangeVisible();

		void updateScroll();

		 ::haxe::ui::geom::Size calcAutoSize(::Array< ::Dynamic> exclusions);

		 ::haxe::ui::layouts::Layout cloneLayout();

		 ::haxe::ui::layouts::Layout self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_VerticalVirtualLayout */ 
