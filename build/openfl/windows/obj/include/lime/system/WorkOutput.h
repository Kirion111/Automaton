#ifndef INCLUDED_lime_system_WorkOutput
#define INCLUDED_lime_system_WorkOutput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_hx_system,JobData)
HX_DECLARE_CLASS2(lime,_hx_system,WorkOutput)
HX_DECLARE_CLASS2(sys,thread,Deque)
HX_DECLARE_CLASS2(sys,thread,Tls)
HX_DECLARE_CLASS3(sys,thread,_Thread,HaxeThread)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES WorkOutput_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WorkOutput_obj OBJ_;
		WorkOutput_obj();

	public:
		enum { _hx_ClassId = 0x1c127516 };

		void __construct( ::Dynamic mode);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.system.WorkOutput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.system.WorkOutput"); }
		static ::hx::ObjectPtr< WorkOutput_obj > __new( ::Dynamic mode);
		static ::hx::ObjectPtr< WorkOutput_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic mode);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WorkOutput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WorkOutput",d2,3b,00,eb); }

		 ::sys::thread::Tls workIterations;
		bool _hx___mode;
		 ::sys::thread::Deque _hx___jobOutput;
		 ::sys::thread::Tls _hx___jobComplete;
		 ::sys::thread::Tls _hx___activeJob;
		void sendComplete( ::Dynamic message,::cpp::VirtualArray transferList);
		::Dynamic sendComplete_dyn();

		void sendError( ::Dynamic message,::cpp::VirtualArray transferList);
		::Dynamic sendError_dyn();

		void sendProgress( ::Dynamic message,::cpp::VirtualArray transferList);
		::Dynamic sendProgress_dyn();

		void resetJobProgress();
		::Dynamic resetJobProgress_dyn();

		virtual  ::sys::thread::_Thread::HaxeThread createThread( ::Dynamic executeThread);
		::Dynamic createThread_dyn();

		bool get_mode();
		::Dynamic get_mode_dyn();

		 ::lime::_hx_system::JobData get_activeJob();
		::Dynamic get_activeJob_dyn();

		 ::lime::_hx_system::JobData set_activeJob( ::lime::_hx_system::JobData value);
		::Dynamic set_activeJob_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_WorkOutput */ 
