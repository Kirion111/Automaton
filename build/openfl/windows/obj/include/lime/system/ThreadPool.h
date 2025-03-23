#ifndef INCLUDED_lime_system_ThreadPool
#define INCLUDED_lime_system_ThreadPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_system_WorkOutput
#include <lime/system/WorkOutput.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(lime,app,_Event_Dynamic_Void)
HX_DECLARE_CLASS2(lime,app,_Event_lime_system_State_Void)
HX_DECLARE_CLASS2(lime,_hx_system,JobList)
HX_DECLARE_CLASS2(lime,_hx_system,ThreadPool)
HX_DECLARE_CLASS2(lime,_hx_system,WorkOutput)
HX_DECLARE_CLASS3(sys,thread,_Thread,HaxeThread)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES ThreadPool_obj : public  ::lime::_hx_system::WorkOutput_obj
{
	public:
		typedef  ::lime::_hx_system::WorkOutput_obj super;
		typedef ThreadPool_obj OBJ_;
		ThreadPool_obj();

	public:
		enum { _hx_ClassId = 0x6de8922a };

		void __construct(::hx::Null< int >  __o_minThreads,::hx::Null< int >  __o_maxThreads, ::Dynamic mode);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.system.ThreadPool")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.system.ThreadPool"); }
		static ::hx::ObjectPtr< ThreadPool_obj > __new(::hx::Null< int >  __o_minThreads,::hx::Null< int >  __o_maxThreads, ::Dynamic mode);
		static ::hx::ObjectPtr< ThreadPool_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_minThreads,::hx::Null< int >  __o_maxThreads, ::Dynamic mode);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ThreadPool_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ThreadPool",e6,58,d6,3c); }

		static void __boot();
		static  ::sys::thread::_Thread::HaxeThread _hx___mainThread;
		static Float workLoad;
		static Float _hx___totalWorkPriority;
		static bool isMainThread();
		static ::Dynamic isMainThread_dyn();

		static void _hx___executeThread();
		static ::Dynamic _hx___executeThread_dyn();

		static Float timestamp();
		static ::Dynamic timestamp_dyn();

		int maxThreads;
		int minThreads;
		 ::lime::app::_Event_Dynamic_Void onComplete;
		 ::lime::app::_Event_Dynamic_Void onError;
		 ::lime::app::_Event_Dynamic_Void onProgress;
		 ::lime::app::_Event_lime_system_State_Void onRun;
		Float workPriority;
		 ::Dynamic _hx___doWork;
		Dynamic _hx___doWork_dyn() { return _hx___doWork;}
		 ::lime::_hx_system::JobList _hx___activeJobs;
		 ::haxe::ds::IntMap _hx___activeThreads;
		::Array< ::Dynamic> _hx___idleThreads;
		 ::lime::_hx_system::JobList _hx___jobQueue;
		void cancel( ::Dynamic error);
		::Dynamic cancel_dyn();

		bool cancelJob(int jobID);
		::Dynamic cancelJob_dyn();

		int queue( ::Dynamic doWork, ::Dynamic state);
		::Dynamic queue_dyn();

		int run( ::Dynamic doWork, ::Dynamic state);
		::Dynamic run_dyn();

		void _hx___update(int deltaTime);
		::Dynamic _hx___update_dyn();

		 ::sys::thread::_Thread::HaxeThread createThread( ::Dynamic executeThread);

		int get_activeJobs();
		::Dynamic get_activeJobs_dyn();

		int get_idleThreads();
		::Dynamic get_idleThreads_dyn();

		int get_currentThreads();
		::Dynamic get_currentThreads_dyn();

		 ::lime::_hx_system::ThreadPool get_doWork();
		::Dynamic get_doWork_dyn();

		Float set_workPriority(Float value);
		::Dynamic set_workPriority_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_ThreadPool */ 
