#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__internal_format_Base64
#include <lime/_internal/format/Base64.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisFile
#include <lime/media/vorbis/VorbisFile.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisInfo
#include <lime/media/vorbis/VorbisInfo.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_lime_media_AudioBuffer
#include <lime/net/_HTTPRequest_lime_media_AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_92_new,"lime.media.AudioBuffer","new",0x18eea6a5,"lime.media.AudioBuffer.new","lime/media/AudioBuffer.hx",92,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_98_dispose,"lime.media.AudioBuffer","dispose",0xa3b05d64,"lime.media.AudioBuffer.dispose","lime/media/AudioBuffer.hx",98,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_456_get_src,"lime.media.AudioBuffer","get_src",0x0f304c40,"lime.media.AudioBuffer.get_src","lime/media/AudioBuffer.hx",456,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_473_set_src,"lime.media.AudioBuffer","set_src",0x0231dd4c,"lime.media.AudioBuffer.set_src","lime/media/AudioBuffer.hx",473,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_111_fromBase64,"lime.media.AudioBuffer","fromBase64",0xbd10aef4,"lime.media.AudioBuffer.fromBase64","lime/media/AudioBuffer.hx",111,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_163_fromBytes,"lime.media.AudioBuffer","fromBytes",0x20c94aa6,"lime.media.AudioBuffer.fromBytes","lime/media/AudioBuffer.hx",163,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_202_fromFile,"lime.media.AudioBuffer","fromFile",0x1084eca1,"lime.media.AudioBuffer.fromFile","lime/media/AudioBuffer.hx",202,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_259_fromFiles,"lime.media.AudioBuffer","fromFiles",0x63ca20b2,"lime.media.AudioBuffer.fromFiles","lime/media/AudioBuffer.hx",259,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_292_fromVorbisFile,"lime.media.AudioBuffer","fromVorbisFile",0x6dde6b54,"lime.media.AudioBuffer.fromVorbisFile","lime/media/AudioBuffer.hx",292,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_370_loadFromFile,"lime.media.AudioBuffer","loadFromFile",0x735d4267,"lime.media.AudioBuffer.loadFromFile","lime/media/AudioBuffer.hx",370,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_319_loadFromFile,"lime.media.AudioBuffer","loadFromFile",0x735d4267,"lime.media.AudioBuffer.loadFromFile","lime/media/AudioBuffer.hx",319,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_416_loadFromFiles,"lime.media.AudioBuffer","loadFromFiles",0x7e3cd82c,"lime.media.AudioBuffer.loadFromFiles","lime/media/AudioBuffer.hx",416,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_421___getCodec,"lime.media.AudioBuffer","__getCodec",0x720a859b,"lime.media.AudioBuffer.__getCodec","lime/media/AudioBuffer.hx",421,0xf6fabaad)
namespace lime{
namespace media{

void AudioBuffer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_92_new)
            	}

Dynamic AudioBuffer_obj::__CreateEmpty() { return new AudioBuffer_obj; }

void *AudioBuffer_obj::_hx_vtable = 0;

Dynamic AudioBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AudioBuffer_obj > _hx_result = new AudioBuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AudioBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x010acaab;
}

void AudioBuffer_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_98_dispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioBuffer_obj,dispose,(void))

 ::Dynamic AudioBuffer_obj::get_src(){
            	HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_456_get_src)
HXDLIN( 456)		return this->_hx___srcVorbisFile;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioBuffer_obj,get_src,return )

 ::Dynamic AudioBuffer_obj::set_src( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_473_set_src)
HXDLIN( 473)		return (this->_hx___srcVorbisFile = ( ( ::lime::media::vorbis::VorbisFile)(value) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,set_src,return )

 ::lime::media::AudioBuffer AudioBuffer_obj::fromBase64(::String base64String){
            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_111_fromBase64)
HXLINE( 112)		if (::hx::IsNull( base64String )) {
HXLINE( 112)			return null();
            		}
HXLINE( 127)		::Array< ::String > base64StringSplit = base64String.split(HX_(",",2c,00,00,00));
HXLINE( 128)		::String base64StringNoEncoding = base64StringSplit->__get((base64StringSplit->length - 1));
HXLINE( 129)		 ::haxe::io::Bytes bytes = ::lime::_internal::format::Base64_obj::decode(base64StringNoEncoding);
HXLINE( 130)		 ::lime::media::AudioBuffer audioBuffer =  ::lime::media::AudioBuffer_obj::__alloc( HX_CTX );
HXLINE( 131)		 ::Dynamic elements = null();
HXDLIN( 131)		 ::haxe::io::Bytes buffer = ::haxe::io::Bytes_obj::alloc(0);
HXDLIN( 131)		::cpp::VirtualArray array = null();
HXDLIN( 131)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 131)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 131)		 ::Dynamic len = null();
HXDLIN( 131)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 131)		if (::hx::IsNotNull( elements )) {
HXLINE( 131)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXLINE( 131)			if (::hx::IsNotNull( array )) {
HXLINE( 131)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 131)				_this->byteOffset = 0;
HXDLIN( 131)				_this->length = array->get_length();
HXDLIN( 131)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)				_this->buffer = this2;
HXDLIN( 131)				_this->copyFromArray(array,null());
HXDLIN( 131)				this1 = _this;
            			}
            			else {
HXLINE( 131)				if (::hx::IsNotNull( vector )) {
HXLINE( 131)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 131)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 131)					_this->byteOffset = 0;
HXDLIN( 131)					_this->length = array->get_length();
HXDLIN( 131)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)					_this->buffer = this2;
HXDLIN( 131)					_this->copyFromArray(array,null());
HXDLIN( 131)					this1 = _this;
            				}
            				else {
HXLINE( 131)					if (::hx::IsNotNull( view )) {
HXLINE( 131)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 131)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 131)						int srcLength = view->length;
HXDLIN( 131)						int srcByteOffset = view->byteOffset;
HXDLIN( 131)						int srcElementSize = view->bytesPerElement;
HXDLIN( 131)						int elementSize = _this->bytesPerElement;
HXDLIN( 131)						if ((view->type == _this->type)) {
HXLINE( 131)							int srcLength = srcData->length;
HXDLIN( 131)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 131)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 131)							_this->buffer = this1;
HXDLIN( 131)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 131)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 131)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 131)						_this->byteOffset = 0;
HXDLIN( 131)						_this->length = srcLength;
HXDLIN( 131)						this1 = _this;
            					}
            					else {
HXLINE( 131)						if (::hx::IsNotNull( buffer )) {
HXLINE( 131)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 131)							int in_byteOffset = 0;
HXDLIN( 131)							if ((in_byteOffset < 0)) {
HXLINE( 131)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 131)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 131)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 131)							int bufferByteLength = buffer->length;
HXDLIN( 131)							int elementSize = _this->bytesPerElement;
HXDLIN( 131)							int newByteLength = bufferByteLength;
HXDLIN( 131)							if (::hx::IsNull( len )) {
HXLINE( 131)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 131)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 131)								if ((newByteLength < 0)) {
HXLINE( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 131)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 131)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 131)								if ((newRange > bufferByteLength)) {
HXLINE( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 131)							_this->buffer = buffer;
HXDLIN( 131)							_this->byteOffset = in_byteOffset;
HXDLIN( 131)							_this->byteLength = newByteLength;
HXDLIN( 131)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 131)							this1 = _this;
            						}
            						else {
HXLINE( 131)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 131)		audioBuffer->data = this1;
HXLINE( 133)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_audio_load_bytes(::hx::DynamicPtr(bytes),::hx::DynamicPtr(audioBuffer))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromBase64,return )

 ::lime::media::AudioBuffer AudioBuffer_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_163_fromBytes)
HXLINE( 164)		if (::hx::IsNull( bytes )) {
HXLINE( 164)			return null();
            		}
HXLINE( 173)		 ::lime::media::AudioBuffer audioBuffer =  ::lime::media::AudioBuffer_obj::__alloc( HX_CTX );
HXLINE( 174)		 ::Dynamic elements = null();
HXDLIN( 174)		 ::haxe::io::Bytes buffer = ::haxe::io::Bytes_obj::alloc(0);
HXDLIN( 174)		::cpp::VirtualArray array = null();
HXDLIN( 174)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 174)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 174)		 ::Dynamic len = null();
HXDLIN( 174)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 174)		if (::hx::IsNotNull( elements )) {
HXLINE( 174)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXLINE( 174)			if (::hx::IsNotNull( array )) {
HXLINE( 174)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 174)				_this->byteOffset = 0;
HXDLIN( 174)				_this->length = array->get_length();
HXDLIN( 174)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)				_this->buffer = this2;
HXDLIN( 174)				_this->copyFromArray(array,null());
HXDLIN( 174)				this1 = _this;
            			}
            			else {
HXLINE( 174)				if (::hx::IsNotNull( vector )) {
HXLINE( 174)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 174)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 174)					_this->byteOffset = 0;
HXDLIN( 174)					_this->length = array->get_length();
HXDLIN( 174)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)					_this->buffer = this2;
HXDLIN( 174)					_this->copyFromArray(array,null());
HXDLIN( 174)					this1 = _this;
            				}
            				else {
HXLINE( 174)					if (::hx::IsNotNull( view )) {
HXLINE( 174)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 174)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 174)						int srcLength = view->length;
HXDLIN( 174)						int srcByteOffset = view->byteOffset;
HXDLIN( 174)						int srcElementSize = view->bytesPerElement;
HXDLIN( 174)						int elementSize = _this->bytesPerElement;
HXDLIN( 174)						if ((view->type == _this->type)) {
HXLINE( 174)							int srcLength = srcData->length;
HXDLIN( 174)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 174)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 174)							_this->buffer = this1;
HXDLIN( 174)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 174)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 174)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 174)						_this->byteOffset = 0;
HXDLIN( 174)						_this->length = srcLength;
HXDLIN( 174)						this1 = _this;
            					}
            					else {
HXLINE( 174)						if (::hx::IsNotNull( buffer )) {
HXLINE( 174)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 174)							int in_byteOffset = 0;
HXDLIN( 174)							if ((in_byteOffset < 0)) {
HXLINE( 174)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 174)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 174)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 174)							int bufferByteLength = buffer->length;
HXDLIN( 174)							int elementSize = _this->bytesPerElement;
HXDLIN( 174)							int newByteLength = bufferByteLength;
HXDLIN( 174)							if (::hx::IsNull( len )) {
HXLINE( 174)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 174)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 174)								if ((newByteLength < 0)) {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 174)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 174)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 174)								if ((newRange > bufferByteLength)) {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 174)							_this->buffer = buffer;
HXDLIN( 174)							_this->byteOffset = in_byteOffset;
HXDLIN( 174)							_this->byteLength = newByteLength;
HXDLIN( 174)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 174)							this1 = _this;
            						}
            						else {
HXLINE( 174)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 174)		audioBuffer->data = this1;
HXLINE( 176)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_audio_load_bytes(::hx::DynamicPtr(bytes),::hx::DynamicPtr(audioBuffer))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromBytes,return )

 ::lime::media::AudioBuffer AudioBuffer_obj::fromFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_202_fromFile)
HXLINE( 203)		if (::hx::IsNull( path )) {
HXLINE( 203)			return null();
            		}
HXLINE( 228)		 ::lime::media::AudioBuffer audioBuffer =  ::lime::media::AudioBuffer_obj::__alloc( HX_CTX );
HXLINE( 229)		 ::Dynamic elements = null();
HXDLIN( 229)		 ::haxe::io::Bytes buffer = ::haxe::io::Bytes_obj::alloc(0);
HXDLIN( 229)		::cpp::VirtualArray array = null();
HXDLIN( 229)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 229)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 229)		 ::Dynamic len = null();
HXDLIN( 229)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 229)		if (::hx::IsNotNull( elements )) {
HXLINE( 229)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXLINE( 229)			if (::hx::IsNotNull( array )) {
HXLINE( 229)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 229)				_this->byteOffset = 0;
HXDLIN( 229)				_this->length = array->get_length();
HXDLIN( 229)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 229)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 229)				_this->buffer = this2;
HXDLIN( 229)				_this->copyFromArray(array,null());
HXDLIN( 229)				this1 = _this;
            			}
            			else {
HXLINE( 229)				if (::hx::IsNotNull( vector )) {
HXLINE( 229)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 229)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 229)					_this->byteOffset = 0;
HXDLIN( 229)					_this->length = array->get_length();
HXDLIN( 229)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 229)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 229)					_this->buffer = this2;
HXDLIN( 229)					_this->copyFromArray(array,null());
HXDLIN( 229)					this1 = _this;
            				}
            				else {
HXLINE( 229)					if (::hx::IsNotNull( view )) {
HXLINE( 229)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 229)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 229)						int srcLength = view->length;
HXDLIN( 229)						int srcByteOffset = view->byteOffset;
HXDLIN( 229)						int srcElementSize = view->bytesPerElement;
HXDLIN( 229)						int elementSize = _this->bytesPerElement;
HXDLIN( 229)						if ((view->type == _this->type)) {
HXLINE( 229)							int srcLength = srcData->length;
HXDLIN( 229)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 229)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 229)							_this->buffer = this1;
HXDLIN( 229)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 229)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 229)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 229)						_this->byteOffset = 0;
HXDLIN( 229)						_this->length = srcLength;
HXDLIN( 229)						this1 = _this;
            					}
            					else {
HXLINE( 229)						if (::hx::IsNotNull( buffer )) {
HXLINE( 229)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 229)							int in_byteOffset = 0;
HXDLIN( 229)							if ((in_byteOffset < 0)) {
HXLINE( 229)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 229)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 229)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 229)							int bufferByteLength = buffer->length;
HXDLIN( 229)							int elementSize = _this->bytesPerElement;
HXDLIN( 229)							int newByteLength = bufferByteLength;
HXDLIN( 229)							if (::hx::IsNull( len )) {
HXLINE( 229)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 229)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 229)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 229)								if ((newByteLength < 0)) {
HXLINE( 229)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 229)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 229)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 229)								if ((newRange > bufferByteLength)) {
HXLINE( 229)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 229)							_this->buffer = buffer;
HXDLIN( 229)							_this->byteOffset = in_byteOffset;
HXDLIN( 229)							_this->byteLength = newByteLength;
HXDLIN( 229)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 229)							this1 = _this;
            						}
            						else {
HXLINE( 229)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 229)		audioBuffer->data = this1;
HXLINE( 231)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_audio_load_file(::hx::DynamicPtr(path),::hx::DynamicPtr(audioBuffer))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromFile,return )

 ::lime::media::AudioBuffer AudioBuffer_obj::fromFiles(::Array< ::String > paths){
            	HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_259_fromFiles)
HXLINE( 271)		 ::lime::media::AudioBuffer buffer = null();
HXLINE( 273)		{
HXLINE( 273)			int _g = 0;
HXDLIN( 273)			while((_g < paths->length)){
HXLINE( 273)				::String path = paths->__get(_g);
HXDLIN( 273)				_g = (_g + 1);
HXLINE( 275)				buffer = ::lime::media::AudioBuffer_obj::fromFile(path);
HXLINE( 276)				if (::hx::IsNotNull( buffer )) {
HXLINE( 276)					goto _hx_goto_7;
            				}
            			}
            			_hx_goto_7:;
            		}
HXLINE( 279)		return buffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromFiles,return )

 ::lime::media::AudioBuffer AudioBuffer_obj::fromVorbisFile( ::lime::media::vorbis::VorbisFile vorbisFile){
            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_292_fromVorbisFile)
HXLINE( 293)		if (::hx::IsNull( vorbisFile )) {
HXLINE( 293)			return null();
            		}
HXLINE( 295)		 ::lime::media::vorbis::VorbisInfo info = vorbisFile->info(null());
HXLINE( 297)		 ::lime::media::AudioBuffer audioBuffer =  ::lime::media::AudioBuffer_obj::__alloc( HX_CTX );
HXLINE( 298)		audioBuffer->channels = info->channels;
HXLINE( 299)		audioBuffer->sampleRate = info->rate;
HXLINE( 300)		audioBuffer->bitsPerSample = 16;
HXLINE( 301)		audioBuffer->_hx___srcVorbisFile = vorbisFile;
HXLINE( 303)		return audioBuffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromVorbisFile,return )

 ::lime::app::Future AudioBuffer_obj::loadFromFile(::String path){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::media::AudioBuffer buffer){
            			HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_370_loadFromFile)
HXLINE( 370)			if (::hx::IsNotNull( buffer )) {
HXLINE( 372)				return ::lime::app::Future_obj::withValue(buffer);
            			}
            			else {
HXLINE( 376)				return ::lime::app::Future_obj::withError(HX_("",00,00,00,00));
            			}
HXLINE( 370)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_319_loadFromFile)
HXLINE( 367)		 ::lime::net::_HTTPRequest_lime_media_AudioBuffer request =  ::lime::net::_HTTPRequest_lime_media_AudioBuffer_obj::__alloc( HX_CTX ,null());
HXLINE( 368)		return request->load(path)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,loadFromFile,return )

 ::lime::app::Future AudioBuffer_obj::loadFromFiles(::Array< ::String > paths){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,paths1) HXARGC(0)
            		 ::lime::media::AudioBuffer _hx_run(){
            			HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_416_loadFromFiles)
HXDLIN( 416)			return ::lime::media::AudioBuffer_obj::fromFiles(paths1);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_416_loadFromFiles)
HXDLIN( 416)		::Array< ::String > paths1 = paths;
HXDLIN( 416)		return  ::lime::app::Future_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(paths1)),true);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,loadFromFiles,return )

::String AudioBuffer_obj::_hx___getCodec( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_421___getCodec)
HXLINE( 422)		::String signature = bytes->getString(0,4,null());
HXLINE( 424)		::String _hx_switch_0 = signature;
            		if (  (_hx_switch_0==HX_("OggS",44,5d,86,34)) ){
HXLINE( 427)			return HX_("audio/ogg",56,37,42,54);
HXDLIN( 427)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("RIFF",b7,20,6b,36)) ){
HXLINE( 430)			if ((bytes->getString(8,4,null()) == HX_("WAVE",b9,2d,b3,39))) {
HXLINE( 431)				return HX_("audio/wav",33,44,48,54);
            			}
            			else {
HXLINE( 433)				int _g = ( (int)(bytes->b->__get(1)) );
HXDLIN( 433)				int _g1 = ( (int)(bytes->b->__get(2)) );
HXDLIN( 433)				switch((int)(( (int)(bytes->b->__get(0)) ))){
            					case (int)73: {
HXLINE( 433)						if ((_g == 68)) {
HXLINE( 433)							if ((_g1 == 51)) {
HXLINE( 435)								return HX_("audio/mp3",77,ba,40,54);
            							}
            						}
            					}
            					break;
            					case (int)255: {
HXLINE( 433)						switch((int)(_g)){
            							case (int)243: case (int)250: case (int)251: {
HXLINE( 435)								return HX_("audio/mp3",77,ba,40,54);
            							}
            							break;
            							default:{
            							}
            						}
            					}
            					break;
            					default:{
            					}
            				}
            			}
HXLINE( 430)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("fLaC",68,c3,a5,43)) ){
HXLINE( 429)			return HX_("audio/flac",c1,0e,bf,5f);
HXDLIN( 429)			goto _hx_goto_14;
            		}
            		/* default */{
HXLINE( 433)			int _g = ( (int)(bytes->b->__get(1)) );
HXDLIN( 433)			int _g1 = ( (int)(bytes->b->__get(2)) );
HXDLIN( 433)			switch((int)(( (int)(bytes->b->__get(0)) ))){
            				case (int)73: {
HXLINE( 433)					if ((_g == 68)) {
HXLINE( 433)						if ((_g1 == 51)) {
HXLINE( 435)							return HX_("audio/mp3",77,ba,40,54);
            						}
            					}
            				}
            				break;
            				case (int)255: {
HXLINE( 433)					switch((int)(_g)){
            						case (int)243: case (int)250: case (int)251: {
HXLINE( 435)							return HX_("audio/mp3",77,ba,40,54);
            						}
            						break;
            						default:{
            						}
            					}
            				}
            				break;
            				default:{
            				}
            			}
            		}
            		_hx_goto_14:;
HXLINE( 440)		::lime::utils::Log_obj::error(HX_("Unsupported sound format",d3,74,34,38),::hx::SourceInfo(HX_("lime/media/AudioBuffer.hx",ad,ba,fa,f6),440,HX_("lime.media.AudioBuffer",33,70,4b,3a),HX_("__getCodec",40,d9,65,4d)));
HXLINE( 441)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,_hx___getCodec,return )


::hx::ObjectPtr< AudioBuffer_obj > AudioBuffer_obj::__new() {
	::hx::ObjectPtr< AudioBuffer_obj > __this = new AudioBuffer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AudioBuffer_obj > AudioBuffer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AudioBuffer_obj *__this = (AudioBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AudioBuffer_obj), true, "lime.media.AudioBuffer"));
	*(void **)__this = AudioBuffer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AudioBuffer_obj::AudioBuffer_obj()
{
}

void AudioBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioBuffer);
	HX_MARK_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(sampleRate,"sampleRate");
	HX_MARK_MEMBER_NAME(_hx___srcAudio,"__srcAudio");
	HX_MARK_MEMBER_NAME(_hx___srcBuffer,"__srcBuffer");
	HX_MARK_MEMBER_NAME(_hx___srcCustom,"__srcCustom");
	HX_MARK_MEMBER_NAME(_hx___srcHowl,"__srcHowl");
	HX_MARK_MEMBER_NAME(_hx___srcSound,"__srcSound");
	HX_MARK_MEMBER_NAME(_hx___srcVorbisFile,"__srcVorbisFile");
	HX_MARK_END_CLASS();
}

void AudioBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(sampleRate,"sampleRate");
	HX_VISIT_MEMBER_NAME(_hx___srcAudio,"__srcAudio");
	HX_VISIT_MEMBER_NAME(_hx___srcBuffer,"__srcBuffer");
	HX_VISIT_MEMBER_NAME(_hx___srcCustom,"__srcCustom");
	HX_VISIT_MEMBER_NAME(_hx___srcHowl,"__srcHowl");
	HX_VISIT_MEMBER_NAME(_hx___srcSound,"__srcSound");
	HX_VISIT_MEMBER_NAME(_hx___srcVorbisFile,"__srcVorbisFile");
}

::hx::Val AudioBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_src() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_src") ) { return ::hx::Val( get_src_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return ::hx::Val( set_src_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return ::hx::Val( channels ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__srcHowl") ) { return ::hx::Val( _hx___srcHowl ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { return ::hx::Val( sampleRate ); }
		if (HX_FIELD_EQ(inName,"__srcAudio") ) { return ::hx::Val( _hx___srcAudio ); }
		if (HX_FIELD_EQ(inName,"__srcSound") ) { return ::hx::Val( _hx___srcSound ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__srcBuffer") ) { return ::hx::Val( _hx___srcBuffer ); }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { return ::hx::Val( _hx___srcCustom ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { return ::hx::Val( bitsPerSample ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcVorbisFile") ) { return ::hx::Val( _hx___srcVorbisFile ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AudioBuffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromFiles") ) { outValue = fromFiles_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { outValue = fromBase64_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__getCodec") ) { outValue = _hx___getCodec_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromFiles") ) { outValue = loadFromFiles_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromVorbisFile") ) { outValue = fromVorbisFile_dyn(); return true; }
	}
	return false;
}

::hx::Val AudioBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_src(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__srcHowl") ) { _hx___srcHowl=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { sampleRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcAudio") ) { _hx___srcAudio=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcSound") ) { _hx___srcSound=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__srcBuffer") ) { _hx___srcBuffer=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { _hx___srcCustom=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { bitsPerSample=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcVorbisFile") ) { _hx___srcVorbisFile=inValue.Cast<  ::lime::media::vorbis::VorbisFile >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bitsPerSample",01,01,36,c4));
	outFields->push(HX_("channels",50,aa,ee,6a));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("sampleRate",2a,3c,4c,67));
	outFields->push(HX_("src",e4,a6,57,00));
	outFields->push(HX_("__srcAudio",72,3a,73,29));
	outFields->push(HX_("__srcBuffer",e4,63,0b,83));
	outFields->push(HX_("__srcCustom",95,2e,09,f2));
	outFields->push(HX_("__srcHowl",c0,38,b9,f4));
	outFields->push(HX_("__srcSound",6b,4e,bf,82));
	outFields->push(HX_("__srcVorbisFile",53,8c,ee,ce));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AudioBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(AudioBuffer_obj,bitsPerSample),HX_("bitsPerSample",01,01,36,c4)},
	{::hx::fsInt,(int)offsetof(AudioBuffer_obj,channels),HX_("channels",50,aa,ee,6a)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(AudioBuffer_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsInt,(int)offsetof(AudioBuffer_obj,sampleRate),HX_("sampleRate",2a,3c,4c,67)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AudioBuffer_obj,_hx___srcAudio),HX_("__srcAudio",72,3a,73,29)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AudioBuffer_obj,_hx___srcBuffer),HX_("__srcBuffer",e4,63,0b,83)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AudioBuffer_obj,_hx___srcCustom),HX_("__srcCustom",95,2e,09,f2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AudioBuffer_obj,_hx___srcHowl),HX_("__srcHowl",c0,38,b9,f4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AudioBuffer_obj,_hx___srcSound),HX_("__srcSound",6b,4e,bf,82)},
	{::hx::fsObject /*  ::lime::media::vorbis::VorbisFile */ ,(int)offsetof(AudioBuffer_obj,_hx___srcVorbisFile),HX_("__srcVorbisFile",53,8c,ee,ce)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AudioBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String AudioBuffer_obj_sMemberFields[] = {
	HX_("bitsPerSample",01,01,36,c4),
	HX_("channels",50,aa,ee,6a),
	HX_("data",2a,56,63,42),
	HX_("sampleRate",2a,3c,4c,67),
	HX_("__srcAudio",72,3a,73,29),
	HX_("__srcBuffer",e4,63,0b,83),
	HX_("__srcCustom",95,2e,09,f2),
	HX_("__srcHowl",c0,38,b9,f4),
	HX_("__srcSound",6b,4e,bf,82),
	HX_("__srcVorbisFile",53,8c,ee,ce),
	HX_("dispose",9f,80,4c,bb),
	HX_("get_src",7b,6f,cc,26),
	HX_("set_src",87,00,ce,19),
	::String(null()) };

::hx::Class AudioBuffer_obj::__mClass;

static ::String AudioBuffer_obj_sStaticFields[] = {
	HX_("fromBase64",99,02,6c,98),
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromFile",06,9d,87,a1),
	HX_("fromFiles",ad,c8,21,b5),
	HX_("fromVorbisFile",79,f5,fc,d5),
	HX_("loadFromFile",4c,89,f0,5a),
	HX_("loadFromFiles",a7,99,87,37),
	HX_("__getCodec",40,d9,65,4d),
	::String(null())
};

void AudioBuffer_obj::__register()
{
	AudioBuffer_obj _hx_dummy;
	AudioBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.AudioBuffer",33,70,4b,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioBuffer_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AudioBuffer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AudioBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AudioBuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
