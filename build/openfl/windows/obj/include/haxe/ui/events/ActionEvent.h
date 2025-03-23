#ifndef INCLUDED_haxe_ui_events_ActionEvent
#define INCLUDED_haxe_ui_events_ActionEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,events,ActionEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)

namespace haxe{
namespace ui{
namespace events{


class HXCPP_CLASS_ATTRIBUTES ActionEvent_obj : public  ::haxe::ui::events::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::events::UIEvent_obj super;
		typedef ActionEvent_obj OBJ_;
		ActionEvent_obj();

	public:
		enum { _hx_ClassId = 0x2e2e06f1 };

		void __construct(::String type,::String action, ::Dynamic __o_bubble, ::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.events.ActionEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.events.ActionEvent"); }
		static ::hx::ObjectPtr< ActionEvent_obj > __new(::String type,::String action, ::Dynamic __o_bubble, ::Dynamic data);
		static ::hx::ObjectPtr< ActionEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::String action, ::Dynamic __o_bubble, ::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ActionEvent_obj();

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
		::String __ToString() const { return HX_("ActionEvent",64,60,5c,2c); }

		static void __boot();
		static ::String ACTION_START;
		static ::String ACTION_END;
		::String action;
		bool repeater;
		 ::haxe::ui::events::UIEvent clone();

		void copyFrom( ::haxe::ui::events::UIEvent e);

};

} // end namespace haxe
} // end namespace ui
} // end namespace events

#endif /* INCLUDED_haxe_ui_events_ActionEvent */ 
