#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math__Matrix3_Matrix3_Impl_
#include <lime/math/_Matrix3/Matrix3_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoDisplayObject
#include <openfl/display/_internal/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoTextField
#include <openfl/display/_internal/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoTilemap
#include <openfl/display/_internal/CairoTilemap.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_765a23aeaf3cad17_52_new,"openfl.display.CairoRenderer","new",0x224c60b3,"openfl.display.CairoRenderer.new","openfl/display/CairoRenderer.hx",52,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_71_applyMatrix,"openfl.display.CairoRenderer","applyMatrix",0x011091a2,"openfl.display.CairoRenderer.applyMatrix","openfl/display/CairoRenderer.hx",71,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_101___clear,"openfl.display.CairoRenderer","__clear",0xae7c8040,"openfl.display.CairoRenderer.__clear","openfl/display/CairoRenderer.hx",101,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_120___popMask,"openfl.display.CairoRenderer","__popMask",0x3e99c890,"openfl.display.CairoRenderer.__popMask","openfl/display/CairoRenderer.hx",120,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_124___popMaskObject,"openfl.display.CairoRenderer","__popMaskObject",0x2a06876f,"openfl.display.CairoRenderer.__popMaskObject","openfl/display/CairoRenderer.hx",124,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_138___popMaskRect,"openfl.display.CairoRenderer","__popMaskRect",0x4351c9d4,"openfl.display.CairoRenderer.__popMaskRect","openfl/display/CairoRenderer.hx",138,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_142___pushMask,"openfl.display.CairoRenderer","__pushMask",0x33145713,"openfl.display.CairoRenderer.__pushMask","openfl/display/CairoRenderer.hx",142,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_153___pushMaskObject,"openfl.display.CairoRenderer","__pushMaskObject",0xe55b5a32,"openfl.display.CairoRenderer.__pushMaskObject","openfl/display/CairoRenderer.hx",153,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_166___pushMaskRect,"openfl.display.CairoRenderer","__pushMaskRect",0x50a955d7,"openfl.display.CairoRenderer.__pushMaskRect","openfl/display/CairoRenderer.hx",166,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_177___render,"openfl.display.CairoRenderer","__render",0xfbf53943,"openfl.display.CairoRenderer.__render","openfl/display/CairoRenderer.hx",177,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_184___renderDrawable,"openfl.display.CairoRenderer","__renderDrawable",0xb22f5c01,"openfl.display.CairoRenderer.__renderDrawable","openfl/display/CairoRenderer.hx",184,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_210___renderDrawableMask,"openfl.display.CairoRenderer","__renderDrawableMask",0x99a35d8d,"openfl.display.CairoRenderer.__renderDrawableMask","openfl/display/CairoRenderer.hx",210,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_236___setBlendMode,"openfl.display.CairoRenderer","__setBlendMode",0x010a21ff,"openfl.display.CairoRenderer.__setBlendMode","openfl/display/CairoRenderer.hx",236,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_248___setBlendModeCairo,"openfl.display.CairoRenderer","__setBlendModeCairo",0x8ae5e209,"openfl.display.CairoRenderer.__setBlendModeCairo","openfl/display/CairoRenderer.hx",248,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_39_boot,"openfl.display.CairoRenderer","boot",0xd8a13c7f,"openfl.display.CairoRenderer.boot","openfl/display/CairoRenderer.hx",39,0x013a831f)
namespace openfl{
namespace display{

void CairoRenderer_obj::__construct( ::lime::graphics::cairo::Cairo cairo){
            	HX_GC_STACKFRAME(&_hx_pos_765a23aeaf3cad17_52_new)
HXLINE(  53)		super::__construct();
HXLINE(  56)		this->cairo = cairo;
HXLINE(  58)		this->_hx___matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  59)		this->_hx___matrix3 = ::lime::math::_Matrix3::Matrix3_Impl__obj::_new(null(),null(),null(),null(),null(),null());
HXLINE(  61)		this->_hx___type = HX_("cairo",88,30,19,41);
            	}

Dynamic CairoRenderer_obj::__CreateEmpty() { return new CairoRenderer_obj; }

void *CairoRenderer_obj::_hx_vtable = 0;

Dynamic CairoRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoRenderer_obj > _hx_result = new CairoRenderer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CairoRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e1d6819) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x2e1d6819;
		}
	} else {
		return inClassId==(int)0x49529132;
	}
}

void CairoRenderer_obj::applyMatrix( ::openfl::geom::Matrix transform, ::lime::graphics::cairo::Cairo cairo){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_71_applyMatrix)
HXLINE(  72)		if (::hx::IsNull( cairo )) {
HXLINE(  72)			cairo = this->cairo;
            		}
HXLINE(  74)		this->_hx___matrix->copyFrom(transform);
HXLINE(  76)		bool _hx_tmp;
HXDLIN(  76)		if (::hx::IsInstanceEq( this->cairo,cairo )) {
HXLINE(  76)			_hx_tmp = ::hx::IsNotNull( this->_hx___worldTransform );
            		}
            		else {
HXLINE(  76)			_hx_tmp = false;
            		}
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  78)			this->_hx___matrix->concat(this->_hx___worldTransform);
            		}
HXLINE(  81)		{
HXLINE(  81)			 ::lime::utils::ArrayBufferView this1 = this->_hx___matrix3;
HXDLIN(  81)			Float value = this->_hx___matrix->a;
HXDLIN(  81)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value);
            		}
HXLINE(  82)		{
HXLINE(  82)			 ::lime::utils::ArrayBufferView this2 = this->_hx___matrix3;
HXDLIN(  82)			Float value1 = this->_hx___matrix->b;
HXDLIN(  82)			 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),value1);
            		}
HXLINE(  83)		{
HXLINE(  83)			 ::lime::utils::ArrayBufferView this3 = this->_hx___matrix3;
HXDLIN(  83)			Float value2 = this->_hx___matrix->c;
HXDLIN(  83)			 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 12),value2);
            		}
HXLINE(  84)		{
HXLINE(  84)			 ::lime::utils::ArrayBufferView this4 = this->_hx___matrix3;
HXDLIN(  84)			Float value3 = this->_hx___matrix->d;
HXDLIN(  84)			 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 16),value3);
            		}
HXLINE(  86)		if (this->_hx___roundPixels) {
HXLINE(  88)			{
HXLINE(  88)				 ::lime::utils::ArrayBufferView this1 = this->_hx___matrix3;
HXDLIN(  88)				Float value = ( (Float)(::Math_obj::round(this->_hx___matrix->tx)) );
HXDLIN(  88)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),value);
            			}
HXLINE(  89)			{
HXLINE(  89)				 ::lime::utils::ArrayBufferView this2 = this->_hx___matrix3;
HXDLIN(  89)				Float value1 = ( (Float)(::Math_obj::round(this->_hx___matrix->ty)) );
HXDLIN(  89)				 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 28),value1);
            			}
            		}
            		else {
HXLINE(  93)			{
HXLINE(  93)				 ::lime::utils::ArrayBufferView this1 = this->_hx___matrix3;
HXDLIN(  93)				Float value = this->_hx___matrix->tx;
HXDLIN(  93)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),value);
            			}
HXLINE(  94)			{
HXLINE(  94)				 ::lime::utils::ArrayBufferView this2 = this->_hx___matrix3;
HXDLIN(  94)				Float value1 = this->_hx___matrix->ty;
HXDLIN(  94)				 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 28),value1);
            			}
            		}
HXLINE(  97)		cairo->set_matrix(this->_hx___matrix3);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CairoRenderer_obj,applyMatrix,(void))

void CairoRenderer_obj::_hx___clear(){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_101___clear)
HXLINE( 102)		if (::hx::IsNull( this->cairo )) {
HXLINE( 102)			return;
            		}
HXLINE( 104)		this->cairo->identityMatrix();
HXLINE( 106)		bool _hx_tmp;
HXDLIN( 106)		if (::hx::IsNotNull( this->_hx___stage )) {
HXLINE( 106)			_hx_tmp = this->_hx___stage->_hx___clearBeforeRender;
            		}
            		else {
HXLINE( 106)			_hx_tmp = false;
            		}
HXDLIN( 106)		if (_hx_tmp) {
HXLINE( 108)			 ::Dynamic cacheBlendMode = this->_hx___blendMode;
HXLINE( 109)			this->_hx___setBlendMode(10);
HXLINE( 111)			this->cairo->setSourceRGB(this->_hx___stage->_hx___colorSplit->__get(0),this->_hx___stage->_hx___colorSplit->__get(1),this->_hx___stage->_hx___colorSplit->__get(2));
HXLINE( 112)			this->cairo->paint();
HXLINE( 114)			this->_hx___setBlendMode(cacheBlendMode);
            		}
            	}


void CairoRenderer_obj::_hx___popMask(){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_120___popMask)
HXDLIN( 120)		this->cairo->restore();
            	}


void CairoRenderer_obj::_hx___popMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  __o_handleScrollRect){
            		bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_124___popMaskObject)
HXLINE( 125)		bool _hx_tmp;
HXDLIN( 125)		if (!(object->_hx___isCacheBitmapRender)) {
HXLINE( 125)			_hx_tmp = ::hx::IsNotNull( object->_hx___mask );
            		}
            		else {
HXLINE( 125)			_hx_tmp = false;
            		}
HXDLIN( 125)		if (_hx_tmp) {
HXLINE( 127)			this->_hx___popMask();
            		}
HXLINE( 130)		bool _hx_tmp1;
HXDLIN( 130)		if (handleScrollRect) {
HXLINE( 130)			_hx_tmp1 = ::hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE( 130)			_hx_tmp1 = false;
            		}
HXDLIN( 130)		if (_hx_tmp1) {
HXLINE( 132)			this->_hx___popMaskRect();
            		}
            	}


void CairoRenderer_obj::_hx___popMaskRect(){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_138___popMaskRect)
HXDLIN( 138)		this->cairo->restore();
            	}


void CairoRenderer_obj::_hx___pushMask( ::openfl::display::DisplayObject mask){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_142___pushMask)
HXLINE( 143)		this->cairo->save();
HXLINE( 145)		this->applyMatrix(mask->_hx___renderTransform,this->cairo);
HXLINE( 147)		this->cairo->newPath();
HXLINE( 148)		this->_hx___renderDrawableMask(mask);
HXLINE( 149)		this->cairo->clip();
            	}


void CairoRenderer_obj::_hx___pushMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  __o_handleScrollRect){
            		bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_153___pushMaskObject)
HXLINE( 154)		bool _hx_tmp;
HXDLIN( 154)		if (handleScrollRect) {
HXLINE( 154)			_hx_tmp = ::hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE( 154)			_hx_tmp = false;
            		}
HXDLIN( 154)		if (_hx_tmp) {
HXLINE( 156)			this->_hx___pushMaskRect(object->_hx___scrollRect,object->_hx___renderTransform);
            		}
HXLINE( 159)		bool _hx_tmp1;
HXDLIN( 159)		if (!(object->_hx___isCacheBitmapRender)) {
HXLINE( 159)			_hx_tmp1 = ::hx::IsNotNull( object->_hx___mask );
            		}
            		else {
HXLINE( 159)			_hx_tmp1 = false;
            		}
HXDLIN( 159)		if (_hx_tmp1) {
HXLINE( 161)			this->_hx___pushMask(object->_hx___mask);
            		}
            	}


void CairoRenderer_obj::_hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_166___pushMaskRect)
HXLINE( 167)		this->cairo->save();
HXLINE( 169)		this->applyMatrix(transform,this->cairo);
HXLINE( 171)		this->cairo->newPath();
HXLINE( 172)		this->cairo->rectangle(rect->x,rect->y,rect->width,rect->height);
HXLINE( 173)		this->cairo->clip();
            	}


void CairoRenderer_obj::_hx___render(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_177___render)
HXLINE( 178)		if (::hx::IsNull( this->cairo )) {
HXLINE( 178)			return;
            		}
HXLINE( 180)		this->_hx___renderDrawable(object);
            	}


void CairoRenderer_obj::_hx___renderDrawable(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_184___renderDrawable)
HXLINE( 185)		if (::hx::IsNull( object )) {
HXLINE( 185)			return;
            		}
HXLINE( 187)		switch((int)(( (int)(object->__Field(HX_("__drawableType",98,b4,3c,42),::hx::paccDynamic)) ))){
            			case (int)0: {
HXLINE( 190)				 ::openfl::display::BitmapData bitmapData = ( ( ::openfl::display::BitmapData)(object) );
HXDLIN( 190)				if (bitmapData->readable) {
HXLINE( 190)					 ::lime::graphics::cairo::Cairo cairo = this->cairo;
HXDLIN( 190)					this->applyMatrix(bitmapData->_hx___renderTransform,cairo);
HXDLIN( 190)					 ::Dynamic surface = bitmapData->getSurface();
HXDLIN( 190)					if (::hx::IsNotNull( surface )) {
HXLINE( 190)						 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 190)						bool _hx_tmp;
HXDLIN( 190)						if (this->_hx___allowSmoothing) {
HXLINE( 190)							_hx_tmp = (cairo->get_antialias() == 1);
            						}
            						else {
HXLINE( 190)							_hx_tmp = true;
            						}
HXDLIN( 190)						if (_hx_tmp) {
HXLINE( 190)							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,3);
            						}
            						else {
HXLINE( 190)							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,1);
            						}
HXDLIN( 190)						cairo->set_source(pattern);
HXDLIN( 190)						cairo->paint();
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 194)				 ::openfl::display::Bitmap bitmap = ( ( ::openfl::display::Bitmap)(object) );
HXDLIN( 194)				this->_hx___updateCacheBitmap(bitmap,false);
HXDLIN( 194)				 ::openfl::display::BitmapData _hx___bitmapData = bitmap->_hx___bitmapData;
HXDLIN( 194)				 ::openfl::display::Bitmap _hx___cacheBitmap = bitmap->_hx___cacheBitmap;
HXDLIN( 194)				bool _hx_tmp;
HXDLIN( 194)				if (::hx::IsNotNull( _hx___bitmapData )) {
HXLINE( 194)					_hx_tmp = ::hx::IsNotNull( _hx___bitmapData->image );
            				}
            				else {
HXLINE( 194)					_hx_tmp = false;
            				}
HXDLIN( 194)				if (_hx_tmp) {
HXLINE( 194)					bitmap->_hx___imageVersion = _hx___bitmapData->image->version;
            				}
HXDLIN( 194)				bool _hx_tmp1;
HXDLIN( 194)				if (::hx::IsNotNull( _hx___cacheBitmap )) {
HXLINE( 194)					_hx_tmp1 = !(bitmap->_hx___isCacheBitmapRender);
            				}
            				else {
HXLINE( 194)					_hx_tmp1 = false;
            				}
HXDLIN( 194)				if (_hx_tmp1) {
HXLINE( 194)					if (_hx___cacheBitmap->_hx___renderable) {
HXLINE( 194)						Float alpha = this->_hx___getAlpha(_hx___cacheBitmap->_hx___worldAlpha);
HXDLIN( 194)						bool _hx_tmp;
HXDLIN( 194)						bool _hx_tmp1;
HXDLIN( 194)						if ((alpha > 0)) {
HXLINE( 194)							_hx_tmp1 = ::hx::IsNotNull( _hx___cacheBitmap->_hx___bitmapData );
            						}
            						else {
HXLINE( 194)							_hx_tmp1 = false;
            						}
HXDLIN( 194)						if (_hx_tmp1) {
HXLINE( 194)							_hx_tmp = _hx___cacheBitmap->_hx___bitmapData->_hx___isValid;
            						}
            						else {
HXLINE( 194)							_hx_tmp = false;
            						}
HXDLIN( 194)						if (_hx_tmp) {
HXLINE( 194)							 ::lime::graphics::cairo::Cairo cairo = this->cairo;
HXDLIN( 194)							this->_hx___setBlendMode(_hx___cacheBitmap->_hx___worldBlendMode);
HXDLIN( 194)							this->_hx___pushMaskObject(_hx___cacheBitmap,null());
HXDLIN( 194)							this->applyMatrix(_hx___cacheBitmap->_hx___renderTransform,cairo);
HXDLIN( 194)							 ::Dynamic surface = _hx___cacheBitmap->_hx___bitmapData->getSurface();
HXDLIN( 194)							if (::hx::IsNotNull( surface )) {
HXLINE( 194)								 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 194)								int _hx_tmp;
HXDLIN( 194)								bool _hx_tmp1;
HXDLIN( 194)								if (this->_hx___allowSmoothing) {
HXLINE( 194)									_hx_tmp1 = _hx___cacheBitmap->smoothing;
            								}
            								else {
HXLINE( 194)									_hx_tmp1 = false;
            								}
HXDLIN( 194)								if (_hx_tmp1) {
HXLINE( 194)									_hx_tmp = 1;
            								}
            								else {
HXLINE( 194)									_hx_tmp = 3;
            								}
HXDLIN( 194)								::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN( 194)								cairo->set_source(pattern);
HXDLIN( 194)								if ((alpha == 1)) {
HXLINE( 194)									cairo->paint();
            								}
            								else {
HXLINE( 194)									cairo->paintWithAlpha(alpha);
            								}
            							}
HXDLIN( 194)							this->_hx___popMaskObject(_hx___cacheBitmap,null());
HXDLIN( 194)							this->_hx___setBlendMode(10);
            						}
            					}
            				}
            				else {
HXLINE( 194)					::openfl::display::_internal::CairoDisplayObject_obj::render(bitmap,::hx::ObjectPtr<OBJ_>(this));
HXDLIN( 194)					if (bitmap->_hx___renderable) {
HXLINE( 194)						Float alpha = this->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN( 194)						bool _hx_tmp;
HXDLIN( 194)						bool _hx_tmp1;
HXDLIN( 194)						if ((alpha > 0)) {
HXLINE( 194)							_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            						}
            						else {
HXLINE( 194)							_hx_tmp1 = false;
            						}
HXDLIN( 194)						if (_hx_tmp1) {
HXLINE( 194)							_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            						}
            						else {
HXLINE( 194)							_hx_tmp = false;
            						}
HXDLIN( 194)						if (_hx_tmp) {
HXLINE( 194)							 ::lime::graphics::cairo::Cairo cairo = this->cairo;
HXDLIN( 194)							this->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN( 194)							this->_hx___pushMaskObject(bitmap,null());
HXDLIN( 194)							this->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN( 194)							 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN( 194)							if (::hx::IsNotNull( surface )) {
HXLINE( 194)								 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 194)								int _hx_tmp;
HXDLIN( 194)								bool _hx_tmp1;
HXDLIN( 194)								if (this->_hx___allowSmoothing) {
HXLINE( 194)									_hx_tmp1 = bitmap->smoothing;
            								}
            								else {
HXLINE( 194)									_hx_tmp1 = false;
            								}
HXDLIN( 194)								if (_hx_tmp1) {
HXLINE( 194)									_hx_tmp = 1;
            								}
            								else {
HXLINE( 194)									_hx_tmp = 3;
            								}
HXDLIN( 194)								::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN( 194)								cairo->set_source(pattern);
HXDLIN( 194)								if ((alpha == 1)) {
HXLINE( 194)									cairo->paint();
            								}
            								else {
HXLINE( 194)									cairo->paintWithAlpha(alpha);
            								}
            							}
HXDLIN( 194)							this->_hx___popMaskObject(bitmap,null());
HXDLIN( 194)							this->_hx___setBlendMode(10);
            						}
            					}
            				}
HXDLIN( 194)				this->_hx___renderEvent(bitmap);
            			}
            			break;
            			case (int)3: {
HXLINE( 196)				 ::openfl::display::DisplayObject displayObject = ( ( ::openfl::display::DisplayObject)(object) );
HXDLIN( 196)				this->_hx___updateCacheBitmap(displayObject,false);
HXDLIN( 196)				bool _hx_tmp;
HXDLIN( 196)				if (::hx::IsNotNull( displayObject->_hx___cacheBitmap )) {
HXLINE( 196)					_hx_tmp = !(displayObject->_hx___isCacheBitmapRender);
            				}
            				else {
HXLINE( 196)					_hx_tmp = false;
            				}
HXDLIN( 196)				if (_hx_tmp) {
HXLINE( 196)					 ::openfl::display::Bitmap bitmap = displayObject->_hx___cacheBitmap;
HXDLIN( 196)					if (bitmap->_hx___renderable) {
HXLINE( 196)						Float alpha = this->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN( 196)						bool _hx_tmp;
HXDLIN( 196)						bool _hx_tmp1;
HXDLIN( 196)						if ((alpha > 0)) {
HXLINE( 196)							_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            						}
            						else {
HXLINE( 196)							_hx_tmp1 = false;
            						}
HXDLIN( 196)						if (_hx_tmp1) {
HXLINE( 196)							_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            						}
            						else {
HXLINE( 196)							_hx_tmp = false;
            						}
HXDLIN( 196)						if (_hx_tmp) {
HXLINE( 196)							 ::lime::graphics::cairo::Cairo cairo = this->cairo;
HXDLIN( 196)							this->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN( 196)							this->_hx___pushMaskObject(bitmap,null());
HXDLIN( 196)							this->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN( 196)							 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN( 196)							if (::hx::IsNotNull( surface )) {
HXLINE( 196)								 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 196)								int _hx_tmp;
HXDLIN( 196)								bool _hx_tmp1;
HXDLIN( 196)								if (this->_hx___allowSmoothing) {
HXLINE( 196)									_hx_tmp1 = bitmap->smoothing;
            								}
            								else {
HXLINE( 196)									_hx_tmp1 = false;
            								}
HXDLIN( 196)								if (_hx_tmp1) {
HXLINE( 196)									_hx_tmp = 1;
            								}
            								else {
HXLINE( 196)									_hx_tmp = 3;
            								}
HXDLIN( 196)								::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN( 196)								cairo->set_source(pattern);
HXDLIN( 196)								if ((alpha == 1)) {
HXLINE( 196)									cairo->paint();
            								}
            								else {
HXLINE( 196)									cairo->paintWithAlpha(alpha);
            								}
            							}
HXDLIN( 196)							this->_hx___popMaskObject(bitmap,null());
HXDLIN( 196)							this->_hx___setBlendMode(10);
            						}
            					}
            				}
            				else {
HXLINE( 196)					::openfl::display::_internal::CairoDisplayObject_obj::render(displayObject,::hx::ObjectPtr<OBJ_>(this));
            				}
HXDLIN( 196)				this->_hx___renderEvent(displayObject);
            			}
            			break;
            			case (int)4: case (int)5: {
HXLINE( 192)				 ::openfl::display::DisplayObjectContainer displayObjectContainer = ( ( ::openfl::display::DisplayObjectContainer)(object) );
HXDLIN( 192)				{
HXLINE( 192)					{
HXLINE( 192)						 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN( 192)						while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 192)							 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 192)							if (::hx::IsNull( orphan1->stage )) {
HXLINE( 192)								orphan1->_hx___cleanup();
            							}
            						}
            					}
HXDLIN( 192)					displayObjectContainer->_hx___removedChildren->set_length(0);
            				}
HXDLIN( 192)				bool _hx_tmp;
HXDLIN( 192)				if (displayObjectContainer->_hx___renderable) {
HXLINE( 192)					_hx_tmp = (displayObjectContainer->_hx___worldAlpha <= 0);
            				}
            				else {
HXLINE( 192)					_hx_tmp = true;
            				}
HXDLIN( 192)				if (!(_hx_tmp)) {
HXLINE( 192)					{
HXLINE( 192)						this->_hx___updateCacheBitmap(displayObjectContainer,false);
HXDLIN( 192)						bool _hx_tmp;
HXDLIN( 192)						if (::hx::IsNotNull( displayObjectContainer->_hx___cacheBitmap )) {
HXLINE( 192)							_hx_tmp = !(displayObjectContainer->_hx___isCacheBitmapRender);
            						}
            						else {
HXLINE( 192)							_hx_tmp = false;
            						}
HXDLIN( 192)						if (_hx_tmp) {
HXLINE( 192)							 ::openfl::display::Bitmap bitmap = displayObjectContainer->_hx___cacheBitmap;
HXDLIN( 192)							if (bitmap->_hx___renderable) {
HXLINE( 192)								Float alpha = this->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN( 192)								bool _hx_tmp;
HXDLIN( 192)								bool _hx_tmp1;
HXDLIN( 192)								if ((alpha > 0)) {
HXLINE( 192)									_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            								}
            								else {
HXLINE( 192)									_hx_tmp1 = false;
            								}
HXDLIN( 192)								if (_hx_tmp1) {
HXLINE( 192)									_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            								}
            								else {
HXLINE( 192)									_hx_tmp = false;
            								}
HXDLIN( 192)								if (_hx_tmp) {
HXLINE( 192)									 ::lime::graphics::cairo::Cairo cairo = this->cairo;
HXDLIN( 192)									this->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN( 192)									this->_hx___pushMaskObject(bitmap,null());
HXDLIN( 192)									this->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN( 192)									 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN( 192)									if (::hx::IsNotNull( surface )) {
HXLINE( 192)										 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 192)										int _hx_tmp;
HXDLIN( 192)										bool _hx_tmp1;
HXDLIN( 192)										if (this->_hx___allowSmoothing) {
HXLINE( 192)											_hx_tmp1 = bitmap->smoothing;
            										}
            										else {
HXLINE( 192)											_hx_tmp1 = false;
            										}
HXDLIN( 192)										if (_hx_tmp1) {
HXLINE( 192)											_hx_tmp = 1;
            										}
            										else {
HXLINE( 192)											_hx_tmp = 3;
            										}
HXDLIN( 192)										::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN( 192)										cairo->set_source(pattern);
HXDLIN( 192)										if ((alpha == 1)) {
HXLINE( 192)											cairo->paint();
            										}
            										else {
HXLINE( 192)											cairo->paintWithAlpha(alpha);
            										}
            									}
HXDLIN( 192)									this->_hx___popMaskObject(bitmap,null());
HXDLIN( 192)									this->_hx___setBlendMode(10);
            								}
            							}
            						}
            						else {
HXLINE( 192)							::openfl::display::_internal::CairoDisplayObject_obj::render(displayObjectContainer,::hx::ObjectPtr<OBJ_>(this));
            						}
HXDLIN( 192)						this->_hx___renderEvent(displayObjectContainer);
            					}
HXDLIN( 192)					bool _hx_tmp1;
HXDLIN( 192)					if (::hx::IsNotNull( displayObjectContainer->_hx___cacheBitmap )) {
HXLINE( 192)						_hx_tmp1 = !(displayObjectContainer->_hx___isCacheBitmapRender);
            					}
            					else {
HXLINE( 192)						_hx_tmp1 = false;
            					}
HXDLIN( 192)					if (!(_hx_tmp1)) {
HXLINE( 192)						this->_hx___pushMaskObject(displayObjectContainer,null());
HXDLIN( 192)						if (::hx::IsNotNull( this->_hx___stage )) {
HXLINE( 192)							{
HXLINE( 192)								int _g = 0;
HXDLIN( 192)								::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN( 192)								while((_g < _g1->length)){
HXLINE( 192)									 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 192)									_g = (_g + 1);
HXDLIN( 192)									this->_hx___renderDrawable(child);
HXDLIN( 192)									child->_hx___renderDirty = false;
            								}
            							}
HXDLIN( 192)							displayObjectContainer->_hx___renderDirty = false;
            						}
            						else {
HXLINE( 192)							int _g = 0;
HXDLIN( 192)							::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN( 192)							while((_g < _g1->length)){
HXLINE( 192)								 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 192)								_g = (_g + 1);
HXDLIN( 192)								this->_hx___renderDrawable(child);
            							}
            						}
HXDLIN( 192)						this->_hx___popMaskObject(displayObjectContainer,null());
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXLINE( 198)				 ::openfl::display::SimpleButton simpleButton = ( ( ::openfl::display::SimpleButton)(object) );
HXDLIN( 198)				bool _hx_tmp;
HXDLIN( 198)				bool _hx_tmp1;
HXDLIN( 198)				if (simpleButton->_hx___renderable) {
HXLINE( 198)					_hx_tmp1 = (simpleButton->_hx___worldAlpha <= 0);
            				}
            				else {
HXLINE( 198)					_hx_tmp1 = true;
            				}
HXDLIN( 198)				if (!(_hx_tmp1)) {
HXLINE( 198)					_hx_tmp = ::hx::IsNull( simpleButton->_hx___currentState );
            				}
            				else {
HXLINE( 198)					_hx_tmp = true;
            				}
HXDLIN( 198)				if (!(_hx_tmp)) {
HXLINE( 198)					this->_hx___pushMaskObject(simpleButton,null());
HXDLIN( 198)					this->_hx___renderDrawable(simpleButton->_hx___currentState);
HXDLIN( 198)					this->_hx___popMaskObject(simpleButton,null());
HXDLIN( 198)					this->_hx___renderEvent(simpleButton);
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 200)				 ::openfl::text::TextField textField = ( ( ::openfl::text::TextField)(object) );
HXDLIN( 200)				this->_hx___updateCacheBitmap(textField,textField->_hx___dirty);
HXDLIN( 200)				bool _hx_tmp;
HXDLIN( 200)				if (::hx::IsNotNull( textField->_hx___cacheBitmap )) {
HXLINE( 200)					_hx_tmp = !(textField->_hx___isCacheBitmapRender);
            				}
            				else {
HXLINE( 200)					_hx_tmp = false;
            				}
HXDLIN( 200)				if (_hx_tmp) {
HXLINE( 200)					 ::openfl::display::Bitmap bitmap = textField->_hx___cacheBitmap;
HXDLIN( 200)					if (bitmap->_hx___renderable) {
HXLINE( 200)						Float alpha = this->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN( 200)						bool _hx_tmp;
HXDLIN( 200)						bool _hx_tmp1;
HXDLIN( 200)						if ((alpha > 0)) {
HXLINE( 200)							_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            						}
            						else {
HXLINE( 200)							_hx_tmp1 = false;
            						}
HXDLIN( 200)						if (_hx_tmp1) {
HXLINE( 200)							_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            						}
            						else {
HXLINE( 200)							_hx_tmp = false;
            						}
HXDLIN( 200)						if (_hx_tmp) {
HXLINE( 200)							 ::lime::graphics::cairo::Cairo cairo = this->cairo;
HXDLIN( 200)							this->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN( 200)							this->_hx___pushMaskObject(bitmap,null());
HXDLIN( 200)							this->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN( 200)							 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN( 200)							if (::hx::IsNotNull( surface )) {
HXLINE( 200)								 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 200)								int _hx_tmp;
HXDLIN( 200)								bool _hx_tmp1;
HXDLIN( 200)								if (this->_hx___allowSmoothing) {
HXLINE( 200)									_hx_tmp1 = bitmap->smoothing;
            								}
            								else {
HXLINE( 200)									_hx_tmp1 = false;
            								}
HXDLIN( 200)								if (_hx_tmp1) {
HXLINE( 200)									_hx_tmp = 1;
            								}
            								else {
HXLINE( 200)									_hx_tmp = 3;
            								}
HXDLIN( 200)								::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN( 200)								cairo->set_source(pattern);
HXDLIN( 200)								if ((alpha == 1)) {
HXLINE( 200)									cairo->paint();
            								}
            								else {
HXLINE( 200)									cairo->paintWithAlpha(alpha);
            								}
            							}
HXDLIN( 200)							this->_hx___popMaskObject(bitmap,null());
HXDLIN( 200)							this->_hx___setBlendMode(10);
            						}
            					}
            				}
            				else {
HXLINE( 200)					::openfl::display::_internal::CairoTextField_obj::render(textField,::hx::ObjectPtr<OBJ_>(this),textField->_hx___worldTransform);
HXDLIN( 200)					::openfl::display::_internal::CairoDisplayObject_obj::render(textField,::hx::ObjectPtr<OBJ_>(this));
            				}
HXDLIN( 200)				this->_hx___renderEvent(textField);
            			}
            			break;
            			case (int)8: {
            			}
            			break;
            			case (int)9: {
HXLINE( 204)				 ::openfl::display::Tilemap tilemap = ( ( ::openfl::display::Tilemap)(object) );
HXDLIN( 204)				this->_hx___updateCacheBitmap(tilemap,false);
HXDLIN( 204)				bool _hx_tmp;
HXDLIN( 204)				if (::hx::IsNotNull( tilemap->_hx___cacheBitmap )) {
HXLINE( 204)					_hx_tmp = !(tilemap->_hx___isCacheBitmapRender);
            				}
            				else {
HXLINE( 204)					_hx_tmp = false;
            				}
HXDLIN( 204)				if (_hx_tmp) {
HXLINE( 204)					 ::openfl::display::Bitmap bitmap = tilemap->_hx___cacheBitmap;
HXDLIN( 204)					if (bitmap->_hx___renderable) {
HXLINE( 204)						Float alpha = this->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN( 204)						bool _hx_tmp;
HXDLIN( 204)						bool _hx_tmp1;
HXDLIN( 204)						if ((alpha > 0)) {
HXLINE( 204)							_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            						}
            						else {
HXLINE( 204)							_hx_tmp1 = false;
            						}
HXDLIN( 204)						if (_hx_tmp1) {
HXLINE( 204)							_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            						}
            						else {
HXLINE( 204)							_hx_tmp = false;
            						}
HXDLIN( 204)						if (_hx_tmp) {
HXLINE( 204)							 ::lime::graphics::cairo::Cairo cairo = this->cairo;
HXDLIN( 204)							this->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN( 204)							this->_hx___pushMaskObject(bitmap,null());
HXDLIN( 204)							this->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN( 204)							 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN( 204)							if (::hx::IsNotNull( surface )) {
HXLINE( 204)								 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 204)								int _hx_tmp;
HXDLIN( 204)								bool _hx_tmp1;
HXDLIN( 204)								if (this->_hx___allowSmoothing) {
HXLINE( 204)									_hx_tmp1 = bitmap->smoothing;
            								}
            								else {
HXLINE( 204)									_hx_tmp1 = false;
            								}
HXDLIN( 204)								if (_hx_tmp1) {
HXLINE( 204)									_hx_tmp = 1;
            								}
            								else {
HXLINE( 204)									_hx_tmp = 3;
            								}
HXDLIN( 204)								::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN( 204)								cairo->set_source(pattern);
HXDLIN( 204)								if ((alpha == 1)) {
HXLINE( 204)									cairo->paint();
            								}
            								else {
HXLINE( 204)									cairo->paintWithAlpha(alpha);
            								}
            							}
HXDLIN( 204)							this->_hx___popMaskObject(bitmap,null());
HXDLIN( 204)							this->_hx___setBlendMode(10);
            						}
            					}
            				}
            				else {
HXLINE( 204)					::openfl::display::_internal::CairoDisplayObject_obj::render(tilemap,::hx::ObjectPtr<OBJ_>(this));
HXDLIN( 204)					::openfl::display::_internal::CairoTilemap_obj::render(tilemap,::hx::ObjectPtr<OBJ_>(this));
            				}
HXDLIN( 204)				this->_hx___renderEvent(tilemap);
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CairoRenderer_obj,_hx___renderDrawable,(void))

void CairoRenderer_obj::_hx___renderDrawableMask(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_210___renderDrawableMask)
HXLINE( 211)		if (::hx::IsNull( object )) {
HXLINE( 211)			return;
            		}
HXLINE( 213)		switch((int)(( (int)(object->__Field(HX_("__drawableType",98,b4,3c,42),::hx::paccDynamic)) ))){
            			case (int)0: {
            			}
            			break;
            			case (int)2: {
HXLINE( 220)				 ::openfl::display::Bitmap bitmap = ( ( ::openfl::display::Bitmap)(object) );
HXDLIN( 220)				 ::lime::graphics::cairo::Cairo _hx_tmp = this->cairo;
HXDLIN( 220)				Float _hx_tmp1 = bitmap->get_width();
HXDLIN( 220)				_hx_tmp->rectangle(( (Float)(0) ),( (Float)(0) ),_hx_tmp1,bitmap->get_height());
            			}
            			break;
            			case (int)3: {
HXLINE( 222)				 ::openfl::display::Shape shape = ( ( ::openfl::display::Shape)(object) );
HXDLIN( 222)				if (::hx::IsNotNull( shape->_hx___graphics )) {
HXLINE( 222)					::openfl::display::_internal::CairoGraphics_obj::renderMask(shape->_hx___graphics,::hx::ObjectPtr<OBJ_>(this));
            				}
            			}
            			break;
            			case (int)4: case (int)5: {
HXLINE( 218)				 ::openfl::display::DisplayObjectContainer displayObjectContainer = ( ( ::openfl::display::DisplayObjectContainer)(object) );
HXDLIN( 218)				{
HXLINE( 218)					{
HXLINE( 218)						 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN( 218)						while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 218)							 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 218)							if (::hx::IsNull( orphan1->stage )) {
HXLINE( 218)								orphan1->_hx___cleanup();
            							}
            						}
            					}
HXDLIN( 218)					displayObjectContainer->_hx___removedChildren->set_length(0);
            				}
HXDLIN( 218)				if (::hx::IsNotNull( displayObjectContainer->_hx___graphics )) {
HXLINE( 218)					::openfl::display::_internal::CairoGraphics_obj::renderMask(displayObjectContainer->_hx___graphics,::hx::ObjectPtr<OBJ_>(this));
            				}
HXDLIN( 218)				{
HXLINE( 218)					int _g = 0;
HXDLIN( 218)					::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN( 218)					while((_g < _g1->length)){
HXLINE( 218)						 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 218)						_g = (_g + 1);
HXDLIN( 218)						this->_hx___renderDrawableMask(child);
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXLINE( 224)				this->_hx___renderDrawableMask(( ( ::openfl::display::SimpleButton)(object) )->_hx___currentState);
            			}
            			break;
            			case (int)7: {
HXLINE( 226)				 ::openfl::text::TextField textField = ( ( ::openfl::text::TextField)(object) );
HXDLIN( 226)				if (::hx::IsNotNull( textField->_hx___graphics )) {
HXLINE( 226)					::openfl::display::_internal::CairoGraphics_obj::renderMask(textField->_hx___graphics,::hx::ObjectPtr<OBJ_>(this));
            				}
            			}
            			break;
            			case (int)8: {
            			}
            			break;
            			case (int)9: {
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CairoRenderer_obj,_hx___renderDrawableMask,(void))

void CairoRenderer_obj::_hx___setBlendMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_236___setBlendMode)
HXLINE( 237)		if (::hx::IsNotNull( this->_hx___overrideBlendMode )) {
HXLINE( 237)			value = this->_hx___overrideBlendMode;
            		}
HXLINE( 238)		if (::hx::IsEq( this->_hx___blendMode,value )) {
HXLINE( 238)			return;
            		}
HXLINE( 240)		this->_hx___blendMode = value;
HXLINE( 241)		this->_hx___setBlendModeCairo(this->cairo,value);
            	}


void CairoRenderer_obj::_hx___setBlendModeCairo( ::lime::graphics::cairo::Cairo cairo, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_248___setBlendModeCairo)
HXDLIN( 248)		 ::Dynamic _hx_switch_0 = value;
            		if (  (_hx_switch_0==0) ){
HXLINE( 251)			cairo->setOperator(12);
HXDLIN( 251)			goto _hx_goto_18;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE( 258)			cairo->setOperator(17);
HXDLIN( 258)			goto _hx_goto_18;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE( 261)			cairo->setOperator(23);
HXDLIN( 261)			goto _hx_goto_18;
            		}
            		if (  (_hx_switch_0==5) ){
HXLINE( 268)			cairo->setOperator(21);
HXDLIN( 268)			goto _hx_goto_18;
            		}
            		if (  (_hx_switch_0==7) ){
HXLINE( 275)			cairo->setOperator(2);
HXDLIN( 275)			goto _hx_goto_18;
            		}
            		if (  (_hx_switch_0==8) ){
HXLINE( 278)			cairo->setOperator(18);
HXDLIN( 278)			goto _hx_goto_18;
            		}
            		if (  (_hx_switch_0==9) ){
HXLINE( 281)			cairo->setOperator(14);
HXDLIN( 281)			goto _hx_goto_18;
            		}
            		if (  (_hx_switch_0==11) ){
HXLINE( 284)			cairo->setOperator(16);
HXDLIN( 284)			goto _hx_goto_18;
            		}
            		if (  (_hx_switch_0==12) ){
HXLINE( 287)			cairo->setOperator(15);
HXDLIN( 287)			goto _hx_goto_18;
            		}
            		/* default */{
HXLINE( 298)			cairo->setOperator(2);
            		}
            		_hx_goto_18:;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CairoRenderer_obj,_hx___setBlendModeCairo,(void))


::hx::ObjectPtr< CairoRenderer_obj > CairoRenderer_obj::__new( ::lime::graphics::cairo::Cairo cairo) {
	::hx::ObjectPtr< CairoRenderer_obj > __this = new CairoRenderer_obj();
	__this->__construct(cairo);
	return __this;
}

::hx::ObjectPtr< CairoRenderer_obj > CairoRenderer_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::graphics::cairo::Cairo cairo) {
	CairoRenderer_obj *__this = (CairoRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CairoRenderer_obj), true, "openfl.display.CairoRenderer"));
	*(void **)__this = CairoRenderer_obj::_hx_vtable;
	__this->__construct(cairo);
	return __this;
}

CairoRenderer_obj::CairoRenderer_obj()
{
}

void CairoRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CairoRenderer);
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	HX_MARK_MEMBER_NAME(_hx___matrix,"__matrix");
	HX_MARK_MEMBER_NAME(_hx___matrix3,"__matrix3");
	 ::openfl::display::DisplayObjectRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CairoRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	HX_VISIT_MEMBER_NAME(_hx___matrix,"__matrix");
	HX_VISIT_MEMBER_NAME(_hx___matrix3,"__matrix3");
	 ::openfl::display::DisplayObjectRenderer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CairoRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return ::hx::Val( cairo ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clear") ) { return ::hx::Val( _hx___clear_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__matrix") ) { return ::hx::Val( _hx___matrix ); }
		if (HX_FIELD_EQ(inName,"__render") ) { return ::hx::Val( _hx___render_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__matrix3") ) { return ::hx::Val( _hx___matrix3 ); }
		if (HX_FIELD_EQ(inName,"__popMask") ) { return ::hx::Val( _hx___popMask_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__pushMask") ) { return ::hx::Val( _hx___pushMask_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"applyMatrix") ) { return ::hx::Val( applyMatrix_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__popMaskRect") ) { return ::hx::Val( _hx___popMaskRect_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__pushMaskRect") ) { return ::hx::Val( _hx___pushMaskRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setBlendMode") ) { return ::hx::Val( _hx___setBlendMode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__popMaskObject") ) { return ::hx::Val( _hx___popMaskObject_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__pushMaskObject") ) { return ::hx::Val( _hx___pushMaskObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"__renderDrawable") ) { return ::hx::Val( _hx___renderDrawable_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setBlendModeCairo") ) { return ::hx::Val( _hx___setBlendModeCairo_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__renderDrawableMask") ) { return ::hx::Val( _hx___renderDrawableMask_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CairoRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast<  ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__matrix") ) { _hx___matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__matrix3") ) { _hx___matrix3=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cairo",88,30,19,41));
	outFields->push(HX_("__matrix",61,a1,f7,63));
	outFields->push(HX_("__matrix3",b2,93,b5,14));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CairoRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::lime::graphics::cairo::Cairo */ ,(int)offsetof(CairoRenderer_obj,cairo),HX_("cairo",88,30,19,41)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(CairoRenderer_obj,_hx___matrix),HX_("__matrix",61,a1,f7,63)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(CairoRenderer_obj,_hx___matrix3),HX_("__matrix3",b2,93,b5,14)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CairoRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String CairoRenderer_obj_sMemberFields[] = {
	HX_("cairo",88,30,19,41),
	HX_("__matrix",61,a1,f7,63),
	HX_("__matrix3",b2,93,b5,14),
	HX_("applyMatrix",4f,f6,c2,f7),
	HX_("__clear",6d,ca,b9,b2),
	HX_("__popMask",fd,b7,5f,c4),
	HX_("__popMaskObject",9c,46,0d,10),
	HX_("__popMaskRect",c1,73,e8,16),
	HX_("__pushMask",06,e7,7f,ba),
	HX_("__pushMaskObject",65,e2,3b,45),
	HX_("__pushMaskRect",4a,5b,e7,a0),
	HX_("__render",76,d6,58,ad),
	HX_("__renderDrawable",34,e4,0f,12),
	HX_("__renderDrawableMask",40,7b,d7,45),
	HX_("__setBlendMode",72,27,48,51),
	HX_("__setBlendModeCairo",b6,3b,c0,5d),
	::String(null()) };

::hx::Class CairoRenderer_obj::__mClass;

void CairoRenderer_obj::__register()
{
	CairoRenderer_obj _hx_dummy;
	CairoRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.CairoRenderer",41,8b,63,76);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CairoRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CairoRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_39_boot)
HXDLIN(  39)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("applyMatrix",4f,f6,c2,f7), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("_",5f,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(2,HX_("__matrix3",b2,93,b5,14), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(3,HX_("cairo",88,30,19,41), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(4,HX_("__setBlendModeCairo",b6,3b,c0,5d), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
