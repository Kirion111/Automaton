#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_DataEvent
#include <openfl/events/DataEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b4044780e24598ba_76_new,"openfl.events.DataEvent","new",0x7ddf63eb,"openfl.events.DataEvent.new","openfl/events/DataEvent.hx",76,0x5b33e405)
HX_LOCAL_STACK_FRAME(_hx_pos_b4044780e24598ba_83_clone,"openfl.events.DataEvent","clone",0xeea2dfa8,"openfl.events.DataEvent.clone","openfl/events/DataEvent.hx",83,0x5b33e405)
HX_LOCAL_STACK_FRAME(_hx_pos_b4044780e24598ba_93_toString,"openfl.events.DataEvent","toString",0xcca98541,"openfl.events.DataEvent.toString","openfl/events/DataEvent.hx",93,0x5b33e405)
static const ::String _hx_array_data_fff69279_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("data",2a,56,63,42),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b4044780e24598ba_97___init,"openfl.events.DataEvent","__init",0xc6469385,"openfl.events.DataEvent.__init","openfl/events/DataEvent.hx",97,0x5b33e405)
HX_LOCAL_STACK_FRAME(_hx_pos_b4044780e24598ba_31_boot,"openfl.events.DataEvent","boot",0x9db10a47,"openfl.events.DataEvent.boot","openfl/events/DataEvent.hx",31,0x5b33e405)
HX_LOCAL_STACK_FRAME(_hx_pos_b4044780e24598ba_46_boot,"openfl.events.DataEvent","boot",0x9db10a47,"openfl.events.DataEvent.boot","openfl/events/DataEvent.hx",46,0x5b33e405)
namespace openfl{
namespace events{

void DataEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_data){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		::String data = __o_data;
            		if (::hx::IsNull(__o_data)) data = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_b4044780e24598ba_76_new)
HXLINE(  77)		super::__construct(type,bubbles,cancelable,null());
HXLINE(  79)		this->data = data;
            	}

Dynamic DataEvent_obj::__CreateEmpty() { return new DataEvent_obj; }

void *DataEvent_obj::_hx_vtable = 0;

Dynamic DataEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataEvent_obj > _hx_result = new DataEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool DataEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		if (inClassId<=(int)0x00daef43) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x00daef43;
		} else {
			return inClassId==(int)0x08ec4c31;
		}
	} else {
		return inClassId==(int)0x53d8fde0;
	}
}

 ::openfl::events::Event DataEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b4044780e24598ba_83_clone)
HXLINE(  84)		 ::openfl::events::DataEvent event =  ::openfl::events::DataEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->data);
HXLINE(  85)		event->target = this->target;
HXLINE(  86)		event->currentTarget = this->currentTarget;
HXLINE(  87)		event->eventPhase = this->eventPhase;
HXLINE(  88)		return event;
            	}


::String DataEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_b4044780e24598ba_93_toString)
HXDLIN(  93)		return this->_hx___formatToString(HX_("DataEvent",70,29,87,5d),::Array_obj< ::String >::fromData( _hx_array_data_fff69279_3,4));
            	}


void DataEvent_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_b4044780e24598ba_97___init)
HXLINE(  98)		this->super::_hx___init();
HXLINE(  99)		this->data = HX_("",00,00,00,00);
            	}


::String DataEvent_obj::DATA;

::String DataEvent_obj::UPLOAD_COMPLETE_DATA;


::hx::ObjectPtr< DataEvent_obj > DataEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_data) {
	::hx::ObjectPtr< DataEvent_obj > __this = new DataEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_data);
	return __this;
}

::hx::ObjectPtr< DataEvent_obj > DataEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_data) {
	DataEvent_obj *__this = (DataEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataEvent_obj), true, "openfl.events.DataEvent"));
	*(void **)__this = DataEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_data);
	return __this;
}

DataEvent_obj::DataEvent_obj()
{
}

void DataEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataEvent);
	HX_MARK_MEMBER_NAME(data,"data");
	 ::openfl::events::TextEvent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	 ::openfl::events::TextEvent_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DataEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
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

::hx::Val DataEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(DataEvent_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DataEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &DataEvent_obj::DATA,HX_("DATA",2a,1e,24,2d)},
	{::hx::fsString,(void *) &DataEvent_obj::UPLOAD_COMPLETE_DATA,HX_("UPLOAD_COMPLETE_DATA",b2,f0,8f,62)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DataEvent_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void DataEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataEvent_obj::DATA,"DATA");
	HX_MARK_MEMBER_NAME(DataEvent_obj::UPLOAD_COMPLETE_DATA,"UPLOAD_COMPLETE_DATA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DataEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataEvent_obj::DATA,"DATA");
	HX_VISIT_MEMBER_NAME(DataEvent_obj::UPLOAD_COMPLETE_DATA,"UPLOAD_COMPLETE_DATA");
};

#endif

::hx::Class DataEvent_obj::__mClass;

static ::String DataEvent_obj_sStaticFields[] = {
	HX_("DATA",2a,1e,24,2d),
	HX_("UPLOAD_COMPLETE_DATA",b2,f0,8f,62),
	::String(null())
};

void DataEvent_obj::__register()
{
	DataEvent_obj _hx_dummy;
	DataEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.DataEvent",79,92,f6,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DataEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DataEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DataEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DataEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b4044780e24598ba_31_boot)
HXDLIN(  31)		DATA = HX_("data",2a,56,63,42);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4044780e24598ba_46_boot)
HXDLIN(  46)		UPLOAD_COMPLETE_DATA = HX_("uploadCompleteData",24,67,d9,d4);
            	}
}

} // end namespace openfl
} // end namespace events
