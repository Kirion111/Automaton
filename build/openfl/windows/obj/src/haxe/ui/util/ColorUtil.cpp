#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_util_ColorUtil
#include <haxe/ui/util/ColorUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_HSL
#include <haxe/ui/util/HSL.h>
#endif
#ifndef INCLUDED_haxe_ui_util_HSV
#include <haxe/ui/util/HSV.h>
#endif
#ifndef INCLUDED_haxe_ui_util_RGBF
#include <haxe/ui/util/RGBF.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <haxe/ui/util/_Color/Color_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_27_toHSL,"haxe.ui.util.ColorUtil","toHSL",0xb22e41a3,"haxe.ui.util.ColorUtil.toHSL","haxe/ui/util/ColorUtil.hx",27,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_60_fromHSL,"haxe.ui.util.ColorUtil","fromHSL",0xbe2f3254,"haxe.ui.util.ColorUtil.fromHSL","haxe/ui/util/ColorUtil.hx",60,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_56_fromHSL,"haxe.ui.util.ColorUtil","fromHSL",0xbe2f3254,"haxe.ui.util.ColorUtil.fromHSL","haxe/ui/util/ColorUtil.hx",56,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_80_toHSV,"haxe.ui.util.ColorUtil","toHSV",0xb22e41ad,"haxe.ui.util.ColorUtil.toHSV","haxe/ui/util/ColorUtil.hx",80,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_116_fromHSV,"haxe.ui.util.ColorUtil","fromHSV",0xbe2f325e,"haxe.ui.util.ColorUtil.fromHSV","haxe/ui/util/ColorUtil.hx",116,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_148_hsvToRGBF,"haxe.ui.util.ColorUtil","hsvToRGBF",0x8552c4fc,"haxe.ui.util.ColorUtil.hsvToRGBF","haxe/ui/util/ColorUtil.hx",148,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_180_rgbToGray,"haxe.ui.util.ColorUtil","rgbToGray",0xcd91a1c8,"haxe.ui.util.ColorUtil.rgbToGray","haxe/ui/util/ColorUtil.hx",180,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_185_rgbfToHSV,"haxe.ui.util.ColorUtil","rgbfToHSV",0x8e7d14b4,"haxe.ui.util.ColorUtil.rgbfToHSV","haxe/ui/util/ColorUtil.hx",185,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_228_buildColorArray,"haxe.ui.util.ColorUtil","buildColorArray",0xd3eefda1,"haxe.ui.util.ColorUtil.buildColorArray","haxe/ui/util/ColorUtil.hx",228,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_260_parseColor,"haxe.ui.util.ColorUtil","parseColor",0xecbfc9b3,"haxe.ui.util.ColorUtil.parseColor","haxe/ui/util/ColorUtil.hx",260,0x8c838474)
namespace haxe{
namespace ui{
namespace util{

void ColorUtil_obj::__construct() { }

Dynamic ColorUtil_obj::__CreateEmpty() { return new ColorUtil_obj; }

void *ColorUtil_obj::_hx_vtable = 0;

Dynamic ColorUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorUtil_obj > _hx_result = new ColorUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ColorUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c16ac69;
}

 ::haxe::ui::util::HSL ColorUtil_obj::toHSL(int color){
            	HX_GC_STACKFRAME(&_hx_pos_2b6d238d8209c151_27_toHSL)
HXLINE(  28)		Float r = (( (Float)(((color >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE(  29)		Float g = (( (Float)(((color >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE(  30)		Float b = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE(  32)		::Array< Float > numbers = ::Array_obj< Float >::__new(3)->init(0,r)->init(1,g)->init(2,b);
HXDLIN(  32)		Float r1 = numbers->__get(0);
HXDLIN(  32)		{
HXLINE(  32)			int _g = 0;
HXDLIN(  32)			while((_g < numbers->length)){
HXLINE(  32)				Float n = numbers->__get(_g);
HXDLIN(  32)				_g = (_g + 1);
HXDLIN(  32)				if ((n < r1)) {
HXLINE(  32)					r1 = n;
            				}
            			}
            		}
HXDLIN(  32)		Float min = r1;
HXLINE(  33)		::Array< Float > numbers1 = ::Array_obj< Float >::__new(3)->init(0,r)->init(1,g)->init(2,b);
HXDLIN(  33)		Float r2 = numbers1->__get(0);
HXDLIN(  33)		{
HXLINE(  33)			int _g1 = 0;
HXDLIN(  33)			while((_g1 < numbers1->length)){
HXLINE(  33)				Float n = numbers1->__get(_g1);
HXDLIN(  33)				_g1 = (_g1 + 1);
HXDLIN(  33)				if ((n > r2)) {
HXLINE(  33)					r2 = n;
            				}
            			}
            		}
HXDLIN(  33)		Float max = r2;
HXLINE(  34)		Float delta = (max - min);
HXLINE(  35)		Float h = ( (Float)(0) );
HXLINE(  36)		Float s = ( (Float)(0) );
HXLINE(  37)		Float l = ((max + min) / ( (Float)(2) ));
HXLINE(  39)		if ((delta == ((Float)0.0))) {
HXLINE(  40)			h = ((Float)0.0);
HXDLIN(  40)			s = h;
            		}
            		else {
HXLINE(  42)			if ((l < ((Float)0.5))) {
HXLINE(  42)				s = (delta / (max + min));
            			}
            			else {
HXLINE(  42)				s = (delta / ((( (Float)(2) ) - max) - min));
            			}
HXLINE(  43)			if ((r == max)) {
HXLINE(  44)				int h1;
HXDLIN(  44)				if ((g < b)) {
HXLINE(  44)					h1 = 6;
            				}
            				else {
HXLINE(  44)					h1 = 0;
            				}
HXDLIN(  44)				h = (((g - b) / delta) + h1);
            			}
            			else {
HXLINE(  45)				if ((g == max)) {
HXLINE(  46)					h = (((b - r) / delta) + 2);
            				}
            				else {
HXLINE(  48)					h = (((r - g) / delta) + 4);
            				}
            			}
HXLINE(  50)			h = (h * ( (Float)(60) ));
            		}
HXLINE(  53)		return  ::haxe::ui::util::HSL_obj::__alloc( HX_CTX ,( (Float)(::Math_obj::round(h)) ),(s * ( (Float)(100) )),(l * ( (Float)(100) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorUtil_obj,toHSL,return )

int ColorUtil_obj::fromHSL(Float hue,Float saturation,Float luminosity){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(3)
            		Float _hx_run(Float d,Float s,Float l){
            			HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_60_fromHSL)
HXLINE(  61)			Float m2;
HXDLIN(  61)			if ((l <= ((Float)0.5))) {
HXLINE(  61)				m2 = (l * (1 + s));
            			}
            			else {
HXLINE(  61)				m2 = ((l + s) - (l * s));
            			}
HXLINE(  62)			Float m1 = ((( (Float)(2) ) * l) - m2);
HXLINE(  64)			Float v = d;
HXDLIN(  64)			v = ::hx::Mod(v,360);
HXDLIN(  64)			if ((v < 0)) {
HXLINE(  64)				v = (v + 360);
            			}
HXDLIN(  64)			d = v;
HXLINE(  65)			if ((d < 60)) {
HXLINE(  66)				return (m1 + (((m2 - m1) * d) / ( (Float)(60) )));
            			}
            			else {
HXLINE(  67)				if ((d < 180)) {
HXLINE(  68)					return m2;
            				}
            				else {
HXLINE(  69)					if ((d < 240)) {
HXLINE(  70)						return (m1 + (((m2 - m1) * (( (Float)(240) ) - d)) / ( (Float)(60) )));
            					}
            				}
            			}
HXLINE(  72)			return m1;
            		}
            		HX_END_LOCAL_FUNC3(return)

            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_56_fromHSL)
HXLINE(  57)		saturation = (saturation / ( (Float)(100) ));
HXLINE(  58)		luminosity = (luminosity / ( (Float)(100) ));
HXLINE(  60)		 ::Dynamic _c =  ::Dynamic(new _hx_Closure_0());
HXLINE(  74)		int _hx_tmp = ::Math_obj::round((( (Float)(_c((hue + 120),saturation,luminosity)) ) * ( (Float)(255) )));
HXLINE(  75)		int _hx_tmp1 = ::Math_obj::round((( (Float)(_c(hue,saturation,luminosity)) ) * ( (Float)(255) )));
HXLINE(  74)		return ::haxe::ui::util::_Color::Color_Impl__obj::fromComponents(_hx_tmp,_hx_tmp1,::Math_obj::round((( (Float)(_c((hue - ( (Float)(120) )),saturation,luminosity)) ) * ( (Float)(255) ))),255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorUtil_obj,fromHSL,return )

 ::haxe::ui::util::HSV ColorUtil_obj::toHSV(int color){
            	HX_GC_STACKFRAME(&_hx_pos_2b6d238d8209c151_80_toHSV)
HXLINE(  81)		Float r = (( (Float)(((color >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE(  82)		Float g = (( (Float)(((color >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE(  83)		Float b = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE(  85)		::Array< Float > numbers = ::Array_obj< Float >::__new(3)->init(0,r)->init(1,g)->init(2,b);
HXDLIN(  85)		Float r1 = numbers->__get(0);
HXDLIN(  85)		{
HXLINE(  85)			int _g = 0;
HXDLIN(  85)			while((_g < numbers->length)){
HXLINE(  85)				Float n = numbers->__get(_g);
HXDLIN(  85)				_g = (_g + 1);
HXDLIN(  85)				if ((n < r1)) {
HXLINE(  85)					r1 = n;
            				}
            			}
            		}
HXDLIN(  85)		Float min = r1;
HXLINE(  86)		::Array< Float > numbers1 = ::Array_obj< Float >::__new(3)->init(0,r)->init(1,g)->init(2,b);
HXDLIN(  86)		Float r2 = numbers1->__get(0);
HXDLIN(  86)		{
HXLINE(  86)			int _g1 = 0;
HXDLIN(  86)			while((_g1 < numbers1->length)){
HXLINE(  86)				Float n = numbers1->__get(_g1);
HXDLIN(  86)				_g1 = (_g1 + 1);
HXDLIN(  86)				if ((n > r2)) {
HXLINE(  86)					r2 = n;
            				}
            			}
            		}
HXDLIN(  86)		Float max = r2;
HXLINE(  87)		Float delta = (max - min);
HXLINE(  88)		Float h = ( (Float)(0) );
HXLINE(  89)		Float s = ( (Float)(0) );
HXLINE(  90)		Float v = max;
HXLINE(  92)		if ((delta != 0)) {
HXLINE(  93)			s = (delta / max);
            		}
            		else {
HXLINE(  95)			s = ( (Float)(0) );
HXLINE(  96)			h = ( (Float)(0) );
HXLINE(  97)			return  ::haxe::ui::util::HSV_obj::__alloc( HX_CTX ,::Math_obj::fround(h),(s * ( (Float)(100) )),(v * ( (Float)(100) )));
            		}
HXLINE( 100)		if ((r == max)) {
HXLINE( 101)			h = ((g - b) / delta);
            		}
            		else {
HXLINE( 102)			if ((g == max)) {
HXLINE( 103)				h = (2 + ((b - r) / delta));
            			}
            			else {
HXLINE( 105)				h = (4 + ((r - g) / delta));
            			}
            		}
HXLINE( 108)		h = (h * ( (Float)(60) ));
HXLINE( 109)		if ((h < 0)) {
HXLINE( 110)			h = (h + 360);
            		}
HXLINE( 113)		return  ::haxe::ui::util::HSV_obj::__alloc( HX_CTX ,::Math_obj::fround(h),(s * ( (Float)(100) )),(v * ( (Float)(100) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorUtil_obj,toHSV,return )

int ColorUtil_obj::fromHSV(Float hue,Float saturation,Float value){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_116_fromHSV)
HXLINE( 117)		if ((saturation == 0)) {
HXLINE( 118)			int _hx_tmp = ::Std_obj::_hx_int(value);
HXDLIN( 118)			int _hx_tmp1 = ::Std_obj::_hx_int(value);
HXDLIN( 118)			return ::haxe::ui::util::_Color::Color_Impl__obj::fromComponents(_hx_tmp,_hx_tmp1,::Std_obj::_hx_int(value),255);
            		}
HXLINE( 121)		saturation = (saturation / ( (Float)(100) ));
HXLINE( 122)		value = (value / ( (Float)(100) ));
HXLINE( 124)		Float r;
HXDLIN( 124)		Float g;
HXDLIN( 124)		Float b;
HXLINE( 125)		Float h = (hue / ( (Float)(60) ));
HXLINE( 124)		int i = ::Math_obj::floor(h);
HXDLIN( 124)		Float f = (h - ( (Float)(i) ));
HXDLIN( 124)		Float p = (value * (( (Float)(1) ) - saturation));
HXDLIN( 124)		Float q = (value * (( (Float)(1) ) - (f * saturation)));
HXDLIN( 124)		Float t = (value * (( (Float)(1) ) - ((( (Float)(1) ) - f) * saturation)));
HXLINE( 133)		switch((int)(i)){
            			case (int)0: {
HXLINE( 134)				r = value;
HXDLIN( 134)				g = t;
HXDLIN( 134)				b = p;
            			}
            			break;
            			case (int)1: {
HXLINE( 135)				r = q;
HXDLIN( 135)				g = value;
HXDLIN( 135)				b = p;
            			}
            			break;
            			case (int)2: {
HXLINE( 136)				r = p;
HXDLIN( 136)				g = value;
HXDLIN( 136)				b = t;
            			}
            			break;
            			case (int)3: {
HXLINE( 137)				r = p;
HXDLIN( 137)				g = q;
HXDLIN( 137)				b = value;
            			}
            			break;
            			case (int)4: {
HXLINE( 138)				r = t;
HXDLIN( 138)				g = p;
HXDLIN( 138)				b = value;
            			}
            			break;
            			default:{
HXLINE( 139)				r = value;
HXDLIN( 139)				g = p;
HXDLIN( 139)				b = q;
            			}
            		}
HXLINE( 142)		return ::haxe::ui::util::_Color::Color_Impl__obj::fromComponents(::Math_obj::round((r * ( (Float)(255) ))),::Math_obj::round((g * ( (Float)(255) ))),::Math_obj::round((b * ( (Float)(255) ))),255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorUtil_obj,fromHSV,return )

 ::haxe::ui::util::RGBF ColorUtil_obj::hsvToRGBF(Float hue,Float saturation,Float value){
            	HX_GC_STACKFRAME(&_hx_pos_2b6d238d8209c151_148_hsvToRGBF)
HXLINE( 149)		bool _hx_tmp;
HXDLIN( 149)		bool _hx_tmp1;
HXDLIN( 149)		if ((hue == 0)) {
HXLINE( 149)			_hx_tmp1 = (saturation == 0);
            		}
            		else {
HXLINE( 149)			_hx_tmp1 = false;
            		}
HXDLIN( 149)		if (_hx_tmp1) {
HXLINE( 149)			_hx_tmp = (value == 100);
            		}
            		else {
HXLINE( 149)			_hx_tmp = false;
            		}
HXLINE( 152)		bool _hx_tmp2 = (saturation == 0);
HXLINE( 156)		saturation = (saturation / ( (Float)(100) ));
HXLINE( 157)		value = (value / ( (Float)(100) ));
HXLINE( 159)		Float r;
HXDLIN( 159)		Float g;
HXDLIN( 159)		Float b;
HXLINE( 160)		Float h = (hue / ( (Float)(60) ));
HXLINE( 159)		int i = ::Math_obj::floor(h);
HXDLIN( 159)		Float f = (h - ( (Float)(i) ));
HXDLIN( 159)		Float p = (value * (( (Float)(1) ) - saturation));
HXDLIN( 159)		Float q = (value * (( (Float)(1) ) - (f * saturation)));
HXDLIN( 159)		Float t = (value * (( (Float)(1) ) - ((( (Float)(1) ) - f) * saturation)));
HXLINE( 168)		switch((int)(i)){
            			case (int)0: {
HXLINE( 169)				r = value;
HXDLIN( 169)				g = t;
HXDLIN( 169)				b = p;
            			}
            			break;
            			case (int)1: {
HXLINE( 170)				r = q;
HXDLIN( 170)				g = value;
HXDLIN( 170)				b = p;
            			}
            			break;
            			case (int)2: {
HXLINE( 171)				r = p;
HXDLIN( 171)				g = value;
HXDLIN( 171)				b = t;
            			}
            			break;
            			case (int)3: {
HXLINE( 172)				r = p;
HXDLIN( 172)				g = q;
HXDLIN( 172)				b = value;
            			}
            			break;
            			case (int)4: {
HXLINE( 173)				r = t;
HXDLIN( 173)				g = p;
HXDLIN( 173)				b = value;
            			}
            			break;
            			default:{
HXLINE( 174)				r = value;
HXDLIN( 174)				g = p;
HXDLIN( 174)				b = q;
            			}
            		}
HXLINE( 177)		return  ::haxe::ui::util::RGBF_obj::__alloc( HX_CTX ,(r * ( (Float)(255) )),(g * ( (Float)(255) )),(b * ( (Float)(255) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorUtil_obj,hsvToRGBF,return )

int ColorUtil_obj::rgbToGray(Float r,Float g,Float b){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_180_rgbToGray)
HXLINE( 181)		Float g1 = (((((Float)0.3) * r) + (((Float)0.59) * g)) + (((Float)0.11) * b));
HXLINE( 182)		return ::Math_obj::round(g1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorUtil_obj,rgbToGray,return )

 ::haxe::ui::util::HSV ColorUtil_obj::rgbfToHSV(Float r,Float g,Float b){
            	HX_GC_STACKFRAME(&_hx_pos_2b6d238d8209c151_185_rgbfToHSV)
HXLINE( 186)		bool _hx_tmp;
HXDLIN( 186)		bool _hx_tmp1;
HXDLIN( 186)		if ((::Math_obj::fround(r) == 255)) {
HXLINE( 186)			_hx_tmp1 = (::Math_obj::fround(g) == 255);
            		}
            		else {
HXLINE( 186)			_hx_tmp1 = false;
            		}
HXDLIN( 186)		if (_hx_tmp1) {
HXLINE( 186)			_hx_tmp = (::Math_obj::fround(b) == 255);
            		}
            		else {
HXLINE( 186)			_hx_tmp = false;
            		}
HXLINE( 189)		Float r1 = (r / ( (Float)(255) ));
HXLINE( 190)		Float g1 = (g / ( (Float)(255) ));
HXLINE( 191)		Float b1 = (b / ( (Float)(255) ));
HXLINE( 193)		::Array< Float > numbers = ::Array_obj< Float >::__new(3)->init(0,r1)->init(1,g1)->init(2,b1);
HXDLIN( 193)		Float r2 = numbers->__get(0);
HXDLIN( 193)		{
HXLINE( 193)			int _g = 0;
HXDLIN( 193)			while((_g < numbers->length)){
HXLINE( 193)				Float n = numbers->__get(_g);
HXDLIN( 193)				_g = (_g + 1);
HXDLIN( 193)				if ((n < r2)) {
HXLINE( 193)					r2 = n;
            				}
            			}
            		}
HXDLIN( 193)		Float min = r2;
HXLINE( 194)		::Array< Float > numbers1 = ::Array_obj< Float >::__new(3)->init(0,r1)->init(1,g1)->init(2,b1);
HXDLIN( 194)		Float r3 = numbers1->__get(0);
HXDLIN( 194)		{
HXLINE( 194)			int _g1 = 0;
HXDLIN( 194)			while((_g1 < numbers1->length)){
HXLINE( 194)				Float n = numbers1->__get(_g1);
HXDLIN( 194)				_g1 = (_g1 + 1);
HXDLIN( 194)				if ((n > r3)) {
HXLINE( 194)					r3 = n;
            				}
            			}
            		}
HXDLIN( 194)		Float max = r3;
HXLINE( 195)		Float delta = (max - min);
HXLINE( 196)		Float h = ( (Float)(0) );
HXLINE( 197)		Float s = ( (Float)(0) );
HXLINE( 198)		Float v = max;
HXLINE( 200)		if ((delta != 0)) {
HXLINE( 201)			s = (delta / max);
            		}
            		else {
HXLINE( 203)			s = ( (Float)(0) );
HXLINE( 204)			h = ( (Float)(0) );
HXLINE( 205)			return  ::haxe::ui::util::HSV_obj::__alloc( HX_CTX ,h,(s * ( (Float)(100) )),(v * ( (Float)(100) )));
            		}
HXLINE( 208)		if ((r1 == max)) {
HXLINE( 209)			h = ((g1 - b1) / delta);
            		}
            		else {
HXLINE( 210)			if ((g1 == max)) {
HXLINE( 211)				h = (2 + ((b1 - r1) / delta));
            			}
            			else {
HXLINE( 213)				h = (4 + ((r1 - g1) / delta));
            			}
            		}
HXLINE( 216)		h = (h * ( (Float)(60) ));
HXLINE( 217)		if ((h < 0)) {
HXLINE( 218)			h = (h + 360);
            		}
HXLINE( 221)		bool _hx_tmp2;
HXDLIN( 221)		bool _hx_tmp3;
HXDLIN( 221)		if ((::Math_obj::fround(r1) == 255)) {
HXLINE( 221)			_hx_tmp3 = (::Math_obj::fround(g1) == 255);
            		}
            		else {
HXLINE( 221)			_hx_tmp3 = false;
            		}
HXDLIN( 221)		if (_hx_tmp3) {
HXLINE( 221)			_hx_tmp2 = (::Math_obj::fround(b1) == 255);
            		}
            		else {
HXLINE( 221)			_hx_tmp2 = false;
            		}
HXDLIN( 221)		if (_hx_tmp2) {
HXLINE( 222)			return  ::haxe::ui::util::HSV_obj::__alloc( HX_CTX ,h,( (Float)(0) ),( (Float)(100) ));
            		}
HXLINE( 225)		return  ::haxe::ui::util::HSV_obj::__alloc( HX_CTX ,h,(s * ( (Float)(100) )),(v * ( (Float)(100) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorUtil_obj,rgbfToHSV,return )

::Array< int > ColorUtil_obj::buildColorArray(int startColor,int endColor,Float size){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_228_buildColorArray)
HXLINE( 229)		::Array< int > array = ::Array_obj< int >::__new(0);
HXLINE( 231)		int r1 = ((startColor >> 16) & 255);
HXLINE( 232)		int g1 = ((startColor >> 8) & 255);
HXLINE( 233)		int b1 = (startColor & 255);
HXLINE( 234)		int r2 = ((endColor >> 16) & 255);
HXLINE( 235)		int g2 = ((endColor >> 8) & 255);
HXLINE( 236)		int b2 = (endColor & 255);
HXLINE( 237)		int rd = (r2 - r1);
HXLINE( 238)		int gd = (g2 - g1);
HXLINE( 239)		int bd = (b2 - b1);
HXLINE( 240)		Float ri = (( (Float)(rd) ) / (size - ( (Float)(1) )));
HXLINE( 241)		Float gi = (( (Float)(gd) ) / (size - ( (Float)(1) )));
HXLINE( 242)		Float bi = (( (Float)(bd) ) / (size - ( (Float)(1) )));
HXLINE( 244)		Float r = ( (Float)(r1) );
HXLINE( 245)		Float g = ( (Float)(g1) );
HXLINE( 246)		Float b = ( (Float)(b1) );
HXLINE( 247)		int c = 0;
HXLINE( 248)		{
HXLINE( 248)			int _g = 0;
HXDLIN( 248)			int _g1 = ( (int)(size) );
HXDLIN( 248)			while((_g < _g1)){
HXLINE( 248)				_g = (_g + 1);
HXDLIN( 248)				int n = (_g - 1);
HXLINE( 249)				c = ((((::Math_obj::round(r) & 255) << 16) | ((::Math_obj::round(g) & 255) << 8)) | (::Math_obj::round(b) & 255));
HXLINE( 250)				array->push(::haxe::ui::util::_Color::Color_Impl__obj::toInt(c));
HXLINE( 252)				r = (r + ri);
HXLINE( 253)				g = (g + gi);
HXLINE( 254)				b = (b + bi);
            			}
            		}
HXLINE( 257)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorUtil_obj,buildColorArray,return )

int ColorUtil_obj::parseColor(::String s){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_260_parseColor)
HXLINE( 261)		if (::StringTools_obj::startsWith(s,HX_("#",23,00,00,00))) {
HXLINE( 262)			s = s.substring(1,s.length);
            		}
            		else {
HXLINE( 263)			if (::StringTools_obj::startsWith(s,HX_("0x",48,2a,00,00))) {
HXLINE( 264)				s = s.substring(2,s.length);
            			}
            		}
HXLINE( 266)		return ( (int)(::Std_obj::parseInt((HX_("0x",48,2a,00,00) + s))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorUtil_obj,parseColor,return )


ColorUtil_obj::ColorUtil_obj()
{
}

bool ColorUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toHSL") ) { outValue = toHSL_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHSV") ) { outValue = toHSV_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromHSL") ) { outValue = fromHSL_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromHSV") ) { outValue = fromHSV_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hsvToRGBF") ) { outValue = hsvToRGBF_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rgbToGray") ) { outValue = rgbToGray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rgbfToHSV") ) { outValue = rgbfToHSV_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseColor") ) { outValue = parseColor_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buildColorArray") ) { outValue = buildColorArray_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ColorUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ColorUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ColorUtil_obj::__mClass;

static ::String ColorUtil_obj_sStaticFields[] = {
	HX_("toHSL",46,e4,10,14),
	HX_("fromHSL",b7,03,fa,57),
	HX_("toHSV",50,e4,10,14),
	HX_("fromHSV",c1,03,fa,57),
	HX_("hsvToRGBF",1f,f5,7e,44),
	HX_("rgbToGray",eb,d1,bd,8c),
	HX_("rgbfToHSV",d7,44,a9,4d),
	HX_("buildColorArray",04,6a,ce,f1),
	HX_("parseColor",30,b8,3d,74),
	::String(null())
};

void ColorUtil_obj::__register()
{
	ColorUtil_obj _hx_dummy;
	ColorUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.ColorUtil",0b,2a,8b,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ColorUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ColorUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
