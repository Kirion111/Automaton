#include <hxcpp.h>

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
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cf21c0a017d40749_708_new,"lime.system.JobList","new",0x52a10f07,"lime.system.JobList.new","lime/system/ThreadPool.hx",708,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_cf21c0a017d40749_733_clear,"lime.system.JobList","clear",0xb772e7f4,"lime.system.JobList.clear","lime/system/ThreadPool.hx",733,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_cf21c0a017d40749_744_exists,"lime.system.JobList","exists",0x85504195,"lime.system.JobList.exists","lime/system/ThreadPool.hx",744,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_cf21c0a017d40749_749_hasNext,"lime.system.JobList","hasNext",0x14f5c394,"lime.system.JobList.hasNext","lime/system/ThreadPool.hx",749,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_cf21c0a017d40749_756_next,"lime.system.JobList","next",0xfa4c186c,"lime.system.JobList.next","lime/system/ThreadPool.hx",756,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_cf21c0a017d40749_767_pop,"lime.system.JobList","pop",0x52a29c38,"lime.system.JobList.pop","lime/system/ThreadPool.hx",767,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_cf21c0a017d40749_775_remove,"lime.system.JobList","remove",0xc9f8bffd,"lime.system.JobList.remove","lime/system/ThreadPool.hx",775,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_cf21c0a017d40749_792_removeByID,"lime.system.JobList","removeByID",0x8721280f,"lime.system.JobList.removeByID","lime/system/ThreadPool.hx",792,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_cf21c0a017d40749_804_get,"lime.system.JobList","get",0x529bbf3d,"lime.system.JobList.get","lime/system/ThreadPool.hx",804,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_cf21c0a017d40749_815_push,"lime.system.JobList","push",0xfbaaa553,"lime.system.JobList.push","lime/system/ThreadPool.hx",815,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_cf21c0a017d40749_824_set___addingWorkPriority,"lime.system.JobList","set___addingWorkPriority",0xdfde716c,"lime.system.JobList.set___addingWorkPriority","lime/system/ThreadPool.hx",824,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_cf21c0a017d40749_844_get_length,"lime.system.JobList","get_length",0x586df8e8,"lime.system.JobList.get_length","lime/system/ThreadPool.hx",844,0x8993fbb2)
namespace lime{
namespace _hx_system{

void JobList_obj::__construct( ::lime::_hx_system::ThreadPool pool){
            	HX_STACKFRAME(&_hx_pos_cf21c0a017d40749_708_new)
HXLINE( 720)		this->_hx___jobs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 718)		this->_hx___index = 0;
HXLINE( 728)		this->pool = pool;
HXLINE( 729)		this->_hx___addingWorkPriority = false;
            	}

Dynamic JobList_obj::__CreateEmpty() { return new JobList_obj; }

void *JobList_obj::_hx_vtable = 0;

Dynamic JobList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JobList_obj > _hx_result = new JobList_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool JobList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c5d9717;
}

void JobList_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_cf21c0a017d40749_733_clear)
HXLINE( 735)		this->_hx___jobs->resize(0);
HXLINE( 739)		bool _hx_tmp;
HXDLIN( 739)		bool _hx_tmp1;
HXDLIN( 739)		if (::hx::IsNotNull( this->pool )) {
HXLINE( 739)			_hx_tmp1 = (this->_hx___addingWorkPriority != false);
            		}
            		else {
HXLINE( 739)			_hx_tmp1 = false;
            		}
HXDLIN( 739)		if (_hx_tmp1) {
HXLINE( 739)			_hx_tmp = ::hx::IsInstanceEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread );
            		}
            		else {
HXLINE( 739)			_hx_tmp = false;
            		}
HXDLIN( 739)		if (_hx_tmp) {
HXLINE( 739)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 739)			::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority - this->pool->workPriority);
HXDLIN( 739)			this->_hx___addingWorkPriority = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(JobList_obj,clear,(void))

bool JobList_obj::exists( ::lime::_hx_system::JobData job){
            	HX_STACKFRAME(&_hx_pos_cf21c0a017d40749_744_exists)
HXDLIN( 744)		return ::hx::IsNotNull( this->get(job->id) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(JobList_obj,exists,return )

bool JobList_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_cf21c0a017d40749_749_hasNext)
HXDLIN( 749)		return (this->_hx___jobs->length > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(JobList_obj,hasNext,return )

 ::lime::_hx_system::JobData JobList_obj::next(){
            	HX_STACKFRAME(&_hx_pos_cf21c0a017d40749_756_next)
HXLINE( 757)		this->_hx___index++;
HXLINE( 758)		if ((this->_hx___index >= this->_hx___jobs->length)) {
HXLINE( 760)			this->_hx___index = 0;
            		}
HXLINE( 763)		return this->_hx___jobs->__get(this->_hx___index).StaticCast<  ::lime::_hx_system::JobData >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(JobList_obj,next,return )

 ::lime::_hx_system::JobData JobList_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_cf21c0a017d40749_767_pop)
HXLINE( 768)		 ::lime::_hx_system::JobData job = this->_hx___jobs->pop().StaticCast<  ::lime::_hx_system::JobData >();
HXLINE( 769)		{
HXLINE( 769)			bool value = (this->_hx___jobs->length > 0);
HXDLIN( 769)			bool _hx_tmp;
HXDLIN( 769)			bool _hx_tmp1;
HXDLIN( 769)			if (::hx::IsNotNull( this->pool )) {
HXLINE( 769)				_hx_tmp1 = (this->_hx___addingWorkPriority != value);
            			}
            			else {
HXLINE( 769)				_hx_tmp1 = false;
            			}
HXDLIN( 769)			if (_hx_tmp1) {
HXLINE( 769)				_hx_tmp = ::hx::IsInstanceEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread );
            			}
            			else {
HXLINE( 769)				_hx_tmp = false;
            			}
HXDLIN( 769)			if (_hx_tmp) {
HXLINE( 769)				if (value) {
HXLINE( 769)					 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 769)					::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority + this->pool->workPriority);
            				}
            				else {
HXLINE( 769)					 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 769)					::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority - this->pool->workPriority);
            				}
HXDLIN( 769)				this->_hx___addingWorkPriority = value;
            			}
            		}
HXLINE( 770)		return job;
            	}


HX_DEFINE_DYNAMIC_FUNC0(JobList_obj,pop,return )

bool JobList_obj::remove( ::lime::_hx_system::JobData job){
            	HX_STACKFRAME(&_hx_pos_cf21c0a017d40749_775_remove)
HXDLIN( 775)		if (this->_hx___jobs->remove(job)) {
HXLINE( 777)			{
HXLINE( 777)				bool value = (this->_hx___jobs->length > 0);
HXDLIN( 777)				bool _hx_tmp;
HXDLIN( 777)				bool _hx_tmp1;
HXDLIN( 777)				if (::hx::IsNotNull( this->pool )) {
HXLINE( 777)					_hx_tmp1 = (this->_hx___addingWorkPriority != value);
            				}
            				else {
HXLINE( 777)					_hx_tmp1 = false;
            				}
HXDLIN( 777)				if (_hx_tmp1) {
HXLINE( 777)					_hx_tmp = ::hx::IsInstanceEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread );
            				}
            				else {
HXLINE( 777)					_hx_tmp = false;
            				}
HXDLIN( 777)				if (_hx_tmp) {
HXLINE( 777)					if (value) {
HXLINE( 777)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 777)						::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority + this->pool->workPriority);
            					}
            					else {
HXLINE( 777)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 777)						::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority - this->pool->workPriority);
            					}
HXDLIN( 777)					this->_hx___addingWorkPriority = value;
            				}
            			}
HXLINE( 778)			return true;
            		}
            		else {
HXLINE( 780)			bool _hx_tmp;
HXDLIN( 780)			::Array< ::Dynamic> _hx_tmp1 = this->_hx___jobs;
HXDLIN( 780)			if (_hx_tmp1->remove(this->get(job->id))) {
HXLINE( 780)				{
HXLINE( 780)					bool value = (this->_hx___jobs->length > 0);
HXDLIN( 780)					bool _hx_tmp1;
HXDLIN( 780)					bool _hx_tmp2;
HXDLIN( 780)					if (::hx::IsNotNull( this->pool )) {
HXLINE( 780)						_hx_tmp2 = (this->_hx___addingWorkPriority != value);
            					}
            					else {
HXLINE( 780)						_hx_tmp2 = false;
            					}
HXDLIN( 780)					if (_hx_tmp2) {
HXLINE( 780)						_hx_tmp1 = ::hx::IsInstanceEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread );
            					}
            					else {
HXLINE( 780)						_hx_tmp1 = false;
            					}
HXDLIN( 780)					if (_hx_tmp1) {
HXLINE( 780)						if (value) {
HXLINE( 780)							 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 780)							::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority + this->pool->workPriority);
            						}
            						else {
HXLINE( 780)							 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 780)							::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority - this->pool->workPriority);
            						}
HXDLIN( 780)						this->_hx___addingWorkPriority = value;
            					}
            				}
HXDLIN( 780)				_hx_tmp = true;
            			}
            			else {
HXLINE( 780)				_hx_tmp = false;
            			}
HXDLIN( 780)			if (_hx_tmp) {
HXLINE( 782)				return true;
            			}
            			else {
HXLINE( 786)				return false;
            			}
            		}
HXLINE( 775)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(JobList_obj,remove,return )

bool JobList_obj::removeByID(int id){
            	HX_STACKFRAME(&_hx_pos_cf21c0a017d40749_792_removeByID)
HXDLIN( 792)		::Array< ::Dynamic> _hx_tmp = this->_hx___jobs;
HXDLIN( 792)		if (_hx_tmp->remove(this->get(id))) {
HXLINE( 794)			{
HXLINE( 794)				bool value = (this->_hx___jobs->length > 0);
HXDLIN( 794)				bool _hx_tmp;
HXDLIN( 794)				bool _hx_tmp1;
HXDLIN( 794)				if (::hx::IsNotNull( this->pool )) {
HXLINE( 794)					_hx_tmp1 = (this->_hx___addingWorkPriority != value);
            				}
            				else {
HXLINE( 794)					_hx_tmp1 = false;
            				}
HXDLIN( 794)				if (_hx_tmp1) {
HXLINE( 794)					_hx_tmp = ::hx::IsInstanceEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread );
            				}
            				else {
HXLINE( 794)					_hx_tmp = false;
            				}
HXDLIN( 794)				if (_hx_tmp) {
HXLINE( 794)					if (value) {
HXLINE( 794)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 794)						::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority + this->pool->workPriority);
            					}
            					else {
HXLINE( 794)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 794)						::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority - this->pool->workPriority);
            					}
HXDLIN( 794)					this->_hx___addingWorkPriority = value;
            				}
            			}
HXLINE( 795)			return true;
            		}
            		else {
HXLINE( 799)			return false;
            		}
HXLINE( 792)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(JobList_obj,removeByID,return )

 ::lime::_hx_system::JobData JobList_obj::get(int id){
            	HX_STACKFRAME(&_hx_pos_cf21c0a017d40749_804_get)
HXLINE( 805)		{
HXLINE( 805)			int _g = 0;
HXDLIN( 805)			::Array< ::Dynamic> _g1 = this->_hx___jobs;
HXDLIN( 805)			while((_g < _g1->length)){
HXLINE( 805)				 ::lime::_hx_system::JobData job = _g1->__get(_g).StaticCast<  ::lime::_hx_system::JobData >();
HXDLIN( 805)				_g = (_g + 1);
HXLINE( 807)				if ((job->id == id)) {
HXLINE( 809)					return job;
            				}
            			}
            		}
HXLINE( 812)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(JobList_obj,get,return )

void JobList_obj::push( ::lime::_hx_system::JobData job){
            	HX_STACKFRAME(&_hx_pos_cf21c0a017d40749_815_push)
HXLINE( 816)		this->_hx___jobs->push(job);
HXLINE( 817)		bool _hx_tmp;
HXDLIN( 817)		bool _hx_tmp1;
HXDLIN( 817)		if (::hx::IsNotNull( this->pool )) {
HXLINE( 817)			_hx_tmp1 = (this->_hx___addingWorkPriority != true);
            		}
            		else {
HXLINE( 817)			_hx_tmp1 = false;
            		}
HXDLIN( 817)		if (_hx_tmp1) {
HXLINE( 817)			_hx_tmp = ::hx::IsInstanceEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread );
            		}
            		else {
HXLINE( 817)			_hx_tmp = false;
            		}
HXDLIN( 817)		if (_hx_tmp) {
HXLINE( 817)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 817)			::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority + this->pool->workPriority);
HXDLIN( 817)			this->_hx___addingWorkPriority = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(JobList_obj,push,(void))

bool JobList_obj::set___addingWorkPriority(bool value){
            	HX_STACKFRAME(&_hx_pos_cf21c0a017d40749_824_set___addingWorkPriority)
HXDLIN( 824)		bool _hx_tmp;
HXDLIN( 824)		bool _hx_tmp1;
HXDLIN( 824)		if (::hx::IsNotNull( this->pool )) {
HXDLIN( 824)			_hx_tmp1 = (this->_hx___addingWorkPriority != value);
            		}
            		else {
HXDLIN( 824)			_hx_tmp1 = false;
            		}
HXDLIN( 824)		if (_hx_tmp1) {
HXDLIN( 824)			_hx_tmp = ::hx::IsInstanceEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::ThreadPool_obj::_hx___mainThread );
            		}
            		else {
HXDLIN( 824)			_hx_tmp = false;
            		}
HXDLIN( 824)		if (_hx_tmp) {
HXLINE( 826)			if (value) {
HXLINE( 828)				 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 828)				::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority + this->pool->workPriority);
            			}
            			else {
HXLINE( 832)				 ::Dynamic _hx_tmp = ::hx::ClassOf< ::lime::_hx_system::ThreadPool >();
HXDLIN( 832)				::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority = (::lime::_hx_system::ThreadPool_obj::_hx___totalWorkPriority - this->pool->workPriority);
            			}
HXLINE( 834)			return (this->_hx___addingWorkPriority = value);
            		}
            		else {
HXLINE( 838)			return this->_hx___addingWorkPriority;
            		}
HXLINE( 824)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(JobList_obj,set___addingWorkPriority,return )

int JobList_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_cf21c0a017d40749_844_get_length)
HXDLIN( 844)		return this->_hx___jobs->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(JobList_obj,get_length,return )


::hx::ObjectPtr< JobList_obj > JobList_obj::__new( ::lime::_hx_system::ThreadPool pool) {
	::hx::ObjectPtr< JobList_obj > __this = new JobList_obj();
	__this->__construct(pool);
	return __this;
}

::hx::ObjectPtr< JobList_obj > JobList_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::_hx_system::ThreadPool pool) {
	JobList_obj *__this = (JobList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(JobList_obj), true, "lime.system.JobList"));
	*(void **)__this = JobList_obj::_hx_vtable;
	__this->__construct(pool);
	return __this;
}

JobList_obj::JobList_obj()
{
}

void JobList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JobList);
	HX_MARK_MEMBER_NAME(_hx___addingWorkPriority,"__addingWorkPriority");
	HX_MARK_MEMBER_NAME(_hx___index,"__index");
	HX_MARK_MEMBER_NAME(_hx___jobs,"__jobs");
	HX_MARK_MEMBER_NAME(pool,"pool");
	HX_MARK_END_CLASS();
}

void JobList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___addingWorkPriority,"__addingWorkPriority");
	HX_VISIT_MEMBER_NAME(_hx___index,"__index");
	HX_VISIT_MEMBER_NAME(_hx___jobs,"__jobs");
	HX_VISIT_MEMBER_NAME(pool,"pool");
}

::hx::Val JobList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { return ::hx::Val( pop_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { return ::hx::Val( pool ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__jobs") ) { return ::hx::Val( _hx___jobs ); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__index") ) { return ::hx::Val( _hx___index ); }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeByID") ) { return ::hx::Val( removeByID_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__addingWorkPriority") ) { return ::hx::Val( _hx___addingWorkPriority ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set___addingWorkPriority") ) { return ::hx::Val( set___addingWorkPriority_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val JobList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { pool=inValue.Cast<  ::lime::_hx_system::ThreadPool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__jobs") ) { _hx___jobs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__index") ) { _hx___index=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__addingWorkPriority") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set___addingWorkPriority(inValue.Cast< bool >()) );_hx___addingWorkPriority=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JobList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__addingWorkPriority",76,4c,bf,38));
	outFields->push(HX_("__index",f2,f3,72,28));
	outFields->push(HX_("__jobs",f6,90,5d,f5));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("pool",dc,80,5c,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo JobList_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(JobList_obj,_hx___addingWorkPriority),HX_("__addingWorkPriority",76,4c,bf,38)},
	{::hx::fsInt,(int)offsetof(JobList_obj,_hx___index),HX_("__index",f2,f3,72,28)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(JobList_obj,_hx___jobs),HX_("__jobs",f6,90,5d,f5)},
	{::hx::fsObject /*  ::lime::_hx_system::ThreadPool */ ,(int)offsetof(JobList_obj,pool),HX_("pool",dc,80,5c,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *JobList_obj_sStaticStorageInfo = 0;
#endif

static ::String JobList_obj_sMemberFields[] = {
	HX_("__addingWorkPriority",76,4c,bf,38),
	HX_("__index",f2,f3,72,28),
	HX_("__jobs",f6,90,5d,f5),
	HX_("pool",dc,80,5c,4a),
	HX_("clear",8d,71,5b,48),
	HX_("exists",dc,1d,e0,bf),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	HX_("pop",91,5d,55,00),
	HX_("remove",44,9c,88,04),
	HX_("removeByID",d6,33,42,be),
	HX_("get",96,80,4e,00),
	HX_("push",da,11,61,4a),
	HX_("set___addingWorkPriority",73,eb,35,8e),
	HX_("get_length",af,04,8f,8f),
	::String(null()) };

::hx::Class JobList_obj::__mClass;

void JobList_obj::__register()
{
	JobList_obj _hx_dummy;
	JobList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.JobList",95,7f,05,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(JobList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< JobList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JobList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JobList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
