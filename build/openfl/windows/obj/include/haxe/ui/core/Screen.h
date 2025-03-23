#ifndef INCLUDED_haxe_ui_core_Screen
#define INCLUDED_haxe_ui_core_Screen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,core,Screen)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,util,EventMap)
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
namespace core{


class HXCPP_CLASS_ATTRIBUTES Screen_obj : public  ::haxe::ui::backend::ScreenImpl_obj
{
	public:
		typedef  ::haxe::ui::backend::ScreenImpl_obj super;
		typedef Screen_obj OBJ_;
		Screen_obj();

	public:
		enum { _hx_ClassId = 0x0f4c0249 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.Screen")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.core.Screen"); }
		static ::hx::ObjectPtr< Screen_obj > __new();
		static ::hx::ObjectPtr< Screen_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Screen_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Screen",8c,af,f1,7b); }

		static  ::haxe::ui::core::Screen _instance;
		static  ::haxe::ui::core::Screen get_instance();
		static ::Dynamic get_instance_dyn();

		 ::haxe::ui::util::EventMap _eventMap;
		 ::Dynamic currentMouseX;
		 ::Dynamic currentMouseY;
		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component component);

		 ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component component,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);

		bool containsComponent( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::Component setComponentIndex( ::haxe::ui::core::Component child,int index);
		::Dynamic setComponentIndex_dyn();

		void moveComponentToFront( ::haxe::ui::core::Component child);
		::Dynamic moveComponentToFront_dyn();

		 ::Dynamic findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String searchType);
		::Dynamic findComponent_dyn();

		::Array< ::Dynamic> findComponentsUnderPoint( ::Dynamic screenX, ::Dynamic screenY,::hx::Class type);
		::Dynamic findComponentsUnderPoint_dyn();

		bool hasComponentUnderPoint( ::Dynamic screenX, ::Dynamic screenY,::hx::Class type);
		::Dynamic hasComponentUnderPoint_dyn();

		::Array< ::Dynamic> findSolidComponentUnderPoint( ::Dynamic screenX, ::Dynamic screenY,::hx::Class type);
		::Dynamic findSolidComponentUnderPoint_dyn();

		bool hasSolidComponentUnderPoint( ::Dynamic screenX, ::Dynamic screenY,::hx::Class type);
		::Dynamic hasSolidComponentUnderPoint_dyn();

		void onThemeChanged();
		::Dynamic onThemeChanged_dyn();

		void onThemeChangedChildren( ::haxe::ui::core::Component c);
		::Dynamic onThemeChangedChildren_dyn();

		void registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  priority);
		::Dynamic registerEvent_dyn();

		bool hasEvent(::String type, ::Dynamic listener);
		::Dynamic hasEvent_dyn();

		void unregisterEvent(::String type, ::Dynamic listener);
		::Dynamic unregisterEvent_dyn();

		void _onMappedEvent( ::haxe::ui::events::UIEvent event);
		::Dynamic _onMappedEvent_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_Screen */ 
