#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_857659711d1ff772_20_render,"openfl.display._internal.CairoDisplayObject","render",0x7640c7af,"openfl.display._internal.CairoDisplayObject.render","openfl/display/_internal/CairoDisplayObject.hx",20,0x9e348686)
HX_LOCAL_STACK_FRAME(_hx_pos_857659711d1ff772_56_renderDrawable,"openfl.display._internal.CairoDisplayObject","renderDrawable",0xd591366d,"openfl.display._internal.CairoDisplayObject.renderDrawable","openfl/display/_internal/CairoDisplayObject.hx",56,0x9e348686)
HX_LOCAL_STACK_FRAME(_hx_pos_857659711d1ff772_76_renderDrawableMask,"openfl.display._internal.CairoDisplayObject","renderDrawableMask",0x0b40ddf9,"openfl.display._internal.CairoDisplayObject.renderDrawableMask","openfl/display/_internal/CairoDisplayObject.hx",76,0x9e348686)
HX_LOCAL_STACK_FRAME(_hx_pos_857659711d1ff772_17_boot,"openfl.display._internal.CairoDisplayObject","boot",0xc77ee84b,"openfl.display._internal.CairoDisplayObject.boot","openfl/display/_internal/CairoDisplayObject.hx",17,0x9e348686)
namespace openfl{
namespace display{
namespace _internal{

void CairoDisplayObject_obj::__construct() { }

Dynamic CairoDisplayObject_obj::__CreateEmpty() { return new CairoDisplayObject_obj; }

void *CairoDisplayObject_obj::_hx_vtable = 0;

Dynamic CairoDisplayObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoDisplayObject_obj > _hx_result = new CairoDisplayObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoDisplayObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02d757d7;
}

void CairoDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_857659711d1ff772_20_render)
HXLINE(  22)		bool _hx_tmp;
HXDLIN(  22)		if (::hx::IsNull( displayObject->opaqueBackground )) {
HXLINE(  22)			_hx_tmp = ::hx::IsNull( displayObject->_hx___graphics );
            		}
            		else {
HXLINE(  22)			_hx_tmp = false;
            		}
HXDLIN(  22)		if (_hx_tmp) {
HXLINE(  22)			return;
            		}
HXLINE(  23)		if (!(displayObject->_hx___renderable)) {
HXLINE(  23)			return;
            		}
HXLINE(  25)		Float alpha = renderer->_hx___getAlpha(displayObject->_hx___worldAlpha);
HXLINE(  26)		if ((alpha <= 0)) {
HXLINE(  26)			return;
            		}
HXLINE(  28)		bool _hx_tmp1;
HXDLIN(  28)		bool _hx_tmp2;
HXDLIN(  28)		bool _hx_tmp3;
HXDLIN(  28)		if (::hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE(  28)			_hx_tmp3 = !(displayObject->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  28)			_hx_tmp3 = false;
            		}
HXDLIN(  28)		if (_hx_tmp3) {
HXLINE(  28)			_hx_tmp2 = (displayObject->get_width() > 0);
            		}
            		else {
HXLINE(  28)			_hx_tmp2 = false;
            		}
HXDLIN(  28)		if (_hx_tmp2) {
HXLINE(  28)			_hx_tmp1 = (displayObject->get_height() > 0);
            		}
            		else {
HXLINE(  28)			_hx_tmp1 = false;
            		}
HXDLIN(  28)		if (_hx_tmp1) {
HXLINE(  33)			 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXLINE(  35)			renderer->_hx___setBlendMode(displayObject->_hx___worldBlendMode);
HXLINE(  36)			renderer->_hx___pushMaskObject(displayObject,null());
HXLINE(  38)			renderer->applyMatrix(displayObject->_hx___renderTransform,cairo);
HXLINE(  40)			int color = ( (int)(displayObject->opaqueBackground) );
HXLINE(  41)			cairo->setSourceRGB((( (Float)((::hx::UShr(color,16) & 255)) ) / ( (Float)(255) )),(( (Float)((::hx::UShr(color,8) & 255)) ) / ( (Float)(255) )),(( (Float)((color & 255)) ) / ( (Float)(255) )));
HXLINE(  42)			Float _hx_tmp = displayObject->get_width();
HXDLIN(  42)			cairo->rectangle(( (Float)(0) ),( (Float)(0) ),_hx_tmp,displayObject->get_height());
HXLINE(  43)			cairo->fill();
HXLINE(  45)			renderer->_hx___popMaskObject(displayObject,null());
            		}
HXLINE(  48)		if (::hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE(  50)			::openfl::display::_internal::CairoShape_obj::render(displayObject,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoDisplayObject_obj,render,(void))

void CairoDisplayObject_obj::renderDrawable( ::openfl::display::DisplayObject displayObject, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_857659711d1ff772_56_renderDrawable)
HXLINE(  58)		renderer->_hx___updateCacheBitmap(displayObject,false);
HXLINE(  60)		bool _hx_tmp;
HXDLIN(  60)		if (::hx::IsNotNull( displayObject->_hx___cacheBitmap )) {
HXLINE(  60)			_hx_tmp = !(displayObject->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  60)			_hx_tmp = false;
            		}
HXDLIN(  60)		if (_hx_tmp) {
HXLINE(  62)			 ::openfl::display::Bitmap bitmap = displayObject->_hx___cacheBitmap;
HXDLIN(  62)			if (bitmap->_hx___renderable) {
HXLINE(  62)				Float alpha = renderer->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN(  62)				bool _hx_tmp;
HXDLIN(  62)				bool _hx_tmp1;
HXDLIN(  62)				if ((alpha > 0)) {
HXLINE(  62)					_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            				}
            				else {
HXLINE(  62)					_hx_tmp1 = false;
            				}
HXDLIN(  62)				if (_hx_tmp1) {
HXLINE(  62)					_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            				}
            				else {
HXLINE(  62)					_hx_tmp = false;
            				}
HXDLIN(  62)				if (_hx_tmp) {
HXLINE(  62)					 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXDLIN(  62)					renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN(  62)					renderer->_hx___pushMaskObject(bitmap,null());
HXDLIN(  62)					renderer->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN(  62)					 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN(  62)					if (::hx::IsNotNull( surface )) {
HXLINE(  62)						 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN(  62)						int _hx_tmp;
HXDLIN(  62)						bool _hx_tmp1;
HXDLIN(  62)						if (renderer->_hx___allowSmoothing) {
HXLINE(  62)							_hx_tmp1 = bitmap->smoothing;
            						}
            						else {
HXLINE(  62)							_hx_tmp1 = false;
            						}
HXDLIN(  62)						if (_hx_tmp1) {
HXLINE(  62)							_hx_tmp = 1;
            						}
            						else {
HXLINE(  62)							_hx_tmp = 3;
            						}
HXDLIN(  62)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN(  62)						cairo->set_source(pattern);
HXDLIN(  62)						if ((alpha == 1)) {
HXLINE(  62)							cairo->paint();
            						}
            						else {
HXLINE(  62)							cairo->paintWithAlpha(alpha);
            						}
            					}
HXDLIN(  62)					renderer->_hx___popMaskObject(bitmap,null());
HXDLIN(  62)					renderer->_hx___setBlendMode(10);
            				}
            			}
            		}
            		else {
HXLINE(  66)			::openfl::display::_internal::CairoDisplayObject_obj::render(displayObject,renderer);
            		}
HXLINE(  69)		renderer->_hx___renderEvent(displayObject);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoDisplayObject_obj,renderDrawable,(void))

void CairoDisplayObject_obj::renderDrawableMask( ::openfl::display::DisplayObject displayObject, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_857659711d1ff772_76_renderDrawableMask)
HXDLIN(  76)		if (::hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE(  78)			::openfl::display::_internal::CairoGraphics_obj::renderMask(displayObject->_hx___graphics,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoDisplayObject_obj,renderDrawableMask,(void))


CairoDisplayObject_obj::CairoDisplayObject_obj()
{
}

bool CairoDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoDisplayObject_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoDisplayObject_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoDisplayObject_obj::__mClass;

static ::String CairoDisplayObject_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CairoDisplayObject_obj::__register()
{
	CairoDisplayObject_obj _hx_dummy;
	CairoDisplayObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoDisplayObject",f5,72,7d,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoDisplayObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoDisplayObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoDisplayObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoDisplayObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoDisplayObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_857659711d1ff772_17_boot)
HXDLIN(  17)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
