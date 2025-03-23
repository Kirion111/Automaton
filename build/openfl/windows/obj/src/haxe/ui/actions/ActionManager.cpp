#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_actions_ActionManager
#include <haxe/ui/actions/ActionManager.h>
#endif
#ifndef INCLUDED_haxe_ui_actions_IActionInputSource
#include <haxe/ui/actions/IActionInputSource.h>
#endif
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
#ifndef INCLUDED_haxe_ui_backend_FocusManagerBase
#include <haxe/ui/backend/FocusManagerBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_FocusManagerImpl
#include <haxe/ui/backend/FocusManagerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TimerImpl
#include <haxe/ui/backend/TimerImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ActionEvent
#include <haxe/ui/events/ActionEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusManager
#include <haxe/ui/focus/FocusManager.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_EventMap
#include <haxe/ui/util/EventMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_64147d2a98fa1903_20_new,"haxe.ui.actions.ActionManager","new",0xbe93a3a6,"haxe.ui.actions.ActionManager.new","haxe/ui/actions/ActionManager.hx",20,0x77f4fb2b)
HX_LOCAL_STACK_FRAME(_hx_pos_64147d2a98fa1903_42_registerEvent,"haxe.ui.actions.ActionManager","registerEvent",0x9d64717d,"haxe.ui.actions.ActionManager.registerEvent","haxe/ui/actions/ActionManager.hx",42,0x77f4fb2b)
HX_LOCAL_STACK_FRAME(_hx_pos_64147d2a98fa1903_49_unregisterEvent,"haxe.ui.actions.ActionManager","unregisterEvent",0x837a0504,"haxe.ui.actions.ActionManager.unregisterEvent","haxe/ui/actions/ActionManager.hx",49,0x77f4fb2b)
HX_LOCAL_STACK_FRAME(_hx_pos_64147d2a98fa1903_56_dispatch,"haxe.ui.actions.ActionManager","dispatch",0xa5e25db4,"haxe.ui.actions.ActionManager.dispatch","haxe/ui/actions/ActionManager.hx",56,0x77f4fb2b)
HX_LOCAL_STACK_FRAME(_hx_pos_64147d2a98fa1903_63_registerInputSource,"haxe.ui.actions.ActionManager","registerInputSource",0x1076e228,"haxe.ui.actions.ActionManager.registerInputSource","haxe/ui/actions/ActionManager.hx",63,0x77f4fb2b)
HX_LOCAL_STACK_FRAME(_hx_pos_64147d2a98fa1903_68_actionStart,"haxe.ui.actions.ActionManager","actionStart",0x933dfe12,"haxe.ui.actions.ActionManager.actionStart","haxe/ui/actions/ActionManager.hx",68,0x77f4fb2b)
HX_LOCAL_STACK_FRAME(_hx_pos_64147d2a98fa1903_99_actionStart,"haxe.ui.actions.ActionManager","actionStart",0x933dfe12,"haxe.ui.actions.ActionManager.actionStart","haxe/ui/actions/ActionManager.hx",99,0x77f4fb2b)
HX_LOCAL_STACK_FRAME(_hx_pos_64147d2a98fa1903_105_actionEnd,"haxe.ui.actions.ActionManager","actionEnd",0x18d0c18b,"haxe.ui.actions.ActionManager.actionEnd","haxe/ui/actions/ActionManager.hx",105,0x77f4fb2b)
HX_LOCAL_STACK_FRAME(_hx_pos_64147d2a98fa1903_23_get_instance,"haxe.ui.actions.ActionManager","get_instance",0x06056798,"haxe.ui.actions.ActionManager.get_instance","haxe/ui/actions/ActionManager.hx",23,0x77f4fb2b)
namespace haxe{
namespace ui{
namespace actions{

void ActionManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_64147d2a98fa1903_20_new)
HXLINE(  37)		this->_repeatActions =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  36)		this->_inputSources = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  35)		this->_events = null();
HXLINE(  33)		this->navigationMethod = HX_("navigationDesktop",a8,f0,a4,76);
            	}

Dynamic ActionManager_obj::__CreateEmpty() { return new ActionManager_obj; }

void *ActionManager_obj::_hx_vtable = 0;

Dynamic ActionManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ActionManager_obj > _hx_result = new ActionManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ActionManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4f0e42d4;
}

void ActionManager_obj::registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  __o_priority){
            		int priority = __o_priority.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_64147d2a98fa1903_42_registerEvent)
HXLINE(  43)		if (::hx::IsNull( this->_events )) {
HXLINE(  44)			this->_events =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  46)		this->_events->add(type,listener,priority);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ActionManager_obj,registerEvent,(void))

void ActionManager_obj::unregisterEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_64147d2a98fa1903_49_unregisterEvent)
HXLINE(  50)		if (::hx::IsNull( this->_events )) {
HXLINE(  51)			return;
            		}
HXLINE(  53)		this->_events->remove(type,listener);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ActionManager_obj,unregisterEvent,(void))

void ActionManager_obj::dispatch( ::haxe::ui::events::ActionEvent event){
            	HX_STACKFRAME(&_hx_pos_64147d2a98fa1903_56_dispatch)
HXLINE(  57)		if (::hx::IsNull( this->_events )) {
HXLINE(  58)			return;
            		}
HXLINE(  60)		this->_events->invoke(event->type,event,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ActionManager_obj,dispatch,(void))

void ActionManager_obj::registerInputSource(::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_64147d2a98fa1903_63_registerInputSource)
HXLINE(  64)		::haxe::ui::actions::IActionInputSource_obj::start(source);
HXLINE(  65)		this->_inputSources->push(source);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ActionManager_obj,registerInputSource,(void))

void ActionManager_obj::actionStart(::String action,::Dynamic source){
            	HX_GC_STACKFRAME(&_hx_pos_64147d2a98fa1903_68_actionStart)
HXDLIN(  68)		 ::haxe::ui::actions::ActionManager _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  69)		::Dynamic currentFocus = ::haxe::ui::focus::FocusManager_obj::get_instance()->get_focus();
HXLINE(  70)		if (::hx::IsNull( currentFocus )) {
HXLINE(  74)			return;
            		}
HXLINE(  77)		if (!(::Std_obj::isOfType(currentFocus,::hx::ClassOf< ::haxe::ui::core::InteractiveComponent >()))) {
HXLINE(  81)			return;
            		}
HXLINE(  84)		 ::haxe::ui::events::ActionEvent actionEvent =  ::haxe::ui::events::ActionEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ActionEvent_obj::ACTION_START,action,null(),null());
HXLINE(  85)		 ::haxe::ui::core::InteractiveComponent c = ::hx::TCast<  ::haxe::ui::core::InteractiveComponent >::cast(currentFocus);
HXLINE(  86)		c->dispatch(actionEvent,null());
HXLINE(  87)		if ((actionEvent->canceled == false)) {
HXLINE(  88)			::String action1 = action;
HXDLIN(  88)			this->dispatch( ::haxe::ui::events::ActionEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ActionEvent_obj::ACTION_START,action1,false,::Type_obj::getClassName(::Type_obj::getClass(source))));
            		}
HXLINE(  90)		if ((actionEvent->repeater == true)) {
HXLINE(  91)			if (this->_repeatActions->exists(action)) {
HXLINE(  92)				 ::Dynamic info = this->_repeatActions->get(action);
HXLINE(  93)				( ( ::haxe::ui::util::Timer)(info->__Field(HX_("timer",c5,bf,35,10),::hx::paccDynamic)) )->stop();
HXLINE(  94)				this->_repeatActions->remove(action);
            			}
HXLINE(  96)			{
            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::Dynamic,source, ::haxe::ui::actions::ActionManager,_gthis,::String,action) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_64147d2a98fa1903_99_actionStart)
HXLINE(  99)					_gthis->actionStart(action,source);
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(  96)				::Dynamic this1 = this->_repeatActions;
HXLINE(  97)				::String action1 = action;
HXLINE(  96)				 ::Dynamic value =  ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("timer",c5,bf,35,10), ::haxe::ui::util::Timer_obj::__alloc( HX_CTX ,c->actionRepeatInterval, ::Dynamic(new _hx_Closure_0(source,_gthis,action))))
            					->setFixed(1,HX_("type",ba,f2,08,4d),action1));
HXDLIN(  96)				( ( ::haxe::ds::StringMap)(this1) )->set(action,value);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ActionManager_obj,actionStart,(void))

void ActionManager_obj::actionEnd(::String action,::Dynamic source){
            	HX_GC_STACKFRAME(&_hx_pos_64147d2a98fa1903_105_actionEnd)
HXLINE( 106)		::Dynamic currentFocus = ::haxe::ui::focus::FocusManager_obj::get_instance()->get_focus();
HXLINE( 107)		if (::hx::IsNull( currentFocus )) {
HXLINE( 108)			return;
            		}
HXLINE( 111)		if (!(::Std_obj::isOfType(currentFocus,::hx::ClassOf< ::haxe::ui::core::InteractiveComponent >()))) {
HXLINE( 115)			return;
            		}
HXLINE( 118)		 ::haxe::ui::events::ActionEvent actionEvent =  ::haxe::ui::events::ActionEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ActionEvent_obj::ACTION_END,action,null(),null());
HXLINE( 119)		 ::haxe::ui::core::InteractiveComponent c = ::hx::TCast<  ::haxe::ui::core::InteractiveComponent >::cast(currentFocus);
HXLINE( 120)		c->dispatch(actionEvent,null());
HXLINE( 121)		if ((actionEvent->canceled == false)) {
HXLINE( 122)			this->dispatch( ::haxe::ui::events::ActionEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ActionEvent_obj::ACTION_END,action,false,::Type_obj::getClassName(::Type_obj::getClass(source))));
            		}
HXLINE( 124)		if (this->_repeatActions->exists(action)) {
HXLINE( 125)			 ::Dynamic info = this->_repeatActions->get(action);
HXLINE( 126)			( ( ::haxe::ui::util::Timer)(info->__Field(HX_("timer",c5,bf,35,10),::hx::paccDynamic)) )->stop();
HXLINE( 127)			this->_repeatActions->remove(action);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ActionManager_obj,actionEnd,(void))

 ::haxe::ui::actions::ActionManager ActionManager_obj::_instance;

 ::haxe::ui::actions::ActionManager ActionManager_obj::instance;

 ::haxe::ui::actions::ActionManager ActionManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_64147d2a98fa1903_23_get_instance)
HXLINE(  24)		if (::hx::IsNull( ::haxe::ui::actions::ActionManager_obj::_instance )) {
HXLINE(  25)			::haxe::ui::actions::ActionManager_obj::_instance =  ::haxe::ui::actions::ActionManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  27)		return ::haxe::ui::actions::ActionManager_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ActionManager_obj,get_instance,return )


::hx::ObjectPtr< ActionManager_obj > ActionManager_obj::__new() {
	::hx::ObjectPtr< ActionManager_obj > __this = new ActionManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ActionManager_obj > ActionManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ActionManager_obj *__this = (ActionManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ActionManager_obj), true, "haxe.ui.actions.ActionManager"));
	*(void **)__this = ActionManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ActionManager_obj::ActionManager_obj()
{
}

void ActionManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ActionManager);
	HX_MARK_MEMBER_NAME(navigationMethod,"navigationMethod");
	HX_MARK_MEMBER_NAME(_events,"_events");
	HX_MARK_MEMBER_NAME(_inputSources,"_inputSources");
	HX_MARK_MEMBER_NAME(_repeatActions,"_repeatActions");
	HX_MARK_END_CLASS();
}

void ActionManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(navigationMethod,"navigationMethod");
	HX_VISIT_MEMBER_NAME(_events,"_events");
	HX_VISIT_MEMBER_NAME(_inputSources,"_inputSources");
	HX_VISIT_MEMBER_NAME(_repeatActions,"_repeatActions");
}

::hx::Val ActionManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_events") ) { return ::hx::Val( _events ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return ::hx::Val( dispatch_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"actionEnd") ) { return ::hx::Val( actionEnd_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"actionStart") ) { return ::hx::Val( actionStart_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_inputSources") ) { return ::hx::Val( _inputSources ); }
		if (HX_FIELD_EQ(inName,"registerEvent") ) { return ::hx::Val( registerEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_repeatActions") ) { return ::hx::Val( _repeatActions ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unregisterEvent") ) { return ::hx::Val( unregisterEvent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"navigationMethod") ) { return ::hx::Val( navigationMethod ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registerInputSource") ) { return ::hx::Val( registerInputSource_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ActionManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val ActionManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_events") ) { _events=inValue.Cast<  ::haxe::ui::util::EventMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_inputSources") ) { _inputSources=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_repeatActions") ) { _repeatActions=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"navigationMethod") ) { navigationMethod=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ActionManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::actions::ActionManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::actions::ActionManager >(); return true; }
	}
	return false;
}

void ActionManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("navigationMethod",95,29,f7,39));
	outFields->push(HX_("_events",b8,60,e1,04));
	outFields->push(HX_("_inputSources",2d,fb,e3,33));
	outFields->push(HX_("_repeatActions",23,f6,13,8a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ActionManager_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ActionManager_obj,navigationMethod),HX_("navigationMethod",95,29,f7,39)},
	{::hx::fsObject /*  ::haxe::ui::util::EventMap */ ,(int)offsetof(ActionManager_obj,_events),HX_("_events",b8,60,e1,04)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ActionManager_obj,_inputSources),HX_("_inputSources",2d,fb,e3,33)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ActionManager_obj,_repeatActions),HX_("_repeatActions",23,f6,13,8a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ActionManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::actions::ActionManager */ ,(void *) &ActionManager_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ui::actions::ActionManager */ ,(void *) &ActionManager_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ActionManager_obj_sMemberFields[] = {
	HX_("navigationMethod",95,29,f7,39),
	HX_("_events",b8,60,e1,04),
	HX_("_inputSources",2d,fb,e3,33),
	HX_("_repeatActions",23,f6,13,8a),
	HX_("registerEvent",b7,8a,2d,6b),
	HX_("unregisterEvent",be,60,a7,28),
	HX_("dispatch",ba,ce,63,1e),
	HX_("registerInputSource",e2,a2,75,df),
	HX_("actionStart",cc,74,70,56),
	HX_("actionEnd",c5,35,92,11),
	::String(null()) };

static void ActionManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActionManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ActionManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ActionManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActionManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ActionManager_obj::instance,"instance");
};

#endif

::hx::Class ActionManager_obj::__mClass;

static ::String ActionManager_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void ActionManager_obj::__register()
{
	ActionManager_obj _hx_dummy;
	ActionManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.actions.ActionManager",b4,98,0b,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ActionManager_obj::__GetStatic;
	__mClass->mSetStaticField = &ActionManager_obj::__SetStatic;
	__mClass->mMarkFunc = ActionManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ActionManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ActionManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ActionManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ActionManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ActionManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ActionManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace actions
