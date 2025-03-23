#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGL2RenderContext_WebGL2RenderContext_Impl_
#include <lime/graphics/_WebGL2RenderContext/WebGL2RenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_81_bufferData,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","bufferData",0x95dd935f,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.bufferData","lime/graphics/WebGLRenderContext.hx",81,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_86_bufferSubData,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","bufferSubData",0x1a391db5,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.bufferSubData","lime/graphics/WebGLRenderContext.hx",86,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_92_compressedTexImage2D,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","compressedTexImage2D",0x671778fc,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.compressedTexImage2D","lime/graphics/WebGLRenderContext.hx",92,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_98_compressedTexSubImage2D,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","compressedTexSubImage2D",0xa7b7389e,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.compressedTexSubImage2D","lime/graphics/WebGLRenderContext.hx",98,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_104_readPixels,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","readPixels",0x888fa738,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.readPixels","lime/graphics/WebGLRenderContext.hx",104,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_111_texImage2D,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","texImage2D",0xbbd150db,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.texImage2D","lime/graphics/WebGLRenderContext.hx",111,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_130_texSubImage2D,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","texSubImage2D",0xfce4561f,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.texSubImage2D","lime/graphics/WebGLRenderContext.hx",130,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_147_uniformMatrix2fv,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","uniformMatrix2fv",0x2c1d1c62,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.uniformMatrix2fv","lime/graphics/WebGLRenderContext.hx",147,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_152_uniformMatrix3fv,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","uniformMatrix3fv",0x2c1ddea3,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.uniformMatrix3fv","lime/graphics/WebGLRenderContext.hx",152,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_157_uniformMatrix4fv,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","uniformMatrix4fv",0x2c1ea0e4,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.uniformMatrix4fv","lime/graphics/WebGLRenderContext.hx",157,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_162_fromWebGL2RenderContext,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","fromWebGL2RenderContext",0x08f222a1,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.fromWebGL2RenderContext","lime/graphics/WebGLRenderContext.hx",162,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_167_fromRenderContext,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","fromRenderContext",0x3f3021fa,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.fromRenderContext","lime/graphics/WebGLRenderContext.hx",167,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_172_fromGL,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","fromGL",0xe3a577a4,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.fromGL","lime/graphics/WebGLRenderContext.hx",172,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_179_fromOpenGLContext,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","fromOpenGLContext",0x06780a01,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.fromOpenGLContext","lime/graphics/WebGLRenderContext.hx",179,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_190_fromOpenGLES2Context,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","fromOpenGLES2Context",0x3fef4159,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.fromOpenGLES2Context","lime/graphics/WebGLRenderContext.hx",190,0x59a06254)
HX_LOCAL_STACK_FRAME(_hx_pos_03d5164364d6a378_201_fromOpenGLES3Context,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_","fromOpenGLES3Context",0x7921b378,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_.fromOpenGLES3Context","lime/graphics/WebGLRenderContext.hx",201,0x59a06254)
namespace lime{
namespace graphics{
namespace _WebGLRenderContext{

void WebGLRenderContext_Impl__obj::__construct() { }

Dynamic WebGLRenderContext_Impl__obj::__CreateEmpty() { return new WebGLRenderContext_Impl__obj; }

void *WebGLRenderContext_Impl__obj::_hx_vtable = 0;

Dynamic WebGLRenderContext_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WebGLRenderContext_Impl__obj > _hx_result = new WebGLRenderContext_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WebGLRenderContext_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04e3519f;
}

void WebGLRenderContext_Impl__obj::bufferData( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int target, ::lime::utils::ArrayBufferView srcData,int usage){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_81_bufferData)
HXDLIN(  81)		::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::bufferData(this1,target,srcData,usage,null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(WebGLRenderContext_Impl__obj,bufferData,(void))

void WebGLRenderContext_Impl__obj::bufferSubData( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int target,int offset, ::lime::utils::ArrayBufferView srcData){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_86_bufferSubData)
HXDLIN(  86)		 ::Dynamic length = null();
HXDLIN(  86)		 ::Dynamic size;
HXDLIN(  86)		if (::hx::IsNotNull( length )) {
HXDLIN(  86)			size = length;
            		}
            		else {
HXDLIN(  86)			if (::hx::IsNotNull( srcData )) {
HXDLIN(  86)				size = srcData->byteLength;
            			}
            			else {
HXDLIN(  86)				size = 0;
            			}
            		}
HXDLIN(  86)		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),srcData,null(),0);
HXDLIN(  86)		this1->bufferSubData(target,offset,( (int)(size) ),::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(WebGLRenderContext_Impl__obj,bufferSubData,(void))

void WebGLRenderContext_Impl__obj::compressedTexImage2D( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int target,int level,int internalformat,int width,int height,int border, ::lime::utils::ArrayBufferView srcData){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_92_compressedTexImage2D)
HXDLIN(  92)		::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::compressedTexImage2D(this1,target,level,internalformat,width,height,border,srcData,null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(WebGLRenderContext_Impl__obj,compressedTexImage2D,(void))

void WebGLRenderContext_Impl__obj::compressedTexSubImage2D( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int target,int level,int xoffset,int yoffset,int width,int height,int format, ::lime::utils::ArrayBufferView srcData){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_98_compressedTexSubImage2D)
HXDLIN(  98)		 ::Dynamic srcLengthOverride = null();
HXDLIN(  98)		 ::Dynamic imageSize;
HXDLIN(  98)		if (::hx::IsNotNull( srcLengthOverride )) {
HXDLIN(  98)			imageSize = srcLengthOverride;
            		}
            		else {
HXDLIN(  98)			if (::hx::IsNotNull( srcData )) {
HXDLIN(  98)				imageSize = srcData->byteLength;
            			}
            			else {
HXDLIN(  98)				imageSize = 0;
            			}
            		}
HXDLIN(  98)		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),srcData,null(),0);
HXDLIN(  98)		this1->compressedTexSubImage2D(target,level,xoffset,yoffset,width,height,format,( (int)(imageSize) ),::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(WebGLRenderContext_Impl__obj,compressedTexSubImage2D,(void))

void WebGLRenderContext_Impl__obj::readPixels( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int x,int y,int width,int height,int format,int type, ::lime::utils::ArrayBufferView pixels){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_104_readPixels)
HXDLIN( 104)		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),pixels,null(),0);
HXDLIN( 104)		this1->readPixels(x,y,width,height,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(WebGLRenderContext_Impl__obj,readPixels,(void))

void WebGLRenderContext_Impl__obj::texImage2D( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int target,int level,int internalformat,int width,int height,int border,int format,int type, ::lime::utils::ArrayBufferView srcData){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_111_texImage2D)
HXDLIN( 111)		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),srcData,null(),0);
HXDLIN( 111)		this1->texImage2D(target,level,internalformat,width,height,border,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(WebGLRenderContext_Impl__obj,texImage2D,(void))

void WebGLRenderContext_Impl__obj::texSubImage2D( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int target,int level,int xoffset,int yoffset,int width,int height,int format,int type, ::lime::utils::ArrayBufferView srcData,::hx::Null< int >  __o_srcOffset){
            		int srcOffset = __o_srcOffset.Default(0);
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_130_texSubImage2D)
HXDLIN( 130)		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),srcData,null(),srcOffset);
HXDLIN( 130)		this1->texSubImage2D(target,level,xoffset,yoffset,width,height,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(WebGLRenderContext_Impl__obj,texSubImage2D,(void))

void WebGLRenderContext_Impl__obj::uniformMatrix2fv( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int location,bool transpose, ::lime::utils::ArrayBufferView v){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_147_uniformMatrix2fv)
HXDLIN( 147)		::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::uniformMatrix2fv(this1,location,transpose,v,null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(WebGLRenderContext_Impl__obj,uniformMatrix2fv,(void))

void WebGLRenderContext_Impl__obj::uniformMatrix3fv( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int location,bool transpose, ::lime::utils::ArrayBufferView v){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_152_uniformMatrix3fv)
HXDLIN( 152)		::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::uniformMatrix3fv(this1,location,transpose,v,null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(WebGLRenderContext_Impl__obj,uniformMatrix3fv,(void))

void WebGLRenderContext_Impl__obj::uniformMatrix4fv( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int location,bool transpose, ::lime::utils::ArrayBufferView v){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_157_uniformMatrix4fv)
HXDLIN( 157)		::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::uniformMatrix4fv(this1,location,transpose,v,null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(WebGLRenderContext_Impl__obj,uniformMatrix4fv,(void))

 ::lime::_internal::backend::native::NativeOpenGLRenderContext WebGLRenderContext_Impl__obj::fromWebGL2RenderContext( ::lime::_internal::backend::native::NativeOpenGLRenderContext gl){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_162_fromWebGL2RenderContext)
HXDLIN( 162)		return gl;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WebGLRenderContext_Impl__obj,fromWebGL2RenderContext,return )

 ::lime::_internal::backend::native::NativeOpenGLRenderContext WebGLRenderContext_Impl__obj::fromRenderContext( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_167_fromRenderContext)
HXDLIN( 167)		return context->webgl;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WebGLRenderContext_Impl__obj,fromRenderContext,return )

 ::lime::_internal::backend::native::NativeOpenGLRenderContext WebGLRenderContext_Impl__obj::fromGL(::hx::Class gl){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_172_fromGL)
HXDLIN( 172)		return ::lime::graphics::opengl::GL_obj::context;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WebGLRenderContext_Impl__obj,fromGL,return )

 ::lime::_internal::backend::native::NativeOpenGLRenderContext WebGLRenderContext_Impl__obj::fromOpenGLContext( ::lime::_internal::backend::native::NativeOpenGLRenderContext gl){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_179_fromOpenGLContext)
HXDLIN( 179)		return gl;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WebGLRenderContext_Impl__obj,fromOpenGLContext,return )

 ::lime::_internal::backend::native::NativeOpenGLRenderContext WebGLRenderContext_Impl__obj::fromOpenGLES2Context( ::lime::_internal::backend::native::NativeOpenGLRenderContext gl){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_190_fromOpenGLES2Context)
HXDLIN( 190)		return gl;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WebGLRenderContext_Impl__obj,fromOpenGLES2Context,return )

 ::lime::_internal::backend::native::NativeOpenGLRenderContext WebGLRenderContext_Impl__obj::fromOpenGLES3Context( ::lime::_internal::backend::native::NativeOpenGLRenderContext gl){
            	HX_STACKFRAME(&_hx_pos_03d5164364d6a378_201_fromOpenGLES3Context)
HXDLIN( 201)		return gl;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WebGLRenderContext_Impl__obj,fromOpenGLES3Context,return )


WebGLRenderContext_Impl__obj::WebGLRenderContext_Impl__obj()
{
}

bool WebGLRenderContext_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fromGL") ) { outValue = fromGL_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bufferData") ) { outValue = bufferData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readPixels") ) { outValue = readPixels_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"texImage2D") ) { outValue = texImage2D_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bufferSubData") ) { outValue = bufferSubData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"texSubImage2D") ) { outValue = texSubImage2D_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uniformMatrix2fv") ) { outValue = uniformMatrix2fv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uniformMatrix3fv") ) { outValue = uniformMatrix3fv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uniformMatrix4fv") ) { outValue = uniformMatrix4fv_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fromRenderContext") ) { outValue = fromRenderContext_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromOpenGLContext") ) { outValue = fromOpenGLContext_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"compressedTexImage2D") ) { outValue = compressedTexImage2D_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromOpenGLES2Context") ) { outValue = fromOpenGLES2Context_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromOpenGLES3Context") ) { outValue = fromOpenGLES3Context_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"compressedTexSubImage2D") ) { outValue = compressedTexSubImage2D_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromWebGL2RenderContext") ) { outValue = fromWebGL2RenderContext_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *WebGLRenderContext_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *WebGLRenderContext_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class WebGLRenderContext_Impl__obj::__mClass;

static ::String WebGLRenderContext_Impl__obj_sStaticFields[] = {
	HX_("bufferData",4a,bf,73,93),
	HX_("bufferSubData",aa,f6,e4,45),
	HX_("compressedTexImage2D",a7,d8,5d,24),
	HX_("compressedTexSubImage2D",d3,b5,7d,36),
	HX_("readPixels",23,d3,25,86),
	HX_("texImage2D",c6,7c,67,b9),
	HX_("texSubImage2D",14,2f,90,28),
	HX_("uniformMatrix2fv",8d,8a,59,c5),
	HX_("uniformMatrix3fv",ce,4c,5a,c5),
	HX_("uniformMatrix4fv",0f,0f,5b,c5),
	HX_("fromWebGL2RenderContext",d6,9f,b8,97),
	HX_("fromRenderContext",6f,19,d4,ba),
	HX_("fromGL",0f,92,c6,b5),
	HX_("fromOpenGLContext",76,01,1c,82),
	HX_("fromOpenGLES2Context",04,a1,35,fd),
	HX_("fromOpenGLES3Context",23,13,68,36),
	::String(null())
};

void WebGLRenderContext_Impl__obj::__register()
{
	WebGLRenderContext_Impl__obj _hx_dummy;
	WebGLRenderContext_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_",39,1a,af,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WebGLRenderContext_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WebGLRenderContext_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< WebGLRenderContext_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WebGLRenderContext_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WebGLRenderContext_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace _WebGLRenderContext
