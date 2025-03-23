#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b09527e17bebd012_122_new,"openfl.events.ProgressEvent","new",0xeed66288,"openfl.events.ProgressEvent.new","openfl/events/ProgressEvent.hx",122,0xea3bf808)
HX_LOCAL_STACK_FRAME(_hx_pos_b09527e17bebd012_130_clone,"openfl.events.ProgressEvent","clone",0xca4c7f85,"openfl.events.ProgressEvent.clone","openfl/events/ProgressEvent.hx",130,0xea3bf808)
HX_LOCAL_STACK_FRAME(_hx_pos_b09527e17bebd012_140_toString,"openfl.events.ProgressEvent","toString",0x8ba16d84,"openfl.events.ProgressEvent.toString","openfl/events/ProgressEvent.hx",140,0xea3bf808)
static const ::String _hx_array_data_cbc8be96_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("bytesLoaded",d0,66,ca,99),HX_("bytesTotal",59,57,da,45),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b09527e17bebd012_144___init,"openfl.events.ProgressEvent","__init",0x1f08d508,"openfl.events.ProgressEvent.__init","openfl/events/ProgressEvent.hx",144,0xea3bf808)
HX_LOCAL_STACK_FRAME(_hx_pos_b09527e17bebd012_34_boot,"openfl.events.ProgressEvent","boot",0x04d8d50a,"openfl.events.ProgressEvent.boot","openfl/events/ProgressEvent.hx",34,0xea3bf808)
HX_LOCAL_STACK_FRAME(_hx_pos_b09527e17bebd012_50_boot,"openfl.events.ProgressEvent","boot",0x04d8d50a,"openfl.events.ProgressEvent.boot","openfl/events/ProgressEvent.hx",50,0xea3bf808)
HX_LOCAL_STACK_FRAME(_hx_pos_b09527e17bebd012_67_boot,"openfl.events.ProgressEvent","boot",0x04d8d50a,"openfl.events.ProgressEvent.boot","openfl/events/ProgressEvent.hx",67,0xea3bf808)
HX_LOCAL_STACK_FRAME(_hx_pos_b09527e17bebd012_83_boot,"openfl.events.ProgressEvent","boot",0x04d8d50a,"openfl.events.ProgressEvent.boot","openfl/events/ProgressEvent.hx",83,0xea3bf808)
namespace openfl{
namespace events{

void ProgressEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< Float >  __o_bytesLoaded,::hx::Null< Float >  __o_bytesTotal){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		Float bytesLoaded = __o_bytesLoaded.Default(0);
            		Float bytesTotal = __o_bytesTotal.Default(0);
            	HX_STACKFRAME(&_hx_pos_b09527e17bebd012_122_new)
HXLINE( 123)		super::__construct(type,bubbles,cancelable);
HXLINE( 125)		this->bytesLoaded = bytesLoaded;
HXLINE( 126)		this->bytesTotal = bytesTotal;
            	}

Dynamic ProgressEvent_obj::__CreateEmpty() { return new ProgressEvent_obj; }

void *ProgressEvent_obj::_hx_vtable = 0;

Dynamic ProgressEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ProgressEvent_obj > _hx_result = new ProgressEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool ProgressEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x3c614044;
	}
}

 ::openfl::events::Event ProgressEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b09527e17bebd012_130_clone)
HXLINE( 131)		 ::openfl::events::ProgressEvent event =  ::openfl::events::ProgressEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->bytesLoaded,this->bytesTotal);
HXLINE( 132)		event->target = this->target;
HXLINE( 133)		event->currentTarget = this->currentTarget;
HXLINE( 134)		event->eventPhase = this->eventPhase;
HXLINE( 135)		return event;
            	}


::String ProgressEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_b09527e17bebd012_140_toString)
HXDLIN( 140)		return this->_hx___formatToString(HX_("ProgressEvent",0d,9d,55,84),::Array_obj< ::String >::fromData( _hx_array_data_cbc8be96_3,5));
            	}


void ProgressEvent_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_b09527e17bebd012_144___init)
HXLINE( 145)		this->super::_hx___init();
HXLINE( 146)		this->bytesLoaded = ( (Float)(0) );
HXLINE( 147)		this->bytesTotal = ( (Float)(0) );
            	}


::String ProgressEvent_obj::PROGRESS;

::String ProgressEvent_obj::SOCKET_DATA;

::String ProgressEvent_obj::STANDARD_OUTPUT_DATA;

::String ProgressEvent_obj::STANDARD_ERROR_DATA;


::hx::ObjectPtr< ProgressEvent_obj > ProgressEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< Float >  __o_bytesLoaded,::hx::Null< Float >  __o_bytesTotal) {
	::hx::ObjectPtr< ProgressEvent_obj > __this = new ProgressEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_bytesLoaded,__o_bytesTotal);
	return __this;
}

::hx::ObjectPtr< ProgressEvent_obj > ProgressEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< Float >  __o_bytesLoaded,::hx::Null< Float >  __o_bytesTotal) {
	ProgressEvent_obj *__this = (ProgressEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ProgressEvent_obj), true, "openfl.events.ProgressEvent"));
	*(void **)__this = ProgressEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_bytesLoaded,__o_bytesTotal);
	return __this;
}

ProgressEvent_obj::ProgressEvent_obj()
{
}

::hx::Val ProgressEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return ::hx::Val( bytesTotal ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return ::hx::Val( bytesLoaded ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ProgressEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgressEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bytesLoaded",d0,66,ca,99));
	outFields->push(HX_("bytesTotal",59,57,da,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ProgressEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(ProgressEvent_obj,bytesLoaded),HX_("bytesLoaded",d0,66,ca,99)},
	{::hx::fsFloat,(int)offsetof(ProgressEvent_obj,bytesTotal),HX_("bytesTotal",59,57,da,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ProgressEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ProgressEvent_obj::PROGRESS,HX_("PROGRESS",ad,87,b0,df)},
	{::hx::fsString,(void *) &ProgressEvent_obj::SOCKET_DATA,HX_("SOCKET_DATA",76,39,86,c1)},
	{::hx::fsString,(void *) &ProgressEvent_obj::STANDARD_OUTPUT_DATA,HX_("STANDARD_OUTPUT_DATA",26,d8,1a,6b)},
	{::hx::fsString,(void *) &ProgressEvent_obj::STANDARD_ERROR_DATA,HX_("STANDARD_ERROR_DATA",63,7a,a7,74)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ProgressEvent_obj_sMemberFields[] = {
	HX_("bytesLoaded",d0,66,ca,99),
	HX_("bytesTotal",59,57,da,45),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void ProgressEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgressEvent_obj::PROGRESS,"PROGRESS");
	HX_MARK_MEMBER_NAME(ProgressEvent_obj::SOCKET_DATA,"SOCKET_DATA");
	HX_MARK_MEMBER_NAME(ProgressEvent_obj::STANDARD_OUTPUT_DATA,"STANDARD_OUTPUT_DATA");
	HX_MARK_MEMBER_NAME(ProgressEvent_obj::STANDARD_ERROR_DATA,"STANDARD_ERROR_DATA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ProgressEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgressEvent_obj::PROGRESS,"PROGRESS");
	HX_VISIT_MEMBER_NAME(ProgressEvent_obj::SOCKET_DATA,"SOCKET_DATA");
	HX_VISIT_MEMBER_NAME(ProgressEvent_obj::STANDARD_OUTPUT_DATA,"STANDARD_OUTPUT_DATA");
	HX_VISIT_MEMBER_NAME(ProgressEvent_obj::STANDARD_ERROR_DATA,"STANDARD_ERROR_DATA");
};

#endif

::hx::Class ProgressEvent_obj::__mClass;

static ::String ProgressEvent_obj_sStaticFields[] = {
	HX_("PROGRESS",ad,87,b0,df),
	HX_("SOCKET_DATA",76,39,86,c1),
	HX_("STANDARD_OUTPUT_DATA",26,d8,1a,6b),
	HX_("STANDARD_ERROR_DATA",63,7a,a7,74),
	::String(null())
};

void ProgressEvent_obj::__register()
{
	ProgressEvent_obj _hx_dummy;
	ProgressEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.ProgressEvent",96,be,c8,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ProgressEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ProgressEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ProgressEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ProgressEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ProgressEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgressEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgressEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ProgressEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b09527e17bebd012_34_boot)
HXDLIN(  34)		PROGRESS = HX_("progress",ad,f7,2a,86);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b09527e17bebd012_50_boot)
HXDLIN(  50)		SOCKET_DATA = HX_("socketData",7d,63,de,b1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b09527e17bebd012_67_boot)
HXDLIN(  67)		STANDARD_OUTPUT_DATA = HX_("standardOutputData",68,2f,8b,c9);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b09527e17bebd012_83_boot)
HXDLIN(  83)		STANDARD_ERROR_DATA = HX_("standardErrorData",15,2b,a6,e2);
            	}
}

} // end namespace openfl
} // end namespace events
