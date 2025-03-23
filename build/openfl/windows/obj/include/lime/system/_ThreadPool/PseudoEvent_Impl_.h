#ifndef INCLUDED_lime_system__ThreadPool_PseudoEvent_Impl_
#define INCLUDED_lime_system__ThreadPool_PseudoEvent_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_hx_system,ThreadPool)
HX_DECLARE_CLASS2(lime,_hx_system,WorkOutput)
HX_DECLARE_CLASS3(lime,_hx_system,_ThreadPool,PseudoEvent_Impl_)

namespace lime{
namespace _hx_system{
namespace _ThreadPool{


class HXCPP_CLASS_ATTRIBUTES PseudoEvent_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PseudoEvent_Impl__obj OBJ_;
		PseudoEvent_Impl__obj();

	public:
		enum { _hx_ClassId = 0x73f3bb33 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.system._ThreadPool.PseudoEvent_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.system._ThreadPool.PseudoEvent_Impl_"); }

		inline static ::hx::ObjectPtr< PseudoEvent_Impl__obj > __new() {
			::hx::ObjectPtr< PseudoEvent_Impl__obj > __this = new PseudoEvent_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PseudoEvent_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			PseudoEvent_Impl__obj *__this = (PseudoEvent_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PseudoEvent_Impl__obj), false, "lime.system._ThreadPool.PseudoEvent_Impl_"));
			*(void **)__this = PseudoEvent_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PseudoEvent_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PseudoEvent_Impl_",3c,75,f7,37); }

		static ::cpp::VirtualArray get___listeners( ::lime::_hx_system::ThreadPool this1);
		static ::Dynamic get___listeners_dyn();

		static ::Array< bool > get___repeat( ::lime::_hx_system::ThreadPool this1);
		static ::Dynamic get___repeat_dyn();

		static void add( ::lime::_hx_system::ThreadPool this1, ::Dynamic callback);
		static ::Dynamic add_dyn();

		static void cancel( ::lime::_hx_system::ThreadPool this1);
		static ::Dynamic cancel_dyn();

		static void dispatch( ::lime::_hx_system::ThreadPool this1);
		static ::Dynamic dispatch_dyn();

		static bool has( ::lime::_hx_system::ThreadPool this1, ::Dynamic callback);
		static ::Dynamic has_dyn();

		static void remove( ::lime::_hx_system::ThreadPool this1, ::Dynamic callback);
		static ::Dynamic remove_dyn();

		static void removeAll( ::lime::_hx_system::ThreadPool this1);
		static ::Dynamic removeAll_dyn();

};

} // end namespace lime
} // end namespace system
} // end namespace _ThreadPool

#endif /* INCLUDED_lime_system__ThreadPool_PseudoEvent_Impl_ */ 
