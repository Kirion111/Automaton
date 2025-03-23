#ifndef INCLUDED_lime_system_JobList
#define INCLUDED_lime_system_JobList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_hx_system,JobData)
HX_DECLARE_CLASS2(lime,_hx_system,JobList)
HX_DECLARE_CLASS2(lime,_hx_system,ThreadPool)
HX_DECLARE_CLASS2(lime,_hx_system,WorkOutput)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES JobList_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef JobList_obj OBJ_;
		JobList_obj();

	public:
		enum { _hx_ClassId = 0x3c5d9717 };

		void __construct( ::lime::_hx_system::ThreadPool pool);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.system.JobList")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.system.JobList"); }
		static ::hx::ObjectPtr< JobList_obj > __new( ::lime::_hx_system::ThreadPool pool);
		static ::hx::ObjectPtr< JobList_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::_hx_system::ThreadPool pool);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~JobList_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("JobList",db,82,a2,06); }

		bool _hx___addingWorkPriority;
		int _hx___index;
		::Array< ::Dynamic> _hx___jobs;
		 ::lime::_hx_system::ThreadPool pool;
		void clear();
		::Dynamic clear_dyn();

		bool exists( ::lime::_hx_system::JobData job);
		::Dynamic exists_dyn();

		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::lime::_hx_system::JobData next();
		::Dynamic next_dyn();

		 ::lime::_hx_system::JobData pop();
		::Dynamic pop_dyn();

		bool remove( ::lime::_hx_system::JobData job);
		::Dynamic remove_dyn();

		bool removeByID(int id);
		::Dynamic removeByID_dyn();

		 ::lime::_hx_system::JobData get(int id);
		::Dynamic get_dyn();

		void push( ::lime::_hx_system::JobData job);
		::Dynamic push_dyn();

		bool set___addingWorkPriority(bool value);
		::Dynamic set___addingWorkPriority_dyn();

		int get_length();
		::Dynamic get_length_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_JobList */ 
