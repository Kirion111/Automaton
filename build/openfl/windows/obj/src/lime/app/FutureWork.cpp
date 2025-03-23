#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_app_FutureWork
#include <lime/app/FutureWork.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_system_JobData
#include <lime/system/JobData.h>
#endif
#ifndef INCLUDED_lime_system_JobList
#include <lime/system/JobList.h>
#endif
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif
#ifndef INCLUDED_lime_system_WorkOutput
#include <lime/system/WorkOutput.h>
#endif
#ifndef INCLUDED_sys_thread_Tls
#include <sys/thread/Tls.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_eb883021b4f38f3f_330_run,"lime.app.FutureWork","run",0x28d05c97,"lime.app.FutureWork.run","lime/app/Future.hx",330,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_eb883021b4f38f3f_347_threadPool_doWork,"lime.app.FutureWork","threadPool_doWork",0x3558cae1,"lime.app.FutureWork.threadPool_doWork","lime/app/Future.hx",347,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_eb883021b4f38f3f_358_threadPool_onComplete,"lime.app.FutureWork","threadPool_onComplete",0x60e74f5d,"lime.app.FutureWork.threadPool_onComplete","lime/app/Future.hx",358,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_eb883021b4f38f3f_365_threadPool_onError,"lime.app.FutureWork","threadPool_onError",0x802eaea4,"lime.app.FutureWork.threadPool_onError","lime/app/Future.hx",365,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_eb883021b4f38f3f_373_set_minThreads,"lime.app.FutureWork","set_minThreads",0x5973e9e8,"lime.app.FutureWork.set_minThreads","lime/app/Future.hx",373,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_eb883021b4f38f3f_382_set_maxThreads,"lime.app.FutureWork","set_maxThreads",0xfde11716,"lime.app.FutureWork.set_maxThreads","lime/app/Future.hx",382,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_eb883021b4f38f3f_392_get_activeJobs,"lime.app.FutureWork","get_activeJobs",0x0f9ab539,"lime.app.FutureWork.get_activeJobs","lime/app/Future.hx",392,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_eb883021b4f38f3f_324_boot,"lime.app.FutureWork","boot",0x82e8b166,"lime.app.FutureWork.boot","lime/app/Future.hx",324,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_eb883021b4f38f3f_325_boot,"lime.app.FutureWork","boot",0x82e8b166,"lime.app.FutureWork.boot","lime/app/Future.hx",325,0x058e0853)
namespace lime{
namespace app{

void FutureWork_obj::__construct() { }

Dynamic FutureWork_obj::__CreateEmpty() { return new FutureWork_obj; }

void *FutureWork_obj::_hx_vtable = 0;

Dynamic FutureWork_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FutureWork_obj > _hx_result = new FutureWork_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FutureWork_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ec31c9c;
}

 ::lime::_hx_system::ThreadPool FutureWork_obj::threadPool;

 ::haxe::ds::IntMap FutureWork_obj::promises;

int FutureWork_obj::minThreads;

int FutureWork_obj::maxThreads;

void FutureWork_obj::run( ::Dynamic work, ::lime::app::Promise promise){
            	HX_GC_STACKFRAME(&_hx_pos_eb883021b4f38f3f_330_run)
HXLINE( 331)		if (::hx::IsNull( ::lime::app::FutureWork_obj::threadPool )) {
HXLINE( 333)			::lime::app::FutureWork_obj::threadPool =  ::lime::_hx_system::ThreadPool_obj::__alloc( HX_CTX ,::lime::app::FutureWork_obj::minThreads,::lime::app::FutureWork_obj::maxThreads,true);
HXLINE( 334)			::lime::app::FutureWork_obj::threadPool->onComplete->add(::lime::app::FutureWork_obj::threadPool_onComplete_dyn(),null(),null());
HXLINE( 335)			::lime::app::FutureWork_obj::threadPool->onError->add(::lime::app::FutureWork_obj::threadPool_onError_dyn(),null(),null());
HXLINE( 337)			::lime::app::FutureWork_obj::promises =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 340)		int jobID = ::lime::app::FutureWork_obj::threadPool->run(::lime::app::FutureWork_obj::threadPool_doWork_dyn(),work);
HXLINE( 341)		{
HXLINE( 341)			 ::Dynamic v =  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("error",c8,cb,29,73),promise->error_dyn())
            				->setFixed(1,HX_("complete",b9,00,c8,7f),promise->complete_dyn()));
HXDLIN( 341)			::lime::app::FutureWork_obj::promises->set(jobID,v);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FutureWork_obj,run,(void))

void FutureWork_obj::threadPool_doWork( ::Dynamic work, ::lime::_hx_system::WorkOutput output){
            	HX_STACKFRAME(&_hx_pos_eb883021b4f38f3f_347_threadPool_doWork)
HXDLIN( 347)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 349)			output->sendComplete(work(),null());
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 351)				{
HXLINE( 351)					null();
            				}
HXDLIN( 351)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 353)				output->sendError(e,null());
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FutureWork_obj,threadPool_doWork,(void))

void FutureWork_obj::threadPool_onComplete( ::Dynamic result){
            	HX_STACKFRAME(&_hx_pos_eb883021b4f38f3f_358_threadPool_onComplete)
HXLINE( 359)		::Dynamic this1 = ::lime::app::FutureWork_obj::promises;
HXDLIN( 359)		 ::Dynamic promise = ( ( ::haxe::ds::IntMap)(this1) )->get(::lime::app::FutureWork_obj::threadPool->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >()->id);
HXLINE( 360)		{
HXLINE( 360)			::Dynamic this2 = ::lime::app::FutureWork_obj::promises;
HXDLIN( 360)			( ( ::haxe::ds::IntMap)(this2) )->remove(::lime::app::FutureWork_obj::threadPool->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >()->id);
            		}
HXLINE( 361)		promise->__Field(HX_("complete",b9,00,c8,7f),::hx::paccDynamic)(result);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,threadPool_onComplete,(void))

void FutureWork_obj::threadPool_onError( ::Dynamic error){
            	HX_STACKFRAME(&_hx_pos_eb883021b4f38f3f_365_threadPool_onError)
HXLINE( 366)		::Dynamic this1 = ::lime::app::FutureWork_obj::promises;
HXDLIN( 366)		 ::Dynamic promise = ( ( ::haxe::ds::IntMap)(this1) )->get(::lime::app::FutureWork_obj::threadPool->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >()->id);
HXLINE( 367)		{
HXLINE( 367)			::Dynamic this2 = ::lime::app::FutureWork_obj::promises;
HXDLIN( 367)			( ( ::haxe::ds::IntMap)(this2) )->remove(::lime::app::FutureWork_obj::threadPool->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >()->id);
            		}
HXLINE( 368)		promise->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic)(error);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,threadPool_onError,(void))

int FutureWork_obj::set_minThreads(int value){
            	HX_STACKFRAME(&_hx_pos_eb883021b4f38f3f_373_set_minThreads)
HXLINE( 374)		if (::hx::IsNotNull( ::lime::app::FutureWork_obj::threadPool )) {
HXLINE( 376)			::lime::app::FutureWork_obj::threadPool->minThreads = value;
            		}
HXLINE( 378)		return (::lime::app::FutureWork_obj::minThreads = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,set_minThreads,return )

int FutureWork_obj::set_maxThreads(int value){
            	HX_STACKFRAME(&_hx_pos_eb883021b4f38f3f_382_set_maxThreads)
HXLINE( 383)		if (::hx::IsNotNull( ::lime::app::FutureWork_obj::threadPool )) {
HXLINE( 385)			::lime::app::FutureWork_obj::threadPool->maxThreads = value;
            		}
HXLINE( 387)		return (::lime::app::FutureWork_obj::maxThreads = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,set_maxThreads,return )

int FutureWork_obj::get_activeJobs(){
            	HX_STACKFRAME(&_hx_pos_eb883021b4f38f3f_392_get_activeJobs)
HXDLIN( 392)		if (::hx::IsNotNull( ::lime::app::FutureWork_obj::threadPool )) {
HXDLIN( 392)			return ::lime::app::FutureWork_obj::threadPool->_hx___activeJobs->_hx___jobs->length;
            		}
            		else {
HXDLIN( 392)			return 0;
            		}
HXDLIN( 392)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FutureWork_obj,get_activeJobs,return )


FutureWork_obj::FutureWork_obj()
{
}

bool FutureWork_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"promises") ) { outValue = ( promises ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"threadPool") ) { outValue = ( threadPool ); return true; }
		if (HX_FIELD_EQ(inName,"minThreads") ) { outValue = ( minThreads ); return true; }
		if (HX_FIELD_EQ(inName,"maxThreads") ) { outValue = ( maxThreads ); return true; }
		if (HX_FIELD_EQ(inName,"activeJobs") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_activeJobs() ); return true; } }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_minThreads") ) { outValue = set_minThreads_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_maxThreads") ) { outValue = set_maxThreads_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_activeJobs") ) { outValue = get_activeJobs_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"threadPool_doWork") ) { outValue = threadPool_doWork_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"threadPool_onError") ) { outValue = threadPool_onError_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"threadPool_onComplete") ) { outValue = threadPool_onComplete_dyn(); return true; }
	}
	return false;
}

bool FutureWork_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"promises") ) { promises=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"threadPool") ) { threadPool=ioValue.Cast<  ::lime::_hx_system::ThreadPool >(); return true; }
		if (HX_FIELD_EQ(inName,"minThreads") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_minThreads(ioValue.Cast< int >()) ); else minThreads=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"maxThreads") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_maxThreads(ioValue.Cast< int >()) ); else maxThreads=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FutureWork_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FutureWork_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::_hx_system::ThreadPool */ ,(void *) &FutureWork_obj::threadPool,HX_("threadPool",c6,54,25,46)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &FutureWork_obj::promises,HX_("promises",78,1a,aa,f4)},
	{::hx::fsInt,(void *) &FutureWork_obj::minThreads,HX_("minThreads",f7,42,49,19)},
	{::hx::fsInt,(void *) &FutureWork_obj::maxThreads,HX_("maxThreads",25,70,b6,bd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FutureWork_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FutureWork_obj::threadPool,"threadPool");
	HX_MARK_MEMBER_NAME(FutureWork_obj::promises,"promises");
	HX_MARK_MEMBER_NAME(FutureWork_obj::minThreads,"minThreads");
	HX_MARK_MEMBER_NAME(FutureWork_obj::maxThreads,"maxThreads");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FutureWork_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FutureWork_obj::threadPool,"threadPool");
	HX_VISIT_MEMBER_NAME(FutureWork_obj::promises,"promises");
	HX_VISIT_MEMBER_NAME(FutureWork_obj::minThreads,"minThreads");
	HX_VISIT_MEMBER_NAME(FutureWork_obj::maxThreads,"maxThreads");
};

#endif

::hx::Class FutureWork_obj::__mClass;

static ::String FutureWork_obj_sStaticFields[] = {
	HX_("threadPool",c6,54,25,46),
	HX_("promises",78,1a,aa,f4),
	HX_("minThreads",f7,42,49,19),
	HX_("maxThreads",25,70,b6,bd),
	HX_("run",4b,e7,56,00),
	HX_("threadPool_doWork",95,28,69,50),
	HX_("threadPool_onComplete",11,97,0a,2c),
	HX_("threadPool_onError",70,4e,70,13),
	HX_("set_minThreads",b4,b3,5e,af),
	HX_("set_maxThreads",e2,e0,cb,53),
	HX_("get_activeJobs",05,7f,85,65),
	::String(null())
};

void FutureWork_obj::__register()
{
	FutureWork_obj _hx_dummy;
	FutureWork_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.app.FutureWork",ba,3f,fe,db);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FutureWork_obj::__GetStatic;
	__mClass->mSetStaticField = &FutureWork_obj::__SetStatic;
	__mClass->mMarkFunc = FutureWork_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FutureWork_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FutureWork_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FutureWork_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FutureWork_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FutureWork_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FutureWork_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eb883021b4f38f3f_324_boot)
HXDLIN( 324)		minThreads = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb883021b4f38f3f_325_boot)
HXDLIN( 325)		maxThreads = 1;
            	}
}

} // end namespace lime
} // end namespace app
