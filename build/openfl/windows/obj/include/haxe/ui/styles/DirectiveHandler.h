#ifndef INCLUDED_haxe_ui_styles_DirectiveHandler
#define INCLUDED_haxe_ui_styles_DirectiveHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,styles,DirectiveHandler)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,Directive)
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
namespace styles{


class HXCPP_CLASS_ATTRIBUTES DirectiveHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DirectiveHandler_obj OBJ_;
		DirectiveHandler_obj();

	public:
		enum { _hx_ClassId = 0x07322fbf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.styles.DirectiveHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.styles.DirectiveHandler"); }
		static ::hx::ObjectPtr< DirectiveHandler_obj > __new();
		static ::hx::ObjectPtr< DirectiveHandler_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DirectiveHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DirectiveHandler",5b,83,cf,c9); }

		static void __boot();
		static  ::haxe::ds::StringMap _directiveHandlers;
		static  ::haxe::ds::StringMap _directiveHandlerInstances;
		static void registerDirectiveHandler(::String name, ::Dynamic ctor);
		static ::Dynamic registerDirectiveHandler_dyn();

		static bool hasDirectiveHandler(::String name);
		static ::Dynamic hasDirectiveHandler_dyn();

		static  ::haxe::ui::styles::DirectiveHandler getDirectiveHandler(::String name);
		static ::Dynamic getDirectiveHandler_dyn();

		void apply( ::haxe::ui::core::Component component, ::haxe::ui::styles::elements::Directive directive);
		::Dynamic apply_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_DirectiveHandler */ 
