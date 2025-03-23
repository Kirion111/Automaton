#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_openfl_filters_DropShadowFilter
#include <openfl/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_openfl_filters__DropShadowFilter_HideShader
#include <openfl/filters/_DropShadowFilter/HideShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_786269b8d678908e_262_new,"openfl.filters.DropShadowFilter","new",0xf784b84a,"openfl.filters.DropShadowFilter.new","openfl/filters/DropShadowFilter.hx",262,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_289_clone,"openfl.filters.DropShadowFilter","clone",0x1b8d49c7,"openfl.filters.DropShadowFilter.clone","openfl/filters/DropShadowFilter.hx",289,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_293___applyFilter,"openfl.filters.DropShadowFilter","__applyFilter",0x5aedd110,"openfl.filters.DropShadowFilter.__applyFilter","openfl/filters/DropShadowFilter.hx",293,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_313___initShader,"openfl.filters.DropShadowFilter","__initShader",0xf305604b,"openfl.filters.DropShadowFilter.__initShader","openfl/filters/DropShadowFilter.hx",313,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_392___updateSize,"openfl.filters.DropShadowFilter","__updateSize",0xd6a7d160,"openfl.filters.DropShadowFilter.__updateSize","openfl/filters/DropShadowFilter.hx",392,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_403___calculateNumShaderPasses,"openfl.filters.DropShadowFilter","__calculateNumShaderPasses",0x03b2e99a,"openfl.filters.DropShadowFilter.__calculateNumShaderPasses","openfl/filters/DropShadowFilter.hx",403,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_412_get_alpha,"openfl.filters.DropShadowFilter","get_alpha",0xc136b71f,"openfl.filters.DropShadowFilter.get_alpha","openfl/filters/DropShadowFilter.hx",412,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_416_set_alpha,"openfl.filters.DropShadowFilter","set_alpha",0xa487a32b,"openfl.filters.DropShadowFilter.set_alpha","openfl/filters/DropShadowFilter.hx",416,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_423_get_angle,"openfl.filters.DropShadowFilter","get_angle",0xc2825394,"openfl.filters.DropShadowFilter.get_angle","openfl/filters/DropShadowFilter.hx",423,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_427_set_angle,"openfl.filters.DropShadowFilter","set_angle",0xa5d33fa0,"openfl.filters.DropShadowFilter.set_angle","openfl/filters/DropShadowFilter.hx",427,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_439_get_blurX,"openfl.filters.DropShadowFilter","get_blurX",0x54a11f92,"openfl.filters.DropShadowFilter.get_blurX","openfl/filters/DropShadowFilter.hx",439,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_443_set_blurX,"openfl.filters.DropShadowFilter","set_blurX",0x37f20b9e,"openfl.filters.DropShadowFilter.set_blurX","openfl/filters/DropShadowFilter.hx",443,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_455_get_blurY,"openfl.filters.DropShadowFilter","get_blurY",0x54a11f93,"openfl.filters.DropShadowFilter.get_blurY","openfl/filters/DropShadowFilter.hx",455,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_459_set_blurY,"openfl.filters.DropShadowFilter","set_blurY",0x37f20b9f,"openfl.filters.DropShadowFilter.set_blurY","openfl/filters/DropShadowFilter.hx",459,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_471_get_color,"openfl.filters.DropShadowFilter","get_color",0xe9fc8124,"openfl.filters.DropShadowFilter.get_color","openfl/filters/DropShadowFilter.hx",471,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_475_set_color,"openfl.filters.DropShadowFilter","set_color",0xcd4d6d30,"openfl.filters.DropShadowFilter.set_color","openfl/filters/DropShadowFilter.hx",475,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_482_get_distance,"openfl.filters.DropShadowFilter","get_distance",0xba1f1214,"openfl.filters.DropShadowFilter.get_distance","openfl/filters/DropShadowFilter.hx",482,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_486_set_distance,"openfl.filters.DropShadowFilter","set_distance",0xcf183588,"openfl.filters.DropShadowFilter.set_distance","openfl/filters/DropShadowFilter.hx",486,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_498_get_hideObject,"openfl.filters.DropShadowFilter","get_hideObject",0xee6f59c0,"openfl.filters.DropShadowFilter.get_hideObject","openfl/filters/DropShadowFilter.hx",498,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_502_set_hideObject,"openfl.filters.DropShadowFilter","set_hideObject",0x0e8f4234,"openfl.filters.DropShadowFilter.set_hideObject","openfl/filters/DropShadowFilter.hx",502,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_512_get_inner,"openfl.filters.DropShadowFilter","get_inner",0x5dbc4157,"openfl.filters.DropShadowFilter.get_inner","openfl/filters/DropShadowFilter.hx",512,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_516_set_inner,"openfl.filters.DropShadowFilter","set_inner",0x410d2d63,"openfl.filters.DropShadowFilter.set_inner","openfl/filters/DropShadowFilter.hx",516,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_523_get_knockout,"openfl.filters.DropShadowFilter","get_knockout",0xbdcb28d9,"openfl.filters.DropShadowFilter.get_knockout","openfl/filters/DropShadowFilter.hx",523,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_527_set_knockout,"openfl.filters.DropShadowFilter","set_knockout",0xd2c44c4d,"openfl.filters.DropShadowFilter.set_knockout","openfl/filters/DropShadowFilter.hx",527,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_534_get_quality,"openfl.filters.DropShadowFilter","get_quality",0x17e046c0,"openfl.filters.DropShadowFilter.get_quality","openfl/filters/DropShadowFilter.hx",534,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_538_set_quality,"openfl.filters.DropShadowFilter","set_quality",0x224d4dcc,"openfl.filters.DropShadowFilter.set_quality","openfl/filters/DropShadowFilter.hx",538,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_545_get_strength,"openfl.filters.DropShadowFilter","get_strength",0xdcb45160,"openfl.filters.DropShadowFilter.get_strength","openfl/filters/DropShadowFilter.hx",545,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_549_set_strength,"openfl.filters.DropShadowFilter","set_strength",0xf1ad74d4,"openfl.filters.DropShadowFilter.set_strength","openfl/filters/DropShadowFilter.hx",549,0x048fdea4)
HX_LOCAL_STACK_FRAME(_hx_pos_786269b8d678908e_69_boot,"openfl.filters.DropShadowFilter","boot",0x94b58908,"openfl.filters.DropShadowFilter.boot","openfl/filters/DropShadowFilter.hx",69,0x048fdea4)
namespace openfl{
namespace filters{

void DropShadowFilter_obj::__construct(::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_angle,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout,::hx::Null< bool >  __o_hideObject){
            		Float distance = __o_distance.Default(4);
            		Float angle = __o_angle.Default(45);
            		int color = __o_color.Default(0);
            		Float alpha = __o_alpha.Default(1);
            		Float blurX = __o_blurX.Default(4);
            		Float blurY = __o_blurY.Default(4);
            		Float strength = __o_strength.Default(1);
            		int quality = __o_quality.Default(1);
            		bool inner = __o_inner.Default(false);
            		bool knockout = __o_knockout.Default(false);
            		bool hideObject = __o_hideObject.Default(false);
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_262_new)
HXLINE( 263)		super::__construct();
HXLINE( 265)		this->_hx___offsetX = ( (Float)(0) );
HXLINE( 266)		this->_hx___offsetY = ( (Float)(0) );
HXLINE( 268)		this->_hx___distance = distance;
HXLINE( 269)		this->_hx___angle = angle;
HXLINE( 270)		this->_hx___color = color;
HXLINE( 271)		this->_hx___alpha = alpha;
HXLINE( 272)		this->_hx___blurX = blurX;
HXLINE( 273)		this->_hx___blurY = blurY;
HXLINE( 274)		this->_hx___strength = strength;
HXLINE( 275)		this->_hx___quality = quality;
HXLINE( 276)		this->_hx___inner = inner;
HXLINE( 277)		this->_hx___knockout = knockout;
HXLINE( 278)		this->_hx___hideObject = hideObject;
HXLINE( 280)		this->_hx___updateSize();
HXLINE( 282)		this->_hx___needSecondBitmapData = true;
HXLINE( 283)		this->_hx___preserveObject = true;
HXLINE( 284)		this->_hx___renderDirty = true;
            	}

Dynamic DropShadowFilter_obj::__CreateEmpty() { return new DropShadowFilter_obj; }

void *DropShadowFilter_obj::_hx_vtable = 0;

Dynamic DropShadowFilter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DropShadowFilter_obj > _hx_result = new DropShadowFilter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return _hx_result;
}

bool DropShadowFilter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x26de6bd2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x26de6bd2;
	} else {
		return inClassId==(int)0x2944c4ee;
	}
}

 ::openfl::filters::BitmapFilter DropShadowFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_786269b8d678908e_289_clone)
HXDLIN( 289)		return  ::openfl::filters::DropShadowFilter_obj::__alloc( HX_CTX ,this->_hx___distance,this->_hx___angle,this->_hx___color,this->_hx___alpha,this->_hx___blurX,this->_hx___blurY,this->_hx___strength,this->_hx___quality,this->_hx___inner,this->_hx___knockout,this->_hx___hideObject);
            	}


 ::openfl::display::BitmapData DropShadowFilter_obj::_hx___applyFilter( ::openfl::display::BitmapData bitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint){
            	HX_GC_STACKFRAME(&_hx_pos_786269b8d678908e_293___applyFilter)
HXLINE( 297)		int r = ((this->_hx___color >> 16) & 255);
HXLINE( 298)		int g = ((this->_hx___color >> 8) & 255);
HXLINE( 299)		int b = (this->_hx___color & 255);
HXLINE( 301)		 ::openfl::geom::Point point =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(destPoint->x + this->_hx___offsetX),(destPoint->y + this->_hx___offsetY));
HXLINE( 303)		 ::lime::graphics::Image bitmapData1 = bitmapData->image;
HXDLIN( 303)		 ::lime::graphics::Image sourceBitmapData1 = sourceBitmapData->image;
HXDLIN( 303)		 ::lime::math::Rectangle finalImage = sourceRect->_hx___toLimeRectangle();
HXDLIN( 303)		 ::lime::math::Vector2 finalImage1 = point->_hx___toLimeVector2();
HXDLIN( 303)		 ::lime::graphics::Image finalImage2 = ::lime::_internal::graphics::ImageDataUtil_obj::gaussianBlur(bitmapData1,sourceBitmapData1,finalImage,finalImage1,this->_hx___blurX,this->_hx___blurY,this->_hx___quality,this->_hx___strength,null());
HXLINE( 305)		 ::lime::math::Rectangle _hx_tmp = finalImage2->get_rect();
HXDLIN( 305)		finalImage2->colorTransform(_hx_tmp, ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,0,0,0,this->_hx___alpha,r,g,b,0)->_hx___toLimeColorMatrix());
HXLINE( 307)		if (::hx::IsInstanceEq( finalImage2,bitmapData->image )) {
HXLINE( 307)			return bitmapData;
            		}
HXLINE( 309)		return sourceBitmapData;
            	}


 ::openfl::display::Shader DropShadowFilter_obj::_hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass, ::openfl::display::BitmapData sourceBitmapData){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_313___initShader)
HXLINE( 316)		bool _hx_tmp;
HXDLIN( 316)		if (this->_hx___inner) {
HXLINE( 316)			_hx_tmp = (pass == 0);
            		}
            		else {
HXLINE( 316)			_hx_tmp = false;
            		}
HXDLIN( 316)		if (_hx_tmp) {
HXLINE( 318)			return ::openfl::filters::GlowFilter_obj::_hx___invertAlphaShader;
            		}
HXLINE( 321)		int blurPass;
HXDLIN( 321)		if (this->_hx___inner) {
HXLINE( 321)			blurPass = 1;
            		}
            		else {
HXLINE( 321)			blurPass = 0;
            		}
HXDLIN( 321)		int blurPass1 = (pass - blurPass);
HXLINE( 322)		int numBlurPasses = (this->_hx___horizontalPasses + this->_hx___verticalPasses);
HXLINE( 324)		if ((blurPass1 < numBlurPasses)) {
HXLINE( 326)			 ::openfl::filters::_GlowFilter::BlurAlphaShader shader = ::openfl::filters::GlowFilter_obj::_hx___blurAlphaShader;
HXLINE( 327)			if ((blurPass1 < this->_hx___horizontalPasses)) {
HXLINE( 329)				Float scale = (::Math_obj::pow(((Float)0.5),( (Float)((blurPass1 >> 1)) )) * ((Float)0.5));
HXLINE( 330)				shader->uRadius->value[0] = (this->get_blurX() * scale);
HXLINE( 331)				shader->uRadius->value[1] = ( (Float)(0) );
            			}
            			else {
HXLINE( 335)				Float scale = (::Math_obj::pow(((Float)0.5),( (Float)(((blurPass1 - this->_hx___horizontalPasses) >> 1)) )) * ((Float)0.5));
HXLINE( 336)				shader->uRadius->value[0] = ( (Float)(0) );
HXLINE( 337)				shader->uRadius->value[1] = (this->get_blurY() * scale);
            			}
HXLINE( 339)			shader->uColor->value[0] = (( (Float)(((this->get_color() >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE( 340)			shader->uColor->value[1] = (( (Float)(((this->get_color() >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE( 341)			shader->uColor->value[2] = (( (Float)((this->get_color() & 255)) ) / ( (Float)(255) ));
HXLINE( 342)			shader->uColor->value[3] = this->get_alpha();
HXLINE( 343)			Float _hx_tmp;
HXDLIN( 343)			if ((blurPass1 == (numBlurPasses - 1))) {
HXLINE( 343)				_hx_tmp = this->_hx___strength;
            			}
            			else {
HXLINE( 343)				_hx_tmp = ((Float)1.0);
            			}
HXDLIN( 343)			shader->uStrength->value[0] = _hx_tmp;
HXLINE( 344)			return shader;
            		}
HXLINE( 346)		if (this->_hx___inner) {
HXLINE( 348)			bool _hx_tmp;
HXDLIN( 348)			if (!(this->_hx___knockout)) {
HXLINE( 348)				_hx_tmp = this->_hx___hideObject;
            			}
            			else {
HXLINE( 348)				_hx_tmp = true;
            			}
HXDLIN( 348)			if (_hx_tmp) {
HXLINE( 350)				 ::openfl::filters::_GlowFilter::InnerCombineKnockoutShader shader = ::openfl::filters::GlowFilter_obj::_hx___innerCombineKnockoutShader;
HXLINE( 351)				shader->sourceBitmap->input = sourceBitmapData;
HXLINE( 352)				shader->offset->value[0] = this->_hx___offsetX;
HXLINE( 353)				shader->offset->value[1] = this->_hx___offsetY;
HXLINE( 354)				return shader;
            			}
HXLINE( 356)			 ::openfl::filters::_GlowFilter::InnerCombineShader shader = ::openfl::filters::GlowFilter_obj::_hx___innerCombineShader;
HXLINE( 357)			shader->sourceBitmap->input = sourceBitmapData;
HXLINE( 358)			shader->offset->value[0] = this->_hx___offsetX;
HXLINE( 359)			shader->offset->value[1] = this->_hx___offsetY;
HXLINE( 360)			return shader;
            		}
            		else {
HXLINE( 364)			if (this->_hx___knockout) {
HXLINE( 366)				 ::openfl::filters::_GlowFilter::CombineKnockoutShader shader = ::openfl::filters::GlowFilter_obj::_hx___combineKnockoutShader;
HXLINE( 367)				shader->sourceBitmap->input = sourceBitmapData;
HXLINE( 368)				shader->offset->value[0] = this->_hx___offsetX;
HXLINE( 369)				shader->offset->value[1] = this->_hx___offsetY;
HXLINE( 370)				return shader;
            			}
            			else {
HXLINE( 372)				if (this->_hx___hideObject) {
HXLINE( 374)					 ::openfl::filters::_DropShadowFilter::HideShader shader = ::openfl::filters::DropShadowFilter_obj::_hx___hideShader;
HXLINE( 375)					shader->sourceBitmap->input = sourceBitmapData;
HXLINE( 376)					shader->offset->value[0] = this->_hx___offsetX;
HXLINE( 377)					shader->offset->value[1] = this->_hx___offsetY;
HXLINE( 378)					return shader;
            				}
            			}
HXLINE( 380)			 ::openfl::filters::_GlowFilter::CombineShader shader = ::openfl::filters::GlowFilter_obj::_hx___combineShader;
HXLINE( 381)			shader->sourceBitmap->input = sourceBitmapData;
HXLINE( 382)			shader->offset->value[0] = this->_hx___offsetX;
HXLINE( 383)			shader->offset->value[1] = this->_hx___offsetY;
HXLINE( 384)			return shader;
            		}
HXLINE( 346)		return null();
            	}


void DropShadowFilter_obj::_hx___updateSize(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_392___updateSize)
HXLINE( 393)		this->_hx___offsetX = ( (Float)(::Std_obj::_hx_int((this->_hx___distance * ::Math_obj::cos(((this->_hx___angle * ::Math_obj::PI) / ( (Float)(180) )))))) );
HXLINE( 394)		this->_hx___offsetY = ( (Float)(::Std_obj::_hx_int((this->_hx___distance * ::Math_obj::sin(((this->_hx___angle * ::Math_obj::PI) / ( (Float)(180) )))))) );
HXLINE( 395)		Float _hx_tmp;
HXDLIN( 395)		if ((this->_hx___offsetY < 0)) {
HXLINE( 395)			_hx_tmp = -(this->_hx___offsetY);
            		}
            		else {
HXLINE( 395)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN( 395)		this->_hx___topExtension = ::Math_obj::ceil((_hx_tmp + this->_hx___blurY));
HXLINE( 396)		Float _hx_tmp1;
HXDLIN( 396)		if ((this->_hx___offsetY > 0)) {
HXLINE( 396)			_hx_tmp1 = this->_hx___offsetY;
            		}
            		else {
HXLINE( 396)			_hx_tmp1 = ( (Float)(0) );
            		}
HXDLIN( 396)		this->_hx___bottomExtension = ::Math_obj::ceil((_hx_tmp1 + this->_hx___blurY));
HXLINE( 397)		Float _hx_tmp2;
HXDLIN( 397)		if ((this->_hx___offsetX < 0)) {
HXLINE( 397)			_hx_tmp2 = -(this->_hx___offsetX);
            		}
            		else {
HXLINE( 397)			_hx_tmp2 = ( (Float)(0) );
            		}
HXDLIN( 397)		this->_hx___leftExtension = ::Math_obj::ceil((_hx_tmp2 + this->_hx___blurX));
HXLINE( 398)		Float _hx_tmp3;
HXDLIN( 398)		if ((this->_hx___offsetX > 0)) {
HXLINE( 398)			_hx_tmp3 = this->_hx___offsetX;
            		}
            		else {
HXLINE( 398)			_hx_tmp3 = ( (Float)(0) );
            		}
HXDLIN( 398)		this->_hx___rightExtension = ::Math_obj::ceil((_hx_tmp3 + this->_hx___blurX));
HXLINE( 399)		this->_hx___calculateNumShaderPasses();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,_hx___updateSize,(void))

void DropShadowFilter_obj::_hx___calculateNumShaderPasses(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_403___calculateNumShaderPasses)
HXLINE( 404)		int _hx_tmp;
HXDLIN( 404)		if ((this->_hx___blurX <= 0)) {
HXLINE( 404)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 404)			_hx_tmp = (::Math_obj::round((this->_hx___blurX * (( (Float)(this->_hx___quality) ) / ( (Float)(4) )))) + 1);
            		}
HXDLIN( 404)		this->_hx___horizontalPasses = _hx_tmp;
HXLINE( 405)		int _hx_tmp1;
HXDLIN( 405)		if ((this->_hx___blurY <= 0)) {
HXLINE( 405)			_hx_tmp1 = 0;
            		}
            		else {
HXLINE( 405)			_hx_tmp1 = (::Math_obj::round((this->_hx___blurY * (( (Float)(this->_hx___quality) ) / ( (Float)(4) )))) + 1);
            		}
HXDLIN( 405)		this->_hx___verticalPasses = _hx_tmp1;
HXLINE( 406)		int _hx_tmp2;
HXDLIN( 406)		if (this->_hx___inner) {
HXLINE( 406)			_hx_tmp2 = 2;
            		}
            		else {
HXLINE( 406)			_hx_tmp2 = 1;
            		}
HXDLIN( 406)		this->_hx___numShaderPasses = ((this->_hx___horizontalPasses + this->_hx___verticalPasses) + _hx_tmp2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,_hx___calculateNumShaderPasses,(void))

Float DropShadowFilter_obj::get_alpha(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_412_get_alpha)
HXDLIN( 412)		return this->_hx___alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_alpha,return )

Float DropShadowFilter_obj::set_alpha(Float value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_416_set_alpha)
HXLINE( 417)		if ((value != this->_hx___alpha)) {
HXLINE( 417)			this->_hx___renderDirty = true;
            		}
HXLINE( 418)		return (this->_hx___alpha = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_alpha,return )

Float DropShadowFilter_obj::get_angle(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_423_get_angle)
HXDLIN( 423)		return this->_hx___angle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_angle,return )

Float DropShadowFilter_obj::set_angle(Float value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_427_set_angle)
HXLINE( 428)		if ((value != this->_hx___angle)) {
HXLINE( 430)			this->_hx___angle = value;
HXLINE( 431)			this->_hx___renderDirty = true;
HXLINE( 432)			this->_hx___updateSize();
            		}
HXLINE( 434)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_angle,return )

Float DropShadowFilter_obj::get_blurX(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_439_get_blurX)
HXDLIN( 439)		return this->_hx___blurX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_blurX,return )

Float DropShadowFilter_obj::set_blurX(Float value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_443_set_blurX)
HXLINE( 444)		if ((value != this->_hx___blurX)) {
HXLINE( 446)			this->_hx___blurX = value;
HXLINE( 447)			this->_hx___renderDirty = true;
HXLINE( 448)			this->_hx___updateSize();
            		}
HXLINE( 450)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_blurX,return )

Float DropShadowFilter_obj::get_blurY(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_455_get_blurY)
HXDLIN( 455)		return this->_hx___blurY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_blurY,return )

Float DropShadowFilter_obj::set_blurY(Float value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_459_set_blurY)
HXLINE( 460)		if ((value != this->_hx___blurY)) {
HXLINE( 462)			this->_hx___blurY = value;
HXLINE( 463)			this->_hx___renderDirty = true;
HXLINE( 464)			this->_hx___updateSize();
            		}
HXLINE( 466)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_blurY,return )

int DropShadowFilter_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_471_get_color)
HXDLIN( 471)		return this->_hx___color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_color,return )

int DropShadowFilter_obj::set_color(int value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_475_set_color)
HXLINE( 476)		if ((value != this->_hx___color)) {
HXLINE( 476)			this->_hx___renderDirty = true;
            		}
HXLINE( 477)		return (this->_hx___color = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_color,return )

Float DropShadowFilter_obj::get_distance(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_482_get_distance)
HXDLIN( 482)		return this->_hx___distance;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_distance,return )

Float DropShadowFilter_obj::set_distance(Float value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_486_set_distance)
HXLINE( 487)		if ((value != this->_hx___distance)) {
HXLINE( 489)			this->_hx___distance = value;
HXLINE( 490)			this->_hx___renderDirty = true;
HXLINE( 491)			this->_hx___updateSize();
            		}
HXLINE( 493)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_distance,return )

bool DropShadowFilter_obj::get_hideObject(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_498_get_hideObject)
HXDLIN( 498)		return this->_hx___hideObject;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_hideObject,return )

bool DropShadowFilter_obj::set_hideObject(bool value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_502_set_hideObject)
HXLINE( 503)		if ((value != this->_hx___hideObject)) {
HXLINE( 505)			this->_hx___renderDirty = true;
            		}
HXLINE( 507)		return (this->_hx___hideObject = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_hideObject,return )

bool DropShadowFilter_obj::get_inner(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_512_get_inner)
HXDLIN( 512)		return this->_hx___inner;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_inner,return )

bool DropShadowFilter_obj::set_inner(bool value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_516_set_inner)
HXLINE( 517)		if ((value != this->_hx___inner)) {
HXLINE( 517)			this->_hx___renderDirty = true;
            		}
HXLINE( 518)		return (this->_hx___inner = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_inner,return )

bool DropShadowFilter_obj::get_knockout(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_523_get_knockout)
HXDLIN( 523)		return this->_hx___knockout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_knockout,return )

bool DropShadowFilter_obj::set_knockout(bool value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_527_set_knockout)
HXLINE( 528)		if ((value != this->_hx___knockout)) {
HXLINE( 528)			this->_hx___renderDirty = true;
            		}
HXLINE( 529)		return (this->_hx___knockout = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_knockout,return )

int DropShadowFilter_obj::get_quality(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_534_get_quality)
HXDLIN( 534)		return this->_hx___quality;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_quality,return )

int DropShadowFilter_obj::set_quality(int value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_538_set_quality)
HXLINE( 539)		if ((value != this->_hx___quality)) {
HXLINE( 539)			this->_hx___renderDirty = true;
            		}
HXLINE( 540)		return (this->_hx___quality = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_quality,return )

Float DropShadowFilter_obj::get_strength(){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_545_get_strength)
HXDLIN( 545)		return this->_hx___strength;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropShadowFilter_obj,get_strength,return )

Float DropShadowFilter_obj::set_strength(Float value){
            	HX_STACKFRAME(&_hx_pos_786269b8d678908e_549_set_strength)
HXLINE( 550)		if ((value != this->_hx___strength)) {
HXLINE( 550)			this->_hx___renderDirty = true;
            		}
HXLINE( 551)		return (this->_hx___strength = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropShadowFilter_obj,set_strength,return )

 ::openfl::filters::_DropShadowFilter::HideShader DropShadowFilter_obj::_hx___hideShader;


::hx::ObjectPtr< DropShadowFilter_obj > DropShadowFilter_obj::__new(::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_angle,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout,::hx::Null< bool >  __o_hideObject) {
	::hx::ObjectPtr< DropShadowFilter_obj > __this = new DropShadowFilter_obj();
	__this->__construct(__o_distance,__o_angle,__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout,__o_hideObject);
	return __this;
}

::hx::ObjectPtr< DropShadowFilter_obj > DropShadowFilter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_angle,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout,::hx::Null< bool >  __o_hideObject) {
	DropShadowFilter_obj *__this = (DropShadowFilter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DropShadowFilter_obj), true, "openfl.filters.DropShadowFilter"));
	*(void **)__this = DropShadowFilter_obj::_hx_vtable;
	__this->__construct(__o_distance,__o_angle,__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout,__o_hideObject);
	return __this;
}

DropShadowFilter_obj::DropShadowFilter_obj()
{
}

::hx::Val DropShadowFilter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alpha() ); }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_angle() ); }
		if (HX_FIELD_EQ(inName,"blurX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_blurX() ); }
		if (HX_FIELD_EQ(inName,"blurY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_blurY() ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		if (HX_FIELD_EQ(inName,"inner") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_inner() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_quality() ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return ::hx::Val( _hx___alpha ); }
		if (HX_FIELD_EQ(inName,"__angle") ) { return ::hx::Val( _hx___angle ); }
		if (HX_FIELD_EQ(inName,"__blurX") ) { return ::hx::Val( _hx___blurX ); }
		if (HX_FIELD_EQ(inName,"__blurY") ) { return ::hx::Val( _hx___blurY ); }
		if (HX_FIELD_EQ(inName,"__color") ) { return ::hx::Val( _hx___color ); }
		if (HX_FIELD_EQ(inName,"__inner") ) { return ::hx::Val( _hx___inner ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_distance() ); }
		if (HX_FIELD_EQ(inName,"knockout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_knockout() ); }
		if (HX_FIELD_EQ(inName,"strength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_strength() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__offsetX") ) { return ::hx::Val( _hx___offsetX ); }
		if (HX_FIELD_EQ(inName,"__offsetY") ) { return ::hx::Val( _hx___offsetY ); }
		if (HX_FIELD_EQ(inName,"__quality") ) { return ::hx::Val( _hx___quality ); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return ::hx::Val( get_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return ::hx::Val( get_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
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
		if (HX_FIELD_EQ(inName,"hideObject") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hideObject() ); }
		if (HX_FIELD_EQ(inName,"__distance") ) { return ::hx::Val( _hx___distance ); }
		if (HX_FIELD_EQ(inName,"__knockout") ) { return ::hx::Val( _hx___knockout ); }
		if (HX_FIELD_EQ(inName,"__strength") ) { return ::hx::Val( _hx___strength ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_quality") ) { return ::hx::Val( get_quality_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_quality") ) { return ::hx::Val( set_quality_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__hideObject") ) { return ::hx::Val( _hx___hideObject ); }
		if (HX_FIELD_EQ(inName,"__initShader") ) { return ::hx::Val( _hx___initShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateSize") ) { return ::hx::Val( _hx___updateSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_distance") ) { return ::hx::Val( get_distance_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_distance") ) { return ::hx::Val( set_distance_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_knockout") ) { return ::hx::Val( get_knockout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_knockout") ) { return ::hx::Val( set_knockout_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_strength") ) { return ::hx::Val( get_strength_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_strength") ) { return ::hx::Val( set_strength_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__applyFilter") ) { return ::hx::Val( _hx___applyFilter_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_hideObject") ) { return ::hx::Val( get_hideObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hideObject") ) { return ::hx::Val( set_hideObject_dyn() ); }
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

bool DropShadowFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__hideShader") ) { outValue = ( _hx___hideShader ); return true; }
	}
	return false;
}

::hx::Val DropShadowFilter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_angle(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"blurX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blurX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"blurY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blurY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"inner") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_inner(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_quality(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { _hx___alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__angle") ) { _hx___angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blurX") ) { _hx___blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blurY") ) { _hx___blurY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__color") ) { _hx___color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__inner") ) { _hx___inner=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_distance(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"knockout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_knockout(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"strength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_strength(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__offsetX") ) { _hx___offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__offsetY") ) { _hx___offsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__quality") ) { _hx___quality=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hideObject") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hideObject(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__distance") ) { _hx___distance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__knockout") ) { _hx___knockout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__strength") ) { _hx___strength=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__hideObject") ) { _hx___hideObject=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__verticalPasses") ) { _hx___verticalPasses=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__horizontalPasses") ) { _hx___horizontalPasses=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DropShadowFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__hideShader") ) { _hx___hideShader=ioValue.Cast<  ::openfl::filters::_DropShadowFilter::HideShader >(); return true; }
	}
	return false;
}

void DropShadowFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("blurX",d1,0f,01,b5));
	outFields->push(HX_("blurY",d2,0f,01,b5));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("distance",35,93,f9,6b));
	outFields->push(HX_("hideObject",21,25,c5,ac));
	outFields->push(HX_("inner",96,31,1c,be));
	outFields->push(HX_("knockout",fa,a9,a5,6f));
	outFields->push(HX_("quality",bf,04,4c,44));
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("__alpha",3e,00,f5,8b));
	outFields->push(HX_("__angle",b3,9c,40,8d));
	outFields->push(HX_("__blurX",b1,68,5f,1f));
	outFields->push(HX_("__blurY",b2,68,5f,1f));
	outFields->push(HX_("__color",43,ca,ba,b4));
	outFields->push(HX_("__distance",55,06,32,0f));
	outFields->push(HX_("__hideObject",41,a0,58,e5));
	outFields->push(HX_("__horizontalPasses",a3,9a,5d,02));
	outFields->push(HX_("__inner",76,8a,7a,28));
	outFields->push(HX_("__knockout",1a,1d,de,12));
	outFields->push(HX_("__offsetX",45,5a,b3,58));
	outFields->push(HX_("__offsetY",46,5a,b3,58));
	outFields->push(HX_("__quality",9f,55,9a,c5));
	outFields->push(HX_("__strength",a1,45,c7,31));
	outFields->push(HX_("__verticalPasses",b5,4b,f5,ec));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DropShadowFilter_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___alpha),HX_("__alpha",3e,00,f5,8b)},
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___angle),HX_("__angle",b3,9c,40,8d)},
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___blurX),HX_("__blurX",b1,68,5f,1f)},
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___blurY),HX_("__blurY",b2,68,5f,1f)},
	{::hx::fsInt,(int)offsetof(DropShadowFilter_obj,_hx___color),HX_("__color",43,ca,ba,b4)},
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___distance),HX_("__distance",55,06,32,0f)},
	{::hx::fsBool,(int)offsetof(DropShadowFilter_obj,_hx___hideObject),HX_("__hideObject",41,a0,58,e5)},
	{::hx::fsInt,(int)offsetof(DropShadowFilter_obj,_hx___horizontalPasses),HX_("__horizontalPasses",a3,9a,5d,02)},
	{::hx::fsBool,(int)offsetof(DropShadowFilter_obj,_hx___inner),HX_("__inner",76,8a,7a,28)},
	{::hx::fsBool,(int)offsetof(DropShadowFilter_obj,_hx___knockout),HX_("__knockout",1a,1d,de,12)},
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___offsetX),HX_("__offsetX",45,5a,b3,58)},
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___offsetY),HX_("__offsetY",46,5a,b3,58)},
	{::hx::fsInt,(int)offsetof(DropShadowFilter_obj,_hx___quality),HX_("__quality",9f,55,9a,c5)},
	{::hx::fsFloat,(int)offsetof(DropShadowFilter_obj,_hx___strength),HX_("__strength",a1,45,c7,31)},
	{::hx::fsInt,(int)offsetof(DropShadowFilter_obj,_hx___verticalPasses),HX_("__verticalPasses",b5,4b,f5,ec)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DropShadowFilter_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::filters::_DropShadowFilter::HideShader */ ,(void *) &DropShadowFilter_obj::_hx___hideShader,HX_("__hideShader",a7,e0,39,ed)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DropShadowFilter_obj_sMemberFields[] = {
	HX_("__alpha",3e,00,f5,8b),
	HX_("__angle",b3,9c,40,8d),
	HX_("__blurX",b1,68,5f,1f),
	HX_("__blurY",b2,68,5f,1f),
	HX_("__color",43,ca,ba,b4),
	HX_("__distance",55,06,32,0f),
	HX_("__hideObject",41,a0,58,e5),
	HX_("__horizontalPasses",a3,9a,5d,02),
	HX_("__inner",76,8a,7a,28),
	HX_("__knockout",1a,1d,de,12),
	HX_("__offsetX",45,5a,b3,58),
	HX_("__offsetY",46,5a,b3,58),
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
	HX_("get_angle",2a,a0,8b,66),
	HX_("set_angle",36,8c,dc,49),
	HX_("get_blurX",28,6c,aa,f8),
	HX_("set_blurX",34,58,fb,db),
	HX_("get_blurY",29,6c,aa,f8),
	HX_("set_blurY",35,58,fb,db),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_distance",3e,47,13,21),
	HX_("set_distance",b2,6a,0c,36),
	HX_("get_hideObject",6a,ad,ba,22),
	HX_("set_hideObject",de,95,da,42),
	HX_("get_inner",ed,8d,c5,01),
	HX_("set_inner",f9,79,16,e5),
	HX_("get_knockout",03,5e,bf,24),
	HX_("set_knockout",77,81,b8,39),
	HX_("get_quality",d6,64,46,ca),
	HX_("set_quality",e2,6b,b3,d4),
	HX_("get_strength",8a,86,a8,43),
	HX_("set_strength",fe,a9,a1,58),
	::String(null()) };

static void DropShadowFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DropShadowFilter_obj::_hx___hideShader,"__hideShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DropShadowFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DropShadowFilter_obj::_hx___hideShader,"__hideShader");
};

#endif

::hx::Class DropShadowFilter_obj::__mClass;

static ::String DropShadowFilter_obj_sStaticFields[] = {
	HX_("__hideShader",a7,e0,39,ed),
	::String(null())
};

void DropShadowFilter_obj::__register()
{
	DropShadowFilter_obj _hx_dummy;
	DropShadowFilter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.filters.DropShadowFilter",58,8b,e4,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DropShadowFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &DropShadowFilter_obj::__SetStatic;
	__mClass->mMarkFunc = DropShadowFilter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DropShadowFilter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DropShadowFilter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DropShadowFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DropShadowFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropShadowFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropShadowFilter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DropShadowFilter_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_786269b8d678908e_69_boot)
HXDLIN(  69)		_hx___hideShader =  ::openfl::filters::_DropShadowFilter::HideShader_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace filters
