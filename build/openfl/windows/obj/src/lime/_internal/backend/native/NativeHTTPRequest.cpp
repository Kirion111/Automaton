#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeHTTPRequest
#include <lime/_internal/backend/native/NativeHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_String
#include <lime/app/Promise_String.h>
#endif
#ifndef INCLUDED_lime_app_Promise_haxe_io_Bytes
#include <lime/app/Promise_haxe_io_Bytes.h>
#endif
#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_net_HTTPRequestHeader
#include <lime/net/HTTPRequestHeader.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequestErrorResponse
#include <lime/net/_HTTPRequestErrorResponse.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURL
#include <lime/net/curl/CURL.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLMulti
#include <lime/net/curl/CURLMulti.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLMultiMessage
#include <lime/net/curl/CURLMultiMessage.h>
#endif
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif
#ifndef INCLUDED_lime_system_WorkOutput
#include <lime/system/WorkOutput.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_thread_Deque
#include <sys/thread/Deque.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11449fe5de606ab4_33_new,"lime._internal.backend.native.NativeHTTPRequest","new",0x75342a10,"lime._internal.backend.native.NativeHTTPRequest.new","lime/_internal/backend/native/NativeHTTPRequest.hx",33,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_66_cancel,"lime._internal.backend.native.NativeHTTPRequest","cancel",0xd7a6c1ca,"lime._internal.backend.native.NativeHTTPRequest.cancel","lime/_internal/backend/native/NativeHTTPRequest.hx",66,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_88_init,"lime._internal.backend.native.NativeHTTPRequest","init",0x15295b60,"lime._internal.backend.native.NativeHTTPRequest.init","lime/_internal/backend/native/NativeHTTPRequest.hx",88,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_92_initRequest,"lime._internal.backend.native.NativeHTTPRequest","initRequest",0x4548d7cf,"lime._internal.backend.native.NativeHTTPRequest.initRequest","lime/_internal/backend/native/NativeHTTPRequest.hx",92,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_270_loadData,"lime._internal.backend.native.NativeHTTPRequest","loadData",0xb40fafc0,"lime._internal.backend.native.NativeHTTPRequest.loadData","lime/_internal/backend/native/NativeHTTPRequest.hx",270,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_351_loadText,"lime._internal.backend.native.NativeHTTPRequest","loadText",0xbea62643,"lime._internal.backend.native.NativeHTTPRequest.loadText","lime/_internal/backend/native/NativeHTTPRequest.hx",351,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_342_loadText,"lime._internal.backend.native.NativeHTTPRequest","loadText",0xbea62643,"lime._internal.backend.native.NativeHTTPRequest.loadText","lime/_internal/backend/native/NativeHTTPRequest.hx",342,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_364_buildBuffer,"lime._internal.backend.native.NativeHTTPRequest","buildBuffer",0x695f2c7e,"lime._internal.backend.native.NativeHTTPRequest.buildBuffer","lime/_internal/backend/native/NativeHTTPRequest.hx",364,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_371_curl_onHeader,"lime._internal.backend.native.NativeHTTPRequest","curl_onHeader",0xe5ba44af,"lime._internal.backend.native.NativeHTTPRequest.curl_onHeader","lime/_internal/backend/native/NativeHTTPRequest.hx",371,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_381_curl_onProgress,"lime._internal.backend.native.NativeHTTPRequest","curl_onProgress",0xbe43bf4f,"lime._internal.backend.native.NativeHTTPRequest.curl_onProgress","lime/_internal/backend/native/NativeHTTPRequest.hx",381,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_397_curl_onWrite,"lime._internal.backend.native.NativeHTTPRequest","curl_onWrite",0x97fe6bfd,"lime._internal.backend.native.NativeHTTPRequest.curl_onWrite","lime/_internal/backend/native/NativeHTTPRequest.hx",397,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_404_localThreadPool_doWork,"lime._internal.backend.native.NativeHTTPRequest","localThreadPool_doWork",0x0add4afa,"lime._internal.backend.native.NativeHTTPRequest.localThreadPool_doWork","lime/_internal/backend/native/NativeHTTPRequest.hx",404,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_449_localThreadPool_onComplete,"lime._internal.backend.native.NativeHTTPRequest","localThreadPool_onComplete",0xf7b04ff6,"lime._internal.backend.native.NativeHTTPRequest.localThreadPool_onComplete","lime/_internal/backend/native/NativeHTTPRequest.hx",449,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_467_localThreadPool_onError,"lime._internal.backend.native.NativeHTTPRequest","localThreadPool_onError",0x7e9a446b,"lime._internal.backend.native.NativeHTTPRequest.localThreadPool_onError","lime/_internal/backend/native/NativeHTTPRequest.hx",467,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_490_localThreadPool_onProgress,"lime._internal.backend.native.NativeHTTPRequest","localThreadPool_onProgress",0xfe1346ea,"lime._internal.backend.native.NativeHTTPRequest.localThreadPool_onProgress","lime/_internal/backend/native/NativeHTTPRequest.hx",490,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_498_multiThreadPool_doWork,"lime._internal.backend.native.NativeHTTPRequest","multiThreadPool_doWork",0x3b867a2c,"lime._internal.backend.native.NativeHTTPRequest.multiThreadPool_doWork","lime/_internal/backend/native/NativeHTTPRequest.hx",498,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_537_multiThreadPool_onComplete,"lime._internal.backend.native.NativeHTTPRequest","multiThreadPool_onComplete",0xd0260028,"lime._internal.backend.native.NativeHTTPRequest.multiThreadPool_onComplete","lime/_internal/backend/native/NativeHTTPRequest.hx",537,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_560_multiThreadPool_onProgress,"lime._internal.backend.native.NativeHTTPRequest","multiThreadPool_onProgress",0xd688f71c,"lime._internal.backend.native.NativeHTTPRequest.multiThreadPool_onProgress","lime/_internal/backend/native/NativeHTTPRequest.hx",560,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_612_multiProgressTimer_onRun,"lime._internal.backend.native.NativeHTTPRequest","multiProgressTimer_onRun",0x7d995edc,"lime._internal.backend.native.NativeHTTPRequest.multiProgressTimer_onRun","lime/_internal/backend/native/NativeHTTPRequest.hx",612,0xfe6a4b7e)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void NativeHTTPRequest_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_11449fe5de606ab4_33_new)
HXLINE(  47)		this->buffer =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE(  61)		this->curl = null();
HXLINE(  62)		this->timeout = null();
            	}

Dynamic NativeHTTPRequest_obj::__CreateEmpty() { return new NativeHTTPRequest_obj; }

void *NativeHTTPRequest_obj::_hx_vtable = 0;

Dynamic NativeHTTPRequest_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeHTTPRequest_obj > _hx_result = new NativeHTTPRequest_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NativeHTTPRequest_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x203f6a6c;
}

void NativeHTTPRequest_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_66_cancel)
HXLINE(  67)		this->canceled = true;
HXLINE(  69)		bool _hx_tmp = ::hx::IsNotNull( this->curl );
HXLINE(  79)		if (::hx::IsNotNull( this->timeout )) {
HXLINE(  81)			this->timeout->stop();
HXLINE(  82)			this->timeout = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeHTTPRequest_obj,cancel,(void))

void NativeHTTPRequest_obj::init(::Dynamic parent){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_88_init)
HXDLIN(  88)		this->parent = parent;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,init,(void))

void NativeHTTPRequest_obj::initRequest(::String uri,bool binary){
            	HX_GC_STACKFRAME(&_hx_pos_11449fe5de606ab4_92_initRequest)
HXLINE(  93)		this->bytes = ::haxe::io::Bytes_obj::alloc(0);
HXLINE(  95)		this->bytesLoaded = 0;
HXLINE(  96)		this->bytesTotal = 0;
HXLINE(  97)		this->writeBytesLoaded = 0;
HXLINE(  98)		this->writeBytesTotal = 0;
HXLINE( 100)		if (::hx::IsNull( this->curl )) {
HXLINE( 102)			this->curl =  ::lime::net::curl::CURL_obj::__alloc( HX_CTX ,null());
            		}
            		else {
HXLINE( 106)			this->curl->reset();
            		}
HXLINE( 109)		 ::haxe::io::Bytes data = ( ( ::haxe::io::Bytes)(this->parent->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) );
HXLINE( 110)		::String query = HX_("",00,00,00,00);
HXLINE( 112)		if (::hx::IsNull( data )) {
HXLINE( 114)			{
HXLINE( 114)				 ::Dynamic key = ( ( ::haxe::ds::StringMap)( ::Dynamic(this->parent->__Field(HX_("formData",8e,d5,80,56),::hx::paccDynamic))) )->keys();
HXDLIN( 114)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 114)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 116)					if ((query.length > 0)) {
HXLINE( 116)						query = (query + HX_("&",26,00,00,00));
            					}
HXLINE( 117)					::String query1 = (::StringTools_obj::urlEncode(key1) + HX_("=",3d,00,00,00));
HXDLIN( 117)					query = (query + (query1 + ::StringTools_obj::urlEncode(::Std_obj::string(( ( ::haxe::ds::StringMap)( ::Dynamic(this->parent->__Field(HX_("formData",8e,d5,80,56),::hx::paccDynamic))) )->get(key1)))));
            				}
            			}
HXLINE( 120)			if ((query != HX_("",00,00,00,00))) {
HXLINE( 122)				if (::hx::IsEq( this->parent->__Field(HX_("method",e1,f6,5a,09),::hx::paccDynamic),HX_("GET",76,1c,36,00) )) {
HXLINE( 124)					if ((uri.indexOf(HX_("?",3f,00,00,00),null()) > -1)) {
HXLINE( 126)						uri = (uri + (HX_("&",26,00,00,00) + query));
            					}
            					else {
HXLINE( 130)						uri = (uri + (HX_("?",3f,00,00,00) + query));
            					}
HXLINE( 133)					query = HX_("",00,00,00,00);
            				}
            				else {
HXLINE( 137)					data = ::haxe::io::Bytes_obj::ofString(query,null());
            				}
            			}
HXLINE( 141)			bool _hx_tmp;
HXDLIN( 141)			if (::hx::IsNotNull( data )) {
HXLINE( 141)				_hx_tmp = (data->length == 0);
            			}
            			else {
HXLINE( 141)				_hx_tmp = false;
            			}
HXDLIN( 141)			if (_hx_tmp) {
HXLINE( 141)				data = null();
            			}
            		}
HXLINE( 144)		this->curl->setOption(10002,uri);
HXLINE( 146)		::String _hx_switch_0 = ( (::String)(this->parent->__Field(HX_("method",e1,f6,5a,09),::hx::paccDynamic)) );
            		if (  (_hx_switch_0==HX_("GET",76,1c,36,00)) ){
HXLINE( 152)			this->curl->setOption(80,true);
HXDLIN( 152)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("HEAD",20,f1,cb,2f)) ){
HXLINE( 149)			this->curl->setOption(44,true);
HXDLIN( 149)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("POST",60,4c,1d,35)) ){
HXLINE( 155)			this->curl->setOption(47,true);
HXLINE( 157)			if (::hx::IsNotNull( data )) {
HXLINE( 159)				this->curl->setOption(10009,data);
HXLINE( 160)				this->curl->setOption(14,data->length);
HXLINE( 161)				this->curl->setOption(60,data->length);
            			}
            			else {
HXLINE( 165)				this->curl->setOption(60,0);
            			}
HXLINE( 154)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("PUT",af,fe,3c,00)) ){
HXLINE( 169)			this->curl->setOption(46,true);
HXLINE( 171)			if (::hx::IsNotNull( data )) {
HXLINE( 173)				this->curl->setOption(10009,data);
HXLINE( 174)				this->curl->setOption(14,data->length);
            			}
HXLINE( 168)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE( 178)			 ::lime::net::curl::CURL _hx_tmp = this->curl;
HXDLIN( 178)			_hx_tmp->setOption(10036,::Std_obj::string( ::Dynamic(this->parent->__Field(HX_("method",e1,f6,5a,09),::hx::paccDynamic))));
HXLINE( 180)			if (::hx::IsNotNull( data )) {
HXLINE( 182)				this->curl->setOption(10009,data);
HXLINE( 183)				this->curl->setOption(14,data->length);
            			}
            		}
            		_hx_goto_4:;
HXLINE( 187)		this->curl->setOption(52, ::Dynamic(this->parent->__Field(HX_("followRedirects",26,5a,40,75),::hx::paccDynamic)));
HXLINE( 188)		this->curl->setOption(58,true);
HXLINE( 190)		::Array< ::String > headers = ::Array_obj< ::String >::__new(0);
HXLINE( 191)		headers->push(HX_("Expect: ",df,c4,e1,19));
HXLINE( 193)		::String contentType = null();
HXLINE( 195)		{
HXLINE( 195)			int _g = 0;
HXDLIN( 195)			::cpp::VirtualArray _g1 = ::hx::TCast< ::cpp::VirtualArray >::cast(( (::Array< ::Dynamic>)(this->parent->__Field(HX_("headers",46,52,08,63),::hx::paccDynamic)) ));
HXDLIN( 195)			while((_g < _g1->get_length())){
HXLINE( 195)				 ::Dynamic header = _g1->__get(_g);
HXDLIN( 195)				_g = (_g + 1);
HXLINE( 197)				if (::hx::IsEq( header->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),HX_("Content-Type",ce,69,5d,3c) )) {
HXLINE( 199)					contentType = ( (::String)(header->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) );
            				}
            				else {
HXLINE( 203)					::String _hx_tmp = ((HX_("",00,00,00,00) + ::Std_obj::string( ::Dynamic(header->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)))) + HX_(": ",a6,32,00,00));
HXDLIN( 203)					headers->push((_hx_tmp + ::Std_obj::string( ::Dynamic(header->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)))));
            				}
            			}
            		}
HXLINE( 207)		if (::hx::IsNotNull( this->parent->__Field(HX_("contentType",93,3c,7b,2a),::hx::paccDynamic) )) {
HXLINE( 209)			contentType = ( (::String)(this->parent->__Field(HX_("contentType",93,3c,7b,2a),::hx::paccDynamic)) );
            		}
HXLINE( 212)		if (::hx::IsNull( contentType )) {
HXLINE( 214)			if (::hx::IsNotNull( this->parent->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic) )) {
HXLINE( 216)				contentType = HX_("application/octet-stream",5d,f8,82,30);
            			}
            			else {
HXLINE( 218)				if ((query != HX_("",00,00,00,00))) {
HXLINE( 220)					contentType = HX_("application/x-www-form-urlencoded",9e,61,91,fa);
            				}
            			}
            		}
HXLINE( 224)		if (::hx::IsNotNull( contentType )) {
HXLINE( 226)			headers->push((HX_("Content-Type: ",f4,2b,e6,1d) + contentType));
            		}
HXLINE( 229)		this->curl->setOption(10023,headers);
HXLINE( 231)		this->curl->setOption(20056,this->curl_onProgress_dyn());
HXLINE( 232)		this->curl->setOption(20011,this->curl_onWrite_dyn());
HXLINE( 234)		if (( (bool)(this->parent->__Field(HX_("enableResponseHeaders",82,32,47,05),::hx::paccDynamic)) )) {
HXLINE( 236)			this->parent->__SetField(HX_("responseHeaders",c5,0d,ca,43),::Array_obj< ::Dynamic>::__new(0),::hx::paccDynamic);
HXLINE( 237)			this->curl->setOption(20079,this->curl_onHeader_dyn());
            		}
HXLINE( 240)		if (( (bool)(this->parent->__Field(HX_("manageCookies",6a,1f,8f,bc),::hx::paccDynamic)) )) {
HXLINE( 244)			this->curl->setOption(10031,HX_("",00,00,00,00));
HXLINE( 245)			if (::hx::IsNotNull( ::lime::_internal::backend::native::NativeHTTPRequest_obj::cookieList )) {
HXLINE( 247)				int _g = 0;
HXDLIN( 247)				::Array< ::String > _g1 = ::lime::_internal::backend::native::NativeHTTPRequest_obj::cookieList;
HXDLIN( 247)				while((_g < _g1->length)){
HXLINE( 247)					::String cookie = _g1->__get(_g);
HXDLIN( 247)					_g = (_g + 1);
HXLINE( 250)					this->curl->setOption(10135,cookie);
            				}
            			}
            		}
HXLINE( 255)		this->curl->setOption(64,false);
HXLINE( 256)		this->curl->setOption(81,0);
HXLINE( 257)		 ::Dynamic _hx_tmp;
HXDLIN( 257)		if (::hx::IsNull( this->parent->__Field(HX_("userAgent",7a,f0,12,c8),::hx::paccDynamic) )) {
HXLINE( 257)			_hx_tmp = HX_("libcurl-agent/1.0",4d,41,cc,d3);
            		}
            		else {
HXLINE( 257)			_hx_tmp =  ::Dynamic(this->parent->__Field(HX_("userAgent",7a,f0,12,c8),::hx::paccDynamic));
            		}
HXDLIN( 257)		this->curl->setOption(10018,_hx_tmp);
HXLINE( 260)		this->curl->setOption(99,true);
HXLINE( 262)		this->curl->setOption(53,!(binary));
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,initRequest,(void))

 ::lime::app::Future NativeHTTPRequest_obj::loadData(::String uri,::hx::Null< bool >  __o_binary){
            		bool binary = __o_binary.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_11449fe5de606ab4_270_loadData)
HXLINE( 271)		if (::hx::IsNull( uri )) {
HXLINE( 273)			return ::lime::app::Future_obj::withError(HX_("The URI must not be null",e3,4c,b6,a7));
            		}
HXLINE( 276)		 ::lime::app::Promise_haxe_io_Bytes promise =  ::lime::app::Promise_haxe_io_Bytes_obj::__alloc( HX_CTX );
HXLINE( 277)		this->promise = promise;
HXLINE( 279)		this->canceled = false;
HXLINE( 281)		bool _hx_tmp;
HXDLIN( 281)		if ((uri.indexOf(HX_("http://",52,75,cd,5a),null()) == -1)) {
HXLINE( 281)			_hx_tmp = (uri.indexOf(HX_("https://",cf,b4,ae,3e),null()) == -1);
            		}
            		else {
HXLINE( 281)			_hx_tmp = false;
            		}
HXDLIN( 281)		if (_hx_tmp) {
HXLINE( 283)			if (::hx::IsNull( ::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool )) {
HXLINE( 285)				::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool =  ::lime::_hx_system::ThreadPool_obj::__alloc( HX_CTX ,0,1,null());
HXLINE( 286)				::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool->onProgress->add(::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool_onProgress_dyn(),null(),null());
HXLINE( 287)				::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool->onComplete->add(::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool_onComplete_dyn(),null(),null());
HXLINE( 288)				::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool->onError->add(::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool_onError_dyn(),null(),null());
            			}
HXLINE( 291)			::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool->run(::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool_doWork_dyn(), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("uri",6c,2b,59,00),uri)
            				->setFixed(1,HX_("instance",95,1f,e1,59),::hx::ObjectPtr<OBJ_>(this))));
            		}
            		else {
HXLINE( 295)			if (::hx::IsNull( ::lime::_internal::backend::native::NativeHTTPRequest_obj::multi )) {
HXLINE( 297)				::lime::net::curl::CURL_obj::globalInit(3);
HXLINE( 299)				::lime::_internal::backend::native::NativeHTTPRequest_obj::multi =  ::lime::net::curl::CURLMulti_obj::__alloc( HX_CTX ,null());
HXLINE( 300)				::lime::_internal::backend::native::NativeHTTPRequest_obj::activeInstances = ::Array_obj< ::Dynamic>::__new();
HXLINE( 301)				::lime::_internal::backend::native::NativeHTTPRequest_obj::multiInstances =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            			}
HXLINE( 304)			this->initRequest(uri,binary);
HXLINE( 306)			if (::hx::IsNotNull( this->curl )) {
HXLINE( 308)				::lime::_internal::backend::native::NativeHTTPRequest_obj::activeInstances->push(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 309)				::lime::_internal::backend::native::NativeHTTPRequest_obj::multiInstances->set(this->curl,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 312)				if (::hx::IsNull( ::lime::_internal::backend::native::NativeHTTPRequest_obj::multiAddHandle )) {
HXLINE( 312)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiAddHandle =  ::sys::thread::Deque_obj::__alloc( HX_CTX );
            				}
HXLINE( 313)				::lime::_internal::backend::native::NativeHTTPRequest_obj::multiAddHandle->add(this->curl);
HXLINE( 316)				if (::hx::IsNull( ::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool )) {
HXLINE( 318)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool =  ::lime::_hx_system::ThreadPool_obj::__alloc( HX_CTX ,0,1,null());
HXLINE( 319)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool->onProgress->add(::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool_onProgress_dyn(),null(),null());
HXLINE( 320)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool->onComplete->add(::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool_onComplete_dyn(),null(),null());
            				}
HXLINE( 323)				if (!(::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPoolRunning)) {
HXLINE( 325)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPoolRunning = true;
HXLINE( 326)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool->run(::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool_doWork_dyn(),::lime::_internal::backend::native::NativeHTTPRequest_obj::multi);
            				}
HXLINE( 329)				if (::hx::IsNull( ::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer )) {
HXLINE( 331)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(8) ));
HXLINE( 332)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer->run = ::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer_onRun_dyn();
HXLINE( 333)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer_onRun();
            				}
            			}
            		}
HXLINE( 338)		return promise->future;
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,loadData,return )

 ::lime::app::Future NativeHTTPRequest_obj::loadText(::String uri){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::lime::app::Promise_String,promise) HXARGC(1)
            		void _hx_run( ::haxe::io::Bytes bytes){
            			HX_GC_STACKFRAME(&_hx_pos_11449fe5de606ab4_351_loadText)
HXLINE( 351)			if (::hx::IsNull( bytes )) {
HXLINE( 353)				promise->complete(null());
            			}
            			else {
HXLINE( 357)				 ::lime::app::Promise_String promise1 = promise;
HXDLIN( 357)				promise1->complete(bytes->getString(0,bytes->length,null()));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_11449fe5de606ab4_342_loadText)
HXLINE( 343)		 ::lime::app::Promise_String promise =  ::lime::app::Promise_String_obj::__alloc( HX_CTX );
HXLINE( 344)		 ::lime::app::Future future = this->loadData(uri,false);
HXLINE( 346)		future->onProgress(promise->progress_dyn());
HXLINE( 347)		future->onError(promise->error_dyn());
HXLINE( 349)		future->onComplete( ::Dynamic(new _hx_Closure_0(promise)));
HXLINE( 361)		return promise->future;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,loadText,return )

 ::haxe::io::Bytes NativeHTTPRequest_obj::buildBuffer(){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_364_buildBuffer)
HXLINE( 365)		this->bytes = this->buffer->getBytes();
HXLINE( 366)		return this->bytes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeHTTPRequest_obj,buildBuffer,return )

void NativeHTTPRequest_obj::curl_onHeader( ::lime::net::curl::CURL curl,::String header){
            	HX_GC_STACKFRAME(&_hx_pos_11449fe5de606ab4_371_curl_onHeader)
HXLINE( 372)		::Array< ::String > parts = header.split(HX_(": ",a6,32,00,00));
HXLINE( 374)		if ((parts->length == 2)) {
HXLINE( 376)			::Array< ::Dynamic> _hx_tmp = ( (::Array< ::Dynamic>)(this->parent->__Field(HX_("responseHeaders",c5,0d,ca,43),::hx::paccDynamic)) );
HXDLIN( 376)			::String _hx_tmp1 = ::StringTools_obj::trim(parts->__get(0));
HXDLIN( 376)			_hx_tmp->push( ::lime::net::HTTPRequestHeader_obj::__alloc( HX_CTX ,_hx_tmp1,::StringTools_obj::trim(parts->__get(1))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,curl_onHeader,(void))

int NativeHTTPRequest_obj::curl_onProgress( ::lime::net::curl::CURL curl,Float dltotal,Float dlnow,Float uptotal,Float upnow){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_381_curl_onProgress)
HXLINE( 382)		bool _hx_tmp;
HXDLIN( 382)		bool _hx_tmp1;
HXDLIN( 382)		bool _hx_tmp2;
HXDLIN( 382)		if (!((upnow > this->writeBytesLoaded))) {
HXLINE( 382)			_hx_tmp2 = (dlnow > this->writeBytesLoaded);
            		}
            		else {
HXLINE( 382)			_hx_tmp2 = true;
            		}
HXDLIN( 382)		if (!(_hx_tmp2)) {
HXLINE( 382)			_hx_tmp1 = (uptotal > this->writeBytesTotal);
            		}
            		else {
HXLINE( 382)			_hx_tmp1 = true;
            		}
HXDLIN( 382)		if (!(_hx_tmp1)) {
HXLINE( 382)			_hx_tmp = (dltotal > this->writeBytesTotal);
            		}
            		else {
HXLINE( 382)			_hx_tmp = true;
            		}
HXDLIN( 382)		if (_hx_tmp) {
HXLINE( 384)			if ((upnow > this->writeBytesLoaded)) {
HXLINE( 384)				this->writeBytesLoaded = ::Std_obj::_hx_int(upnow);
            			}
HXLINE( 385)			if ((dlnow > this->writeBytesLoaded)) {
HXLINE( 385)				this->writeBytesLoaded = ::Std_obj::_hx_int(dlnow);
            			}
HXLINE( 386)			if ((uptotal > this->writeBytesTotal)) {
HXLINE( 386)				this->writeBytesTotal = ::Std_obj::_hx_int(uptotal);
            			}
HXLINE( 387)			if ((dltotal > this->writeBytesTotal)) {
HXLINE( 387)				this->writeBytesTotal = ::Std_obj::_hx_int(dltotal);
            			}
            		}
HXLINE( 393)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC5(NativeHTTPRequest_obj,curl_onProgress,return )

int NativeHTTPRequest_obj::curl_onWrite( ::lime::net::curl::CURL curl, ::haxe::io::Bytes output){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_397_curl_onWrite)
HXLINE( 398)		{
HXLINE( 398)			 ::haxe::io::BytesBuffer _this = this->buffer;
HXDLIN( 398)			int len = output->length;
HXDLIN( 398)			bool _hx_tmp;
HXDLIN( 398)			if ((len >= 0)) {
HXLINE( 398)				_hx_tmp = (len > output->length);
            			}
            			else {
HXLINE( 398)				_hx_tmp = true;
            			}
HXDLIN( 398)			if (_hx_tmp) {
HXLINE( 398)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            			}
HXDLIN( 398)			::Array< unsigned char > b1 = _this->b;
HXDLIN( 398)			::Array< unsigned char > b2 = output->b;
HXDLIN( 398)			{
HXLINE( 398)				int _g = 0;
HXDLIN( 398)				int _g1 = len;
HXDLIN( 398)				while((_g < _g1)){
HXLINE( 398)					_g = (_g + 1);
HXDLIN( 398)					int i = (_g - 1);
HXDLIN( 398)					_this->b->push(b2->__get(i));
            				}
            			}
            		}
HXLINE( 400)		return output->length;
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,curl_onWrite,return )

::Array< ::Dynamic> NativeHTTPRequest_obj::activeInstances;

 ::lime::_hx_system::ThreadPool NativeHTTPRequest_obj::localThreadPool;

 ::lime::net::curl::CURLMulti NativeHTTPRequest_obj::multi;

 ::haxe::ds::ObjectMap NativeHTTPRequest_obj::multiInstances;

 ::haxe::Timer NativeHTTPRequest_obj::multiProgressTimer;

 ::lime::_hx_system::ThreadPool NativeHTTPRequest_obj::multiThreadPool;

bool NativeHTTPRequest_obj::multiThreadPoolRunning;

 ::sys::thread::Deque NativeHTTPRequest_obj::multiAddHandle;

::Array< ::String > NativeHTTPRequest_obj::cookieList;

void NativeHTTPRequest_obj::localThreadPool_doWork( ::Dynamic state, ::lime::_hx_system::WorkOutput output){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_404_localThreadPool_doWork)
HXLINE( 405)		 ::lime::_internal::backend::native::NativeHTTPRequest instance = ( ( ::lime::_internal::backend::native::NativeHTTPRequest)(state->__Field(HX_("instance",95,1f,e1,59),::hx::paccDynamic)) );
HXLINE( 406)		::String path = ( (::String)(state->__Field(HX_("uri",6c,2b,59,00),::hx::paccDynamic)) );
HXLINE( 408)		int index = path.indexOf(HX_("?",3f,00,00,00),null());
HXLINE( 410)		if ((index > -1)) {
HXLINE( 412)			path = path.substring(0,index);
            		}
HXLINE( 422)		bool _hx_tmp;
HXDLIN( 422)		if (::hx::IsNotNull( path )) {
HXLINE( 422)			_hx_tmp = !(::sys::FileSystem_obj::exists(path));
            		}
            		else {
HXLINE( 422)			_hx_tmp = true;
            		}
HXDLIN( 422)		if (_hx_tmp) {
HXLINE( 424)			output->sendError( ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("promise",9b,cd,e9,f7),instance->promise)
            				->setFixed(1,HX_("instance",95,1f,e1,59),instance)
            				->setFixed(2,HX_("error",c8,cb,29,73),(HX_("Cannot load file: ",5f,26,cd,00) + path))),null());
            		}
            		else {
HXLINE( 428)			instance->bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(path);
HXLINE( 430)			if (::hx::IsNotNull( instance->bytes )) {
HXLINE( 432)				output->sendProgress( ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("bytesLoaded",d0,66,ca,99),instance->bytes->length)
            					->setFixed(1,HX_("promise",9b,cd,e9,f7),instance->promise)
            					->setFixed(2,HX_("bytesTotal",59,57,da,45),instance->bytes->length)
            					->setFixed(3,HX_("instance",95,1f,e1,59),instance)),null());
HXLINE( 439)				output->sendComplete( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("promise",9b,cd,e9,f7),instance->promise)
            					->setFixed(1,HX_("result",dd,68,84,08),instance->bytes)
            					->setFixed(2,HX_("instance",95,1f,e1,59),instance)),null());
            			}
            			else {
HXLINE( 443)				output->sendError( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("promise",9b,cd,e9,f7),instance->promise)
            					->setFixed(1,HX_("instance",95,1f,e1,59),instance)
            					->setFixed(2,HX_("error",c8,cb,29,73),(HX_("Cannot load file: ",5f,26,cd,00) + path))),null());
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,localThreadPool_doWork,(void))

void NativeHTTPRequest_obj::localThreadPool_onComplete( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_449_localThreadPool_onComplete)
HXLINE( 450)		 ::lime::app::Promise_haxe_io_Bytes promise = ( ( ::lime::app::Promise_haxe_io_Bytes)(state->__Field(HX_("promise",9b,cd,e9,f7),::hx::paccDynamic)) );
HXLINE( 451)		if (promise->future->isError) {
HXLINE( 451)			return;
            		}
HXLINE( 452)		promise->complete(( ( ::haxe::io::Bytes)(state->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic)) ));
HXLINE( 454)		 ::lime::_internal::backend::native::NativeHTTPRequest instance = ( ( ::lime::_internal::backend::native::NativeHTTPRequest)(state->__Field(HX_("instance",95,1f,e1,59),::hx::paccDynamic)) );
HXLINE( 456)		if (::hx::IsNotNull( instance->timeout )) {
HXLINE( 458)			instance->timeout->stop();
HXLINE( 459)			instance->timeout = null();
            		}
HXLINE( 462)		instance->bytes = null();
HXLINE( 463)		instance->promise = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,localThreadPool_onComplete,(void))

void NativeHTTPRequest_obj::localThreadPool_onError( ::Dynamic state){
            	HX_GC_STACKFRAME(&_hx_pos_11449fe5de606ab4_467_localThreadPool_onError)
HXLINE( 468)		 ::lime::app::Promise_haxe_io_Bytes promise = ( ( ::lime::app::Promise_haxe_io_Bytes)(state->__Field(HX_("promise",9b,cd,e9,f7),::hx::paccDynamic)) );
HXLINE( 469)		promise->error( ::lime::net::_HTTPRequestErrorResponse_obj::__alloc( HX_CTX , ::Dynamic(state->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic)),null()));
HXLINE( 471)		 ::lime::_internal::backend::native::NativeHTTPRequest instance = ( ( ::lime::_internal::backend::native::NativeHTTPRequest)(state->__Field(HX_("instance",95,1f,e1,59),::hx::paccDynamic)) );
HXLINE( 473)		if (::hx::IsNotNull( instance->timeout )) {
HXLINE( 475)			instance->timeout->stop();
HXLINE( 476)			instance->timeout = null();
            		}
HXLINE( 479)		instance->bytes = null();
HXLINE( 480)		instance->promise = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,localThreadPool_onError,(void))

void NativeHTTPRequest_obj::localThreadPool_onProgress( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_490_localThreadPool_onProgress)
HXLINE( 491)		 ::lime::app::Promise_haxe_io_Bytes promise = ( ( ::lime::app::Promise_haxe_io_Bytes)(state->__Field(HX_("promise",9b,cd,e9,f7),::hx::paccDynamic)) );
HXLINE( 492)		bool _hx_tmp;
HXDLIN( 492)		if (!(promise->future->isComplete)) {
HXLINE( 492)			_hx_tmp = promise->future->isError;
            		}
            		else {
HXLINE( 492)			_hx_tmp = true;
            		}
HXDLIN( 492)		if (_hx_tmp) {
HXLINE( 492)			return;
            		}
HXLINE( 493)		promise->progress(( (int)(state->__Field(HX_("bytesLoaded",d0,66,ca,99),::hx::paccDynamic)) ),( (int)(state->__Field(HX_("bytesTotal",59,57,da,45),::hx::paccDynamic)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,localThreadPool_onProgress,(void))

void NativeHTTPRequest_obj::multiThreadPool_doWork( ::lime::net::curl::CURLMulti multi, ::lime::_hx_system::WorkOutput output){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_498_multiThreadPool_doWork)
HXDLIN( 498)		while(true){
HXLINE( 501)			 ::lime::net::curl::CURL curl = ::lime::_internal::backend::native::NativeHTTPRequest_obj::multiAddHandle->pop(false).StaticCast<  ::lime::net::curl::CURL >();
HXLINE( 502)			if (::hx::IsNotNull( curl )) {
HXLINE( 502)				multi->addHandle(curl);
            			}
HXLINE( 505)			int code = multi->wait(1000);
HXLINE( 507)			if ((code == 0)) {
HXLINE( 509)				multi->perform();
HXLINE( 510)				 ::lime::net::curl::CURLMultiMessage message = multi->infoRead();
HXLINE( 512)				bool _hx_tmp;
HXDLIN( 512)				if (::hx::IsNull( message )) {
HXLINE( 512)					_hx_tmp = (multi->get_runningHandles() == 0);
            				}
            				else {
HXLINE( 512)					_hx_tmp = false;
            				}
HXDLIN( 512)				if (_hx_tmp) {
HXLINE( 514)					output->sendComplete(null(),null());
HXLINE( 515)					goto _hx_goto_20;
            				}
HXLINE( 518)				while(::hx::IsNotNull( message )){
HXLINE( 520)					 ::lime::net::curl::CURL curl = message->curl;
HXLINE( 521)					 ::Dynamic status = curl->getInfo(2097154);
HXLINE( 524)					::lime::_internal::backend::native::NativeHTTPRequest_obj::cookieList = ( (::Array< ::String >)(curl->getInfo(4194332)) );
HXLINE( 526)					multi->removeHandle(curl);
HXLINE( 527)					curl->cleanup();
HXLINE( 529)					output->sendProgress( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("status",32,e7,fb,05),status)
            						->setFixed(1,HX_("result",dd,68,84,08),message->result)
            						->setFixed(2,HX_("curl",ec,4a,c9,41),curl)),null());
HXLINE( 530)					message = multi->infoRead();
            				}
            			}
            		}
            		_hx_goto_20:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,multiThreadPool_doWork,(void))

void NativeHTTPRequest_obj::multiThreadPool_onComplete( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_537_multiThreadPool_onComplete)
HXLINE( 539)		 ::lime::net::curl::CURL curl = ::lime::_internal::backend::native::NativeHTTPRequest_obj::multiAddHandle->pop(false).StaticCast<  ::lime::net::curl::CURL >();
HXLINE( 541)		if (::hx::IsNotNull( curl )) {
HXLINE( 543)			::lime::_internal::backend::native::NativeHTTPRequest_obj::multiAddHandle->push(curl);
HXLINE( 544)			::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool->run(::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool_doWork_dyn(),::lime::_internal::backend::native::NativeHTTPRequest_obj::multi);
            		}
            		else {
HXLINE( 548)			if (::hx::IsNotNull( ::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer )) {
HXLINE( 550)				::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer->stop();
HXLINE( 551)				::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer = null();
            			}
HXLINE( 554)			::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPoolRunning = false;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,multiThreadPool_onComplete,(void))

void NativeHTTPRequest_obj::multiThreadPool_onProgress( ::Dynamic state){
            	HX_GC_STACKFRAME(&_hx_pos_11449fe5de606ab4_560_multiThreadPool_onProgress)
HXLINE( 561)		if (::lime::_internal::backend::native::NativeHTTPRequest_obj::multiInstances->exists( ::Dynamic(state->__Field(HX_("curl",ec,4a,c9,41),::hx::paccDynamic)))) {
HXLINE( 563)			 ::lime::_internal::backend::native::NativeHTTPRequest instance = ( ( ::lime::_internal::backend::native::NativeHTTPRequest)(::lime::_internal::backend::native::NativeHTTPRequest_obj::multiInstances->get( ::Dynamic(state->__Field(HX_("curl",ec,4a,c9,41),::hx::paccDynamic)))) );
HXLINE( 564)			::lime::_internal::backend::native::NativeHTTPRequest_obj::activeInstances->remove(instance);
HXLINE( 565)			::lime::_internal::backend::native::NativeHTTPRequest_obj::multiInstances->remove( ::Dynamic(state->__Field(HX_("curl",ec,4a,c9,41),::hx::paccDynamic)));
HXLINE( 567)			instance->parent->__SetField(HX_("responseStatus",93,60,a4,78),state->__Field(HX_("status",32,e7,fb,05),::hx::paccDynamic),::hx::paccDynamic);
HXLINE( 569)			if (::hx::IsEq( state->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic),0 )) {
HXLINE( 571)				bool _hx_tmp;
HXDLIN( 571)				bool _hx_tmp1;
HXDLIN( 571)				if (::hx::IsGreaterEq( state->__Field(HX_("status",32,e7,fb,05),::hx::paccDynamic),200 )) {
HXLINE( 571)					_hx_tmp1 = ::hx::IsLess( state->__Field(HX_("status",32,e7,fb,05),::hx::paccDynamic),400 );
            				}
            				else {
HXLINE( 571)					_hx_tmp1 = false;
            				}
HXDLIN( 571)				if (!(_hx_tmp1)) {
HXLINE( 571)					_hx_tmp = ::hx::IsEq( state->__Field(HX_("status",32,e7,fb,05),::hx::paccDynamic),0 );
            				}
            				else {
HXLINE( 571)					_hx_tmp = true;
            				}
HXDLIN( 571)				if (_hx_tmp) {
HXLINE( 573)					if (!(instance->promise->future->isError)) {
HXLINE( 575)						 ::lime::app::Promise_haxe_io_Bytes instance1 = instance->promise;
HXDLIN( 575)						instance1->complete(instance->buildBuffer());
            					}
            				}
            				else {
HXLINE( 578)					if (::hx::IsNotNull( instance->bytes )) {
HXLINE( 580)						::String error = instance->bytes->getString(0,instance->bytes->length,null());
HXLINE( 581)						 ::haxe::io::Bytes responseData = instance->buildBuffer();
HXLINE( 582)						 ::lime::app::Promise_haxe_io_Bytes instance1 = instance->promise;
HXDLIN( 582)						instance1->error( ::lime::net::_HTTPRequestErrorResponse_obj::__alloc( HX_CTX ,error,responseData));
            					}
            					else {
HXLINE( 586)						::String error = ( (::String)((HX_("Status ",8e,8c,bf,03) + state->__Field(HX_("status",32,e7,fb,05),::hx::paccDynamic))) );
HXLINE( 587)						 ::haxe::io::Bytes responseData = instance->buildBuffer();
HXLINE( 588)						 ::lime::app::Promise_haxe_io_Bytes instance1 = instance->promise;
HXDLIN( 588)						instance1->error( ::lime::net::_HTTPRequestErrorResponse_obj::__alloc( HX_CTX ,error,responseData));
            					}
            				}
            			}
            			else {
HXLINE( 593)				::String error = ::lime::net::curl::CURL_obj::strerror(( (int)(state->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic)) ));
HXLINE( 594)				 ::lime::app::Promise_haxe_io_Bytes instance1 = instance->promise;
HXDLIN( 594)				instance1->error( ::lime::net::_HTTPRequestErrorResponse_obj::__alloc( HX_CTX ,error,null()));
            			}
HXLINE( 597)			if (::hx::IsNotNull( instance->timeout )) {
HXLINE( 599)				instance->timeout->stop();
HXLINE( 600)				instance->timeout = null();
            			}
HXLINE( 603)			instance->bytes = null();
HXLINE( 604)			instance->promise = null();
            		}
HXLINE( 607)		state->__SetField(HX_("curl",ec,4a,c9,41),null(),::hx::paccDynamic);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,multiThreadPool_onProgress,(void))

void NativeHTTPRequest_obj::multiProgressTimer_onRun(){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_612_multiProgressTimer_onRun)
HXDLIN( 612)		int _g = 0;
HXDLIN( 612)		::Array< ::Dynamic> _g1 = ::lime::_internal::backend::native::NativeHTTPRequest_obj::activeInstances;
HXDLIN( 612)		while((_g < _g1->length)){
HXDLIN( 612)			 ::lime::_internal::backend::native::NativeHTTPRequest instance = _g1->__get(_g).StaticCast<  ::lime::_internal::backend::native::NativeHTTPRequest >();
HXDLIN( 612)			_g = (_g + 1);
HXLINE( 614)			bool _hx_tmp;
HXDLIN( 614)			if ((instance->bytesLoaded == instance->writeBytesLoaded)) {
HXLINE( 614)				_hx_tmp = (instance->bytesTotal != instance->writeBytesTotal);
            			}
            			else {
HXLINE( 614)				_hx_tmp = true;
            			}
HXDLIN( 614)			if (_hx_tmp) {
HXLINE( 616)				instance->bytesLoaded = instance->writeBytesLoaded;
HXLINE( 617)				instance->bytesTotal = instance->writeBytesTotal;
HXLINE( 618)				instance->promise->progress(instance->bytesLoaded,instance->bytesTotal);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeHTTPRequest_obj,multiProgressTimer_onRun,(void))


::hx::ObjectPtr< NativeHTTPRequest_obj > NativeHTTPRequest_obj::__new() {
	::hx::ObjectPtr< NativeHTTPRequest_obj > __this = new NativeHTTPRequest_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NativeHTTPRequest_obj > NativeHTTPRequest_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NativeHTTPRequest_obj *__this = (NativeHTTPRequest_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeHTTPRequest_obj), true, "lime._internal.backend.native.NativeHTTPRequest"));
	*(void **)__this = NativeHTTPRequest_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NativeHTTPRequest_obj::NativeHTTPRequest_obj()
{
}

void NativeHTTPRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeHTTPRequest);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(canceled,"canceled");
	HX_MARK_MEMBER_NAME(curl,"curl");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(promise,"promise");
	HX_MARK_MEMBER_NAME(writeBytesLoaded,"writeBytesLoaded");
	HX_MARK_MEMBER_NAME(writeBytesTotal,"writeBytesTotal");
	HX_MARK_MEMBER_NAME(timeout,"timeout");
	HX_MARK_END_CLASS();
}

void NativeHTTPRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(canceled,"canceled");
	HX_VISIT_MEMBER_NAME(curl,"curl");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(promise,"promise");
	HX_VISIT_MEMBER_NAME(writeBytesLoaded,"writeBytesLoaded");
	HX_VISIT_MEMBER_NAME(writeBytesTotal,"writeBytesTotal");
	HX_VISIT_MEMBER_NAME(timeout,"timeout");
}

::hx::Val NativeHTTPRequest_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"curl") ) { return ::hx::Val( curl ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return ::hx::Val( bytes ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"promise") ) { return ::hx::Val( promise ); }
		if (HX_FIELD_EQ(inName,"timeout") ) { return ::hx::Val( timeout ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { return ::hx::Val( canceled ); }
		if (HX_FIELD_EQ(inName,"loadData") ) { return ::hx::Val( loadData_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return ::hx::Val( loadText_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return ::hx::Val( bytesTotal ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return ::hx::Val( bytesLoaded ); }
		if (HX_FIELD_EQ(inName,"initRequest") ) { return ::hx::Val( initRequest_dyn() ); }
		if (HX_FIELD_EQ(inName,"buildBuffer") ) { return ::hx::Val( buildBuffer_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curl_onWrite") ) { return ::hx::Val( curl_onWrite_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curl_onHeader") ) { return ::hx::Val( curl_onHeader_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"writeBytesTotal") ) { return ::hx::Val( writeBytesTotal ); }
		if (HX_FIELD_EQ(inName,"curl_onProgress") ) { return ::hx::Val( curl_onProgress_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"writeBytesLoaded") ) { return ::hx::Val( writeBytesLoaded ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeHTTPRequest_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"multi") ) { outValue = ( multi ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cookieList") ) { outValue = ( cookieList ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"multiInstances") ) { outValue = ( multiInstances ); return true; }
		if (HX_FIELD_EQ(inName,"multiAddHandle") ) { outValue = ( multiAddHandle ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"activeInstances") ) { outValue = ( activeInstances ); return true; }
		if (HX_FIELD_EQ(inName,"localThreadPool") ) { outValue = ( localThreadPool ); return true; }
		if (HX_FIELD_EQ(inName,"multiThreadPool") ) { outValue = ( multiThreadPool ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"multiProgressTimer") ) { outValue = ( multiProgressTimer ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"multiThreadPoolRunning") ) { outValue = ( multiThreadPoolRunning ); return true; }
		if (HX_FIELD_EQ(inName,"localThreadPool_doWork") ) { outValue = localThreadPool_doWork_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"multiThreadPool_doWork") ) { outValue = multiThreadPool_doWork_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"localThreadPool_onError") ) { outValue = localThreadPool_onError_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"multiProgressTimer_onRun") ) { outValue = multiProgressTimer_onRun_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"localThreadPool_onComplete") ) { outValue = localThreadPool_onComplete_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"localThreadPool_onProgress") ) { outValue = localThreadPool_onProgress_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"multiThreadPool_onComplete") ) { outValue = multiThreadPool_onComplete_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"multiThreadPool_onProgress") ) { outValue = multiThreadPool_onProgress_dyn(); return true; }
	}
	return false;
}

::hx::Val NativeHTTPRequest_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"curl") ) { curl=inValue.Cast<  ::lime::net::curl::CURL >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::haxe::io::BytesBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"promise") ) { promise=inValue.Cast<  ::lime::app::Promise_haxe_io_Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeout") ) { timeout=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { canceled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"writeBytesTotal") ) { writeBytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"writeBytesLoaded") ) { writeBytesLoaded=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeHTTPRequest_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"multi") ) { multi=ioValue.Cast<  ::lime::net::curl::CURLMulti >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cookieList") ) { cookieList=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"multiInstances") ) { multiInstances=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
		if (HX_FIELD_EQ(inName,"multiAddHandle") ) { multiAddHandle=ioValue.Cast<  ::sys::thread::Deque >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"activeInstances") ) { activeInstances=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"localThreadPool") ) { localThreadPool=ioValue.Cast<  ::lime::_hx_system::ThreadPool >(); return true; }
		if (HX_FIELD_EQ(inName,"multiThreadPool") ) { multiThreadPool=ioValue.Cast<  ::lime::_hx_system::ThreadPool >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"multiProgressTimer") ) { multiProgressTimer=ioValue.Cast<  ::haxe::Timer >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"multiThreadPoolRunning") ) { multiThreadPoolRunning=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void NativeHTTPRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("bytes",6b,08,98,bd));
	outFields->push(HX_("bytesLoaded",d0,66,ca,99));
	outFields->push(HX_("bytesTotal",59,57,da,45));
	outFields->push(HX_("canceled",59,18,26,1f));
	outFields->push(HX_("curl",ec,4a,c9,41));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("promise",9b,cd,e9,f7));
	outFields->push(HX_("writeBytesLoaded",31,90,43,d2));
	outFields->push(HX_("writeBytesTotal",18,35,23,6d));
	outFields->push(HX_("timeout",a1,1a,f7,d8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NativeHTTPRequest_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::BytesBuffer */ ,(int)offsetof(NativeHTTPRequest_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(NativeHTTPRequest_obj,bytes),HX_("bytes",6b,08,98,bd)},
	{::hx::fsInt,(int)offsetof(NativeHTTPRequest_obj,bytesLoaded),HX_("bytesLoaded",d0,66,ca,99)},
	{::hx::fsInt,(int)offsetof(NativeHTTPRequest_obj,bytesTotal),HX_("bytesTotal",59,57,da,45)},
	{::hx::fsBool,(int)offsetof(NativeHTTPRequest_obj,canceled),HX_("canceled",59,18,26,1f)},
	{::hx::fsObject /*  ::lime::net::curl::CURL */ ,(int)offsetof(NativeHTTPRequest_obj,curl),HX_("curl",ec,4a,c9,41)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(NativeHTTPRequest_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsObject /*  ::lime::app::Promise_haxe_io_Bytes */ ,(int)offsetof(NativeHTTPRequest_obj,promise),HX_("promise",9b,cd,e9,f7)},
	{::hx::fsInt,(int)offsetof(NativeHTTPRequest_obj,writeBytesLoaded),HX_("writeBytesLoaded",31,90,43,d2)},
	{::hx::fsInt,(int)offsetof(NativeHTTPRequest_obj,writeBytesTotal),HX_("writeBytesTotal",18,35,23,6d)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(NativeHTTPRequest_obj,timeout),HX_("timeout",a1,1a,f7,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NativeHTTPRequest_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &NativeHTTPRequest_obj::activeInstances,HX_("activeInstances",98,b8,ef,7f)},
	{::hx::fsObject /*  ::lime::_hx_system::ThreadPool */ ,(void *) &NativeHTTPRequest_obj::localThreadPool,HX_("localThreadPool",11,36,f3,c0)},
	{::hx::fsObject /*  ::lime::net::curl::CURLMulti */ ,(void *) &NativeHTTPRequest_obj::multi,HX_("multi",79,8a,55,10)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &NativeHTTPRequest_obj::multiInstances,HX_("multiInstances",85,41,c9,b1)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(void *) &NativeHTTPRequest_obj::multiProgressTimer,HX_("multiProgressTimer",9f,32,2f,30)},
	{::hx::fsObject /*  ::lime::_hx_system::ThreadPool */ ,(void *) &NativeHTTPRequest_obj::multiThreadPool,HX_("multiThreadPool",9f,14,5d,b8)},
	{::hx::fsBool,(void *) &NativeHTTPRequest_obj::multiThreadPoolRunning,HX_("multiThreadPoolRunning",20,e3,3c,ed)},
	{::hx::fsObject /*  ::sys::thread::Deque */ ,(void *) &NativeHTTPRequest_obj::multiAddHandle,HX_("multiAddHandle",f0,76,d0,d6)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &NativeHTTPRequest_obj::cookieList,HX_("cookieList",22,c3,4e,57)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NativeHTTPRequest_obj_sMemberFields[] = {
	HX_("buffer",00,bd,94,d0),
	HX_("bytes",6b,08,98,bd),
	HX_("bytesLoaded",d0,66,ca,99),
	HX_("bytesTotal",59,57,da,45),
	HX_("canceled",59,18,26,1f),
	HX_("curl",ec,4a,c9,41),
	HX_("parent",2a,05,7e,ed),
	HX_("promise",9b,cd,e9,f7),
	HX_("writeBytesLoaded",31,90,43,d2),
	HX_("writeBytesTotal",18,35,23,6d),
	HX_("timeout",a1,1a,f7,d8),
	HX_("cancel",7a,ed,33,b8),
	HX_("init",10,3b,bb,45),
	HX_("initRequest",1f,4e,ef,fc),
	HX_("loadData",70,27,03,b3),
	HX_("loadText",f3,9d,99,bd),
	HX_("buildBuffer",ce,a2,05,21),
	HX_("curl_onHeader",ff,ee,a6,ac),
	HX_("curl_onProgress",9f,9d,6b,99),
	HX_("curl_onWrite",ad,7b,ff,91),
	::String(null()) };

static void NativeHTTPRequest_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::activeInstances,"activeInstances");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::localThreadPool,"localThreadPool");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::multi,"multi");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::multiInstances,"multiInstances");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::multiProgressTimer,"multiProgressTimer");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::multiThreadPool,"multiThreadPool");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::multiThreadPoolRunning,"multiThreadPoolRunning");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::multiAddHandle,"multiAddHandle");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::cookieList,"cookieList");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeHTTPRequest_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::activeInstances,"activeInstances");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::localThreadPool,"localThreadPool");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::multi,"multi");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::multiInstances,"multiInstances");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::multiProgressTimer,"multiProgressTimer");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::multiThreadPool,"multiThreadPool");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::multiThreadPoolRunning,"multiThreadPoolRunning");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::multiAddHandle,"multiAddHandle");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::cookieList,"cookieList");
};

#endif

::hx::Class NativeHTTPRequest_obj::__mClass;

static ::String NativeHTTPRequest_obj_sStaticFields[] = {
	HX_("activeInstances",98,b8,ef,7f),
	HX_("localThreadPool",11,36,f3,c0),
	HX_("multi",79,8a,55,10),
	HX_("multiInstances",85,41,c9,b1),
	HX_("multiProgressTimer",9f,32,2f,30),
	HX_("multiThreadPool",9f,14,5d,b8),
	HX_("multiThreadPoolRunning",20,e3,3c,ed),
	HX_("multiAddHandle",f0,76,d0,d6),
	HX_("cookieList",22,c3,4e,57),
	HX_("localThreadPool_doWork",aa,d6,50,91),
	HX_("localThreadPool_onComplete",a6,73,cb,3c),
	HX_("localThreadPool_onError",bb,f2,40,9d),
	HX_("localThreadPool_onProgress",9a,6a,2e,43),
	HX_("multiThreadPool_doWork",dc,05,fa,c1),
	HX_("multiThreadPool_onComplete",d8,23,41,15),
	HX_("multiThreadPool_onProgress",cc,1a,a4,1b),
	HX_("multiProgressTimer_onRun",8c,36,cb,30),
	::String(null())
};

void NativeHTTPRequest_obj::__register()
{
	NativeHTTPRequest_obj _hx_dummy;
	NativeHTTPRequest_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.NativeHTTPRequest",1e,22,ba,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeHTTPRequest_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeHTTPRequest_obj::__SetStatic;
	__mClass->mMarkFunc = NativeHTTPRequest_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NativeHTTPRequest_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NativeHTTPRequest_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NativeHTTPRequest_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeHTTPRequest_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeHTTPRequest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeHTTPRequest_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
