#ifndef INCLUDED_lime_app_FutureWork
#define INCLUDED_lime_app_FutureWork

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(lime,app,FutureWork)
HX_DECLARE_CLASS2(lime,app,Promise)
HX_DECLARE_CLASS2(lime,_hx_system,ThreadPool)
HX_DECLARE_CLASS2(lime,_hx_system,WorkOutput)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES FutureWork_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FutureWork_obj OBJ_;
		FutureWork_obj();

	public:
		enum { _hx_ClassId = 0x0ec31c9c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.app.FutureWork")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.app.FutureWork"); }

		inline static ::hx::ObjectPtr< FutureWork_obj > __new() {
			::hx::ObjectPtr< FutureWork_obj > __this = new FutureWork_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FutureWork_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FutureWork_obj *__this = (FutureWork_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FutureWork_obj), false, "lime.app.FutureWork"));
			*(void **)__this = FutureWork_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FutureWork_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FutureWork",d4,a7,da,de); }

		static void __boot();
		static  ::lime::_hx_system::ThreadPool threadPool;
		static  ::haxe::ds::IntMap promises;
		static int minThreads;
		static int maxThreads;
		static void run( ::Dynamic work, ::lime::app::Promise promise);
		static ::Dynamic run_dyn();

		static void threadPool_doWork( ::Dynamic work, ::lime::_hx_system::WorkOutput output);
		static ::Dynamic threadPool_doWork_dyn();

		static void threadPool_onComplete( ::Dynamic result);
		static ::Dynamic threadPool_onComplete_dyn();

		static void threadPool_onError( ::Dynamic error);
		static ::Dynamic threadPool_onError_dyn();

		static int set_minThreads(int value);
		static ::Dynamic set_minThreads_dyn();

		static int set_maxThreads(int value);
		static ::Dynamic set_maxThreads_dyn();

		static int get_activeJobs();
		static ::Dynamic get_activeJobs_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_FutureWork */ 
