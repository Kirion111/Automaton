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
#ifndef INCLUDED_lime_math_CairoMatrix3
#include <lime/math/CairoMatrix3.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_math__Matrix3_Matrix3_Impl_
#include <lime/math/_Matrix3/Matrix3_Impl_.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_69__new,"lime.math._Matrix3.Matrix3_Impl_","_new",0xdc8bf1ab,"lime.math._Matrix3.Matrix3_Impl_._new","lime/math/Matrix3.hx",69,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_85_clone,"lime.math._Matrix3.Matrix3_Impl_","clone",0x6a36f7d3,"lime.math._Matrix3.Matrix3_Impl_.clone","lime/math/Matrix3.hx",85,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_95_concat,"lime.math._Matrix3.Matrix3_Impl_","concat",0x3f640bde,"lime.math._Matrix3.Matrix3_Impl_.concat","lime/math/Matrix3.hx",95,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_118_copyColumnFrom,"lime.math._Matrix3.Matrix3_Impl_","copyColumnFrom",0xbb98743f,"lime.math._Matrix3.Matrix3_Impl_.copyColumnFrom","lime/math/Matrix3.hx",118,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_147_copyColumnTo,"lime.math._Matrix3.Matrix3_Impl_","copyColumnTo",0x50676510,"lime.math._Matrix3.Matrix3_Impl_.copyColumnTo","lime/math/Matrix3.hx",147,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_177_copyFrom,"lime.math._Matrix3.Matrix3_Impl_","copyFrom",0x4f12d509,"lime.math._Matrix3.Matrix3_Impl_.copyFrom","lime/math/Matrix3.hx",177,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_194_copyRowFrom,"lime.math._Matrix3.Matrix3_Impl_","copyRowFrom",0xfa46e665,"lime.math._Matrix3.Matrix3_Impl_.copyRowFrom","lime/math/Matrix3.hx",194,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_220_copyRowTo,"lime.math._Matrix3.Matrix3_Impl_","copyRowTo",0xc840e1b6,"lime.math._Matrix3.Matrix3_Impl_.copyRowTo","lime/math/Matrix3.hx",220,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_254_createBox,"lime.math._Matrix3.Matrix3_Impl_","createBox",0x9eb6ebe5,"lime.math._Matrix3.Matrix3_Impl_.createBox","lime/math/Matrix3.hx",254,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_287_createGradientBox,"lime.math._Matrix3.Matrix3_Impl_","createGradientBox",0xce94a9d5,"lime.math._Matrix3.Matrix3_Impl_.createGradientBox","lime/math/Matrix3.hx",287,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_318_equals,"lime.math._Matrix3.Matrix3_Impl_","equals",0x3786f109,"lime.math._Matrix3.Matrix3_Impl_.equals","lime/math/Matrix3.hx",318,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_328_deltaTransformVector,"lime.math._Matrix3.Matrix3_Impl_","deltaTransformVector",0x5afb9281,"lime.math._Matrix3.Matrix3_Impl_.deltaTransformVector","lime/math/Matrix3.hx",328,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_337_fromCairoMatrix3,"lime.math._Matrix3.Matrix3_Impl_","fromCairoMatrix3",0x7b4966fe,"lime.math._Matrix3.Matrix3_Impl_.fromCairoMatrix3","lime/math/Matrix3.hx",337,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_341_fromFloat32Array,"lime.math._Matrix3.Matrix3_Impl_","fromFloat32Array",0x066c8232,"lime.math._Matrix3.Matrix3_Impl_.fromFloat32Array","lime/math/Matrix3.hx",341,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_354_identity,"lime.math._Matrix3.Matrix3_Impl_","identity",0x3fe10e88,"lime.math._Matrix3.Matrix3_Impl_.identity","lime/math/Matrix3.hx",354,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_368_invert,"lime.math._Matrix3.Matrix3_Impl_","invert",0x176ce9e0,"lime.math._Matrix3.Matrix3_Impl_.invert","lime/math/Matrix3.hx",368,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_399_rotate,"lime.math._Matrix3.Matrix3_Impl_","rotate",0x42b44925,"lime.math._Matrix3.Matrix3_Impl_.rotate","lime/math/Matrix3.hx",399,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_436_scale,"lime.math._Matrix3.Matrix3_Impl_","scale",0x9aa2b300,"lime.math._Matrix3.Matrix3_Impl_.scale","lime/math/Matrix3.hx",436,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_455_setRotation,"lime.math._Matrix3.Matrix3_Impl_","setRotation",0x43a2a7f6,"lime.math._Matrix3.Matrix3_Impl_.setRotation","lime/math/Matrix3.hx",455,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_472_setTo,"lime.math._Matrix3.Matrix3_Impl_","setTo",0x9c037633,"lime.math._Matrix3.Matrix3_Impl_.setTo","lime/math/Matrix3.hx",472,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_483_toCairoMatrix3,"lime.math._Matrix3.Matrix3_Impl_","toCairoMatrix3",0xfae7360f,"lime.math._Matrix3.Matrix3_Impl_.toCairoMatrix3","lime/math/Matrix3.hx",483,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_488_toString,"lime.math._Matrix3.Matrix3_Impl_","toString",0xbf2099f6,"lime.math._Matrix3.Matrix3_Impl_.toString","lime/math/Matrix3.hx",488,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_500_transformRect,"lime.math._Matrix3.Matrix3_Impl_","transformRect",0x62931726,"lime.math._Matrix3.Matrix3_Impl_.transformRect","lime/math/Matrix3.hx",500,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_542_transformVector,"lime.math._Matrix3.Matrix3_Impl_","transformVector",0x18517f45,"lime.math._Matrix3.Matrix3_Impl_.transformVector","lime/math/Matrix3.hx",542,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_555_translate,"lime.math._Matrix3.Matrix3_Impl_","translate",0x9e5e2ec4,"lime.math._Matrix3.Matrix3_Impl_.translate","lime/math/Matrix3.hx",555,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_562_get_a,"lime.math._Matrix3.Matrix3_Impl_","get_a",0xb33489ae,"lime.math._Matrix3.Matrix3_Impl_.get_a","lime/math/Matrix3.hx",562,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_566_set_a,"lime.math._Matrix3.Matrix3_Impl_","set_a",0x9c037fba,"lime.math._Matrix3.Matrix3_Impl_.set_a","lime/math/Matrix3.hx",566,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_571_get_b,"lime.math._Matrix3.Matrix3_Impl_","get_b",0xb33489af,"lime.math._Matrix3.Matrix3_Impl_.get_b","lime/math/Matrix3.hx",571,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_575_set_b,"lime.math._Matrix3.Matrix3_Impl_","set_b",0x9c037fbb,"lime.math._Matrix3.Matrix3_Impl_.set_b","lime/math/Matrix3.hx",575,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_580_get_c,"lime.math._Matrix3.Matrix3_Impl_","get_c",0xb33489b0,"lime.math._Matrix3.Matrix3_Impl_.get_c","lime/math/Matrix3.hx",580,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_584_set_c,"lime.math._Matrix3.Matrix3_Impl_","set_c",0x9c037fbc,"lime.math._Matrix3.Matrix3_Impl_.set_c","lime/math/Matrix3.hx",584,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_589_get_d,"lime.math._Matrix3.Matrix3_Impl_","get_d",0xb33489b1,"lime.math._Matrix3.Matrix3_Impl_.get_d","lime/math/Matrix3.hx",589,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_593_set_d,"lime.math._Matrix3.Matrix3_Impl_","set_d",0x9c037fbd,"lime.math._Matrix3.Matrix3_Impl_.set_d","lime/math/Matrix3.hx",593,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_598_get_tx,"lime.math._Matrix3.Matrix3_Impl_","get_tx",0x1ac3ff97,"lime.math._Matrix3.Matrix3_Impl_.get_tx","lime/math/Matrix3.hx",598,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_602_set_tx,"lime.math._Matrix3.Matrix3_Impl_","set_tx",0xe70c540b,"lime.math._Matrix3.Matrix3_Impl_.set_tx","lime/math/Matrix3.hx",602,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_607_get_ty,"lime.math._Matrix3.Matrix3_Impl_","get_ty",0x1ac3ff98,"lime.math._Matrix3.Matrix3_Impl_.get_ty","lime/math/Matrix3.hx",607,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_611_set_ty,"lime.math._Matrix3.Matrix3_Impl_","set_ty",0xe70c540c,"lime.math._Matrix3.Matrix3_Impl_.set_ty","lime/math/Matrix3.hx",611,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_616_get,"lime.math._Matrix3.Matrix3_Impl_","get",0x8ac53b8c,"lime.math._Matrix3.Matrix3_Impl_.get","lime/math/Matrix3.hx",616,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_e74edee44ca73620_620_set,"lime.math._Matrix3.Matrix3_Impl_","set",0x8ace5698,"lime.math._Matrix3.Matrix3_Impl_.set","lime/math/Matrix3.hx",620,0xeabca539)
namespace lime{
namespace math{
namespace _Matrix3{

void Matrix3_Impl__obj::__construct() { }

Dynamic Matrix3_Impl__obj::__CreateEmpty() { return new Matrix3_Impl__obj; }

void *Matrix3_Impl__obj::_hx_vtable = 0;

Dynamic Matrix3_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Matrix3_Impl__obj > _hx_result = new Matrix3_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Matrix3_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x41d5dec2;
}

 ::lime::utils::ArrayBufferView Matrix3_Impl__obj::_new(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty){
            		Float a = __o_a.Default(1);
            		Float b = __o_b.Default(0);
            		Float c = __o_c.Default(0);
            		Float d = __o_d.Default(1);
            		Float tx = __o_tx.Default(0);
            		Float ty = __o_ty.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_e74edee44ca73620_69__new)
HXLINE(  72)		 ::Dynamic elements = null();
HXDLIN(  72)		 ::haxe::io::Bytes buffer = null();
HXDLIN(  72)		::cpp::VirtualArray array = ::Array_obj< Float >::__new(9)->init(0,a)->init(1,b)->init(2,0)->init(3,c)->init(4,d)->init(5,0)->init(6,tx)->init(7,ty)->init(8,1);
HXDLIN(  72)		 ::openfl::_Vector::FloatVector vector = null();
HXDLIN(  72)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN(  72)		 ::Dynamic len = null();
HXDLIN(  72)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(  72)		if (::hx::IsNotNull( elements )) {
HXLINE(  72)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            		}
            		else {
HXLINE(  72)			if (::hx::IsNotNull( array )) {
HXLINE(  72)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  72)				_this->byteOffset = 0;
HXDLIN(  72)				_this->length = array->get_length();
HXDLIN(  72)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  72)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  72)				_this->buffer = this2;
HXDLIN(  72)				_this->copyFromArray(array,null());
HXDLIN(  72)				this1 = _this;
            			}
            			else {
HXLINE(  72)				if (::hx::IsNotNull( vector )) {
HXLINE(  72)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  72)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN(  72)					_this->byteOffset = 0;
HXDLIN(  72)					_this->length = array->get_length();
HXDLIN(  72)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  72)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  72)					_this->buffer = this2;
HXDLIN(  72)					_this->copyFromArray(array,null());
HXDLIN(  72)					this1 = _this;
            				}
            				else {
HXLINE(  72)					if (::hx::IsNotNull( view )) {
HXLINE(  72)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  72)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN(  72)						int srcLength = view->length;
HXDLIN(  72)						int srcByteOffset = view->byteOffset;
HXDLIN(  72)						int srcElementSize = view->bytesPerElement;
HXDLIN(  72)						int elementSize = _this->bytesPerElement;
HXDLIN(  72)						if ((view->type == _this->type)) {
HXLINE(  72)							int srcLength = srcData->length;
HXDLIN(  72)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN(  72)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN(  72)							_this->buffer = this1;
HXDLIN(  72)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE(  72)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN(  72)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN(  72)						_this->byteOffset = 0;
HXDLIN(  72)						_this->length = srcLength;
HXDLIN(  72)						this1 = _this;
            					}
            					else {
HXLINE(  72)						if (::hx::IsNotNull( buffer )) {
HXLINE(  72)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  72)							int in_byteOffset = 0;
HXDLIN(  72)							if ((in_byteOffset < 0)) {
HXLINE(  72)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN(  72)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE(  72)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN(  72)							int bufferByteLength = buffer->length;
HXDLIN(  72)							int elementSize = _this->bytesPerElement;
HXDLIN(  72)							int newByteLength = bufferByteLength;
HXDLIN(  72)							if (::hx::IsNull( len )) {
HXLINE(  72)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  72)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE(  72)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN(  72)								if ((newByteLength < 0)) {
HXLINE(  72)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE(  72)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN(  72)								int newRange = (in_byteOffset + newByteLength);
HXDLIN(  72)								if ((newRange > bufferByteLength)) {
HXLINE(  72)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN(  72)							_this->buffer = buffer;
HXDLIN(  72)							_this->byteOffset = in_byteOffset;
HXDLIN(  72)							_this->byteLength = newByteLength;
HXDLIN(  72)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN(  72)							this1 = _this;
            						}
            						else {
HXLINE(  72)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            						}
            					}
            				}
            			}
            		}
HXLINE(  69)		 ::lime::utils::ArrayBufferView this2 = this1;
HXDLIN(  69)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3_Impl__obj,_new,return )

 ::lime::utils::ArrayBufferView Matrix3_Impl__obj::clone( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_85_clone)
HXDLIN(  85)		Float _hx_tmp =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN(  85)		Float _hx_tmp1 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXDLIN(  85)		Float _hx_tmp2 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXDLIN(  85)		Float _hx_tmp3 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN(  85)		Float _hx_tmp4 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXDLIN(  85)		return ::lime::math::_Matrix3::Matrix3_Impl__obj::_new(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4, ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix3_Impl__obj,clone,return )

void Matrix3_Impl__obj::concat( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView m){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_95_concat)
HXLINE(  96)		Float a1 =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN(  96)		Float a11 = (a1 *  ::__hxcpp_memory_get_float(m->buffer->b,m->byteOffset));
HXDLIN(  96)		Float a12 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXDLIN(  96)		Float a13 = (a11 + (a12 *  ::__hxcpp_memory_get_float(m->buffer->b,(m->byteOffset + 12))));
HXLINE(  97)		{
HXLINE(  97)			Float value =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN(  97)			Float value1 = (value *  ::__hxcpp_memory_get_float(m->buffer->b,(m->byteOffset + 4)));
HXDLIN(  97)			Float value2 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXDLIN(  97)			Float value3 = (value1 + (value2 *  ::__hxcpp_memory_get_float(m->buffer->b,(m->byteOffset + 16))));
HXDLIN(  97)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),value3);
            		}
HXLINE(  98)		 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,a13);
HXLINE( 100)		Float c1 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXDLIN( 100)		Float c11 = (c1 *  ::__hxcpp_memory_get_float(m->buffer->b,m->byteOffset));
HXDLIN( 100)		Float c12 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN( 100)		Float c13 = (c11 + (c12 *  ::__hxcpp_memory_get_float(m->buffer->b,(m->byteOffset + 12))));
HXLINE( 101)		{
HXLINE( 101)			Float value4 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXDLIN( 101)			Float value5 = (value4 *  ::__hxcpp_memory_get_float(m->buffer->b,(m->byteOffset + 4)));
HXDLIN( 101)			Float value6 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN( 101)			Float value7 = (value5 + (value6 *  ::__hxcpp_memory_get_float(m->buffer->b,(m->byteOffset + 16))));
HXDLIN( 101)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),value7);
            		}
HXLINE( 102)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),c13);
HXLINE( 104)		Float tx1 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXDLIN( 104)		Float tx11 = (tx1 *  ::__hxcpp_memory_get_float(m->buffer->b,m->byteOffset));
HXDLIN( 104)		Float tx12 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28));
HXDLIN( 104)		Float tx13 = (tx11 + (tx12 *  ::__hxcpp_memory_get_float(m->buffer->b,(m->byteOffset + 12))));
HXDLIN( 104)		Float tx14 = (tx13 +  ::__hxcpp_memory_get_float(m->buffer->b,(m->byteOffset + 24)));
HXLINE( 105)		{
HXLINE( 105)			Float value8 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXDLIN( 105)			Float value9 = (value8 *  ::__hxcpp_memory_get_float(m->buffer->b,(m->byteOffset + 4)));
HXDLIN( 105)			Float value10 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28));
HXDLIN( 105)			Float value11 = (value9 + (value10 *  ::__hxcpp_memory_get_float(m->buffer->b,(m->byteOffset + 16))));
HXDLIN( 105)			Float value12 = (value11 +  ::__hxcpp_memory_get_float(m->buffer->b,(m->byteOffset + 28)));
HXDLIN( 105)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),value12);
            		}
HXLINE( 106)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),tx14);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3_Impl__obj,concat,(void))

void Matrix3_Impl__obj::copyColumnFrom( ::lime::utils::ArrayBufferView this1,int column, ::lime::math::Vector4 vector4){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_118_copyColumnFrom)
HXDLIN( 118)		if ((column > 2)) {
HXLINE( 120)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Column ",6a,d4,aa,c0) + column) + HX_(" out of bounds (2)",eb,c3,f0,de))));
            		}
            		else {
HXLINE( 122)			if ((column == 0)) {
HXLINE( 124)				{
HXLINE( 124)					Float value = vector4->x;
HXDLIN( 124)					 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value);
            				}
HXLINE( 125)				{
HXLINE( 125)					Float value1 = vector4->y;
HXDLIN( 125)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),value1);
            				}
            			}
            			else {
HXLINE( 127)				if ((column == 1)) {
HXLINE( 129)					{
HXLINE( 129)						Float value = vector4->x;
HXDLIN( 129)						 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),value);
            					}
HXLINE( 130)					{
HXLINE( 130)						Float value1 = vector4->y;
HXDLIN( 130)						 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),value1);
            					}
            				}
            				else {
HXLINE( 134)					{
HXLINE( 134)						Float value = vector4->x;
HXDLIN( 134)						 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),value);
            					}
HXLINE( 135)					{
HXLINE( 135)						Float value1 = vector4->y;
HXDLIN( 135)						 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),value1);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3_Impl__obj,copyColumnFrom,(void))

void Matrix3_Impl__obj::copyColumnTo( ::lime::utils::ArrayBufferView this1,int column, ::lime::math::Vector4 vector4){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_147_copyColumnTo)
HXDLIN( 147)		if ((column > 2)) {
HXLINE( 149)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Column ",6a,d4,aa,c0) + column) + HX_(" out of bounds (2)",eb,c3,f0,de))));
            		}
            		else {
HXLINE( 151)			if ((column == 0)) {
HXLINE( 153)				vector4->x =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXLINE( 154)				vector4->y =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXLINE( 155)				vector4->z = ( (Float)(0) );
            			}
            			else {
HXLINE( 157)				if ((column == 1)) {
HXLINE( 159)					vector4->x =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXLINE( 160)					vector4->y =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXLINE( 161)					vector4->z = ( (Float)(0) );
            				}
            				else {
HXLINE( 165)					vector4->x =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXLINE( 166)					vector4->y =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28));
HXLINE( 167)					vector4->z = ( (Float)(1) );
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3_Impl__obj,copyColumnTo,(void))

void Matrix3_Impl__obj::copyFrom( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView sourceMatrix3){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_177_copyFrom)
HXLINE( 178)		{
HXLINE( 178)			Float value =  ::__hxcpp_memory_get_float(sourceMatrix3->buffer->b,sourceMatrix3->byteOffset);
HXDLIN( 178)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value);
            		}
HXLINE( 179)		{
HXLINE( 179)			Float value1 =  ::__hxcpp_memory_get_float(sourceMatrix3->buffer->b,(sourceMatrix3->byteOffset + 4));
HXDLIN( 179)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),value1);
            		}
HXLINE( 180)		{
HXLINE( 180)			Float value2 =  ::__hxcpp_memory_get_float(sourceMatrix3->buffer->b,(sourceMatrix3->byteOffset + 12));
HXDLIN( 180)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),value2);
            		}
HXLINE( 181)		{
HXLINE( 181)			Float value3 =  ::__hxcpp_memory_get_float(sourceMatrix3->buffer->b,(sourceMatrix3->byteOffset + 16));
HXDLIN( 181)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),value3);
            		}
HXLINE( 182)		{
HXLINE( 182)			Float value4 =  ::__hxcpp_memory_get_float(sourceMatrix3->buffer->b,(sourceMatrix3->byteOffset + 24));
HXDLIN( 182)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),value4);
            		}
HXLINE( 183)		{
HXLINE( 183)			Float value5 =  ::__hxcpp_memory_get_float(sourceMatrix3->buffer->b,(sourceMatrix3->byteOffset + 28));
HXDLIN( 183)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),value5);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3_Impl__obj,copyFrom,(void))

void Matrix3_Impl__obj::copyRowFrom( ::lime::utils::ArrayBufferView this1,int row, ::lime::math::Vector4 vector4){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_194_copyRowFrom)
HXDLIN( 194)		if ((row > 2)) {
HXLINE( 196)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Row ",e6,20,88,36) + row) + HX_(" out of bounds (2)",eb,c3,f0,de))));
            		}
            		else {
HXLINE( 198)			if ((row == 0)) {
HXLINE( 200)				{
HXLINE( 200)					Float value = vector4->x;
HXDLIN( 200)					 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value);
            				}
HXLINE( 201)				{
HXLINE( 201)					Float value1 = vector4->y;
HXDLIN( 201)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),value1);
            				}
HXLINE( 202)				{
HXLINE( 202)					Float value2 = vector4->z;
HXDLIN( 202)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),value2);
            				}
            			}
            			else {
HXLINE( 204)				if ((row == 1)) {
HXLINE( 206)					{
HXLINE( 206)						Float value = vector4->x;
HXDLIN( 206)						 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),value);
            					}
HXLINE( 207)					{
HXLINE( 207)						Float value1 = vector4->y;
HXDLIN( 207)						 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),value1);
            					}
HXLINE( 208)					{
HXLINE( 208)						Float value2 = vector4->z;
HXDLIN( 208)						 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),value2);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3_Impl__obj,copyRowFrom,(void))

void Matrix3_Impl__obj::copyRowTo( ::lime::utils::ArrayBufferView this1,int row, ::lime::math::Vector4 vector4){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_220_copyRowTo)
HXDLIN( 220)		if ((row > 2)) {
HXLINE( 222)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Row ",e6,20,88,36) + row) + HX_(" out of bounds (2)",eb,c3,f0,de))));
            		}
            		else {
HXLINE( 224)			if ((row == 0)) {
HXLINE( 226)				vector4->x =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXLINE( 227)				vector4->y =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXLINE( 228)				vector4->z =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
            			}
            			else {
HXLINE( 230)				if ((row == 1)) {
HXLINE( 232)					vector4->x =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXLINE( 233)					vector4->y =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXLINE( 234)					vector4->z =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28));
            				}
            				else {
HXLINE( 238)					vector4->x = ( (Float)(0) );
HXDLIN( 238)					vector4->y = ( (Float)(0) );
HXDLIN( 238)					vector4->z = ( (Float)(1) );
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3_Impl__obj,copyRowTo,(void))

void Matrix3_Impl__obj::createBox( ::lime::utils::ArrayBufferView this1,Float scaleX,Float scaleY,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_xTranslate,::hx::Null< Float >  __o_yTranslate){
            		Float rotation = __o_rotation.Default(0);
            		Float xTranslate = __o_xTranslate.Default(0);
            		Float yTranslate = __o_yTranslate.Default(0);
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_254_createBox)
HXLINE( 255)		if ((rotation != 0)) {
HXLINE( 257)			Float cos = ::Math_obj::cos(rotation);
HXLINE( 258)			Float sin = ::Math_obj::sin(rotation);
HXLINE( 260)			{
HXLINE( 260)				Float value = (cos * scaleX);
HXDLIN( 260)				 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value);
            			}
HXLINE( 261)			{
HXLINE( 261)				Float value1 = (sin * scaleY);
HXDLIN( 261)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),value1);
            			}
HXLINE( 262)			{
HXLINE( 262)				Float value2 = (-(sin) * scaleX);
HXDLIN( 262)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),value2);
            			}
HXLINE( 263)			{
HXLINE( 263)				Float value3 = (cos * scaleY);
HXDLIN( 263)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),value3);
            			}
            		}
            		else {
HXLINE( 267)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,scaleX);
HXLINE( 268)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),0);
HXLINE( 269)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),0);
HXLINE( 270)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),scaleY);
            		}
HXLINE( 273)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),xTranslate);
HXLINE( 274)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),yTranslate);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3_Impl__obj,createBox,(void))

void Matrix3_Impl__obj::createGradientBox( ::lime::utils::ArrayBufferView this1,Float width,Float height,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_xTranslate,::hx::Null< Float >  __o_yTranslate){
            		Float rotation = __o_rotation.Default(0);
            		Float xTranslate = __o_xTranslate.Default(0);
            		Float yTranslate = __o_yTranslate.Default(0);
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_287_createGradientBox)
HXLINE( 288)		{
HXLINE( 288)			Float value = (width / ((Float)1638.4));
HXDLIN( 288)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value);
            		}
HXLINE( 289)		{
HXLINE( 289)			Float value1 = (height / ((Float)1638.4));
HXDLIN( 289)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),value1);
            		}
HXLINE( 292)		if ((rotation != 0)) {
HXLINE( 294)			Float cos = ::Math_obj::cos(rotation);
HXLINE( 295)			Float sin = ::Math_obj::sin(rotation);
HXLINE( 297)			{
HXLINE( 297)				Float value = (sin *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16)));
HXDLIN( 297)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),value);
            			}
HXLINE( 298)			{
HXLINE( 298)				Float value1 = (-(sin) *  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset));
HXDLIN( 298)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),value1);
            			}
HXLINE( 299)			{
HXLINE( 299)				Float value2 = ( ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset) * cos);
HXDLIN( 299)				 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value2);
            			}
HXLINE( 300)			{
HXLINE( 300)				Float value3 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16)) * cos);
HXDLIN( 300)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),value3);
            			}
            		}
            		else {
HXLINE( 304)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),0);
HXLINE( 305)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),0);
            		}
HXLINE( 308)		{
HXLINE( 308)			Float value2 = (xTranslate + (width / ( (Float)(2) )));
HXDLIN( 308)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),value2);
            		}
HXLINE( 309)		{
HXLINE( 309)			Float value3 = (yTranslate + (height / ( (Float)(2) )));
HXDLIN( 309)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),value3);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3_Impl__obj,createGradientBox,(void))

bool Matrix3_Impl__obj::equals( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView matrix3){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_318_equals)
HXDLIN( 318)		bool _hx_tmp;
HXDLIN( 318)		bool _hx_tmp1;
HXDLIN( 318)		bool _hx_tmp2;
HXDLIN( 318)		bool _hx_tmp3;
HXDLIN( 318)		bool _hx_tmp4;
HXDLIN( 318)		if (::hx::IsNotNull( matrix3 )) {
HXDLIN( 318)			Float _hx_tmp =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXDLIN( 318)			_hx_tmp4 = (_hx_tmp ==  ::__hxcpp_memory_get_float(matrix3->buffer->b,(matrix3->byteOffset + 24)));
            		}
            		else {
HXDLIN( 318)			_hx_tmp4 = false;
            		}
HXDLIN( 318)		if (_hx_tmp4) {
HXDLIN( 318)			Float _hx_tmp =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28));
HXDLIN( 318)			_hx_tmp3 = (_hx_tmp ==  ::__hxcpp_memory_get_float(matrix3->buffer->b,(matrix3->byteOffset + 28)));
            		}
            		else {
HXDLIN( 318)			_hx_tmp3 = false;
            		}
HXDLIN( 318)		if (_hx_tmp3) {
HXDLIN( 318)			Float _hx_tmp =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN( 318)			_hx_tmp2 = (_hx_tmp ==  ::__hxcpp_memory_get_float(matrix3->buffer->b,matrix3->byteOffset));
            		}
            		else {
HXDLIN( 318)			_hx_tmp2 = false;
            		}
HXDLIN( 318)		if (_hx_tmp2) {
HXDLIN( 318)			Float _hx_tmp =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXDLIN( 318)			_hx_tmp1 = (_hx_tmp ==  ::__hxcpp_memory_get_float(matrix3->buffer->b,(matrix3->byteOffset + 4)));
            		}
            		else {
HXDLIN( 318)			_hx_tmp1 = false;
            		}
HXDLIN( 318)		if (_hx_tmp1) {
HXDLIN( 318)			Float _hx_tmp1 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXDLIN( 318)			_hx_tmp = (_hx_tmp1 ==  ::__hxcpp_memory_get_float(matrix3->buffer->b,(matrix3->byteOffset + 12)));
            		}
            		else {
HXDLIN( 318)			_hx_tmp = false;
            		}
HXDLIN( 318)		if (_hx_tmp) {
HXDLIN( 318)			Float _hx_tmp =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN( 318)			return (_hx_tmp ==  ::__hxcpp_memory_get_float(matrix3->buffer->b,(matrix3->byteOffset + 16)));
            		}
            		else {
HXDLIN( 318)			return false;
            		}
HXDLIN( 318)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3_Impl__obj,equals,return )

 ::lime::math::Vector2 Matrix3_Impl__obj::deltaTransformVector( ::lime::utils::ArrayBufferView this1, ::lime::math::Vector2 Vector2, ::lime::math::Vector2 result){
            	HX_GC_STACKFRAME(&_hx_pos_e74edee44ca73620_328_deltaTransformVector)
HXLINE( 329)		if (::hx::IsNull( result )) {
HXLINE( 329)			result =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 330)		Float Vector21 = Vector2->x;
HXDLIN( 330)		Float _hx_tmp = (Vector21 *  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset));
HXDLIN( 330)		Float Vector22 = Vector2->y;
HXDLIN( 330)		result->x = (_hx_tmp + (Vector22 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12))));
HXLINE( 331)		Float Vector23 = Vector2->x;
HXDLIN( 331)		Float _hx_tmp1 = (Vector23 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4)));
HXDLIN( 331)		Float Vector24 = Vector2->y;
HXDLIN( 331)		result->y = (_hx_tmp1 + (Vector24 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16))));
HXLINE( 332)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3_Impl__obj,deltaTransformVector,return )

 ::lime::utils::ArrayBufferView Matrix3_Impl__obj::fromCairoMatrix3( ::lime::math::CairoMatrix3 matrix){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_337_fromCairoMatrix3)
HXDLIN( 337)		return ::lime::math::_Matrix3::Matrix3_Impl__obj::_new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix3_Impl__obj,fromCairoMatrix3,return )

 ::lime::utils::ArrayBufferView Matrix3_Impl__obj::fromFloat32Array( ::lime::utils::ArrayBufferView array){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_341_fromFloat32Array)
HXLINE( 342)		if ((array->length != 9)) {
HXLINE( 344)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Expected array of length 9, got ",a1,ac,76,16) + array->length)));
            		}
HXLINE( 347)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix3_Impl__obj,fromFloat32Array,return )

void Matrix3_Impl__obj::identity( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_354_identity)
HXLINE( 355)		 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,1);
HXLINE( 356)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),0);
HXLINE( 357)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),0);
HXLINE( 358)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),1);
HXLINE( 359)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),0);
HXLINE( 360)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix3_Impl__obj,identity,(void))

 ::lime::utils::ArrayBufferView Matrix3_Impl__obj::invert( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_368_invert)
HXLINE( 369)		Float norm =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN( 369)		Float norm1 = (norm *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16)));
HXDLIN( 369)		Float norm2 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXDLIN( 369)		Float norm3 = (norm1 - (norm2 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12))));
HXLINE( 371)		if ((norm3 == 0)) {
HXLINE( 373)			{
HXLINE( 373)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),0);
HXDLIN( 373)				Float value = ( (Float)(0) );
HXDLIN( 373)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),value);
HXDLIN( 373)				Float value1 = value;
HXDLIN( 373)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),value1);
HXDLIN( 373)				Float value2 = value1;
HXDLIN( 373)				 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value2);
            			}
HXLINE( 374)			{
HXLINE( 374)				Float value3 = -( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24)));
HXDLIN( 374)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),value3);
            			}
HXLINE( 375)			{
HXLINE( 375)				Float value4 = -( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28)));
HXDLIN( 375)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),value4);
            			}
            		}
            		else {
HXLINE( 379)			norm3 = (((Float)1.0) / norm3);
HXLINE( 380)			Float a1 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16)) * norm3);
HXLINE( 381)			{
HXLINE( 381)				Float value = ( ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset) * norm3);
HXDLIN( 381)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),value);
            			}
HXLINE( 382)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,a1);
HXLINE( 383)			{
HXLINE( 383)				Float value1 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4)) * -(norm3));
HXDLIN( 383)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),value1);
            			}
HXLINE( 384)			{
HXLINE( 384)				Float value2 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12)) * -(norm3));
HXDLIN( 384)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),value2);
            			}
HXLINE( 386)			Float tx1 = -( ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset));
HXDLIN( 386)			Float tx11 = (tx1 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24)));
HXDLIN( 386)			Float tx12 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXDLIN( 386)			Float tx13 = (tx11 - (tx12 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28))));
HXLINE( 387)			{
HXLINE( 387)				Float value3 = -( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4)));
HXDLIN( 387)				Float value4 = (value3 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24)));
HXDLIN( 387)				Float value5 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN( 387)				Float value6 = (value4 - (value5 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28))));
HXDLIN( 387)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),value6);
            			}
HXLINE( 388)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),tx13);
            		}
HXLINE( 391)		if ((this1->length != 9)) {
HXLINE( 391)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Expected array of length 9, got ",a1,ac,76,16) + this1->length)));
            		}
HXDLIN( 391)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix3_Impl__obj,invert,return )

void Matrix3_Impl__obj::rotate( ::lime::utils::ArrayBufferView this1,Float theta){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_399_rotate)
HXLINE( 414)		Float cos = ::Math_obj::cos(theta);
HXLINE( 415)		Float sin = ::Math_obj::sin(theta);
HXLINE( 417)		Float a1 = ( ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset) * cos);
HXDLIN( 417)		Float a11 = (a1 - ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4)) * sin));
HXLINE( 418)		{
HXLINE( 418)			Float value = ( ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset) * sin);
HXDLIN( 418)			Float value1 = (value + ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4)) * cos));
HXDLIN( 418)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),value1);
            		}
HXLINE( 419)		 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,a11);
HXLINE( 421)		Float c1 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12)) * cos);
HXDLIN( 421)		Float c11 = (c1 - ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16)) * sin));
HXLINE( 422)		{
HXLINE( 422)			Float value2 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12)) * sin);
HXDLIN( 422)			Float value3 = (value2 + ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16)) * cos));
HXDLIN( 422)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),value3);
            		}
HXLINE( 423)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),c11);
HXLINE( 425)		Float tx1 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24)) * cos);
HXDLIN( 425)		Float tx11 = (tx1 - ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28)) * sin));
HXLINE( 426)		{
HXLINE( 426)			Float value4 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24)) * sin);
HXDLIN( 426)			Float value5 = (value4 + ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28)) * cos));
HXDLIN( 426)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),value5);
            		}
HXLINE( 427)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),tx11);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3_Impl__obj,rotate,(void))

void Matrix3_Impl__obj::scale( ::lime::utils::ArrayBufferView this1,Float sx,Float sy){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_436_scale)
HXLINE( 446)		{
HXLINE( 446)			Float value = ( ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset) * sx);
HXDLIN( 446)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value);
            		}
HXLINE( 447)		{
HXLINE( 447)			Float value1 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4)) * sy);
HXDLIN( 447)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),value1);
            		}
HXLINE( 448)		{
HXLINE( 448)			Float value2 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12)) * sx);
HXDLIN( 448)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),value2);
            		}
HXLINE( 449)		{
HXLINE( 449)			Float value3 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16)) * sy);
HXDLIN( 449)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),value3);
            		}
HXLINE( 450)		{
HXLINE( 450)			Float value4 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24)) * sx);
HXDLIN( 450)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),value4);
            		}
HXLINE( 451)		{
HXLINE( 451)			Float value5 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28)) * sy);
HXDLIN( 451)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),value5);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3_Impl__obj,scale,(void))

void Matrix3_Impl__obj::setRotation( ::lime::utils::ArrayBufferView this1,Float theta,::hx::Null< Float >  __o_scale){
            		Float scale = __o_scale.Default(1);
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_455_setRotation)
HXLINE( 456)		{
HXLINE( 456)			Float value = (::Math_obj::cos(theta) * scale);
HXDLIN( 456)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value);
            		}
HXLINE( 457)		{
HXLINE( 457)			Float value1 = (::Math_obj::sin(theta) * scale);
HXDLIN( 457)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),value1);
            		}
HXLINE( 458)		{
HXLINE( 458)			Float value2 = -( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12)));
HXDLIN( 458)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),value2);
            		}
HXLINE( 459)		{
HXLINE( 459)			Float value3 =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN( 459)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),value3);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3_Impl__obj,setRotation,(void))

void Matrix3_Impl__obj::setTo( ::lime::utils::ArrayBufferView this1,Float a,Float b,Float c,Float d,Float tx,Float ty){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_472_setTo)
HXLINE( 473)		 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,a);
HXLINE( 474)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),b);
HXLINE( 475)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),c);
HXLINE( 476)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),d);
HXLINE( 477)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),tx);
HXLINE( 478)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),ty);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Matrix3_Impl__obj,setTo,(void))

 ::lime::math::CairoMatrix3 Matrix3_Impl__obj::toCairoMatrix3( ::lime::utils::ArrayBufferView this1){
            	HX_GC_STACKFRAME(&_hx_pos_e74edee44ca73620_483_toCairoMatrix3)
HXDLIN( 483)		Float _hx_tmp =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN( 483)		Float _hx_tmp1 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXDLIN( 483)		Float _hx_tmp2 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXDLIN( 483)		Float _hx_tmp3 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN( 483)		Float _hx_tmp4 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXDLIN( 483)		return  ::lime::math::CairoMatrix3_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4, ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix3_Impl__obj,toCairoMatrix3,return )

::String Matrix3_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_488_toString)
HXDLIN( 488)		::String _hx_tmp = ((HX_("matrix(",c7,42,67,93) +  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset)) + HX_(", ",74,26,00,00));
HXDLIN( 488)		::String _hx_tmp1 = ((_hx_tmp +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4))) + HX_(", ",74,26,00,00));
HXDLIN( 488)		::String _hx_tmp2 = ((_hx_tmp1 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12))) + HX_(", ",74,26,00,00));
HXDLIN( 488)		::String _hx_tmp3 = ((_hx_tmp2 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16))) + HX_(", ",74,26,00,00));
HXDLIN( 488)		::String _hx_tmp4 = ((_hx_tmp3 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24))) + HX_(", ",74,26,00,00));
HXDLIN( 488)		return ((_hx_tmp4 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28))) + HX_(")",29,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix3_Impl__obj,toString,return )

 ::lime::math::Rectangle Matrix3_Impl__obj::transformRect( ::lime::utils::ArrayBufferView this1, ::lime::math::Rectangle rect, ::lime::math::Rectangle result){
            	HX_GC_STACKFRAME(&_hx_pos_e74edee44ca73620_500_transformRect)
HXLINE( 501)		if (::hx::IsNull( result )) {
HXLINE( 501)			result =  ::lime::math::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 503)		Float tx0 =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN( 503)		Float tx01 = (tx0 * rect->x);
HXDLIN( 503)		Float tx02 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXDLIN( 503)		Float tx03 = (tx01 + (tx02 * rect->y));
HXLINE( 504)		Float tx1 = tx03;
HXLINE( 505)		Float ty0 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXDLIN( 505)		Float ty01 = (ty0 * rect->x);
HXDLIN( 505)		Float ty02 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN( 505)		Float ty03 = (ty01 + (ty02 * rect->y));
HXLINE( 506)		Float ty1 = ty03;
HXLINE( 508)		Float tx =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN( 508)		Float tx2 = (tx * (rect->x + rect->width));
HXDLIN( 508)		Float tx3 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXDLIN( 508)		Float tx4 = (tx2 + (tx3 * rect->y));
HXLINE( 509)		Float ty =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXDLIN( 509)		Float ty2 = (ty * (rect->x + rect->width));
HXDLIN( 509)		Float ty3 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN( 509)		Float ty4 = (ty2 + (ty3 * rect->y));
HXLINE( 511)		if ((tx4 < tx03)) {
HXLINE( 511)			tx03 = tx4;
            		}
HXLINE( 512)		if ((ty4 < ty03)) {
HXLINE( 512)			ty03 = ty4;
            		}
HXLINE( 513)		if ((tx4 > tx1)) {
HXLINE( 513)			tx1 = tx4;
            		}
HXLINE( 514)		if ((ty4 > ty1)) {
HXLINE( 514)			ty1 = ty4;
            		}
HXLINE( 516)		Float tx5 =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN( 516)		Float tx6 = (tx5 * (rect->x + rect->width));
HXDLIN( 516)		Float tx7 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXDLIN( 516)		tx4 = (tx6 + (tx7 * (rect->y + rect->height)));
HXLINE( 517)		Float ty5 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXDLIN( 517)		Float ty6 = (ty5 * (rect->x + rect->width));
HXDLIN( 517)		Float ty7 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN( 517)		ty4 = (ty6 + (ty7 * (rect->y + rect->height)));
HXLINE( 519)		if ((tx4 < tx03)) {
HXLINE( 519)			tx03 = tx4;
            		}
HXLINE( 520)		if ((ty4 < ty03)) {
HXLINE( 520)			ty03 = ty4;
            		}
HXLINE( 521)		if ((tx4 > tx1)) {
HXLINE( 521)			tx1 = tx4;
            		}
HXLINE( 522)		if ((ty4 > ty1)) {
HXLINE( 522)			ty1 = ty4;
            		}
HXLINE( 524)		Float tx8 =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN( 524)		Float tx9 = (tx8 * rect->x);
HXDLIN( 524)		Float tx10 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXDLIN( 524)		tx4 = (tx9 + (tx10 * (rect->y + rect->height)));
HXLINE( 525)		Float ty8 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXDLIN( 525)		Float ty9 = (ty8 * rect->x);
HXDLIN( 525)		Float ty10 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN( 525)		ty4 = (ty9 + (ty10 * (rect->y + rect->height)));
HXLINE( 527)		if ((tx4 < tx03)) {
HXLINE( 527)			tx03 = tx4;
            		}
HXLINE( 528)		if ((ty4 < ty03)) {
HXLINE( 528)			ty03 = ty4;
            		}
HXLINE( 529)		if ((tx4 > tx1)) {
HXLINE( 529)			tx1 = tx4;
            		}
HXLINE( 530)		if ((ty4 > ty1)) {
HXLINE( 530)			ty1 = ty4;
            		}
HXLINE( 532)		result->setTo((tx03 + tx4),(ty03 + ty4),(tx1 - tx03),(ty1 - ty03));
HXLINE( 533)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3_Impl__obj,transformRect,return )

 ::lime::math::Vector2 Matrix3_Impl__obj::transformVector( ::lime::utils::ArrayBufferView this1, ::lime::math::Vector2 pos, ::lime::math::Vector2 result){
            	HX_GC_STACKFRAME(&_hx_pos_e74edee44ca73620_542_transformVector)
HXLINE( 543)		if (::hx::IsNull( result )) {
HXLINE( 543)			result =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 544)		Float pos1 = pos->x;
HXDLIN( 544)		Float _hx_tmp = (pos1 *  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset));
HXDLIN( 544)		Float pos2 = pos->y;
HXDLIN( 544)		Float _hx_tmp1 = (_hx_tmp + (pos2 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12))));
HXDLIN( 544)		result->x = (_hx_tmp1 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24)));
HXLINE( 545)		Float pos3 = pos->x;
HXDLIN( 545)		Float _hx_tmp2 = (pos3 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4)));
HXDLIN( 545)		Float pos4 = pos->y;
HXDLIN( 545)		Float _hx_tmp3 = (_hx_tmp2 + (pos4 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16))));
HXDLIN( 545)		result->y = (_hx_tmp3 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28)));
HXLINE( 546)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3_Impl__obj,transformVector,return )

void Matrix3_Impl__obj::translate( ::lime::utils::ArrayBufferView this1,Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_555_translate)
HXLINE( 556)		{
HXLINE( 556)			Float value = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24)) + dx);
HXDLIN( 556)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),value);
            		}
HXLINE( 557)		{
HXLINE( 557)			Float value1 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28)) + dy);
HXDLIN( 557)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),value1);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3_Impl__obj,translate,(void))

Float Matrix3_Impl__obj::get_a( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_562_get_a)
HXDLIN( 562)		return  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix3_Impl__obj,get_a,return )

Float Matrix3_Impl__obj::set_a( ::lime::utils::ArrayBufferView this1,Float value){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_566_set_a)
HXDLIN( 566)		 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value);
HXDLIN( 566)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3_Impl__obj,set_a,return )

Float Matrix3_Impl__obj::get_b( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_571_get_b)
HXDLIN( 571)		return  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix3_Impl__obj,get_b,return )

Float Matrix3_Impl__obj::set_b( ::lime::utils::ArrayBufferView this1,Float value){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_575_set_b)
HXDLIN( 575)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),value);
HXDLIN( 575)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3_Impl__obj,set_b,return )

Float Matrix3_Impl__obj::get_c( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_580_get_c)
HXDLIN( 580)		return  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix3_Impl__obj,get_c,return )

Float Matrix3_Impl__obj::set_c( ::lime::utils::ArrayBufferView this1,Float value){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_584_set_c)
HXDLIN( 584)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),value);
HXDLIN( 584)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3_Impl__obj,set_c,return )

Float Matrix3_Impl__obj::get_d( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_589_get_d)
HXDLIN( 589)		return  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix3_Impl__obj,get_d,return )

Float Matrix3_Impl__obj::set_d( ::lime::utils::ArrayBufferView this1,Float value){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_593_set_d)
HXDLIN( 593)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),value);
HXDLIN( 593)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3_Impl__obj,set_d,return )

Float Matrix3_Impl__obj::get_tx( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_598_get_tx)
HXDLIN( 598)		return  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix3_Impl__obj,get_tx,return )

Float Matrix3_Impl__obj::set_tx( ::lime::utils::ArrayBufferView this1,Float value){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_602_set_tx)
HXDLIN( 602)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),value);
HXDLIN( 602)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3_Impl__obj,set_tx,return )

Float Matrix3_Impl__obj::get_ty( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_607_get_ty)
HXDLIN( 607)		return  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix3_Impl__obj,get_ty,return )

Float Matrix3_Impl__obj::set_ty( ::lime::utils::ArrayBufferView this1,Float value){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_611_set_ty)
HXDLIN( 611)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),value);
HXDLIN( 611)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3_Impl__obj,set_ty,return )

Float Matrix3_Impl__obj::get( ::lime::utils::ArrayBufferView this1,int index){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_616_get)
HXDLIN( 616)		return  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (index * 4)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3_Impl__obj,get,return )

Float Matrix3_Impl__obj::set( ::lime::utils::ArrayBufferView this1,int index,Float value){
            	HX_STACKFRAME(&_hx_pos_e74edee44ca73620_620_set)
HXLINE( 621)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * 4)),value);
HXLINE( 622)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3_Impl__obj,set,return )


Matrix3_Impl__obj::Matrix3_Impl__obj()
{
}

bool Matrix3_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { outValue = clone_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"scale") ) { outValue = scale_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setTo") ) { outValue = setTo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_a") ) { outValue = get_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_a") ) { outValue = set_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_b") ) { outValue = get_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_b") ) { outValue = set_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_c") ) { outValue = get_c_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_c") ) { outValue = set_c_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_d") ) { outValue = get_d_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_d") ) { outValue = set_d_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { outValue = concat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"invert") ) { outValue = invert_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rotate") ) { outValue = rotate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_tx") ) { outValue = get_tx_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_tx") ) { outValue = set_tx_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_ty") ) { outValue = get_ty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_ty") ) { outValue = set_ty_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { outValue = copyFrom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = identity_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { outValue = copyRowTo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createBox") ) { outValue = createBox_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"translate") ) { outValue = translate_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { outValue = copyRowFrom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setRotation") ) { outValue = setRotation_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { outValue = copyColumnTo_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transformRect") ) { outValue = transformRect_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { outValue = copyColumnFrom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toCairoMatrix3") ) { outValue = toCairoMatrix3_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"transformVector") ) { outValue = transformVector_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromCairoMatrix3") ) { outValue = fromCairoMatrix3_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromFloat32Array") ) { outValue = fromFloat32Array_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { outValue = createGradientBox_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { outValue = deltaTransformVector_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Matrix3_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Matrix3_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Matrix3_Impl__obj::__mClass;

static ::String Matrix3_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("clone",5d,13,63,48),
	HX_("concat",14,09,d0,c7),
	HX_("copyColumnFrom",75,97,b5,3a),
	HX_("copyColumnTo",c6,2e,f6,f6),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("copyRowFrom",6f,45,8b,ef),
	HX_("copyRowTo",40,8a,62,73),
	HX_("createBox",6f,94,d8,49),
	HX_("createGradientBox",5f,ec,c0,25),
	HX_("equals",3f,ee,f2,bf),
	HX_("deltaTransformVector",37,02,9c,c2),
	HX_("fromCairoMatrix3",b4,43,5e,d6),
	HX_("fromFloat32Array",e8,5e,81,61),
	HX_("identity",3e,45,2f,b9),
	HX_("invert",16,e7,d8,9f),
	HX_("rotate",5b,46,20,cb),
	HX_("scale",8a,ce,ce,78),
	HX_("setRotation",00,07,e7,38),
	HX_("setTo",bd,91,2f,7a),
	HX_("toCairoMatrix3",45,59,04,7a),
	HX_("toString",ac,d0,6e,38),
	HX_("transformRect",b0,cc,f4,78),
	HX_("transformVector",4f,2b,b3,d2),
	HX_("translate",4e,d7,7f,49),
	HX_("get_a",38,a5,60,91),
	HX_("set_a",44,9b,2f,7a),
	HX_("get_b",39,a5,60,91),
	HX_("set_b",45,9b,2f,7a),
	HX_("get_c",3a,a5,60,91),
	HX_("set_c",46,9b,2f,7a),
	HX_("get_d",3b,a5,60,91),
	HX_("set_d",47,9b,2f,7a),
	HX_("get_tx",cd,fc,2f,a3),
	HX_("set_tx",41,51,78,6f),
	HX_("get_ty",ce,fc,2f,a3),
	HX_("set_ty",42,51,78,6f),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null())
};

void Matrix3_Impl__obj::__register()
{
	Matrix3_Impl__obj _hx_dummy;
	Matrix3_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.math._Matrix3.Matrix3_Impl_",64,e8,68,0d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix3_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Matrix3_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Matrix3_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Matrix3_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Matrix3_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace math
} // end namespace _Matrix3
