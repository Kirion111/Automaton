#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeWindow
#include <lime/_internal/backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_system_State_Void
#include <lime/app/_Event_lime_system_State_Void.h>
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
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_sys_thread_Deque
#include <sys/thread/Deque.h>
#endif
#ifndef INCLUDED_sys_thread_Tls
#include <sys/thread/Tls.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_Thread_Impl_
#include <sys/thread/_Thread/Thread_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_61_new,"lime.system.ThreadPool","new",0xfea2d35e,"lime.system.ThreadPool.new","lime/system/ThreadPool.hx",61,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_238_cancel,"lime.system.ThreadPool","cancel",0x4f965d3c,"lime.system.ThreadPool.cancel","lime/system/ThreadPool.hx",238,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_307_cancelJob,"lime.system.ThreadPool","cancelJob",0xb2e31821,"lime.system.ThreadPool.cancelJob","lime/system/ThreadPool.hx",307,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_326_queue,"lime.system.ThreadPool","queue",0xd03ecc0f,"lime.system.ThreadPool.queue","lime/system/ThreadPool.hx",326,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_340_run,"lime.system.ThreadPool","run",0xfea5ea49,"lime.system.ThreadPool.run","lime/system/ThreadPool.hx",340,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_476___update,"lime.system.ThreadPool","__update",0x37e4556b,"lime.system.ThreadPool.__update","lime/system/ThreadPool.hx",476,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_613_createThread,"lime.system.ThreadPool","createThread",0x4fb26828,"lime.system.ThreadPool.createThread","lime/system/ThreadPool.hx",613,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_627_get_activeJobs,"lime.system.ThreadPool","get_activeJobs",0xb66080c7,"lime.system.ThreadPool.get_activeJobs","lime/system/ThreadPool.hx",627,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_632_get_idleThreads,"lime.system.ThreadPool","get_idleThreads",0xd79b814a,"lime.system.ThreadPool.get_idleThreads","lime/system/ThreadPool.hx",632,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_637_get_currentThreads,"lime.system.ThreadPool","get_currentThreads",0x716c56bb,"lime.system.ThreadPool.get_currentThreads","lime/system/ThreadPool.hx",637,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_642_get_doWork,"lime.system.ThreadPool","get_doWork",0x2e0a8f87,"lime.system.ThreadPool.get_doWork","lime/system/ThreadPool.hx",642,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_646_set_workPriority,"lime.system.ThreadPool","set_workPriority",0xab3e4294,"lime.system.ThreadPool.set_workPriority","lime/system/ThreadPool.hx",646,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_103_isMainThread,"lime.system.ThreadPool","isMainThread",0x55286daf,"lime.system.ThreadPool.isMainThread","lime/system/ThreadPool.hx",103,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_386___executeThread,"lime.system.ThreadPool","__executeThread",0x0028cfbd,"lime.system.ThreadPool.__executeThread","lime/system/ThreadPool.hx",386,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_465_timestamp,"lime.system.ThreadPool","timestamp",0x36972a54,"lime.system.ThreadPool.timestamp","lime/system/ThreadPool.hx",465,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_74_boot,"lime.system.ThreadPool","boot",0xc7ef1f74,"lime.system.ThreadPool.boot","lime/system/ThreadPool.hx",74,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_87_boot,"lime.system.ThreadPool","boot",0xc7ef1f74,"lime.system.ThreadPool.boot","lime/system/ThreadPool.hx",87,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_b98885ed80fb7e2e_95_boot,"lime.system.ThreadPool","boot",0xc7ef1f74,"lime.system.ThreadPool.boot","lime/system/ThreadPool.hx",95,0x8993fbb2)
namespace lime{
namespace _hx_system{

void ThreadPool_obj::__construct(::hx::Null< int >  __o_minThreads,::hx::Null< int >  __o_maxThreads, ::Dynamic mode){
            		int minThreads = __o_minThreads.Default(0);
            		int maxThreads = __o_maxThreads.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_61_new)
HXLINE( 199)		this->_hx___jobQueue =  ::lime::_hx_system::JobList_obj::__alloc( HX_CTX ,null());
HXLINE( 177)		this->workPriority = ((Float)1);
HXLINE( 167)		this->onRun =  ::lime::app::_Event_lime_system_State_Void_obj::__alloc( HX_CTX );
HXLINE( 161)		this->onProgress =  ::lime::app::_Event_Dynamic_Void_obj::__alloc( HX_CTX );
HXLINE( 155)		this->onError =  ::lime::app::_Event_Dynamic_Void_obj::__alloc( HX_CTX );
HXLINE( 149)		this->onComplete =  ::lime::app::_Event_Dynamic_Void_obj::__alloc( HX_CTX );
HXLINE( 215)		super::__construct(mode);
HXLINE( 217)		this->_hx___activeJobs =  ::lime::_hx_system::JobList_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 219)		this->minThreads = minThreads;
HXLINE( 220)		this->maxThreads = maxThreads;
HXLINE( 223)		if ((this->_hx___mode == true)) {
HXLINE( 225)			this->_hx___activeThreads =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 226)			this->_hx___idleThreads = ::Array_obj< ::Dynamic>::__new(0);
            		}
            	}

Dynamic ThreadPool_obj::__CreateEmpty() { return new ThreadPool_obj; }

void *ThreadPool_obj::_hx_vtable = 0;

Dynamic ThreadPool_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ThreadPool_obj > _hx_result = new ThreadPool_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ThreadPool_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1c127516) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1c127516;
	} else {
		return inClassId==(int)0x6de8922a;
	}
}

void ThreadPool_obj::cancel( ::Dynamic error){
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_238_cancel)
HXLINE( 239)		if (::hx::IsInstanceNotEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread )) {
HXLINE( 241)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Call cancel() only from the main thread.",b1,f8,9c,0f)));
            		}
HXLINE( 244)		::lime::app::Application_obj::current->onUpdate->remove(this->_hx___update_dyn());
HXLINE( 247)		{
HXLINE( 247)			 ::lime::_hx_system::JobList _g = this->_hx___activeJobs;
HXDLIN( 247)			while((_g->_hx___jobs->length > 0)){
HXLINE( 247)				_g->_hx___index++;
HXDLIN( 247)				if ((_g->_hx___index >= _g->_hx___jobs->length)) {
HXLINE( 247)					_g->_hx___index = 0;
            				}
HXDLIN( 247)				 ::lime::_hx_system::JobData job = _g->_hx___jobs->__get(_g->_hx___index).StaticCast<  ::lime::_hx_system::JobData >();
HXLINE( 250)				if ((this->_hx___mode == true)) {
HXLINE( 252)					 ::sys::thread::_Thread::HaxeThread thread = ( ( ::sys::thread::_Thread::HaxeThread)(this->_hx___activeThreads->get(job->id)) );
HXLINE( 253)					if ((this->_hx___idleThreads->length < this->minThreads)) {
HXLINE( 255)						thread->messages->add( ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("event",1a,c8,c4,75),HX_("CANCEL",7a,99,b6,6a))));
HXLINE( 256)						this->_hx___idleThreads->push(thread);
            					}
            					else {
HXLINE( 260)						thread->messages->add( ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("event",1a,c8,c4,75),HX_("EXIT",1e,bf,de,2d))));
            					}
            				}
HXLINE( 265)				if (::hx::IsNotNull( error )) {
HXLINE( 267)					if ((job->duration == 0)) {
HXLINE( 269)						Float _hx_tmp = ::Sys_obj::cpuTime();
HXDLIN( 269)						job->duration = (_hx_tmp - job->startTime);
            					}
HXLINE( 272)					this->_hx___activeJob->set_value(job).StaticCast<  ::lime::_hx_system::JobData >();
HXLINE( 273)					this->onError->dispatch(error);
HXLINE( 274)					{
HXLINE( 274)						 ::lime::_hx_system::JobData value = null();
HXDLIN( 274)						this->_hx___activeJob->set_value(value).StaticCast<  ::lime::_hx_system::JobData >();
            					}
            				}
            			}
            		}
HXLINE( 277)		{
HXLINE( 277)			 ::lime::_hx_system::JobList _this = this->_hx___activeJobs;
HXDLIN( 277)			_this->_hx___jobs->resize(0);
HXDLIN( 277)			bool _hx_tmp;
HXDLIN( 277)			bool _hx_tmp1;
HXDLIN( 277)			if (::hx::IsNotNull( _this->pool )) {
HXLINE( 277)				_hx_tmp1 = (_this->_hx___addingWorkPriority != false);
            			}
            			else {
HXLINE( 277)				_hx_tmp1 = false;
            			}
HXDLIN( 277)			if (_hx_tmp1) {
HXLINE( 277)				_hx_tmp = ::hx::IsInstanceEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread );
            			}
            			else {
HXLINE( 277)				_hx_tmp = false;
            			}
HXDLIN( 277)			if (_hx_tmp) {
HXLINE( 277)				 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 277)				::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority - _this->pool->workPriority);
HXDLIN( 277)				_this->_hx___addingWorkPriority = false;
            			}
            		}
HXLINE( 281)		while((this->_hx___idleThreads->length > this->minThreads)){
HXLINE( 283)			 ::sys::thread::_Thread::HaxeThread this1 = this->_hx___idleThreads->pop().StaticCast<  ::sys::thread::_Thread::HaxeThread >();
HXDLIN( 283)			this1->messages->add( ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("event",1a,c8,c4,75),HX_("EXIT",1e,bf,de,2d))));
            		}
HXLINE( 288)		if (::hx::IsNotNull( error )) {
HXLINE( 290)			 ::lime::_hx_system::JobList _g = this->_hx___jobQueue;
HXDLIN( 290)			while((_g->_hx___jobs->length > 0)){
HXLINE( 290)				_g->_hx___index++;
HXDLIN( 290)				if ((_g->_hx___index >= _g->_hx___jobs->length)) {
HXLINE( 290)					_g->_hx___index = 0;
            				}
HXDLIN( 290)				 ::lime::_hx_system::JobData job = _g->_hx___jobs->__get(_g->_hx___index).StaticCast<  ::lime::_hx_system::JobData >();
HXLINE( 292)				this->_hx___activeJob->set_value(job).StaticCast<  ::lime::_hx_system::JobData >();
HXLINE( 293)				this->onError->dispatch(error);
            			}
            		}
HXLINE( 296)		{
HXLINE( 296)			 ::lime::_hx_system::JobList _this1 = this->_hx___jobQueue;
HXDLIN( 296)			_this1->_hx___jobs->resize(0);
HXDLIN( 296)			bool _hx_tmp2;
HXDLIN( 296)			bool _hx_tmp3;
HXDLIN( 296)			if (::hx::IsNotNull( _this1->pool )) {
HXLINE( 296)				_hx_tmp3 = (_this1->_hx___addingWorkPriority != false);
            			}
            			else {
HXLINE( 296)				_hx_tmp3 = false;
            			}
HXDLIN( 296)			if (_hx_tmp3) {
HXLINE( 296)				_hx_tmp2 = ::hx::IsInstanceEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread );
            			}
            			else {
HXLINE( 296)				_hx_tmp2 = false;
            			}
HXDLIN( 296)			if (_hx_tmp2) {
HXLINE( 296)				 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 296)				::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority - _this1->pool->workPriority);
HXDLIN( 296)				_this1->_hx___addingWorkPriority = false;
            			}
            		}
HXLINE( 298)		this->_hx___jobComplete->set_value(false);
HXLINE( 299)		{
HXLINE( 299)			 ::lime::_hx_system::JobData value = null();
HXDLIN( 299)			this->_hx___activeJob->set_value(value).StaticCast<  ::lime::_hx_system::JobData >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,cancel,(void))

bool ThreadPool_obj::cancelJob(int jobID){
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_307_cancelJob)
HXLINE( 309)		 ::sys::thread::_Thread::HaxeThread thread = ( ( ::sys::thread::_Thread::HaxeThread)(this->_hx___activeThreads->get(jobID)) );
HXLINE( 310)		if (::hx::IsNotNull( thread )) {
HXLINE( 312)			thread->messages->add( ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("event",1a,c8,c4,75),HX_("CANCEL",7a,99,b6,6a))));
HXLINE( 313)			this->_hx___activeThreads->remove(jobID);
HXLINE( 314)			this->_hx___idleThreads->push(thread);
            		}
HXLINE( 318)		 ::lime::_hx_system::JobList _hx_tmp = this->_hx___activeJobs;
HXDLIN( 318)		if (!(_hx_tmp->remove(this->_hx___activeJobs->get(jobID)))) {
HXLINE( 318)			 ::lime::_hx_system::JobList _hx_tmp = this->_hx___jobQueue;
HXDLIN( 318)			return _hx_tmp->remove(this->_hx___jobQueue->get(jobID));
            		}
            		else {
HXLINE( 318)			return true;
            		}
HXDLIN( 318)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,cancelJob,return )

int ThreadPool_obj::queue( ::Dynamic doWork, ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_326_queue)
HXDLIN( 326)		return this->run(doWork,state);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ThreadPool_obj,queue,return )

int ThreadPool_obj::run( ::Dynamic doWork, ::Dynamic state){
            	HX_GC_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_340_run)
HXLINE( 341)		if (::hx::IsInstanceNotEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread )) {
HXLINE( 343)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Call run() only from the main thread.",44,e0,54,54)));
            		}
HXLINE( 346)		if (::hx::IsNull( doWork )) {
HXLINE( 348)			if (::hx::IsNull( this->_hx___doWork )) {
HXLINE( 350)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("run() requires doWork argument.",cb,35,0a,21)));
            			}
            			else {
HXLINE( 354)				doWork = this->_hx___doWork;
            			}
            		}
HXLINE( 358)		if (::hx::IsNull( state )) {
HXLINE( 360)			state =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE( 363)		 ::lime::_hx_system::JobData job =  ::lime::_hx_system::JobData_obj::__alloc( HX_CTX ,doWork,state);
HXLINE( 364)		{
HXLINE( 364)			 ::lime::_hx_system::JobList _this = this->_hx___jobQueue;
HXDLIN( 364)			_this->_hx___jobs->push(job);
HXDLIN( 364)			bool _hx_tmp;
HXDLIN( 364)			bool _hx_tmp1;
HXDLIN( 364)			if (::hx::IsNotNull( _this->pool )) {
HXLINE( 364)				_hx_tmp1 = (_this->_hx___addingWorkPriority != true);
            			}
            			else {
HXLINE( 364)				_hx_tmp1 = false;
            			}
HXDLIN( 364)			if (_hx_tmp1) {
HXLINE( 364)				_hx_tmp = ::hx::IsInstanceEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread );
            			}
            			else {
HXLINE( 364)				_hx_tmp = false;
            			}
HXDLIN( 364)			if (_hx_tmp) {
HXLINE( 364)				 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 364)				::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority + _this->pool->workPriority);
HXDLIN( 364)				_this->_hx___addingWorkPriority = true;
            			}
            		}
HXLINE( 366)		if (!(::lime::app::Application_obj::current->onUpdate->has(this->_hx___update_dyn()))) {
HXLINE( 368)			::lime::app::Application_obj::current->onUpdate->add(this->_hx___update_dyn(),null(),null());
            		}
HXLINE( 371)		return job->id;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ThreadPool_obj,run,return )

void ThreadPool_obj::_hx___update(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_476___update)
HXLINE( 477)		if (::hx::IsInstanceNotEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread )) {
HXLINE( 479)			return;
            		}
HXLINE( 483)		while(true){
HXLINE( 483)			bool _hx_tmp;
HXDLIN( 483)			if ((this->_hx___jobQueue->_hx___jobs->length > 0)) {
HXLINE( 483)				_hx_tmp = (this->_hx___activeJobs->_hx___jobs->length < this->maxThreads);
            			}
            			else {
HXLINE( 483)				_hx_tmp = false;
            			}
HXDLIN( 483)			if (!(_hx_tmp)) {
HXLINE( 483)				goto _hx_goto_8;
            			}
HXLINE( 485)			 ::lime::_hx_system::JobList _this = this->_hx___jobQueue;
HXDLIN( 485)			 ::lime::_hx_system::JobData job = _this->_hx___jobs->pop().StaticCast<  ::lime::_hx_system::JobData >();
HXDLIN( 485)			{
HXLINE( 485)				bool value = (_this->_hx___jobs->length > 0);
HXDLIN( 485)				bool _hx_tmp1;
HXDLIN( 485)				bool _hx_tmp2;
HXDLIN( 485)				if (::hx::IsNotNull( _this->pool )) {
HXLINE( 485)					_hx_tmp2 = (_this->_hx___addingWorkPriority != value);
            				}
            				else {
HXLINE( 485)					_hx_tmp2 = false;
            				}
HXDLIN( 485)				if (_hx_tmp2) {
HXLINE( 485)					_hx_tmp1 = ::hx::IsInstanceEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread );
            				}
            				else {
HXLINE( 485)					_hx_tmp1 = false;
            				}
HXDLIN( 485)				if (_hx_tmp1) {
HXLINE( 485)					if (value) {
HXLINE( 485)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 485)						::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority + _this->pool->workPriority);
            					}
            					else {
HXLINE( 485)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 485)						::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority - _this->pool->workPriority);
            					}
HXDLIN( 485)					_this->_hx___addingWorkPriority = value;
            				}
            			}
HXDLIN( 485)			 ::lime::_hx_system::JobData job1 = job;
HXLINE( 487)			job1->startTime = ::Sys_obj::cpuTime();
HXLINE( 488)			{
HXLINE( 488)				 ::lime::_hx_system::JobList _this1 = this->_hx___activeJobs;
HXDLIN( 488)				_this1->_hx___jobs->push(job1);
HXDLIN( 488)				bool _hx_tmp3;
HXDLIN( 488)				bool _hx_tmp4;
HXDLIN( 488)				if (::hx::IsNotNull( _this1->pool )) {
HXLINE( 488)					_hx_tmp4 = (_this1->_hx___addingWorkPriority != true);
            				}
            				else {
HXLINE( 488)					_hx_tmp4 = false;
            				}
HXDLIN( 488)				if (_hx_tmp4) {
HXLINE( 488)					_hx_tmp3 = ::hx::IsInstanceEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread );
            				}
            				else {
HXLINE( 488)					_hx_tmp3 = false;
            				}
HXDLIN( 488)				if (_hx_tmp3) {
HXLINE( 488)					 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 488)					::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority + _this1->pool->workPriority);
HXDLIN( 488)					_this1->_hx___addingWorkPriority = true;
            				}
            			}
HXLINE( 491)			if ((this->_hx___mode == true)) {
HXLINE( 497)				 ::sys::thread::_Thread::HaxeThread thread;
HXDLIN( 497)				if ((this->_hx___idleThreads->length == 0)) {
HXLINE( 497)					thread = this->createThread(::lime::_hx_system::ThreadPool_obj::_hx___executeThread_dyn());
            				}
            				else {
HXLINE( 497)					thread = this->_hx___idleThreads->pop().StaticCast<  ::sys::thread::_Thread::HaxeThread >();
            				}
HXLINE( 498)				this->_hx___activeThreads->set(job1->id,thread);
HXLINE( 499)				thread->messages->add( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("job",fd,cf,50,00),job1)
            					->setFixed(1,HX_("event",1a,c8,c4,75),HX_("WORK",d1,c9,bd,39))));
            			}
            		}
            		_hx_goto_8:;
HXLINE( 505)		bool _hx_tmp;
HXDLIN( 505)		if ((this->_hx___mode == false)) {
HXLINE( 505)			_hx_tmp = (this->_hx___activeJobs->_hx___jobs->length > 0);
            		}
            		else {
HXLINE( 505)			_hx_tmp = false;
            		}
HXDLIN( 505)		if (_hx_tmp) {
HXLINE( 507)			{
HXLINE( 507)				 ::lime::_hx_system::JobList _this = this->_hx___activeJobs;
HXDLIN( 507)				_this->_hx___index++;
HXDLIN( 507)				if ((_this->_hx___index >= _this->_hx___jobs->length)) {
HXLINE( 507)					_this->_hx___index = 0;
            				}
HXDLIN( 507)				this->_hx___activeJob->set_value(_this->_hx___jobs->__get(_this->_hx___index).StaticCast<  ::lime::_hx_system::JobData >()).StaticCast<  ::lime::_hx_system::JobData >();
            			}
HXLINE( 508)			 ::Dynamic state = this->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >()->state;
HXLINE( 510)			this->_hx___jobComplete->set_value(false);
HXLINE( 511)			this->workIterations->set_value(0);
HXLINE( 516)			Float maxTimeElapsed = (this->workPriority * ::lime::_hx_system::ThreadPool_obj::workLoad);
HXDLIN( 516)			Float maxTimeElapsed1 = ::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority;
HXDLIN( 516)			Float maxTimeElapsed2 = (maxTimeElapsed / (maxTimeElapsed1 * ::lime::app::Application_obj::current->_hx___window->_hx___backend->getFrameRate()));
HXLINE( 518)			Float startTime = ::Sys_obj::cpuTime();
HXLINE( 519)			Float timeElapsed = ( (Float)(0) );
HXLINE( 520)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 522)				while(true){
HXLINE( 524)					 ::sys::thread::Tls _hx_tmp = this->workIterations;
HXDLIN( 524)					_hx_tmp->set_value((this->workIterations->get_value() + 1));
HXLINE( 266)					this->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >()->doWork(state,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 526)					timeElapsed = (::Sys_obj::cpuTime() - startTime);
HXLINE( 528)					bool _hx_tmp1;
HXDLIN( 528)					if (!(( (bool)(this->_hx___jobComplete->get_value()) ))) {
HXLINE( 528)						_hx_tmp1 = (timeElapsed < maxTimeElapsed2);
            					}
            					else {
HXLINE( 528)						_hx_tmp1 = false;
            					}
HXLINE( 522)					if (!(_hx_tmp1)) {
HXLINE( 522)						goto _hx_goto_9;
            					}
            				}
            				_hx_goto_9:;
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 530)					 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE( 532)					this->sendError(e,null());
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 535)			 ::lime::_hx_system::JobData fh = this->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >();
HXDLIN( 535)			fh->duration = (fh->duration + timeElapsed);
HXLINE( 537)			{
HXLINE( 537)				 ::lime::_hx_system::JobData value = null();
HXDLIN( 537)				this->_hx___activeJob->set_value(value).StaticCast<  ::lime::_hx_system::JobData >();
            			}
            		}
HXLINE( 540)		 ::Dynamic threadEvent;
HXLINE( 541)		while(true){
HXLINE( 541)			threadEvent = this->_hx___jobOutput->pop(false);
HXDLIN( 541)			if (!(::hx::IsNotNull( threadEvent ))) {
HXLINE( 541)				goto _hx_goto_10;
            			}
HXLINE( 543)			if (::hx::IsNotNull( threadEvent->__Field(HX_("jobID",18,c9,22,52),::hx::paccDynamic) )) {
HXLINE( 545)				 ::lime::_hx_system::JobData value = this->_hx___activeJobs->get(( (int)(threadEvent->__Field(HX_("jobID",18,c9,22,52),::hx::paccDynamic)) ));
HXDLIN( 545)				this->_hx___activeJob->set_value(value).StaticCast<  ::lime::_hx_system::JobData >();
            			}
            			else {
HXLINE( 549)				this->_hx___activeJob->set_value( ::Dynamic(threadEvent->__Field(HX_("job",fd,cf,50,00),::hx::paccDynamic))).StaticCast<  ::lime::_hx_system::JobData >();
            			}
HXLINE( 552)			bool _hx_tmp;
HXDLIN( 552)			if (::hx::IsNotNull( this->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >() )) {
HXLINE( 552)				 ::lime::_hx_system::JobList _this = this->_hx___activeJobs;
HXDLIN( 552)				_hx_tmp = ::hx::IsNull( _this->get(this->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >()->id) );
            			}
            			else {
HXLINE( 552)				_hx_tmp = true;
            			}
HXDLIN( 552)			if (_hx_tmp) {
HXLINE( 554)				continue;
            			}
HXLINE( 557)			if ((this->_hx___mode == true)) {
HXLINE( 559)				Float _hx_tmp = ::Sys_obj::cpuTime();
HXDLIN( 559)				this->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >()->duration = (_hx_tmp - this->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >()->startTime);
            			}
HXLINE( 562)			::String _hx_switch_0 = ( (::String)(threadEvent->__Field(HX_("event",1a,c8,c4,75),::hx::paccDynamic)) );
            			if (  (_hx_switch_0==HX_("COMPLETE",b9,90,4d,d9)) ||  (_hx_switch_0==HX_("ERROR",a8,03,18,f1)) ){
HXLINE( 571)				if (::hx::IsEq( threadEvent->__Field(HX_("event",1a,c8,c4,75),::hx::paccDynamic),HX_("COMPLETE",b9,90,4d,d9) )) {
HXLINE( 573)					this->onComplete->dispatch( ::Dynamic(threadEvent->__Field(HX_("message",c7,35,11,9a),::hx::paccDynamic)));
            				}
            				else {
HXLINE( 577)					this->onError->dispatch( ::Dynamic(threadEvent->__Field(HX_("message",c7,35,11,9a),::hx::paccDynamic)));
            				}
HXLINE( 580)				 ::lime::_hx_system::JobList _hx_tmp = this->_hx___activeJobs;
HXDLIN( 580)				_hx_tmp->remove(this->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >());
HXLINE( 583)				if ((this->_hx___mode == true)) {
HXLINE( 585)					::Dynamic this1 = this->_hx___activeThreads;
HXDLIN( 585)					 ::sys::thread::_Thread::HaxeThread thread = ( ( ::sys::thread::_Thread::HaxeThread)(( ( ::haxe::ds::IntMap)(this1) )->get(this->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >()->id)) );
HXLINE( 586)					{
HXLINE( 586)						::Dynamic this2 = this->_hx___activeThreads;
HXDLIN( 586)						( ( ::haxe::ds::IntMap)(this2) )->remove(this->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >()->id);
            					}
HXLINE( 588)					bool _hx_tmp;
HXDLIN( 588)					if (((this->_hx___activeJobs->_hx___jobs->length + this->_hx___idleThreads->length) <= this->maxThreads)) {
HXLINE( 588)						if ((this->_hx___jobQueue->_hx___jobs->length == 0)) {
HXLINE( 588)							_hx_tmp = ((this->_hx___activeJobs->_hx___jobs->length + this->_hx___idleThreads->length) > this->minThreads);
            						}
            						else {
HXLINE( 588)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 588)						_hx_tmp = true;
            					}
HXDLIN( 588)					if (_hx_tmp) {
HXLINE( 590)						thread->messages->add( ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("event",1a,c8,c4,75),HX_("EXIT",1e,bf,de,2d))));
            					}
            					else {
HXLINE( 594)						this->_hx___idleThreads->push(thread);
            					}
            				}
HXLINE( 570)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("PROGRESS",ad,87,b0,df)) ){
HXLINE( 568)				this->onProgress->dispatch( ::Dynamic(threadEvent->__Field(HX_("message",c7,35,11,9a),::hx::paccDynamic)));
HXDLIN( 568)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("WORK",d1,c9,bd,39)) ){
HXLINE( 565)				this->onRun->dispatch( ::Dynamic(threadEvent->__Field(HX_("message",c7,35,11,9a),::hx::paccDynamic)));
HXDLIN( 565)				goto _hx_goto_11;
            			}
            			/* default */{
            			}
            			_hx_goto_11:;
HXLINE( 602)			{
HXLINE( 602)				 ::lime::_hx_system::JobData value = null();
HXDLIN( 602)				this->_hx___activeJob->set_value(value).StaticCast<  ::lime::_hx_system::JobData >();
            			}
            		}
            		_hx_goto_10:;
HXLINE( 605)		bool _hx_tmp1;
HXDLIN( 605)		if ((this->_hx___activeJobs->_hx___jobs->length == 0)) {
HXLINE( 605)			_hx_tmp1 = (this->_hx___jobQueue->_hx___jobs->length == 0);
            		}
            		else {
HXLINE( 605)			_hx_tmp1 = false;
            		}
HXDLIN( 605)		if (_hx_tmp1) {
HXLINE( 607)			::lime::app::Application_obj::current->onUpdate->remove(this->_hx___update_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,_hx___update,(void))

 ::sys::thread::_Thread::HaxeThread ThreadPool_obj::createThread( ::Dynamic executeThread){
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_613_createThread)
HXLINE( 614)		 ::sys::thread::_Thread::HaxeThread thread = this->super::createThread(executeThread);
HXLINE( 616)		thread->messages->add(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 619)		return thread;
            	}


int ThreadPool_obj::get_activeJobs(){
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_627_get_activeJobs)
HXDLIN( 627)		return this->_hx___activeJobs->_hx___jobs->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ThreadPool_obj,get_activeJobs,return )

int ThreadPool_obj::get_idleThreads(){
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_632_get_idleThreads)
HXDLIN( 632)		return this->_hx___idleThreads->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ThreadPool_obj,get_idleThreads,return )

int ThreadPool_obj::get_currentThreads(){
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_637_get_currentThreads)
HXDLIN( 637)		return (this->_hx___activeJobs->_hx___jobs->length + this->_hx___idleThreads->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ThreadPool_obj,get_currentThreads,return )

 ::lime::_hx_system::ThreadPool ThreadPool_obj::get_doWork(){
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_642_get_doWork)
HXDLIN( 642)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ThreadPool_obj,get_doWork,return )

Float ThreadPool_obj::set_workPriority(Float value){
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_646_set_workPriority)
HXLINE( 647)		bool _hx_tmp;
HXDLIN( 647)		if ((this->_hx___mode == false)) {
HXLINE( 647)			_hx_tmp = (this->_hx___activeJobs->_hx___jobs->length > 0);
            		}
            		else {
HXLINE( 647)			_hx_tmp = false;
            		}
HXDLIN( 647)		if (_hx_tmp) {
HXLINE( 649)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 649)			::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority + (value - this->workPriority));
            		}
HXLINE( 651)		return (this->workPriority = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,set_workPriority,return )

 ::sys::thread::_Thread::HaxeThread ThreadPool_obj::_hx___mainThread;

Float ThreadPool_obj::workLoad;

Float ThreadPool_obj::_hx___totalWorkPriority;

bool ThreadPool_obj::isMainThread(){
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_103_isMainThread)
HXDLIN( 103)		return ::hx::IsInstanceEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ThreadPool_obj,isMainThread,return )

void ThreadPool_obj::_hx___executeThread(){
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_386___executeThread)
HXLINE( 387)		 ::lime::_hx_system::WorkOutput output = ::hx::TCast<  ::lime::_hx_system::WorkOutput >::cast(::sys::thread::_Thread::Thread_Impl__obj::readMessage(true));
HXLINE( 388)		 ::Dynamic event = null();
HXLINE( 390)		while(true){
HXLINE( 393)			if (::hx::IsNull( event )) {
HXLINE( 395)				while(true){
HXLINE( 397)					event = ::sys::thread::_Thread::Thread_Impl__obj::readMessage(true);
HXLINE( 399)					bool _hx_tmp;
HXDLIN( 399)					if (::hx::IsNotNull( event )) {
HXLINE( 399)						_hx_tmp = !(::Reflect_obj::hasField(event,HX_("event",1a,c8,c4,75)));
            					}
            					else {
HXLINE( 399)						_hx_tmp = true;
            					}
HXLINE( 395)					if (!(_hx_tmp)) {
HXLINE( 395)						goto _hx_goto_21;
            					}
            				}
            				_hx_goto_21:;
HXLINE( 401)				{
HXLINE( 401)					output->_hx___jobComplete->set_value(false);
HXDLIN( 401)					output->workIterations->set_value(0);
            				}
            			}
HXLINE( 404)			if (::hx::IsEq( event->__Field(HX_("event",1a,c8,c4,75),::hx::paccDynamic),HX_("EXIT",1e,bf,de,2d) )) {
HXLINE( 410)				return;
            			}
HXLINE( 413)			bool _hx_tmp;
HXDLIN( 413)			if (::hx::IsEq( event->__Field(HX_("event",1a,c8,c4,75),::hx::paccDynamic),HX_("WORK",d1,c9,bd,39) )) {
HXLINE( 413)				_hx_tmp = ::hx::IsNull( event->__Field(HX_("job",fd,cf,50,00),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 413)				_hx_tmp = true;
            			}
HXDLIN( 413)			if (_hx_tmp) {
HXLINE( 416)				event = null();
HXLINE( 417)				continue;
            			}
HXLINE( 421)			output->_hx___activeJob->set_value( ::Dynamic(event->__Field(HX_("job",fd,cf,50,00),::hx::paccDynamic))).StaticCast<  ::lime::_hx_system::JobData >();
HXLINE( 423)			 ::Dynamic interruption = null();
HXLINE( 424)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 426)				while(true){
HXLINE( 426)					bool _hx_tmp;
HXDLIN( 426)					if (!(( (bool)(output->_hx___jobComplete->get_value()) ))) {
HXLINE( 426)						interruption = ::sys::thread::_Thread::Thread_Impl__obj::readMessage(false);
HXDLIN( 426)						_hx_tmp = ::hx::IsNull( interruption );
            					}
            					else {
HXLINE( 426)						_hx_tmp = false;
            					}
HXDLIN( 426)					if (!(_hx_tmp)) {
HXLINE( 426)						goto _hx_goto_22;
            					}
HXLINE( 428)					 ::sys::thread::Tls output1 = output->workIterations;
HXDLIN( 428)					output1->set_value((output->workIterations->get_value() + 1));
HXLINE( 266)					( ( ::lime::_hx_system::JobData)(event->__Field(HX_("job",fd,cf,50,00),::hx::paccDynamic)) )->doWork(( ( ::lime::_hx_system::JobData)(event->__Field(HX_("job",fd,cf,50,00),::hx::paccDynamic)) )->state,output);
            				}
            				_hx_goto_22:;
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 432)					 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE( 434)					output->sendError(e,null());
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 437)			{
HXLINE( 437)				 ::lime::_hx_system::JobData value = null();
HXDLIN( 437)				output->_hx___activeJob->set_value(value).StaticCast<  ::lime::_hx_system::JobData >();
            			}
HXLINE( 439)			bool _hx_tmp1;
HXDLIN( 439)			if (::hx::IsNotNull( interruption )) {
HXLINE( 439)				_hx_tmp1 = ( (bool)(output->_hx___jobComplete->get_value()) );
            			}
            			else {
HXLINE( 439)				_hx_tmp1 = true;
            			}
HXDLIN( 439)			if (_hx_tmp1) {
HXLINE( 442)				event = interruption;
            			}
            			else {
HXLINE( 444)				if (::Reflect_obj::hasField(interruption,HX_("event",1a,c8,c4,75))) {
HXLINE( 447)					event = interruption;
HXLINE( 448)					{
HXLINE( 448)						output->_hx___jobComplete->set_value(false);
HXDLIN( 448)						output->workIterations->set_value(0);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ThreadPool_obj,_hx___executeThread,(void))

Float ThreadPool_obj::timestamp(){
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_465_timestamp)
HXDLIN( 465)		return ::Sys_obj::cpuTime();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ThreadPool_obj,timestamp,return )


::hx::ObjectPtr< ThreadPool_obj > ThreadPool_obj::__new(::hx::Null< int >  __o_minThreads,::hx::Null< int >  __o_maxThreads, ::Dynamic mode) {
	::hx::ObjectPtr< ThreadPool_obj > __this = new ThreadPool_obj();
	__this->__construct(__o_minThreads,__o_maxThreads,mode);
	return __this;
}

::hx::ObjectPtr< ThreadPool_obj > ThreadPool_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_minThreads,::hx::Null< int >  __o_maxThreads, ::Dynamic mode) {
	ThreadPool_obj *__this = (ThreadPool_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ThreadPool_obj), true, "lime.system.ThreadPool"));
	*(void **)__this = ThreadPool_obj::_hx_vtable;
	__this->__construct(__o_minThreads,__o_maxThreads,mode);
	return __this;
}

ThreadPool_obj::ThreadPool_obj()
{
}

void ThreadPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThreadPool);
	HX_MARK_MEMBER_NAME(maxThreads,"maxThreads");
	HX_MARK_MEMBER_NAME(minThreads,"minThreads");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onError,"onError");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_MEMBER_NAME(onRun,"onRun");
	HX_MARK_MEMBER_NAME(workPriority,"workPriority");
	HX_MARK_MEMBER_NAME(_hx___doWork,"__doWork");
	HX_MARK_MEMBER_NAME(_hx___activeJobs,"__activeJobs");
	HX_MARK_MEMBER_NAME(_hx___activeThreads,"__activeThreads");
	HX_MARK_MEMBER_NAME(_hx___idleThreads,"__idleThreads");
	HX_MARK_MEMBER_NAME(_hx___jobQueue,"__jobQueue");
	 ::lime::_hx_system::WorkOutput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ThreadPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(maxThreads,"maxThreads");
	HX_VISIT_MEMBER_NAME(minThreads,"minThreads");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(onError,"onError");
	HX_VISIT_MEMBER_NAME(onProgress,"onProgress");
	HX_VISIT_MEMBER_NAME(onRun,"onRun");
	HX_VISIT_MEMBER_NAME(workPriority,"workPriority");
	HX_VISIT_MEMBER_NAME(_hx___doWork,"__doWork");
	HX_VISIT_MEMBER_NAME(_hx___activeJobs,"__activeJobs");
	HX_VISIT_MEMBER_NAME(_hx___activeThreads,"__activeThreads");
	HX_VISIT_MEMBER_NAME(_hx___idleThreads,"__idleThreads");
	HX_VISIT_MEMBER_NAME(_hx___jobQueue,"__jobQueue");
	 ::lime::_hx_system::WorkOutput_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ThreadPool_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onRun") ) { return ::hx::Val( onRun ); }
		if (HX_FIELD_EQ(inName,"queue") ) { return ::hx::Val( queue_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"doWork") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_doWork() ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return ::hx::Val( onError ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__doWork") ) { return ::hx::Val( _hx___doWork ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cancelJob") ) { return ::hx::Val( cancelJob_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"activeJobs") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_activeJobs() ); }
		if (HX_FIELD_EQ(inName,"maxThreads") ) { return ::hx::Val( maxThreads ); }
		if (HX_FIELD_EQ(inName,"minThreads") ) { return ::hx::Val( minThreads ); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return ::hx::Val( onProgress ); }
		if (HX_FIELD_EQ(inName,"__jobQueue") ) { return ::hx::Val( _hx___jobQueue ); }
		if (HX_FIELD_EQ(inName,"get_doWork") ) { return ::hx::Val( get_doWork_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"idleThreads") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_idleThreads() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"workPriority") ) { return ::hx::Val( workPriority ); }
		if (HX_FIELD_EQ(inName,"__activeJobs") ) { return ::hx::Val( _hx___activeJobs ); }
		if (HX_FIELD_EQ(inName,"createThread") ) { return ::hx::Val( createThread_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__idleThreads") ) { return ::hx::Val( _hx___idleThreads ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentThreads") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentThreads() ); }
		if (HX_FIELD_EQ(inName,"get_activeJobs") ) { return ::hx::Val( get_activeJobs_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__activeThreads") ) { return ::hx::Val( _hx___activeThreads ); }
		if (HX_FIELD_EQ(inName,"get_idleThreads") ) { return ::hx::Val( get_idleThreads_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_workPriority") ) { return ::hx::Val( set_workPriority_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_currentThreads") ) { return ::hx::Val( get_currentThreads_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ThreadPool_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"workLoad") ) { outValue = ( workLoad ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { outValue = timestamp_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__mainThread") ) { outValue = ( _hx___mainThread ); return true; }
		if (HX_FIELD_EQ(inName,"isMainThread") ) { outValue = isMainThread_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__executeThread") ) { outValue = _hx___executeThread_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__totalWorkPriority") ) { outValue = ( _hx___totalWorkPriority ); return true; }
	}
	return false;
}

::hx::Val ThreadPool_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onRun") ) { onRun=inValue.Cast<  ::lime::app::_Event_lime_system_State_Void >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast<  ::lime::app::_Event_Dynamic_Void >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__doWork") ) { _hx___doWork=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxThreads") ) { maxThreads=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minThreads") ) { minThreads=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::lime::app::_Event_Dynamic_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast<  ::lime::app::_Event_Dynamic_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__jobQueue") ) { _hx___jobQueue=inValue.Cast<  ::lime::_hx_system::JobList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"workPriority") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_workPriority(inValue.Cast< Float >()) );workPriority=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__activeJobs") ) { _hx___activeJobs=inValue.Cast<  ::lime::_hx_system::JobList >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__idleThreads") ) { _hx___idleThreads=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__activeThreads") ) { _hx___activeThreads=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ThreadPool_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"workLoad") ) { workLoad=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__mainThread") ) { _hx___mainThread=ioValue.Cast<  ::sys::thread::_Thread::HaxeThread >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__totalWorkPriority") ) { _hx___totalWorkPriority=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void ThreadPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentThreads",30,6b,26,61));
	outFields->push(HX_("activeJobs",bc,f6,8f,ef));
	outFields->push(HX_("idleThreads",b5,41,f3,a7));
	outFields->push(HX_("maxThreads",25,70,b6,bd));
	outFields->push(HX_("minThreads",f7,42,49,19));
	outFields->push(HX_("onComplete",f8,d4,7e,5d));
	outFields->push(HX_("onError",29,6a,67,09));
	outFields->push(HX_("onProgress",ec,cb,e1,63));
	outFields->push(HX_("onRun",6c,7b,6e,32));
	outFields->push(HX_("workPriority",55,f2,6c,d1));
	outFields->push(HX_("doWork",fc,a6,00,1f));
	outFields->push(HX_("__activeJobs",dc,71,23,28));
	outFields->push(HX_("__activeThreads",23,7a,0d,93));
	outFields->push(HX_("__idleThreads",95,82,6b,f0));
	outFields->push(HX_("__jobQueue",74,8b,fb,79));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ThreadPool_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ThreadPool_obj,maxThreads),HX_("maxThreads",25,70,b6,bd)},
	{::hx::fsInt,(int)offsetof(ThreadPool_obj,minThreads),HX_("minThreads",f7,42,49,19)},
	{::hx::fsObject /*  ::lime::app::_Event_Dynamic_Void */ ,(int)offsetof(ThreadPool_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsObject /*  ::lime::app::_Event_Dynamic_Void */ ,(int)offsetof(ThreadPool_obj,onError),HX_("onError",29,6a,67,09)},
	{::hx::fsObject /*  ::lime::app::_Event_Dynamic_Void */ ,(int)offsetof(ThreadPool_obj,onProgress),HX_("onProgress",ec,cb,e1,63)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_system_State_Void */ ,(int)offsetof(ThreadPool_obj,onRun),HX_("onRun",6c,7b,6e,32)},
	{::hx::fsFloat,(int)offsetof(ThreadPool_obj,workPriority),HX_("workPriority",55,f2,6c,d1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ThreadPool_obj,_hx___doWork),HX_("__doWork",1c,12,30,c7)},
	{::hx::fsObject /*  ::lime::_hx_system::JobList */ ,(int)offsetof(ThreadPool_obj,_hx___activeJobs),HX_("__activeJobs",dc,71,23,28)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(ThreadPool_obj,_hx___activeThreads),HX_("__activeThreads",23,7a,0d,93)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ThreadPool_obj,_hx___idleThreads),HX_("__idleThreads",95,82,6b,f0)},
	{::hx::fsObject /*  ::lime::_hx_system::JobList */ ,(int)offsetof(ThreadPool_obj,_hx___jobQueue),HX_("__jobQueue",74,8b,fb,79)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ThreadPool_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::_Thread::HaxeThread */ ,(void *) &ThreadPool_obj::_hx___mainThread,HX_("__mainThread",03,13,f9,1c)},
	{::hx::fsFloat,(void *) &ThreadPool_obj::workLoad,HX_("workLoad",97,84,61,01)},
	{::hx::fsFloat,(void *) &ThreadPool_obj::_hx___totalWorkPriority,HX_("__totalWorkPriority",19,51,b2,b3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ThreadPool_obj_sMemberFields[] = {
	HX_("maxThreads",25,70,b6,bd),
	HX_("minThreads",f7,42,49,19),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("onError",29,6a,67,09),
	HX_("onProgress",ec,cb,e1,63),
	HX_("onRun",6c,7b,6e,32),
	HX_("workPriority",55,f2,6c,d1),
	HX_("__doWork",1c,12,30,c7),
	HX_("__activeJobs",dc,71,23,28),
	HX_("__activeThreads",23,7a,0d,93),
	HX_("__idleThreads",95,82,6b,f0),
	HX_("__jobQueue",74,8b,fb,79),
	HX_("cancel",7a,ed,33,b8),
	HX_("cancelJob",a3,c2,1a,22),
	HX_("queue",91,8d,ea,5d),
	HX_("run",4b,e7,56,00),
	HX_("__update",29,f1,34,2f),
	HX_("createThread",e6,ba,0e,b1),
	HX_("get_activeJobs",05,7f,85,65),
	HX_("get_idleThreads",4c,f9,d4,68),
	HX_("get_currentThreads",f9,4b,c0,fc),
	HX_("get_doWork",c5,16,88,0f),
	HX_("set_workPriority",52,cc,4d,2c),
	::String(null()) };

static void ThreadPool_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThreadPool_obj::_hx___mainThread,"__mainThread");
	HX_MARK_MEMBER_NAME(ThreadPool_obj::workLoad,"workLoad");
	HX_MARK_MEMBER_NAME(ThreadPool_obj::_hx___totalWorkPriority,"__totalWorkPriority");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ThreadPool_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThreadPool_obj::_hx___mainThread,"__mainThread");
	HX_VISIT_MEMBER_NAME(ThreadPool_obj::workLoad,"workLoad");
	HX_VISIT_MEMBER_NAME(ThreadPool_obj::_hx___totalWorkPriority,"__totalWorkPriority");
};

#endif

::hx::Class ThreadPool_obj::__mClass;

static ::String ThreadPool_obj_sStaticFields[] = {
	HX_("__mainThread",03,13,f9,1c),
	HX_("workLoad",97,84,61,01),
	HX_("__totalWorkPriority",19,51,b2,b3),
	HX_("isMainThread",6d,c0,84,b6),
	HX_("__executeThread",bf,47,62,91),
	HX_("timestamp",d6,d4,ce,a5),
	::String(null())
};

void ThreadPool_obj::__register()
{
	ThreadPool_obj _hx_dummy;
	ThreadPool_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.ThreadPool",6c,8c,6a,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ThreadPool_obj::__GetStatic;
	__mClass->mSetStaticField = &ThreadPool_obj::__SetStatic;
	__mClass->mMarkFunc = ThreadPool_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ThreadPool_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ThreadPool_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ThreadPool_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ThreadPool_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ThreadPool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ThreadPool_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ThreadPool_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_74_boot)
HXDLIN(  74)		_hx___mainThread = ::sys::thread::_Thread::HaxeThread_obj::current();
            	}
{
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_87_boot)
HXDLIN(  87)		workLoad = ((Float)0.5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b98885ed80fb7e2e_95_boot)
HXDLIN(  95)		_hx___totalWorkPriority = ((Float)0);
            	}
}

} // end namespace lime
} // end namespace system
