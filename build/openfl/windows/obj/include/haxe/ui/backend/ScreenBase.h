#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#define INCLUDED_haxe_ui_backend_ScreenBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_IComponentContainer
#include <haxe/ui/core/IComponentContainer.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
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
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ScreenBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ScreenBase_obj OBJ_;
		ScreenBase_obj();

	public:
		enum { _hx_ClassId = 0x7f344a3f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ScreenBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ScreenBase"); }
		static ::hx::ObjectPtr< ScreenBase_obj > __new();
		static ::hx::ObjectPtr< ScreenBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScreenBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ScreenBase",bd,79,f8,af); }

		::Array< ::Dynamic> rootComponents;
		 ::Dynamic _options;
		 ::Dynamic get_options();
		::Dynamic get_options_dyn();

		 ::Dynamic set_options( ::Dynamic value);
		::Dynamic set_options_dyn();

		Float dpi;
		virtual Float get_dpi();
		::Dynamic get_dpi_dyn();

		virtual ::String get_title();
		::Dynamic get_title_dyn();

		virtual ::String set_title(::String s);
		::Dynamic set_title_dyn();

		Float width;
		virtual Float get_width();
		::Dynamic get_width_dyn();

		Float height;
		virtual Float get_height();
		::Dynamic get_height_dyn();

		Float actualWidth;
		Float get_actualWidth();
		::Dynamic get_actualWidth_dyn();

		Float actualHeight;
		Float get_actualHeight();
		::Dynamic get_actualHeight_dyn();

		bool isRetina;
		bool get_isRetina();
		::Dynamic get_isRetina_dyn();

		 ::haxe::ui::core::Component topComponent;
		 ::haxe::ui::core::Component get_topComponent();
		::Dynamic get_topComponent_dyn();

		virtual  ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component component);
		::Dynamic addComponent_dyn();

		virtual  ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component component,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);
		::Dynamic removeComponent_dyn();

		virtual bool containsComponent( ::haxe::ui::core::Component child);
		::Dynamic containsComponent_dyn();

		virtual void handleSetComponentIndex( ::haxe::ui::core::Component child,int index);
		::Dynamic handleSetComponentIndex_dyn();

		void resizeComponent( ::haxe::ui::core::Component c);
		::Dynamic resizeComponent_dyn();

		void refreshStyleRootComponents();
		::Dynamic refreshStyleRootComponents_dyn();

		void resizeRootComponents();
		::Dynamic resizeRootComponents_dyn();

		void _refreshStyleComponent( ::haxe::ui::core::Component component);
		::Dynamic _refreshStyleComponent_dyn();

		void _onRootComponentResize( ::haxe::ui::events::UIEvent e);
		::Dynamic _onRootComponentResize_dyn();

		void invalidateAll(::String flag);
		::Dynamic invalidateAll_dyn();

		void invalidateChildren( ::haxe::ui::core::Component c,::String flag);
		::Dynamic invalidateChildren_dyn();

		virtual bool supportsEvent(::String type);
		::Dynamic supportsEvent_dyn();

		virtual void mapEvent(::String type, ::Dynamic listener);
		::Dynamic mapEvent_dyn();

		virtual void unmapEvent(::String type, ::Dynamic listener);
		::Dynamic unmapEvent_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ScreenBase */ 
