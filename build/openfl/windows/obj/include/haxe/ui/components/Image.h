#ifndef INCLUDED_haxe_ui_components_Image
#define INCLUDED_haxe_ui_components_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,components,Image)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
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


class HXCPP_CLASS_ATTRIBUTES Image_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef Image_obj OBJ_;
		Image_obj();

	public:
		enum { _hx_ClassId = 0x084a77ff };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.Image")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.Image"); }
		static ::hx::ObjectPtr< Image_obj > __new();
		static ::hx::ObjectPtr< Image_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Image_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Image",3b,8f,96,50); }

		void registerComposite();

		void registerBehaviours();

		 ::haxe::ui::util::VariantType get_resource();
		::Dynamic get_resource_dyn();

		 ::haxe::ui::util::VariantType set_resource( ::haxe::ui::util::VariantType value);
		::Dynamic set_resource_dyn();

		::String get_scaleMode();
		::Dynamic get_scaleMode_dyn();

		::String set_scaleMode(::String value);
		::Dynamic set_scaleMode_dyn();

		::String get_imageHorizontalAlign();
		::Dynamic get_imageHorizontalAlign_dyn();

		::String set_imageHorizontalAlign(::String value);
		::Dynamic set_imageHorizontalAlign_dyn();

		::String get_imageVerticalAlign();
		::Dynamic get_imageVerticalAlign_dyn();

		::String set_imageVerticalAlign(::String value);
		::Dynamic set_imageVerticalAlign_dyn();

		Float get_originalWidth();
		::Dynamic get_originalWidth_dyn();

		Float set_originalWidth(Float value);
		::Dynamic set_originalWidth_dyn();

		Float get_originalHeight();
		::Dynamic get_originalHeight_dyn();

		Float set_originalHeight(Float value);
		::Dynamic set_originalHeight_dyn();

		Float get_imageScale();
		::Dynamic get_imageScale_dyn();

		Float set_imageScale(Float value);
		::Dynamic set_imageScale_dyn();

		 ::Dynamic get_value();

		 ::Dynamic set_value( ::Dynamic value);

		 ::haxe::ui::backend::ComponentBase cloneComponent();

		 ::haxe::ui::backend::ComponentBase self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_Image */ 
