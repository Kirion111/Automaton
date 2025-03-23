#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
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
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBitmap
#include <openfl/display/_internal/Context3DBitmap.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DMaskShader
#include <openfl/display/_internal/Context3DMaskShader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DShape
#include <openfl/display/_internal/Context3DShape.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_382515aae3768e94_26_render,"openfl.display._internal.Context3DBitmap","render",0xaffd5171,"openfl.display._internal.Context3DBitmap.render","openfl/display/_internal/Context3DBitmap.hx",26,0x2872f3ee)
HX_LOCAL_STACK_FRAME(_hx_pos_382515aae3768e94_63_renderDrawable,"openfl.display._internal.Context3DBitmap","renderDrawable",0x3770522f,"openfl.display._internal.Context3DBitmap.renderDrawable","openfl/display/_internal/Context3DBitmap.hx",63,0x2872f3ee)
HX_LOCAL_STACK_FRAME(_hx_pos_382515aae3768e94_86_renderDrawableMask,"openfl.display._internal.Context3DBitmap","renderDrawableMask",0xce0602bb,"openfl.display._internal.Context3DBitmap.renderDrawableMask","openfl/display/_internal/Context3DBitmap.hx",86,0x2872f3ee)
HX_LOCAL_STACK_FRAME(_hx_pos_382515aae3768e94_91_renderMask,"openfl.display._internal.Context3DBitmap","renderMask",0xaaf0cafd,"openfl.display._internal.Context3DBitmap.renderMask","openfl/display/_internal/Context3DBitmap.hx",91,0x2872f3ee)
HX_LOCAL_STACK_FRAME(_hx_pos_382515aae3768e94_23_boot,"openfl.display._internal.Context3DBitmap","boot",0xce121d8d,"openfl.display._internal.Context3DBitmap.boot","openfl/display/_internal/Context3DBitmap.hx",23,0x2872f3ee)
namespace openfl{
namespace display{
namespace _internal{

void Context3DBitmap_obj::__construct() { }

Dynamic Context3DBitmap_obj::__CreateEmpty() { return new Context3DBitmap_obj; }

void *Context3DBitmap_obj::_hx_vtable = 0;

Dynamic Context3DBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DBitmap_obj > _hx_result = new Context3DBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DBitmap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x47c3d29d;
}

void Context3DBitmap_obj::render( ::openfl::display::Bitmap bitmap, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_382515aae3768e94_26_render)
HXLINE(  27)		bool _hx_tmp;
HXDLIN(  27)		if (bitmap->_hx___renderable) {
HXLINE(  27)			_hx_tmp = (bitmap->_hx___worldAlpha <= 0);
            		}
            		else {
HXLINE(  27)			_hx_tmp = true;
            		}
HXDLIN(  27)		if (_hx_tmp) {
HXLINE(  27)			return;
            		}
HXLINE(  29)		bool _hx_tmp1;
HXDLIN(  29)		if (::hx::IsNotNull( bitmap->_hx___bitmapData )) {
HXLINE(  29)			_hx_tmp1 = bitmap->_hx___bitmapData->_hx___isValid;
            		}
            		else {
HXLINE(  29)			_hx_tmp1 = false;
            		}
HXDLIN(  29)		if (_hx_tmp1) {
HXLINE(  31)			 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  33)			renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXLINE(  34)			renderer->_hx___pushMaskObject(bitmap,null());
HXLINE(  37)			 ::openfl::display::Shader shader = renderer->_hx___initDisplayShader(bitmap->_hx___worldShader);
HXLINE(  38)			renderer->setShader(shader);
HXLINE(  39)			bool _hx_tmp;
HXDLIN(  39)			if (renderer->_hx___allowSmoothing) {
HXLINE(  39)				if (!(bitmap->smoothing)) {
HXLINE(  39)					_hx_tmp = renderer->_hx___upscaled;
            				}
            				else {
HXLINE(  39)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(  39)				_hx_tmp = false;
            			}
HXDLIN(  39)			renderer->applyBitmapData(bitmap->_hx___bitmapData,_hx_tmp,null());
HXLINE(  40)			renderer->applyMatrix(renderer->_hx___getMatrix(bitmap->_hx___renderTransform,bitmap->pixelSnapping));
HXLINE(  41)			renderer->applyAlpha(bitmap->_hx___worldAlpha);
HXLINE(  42)			renderer->applyColorTransform(bitmap->_hx___worldColorTransform);
HXLINE(  43)			renderer->updateShader();
HXLINE(  45)			 ::openfl::display3D::VertexBuffer3D vertexBuffer = bitmap->_hx___bitmapData->getVertexBuffer(context,null(),null());
HXLINE(  46)			if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE(  46)				context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,0,3);
            			}
HXLINE(  47)			if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE(  47)				context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,3,2);
            			}
HXLINE(  48)			 ::openfl::display3D::IndexBuffer3D indexBuffer = bitmap->_hx___bitmapData->getIndexBuffer(context,null());
HXLINE(  49)			context->drawTriangles(indexBuffer,null(),null());
HXLINE(  55)			renderer->_hx___clearShader();
HXLINE(  58)			renderer->_hx___popMaskObject(bitmap,null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DBitmap_obj,render,(void))

void Context3DBitmap_obj::renderDrawable( ::openfl::display::Bitmap bitmap, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_382515aae3768e94_63_renderDrawable)
HXLINE(  64)		renderer->_hx___updateCacheBitmap(bitmap,false);
HXLINE(  66)		bool _hx_tmp;
HXDLIN(  66)		if (::hx::IsNotNull( bitmap->_hx___bitmapData )) {
HXLINE(  66)			_hx_tmp = ::hx::IsNotNull( bitmap->_hx___bitmapData->image );
            		}
            		else {
HXLINE(  66)			_hx_tmp = false;
            		}
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  68)			bitmap->_hx___imageVersion = bitmap->_hx___bitmapData->image->version;
            		}
HXLINE(  71)		bool _hx_tmp1;
HXDLIN(  71)		if (::hx::IsNotNull( bitmap->_hx___cacheBitmap )) {
HXLINE(  71)			_hx_tmp1 = !(bitmap->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  71)			_hx_tmp1 = false;
            		}
HXDLIN(  71)		if (_hx_tmp1) {
HXLINE(  73)			::openfl::display::_internal::Context3DBitmap_obj::render(bitmap->_hx___cacheBitmap,renderer);
            		}
            		else {
HXLINE(  77)			bool _hx_tmp;
HXDLIN(  77)			if (::hx::IsNull( bitmap->opaqueBackground )) {
HXLINE(  77)				_hx_tmp = ::hx::IsNull( bitmap->_hx___graphics );
            			}
            			else {
HXLINE(  77)				_hx_tmp = false;
            			}
HXDLIN(  77)			if (!(_hx_tmp)) {
HXLINE(  77)				bool _hx_tmp;
HXDLIN(  77)				if (bitmap->_hx___renderable) {
HXLINE(  77)					_hx_tmp = (bitmap->_hx___worldAlpha <= 0);
            				}
            				else {
HXLINE(  77)					_hx_tmp = true;
            				}
HXDLIN(  77)				if (!(_hx_tmp)) {
HXLINE(  77)					bool _hx_tmp;
HXDLIN(  77)					bool _hx_tmp1;
HXDLIN(  77)					bool _hx_tmp2;
HXDLIN(  77)					if (::hx::IsNotNull( bitmap->opaqueBackground )) {
HXLINE(  77)						_hx_tmp2 = !(bitmap->_hx___isCacheBitmapRender);
            					}
            					else {
HXLINE(  77)						_hx_tmp2 = false;
            					}
HXDLIN(  77)					if (_hx_tmp2) {
HXLINE(  77)						_hx_tmp1 = (bitmap->get_width() > 0);
            					}
            					else {
HXLINE(  77)						_hx_tmp1 = false;
            					}
HXDLIN(  77)					if (_hx_tmp1) {
HXLINE(  77)						_hx_tmp = (bitmap->get_height() > 0);
            					}
            					else {
HXLINE(  77)						_hx_tmp = false;
            					}
HXDLIN(  77)					if (_hx_tmp) {
HXLINE(  77)						renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN(  77)						renderer->_hx___pushMaskObject(bitmap,null());
HXDLIN(  77)						 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXDLIN(  77)						 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXDLIN(  77)						Float _hx_tmp = bitmap->get_width();
HXDLIN(  77)						rect->setTo(( (Float)(0) ),( (Float)(0) ),_hx_tmp,bitmap->get_height());
HXDLIN(  77)						renderer->_hx___pushMaskRect(rect,bitmap->_hx___renderTransform);
HXDLIN(  77)						int color = ( (int)(bitmap->opaqueBackground) );
HXDLIN(  77)						context->clear((( (Float)((::hx::UShr(color,16) & 255)) ) / ( (Float)(255) )),(( (Float)((::hx::UShr(color,8) & 255)) ) / ( (Float)(255) )),(( (Float)((color & 255)) ) / ( (Float)(255) )),1,0,0,1);
HXDLIN(  77)						renderer->_hx___popMaskRect();
HXDLIN(  77)						renderer->_hx___popMaskObject(bitmap,null());
HXDLIN(  77)						::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
            					}
HXDLIN(  77)					if (::hx::IsNotNull( bitmap->_hx___graphics )) {
HXLINE(  77)						::openfl::display::_internal::Context3DShape_obj::render(bitmap,renderer);
            					}
            				}
            			}
HXLINE(  78)			::openfl::display::_internal::Context3DBitmap_obj::render(bitmap,renderer);
            		}
HXLINE(  81)		renderer->_hx___renderEvent(bitmap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DBitmap_obj,renderDrawable,(void))

void Context3DBitmap_obj::renderDrawableMask( ::openfl::display::Bitmap bitmap, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_382515aae3768e94_86_renderDrawableMask)
HXDLIN(  86)		::openfl::display::_internal::Context3DBitmap_obj::renderMask(bitmap,renderer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DBitmap_obj,renderDrawableMask,(void))

void Context3DBitmap_obj::renderMask( ::openfl::display::Bitmap bitmap, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_382515aae3768e94_91_renderMask)
HXDLIN(  91)		bool _hx_tmp;
HXDLIN(  91)		if (::hx::IsNotNull( bitmap->_hx___bitmapData )) {
HXDLIN(  91)			_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            		}
            		else {
HXDLIN(  91)			_hx_tmp = false;
            		}
HXDLIN(  91)		if (_hx_tmp) {
HXLINE(  93)			 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  95)			 ::openfl::display::_internal::Context3DMaskShader shader = renderer->_hx___maskShader;
HXLINE(  96)			renderer->setShader(shader);
HXLINE(  97)			renderer->applyBitmapData(::openfl::display::_internal::Context3DMaskShader_obj::opaqueBitmapData,true,null());
HXLINE(  98)			renderer->applyMatrix(renderer->_hx___getMatrix(bitmap->_hx___renderTransform,bitmap->pixelSnapping));
HXLINE(  99)			renderer->updateShader();
HXLINE( 101)			 ::openfl::display3D::VertexBuffer3D vertexBuffer = bitmap->_hx___bitmapData->getVertexBuffer(context,null(),null());
HXLINE( 102)			if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 102)				context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,0,3);
            			}
HXLINE( 103)			if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 103)				context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,3,2);
            			}
HXLINE( 104)			 ::openfl::display3D::IndexBuffer3D indexBuffer = bitmap->_hx___bitmapData->getIndexBuffer(context,null());
HXLINE( 105)			context->drawTriangles(indexBuffer,null(),null());
HXLINE( 111)			renderer->_hx___clearShader();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DBitmap_obj,renderMask,(void))


Context3DBitmap_obj::Context3DBitmap_obj()
{
}

bool Context3DBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
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
static ::hx::StorageInfo *Context3DBitmap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Context3DBitmap_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Context3DBitmap_obj::__mClass;

static ::String Context3DBitmap_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	HX_("renderMask",62,3b,60,e5),
	::String(null())
};

void Context3DBitmap_obj::__register()
{
	Context3DBitmap_obj _hx_dummy;
	Context3DBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DBitmap",f3,44,7a,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DBitmap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DBitmap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_382515aae3768e94_23_boot)
HXDLIN(  23)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
