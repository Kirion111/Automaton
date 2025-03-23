#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_media_AudioSource
#include <lime/media/AudioSource.h>
#endif
#ifndef INCLUDED_lime_media_OpenALAudioContext
#include <lime/media/OpenALAudioContext.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_SampleDataEvent
#include <openfl/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundMixer
#include <openfl/media/SoundMixer.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_43_new,"openfl.media.SoundChannel","new",0xfc94e2ae,"openfl.media.SoundChannel.new","openfl/media/SoundChannel.hx",43,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_147_stop,"openfl.media.SoundChannel","stop",0x090ae1f4,"openfl.media.SoundChannel.stop","openfl/media/SoundChannel.hx",147,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_181___dispose,"openfl.media.SoundChannel","__dispose",0x8d7f924d,"openfl.media.SoundChannel.__dispose","openfl/media/SoundChannel.hx",181,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_193___startSampleData,"openfl.media.SoundChannel","__startSampleData",0xb7873624,"openfl.media.SoundChannel.__startSampleData","openfl/media/SoundChannel.hx",193,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_236___startSampleData,"openfl.media.SoundChannel","__startSampleData",0xb7873624,"openfl.media.SoundChannel.__startSampleData","openfl/media/SoundChannel.hx",236,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_280___updateTransform,"openfl.media.SoundChannel","__updateTransform",0xba5f6dd1,"openfl.media.SoundChannel.__updateTransform","openfl/media/SoundChannel.hx",280,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_284___initAudioSource,"openfl.media.SoundChannel","__initAudioSource",0x32b568cf,"openfl.media.SoundChannel.__initAudioSource","openfl/media/SoundChannel.hx",284,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_301_get_position,"openfl.media.SoundChannel","get_position",0x46d188a4,"openfl.media.SoundChannel.get_position","openfl/media/SoundChannel.hx",301,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_312_set_position,"openfl.media.SoundChannel","set_position",0x5bcaac18,"openfl.media.SoundChannel.set_position","openfl/media/SoundChannel.hx",312,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_323_get_soundTransform,"openfl.media.SoundChannel","get_soundTransform",0xc6e884d8,"openfl.media.SoundChannel.get_soundTransform","openfl/media/SoundChannel.hx",323,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_327_set_soundTransform,"openfl.media.SoundChannel","set_soundTransform",0xa397b74c,"openfl.media.SoundChannel.set_soundTransform","openfl/media/SoundChannel.hx",327,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_360_audioSource_onComplete,"openfl.media.SoundChannel","audioSource_onComplete",0xebbc05d8,"openfl.media.SoundChannel.audioSource_onComplete","openfl/media/SoundChannel.hx",360,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_396_watchBuffers,"openfl.media.SoundChannel","watchBuffers",0x9b79e0d6,"openfl.media.SoundChannel.watchBuffers","openfl/media/SoundChannel.hx",396,0xa4290000)
namespace openfl{
namespace media{

void SoundChannel_obj::__construct( ::openfl::media::Sound sound, ::lime::media::AudioSource audioSource, ::openfl::media::SoundTransform soundTransform){
            	HX_GC_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_43_new)
HXLINE(  98)		this->_hx___numberOfBuffers = 3;
HXLINE( 120)		super::__construct(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 122)		this->_hx___sound = sound;
HXLINE( 124)		this->leftPeak = ( (Float)(1) );
HXLINE( 125)		this->rightPeak = ( (Float)(1) );
HXLINE( 127)		if (::hx::IsNotNull( soundTransform )) {
HXLINE( 129)			this->_hx___soundTransform = soundTransform;
            		}
            		else {
HXLINE( 133)			this->_hx___soundTransform =  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 136)		this->_hx___initAudioSource(audioSource);
HXLINE( 138)		::openfl::media::SoundMixer_obj::_hx___registerSoundChannel(::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic SoundChannel_obj::__CreateEmpty() { return new SoundChannel_obj; }

void *SoundChannel_obj::_hx_vtable = 0;

Dynamic SoundChannel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SoundChannel_obj > _hx_result = new SoundChannel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SoundChannel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x1a2cc6bc;
	}
}

void SoundChannel_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_147_stop)
HXLINE( 148)		::openfl::media::SoundMixer_obj::_hx___unregisterSoundChannel(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 150)		if (!(this->_hx___isValid)) {
HXLINE( 150)			return;
            		}
HXLINE( 162)		if (::hx::IsNotNull( this->_hx___alSource )) {
HXLINE( 164)			::lime::app::Application_obj::current->onUpdate->remove(this->watchBuffers_dyn());
HXLINE( 165)			 ::lime::media::OpenALAudioContext alAudioContext = this->_hx___sound->_hx___alAudioContext;
HXLINE( 166)			alAudioContext->sourceStop(this->_hx___alSource);
HXLINE( 167)			alAudioContext->deleteSource(this->_hx___alSource);
HXLINE( 168)			alAudioContext->deleteBuffers(this->_hx___alBuffers);
HXLINE( 169)			this->_hx___emptyBuffers = null();
HXLINE( 170)			this->_hx___alSource = null();
            		}
HXLINE( 175)		this->_hx___audioSource->stop();
HXLINE( 177)		this->_hx___dispose();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,stop,(void))

void SoundChannel_obj::_hx___dispose(){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_181___dispose)
HXLINE( 182)		if (!(this->_hx___isValid)) {
HXLINE( 182)			return;
            		}
HXLINE( 185)		this->_hx___audioSource->onComplete->remove(this->audioSource_onComplete_dyn());
HXLINE( 186)		this->_hx___audioSource->dispose();
HXLINE( 187)		this->_hx___audioSource = null();
HXLINE( 189)		this->_hx___isValid = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,_hx___dispose,(void))

void SoundChannel_obj::_hx___startSampleData(){
            	HX_GC_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_193___startSampleData)
HXDLIN( 193)		 ::openfl::media::SoundChannel _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 225)		 ::lime::media::OpenALAudioContext alAudioContext = this->_hx___sound->_hx___alAudioContext;
HXLINE( 226)		if (::hx::IsNotNull( alAudioContext )) {
HXLINE( 228)			this->_hx___sampleDataEvent =  ::openfl::events::SampleDataEvent_obj::__alloc( HX_CTX ,HX_("sampleData",74,3f,0b,5e),null(),null());
HXLINE( 229)			this->_hx___sound->dispatchEvent(this->_hx___sampleDataEvent);
HXLINE( 230)			int bufferSize = this->_hx___sampleDataEvent->getBufferSize();
HXLINE( 231)			if ((bufferSize == 0)) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::openfl::media::SoundChannel,_gthis) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_236___startSampleData)
HXLINE( 237)					_gthis->stop();
HXLINE( 238)					 ::openfl::media::SoundChannel _gthis1 = _gthis;
HXDLIN( 238)					_gthis1->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("soundComplete",a8,30,e6,1c),null(),null()));
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 235)				::openfl::Lib_obj::setTimeout( ::Dynamic(new _hx_Closure_0(_gthis)),1,null());
            			}
            			else {
HXLINE( 243)				bufferSize = 0;
HXLINE( 244)				this->_hx___alSource = alAudioContext->createSource();
HXLINE( 245)				alAudioContext->sourcef(this->_hx___alSource,alAudioContext->GAIN,( (Float)(1) ));
HXLINE( 246)				alAudioContext->source3f(this->_hx___alSource,alAudioContext->POSITION,( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 247)				alAudioContext->sourcef(this->_hx___alSource,alAudioContext->PITCH,((Float)1.0));
HXLINE( 249)				this->_hx___alBuffers = alAudioContext->genBuffers(this->_hx___numberOfBuffers);
HXLINE( 250)				 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 250)				this->_hx___outputBuffer = this1;
HXLINE( 251)				 ::Dynamic elements = null();
HXDLIN( 251)				 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(this->_hx___outputBuffer);
HXDLIN( 251)				::cpp::VirtualArray array = null();
HXDLIN( 251)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 251)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 251)				 ::Dynamic len = null();
HXDLIN( 251)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 251)				if (::hx::IsNotNull( elements )) {
HXLINE( 251)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXLINE( 251)					if (::hx::IsNotNull( array )) {
HXLINE( 251)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 251)						_this->byteOffset = 0;
HXDLIN( 251)						_this->length = array->get_length();
HXDLIN( 251)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 251)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 251)						_this->buffer = this1;
HXDLIN( 251)						_this->copyFromArray(array,null());
HXDLIN( 251)						this2 = _this;
            					}
            					else {
HXLINE( 251)						if (::hx::IsNotNull( vector )) {
HXLINE( 251)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 251)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 251)							_this->byteOffset = 0;
HXDLIN( 251)							_this->length = array->get_length();
HXDLIN( 251)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 251)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 251)							_this->buffer = this1;
HXDLIN( 251)							_this->copyFromArray(array,null());
HXDLIN( 251)							this2 = _this;
            						}
            						else {
HXLINE( 251)							if (::hx::IsNotNull( view )) {
HXLINE( 251)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 251)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 251)								int srcLength = view->length;
HXDLIN( 251)								int srcByteOffset = view->byteOffset;
HXDLIN( 251)								int srcElementSize = view->bytesPerElement;
HXDLIN( 251)								int elementSize = _this->bytesPerElement;
HXDLIN( 251)								if ((view->type == _this->type)) {
HXLINE( 251)									int srcLength = srcData->length;
HXDLIN( 251)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 251)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 251)									_this->buffer = this1;
HXDLIN( 251)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 251)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 251)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 251)								_this->byteOffset = 0;
HXDLIN( 251)								_this->length = srcLength;
HXDLIN( 251)								this2 = _this;
            							}
            							else {
HXLINE( 251)								if (::hx::IsNotNull( buffer )) {
HXLINE( 251)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 251)									int in_byteOffset = 0;
HXDLIN( 251)									if ((in_byteOffset < 0)) {
HXLINE( 251)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 251)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 251)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 251)									int bufferByteLength = buffer->length;
HXDLIN( 251)									int elementSize = _this->bytesPerElement;
HXDLIN( 251)									int newByteLength = bufferByteLength;
HXDLIN( 251)									if (::hx::IsNull( len )) {
HXLINE( 251)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 251)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 251)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 251)										if ((newByteLength < 0)) {
HXLINE( 251)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 251)										newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 251)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 251)										if ((newRange > bufferByteLength)) {
HXLINE( 251)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 251)									_this->buffer = buffer;
HXDLIN( 251)									_this->byteOffset = in_byteOffset;
HXDLIN( 251)									_this->byteLength = newByteLength;
HXDLIN( 251)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 251)									this2 = _this;
            								}
            								else {
HXLINE( 251)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 251)				this->_hx___bufferView = this2;
HXLINE( 253)				{
HXLINE( 253)					int _g = 0;
HXDLIN( 253)					int _g1 = this->_hx___numberOfBuffers;
HXDLIN( 253)					while((_g < _g1)){
HXLINE( 253)						_g = (_g + 1);
HXDLIN( 253)						int a = (_g - 1);
HXLINE( 255)						if ((bufferSize == 0)) {
HXLINE( 257)							bufferSize = this->_hx___sampleDataEvent->getBufferSize();
HXLINE( 258)							this->_hx___sampleDataEvent->getSamples(this->_hx___outputBuffer);
HXLINE( 259)							alAudioContext->bufferData(this->_hx___alBuffers->__get(a),alAudioContext->FORMAT_STEREO16,this->_hx___bufferView,(bufferSize * 4),44100);
            						}
            						else {
HXLINE( 263)							this->_hx___sound->dispatchEvent(this->_hx___sampleDataEvent);
HXLINE( 264)							this->_hx___sampleDataEvent->getSamples(this->_hx___outputBuffer);
HXLINE( 265)							alAudioContext->bufferData(this->_hx___alBuffers->__get(a),alAudioContext->FORMAT_STEREO16,this->_hx___bufferView,(bufferSize * 4),44100);
            						}
            					}
            				}
HXLINE( 269)				alAudioContext->sourceQueueBuffers(this->_hx___alSource,this->_hx___numberOfBuffers,this->_hx___alBuffers);
HXLINE( 271)				alAudioContext->sourcePlay(this->_hx___alSource);
HXLINE( 272)				::lime::app::Application_obj::current->onUpdate->add(this->watchBuffers_dyn(),null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,_hx___startSampleData,(void))

void SoundChannel_obj::_hx___updateTransform(){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_280___updateTransform)
HXDLIN( 280)		this->set_soundTransform(this->get_soundTransform());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,_hx___updateTransform,(void))

void SoundChannel_obj::_hx___initAudioSource( ::lime::media::AudioSource audioSource){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_284___initAudioSource)
HXLINE( 286)		this->_hx___audioSource = audioSource;
HXLINE( 287)		if (::hx::IsNull( this->_hx___audioSource )) {
HXLINE( 289)			return;
            		}
HXLINE( 292)		this->_hx___audioSource->onComplete->add(this->audioSource_onComplete_dyn(),null(),null());
HXLINE( 293)		this->_hx___isValid = true;
HXLINE( 295)		this->_hx___audioSource->play();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,_hx___initAudioSource,(void))

Float SoundChannel_obj::get_position(){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_301_get_position)
HXLINE( 302)		if (!(this->_hx___isValid)) {
HXLINE( 302)			return ( (Float)(0) );
            		}
HXLINE( 305)		int _hx_tmp = this->_hx___audioSource->get_currentTime();
HXDLIN( 305)		return ( (Float)((_hx_tmp + this->_hx___audioSource->offset)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_position,return )

Float SoundChannel_obj::set_position(Float value){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_312_set_position)
HXLINE( 313)		if (!(this->_hx___isValid)) {
HXLINE( 313)			return ( (Float)(0) );
            		}
HXLINE( 316)		 ::lime::media::AudioSource _hx_tmp = this->_hx___audioSource;
HXDLIN( 316)		int _hx_tmp1 = ::Std_obj::_hx_int(value);
HXDLIN( 316)		_hx_tmp->set_currentTime((_hx_tmp1 - this->_hx___audioSource->offset));
HXLINE( 318)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_position,return )

 ::openfl::media::SoundTransform SoundChannel_obj::get_soundTransform(){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_323_get_soundTransform)
HXDLIN( 323)		return this->_hx___soundTransform->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_soundTransform,return )

 ::openfl::media::SoundTransform SoundChannel_obj::set_soundTransform( ::openfl::media::SoundTransform value){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_327_set_soundTransform)
HXLINE( 328)		if (::hx::IsNotNull( value )) {
HXLINE( 330)			this->_hx___soundTransform->pan = value->pan;
HXLINE( 331)			this->_hx___soundTransform->volume = value->volume;
HXLINE( 333)			Float pan = (::openfl::media::SoundMixer_obj::_hx___soundTransform->pan + this->_hx___soundTransform->pan);
HXLINE( 335)			if ((pan < -1)) {
HXLINE( 335)				pan = ( (Float)(-1) );
            			}
HXLINE( 336)			if ((pan > 1)) {
HXLINE( 336)				pan = ( (Float)(1) );
            			}
HXLINE( 338)			Float volume = (::openfl::media::SoundMixer_obj::_hx___soundTransform->volume * this->_hx___soundTransform->volume);
HXLINE( 340)			if (this->_hx___isValid) {
HXLINE( 343)				this->_hx___audioSource->set_gain(volume);
HXLINE( 345)				 ::lime::math::Vector4 position = this->_hx___audioSource->get_position();
HXLINE( 346)				position->x = pan;
HXLINE( 347)				position->z = (( (Float)(-1) ) * ::Math_obj::sqrt((( (Float)(1) ) - ::Math_obj::pow(pan,( (Float)(2) )))));
HXLINE( 348)				this->_hx___audioSource->set_position(position);
HXLINE( 350)				return value;
            			}
            		}
HXLINE( 355)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_soundTransform,return )

void SoundChannel_obj::audioSource_onComplete(){
            	HX_GC_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_360_audioSource_onComplete)
HXLINE( 361)		::openfl::media::SoundMixer_obj::_hx___unregisterSoundChannel(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 363)		this->_hx___dispose();
HXLINE( 364)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("soundComplete",a8,30,e6,1c),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,audioSource_onComplete,(void))

void SoundChannel_obj::watchBuffers(int i){
            	HX_GC_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_396_watchBuffers)
HXLINE( 397)		 ::lime::media::OpenALAudioContext alAudioContext = this->_hx___sound->_hx___alAudioContext;
HXLINE( 398)		bool hasSampleData = true;
HXLINE( 400)		if (::hx::IsNotNull( alAudioContext )) {
HXLINE( 402)			int bufferState = ( (int)(alAudioContext->getSourcei(this->_hx___alSource,alAudioContext->BUFFERS_PROCESSED)) );
HXLINE( 403)			if ((bufferState > 0)) {
HXLINE( 405)				this->_hx___emptyBuffers = alAudioContext->sourceUnqueueBuffers(this->_hx___alSource,bufferState);
HXLINE( 406)				{
HXLINE( 406)					int _g = 0;
HXDLIN( 406)					int _g1 = this->_hx___emptyBuffers->get_length();
HXDLIN( 406)					while((_g < _g1)){
HXLINE( 406)						_g = (_g + 1);
HXDLIN( 406)						int a = (_g - 1);
HXLINE( 408)						::openfl::utils::_ByteArray::ByteArray_Impl__obj::set_length(this->_hx___sampleDataEvent->data,0);
HXLINE( 409)						this->_hx___sound->dispatchEvent(this->_hx___sampleDataEvent);
HXLINE( 410)						if ((::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(this->_hx___sampleDataEvent->data) == 0)) {
HXLINE( 412)							hasSampleData = false;
            						}
            						else {
HXLINE( 416)							this->_hx___sampleDataEvent->getSamples(this->_hx___outputBuffer);
HXLINE( 417)							 ::Dynamic _hx_tmp = this->_hx___emptyBuffers->__get(a);
HXDLIN( 417)							int alAudioContext1 = alAudioContext->FORMAT_STEREO16;
HXDLIN( 417)							 ::lime::utils::ArrayBufferView _hx_tmp1 = this->_hx___bufferView;
HXDLIN( 417)							alAudioContext->bufferData(_hx_tmp,alAudioContext1,_hx_tmp1,(this->_hx___sampleDataEvent->getBufferSize() * 4),44100);
HXLINE( 419)							alAudioContext->sourceQueueBuffer(this->_hx___alSource,this->_hx___emptyBuffers->__get(a));
            						}
            					}
            				}
HXLINE( 423)				bool _hx_tmp;
HXDLIN( 423)				if (hasSampleData) {
HXLINE( 423)					 ::Dynamic _hx_tmp1 = alAudioContext->getSourcei(this->_hx___alSource,alAudioContext->SOURCE_STATE);
HXDLIN( 423)					_hx_tmp = ::hx::IsNotEq( _hx_tmp1,alAudioContext->PLAYING );
            				}
            				else {
HXLINE( 423)					_hx_tmp = false;
            				}
HXDLIN( 423)				if (_hx_tmp) {
HXLINE( 425)					alAudioContext->sourcePlay(this->_hx___alSource);
            				}
            			}
            		}
HXLINE( 429)		if (!(hasSampleData)) {
HXLINE( 431)			this->stop();
HXLINE( 432)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("soundComplete",a8,30,e6,1c),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,watchBuffers,(void))


::hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__new( ::openfl::media::Sound sound, ::lime::media::AudioSource audioSource, ::openfl::media::SoundTransform soundTransform) {
	::hx::ObjectPtr< SoundChannel_obj > __this = new SoundChannel_obj();
	__this->__construct(sound,audioSource,soundTransform);
	return __this;
}

::hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::media::Sound sound, ::lime::media::AudioSource audioSource, ::openfl::media::SoundTransform soundTransform) {
	SoundChannel_obj *__this = (SoundChannel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SoundChannel_obj), true, "openfl.media.SoundChannel"));
	*(void **)__this = SoundChannel_obj::_hx_vtable;
	__this->__construct(sound,audioSource,soundTransform);
	return __this;
}

SoundChannel_obj::SoundChannel_obj()
{
}

void SoundChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundChannel);
	HX_MARK_MEMBER_NAME(leftPeak,"leftPeak");
	HX_MARK_MEMBER_NAME(rightPeak,"rightPeak");
	HX_MARK_MEMBER_NAME(_hx___sound,"__sound");
	HX_MARK_MEMBER_NAME(_hx___isValid,"__isValid");
	HX_MARK_MEMBER_NAME(_hx___soundTransform,"__soundTransform");
	HX_MARK_MEMBER_NAME(_hx___audioSource,"__audioSource");
	HX_MARK_MEMBER_NAME(_hx___sampleDataEvent,"__sampleDataEvent");
	HX_MARK_MEMBER_NAME(_hx___alSource,"__alSource");
	HX_MARK_MEMBER_NAME(_hx___outputBuffer,"__outputBuffer");
	HX_MARK_MEMBER_NAME(_hx___bufferView,"__bufferView");
	HX_MARK_MEMBER_NAME(_hx___alBuffers,"__alBuffers");
	HX_MARK_MEMBER_NAME(_hx___numberOfBuffers,"__numberOfBuffers");
	HX_MARK_MEMBER_NAME(_hx___emptyBuffers,"__emptyBuffers");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leftPeak,"leftPeak");
	HX_VISIT_MEMBER_NAME(rightPeak,"rightPeak");
	HX_VISIT_MEMBER_NAME(_hx___sound,"__sound");
	HX_VISIT_MEMBER_NAME(_hx___isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(_hx___soundTransform,"__soundTransform");
	HX_VISIT_MEMBER_NAME(_hx___audioSource,"__audioSource");
	HX_VISIT_MEMBER_NAME(_hx___sampleDataEvent,"__sampleDataEvent");
	HX_VISIT_MEMBER_NAME(_hx___alSource,"__alSource");
	HX_VISIT_MEMBER_NAME(_hx___outputBuffer,"__outputBuffer");
	HX_VISIT_MEMBER_NAME(_hx___bufferView,"__bufferView");
	HX_VISIT_MEMBER_NAME(_hx___alBuffers,"__alBuffers");
	HX_VISIT_MEMBER_NAME(_hx___numberOfBuffers,"__numberOfBuffers");
	HX_VISIT_MEMBER_NAME(_hx___emptyBuffers,"__emptyBuffers");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SoundChannel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__sound") ) { return ::hx::Val( _hx___sound ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { return ::hx::Val( leftPeak ); }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_position() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { return ::hx::Val( rightPeak ); }
		if (HX_FIELD_EQ(inName,"__isValid") ) { return ::hx::Val( _hx___isValid ); }
		if (HX_FIELD_EQ(inName,"__dispose") ) { return ::hx::Val( _hx___dispose_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__alSource") ) { return ::hx::Val( _hx___alSource ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__alBuffers") ) { return ::hx::Val( _hx___alBuffers ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bufferView") ) { return ::hx::Val( _hx___bufferView ); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return ::hx::Val( get_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return ::hx::Val( set_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"watchBuffers") ) { return ::hx::Val( watchBuffers_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__audioSource") ) { return ::hx::Val( _hx___audioSource ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_soundTransform() ); }
		if (HX_FIELD_EQ(inName,"__outputBuffer") ) { return ::hx::Val( _hx___outputBuffer ); }
		if (HX_FIELD_EQ(inName,"__emptyBuffers") ) { return ::hx::Val( _hx___emptyBuffers ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { return ::hx::Val( _hx___soundTransform ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__sampleDataEvent") ) { return ::hx::Val( _hx___sampleDataEvent ); }
		if (HX_FIELD_EQ(inName,"__numberOfBuffers") ) { return ::hx::Val( _hx___numberOfBuffers ); }
		if (HX_FIELD_EQ(inName,"__startSampleData") ) { return ::hx::Val( _hx___startSampleData_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateTransform") ) { return ::hx::Val( _hx___updateTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"__initAudioSource") ) { return ::hx::Val( _hx___initAudioSource_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return ::hx::Val( get_soundTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return ::hx::Val( set_soundTransform_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"audioSource_onComplete") ) { return ::hx::Val( audioSource_onComplete_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SoundChannel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__sound") ) { _hx___sound=inValue.Cast<  ::openfl::media::Sound >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { leftPeak=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_position(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { rightPeak=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isValid") ) { _hx___isValid=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__alSource") ) { _hx___alSource=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__alBuffers") ) { _hx___alBuffers=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bufferView") ) { _hx___bufferView=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__audioSource") ) { _hx___audioSource=inValue.Cast<  ::lime::media::AudioSource >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_soundTransform(inValue.Cast<  ::openfl::media::SoundTransform >()) ); }
		if (HX_FIELD_EQ(inName,"__outputBuffer") ) { _hx___outputBuffer=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__emptyBuffers") ) { _hx___emptyBuffers=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { _hx___soundTransform=inValue.Cast<  ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__sampleDataEvent") ) { _hx___sampleDataEvent=inValue.Cast<  ::openfl::events::SampleDataEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__numberOfBuffers") ) { _hx___numberOfBuffers=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("leftPeak",c6,21,50,51));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("rightPeak",1b,34,1b,b5));
	outFields->push(HX_("soundTransform",9d,ee,de,22));
	outFields->push(HX_("__sound",af,e5,2a,eb));
	outFields->push(HX_("__isValid",92,69,8c,4f));
	outFields->push(HX_("__soundTransform",bd,79,1e,57));
	outFields->push(HX_("__audioSource",31,23,5a,49));
	outFields->push(HX_("__sampleDataEvent",e6,a4,82,43));
	outFields->push(HX_("__alSource",46,ef,29,41));
	outFields->push(HX_("__outputBuffer",01,7a,b5,f4));
	outFields->push(HX_("__bufferView",a5,16,f3,d7));
	outFields->push(HX_("__alBuffers",a8,02,cf,bb));
	outFields->push(HX_("__numberOfBuffers",f3,b3,51,39));
	outFields->push(HX_("__emptyBuffers",86,2f,ac,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SoundChannel_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(SoundChannel_obj,leftPeak),HX_("leftPeak",c6,21,50,51)},
	{::hx::fsFloat,(int)offsetof(SoundChannel_obj,rightPeak),HX_("rightPeak",1b,34,1b,b5)},
	{::hx::fsObject /*  ::openfl::media::Sound */ ,(int)offsetof(SoundChannel_obj,_hx___sound),HX_("__sound",af,e5,2a,eb)},
	{::hx::fsBool,(int)offsetof(SoundChannel_obj,_hx___isValid),HX_("__isValid",92,69,8c,4f)},
	{::hx::fsObject /*  ::openfl::media::SoundTransform */ ,(int)offsetof(SoundChannel_obj,_hx___soundTransform),HX_("__soundTransform",bd,79,1e,57)},
	{::hx::fsObject /*  ::lime::media::AudioSource */ ,(int)offsetof(SoundChannel_obj,_hx___audioSource),HX_("__audioSource",31,23,5a,49)},
	{::hx::fsObject /*  ::openfl::events::SampleDataEvent */ ,(int)offsetof(SoundChannel_obj,_hx___sampleDataEvent),HX_("__sampleDataEvent",e6,a4,82,43)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SoundChannel_obj,_hx___alSource),HX_("__alSource",46,ef,29,41)},
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(SoundChannel_obj,_hx___outputBuffer),HX_("__outputBuffer",01,7a,b5,f4)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(SoundChannel_obj,_hx___bufferView),HX_("__bufferView",a5,16,f3,d7)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(SoundChannel_obj,_hx___alBuffers),HX_("__alBuffers",a8,02,cf,bb)},
	{::hx::fsInt,(int)offsetof(SoundChannel_obj,_hx___numberOfBuffers),HX_("__numberOfBuffers",f3,b3,51,39)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(SoundChannel_obj,_hx___emptyBuffers),HX_("__emptyBuffers",86,2f,ac,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SoundChannel_obj_sStaticStorageInfo = 0;
#endif

static ::String SoundChannel_obj_sMemberFields[] = {
	HX_("leftPeak",c6,21,50,51),
	HX_("rightPeak",1b,34,1b,b5),
	HX_("__sound",af,e5,2a,eb),
	HX_("__isValid",92,69,8c,4f),
	HX_("__soundTransform",bd,79,1e,57),
	HX_("__audioSource",31,23,5a,49),
	HX_("__sampleDataEvent",e6,a4,82,43),
	HX_("__alSource",46,ef,29,41),
	HX_("__outputBuffer",01,7a,b5,f4),
	HX_("__bufferView",a5,16,f3,d7),
	HX_("__alBuffers",a8,02,cf,bb),
	HX_("__numberOfBuffers",f3,b3,51,39),
	HX_("__emptyBuffers",86,2f,ac,2d),
	HX_("stop",02,f0,5b,4c),
	HX_("__dispose",7f,d1,9a,3c),
	HX_("__startSampleData",56,f7,9f,15),
	HX_("__updateTransform",03,2f,78,18),
	HX_("__initAudioSource",01,2a,ce,90),
	HX_("get_position",b2,54,14,80),
	HX_("set_position",26,78,0d,95),
	HX_("get_soundTransform",66,cf,78,be),
	HX_("set_soundTransform",da,01,28,9b),
	HX_("audioSource_onComplete",66,af,1f,55),
	HX_("watchBuffers",e4,ac,bc,d4),
	::String(null()) };

::hx::Class SoundChannel_obj::__mClass;

void SoundChannel_obj::__register()
{
	SoundChannel_obj _hx_dummy;
	SoundChannel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.media.SoundChannel",bc,b3,ae,75);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SoundChannel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SoundChannel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SoundChannel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SoundChannel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace media
