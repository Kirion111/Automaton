#ifndef INCLUDED_haxe_ui_events_ItemRendererEvent
#define INCLUDED_haxe_ui_events_ItemRendererEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,events,ItemRendererEvent)
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
namespace events{


class HXCPP_CLASS_ATTRIBUTES ItemRendererEvent_obj : public  ::haxe::ui::events::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::events::UIEvent_obj super;
		typedef ItemRendererEvent_obj OBJ_;
		ItemRendererEvent_obj();

	public:
		enum { _hx_ClassId = 0x477668f1 };

		void __construct(::String type, ::haxe::ui::core::ItemRenderer itemRenderer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.events.ItemRendererEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.events.ItemRendererEvent"); }
		static ::hx::ObjectPtr< ItemRendererEvent_obj > __new(::String type, ::haxe::ui::core::ItemRenderer itemRenderer);
		static ::hx::ObjectPtr< ItemRendererEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::haxe::ui::core::ItemRenderer itemRenderer);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ItemRendererEvent_obj();

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
		::String __ToString() const { return HX_("ItemRendererEvent",a4,da,91,c0); }

		static void __boot();
		static ::String DATA_CHANGED;
		 ::haxe::ui::core::ItemRenderer itemRenderer;
		 ::haxe::ui::events::UIEvent clone();

		void copyFrom( ::haxe::ui::events::UIEvent e);

};

} // end namespace haxe
} // end namespace ui
} // end namespace events

#endif /* INCLUDED_haxe_ui_events_ItemRendererEvent */ 
