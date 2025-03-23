#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Int
#include <openfl/display/ShaderParameter_Int.h>
#endif
#ifndef INCLUDED_openfl_display__ShaderData_ShaderData_Impl_
#include <openfl/display/_ShaderData/ShaderData_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display__internal_ShaderBuffer
#include <openfl/display/_internal/ShaderBuffer.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4b006e5218f2daf8_263_new,"openfl.display.Shader","new",0x88fbb381,"openfl.display.Shader.new","openfl/display/Shader.hx",263,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_273___clearUseArray,"openfl.display.Shader","__clearUseArray",0xbc4a9c00,"openfl.display.Shader.__clearUseArray","openfl/display/Shader.hx",273,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_321___createGLShader,"openfl.display.Shader","__createGLShader",0xd8186585,"openfl.display.Shader.__createGLShader","openfl/display/Shader.hx",321,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_345___createGLProgram,"openfl.display.Shader","__createGLProgram",0xd1b33824,"openfl.display.Shader.__createGLProgram","openfl/display/Shader.hx",345,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_379___disable,"openfl.display.Shader","__disable",0x171f2ca9,"openfl.display.Shader.__disable","openfl/display/Shader.hx",379,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_386___disableGL,"openfl.display.Shader","__disableGL",0x7ec2a70e,"openfl.display.Shader.__disableGL","openfl/display/Shader.hx",386,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_424___enable,"openfl.display.Shader","__enable",0x8f5f3ee2,"openfl.display.Shader.__enable","openfl/display/Shader.hx",424,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_434___enableGL,"openfl.display.Shader","__enableGL",0x94d67987,"openfl.display.Shader.__enableGL","openfl/display/Shader.hx",434,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_454___init,"openfl.display.Shader","__init",0x2faba5af,"openfl.display.Shader.__init","openfl/display/Shader.hx",454,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_467___initGL,"openfl.display.Shader","__initGL",0x2e23ed94,"openfl.display.Shader.__initGL","openfl/display/Shader.hx",467,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_575___processGLData,"openfl.display.Shader","__processGLData",0x90b8a01f,"openfl.display.Shader.__processGLData","openfl/display/Shader.hx",575,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_736___update,"openfl.display.Shader","__update",0x1ddd1668,"openfl.display.Shader.__update","openfl/display/Shader.hx",736,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_744___updateFromBuffer,"openfl.display.Shader","__updateFromBuffer",0x7639ee92,"openfl.display.Shader.__updateFromBuffer","openfl/display/Shader.hx",744,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_751___updateGL,"openfl.display.Shader","__updateGL",0x201dbe8d,"openfl.display.Shader.__updateGL","openfl/display/Shader.hx",751,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_777___updateGLFromBuffer,"openfl.display.Shader","__updateGLFromBuffer",0x5f0216f7,"openfl.display.Shader.__updateGLFromBuffer","openfl/display/Shader.hx",777,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_921_get_data,"openfl.display.Shader","get_data",0xb0c636f2,"openfl.display.Shader.get_data","openfl/display/Shader.hx",921,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_932_set_data,"openfl.display.Shader","set_data",0x5f239066,"openfl.display.Shader.set_data","openfl/display/Shader.hx",932,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_937_get_glFragmentSource,"openfl.display.Shader","get_glFragmentSource",0x5d5fb298,"openfl.display.Shader.get_glFragmentSource","openfl/display/Shader.hx",937,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_941_set_glFragmentSource,"openfl.display.Shader","set_glFragmentSource",0x2a176a0c,"openfl.display.Shader.set_glFragmentSource","openfl/display/Shader.hx",941,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_952_get_glVertexSource,"openfl.display.Shader","get_glVertexSource",0xa3c917ec,"openfl.display.Shader.get_glVertexSource","openfl/display/Shader.hx",952,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_956_set_glVertexSource,"openfl.display.Shader","set_glVertexSource",0x80784a60,"openfl.display.Shader.set_glVertexSource","openfl/display/Shader.hx",956,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_126_boot,"openfl.display.Shader","boot",0x4b5a5df1,"openfl.display.Shader.boot","openfl/display/Shader.hx",126,0xae8f5dcd)
namespace openfl{
namespace display{

void Shader_obj::__construct( ::openfl::utils::ByteArrayData code){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_263_new)
HXLINE( 264)		this->byteCode = code;
HXLINE( 265)		this->precisionHint = 1;
HXLINE( 267)		this->_hx___glSourceDirty = true;
HXLINE( 268)		this->_hx___numPasses = 1;
HXLINE( 269)		this->_hx___data = ::openfl::display::_ShaderData::ShaderData_Impl__obj::_new(code);
            	}

Dynamic Shader_obj::__CreateEmpty() { return new Shader_obj; }

void *Shader_obj::_hx_vtable = 0;

Dynamic Shader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Shader_obj > _hx_result = new Shader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Shader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78d8d737;
}

void Shader_obj::_hx___clearUseArray(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_273___clearUseArray)
HXLINE( 274)		{
HXLINE( 274)			int _g = 0;
HXDLIN( 274)			::Array< ::Dynamic> _g1 = this->_hx___paramBool;
HXDLIN( 274)			while((_g < _g1->length)){
HXLINE( 274)				 ::openfl::display::ShaderParameter_Bool parameter = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXDLIN( 274)				_g = (_g + 1);
HXLINE( 276)				parameter->_hx___useArray = false;
            			}
            		}
HXLINE( 279)		{
HXLINE( 279)			int _g2 = 0;
HXDLIN( 279)			::Array< ::Dynamic> _g3 = this->_hx___paramFloat;
HXDLIN( 279)			while((_g2 < _g3->length)){
HXLINE( 279)				 ::openfl::display::ShaderParameter_Float parameter = _g3->__get(_g2).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 279)				_g2 = (_g2 + 1);
HXLINE( 281)				parameter->_hx___useArray = false;
            			}
            		}
HXLINE( 284)		{
HXLINE( 284)			int _g4 = 0;
HXDLIN( 284)			::Array< ::Dynamic> _g5 = this->_hx___paramInt;
HXDLIN( 284)			while((_g4 < _g5->length)){
HXLINE( 284)				 ::openfl::display::ShaderParameter_Int parameter = _g5->__get(_g4).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXDLIN( 284)				_g4 = (_g4 + 1);
HXLINE( 286)				parameter->_hx___useArray = false;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___clearUseArray,(void))

 ::lime::graphics::opengl::GLObject Shader_obj::_hx___createGLShader(::String source,int type){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_321___createGLShader)
HXLINE( 322)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 324)		 ::lime::graphics::opengl::GLObject shader = gl->createShader(type);
HXLINE( 325)		gl->shaderSource(shader,source);
HXLINE( 326)		gl->compileShader(shader);
HXLINE( 327)		::String shaderInfoLog = gl->getShaderInfoLog(shader);
HXLINE( 328)		bool hasInfoLog;
HXDLIN( 328)		if (::hx::IsNotNull( shaderInfoLog )) {
HXLINE( 328)			hasInfoLog = (::StringTools_obj::trim(shaderInfoLog) != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 328)			hasInfoLog = false;
            		}
HXLINE( 329)		int compileStatus = ( (int)(gl->getShaderParameter(shader,gl->COMPILE_STATUS)) );
HXLINE( 331)		bool _hx_tmp;
HXDLIN( 331)		if (!(hasInfoLog)) {
HXLINE( 331)			_hx_tmp = (compileStatus == 0);
            		}
            		else {
HXLINE( 331)			_hx_tmp = true;
            		}
HXDLIN( 331)		if (_hx_tmp) {
HXLINE( 333)			::String message;
HXDLIN( 333)			if ((compileStatus == 0)) {
HXLINE( 333)				message = HX_("Error",a8,3b,57,06);
            			}
            			else {
HXLINE( 333)				message = HX_("Info",8e,64,94,30);
            			}
HXLINE( 334)			::String message1;
HXDLIN( 334)			if ((type == gl->VERTEX_SHADER)) {
HXLINE( 334)				message1 = HX_(" compiling vertex shader",91,d5,12,08);
            			}
            			else {
HXLINE( 334)				message1 = HX_(" compiling fragment shader",a5,a2,ad,f8);
            			}
HXDLIN( 334)			message = (message + message1);
HXLINE( 335)			message = (message + (HX_("\n",0a,00,00,00) + shaderInfoLog));
HXLINE( 336)			message = (message + (HX_("\n",0a,00,00,00) + source));
HXLINE( 337)			if ((compileStatus == 0)) {
HXLINE( 337)				::lime::utils::Log_obj::error(message,::hx::SourceInfo(HX_("openfl/display/Shader.hx",cd,5d,8f,ae),337,HX_("openfl.display.Shader",0f,df,61,a7),HX_("__createGLShader",46,69,da,33)));
            			}
            			else {
HXLINE( 338)				if (hasInfoLog) {
HXLINE( 338)					::lime::utils::Log_obj::debug(message,::hx::SourceInfo(HX_("openfl/display/Shader.hx",cd,5d,8f,ae),338,HX_("openfl.display.Shader",0f,df,61,a7),HX_("__createGLShader",46,69,da,33)));
            				}
            			}
            		}
HXLINE( 341)		return shader;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___createGLShader,return )

 ::lime::graphics::opengl::GLObject Shader_obj::_hx___createGLProgram(::String vertexSource,::String fragmentSource){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_345___createGLProgram)
HXLINE( 346)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 348)		 ::lime::graphics::opengl::GLObject vertexShader = this->_hx___createGLShader(vertexSource,gl->VERTEX_SHADER);
HXLINE( 349)		 ::lime::graphics::opengl::GLObject fragmentShader = this->_hx___createGLShader(fragmentSource,gl->FRAGMENT_SHADER);
HXLINE( 351)		 ::lime::graphics::opengl::GLObject program = gl->createProgram();
HXLINE( 354)		{
HXLINE( 354)			int _g = 0;
HXDLIN( 354)			::Array< ::Dynamic> _g1 = this->_hx___paramFloat;
HXDLIN( 354)			while((_g < _g1->length)){
HXLINE( 354)				 ::openfl::display::ShaderParameter_Float param = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 354)				_g = (_g + 1);
HXLINE( 356)				bool _hx_tmp;
HXDLIN( 356)				if ((param->name.indexOf(HX_("Position",c9,5c,ac,a4),null()) > -1)) {
HXLINE( 356)					_hx_tmp = ::StringTools_obj::startsWith(param->name,HX_("openfl_",cf,ba,42,40));
            				}
            				else {
HXLINE( 356)					_hx_tmp = false;
            				}
HXDLIN( 356)				if (_hx_tmp) {
HXLINE( 358)					gl->bindAttribLocation(program,0,param->name);
HXLINE( 359)					goto _hx_goto_6;
            				}
            			}
            			_hx_goto_6:;
            		}
HXLINE( 363)		gl->attachShader(program,vertexShader);
HXLINE( 364)		gl->attachShader(program,fragmentShader);
HXLINE( 365)		gl->linkProgram(program);
HXLINE( 367)		if (::hx::IsEq( gl->getProgramParameter(program,gl->LINK_STATUS),0 )) {
HXLINE( 369)			::String message = HX_("Unable to initialize the shader program",f0,86,8b,39);
HXLINE( 370)			message = (message + (HX_("\n",0a,00,00,00) + gl->getProgramInfoLog(program)));
HXLINE( 371)			::lime::utils::Log_obj::error(message,::hx::SourceInfo(HX_("openfl/display/Shader.hx",cd,5d,8f,ae),371,HX_("openfl.display.Shader",0f,df,61,a7),HX_("__createGLProgram",43,7d,b4,bf)));
            		}
HXLINE( 374)		return program;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___createGLProgram,return )

void Shader_obj::_hx___disable(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_379___disable)
HXDLIN( 379)		if (::hx::IsNotNull( this->program )) {
HXLINE( 381)			this->_hx___disableGL();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___disable,(void))

void Shader_obj::_hx___disableGL(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_386___disableGL)
HXLINE( 387)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 389)		int textureCount = 0;
HXLINE( 391)		{
HXLINE( 391)			int _g = 0;
HXDLIN( 391)			::Array< ::Dynamic> _g1 = this->_hx___inputBitmapData;
HXDLIN( 391)			while((_g < _g1->length)){
HXLINE( 391)				 ::openfl::display::ShaderInput_openfl_display_BitmapData input = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXDLIN( 391)				_g = (_g + 1);
HXLINE( 393)				input->_hx___disableGL(this->_hx___context,textureCount);
HXLINE( 394)				textureCount = (textureCount + 1);
HXLINE( 395)				if ((textureCount == gl->MAX_TEXTURE_IMAGE_UNITS)) {
HXLINE( 395)					goto _hx_goto_9;
            				}
            			}
            			_hx_goto_9:;
            		}
HXLINE( 398)		{
HXLINE( 398)			int _g2 = 0;
HXDLIN( 398)			::Array< ::Dynamic> _g3 = this->_hx___paramBool;
HXDLIN( 398)			while((_g2 < _g3->length)){
HXLINE( 398)				 ::openfl::display::ShaderParameter_Bool parameter = _g3->__get(_g2).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXDLIN( 398)				_g2 = (_g2 + 1);
HXLINE( 400)				parameter->_hx___disableGL(this->_hx___context);
            			}
            		}
HXLINE( 403)		{
HXLINE( 403)			int _g4 = 0;
HXDLIN( 403)			::Array< ::Dynamic> _g5 = this->_hx___paramFloat;
HXDLIN( 403)			while((_g4 < _g5->length)){
HXLINE( 403)				 ::openfl::display::ShaderParameter_Float parameter = _g5->__get(_g4).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 403)				_g4 = (_g4 + 1);
HXLINE( 405)				parameter->_hx___disableGL(this->_hx___context);
            			}
            		}
HXLINE( 408)		{
HXLINE( 408)			int _g6 = 0;
HXDLIN( 408)			::Array< ::Dynamic> _g7 = this->_hx___paramInt;
HXDLIN( 408)			while((_g6 < _g7->length)){
HXLINE( 408)				 ::openfl::display::ShaderParameter_Int parameter = _g7->__get(_g6).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXDLIN( 408)				_g6 = (_g6 + 1);
HXLINE( 410)				parameter->_hx___disableGL(this->_hx___context);
            			}
            		}
HXLINE( 413)		this->_hx___context->_hx___bindGLArrayBuffer(null());
HXLINE( 416)		if ((this->_hx___context->_hx___context->type == HX_("opengl",6f,64,94,21))) {
HXLINE( 418)			gl->disable(gl->TEXTURE_2D);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___disableGL,(void))

void Shader_obj::_hx___enable(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_424___enable)
HXLINE( 425)		this->_hx___init();
HXLINE( 427)		if (::hx::IsNotNull( this->program )) {
HXLINE( 429)			this->_hx___enableGL();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___enable,(void))

void Shader_obj::_hx___enableGL(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_434___enableGL)
HXLINE( 435)		int textureCount = 0;
HXLINE( 437)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 439)		{
HXLINE( 439)			int _g = 0;
HXDLIN( 439)			::Array< ::Dynamic> _g1 = this->_hx___inputBitmapData;
HXDLIN( 439)			while((_g < _g1->length)){
HXLINE( 439)				 ::openfl::display::ShaderInput_openfl_display_BitmapData input = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXDLIN( 439)				_g = (_g + 1);
HXLINE( 441)				gl->uniform1i(( (int)(input->index) ),textureCount);
HXLINE( 442)				textureCount = (textureCount + 1);
            			}
            		}
HXLINE( 446)		bool _hx_tmp;
HXDLIN( 446)		if ((this->_hx___context->_hx___context->type == HX_("opengl",6f,64,94,21))) {
HXLINE( 446)			_hx_tmp = (textureCount > 0);
            		}
            		else {
HXLINE( 446)			_hx_tmp = false;
            		}
HXDLIN( 446)		if (_hx_tmp) {
HXLINE( 448)			gl->enable(gl->TEXTURE_2D);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___enableGL,(void))

void Shader_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_454___init)
HXLINE( 455)		if (::hx::IsNull( this->_hx___data )) {
HXLINE( 457)			this->_hx___data = ::openfl::display::_ShaderData::ShaderData_Impl__obj::_new(null());
            		}
HXLINE( 460)		bool _hx_tmp;
HXDLIN( 460)		bool _hx_tmp1;
HXDLIN( 460)		if (::hx::IsNotNull( this->_hx___glFragmentSource )) {
HXLINE( 460)			_hx_tmp1 = ::hx::IsNotNull( this->_hx___glVertexSource );
            		}
            		else {
HXLINE( 460)			_hx_tmp1 = false;
            		}
HXDLIN( 460)		if (_hx_tmp1) {
HXLINE( 460)			if (::hx::IsNotNull( this->program )) {
HXLINE( 460)				_hx_tmp = this->_hx___glSourceDirty;
            			}
            			else {
HXLINE( 460)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 460)			_hx_tmp = false;
            		}
HXDLIN( 460)		if (_hx_tmp) {
HXLINE( 462)			this->_hx___initGL();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___init,(void))

void Shader_obj::_hx___initGL(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_467___initGL)
HXLINE( 468)		bool _hx_tmp;
HXDLIN( 468)		if (!(this->_hx___glSourceDirty)) {
HXLINE( 468)			_hx_tmp = ::hx::IsNull( this->_hx___paramBool );
            		}
            		else {
HXLINE( 468)			_hx_tmp = true;
            		}
HXDLIN( 468)		if (_hx_tmp) {
HXLINE( 470)			this->_hx___glSourceDirty = false;
HXLINE( 471)			this->program = null();
HXLINE( 473)			this->_hx___inputBitmapData = ::Array_obj< ::Dynamic>::__new();
HXLINE( 474)			this->_hx___paramBool = ::Array_obj< ::Dynamic>::__new();
HXLINE( 475)			this->_hx___paramFloat = ::Array_obj< ::Dynamic>::__new();
HXLINE( 476)			this->_hx___paramInt = ::Array_obj< ::Dynamic>::__new();
HXLINE( 478)			this->_hx___processGLData(this->get_glVertexSource(),HX_("attribute",1c,70,f0,fa));
HXLINE( 479)			this->_hx___processGLData(this->get_glVertexSource(),HX_("uniform",34,41,64,b5));
HXLINE( 480)			this->_hx___processGLData(this->get_glFragmentSource(),HX_("uniform",34,41,64,b5));
            		}
HXLINE( 483)		bool _hx_tmp1;
HXDLIN( 483)		if (::hx::IsNotNull( this->_hx___context )) {
HXLINE( 483)			_hx_tmp1 = ::hx::IsNull( this->program );
            		}
            		else {
HXLINE( 483)			_hx_tmp1 = false;
            		}
HXDLIN( 483)		if (_hx_tmp1) {
HXLINE( 485)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 491)			::String prefix;
HXDLIN( 491)			if (::hx::IsEq( this->precisionHint,1 )) {
HXLINE( 491)				prefix = ((((HX_("#ifdef GL_FRAGMENT_PRECISION_HIGH\n",97,28,cb,f3) + HX_("precision highp float;\n",57,4a,f7,14)) + HX_("#else\n",2e,de,b0,6d)) + HX_("precision mediump float;\n",64,96,1e,cd)) + HX_("#endif\n",f5,d8,f7,a9));
            			}
            			else {
HXLINE( 491)				prefix = HX_("precision lowp float;\n",69,31,06,bd);
            			}
HXLINE( 490)			::String prefix1 = ((HX_("#ifdef GL_ES\n",3d,09,5c,91) + prefix) + HX_("#endif\n\n",75,fd,e5,0e));
HXLINE( 499)			::String vertex = (prefix1 + this->get_glVertexSource());
HXLINE( 500)			::String fragment = (prefix1 + this->get_glFragmentSource());
HXLINE( 502)			::String id = (vertex + fragment);
HXLINE( 504)			if (this->_hx___context->_hx___programs->exists(id)) {
HXLINE( 506)				this->program = ( ( ::openfl::display3D::Program3D)(this->_hx___context->_hx___programs->get(id)) );
            			}
            			else {
HXLINE( 510)				this->program = this->_hx___context->createProgram(1);
HXLINE( 514)				this->program->_hx___glProgram = this->_hx___createGLProgram(vertex,fragment);
HXLINE( 516)				this->_hx___context->_hx___programs->set(id,this->program);
            			}
HXLINE( 519)			if (::hx::IsNotNull( this->program )) {
HXLINE( 521)				this->glProgram = this->program->_hx___glProgram;
HXLINE( 523)				{
HXLINE( 523)					int _g = 0;
HXDLIN( 523)					::Array< ::Dynamic> _g1 = this->_hx___inputBitmapData;
HXDLIN( 523)					while((_g < _g1->length)){
HXLINE( 523)						 ::openfl::display::ShaderInput_openfl_display_BitmapData input = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXDLIN( 523)						_g = (_g + 1);
HXLINE( 525)						if (input->_hx___isUniform) {
HXLINE( 527)							input->index = gl->getUniformLocation(this->glProgram,input->name);
            						}
            						else {
HXLINE( 531)							input->index = gl->getAttribLocation(this->glProgram,input->name);
            						}
            					}
            				}
HXLINE( 535)				{
HXLINE( 535)					int _g2 = 0;
HXDLIN( 535)					::Array< ::Dynamic> _g3 = this->_hx___paramBool;
HXDLIN( 535)					while((_g2 < _g3->length)){
HXLINE( 535)						 ::openfl::display::ShaderParameter_Bool parameter = _g3->__get(_g2).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXDLIN( 535)						_g2 = (_g2 + 1);
HXLINE( 537)						if (parameter->_hx___isUniform) {
HXLINE( 539)							parameter->index = gl->getUniformLocation(this->glProgram,parameter->name);
            						}
            						else {
HXLINE( 543)							parameter->index = gl->getAttribLocation(this->glProgram,parameter->name);
            						}
            					}
            				}
HXLINE( 547)				{
HXLINE( 547)					int _g4 = 0;
HXDLIN( 547)					::Array< ::Dynamic> _g5 = this->_hx___paramFloat;
HXDLIN( 547)					while((_g4 < _g5->length)){
HXLINE( 547)						 ::openfl::display::ShaderParameter_Float parameter = _g5->__get(_g4).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 547)						_g4 = (_g4 + 1);
HXLINE( 549)						if (parameter->_hx___isUniform) {
HXLINE( 551)							parameter->index = gl->getUniformLocation(this->glProgram,parameter->name);
            						}
            						else {
HXLINE( 555)							parameter->index = gl->getAttribLocation(this->glProgram,parameter->name);
            						}
            					}
            				}
HXLINE( 559)				{
HXLINE( 559)					int _g6 = 0;
HXDLIN( 559)					::Array< ::Dynamic> _g7 = this->_hx___paramInt;
HXDLIN( 559)					while((_g6 < _g7->length)){
HXLINE( 559)						 ::openfl::display::ShaderParameter_Int parameter = _g7->__get(_g6).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXDLIN( 559)						_g6 = (_g6 + 1);
HXLINE( 561)						if (parameter->_hx___isUniform) {
HXLINE( 563)							parameter->index = gl->getUniformLocation(this->glProgram,parameter->name);
            						}
            						else {
HXLINE( 567)							parameter->index = gl->getAttribLocation(this->glProgram,parameter->name);
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___initGL,(void))

void Shader_obj::_hx___processGLData(::String source,::String storageType){
            	HX_GC_STACKFRAME(&_hx_pos_4b006e5218f2daf8_575___processGLData)
HXLINE( 576)		int lastMatch = 0;
HXDLIN( 576)		 ::Dynamic position;
HXDLIN( 576)		 ::EReg regex;
HXDLIN( 576)		::String name;
HXDLIN( 576)		::String type;
HXLINE( 578)		if ((storageType == HX_("uniform",34,41,64,b5))) {
HXLINE( 580)			regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("uniform ([A-Za-z0-9]+) ([A-Za-z0-9_]+)",e3,a8,c0,f8),HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 584)			regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("attribute ([A-Za-z0-9]+) ([A-Za-z0-9_]+)",fb,2e,25,cc),HX_("",00,00,00,00));
            		}
HXLINE( 587)		while(regex->matchSub(source,lastMatch,null())){
HXLINE( 589)			type = regex->matched(1);
HXLINE( 590)			name = regex->matched(2);
HXLINE( 592)			if (::StringTools_obj::startsWith(name,HX_("gl_",9a,86,4e,00))) {
HXLINE( 594)				continue;
            			}
HXLINE( 597)			bool isUniform = (storageType == HX_("uniform",34,41,64,b5));
HXLINE( 599)			if (::StringTools_obj::startsWith(type,HX_("sampler",08,c5,c9,83))) {
HXLINE( 601)				 ::openfl::display::ShaderInput_openfl_display_BitmapData input =  ::openfl::display::ShaderInput_openfl_display_BitmapData_obj::__alloc( HX_CTX );
HXLINE( 602)				input->name = name;
HXLINE( 603)				input->_hx___isUniform = isUniform;
HXLINE( 604)				this->_hx___inputBitmapData->push(input);
HXLINE( 606)				::String _hx_switch_0 = name;
            				if (  (_hx_switch_0==HX_("bitmap",ef,0f,0c,f1)) ){
HXLINE( 611)					this->_hx___bitmap = input;
HXDLIN( 611)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("openfl_Texture",cc,bd,e4,7e)) ){
HXLINE( 609)					this->_hx___texture = input;
HXDLIN( 609)					goto _hx_goto_24;
            				}
            				/* default */{
            				}
            				_hx_goto_24:;
HXLINE( 615)				::Reflect_obj::setField(this->_hx___data,name,input);
HXLINE( 616)				if (this->_hx___isGenerated) {
HXLINE( 616)					::Reflect_obj::setField(::hx::ObjectPtr<OBJ_>(this),name,input);
            				}
            			}
            			else {
HXLINE( 618)				bool _hx_tmp;
HXDLIN( 618)				if (::Reflect_obj::hasField(this->_hx___data,name)) {
HXLINE( 618)					_hx_tmp = ::hx::IsNull( ::Reflect_obj::field(this->_hx___data,name) );
            				}
            				else {
HXLINE( 618)					_hx_tmp = true;
            				}
HXDLIN( 618)				if (_hx_tmp) {
HXLINE( 620)					 ::Dynamic parameterType;
HXDLIN( 620)					::String _hx_switch_1 = type;
            					if (  (_hx_switch_1==HX_("bool",2a,84,1b,41)) ){
HXLINE( 620)						parameterType = 0;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("bvec2",c0,00,91,bb)) ){
HXLINE( 620)						parameterType = 1;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("bvec3",c1,00,91,bb)) ){
HXLINE( 620)						parameterType = 2;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("bvec4",c2,00,91,bb)) ){
HXLINE( 620)						parameterType = 3;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("dvec2",c2,29,5e,e2)) ||  (_hx_switch_1==HX_("vec2",5e,27,4c,4e)) ){
HXLINE( 620)						parameterType = 5;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("dvec3",c3,29,5e,e2)) ||  (_hx_switch_1==HX_("vec3",5f,27,4c,4e)) ){
HXLINE( 620)						parameterType = 6;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("double",11,2b,cb,32)) ||  (_hx_switch_1==HX_("float",9c,c5,96,02)) ){
HXLINE( 620)						parameterType = 4;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("ivec3",48,10,5f,c3)) ||  (_hx_switch_1==HX_("uvec3",54,06,2e,ac)) ){
HXLINE( 620)						parameterType = 10;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("ivec4",49,10,5f,c3)) ||  (_hx_switch_1==HX_("uvec4",55,06,2e,ac)) ){
HXLINE( 620)						parameterType = 11;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat2",92,41,56,48)) ||  (_hx_switch_1==HX_("mat2x2",cc,b2,97,bb)) ){
HXLINE( 620)						parameterType = 12;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat2x3",cd,b2,97,bb)) ){
HXLINE( 620)						parameterType = 13;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat2x4",ce,b2,97,bb)) ){
HXLINE( 620)						parameterType = 14;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat3x2",0d,75,98,bb)) ){
HXLINE( 620)						parameterType = 15;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat3",93,41,56,48)) ||  (_hx_switch_1==HX_("mat3x3",0e,75,98,bb)) ){
HXLINE( 620)						parameterType = 16;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat3x4",0f,75,98,bb)) ){
HXLINE( 620)						parameterType = 17;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat4",94,41,56,48)) ||  (_hx_switch_1==HX_("mat4x4",50,37,99,bb)) ){
HXLINE( 620)						parameterType = 20;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat4x2",4e,37,99,bb)) ){
HXLINE( 620)						parameterType = 18;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat4x3",4f,37,99,bb)) ){
HXLINE( 620)						parameterType = 19;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("int",ef,0c,50,00)) ||  (_hx_switch_1==HX_("uint",9a,03,a6,4d)) ){
HXLINE( 620)						parameterType = 8;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("ivec2",47,10,5f,c3)) ||  (_hx_switch_1==HX_("uvec2",53,06,2e,ac)) ){
HXLINE( 620)						parameterType = 9;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("dvec4",c4,29,5e,e2)) ||  (_hx_switch_1==HX_("vec4",60,27,4c,4e)) ){
HXLINE( 620)						parameterType = 7;
HXDLIN( 620)						goto _hx_goto_25;
            					}
            					/* default */{
HXLINE( 620)						parameterType = null();
            					}
            					_hx_goto_25:;
HXLINE( 646)					int length;
HXDLIN( 646)					 ::Dynamic _hx_switch_2 = parameterType;
            					if (  (_hx_switch_2==1) ||  (_hx_switch_2==5) ||  (_hx_switch_2==9) ){
HXLINE( 646)						length = 2;
HXDLIN( 646)						goto _hx_goto_26;
            					}
            					if (  (_hx_switch_2==3) ||  (_hx_switch_2==7) ||  (_hx_switch_2==11) ||  (_hx_switch_2==12) ){
HXLINE( 646)						length = 4;
HXDLIN( 646)						goto _hx_goto_26;
            					}
            					if (  (_hx_switch_2==2) ||  (_hx_switch_2==6) ||  (_hx_switch_2==10) ){
HXLINE( 646)						length = 3;
HXDLIN( 646)						goto _hx_goto_26;
            					}
            					if (  (_hx_switch_2==16) ){
HXLINE( 646)						length = 9;
HXDLIN( 646)						goto _hx_goto_26;
            					}
            					if (  (_hx_switch_2==20) ){
HXLINE( 646)						length = 16;
HXDLIN( 646)						goto _hx_goto_26;
            					}
            					/* default */{
HXLINE( 646)						length = 1;
            					}
            					_hx_goto_26:;
HXLINE( 656)					int arrayLength;
HXDLIN( 656)					 ::Dynamic _hx_switch_3 = parameterType;
            					if (  (_hx_switch_3==12) ){
HXLINE( 656)						arrayLength = 2;
HXDLIN( 656)						goto _hx_goto_27;
            					}
            					if (  (_hx_switch_3==16) ){
HXLINE( 656)						arrayLength = 3;
HXDLIN( 656)						goto _hx_goto_27;
            					}
            					if (  (_hx_switch_3==20) ){
HXLINE( 656)						arrayLength = 4;
HXDLIN( 656)						goto _hx_goto_27;
            					}
            					/* default */{
HXLINE( 656)						arrayLength = 1;
            					}
            					_hx_goto_27:;
HXLINE( 664)					 ::Dynamic _hx_switch_4 = parameterType;
            					if (  (_hx_switch_4==0) ||  (_hx_switch_4==1) ||  (_hx_switch_4==2) ||  (_hx_switch_4==3) ){
HXLINE( 667)						 ::openfl::display::ShaderParameter_Bool parameter =  ::openfl::display::ShaderParameter_Bool_obj::__alloc( HX_CTX );
HXLINE( 668)						parameter->set_name(name);
HXLINE( 669)						parameter->type = parameterType;
HXLINE( 670)						parameter->_hx___arrayLength = arrayLength;
HXLINE( 671)						parameter->_hx___isBool = true;
HXLINE( 672)						parameter->_hx___isUniform = isUniform;
HXLINE( 673)						parameter->__length = length;
HXLINE( 674)						this->_hx___paramBool->push(parameter);
HXLINE( 676)						if ((name == HX_("openfl_HasColorTransform",b4,00,4b,62))) {
HXLINE( 678)							this->_hx___hasColorTransform = parameter;
            						}
HXLINE( 681)						::Reflect_obj::setField(this->_hx___data,name,parameter);
HXLINE( 682)						if (this->_hx___isGenerated) {
HXLINE( 682)							::Reflect_obj::setField(::hx::ObjectPtr<OBJ_>(this),name,parameter);
            						}
HXLINE( 666)						goto _hx_goto_29;
            					}
            					if (  (_hx_switch_4==8) ||  (_hx_switch_4==9) ||  (_hx_switch_4==10) ||  (_hx_switch_4==11) ){
HXLINE( 685)						 ::openfl::display::ShaderParameter_Int parameter =  ::openfl::display::ShaderParameter_Int_obj::__alloc( HX_CTX );
HXLINE( 686)						parameter->set_name(name);
HXLINE( 687)						parameter->type = parameterType;
HXLINE( 688)						parameter->_hx___arrayLength = arrayLength;
HXLINE( 689)						parameter->_hx___isInt = true;
HXLINE( 690)						parameter->_hx___isUniform = isUniform;
HXLINE( 691)						parameter->__length = length;
HXLINE( 692)						this->_hx___paramInt->push(parameter);
HXLINE( 693)						::Reflect_obj::setField(this->_hx___data,name,parameter);
HXLINE( 694)						if (this->_hx___isGenerated) {
HXLINE( 694)							::Reflect_obj::setField(::hx::ObjectPtr<OBJ_>(this),name,parameter);
            						}
HXLINE( 684)						goto _hx_goto_29;
            					}
            					/* default */{
HXLINE( 697)						 ::openfl::display::ShaderParameter_Float parameter =  ::openfl::display::ShaderParameter_Float_obj::__alloc( HX_CTX );
HXLINE( 698)						parameter->set_name(name);
HXLINE( 699)						parameter->type = parameterType;
HXLINE( 700)						parameter->_hx___arrayLength = arrayLength;
HXLINE( 702)						if ((arrayLength > 0)) {
HXLINE( 702)							 ::Dynamic elements = (arrayLength * arrayLength);
HXDLIN( 702)							 ::haxe::io::Bytes buffer = null();
HXDLIN( 702)							::cpp::VirtualArray array = null();
HXDLIN( 702)							 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 702)							 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 702)							 ::Dynamic len = null();
HXDLIN( 702)							 ::lime::utils::ArrayBufferView this1;
HXDLIN( 702)							if (::hx::IsNotNull( elements )) {
HXLINE( 702)								this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            							}
            							else {
HXLINE( 702)								if (::hx::IsNotNull( array )) {
HXLINE( 702)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 702)									_this->byteOffset = 0;
HXDLIN( 702)									_this->length = array->get_length();
HXDLIN( 702)									_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 702)									 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 702)									_this->buffer = this2;
HXDLIN( 702)									_this->copyFromArray(array,null());
HXDLIN( 702)									this1 = _this;
            								}
            								else {
HXLINE( 702)									if (::hx::IsNotNull( vector )) {
HXLINE( 702)										 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 702)										::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 702)										_this->byteOffset = 0;
HXDLIN( 702)										_this->length = array->get_length();
HXDLIN( 702)										_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 702)										 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 702)										_this->buffer = this2;
HXDLIN( 702)										_this->copyFromArray(array,null());
HXDLIN( 702)										this1 = _this;
            									}
            									else {
HXLINE( 702)										if (::hx::IsNotNull( view )) {
HXLINE( 702)											 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 702)											 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 702)											int srcLength = view->length;
HXDLIN( 702)											int srcByteOffset = view->byteOffset;
HXDLIN( 702)											int srcElementSize = view->bytesPerElement;
HXDLIN( 702)											int elementSize = _this->bytesPerElement;
HXDLIN( 702)											if ((view->type == _this->type)) {
HXLINE( 702)												int srcLength = srcData->length;
HXDLIN( 702)												int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 702)												 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 702)												_this->buffer = this1;
HXDLIN( 702)												_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            											}
            											else {
HXLINE( 702)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            											}
HXDLIN( 702)											_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 702)											_this->byteOffset = 0;
HXDLIN( 702)											_this->length = srcLength;
HXDLIN( 702)											this1 = _this;
            										}
            										else {
HXLINE( 702)											if (::hx::IsNotNull( buffer )) {
HXLINE( 702)												 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 702)												int in_byteOffset = 0;
HXDLIN( 702)												if ((in_byteOffset < 0)) {
HXLINE( 702)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            												}
HXDLIN( 702)												if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 702)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            												}
HXDLIN( 702)												int bufferByteLength = buffer->length;
HXDLIN( 702)												int elementSize = _this->bytesPerElement;
HXDLIN( 702)												int newByteLength = bufferByteLength;
HXDLIN( 702)												if (::hx::IsNull( len )) {
HXLINE( 702)													newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 702)													if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 702)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            													}
HXDLIN( 702)													if ((newByteLength < 0)) {
HXLINE( 702)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            													}
            												}
            												else {
HXLINE( 702)													newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 702)													int newRange = (in_byteOffset + newByteLength);
HXDLIN( 702)													if ((newRange > bufferByteLength)) {
HXLINE( 702)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            													}
            												}
HXDLIN( 702)												_this->buffer = buffer;
HXDLIN( 702)												_this->byteOffset = in_byteOffset;
HXDLIN( 702)												_this->byteLength = newByteLength;
HXDLIN( 702)												_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 702)												this1 = _this;
            											}
            											else {
HXLINE( 702)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            											}
            										}
            									}
            								}
            							}
HXDLIN( 702)							parameter->_hx___uniformMatrix = this1;
            						}
HXLINE( 704)						parameter->_hx___isFloat = true;
HXLINE( 705)						parameter->_hx___isUniform = isUniform;
HXLINE( 706)						parameter->__length = length;
HXLINE( 707)						this->_hx___paramFloat->push(parameter);
HXLINE( 709)						if (::StringTools_obj::startsWith(name,HX_("openfl_",cf,ba,42,40))) {
HXLINE( 711)							::String _hx_switch_5 = name;
            							if (  (_hx_switch_5==HX_("openfl_Alpha",0f,ce,3e,6a)) ){
HXLINE( 713)								this->_hx___alpha = parameter;
HXDLIN( 713)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_ColorMultiplier",b5,e4,dc,18)) ){
HXLINE( 714)								this->_hx___colorMultiplier = parameter;
HXDLIN( 714)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_ColorOffset",c7,ea,07,41)) ){
HXLINE( 715)								this->_hx___colorOffset = parameter;
HXDLIN( 715)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_Matrix",70,ea,41,06)) ){
HXLINE( 716)								this->_hx___matrix = parameter;
HXDLIN( 716)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_Position",98,fe,6c,ee)) ){
HXLINE( 717)								this->_hx___position = parameter;
HXDLIN( 717)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_TextureCoord",49,e9,27,e8)) ){
HXLINE( 718)								this->_hx___textureCoord = parameter;
HXDLIN( 718)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_TextureSize",ad,60,72,29)) ){
HXLINE( 719)								this->_hx___textureSize = parameter;
HXDLIN( 719)								goto _hx_goto_28;
            							}
            							/* default */{
            							}
            							_hx_goto_28:;
            						}
HXLINE( 724)						::Reflect_obj::setField(this->_hx___data,name,parameter);
HXLINE( 725)						if (this->_hx___isGenerated) {
HXLINE( 725)							::Reflect_obj::setField(::hx::ObjectPtr<OBJ_>(this),name,parameter);
            						}
            					}
            					_hx_goto_29:;
            				}
            			}
HXLINE( 729)			position = regex->matchedPos();
HXLINE( 730)			lastMatch = ( (int)((position->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic) + position->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic))) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___processGLData,(void))

void Shader_obj::_hx___update(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_736___update)
HXDLIN( 736)		if (::hx::IsNotNull( this->program )) {
HXLINE( 738)			this->_hx___updateGL();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___update,(void))

void Shader_obj::_hx___updateFromBuffer( ::openfl::display::_internal::ShaderBuffer shaderBuffer,int bufferOffset){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_744___updateFromBuffer)
HXDLIN( 744)		if (::hx::IsNotNull( this->program )) {
HXLINE( 746)			this->_hx___updateGLFromBuffer(shaderBuffer,bufferOffset);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___updateFromBuffer,(void))

void Shader_obj::_hx___updateGL(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_751___updateGL)
HXLINE( 752)		int textureCount = 0;
HXLINE( 754)		{
HXLINE( 754)			int _g = 0;
HXDLIN( 754)			::Array< ::Dynamic> _g1 = this->_hx___inputBitmapData;
HXDLIN( 754)			while((_g < _g1->length)){
HXLINE( 754)				 ::openfl::display::ShaderInput_openfl_display_BitmapData input = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXDLIN( 754)				_g = (_g + 1);
HXLINE( 756)				input->_hx___updateGL(this->_hx___context,textureCount,null(),null(),null(),null());
HXLINE( 757)				textureCount = (textureCount + 1);
            			}
            		}
HXLINE( 760)		{
HXLINE( 760)			int _g2 = 0;
HXDLIN( 760)			::Array< ::Dynamic> _g3 = this->_hx___paramBool;
HXDLIN( 760)			while((_g2 < _g3->length)){
HXLINE( 760)				 ::openfl::display::ShaderParameter_Bool parameter = _g3->__get(_g2).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXDLIN( 760)				_g2 = (_g2 + 1);
HXLINE( 762)				parameter->_hx___updateGL(this->_hx___context,null());
            			}
            		}
HXLINE( 765)		{
HXLINE( 765)			int _g4 = 0;
HXDLIN( 765)			::Array< ::Dynamic> _g5 = this->_hx___paramFloat;
HXDLIN( 765)			while((_g4 < _g5->length)){
HXLINE( 765)				 ::openfl::display::ShaderParameter_Float parameter = _g5->__get(_g4).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 765)				_g4 = (_g4 + 1);
HXLINE( 767)				parameter->_hx___updateGL(this->_hx___context,null());
            			}
            		}
HXLINE( 770)		{
HXLINE( 770)			int _g6 = 0;
HXDLIN( 770)			::Array< ::Dynamic> _g7 = this->_hx___paramInt;
HXDLIN( 770)			while((_g6 < _g7->length)){
HXLINE( 770)				 ::openfl::display::ShaderParameter_Int parameter = _g7->__get(_g6).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXDLIN( 770)				_g6 = (_g6 + 1);
HXLINE( 772)				parameter->_hx___updateGL(this->_hx___context,null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___updateGL,(void))

void Shader_obj::_hx___updateGLFromBuffer( ::openfl::display::_internal::ShaderBuffer shaderBuffer,int bufferOffset){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_777___updateGLFromBuffer)
HXLINE( 778)		int textureCount = 0;
HXLINE( 779)		 ::openfl::display::ShaderInput_openfl_display_BitmapData input;
HXLINE( 780)		 ::openfl::display::BitmapData inputData;
HXLINE( 781)		 ::Dynamic inputFilter;
HXLINE( 782)		 ::Dynamic inputMipFilter;
HXLINE( 783)		 ::Dynamic inputWrap;
HXLINE( 785)		{
HXLINE( 785)			int _g = 0;
HXDLIN( 785)			int _g1 = shaderBuffer->inputCount;
HXDLIN( 785)			while((_g < _g1)){
HXLINE( 785)				_g = (_g + 1);
HXDLIN( 785)				int i = (_g - 1);
HXLINE( 787)				input = shaderBuffer->inputRefs->__get(i).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXLINE( 788)				inputData = shaderBuffer->inputs->__get(i).StaticCast<  ::openfl::display::BitmapData >();
HXLINE( 789)				inputFilter = shaderBuffer->inputFilter->__get(i);
HXLINE( 790)				inputMipFilter = shaderBuffer->inputMipFilter->__get(i);
HXLINE( 791)				inputWrap = shaderBuffer->inputWrap->__get(i);
HXLINE( 793)				if (::hx::IsNotNull( inputData )) {
HXLINE( 795)					input->_hx___updateGL(this->_hx___context,textureCount,inputData,inputFilter,inputMipFilter,inputWrap);
HXLINE( 796)					textureCount = (textureCount + 1);
            				}
            			}
            		}
HXLINE( 800)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 802)		if ((shaderBuffer->paramDataLength > 0)) {
HXLINE( 804)			if (::hx::IsNull( shaderBuffer->paramDataBuffer )) {
HXLINE( 806)				shaderBuffer->paramDataBuffer = gl->createBuffer();
            			}
HXLINE( 811)			this->_hx___context->_hx___bindGLArrayBuffer(shaderBuffer->paramDataBuffer);
HXLINE( 812)			::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::bufferData(gl,gl->ARRAY_BUFFER,shaderBuffer->paramData,gl->DYNAMIC_DRAW);
            		}
            		else {
HXLINE( 818)			this->_hx___context->_hx___bindGLArrayBuffer(null());
            		}
HXLINE( 821)		int boolIndex = 0;
HXLINE( 822)		int floatIndex = 0;
HXLINE( 823)		int intIndex = 0;
HXLINE( 825)		int boolCount = shaderBuffer->paramBoolCount;
HXLINE( 826)		int floatCount = shaderBuffer->paramFloatCount;
HXLINE( 827)		 ::lime::utils::ArrayBufferView paramData = shaderBuffer->paramData;
HXLINE( 829)		 ::openfl::display::ShaderParameter_Bool boolRef;
HXLINE( 830)		 ::openfl::display::ShaderParameter_Float floatRef;
HXLINE( 831)		 ::openfl::display::ShaderParameter_Int intRef;
HXLINE( 832)		bool hasOverride;
HXLINE( 833)		::Array< bool > overrideBoolValue = null();
HXLINE( 834)		::Array< Float > overrideFloatValue = null();
HXLINE( 835)		::Array< int > overrideIntValue = null();
HXLINE( 837)		{
HXLINE( 837)			int _g2 = 0;
HXDLIN( 837)			int _g3 = shaderBuffer->paramCount;
HXDLIN( 837)			while((_g2 < _g3)){
HXLINE( 837)				_g2 = (_g2 + 1);
HXDLIN( 837)				int i = (_g2 - 1);
HXLINE( 839)				hasOverride = false;
HXLINE( 841)				if ((i < boolCount)) {
HXLINE( 843)					boolRef = shaderBuffer->paramRefs_Bool->__get(boolIndex).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXLINE( 845)					{
HXLINE( 845)						int _g = 0;
HXDLIN( 845)						int _g1 = shaderBuffer->overrideBoolCount;
HXDLIN( 845)						while((_g < _g1)){
HXLINE( 845)							_g = (_g + 1);
HXDLIN( 845)							int j = (_g - 1);
HXLINE( 847)							if ((boolRef->name == shaderBuffer->overrideBoolNames->__get(j))) {
HXLINE( 849)								overrideBoolValue = shaderBuffer->overrideBoolValues->__get(j).StaticCast< ::Array< bool > >();
HXLINE( 850)								hasOverride = true;
HXLINE( 851)								goto _hx_goto_40;
            							}
            						}
            						_hx_goto_40:;
            					}
HXLINE( 855)					if (hasOverride) {
HXLINE( 857)						boolRef->_hx___updateGL(this->_hx___context,overrideBoolValue);
            					}
            					else {
HXLINE( 861)						boolRef->_hx___updateGLFromBuffer(this->_hx___context,paramData,shaderBuffer->paramPositions->__get(i),shaderBuffer->paramLengths->__get(i),bufferOffset);
            					}
HXLINE( 864)					boolIndex = (boolIndex + 1);
            				}
            				else {
HXLINE( 866)					if ((i < (boolCount + floatCount))) {
HXLINE( 868)						floatRef = shaderBuffer->paramRefs_Float->__get(floatIndex).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXLINE( 870)						{
HXLINE( 870)							int _g = 0;
HXDLIN( 870)							int _g1 = shaderBuffer->overrideFloatCount;
HXDLIN( 870)							while((_g < _g1)){
HXLINE( 870)								_g = (_g + 1);
HXDLIN( 870)								int j = (_g - 1);
HXLINE( 872)								if ((floatRef->name == shaderBuffer->overrideFloatNames->__get(j))) {
HXLINE( 874)									overrideFloatValue = shaderBuffer->overrideFloatValues->__get(j).StaticCast< ::Array< Float > >();
HXLINE( 875)									hasOverride = true;
HXLINE( 876)									goto _hx_goto_41;
            								}
            							}
            							_hx_goto_41:;
            						}
HXLINE( 880)						if (hasOverride) {
HXLINE( 882)							floatRef->_hx___updateGL(this->_hx___context,overrideFloatValue);
            						}
            						else {
HXLINE( 886)							floatRef->_hx___updateGLFromBuffer(this->_hx___context,paramData,shaderBuffer->paramPositions->__get(i),shaderBuffer->paramLengths->__get(i),bufferOffset);
            						}
HXLINE( 889)						floatIndex = (floatIndex + 1);
            					}
            					else {
HXLINE( 893)						intRef = shaderBuffer->paramRefs_Int->__get(intIndex).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXLINE( 895)						{
HXLINE( 895)							int _g = 0;
HXDLIN( 895)							int _g1 = shaderBuffer->overrideIntCount;
HXDLIN( 895)							while((_g < _g1)){
HXLINE( 895)								_g = (_g + 1);
HXDLIN( 895)								int j = (_g - 1);
HXLINE( 897)								if ((intRef->name == shaderBuffer->overrideIntNames->__get(j))) {
HXLINE( 899)									overrideIntValue = ::cpp::VirtualArray( shaderBuffer->overrideIntValues->__get(j));
HXLINE( 900)									hasOverride = true;
HXLINE( 901)									goto _hx_goto_42;
            								}
            							}
            							_hx_goto_42:;
            						}
HXLINE( 905)						if (hasOverride) {
HXLINE( 907)							intRef->_hx___updateGL(this->_hx___context,overrideIntValue);
            						}
            						else {
HXLINE( 911)							intRef->_hx___updateGLFromBuffer(this->_hx___context,paramData,shaderBuffer->paramPositions->__get(i),shaderBuffer->paramLengths->__get(i),bufferOffset);
            						}
HXLINE( 914)						intIndex = (intIndex + 1);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___updateGLFromBuffer,(void))

 ::Dynamic Shader_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_921_get_data)
HXLINE( 922)		bool _hx_tmp;
HXDLIN( 922)		if (!(this->_hx___glSourceDirty)) {
HXLINE( 922)			_hx_tmp = ::hx::IsNull( this->_hx___data );
            		}
            		else {
HXLINE( 922)			_hx_tmp = true;
            		}
HXDLIN( 922)		if (_hx_tmp) {
HXLINE( 924)			this->_hx___init();
            		}
HXLINE( 927)		return this->_hx___data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_data,return )

 ::Dynamic Shader_obj::set_data( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_932_set_data)
HXDLIN( 932)		return (this->_hx___data = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_data,return )

::String Shader_obj::get_glFragmentSource(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_937_get_glFragmentSource)
HXDLIN( 937)		return this->_hx___glFragmentSource;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_glFragmentSource,return )

::String Shader_obj::set_glFragmentSource(::String value){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_941_set_glFragmentSource)
HXLINE( 942)		if ((value != this->_hx___glFragmentSource)) {
HXLINE( 944)			this->_hx___glSourceDirty = true;
            		}
HXLINE( 947)		return (this->_hx___glFragmentSource = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_glFragmentSource,return )

::String Shader_obj::get_glVertexSource(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_952_get_glVertexSource)
HXDLIN( 952)		return this->_hx___glVertexSource;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_glVertexSource,return )

::String Shader_obj::set_glVertexSource(::String value){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_956_set_glVertexSource)
HXLINE( 957)		if ((value != this->_hx___glVertexSource)) {
HXLINE( 959)			this->_hx___glSourceDirty = true;
            		}
HXLINE( 962)		return (this->_hx___glVertexSource = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_glVertexSource,return )


::hx::ObjectPtr< Shader_obj > Shader_obj::__new( ::openfl::utils::ByteArrayData code) {
	::hx::ObjectPtr< Shader_obj > __this = new Shader_obj();
	__this->__construct(code);
	return __this;
}

::hx::ObjectPtr< Shader_obj > Shader_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData code) {
	Shader_obj *__this = (Shader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Shader_obj), true, "openfl.display.Shader"));
	*(void **)__this = Shader_obj::_hx_vtable;
	__this->__construct(code);
	return __this;
}

Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(byteCode,"byteCode");
	HX_MARK_MEMBER_NAME(glProgram,"glProgram");
	HX_MARK_MEMBER_NAME(precisionHint,"precisionHint");
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_MEMBER_NAME(_hx___alpha,"__alpha");
	HX_MARK_MEMBER_NAME(_hx___bitmap,"__bitmap");
	HX_MARK_MEMBER_NAME(_hx___colorMultiplier,"__colorMultiplier");
	HX_MARK_MEMBER_NAME(_hx___colorOffset,"__colorOffset");
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___data,"__data");
	HX_MARK_MEMBER_NAME(_hx___glFragmentSource,"__glFragmentSource");
	HX_MARK_MEMBER_NAME(_hx___glSourceDirty,"__glSourceDirty");
	HX_MARK_MEMBER_NAME(_hx___glVertexSource,"__glVertexSource");
	HX_MARK_MEMBER_NAME(_hx___hasColorTransform,"__hasColorTransform");
	HX_MARK_MEMBER_NAME(_hx___inputBitmapData,"__inputBitmapData");
	HX_MARK_MEMBER_NAME(_hx___isGenerated,"__isGenerated");
	HX_MARK_MEMBER_NAME(_hx___matrix,"__matrix");
	HX_MARK_MEMBER_NAME(_hx___numPasses,"__numPasses");
	HX_MARK_MEMBER_NAME(_hx___paramBool,"__paramBool");
	HX_MARK_MEMBER_NAME(_hx___paramFloat,"__paramFloat");
	HX_MARK_MEMBER_NAME(_hx___paramInt,"__paramInt");
	HX_MARK_MEMBER_NAME(_hx___position,"__position");
	HX_MARK_MEMBER_NAME(_hx___textureCoord,"__textureCoord");
	HX_MARK_MEMBER_NAME(_hx___texture,"__texture");
	HX_MARK_MEMBER_NAME(_hx___textureSize,"__textureSize");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(byteCode,"byteCode");
	HX_VISIT_MEMBER_NAME(glProgram,"glProgram");
	HX_VISIT_MEMBER_NAME(precisionHint,"precisionHint");
	HX_VISIT_MEMBER_NAME(program,"program");
	HX_VISIT_MEMBER_NAME(_hx___alpha,"__alpha");
	HX_VISIT_MEMBER_NAME(_hx___bitmap,"__bitmap");
	HX_VISIT_MEMBER_NAME(_hx___colorMultiplier,"__colorMultiplier");
	HX_VISIT_MEMBER_NAME(_hx___colorOffset,"__colorOffset");
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___data,"__data");
	HX_VISIT_MEMBER_NAME(_hx___glFragmentSource,"__glFragmentSource");
	HX_VISIT_MEMBER_NAME(_hx___glSourceDirty,"__glSourceDirty");
	HX_VISIT_MEMBER_NAME(_hx___glVertexSource,"__glVertexSource");
	HX_VISIT_MEMBER_NAME(_hx___hasColorTransform,"__hasColorTransform");
	HX_VISIT_MEMBER_NAME(_hx___inputBitmapData,"__inputBitmapData");
	HX_VISIT_MEMBER_NAME(_hx___isGenerated,"__isGenerated");
	HX_VISIT_MEMBER_NAME(_hx___matrix,"__matrix");
	HX_VISIT_MEMBER_NAME(_hx___numPasses,"__numPasses");
	HX_VISIT_MEMBER_NAME(_hx___paramBool,"__paramBool");
	HX_VISIT_MEMBER_NAME(_hx___paramFloat,"__paramFloat");
	HX_VISIT_MEMBER_NAME(_hx___paramInt,"__paramInt");
	HX_VISIT_MEMBER_NAME(_hx___position,"__position");
	HX_VISIT_MEMBER_NAME(_hx___textureCoord,"__textureCoord");
	HX_VISIT_MEMBER_NAME(_hx___texture,"__texture");
	HX_VISIT_MEMBER_NAME(_hx___textureSize,"__textureSize");
}

::hx::Val Shader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_data() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return ::hx::Val( _hx___data ); }
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { return ::hx::Val( program ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return ::hx::Val( _hx___alpha ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byteCode") ) { return ::hx::Val( byteCode ); }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return ::hx::Val( _hx___bitmap ); }
		if (HX_FIELD_EQ(inName,"__matrix") ) { return ::hx::Val( _hx___matrix ); }
		if (HX_FIELD_EQ(inName,"__enable") ) { return ::hx::Val( _hx___enable_dyn() ); }
		if (HX_FIELD_EQ(inName,"__initGL") ) { return ::hx::Val( _hx___initGL_dyn() ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return ::hx::Val( get_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return ::hx::Val( set_data_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { return ::hx::Val( glProgram ); }
		if (HX_FIELD_EQ(inName,"__context") ) { return ::hx::Val( _hx___context ); }
		if (HX_FIELD_EQ(inName,"__texture") ) { return ::hx::Val( _hx___texture ); }
		if (HX_FIELD_EQ(inName,"__disable") ) { return ::hx::Val( _hx___disable_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__paramInt") ) { return ::hx::Val( _hx___paramInt ); }
		if (HX_FIELD_EQ(inName,"__position") ) { return ::hx::Val( _hx___position ); }
		if (HX_FIELD_EQ(inName,"__enableGL") ) { return ::hx::Val( _hx___enableGL_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateGL") ) { return ::hx::Val( _hx___updateGL_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__numPasses") ) { return ::hx::Val( _hx___numPasses ); }
		if (HX_FIELD_EQ(inName,"__paramBool") ) { return ::hx::Val( _hx___paramBool ); }
		if (HX_FIELD_EQ(inName,"__disableGL") ) { return ::hx::Val( _hx___disableGL_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__paramFloat") ) { return ::hx::Val( _hx___paramFloat ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"precisionHint") ) { return ::hx::Val( precisionHint ); }
		if (HX_FIELD_EQ(inName,"__colorOffset") ) { return ::hx::Val( _hx___colorOffset ); }
		if (HX_FIELD_EQ(inName,"__isGenerated") ) { return ::hx::Val( _hx___isGenerated ); }
		if (HX_FIELD_EQ(inName,"__textureSize") ) { return ::hx::Val( _hx___textureSize ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glVertexSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_glVertexSource() ); }
		if (HX_FIELD_EQ(inName,"__textureCoord") ) { return ::hx::Val( _hx___textureCoord ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__glSourceDirty") ) { return ::hx::Val( _hx___glSourceDirty ); }
		if (HX_FIELD_EQ(inName,"__clearUseArray") ) { return ::hx::Val( _hx___clearUseArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"__processGLData") ) { return ::hx::Val( _hx___processGLData_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"glFragmentSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_glFragmentSource() ); }
		if (HX_FIELD_EQ(inName,"__glVertexSource") ) { return ::hx::Val( _hx___glVertexSource ); }
		if (HX_FIELD_EQ(inName,"__createGLShader") ) { return ::hx::Val( _hx___createGLShader_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__colorMultiplier") ) { return ::hx::Val( _hx___colorMultiplier ); }
		if (HX_FIELD_EQ(inName,"__inputBitmapData") ) { return ::hx::Val( _hx___inputBitmapData ); }
		if (HX_FIELD_EQ(inName,"__createGLProgram") ) { return ::hx::Val( _hx___createGLProgram_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__glFragmentSource") ) { return ::hx::Val( _hx___glFragmentSource ); }
		if (HX_FIELD_EQ(inName,"__updateFromBuffer") ) { return ::hx::Val( _hx___updateFromBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_glVertexSource") ) { return ::hx::Val( get_glVertexSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_glVertexSource") ) { return ::hx::Val( set_glVertexSource_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__hasColorTransform") ) { return ::hx::Val( _hx___hasColorTransform ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__updateGLFromBuffer") ) { return ::hx::Val( _hx___updateGLFromBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_glFragmentSource") ) { return ::hx::Val( get_glFragmentSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_glFragmentSource") ) { return ::hx::Val( set_glFragmentSource_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Shader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_data(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { _hx___data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast<  ::openfl::display3D::Program3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__alpha") ) { _hx___alpha=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byteCode") ) { byteCode=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { _hx___bitmap=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__matrix") ) { _hx___matrix=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { glProgram=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { _hx___texture=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__paramInt") ) { _hx___paramInt=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__position") ) { _hx___position=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__numPasses") ) { _hx___numPasses=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__paramBool") ) { _hx___paramBool=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__paramFloat") ) { _hx___paramFloat=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"precisionHint") ) { precisionHint=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__colorOffset") ) { _hx___colorOffset=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isGenerated") ) { _hx___isGenerated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureSize") ) { _hx___textureSize=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glVertexSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_glVertexSource(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"__textureCoord") ) { _hx___textureCoord=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__glSourceDirty") ) { _hx___glSourceDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"glFragmentSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_glFragmentSource(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"__glVertexSource") ) { _hx___glVertexSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__colorMultiplier") ) { _hx___colorMultiplier=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__inputBitmapData") ) { _hx___inputBitmapData=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__glFragmentSource") ) { _hx___glFragmentSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__hasColorTransform") ) { _hx___hasColorTransform=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("byteCode",55,20,71,42));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("glFragmentSource",d0,c5,ca,f7));
	outFields->push(HX_("glProgram",df,d6,b3,c1));
	outFields->push(HX_("glVertexSource",24,6d,4a,5b));
	outFields->push(HX_("precisionHint",e5,b5,95,2c));
	outFields->push(HX_("program",84,4a,f9,f3));
	outFields->push(HX_("__alpha",3e,00,f5,8b));
	outFields->push(HX_("__bitmap",0f,7b,3b,99));
	outFields->push(HX_("__colorMultiplier",a4,47,db,d3));
	outFields->push(HX_("__colorOffset",36,6a,e0,62));
	outFields->push(HX_("__context",cf,e6,c5,9a));
	outFields->push(HX_("__data",4a,b9,5b,f1));
	outFields->push(HX_("__glFragmentSource",f0,58,5b,63));
	outFields->push(HX_("__glSourceDirty",f2,a3,ef,41));
	outFields->push(HX_("__glVertexSource",44,f8,89,8f));
	outFields->push(HX_("__hasColorTransform",63,3d,db,a3));
	outFields->push(HX_("__inputBitmapData",43,df,f6,64));
	outFields->push(HX_("__isGenerated",25,e7,69,bb));
	outFields->push(HX_("__matrix",61,a1,f7,63));
	outFields->push(HX_("__numPasses",45,67,5f,cd));
	outFields->push(HX_("__paramBool",37,44,b6,5f));
	outFields->push(HX_("__paramFloat",ef,10,64,ab));
	outFields->push(HX_("__paramInt",82,cd,bd,21));
	outFields->push(HX_("__position",c9,13,33,6e));
	outFields->push(HX_("__textureCoord",fa,ea,be,63));
	outFields->push(HX_("__texture",bb,19,2f,20));
	outFields->push(HX_("__textureSize",1c,e0,4a,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Shader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(Shader_obj,byteCode),HX_("byteCode",55,20,71,42)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Shader_obj,glProgram),HX_("glProgram",df,d6,b3,c1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Shader_obj,precisionHint),HX_("precisionHint",e5,b5,95,2c)},
	{::hx::fsObject /*  ::openfl::display3D::Program3D */ ,(int)offsetof(Shader_obj,program),HX_("program",84,4a,f9,f3)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___alpha),HX_("__alpha",3e,00,f5,8b)},
	{::hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(Shader_obj,_hx___bitmap),HX_("__bitmap",0f,7b,3b,99)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___colorMultiplier),HX_("__colorMultiplier",a4,47,db,d3)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___colorOffset),HX_("__colorOffset",36,6a,e0,62)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(Shader_obj,_hx___context),HX_("__context",cf,e6,c5,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Shader_obj,_hx___data),HX_("__data",4a,b9,5b,f1)},
	{::hx::fsString,(int)offsetof(Shader_obj,_hx___glFragmentSource),HX_("__glFragmentSource",f0,58,5b,63)},
	{::hx::fsBool,(int)offsetof(Shader_obj,_hx___glSourceDirty),HX_("__glSourceDirty",f2,a3,ef,41)},
	{::hx::fsString,(int)offsetof(Shader_obj,_hx___glVertexSource),HX_("__glVertexSource",44,f8,89,8f)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(Shader_obj,_hx___hasColorTransform),HX_("__hasColorTransform",63,3d,db,a3)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Shader_obj,_hx___inputBitmapData),HX_("__inputBitmapData",43,df,f6,64)},
	{::hx::fsBool,(int)offsetof(Shader_obj,_hx___isGenerated),HX_("__isGenerated",25,e7,69,bb)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___matrix),HX_("__matrix",61,a1,f7,63)},
	{::hx::fsInt,(int)offsetof(Shader_obj,_hx___numPasses),HX_("__numPasses",45,67,5f,cd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Shader_obj,_hx___paramBool),HX_("__paramBool",37,44,b6,5f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Shader_obj,_hx___paramFloat),HX_("__paramFloat",ef,10,64,ab)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Shader_obj,_hx___paramInt),HX_("__paramInt",82,cd,bd,21)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___position),HX_("__position",c9,13,33,6e)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___textureCoord),HX_("__textureCoord",fa,ea,be,63)},
	{::hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(Shader_obj,_hx___texture),HX_("__texture",bb,19,2f,20)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___textureSize),HX_("__textureSize",1c,e0,4a,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Shader_obj_sStaticStorageInfo = 0;
#endif

static ::String Shader_obj_sMemberFields[] = {
	HX_("byteCode",55,20,71,42),
	HX_("glProgram",df,d6,b3,c1),
	HX_("precisionHint",e5,b5,95,2c),
	HX_("program",84,4a,f9,f3),
	HX_("__alpha",3e,00,f5,8b),
	HX_("__bitmap",0f,7b,3b,99),
	HX_("__colorMultiplier",a4,47,db,d3),
	HX_("__colorOffset",36,6a,e0,62),
	HX_("__context",cf,e6,c5,9a),
	HX_("__data",4a,b9,5b,f1),
	HX_("__glFragmentSource",f0,58,5b,63),
	HX_("__glSourceDirty",f2,a3,ef,41),
	HX_("__glVertexSource",44,f8,89,8f),
	HX_("__hasColorTransform",63,3d,db,a3),
	HX_("__inputBitmapData",43,df,f6,64),
	HX_("__isGenerated",25,e7,69,bb),
	HX_("__matrix",61,a1,f7,63),
	HX_("__numPasses",45,67,5f,cd),
	HX_("__paramBool",37,44,b6,5f),
	HX_("__paramFloat",ef,10,64,ab),
	HX_("__paramInt",82,cd,bd,21),
	HX_("__position",c9,13,33,6e),
	HX_("__textureCoord",fa,ea,be,63),
	HX_("__texture",bb,19,2f,20),
	HX_("__textureSize",1c,e0,4a,4b),
	HX_("__clearUseArray",5f,0b,0a,a8),
	HX_("__createGLShader",46,69,da,33),
	HX_("__createGLProgram",43,7d,b4,bf),
	HX_("__disable",c8,ba,a6,32),
	HX_("__disableGL",ed,3a,e1,35),
	HX_("__enable",a3,19,b7,a0),
	HX_("__enableGL",88,46,eb,8f),
	HX_("__init",30,9e,b3,f4),
	HX_("__initGL",55,c8,7b,3f),
	HX_("__processGLData",7e,0f,78,7c),
	HX_("__update",29,f1,34,2f),
	HX_("__updateFromBuffer",93,24,55,c9),
	HX_("__updateGL",8e,8b,32,1b),
	HX_("__updateGLFromBuffer",38,8f,d7,17),
	HX_("get_data",b3,11,1e,c2),
	HX_("set_data",27,6b,7b,70),
	HX_("get_glFragmentSource",d9,2a,35,16),
	HX_("set_glFragmentSource",4d,e2,ec,e2),
	HX_("get_glVertexSource",ed,4d,e4,f6),
	HX_("set_glVertexSource",61,80,93,d3),
	::String(null()) };

::hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	Shader_obj _hx_dummy;
	Shader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Shader",0f,df,61,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Shader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Shader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Shader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Shader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Shader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_126_boot)
HXDLIN( 126)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("glProgram",df,d6,b3,c1), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
