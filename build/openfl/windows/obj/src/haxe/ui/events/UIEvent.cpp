#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentContainer
#include <haxe/ui/core/IComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events__EventType_EventType_Impl_
#include <haxe/ui/events/_EventType/EventType_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_9_new,"haxe.ui.events.UIEvent","new",0x3c904bd5,"haxe.ui.events.UIEvent.new","haxe/ui/events/UIEvent.hx",9,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_103_cancel,"haxe.ui.events.UIEvent","cancel",0x640c4925,"haxe.ui.events.UIEvent.cancel","haxe/ui/events/UIEvent.hx",103,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_108_clone,"haxe.ui.events.UIEvent","clone",0x694d1612,"haxe.ui.events.UIEvent.clone","haxe/ui/events/UIEvent.hx",108,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_123_copyFrom,"haxe.ui.events.UIEvent","copyFrom",0x5fc7e82a,"haxe.ui.events.UIEvent.copyFrom","haxe/ui/events/UIEvent.hx",123,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_12_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",12,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_14_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",14,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_16_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",16,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_18_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",18,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_21_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",21,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_23_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",23,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_25_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",25,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_28_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",28,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_30_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",30,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_33_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",33,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_35_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",35,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_38_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",38,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_40_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",40,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_43_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",43,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_45_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",45,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_48_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",48,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_51_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",51,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_53_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",53,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_56_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",56,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_59_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",59,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_62_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",62,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_64_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",64,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_67_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",67,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_69_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",69,0xa50e85dc)
namespace haxe{
namespace ui{
namespace events{

void UIEvent_obj::__construct(::String type, ::Dynamic __o_bubble, ::Dynamic data){
            		 ::Dynamic bubble = __o_bubble;
            		if (::hx::IsNull(__o_bubble)) bubble = false;
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_9_new)
HXLINE(  89)		this->relatedComponent = null();
HXLINE(  86)		this->relatedEvent = null();
HXLINE(  97)		this->type = type;
HXLINE(  98)		this->bubble = ( (bool)(bubble) );
HXLINE(  99)		this->data = data;
HXLINE( 100)		this->canceled = false;
            	}

Dynamic UIEvent_obj::__CreateEmpty() { return new UIEvent_obj; }

void *UIEvent_obj::_hx_vtable = 0;

Dynamic UIEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UIEvent_obj > _hx_result = new UIEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool UIEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x77c19191) {
		if (inClassId<=(int)0x3db3e34f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3db3e34f;
		} else {
			return inClassId==(int)0x77c19191;
		}
	} else {
		return inClassId==(int)0x7c6b2860;
	}
}

void UIEvent_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_103_cancel)
HXLINE( 104)		this->super::cancel();
HXLINE( 105)		this->canceled = true;
            	}


 ::haxe::ui::events::UIEvent UIEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_108_clone)
HXLINE( 109)		 ::haxe::ui::events::UIEvent c =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,this->type,null(),null());
HXLINE( 110)		c->type = this->type;
HXLINE( 111)		c->bubble = this->bubble;
HXLINE( 112)		c->target = this->target;
HXLINE( 113)		c->data = this->data;
HXLINE( 114)		c->value = this->value;
HXLINE( 115)		c->previousValue = this->previousValue;
HXLINE( 116)		c->canceled = this->canceled;
HXLINE( 117)		c->relatedEvent = this->relatedEvent;
HXLINE( 118)		c->relatedComponent = this->relatedComponent;
HXLINE( 119)		this->postClone(c);
HXLINE( 120)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(UIEvent_obj,clone,return )

void UIEvent_obj::copyFrom( ::haxe::ui::events::UIEvent c){
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_123_copyFrom)
            	}


HX_DEFINE_DYNAMIC_FUNC1(UIEvent_obj,copyFrom,(void))

::String UIEvent_obj::READY;

::String UIEvent_obj::DESTROY;

::String UIEvent_obj::RESIZE;

::String UIEvent_obj::CHANGE;

::String UIEvent_obj::BEFORE_CHANGE;

::String UIEvent_obj::MOVE;

::String UIEvent_obj::INITIALIZE;

::String UIEvent_obj::SUBMIT_START;

::String UIEvent_obj::SUBMIT;

::String UIEvent_obj::RENDERER_CREATED;

::String UIEvent_obj::RENDERER_DESTROYED;

::String UIEvent_obj::HIDDEN;

::String UIEvent_obj::SHOWN;

::String UIEvent_obj::ENABLED;

::String UIEvent_obj::DISABLED;

::String UIEvent_obj::OPEN;

::String UIEvent_obj::BEFORE_CLOSE;

::String UIEvent_obj::CLOSE;

::String UIEvent_obj::PROPERTY_CHANGE;

::String UIEvent_obj::COMPONENT_CREATED;

::String UIEvent_obj::COMPONENT_ADDED;

::String UIEvent_obj::COMPONENT_REMOVED;

::String UIEvent_obj::COMPONENT_ADDED_TO_PARENT;

::String UIEvent_obj::COMPONENT_REMOVED_FROM_PARENT;


::hx::ObjectPtr< UIEvent_obj > UIEvent_obj::__new(::String type, ::Dynamic __o_bubble, ::Dynamic data) {
	::hx::ObjectPtr< UIEvent_obj > __this = new UIEvent_obj();
	__this->__construct(type,__o_bubble,data);
	return __this;
}

::hx::ObjectPtr< UIEvent_obj > UIEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic __o_bubble, ::Dynamic data) {
	UIEvent_obj *__this = (UIEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UIEvent_obj), true, "haxe.ui.events.UIEvent"));
	*(void **)__this = UIEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubble,data);
	return __this;
}

UIEvent_obj::UIEvent_obj()
{
}

void UIEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIEvent);
	HX_MARK_MEMBER_NAME(bubble,"bubble");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(canceled,"canceled");
	HX_MARK_MEMBER_NAME(relatedEvent,"relatedEvent");
	HX_MARK_MEMBER_NAME(relatedComponent,"relatedComponent");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(previousValue,"previousValue");
	 ::haxe::ui::backend::EventImpl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bubble,"bubble");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(canceled,"canceled");
	HX_VISIT_MEMBER_NAME(relatedEvent,"relatedEvent");
	HX_VISIT_MEMBER_NAME(relatedComponent,"relatedComponent");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(previousValue,"previousValue");
	 ::haxe::ui::backend::EventImpl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val UIEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bubble") ) { return ::hx::Val( bubble ); }
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { return ::hx::Val( canceled ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"relatedEvent") ) { return ::hx::Val( relatedEvent ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"previousValue") ) { return ::hx::Val( previousValue ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"relatedComponent") ) { return ::hx::Val( relatedComponent ); }
	}
	return super::__Field(inName,inCallProp);
}

bool UIEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"MOVE") ) { outValue = ( MOVE ); return true; }
		if (HX_FIELD_EQ(inName,"OPEN") ) { outValue = ( OPEN ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"READY") ) { outValue = ( READY ); return true; }
		if (HX_FIELD_EQ(inName,"SHOWN") ) { outValue = ( SHOWN ); return true; }
		if (HX_FIELD_EQ(inName,"CLOSE") ) { outValue = ( CLOSE ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"RESIZE") ) { outValue = ( RESIZE ); return true; }
		if (HX_FIELD_EQ(inName,"CHANGE") ) { outValue = ( CHANGE ); return true; }
		if (HX_FIELD_EQ(inName,"SUBMIT") ) { outValue = ( SUBMIT ); return true; }
		if (HX_FIELD_EQ(inName,"HIDDEN") ) { outValue = ( HIDDEN ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DESTROY") ) { outValue = ( DESTROY ); return true; }
		if (HX_FIELD_EQ(inName,"ENABLED") ) { outValue = ( ENABLED ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"DISABLED") ) { outValue = ( DISABLED ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"INITIALIZE") ) { outValue = ( INITIALIZE ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SUBMIT_START") ) { outValue = ( SUBMIT_START ); return true; }
		if (HX_FIELD_EQ(inName,"BEFORE_CLOSE") ) { outValue = ( BEFORE_CLOSE ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"BEFORE_CHANGE") ) { outValue = ( BEFORE_CHANGE ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"PROPERTY_CHANGE") ) { outValue = ( PROPERTY_CHANGE ); return true; }
		if (HX_FIELD_EQ(inName,"COMPONENT_ADDED") ) { outValue = ( COMPONENT_ADDED ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RENDERER_CREATED") ) { outValue = ( RENDERER_CREATED ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"COMPONENT_CREATED") ) { outValue = ( COMPONENT_CREATED ); return true; }
		if (HX_FIELD_EQ(inName,"COMPONENT_REMOVED") ) { outValue = ( COMPONENT_REMOVED ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RENDERER_DESTROYED") ) { outValue = ( RENDERER_DESTROYED ); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"COMPONENT_ADDED_TO_PARENT") ) { outValue = ( COMPONENT_ADDED_TO_PARENT ); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"COMPONENT_REMOVED_FROM_PARENT") ) { outValue = ( COMPONENT_REMOVED_FROM_PARENT ); return true; }
	}
	return false;
}

::hx::Val UIEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bubble") ) { bubble=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { canceled=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"relatedEvent") ) { relatedEvent=inValue.Cast<  ::haxe::ui::events::UIEvent >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"previousValue") ) { previousValue=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"relatedComponent") ) { relatedComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UIEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"MOVE") ) { MOVE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"OPEN") ) { OPEN=ioValue.Cast< ::String >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"READY") ) { READY=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"SHOWN") ) { SHOWN=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"CLOSE") ) { CLOSE=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"RESIZE") ) { RESIZE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"CHANGE") ) { CHANGE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"SUBMIT") ) { SUBMIT=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"HIDDEN") ) { HIDDEN=ioValue.Cast< ::String >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DESTROY") ) { DESTROY=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ENABLED") ) { ENABLED=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"DISABLED") ) { DISABLED=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"INITIALIZE") ) { INITIALIZE=ioValue.Cast< ::String >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SUBMIT_START") ) { SUBMIT_START=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"BEFORE_CLOSE") ) { BEFORE_CLOSE=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"BEFORE_CHANGE") ) { BEFORE_CHANGE=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"PROPERTY_CHANGE") ) { PROPERTY_CHANGE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"COMPONENT_ADDED") ) { COMPONENT_ADDED=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RENDERER_CREATED") ) { RENDERER_CREATED=ioValue.Cast< ::String >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"COMPONENT_CREATED") ) { COMPONENT_CREATED=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"COMPONENT_REMOVED") ) { COMPONENT_REMOVED=ioValue.Cast< ::String >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RENDERER_DESTROYED") ) { RENDERER_DESTROYED=ioValue.Cast< ::String >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"COMPONENT_ADDED_TO_PARENT") ) { COMPONENT_ADDED_TO_PARENT=ioValue.Cast< ::String >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"COMPONENT_REMOVED_FROM_PARENT") ) { COMPONENT_REMOVED_FROM_PARENT=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void UIEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bubble",8c,df,ec,cd));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("canceled",59,18,26,1f));
	outFields->push(HX_("relatedEvent",2f,5a,58,83));
	outFields->push(HX_("relatedComponent",52,b1,82,7a));
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("previousValue",ba,8b,ac,58));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo UIEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(UIEvent_obj,bubble),HX_("bubble",8c,df,ec,cd)},
	{::hx::fsString,(int)offsetof(UIEvent_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(UIEvent_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(UIEvent_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsBool,(int)offsetof(UIEvent_obj,canceled),HX_("canceled",59,18,26,1f)},
	{::hx::fsObject /*  ::haxe::ui::events::UIEvent */ ,(int)offsetof(UIEvent_obj,relatedEvent),HX_("relatedEvent",2f,5a,58,83)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(UIEvent_obj,relatedComponent),HX_("relatedComponent",52,b1,82,7a)},
	{::hx::fsObject /*  ::haxe::ui::util::VariantType */ ,(int)offsetof(UIEvent_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsObject /*  ::haxe::ui::util::VariantType */ ,(int)offsetof(UIEvent_obj,previousValue),HX_("previousValue",ba,8b,ac,58)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo UIEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &UIEvent_obj::READY,HX_("READY",43,d8,a8,64)},
	{::hx::fsString,(void *) &UIEvent_obj::DESTROY,HX_("DESTROY",da,00,5a,a4)},
	{::hx::fsString,(void *) &UIEvent_obj::RESIZE,HX_("RESIZE",f4,05,fe,ba)},
	{::hx::fsString,(void *) &UIEvent_obj::CHANGE,HX_("CHANGE",70,3d,f5,69)},
	{::hx::fsString,(void *) &UIEvent_obj::BEFORE_CHANGE,HX_("BEFORE_CHANGE",70,ec,5d,1c)},
	{::hx::fsString,(void *) &UIEvent_obj::MOVE,HX_("MOVE",11,ab,21,33)},
	{::hx::fsString,(void *) &UIEvent_obj::INITIALIZE,HX_("INITIALIZE",50,a5,c4,de)},
	{::hx::fsString,(void *) &UIEvent_obj::SUBMIT_START,HX_("SUBMIT_START",9b,19,08,13)},
	{::hx::fsString,(void *) &UIEvent_obj::SUBMIT,HX_("SUBMIT",18,04,89,4c)},
	{::hx::fsString,(void *) &UIEvent_obj::RENDERER_CREATED,HX_("RENDERER_CREATED",8c,b3,63,fd)},
	{::hx::fsString,(void *) &UIEvent_obj::RENDERER_DESTROYED,HX_("RENDERER_DESTROYED",7d,ca,95,8e)},
	{::hx::fsString,(void *) &UIEvent_obj::HIDDEN,HX_("HIDDEN",6a,ab,18,ff)},
	{::hx::fsString,(void *) &UIEvent_obj::SHOWN,HX_("SHOWN",b1,c0,15,fa)},
	{::hx::fsString,(void *) &UIEvent_obj::ENABLED,HX_("ENABLED",61,d8,04,fe)},
	{::hx::fsString,(void *) &UIEvent_obj::DISABLED,HX_("DISABLED",7c,d1,89,d5)},
	{::hx::fsString,(void *) &UIEvent_obj::OPEN,HX_("OPEN",ca,cb,74,34)},
	{::hx::fsString,(void *) &UIEvent_obj::BEFORE_CLOSE,HX_("BEFORE_CLOSE",98,80,d3,a5)},
	{::hx::fsString,(void *) &UIEvent_obj::CLOSE,HX_("CLOSE",98,4f,51,c6)},
	{::hx::fsString,(void *) &UIEvent_obj::PROPERTY_CHANGE,HX_("PROPERTY_CHANGE",5a,5b,59,42)},
	{::hx::fsString,(void *) &UIEvent_obj::COMPONENT_CREATED,HX_("COMPONENT_CREATED",e6,a8,10,47)},
	{::hx::fsString,(void *) &UIEvent_obj::COMPONENT_ADDED,HX_("COMPONENT_ADDED",3e,88,f7,76)},
	{::hx::fsString,(void *) &UIEvent_obj::COMPONENT_REMOVED,HX_("COMPONENT_REMOVED",9e,12,a6,28)},
	{::hx::fsString,(void *) &UIEvent_obj::COMPONENT_ADDED_TO_PARENT,HX_("COMPONENT_ADDED_TO_PARENT",2d,6c,71,18)},
	{::hx::fsString,(void *) &UIEvent_obj::COMPONENT_REMOVED_FROM_PARENT,HX_("COMPONENT_REMOVED_FROM_PARENT",3e,6c,1f,b5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String UIEvent_obj_sMemberFields[] = {
	HX_("bubble",8c,df,ec,cd),
	HX_("type",ba,f2,08,4d),
	HX_("target",51,f3,ec,86),
	HX_("data",2a,56,63,42),
	HX_("canceled",59,18,26,1f),
	HX_("relatedEvent",2f,5a,58,83),
	HX_("relatedComponent",52,b1,82,7a),
	HX_("value",71,7f,b8,31),
	HX_("previousValue",ba,8b,ac,58),
	HX_("cancel",7a,ed,33,b8),
	HX_("clone",5d,13,63,48),
	HX_("copyFrom",bf,0b,61,c8),
	::String(null()) };

static void UIEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIEvent_obj::READY,"READY");
	HX_MARK_MEMBER_NAME(UIEvent_obj::DESTROY,"DESTROY");
	HX_MARK_MEMBER_NAME(UIEvent_obj::RESIZE,"RESIZE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::BEFORE_CHANGE,"BEFORE_CHANGE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::INITIALIZE,"INITIALIZE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::SUBMIT_START,"SUBMIT_START");
	HX_MARK_MEMBER_NAME(UIEvent_obj::SUBMIT,"SUBMIT");
	HX_MARK_MEMBER_NAME(UIEvent_obj::RENDERER_CREATED,"RENDERER_CREATED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::RENDERER_DESTROYED,"RENDERER_DESTROYED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::HIDDEN,"HIDDEN");
	HX_MARK_MEMBER_NAME(UIEvent_obj::SHOWN,"SHOWN");
	HX_MARK_MEMBER_NAME(UIEvent_obj::ENABLED,"ENABLED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::DISABLED,"DISABLED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::OPEN,"OPEN");
	HX_MARK_MEMBER_NAME(UIEvent_obj::BEFORE_CLOSE,"BEFORE_CLOSE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::PROPERTY_CHANGE,"PROPERTY_CHANGE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::COMPONENT_CREATED,"COMPONENT_CREATED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::COMPONENT_ADDED,"COMPONENT_ADDED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::COMPONENT_REMOVED,"COMPONENT_REMOVED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::COMPONENT_ADDED_TO_PARENT,"COMPONENT_ADDED_TO_PARENT");
	HX_MARK_MEMBER_NAME(UIEvent_obj::COMPONENT_REMOVED_FROM_PARENT,"COMPONENT_REMOVED_FROM_PARENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UIEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIEvent_obj::READY,"READY");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::DESTROY,"DESTROY");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::RESIZE,"RESIZE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::BEFORE_CHANGE,"BEFORE_CHANGE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::INITIALIZE,"INITIALIZE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::SUBMIT_START,"SUBMIT_START");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::SUBMIT,"SUBMIT");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::RENDERER_CREATED,"RENDERER_CREATED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::RENDERER_DESTROYED,"RENDERER_DESTROYED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::HIDDEN,"HIDDEN");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::SHOWN,"SHOWN");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::ENABLED,"ENABLED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::DISABLED,"DISABLED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::OPEN,"OPEN");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::BEFORE_CLOSE,"BEFORE_CLOSE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::PROPERTY_CHANGE,"PROPERTY_CHANGE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::COMPONENT_CREATED,"COMPONENT_CREATED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::COMPONENT_ADDED,"COMPONENT_ADDED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::COMPONENT_REMOVED,"COMPONENT_REMOVED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::COMPONENT_ADDED_TO_PARENT,"COMPONENT_ADDED_TO_PARENT");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::COMPONENT_REMOVED_FROM_PARENT,"COMPONENT_REMOVED_FROM_PARENT");
};

#endif

::hx::Class UIEvent_obj::__mClass;

static ::String UIEvent_obj_sStaticFields[] = {
	HX_("READY",43,d8,a8,64),
	HX_("DESTROY",da,00,5a,a4),
	HX_("RESIZE",f4,05,fe,ba),
	HX_("CHANGE",70,3d,f5,69),
	HX_("BEFORE_CHANGE",70,ec,5d,1c),
	HX_("MOVE",11,ab,21,33),
	HX_("INITIALIZE",50,a5,c4,de),
	HX_("SUBMIT_START",9b,19,08,13),
	HX_("SUBMIT",18,04,89,4c),
	HX_("RENDERER_CREATED",8c,b3,63,fd),
	HX_("RENDERER_DESTROYED",7d,ca,95,8e),
	HX_("HIDDEN",6a,ab,18,ff),
	HX_("SHOWN",b1,c0,15,fa),
	HX_("ENABLED",61,d8,04,fe),
	HX_("DISABLED",7c,d1,89,d5),
	HX_("OPEN",ca,cb,74,34),
	HX_("BEFORE_CLOSE",98,80,d3,a5),
	HX_("CLOSE",98,4f,51,c6),
	HX_("PROPERTY_CHANGE",5a,5b,59,42),
	HX_("COMPONENT_CREATED",e6,a8,10,47),
	HX_("COMPONENT_ADDED",3e,88,f7,76),
	HX_("COMPONENT_REMOVED",9e,12,a6,28),
	HX_("COMPONENT_ADDED_TO_PARENT",2d,6c,71,18),
	HX_("COMPONENT_REMOVED_FROM_PARENT",3e,6c,1f,b5),
	::String(null())
};

void UIEvent_obj::__register()
{
	UIEvent_obj _hx_dummy;
	UIEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.UIEvent",63,bd,86,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UIEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &UIEvent_obj::__SetStatic;
	__mClass->mMarkFunc = UIEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(UIEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(UIEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< UIEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UIEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UIEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UIEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void UIEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_12_boot)
HXDLIN(  12)		READY = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("ready",63,a0,ba,e6));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_14_boot)
HXDLIN(  14)		DESTROY = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("destroy",fa,2c,86,24));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_16_boot)
HXDLIN(  16)		RESIZE = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("resize",f4,59,7b,08));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_18_boot)
HXDLIN(  18)		CHANGE = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("change",70,91,72,b7));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_21_boot)
HXDLIN(  21)		BEFORE_CHANGE = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("beforechange",2f,cf,41,af));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_23_boot)
HXDLIN(  23)		MOVE = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("move",11,e3,60,48));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_25_boot)
HXDLIN(  25)		INITIALIZE = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("initialize",50,31,bb,ec));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_28_boot)
HXDLIN(  28)		SUBMIT_START = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("submitstart",4a,c5,96,d4));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_30_boot)
HXDLIN(  30)		SUBMIT = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("submit",18,58,06,9a));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_33_boot)
HXDLIN(  33)		RENDERER_CREATED = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("renderercreated",05,6f,f5,09));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_35_boot)
HXDLIN(  35)		RENDERER_DESTROYED = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("rendererdestroyed",36,32,a8,2f));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_38_boot)
HXDLIN(  38)		HIDDEN = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("hidden",6a,ff,95,4c));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_40_boot)
HXDLIN(  40)		SHOWN = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("shown",d1,88,27,7c));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_43_boot)
HXDLIN(  43)		ENABLED = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("enabled",81,04,31,7e));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_45_boot)
HXDLIN(  45)		DISABLED = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("disabled",7c,41,04,7c));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_48_boot)
HXDLIN(  48)		OPEN = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("open",ca,03,b4,49));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_51_boot)
HXDLIN(  51)		BEFORE_CLOSE = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("beforeclose",d9,16,93,3a));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_53_boot)
HXDLIN(  53)		CLOSE = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("close",b8,17,63,48));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_56_boot)
HXDLIN(  56)		PROPERTY_CHANGE = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("propertychange",85,47,b1,35));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_59_boot)
HXDLIN(  59)		COMPONENT_CREATED = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("componentcreated",cb,06,b3,67));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_62_boot)
HXDLIN(  62)		COMPONENT_ADDED = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("componentadded",e3,16,1d,d8));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_64_boot)
HXDLIN(  64)		COMPONENT_REMOVED = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("componentremoved",83,70,48,49));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_67_boot)
HXDLIN(  67)		COMPONENT_ADDED_TO_PARENT = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("componentaddedtoparent",c8,6a,5b,68));
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_69_boot)
HXDLIN(  69)		COMPONENT_REMOVED_FROM_PARENT = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("componentremovedfromparent",57,e8,32,f0));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
