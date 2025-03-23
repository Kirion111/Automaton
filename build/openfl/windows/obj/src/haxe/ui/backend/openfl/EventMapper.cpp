#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_openfl_EventMapper
#include <haxe/ui/backend/openfl/EventMapper.h>
#endif
#ifndef INCLUDED_haxe_ui_events_KeyboardEvent
#include <haxe/ui/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fbc64fb4e7958af5_4_boot,"haxe.ui.backend.openfl.EventMapper","boot",0xef42b397,"haxe.ui.backend.openfl.EventMapper.boot","haxe/ui/backend/openfl/EventMapper.hx",4,0x178046b5)
HX_LOCAL_STACK_FRAME(_hx_pos_fbc64fb4e7958af5_21_boot,"haxe.ui.backend.openfl.EventMapper","boot",0xef42b397,"haxe.ui.backend.openfl.EventMapper.boot","haxe/ui/backend/openfl/EventMapper.hx",21,0x178046b5)
namespace haxe{
namespace ui{
namespace backend{
namespace openfl{

void EventMapper_obj::__construct() { }

Dynamic EventMapper_obj::__CreateEmpty() { return new EventMapper_obj; }

void *EventMapper_obj::_hx_vtable = 0;

Dynamic EventMapper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventMapper_obj > _hx_result = new EventMapper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventMapper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11251af1;
}

 ::haxe::ds::StringMap EventMapper_obj::HAXEUI_TO_OPENFL;

 ::haxe::ds::StringMap EventMapper_obj::OPENFL_TO_HAXEUI;


EventMapper_obj::EventMapper_obj()
{
}

bool EventMapper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"HAXEUI_TO_OPENFL") ) { outValue = ( HAXEUI_TO_OPENFL ); return true; }
		if (HX_FIELD_EQ(inName,"OPENFL_TO_HAXEUI") ) { outValue = ( OPENFL_TO_HAXEUI ); return true; }
	}
	return false;
}

bool EventMapper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"HAXEUI_TO_OPENFL") ) { HAXEUI_TO_OPENFL=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"OPENFL_TO_HAXEUI") ) { OPENFL_TO_HAXEUI=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EventMapper_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo EventMapper_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &EventMapper_obj::HAXEUI_TO_OPENFL,HX_("HAXEUI_TO_OPENFL",4f,e1,d9,a1)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &EventMapper_obj::OPENFL_TO_HAXEUI,HX_("OPENFL_TO_HAXEUI",cf,78,3a,15)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void EventMapper_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventMapper_obj::HAXEUI_TO_OPENFL,"HAXEUI_TO_OPENFL");
	HX_MARK_MEMBER_NAME(EventMapper_obj::OPENFL_TO_HAXEUI,"OPENFL_TO_HAXEUI");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EventMapper_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventMapper_obj::HAXEUI_TO_OPENFL,"HAXEUI_TO_OPENFL");
	HX_VISIT_MEMBER_NAME(EventMapper_obj::OPENFL_TO_HAXEUI,"OPENFL_TO_HAXEUI");
};

#endif

::hx::Class EventMapper_obj::__mClass;

static ::String EventMapper_obj_sStaticFields[] = {
	HX_("HAXEUI_TO_OPENFL",4f,e1,d9,a1),
	HX_("OPENFL_TO_HAXEUI",cf,78,3a,15),
	::String(null())
};

void EventMapper_obj::__register()
{
	EventMapper_obj _hx_dummy;
	EventMapper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.openfl.EventMapper",29,6b,65,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventMapper_obj::__GetStatic;
	__mClass->mSetStaticField = &EventMapper_obj::__SetStatic;
	__mClass->mMarkFunc = EventMapper_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(EventMapper_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EventMapper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EventMapper_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventMapper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventMapper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EventMapper_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_fbc64fb4e7958af5_4_boot)
HXDLIN(   4)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(   4)			_g->set(::haxe::ui::events::MouseEvent_obj::MOUSE_MOVE,HX_("mouseMove",d6,9b,b5,f4));
HXDLIN(   4)			_g->set(::haxe::ui::events::MouseEvent_obj::MOUSE_OVER,HX_("mouseOver",19,4a,0d,f6));
HXDLIN(   4)			_g->set(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT,HX_("mouseOut",69,e7,1d,a4));
HXDLIN(   4)			_g->set(::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN,HX_("mouseDown",27,b1,c2,ee));
HXDLIN(   4)			_g->set(::haxe::ui::events::MouseEvent_obj::MOUSE_UP,HX_("mouseUp",e0,f3,72,c0));
HXDLIN(   4)			_g->set(::haxe::ui::events::MouseEvent_obj::MOUSE_WHEEL,HX_("mouseWheel",36,28,87,e7));
HXDLIN(   4)			_g->set(::haxe::ui::events::MouseEvent_obj::CLICK,HX_("click",48,7c,5e,48));
HXDLIN(   4)			_g->set(::haxe::ui::events::MouseEvent_obj::DBL_CLICK,HX_("doubleClick",77,03,76,cd));
HXDLIN(   4)			_g->set(::haxe::ui::events::MouseEvent_obj::RIGHT_CLICK,HX_("rightClick",cc,62,23,4b));
HXDLIN(   4)			_g->set(::haxe::ui::events::MouseEvent_obj::RIGHT_MOUSE_DOWN,HX_("rightMouseDown",ab,29,d7,cd));
HXDLIN(   4)			_g->set(::haxe::ui::events::MouseEvent_obj::RIGHT_MOUSE_UP,HX_("rightMouseUp",64,83,21,ab));
HXDLIN(   4)			_g->set(::haxe::ui::events::KeyboardEvent_obj::KEY_DOWN,HX_("keyDown",a1,69,47,9c));
HXDLIN(   4)			_g->set(::haxe::ui::events::KeyboardEvent_obj::KEY_UP,HX_("keyUp",da,b9,fe,de));
HXDLIN(   4)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_fbc64fb4e7958af5_4_boot)
HXDLIN(   4)		HAXEUI_TO_OPENFL = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_fbc64fb4e7958af5_21_boot)
HXDLIN(  21)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  21)			_g->set(HX_("mouseMove",d6,9b,b5,f4),::haxe::ui::events::MouseEvent_obj::MOUSE_MOVE);
HXDLIN(  21)			_g->set(HX_("mouseOver",19,4a,0d,f6),::haxe::ui::events::MouseEvent_obj::MOUSE_OVER);
HXDLIN(  21)			_g->set(HX_("mouseOut",69,e7,1d,a4),::haxe::ui::events::MouseEvent_obj::MOUSE_OUT);
HXDLIN(  21)			_g->set(HX_("mouseDown",27,b1,c2,ee),::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN);
HXDLIN(  21)			_g->set(HX_("mouseUp",e0,f3,72,c0),::haxe::ui::events::MouseEvent_obj::MOUSE_UP);
HXDLIN(  21)			_g->set(HX_("mouseWheel",36,28,87,e7),::haxe::ui::events::MouseEvent_obj::MOUSE_WHEEL);
HXDLIN(  21)			_g->set(HX_("click",48,7c,5e,48),::haxe::ui::events::MouseEvent_obj::CLICK);
HXDLIN(  21)			_g->set(HX_("doubleClick",77,03,76,cd),::haxe::ui::events::MouseEvent_obj::DBL_CLICK);
HXDLIN(  21)			_g->set(HX_("rightClick",cc,62,23,4b),::haxe::ui::events::MouseEvent_obj::RIGHT_CLICK);
HXDLIN(  21)			_g->set(HX_("rightMouseDown",ab,29,d7,cd),::haxe::ui::events::MouseEvent_obj::RIGHT_MOUSE_DOWN);
HXDLIN(  21)			_g->set(HX_("rightMouseUp",64,83,21,ab),::haxe::ui::events::MouseEvent_obj::RIGHT_MOUSE_UP);
HXDLIN(  21)			_g->set(HX_("keyDown",a1,69,47,9c),::haxe::ui::events::KeyboardEvent_obj::KEY_DOWN);
HXDLIN(  21)			_g->set(HX_("keyUp",da,b9,fe,de),::haxe::ui::events::KeyboardEvent_obj::KEY_UP);
HXDLIN(  21)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_fbc64fb4e7958af5_21_boot)
HXDLIN(  21)		OPENFL_TO_HAXEUI = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl
