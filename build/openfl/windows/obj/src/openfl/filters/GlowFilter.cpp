#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime__internal_graphics_ImageDataUtil
#include <lime/_internal/graphics/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
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
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_BlurAlphaShader
#include <openfl/filters/_GlowFilter/BlurAlphaShader.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_CombineKnockoutShader
#include <openfl/filters/_GlowFilter/CombineKnockoutShader.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_CombineShader
#include <openfl/filters/_GlowFilter/CombineShader.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_InnerCombineKnockoutShader
#include <openfl/filters/_GlowFilter/InnerCombineKnockoutShader.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_InnerCombineShader
#include <openfl/filters/_GlowFilter/InnerCombineShader.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_InvertAlphaShader
#include <openfl/filters/_GlowFilter/InvertAlphaShader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f54e58291eefcbc3_232_new,"openfl.filters.GlowFilter","new",0xf734d428,"openfl.filters.GlowFilter.new","openfl/filters/GlowFilter.hx",232,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_253_clone,"openfl.filters.GlowFilter","clone",0x7c629925,"openfl.filters.GlowFilter.clone","openfl/filters/GlowFilter.hx",253,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_257___applyFilter,"openfl.filters.GlowFilter","__applyFilter",0x0cceae6e,"openfl.filters.GlowFilter.__applyFilter","openfl/filters/GlowFilter.hx",257,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_275___initShader,"openfl.filters.GlowFilter","__initShader",0x188dd8ad,"openfl.filters.GlowFilter.__initShader","openfl/filters/GlowFilter.hx",275,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_346___updateSize,"openfl.filters.GlowFilter","__updateSize",0xfc3049c2,"openfl.filters.GlowFilter.__updateSize","openfl/filters/GlowFilter.hx",346,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_355___calculateNumShaderPasses,"openfl.filters.GlowFilter","__calculateNumShaderPasses",0xc270897c,"openfl.filters.GlowFilter.__calculateNumShaderPasses","openfl/filters/GlowFilter.hx",355,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_364_get_alpha,"openfl.filters.GlowFilter","get_alpha",0x780a0d7d,"openfl.filters.GlowFilter.get_alpha","openfl/filters/GlowFilter.hx",364,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_368_set_alpha,"openfl.filters.GlowFilter","set_alpha",0x5b5af989,"openfl.filters.GlowFilter.set_alpha","openfl/filters/GlowFilter.hx",368,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_375_get_blurX,"openfl.filters.GlowFilter","get_blurX",0x0b7475f0,"openfl.filters.GlowFilter.get_blurX","openfl/filters/GlowFilter.hx",375,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_379_set_blurX,"openfl.filters.GlowFilter","set_blurX",0xeec561fc,"openfl.filters.GlowFilter.set_blurX","openfl/filters/GlowFilter.hx",379,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_391_get_blurY,"openfl.filters.GlowFilter","get_blurY",0x0b7475f1,"openfl.filters.GlowFilter.get_blurY","openfl/filters/GlowFilter.hx",391,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_395_set_blurY,"openfl.filters.GlowFilter","set_blurY",0xeec561fd,"openfl.filters.GlowFilter.set_blurY","openfl/filters/GlowFilter.hx",395,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_407_get_color,"openfl.filters.GlowFilter","get_color",0xa0cfd782,"openfl.filters.GlowFilter.get_color","openfl/filters/GlowFilter.hx",407,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_411_set_color,"openfl.filters.GlowFilter","set_color",0x8420c38e,"openfl.filters.GlowFilter.set_color","openfl/filters/GlowFilter.hx",411,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_418_get_inner,"openfl.filters.GlowFilter","get_inner",0x148f97b5,"openfl.filters.GlowFilter.get_inner","openfl/filters/GlowFilter.hx",418,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_422_set_inner,"openfl.filters.GlowFilter","set_inner",0xf7e083c1,"openfl.filters.GlowFilter.set_inner","openfl/filters/GlowFilter.hx",422,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_433_get_knockout,"openfl.filters.GlowFilter","get_knockout",0xe353a13b,"openfl.filters.GlowFilter.get_knockout","openfl/filters/GlowFilter.hx",433,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_437_set_knockout,"openfl.filters.GlowFilter","set_knockout",0xf84cc4af,"openfl.filters.GlowFilter.set_knockout","openfl/filters/GlowFilter.hx",437,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_448_get_quality,"openfl.filters.GlowFilter","get_quality",0xaafc709e,"openfl.filters.GlowFilter.get_quality","openfl/filters/GlowFilter.hx",448,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_452_set_quality,"openfl.filters.GlowFilter","set_quality",0xb56977aa,"openfl.filters.GlowFilter.set_quality","openfl/filters/GlowFilter.hx",452,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_463_get_strength,"openfl.filters.GlowFilter","get_strength",0x023cc9c2,"openfl.filters.GlowFilter.get_strength","openfl/filters/GlowFilter.hx",463,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_467_set_strength,"openfl.filters.GlowFilter","set_strength",0x1735ed36,"openfl.filters.GlowFilter.set_strength","openfl/filters/GlowFilter.hx",467,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_69_boot,"openfl.filters.GlowFilter","boot",0x4f1dcf6a,"openfl.filters.GlowFilter.boot","openfl/filters/GlowFilter.hx",69,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_70_boot,"openfl.filters.GlowFilter","boot",0x4f1dcf6a,"openfl.filters.GlowFilter.boot","openfl/filters/GlowFilter.hx",70,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_71_boot,"openfl.filters.GlowFilter","boot",0x4f1dcf6a,"openfl.filters.GlowFilter.boot","openfl/filters/GlowFilter.hx",71,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_72_boot,"openfl.filters.GlowFilter","boot",0x4f1dcf6a,"openfl.filters.GlowFilter.boot","openfl/filters/GlowFilter.hx",72,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_73_boot,"openfl.filters.GlowFilter","boot",0x4f1dcf6a,"openfl.filters.GlowFilter.boot","openfl/filters/GlowFilter.hx",73,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_74_boot,"openfl.filters.GlowFilter","boot",0x4f1dcf6a,"openfl.filters.GlowFilter.boot","openfl/filters/GlowFilter.hx",74,0x5f568606)
namespace openfl{
namespace filters{

void GlowFilter_obj::__construct(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout){
            		int color = __o_color.Default(16711680);
            		Float alpha = __o_alpha.Default(1);
            		Float blurX = __o_blurX.Default(6);
            		Float blurY = __o_blurY.Default(6);
            		Float strength = __o_strength.Default(2);
            		int quality = __o_quality.Default(1);
            		bool inner = __o_inner.Default(false);
            		bool knockout = __o_knockout.Default(false);
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_232_new)
HXLINE( 233)		super::__construct();
HXLINE( 235)		this->_hx___color = color;
HXLINE( 236)		this->_hx___alpha = alpha;
HXLINE( 237)		this->_hx___blurX = blurX;
HXLINE( 238)		this->_hx___blurY = blurY;
HXLINE( 239)		this->_hx___strength = strength;
HXLINE( 240)		this->_hx___inner = inner;
HXLINE( 241)		this->_hx___knockout = knockout;
HXLINE( 242)		this->_hx___quality = quality;
HXLINE( 244)		this->_hx___updateSize();
HXLINE( 246)		this->_hx___needSecondBitmapData = true;
HXLINE( 247)		this->_hx___preserveObject = true;
HXLINE( 248)		this->_hx___renderDirty = true;
            	}

Dynamic GlowFilter_obj::__CreateEmpty() { return new GlowFilter_obj; }

void *GlowFilter_obj::_hx_vtable = 0;

Dynamic GlowFilter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GlowFilter_obj > _hx_result = new GlowFilter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool GlowFilter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1560c0a0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1560c0a0;
	} else {
		return inClassId==(int)0x26de6bd2;
	}
}

 ::openfl::filters::BitmapFilter GlowFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_253_clone)
HXDLIN( 253)		return  ::openfl::filters::GlowFilter_obj::__alloc( HX_CTX ,this->_hx___color,this->_hx___alpha,this->_hx___blurX,this->_hx___blurY,this->_hx___strength,this->_hx___quality,this->_hx___inner,this->_hx___knockout);
            	}


 ::openfl::display::BitmapData GlowFilter_obj::_hx___applyFilter( ::openfl::display::BitmapData bitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint){
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_257___applyFilter)
HXLINE( 261)		int r = ((this->_hx___color >> 16) & 255);
HXLINE( 262)		int g = ((this->_hx___color >> 8) & 255);
HXLINE( 263)		int b = (this->_hx___color & 255);
HXLINE( 265)		 ::lime::graphics::Image bitmapData1 = bitmapData->image;
HXDLIN( 265)		 ::lime::graphics::Image sourceBitmapData1 = sourceBitmapData->image;
HXDLIN( 265)		 ::lime::math::Rectangle finalImage = sourceRect->_hx___toLimeRectangle();
HXDLIN( 265)		 ::lime::math::Vector2 finalImage1 = destPoint->_hx___toLimeVector2();
HXDLIN( 265)		 ::lime::graphics::Image finalImage2 = ::lime::_internal::graphics::ImageDataUtil_obj::gaussianBlur(bitmapData1,sourceBitmapData1,finalImage,finalImage1,this->_hx___blurX,this->_hx___blurY,this->_hx___quality,this->_hx___strength,null());
HXLINE( 267)		 ::lime::math::Rectangle _hx_tmp = finalImage2->get_rect();
HXDLIN( 267)		finalImage2->colorTransform(_hx_tmp, ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,0,0,0,this->_hx___alpha,r,g,b,0)->_hx___toLimeColorMatrix());
HXLINE( 269)		if (::hx::IsInstanceEq( finalImage2,bitmapData->image )) {
HXLINE( 269)			return bitmapData;
            		}
HXLINE( 271)		return sourceBitmapData;
            	}


 ::openfl::display::Shader GlowFilter_obj::_hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass, ::openfl::display::BitmapData sourceBitmapData){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_275___initShader)
HXLINE( 278)		bool _hx_tmp;
HXDLIN( 278)		if (this->_hx___inner) {
HXLINE( 278)			_hx_tmp = (pass == 0);
            		}
            		else {
HXLINE( 278)			_hx_tmp = false;
            		}
HXDLIN( 278)		if (_hx_tmp) {
HXLINE( 280)			return ::openfl::filters::GlowFilter_obj::_hx___invertAlphaShader;
            		}
HXLINE( 283)		int blurPass;
HXDLIN( 283)		if (this->_hx___inner) {
HXLINE( 283)			blurPass = 1;
            		}
            		else {
HXLINE( 283)			blurPass = 0;
            		}
HXDLIN( 283)		int blurPass1 = (pass - blurPass);
HXLINE( 284)		int numBlurPasses = (this->_hx___horizontalPasses + this->_hx___verticalPasses);
HXLINE( 286)		if ((blurPass1 < numBlurPasses)) {
HXLINE( 288)			 ::openfl::filters::_GlowFilter::BlurAlphaShader shader = ::openfl::filters::GlowFilter_obj::_hx___blurAlphaShader;
HXLINE( 289)			if ((blurPass1 < this->_hx___horizontalPasses)) {
HXLINE( 291)				Float scale = (::Math_obj::pow(((Float)0.5),( (Float)((blurPass1 >> 1)) )) * ((Float)0.5));
HXLINE( 292)				shader->uRadius->value[0] = (this->get_blurX() * scale);
HXLINE( 293)				shader->uRadius->value[1] = ( (Float)(0) );
            			}
            			else {
HXLINE( 297)				Float scale = (::Math_obj::pow(((Float)0.5),( (Float)(((blurPass1 - this->_hx___horizontalPasses) >> 1)) )) * ((Float)0.5));
HXLINE( 298)				shader->uRadius->value[0] = ( (Float)(0) );
HXLINE( 299)				shader->uRadius->value[1] = (this->get_blurY() * scale);
            			}
HXLINE( 301)			shader->uColor->value[0] = (( (Float)(((this->get_color() >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE( 302)			shader->uColor->value[1] = (( (Float)(((this->get_color() >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE( 303)			shader->uColor->value[2] = (( (Float)((this->get_color() & 255)) ) / ( (Float)(255) ));
HXLINE( 304)			shader->uColor->value[3] = this->get_alpha();
HXLINE( 305)			Float _hx_tmp;
HXDLIN( 305)			if ((blurPass1 == (numBlurPasses - 1))) {
HXLINE( 305)				_hx_tmp = this->_hx___strength;
            			}
            			else {
HXLINE( 305)				_hx_tmp = ((Float)1.0);
            			}
HXDLIN( 305)			shader->uStrength->value[0] = _hx_tmp;
HXLINE( 306)			return shader;
            		}
HXLINE( 308)		if (this->_hx___inner) {
HXLINE( 310)			if (this->_hx___knockout) {
HXLINE( 312)				 ::openfl::filters::_GlowFilter::InnerCombineKnockoutShader shader = ::openfl::filters::GlowFilter_obj::_hx___innerCombineKnockoutShader;
HXLINE( 313)				shader->sourceBitmap->input = sourceBitmapData;
HXLINE( 314)				shader->offset->value[0] = ((Float)0.0);
HXLINE( 315)				shader->offset->value[1] = ((Float)0.0);
HXLINE( 316)				return shader;
            			}
HXLINE( 318)			 ::openfl::filters::_GlowFilter::InnerCombineShader shader = ::openfl::filters::GlowFilter_obj::_hx___innerCombineShader;
HXLINE( 319)			shader->sourceBitmap->input = sourceBitmapData;
HXLINE( 320)			shader->offset->value[0] = ((Float)0.0);
HXLINE( 321)			shader->offset->value[1] = ((Float)0.0);
HXLINE( 322)			return shader;
            		}
            		else {
HXLINE( 326)			if (this->_hx___knockout) {
HXLINE( 328)				 ::openfl::filters::_GlowFilter::CombineKnockoutShader shader = ::openfl::filters::GlowFilter_obj::_hx___combineKnockoutShader;
HXLINE( 329)				shader->sourceBitmap->input = sourceBitmapData;
HXLINE( 330)				shader->offset->value[0] = ((Float)0.0);
HXLINE( 331)				shader->offset->value[1] = ((Float)0.0);
HXLINE( 332)				return shader;
            			}
HXLINE( 334)			 ::openfl::filters::_GlowFilter::CombineShader shader = ::openfl::filters::GlowFilter_obj::_hx___combineShader;
HXLINE( 335)			shader->sourceBitmap->input = sourceBitmapData;
HXLINE( 336)			shader->offset->value[0] = ((Float)0.0);
HXLINE( 337)			shader->offset->value[1] = ((Float)0.0);
HXLINE( 338)			return shader;
            		}
HXLINE( 308)		return null();
            	}


void GlowFilter_obj::_hx___updateSize(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_346___updateSize)
HXLINE( 347)		int _hx_tmp;
HXDLIN( 347)		if ((this->_hx___blurX > 0)) {
HXLINE( 347)			_hx_tmp = ::Math_obj::ceil((this->_hx___blurX * ((Float)1.5)));
            		}
            		else {
HXLINE( 347)			_hx_tmp = 0;
            		}
HXDLIN( 347)		this->_hx___leftExtension = _hx_tmp;
HXLINE( 348)		this->_hx___rightExtension = this->_hx___leftExtension;
HXLINE( 349)		int _hx_tmp1;
HXDLIN( 349)		if ((this->_hx___blurY > 0)) {
HXLINE( 349)			_hx_tmp1 = ::Math_obj::ceil((this->_hx___blurY * ((Float)1.5)));
            		}
            		else {
HXLINE( 349)			_hx_tmp1 = 0;
            		}
HXDLIN( 349)		this->_hx___topExtension = _hx_tmp1;
HXLINE( 350)		this->_hx___bottomExtension = this->_hx___topExtension;
HXLINE( 351)		this->_hx___calculateNumShaderPasses();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,_hx___updateSize,(void))

void GlowFilter_obj::_hx___calculateNumShaderPasses(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_355___calculateNumShaderPasses)
HXLINE( 356)		int _hx_tmp;
HXDLIN( 356)		if ((this->_hx___blurX <= 0)) {
HXLINE( 356)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 356)			_hx_tmp = (::Math_obj::round((this->_hx___blurX * (( (Float)(this->_hx___quality) ) / ( (Float)(4) )))) + 1);
            		}
HXDLIN( 356)		this->_hx___horizontalPasses = _hx_tmp;
HXLINE( 357)		int _hx_tmp1;
HXDLIN( 357)		if ((this->_hx___blurY <= 0)) {
HXLINE( 357)			_hx_tmp1 = 0;
            		}
            		else {
HXLINE( 357)			_hx_tmp1 = (::Math_obj::round((this->_hx___blurY * (( (Float)(this->_hx___quality) ) / ( (Float)(4) )))) + 1);
            		}
HXDLIN( 357)		this->_hx___verticalPasses = _hx_tmp1;
HXLINE( 358)		int _hx_tmp2;
HXDLIN( 358)		if (this->_hx___inner) {
HXLINE( 358)			_hx_tmp2 = 2;
            		}
            		else {
HXLINE( 358)			_hx_tmp2 = 1;
            		}
HXDLIN( 358)		this->_hx___numShaderPasses = ((this->_hx___horizontalPasses + this->_hx___verticalPasses) + _hx_tmp2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,_hx___calculateNumShaderPasses,(void))

Float GlowFilter_obj::get_alpha(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_364_get_alpha)
HXDLIN( 364)		return this->_hx___alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_alpha,return )

Float GlowFilter_obj::set_alpha(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_368_set_alpha)
HXLINE( 369)		if ((value != this->_hx___alpha)) {
HXLINE( 369)			this->_hx___renderDirty = true;
            		}
HXLINE( 370)		return (this->_hx___alpha = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_alpha,return )

Float GlowFilter_obj::get_blurX(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_375_get_blurX)
HXDLIN( 375)		return this->_hx___blurX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_blurX,return )

Float GlowFilter_obj::set_blurX(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_379_set_blurX)
HXLINE( 380)		if ((value != this->_hx___blurX)) {
HXLINE( 382)			this->_hx___blurX = value;
HXLINE( 383)			this->_hx___renderDirty = true;
HXLINE( 384)			this->_hx___updateSize();
            		}
HXLINE( 386)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_blurX,return )

Float GlowFilter_obj::get_blurY(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_391_get_blurY)
HXDLIN( 391)		return this->_hx___blurY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_blurY,return )

Float GlowFilter_obj::set_blurY(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_395_set_blurY)
HXLINE( 396)		if ((value != this->_hx___blurY)) {
HXLINE( 398)			this->_hx___blurY = value;
HXLINE( 399)			this->_hx___renderDirty = true;
HXLINE( 400)			this->_hx___updateSize();
            		}
HXLINE( 402)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_blurY,return )

int GlowFilter_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_407_get_color)
HXDLIN( 407)		return this->_hx___color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_color,return )

int GlowFilter_obj::set_color(int value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_411_set_color)
HXLINE( 412)		if ((value != this->_hx___color)) {
HXLINE( 412)			this->_hx___renderDirty = true;
            		}
HXLINE( 413)		return (this->_hx___color = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_color,return )

bool GlowFilter_obj::get_inner(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_418_get_inner)
HXDLIN( 418)		return this->_hx___inner;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_inner,return )

bool GlowFilter_obj::set_inner(bool value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_422_set_inner)
HXLINE( 423)		if ((value != this->_hx___inner)) {
HXLINE( 425)			this->_hx___renderDirty = true;
HXLINE( 426)			this->_hx___calculateNumShaderPasses();
            		}
HXLINE( 428)		return (this->_hx___inner = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_inner,return )

bool GlowFilter_obj::get_knockout(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_433_get_knockout)
HXDLIN( 433)		return this->_hx___knockout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_knockout,return )

bool GlowFilter_obj::set_knockout(bool value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_437_set_knockout)
HXLINE( 438)		if ((value != this->_hx___knockout)) {
HXLINE( 440)			this->_hx___renderDirty = true;
HXLINE( 441)			this->_hx___calculateNumShaderPasses();
            		}
HXLINE( 443)		return (this->_hx___knockout = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_knockout,return )

int GlowFilter_obj::get_quality(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_448_get_quality)
HXDLIN( 448)		return this->_hx___quality;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_quality,return )

int GlowFilter_obj::set_quality(int value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_452_set_quality)
HXLINE( 453)		if ((value != this->_hx___quality)) {
HXLINE( 455)			this->_hx___renderDirty = true;
HXLINE( 456)			this->_hx___calculateNumShaderPasses();
            		}
HXLINE( 458)		return (this->_hx___quality = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_quality,return )

Float GlowFilter_obj::get_strength(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_463_get_strength)
HXDLIN( 463)		return this->_hx___strength;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_strength,return )

Float GlowFilter_obj::set_strength(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_467_set_strength)
HXLINE( 468)		if ((value != this->_hx___strength)) {
HXLINE( 468)			this->_hx___renderDirty = true;
            		}
HXLINE( 469)		return (this->_hx___strength = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_strength,return )

 ::openfl::filters::_GlowFilter::InvertAlphaShader GlowFilter_obj::_hx___invertAlphaShader;

 ::openfl::filters::_GlowFilter::BlurAlphaShader GlowFilter_obj::_hx___blurAlphaShader;

 ::openfl::filters::_GlowFilter::CombineShader GlowFilter_obj::_hx___combineShader;

 ::openfl::filters::_GlowFilter::InnerCombineShader GlowFilter_obj::_hx___innerCombineShader;

 ::openfl::filters::_GlowFilter::CombineKnockoutShader GlowFilter_obj::_hx___combineKnockoutShader;

 ::openfl::filters::_GlowFilter::InnerCombineKnockoutShader GlowFilter_obj::_hx___innerCombineKnockoutShader;


::hx::ObjectPtr< GlowFilter_obj > GlowFilter_obj::__new(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout) {
	::hx::ObjectPtr< GlowFilter_obj > __this = new GlowFilter_obj();
	__this->__construct(__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout);
	return __this;
}

::hx::ObjectPtr< GlowFilter_obj > GlowFilter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout) {
	GlowFilter_obj *__this = (GlowFilter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GlowFilter_obj), true, "openfl.filters.GlowFilter"));
	*(void **)__this = GlowFilter_obj::_hx_vtable;
	__this->__construct(__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout);
	return __this;
}

GlowFilter_obj::GlowFilter_obj()
{
}

::hx::Val GlowFilter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alpha() ); }
		if (HX_FIELD_EQ(inName,"blurX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_blurX() ); }
		if (HX_FIELD_EQ(inName,"blurY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_blurY() ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		if (HX_FIELD_EQ(inName,"inner") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_inner() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_quality() ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return ::hx::Val( _hx___alpha ); }
		if (HX_FIELD_EQ(inName,"__blurX") ) { return ::hx::Val( _hx___blurX ); }
		if (HX_FIELD_EQ(inName,"__blurY") ) { return ::hx::Val( _hx___blurY ); }
		if (HX_FIELD_EQ(inName,"__color") ) { return ::hx::Val( _hx___color ); }
		if (HX_FIELD_EQ(inName,"__inner") ) { return ::hx::Val( _hx___inner ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"knockout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_knockout() ); }
		if (HX_FIELD_EQ(inName,"strength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_strength() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__quality") ) { return ::hx::Val( _hx___quality ); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return ::hx::Val( get_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_blurX") ) { return ::hx::Val( get_blurX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blurX") ) { return ::hx::Val( set_blurX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_blurY") ) { return ::hx::Val( get_blurY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blurY") ) { return ::hx::Val( set_blurY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_inner") ) { return ::hx::Val( get_inner_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_inner") ) { return ::hx::Val( set_inner_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__knockout") ) { return ::hx::Val( _hx___knockout ); }
		if (HX_FIELD_EQ(inName,"__strength") ) { return ::hx::Val( _hx___strength ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_quality") ) { return ::hx::Val( get_quality_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_quality") ) { return ::hx::Val( set_quality_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initShader") ) { return ::hx::Val( _hx___initShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateSize") ) { return ::hx::Val( _hx___updateSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_knockout") ) { return ::hx::Val( get_knockout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_knockout") ) { return ::hx::Val( set_knockout_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_strength") ) { return ::hx::Val( get_strength_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_strength") ) { return ::hx::Val( set_strength_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__applyFilter") ) { return ::hx::Val( _hx___applyFilter_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__verticalPasses") ) { return ::hx::Val( _hx___verticalPasses ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__horizontalPasses") ) { return ::hx::Val( _hx___horizontalPasses ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__calculateNumShaderPasses") ) { return ::hx::Val( _hx___calculateNumShaderPasses_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GlowFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__combineShader") ) { outValue = ( _hx___combineShader ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__blurAlphaShader") ) { outValue = ( _hx___blurAlphaShader ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__invertAlphaShader") ) { outValue = ( _hx___invertAlphaShader ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__innerCombineShader") ) { outValue = ( _hx___innerCombineShader ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__combineKnockoutShader") ) { outValue = ( _hx___combineKnockoutShader ); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__innerCombineKnockoutShader") ) { outValue = ( _hx___innerCombineKnockoutShader ); return true; }
	}
	return false;
}

::hx::Val GlowFilter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"blurX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blurX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"blurY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blurY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"inner") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_inner(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_quality(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { _hx___alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blurX") ) { _hx___blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blurY") ) { _hx___blurY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__color") ) { _hx___color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__inner") ) { _hx___inner=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"knockout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_knockout(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"strength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_strength(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__quality") ) { _hx___quality=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__knockout") ) { _hx___knockout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__strength") ) { _hx___strength=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__verticalPasses") ) { _hx___verticalPasses=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__horizontalPasses") ) { _hx___horizontalPasses=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GlowFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__combineShader") ) { _hx___combineShader=ioValue.Cast<  ::openfl::filters::_GlowFilter::CombineShader >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__blurAlphaShader") ) { _hx___blurAlphaShader=ioValue.Cast<  ::openfl::filters::_GlowFilter::BlurAlphaShader >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__invertAlphaShader") ) { _hx___invertAlphaShader=ioValue.Cast<  ::openfl::filters::_GlowFilter::InvertAlphaShader >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__innerCombineShader") ) { _hx___innerCombineShader=ioValue.Cast<  ::openfl::filters::_GlowFilter::InnerCombineShader >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__combineKnockoutShader") ) { _hx___combineKnockoutShader=ioValue.Cast<  ::openfl::filters::_GlowFilter::CombineKnockoutShader >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__innerCombineKnockoutShader") ) { _hx___innerCombineKnockoutShader=ioValue.Cast<  ::openfl::filters::_GlowFilter::InnerCombineKnockoutShader >(); return true; }
	}
	return false;
}

void GlowFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("blurX",d1,0f,01,b5));
	outFields->push(HX_("blurY",d2,0f,01,b5));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("inner",96,31,1c,be));
	outFields->push(HX_("knockout",fa,a9,a5,6f));
	outFields->push(HX_("quality",bf,04,4c,44));
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("__alpha",3e,00,f5,8b));
	outFields->push(HX_("__blurX",b1,68,5f,1f));
	outFields->push(HX_("__blurY",b2,68,5f,1f));
	outFields->push(HX_("__color",43,ca,ba,b4));
	outFields->push(HX_("__horizontalPasses",a3,9a,5d,02));
	outFields->push(HX_("__inner",76,8a,7a,28));
	outFields->push(HX_("__knockout",1a,1d,de,12));
	outFields->push(HX_("__quality",9f,55,9a,c5));
	outFields->push(HX_("__strength",a1,45,c7,31));
	outFields->push(HX_("__verticalPasses",b5,4b,f5,ec));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GlowFilter_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(GlowFilter_obj,_hx___alpha),HX_("__alpha",3e,00,f5,8b)},
	{::hx::fsFloat,(int)offsetof(GlowFilter_obj,_hx___blurX),HX_("__blurX",b1,68,5f,1f)},
	{::hx::fsFloat,(int)offsetof(GlowFilter_obj,_hx___blurY),HX_("__blurY",b2,68,5f,1f)},
	{::hx::fsInt,(int)offsetof(GlowFilter_obj,_hx___color),HX_("__color",43,ca,ba,b4)},
	{::hx::fsInt,(int)offsetof(GlowFilter_obj,_hx___horizontalPasses),HX_("__horizontalPasses",a3,9a,5d,02)},
	{::hx::fsBool,(int)offsetof(GlowFilter_obj,_hx___inner),HX_("__inner",76,8a,7a,28)},
	{::hx::fsBool,(int)offsetof(GlowFilter_obj,_hx___knockout),HX_("__knockout",1a,1d,de,12)},
	{::hx::fsInt,(int)offsetof(GlowFilter_obj,_hx___quality),HX_("__quality",9f,55,9a,c5)},
	{::hx::fsFloat,(int)offsetof(GlowFilter_obj,_hx___strength),HX_("__strength",a1,45,c7,31)},
	{::hx::fsInt,(int)offsetof(GlowFilter_obj,_hx___verticalPasses),HX_("__verticalPasses",b5,4b,f5,ec)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GlowFilter_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::filters::_GlowFilter::InvertAlphaShader */ ,(void *) &GlowFilter_obj::_hx___invertAlphaShader,HX_("__invertAlphaShader",8d,5a,cd,c5)},
	{::hx::fsObject /*  ::openfl::filters::_GlowFilter::BlurAlphaShader */ ,(void *) &GlowFilter_obj::_hx___blurAlphaShader,HX_("__blurAlphaShader",9c,fe,5b,46)},
	{::hx::fsObject /*  ::openfl::filters::_GlowFilter::CombineShader */ ,(void *) &GlowFilter_obj::_hx___combineShader,HX_("__combineShader",e4,ff,b6,50)},
	{::hx::fsObject /*  ::openfl::filters::_GlowFilter::InnerCombineShader */ ,(void *) &GlowFilter_obj::_hx___innerCombineShader,HX_("__innerCombineShader",ae,ba,10,cf)},
	{::hx::fsObject /*  ::openfl::filters::_GlowFilter::CombineKnockoutShader */ ,(void *) &GlowFilter_obj::_hx___combineKnockoutShader,HX_("__combineKnockoutShader",7e,2c,69,48)},
	{::hx::fsObject /*  ::openfl::filters::_GlowFilter::InnerCombineKnockoutShader */ ,(void *) &GlowFilter_obj::_hx___innerCombineKnockoutShader,HX_("__innerCombineKnockoutShader",48,c1,89,20)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GlowFilter_obj_sMemberFields[] = {
	HX_("__alpha",3e,00,f5,8b),
	HX_("__blurX",b1,68,5f,1f),
	HX_("__blurY",b2,68,5f,1f),
	HX_("__color",43,ca,ba,b4),
	HX_("__horizontalPasses",a3,9a,5d,02),
	HX_("__inner",76,8a,7a,28),
	HX_("__knockout",1a,1d,de,12),
	HX_("__quality",9f,55,9a,c5),
	HX_("__strength",a1,45,c7,31),
	HX_("__verticalPasses",b5,4b,f5,ec),
	HX_("clone",5d,13,63,48),
	HX_("__applyFilter",a6,20,a8,09),
	HX_("__initShader",75,95,f9,59),
	HX_("__updateSize",8a,06,9c,3d),
	HX_("__calculateNumShaderPasses",44,14,02,b7),
	HX_("get_alpha",b5,03,40,65),
	HX_("set_alpha",c1,ef,90,48),
	HX_("get_blurX",28,6c,aa,f8),
	HX_("set_blurX",34,58,fb,db),
	HX_("get_blurY",29,6c,aa,f8),
	HX_("set_blurY",35,58,fb,db),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_inner",ed,8d,c5,01),
	HX_("set_inner",f9,79,16,e5),
	HX_("get_knockout",03,5e,bf,24),
	HX_("set_knockout",77,81,b8,39),
	HX_("get_quality",d6,64,46,ca),
	HX_("set_quality",e2,6b,b3,d4),
	HX_("get_strength",8a,86,a8,43),
	HX_("set_strength",fe,a9,a1,58),
	::String(null()) };

static void GlowFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlowFilter_obj::_hx___invertAlphaShader,"__invertAlphaShader");
	HX_MARK_MEMBER_NAME(GlowFilter_obj::_hx___blurAlphaShader,"__blurAlphaShader");
	HX_MARK_MEMBER_NAME(GlowFilter_obj::_hx___combineShader,"__combineShader");
	HX_MARK_MEMBER_NAME(GlowFilter_obj::_hx___innerCombineShader,"__innerCombineShader");
	HX_MARK_MEMBER_NAME(GlowFilter_obj::_hx___combineKnockoutShader,"__combineKnockoutShader");
	HX_MARK_MEMBER_NAME(GlowFilter_obj::_hx___innerCombineKnockoutShader,"__innerCombineKnockoutShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GlowFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::_hx___invertAlphaShader,"__invertAlphaShader");
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::_hx___blurAlphaShader,"__blurAlphaShader");
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::_hx___combineShader,"__combineShader");
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::_hx___innerCombineShader,"__innerCombineShader");
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::_hx___combineKnockoutShader,"__combineKnockoutShader");
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::_hx___innerCombineKnockoutShader,"__innerCombineKnockoutShader");
};

#endif

::hx::Class GlowFilter_obj::__mClass;

static ::String GlowFilter_obj_sStaticFields[] = {
	HX_("__invertAlphaShader",8d,5a,cd,c5),
	HX_("__blurAlphaShader",9c,fe,5b,46),
	HX_("__combineShader",e4,ff,b6,50),
	HX_("__innerCombineShader",ae,ba,10,cf),
	HX_("__combineKnockoutShader",7e,2c,69,48),
	HX_("__innerCombineKnockoutShader",48,c1,89,20),
	::String(null())
};

void GlowFilter_obj::__register()
{
	GlowFilter_obj _hx_dummy;
	GlowFilter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.filters.GlowFilter",36,e0,65,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GlowFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &GlowFilter_obj::__SetStatic;
	__mClass->mMarkFunc = GlowFilter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GlowFilter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GlowFilter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GlowFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GlowFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlowFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlowFilter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GlowFilter_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_69_boot)
HXDLIN(  69)		_hx___invertAlphaShader =  ::openfl::filters::_GlowFilter::InvertAlphaShader_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_70_boot)
HXDLIN(  70)		_hx___blurAlphaShader =  ::openfl::filters::_GlowFilter::BlurAlphaShader_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_71_boot)
HXDLIN(  71)		_hx___combineShader =  ::openfl::filters::_GlowFilter::CombineShader_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_72_boot)
HXDLIN(  72)		_hx___innerCombineShader =  ::openfl::filters::_GlowFilter::InnerCombineShader_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_73_boot)
HXDLIN(  73)		_hx___combineKnockoutShader =  ::openfl::filters::_GlowFilter::CombineKnockoutShader_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_74_boot)
HXDLIN(  74)		_hx___innerCombineKnockoutShader =  ::openfl::filters::_GlowFilter::InnerCombineKnockoutShader_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace filters
