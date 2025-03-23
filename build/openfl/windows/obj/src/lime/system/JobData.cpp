#include <hxcpp.h>

#ifndef INCLUDED_lime_system_JobData
#include <lime/system/JobData.h>
#endif
#ifndef INCLUDED_lime_system_WorkOutput
#include <lime/system/WorkOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1b59eeda1eb9bd15_300_new,"lime.system.JobData","new",0xb2201ed3,"lime.system.JobData.new","lime/system/WorkOutput.hx",300,0x5941b446)
HX_LOCAL_STACK_FRAME(_hx_pos_1b59eeda1eb9bd15_302_boot,"lime.system.JobData","boot",0x2213da5f,"lime.system.JobData.boot","lime/system/WorkOutput.hx",302,0x5941b446)
namespace lime{
namespace _hx_system{

void JobData_obj::__construct( ::Dynamic doWork, ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_1b59eeda1eb9bd15_300_new)
HXLINE( 332)		this->startTime = ((Float)0);
HXLINE( 329)		this->duration = ((Float)0);
HXLINE( 337)		this->id = ::lime::_hx_system::JobData_obj::nextID++;
HXLINE( 338)		this->doWork = doWork;
HXLINE( 339)		this->state = state;
            	}

Dynamic JobData_obj::__CreateEmpty() { return new JobData_obj; }

void *JobData_obj::_hx_vtable = 0;

Dynamic JobData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JobData_obj > _hx_result = new JobData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool JobData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x370dd0e3;
}

int JobData_obj::nextID;


::hx::ObjectPtr< JobData_obj > JobData_obj::__new( ::Dynamic doWork, ::Dynamic state) {
	::hx::ObjectPtr< JobData_obj > __this = new JobData_obj();
	__this->__construct(doWork,state);
	return __this;
}

::hx::ObjectPtr< JobData_obj > JobData_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic doWork, ::Dynamic state) {
	JobData_obj *__this = (JobData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(JobData_obj), true, "lime.system.JobData"));
	*(void **)__this = JobData_obj::_hx_vtable;
	__this->__construct(doWork,state);
	return __this;
}

JobData_obj::JobData_obj()
{
}

void JobData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JobData);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(doWork,"doWork");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_END_CLASS();
}

void JobData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(doWork,"doWork");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
}

::hx::Val JobData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"doWork") ) { return ::hx::Val( doWork ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { return ::hx::Val( startTime ); }
	}
	return super::__Field(inName,inCallProp);
}

bool JobData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"nextID") ) { outValue = ( nextID ); return true; }
	}
	return false;
}

::hx::Val JobData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"doWork") ) { doWork=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool JobData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"nextID") ) { nextID=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void JobData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("state",11,76,0b,84));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("startTime",8f,45,f0,05));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo JobData_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(JobData_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(JobData_obj,doWork),HX_("doWork",fc,a6,00,1f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(JobData_obj,state),HX_("state",11,76,0b,84)},
	{::hx::fsFloat,(int)offsetof(JobData_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsFloat,(int)offsetof(JobData_obj,startTime),HX_("startTime",8f,45,f0,05)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo JobData_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &JobData_obj::nextID,HX_("nextID",8e,27,64,72)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String JobData_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("doWork",fc,a6,00,1f),
	HX_("state",11,76,0b,84),
	HX_("duration",54,0f,8e,14),
	HX_("startTime",8f,45,f0,05),
	::String(null()) };

static void JobData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JobData_obj::nextID,"nextID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JobData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JobData_obj::nextID,"nextID");
};

#endif

::hx::Class JobData_obj::__mClass;

static ::String JobData_obj_sStaticFields[] = {
	HX_("nextID",8e,27,64,72),
	::String(null())
};

void JobData_obj::__register()
{
	JobData_obj _hx_dummy;
	JobData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.JobData",61,b9,b5,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JobData_obj::__GetStatic;
	__mClass->mSetStaticField = &JobData_obj::__SetStatic;
	__mClass->mMarkFunc = JobData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(JobData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(JobData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< JobData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JobData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JobData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JobData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void JobData_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1b59eeda1eb9bd15_302_boot)
HXDLIN( 302)		nextID = 0;
            	}
}

} // end namespace lime
} // end namespace system
