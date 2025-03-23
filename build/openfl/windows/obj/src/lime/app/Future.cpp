#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
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
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_ofEvents_T_Void
#include <lime/app/_Event_ofEvents_T_Void.h>
#endif
#ifndef INCLUDED_lime_system_JobData
#include <lime/system/JobData.h>
#endif
#ifndef INCLUDED_lime_system_JobList
#include <lime/system/JobList.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif
#ifndef INCLUDED_lime_system_WorkOutput
#include <lime/system/WorkOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b16b96f10668b207_76_new,"lime.app.Future","new",0xc0e3b2bb,"lime.app.Future.new","lime/app/Future.hx",76,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_125_onComplete,"lime.app.Future","onComplete",0x3a7dc3fd,"lime.app.Future.onComplete","lime/app/Future.hx",125,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_154_onError,"lime.app.Future","onError",0xb2071604,"lime.app.Future.onError","lime/app/Future.hx",154,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_183_onProgress,"lime.app.Future","onProgress",0x40e0baf1,"lime.app.Future.onProgress","lime/app/Future.hx",183,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_205_ready,"lime.app.Future","ready",0xd4cc0f7e,"lime.app.Future.ready","lime/app/Future.hx",205,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_236_result,"lime.app.Future","result",0x69b43162,"lime.app.Future.result","lime/app/Future.hx",236,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_255_then,"lime.app.Future","then",0x0a523022,"lime.app.Future.then","lime/app/Future.hx",255,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_274_then,"lime.app.Future","then",0x0a523022,"lime.app.Future.then","lime/app/Future.hx",274,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_107_ofEvents,"lime.app.Future","ofEvents",0x0c824355,"lime.app.Future.ofEvents","lime/app/Future.hx",107,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_290_withError,"lime.app.Future","withError",0xc7ddc87d,"lime.app.Future.withError","lime/app/Future.hx",290,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_303_withValue,"lime.app.Future","withValue",0x866c7c26,"lime.app.Future.withValue","lime/app/Future.hx",303,0x058e0853)
namespace lime{
namespace app{

void Future_obj::__construct( ::Dynamic work,::hx::Null< bool >  __o_useThreads){
            		bool useThreads = __o_useThreads.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_76_new)
HXDLIN(  76)		if (::hx::IsNotNull( work )) {
HXLINE(  79)			if (useThreads) {
HXLINE(  81)				 ::lime::app::Promise promise =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE(  82)				promise->future = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  84)				::lime::app::FutureWork_obj::run(work,promise);
            			}
            			else {
HXLINE(  89)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  91)					this->value = work();
HXLINE(  92)					this->isComplete = true;
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE(  94)						{
HXLINE(  94)							null();
            						}
HXDLIN(  94)						 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(  95)						{
HXLINE(  96)							this->error = e;
HXLINE(  97)							this->isError = true;
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
            	}

Dynamic Future_obj::__CreateEmpty() { return new Future_obj; }

void *Future_obj::_hx_vtable = 0;

Dynamic Future_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Future_obj > _hx_result = new Future_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Future_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x795f2f0f;
}

 ::lime::app::Future Future_obj::onComplete( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_125_onComplete)
HXLINE( 126)		if (::hx::IsNotNull( listener )) {
HXLINE( 128)			if (this->isComplete) {
HXLINE( 130)				listener(this->value);
            			}
            			else {
HXLINE( 132)				if (!(this->isError)) {
HXLINE( 134)					if (::hx::IsNull( this->_hx___completeListeners )) {
HXLINE( 136)						this->_hx___completeListeners = ::Array_obj< ::Dynamic>::__new();
            					}
HXLINE( 139)					this->_hx___completeListeners->push(listener);
            				}
            			}
            		}
HXLINE( 143)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onComplete,return )

 ::lime::app::Future Future_obj::onError( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_154_onError)
HXLINE( 155)		if (::hx::IsNotNull( listener )) {
HXLINE( 157)			if (this->isError) {
HXLINE( 159)				listener(this->error);
            			}
            			else {
HXLINE( 161)				if (!(this->isComplete)) {
HXLINE( 163)					if (::hx::IsNull( this->_hx___errorListeners )) {
HXLINE( 165)						this->_hx___errorListeners = ::Array_obj< ::Dynamic>::__new();
            					}
HXLINE( 168)					this->_hx___errorListeners->push(listener);
            				}
            			}
            		}
HXLINE( 172)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onError,return )

 ::lime::app::Future Future_obj::onProgress( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_183_onProgress)
HXLINE( 184)		if (::hx::IsNotNull( listener )) {
HXLINE( 186)			if (::hx::IsNull( this->_hx___progressListeners )) {
HXLINE( 188)				this->_hx___progressListeners = ::Array_obj< ::Dynamic>::__new();
            			}
HXLINE( 191)			this->_hx___progressListeners->push(listener);
            		}
HXLINE( 194)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onProgress,return )

 ::lime::app::Future Future_obj::ready(::hx::Null< int >  __o_waitTime){
            		int waitTime = __o_waitTime.Default(-1);
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_205_ready)
HXDLIN( 205)		bool _hx_tmp;
HXDLIN( 205)		if (!(this->isComplete)) {
HXDLIN( 205)			_hx_tmp = this->isError;
            		}
            		else {
HXDLIN( 205)			_hx_tmp = true;
            		}
HXDLIN( 205)		if (_hx_tmp) {
HXLINE( 207)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
            		else {
HXLINE( 211)			int time = ::lime::_hx_system::System_obj::getTimer();
HXLINE( 212)			int end = (time + waitTime);
HXLINE( 214)			while(true){
HXLINE( 214)				bool _hx_tmp;
HXDLIN( 214)				bool _hx_tmp1;
HXDLIN( 214)				bool _hx_tmp2;
HXDLIN( 214)				if (!(this->isComplete)) {
HXLINE( 214)					_hx_tmp2 = !(this->isError);
            				}
            				else {
HXLINE( 214)					_hx_tmp2 = false;
            				}
HXDLIN( 214)				if (_hx_tmp2) {
HXLINE( 214)					_hx_tmp1 = (time <= end);
            				}
            				else {
HXLINE( 214)					_hx_tmp1 = false;
            				}
HXDLIN( 214)				if (_hx_tmp1) {
HXLINE( 214)					int _hx_tmp1;
HXDLIN( 214)					if (::hx::IsNotNull( ::lime::app::FutureWork_obj::threadPool )) {
HXLINE( 214)						_hx_tmp1 = ::lime::app::FutureWork_obj::threadPool->_hx___activeJobs->_hx___jobs->length;
            					}
            					else {
HXLINE( 214)						_hx_tmp1 = 0;
            					}
HXDLIN( 214)					_hx_tmp = (_hx_tmp1 > 0);
            				}
            				else {
HXLINE( 214)					_hx_tmp = false;
            				}
HXDLIN( 214)				if (!(_hx_tmp)) {
HXLINE( 214)					goto _hx_goto_4;
            				}
HXLINE( 217)				::Sys_obj::sleep(((Float)0.01));
HXLINE( 220)				time = ::lime::_hx_system::System_obj::getTimer();
            			}
            			_hx_goto_4:;
HXLINE( 223)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 205)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,ready,return )

 ::Dynamic Future_obj::result(::hx::Null< int >  __o_waitTime){
            		int waitTime = __o_waitTime.Default(-1);
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_236_result)
HXLINE( 237)		this->ready(waitTime);
HXLINE( 239)		if (this->isComplete) {
HXLINE( 241)			return this->value;
            		}
            		else {
HXLINE( 245)			return null();
            		}
HXLINE( 239)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,result,return )

 ::lime::app::Future Future_obj::then( ::Dynamic next){
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_255_then)
HXDLIN( 255)		if (this->isComplete) {
HXLINE( 257)			return ( ( ::lime::app::Future)(next(this->value)) );
            		}
            		else {
HXLINE( 259)			if (this->isError) {
HXLINE( 261)				 ::lime::app::Future future =  ::lime::app::Future_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 262)				future->isError = true;
HXLINE( 263)				future->error = this->error;
HXLINE( 264)				return future;
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,next, ::lime::app::Promise,promise) HXARGC(1)
            				void _hx_run( ::Dynamic val){
            					HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_274_then)
HXLINE( 275)					 ::lime::app::Future future = ( ( ::lime::app::Future)(next(val)) );
HXLINE( 276)					future->onError(promise->error_dyn());
HXLINE( 277)					future->onComplete(promise->complete_dyn());
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 268)				 ::lime::app::Promise promise =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 270)				this->onError(promise->error_dyn());
HXLINE( 271)				this->onProgress(promise->progress_dyn());
HXLINE( 273)				this->onComplete( ::Dynamic(new _hx_Closure_0(next,promise)));
HXLINE( 280)				return promise->future;
            			}
            		}
HXLINE( 255)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,then,return )

 ::lime::app::Future Future_obj::ofEvents( ::lime::app::_Event_ofEvents_T_Void onComplete, ::lime::app::_Event_Dynamic_Void onError, ::lime::app::_Event_Int_Int_Void onProgress){
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_107_ofEvents)
HXLINE( 108)		 ::lime::app::Promise promise =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 110)		onComplete->add(promise->complete_dyn(),true,null());
HXLINE( 111)		if (::hx::IsNotNull( onError )) {
HXLINE( 111)			onError->add(promise->error_dyn(),true,null());
            		}
HXLINE( 112)		if (::hx::IsNotNull( onProgress )) {
HXLINE( 112)			onProgress->add(promise->progress_dyn(),true,null());
            		}
HXLINE( 114)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Future_obj,ofEvents,return )

 ::lime::app::Future Future_obj::withError( ::Dynamic error){
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_290_withError)
HXLINE( 291)		 ::lime::app::Future future =  ::lime::app::Future_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 292)		future->isError = true;
HXLINE( 293)		future->error = error;
HXLINE( 294)		return future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_obj,withError,return )

 ::lime::app::Future Future_obj::withValue( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_303_withValue)
HXLINE( 304)		 ::lime::app::Future future =  ::lime::app::Future_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 305)		future->isComplete = true;
HXLINE( 306)		future->value = value;
HXLINE( 307)		return future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_obj,withValue,return )


::hx::ObjectPtr< Future_obj > Future_obj::__new( ::Dynamic work,::hx::Null< bool >  __o_useThreads) {
	::hx::ObjectPtr< Future_obj > __this = new Future_obj();
	__this->__construct(work,__o_useThreads);
	return __this;
}

::hx::ObjectPtr< Future_obj > Future_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic work,::hx::Null< bool >  __o_useThreads) {
	Future_obj *__this = (Future_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Future_obj), true, "lime.app.Future"));
	*(void **)__this = Future_obj::_hx_vtable;
	__this->__construct(work,__o_useThreads);
	return __this;
}

Future_obj::Future_obj()
{
}

void Future_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Future);
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(isComplete,"isComplete");
	HX_MARK_MEMBER_NAME(isError,"isError");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(_hx___completeListeners,"__completeListeners");
	HX_MARK_MEMBER_NAME(_hx___errorListeners,"__errorListeners");
	HX_MARK_MEMBER_NAME(_hx___progressListeners,"__progressListeners");
	HX_MARK_END_CLASS();
}

void Future_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(isComplete,"isComplete");
	HX_VISIT_MEMBER_NAME(isError,"isError");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(_hx___completeListeners,"__completeListeners");
	HX_VISIT_MEMBER_NAME(_hx___errorListeners,"__errorListeners");
	HX_VISIT_MEMBER_NAME(_hx___progressListeners,"__progressListeners");
}

::hx::Val Future_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return ::hx::Val( then_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error ); }
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		if (HX_FIELD_EQ(inName,"ready") ) { return ::hx::Val( ready_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return ::hx::Val( result_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { return ::hx::Val( isError ); }
		if (HX_FIELD_EQ(inName,"onError") ) { return ::hx::Val( onError_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return ::hx::Val( isComplete ); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return ::hx::Val( onProgress_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { return ::hx::Val( _hx___errorListeners ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { return ::hx::Val( _hx___completeListeners ); }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { return ::hx::Val( _hx___progressListeners ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Future_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ofEvents") ) { outValue = ofEvents_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"withError") ) { outValue = withError_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"withValue") ) { outValue = withValue_dyn(); return true; }
	}
	return false;
}

::hx::Val Future_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { isError=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { isComplete=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { _hx___errorListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { _hx___completeListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { _hx___progressListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Future_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("error",c8,cb,29,73));
	outFields->push(HX_("isComplete",c3,12,77,fa));
	outFields->push(HX_("isError",7e,6f,af,0f));
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("__completeListeners",66,0e,5a,85));
	outFields->push(HX_("__errorListeners",b7,4b,93,70));
	outFields->push(HX_("__progressListeners",f2,98,e2,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Future_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Future_obj,error),HX_("error",c8,cb,29,73)},
	{::hx::fsBool,(int)offsetof(Future_obj,isComplete),HX_("isComplete",c3,12,77,fa)},
	{::hx::fsBool,(int)offsetof(Future_obj,isError),HX_("isError",7e,6f,af,0f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Future_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Future_obj,_hx___completeListeners),HX_("__completeListeners",66,0e,5a,85)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Future_obj,_hx___errorListeners),HX_("__errorListeners",b7,4b,93,70)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Future_obj,_hx___progressListeners),HX_("__progressListeners",f2,98,e2,78)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Future_obj_sStaticStorageInfo = 0;
#endif

static ::String Future_obj_sMemberFields[] = {
	HX_("error",c8,cb,29,73),
	HX_("isComplete",c3,12,77,fa),
	HX_("isError",7e,6f,af,0f),
	HX_("value",71,7f,b8,31),
	HX_("__completeListeners",66,0e,5a,85),
	HX_("__errorListeners",b7,4b,93,70),
	HX_("__progressListeners",f2,98,e2,78),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("onError",29,6a,67,09),
	HX_("onProgress",ec,cb,e1,63),
	HX_("ready",63,a0,ba,e6),
	HX_("result",dd,68,84,08),
	HX_("then",dd,02,fc,4c),
	::String(null()) };

::hx::Class Future_obj::__mClass;

static ::String Future_obj_sStaticFields[] = {
	HX_("ofEvents",90,8f,6b,29),
	HX_("withError",e2,2f,17,f7),
	HX_("withValue",8b,e3,a5,b5),
	::String(null())
};

void Future_obj::__register()
{
	Future_obj _hx_dummy;
	Future_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.app.Future",49,39,57,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Future_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Future_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Future_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Future_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Future_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Future_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
