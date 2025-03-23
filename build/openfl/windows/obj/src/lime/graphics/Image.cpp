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
#ifndef INCLUDED_lime__internal_format_BMP
#include <lime/_internal/format/BMP.h>
#endif
#ifndef INCLUDED_lime__internal_format_BMPType
#include <lime/_internal/format/BMPType.h>
#endif
#ifndef INCLUDED_lime__internal_format_Base64
#include <lime/_internal/format/Base64.h>
#endif
#ifndef INCLUDED_lime__internal_format_JPEG
#include <lime/_internal/format/JPEG.h>
#endif
#ifndef INCLUDED_lime__internal_format_PNG
#include <lime/_internal/format/PNG.h>
#endif
#ifndef INCLUDED_lime__internal_graphics_ImageCanvasUtil
#include <lime/_internal/graphics/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime__internal_graphics_ImageDataUtil
#include <lime/_internal/graphics/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageFileFormat
#include <lime/graphics/ImageFileFormat.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_lime_graphics_Image
#include <lime/net/_HTTPRequest_lime_graphics_Image.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_222_new,"lime.graphics.Image","new",0x344ae603,"lime.graphics.Image.new","lime/graphics/Image.hx",222,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_295_clone,"lime.graphics.Image","clone",0xb88517c0,"lime.graphics.Image.clone","lime/graphics/Image.hx",295,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_324_colorTransform,"lime.graphics.Image","colorTransform",0xaf89aec6,"lime.graphics.Image.colorTransform","lime/graphics/Image.hx",324,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_357_copyChannel,"lime.graphics.Image","copyChannel",0xc3306e31,"lime.graphics.Image.copyChannel","lime/graphics/Image.hx",357,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_416_copyPixels,"lime.graphics.Image","copyPixels",0x19d2897f,"lime.graphics.Image.copyPixels","lime/graphics/Image.hx",416,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_516_encode,"lime.graphics.Image","encode",0xa785c453,"lime.graphics.Image.encode","lime/graphics/Image.hx",516,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_540_fillRect,"lime.graphics.Image","fillRect",0x2421e0c4,"lime.graphics.Image.fillRect","lime/graphics/Image.hx",540,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_585_floodFill,"lime.graphics.Image","floodFill",0x1da9f544,"lime.graphics.Image.floodFill","lime/graphics/Image.hx",585,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_744_getColorBoundsRect,"lime.graphics.Image","getColorBoundsRect",0x21db6743,"lime.graphics.Image.getColorBoundsRect","lime/graphics/Image.hx",744,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_776_getPixel,"lime.graphics.Image","getPixel",0xd9e3718d,"lime.graphics.Image.getPixel","lime/graphics/Image.hx",776,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_818_getPixel32,"lime.graphics.Image","getPixel32",0xaeccdb6c,"lime.graphics.Image.getPixel32","lime/graphics/Image.hx",818,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_859_getPixels,"lime.graphics.Image","getPixels",0xcd1fea46,"lime.graphics.Image.getPixels","lime/graphics/Image.hx",859,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1071_merge,"lime.graphics.Image","merge",0x75e8a71b,"lime.graphics.Image.merge","lime/graphics/Image.hx",1071,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1105_resize,"lime.graphics.Image","resize",0xb61d2c31,"lime.graphics.Image.resize","lime/graphics/Image.hx",1105,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1145_scroll,"lime.graphics.Image","scroll",0xf506aa4a,"lime.graphics.Image.scroll","lime/graphics/Image.hx",1145,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1171_setPixel,"lime.graphics.Image","setPixel",0x8840cb01,"lime.graphics.Image.setPixel","lime/graphics/Image.hx",1171,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1208_setPixel32,"lime.graphics.Image","setPixel32",0xb24a79e0,"lime.graphics.Image.setPixel32","lime/graphics/Image.hx",1208,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1245_setPixels,"lime.graphics.Image","setPixels",0xb070d652,"lime.graphics.Image.setPixels","lime/graphics/Image.hx",1245,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1352_threshold,"lime.graphics.Image","threshold",0xf8c3358e,"lime.graphics.Image.threshold","lime/graphics/Image.hx",1352,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1393___clipRect,"lime.graphics.Image","__clipRect",0xd30737f1,"lime.graphics.Image.__clipRect","lime/graphics/Image.hx",1393,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1453___fromBase64,"lime.graphics.Image","__fromBase64",0x71681bb6,"lime.graphics.Image.__fromBase64","lime/graphics/Image.hx",1453,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1461___fromBytes,"lime.graphics.Image","__fromBytes",0x40972c24,"lime.graphics.Image.__fromBytes","lime/graphics/Image.hx",1461,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1518___fromFile,"lime.graphics.Image","__fromFile",0x1c2444e3,"lime.graphics.Image.__fromFile","lime/graphics/Image.hx",1518,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1632___fromImageBuffer,"lime.graphics.Image","__fromImageBuffer",0xe152fb34,"lime.graphics.Image.__fromImageBuffer","lime/graphics/Image.hx",1632,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1684_get_data,"lime.graphics.Image","get_data",0x7986ad30,"lime.graphics.Image.get_data","lime/graphics/Image.hx",1684,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1700_set_data,"lime.graphics.Image","set_data",0x27e406a4,"lime.graphics.Image.set_data","lime/graphics/Image.hx",1700,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1705_get_format,"lime.graphics.Image","get_format",0xc57a33bd,"lime.graphics.Image.get_format","lime/graphics/Image.hx",1705,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1709_set_format,"lime.graphics.Image","set_format",0xc8f7d231,"lime.graphics.Image.set_format","lime/graphics/Image.hx",1709,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1726_get_powerOfTwo,"lime.graphics.Image","get_powerOfTwo",0x62ee1df6,"lime.graphics.Image.get_powerOfTwo","lime/graphics/Image.hx",1726,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1732_set_powerOfTwo,"lime.graphics.Image","set_powerOfTwo",0x830e066a,"lime.graphics.Image.set_powerOfTwo","lime/graphics/Image.hx",1732,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1783_get_premultiplied,"lime.graphics.Image","get_premultiplied",0xc1478990,"lime.graphics.Image.get_premultiplied","lime/graphics/Image.hx",1783,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1787_set_premultiplied,"lime.graphics.Image","set_premultiplied",0xe4b5619c,"lime.graphics.Image.set_premultiplied","lime/graphics/Image.hx",1787,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1824_get_rect,"lime.graphics.Image","get_rect",0x82caa42a,"lime.graphics.Image.get_rect","lime/graphics/Image.hx",1824,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1836_get_src,"lime.graphics.Image","get_src",0x66c2929e,"lime.graphics.Image.get_src","lime/graphics/Image.hx",1836,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1841_set_src,"lime.graphics.Image","set_src",0x59c423aa,"lime.graphics.Image.set_src","lime/graphics/Image.hx",1841,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1845_get_transparent,"lime.graphics.Image","get_transparent",0xe1ee610c,"lime.graphics.Image.get_transparent","lime/graphics/Image.hx",1845,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1851_set_transparent,"lime.graphics.Image","set_transparent",0xddb9de18,"lime.graphics.Image.set_transparent","lime/graphics/Image.hx",1851,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_621_fromBase64,"lime.graphics.Image","fromBase64",0x6fd03756,"lime.graphics.Image.fromBase64","lime/graphics/Image.hx",621,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_635_fromBitmapData,"lime.graphics.Image","fromBitmapData",0x2e36df00,"lime.graphics.Image.fromBitmapData","lime/graphics/Image.hx",635,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_660_fromBytes,"lime.graphics.Image","fromBytes",0x36406484,"lime.graphics.Image.fromBytes","lime/graphics/Image.hx",660,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_680_fromCanvas,"lime.graphics.Image","fromCanvas",0xd2ea8e9f,"lime.graphics.Image.fromCanvas","lime/graphics/Image.hx",680,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_703_fromFile,"lime.graphics.Image","fromFile",0x58f03883,"lime.graphics.Image.fromFile","lime/graphics/Image.hx",703,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_723_fromImageElement,"lime.graphics.Image","fromImageElement",0x196571a8,"lime.graphics.Image.fromImageElement","lime/graphics/Image.hx",723,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_926_loadFromBase64,"lime.graphics.Image","loadFromBase64",0x3166e39c,"lime.graphics.Image.loadFromBase64","lime/graphics/Image.hx",926,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1005_loadFromBytes,"lime.graphics.Image","loadFromBytes",0xafa862fe,"lime.graphics.Image.loadFromBytes","lime/graphics/Image.hx",1005,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_949_loadFromBytes,"lime.graphics.Image","loadFromBytes",0xafa862fe,"lime.graphics.Image.loadFromBytes","lime/graphics/Image.hx",949,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1047_loadFromFile,"lime.graphics.Image","loadFromFile",0xfb592749,"lime.graphics.Image.loadFromFile","lime/graphics/Image.hx",1047,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1015_loadFromFile,"lime.graphics.Image","loadFromFile",0xfb592749,"lime.graphics.Image.loadFromFile","lime/graphics/Image.hx",1015,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1650___isGIF,"lime.graphics.Image","__isGIF",0x6ba10e3d,"lime.graphics.Image.__isGIF","lime/graphics/Image.hx",1650,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1658___isJPG,"lime.graphics.Image","__isJPG",0x6ba35b1a,"lime.graphics.Image.__isJPG","lime/graphics/Image.hx",1658,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1668___isPNG,"lime.graphics.Image","__isPNG",0x6ba7e6e2,"lime.graphics.Image.__isPNG","lime/graphics/Image.hx",1668,0xc7b862ad)
HX_LOCAL_STACK_FRAME(_hx_pos_ef8f6e7e24e3b831_1676___isWebP,"lime.graphics.Image","__isWebP",0xcbf428e3,"lime.graphics.Image.__isWebP","lime/graphics/Image.hx",1676,0xc7b862ad)
namespace lime{
namespace graphics{

void Image_obj::__construct( ::lime::graphics::ImageBuffer buffer,::hx::Null< int >  __o_offsetX,::hx::Null< int >  __o_offsetY,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic color, ::lime::graphics::ImageType type){
            		int offsetX = __o_offsetX.Default(0);
            		int offsetY = __o_offsetY.Default(0);
            		int width = __o_width.Default(-1);
            		int height = __o_height.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_222_new)
HXLINE( 223)		this->offsetX = offsetX;
HXLINE( 224)		this->offsetY = offsetY;
HXLINE( 225)		this->width = width;
HXLINE( 226)		this->height = height;
HXLINE( 228)		this->version = 0;
HXLINE( 230)		if (::hx::IsNull( type )) {
HXLINE( 244)			type = ::lime::graphics::ImageType_obj::DATA_dyn();
            		}
HXLINE( 248)		this->type = type;
HXLINE( 250)		if (::hx::IsNull( buffer )) {
HXLINE( 252)			bool _hx_tmp;
HXDLIN( 252)			if ((width > 0)) {
HXLINE( 252)				_hx_tmp = (height > 0);
            			}
            			else {
HXLINE( 252)				_hx_tmp = false;
            			}
HXDLIN( 252)			if (_hx_tmp) {
HXLINE( 254)				switch((int)(this->type->_hx_getIndex())){
            					case (int)0: {
HXLINE( 257)						this->buffer =  ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,null(),width,height,null(),null());
HXLINE( 258)						::lime::_internal::graphics::ImageCanvasUtil_obj::createCanvas(::hx::ObjectPtr<OBJ_>(this),width,height);
HXLINE( 260)						bool _hx_tmp;
HXDLIN( 260)						if (::hx::IsNotNull( color )) {
HXLINE( 260)							_hx_tmp = ::hx::IsNotEq( color,0 );
            						}
            						else {
HXLINE( 260)							_hx_tmp = false;
            						}
HXDLIN( 260)						if (_hx_tmp) {
HXLINE( 262)							this->fillRect( ::lime::math::Rectangle_obj::__alloc( HX_CTX ,0,0,width,height),( (int)(color) ),null());
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 266)						 ::Dynamic elements = ((width * height) * 4);
HXDLIN( 266)						 ::haxe::io::Bytes buffer = null();
HXDLIN( 266)						::cpp::VirtualArray array = null();
HXDLIN( 266)						 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 266)						 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 266)						 ::Dynamic len = null();
HXDLIN( 266)						 ::lime::utils::ArrayBufferView this1;
HXDLIN( 266)						if (::hx::IsNotNull( elements )) {
HXLINE( 266)							this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            						}
            						else {
HXLINE( 266)							if (::hx::IsNotNull( array )) {
HXLINE( 266)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 266)								_this->byteOffset = 0;
HXDLIN( 266)								_this->length = array->get_length();
HXDLIN( 266)								_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 266)								 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 266)								_this->buffer = this2;
HXDLIN( 266)								_this->copyFromArray(array,null());
HXDLIN( 266)								this1 = _this;
            							}
            							else {
HXLINE( 266)								if (::hx::IsNotNull( vector )) {
HXLINE( 266)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 266)									::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 266)									_this->byteOffset = 0;
HXDLIN( 266)									_this->length = array->get_length();
HXDLIN( 266)									_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 266)									 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 266)									_this->buffer = this2;
HXDLIN( 266)									_this->copyFromArray(array,null());
HXDLIN( 266)									this1 = _this;
            								}
            								else {
HXLINE( 266)									if (::hx::IsNotNull( view )) {
HXLINE( 266)										 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 266)										 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 266)										int srcLength = view->length;
HXDLIN( 266)										int srcByteOffset = view->byteOffset;
HXDLIN( 266)										int srcElementSize = view->bytesPerElement;
HXDLIN( 266)										int elementSize = _this->bytesPerElement;
HXDLIN( 266)										if ((view->type == _this->type)) {
HXLINE( 266)											int srcLength = srcData->length;
HXDLIN( 266)											int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 266)											 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 266)											_this->buffer = this1;
HXDLIN( 266)											_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            										}
            										else {
HXLINE( 266)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            										}
HXDLIN( 266)										_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 266)										_this->byteOffset = 0;
HXDLIN( 266)										_this->length = srcLength;
HXDLIN( 266)										this1 = _this;
            									}
            									else {
HXLINE( 266)										if (::hx::IsNotNull( buffer )) {
HXLINE( 266)											 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 266)											int in_byteOffset = 0;
HXDLIN( 266)											if ((in_byteOffset < 0)) {
HXLINE( 266)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            											}
HXDLIN( 266)											if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 266)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            											}
HXDLIN( 266)											int bufferByteLength = buffer->length;
HXDLIN( 266)											int elementSize = _this->bytesPerElement;
HXDLIN( 266)											int newByteLength = bufferByteLength;
HXDLIN( 266)											if (::hx::IsNull( len )) {
HXLINE( 266)												newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 266)												if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 266)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            												}
HXDLIN( 266)												if ((newByteLength < 0)) {
HXLINE( 266)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            												}
            											}
            											else {
HXLINE( 266)												newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 266)												int newRange = (in_byteOffset + newByteLength);
HXDLIN( 266)												if ((newRange > bufferByteLength)) {
HXLINE( 266)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            												}
            											}
HXDLIN( 266)											_this->buffer = buffer;
HXDLIN( 266)											_this->byteOffset = in_byteOffset;
HXDLIN( 266)											_this->byteLength = newByteLength;
HXDLIN( 266)											_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 266)											this1 = _this;
            										}
            										else {
HXLINE( 266)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            										}
            									}
            								}
            							}
            						}
HXDLIN( 266)						this->buffer =  ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,this1,width,height,null(),null());
HXLINE( 268)						bool _hx_tmp;
HXDLIN( 268)						if (::hx::IsNotNull( color )) {
HXLINE( 268)							_hx_tmp = ::hx::IsNotEq( color,0 );
            						}
            						else {
HXLINE( 268)							_hx_tmp = false;
            						}
HXDLIN( 268)						if (_hx_tmp) {
HXLINE( 270)							this->fillRect( ::lime::math::Rectangle_obj::__alloc( HX_CTX ,0,0,width,height),( (int)(color) ),null());
            						}
            					}
            					break;
            					case (int)2: {
            					}
            					break;
            					default:{
            					}
            				}
            			}
            		}
            		else {
HXLINE( 285)			this->_hx___fromImageBuffer(buffer);
            		}
            	}

Dynamic Image_obj::__CreateEmpty() { return new Image_obj; }

void *Image_obj::_hx_vtable = 0;

Dynamic Image_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Image_obj > _hx_result = new Image_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool Image_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33f052f7;
}

 ::lime::graphics::Image Image_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_295_clone)
HXDLIN( 295)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 308)			 ::lime::graphics::ImageBuffer image = this->buffer->clone();
HXDLIN( 308)			 ::lime::graphics::Image image1 =  ::lime::graphics::Image_obj::__alloc( HX_CTX ,image,this->offsetX,this->offsetY,this->width,this->height,null(),this->type);
HXLINE( 309)			image1->version = this->version;
HXLINE( 310)			return image1;
            		}
            		else {
HXLINE( 314)			return  ::lime::graphics::Image_obj::__alloc( HX_CTX ,null(),this->offsetX,this->offsetY,this->width,this->height,null(),this->type);
            		}
HXLINE( 295)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,clone,return )

void Image_obj::colorTransform( ::lime::math::Rectangle rect, ::lime::utils::ArrayBufferView colorMatrix){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_324_colorTransform)
HXLINE( 325)		rect = this->_hx___clipRect(rect);
HXLINE( 326)		bool _hx_tmp;
HXDLIN( 326)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 326)			_hx_tmp = ::hx::IsNull( rect );
            		}
            		else {
HXLINE( 326)			_hx_tmp = true;
            		}
HXDLIN( 326)		if (_hx_tmp) {
HXLINE( 326)			return;
            		}
HXLINE( 328)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE( 331)				::lime::_internal::graphics::ImageCanvasUtil_obj::colorTransform(::hx::ObjectPtr<OBJ_>(this),rect,colorMatrix);
            			}
            			break;
            			case (int)1: {
HXLINE( 338)				::lime::_internal::graphics::ImageDataUtil_obj::colorTransform(::hx::ObjectPtr<OBJ_>(this),rect,colorMatrix);
            			}
            			break;
            			case (int)2: {
HXLINE( 341)				rect->offset(( (Float)(this->offsetX) ),( (Float)(this->offsetY) ));
HXLINE( 342)				 ::Dynamic _hx_tmp =  ::Dynamic(this->buffer->_hx___srcBitmapData->__Field(HX_("colorTransform",89,d7,3f,ad),::hx::paccDynamic));
HXDLIN( 342)				 ::Dynamic _hx_tmp1 = rect->_hx___toFlashRectangle();
HXDLIN( 342)				_hx_tmp(_hx_tmp1,::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___toFlashColorTransform(colorMatrix));
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,colorTransform,(void))

void Image_obj::copyChannel( ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::ImageChannel sourceChannel, ::lime::graphics::ImageChannel destChannel){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_357_copyChannel)
HXLINE( 358)		sourceRect = this->_hx___clipRect(sourceRect);
HXLINE( 359)		bool _hx_tmp;
HXDLIN( 359)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 359)			_hx_tmp = ::hx::IsNull( sourceRect );
            		}
            		else {
HXLINE( 359)			_hx_tmp = true;
            		}
HXDLIN( 359)		if (_hx_tmp) {
HXLINE( 359)			return;
            		}
HXLINE( 360)		bool _hx_tmp1;
HXDLIN( 360)		if (::hx::IsPointerEq( destChannel,::lime::graphics::ImageChannel_obj::ALPHA_dyn() )) {
HXLINE( 360)			_hx_tmp1 = !(this->get_transparent());
            		}
            		else {
HXLINE( 360)			_hx_tmp1 = false;
            		}
HXDLIN( 360)		if (_hx_tmp1) {
HXLINE( 360)			return;
            		}
HXLINE( 361)		bool _hx_tmp2;
HXDLIN( 361)		if (!((sourceRect->width <= 0))) {
HXLINE( 361)			_hx_tmp2 = (sourceRect->height <= 0);
            		}
            		else {
HXLINE( 361)			_hx_tmp2 = true;
            		}
HXDLIN( 361)		if (_hx_tmp2) {
HXLINE( 361)			return;
            		}
HXLINE( 362)		if (((sourceRect->x + sourceRect->width) > sourceImage->width)) {
HXLINE( 362)			sourceRect->width = (( (Float)(sourceImage->width) ) - sourceRect->x);
            		}
HXLINE( 363)		if (((sourceRect->y + sourceRect->height) > sourceImage->height)) {
HXLINE( 363)			sourceRect->height = (( (Float)(sourceImage->height) ) - sourceRect->y);
            		}
HXLINE( 365)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE( 368)				::lime::_internal::graphics::ImageCanvasUtil_obj::copyChannel(::hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,sourceChannel,destChannel);
            			}
            			break;
            			case (int)1: {
HXLINE( 376)				::lime::_internal::graphics::ImageDataUtil_obj::copyChannel(::hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,sourceChannel,destChannel);
            			}
            			break;
            			case (int)2: {
HXLINE( 379)				int srcChannel;
HXDLIN( 379)				switch((int)(sourceChannel->_hx_getIndex())){
            					case (int)0: {
HXLINE( 379)						srcChannel = 1;
            					}
            					break;
            					case (int)1: {
HXLINE( 379)						srcChannel = 2;
            					}
            					break;
            					case (int)2: {
HXLINE( 379)						srcChannel = 4;
            					}
            					break;
            					case (int)3: {
HXLINE( 379)						srcChannel = 8;
            					}
            					break;
            				}
HXLINE( 387)				int dstChannel;
HXDLIN( 387)				switch((int)(destChannel->_hx_getIndex())){
            					case (int)0: {
HXLINE( 387)						dstChannel = 1;
            					}
            					break;
            					case (int)1: {
HXLINE( 387)						dstChannel = 2;
            					}
            					break;
            					case (int)2: {
HXLINE( 387)						dstChannel = 4;
            					}
            					break;
            					case (int)3: {
HXLINE( 387)						dstChannel = 8;
            					}
            					break;
            				}
HXLINE( 395)				sourceRect->offset(( (Float)(sourceImage->offsetX) ),( (Float)(sourceImage->offsetY) ));
HXLINE( 396)				destPoint->offset(( (Float)(this->offsetX) ),( (Float)(this->offsetY) ));
HXLINE( 398)				 ::Dynamic _hx_tmp =  ::Dynamic(this->buffer->_hx___srcBitmapData->__Field(HX_("copyChannel",8e,7d,e6,22),::hx::paccDynamic));
HXDLIN( 398)				 ::Dynamic _hx_tmp1 = sourceImage->buffer->get_src();
HXDLIN( 398)				 ::Dynamic _hx_tmp2 = sourceRect->_hx___toFlashRectangle();
HXDLIN( 398)				_hx_tmp(_hx_tmp1,_hx_tmp2,destPoint->_hx___toFlashPoint(),srcChannel,dstChannel);
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(Image_obj,copyChannel,(void))

void Image_obj::copyPixels( ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::Image alphaImage, ::lime::math::Vector2 alphaPoint,::hx::Null< bool >  __o_mergeAlpha){
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_416_copyPixels)
HXLINE( 417)		bool _hx_tmp;
HXDLIN( 417)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 417)			_hx_tmp = ::hx::IsNull( sourceImage );
            		}
            		else {
HXLINE( 417)			_hx_tmp = true;
            		}
HXDLIN( 417)		if (_hx_tmp) {
HXLINE( 417)			return;
            		}
HXLINE( 418)		bool _hx_tmp1;
HXDLIN( 418)		if (!((sourceRect->width <= 0))) {
HXLINE( 418)			_hx_tmp1 = (sourceRect->height <= 0);
            		}
            		else {
HXLINE( 418)			_hx_tmp1 = true;
            		}
HXDLIN( 418)		if (_hx_tmp1) {
HXLINE( 418)			return;
            		}
HXLINE( 419)		bool _hx_tmp2;
HXDLIN( 419)		if ((this->width > 0)) {
HXLINE( 419)			_hx_tmp2 = (this->height <= 0);
            		}
            		else {
HXLINE( 419)			_hx_tmp2 = true;
            		}
HXDLIN( 419)		if (_hx_tmp2) {
HXLINE( 419)			return;
            		}
HXLINE( 421)		if (((sourceRect->x + sourceRect->width) > sourceImage->width)) {
HXLINE( 421)			sourceRect->width = (( (Float)(sourceImage->width) ) - sourceRect->x);
            		}
HXLINE( 422)		if (((sourceRect->y + sourceRect->height) > sourceImage->height)) {
HXLINE( 422)			sourceRect->height = (( (Float)(sourceImage->height) ) - sourceRect->y);
            		}
HXLINE( 424)		if ((sourceRect->x < 0)) {
HXLINE( 426)			 ::lime::math::Rectangle sourceRect1 = sourceRect;
HXDLIN( 426)			sourceRect1->width = (sourceRect1->width + sourceRect->x);
HXLINE( 427)			sourceRect->x = ( (Float)(0) );
            		}
HXLINE( 430)		if ((sourceRect->y < 0)) {
HXLINE( 432)			 ::lime::math::Rectangle sourceRect1 = sourceRect;
HXDLIN( 432)			sourceRect1->height = (sourceRect1->height + sourceRect->y);
HXLINE( 433)			sourceRect->y = ( (Float)(0) );
            		}
HXLINE( 436)		if (((destPoint->x + sourceRect->width) > this->width)) {
HXLINE( 436)			sourceRect->width = (( (Float)(this->width) ) - destPoint->x);
            		}
HXLINE( 437)		if (((destPoint->y + sourceRect->height) > this->height)) {
HXLINE( 437)			sourceRect->height = (( (Float)(this->height) ) - destPoint->y);
            		}
HXLINE( 439)		if ((destPoint->x < 0)) {
HXLINE( 441)			 ::lime::math::Rectangle sourceRect1 = sourceRect;
HXDLIN( 441)			sourceRect1->width = (sourceRect1->width + destPoint->x);
HXLINE( 442)			 ::lime::math::Rectangle sourceRect2 = sourceRect;
HXDLIN( 442)			sourceRect2->x = (sourceRect2->x - destPoint->x);
HXLINE( 443)			destPoint->x = ( (Float)(0) );
            		}
HXLINE( 446)		if ((destPoint->y < 0)) {
HXLINE( 448)			 ::lime::math::Rectangle sourceRect1 = sourceRect;
HXDLIN( 448)			sourceRect1->height = (sourceRect1->height + destPoint->y);
HXLINE( 449)			 ::lime::math::Rectangle sourceRect2 = sourceRect;
HXDLIN( 449)			sourceRect2->y = (sourceRect2->y - destPoint->y);
HXLINE( 450)			destPoint->y = ( (Float)(0) );
            		}
HXLINE( 453)		bool _hx_tmp3;
HXDLIN( 453)		bool _hx_tmp4;
HXDLIN( 453)		if (::hx::IsInstanceEq( sourceImage,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 453)			Float destPoint1 = destPoint->x;
HXDLIN( 453)			_hx_tmp4 = (destPoint1 < sourceRect->get_right());
            		}
            		else {
HXLINE( 453)			_hx_tmp4 = false;
            		}
HXDLIN( 453)		if (_hx_tmp4) {
HXLINE( 453)			Float destPoint1 = destPoint->y;
HXDLIN( 453)			_hx_tmp3 = (destPoint1 < sourceRect->get_bottom());
            		}
            		else {
HXLINE( 453)			_hx_tmp3 = false;
            		}
HXDLIN( 453)		if (_hx_tmp3) {
HXLINE( 456)			sourceImage = this->clone();
            		}
HXLINE( 459)		bool _hx_tmp5;
HXDLIN( 459)		if (::hx::IsInstanceEq( alphaImage,sourceImage )) {
HXLINE( 459)			if (::hx::IsNotNull( alphaPoint )) {
HXLINE( 459)				if ((alphaPoint->x == 0)) {
HXLINE( 459)					_hx_tmp5 = (alphaPoint->y == 0);
            				}
            				else {
HXLINE( 459)					_hx_tmp5 = false;
            				}
            			}
            			else {
HXLINE( 459)				_hx_tmp5 = true;
            			}
            		}
            		else {
HXLINE( 459)			_hx_tmp5 = false;
            		}
HXDLIN( 459)		if (_hx_tmp5) {
HXLINE( 461)			alphaImage = null();
HXLINE( 462)			alphaPoint = null();
            		}
HXLINE( 465)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE( 468)				if (::hx::IsNotNull( alphaImage )) {
HXLINE( 470)					::lime::_internal::graphics::ImageCanvasUtil_obj::convertToData(::hx::ObjectPtr<OBJ_>(this),null());
HXLINE( 471)					::lime::_internal::graphics::ImageCanvasUtil_obj::convertToData(sourceImage,null());
HXLINE( 472)					if (::hx::IsNotNull( alphaImage )) {
HXLINE( 472)						::lime::_internal::graphics::ImageCanvasUtil_obj::convertToData(alphaImage,null());
            					}
HXLINE( 474)					::lime::_internal::graphics::ImageDataUtil_obj::copyPixels(::hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,alphaImage,alphaPoint,mergeAlpha);
            				}
            				else {
HXLINE( 478)					::lime::_internal::graphics::ImageCanvasUtil_obj::convertToCanvas(::hx::ObjectPtr<OBJ_>(this),null());
HXLINE( 479)					::lime::_internal::graphics::ImageCanvasUtil_obj::convertToCanvas(sourceImage,null());
HXLINE( 480)					::lime::_internal::graphics::ImageCanvasUtil_obj::copyPixels(::hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,alphaImage,alphaPoint,mergeAlpha);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 490)				::lime::_internal::graphics::ImageDataUtil_obj::copyPixels(::hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,alphaImage,alphaPoint,mergeAlpha);
            			}
            			break;
            			case (int)2: {
HXLINE( 493)				sourceRect->offset(( (Float)(sourceImage->offsetX) ),( (Float)(sourceImage->offsetY) ));
HXLINE( 494)				destPoint->offset(( (Float)(this->offsetX) ),( (Float)(this->offsetY) ));
HXLINE( 496)				bool _hx_tmp;
HXDLIN( 496)				if (::hx::IsNotNull( alphaImage )) {
HXLINE( 496)					_hx_tmp = ::hx::IsNotNull( alphaPoint );
            				}
            				else {
HXLINE( 496)					_hx_tmp = false;
            				}
HXDLIN( 496)				if (_hx_tmp) {
HXLINE( 498)					alphaPoint->offset(( (Float)(alphaImage->offsetX) ),( (Float)(alphaImage->offsetY) ));
            				}
HXLINE( 501)				 ::Dynamic _hx_tmp1 =  ::Dynamic(this->buffer->_hx___srcBitmapData->__Field(HX_("copyPixels",c2,54,6e,42),::hx::paccDynamic));
HXDLIN( 501)				 ::Dynamic sourceImage1 = sourceImage->buffer->_hx___srcBitmapData;
HXDLIN( 501)				 ::Dynamic _hx_tmp2 = sourceRect->_hx___toFlashRectangle();
HXDLIN( 501)				 ::Dynamic _hx_tmp3 = destPoint->_hx___toFlashPoint();
HXLINE( 502)				 ::Dynamic _hx_tmp4;
HXDLIN( 502)				if (::hx::IsNotNull( alphaImage )) {
HXLINE( 502)					_hx_tmp4 = alphaImage->buffer->get_src();
            				}
            				else {
HXLINE( 502)					_hx_tmp4 = null();
            				}
HXDLIN( 502)				 ::Dynamic _hx_tmp5;
HXDLIN( 502)				if (::hx::IsNotNull( alphaPoint )) {
HXLINE( 502)					_hx_tmp5 = alphaPoint->_hx___toFlashPoint();
            				}
            				else {
HXLINE( 502)					_hx_tmp5 = null();
            				}
HXLINE( 501)				_hx_tmp1(sourceImage1,_hx_tmp2,_hx_tmp3,_hx_tmp4,_hx_tmp5,mergeAlpha);
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(Image_obj,copyPixels,(void))

 ::haxe::io::Bytes Image_obj::encode( ::lime::graphics::ImageFileFormat format,::hx::Null< int >  __o_quality){
            		int quality = __o_quality.Default(90);
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_516_encode)
HXDLIN( 516)		if (::hx::IsNull( format )) {
HXLINE( 519)			return ::lime::_internal::format::PNG_obj::encode(::hx::ObjectPtr<OBJ_>(this));
            		}
            		else {
HXDLIN( 516)			switch((int)(format->_hx_getIndex())){
            				case (int)0: {
HXLINE( 525)					return ::lime::_internal::format::BMP_obj::encode(::hx::ObjectPtr<OBJ_>(this),null());
            				}
            				break;
            				case (int)1: {
HXLINE( 522)					return ::lime::_internal::format::JPEG_obj::encode(::hx::ObjectPtr<OBJ_>(this),quality);
            				}
            				break;
            				case (int)2: {
HXLINE( 519)					return ::lime::_internal::format::PNG_obj::encode(::hx::ObjectPtr<OBJ_>(this));
            				}
            				break;
            			}
            		}
HXLINE( 516)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,encode,return )

void Image_obj::fillRect( ::lime::math::Rectangle rect,int color, ::Dynamic format){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_540_fillRect)
HXLINE( 541)		rect = this->_hx___clipRect(rect);
HXLINE( 542)		bool _hx_tmp;
HXDLIN( 542)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 542)			_hx_tmp = ::hx::IsNull( rect );
            		}
            		else {
HXLINE( 542)			_hx_tmp = true;
            		}
HXDLIN( 542)		if (_hx_tmp) {
HXLINE( 542)			return;
            		}
HXLINE( 544)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE( 547)				::lime::_internal::graphics::ImageCanvasUtil_obj::fillRect(::hx::ObjectPtr<OBJ_>(this),rect,color,( (int)(format) ));
            			}
            			break;
            			case (int)1: {
HXLINE( 554)				if ((this->buffer->data->length == 0)) {
HXLINE( 554)					return;
            				}
HXLINE( 556)				::lime::_internal::graphics::ImageDataUtil_obj::fillRect(::hx::ObjectPtr<OBJ_>(this),rect,color,( (int)(format) ));
            			}
            			break;
            			case (int)2: {
HXLINE( 559)				rect->offset(( (Float)(this->offsetX) ),( (Float)(this->offsetY) ));
HXLINE( 561)				int argb;
HXDLIN( 561)				if (::hx::IsNull( format )) {
HXLINE( 565)					int rgba = color;
HXDLIN( 565)					int this1 = 0;
HXDLIN( 565)					int argb1 = this1;
HXDLIN( 565)					argb1 = ((((((rgba & 255) & 255) << 24) | (((::hx::UShr(rgba,24) & 255) & 255) << 16)) | (((::hx::UShr(rgba,16) & 255) & 255) << 8)) | ((::hx::UShr(rgba,8) & 255) & 255));
HXLINE( 561)					argb = argb1;
            				}
            				else {
HXLINE( 561)					 ::Dynamic _hx_switch_0 = format;
            					if (  (_hx_switch_0==1) ){
HXLINE( 561)						argb = color;
HXDLIN( 561)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_0==2) ){
HXLINE( 564)						int bgra = color;
HXDLIN( 564)						int this1 = 0;
HXDLIN( 564)						int argb1 = this1;
HXDLIN( 564)						argb1 = ((((((bgra & 255) & 255) << 24) | (((::hx::UShr(bgra,8) & 255) & 255) << 16)) | (((::hx::UShr(bgra,16) & 255) & 255) << 8)) | ((::hx::UShr(bgra,24) & 255) & 255));
HXLINE( 561)						argb = argb1;
HXLINE( 564)						goto _hx_goto_6;
            					}
            					/* default */{
HXLINE( 565)						int rgba = color;
HXDLIN( 565)						int this1 = 0;
HXDLIN( 565)						int argb1 = this1;
HXDLIN( 565)						argb1 = ((((((rgba & 255) & 255) << 24) | (((::hx::UShr(rgba,24) & 255) & 255) << 16)) | (((::hx::UShr(rgba,16) & 255) & 255) << 8)) | ((::hx::UShr(rgba,8) & 255) & 255));
HXLINE( 561)						argb = argb1;
            					}
            					_hx_goto_6:;
            				}
HXLINE( 568)				 ::Dynamic _hx_tmp =  ::Dynamic(this->buffer->_hx___srcBitmapData->__Field(HX_("fillRect",47,45,b9,6c),::hx::paccDynamic));
HXDLIN( 568)				_hx_tmp(rect->_hx___toFlashRectangle(),argb);
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fillRect,(void))

void Image_obj::floodFill(int x,int y,int color, ::Dynamic format){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_585_floodFill)
HXLINE( 586)		if (::hx::IsNull( this->buffer )) {
HXLINE( 586)			return;
            		}
HXLINE( 588)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE( 591)				::lime::_internal::graphics::ImageCanvasUtil_obj::floodFill(::hx::ObjectPtr<OBJ_>(this),x,y,color,( (int)(format) ));
            			}
            			break;
            			case (int)1: {
HXLINE( 598)				::lime::_internal::graphics::ImageDataUtil_obj::floodFill(::hx::ObjectPtr<OBJ_>(this),x,y,color,( (int)(format) ));
            			}
            			break;
            			case (int)2: {
HXLINE( 601)				int argb;
HXDLIN( 601)				if (::hx::IsNull( format )) {
HXLINE( 605)					int rgba = color;
HXDLIN( 605)					int this1 = 0;
HXDLIN( 605)					int argb1 = this1;
HXDLIN( 605)					argb1 = ((((((rgba & 255) & 255) << 24) | (((::hx::UShr(rgba,24) & 255) & 255) << 16)) | (((::hx::UShr(rgba,16) & 255) & 255) << 8)) | ((::hx::UShr(rgba,8) & 255) & 255));
HXLINE( 601)					argb = argb1;
            				}
            				else {
HXLINE( 601)					 ::Dynamic _hx_switch_0 = format;
            					if (  (_hx_switch_0==1) ){
HXLINE( 601)						argb = color;
HXDLIN( 601)						goto _hx_goto_8;
            					}
            					if (  (_hx_switch_0==2) ){
HXLINE( 604)						int bgra = color;
HXDLIN( 604)						int this1 = 0;
HXDLIN( 604)						int argb1 = this1;
HXDLIN( 604)						argb1 = ((((((bgra & 255) & 255) << 24) | (((::hx::UShr(bgra,8) & 255) & 255) << 16)) | (((::hx::UShr(bgra,16) & 255) & 255) << 8)) | ((::hx::UShr(bgra,24) & 255) & 255));
HXLINE( 601)						argb = argb1;
HXLINE( 604)						goto _hx_goto_8;
            					}
            					/* default */{
HXLINE( 605)						int rgba = color;
HXDLIN( 605)						int this1 = 0;
HXDLIN( 605)						int argb1 = this1;
HXDLIN( 605)						argb1 = ((((((rgba & 255) & 255) << 24) | (((::hx::UShr(rgba,24) & 255) & 255) << 16)) | (((::hx::UShr(rgba,16) & 255) & 255) << 8)) | ((::hx::UShr(rgba,8) & 255) & 255));
HXLINE( 601)						argb = argb1;
            					}
            					_hx_goto_8:;
            				}
HXLINE( 608)				this->buffer->_hx___srcBitmapData->__Field(HX_("floodFill",61,83,8a,59),::hx::paccDynamic)((x + this->offsetX),(y + this->offsetY),argb);
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,floodFill,(void))

 ::lime::math::Rectangle Image_obj::getColorBoundsRect(int mask,int color,::hx::Null< bool >  __o_findColor, ::Dynamic format){
            		bool findColor = __o_findColor.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_744_getColorBoundsRect)
HXLINE( 745)		if (::hx::IsNull( this->buffer )) {
HXLINE( 745)			return null();
            		}
HXLINE( 747)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE( 754)				return ::lime::_internal::graphics::ImageDataUtil_obj::getColorBoundsRect(::hx::ObjectPtr<OBJ_>(this),mask,color,findColor,( (int)(format) ));
            			}
            			break;
            			case (int)1: {
HXLINE( 757)				return ::lime::_internal::graphics::ImageDataUtil_obj::getColorBoundsRect(::hx::ObjectPtr<OBJ_>(this),mask,color,findColor,( (int)(format) ));
            			}
            			break;
            			case (int)2: {
HXLINE( 760)				 ::Dynamic rect = this->buffer->_hx___srcBitmapData->__Field(HX_("getColorBoundsRect",86,ad,e8,80),::hx::paccDynamic)(mask,color,findColor);
HXLINE( 761)				return  ::lime::math::Rectangle_obj::__alloc( HX_CTX ,rect->__Field(HX_("x",78,00,00,00),::hx::paccDynamic),rect->__Field(HX_("y",79,00,00,00),::hx::paccDynamic),rect->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic),rect->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic));
            			}
            			break;
            			default:{
HXLINE( 764)				return null();
            			}
            		}
HXLINE( 747)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,getColorBoundsRect,return )

int Image_obj::getPixel(int x,int y, ::Dynamic format){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_776_getPixel)
HXLINE( 777)		bool _hx_tmp;
HXDLIN( 777)		bool _hx_tmp1;
HXDLIN( 777)		bool _hx_tmp2;
HXDLIN( 777)		bool _hx_tmp3;
HXDLIN( 777)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 777)			_hx_tmp3 = (x < 0);
            		}
            		else {
HXLINE( 777)			_hx_tmp3 = true;
            		}
HXDLIN( 777)		if (!(_hx_tmp3)) {
HXLINE( 777)			_hx_tmp2 = (y < 0);
            		}
            		else {
HXLINE( 777)			_hx_tmp2 = true;
            		}
HXDLIN( 777)		if (!(_hx_tmp2)) {
HXLINE( 777)			_hx_tmp1 = (x >= this->width);
            		}
            		else {
HXLINE( 777)			_hx_tmp1 = true;
            		}
HXDLIN( 777)		if (!(_hx_tmp1)) {
HXLINE( 777)			_hx_tmp = (y >= this->height);
            		}
            		else {
HXLINE( 777)			_hx_tmp = true;
            		}
HXDLIN( 777)		if (_hx_tmp) {
HXLINE( 777)			return 0;
            		}
HXLINE( 779)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE( 782)				return ::lime::_internal::graphics::ImageCanvasUtil_obj::getPixel(::hx::ObjectPtr<OBJ_>(this),x,y,( (int)(format) ));
            			}
            			break;
            			case (int)1: {
HXLINE( 789)				return ::lime::_internal::graphics::ImageDataUtil_obj::getPixel(::hx::ObjectPtr<OBJ_>(this),x,y,( (int)(format) ));
            			}
            			break;
            			case (int)2: {
HXLINE( 792)				int color = ( (int)(this->buffer->_hx___srcBitmapData->__Field(HX_("getPixel",10,d6,7a,22),::hx::paccDynamic)((x + this->offsetX),(y + this->offsetY))) );
HXLINE( 794)				if (::hx::IsNull( format )) {
HXLINE( 801)					int this1 = 0;
HXDLIN( 801)					int rgba = this1;
HXDLIN( 801)					rgba = ((((((::hx::UShr(color,16) & 255) & 255) << 24) | (((::hx::UShr(color,8) & 255) & 255) << 16)) | (((color & 255) & 255) << 8)) | ((::hx::UShr(color,24) & 255) & 255));
HXDLIN( 801)					int rgba1 = rgba;
HXLINE( 802)					return rgba1;
            				}
            				else {
HXLINE( 794)					 ::Dynamic _hx_switch_0 = format;
            					if (  (_hx_switch_0==1) ){
HXLINE( 796)						return color;
HXDLIN( 796)						goto _hx_goto_11;
            					}
            					if (  (_hx_switch_0==2) ){
HXLINE( 798)						int this1 = 0;
HXDLIN( 798)						int bgra = this1;
HXDLIN( 798)						bgra = ((((((color & 255) & 255) << 24) | (((::hx::UShr(color,8) & 255) & 255) << 16)) | (((::hx::UShr(color,16) & 255) & 255) << 8)) | ((::hx::UShr(color,24) & 255) & 255));
HXDLIN( 798)						int bgra1 = bgra;
HXLINE( 799)						return bgra1;
HXLINE( 797)						goto _hx_goto_11;
            					}
            					/* default */{
HXLINE( 801)						int this1 = 0;
HXDLIN( 801)						int rgba = this1;
HXDLIN( 801)						rgba = ((((((::hx::UShr(color,16) & 255) & 255) << 24) | (((::hx::UShr(color,8) & 255) & 255) << 16)) | (((color & 255) & 255) << 8)) | ((::hx::UShr(color,24) & 255) & 255));
HXDLIN( 801)						int rgba1 = rgba;
HXLINE( 802)						return rgba1;
            					}
            					_hx_goto_11:;
            				}
            			}
            			break;
            			default:{
HXLINE( 806)				return 0;
            			}
            		}
HXLINE( 779)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,getPixel,return )

int Image_obj::getPixel32(int x,int y, ::Dynamic format){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_818_getPixel32)
HXLINE( 819)		bool _hx_tmp;
HXDLIN( 819)		bool _hx_tmp1;
HXDLIN( 819)		bool _hx_tmp2;
HXDLIN( 819)		bool _hx_tmp3;
HXDLIN( 819)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 819)			_hx_tmp3 = (x < 0);
            		}
            		else {
HXLINE( 819)			_hx_tmp3 = true;
            		}
HXDLIN( 819)		if (!(_hx_tmp3)) {
HXLINE( 819)			_hx_tmp2 = (y < 0);
            		}
            		else {
HXLINE( 819)			_hx_tmp2 = true;
            		}
HXDLIN( 819)		if (!(_hx_tmp2)) {
HXLINE( 819)			_hx_tmp1 = (x >= this->width);
            		}
            		else {
HXLINE( 819)			_hx_tmp1 = true;
            		}
HXDLIN( 819)		if (!(_hx_tmp1)) {
HXLINE( 819)			_hx_tmp = (y >= this->height);
            		}
            		else {
HXLINE( 819)			_hx_tmp = true;
            		}
HXDLIN( 819)		if (_hx_tmp) {
HXLINE( 819)			return 0;
            		}
HXLINE( 821)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE( 824)				return ::lime::_internal::graphics::ImageCanvasUtil_obj::getPixel32(::hx::ObjectPtr<OBJ_>(this),x,y,( (int)(format) ));
            			}
            			break;
            			case (int)1: {
HXLINE( 831)				return ::lime::_internal::graphics::ImageDataUtil_obj::getPixel32(::hx::ObjectPtr<OBJ_>(this),x,y,( (int)(format) ));
            			}
            			break;
            			case (int)2: {
HXLINE( 834)				int color = ( (int)(this->buffer->_hx___srcBitmapData->__Field(HX_("getPixel32",af,a6,68,d7),::hx::paccDynamic)((x + this->offsetX),(y + this->offsetY))) );
HXLINE( 836)				if (::hx::IsNull( format )) {
HXLINE( 843)					int this1 = 0;
HXDLIN( 843)					int rgba = this1;
HXDLIN( 843)					rgba = ((((((::hx::UShr(color,16) & 255) & 255) << 24) | (((::hx::UShr(color,8) & 255) & 255) << 16)) | (((color & 255) & 255) << 8)) | ((::hx::UShr(color,24) & 255) & 255));
HXDLIN( 843)					int rgba1 = rgba;
HXLINE( 844)					return rgba1;
            				}
            				else {
HXLINE( 836)					 ::Dynamic _hx_switch_0 = format;
            					if (  (_hx_switch_0==1) ){
HXLINE( 838)						return color;
HXDLIN( 838)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_0==2) ){
HXLINE( 840)						int this1 = 0;
HXDLIN( 840)						int bgra = this1;
HXDLIN( 840)						bgra = ((((((color & 255) & 255) << 24) | (((::hx::UShr(color,8) & 255) & 255) << 16)) | (((::hx::UShr(color,16) & 255) & 255) << 8)) | ((::hx::UShr(color,24) & 255) & 255));
HXDLIN( 840)						int bgra1 = bgra;
HXLINE( 841)						return bgra1;
HXLINE( 839)						goto _hx_goto_13;
            					}
            					/* default */{
HXLINE( 843)						int this1 = 0;
HXDLIN( 843)						int rgba = this1;
HXDLIN( 843)						rgba = ((((((::hx::UShr(color,16) & 255) & 255) << 24) | (((::hx::UShr(color,8) & 255) & 255) << 16)) | (((color & 255) & 255) << 8)) | ((::hx::UShr(color,24) & 255) & 255));
HXDLIN( 843)						int rgba1 = rgba;
HXLINE( 844)						return rgba1;
            					}
            					_hx_goto_13:;
            				}
            			}
            			break;
            			default:{
HXLINE( 848)				return 0;
            			}
            		}
HXLINE( 821)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,getPixel32,return )

 ::haxe::io::Bytes Image_obj::getPixels( ::lime::math::Rectangle rect, ::Dynamic format){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_859_getPixels)
HXLINE( 860)		if (::hx::IsNull( this->buffer )) {
HXLINE( 860)			return null();
            		}
HXLINE( 862)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE( 865)				return ::lime::_internal::graphics::ImageCanvasUtil_obj::getPixels(::hx::ObjectPtr<OBJ_>(this),rect,( (int)(format) ));
            			}
            			break;
            			case (int)1: {
HXLINE( 872)				return ::lime::_internal::graphics::ImageDataUtil_obj::getPixels(::hx::ObjectPtr<OBJ_>(this),rect,( (int)(format) ));
            			}
            			break;
            			case (int)2: {
HXLINE( 911)				return null();
            			}
            			break;
            			default:{
HXLINE( 915)				return null();
            			}
            		}
HXLINE( 862)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,getPixels,return )

void Image_obj::merge( ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1071_merge)
HXLINE(1072)		bool _hx_tmp;
HXDLIN(1072)		if (::hx::IsNotNull( this->buffer )) {
HXLINE(1072)			_hx_tmp = ::hx::IsNull( sourceImage );
            		}
            		else {
HXLINE(1072)			_hx_tmp = true;
            		}
HXDLIN(1072)		if (_hx_tmp) {
HXLINE(1072)			return;
            		}
HXLINE(1074)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE(1077)				::lime::_internal::graphics::ImageCanvasUtil_obj::convertToCanvas(::hx::ObjectPtr<OBJ_>(this),null());
HXLINE(1078)				::lime::_internal::graphics::ImageCanvasUtil_obj::merge(::hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
            			}
            			break;
            			case (int)1: {
HXLINE(1086)				::lime::_internal::graphics::ImageDataUtil_obj::merge(::hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
            			}
            			break;
            			case (int)2: {
HXLINE(1089)				sourceRect->offset(( (Float)(this->offsetX) ),( (Float)(this->offsetY) ));
HXLINE(1090)				 ::Dynamic _hx_tmp =  ::Dynamic(this->buffer->_hx___srcBitmapData->__Field(HX_("merge",b8,a2,c6,05),::hx::paccDynamic));
HXDLIN(1090)				 ::Dynamic sourceImage1 = sourceImage->buffer->_hx___srcBitmapData;
HXDLIN(1090)				 ::Dynamic _hx_tmp1 = sourceRect->_hx___toFlashRectangle();
HXDLIN(1090)				_hx_tmp(sourceImage1,_hx_tmp1,destPoint->_hx___toFlashPoint(),redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
            			}
            			break;
            			default:{
HXLINE(1094)				return;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC7(Image_obj,merge,(void))

void Image_obj::resize(int newWidth,int newHeight){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1105_resize)
HXLINE(1106)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE(1109)				::lime::_internal::graphics::ImageCanvasUtil_obj::resize(::hx::ObjectPtr<OBJ_>(this),newWidth,newHeight);
            			}
            			break;
            			case (int)1: {
HXLINE(1112)				::lime::_internal::graphics::ImageDataUtil_obj::resize(::hx::ObjectPtr<OBJ_>(this),newWidth,newHeight);
            			}
            			break;
            			case (int)2: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE(1126)		this->buffer->width = newWidth;
HXLINE(1127)		this->buffer->height = newHeight;
HXLINE(1129)		this->offsetX = 0;
HXLINE(1130)		this->offsetY = 0;
HXLINE(1131)		this->width = newWidth;
HXLINE(1132)		this->height = newHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,resize,(void))

void Image_obj::scroll(int x,int y){
            	HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1145_scroll)
HXLINE(1146)		if (::hx::IsNull( this->buffer )) {
HXLINE(1146)			return;
            		}
HXLINE(1148)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE(1151)				::lime::_internal::graphics::ImageCanvasUtil_obj::scroll(::hx::ObjectPtr<OBJ_>(this),x,y);
            			}
            			break;
            			case (int)1: {
HXLINE(1154)				 ::lime::math::Rectangle _hx_tmp = this->get_rect();
HXDLIN(1154)				this->copyPixels(::hx::ObjectPtr<OBJ_>(this),_hx_tmp, ::lime::math::Vector2_obj::__alloc( HX_CTX ,x,y),null(),null(),null());
            			}
            			break;
            			case (int)2: {
HXLINE(1157)				this->buffer->_hx___srcBitmapData->__Field(HX_("scroll",0d,d8,64,47),::hx::paccDynamic)((x + this->offsetX),(y + this->offsetX));
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,scroll,(void))

void Image_obj::setPixel(int x,int y,int color, ::Dynamic format){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1171_setPixel)
HXLINE(1172)		bool _hx_tmp;
HXDLIN(1172)		bool _hx_tmp1;
HXDLIN(1172)		bool _hx_tmp2;
HXDLIN(1172)		bool _hx_tmp3;
HXDLIN(1172)		if (::hx::IsNotNull( this->buffer )) {
HXLINE(1172)			_hx_tmp3 = (x < 0);
            		}
            		else {
HXLINE(1172)			_hx_tmp3 = true;
            		}
HXDLIN(1172)		if (!(_hx_tmp3)) {
HXLINE(1172)			_hx_tmp2 = (y < 0);
            		}
            		else {
HXLINE(1172)			_hx_tmp2 = true;
            		}
HXDLIN(1172)		if (!(_hx_tmp2)) {
HXLINE(1172)			_hx_tmp1 = (x >= this->width);
            		}
            		else {
HXLINE(1172)			_hx_tmp1 = true;
            		}
HXDLIN(1172)		if (!(_hx_tmp1)) {
HXLINE(1172)			_hx_tmp = (y >= this->height);
            		}
            		else {
HXLINE(1172)			_hx_tmp = true;
            		}
HXDLIN(1172)		if (_hx_tmp) {
HXLINE(1172)			return;
            		}
HXLINE(1174)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE(1177)				::lime::_internal::graphics::ImageCanvasUtil_obj::setPixel(::hx::ObjectPtr<OBJ_>(this),x,y,color,( (int)(format) ));
            			}
            			break;
            			case (int)1: {
HXLINE(1184)				::lime::_internal::graphics::ImageDataUtil_obj::setPixel(::hx::ObjectPtr<OBJ_>(this),x,y,color,( (int)(format) ));
            			}
            			break;
            			case (int)2: {
HXLINE(1187)				int argb;
HXDLIN(1187)				if (::hx::IsNull( format )) {
HXLINE(1191)					int rgba = color;
HXDLIN(1191)					int this1 = 0;
HXDLIN(1191)					int argb1 = this1;
HXDLIN(1191)					argb1 = ((((((rgba & 255) & 255) << 24) | (((::hx::UShr(rgba,24) & 255) & 255) << 16)) | (((::hx::UShr(rgba,16) & 255) & 255) << 8)) | ((::hx::UShr(rgba,8) & 255) & 255));
HXLINE(1187)					argb = argb1;
            				}
            				else {
HXLINE(1187)					 ::Dynamic _hx_switch_0 = format;
            					if (  (_hx_switch_0==1) ){
HXLINE(1187)						argb = color;
HXDLIN(1187)						goto _hx_goto_19;
            					}
            					if (  (_hx_switch_0==2) ){
HXLINE(1190)						int bgra = color;
HXDLIN(1190)						int this1 = 0;
HXDLIN(1190)						int argb1 = this1;
HXDLIN(1190)						argb1 = ((((((bgra & 255) & 255) << 24) | (((::hx::UShr(bgra,8) & 255) & 255) << 16)) | (((::hx::UShr(bgra,16) & 255) & 255) << 8)) | ((::hx::UShr(bgra,24) & 255) & 255));
HXLINE(1187)						argb = argb1;
HXLINE(1190)						goto _hx_goto_19;
            					}
            					/* default */{
HXLINE(1191)						int rgba = color;
HXDLIN(1191)						int this1 = 0;
HXDLIN(1191)						int argb1 = this1;
HXDLIN(1191)						argb1 = ((((((rgba & 255) & 255) << 24) | (((::hx::UShr(rgba,24) & 255) & 255) << 16)) | (((::hx::UShr(rgba,16) & 255) & 255) << 8)) | ((::hx::UShr(rgba,8) & 255) & 255));
HXLINE(1187)						argb = argb1;
            					}
            					_hx_goto_19:;
            				}
HXLINE(1194)				this->buffer->_hx___srcBitmapData->__Field(HX_("setPixel",84,2f,d8,d0),::hx::paccDynamic)((x + this->offsetX),(y + this->offsetX),argb);
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,setPixel,(void))

void Image_obj::setPixel32(int x,int y,int color, ::Dynamic format){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1208_setPixel32)
HXLINE(1209)		bool _hx_tmp;
HXDLIN(1209)		bool _hx_tmp1;
HXDLIN(1209)		bool _hx_tmp2;
HXDLIN(1209)		bool _hx_tmp3;
HXDLIN(1209)		if (::hx::IsNotNull( this->buffer )) {
HXLINE(1209)			_hx_tmp3 = (x < 0);
            		}
            		else {
HXLINE(1209)			_hx_tmp3 = true;
            		}
HXDLIN(1209)		if (!(_hx_tmp3)) {
HXLINE(1209)			_hx_tmp2 = (y < 0);
            		}
            		else {
HXLINE(1209)			_hx_tmp2 = true;
            		}
HXDLIN(1209)		if (!(_hx_tmp2)) {
HXLINE(1209)			_hx_tmp1 = (x >= this->width);
            		}
            		else {
HXLINE(1209)			_hx_tmp1 = true;
            		}
HXDLIN(1209)		if (!(_hx_tmp1)) {
HXLINE(1209)			_hx_tmp = (y >= this->height);
            		}
            		else {
HXLINE(1209)			_hx_tmp = true;
            		}
HXDLIN(1209)		if (_hx_tmp) {
HXLINE(1209)			return;
            		}
HXLINE(1211)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE(1214)				::lime::_internal::graphics::ImageCanvasUtil_obj::setPixel32(::hx::ObjectPtr<OBJ_>(this),x,y,color,( (int)(format) ));
            			}
            			break;
            			case (int)1: {
HXLINE(1221)				::lime::_internal::graphics::ImageDataUtil_obj::setPixel32(::hx::ObjectPtr<OBJ_>(this),x,y,color,( (int)(format) ));
            			}
            			break;
            			case (int)2: {
HXLINE(1224)				int argb;
HXDLIN(1224)				if (::hx::IsNull( format )) {
HXLINE(1228)					int rgba = color;
HXDLIN(1228)					int this1 = 0;
HXDLIN(1228)					int argb1 = this1;
HXDLIN(1228)					argb1 = ((((((rgba & 255) & 255) << 24) | (((::hx::UShr(rgba,24) & 255) & 255) << 16)) | (((::hx::UShr(rgba,16) & 255) & 255) << 8)) | ((::hx::UShr(rgba,8) & 255) & 255));
HXLINE(1224)					argb = argb1;
            				}
            				else {
HXLINE(1224)					 ::Dynamic _hx_switch_0 = format;
            					if (  (_hx_switch_0==1) ){
HXLINE(1224)						argb = color;
HXDLIN(1224)						goto _hx_goto_21;
            					}
            					if (  (_hx_switch_0==2) ){
HXLINE(1227)						int bgra = color;
HXDLIN(1227)						int this1 = 0;
HXDLIN(1227)						int argb1 = this1;
HXDLIN(1227)						argb1 = ((((((bgra & 255) & 255) << 24) | (((::hx::UShr(bgra,8) & 255) & 255) << 16)) | (((::hx::UShr(bgra,16) & 255) & 255) << 8)) | ((::hx::UShr(bgra,24) & 255) & 255));
HXLINE(1224)						argb = argb1;
HXLINE(1227)						goto _hx_goto_21;
            					}
            					/* default */{
HXLINE(1228)						int rgba = color;
HXDLIN(1228)						int this1 = 0;
HXDLIN(1228)						int argb1 = this1;
HXDLIN(1228)						argb1 = ((((((rgba & 255) & 255) << 24) | (((::hx::UShr(rgba,24) & 255) & 255) << 16)) | (((::hx::UShr(rgba,16) & 255) & 255) << 8)) | ((::hx::UShr(rgba,8) & 255) & 255));
HXLINE(1224)						argb = argb1;
            					}
            					_hx_goto_21:;
            				}
HXLINE(1231)				this->buffer->_hx___srcBitmapData->__Field(HX_("setPixel32",23,45,e6,da),::hx::paccDynamic)((x + this->offsetX),(y + this->offsetY),argb);
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,setPixel32,(void))

void Image_obj::setPixels( ::lime::math::Rectangle rect, ::lime::utils::BytePointerData bytePointer, ::Dynamic format, ::lime::_hx_system::Endian endian){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1245_setPixels)
HXLINE(1246)		rect = this->_hx___clipRect(rect);
HXLINE(1247)		bool _hx_tmp;
HXDLIN(1247)		if (::hx::IsNotNull( this->buffer )) {
HXLINE(1247)			_hx_tmp = ::hx::IsNull( rect );
            		}
            		else {
HXLINE(1247)			_hx_tmp = true;
            		}
HXDLIN(1247)		if (_hx_tmp) {
HXLINE(1247)			return;
            		}
HXLINE(1248)		if (::hx::IsNull( endian )) {
HXLINE(1248)			endian = ::lime::_hx_system::Endian_obj::_hx_BIG_ENDIAN_dyn();
            		}
HXLINE(1250)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: {
HXLINE(1253)				::lime::_internal::graphics::ImageCanvasUtil_obj::setPixels(::hx::ObjectPtr<OBJ_>(this),rect,bytePointer,( (int)(format) ),endian);
            			}
            			break;
            			case (int)1: {
HXLINE(1260)				::lime::_internal::graphics::ImageDataUtil_obj::setPixels(::hx::ObjectPtr<OBJ_>(this),rect,bytePointer,( (int)(format) ),endian);
            			}
            			break;
            			case (int)2: {
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,setPixels,(void))

int Image_obj::threshold( ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,::String operation,int threshold,::hx::Null< int >  __o_color,::hx::Null< int >  __o_mask,::hx::Null< bool >  __o_copySource, ::Dynamic format){
            		int color = __o_color.Default(0);
            		int mask = __o_mask.Default(-1);
            		bool copySource = __o_copySource.Default(false);
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1352_threshold)
HXLINE(1353)		bool _hx_tmp;
HXDLIN(1353)		bool _hx_tmp1;
HXDLIN(1353)		if (::hx::IsNotNull( this->buffer )) {
HXLINE(1353)			_hx_tmp1 = ::hx::IsNull( sourceImage );
            		}
            		else {
HXLINE(1353)			_hx_tmp1 = true;
            		}
HXDLIN(1353)		if (!(_hx_tmp1)) {
HXLINE(1353)			_hx_tmp = ::hx::IsNull( sourceRect );
            		}
            		else {
HXLINE(1353)			_hx_tmp = true;
            		}
HXDLIN(1353)		if (_hx_tmp) {
HXLINE(1353)			return 0;
            		}
HXLINE(1355)		switch((int)(this->type->_hx_getIndex())){
            			case (int)0: case (int)1: {
HXLINE(1363)				return ::lime::_internal::graphics::ImageDataUtil_obj::threshold(::hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,operation,threshold,color,mask,copySource,( (int)(format) ));
            			}
            			break;
            			case (int)2: {
HXLINE(1366)				int _color;
HXDLIN(1366)				if (::hx::IsNull( format )) {
HXLINE(1370)					int rgba = color;
HXDLIN(1370)					int this1 = 0;
HXDLIN(1370)					int argb = this1;
HXDLIN(1370)					argb = ((((((rgba & 255) & 255) << 24) | (((::hx::UShr(rgba,24) & 255) & 255) << 16)) | (((::hx::UShr(rgba,16) & 255) & 255) << 8)) | ((::hx::UShr(rgba,8) & 255) & 255));
HXLINE(1366)					_color = argb;
            				}
            				else {
HXLINE(1366)					 ::Dynamic _hx_switch_0 = format;
            					if (  (_hx_switch_0==1) ){
HXLINE(1366)						_color = color;
HXDLIN(1366)						goto _hx_goto_24;
            					}
            					if (  (_hx_switch_0==2) ){
HXLINE(1369)						int bgra = color;
HXDLIN(1369)						int this1 = 0;
HXDLIN(1369)						int argb = this1;
HXDLIN(1369)						argb = ((((((bgra & 255) & 255) << 24) | (((::hx::UShr(bgra,8) & 255) & 255) << 16)) | (((::hx::UShr(bgra,16) & 255) & 255) << 8)) | ((::hx::UShr(bgra,24) & 255) & 255));
HXLINE(1366)						_color = argb;
HXLINE(1369)						goto _hx_goto_24;
            					}
            					/* default */{
HXLINE(1370)						int rgba = color;
HXDLIN(1370)						int this1 = 0;
HXDLIN(1370)						int argb = this1;
HXDLIN(1370)						argb = ((((((rgba & 255) & 255) << 24) | (((::hx::UShr(rgba,24) & 255) & 255) << 16)) | (((::hx::UShr(rgba,16) & 255) & 255) << 8)) | ((::hx::UShr(rgba,8) & 255) & 255));
HXLINE(1366)						_color = argb;
            					}
            					_hx_goto_24:;
            				}
HXLINE(1373)				int _mask;
HXDLIN(1373)				if (::hx::IsNull( format )) {
HXLINE(1377)					int rgba = mask;
HXDLIN(1377)					int this1 = 0;
HXDLIN(1377)					int argb = this1;
HXDLIN(1377)					argb = ((((((rgba & 255) & 255) << 24) | (((::hx::UShr(rgba,24) & 255) & 255) << 16)) | (((::hx::UShr(rgba,16) & 255) & 255) << 8)) | ((::hx::UShr(rgba,8) & 255) & 255));
HXLINE(1373)					_mask = argb;
            				}
            				else {
HXLINE(1373)					 ::Dynamic _hx_switch_1 = format;
            					if (  (_hx_switch_1==1) ){
HXLINE(1373)						_mask = mask;
HXDLIN(1373)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==2) ){
HXLINE(1376)						int bgra = mask;
HXDLIN(1376)						int this1 = 0;
HXDLIN(1376)						int argb = this1;
HXDLIN(1376)						argb = ((((((bgra & 255) & 255) << 24) | (((::hx::UShr(bgra,8) & 255) & 255) << 16)) | (((::hx::UShr(bgra,16) & 255) & 255) << 8)) | ((::hx::UShr(bgra,24) & 255) & 255));
HXLINE(1373)						_mask = argb;
HXLINE(1376)						goto _hx_goto_25;
            					}
            					/* default */{
HXLINE(1377)						int rgba = mask;
HXDLIN(1377)						int this1 = 0;
HXDLIN(1377)						int argb = this1;
HXDLIN(1377)						argb = ((((((rgba & 255) & 255) << 24) | (((::hx::UShr(rgba,24) & 255) & 255) << 16)) | (((::hx::UShr(rgba,16) & 255) & 255) << 8)) | ((::hx::UShr(rgba,8) & 255) & 255));
HXLINE(1373)						_mask = argb;
            					}
            					_hx_goto_25:;
            				}
HXLINE(1380)				sourceRect->offset(( (Float)(sourceImage->offsetX) ),( (Float)(sourceImage->offsetY) ));
HXLINE(1381)				destPoint->offset(( (Float)(this->offsetX) ),( (Float)(this->offsetY) ));
HXLINE(1383)				 ::Dynamic _hx_tmp =  ::Dynamic(this->buffer->_hx___srcBitmapData->__Field(HX_("threshold",ab,c3,a3,34),::hx::paccDynamic));
HXDLIN(1383)				 ::Dynamic _hx_tmp1 = sourceImage->buffer->get_src();
HXDLIN(1383)				 ::Dynamic _hx_tmp2 = sourceRect->_hx___toFlashRectangle();
HXDLIN(1383)				return ( (int)(_hx_tmp(_hx_tmp1,_hx_tmp2,destPoint->_hx___toFlashPoint(),operation,threshold,_color,_mask,copySource)) );
            			}
            			break;
            			default:{
            			}
            		}
HXLINE(1389)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC9(Image_obj,threshold,return )

 ::lime::math::Rectangle Image_obj::_hx___clipRect( ::lime::math::Rectangle r){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1393___clipRect)
HXLINE(1394)		if (::hx::IsNull( r )) {
HXLINE(1394)			return null();
            		}
HXLINE(1396)		if ((r->x < 0)) {
HXLINE(1398)			 ::lime::math::Rectangle r1 = r;
HXDLIN(1398)			r1->width = (r1->width - -(r->x));
HXLINE(1399)			r->x = ( (Float)(0) );
HXLINE(1401)			if (((r->x + r->width) <= 0)) {
HXLINE(1401)				return null();
            			}
            		}
HXLINE(1404)		if ((r->y < 0)) {
HXLINE(1406)			 ::lime::math::Rectangle r1 = r;
HXDLIN(1406)			r1->height = (r1->height - -(r->y));
HXLINE(1407)			r->y = ( (Float)(0) );
HXLINE(1409)			if (((r->y + r->height) <= 0)) {
HXLINE(1409)				return null();
            			}
            		}
HXLINE(1412)		if (((r->x + r->width) >= this->width)) {
HXLINE(1414)			 ::lime::math::Rectangle r1 = r;
HXDLIN(1414)			r1->width = (r1->width - ((r->x + r->width) - ( (Float)(this->width) )));
HXLINE(1416)			if ((r->width <= 0)) {
HXLINE(1416)				return null();
            			}
            		}
HXLINE(1419)		if (((r->y + r->height) >= this->height)) {
HXLINE(1421)			 ::lime::math::Rectangle r1 = r;
HXDLIN(1421)			r1->height = (r1->height - ((r->y + r->height) - ( (Float)(this->height) )));
HXLINE(1423)			if ((r->height <= 0)) {
HXLINE(1423)				return null();
            			}
            		}
HXLINE(1426)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,_hx___clipRect,return )

void Image_obj::_hx___fromBase64(::String base64,::String type, ::Dynamic onload){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1453___fromBase64)
HXDLIN(1453)		if (::hx::IsNotNull( base64 )) {
HXLINE(1455)			this->_hx___fromBytes(::lime::_internal::format::Base64_obj::decode(base64),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,_hx___fromBase64,(void))

bool Image_obj::_hx___fromBytes( ::haxe::io::Bytes bytes, ::Dynamic onload){
            	HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1461___fromBytes)
HXLINE(1486)		 ::lime::graphics::ImageBuffer imageBuffer = null();
HXLINE(1489)		::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > imageBuffer1 = ::lime::_internal::backend::native::NativeCFFI_obj::lime_image_load_bytes;
HXDLIN(1489)		 ::Dynamic elements = null();
HXDLIN(1489)		 ::haxe::io::Bytes buffer = ::haxe::io::Bytes_obj::alloc(0);
HXDLIN(1489)		::cpp::VirtualArray array = null();
HXDLIN(1489)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN(1489)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN(1489)		 ::Dynamic len = null();
HXDLIN(1489)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(1489)		if (::hx::IsNotNull( elements )) {
HXLINE(1489)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXLINE(1489)			if (::hx::IsNotNull( array )) {
HXLINE(1489)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(1489)				_this->byteOffset = 0;
HXDLIN(1489)				_this->length = array->get_length();
HXDLIN(1489)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(1489)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(1489)				_this->buffer = this2;
HXDLIN(1489)				_this->copyFromArray(array,null());
HXDLIN(1489)				this1 = _this;
            			}
            			else {
HXLINE(1489)				if (::hx::IsNotNull( vector )) {
HXLINE(1489)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(1489)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN(1489)					_this->byteOffset = 0;
HXDLIN(1489)					_this->length = array->get_length();
HXDLIN(1489)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(1489)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(1489)					_this->buffer = this2;
HXDLIN(1489)					_this->copyFromArray(array,null());
HXDLIN(1489)					this1 = _this;
            				}
            				else {
HXLINE(1489)					if (::hx::IsNotNull( view )) {
HXLINE(1489)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(1489)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN(1489)						int srcLength = view->length;
HXDLIN(1489)						int srcByteOffset = view->byteOffset;
HXDLIN(1489)						int srcElementSize = view->bytesPerElement;
HXDLIN(1489)						int elementSize = _this->bytesPerElement;
HXDLIN(1489)						if ((view->type == _this->type)) {
HXLINE(1489)							int srcLength = srcData->length;
HXDLIN(1489)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN(1489)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN(1489)							_this->buffer = this1;
HXDLIN(1489)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE(1489)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN(1489)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN(1489)						_this->byteOffset = 0;
HXDLIN(1489)						_this->length = srcLength;
HXDLIN(1489)						this1 = _this;
            					}
            					else {
HXLINE(1489)						if (::hx::IsNotNull( buffer )) {
HXLINE(1489)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(1489)							int in_byteOffset = 0;
HXDLIN(1489)							if ((in_byteOffset < 0)) {
HXLINE(1489)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN(1489)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE(1489)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN(1489)							int bufferByteLength = buffer->length;
HXDLIN(1489)							int elementSize = _this->bytesPerElement;
HXDLIN(1489)							int newByteLength = bufferByteLength;
HXDLIN(1489)							if (::hx::IsNull( len )) {
HXLINE(1489)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(1489)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE(1489)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN(1489)								if ((newByteLength < 0)) {
HXLINE(1489)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE(1489)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN(1489)								int newRange = (in_byteOffset + newByteLength);
HXDLIN(1489)								if ((newRange > bufferByteLength)) {
HXLINE(1489)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN(1489)							_this->buffer = buffer;
HXDLIN(1489)							_this->byteOffset = in_byteOffset;
HXDLIN(1489)							_this->byteLength = newByteLength;
HXDLIN(1489)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN(1489)							this1 = _this;
            						}
            						else {
HXLINE(1489)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN(1489)		imageBuffer = ( ( ::Dynamic)(imageBuffer1(::hx::DynamicPtr(bytes),::hx::DynamicPtr( ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,this1,null(),null(),null(),null())))) );
HXLINE(1499)		if (::hx::IsNotNull( imageBuffer )) {
HXLINE(1501)			this->_hx___fromImageBuffer(imageBuffer);
HXLINE(1503)			if (::hx::IsNotNull( onload )) {
HXLINE(1505)				onload(::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE(1508)			return true;
            		}
HXLINE(1514)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,_hx___fromBytes,return )

bool Image_obj::_hx___fromFile(::String path, ::Dynamic onload, ::Dynamic onerror){
            	HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1518___fromFile)
HXLINE(1559)		 ::lime::graphics::ImageBuffer buffer = null();
HXLINE(1564)		if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE(1567)			::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > buffer1 = ::lime::_internal::backend::native::NativeCFFI_obj::lime_image_load_file;
HXDLIN(1567)			 ::Dynamic elements = null();
HXDLIN(1567)			 ::haxe::io::Bytes buffer2 = ::haxe::io::Bytes_obj::alloc(0);
HXDLIN(1567)			::cpp::VirtualArray array = null();
HXDLIN(1567)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN(1567)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN(1567)			 ::Dynamic len = null();
HXDLIN(1567)			 ::lime::utils::ArrayBufferView this1;
HXDLIN(1567)			if (::hx::IsNotNull( elements )) {
HXLINE(1567)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            			}
            			else {
HXLINE(1567)				if (::hx::IsNotNull( array )) {
HXLINE(1567)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(1567)					_this->byteOffset = 0;
HXDLIN(1567)					_this->length = array->get_length();
HXDLIN(1567)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(1567)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(1567)					_this->buffer = this2;
HXDLIN(1567)					_this->copyFromArray(array,null());
HXDLIN(1567)					this1 = _this;
            				}
            				else {
HXLINE(1567)					if (::hx::IsNotNull( vector )) {
HXLINE(1567)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(1567)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN(1567)						_this->byteOffset = 0;
HXDLIN(1567)						_this->length = array->get_length();
HXDLIN(1567)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(1567)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(1567)						_this->buffer = this2;
HXDLIN(1567)						_this->copyFromArray(array,null());
HXDLIN(1567)						this1 = _this;
            					}
            					else {
HXLINE(1567)						if (::hx::IsNotNull( view )) {
HXLINE(1567)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(1567)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN(1567)							int srcLength = view->length;
HXDLIN(1567)							int srcByteOffset = view->byteOffset;
HXDLIN(1567)							int srcElementSize = view->bytesPerElement;
HXDLIN(1567)							int elementSize = _this->bytesPerElement;
HXDLIN(1567)							if ((view->type == _this->type)) {
HXLINE(1567)								int srcLength = srcData->length;
HXDLIN(1567)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN(1567)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN(1567)								_this->buffer = this1;
HXDLIN(1567)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE(1567)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN(1567)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN(1567)							_this->byteOffset = 0;
HXDLIN(1567)							_this->length = srcLength;
HXDLIN(1567)							this1 = _this;
            						}
            						else {
HXLINE(1567)							if (::hx::IsNotNull( buffer2 )) {
HXLINE(1567)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(1567)								int in_byteOffset = 0;
HXDLIN(1567)								if ((in_byteOffset < 0)) {
HXLINE(1567)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN(1567)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE(1567)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN(1567)								int bufferByteLength = buffer2->length;
HXDLIN(1567)								int elementSize = _this->bytesPerElement;
HXDLIN(1567)								int newByteLength = bufferByteLength;
HXDLIN(1567)								if (::hx::IsNull( len )) {
HXLINE(1567)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(1567)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE(1567)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN(1567)									if ((newByteLength < 0)) {
HXLINE(1567)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE(1567)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN(1567)									int newRange = (in_byteOffset + newByteLength);
HXDLIN(1567)									if ((newRange > bufferByteLength)) {
HXLINE(1567)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN(1567)								_this->buffer = buffer2;
HXDLIN(1567)								_this->byteOffset = in_byteOffset;
HXDLIN(1567)								_this->byteLength = newByteLength;
HXDLIN(1567)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN(1567)								this1 = _this;
            							}
            							else {
HXLINE(1567)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            							}
            						}
            					}
            				}
            			}
HXDLIN(1567)			buffer = ( ( ::Dynamic)(buffer1(::hx::DynamicPtr(path),::hx::DynamicPtr( ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,this1,null(),null(),null(),null())))) );
            		}
HXLINE(1613)		if (::hx::IsNotNull( buffer )) {
HXLINE(1615)			this->_hx___fromImageBuffer(buffer);
HXLINE(1617)			if (::hx::IsNotNull( onload )) {
HXLINE(1619)				onload(::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE(1622)			return true;
            		}
HXLINE(1628)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,_hx___fromFile,return )

void Image_obj::_hx___fromImageBuffer( ::lime::graphics::ImageBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1632___fromImageBuffer)
HXLINE(1633)		this->buffer = buffer;
HXLINE(1635)		if (::hx::IsNotNull( buffer )) {
HXLINE(1637)			if ((this->width == -1)) {
HXLINE(1639)				this->width = buffer->width;
            			}
HXLINE(1642)			if ((this->height == -1)) {
HXLINE(1644)				this->height = buffer->height;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,_hx___fromImageBuffer,(void))

 ::lime::utils::ArrayBufferView Image_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1684_get_data)
HXLINE(1685)		bool _hx_tmp;
HXDLIN(1685)		bool _hx_tmp1;
HXDLIN(1685)		if (::hx::IsNull( this->buffer->data )) {
HXLINE(1685)			_hx_tmp1 = (this->buffer->width > 0);
            		}
            		else {
HXLINE(1685)			_hx_tmp1 = false;
            		}
HXDLIN(1685)		if (_hx_tmp1) {
HXLINE(1685)			_hx_tmp = (this->buffer->height > 0);
            		}
            		else {
HXLINE(1685)			_hx_tmp = false;
            		}
HXLINE(1695)		return this->buffer->data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_data,return )

 ::lime::utils::ArrayBufferView Image_obj::set_data( ::lime::utils::ArrayBufferView value){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1700_set_data)
HXDLIN(1700)		return (this->buffer->data = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_data,return )

int Image_obj::get_format(){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1705_get_format)
HXDLIN(1705)		return this->buffer->format;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_format,return )

int Image_obj::set_format(int value){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1709_set_format)
HXLINE(1710)		if ((this->buffer->format != value)) {
HXLINE(1712)			if ((this->type->_hx_getIndex() == 1)) {
HXLINE(1715)				::lime::_internal::graphics::ImageDataUtil_obj::setFormat(::hx::ObjectPtr<OBJ_>(this),value);
            			}
            		}
HXLINE(1721)		return (this->buffer->format = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_format,return )

bool Image_obj::get_powerOfTwo(){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1726_get_powerOfTwo)
HXDLIN(1726)		bool _hx_tmp;
HXDLIN(1726)		if ((this->buffer->width != 0)) {
HXDLIN(1726)			_hx_tmp = ((this->buffer->width & (~(this->buffer->width) + 1)) == this->buffer->width);
            		}
            		else {
HXDLIN(1726)			_hx_tmp = false;
            		}
HXDLIN(1726)		if (_hx_tmp) {
HXLINE(1728)			if ((this->buffer->height != 0)) {
HXLINE(1728)				return ((this->buffer->height & (~(this->buffer->height) + 1)) == this->buffer->height);
            			}
            			else {
HXLINE(1728)				return false;
            			}
            		}
            		else {
HXDLIN(1726)			return false;
            		}
HXDLIN(1726)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_powerOfTwo,return )

bool Image_obj::set_powerOfTwo(bool value){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1732_set_powerOfTwo)
HXLINE(1733)		if ((value != this->get_powerOfTwo())) {
HXLINE(1735)			int newWidth = 1;
HXLINE(1736)			int newHeight = 1;
HXLINE(1738)			while((newWidth < this->buffer->width)){
HXLINE(1740)				newWidth = (newWidth << 1);
            			}
HXLINE(1743)			while((newHeight < this->buffer->height)){
HXLINE(1745)				newHeight = (newHeight << 1);
            			}
HXLINE(1748)			bool _hx_tmp;
HXDLIN(1748)			if ((newWidth == this->buffer->width)) {
HXLINE(1748)				_hx_tmp = (newHeight == this->buffer->height);
            			}
            			else {
HXLINE(1748)				_hx_tmp = false;
            			}
HXDLIN(1748)			if (_hx_tmp) {
HXLINE(1750)				return value;
            			}
HXLINE(1753)			switch((int)(this->type->_hx_getIndex())){
            				case (int)0: {
HXLINE(1759)					::lime::_internal::graphics::ImageDataUtil_obj::resizeBuffer(::hx::ObjectPtr<OBJ_>(this),newWidth,newHeight);
            				}
            				break;
            				case (int)1: {
HXLINE(1762)					::lime::_internal::graphics::ImageDataUtil_obj::resizeBuffer(::hx::ObjectPtr<OBJ_>(this),newWidth,newHeight);
            				}
            				break;
            				case (int)2: {
            				}
            				break;
            				default:{
            				}
            			}
            		}
HXLINE(1778)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_powerOfTwo,return )

bool Image_obj::get_premultiplied(){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1783_get_premultiplied)
HXDLIN(1783)		return this->buffer->premultiplied;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_premultiplied,return )

bool Image_obj::set_premultiplied(bool value){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1787_set_premultiplied)
HXLINE(1788)		bool _hx_tmp;
HXDLIN(1788)		if (value) {
HXLINE(1788)			_hx_tmp = !(this->buffer->premultiplied);
            		}
            		else {
HXLINE(1788)			_hx_tmp = false;
            		}
HXDLIN(1788)		if (_hx_tmp) {
HXLINE(1790)			switch((int)(this->type->_hx_getIndex())){
            				case (int)0: case (int)1: {
HXLINE(1797)					::lime::_internal::graphics::ImageDataUtil_obj::multiplyAlpha(::hx::ObjectPtr<OBJ_>(this));
            				}
            				break;
            				default:{
            				}
            			}
            		}
            		else {
HXLINE(1803)			bool _hx_tmp;
HXDLIN(1803)			if (!(value)) {
HXLINE(1803)				_hx_tmp = this->buffer->premultiplied;
            			}
            			else {
HXLINE(1803)				_hx_tmp = false;
            			}
HXDLIN(1803)			if (_hx_tmp) {
HXLINE(1805)				if ((this->type->_hx_getIndex() == 1)) {
HXLINE(1812)					::lime::_internal::graphics::ImageDataUtil_obj::unmultiplyAlpha(::hx::ObjectPtr<OBJ_>(this));
            				}
            			}
            		}
HXLINE(1819)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_premultiplied,return )

 ::lime::math::Rectangle Image_obj::get_rect(){
            	HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1824_get_rect)
HXDLIN(1824)		return  ::lime::math::Rectangle_obj::__alloc( HX_CTX ,0,0,this->width,this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_rect,return )

 ::Dynamic Image_obj::get_src(){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1836_get_src)
HXDLIN(1836)		return this->buffer->get_src();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_src,return )

 ::Dynamic Image_obj::set_src( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1841_set_src)
HXDLIN(1841)		return this->buffer->set_src(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_src,return )

bool Image_obj::get_transparent(){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1845_get_transparent)
HXLINE(1846)		if (::hx::IsNull( this->buffer )) {
HXLINE(1846)			return false;
            		}
HXLINE(1847)		return this->buffer->transparent;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_transparent,return )

bool Image_obj::set_transparent(bool value){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1851_set_transparent)
HXLINE(1853)		if (::hx::IsNull( this->buffer )) {
HXLINE(1853)			return false;
            		}
HXLINE(1854)		return (this->buffer->transparent = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_transparent,return )

 ::lime::graphics::Image Image_obj::fromBase64(::String base64,::String type){
            	HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_621_fromBase64)
HXLINE( 622)		if (::hx::IsNull( base64 )) {
HXLINE( 622)			return null();
            		}
HXLINE( 623)		 ::lime::graphics::Image image =  ::lime::graphics::Image_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null());
HXLINE( 624)		image->_hx___fromBase64(base64,type,null());
HXLINE( 625)		return image;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Image_obj,fromBase64,return )

 ::lime::graphics::Image Image_obj::fromBitmapData( ::Dynamic bitmapData){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_635_fromBitmapData)
HXLINE( 636)		if (::hx::IsNull( bitmapData )) {
HXLINE( 636)			return null();
            		}
HXLINE( 643)		return ( ( ::lime::graphics::Image)(bitmapData->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromBitmapData,return )

 ::lime::graphics::Image Image_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_660_fromBytes)
HXLINE( 661)		if (::hx::IsNull( bytes )) {
HXLINE( 661)			return null();
            		}
HXLINE( 662)		 ::lime::graphics::Image image =  ::lime::graphics::Image_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null());
HXLINE( 663)		if (image->_hx___fromBytes(bytes,null())) {
HXLINE( 665)			return image;
            		}
            		else {
HXLINE( 669)			return null();
            		}
HXLINE( 663)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromBytes,return )

 ::lime::graphics::Image Image_obj::fromCanvas( ::Dynamic canvas){
            	HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_680_fromCanvas)
HXLINE( 681)		if (::hx::IsNull( canvas )) {
HXLINE( 681)			return null();
            		}
HXLINE( 682)		 ::lime::graphics::ImageBuffer buffer =  ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,null(),canvas->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic),canvas->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic),null(),null());
HXLINE( 683)		buffer->set_src(canvas);
HXLINE( 684)		 ::lime::graphics::Image image =  ::lime::graphics::Image_obj::__alloc( HX_CTX ,buffer,null(),null(),null(),null(),null(),null());
HXLINE( 686)		image->type = ::lime::graphics::ImageType_obj::CANVAS_dyn();
HXLINE( 687)		return image;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromCanvas,return )

 ::lime::graphics::Image Image_obj::fromFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_703_fromFile)
HXLINE( 704)		if (::hx::IsNull( path )) {
HXLINE( 704)			return null();
            		}
HXLINE( 705)		 ::lime::graphics::Image image =  ::lime::graphics::Image_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null());
HXLINE( 706)		if (image->_hx___fromFile(path,null(),null())) {
HXLINE( 708)			return image;
            		}
            		else {
HXLINE( 712)			return null();
            		}
HXLINE( 706)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromFile,return )

 ::lime::graphics::Image Image_obj::fromImageElement( ::Dynamic image){
            	HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_723_fromImageElement)
HXLINE( 724)		if (::hx::IsNull( image )) {
HXLINE( 724)			return null();
            		}
HXLINE( 725)		 ::lime::graphics::ImageBuffer buffer =  ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,null(),image->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic),image->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic),null(),null());
HXLINE( 726)		buffer->set_src(image);
HXLINE( 727)		 ::lime::graphics::Image _image =  ::lime::graphics::Image_obj::__alloc( HX_CTX ,buffer,null(),null(),null(),null(),null(),null());
HXLINE( 729)		_image->type = ::lime::graphics::ImageType_obj::CANVAS_dyn();
HXLINE( 730)		return _image;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromImageElement,return )

 ::lime::app::Future Image_obj::loadFromBase64(::String base64,::String type){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_926_loadFromBase64)
HXLINE( 927)		bool _hx_tmp;
HXDLIN( 927)		if (::hx::IsNotNull( base64 )) {
HXLINE( 927)			_hx_tmp = ::hx::IsNull( type );
            		}
            		else {
HXLINE( 927)			_hx_tmp = true;
            		}
HXDLIN( 927)		if (_hx_tmp) {
HXLINE( 927)			return ::lime::app::Future_obj::withValue(null());
            		}
HXLINE( 932)		if (::hx::IsNotNull( base64 )) {
HXLINE( 934)			return ::lime::graphics::Image_obj::loadFromBytes(::lime::_internal::format::Base64_obj::decode(base64));
            		}
            		else {
HXLINE( 938)			return ::lime::app::Future_obj::withError(HX_("",00,00,00,00));
            		}
HXLINE( 932)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Image_obj,loadFromBase64,return )

 ::lime::app::Future Image_obj::loadFromBytes( ::haxe::io::Bytes bytes){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::io::Bytes,bytes1) HXARGC(0)
            		 ::lime::graphics::Image _hx_run(){
            			HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1005_loadFromBytes)
HXLINE(1005)			return ::lime::graphics::Image_obj::fromBytes(bytes1);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_949_loadFromBytes)
HXLINE( 950)		if (::hx::IsNull( bytes )) {
HXLINE( 950)			return ::lime::app::Future_obj::withValue(null());
            		}
HXLINE(1005)		 ::haxe::io::Bytes bytes1 = bytes;
HXDLIN(1005)		return  ::lime::app::Future_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(bytes1)),true);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,loadFromBytes,return )

 ::lime::app::Future Image_obj::loadFromFile(::String path){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::graphics::Image image){
            			HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1047_loadFromFile)
HXLINE(1047)			if (::hx::IsNotNull( image )) {
HXLINE(1049)				return ::lime::app::Future_obj::withValue(image);
            			}
            			else {
HXLINE(1053)				return ::lime::app::Future_obj::withError(HX_("",00,00,00,00));
            			}
HXLINE(1047)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1015_loadFromFile)
HXLINE(1016)		if (::hx::IsNull( path )) {
HXLINE(1016)			return ::lime::app::Future_obj::withValue(null());
            		}
HXLINE(1044)		 ::lime::net::_HTTPRequest_lime_graphics_Image request =  ::lime::net::_HTTPRequest_lime_graphics_Image_obj::__alloc( HX_CTX ,null());
HXLINE(1045)		return request->load(path)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,loadFromFile,return )

bool Image_obj::_hx___isGIF( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1650___isGIF)
HXLINE(1651)		bool _hx_tmp;
HXDLIN(1651)		if (::hx::IsNotNull( bytes )) {
HXLINE(1651)			_hx_tmp = (bytes->length < 6);
            		}
            		else {
HXLINE(1651)			_hx_tmp = true;
            		}
HXDLIN(1651)		if (_hx_tmp) {
HXLINE(1651)			return false;
            		}
HXLINE(1653)		::String header = bytes->getString(0,6,null());
HXLINE(1654)		if ((header != HX_("GIF87a",1e,95,06,9a))) {
HXLINE(1654)			return (header == HX_("GIF89a",dc,96,06,9a));
            		}
            		else {
HXLINE(1654)			return true;
            		}
HXDLIN(1654)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,_hx___isGIF,return )

bool Image_obj::_hx___isJPG( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1658___isJPG)
HXLINE(1659)		bool _hx_tmp;
HXDLIN(1659)		if (::hx::IsNotNull( bytes )) {
HXLINE(1659)			_hx_tmp = (bytes->length < 4);
            		}
            		else {
HXLINE(1659)			_hx_tmp = true;
            		}
HXDLIN(1659)		if (_hx_tmp) {
HXLINE(1659)			return false;
            		}
HXLINE(1661)		bool _hx_tmp1;
HXDLIN(1661)		bool _hx_tmp2;
HXDLIN(1661)		if ((bytes->b->__get(0) == 255)) {
HXLINE(1661)			_hx_tmp2 = (bytes->b->__get(1) == 216);
            		}
            		else {
HXLINE(1661)			_hx_tmp2 = false;
            		}
HXDLIN(1661)		if (_hx_tmp2) {
HXLINE(1661)			_hx_tmp1 = (bytes->b->__get((bytes->length - 2)) == 255);
            		}
            		else {
HXLINE(1661)			_hx_tmp1 = false;
            		}
HXDLIN(1661)		if (_hx_tmp1) {
HXLINE(1664)			return (bytes->b->__get((bytes->length - 1)) == 217);
            		}
            		else {
HXLINE(1661)			return false;
            		}
HXDLIN(1661)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,_hx___isJPG,return )

bool Image_obj::_hx___isPNG( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1668___isPNG)
HXLINE(1669)		bool _hx_tmp;
HXDLIN(1669)		if (::hx::IsNotNull( bytes )) {
HXLINE(1669)			_hx_tmp = (bytes->length < 8);
            		}
            		else {
HXLINE(1669)			_hx_tmp = true;
            		}
HXDLIN(1669)		if (_hx_tmp) {
HXLINE(1669)			return false;
            		}
HXLINE(1671)		bool _hx_tmp1;
HXDLIN(1671)		bool _hx_tmp2;
HXDLIN(1671)		bool _hx_tmp3;
HXDLIN(1671)		bool _hx_tmp4;
HXDLIN(1671)		bool _hx_tmp5;
HXDLIN(1671)		bool _hx_tmp6;
HXDLIN(1671)		if ((bytes->b->__get(0) == 137)) {
HXLINE(1671)			_hx_tmp6 = (bytes->b->__get(1) == 80);
            		}
            		else {
HXLINE(1671)			_hx_tmp6 = false;
            		}
HXDLIN(1671)		if (_hx_tmp6) {
HXLINE(1671)			_hx_tmp5 = (bytes->b->__get(2) == 78);
            		}
            		else {
HXLINE(1671)			_hx_tmp5 = false;
            		}
HXDLIN(1671)		if (_hx_tmp5) {
HXLINE(1671)			_hx_tmp4 = (bytes->b->__get(3) == 71);
            		}
            		else {
HXLINE(1671)			_hx_tmp4 = false;
            		}
HXDLIN(1671)		if (_hx_tmp4) {
HXLINE(1671)			_hx_tmp3 = (bytes->b->__get(4) == 13);
            		}
            		else {
HXLINE(1671)			_hx_tmp3 = false;
            		}
HXDLIN(1671)		if (_hx_tmp3) {
HXLINE(1671)			_hx_tmp2 = (bytes->b->__get(5) == 10);
            		}
            		else {
HXLINE(1671)			_hx_tmp2 = false;
            		}
HXDLIN(1671)		if (_hx_tmp2) {
HXLINE(1671)			_hx_tmp1 = (bytes->b->__get(6) == 26);
            		}
            		else {
HXLINE(1671)			_hx_tmp1 = false;
            		}
HXDLIN(1671)		if (_hx_tmp1) {
HXLINE(1672)			return (bytes->b->__get(7) == 10);
            		}
            		else {
HXLINE(1671)			return false;
            		}
HXDLIN(1671)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,_hx___isPNG,return )

bool Image_obj::_hx___isWebP( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_ef8f6e7e24e3b831_1676___isWebP)
HXLINE(1677)		bool _hx_tmp;
HXDLIN(1677)		if (::hx::IsNotNull( bytes )) {
HXLINE(1677)			_hx_tmp = (bytes->length < 16);
            		}
            		else {
HXLINE(1677)			_hx_tmp = true;
            		}
HXDLIN(1677)		if (_hx_tmp) {
HXLINE(1677)			return false;
            		}
HXLINE(1679)		if ((bytes->getString(0,4,null()) == HX_("RIFF",b7,20,6b,36))) {
HXLINE(1679)			return (bytes->getString(8,4,null()) == HX_("WEBP",5c,25,b6,39));
            		}
            		else {
HXLINE(1679)			return false;
            		}
HXDLIN(1679)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,_hx___isWebP,return )


::hx::ObjectPtr< Image_obj > Image_obj::__new( ::lime::graphics::ImageBuffer buffer,::hx::Null< int >  __o_offsetX,::hx::Null< int >  __o_offsetY,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic color, ::lime::graphics::ImageType type) {
	::hx::ObjectPtr< Image_obj > __this = new Image_obj();
	__this->__construct(buffer,__o_offsetX,__o_offsetY,__o_width,__o_height,color,type);
	return __this;
}

::hx::ObjectPtr< Image_obj > Image_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::graphics::ImageBuffer buffer,::hx::Null< int >  __o_offsetX,::hx::Null< int >  __o_offsetY,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic color, ::lime::graphics::ImageType type) {
	Image_obj *__this = (Image_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Image_obj), true, "lime.graphics.Image"));
	*(void **)__this = Image_obj::_hx_vtable;
	__this->__construct(buffer,__o_offsetX,__o_offsetY,__o_width,__o_height,color,type);
	return __this;
}

Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

::hx::Val Image_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_src() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_data() ); }
		if (HX_FIELD_EQ(inName,"rect") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_rect() : rect ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return ::hx::Val( dirty ); }
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"merge") ) { return ::hx::Val( merge_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"format") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_format() ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"encode") ) { return ::hx::Val( encode_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return ::hx::Val( scroll_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
		if (HX_FIELD_EQ(inName,"get_src") ) { return ::hx::Val( get_src_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return ::hx::Val( set_src_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { return ::hx::Val( fillRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return ::hx::Val( getPixel_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return ::hx::Val( setPixel_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return ::hx::Val( get_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return ::hx::Val( set_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return ::hx::Val( get_rect_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { return ::hx::Val( floodFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return ::hx::Val( getPixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return ::hx::Val( setPixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return ::hx::Val( threshold_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_powerOfTwo() ); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return ::hx::Val( copyPixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return ::hx::Val( getPixel32_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return ::hx::Val( setPixel32_dyn() ); }
		if (HX_FIELD_EQ(inName,"__clipRect") ) { return ::hx::Val( _hx___clipRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return ::hx::Val( _hx___fromFile_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_format") ) { return ::hx::Val( get_format_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_format") ) { return ::hx::Val( set_format_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_transparent() ); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return ::hx::Val( copyChannel_dyn() ); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return ::hx::Val( _hx___fromBytes_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return ::hx::Val( _hx___fromBase64_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_premultiplied() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return ::hx::Val( colorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_powerOfTwo") ) { return ::hx::Val( get_powerOfTwo_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_powerOfTwo") ) { return ::hx::Val( set_powerOfTwo_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_transparent") ) { return ::hx::Val( get_transparent_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_transparent") ) { return ::hx::Val( set_transparent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__fromImageBuffer") ) { return ::hx::Val( _hx___fromImageBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_premultiplied") ) { return ::hx::Val( get_premultiplied_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_premultiplied") ) { return ::hx::Val( set_premultiplied_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return ::hx::Val( getColorBoundsRect_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Image_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__isGIF") ) { outValue = _hx___isGIF_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__isJPG") ) { outValue = _hx___isJPG_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__isPNG") ) { outValue = _hx___isPNG_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__isWebP") ) { outValue = _hx___isWebP_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { outValue = fromBase64_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromCanvas") ) { outValue = fromCanvas_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { outValue = fromBitmapData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFromBase64") ) { outValue = loadFromBase64_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromImageElement") ) { outValue = fromImageElement_dyn(); return true; }
	}
	return false;
}

::hx::Val Image_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_src(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_data(inValue.Cast<  ::lime::utils::ArrayBufferView >()) ); }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast<  ::lime::math::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::lime::graphics::ImageType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::lime::graphics::ImageBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_format(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_powerOfTwo(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_transparent(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_premultiplied(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("dirty",12,50,d0,d9));
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	outFields->push(HX_("powerOfTwo",70,be,ae,ea));
	outFields->push(HX_("premultiplied",56,f1,4e,a4));
	outFields->push(HX_("rect",24,4d,a7,4b));
	outFields->push(HX_("src",e4,a6,57,00));
	outFields->push(HX_("transparent",52,2b,ba,22));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("version",18,e7,f1,7c));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Image_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::lime::graphics::ImageBuffer */ ,(int)offsetof(Image_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsBool,(int)offsetof(Image_obj,dirty),HX_("dirty",12,50,d0,d9)},
	{::hx::fsInt,(int)offsetof(Image_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(Image_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsInt,(int)offsetof(Image_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{::hx::fsObject /*  ::lime::math::Rectangle */ ,(int)offsetof(Image_obj,rect),HX_("rect",24,4d,a7,4b)},
	{::hx::fsObject /*  ::lime::graphics::ImageType */ ,(int)offsetof(Image_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsInt,(int)offsetof(Image_obj,version),HX_("version",18,e7,f1,7c)},
	{::hx::fsInt,(int)offsetof(Image_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(Image_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Image_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Image_obj_sStaticStorageInfo = 0;
#endif

static ::String Image_obj_sMemberFields[] = {
	HX_("buffer",00,bd,94,d0),
	HX_("dirty",12,50,d0,d9),
	HX_("height",e7,07,4c,02),
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("rect",24,4d,a7,4b),
	HX_("type",ba,f2,08,4d),
	HX_("version",18,e7,f1,7c),
	HX_("width",06,b6,62,ca),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("clone",5d,13,63,48),
	HX_("colorTransform",89,d7,3f,ad),
	HX_("copyChannel",8e,7d,e6,22),
	HX_("copyPixels",c2,54,6e,42),
	HX_("encode",16,f2,e3,f9),
	HX_("fillRect",47,45,b9,6c),
	HX_("floodFill",61,83,8a,59),
	HX_("getColorBoundsRect",86,ad,e8,80),
	HX_("getPixel",10,d6,7a,22),
	HX_("getPixel32",af,a6,68,d7),
	HX_("getPixels",63,78,00,09),
	HX_("merge",b8,a2,c6,05),
	HX_("resize",f4,59,7b,08),
	HX_("scroll",0d,d8,64,47),
	HX_("setPixel",84,2f,d8,d0),
	HX_("setPixel32",23,45,e6,da),
	HX_("setPixels",6f,64,51,ec),
	HX_("threshold",ab,c3,a3,34),
	HX_("__clipRect",34,03,a3,fb),
	HX_("__fromBase64",b9,7d,ff,d0),
	HX_("__fromBytes",81,3b,4d,a0),
	HX_("__fromFile",26,10,c0,44),
	HX_("__fromImageBuffer",51,6e,ca,ca),
	HX_("get_data",b3,11,1e,c2),
	HX_("set_data",27,6b,7b,70),
	HX_("get_format",00,ff,15,ee),
	HX_("set_format",74,9d,93,f1),
	HX_("get_powerOfTwo",b9,46,a4,60),
	HX_("set_powerOfTwo",2d,2f,c4,80),
	HX_("get_premultiplied",ad,fc,be,aa),
	HX_("set_premultiplied",b9,d4,2c,ce),
	HX_("get_rect",ad,08,62,cb),
	HX_("get_src",7b,6f,cc,26),
	HX_("set_src",87,00,ce,19),
	HX_("get_transparent",e9,e2,9b,e3),
	HX_("set_transparent",f5,5f,67,df),
	::String(null()) };

::hx::Class Image_obj::__mClass;

static ::String Image_obj_sStaticFields[] = {
	HX_("fromBase64",99,02,6c,98),
	HX_("fromBitmapData",c3,07,ed,2b),
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromCanvas",e2,59,86,fb),
	HX_("fromFile",06,9d,87,a1),
	HX_("fromImageElement",2b,91,89,8f),
	HX_("loadFromBase64",5f,0c,1d,2f),
	HX_("loadFromBytes",9b,c3,86,f4),
	HX_("loadFromFile",4c,89,f0,5a),
	HX_("__isGIF",1a,eb,aa,2b),
	HX_("__isJPG",f7,37,ad,2b),
	HX_("__isPNG",bf,c3,b1,2b),
	HX_("__isWebP",66,8d,8b,14),
	::String(null())
};

void Image_obj::__register()
{
	Image_obj _hx_dummy;
	Image_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.Image",91,28,c1,9c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Image_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Image_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Image_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Image_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Image_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Image_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
