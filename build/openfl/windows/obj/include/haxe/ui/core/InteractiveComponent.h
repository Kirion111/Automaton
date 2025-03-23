#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#define INCLUDED_haxe_ui_core_InteractiveComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS4(haxe,ui,validators,_Validators,ValidatorsImpl)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES InteractiveComponent_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef InteractiveComponent_obj OBJ_;
		InteractiveComponent_obj();

	public:
		enum { _hx_ClassId = 0x395782b4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.InteractiveComponent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.core.InteractiveComponent"); }
		static ::hx::ObjectPtr< InteractiveComponent_obj > __new();
		static ::hx::ObjectPtr< InteractiveComponent_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InteractiveComponent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("InteractiveComponent",9b,32,67,55); }

		int actionRepeatInterval;
		bool _focus;
		bool get_focus();
		::Dynamic get_focus_dyn();

		bool set_focus(bool value);
		::Dynamic set_focus_dyn();

		bool _allowFocus;
		bool get_allowFocus();
		::Dynamic get_allowFocus_dyn();

		bool set_allowFocus(bool value);
		::Dynamic set_allowFocus_dyn();

		bool _autoFocus;
		bool get_autoFocus();
		::Dynamic get_autoFocus_dyn();

		bool set_autoFocus(bool value);
		::Dynamic set_autoFocus_dyn();

		 ::haxe::ui::validators::_Validators::ValidatorsImpl _validators;
		 ::haxe::ui::validators::_Validators::ValidatorsImpl get_validators();
		::Dynamic get_validators_dyn();

		 ::haxe::ui::validators::_Validators::ValidatorsImpl set_validators( ::haxe::ui::validators::_Validators::ValidatorsImpl value);
		::Dynamic set_validators_dyn();

		void _onInteractiveChange( ::haxe::ui::events::UIEvent event);
		::Dynamic _onInteractiveChange_dyn();

		void onDestroy();

		virtual void registerBehaviours();

		bool get_allowInteraction();
		::Dynamic get_allowInteraction_dyn();

		bool set_allowInteraction(bool value);
		::Dynamic set_allowInteraction_dyn();

		virtual  ::haxe::ui::backend::ComponentBase cloneComponent();

		virtual  ::haxe::ui::backend::ComponentBase self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_InteractiveComponent */ 
