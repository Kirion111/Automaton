#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURL
#include <lime/net/curl/CURL.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_29_new,"lime.net.curl.CURL","new",0x4e46b036,"lime.net.curl.CURL.new","lime/net/curl/CURL.hx",29,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_44_cleanup,"lime.net.curl.CURL","cleanup",0x6d508efa,"lime.net.curl.CURL.cleanup","lime/net/curl/CURL.hx",44,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_51_clone,"lime.net.curl.CURL","clone",0x20ae14b3,"lime.net.curl.CURL.clone","lime/net/curl/CURL.hx",51,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_58_escape,"lime.net.curl.CURL","escape",0x44306d6b,"lime.net.curl.CURL.escape","lime/net/curl/CURL.hx",58,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_79_getInfo,"lime.net.curl.CURL","getInfo",0xda4c6afa,"lime.net.curl.CURL.getInfo","lime/net/curl/CURL.hx",79,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_104_pause,"lime.net.curl.CURL","pause",0x95a2d84c,"lime.net.curl.CURL.pause","lime/net/curl/CURL.hx",104,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_113_perform,"lime.net.curl.CURL","perform",0x3cec6b77,"lime.net.curl.CURL.perform","lime/net/curl/CURL.hx",113,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_131_reset,"lime.net.curl.CURL","reset",0xbf134b25,"lime.net.curl.CURL.reset","lime/net/curl/CURL.hx",131,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_145_setOption,"lime.net.curl.CURL","setOption",0xcff7ad0d,"lime.net.curl.CURL.setOption","lime/net/curl/CURL.hx",145,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_168_setOption,"lime.net.curl.CURL","setOption",0xcff7ad0d,"lime.net.curl.CURL.setOption","lime/net/curl/CURL.hx",168,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_155_setOption,"lime.net.curl.CURL","setOption",0xcff7ad0d,"lime.net.curl.CURL.setOption","lime/net/curl/CURL.hx",155,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_190_setOption,"lime.net.curl.CURL","setOption",0xcff7ad0d,"lime.net.curl.CURL.setOption","lime/net/curl/CURL.hx",190,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_162_setOption,"lime.net.curl.CURL","setOption",0xcff7ad0d,"lime.net.curl.CURL.setOption","lime/net/curl/CURL.hx",162,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_222_unescape,"lime.net.curl.CURL","unescape",0xe7c56b04,"lime.net.curl.CURL.unescape","lime/net/curl/CURL.hx",222,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_70_getDate,"lime.net.curl.CURL","getDate",0xd6f488ba,"lime.net.curl.CURL.getDate","lime/net/curl/CURL.hx",70,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_88_globalCleanup,"lime.net.curl.CURL","globalCleanup",0x3b488c57,"lime.net.curl.CURL.globalCleanup","lime/net/curl/CURL.hx",88,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_95_globalInit,"lime.net.curl.CURL","globalInit",0x3240ecfd,"lime.net.curl.CURL.globalInit","lime/net/curl/CURL.hx",95,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_212_strerror,"lime.net.curl.CURL","strerror",0x9bdff9e1,"lime.net.curl.CURL.strerror","lime/net/curl/CURL.hx",212,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_232_version,"lime.net.curl.CURL","version",0x3f0069ee,"lime.net.curl.CURL.version","lime/net/curl/CURL.hx",232,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_244_versionInfo,"lime.net.curl.CURL","versionInfo",0x0bdb5d7c,"lime.net.curl.CURL.versionInfo","lime/net/curl/CURL.hx",244,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_16_boot,"lime.net.curl.CURL","boot",0x27ac7f9c,"lime.net.curl.CURL.boot","lime/net/curl/CURL.hx",16,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_17_boot,"lime.net.curl.CURL","boot",0x27ac7f9c,"lime.net.curl.CURL.boot","lime/net/curl/CURL.hx",17,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_18_boot,"lime.net.curl.CURL","boot",0x27ac7f9c,"lime.net.curl.CURL.boot","lime/net/curl/CURL.hx",18,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_19_boot,"lime.net.curl.CURL","boot",0x27ac7f9c,"lime.net.curl.CURL.boot","lime/net/curl/CURL.hx",19,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_20_boot,"lime.net.curl.CURL","boot",0x27ac7f9c,"lime.net.curl.CURL.boot","lime/net/curl/CURL.hx",20,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_21_boot,"lime.net.curl.CURL","boot",0x27ac7f9c,"lime.net.curl.CURL.boot","lime/net/curl/CURL.hx",21,0x82d3899b)
namespace lime{
namespace net{
namespace curl{

void CURL_obj::__construct( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_29_new)
HXDLIN(  29)		if (::hx::IsNotNull( handle )) {
HXLINE(  31)			this->handle = handle;
            		}
            		else {
HXLINE(  36)			this->handle = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_init()) );
            		}
            	}

Dynamic CURL_obj::__CreateEmpty() { return new CURL_obj; }

void *CURL_obj::_hx_vtable = 0;

Dynamic CURL_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CURL_obj > _hx_result = new CURL_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CURL_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x055fdc1c;
}

void CURL_obj::cleanup(){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_44_cleanup)
HXDLIN(  44)		::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_cleanup(::hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CURL_obj,cleanup,(void))

 ::lime::net::curl::CURL CURL_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_51_clone)
HXDLIN(  51)		return  ::lime::net::curl::CURL_obj::__alloc( HX_CTX ,( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_duphandle(::hx::DynamicPtr(this->handle))) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CURL_obj,clone,return )

::String CURL_obj::escape(::String url,int length){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_58_escape)
HXLINE(  60)		 ::hx::Object * result = ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_escape(::hx::DynamicPtr(this->handle),url,length);
HXLINE(  61)		return ( (::String)(( ( ::Dynamic)(result) )) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(CURL_obj,escape,return )

 ::Dynamic CURL_obj::getInfo(int info){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_79_getInfo)
HXDLIN(  79)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_getinfo(::hx::DynamicPtr(this->handle),info)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(CURL_obj,getInfo,return )

int CURL_obj::pause(int bitMask){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_104_pause)
HXDLIN( 104)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_pause(::hx::DynamicPtr(this->handle),bitMask);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CURL_obj,pause,return )

int CURL_obj::perform(){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_113_perform)
HXDLIN( 113)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_perform(::hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CURL_obj,perform,return )

void CURL_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_131_reset)
HXDLIN( 131)		::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_reset(::hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CURL_obj,reset,(void))

int CURL_obj::setOption(int option, ::Dynamic parameter){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_145_setOption)
HXDLIN( 145)		 ::lime::net::curl::CURL _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 147)		 ::haxe::io::Bytes bytes = null();
HXLINE( 149)		switch((int)(option)){
            			case (int)10009: {
HXLINE( 184)				bytes = ( ( ::haxe::io::Bytes)(parameter) );
            			}
            			break;
            			case (int)10023: {
            			}
            			break;
            			case (int)20011: {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::lime::net::curl::CURL,_gthis, ::Dynamic,callback) HXARGC(2)
            				int _hx_run( ::haxe::io::Bytes bytes,int length){
            					HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_168_setOption)
HXLINE( 169)					int cacheLength = bytes->length;
HXLINE( 170)					bytes->length = length;
HXLINE( 171)					int read = ( (int)(callback(_gthis,bytes)) );
HXLINE( 172)					bytes->length = cacheLength;
HXLINE( 173)					return read;
            				}
            				HX_END_LOCAL_FUNC2(return)

HXLINE( 166)				 ::Dynamic callback = parameter;
HXLINE( 167)				parameter =  ::Dynamic(new _hx_Closure_0(_gthis,callback));
HXLINE( 175)				bytes = ::haxe::io::Bytes_obj::alloc(0);
            			}
            			break;
            			case (int)20056: {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::lime::net::curl::CURL,_gthis, ::Dynamic,callback) HXARGC(4)
            				void _hx_run(Float dltotal,Float dlnow,Float ultotal,Float ulnow){
            					HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_155_setOption)
HXLINE( 155)					callback(_gthis,dltotal,dlnow,ultotal,ulnow);
            				}
            				HX_END_LOCAL_FUNC4((void))

HXLINE( 152)				 ::Dynamic callback = parameter;
HXLINE( 153)				parameter =  ::Dynamic(new _hx_Closure_1(_gthis,callback));
            			}
            			break;
            			case (int)20079: {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::lime::net::curl::CURL,_gthis, ::Dynamic,callback) HXARGC(1)
            				void _hx_run(::String header){
            					HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_190_setOption)
HXLINE( 190)					callback(_gthis,header);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 187)				 ::Dynamic callback = parameter;
HXLINE( 188)				parameter =  ::Dynamic(new _hx_Closure_2(_gthis,callback));
            			}
            			break;
            			case (int)20219: {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3, ::lime::net::curl::CURL,_gthis, ::Dynamic,callback) HXARGC(4)
            				int _hx_run(int dltotal,int dlnow,int ultotal,int ulnow){
            					HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_162_setOption)
HXLINE( 162)					return ( (int)(callback(_gthis,dltotal,dlnow,ultotal,ulnow)) );
            				}
            				HX_END_LOCAL_FUNC4(return)

HXLINE( 159)				 ::Dynamic callback = parameter;
HXLINE( 160)				parameter =  ::Dynamic(new _hx_Closure_3(_gthis,callback));
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 205)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_setopt(::hx::DynamicPtr(this->handle),option,::hx::DynamicPtr(parameter),::hx::DynamicPtr(bytes));
            	}


HX_DEFINE_DYNAMIC_FUNC2(CURL_obj,setOption,return )

::String CURL_obj::unescape(::String url,int inLength,int outLength){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_222_unescape)
HXLINE( 224)		 ::hx::Object * result = ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_unescape(::hx::DynamicPtr(this->handle),url,inLength,outLength);
HXLINE( 225)		return ( (::String)(( ( ::Dynamic)(result) )) );
            	}


HX_DEFINE_DYNAMIC_FUNC3(CURL_obj,unescape,return )

int CURL_obj::GLOBAL_SSL;

int CURL_obj::GLOBAL_WIN32;

int CURL_obj::GLOBAL_ALL;

int CURL_obj::GLOBAL_NOTHING;

int CURL_obj::GLOBAL_DEFAULT;

int CURL_obj::GLOBAL_ACK_EINTR;

int CURL_obj::getDate(::String date,int now){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_70_getDate)
HXDLIN(  70)		return ( (int)(::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_getdate(date,( (Float)(now) ))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURL_obj,getDate,return )

void CURL_obj::globalCleanup(){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_88_globalCleanup)
HXDLIN(  88)		::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_global_cleanup();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_obj,globalCleanup,(void))

int CURL_obj::globalInit(int flags){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_95_globalInit)
HXDLIN(  95)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_global_init(flags);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_obj,globalInit,return )

::String CURL_obj::strerror(int code){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_212_strerror)
HXLINE( 214)		 ::hx::Object * result = ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_strerror(code);
HXLINE( 215)		return ( (::String)(( ( ::Dynamic)(result) )) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_obj,strerror,return )

::String CURL_obj::version(){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_232_version)
HXLINE( 234)		 ::hx::Object * result = ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_version();
HXLINE( 235)		return ( (::String)(( ( ::Dynamic)(result) )) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_obj,version,return )

 ::Dynamic CURL_obj::versionInfo(int type){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_244_versionInfo)
HXDLIN( 244)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_version_info(type)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_obj,versionInfo,return )


::hx::ObjectPtr< CURL_obj > CURL_obj::__new( ::Dynamic handle) {
	::hx::ObjectPtr< CURL_obj > __this = new CURL_obj();
	__this->__construct(handle);
	return __this;
}

::hx::ObjectPtr< CURL_obj > CURL_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic handle) {
	CURL_obj *__this = (CURL_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CURL_obj), true, "lime.net.curl.CURL"));
	*(void **)__this = CURL_obj::_hx_vtable;
	__this->__construct(handle);
	return __this;
}

CURL_obj::CURL_obj()
{
}

void CURL_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CURL);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(headerBytes,"headerBytes");
	HX_MARK_MEMBER_NAME(writeBytes,"writeBytes");
	HX_MARK_END_CLASS();
}

void CURL_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(headerBytes,"headerBytes");
	HX_VISIT_MEMBER_NAME(writeBytes,"writeBytes");
}

::hx::Val CURL_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle ); }
		if (HX_FIELD_EQ(inName,"escape") ) { return ::hx::Val( escape_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { return ::hx::Val( cleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInfo") ) { return ::hx::Val( getInfo_dyn() ); }
		if (HX_FIELD_EQ(inName,"perform") ) { return ::hx::Val( perform_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"unescape") ) { return ::hx::Val( unescape_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setOption") ) { return ::hx::Val( setOption_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return ::hx::Val( writeBytes ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"headerBytes") ) { return ::hx::Val( headerBytes ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CURL_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getDate") ) { outValue = getDate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"version") ) { outValue = version_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strerror") ) { outValue = strerror_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"globalInit") ) { outValue = globalInit_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"versionInfo") ) { outValue = versionInfo_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"globalCleanup") ) { outValue = globalCleanup_dyn(); return true; }
	}
	return false;
}

::hx::Val CURL_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { writeBytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"headerBytes") ) { headerBytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CURL_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("handle",a8,83,fd,b7));
	outFields->push(HX_("headerBytes",9e,af,56,ca));
	outFields->push(HX_("writeBytes",0c,03,5a,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CURL_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CURL_obj,handle),HX_("handle",a8,83,fd,b7)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(CURL_obj,headerBytes),HX_("headerBytes",9e,af,56,ca)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(CURL_obj,writeBytes),HX_("writeBytes",0c,03,5a,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CURL_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &CURL_obj::GLOBAL_SSL,HX_("GLOBAL_SSL",90,53,1d,52)},
	{::hx::fsInt,(void *) &CURL_obj::GLOBAL_WIN32,HX_("GLOBAL_WIN32",7f,38,c5,59)},
	{::hx::fsInt,(void *) &CURL_obj::GLOBAL_ALL,HX_("GLOBAL_ALL",e5,a4,0f,52)},
	{::hx::fsInt,(void *) &CURL_obj::GLOBAL_NOTHING,HX_("GLOBAL_NOTHING",d1,41,21,b2)},
	{::hx::fsInt,(void *) &CURL_obj::GLOBAL_DEFAULT,HX_("GLOBAL_DEFAULT",85,7e,85,fe)},
	{::hx::fsInt,(void *) &CURL_obj::GLOBAL_ACK_EINTR,HX_("GLOBAL_ACK_EINTR",76,bf,c3,74)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CURL_obj_sMemberFields[] = {
	HX_("handle",a8,83,fd,b7),
	HX_("headerBytes",9e,af,56,ca),
	HX_("writeBytes",0c,03,5a,52),
	HX_("cleanup",24,0c,42,ab),
	HX_("clone",5d,13,63,48),
	HX_("escape",81,43,da,da),
	HX_("getInfo",24,e8,3d,18),
	HX_("pause",f6,d6,57,bd),
	HX_("perform",a1,e8,dd,7a),
	HX_("reset",cf,49,c8,e6),
	HX_("setOption",b7,48,22,8b),
	HX_("unescape",9a,72,21,dd),
	::String(null()) };

static void CURL_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CURL_obj::GLOBAL_SSL,"GLOBAL_SSL");
	HX_MARK_MEMBER_NAME(CURL_obj::GLOBAL_WIN32,"GLOBAL_WIN32");
	HX_MARK_MEMBER_NAME(CURL_obj::GLOBAL_ALL,"GLOBAL_ALL");
	HX_MARK_MEMBER_NAME(CURL_obj::GLOBAL_NOTHING,"GLOBAL_NOTHING");
	HX_MARK_MEMBER_NAME(CURL_obj::GLOBAL_DEFAULT,"GLOBAL_DEFAULT");
	HX_MARK_MEMBER_NAME(CURL_obj::GLOBAL_ACK_EINTR,"GLOBAL_ACK_EINTR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CURL_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CURL_obj::GLOBAL_SSL,"GLOBAL_SSL");
	HX_VISIT_MEMBER_NAME(CURL_obj::GLOBAL_WIN32,"GLOBAL_WIN32");
	HX_VISIT_MEMBER_NAME(CURL_obj::GLOBAL_ALL,"GLOBAL_ALL");
	HX_VISIT_MEMBER_NAME(CURL_obj::GLOBAL_NOTHING,"GLOBAL_NOTHING");
	HX_VISIT_MEMBER_NAME(CURL_obj::GLOBAL_DEFAULT,"GLOBAL_DEFAULT");
	HX_VISIT_MEMBER_NAME(CURL_obj::GLOBAL_ACK_EINTR,"GLOBAL_ACK_EINTR");
};

#endif

::hx::Class CURL_obj::__mClass;

static ::String CURL_obj_sStaticFields[] = {
	HX_("GLOBAL_SSL",90,53,1d,52),
	HX_("GLOBAL_WIN32",7f,38,c5,59),
	HX_("GLOBAL_ALL",e5,a4,0f,52),
	HX_("GLOBAL_NOTHING",d1,41,21,b2),
	HX_("GLOBAL_DEFAULT",85,7e,85,fe),
	HX_("GLOBAL_ACK_EINTR",76,bf,c3,74),
	HX_("getDate",e4,05,e6,14),
	HX_("globalCleanup",01,45,7b,d1),
	HX_("globalInit",13,86,5e,3c),
	HX_("strerror",77,01,3c,91),
	HX_("version",18,e7,f1,7c),
	HX_("versionInfo",a6,b7,a3,db),
	::String(null())
};

void CURL_obj::__register()
{
	CURL_obj _hx_dummy;
	CURL_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.net.curl.CURL",44,1d,f9,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CURL_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CURL_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CURL_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CURL_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CURL_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CURL_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CURL_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CURL_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CURL_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_16_boot)
HXDLIN(  16)		GLOBAL_SSL = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_17_boot)
HXDLIN(  17)		GLOBAL_WIN32 = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_18_boot)
HXDLIN(  18)		GLOBAL_ALL = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_19_boot)
HXDLIN(  19)		GLOBAL_NOTHING = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_20_boot)
HXDLIN(  20)		GLOBAL_DEFAULT = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_21_boot)
HXDLIN(  21)		GLOBAL_ACK_EINTR = 4;
            	}
}

} // end namespace lime
} // end namespace net
} // end namespace curl
