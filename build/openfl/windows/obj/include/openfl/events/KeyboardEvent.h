#ifndef INCLUDED_openfl_events_KeyboardEvent
#define INCLUDED_openfl_events_KeyboardEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES KeyboardEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef KeyboardEvent_obj OBJ_;
		KeyboardEvent_obj();

	public:
		enum { _hx_ClassId = 0x4994310a };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_charCodeValue,::hx::Null< int >  __o_keyCodeValue, ::Dynamic keyLocationValue,::hx::Null< bool >  __o_ctrlKeyValue,::hx::Null< bool >  __o_altKeyValue,::hx::Null< bool >  __o_shiftKeyValue,::hx::Null< bool >  __o_controlKeyValue,::hx::Null< bool >  __o_commandKeyValue);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.KeyboardEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.KeyboardEvent"); }
		static ::hx::ObjectPtr< KeyboardEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_charCodeValue,::hx::Null< int >  __o_keyCodeValue, ::Dynamic keyLocationValue,::hx::Null< bool >  __o_ctrlKeyValue,::hx::Null< bool >  __o_altKeyValue,::hx::Null< bool >  __o_shiftKeyValue,::hx::Null< bool >  __o_controlKeyValue,::hx::Null< bool >  __o_commandKeyValue);
		static ::hx::ObjectPtr< KeyboardEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_charCodeValue,::hx::Null< int >  __o_keyCodeValue, ::Dynamic keyLocationValue,::hx::Null< bool >  __o_ctrlKeyValue,::hx::Null< bool >  __o_altKeyValue,::hx::Null< bool >  __o_shiftKeyValue,::hx::Null< bool >  __o_controlKeyValue,::hx::Null< bool >  __o_commandKeyValue);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KeyboardEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KeyboardEvent",d3,8d,88,91); }

		static void __boot();
		static ::String KEY_DOWN;
		static ::String KEY_UP;
		bool altKey;
		int charCode;
		bool commandKey;
		bool controlKey;
		bool ctrlKey;
		int keyCode;
		int keyLocation;
		bool shiftKey;
		bool _hx___updateAfterEventFlag;
		 ::openfl::events::Event clone();

		virtual ::String toString();

		void updateAfterEvent();
		::Dynamic updateAfterEvent_dyn();

		void _hx___init();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_KeyboardEvent */ 
