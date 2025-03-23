#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvent
#include <openfl/events/UncaughtErrorEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c2f85669dc13e38b_178_new,"openfl.events.UncaughtErrorEvent","new",0x17652810,"openfl.events.UncaughtErrorEvent.new","openfl/events/UncaughtErrorEvent.hx",178,0x0dad2340)
HX_LOCAL_STACK_FRAME(_hx_pos_c2f85669dc13e38b_185_clone,"openfl.events.UncaughtErrorEvent","clone",0x483db70d,"openfl.events.UncaughtErrorEvent.clone","openfl/events/UncaughtErrorEvent.hx",185,0x0dad2340)
HX_LOCAL_STACK_FRAME(_hx_pos_c2f85669dc13e38b_195_toString,"openfl.events.UncaughtErrorEvent","toString",0x4ef19afc,"openfl.events.UncaughtErrorEvent.toString","openfl/events/UncaughtErrorEvent.hx",195,0x0dad2340)
static const ::String _hx_array_data_4614201e_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("error",c8,cb,29,73),
};
HX_LOCAL_STACK_FRAME(_hx_pos_c2f85669dc13e38b_199___init,"openfl.events.UncaughtErrorEvent","__init",0xd4283480,"openfl.events.UncaughtErrorEvent.__init","openfl/events/UncaughtErrorEvent.hx",199,0x0dad2340)
HX_LOCAL_STACK_FRAME(_hx_pos_c2f85669dc13e38b_94_boot,"openfl.events.UncaughtErrorEvent","boot",0x5936e682,"openfl.events.UncaughtErrorEvent.boot","openfl/events/UncaughtErrorEvent.hx",94,0x0dad2340)
namespace openfl{
namespace events{

void UncaughtErrorEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic error){
            		bool bubbles = __o_bubbles.Default(true);
            		bool cancelable = __o_cancelable.Default(true);
            	HX_STACKFRAME(&_hx_pos_c2f85669dc13e38b_178_new)
HXLINE( 179)		super::__construct(type,bubbles,cancelable,null(),null());
HXLINE( 181)		this->error = error;
            	}

Dynamic UncaughtErrorEvent_obj::__CreateEmpty() { return new UncaughtErrorEvent_obj; }

void *UncaughtErrorEvent_obj::_hx_vtable = 0;

Dynamic UncaughtErrorEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UncaughtErrorEvent_obj > _hx_result = new UncaughtErrorEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool UncaughtErrorEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27730e1f) {
		if (inClassId<=(int)0x08ec4c31) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
		} else {
			return inClassId==(int)0x27730e1f;
		}
	} else {
		return inClassId==(int)0x4a20c7b0 || inClassId==(int)0x53d8fde0;
	}
}

 ::openfl::events::Event UncaughtErrorEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_c2f85669dc13e38b_185_clone)
HXLINE( 186)		 ::openfl::events::UncaughtErrorEvent event =  ::openfl::events::UncaughtErrorEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->error);
HXLINE( 187)		event->target = this->target;
HXLINE( 188)		event->currentTarget = this->currentTarget;
HXLINE( 189)		event->eventPhase = this->eventPhase;
HXLINE( 190)		return event;
            	}


::String UncaughtErrorEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c2f85669dc13e38b_195_toString)
HXDLIN( 195)		return this->_hx___formatToString(HX_("UncaughtErrorEvent",47,72,9a,e0),::Array_obj< ::String >::fromData( _hx_array_data_4614201e_3,4));
            	}


void UncaughtErrorEvent_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_c2f85669dc13e38b_199___init)
HXLINE( 200)		this->super::_hx___init();
HXLINE( 201)		this->error = null();
            	}


::String UncaughtErrorEvent_obj::UNCAUGHT_ERROR;


::hx::ObjectPtr< UncaughtErrorEvent_obj > UncaughtErrorEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic error) {
	::hx::ObjectPtr< UncaughtErrorEvent_obj > __this = new UncaughtErrorEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,error);
	return __this;
}

::hx::ObjectPtr< UncaughtErrorEvent_obj > UncaughtErrorEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic error) {
	UncaughtErrorEvent_obj *__this = (UncaughtErrorEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UncaughtErrorEvent_obj), true, "openfl.events.UncaughtErrorEvent"));
	*(void **)__this = UncaughtErrorEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,error);
	return __this;
}

UncaughtErrorEvent_obj::UncaughtErrorEvent_obj()
{
}

void UncaughtErrorEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UncaughtErrorEvent);
	HX_MARK_MEMBER_NAME(error,"error");
	 ::openfl::events::TextEvent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UncaughtErrorEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(error,"error");
	 ::openfl::events::TextEvent_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val UncaughtErrorEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val UncaughtErrorEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UncaughtErrorEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("error",c8,cb,29,73));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo UncaughtErrorEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(UncaughtErrorEvent_obj,error),HX_("error",c8,cb,29,73)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo UncaughtErrorEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &UncaughtErrorEvent_obj::UNCAUGHT_ERROR,HX_("UNCAUGHT_ERROR",3e,1f,ae,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String UncaughtErrorEvent_obj_sMemberFields[] = {
	HX_("error",c8,cb,29,73),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void UncaughtErrorEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UncaughtErrorEvent_obj::UNCAUGHT_ERROR,"UNCAUGHT_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UncaughtErrorEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UncaughtErrorEvent_obj::UNCAUGHT_ERROR,"UNCAUGHT_ERROR");
};

#endif

::hx::Class UncaughtErrorEvent_obj::__mClass;

static ::String UncaughtErrorEvent_obj_sStaticFields[] = {
	HX_("UNCAUGHT_ERROR",3e,1f,ae,d3),
	::String(null())
};

void UncaughtErrorEvent_obj::__register()
{
	UncaughtErrorEvent_obj _hx_dummy;
	UncaughtErrorEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.UncaughtErrorEvent",1e,20,14,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = UncaughtErrorEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(UncaughtErrorEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(UncaughtErrorEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< UncaughtErrorEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UncaughtErrorEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UncaughtErrorEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UncaughtErrorEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void UncaughtErrorEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c2f85669dc13e38b_94_boot)
HXDLIN(  94)		UNCAUGHT_ERROR = HX_("uncaughtError",f3,98,8b,8b);
            	}
}

} // end namespace openfl
} // end namespace events
