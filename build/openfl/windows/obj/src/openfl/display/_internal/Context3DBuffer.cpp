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
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBuffer
#include <openfl/display/_internal/Context3DBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DElementType
#include <openfl/display/_internal/Context3DElementType.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9e62df52b7800135_30_new,"openfl.display._internal.Context3DBuffer","new",0x8fb9e4f6,"openfl.display._internal.Context3DBuffer.new","openfl/display/_internal/Context3DBuffer.hx",30,0x1311077d)
HX_LOCAL_STACK_FRAME(_hx_pos_9e62df52b7800135_42_drawElements,"openfl.display._internal.Context3DBuffer","drawElements",0x2a916b05,"openfl.display._internal.Context3DBuffer.drawElements","openfl/display/_internal/Context3DBuffer.hx",42,0x1311077d)
HX_LOCAL_STACK_FRAME(_hx_pos_9e62df52b7800135_77_flushVertexBufferData,"openfl.display._internal.Context3DBuffer","flushVertexBufferData",0xfe9a3cc8,"openfl.display._internal.Context3DBuffer.flushVertexBufferData","openfl/display/_internal/Context3DBuffer.hx",77,0x1311077d)
HX_LOCAL_STACK_FRAME(_hx_pos_9e62df52b7800135_88_resize,"openfl.display._internal.Context3DBuffer","resize",0x383fc71e,"openfl.display._internal.Context3DBuffer.resize","openfl/display/_internal/Context3DBuffer.hx",88,0x1311077d)
HX_LOCAL_STACK_FRAME(_hx_pos_9e62df52b7800135_11_boot,"openfl.display._internal.Context3DBuffer","boot",0x2b0772dc,"openfl.display._internal.Context3DBuffer.boot","openfl/display/_internal/Context3DBuffer.hx",11,0x1311077d)
HX_LOCAL_STACK_FRAME(_hx_pos_9e62df52b7800135_13_boot,"openfl.display._internal.Context3DBuffer","boot",0x2b0772dc,"openfl.display._internal.Context3DBuffer.boot","openfl/display/_internal/Context3DBuffer.hx",13,0x1311077d)
HX_LOCAL_STACK_FRAME(_hx_pos_9e62df52b7800135_14_boot,"openfl.display._internal.Context3DBuffer","boot",0x2b0772dc,"openfl.display._internal.Context3DBuffer.boot","openfl/display/_internal/Context3DBuffer.hx",14,0x1311077d)
HX_LOCAL_STACK_FRAME(_hx_pos_9e62df52b7800135_15_boot,"openfl.display._internal.Context3DBuffer","boot",0x2b0772dc,"openfl.display._internal.Context3DBuffer.boot","openfl/display/_internal/Context3DBuffer.hx",15,0x1311077d)
namespace openfl{
namespace display{
namespace _internal{

void Context3DBuffer_obj::__construct( ::openfl::display3D::Context3D context3D, ::openfl::display::_internal::Context3DElementType elementType,int elementCount,int dataPerVertex){
            	HX_STACKFRAME(&_hx_pos_9e62df52b7800135_30_new)
HXLINE(  31)		this->context3D = context3D;
HXLINE(  32)		this->elementType = elementType;
HXLINE(  33)		this->dataPerVertex = dataPerVertex;
HXLINE(  35)		this->indexCount = 0;
HXLINE(  36)		this->vertexCount = 0;
HXLINE(  38)		this->resize(elementCount,null());
            	}

Dynamic Context3DBuffer_obj::__CreateEmpty() { return new Context3DBuffer_obj; }

void *Context3DBuffer_obj::_hx_vtable = 0;

Dynamic Context3DBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DBuffer_obj > _hx_result = new Context3DBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Context3DBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x668f7d76;
}

void Context3DBuffer_obj::drawElements(int start,::hx::Null< int >  __o_length){
            		int length = __o_length.Default(-1);
            	HX_STACKFRAME(&_hx_pos_9e62df52b7800135_42_drawElements)
HXLINE(  43)		bool _hx_tmp;
HXDLIN(  43)		if ((this->indexCount != 0)) {
HXLINE(  43)			_hx_tmp = (this->vertexCount == 0);
            		}
            		else {
HXLINE(  43)			_hx_tmp = true;
            		}
HXDLIN(  43)		if (_hx_tmp) {
HXLINE(  43)			return;
            		}
HXLINE(  45)		if ((this->elementType->_hx_getIndex() == 0)) {
HXLINE(  48)			if ((length == -1)) {
HXLINE(  48)				length = (this->elementCount * 2);
            			}
HXLINE(  50)			bool _hx_tmp;
HXDLIN(  50)			if ((start < 10922)) {
HXLINE(  50)				_hx_tmp = ((length - start) < 10922);
            			}
            			else {
HXLINE(  50)				_hx_tmp = false;
            			}
HXDLIN(  50)			if (_hx_tmp) {
HXLINE(  52)				this->context3D->drawTriangles(this->indexBuffers->__get(0).StaticCast<  ::openfl::display3D::IndexBuffer3D >(),start,(length * 2));
            			}
            			else {
HXLINE(  56)				int end = (start + length);
HXLINE(  58)				while((start < end)){
HXLINE(  60)					int arrayBufferIndex = ::Math_obj::floor((( (Float)(start) ) / ( (Float)(10922) )));
HXLINE(  62)					length = ::Std_obj::_hx_int(::Math_obj::min(( (Float)((end - start)) ),( (Float)(10922) )));
HXLINE(  63)					if ((length <= 0)) {
HXLINE(  63)						goto _hx_goto_1;
            					}
HXLINE(  67)					this->context3D->drawTriangles(this->indexBuffers->__get(arrayBufferIndex).StaticCast<  ::openfl::display3D::IndexBuffer3D >(),((start - (arrayBufferIndex * 10922)) * 3),(length * 2));
HXLINE(  68)					start = (start + length);
            				}
            				_hx_goto_1:;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Context3DBuffer_obj,drawElements,(void))

void Context3DBuffer_obj::flushVertexBufferData(){
            	HX_STACKFRAME(&_hx_pos_9e62df52b7800135_77_flushVertexBufferData)
HXLINE(  78)		if ((this->vertexBufferData->length > this->vertexCount)) {
HXLINE(  80)			this->vertexCount = this->vertexBufferData->length;
HXLINE(  81)			this->vertexBuffer = this->context3D->createVertexBuffer(this->vertexCount,this->dataPerVertex,0);
            		}
HXLINE(  84)		this->vertexBuffer->uploadFromTypedArray(this->vertexBufferData,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Context3DBuffer_obj,flushVertexBufferData,(void))

void Context3DBuffer_obj::resize(int elementCount,::hx::Null< int >  __o_dataPerVertex){
            		int dataPerVertex = __o_dataPerVertex.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_9e62df52b7800135_88_resize)
HXLINE(  89)		this->elementCount = elementCount;
HXLINE(  91)		if ((dataPerVertex == -1)) {
HXLINE(  91)			dataPerVertex = this->dataPerVertex;
            		}
HXLINE(  93)		if ((dataPerVertex != this->dataPerVertex)) {
HXLINE(  95)			this->vertexBuffer = null();
HXLINE(  96)			this->vertexCount = 0;
HXLINE(  98)			this->dataPerVertex = dataPerVertex;
            		}
HXLINE( 101)		int numVertices = 0;
HXLINE( 103)		switch((int)(this->elementType->_hx_getIndex())){
            			case (int)0: {
HXLINE( 106)				numVertices = (elementCount * 4);
            			}
            			break;
            			case (int)1: {
HXLINE( 109)				numVertices = (elementCount * 3);
            			}
            			break;
            			case (int)2: {
HXLINE( 113)				numVertices = (elementCount * 3);
            			}
            			break;
            		}
HXLINE( 118)		int vertexLength = (numVertices * dataPerVertex);
HXLINE( 121)		if (::hx::IsNull( this->vertexBufferData )) {
HXLINE( 123)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 123)			::cpp::VirtualArray array = null();
HXDLIN( 123)			 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 123)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 123)			 ::Dynamic len = null();
HXDLIN( 123)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 123)			if (::hx::IsNotNull( vertexLength )) {
HXLINE( 123)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,vertexLength,8);
            			}
            			else {
HXLINE( 123)				if (::hx::IsNotNull( array )) {
HXLINE( 123)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 123)					_this->byteOffset = 0;
HXDLIN( 123)					_this->length = array->get_length();
HXDLIN( 123)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 123)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 123)					_this->buffer = this2;
HXDLIN( 123)					_this->copyFromArray(array,null());
HXDLIN( 123)					this1 = _this;
            				}
            				else {
HXLINE( 123)					if (::hx::IsNotNull( vector )) {
HXLINE( 123)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 123)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 123)						_this->byteOffset = 0;
HXDLIN( 123)						_this->length = array->get_length();
HXDLIN( 123)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 123)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 123)						_this->buffer = this2;
HXDLIN( 123)						_this->copyFromArray(array,null());
HXDLIN( 123)						this1 = _this;
            					}
            					else {
HXLINE( 123)						if (::hx::IsNotNull( view )) {
HXLINE( 123)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 123)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 123)							int srcLength = view->length;
HXDLIN( 123)							int srcByteOffset = view->byteOffset;
HXDLIN( 123)							int srcElementSize = view->bytesPerElement;
HXDLIN( 123)							int elementSize = _this->bytesPerElement;
HXDLIN( 123)							if ((view->type == _this->type)) {
HXLINE( 123)								int srcLength = srcData->length;
HXDLIN( 123)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 123)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 123)								_this->buffer = this1;
HXDLIN( 123)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 123)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 123)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 123)							_this->byteOffset = 0;
HXDLIN( 123)							_this->length = srcLength;
HXDLIN( 123)							this1 = _this;
            						}
            						else {
HXLINE( 123)							if (::hx::IsNotNull( buffer )) {
HXLINE( 123)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 123)								int in_byteOffset = 0;
HXDLIN( 123)								if ((in_byteOffset < 0)) {
HXLINE( 123)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 123)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 123)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 123)								int bufferByteLength = buffer->length;
HXDLIN( 123)								int elementSize = _this->bytesPerElement;
HXDLIN( 123)								int newByteLength = bufferByteLength;
HXDLIN( 123)								if (::hx::IsNull( len )) {
HXLINE( 123)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 123)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 123)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 123)									if ((newByteLength < 0)) {
HXLINE( 123)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 123)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 123)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 123)									if ((newRange > bufferByteLength)) {
HXLINE( 123)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 123)								_this->buffer = buffer;
HXDLIN( 123)								_this->byteOffset = in_byteOffset;
HXDLIN( 123)								_this->byteLength = newByteLength;
HXDLIN( 123)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 123)								this1 = _this;
            							}
            							else {
HXLINE( 123)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 123)			this->vertexBufferData = this1;
            		}
            		else {
HXLINE( 125)			if ((vertexLength > this->vertexBufferData->length)) {
HXLINE( 127)				 ::lime::utils::ArrayBufferView cacheBufferData = this->vertexBufferData;
HXLINE( 128)				 ::haxe::io::Bytes buffer = null();
HXDLIN( 128)				::cpp::VirtualArray array = null();
HXDLIN( 128)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 128)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 128)				 ::Dynamic len = null();
HXDLIN( 128)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 128)				if (::hx::IsNotNull( vertexLength )) {
HXLINE( 128)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,vertexLength,8);
            				}
            				else {
HXLINE( 128)					if (::hx::IsNotNull( array )) {
HXLINE( 128)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 128)						_this->byteOffset = 0;
HXDLIN( 128)						_this->length = array->get_length();
HXDLIN( 128)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)						_this->buffer = this2;
HXDLIN( 128)						_this->copyFromArray(array,null());
HXDLIN( 128)						this1 = _this;
            					}
            					else {
HXLINE( 128)						if (::hx::IsNotNull( vector )) {
HXLINE( 128)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 128)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 128)							_this->byteOffset = 0;
HXDLIN( 128)							_this->length = array->get_length();
HXDLIN( 128)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)							_this->buffer = this2;
HXDLIN( 128)							_this->copyFromArray(array,null());
HXDLIN( 128)							this1 = _this;
            						}
            						else {
HXLINE( 128)							if (::hx::IsNotNull( view )) {
HXLINE( 128)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 128)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 128)								int srcLength = view->length;
HXDLIN( 128)								int srcByteOffset = view->byteOffset;
HXDLIN( 128)								int srcElementSize = view->bytesPerElement;
HXDLIN( 128)								int elementSize = _this->bytesPerElement;
HXDLIN( 128)								if ((view->type == _this->type)) {
HXLINE( 128)									int srcLength = srcData->length;
HXDLIN( 128)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 128)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 128)									_this->buffer = this1;
HXDLIN( 128)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 128)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 128)								_this->byteOffset = 0;
HXDLIN( 128)								_this->length = srcLength;
HXDLIN( 128)								this1 = _this;
            							}
            							else {
HXLINE( 128)								if (::hx::IsNotNull( buffer )) {
HXLINE( 128)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 128)									int in_byteOffset = 0;
HXDLIN( 128)									if ((in_byteOffset < 0)) {
HXLINE( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									int bufferByteLength = buffer->length;
HXDLIN( 128)									int elementSize = _this->bytesPerElement;
HXDLIN( 128)									int newByteLength = bufferByteLength;
HXDLIN( 128)									if (::hx::IsNull( len )) {
HXLINE( 128)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 128)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 128)										if ((newByteLength < 0)) {
HXLINE( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 128)										newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 128)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 128)										if ((newRange > bufferByteLength)) {
HXLINE( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 128)									_this->buffer = buffer;
HXDLIN( 128)									_this->byteOffset = in_byteOffset;
HXDLIN( 128)									_this->byteLength = newByteLength;
HXDLIN( 128)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 128)									this1 = _this;
            								}
            								else {
HXLINE( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 128)				this->vertexBufferData = this1;
HXLINE( 129)				{
HXLINE( 129)					 ::lime::utils::ArrayBufferView _this = this->vertexBufferData;
HXDLIN( 129)					::cpp::VirtualArray array1 = null();
HXDLIN( 129)					int offset = 0;
HXDLIN( 129)					bool _hx_tmp;
HXDLIN( 129)					if (::hx::IsNotNull( cacheBufferData )) {
HXLINE( 129)						_hx_tmp = ::hx::IsNull( array1 );
            					}
            					else {
HXLINE( 129)						_hx_tmp = false;
            					}
HXDLIN( 129)					if (_hx_tmp) {
HXLINE( 129)						_this->buffer->blit((offset * _this->bytesPerElement),cacheBufferData->buffer,cacheBufferData->byteOffset,cacheBufferData->byteLength);
            					}
            					else {
HXLINE( 129)						bool _hx_tmp;
HXDLIN( 129)						if (::hx::IsNotNull( array1 )) {
HXLINE( 129)							_hx_tmp = ::hx::IsNull( cacheBufferData );
            						}
            						else {
HXLINE( 129)							_hx_tmp = false;
            						}
HXDLIN( 129)						if (_hx_tmp) {
HXLINE( 129)							_this->copyFromArray(array1,offset);
            						}
            						else {
HXLINE( 129)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Context3DBuffer_obj,resize,(void))

int Context3DBuffer_obj::MAX_INDEX_BUFFER_LENGTH;

int Context3DBuffer_obj::MAX_QUADS_PER_INDEX_BUFFER;

int Context3DBuffer_obj::MAX_QUAD_INDEX_BUFFER_LENGTH;


::hx::ObjectPtr< Context3DBuffer_obj > Context3DBuffer_obj::__new( ::openfl::display3D::Context3D context3D, ::openfl::display::_internal::Context3DElementType elementType,int elementCount,int dataPerVertex) {
	::hx::ObjectPtr< Context3DBuffer_obj > __this = new Context3DBuffer_obj();
	__this->__construct(context3D,elementType,elementCount,dataPerVertex);
	return __this;
}

::hx::ObjectPtr< Context3DBuffer_obj > Context3DBuffer_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context3D, ::openfl::display::_internal::Context3DElementType elementType,int elementCount,int dataPerVertex) {
	Context3DBuffer_obj *__this = (Context3DBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Context3DBuffer_obj), true, "openfl.display._internal.Context3DBuffer"));
	*(void **)__this = Context3DBuffer_obj::_hx_vtable;
	__this->__construct(context3D,elementType,elementCount,dataPerVertex);
	return __this;
}

Context3DBuffer_obj::Context3DBuffer_obj()
{
}

void Context3DBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DBuffer);
	HX_MARK_MEMBER_NAME(dataPerVertex,"dataPerVertex");
	HX_MARK_MEMBER_NAME(elementCount,"elementCount");
	HX_MARK_MEMBER_NAME(elementType,"elementType");
	HX_MARK_MEMBER_NAME(indexBufferData,"indexBufferData");
	HX_MARK_MEMBER_NAME(indexBuffers,"indexBuffers");
	HX_MARK_MEMBER_NAME(indexCount,"indexCount");
	HX_MARK_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_MARK_MEMBER_NAME(vertexBufferData,"vertexBufferData");
	HX_MARK_MEMBER_NAME(vertexCount,"vertexCount");
	HX_MARK_MEMBER_NAME(context3D,"context3D");
	HX_MARK_END_CLASS();
}

void Context3DBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dataPerVertex,"dataPerVertex");
	HX_VISIT_MEMBER_NAME(elementCount,"elementCount");
	HX_VISIT_MEMBER_NAME(elementType,"elementType");
	HX_VISIT_MEMBER_NAME(indexBufferData,"indexBufferData");
	HX_VISIT_MEMBER_NAME(indexBuffers,"indexBuffers");
	HX_VISIT_MEMBER_NAME(indexCount,"indexCount");
	HX_VISIT_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_VISIT_MEMBER_NAME(vertexBufferData,"vertexBufferData");
	HX_VISIT_MEMBER_NAME(vertexCount,"vertexCount");
	HX_VISIT_MEMBER_NAME(context3D,"context3D");
}

::hx::Val Context3DBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { return ::hx::Val( context3D ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"indexCount") ) { return ::hx::Val( indexCount ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"elementType") ) { return ::hx::Val( elementType ); }
		if (HX_FIELD_EQ(inName,"vertexCount") ) { return ::hx::Val( vertexCount ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elementCount") ) { return ::hx::Val( elementCount ); }
		if (HX_FIELD_EQ(inName,"indexBuffers") ) { return ::hx::Val( indexBuffers ); }
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { return ::hx::Val( vertexBuffer ); }
		if (HX_FIELD_EQ(inName,"drawElements") ) { return ::hx::Val( drawElements_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dataPerVertex") ) { return ::hx::Val( dataPerVertex ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"indexBufferData") ) { return ::hx::Val( indexBufferData ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"vertexBufferData") ) { return ::hx::Val( vertexBufferData ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"flushVertexBufferData") ) { return ::hx::Val( flushVertexBufferData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Context3DBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { context3D=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"indexCount") ) { indexCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"elementType") ) { elementType=inValue.Cast<  ::openfl::display::_internal::Context3DElementType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexCount") ) { vertexCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elementCount") ) { elementCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffers") ) { indexBuffers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { vertexBuffer=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dataPerVertex") ) { dataPerVertex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"indexBufferData") ) { indexBufferData=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"vertexBufferData") ) { vertexBufferData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dataPerVertex",97,9c,7c,40));
	outFields->push(HX_("elementCount",73,1c,9d,aa));
	outFields->push(HX_("elementType",96,db,7a,f0));
	outFields->push(HX_("indexBufferData",fc,a8,cc,e3));
	outFields->push(HX_("indexBuffers",81,96,f2,fb));
	outFields->push(HX_("indexCount",5d,b8,56,1a));
	outFields->push(HX_("vertexBuffer",84,af,a9,70));
	outFields->push(HX_("vertexBufferData",ce,43,ce,c6));
	outFields->push(HX_("vertexCount",cb,0e,9f,5e));
	outFields->push(HX_("context3D",60,5c,fc,16));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Context3DBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Context3DBuffer_obj,dataPerVertex),HX_("dataPerVertex",97,9c,7c,40)},
	{::hx::fsInt,(int)offsetof(Context3DBuffer_obj,elementCount),HX_("elementCount",73,1c,9d,aa)},
	{::hx::fsObject /*  ::openfl::display::_internal::Context3DElementType */ ,(int)offsetof(Context3DBuffer_obj,elementType),HX_("elementType",96,db,7a,f0)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Context3DBuffer_obj,indexBufferData),HX_("indexBufferData",fc,a8,cc,e3)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Context3DBuffer_obj,indexBuffers),HX_("indexBuffers",81,96,f2,fb)},
	{::hx::fsInt,(int)offsetof(Context3DBuffer_obj,indexCount),HX_("indexCount",5d,b8,56,1a)},
	{::hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(Context3DBuffer_obj,vertexBuffer),HX_("vertexBuffer",84,af,a9,70)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Context3DBuffer_obj,vertexBufferData),HX_("vertexBufferData",ce,43,ce,c6)},
	{::hx::fsInt,(int)offsetof(Context3DBuffer_obj,vertexCount),HX_("vertexCount",cb,0e,9f,5e)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(Context3DBuffer_obj,context3D),HX_("context3D",60,5c,fc,16)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Context3DBuffer_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Context3DBuffer_obj::MAX_INDEX_BUFFER_LENGTH,HX_("MAX_INDEX_BUFFER_LENGTH",bd,e7,c1,80)},
	{::hx::fsInt,(void *) &Context3DBuffer_obj::MAX_QUADS_PER_INDEX_BUFFER,HX_("MAX_QUADS_PER_INDEX_BUFFER",bd,42,19,d5)},
	{::hx::fsInt,(void *) &Context3DBuffer_obj::MAX_QUAD_INDEX_BUFFER_LENGTH,HX_("MAX_QUAD_INDEX_BUFFER_LENGTH",db,1b,df,33)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Context3DBuffer_obj_sMemberFields[] = {
	HX_("dataPerVertex",97,9c,7c,40),
	HX_("elementCount",73,1c,9d,aa),
	HX_("elementType",96,db,7a,f0),
	HX_("indexBufferData",fc,a8,cc,e3),
	HX_("indexBuffers",81,96,f2,fb),
	HX_("indexCount",5d,b8,56,1a),
	HX_("vertexBuffer",84,af,a9,70),
	HX_("vertexBufferData",ce,43,ce,c6),
	HX_("vertexCount",cb,0e,9f,5e),
	HX_("context3D",60,5c,fc,16),
	HX_("drawElements",5b,c2,b7,59),
	HX_("flushVertexBufferData",b2,4a,75,a2),
	HX_("resize",f4,59,7b,08),
	::String(null()) };

static void Context3DBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DBuffer_obj::MAX_INDEX_BUFFER_LENGTH,"MAX_INDEX_BUFFER_LENGTH");
	HX_MARK_MEMBER_NAME(Context3DBuffer_obj::MAX_QUADS_PER_INDEX_BUFFER,"MAX_QUADS_PER_INDEX_BUFFER");
	HX_MARK_MEMBER_NAME(Context3DBuffer_obj::MAX_QUAD_INDEX_BUFFER_LENGTH,"MAX_QUAD_INDEX_BUFFER_LENGTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DBuffer_obj::MAX_INDEX_BUFFER_LENGTH,"MAX_INDEX_BUFFER_LENGTH");
	HX_VISIT_MEMBER_NAME(Context3DBuffer_obj::MAX_QUADS_PER_INDEX_BUFFER,"MAX_QUADS_PER_INDEX_BUFFER");
	HX_VISIT_MEMBER_NAME(Context3DBuffer_obj::MAX_QUAD_INDEX_BUFFER_LENGTH,"MAX_QUAD_INDEX_BUFFER_LENGTH");
};

#endif

::hx::Class Context3DBuffer_obj::__mClass;

static ::String Context3DBuffer_obj_sStaticFields[] = {
	HX_("MAX_INDEX_BUFFER_LENGTH",bd,e7,c1,80),
	HX_("MAX_QUADS_PER_INDEX_BUFFER",bd,42,19,d5),
	HX_("MAX_QUAD_INDEX_BUFFER_LENGTH",db,1b,df,33),
	::String(null())
};

void Context3DBuffer_obj::__register()
{
	Context3DBuffer_obj _hx_dummy;
	Context3DBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DBuffer",04,f2,02,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DBuffer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DBuffer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Context3DBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Context3DBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DBuffer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9e62df52b7800135_11_boot)
HXDLIN(  11)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_9e62df52b7800135_13_boot)
HXDLIN(  13)		MAX_INDEX_BUFFER_LENGTH = 65535;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9e62df52b7800135_14_boot)
HXDLIN(  14)		MAX_QUADS_PER_INDEX_BUFFER = 10922;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9e62df52b7800135_15_boot)
HXDLIN(  15)		MAX_QUAD_INDEX_BUFFER_LENGTH = 65532;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
