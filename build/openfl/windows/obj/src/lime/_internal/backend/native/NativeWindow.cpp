#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_lime__internal_backend_native_NativeApplication
#include <lime/_internal/backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeWindow
#include <lime/_internal/backend/native/NativeWindow.h>
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
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
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
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
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
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b81205d558ca9a41_58_new,"lime._internal.backend.native.NativeWindow","new",0x09d80f6b,"lime._internal.backend.native.NativeWindow.new","lime/_internal/backend/native/NativeWindow.hx",58,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_187_alert,"lime._internal.backend.native.NativeWindow","alert",0xc3e8af27,"lime._internal.backend.native.NativeWindow.alert","lime/_internal/backend/native/NativeWindow.hx",187,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_197_close,"lime._internal.backend.native.NativeWindow","close",0xeabd6f83,"lime._internal.backend.native.NativeWindow.close","lime/_internal/backend/native/NativeWindow.hx",197,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_220_contextFlip,"lime._internal.backend.native.NativeWindow","contextFlip",0xc77cba47,"lime._internal.backend.native.NativeWindow.contextFlip","lime/_internal/backend/native/NativeWindow.hx",220,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_239_focus,"lime._internal.backend.native.NativeWindow","focus",0xa6e3b7a3,"lime._internal.backend.native.NativeWindow.focus","lime/_internal/backend/native/NativeWindow.hx",239,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_249_getCursor,"lime._internal.backend.native.NativeWindow","getCursor",0x5168b157,"lime._internal.backend.native.NativeWindow.getCursor","lime/_internal/backend/native/NativeWindow.hx",249,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_253_getDisplay,"lime._internal.backend.native.NativeWindow","getDisplay",0xd8e838a1,"lime._internal.backend.native.NativeWindow.getDisplay","lime/_internal/backend/native/NativeWindow.hx",253,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_270_getDisplayMode,"lime._internal.backend.native.NativeWindow","getDisplayMode",0xc4219ca4,"lime._internal.backend.native.NativeWindow.getDisplayMode","lime/_internal/backend/native/NativeWindow.hx",270,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_291_getFrameRate,"lime._internal.backend.native.NativeWindow","getFrameRate",0x852ab5cc,"lime._internal.backend.native.NativeWindow.getFrameRate","lime/_internal/backend/native/NativeWindow.hx",291,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_295_getMouseLock,"lime._internal.backend.native.NativeWindow","getMouseLock",0x4011f8cf,"lime._internal.backend.native.NativeWindow.getMouseLock","lime/_internal/backend/native/NativeWindow.hx",295,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_307_getOpacity,"lime._internal.backend.native.NativeWindow","getOpacity",0x09036c2a,"lime._internal.backend.native.NativeWindow.getOpacity","lime/_internal/backend/native/NativeWindow.hx",307,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_319_getTextInputEnabled,"lime._internal.backend.native.NativeWindow","getTextInputEnabled",0x70d2f3a5,"lime._internal.backend.native.NativeWindow.getTextInputEnabled","lime/_internal/backend/native/NativeWindow.hx",319,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_332_move,"lime._internal.backend.native.NativeWindow","move",0x9293cda6,"lime._internal.backend.native.NativeWindow.move","lime/_internal/backend/native/NativeWindow.hx",332,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_341_readPixels,"lime._internal.backend.native.NativeWindow","readPixels",0x54625b78,"lime._internal.backend.native.NativeWindow.readPixels","lime/_internal/backend/native/NativeWindow.hx",341,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_424_render,"lime._internal.backend.native.NativeWindow","render",0x71dbe52b,"lime._internal.backend.native.NativeWindow.render","lime/_internal/backend/native/NativeWindow.hx",424,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_460_resize,"lime._internal.backend.native.NativeWindow","resize",0x752dd3c9,"lime._internal.backend.native.NativeWindow.resize","lime/_internal/backend/native/NativeWindow.hx",460,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_470_setMinSize,"lime._internal.backend.native.NativeWindow","setMinSize",0x5e78bc46,"lime._internal.backend.native.NativeWindow.setMinSize","lime/_internal/backend/native/NativeWindow.hx",470,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_480_setMaxSize,"lime._internal.backend.native.NativeWindow","setMaxSize",0xed9fa658,"lime._internal.backend.native.NativeWindow.setMaxSize","lime/_internal/backend/native/NativeWindow.hx",480,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_489_setBorderless,"lime._internal.backend.native.NativeWindow","setBorderless",0x95611f52,"lime._internal.backend.native.NativeWindow.setBorderless","lime/_internal/backend/native/NativeWindow.hx",489,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_501_setCursor,"lime._internal.backend.native.NativeWindow","setCursor",0x34b99d63,"lime._internal.backend.native.NativeWindow.setCursor","lime/_internal/backend/native/NativeWindow.hx",501,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_540_setDisplayMode,"lime._internal.backend.native.NativeWindow","setDisplayMode",0xe4418518,"lime._internal.backend.native.NativeWindow.setDisplayMode","lime/_internal/backend/native/NativeWindow.hx",540,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_560_setMouseLock,"lime._internal.backend.native.NativeWindow","setMouseLock",0x550b1c43,"lime._internal.backend.native.NativeWindow.setMouseLock","lime/_internal/backend/native/NativeWindow.hx",560,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_574_setTextInputEnabled,"lime._internal.backend.native.NativeWindow","setTextInputEnabled",0xad6fe6b1,"lime._internal.backend.native.NativeWindow.setTextInputEnabled","lime/_internal/backend/native/NativeWindow.hx",574,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_586_setTextInputRect,"lime._internal.backend.native.NativeWindow","setTextInputRect",0xe3ba2cf4,"lime._internal.backend.native.NativeWindow.setTextInputRect","lime/_internal/backend/native/NativeWindow.hx",586,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_598_setFrameRate,"lime._internal.backend.native.NativeWindow","setFrameRate",0x9a23d940,"lime._internal.backend.native.NativeWindow.setFrameRate","lime/_internal/backend/native/NativeWindow.hx",598,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_612_setFullscreen,"lime._internal.backend.native.NativeWindow","setFullscreen",0x77a41348,"lime._internal.backend.native.NativeWindow.setFullscreen","lime/_internal/backend/native/NativeWindow.hx",612,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_635_setIcon,"lime._internal.backend.native.NativeWindow","setIcon",0xbaaf48c6,"lime._internal.backend.native.NativeWindow.setIcon","lime/_internal/backend/native/NativeWindow.hx",635,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_644_setMaximized,"lime._internal.backend.native.NativeWindow","setMaximized",0x5fdfd5ab,"lime._internal.backend.native.NativeWindow.setMaximized","lime/_internal/backend/native/NativeWindow.hx",644,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_656_setMinimized,"lime._internal.backend.native.NativeWindow","setMinimized",0x899cc319,"lime._internal.backend.native.NativeWindow.setMinimized","lime/_internal/backend/native/NativeWindow.hx",656,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_669_setOpacity,"lime._internal.backend.native.NativeWindow","setOpacity",0x0c810a9e,"lime._internal.backend.native.NativeWindow.setOpacity","lime/_internal/backend/native/NativeWindow.hx",669,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_678_setResizable,"lime._internal.backend.native.NativeWindow","setResizable",0x0a4efefe,"lime._internal.backend.native.NativeWindow.setResizable","lime/_internal/backend/native/NativeWindow.hx",678,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_695_setTitle,"lime._internal.backend.native.NativeWindow","setTitle",0xf813d7ab,"lime._internal.backend.native.NativeWindow.setTitle","lime/_internal/backend/native/NativeWindow.hx",695,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_707_setVisible,"lime._internal.backend.native.NativeWindow","setVisible",0xc4402545,"lime._internal.backend.native.NativeWindow.setVisible","lime/_internal/backend/native/NativeWindow.hx",707,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_721_warpMouse,"lime._internal.backend.native.NativeWindow","warpMouse",0x3c987808,"lime._internal.backend.native.NativeWindow.warpMouse","lime/_internal/backend/native/NativeWindow.hx",721,0x10f0f707)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void NativeWindow_obj::__construct( ::lime::ui::Window parent){
            	HX_GC_STACKFRAME(&_hx_pos_b81205d558ca9a41_58_new)
HXLINE(  59)		this->parent = parent;
HXLINE(  61)		this->cursor = ::lime::ui::MouseCursor_obj::DEFAULT_dyn();
HXLINE(  62)		this->displayMode =  ::lime::_hx_system::DisplayMode_obj::__alloc( HX_CTX ,0,0,0,0);
HXLINE(  64)		 ::Dynamic attributes = parent->_hx___attributes;
HXLINE(  65)		 ::Dynamic contextAttributes;
HXDLIN(  65)		if (::Reflect_obj::hasField(attributes,HX_("context",ef,95,77,19))) {
HXLINE(  65)			contextAttributes = attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic);
            		}
            		else {
HXLINE(  65)			contextAttributes =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE(  66)		::String title;
HXDLIN(  66)		if (::Reflect_obj::hasField(attributes,HX_("title",98,15,3b,10))) {
HXLINE(  66)			title = ( (::String)(attributes->__Field(HX_("title",98,15,3b,10),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  66)			title = HX_("Lime Application",c5,b5,9d,ec);
            		}
HXLINE(  67)		int flags = 0;
HXLINE(  69)		if (!(::Reflect_obj::hasField(contextAttributes,HX_("antialiasing",f4,16,b3,48)))) {
HXLINE(  69)			contextAttributes->__SetField(HX_("antialiasing",f4,16,b3,48),0,::hx::paccDynamic);
            		}
HXLINE(  70)		if (!(::Reflect_obj::hasField(contextAttributes,HX_("background",ee,93,1d,26)))) {
HXLINE(  70)			contextAttributes->__SetField(HX_("background",ee,93,1d,26),0,::hx::paccDynamic);
            		}
HXLINE(  71)		if (!(::Reflect_obj::hasField(contextAttributes,HX_("colorDepth",a0,08,96,fb)))) {
HXLINE(  71)			contextAttributes->__SetField(HX_("colorDepth",a0,08,96,fb),24,::hx::paccDynamic);
            		}
HXLINE(  72)		if (!(::Reflect_obj::hasField(contextAttributes,HX_("depth",03,f1,29,d7)))) {
HXLINE(  72)			contextAttributes->__SetField(HX_("depth",03,f1,29,d7),true,::hx::paccDynamic);
            		}
HXLINE(  73)		if (!(::Reflect_obj::hasField(contextAttributes,HX_("hardware",a8,e2,d3,75)))) {
HXLINE(  73)			contextAttributes->__SetField(HX_("hardware",a8,e2,d3,75),true,::hx::paccDynamic);
            		}
HXLINE(  74)		if (!(::Reflect_obj::hasField(contextAttributes,HX_("stencil",fc,bd,03,80)))) {
HXLINE(  74)			contextAttributes->__SetField(HX_("stencil",fc,bd,03,80),true,::hx::paccDynamic);
            		}
HXLINE(  75)		if (!(::Reflect_obj::hasField(contextAttributes,HX_("vsync",d1,2d,a8,3d)))) {
HXLINE(  75)			contextAttributes->__SetField(HX_("vsync",d1,2d,a8,3d),false,::hx::paccDynamic);
            		}
HXLINE(  80)		bool _hx_tmp;
HXDLIN(  80)		if (::Reflect_obj::hasField(contextAttributes,HX_("type",ba,f2,08,4d))) {
HXLINE(  80)			_hx_tmp = ::hx::IsEq( contextAttributes->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic),HX_("cairo",88,30,19,41) );
            		}
            		else {
HXLINE(  80)			_hx_tmp = false;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  80)			contextAttributes->__SetField(HX_("hardware",a8,e2,d3,75),false,::hx::paccDynamic);
            		}
HXLINE(  82)		bool _hx_tmp1;
HXDLIN(  82)		if (::Reflect_obj::hasField(attributes,HX_("allowHighDPI",92,07,a2,b4))) {
HXLINE(  82)			_hx_tmp1 = ( (bool)(attributes->__Field(HX_("allowHighDPI",92,07,a2,b4),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  82)			_hx_tmp1 = false;
            		}
HXDLIN(  82)		if (_hx_tmp1) {
HXLINE(  82)			flags = (flags | 2048);
            		}
HXLINE(  83)		bool _hx_tmp2;
HXDLIN(  83)		if (::Reflect_obj::hasField(attributes,HX_("alwaysOnTop",67,4d,53,16))) {
HXLINE(  83)			_hx_tmp2 = ( (bool)(attributes->__Field(HX_("alwaysOnTop",67,4d,53,16),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  83)			_hx_tmp2 = false;
            		}
HXDLIN(  83)		if (_hx_tmp2) {
HXLINE(  83)			flags = (flags | 32768);
            		}
HXLINE(  84)		bool _hx_tmp3;
HXDLIN(  84)		if (::Reflect_obj::hasField(attributes,HX_("borderless",45,46,71,17))) {
HXLINE(  84)			_hx_tmp3 = ( (bool)(attributes->__Field(HX_("borderless",45,46,71,17),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  84)			_hx_tmp3 = false;
            		}
HXDLIN(  84)		if (_hx_tmp3) {
HXLINE(  84)			flags = (flags | 2);
            		}
HXLINE(  85)		bool _hx_tmp4;
HXDLIN(  85)		if (::Reflect_obj::hasField(attributes,HX_("fullscreen",3b,3a,b4,f9))) {
HXLINE(  85)			_hx_tmp4 = ( (bool)(attributes->__Field(HX_("fullscreen",3b,3a,b4,f9),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  85)			_hx_tmp4 = false;
            		}
HXDLIN(  85)		if (_hx_tmp4) {
HXLINE(  85)			flags = (flags | 1);
            		}
HXLINE(  86)		bool _hx_tmp5;
HXDLIN(  86)		if (::Reflect_obj::hasField(attributes,HX_("hidden",6a,ff,95,4c))) {
HXLINE(  86)			_hx_tmp5 = ( (bool)(attributes->__Field(HX_("hidden",6a,ff,95,4c),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  86)			_hx_tmp5 = false;
            		}
HXDLIN(  86)		if (_hx_tmp5) {
HXLINE(  86)			flags = (flags | 4096);
            		}
HXLINE(  87)		bool _hx_tmp6;
HXDLIN(  87)		if (::Reflect_obj::hasField(attributes,HX_("maximized",18,0e,e1,fe))) {
HXLINE(  87)			_hx_tmp6 = ( (bool)(attributes->__Field(HX_("maximized",18,0e,e1,fe),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  87)			_hx_tmp6 = false;
            		}
HXDLIN(  87)		if (_hx_tmp6) {
HXLINE(  87)			flags = (flags | 16384);
            		}
HXLINE(  88)		bool _hx_tmp7;
HXDLIN(  88)		if (::Reflect_obj::hasField(attributes,HX_("minimized",86,fb,9d,28))) {
HXLINE(  88)			_hx_tmp7 = ( (bool)(attributes->__Field(HX_("minimized",86,fb,9d,28),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  88)			_hx_tmp7 = false;
            		}
HXDLIN(  88)		if (_hx_tmp7) {
HXLINE(  88)			flags = (flags | 8192);
            		}
HXLINE(  89)		bool _hx_tmp8;
HXDLIN(  89)		if (::Reflect_obj::hasField(attributes,HX_("resizable",6b,37,50,a9))) {
HXLINE(  89)			_hx_tmp8 = ( (bool)(attributes->__Field(HX_("resizable",6b,37,50,a9),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  89)			_hx_tmp8 = false;
            		}
HXDLIN(  89)		if (_hx_tmp8) {
HXLINE(  89)			flags = (flags | 4);
            		}
HXLINE(  91)		if (::hx::IsGreaterEq( contextAttributes->__Field(HX_("antialiasing",f4,16,b3,48),::hx::paccDynamic),4 )) {
HXLINE(  93)			flags = (flags | 96);
            		}
            		else {
HXLINE(  95)			if (::hx::IsGreaterEq( contextAttributes->__Field(HX_("antialiasing",f4,16,b3,48),::hx::paccDynamic),2 )) {
HXLINE(  97)				flags = (flags | 32);
            			}
            		}
HXLINE( 100)		if (::hx::IsEq( contextAttributes->__Field(HX_("colorDepth",a0,08,96,fb),::hx::paccDynamic),32 )) {
HXLINE( 100)			flags = (flags | 65536);
            		}
HXLINE( 101)		if (( (bool)(contextAttributes->__Field(HX_("depth",03,f1,29,d7),::hx::paccDynamic)) )) {
HXLINE( 101)			flags = (flags | 512);
            		}
HXLINE( 102)		if (( (bool)(contextAttributes->__Field(HX_("hardware",a8,e2,d3,75),::hx::paccDynamic)) )) {
HXLINE( 102)			flags = (flags | 8);
            		}
HXLINE( 103)		if (( (bool)(contextAttributes->__Field(HX_("stencil",fc,bd,03,80),::hx::paccDynamic)) )) {
HXLINE( 103)			flags = (flags | 1024);
            		}
HXLINE( 104)		if (( (bool)(contextAttributes->__Field(HX_("vsync",d1,2d,a8,3d),::hx::paccDynamic)) )) {
HXLINE( 104)			flags = (flags | 16);
            		}
HXLINE( 106)		 ::Dynamic width;
HXDLIN( 106)		if (::Reflect_obj::hasField(attributes,HX_("width",06,b6,62,ca))) {
HXLINE( 106)			width = attributes->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic);
            		}
            		else {
HXLINE( 106)			width = 800;
            		}
HXLINE( 107)		 ::Dynamic height;
HXDLIN( 107)		if (::Reflect_obj::hasField(attributes,HX_("height",e7,07,4c,02))) {
HXLINE( 107)			height = attributes->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic);
            		}
            		else {
HXLINE( 107)			height = 600;
            		}
HXLINE( 110)		this->handle = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_window_create(::hx::DynamicPtr(parent->application->_hx___backend->handle),( (int)(width) ),( (int)(height) ),flags,title)) );
HXLINE( 112)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 114)			parent->_hx___width = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_width(::hx::DynamicPtr(this->handle));
HXLINE( 115)			parent->_hx___height = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_height(::hx::DynamicPtr(this->handle));
HXLINE( 116)			parent->_hx___x = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_x(::hx::DynamicPtr(this->handle));
HXLINE( 117)			parent->_hx___y = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_y(::hx::DynamicPtr(this->handle));
HXLINE( 118)			bool _hx_tmp;
HXDLIN( 118)			if (::Reflect_obj::hasField(attributes,HX_("hidden",6a,ff,95,4c))) {
HXLINE( 118)				_hx_tmp = ( (bool)(attributes->__Field(HX_("hidden",6a,ff,95,4c),::hx::paccDynamic)) );
            			}
            			else {
HXLINE( 118)				_hx_tmp = false;
            			}
HXDLIN( 118)			parent->_hx___hidden = _hx_tmp;
HXLINE( 119)			parent->id = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_id(::hx::DynamicPtr(this->handle));
            		}
HXLINE( 122)		parent->_hx___scale = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_scale(::hx::DynamicPtr(this->handle));
HXLINE( 124)		 ::lime::graphics::RenderContext context =  ::lime::graphics::RenderContext_obj::__alloc( HX_CTX );
HXLINE( 125)		context->window = parent;
HXLINE( 127)		::String contextType = ( (::String)(( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_context_type(::hx::DynamicPtr(this->handle))) )) );
HXLINE( 129)		if ((contextType == HX_("opengl",6f,64,94,21))) {
HXLINE( 132)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl =  ::lime::_internal::backend::native::NativeOpenGLRenderContext_obj::__alloc( HX_CTX );
HXLINE( 134)			this->useHardware = true;
HXLINE( 137)			context->gl = gl;
HXLINE( 140)			context->gles2 = gl;
HXLINE( 141)			context->webgl = ::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::fromWebGL2RenderContext(gl);
HXLINE( 142)			context->type = gl->type;
HXLINE( 143)			context->version = ::Std_obj::string(gl->version);
HXLINE( 145)			bool _hx_tmp;
HXDLIN( 145)			if ((gl->type == HX_("opengles",9d,f6,c9,fa))) {
HXLINE( 145)				_hx_tmp = (gl->version >= 3);
            			}
            			else {
HXLINE( 145)				_hx_tmp = false;
            			}
HXDLIN( 145)			if (_hx_tmp) {
HXLINE( 147)				context->gles3 = gl;
HXLINE( 148)				context->webgl2 = gl;
            			}
HXLINE( 151)			if (::hx::IsNull( ::lime::graphics::opengl::GL_obj::context )) {
HXLINE( 153)				::lime::graphics::opengl::GL_obj::context = gl;
            			}
            		}
            		else {
HXLINE( 157)			this->useHardware = false;
HXLINE( 160)			context->cairo = this->cairo;
HXLINE( 161)			context->type = HX_("cairo",88,30,19,41);
HXLINE( 162)			context->version = HX_("",00,00,00,00);
HXLINE( 164)			parent->context = context;
HXLINE( 165)			this->render();
HXLINE( 167)			context->type = HX_("cairo",88,30,19,41);
            		}
HXLINE( 170)		contextAttributes->__SetField(HX_("type",ba,f2,08,4d),context->type,::hx::paccDynamic);
HXLINE( 171)		context->attributes = contextAttributes;
HXLINE( 172)		parent->context = context;
HXLINE( 174)		Float _hx_tmp9;
HXDLIN( 174)		if (::Reflect_obj::hasField(attributes,HX_("frameRate",ad,11,25,39))) {
HXLINE( 174)			_hx_tmp9 = ( (Float)(attributes->__Field(HX_("frameRate",ad,11,25,39),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 174)			_hx_tmp9 = ( (Float)(60) );
            		}
HXDLIN( 174)		this->setFrameRate(_hx_tmp9);
HXLINE( 182)		this->setTextInputEnabled(false);
            	}

Dynamic NativeWindow_obj::__CreateEmpty() { return new NativeWindow_obj; }

void *NativeWindow_obj::_hx_vtable = 0;

Dynamic NativeWindow_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeWindow_obj > _hx_result = new NativeWindow_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NativeWindow_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01d779fb;
}

void NativeWindow_obj::alert(::String message,::String title){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_187_alert)
HXDLIN( 187)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 190)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_alert(::hx::DynamicPtr(this->handle),message,title);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,alert,(void))

void NativeWindow_obj::close(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_197_close)
HXDLIN( 197)		if (!(this->closing)) {
HXLINE( 199)			this->closing = true;
HXLINE( 200)			this->parent->onClose->dispatch();
HXLINE( 202)			if (!(this->parent->onClose->canceled)) {
HXLINE( 204)				if (::hx::IsNotNull( this->handle )) {
HXLINE( 207)					::lime::_internal::backend::native::NativeCFFI_obj::lime_window_close(::hx::DynamicPtr(this->handle));
HXLINE( 209)					this->handle = null();
            				}
            			}
            			else {
HXLINE( 214)				this->closing = false;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,close,(void))

void NativeWindow_obj::contextFlip(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_220_contextFlip)
HXLINE( 222)		if (!(this->useHardware)) {
HXLINE( 225)			if (::hx::IsNotNull( this->cairo )) {
HXLINE( 227)				::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(this->primarySurface);
            			}
HXLINE( 230)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_context_unlock(::hx::DynamicPtr(this->handle));
            		}
HXLINE( 233)		::lime::_internal::backend::native::NativeCFFI_obj::lime_window_context_flip(::hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,contextFlip,(void))

void NativeWindow_obj::focus(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_239_focus)
HXDLIN( 239)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 242)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_focus(::hx::DynamicPtr(this->handle));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,focus,(void))

 ::lime::ui::MouseCursor NativeWindow_obj::getCursor(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_249_getCursor)
HXDLIN( 249)		return this->cursor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getCursor,return )

 ::lime::_hx_system::Display NativeWindow_obj::getDisplay(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_253_getDisplay)
HXLINE( 254)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 257)			int index = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_display(::hx::DynamicPtr(this->handle));
HXLINE( 259)			if ((index > -1)) {
HXLINE( 261)				return ::lime::_hx_system::System_obj::getDisplay(index);
            			}
            		}
HXLINE( 266)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getDisplay,return )

 ::lime::_hx_system::DisplayMode NativeWindow_obj::getDisplayMode(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_270_getDisplayMode)
HXLINE( 271)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 277)			 ::Dynamic data = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_display_mode(::hx::DynamicPtr(this->handle))) );
HXLINE( 278)			this->displayMode->width = ( (int)(data->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
HXLINE( 279)			this->displayMode->height = ( (int)(data->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
HXLINE( 280)			this->displayMode->pixelFormat = ( (int)(data->__Field(HX_("pixelFormat",5d,72,1b,6f),::hx::paccDynamic)) );
HXLINE( 281)			this->displayMode->refreshRate = ( (int)(data->__Field(HX_("refreshRate",5b,e2,3f,40),::hx::paccDynamic)) );
            		}
HXLINE( 286)		return this->displayMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getDisplayMode,return )

Float NativeWindow_obj::getFrameRate(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_291_getFrameRate)
HXDLIN( 291)		return this->frameRate;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getFrameRate,return )

bool NativeWindow_obj::getMouseLock(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_295_getMouseLock)
HXLINE( 296)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 299)			this->mouseLock = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_mouse_lock(::hx::DynamicPtr(this->handle));
            		}
HXLINE( 303)		return this->mouseLock;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getMouseLock,return )

Float NativeWindow_obj::getOpacity(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_307_getOpacity)
HXLINE( 308)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 311)			return ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_opacity(::hx::DynamicPtr(this->handle));
            		}
HXLINE( 315)		return ((Float)1.0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getOpacity,return )

bool NativeWindow_obj::getTextInputEnabled(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_319_getTextInputEnabled)
HXLINE( 320)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 323)			return ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_text_input_enabled(::hx::DynamicPtr(this->handle));
            		}
HXLINE( 327)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getTextInputEnabled,return )

void NativeWindow_obj::move(int x,int y){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_332_move)
HXDLIN( 332)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 335)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_move(::hx::DynamicPtr(this->handle),x,y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,move,(void))

 ::lime::graphics::Image NativeWindow_obj::readPixels( ::lime::math::Rectangle rect){
            	HX_GC_STACKFRAME(&_hx_pos_b81205d558ca9a41_341_readPixels)
HXLINE( 342)		 ::lime::graphics::ImageBuffer imageBuffer = null();
HXLINE( 344)		::String _hx_switch_0 = this->parent->context->type;
            		if (  (_hx_switch_0==HX_("opengl",6f,64,94,21)) ||  (_hx_switch_0==HX_("opengles",9d,f6,c9,fa)) ||  (_hx_switch_0==HX_("webgl",b9,4b,bc,c7)) ){
HXLINE( 347)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->parent->context->webgl;
HXLINE( 348)			int windowWidth = ::Std_obj::_hx_int((( (Float)(this->parent->_hx___width) ) * this->parent->_hx___scale));
HXLINE( 349)			int windowHeight = ::Std_obj::_hx_int((( (Float)(this->parent->_hx___height) ) * this->parent->_hx___scale));
HXLINE( 351)			int x;
HXDLIN( 351)			int y;
HXDLIN( 351)			int width;
HXDLIN( 351)			int height;
HXLINE( 353)			if (::hx::IsNotNull( rect )) {
HXLINE( 355)				x = ::Std_obj::_hx_int(rect->x);
HXLINE( 356)				y = ::Std_obj::_hx_int(((( (Float)(windowHeight) ) - rect->y) - rect->height));
HXLINE( 357)				width = ::Std_obj::_hx_int(rect->width);
HXLINE( 358)				height = ::Std_obj::_hx_int(rect->height);
            			}
            			else {
HXLINE( 362)				x = 0;
HXLINE( 363)				y = 0;
HXLINE( 364)				width = windowWidth;
HXLINE( 365)				height = windowHeight;
            			}
HXLINE( 368)			 ::Dynamic elements = ((width * height) * 4);
HXDLIN( 368)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 368)			::cpp::VirtualArray array = null();
HXDLIN( 368)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 368)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 368)			 ::Dynamic len = null();
HXDLIN( 368)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 368)			if (::hx::IsNotNull( elements )) {
HXLINE( 368)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            			}
            			else {
HXLINE( 368)				if (::hx::IsNotNull( array )) {
HXLINE( 368)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 368)					_this->byteOffset = 0;
HXDLIN( 368)					_this->length = array->get_length();
HXDLIN( 368)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 368)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 368)					_this->buffer = this2;
HXDLIN( 368)					_this->copyFromArray(array,null());
HXDLIN( 368)					this1 = _this;
            				}
            				else {
HXLINE( 368)					if (::hx::IsNotNull( vector )) {
HXLINE( 368)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 368)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 368)						_this->byteOffset = 0;
HXDLIN( 368)						_this->length = array->get_length();
HXDLIN( 368)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 368)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 368)						_this->buffer = this2;
HXDLIN( 368)						_this->copyFromArray(array,null());
HXDLIN( 368)						this1 = _this;
            					}
            					else {
HXLINE( 368)						if (::hx::IsNotNull( view )) {
HXLINE( 368)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 368)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 368)							int srcLength = view->length;
HXDLIN( 368)							int srcByteOffset = view->byteOffset;
HXDLIN( 368)							int srcElementSize = view->bytesPerElement;
HXDLIN( 368)							int elementSize = _this->bytesPerElement;
HXDLIN( 368)							if ((view->type == _this->type)) {
HXLINE( 368)								int srcLength = srcData->length;
HXDLIN( 368)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 368)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 368)								_this->buffer = this1;
HXDLIN( 368)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 368)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 368)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 368)							_this->byteOffset = 0;
HXDLIN( 368)							_this->length = srcLength;
HXDLIN( 368)							this1 = _this;
            						}
            						else {
HXLINE( 368)							if (::hx::IsNotNull( buffer )) {
HXLINE( 368)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 368)								int in_byteOffset = 0;
HXDLIN( 368)								if ((in_byteOffset < 0)) {
HXLINE( 368)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 368)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 368)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 368)								int bufferByteLength = buffer->length;
HXDLIN( 368)								int elementSize = _this->bytesPerElement;
HXDLIN( 368)								int newByteLength = bufferByteLength;
HXDLIN( 368)								if (::hx::IsNull( len )) {
HXLINE( 368)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 368)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 368)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 368)									if ((newByteLength < 0)) {
HXLINE( 368)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 368)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 368)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 368)									if ((newRange > bufferByteLength)) {
HXLINE( 368)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 368)								_this->buffer = buffer;
HXDLIN( 368)								_this->byteOffset = in_byteOffset;
HXDLIN( 368)								_this->byteLength = newByteLength;
HXDLIN( 368)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 368)								this1 = _this;
            							}
            							else {
HXLINE( 368)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 368)			 ::lime::utils::ArrayBufferView data = this1;
HXLINE( 370)			{
HXLINE( 370)				int format = gl->RGBA;
HXDLIN( 370)				int type = gl->UNSIGNED_BYTE;
HXDLIN( 370)				{
HXLINE( 370)					::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data,null(),0);
HXDLIN( 370)					gl->readPixels(x,y,width,height,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            				}
            			}
HXLINE( 374)			int rowLength = (width * 4);
HXLINE( 375)			int srcPosition = ((height - 1) * rowLength);
HXLINE( 376)			int destPosition = 0;
HXLINE( 378)			 ::haxe::io::Bytes temp = ::haxe::io::Bytes_obj::alloc(rowLength);
HXLINE( 379)			 ::haxe::io::Bytes buffer1 = data->buffer;
HXLINE( 380)			int rows = ::Std_obj::_hx_int((( (Float)(height) ) / ( (Float)(2) )));
HXLINE( 382)			while(true){
HXLINE( 382)				rows = (rows - 1);
HXDLIN( 382)				if (!(((rows + 1) > 0))) {
HXLINE( 382)					goto _hx_goto_14;
            				}
HXLINE( 384)				temp->blit(0,buffer1,destPosition,rowLength);
HXLINE( 385)				buffer1->blit(destPosition,buffer1,srcPosition,rowLength);
HXLINE( 386)				buffer1->blit(srcPosition,temp,0,rowLength);
HXLINE( 388)				destPosition = (destPosition + rowLength);
HXLINE( 389)				srcPosition = (srcPosition - rowLength);
            			}
            			_hx_goto_14:;
HXLINE( 393)			imageBuffer =  ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,data,width,height,32,0);
HXLINE( 346)			goto _hx_goto_13;
            		}
            		/* default */{
HXLINE( 398)			::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *, ::hx::Object *) > imageBuffer1 = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_read_pixels;
HXDLIN( 398)			 ::Dynamic imageBuffer2 = this->handle;
HXDLIN( 398)			 ::Dynamic elements = null();
HXDLIN( 398)			 ::haxe::io::Bytes buffer = ::haxe::io::Bytes_obj::alloc(0);
HXDLIN( 398)			::cpp::VirtualArray array = null();
HXDLIN( 398)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 398)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 398)			 ::Dynamic len = null();
HXDLIN( 398)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 398)			if (::hx::IsNotNull( elements )) {
HXLINE( 398)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            			}
            			else {
HXLINE( 398)				if (::hx::IsNotNull( array )) {
HXLINE( 398)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 398)					_this->byteOffset = 0;
HXDLIN( 398)					_this->length = array->get_length();
HXDLIN( 398)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 398)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 398)					_this->buffer = this2;
HXDLIN( 398)					_this->copyFromArray(array,null());
HXDLIN( 398)					this1 = _this;
            				}
            				else {
HXLINE( 398)					if (::hx::IsNotNull( vector )) {
HXLINE( 398)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 398)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 398)						_this->byteOffset = 0;
HXDLIN( 398)						_this->length = array->get_length();
HXDLIN( 398)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 398)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 398)						_this->buffer = this2;
HXDLIN( 398)						_this->copyFromArray(array,null());
HXDLIN( 398)						this1 = _this;
            					}
            					else {
HXLINE( 398)						if (::hx::IsNotNull( view )) {
HXLINE( 398)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 398)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 398)							int srcLength = view->length;
HXDLIN( 398)							int srcByteOffset = view->byteOffset;
HXDLIN( 398)							int srcElementSize = view->bytesPerElement;
HXDLIN( 398)							int elementSize = _this->bytesPerElement;
HXDLIN( 398)							if ((view->type == _this->type)) {
HXLINE( 398)								int srcLength = srcData->length;
HXDLIN( 398)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 398)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 398)								_this->buffer = this1;
HXDLIN( 398)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 398)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 398)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 398)							_this->byteOffset = 0;
HXDLIN( 398)							_this->length = srcLength;
HXDLIN( 398)							this1 = _this;
            						}
            						else {
HXLINE( 398)							if (::hx::IsNotNull( buffer )) {
HXLINE( 398)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 398)								int in_byteOffset = 0;
HXDLIN( 398)								if ((in_byteOffset < 0)) {
HXLINE( 398)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 398)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 398)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 398)								int bufferByteLength = buffer->length;
HXDLIN( 398)								int elementSize = _this->bytesPerElement;
HXDLIN( 398)								int newByteLength = bufferByteLength;
HXDLIN( 398)								if (::hx::IsNull( len )) {
HXLINE( 398)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 398)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 398)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 398)									if ((newByteLength < 0)) {
HXLINE( 398)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 398)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 398)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 398)									if ((newRange > bufferByteLength)) {
HXLINE( 398)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 398)								_this->buffer = buffer;
HXDLIN( 398)								_this->byteOffset = in_byteOffset;
HXDLIN( 398)								_this->byteLength = newByteLength;
HXDLIN( 398)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 398)								this1 = _this;
            							}
            							else {
HXLINE( 398)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 398)			imageBuffer = ( ( ::Dynamic)(imageBuffer1(::hx::DynamicPtr(imageBuffer2),::hx::DynamicPtr(rect),::hx::DynamicPtr( ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,this1,null(),null(),null(),null())))) );
HXLINE( 409)			if (::hx::IsNotNull( imageBuffer )) {
HXLINE( 411)				imageBuffer->format = 0;
            			}
            		}
            		_hx_goto_13:;
HXLINE( 415)		if (::hx::IsNotNull( imageBuffer )) {
HXLINE( 417)			return  ::lime::graphics::Image_obj::__alloc( HX_CTX ,imageBuffer,null(),null(),null(),null(),null(),null());
            		}
HXLINE( 420)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,readPixels,return )

void NativeWindow_obj::render(){
            	HX_GC_STACKFRAME(&_hx_pos_b81205d558ca9a41_424_render)
HXLINE( 426)		::lime::_internal::backend::native::NativeCFFI_obj::lime_window_context_make_current(::hx::DynamicPtr(this->handle));
HXLINE( 428)		if (!(this->useHardware)) {
HXLINE( 431)			 ::Dynamic lock = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_window_context_lock(::hx::DynamicPtr(this->handle))) );
HXLINE( 433)			bool _hx_tmp;
HXDLIN( 433)			if (::hx::IsNotNull( lock )) {
HXLINE( 434)				bool _hx_tmp1;
HXDLIN( 434)				bool _hx_tmp2;
HXDLIN( 434)				if (::hx::IsNotNull( this->cacheLock )) {
HXLINE( 434)					_hx_tmp2 = ::hx::IsNotEq( this->cacheLock->__Field(HX_("pixels",2d,ef,a9,8c),::hx::paccDynamic),lock->__Field(HX_("pixels",2d,ef,a9,8c),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 434)					_hx_tmp2 = true;
            				}
HXDLIN( 434)				if (!(_hx_tmp2)) {
HXLINE( 434)					_hx_tmp1 = ::hx::IsNotEq( this->cacheLock->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic),lock->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 434)					_hx_tmp1 = true;
            				}
HXDLIN( 434)				if (!(_hx_tmp1)) {
HXLINE( 433)					_hx_tmp = ::hx::IsNotEq( this->cacheLock->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic),lock->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 433)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 433)				_hx_tmp = false;
            			}
HXDLIN( 433)			if (_hx_tmp) {
HXLINE( 436)				this->primarySurface = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::create(( (Float)(lock->__Field(HX_("pixels",2d,ef,a9,8c),::hx::paccDynamic)) ),0,( (int)(lock->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ),( (int)(lock->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ),( (int)(lock->__Field(HX_("pitch",c0,bb,a0,c2),::hx::paccDynamic)) ));
HXLINE( 438)				if (::hx::IsNotNull( this->cairo )) {
HXLINE( 440)					this->cairo->recreate(this->primarySurface);
            				}
            				else {
HXLINE( 444)					this->cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,this->primarySurface);
            				}
HXLINE( 447)				this->parent->context->cairo = this->cairo;
            			}
HXLINE( 450)			this->cacheLock = lock;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,render,(void))

void NativeWindow_obj::resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_460_resize)
HXDLIN( 460)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 463)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_resize(::hx::DynamicPtr(this->handle),width,height);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,resize,(void))

void NativeWindow_obj::setMinSize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_470_setMinSize)
HXDLIN( 470)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 473)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_minimum_size(::hx::DynamicPtr(this->handle),width,height);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,setMinSize,(void))

void NativeWindow_obj::setMaxSize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_480_setMaxSize)
HXDLIN( 480)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 483)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_maximum_size(::hx::DynamicPtr(this->handle),width,height);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,setMaxSize,(void))

bool NativeWindow_obj::setBorderless(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_489_setBorderless)
HXLINE( 490)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 493)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_borderless(::hx::DynamicPtr(this->handle),value);
            		}
HXLINE( 497)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setBorderless,return )

 ::lime::ui::MouseCursor NativeWindow_obj::setCursor( ::lime::ui::MouseCursor value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_501_setCursor)
HXLINE( 502)		if (::hx::IsPointerNotEq( this->cursor,value )) {
HXLINE( 504)			if (::hx::IsNull( value )) {
HXLINE( 507)				::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_cursor(::hx::DynamicPtr(this->handle),0);
            			}
            			else {
HXLINE( 512)				int type;
HXDLIN( 512)				switch((int)(value->_hx_getIndex())){
            					case (int)0: {
HXLINE( 512)						type = 1;
            					}
            					break;
            					case (int)1: {
HXLINE( 512)						type = 2;
            					}
            					break;
            					case (int)3: {
HXLINE( 512)						type = 4;
            					}
            					break;
            					case (int)4: {
HXLINE( 512)						type = 5;
            					}
            					break;
            					case (int)5: {
HXLINE( 512)						type = 6;
            					}
            					break;
            					case (int)6: {
HXLINE( 512)						type = 7;
            					}
            					break;
            					case (int)7: {
HXLINE( 512)						type = 8;
            					}
            					break;
            					case (int)8: {
HXLINE( 512)						type = 9;
            					}
            					break;
            					case (int)9: {
HXLINE( 512)						type = 10;
            					}
            					break;
            					case (int)10: {
HXLINE( 512)						type = 11;
            					}
            					break;
            					case (int)11: {
HXLINE( 512)						type = 12;
            					}
            					break;
            					default:{
HXLINE( 512)						type = 3;
            					}
            				}
HXLINE( 529)				::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_cursor(::hx::DynamicPtr(this->handle),type);
            			}
HXLINE( 533)			this->cursor = value;
            		}
HXLINE( 536)		return this->cursor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setCursor,return )

 ::lime::_hx_system::DisplayMode NativeWindow_obj::setDisplayMode( ::lime::_hx_system::DisplayMode value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_540_setDisplayMode)
HXLINE( 541)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 547)			 ::Dynamic data = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_display_mode(::hx::DynamicPtr(this->handle),::hx::DynamicPtr(value))) );
HXLINE( 548)			this->displayMode->width = ( (int)(data->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
HXLINE( 549)			this->displayMode->height = ( (int)(data->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
HXLINE( 550)			this->displayMode->pixelFormat = ( (int)(data->__Field(HX_("pixelFormat",5d,72,1b,6f),::hx::paccDynamic)) );
HXLINE( 551)			this->displayMode->refreshRate = ( (int)(data->__Field(HX_("refreshRate",5b,e2,3f,40),::hx::paccDynamic)) );
            		}
HXLINE( 556)		return this->displayMode;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setDisplayMode,return )

bool NativeWindow_obj::setMouseLock(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_560_setMouseLock)
HXLINE( 561)		if ((this->mouseLock != value)) {
HXLINE( 564)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_mouse_lock(::hx::DynamicPtr(this->handle),value);
HXLINE( 567)			this->mouseLock = value;
            		}
HXLINE( 570)		return this->mouseLock;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setMouseLock,return )

bool NativeWindow_obj::setTextInputEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_574_setTextInputEnabled)
HXLINE( 575)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 578)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_text_input_enabled(::hx::DynamicPtr(this->handle),value);
            		}
HXLINE( 582)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setTextInputEnabled,return )

 ::lime::math::Rectangle NativeWindow_obj::setTextInputRect( ::lime::math::Rectangle value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_586_setTextInputRect)
HXLINE( 587)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 590)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_text_input_rect(::hx::DynamicPtr(this->handle),::hx::DynamicPtr(value));
            		}
HXLINE( 594)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setTextInputRect,return )

Float NativeWindow_obj::setFrameRate(Float value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_598_setFrameRate)
HXLINE( 601)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 604)			::lime::_internal::backend::native::NativeCFFI_obj::lime_application_set_frame_rate(::hx::DynamicPtr(this->parent->application->_hx___backend->handle),value);
            		}
HXLINE( 608)		return (this->frameRate = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setFrameRate,return )

bool NativeWindow_obj::setFullscreen(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_612_setFullscreen)
HXLINE( 613)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 616)			value = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_fullscreen(::hx::DynamicPtr(this->handle),value);
HXLINE( 618)			this->parent->_hx___width = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_width(::hx::DynamicPtr(this->handle));
HXLINE( 619)			this->parent->_hx___height = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_height(::hx::DynamicPtr(this->handle));
HXLINE( 620)			this->parent->_hx___x = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_x(::hx::DynamicPtr(this->handle));
HXLINE( 621)			this->parent->_hx___y = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_y(::hx::DynamicPtr(this->handle));
HXLINE( 624)			if (value) {
HXLINE( 626)				this->parent->onFullscreen->dispatch();
            			}
            		}
HXLINE( 630)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setFullscreen,return )

void NativeWindow_obj::setIcon( ::lime::graphics::Image image){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_635_setIcon)
HXDLIN( 635)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 638)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_icon(::hx::DynamicPtr(this->handle),::hx::DynamicPtr(image->buffer));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setIcon,(void))

bool NativeWindow_obj::setMaximized(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_644_setMaximized)
HXLINE( 645)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 648)			return ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_maximized(::hx::DynamicPtr(this->handle),value);
            		}
HXLINE( 652)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setMaximized,return )

bool NativeWindow_obj::setMinimized(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_656_setMinimized)
HXLINE( 657)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 660)			return ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_minimized(::hx::DynamicPtr(this->handle),value);
            		}
HXLINE( 664)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setMinimized,return )

void NativeWindow_obj::setOpacity(Float value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_669_setOpacity)
HXDLIN( 669)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 672)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_opacity(::hx::DynamicPtr(this->handle),value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setOpacity,(void))

bool NativeWindow_obj::setResizable(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_678_setResizable)
HXLINE( 679)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 682)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_resizable(::hx::DynamicPtr(this->handle),value);
HXLINE( 686)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_borderless(::hx::DynamicPtr(this->handle),!(this->parent->_hx___borderless));
HXLINE( 687)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_borderless(::hx::DynamicPtr(this->handle),this->parent->_hx___borderless);
            		}
HXLINE( 691)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setResizable,return )

::String NativeWindow_obj::setTitle(::String value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_695_setTitle)
HXLINE( 696)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 699)			return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_title(::hx::DynamicPtr(this->handle),value)) );
            		}
HXLINE( 703)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setTitle,return )

bool NativeWindow_obj::setVisible(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_707_setVisible)
HXLINE( 708)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 711)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_visible(::hx::DynamicPtr(this->handle),value);
            		}
HXLINE( 715)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setVisible,return )

void NativeWindow_obj::warpMouse(int x,int y){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_721_warpMouse)
HXDLIN( 721)		::lime::_internal::backend::native::NativeCFFI_obj::lime_window_warp_mouse(::hx::DynamicPtr(this->handle),x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,warpMouse,(void))


::hx::ObjectPtr< NativeWindow_obj > NativeWindow_obj::__new( ::lime::ui::Window parent) {
	::hx::ObjectPtr< NativeWindow_obj > __this = new NativeWindow_obj();
	__this->__construct(parent);
	return __this;
}

::hx::ObjectPtr< NativeWindow_obj > NativeWindow_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::ui::Window parent) {
	NativeWindow_obj *__this = (NativeWindow_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeWindow_obj), true, "lime._internal.backend.native.NativeWindow"));
	*(void **)__this = NativeWindow_obj::_hx_vtable;
	__this->__construct(parent);
	return __this;
}

NativeWindow_obj::NativeWindow_obj()
{
}

void NativeWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeWindow);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(closing,"closing");
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(displayMode,"displayMode");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(mouseLock,"mouseLock");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(useHardware,"useHardware");
	HX_MARK_MEMBER_NAME(cacheLock,"cacheLock");
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	HX_MARK_MEMBER_NAME(primarySurface,"primarySurface");
	HX_MARK_END_CLASS();
}

void NativeWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(closing,"closing");
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(displayMode,"displayMode");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(mouseLock,"mouseLock");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(useHardware,"useHardware");
	HX_VISIT_MEMBER_NAME(cacheLock,"cacheLock");
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	HX_VISIT_MEMBER_NAME(primarySurface,"primarySurface");
}

::hx::Val NativeWindow_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return ::hx::Val( move_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return ::hx::Val( cairo ); }
		if (HX_FIELD_EQ(inName,"alert") ) { return ::hx::Val( alert_dyn() ); }
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"focus") ) { return ::hx::Val( focus_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle ); }
		if (HX_FIELD_EQ(inName,"cursor") ) { return ::hx::Val( cursor ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"closing") ) { return ::hx::Val( closing ); }
		if (HX_FIELD_EQ(inName,"setIcon") ) { return ::hx::Val( setIcon_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setTitle") ) { return ::hx::Val( setTitle_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return ::hx::Val( frameRate ); }
		if (HX_FIELD_EQ(inName,"mouseLock") ) { return ::hx::Val( mouseLock ); }
		if (HX_FIELD_EQ(inName,"cacheLock") ) { return ::hx::Val( cacheLock ); }
		if (HX_FIELD_EQ(inName,"getCursor") ) { return ::hx::Val( getCursor_dyn() ); }
		if (HX_FIELD_EQ(inName,"setCursor") ) { return ::hx::Val( setCursor_dyn() ); }
		if (HX_FIELD_EQ(inName,"warpMouse") ) { return ::hx::Val( warpMouse_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDisplay") ) { return ::hx::Val( getDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"getOpacity") ) { return ::hx::Val( getOpacity_dyn() ); }
		if (HX_FIELD_EQ(inName,"readPixels") ) { return ::hx::Val( readPixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMinSize") ) { return ::hx::Val( setMinSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMaxSize") ) { return ::hx::Val( setMaxSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"setOpacity") ) { return ::hx::Val( setOpacity_dyn() ); }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return ::hx::Val( setVisible_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayMode") ) { return ::hx::Val( displayMode ); }
		if (HX_FIELD_EQ(inName,"useHardware") ) { return ::hx::Val( useHardware ); }
		if (HX_FIELD_EQ(inName,"contextFlip") ) { return ::hx::Val( contextFlip_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFrameRate") ) { return ::hx::Val( getFrameRate_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMouseLock") ) { return ::hx::Val( getMouseLock_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMouseLock") ) { return ::hx::Val( setMouseLock_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFrameRate") ) { return ::hx::Val( setFrameRate_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMaximized") ) { return ::hx::Val( setMaximized_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMinimized") ) { return ::hx::Val( setMinimized_dyn() ); }
		if (HX_FIELD_EQ(inName,"setResizable") ) { return ::hx::Val( setResizable_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setBorderless") ) { return ::hx::Val( setBorderless_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFullscreen") ) { return ::hx::Val( setFullscreen_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { return ::hx::Val( primarySurface ); }
		if (HX_FIELD_EQ(inName,"getDisplayMode") ) { return ::hx::Val( getDisplayMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"setDisplayMode") ) { return ::hx::Val( setDisplayMode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setTextInputRect") ) { return ::hx::Val( setTextInputRect_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getTextInputEnabled") ) { return ::hx::Val( getTextInputEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTextInputEnabled") ) { return ::hx::Val( setTextInputEnabled_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NativeWindow_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast<  ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cursor") ) { cursor=inValue.Cast<  ::lime::ui::MouseCursor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"closing") ) { closing=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseLock") ) { mouseLock=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cacheLock") ) { cacheLock=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayMode") ) { displayMode=inValue.Cast<  ::lime::_hx_system::DisplayMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useHardware") ) { useHardware=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { primarySurface=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("handle",a8,83,fd,b7));
	outFields->push(HX_("closing",f5,de,25,79));
	outFields->push(HX_("cursor",d6,8e,e8,3e));
	outFields->push(HX_("displayMode",c5,72,53,30));
	outFields->push(HX_("frameRate",ad,11,25,39));
	outFields->push(HX_("mouseLock",b0,54,0c,f4));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("useHardware",0f,ea,de,cf));
	outFields->push(HX_("cacheLock",4d,ab,6c,43));
	outFields->push(HX_("cairo",88,30,19,41));
	outFields->push(HX_("primarySurface",8b,aa,ee,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NativeWindow_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeWindow_obj,handle),HX_("handle",a8,83,fd,b7)},
	{::hx::fsBool,(int)offsetof(NativeWindow_obj,closing),HX_("closing",f5,de,25,79)},
	{::hx::fsObject /*  ::lime::ui::MouseCursor */ ,(int)offsetof(NativeWindow_obj,cursor),HX_("cursor",d6,8e,e8,3e)},
	{::hx::fsObject /*  ::lime::_hx_system::DisplayMode */ ,(int)offsetof(NativeWindow_obj,displayMode),HX_("displayMode",c5,72,53,30)},
	{::hx::fsFloat,(int)offsetof(NativeWindow_obj,frameRate),HX_("frameRate",ad,11,25,39)},
	{::hx::fsBool,(int)offsetof(NativeWindow_obj,mouseLock),HX_("mouseLock",b0,54,0c,f4)},
	{::hx::fsObject /*  ::lime::ui::Window */ ,(int)offsetof(NativeWindow_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsBool,(int)offsetof(NativeWindow_obj,useHardware),HX_("useHardware",0f,ea,de,cf)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeWindow_obj,cacheLock),HX_("cacheLock",4d,ab,6c,43)},
	{::hx::fsObject /*  ::lime::graphics::cairo::Cairo */ ,(int)offsetof(NativeWindow_obj,cairo),HX_("cairo",88,30,19,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeWindow_obj,primarySurface),HX_("primarySurface",8b,aa,ee,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NativeWindow_obj_sStaticStorageInfo = 0;
#endif

static ::String NativeWindow_obj_sMemberFields[] = {
	HX_("handle",a8,83,fd,b7),
	HX_("closing",f5,de,25,79),
	HX_("cursor",d6,8e,e8,3e),
	HX_("displayMode",c5,72,53,30),
	HX_("frameRate",ad,11,25,39),
	HX_("mouseLock",b0,54,0c,f4),
	HX_("parent",2a,05,7e,ed),
	HX_("useHardware",0f,ea,de,cf),
	HX_("cacheLock",4d,ab,6c,43),
	HX_("cairo",88,30,19,41),
	HX_("primarySurface",8b,aa,ee,10),
	HX_("alert",5c,57,8e,21),
	HX_("close",b8,17,63,48),
	HX_("contextFlip",3c,f8,c1,20),
	HX_("focus",d8,5f,89,04),
	HX_("getCursor",0c,18,3f,bb),
	HX_("getDisplay",4c,b0,ab,0a),
	HX_("getDisplayMode",cf,c5,f1,b7),
	HX_("getFrameRate",37,ae,7b,48),
	HX_("getMouseLock",3a,f1,62,03),
	HX_("getOpacity",d5,e3,c6,3a),
	HX_("getTextInputEnabled",9a,ae,26,7e),
	HX_("move",11,e3,60,48),
	HX_("readPixels",23,d3,25,86),
	HX_("render",56,6b,29,05),
	HX_("resize",f4,59,7b,08),
	HX_("setMinSize",f1,33,3c,90),
	HX_("setMaxSize",03,1e,63,1f),
	HX_("setBorderless",87,84,e9,b8),
	HX_("setCursor",18,04,90,9e),
	HX_("setDisplayMode",43,ae,11,d8),
	HX_("setMouseLock",ae,14,5c,18),
	HX_("setTextInputEnabled",a6,a1,c3,ba),
	HX_("setTextInputRect",df,36,c7,8a),
	HX_("setFrameRate",ab,d1,74,5d),
	HX_("setFullscreen",7d,78,2c,9b),
	HX_("setIcon",3b,28,37,0b),
	HX_("setMaximized",16,ce,30,23),
	HX_("setMinimized",84,bb,ed,4c),
	HX_("setOpacity",49,82,44,3e),
	HX_("setResizable",69,f7,9f,cd),
	HX_("setTitle",96,7e,6f,1e),
	HX_("setVisible",f0,9c,03,f6),
	HX_("warpMouse",bd,de,6e,a6),
	::String(null()) };

::hx::Class NativeWindow_obj::__mClass;

void NativeWindow_obj::__register()
{
	NativeWindow_obj _hx_dummy;
	NativeWindow_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.NativeWindow",f9,7d,53,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NativeWindow_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NativeWindow_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeWindow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeWindow_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
