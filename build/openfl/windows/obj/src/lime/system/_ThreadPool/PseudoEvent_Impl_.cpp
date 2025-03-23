#include <hxcpp.h>

#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif
#ifndef INCLUDED_lime_system_WorkOutput
#include <lime/system/WorkOutput.h>
#endif
#ifndef INCLUDED_lime_system__ThreadPool_PseudoEvent_Impl_
#include <lime/system/_ThreadPool/PseudoEvent_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e4cf93b2067da49e_662_get___listeners,"lime.system._ThreadPool.PseudoEvent_Impl_","get___listeners",0x54403855,"lime.system._ThreadPool.PseudoEvent_Impl_.get___listeners","lime/system/ThreadPool.hx",662,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_e4cf93b2067da49e_669_get___repeat,"lime.system._ThreadPool.PseudoEvent_Impl_","get___repeat",0xba3842c5,"lime.system._ThreadPool.PseudoEvent_Impl_.get___repeat","lime/system/ThreadPool.hx",669,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_e4cf93b2067da49e_676_add,"lime.system._ThreadPool.PseudoEvent_Impl_","add",0x11bdf200,"lime.system._ThreadPool.PseudoEvent_Impl_.add","lime/system/ThreadPool.hx",676,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_e4cf93b2067da49e_673_add,"lime.system._ThreadPool.PseudoEvent_Impl_","add",0x11bdf200,"lime.system._ThreadPool.PseudoEvent_Impl_.add","lime/system/ThreadPool.hx",673,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_e4cf93b2067da49e_688_cancel,"lime.system._ThreadPool.PseudoEvent_Impl_","cancel",0xf16fe2fb,"lime.system._ThreadPool.PseudoEvent_Impl_.cancel","lime/system/ThreadPool.hx",688,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_e4cf93b2067da49e_690_dispatch,"lime.system._ThreadPool.PseudoEvent_Impl_","dispatch",0x16a8e67b,"lime.system._ThreadPool.PseudoEvent_Impl_.dispatch","lime/system/ThreadPool.hx",690,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_e4cf93b2067da49e_694_has,"lime.system._ThreadPool.PseudoEvent_Impl_","has",0x11c33f39,"lime.system._ThreadPool.PseudoEvent_Impl_.has","lime/system/ThreadPool.hx",694,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_e4cf93b2067da49e_699_remove,"lime.system._ThreadPool.PseudoEvent_Impl_","remove",0x3dc491c5,"lime.system._ThreadPool.PseudoEvent_Impl_.remove","lime/system/ThreadPool.hx",699,0x8993fbb2)
HX_LOCAL_STACK_FRAME(_hx_pos_e4cf93b2067da49e_704_removeAll,"lime.system._ThreadPool.PseudoEvent_Impl_","removeAll",0x0f14c85c,"lime.system._ThreadPool.PseudoEvent_Impl_.removeAll","lime/system/ThreadPool.hx",704,0x8993fbb2)
namespace lime{
namespace _hx_system{
namespace _ThreadPool{

void PseudoEvent_Impl__obj::__construct() { }

Dynamic PseudoEvent_Impl__obj::__CreateEmpty() { return new PseudoEvent_Impl__obj; }

void *PseudoEvent_Impl__obj::_hx_vtable = 0;

Dynamic PseudoEvent_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PseudoEvent_Impl__obj > _hx_result = new PseudoEvent_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PseudoEvent_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x73f3bb33;
}

::cpp::VirtualArray PseudoEvent_Impl__obj::get___listeners( ::lime::_hx_system::ThreadPool this1){
            	HX_STACKFRAME(&_hx_pos_e4cf93b2067da49e_662_get___listeners)
HXDLIN( 662)		return ::cpp::VirtualArray_obj::__new(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PseudoEvent_Impl__obj,get___listeners,return )

::Array< bool > PseudoEvent_Impl__obj::get___repeat( ::lime::_hx_system::ThreadPool this1){
            	HX_STACKFRAME(&_hx_pos_e4cf93b2067da49e_669_get___repeat)
HXDLIN( 669)		return ::Array_obj< bool >::__new(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PseudoEvent_Impl__obj,get___repeat,return )

void PseudoEvent_Impl__obj::add( ::lime::_hx_system::ThreadPool this1, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(2)
            		void _hx_run( ::Dynamic state, ::lime::_hx_system::WorkOutput output){
            			HX_STACKFRAME(&_hx_pos_e4cf93b2067da49e_676_add)
HXLINE( 676)			callback(state);
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_STACKFRAME(&_hx_pos_e4cf93b2067da49e_673_add)
HXLINE( 674)		 ::Dynamic callCallback =  ::Dynamic(new _hx_Closure_0(callback));
HXLINE( 684)		this1->_hx___doWork = callCallback;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PseudoEvent_Impl__obj,add,(void))

void PseudoEvent_Impl__obj::cancel( ::lime::_hx_system::ThreadPool this1){
            	HX_STACKFRAME(&_hx_pos_e4cf93b2067da49e_688_cancel)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PseudoEvent_Impl__obj,cancel,(void))

void PseudoEvent_Impl__obj::dispatch( ::lime::_hx_system::ThreadPool this1){
            	HX_STACKFRAME(&_hx_pos_e4cf93b2067da49e_690_dispatch)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PseudoEvent_Impl__obj,dispatch,(void))

bool PseudoEvent_Impl__obj::has( ::lime::_hx_system::ThreadPool this1, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_e4cf93b2067da49e_694_has)
HXDLIN( 694)		return ::hx::IsNotNull( this1->_hx___doWork );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PseudoEvent_Impl__obj,has,return )

void PseudoEvent_Impl__obj::remove( ::lime::_hx_system::ThreadPool this1, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_e4cf93b2067da49e_699_remove)
HXDLIN( 699)		this1->_hx___doWork = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PseudoEvent_Impl__obj,remove,(void))

void PseudoEvent_Impl__obj::removeAll( ::lime::_hx_system::ThreadPool this1){
            	HX_STACKFRAME(&_hx_pos_e4cf93b2067da49e_704_removeAll)
HXDLIN( 704)		this1->_hx___doWork = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PseudoEvent_Impl__obj,removeAll,(void))


PseudoEvent_Impl__obj::PseudoEvent_Impl__obj()
{
}

bool PseudoEvent_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"has") ) { outValue = has_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { outValue = cancel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"remove") ) { outValue = remove_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { outValue = dispatch_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { outValue = removeAll_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get___repeat") ) { outValue = get___repeat_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get___listeners") ) { outValue = get___listeners_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PseudoEvent_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PseudoEvent_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class PseudoEvent_Impl__obj::__mClass;

static ::String PseudoEvent_Impl__obj_sStaticFields[] = {
	HX_("get___listeners",f6,65,9c,e2),
	HX_("get___repeat",84,b6,c5,63),
	HX_("add",21,f2,49,00),
	HX_("cancel",7a,ed,33,b8),
	HX_("dispatch",ba,ce,63,1e),
	HX_("has",5a,3f,4f,00),
	HX_("remove",44,9c,88,04),
	HX_("removeAll",3d,17,e5,ca),
	::String(null())
};

void PseudoEvent_Impl__obj::__register()
{
	PseudoEvent_Impl__obj _hx_dummy;
	PseudoEvent_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system._ThreadPool.PseudoEvent_Impl_",cd,44,f5,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PseudoEvent_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PseudoEvent_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PseudoEvent_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PseudoEvent_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PseudoEvent_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
} // end namespace _ThreadPool
