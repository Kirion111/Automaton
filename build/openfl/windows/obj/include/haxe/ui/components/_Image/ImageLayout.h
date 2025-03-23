#ifndef INCLUDED_haxe_ui_components__Image_ImageLayout
#define INCLUDED_haxe_ui_components__Image_ImageLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS4(haxe,ui,components,_Image,ImageLayout)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,geom,Size)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
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
namespace components{
namespace _Image{


class HXCPP_CLASS_ATTRIBUTES ImageLayout_obj : public  ::haxe::ui::layouts::DefaultLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::DefaultLayout_obj super;
		typedef ImageLayout_obj OBJ_;
		ImageLayout_obj();

	public:
		enum { _hx_ClassId = 0x355152f9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._Image.ImageLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._Image.ImageLayout"); }
		static ::hx::ObjectPtr< ImageLayout_obj > __new();
		static ::hx::ObjectPtr< ImageLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageLayout",45,50,2b,85); }

		::String get_imageScaleMode();
		::Dynamic get_imageScaleMode_dyn();

		::String get_imageHorizontalAlign();
		::Dynamic get_imageHorizontalAlign_dyn();

		::String get_imageVerticalAlign();
		::Dynamic get_imageVerticalAlign_dyn();

		void resizeChildren();

		void repositionChildren();

		 ::haxe::ui::geom::Size calcAutoSize(::Array< ::Dynamic> exclusions);

		void refresh();

		void updateClipRect();
		::Dynamic updateClipRect_dyn();

		 ::haxe::ui::layouts::Layout cloneLayout();

		 ::haxe::ui::layouts::Layout self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Image

#endif /* INCLUDED_haxe_ui_components__Image_ImageLayout */ 
