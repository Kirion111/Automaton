#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_events__EventType_EventType_Impl_
#include <haxe/ui/events/_EventType/EventType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5a6c425b6d0dd94d_5_name,"haxe.ui.events._EventType.EventType_Impl_","name",0x2183ba3b,"haxe.ui.events._EventType.EventType_Impl_.name","haxe/ui/events/EventType.hx",5,0x05d4b0ee)
namespace haxe{
namespace ui{
namespace events{
namespace _EventType{

void EventType_Impl__obj::__construct() { }

Dynamic EventType_Impl__obj::__CreateEmpty() { return new EventType_Impl__obj; }

void *EventType_Impl__obj::_hx_vtable = 0;

Dynamic EventType_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventType_Impl__obj > _hx_result = new EventType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x53aab60c;
}

::String EventType_Impl__obj::name(::String name){
            	HX_STACKFRAME(&_hx_pos_5a6c425b6d0dd94d_5_name)
HXDLIN(   5)		return name;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EventType_Impl__obj,name,return )


EventType_Impl__obj::EventType_Impl__obj()
{
}

bool EventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { outValue = name_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EventType_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EventType_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class EventType_Impl__obj::__mClass;

static ::String EventType_Impl__obj_sStaticFields[] = {
	HX_("name",4b,72,ff,48),
	::String(null())
};

void EventType_Impl__obj::__register()
{
	EventType_Impl__obj _hx_dummy;
	EventType_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events._EventType.EventType_Impl_",7e,1e,95,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(EventType_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EventType_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventType_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
} // end namespace _EventType
