#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleEvent
#include <haxe/ui/locale/LocaleEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_47d1a8f3c09e7a61_9_new,"haxe.ui.locale.LocaleEvent","new",0x45854ab0,"haxe.ui.locale.LocaleEvent.new","haxe/ui/locale/LocaleEvent.hx",9,0xda97bfe1)
HX_LOCAL_STACK_FRAME(_hx_pos_47d1a8f3c09e7a61_12_clone,"haxe.ui.locale.LocaleEvent","clone",0x58a3c1ad,"haxe.ui.locale.LocaleEvent.clone","haxe/ui/locale/LocaleEvent.hx",12,0xda97bfe1)
HX_LOCAL_STACK_FRAME(_hx_pos_47d1a8f3c09e7a61_6_boot,"haxe.ui.locale.LocaleEvent","boot",0x87350fe2,"haxe.ui.locale.LocaleEvent.boot","haxe/ui/locale/LocaleEvent.hx",6,0xda97bfe1)
namespace haxe{
namespace ui{
namespace locale{

void LocaleEvent_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_47d1a8f3c09e7a61_9_new)
HXDLIN(   9)		super::__construct(type,null(),null());
            	}

Dynamic LocaleEvent_obj::__CreateEmpty() { return new LocaleEvent_obj; }

void *LocaleEvent_obj::_hx_vtable = 0;

Dynamic LocaleEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LocaleEvent_obj > _hx_result = new LocaleEvent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LocaleEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3db3e34f) {
		if (inClassId<=(int)0x0b96d16c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b96d16c;
		} else {
			return inClassId==(int)0x3db3e34f;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

 ::haxe::ui::events::UIEvent LocaleEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_47d1a8f3c09e7a61_12_clone)
HXLINE(  13)		 ::haxe::ui::locale::LocaleEvent c =  ::haxe::ui::locale::LocaleEvent_obj::__alloc( HX_CTX ,this->type);
HXLINE(  14)		return c;
            	}


::String LocaleEvent_obj::LOCALE_CHANGED;


::hx::ObjectPtr< LocaleEvent_obj > LocaleEvent_obj::__new(::String type) {
	::hx::ObjectPtr< LocaleEvent_obj > __this = new LocaleEvent_obj();
	__this->__construct(type);
	return __this;
}

::hx::ObjectPtr< LocaleEvent_obj > LocaleEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type) {
	LocaleEvent_obj *__this = (LocaleEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LocaleEvent_obj), true, "haxe.ui.locale.LocaleEvent"));
	*(void **)__this = LocaleEvent_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

LocaleEvent_obj::LocaleEvent_obj()
{
}

::hx::Val LocaleEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LocaleEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo LocaleEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &LocaleEvent_obj::LOCALE_CHANGED,HX_("LOCALE_CHANGED",ef,28,f4,b6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LocaleEvent_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void LocaleEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LocaleEvent_obj::LOCALE_CHANGED,"LOCALE_CHANGED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LocaleEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LocaleEvent_obj::LOCALE_CHANGED,"LOCALE_CHANGED");
};

#endif

::hx::Class LocaleEvent_obj::__mClass;

static ::String LocaleEvent_obj_sStaticFields[] = {
	HX_("LOCALE_CHANGED",ef,28,f4,b6),
	::String(null())
};

void LocaleEvent_obj::__register()
{
	LocaleEvent_obj _hx_dummy;
	LocaleEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.locale.LocaleEvent",be,72,86,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LocaleEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LocaleEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LocaleEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LocaleEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LocaleEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocaleEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocaleEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LocaleEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_47d1a8f3c09e7a61_6_boot)
HXDLIN(   6)		LOCALE_CHANGED = HX_("localeChanged",7a,8b,4d,ca);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace locale
