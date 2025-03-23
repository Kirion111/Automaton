#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
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
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoDisplayObject
#include <openfl/display/_internal/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoShape
#include <openfl/display/_internal/CairoShape.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_b1fba0bba755bee2_28_render,"openfl.display._internal.CairoShape","render",0xf0c8232f,"openfl.display._internal.CairoShape.render","openfl/display/_internal/CairoShape.hx",28,0x7720bd06)
HX_LOCAL_STACK_FRAME(_hx_pos_b1fba0bba755bee2_97_render,"openfl.display._internal.CairoShape","render",0xf0c8232f,"openfl.display._internal.CairoShape.render","openfl/display/_internal/CairoShape.hx",97,0x7720bd06)
HX_LOCAL_STACK_FRAME(_hx_pos_b1fba0bba755bee2_192_renderDrawable,"openfl.display._internal.CairoShape","renderDrawable",0xf82011ed,"openfl.display._internal.CairoShape.renderDrawable","openfl/display/_internal/CairoShape.hx",192,0x7720bd06)
HX_LOCAL_STACK_FRAME(_hx_pos_b1fba0bba755bee2_197_renderDrawableMask,"openfl.display._internal.CairoShape","renderDrawableMask",0x01237979,"openfl.display._internal.CairoShape.renderDrawableMask","openfl/display/_internal/CairoShape.hx",197,0x7720bd06)
HX_LOCAL_STACK_FRAME(_hx_pos_b1fba0bba755bee2_21_boot,"openfl.display._internal.CairoShape","boot",0x5e1063cb,"openfl.display._internal.CairoShape.boot","openfl/display/_internal/CairoShape.hx",21,0x7720bd06)
HX_LOCAL_STACK_FRAME(_hx_pos_b1fba0bba755bee2_24_boot,"openfl.display._internal.CairoShape","boot",0x5e1063cb,"openfl.display._internal.CairoShape.boot","openfl/display/_internal/CairoShape.hx",24,0x7720bd06)
namespace openfl{
namespace display{
namespace _internal{

void CairoShape_obj::__construct() { }

Dynamic CairoShape_obj::__CreateEmpty() { return new CairoShape_obj; }

void *CairoShape_obj::_hx_vtable = 0;

Dynamic CairoShape_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoShape_obj > _hx_result = new CairoShape_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoShape_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x28fc0e6f;
}

 ::lime::utils::ArrayBufferView CairoShape_obj::sourceTransform;

void CairoShape_obj::render( ::openfl::display::DisplayObject shape, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b1fba0bba755bee2_28_render)
HXLINE(  30)		if (!(shape->_hx___renderable)) {
HXLINE(  30)			return;
            		}
HXLINE(  32)		Float alpha = renderer->_hx___getAlpha(shape->_hx___worldAlpha);
HXLINE(  33)		if ((alpha <= 0)) {
HXLINE(  33)			return;
            		}
HXLINE(  35)		 ::openfl::display::Graphics graphics = shape->_hx___graphics;
HXLINE(  37)		if (::hx::IsNotNull( graphics )) {
HXLINE(  39)			::openfl::display::_internal::CairoGraphics_obj::render(graphics,renderer);
HXLINE(  41)			int width = graphics->_hx___width;
HXLINE(  42)			int height = graphics->_hx___height;
HXLINE(  43)			 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXLINE(  45)			bool _hx_tmp;
HXDLIN(  45)			bool _hx_tmp1;
HXDLIN(  45)			bool _hx_tmp2;
HXDLIN(  45)			if (::hx::IsNotNull( cairo )) {
HXLINE(  45)				_hx_tmp2 = graphics->_hx___visible;
            			}
            			else {
HXLINE(  45)				_hx_tmp2 = false;
            			}
HXDLIN(  45)			if (_hx_tmp2) {
HXLINE(  45)				_hx_tmp1 = (width >= 1);
            			}
            			else {
HXLINE(  45)				_hx_tmp1 = false;
            			}
HXDLIN(  45)			if (_hx_tmp1) {
HXLINE(  45)				_hx_tmp = (height >= 1);
            			}
            			else {
HXLINE(  45)				_hx_tmp = false;
            			}
HXDLIN(  45)			if (_hx_tmp) {
HXLINE(  47)				 ::openfl::geom::Matrix transform = graphics->_hx___worldTransform;
HXLINE(  48)				 ::openfl::geom::Rectangle scale9Grid = shape->_hx___worldScale9Grid;
HXLINE(  50)				renderer->_hx___setBlendMode(shape->_hx___worldBlendMode);
HXLINE(  51)				renderer->_hx___pushMaskObject(shape,null());
HXLINE(  53)				bool _hx_tmp;
HXDLIN(  53)				bool _hx_tmp1;
HXDLIN(  53)				if (::hx::IsNotNull( scale9Grid )) {
HXLINE(  53)					_hx_tmp1 = (transform->b == 0);
            				}
            				else {
HXLINE(  53)					_hx_tmp1 = false;
            				}
HXDLIN(  53)				if (_hx_tmp1) {
HXLINE(  53)					_hx_tmp = (transform->c == 0);
            				}
            				else {
HXLINE(  53)					_hx_tmp = false;
            				}
HXDLIN(  53)				if (_hx_tmp) {
            					HX_BEGIN_LOCAL_FUNC_S6(::hx::LocalFunc,_hx_Closure_0,Float,alpha, ::openfl::display::CairoRenderer,renderer, ::lime::graphics::cairo::Cairo,cairo, ::Dynamic,pattern, ::openfl::geom::Matrix,transform, ::openfl::geom::Matrix,renderTransform) HXARGC(8)
            					void _hx_run(Float sx,Float sy,Float sWidth,Float sHeight,Float dx,Float dy,Float dWidth,Float dHeight){
            						HX_STACKFRAME(&_hx_pos_b1fba0bba755bee2_97_render)
HXLINE(  98)						renderTransform->a = (dWidth / sWidth);
HXLINE(  99)						renderTransform->d = (dHeight / sHeight);
HXLINE( 100)						renderTransform->tx = (transform->tx + dx);
HXLINE( 101)						renderTransform->ty = (transform->ty + dy);
HXLINE( 103)						renderer->applyMatrix(renderTransform,cairo);
HXLINE( 105)						{
HXLINE( 105)							 ::lime::utils::ArrayBufferView this1 = ::openfl::display::_internal::CairoShape_obj::sourceTransform;
HXDLIN( 105)							 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),sx);
            						}
HXLINE( 106)						{
HXLINE( 106)							 ::lime::utils::ArrayBufferView this2 = ::openfl::display::_internal::CairoShape_obj::sourceTransform;
HXDLIN( 106)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 28),sy);
            						}
HXLINE( 107)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(pattern,::openfl::display::_internal::CairoShape_obj::sourceTransform);
HXLINE( 108)						cairo->set_source(pattern);
HXLINE( 110)						cairo->save();
HXLINE( 112)						cairo->newPath();
HXLINE( 113)						cairo->rectangle(( (Float)(0) ),( (Float)(0) ),sWidth,sHeight);
HXLINE( 114)						cairo->clip();
HXLINE( 116)						if ((alpha == 1)) {
HXLINE( 118)							cairo->paint();
            						}
            						else {
HXLINE( 122)							cairo->paintWithAlpha(alpha);
            						}
HXLINE( 125)						cairo->restore();
            					}
            					HX_END_LOCAL_FUNC8((void))

HXLINE(  58)					Float pixelRatio = renderer->_hx___pixelRatio;
HXLINE(  61)					 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  62)					matrix->translate(transform->tx,transform->ty);
HXLINE(  64)					renderer->applyMatrix(matrix,cairo);
HXLINE(  66)					::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
HXLINE(  68)					 ::openfl::geom::Rectangle bounds = graphics->_hx___bounds;
HXLINE(  70)					 ::openfl::geom::Matrix renderTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  72)					Float scaleX = (graphics->_hx___renderTransform->a / graphics->_hx___bitmapScale);
HXLINE(  73)					Float scaleY = (graphics->_hx___renderTransform->d / graphics->_hx___bitmapScale);
HXLINE(  74)					Float renderScaleX = (scaleX * transform->a);
HXLINE(  75)					Float renderScaleY = (scaleY * transform->d);
HXLINE(  77)					Float left = ::Math_obj::max(( (Float)(1) ),( (Float)(::Math_obj::round((scale9Grid->x * scaleX))) ));
HXLINE(  78)					int top = ::Math_obj::round((scale9Grid->y * scaleY));
HXLINE(  79)					Float right = bounds->get_right();
HXDLIN(  79)					Float right1 = ::Math_obj::max(( (Float)(1) ),( (Float)(::Math_obj::round(((right - scale9Grid->get_right()) * scaleX))) ));
HXLINE(  80)					Float bottom = bounds->get_bottom();
HXDLIN(  80)					int bottom1 = ::Math_obj::round(((bottom - scale9Grid->get_bottom()) * scaleY));
HXLINE(  81)					int centerWidth = ::Math_obj::round((scale9Grid->width * scaleX));
HXLINE(  82)					int centerHeight = ::Math_obj::round((scale9Grid->height * scaleY));
HXLINE(  84)					int renderLeft = ::Math_obj::round((left / pixelRatio));
HXLINE(  85)					int renderTop = ::Math_obj::round((( (Float)(top) ) / pixelRatio));
HXLINE(  86)					int renderRight = ::Math_obj::round((right1 / pixelRatio));
HXLINE(  87)					int renderBottom = ::Math_obj::round((( (Float)(bottom1) ) / pixelRatio));
HXLINE(  88)					Float renderCenterWidth = (((bounds->width * renderScaleX) - ( (Float)(renderLeft) )) - ( (Float)(renderRight) ));
HXLINE(  89)					Float renderCenterHeight = (((bounds->height * renderScaleY) - ( (Float)(renderTop) )) - ( (Float)(renderBottom) ));
HXLINE(  91)					 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(graphics->_hx___cairo->get_target());
HXLINE(  93)					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,3);
HXLINE(  96)					 ::Dynamic drawImage =  ::Dynamic(new _hx_Closure_0(alpha,renderer,cairo,pattern,transform,renderTransform));
HXLINE( 128)					bool _hx_tmp;
HXDLIN( 128)					if ((centerWidth != 0)) {
HXLINE( 128)						_hx_tmp = (centerHeight != 0);
            					}
            					else {
HXLINE( 128)						_hx_tmp = false;
            					}
HXDLIN( 128)					if (_hx_tmp) {
HXLINE( 130)						drawImage(0,0,left,top,0,0,renderLeft,renderTop);
HXLINE( 131)						drawImage(left,0,centerWidth,top,renderLeft,0,renderCenterWidth,renderTop);
HXLINE( 132)						drawImage((left + centerWidth),0,right1,top,(renderLeft + renderCenterWidth),0,renderRight,renderTop);
HXLINE( 134)						drawImage(0,top,left,centerHeight,0,renderTop,renderLeft,renderCenterHeight);
HXLINE( 135)						drawImage(left,top,centerWidth,centerHeight,renderLeft,renderTop,renderCenterWidth,renderCenterHeight);
HXLINE( 136)						drawImage((left + centerWidth),top,right1,centerHeight,(renderLeft + renderCenterWidth),renderTop,renderRight,renderCenterHeight);
HXLINE( 138)						drawImage(0,(top + centerHeight),left,bottom1,0,(renderTop + renderCenterHeight),renderLeft,renderBottom);
HXLINE( 139)						drawImage(left,(top + centerHeight),centerWidth,bottom1,renderLeft,(renderTop + renderCenterHeight),renderCenterWidth,renderBottom);
HXLINE( 140)						drawImage((left + centerWidth),(top + centerHeight),right1,bottom1,(renderLeft + renderCenterWidth),(renderTop + renderCenterHeight),renderRight,renderBottom);
            					}
            					else {
HXLINE( 143)						bool _hx_tmp;
HXDLIN( 143)						if ((centerWidth == 0)) {
HXLINE( 143)							_hx_tmp = (centerHeight != 0);
            						}
            						else {
HXLINE( 143)							_hx_tmp = false;
            						}
HXDLIN( 143)						if (_hx_tmp) {
HXLINE( 145)							Float renderWidth = ((renderLeft + renderCenterWidth) + renderRight);
HXLINE( 147)							drawImage(0,0,width,top,0,0,renderWidth,renderTop);
HXLINE( 148)							drawImage(0,top,width,centerHeight,0,renderTop,renderWidth,renderCenterHeight);
HXLINE( 149)							drawImage(0,(top + centerHeight),width,bottom1,0,(renderTop + renderCenterHeight),renderWidth,renderBottom);
            						}
            						else {
HXLINE( 151)							bool _hx_tmp;
HXDLIN( 151)							if ((centerHeight == 0)) {
HXLINE( 151)								_hx_tmp = (centerWidth != 0);
            							}
            							else {
HXLINE( 151)								_hx_tmp = false;
            							}
HXDLIN( 151)							if (_hx_tmp) {
HXLINE( 153)								Float renderHeight = ((renderTop + renderCenterHeight) + renderBottom);
HXLINE( 155)								drawImage(0,0,left,height,0,0,renderLeft,renderHeight);
HXLINE( 156)								drawImage(left,0,centerWidth,height,renderLeft,0,renderCenterWidth,renderHeight);
HXLINE( 157)								drawImage((left + centerWidth),0,right1,height,(renderLeft + renderCenterWidth),0,renderRight,renderHeight);
            							}
            						}
            					}
HXLINE( 160)					::openfl::geom::Matrix_obj::_hx___pool->release(renderTransform);
            				}
            				else {
HXLINE( 164)					 ::openfl::geom::Matrix renderTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 165)					renderTransform->scale((( (Float)(1) ) / graphics->_hx___bitmapScale),(( (Float)(1) ) / graphics->_hx___bitmapScale));
HXLINE( 166)					renderTransform->concat(transform);
HXLINE( 168)					renderer->applyMatrix(renderTransform,cairo);
HXLINE( 170)					 ::lime::graphics::cairo::Cairo cairo1 = cairo;
HXDLIN( 170)					cairo1->setSourceSurface(graphics->_hx___cairo->get_target(),( (Float)(0) ),( (Float)(0) ));
HXLINE( 172)					if ((alpha >= 1)) {
HXLINE( 174)						cairo->paint();
            					}
            					else {
HXLINE( 178)						cairo->paintWithAlpha(alpha);
            					}
HXLINE( 181)					::openfl::geom::Matrix_obj::_hx___pool->release(renderTransform);
            				}
HXLINE( 184)				renderer->_hx___popMaskObject(shape,null());
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoShape_obj,render,(void))

void CairoShape_obj::renderDrawable( ::openfl::display::Shape shape, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b1fba0bba755bee2_192_renderDrawable)
HXDLIN( 192)		renderer->_hx___updateCacheBitmap(shape,false);
HXDLIN( 192)		bool _hx_tmp;
HXDLIN( 192)		if (::hx::IsNotNull( shape->_hx___cacheBitmap )) {
HXDLIN( 192)			_hx_tmp = !(shape->_hx___isCacheBitmapRender);
            		}
            		else {
HXDLIN( 192)			_hx_tmp = false;
            		}
HXDLIN( 192)		if (_hx_tmp) {
HXDLIN( 192)			 ::openfl::display::Bitmap bitmap = shape->_hx___cacheBitmap;
HXDLIN( 192)			if (bitmap->_hx___renderable) {
HXDLIN( 192)				Float alpha = renderer->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN( 192)				bool _hx_tmp;
HXDLIN( 192)				bool _hx_tmp1;
HXDLIN( 192)				if ((alpha > 0)) {
HXDLIN( 192)					_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            				}
            				else {
HXDLIN( 192)					_hx_tmp1 = false;
            				}
HXDLIN( 192)				if (_hx_tmp1) {
HXDLIN( 192)					_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            				}
            				else {
HXDLIN( 192)					_hx_tmp = false;
            				}
HXDLIN( 192)				if (_hx_tmp) {
HXDLIN( 192)					 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXDLIN( 192)					renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN( 192)					renderer->_hx___pushMaskObject(bitmap,null());
HXDLIN( 192)					renderer->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN( 192)					 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN( 192)					if (::hx::IsNotNull( surface )) {
HXDLIN( 192)						 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 192)						int _hx_tmp;
HXDLIN( 192)						bool _hx_tmp1;
HXDLIN( 192)						if (renderer->_hx___allowSmoothing) {
HXDLIN( 192)							_hx_tmp1 = bitmap->smoothing;
            						}
            						else {
HXDLIN( 192)							_hx_tmp1 = false;
            						}
HXDLIN( 192)						if (_hx_tmp1) {
HXDLIN( 192)							_hx_tmp = 1;
            						}
            						else {
HXDLIN( 192)							_hx_tmp = 3;
            						}
HXDLIN( 192)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN( 192)						cairo->set_source(pattern);
HXDLIN( 192)						if ((alpha == 1)) {
HXDLIN( 192)							cairo->paint();
            						}
            						else {
HXDLIN( 192)							cairo->paintWithAlpha(alpha);
            						}
            					}
HXDLIN( 192)					renderer->_hx___popMaskObject(bitmap,null());
HXDLIN( 192)					renderer->_hx___setBlendMode(10);
            				}
            			}
            		}
            		else {
HXDLIN( 192)			::openfl::display::_internal::CairoDisplayObject_obj::render(shape,renderer);
            		}
HXDLIN( 192)		renderer->_hx___renderEvent(shape);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoShape_obj,renderDrawable,(void))

void CairoShape_obj::renderDrawableMask( ::openfl::display::Shape shape, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b1fba0bba755bee2_197_renderDrawableMask)
HXDLIN( 197)		if (::hx::IsNotNull( shape->_hx___graphics )) {
HXDLIN( 197)			::openfl::display::_internal::CairoGraphics_obj::renderMask(shape->_hx___graphics,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoShape_obj,renderDrawableMask,(void))


CairoShape_obj::CairoShape_obj()
{
}

bool CairoShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sourceTransform") ) { outValue = ( sourceTransform ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

bool CairoShape_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"sourceTransform") ) { sourceTransform=ioValue.Cast<  ::lime::utils::ArrayBufferView >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoShape_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CairoShape_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(void *) &CairoShape_obj::sourceTransform,HX_("sourceTransform",11,e9,32,19)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CairoShape_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoShape_obj::sourceTransform,"sourceTransform");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoShape_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoShape_obj::sourceTransform,"sourceTransform");
};

#endif

::hx::Class CairoShape_obj::__mClass;

static ::String CairoShape_obj_sStaticFields[] = {
	HX_("sourceTransform",11,e9,32,19),
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CairoShape_obj::__register()
{
	CairoShape_obj _hx_dummy;
	CairoShape_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoShape",75,a7,5d,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoShape_obj::__GetStatic;
	__mClass->mSetStaticField = &CairoShape_obj::__SetStatic;
	__mClass->mMarkFunc = CairoShape_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoShape_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoShape_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoShape_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoShape_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoShape_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b1fba0bba755bee2_21_boot)
HXDLIN(  21)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_b1fba0bba755bee2_24_boot)
HXDLIN(  24)		sourceTransform = ::lime::math::_Matrix3::Matrix3_Impl__obj::_new(null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
