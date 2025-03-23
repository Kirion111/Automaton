#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentContainer
#include <haxe/ui/core/IComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_CssFunctions
#include <haxe/ui/styles/CssFunctions.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Dimension
#include <haxe/ui/styles/Dimension.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_ValueTools
#include <haxe/ui/styles/ValueTools.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <haxe/ui/util/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_13_parse,"haxe.ui.styles.ValueTools","parse",0xa44338c9,"haxe.ui.styles.ValueTools.parse","haxe/ui/styles/ValueTools.hx",13,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_84_paramsSplitter,"haxe.ui.styles.ValueTools","paramsSplitter",0xe2923957,"haxe.ui.styles.ValueTools.paramsSplitter","haxe/ui/styles/ValueTools.hx",84,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_106_extractCalls,"haxe.ui.styles.ValueTools","extractCalls",0x7fc6b73e,"haxe.ui.styles.ValueTools.extractCalls","haxe/ui/styles/ValueTools.hx",106,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_149_compositeParts,"haxe.ui.styles.ValueTools","compositeParts",0xe7c30c43,"haxe.ui.styles.ValueTools.compositeParts","haxe/ui/styles/ValueTools.hx",149,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_162_composite,"haxe.ui.styles.ValueTools","composite",0x23a1bb9d,"haxe.ui.styles.ValueTools.composite","haxe/ui/styles/ValueTools.hx",162,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_180_isNum,"haxe.ui.styles.ValueTools","isNum",0xa83fb112,"haxe.ui.styles.ValueTools.isNum","haxe/ui/styles/ValueTools.hx",180,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_195_parseColor,"haxe.ui.styles.ValueTools","parseColor",0x40572fda,"haxe.ui.styles.ValueTools.parseColor","haxe/ui/styles/ValueTools.hx",195,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_199_validColor,"haxe.ui.styles.ValueTools","validColor",0x64b55271,"haxe.ui.styles.ValueTools.validColor","haxe/ui/styles/ValueTools.hx",199,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_202_time,"haxe.ui.styles.ValueTools","time",0x4f2bc837,"haxe.ui.styles.ValueTools.time","haxe/ui/styles/ValueTools.hx",202,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_222_variant,"haxe.ui.styles.ValueTools","variant",0x98fbba9b,"haxe.ui.styles.ValueTools.variant","haxe/ui/styles/ValueTools.hx",222,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_241_string,"haxe.ui.styles.ValueTools","string",0x3a36037b,"haxe.ui.styles.ValueTools.string","haxe/ui/styles/ValueTools.hx",241,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_258_bool,"haxe.ui.styles.ValueTools","bool",0x434a8054,"haxe.ui.styles.ValueTools.bool","haxe/ui/styles/ValueTools.hx",258,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_271_none,"haxe.ui.styles.ValueTools","none",0x4b390ee2,"haxe.ui.styles.ValueTools.none","haxe/ui/styles/ValueTools.hx",271,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_284_int,"haxe.ui.styles.ValueTools","int",0x83314405,"haxe.ui.styles.ValueTools.int","haxe/ui/styles/ValueTools.hx",284,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_303_float,"haxe.ui.styles.ValueTools","float",0xe9846e32,"haxe.ui.styles.ValueTools.float","haxe/ui/styles/ValueTools.hx",303,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_320_any,"haxe.ui.styles.ValueTools","any",0x832b3202,"haxe.ui.styles.ValueTools.any","haxe/ui/styles/ValueTools.hx",320,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_341_array,"haxe.ui.styles.ValueTools","array",0x0c7d162f,"haxe.ui.styles.ValueTools.array","haxe/ui/styles/ValueTools.hx",341,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_354_percent,"haxe.ui.styles.ValueTools","percent",0x34f424db,"haxe.ui.styles.ValueTools.percent","haxe/ui/styles/ValueTools.hx",354,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_372_constant,"haxe.ui.styles.ValueTools","constant",0x7fcf1a8e,"haxe.ui.styles.ValueTools.constant","haxe/ui/styles/ValueTools.hx",372,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_385_calcDimension,"haxe.ui.styles.ValueTools","calcDimension",0xf6caf6a7,"haxe.ui.styles.ValueTools.calcDimension","haxe/ui/styles/ValueTools.hx",385,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_416_calcEasing,"haxe.ui.styles.ValueTools","calcEasing",0x09456eca,"haxe.ui.styles.ValueTools.calcEasing","haxe/ui/styles/ValueTools.hx",416,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_437_call,"haxe.ui.styles.ValueTools","call",0x43e914c8,"haxe.ui.styles.ValueTools.call","haxe/ui/styles/ValueTools.hx",437,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_11_boot,"haxe.ui.styles.ValueTools","boot",0x434a805c,"haxe.ui.styles.ValueTools.boot","haxe/ui/styles/ValueTools.hx",11,0x39dab2b9)
namespace haxe{
namespace ui{
namespace styles{

void ValueTools_obj::__construct() { }

Dynamic ValueTools_obj::__CreateEmpty() { return new ValueTools_obj; }

void *ValueTools_obj::_hx_vtable = 0;

Dynamic ValueTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ValueTools_obj > _hx_result = new ValueTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ValueTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ea297a6;
}

 ::EReg ValueTools_obj::timeEReg;

 ::haxe::ui::styles::Value ValueTools_obj::parse(::String s){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_13_parse)
HXLINE(  14)		 ::haxe::ui::styles::Value v = null();
HXLINE(  16)		bool hasSpace = (s.indexOf(HX_(" ",20,00,00,00),null()) != -1);
HXLINE(  18)		bool _hx_tmp;
HXDLIN(  18)		if ((::StringTools_obj::endsWith(s,HX_("%",25,00,00,00)) == true)) {
HXLINE(  18)			_hx_tmp = (hasSpace == false);
            		}
            		else {
HXLINE(  18)			_hx_tmp = false;
            		}
HXDLIN(  18)		if (_hx_tmp) {
HXLINE(  19)			v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::PERCENT(::Std_obj::parseFloat(s)));
            		}
            		else {
HXLINE(  20)			bool _hx_tmp;
HXDLIN(  20)			if ((::StringTools_obj::endsWith(s,HX_("px",08,62,00,00)) == true)) {
HXLINE(  20)				_hx_tmp = (hasSpace == false);
            			}
            			else {
HXLINE(  20)				_hx_tmp = false;
            			}
HXDLIN(  20)			if (_hx_tmp) {
HXLINE(  21)				v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::PX(::Std_obj::parseFloat(s)));
            			}
            			else {
HXLINE(  22)				bool _hx_tmp;
HXDLIN(  22)				if ((::StringTools_obj::endsWith(s,HX_("vw",41,67,00,00)) == true)) {
HXLINE(  22)					_hx_tmp = (hasSpace == false);
            				}
            				else {
HXLINE(  22)					_hx_tmp = false;
            				}
HXDLIN(  22)				if (_hx_tmp) {
HXLINE(  23)					v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::VW(::Std_obj::parseFloat(s)));
            				}
            				else {
HXLINE(  24)					bool _hx_tmp;
HXDLIN(  24)					if ((::StringTools_obj::endsWith(s,HX_("vh",32,67,00,00)) == true)) {
HXLINE(  24)						_hx_tmp = (hasSpace == false);
            					}
            					else {
HXLINE(  24)						_hx_tmp = false;
            					}
HXDLIN(  24)					if (_hx_tmp) {
HXLINE(  25)						v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::VH(::Std_obj::parseFloat(s)));
            					}
            					else {
HXLINE(  26)						bool _hx_tmp;
HXDLIN(  26)						if ((::StringTools_obj::endsWith(s,HX_("rem",5a,d9,56,00)) == true)) {
HXLINE(  26)							_hx_tmp = (hasSpace == false);
            						}
            						else {
HXLINE(  26)							_hx_tmp = false;
            						}
HXDLIN(  26)						if (_hx_tmp) {
HXLINE(  27)							v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::REM(::Std_obj::parseFloat(s)));
            						}
            						else {
HXLINE(  28)							if (::haxe::ui::util::_Color::Color_Impl__obj::isValidColor(s)) {
HXLINE(  29)								v = ::haxe::ui::styles::Value_obj::VColor(::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromString(s)));
            							}
            							else {
HXLINE(  30)								if ((s == HX_("none",b8,12,0a,49))) {
HXLINE(  31)									v = ::haxe::ui::styles::Value_obj::VNone_dyn();
            								}
            								else {
HXLINE(  32)									bool _hx_tmp;
HXDLIN(  32)									if (::StringTools_obj::startsWith(s,HX_("\"",22,00,00,00))) {
HXLINE(  32)										_hx_tmp = ::StringTools_obj::endsWith(s,HX_("\"",22,00,00,00));
            									}
            									else {
HXLINE(  32)										_hx_tmp = false;
            									}
HXDLIN(  32)									if (_hx_tmp) {
HXLINE(  33)										v = ::haxe::ui::styles::Value_obj::VString(s.substr(1,(s.length - 2)));
            									}
            									else {
HXLINE(  34)										bool _hx_tmp;
HXDLIN(  34)										if (::StringTools_obj::startsWith(s,HX_("'",27,00,00,00))) {
HXLINE(  34)											_hx_tmp = ::StringTools_obj::endsWith(s,HX_("'",27,00,00,00));
            										}
            										else {
HXLINE(  34)											_hx_tmp = false;
            										}
HXDLIN(  34)										if (_hx_tmp) {
HXLINE(  35)											v = ::haxe::ui::styles::Value_obj::VString(s.substr(1,(s.length - 2)));
            										}
            										else {
HXLINE(  36)											if ((::haxe::ui::styles::ValueTools_obj::isNum(s) == true)) {
HXLINE(  37)												v = ::haxe::ui::styles::Value_obj::VNumber(::Std_obj::parseFloat(s));
            											}
            											else {
HXLINE(  38)												bool _hx_tmp;
HXDLIN(  38)												if ((s != HX_("true",4e,a7,03,4d))) {
HXLINE(  38)													_hx_tmp = (s == HX_("false",a3,35,4f,fb));
            												}
            												else {
HXLINE(  38)													_hx_tmp = true;
            												}
HXDLIN(  38)												if (_hx_tmp) {
HXLINE(  39)													v = ::haxe::ui::styles::Value_obj::VBool((s == HX_("true",4e,a7,03,4d)));
            												}
            												else {
HXLINE(  40)													if (::haxe::ui::styles::ValueTools_obj::timeEReg->match(s)) {
HXLINE(  41)														Float v1 = ::Std_obj::parseFloat(::haxe::ui::styles::ValueTools_obj::timeEReg->matched(1));
HXDLIN(  41)														v = ::haxe::ui::styles::Value_obj::VTime(v1,::haxe::ui::styles::ValueTools_obj::timeEReg->matched(2));
            													}
            													else {
HXLINE(  43)														if ((s.indexOf(HX_("(",28,00,00,00),null()) != -1)) {
HXLINE(  44)															::Array< ::String > calls = ::haxe::ui::styles::ValueTools_obj::extractCalls(s);
HXLINE(  45)															if ((calls->length == 1)) {
HXLINE(  46)																int n = s.indexOf(HX_("(",28,00,00,00),null());
HXLINE(  47)																::String f = s.substr(0,n);
HXLINE(  48)																::String params = s.substr((n + 1),((s.length - n) - 2));
HXLINE(  49)																if ((f == HX_("calc",95,18,ba,41))) {
HXLINE(  50)																	params = ((HX_("'",27,00,00,00) + params) + HX_("'",27,00,00,00));
            																}
HXLINE(  52)																::Array< ::Dynamic> vl = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  53)																{
HXLINE(  53)																	int _g = 0;
HXDLIN(  53)																	::Array< ::String > _g1 = ::haxe::ui::styles::ValueTools_obj::paramsSplitter(params);
HXDLIN(  53)																	while((_g < _g1->length)){
HXLINE(  53)																		::String p = _g1->__get(_g);
HXDLIN(  53)																		_g = (_g + 1);
HXLINE(  54)																		p = ::StringTools_obj::trim(p);
HXLINE(  55)																		vl->push(::haxe::ui::styles::ValueTools_obj::parse(p));
            																	}
            																}
HXLINE(  57)																v = ::haxe::ui::styles::Value_obj::VCall(f,vl);
            															}
            															else {
HXLINE(  59)																::Array< ::Dynamic> vl = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  60)																{
HXLINE(  60)																	int _g = 0;
HXDLIN(  60)																	while((_g < calls->length)){
HXLINE(  60)																		::String a = calls->__get(_g);
HXDLIN(  60)																		_g = (_g + 1);
HXLINE(  61)																		a = ::StringTools_obj::trim(a);
HXLINE(  62)																		vl->push(::haxe::ui::styles::ValueTools_obj::parse(a));
            																	}
            																}
HXLINE(  64)																v = ::haxe::ui::styles::Value_obj::VComposite(vl);
            															}
            														}
            														else {
HXLINE(  67)															::Array< ::String > arr = s.split(HX_(" ",20,00,00,00));
HXLINE(  68)															if ((arr->length == 1)) {
HXLINE(  69)																v = ::haxe::ui::styles::Value_obj::VConstant(s);
            															}
            															else {
HXLINE(  71)																::Array< ::Dynamic> vl = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  72)																{
HXLINE(  72)																	int _g = 0;
HXDLIN(  72)																	while((_g < arr->length)){
HXLINE(  72)																		::String a = arr->__get(_g);
HXDLIN(  72)																		_g = (_g + 1);
HXLINE(  73)																		a = ::StringTools_obj::trim(a);
HXLINE(  74)																		vl->push(::haxe::ui::styles::ValueTools_obj::parse(a));
            																	}
            																}
HXLINE(  76)																v = ::haxe::ui::styles::Value_obj::VComposite(vl);
            															}
            														}
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  81)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,parse,return )

::Array< ::String > ValueTools_obj::paramsSplitter(::String s){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_84_paramsSplitter)
HXLINE(  85)		::Array< ::String > params = ::Array_obj< ::String >::__new(0);
HXLINE(  86)		int counter = 0;
HXLINE(  87)		int i = 0;
HXLINE(  88)		int startParameter = 0;
HXLINE(  89)		while((i < s.length)){
HXLINE(  90)			::String _hx_char = s.charAt(i);
HXLINE(  91)			bool _hx_tmp;
HXDLIN(  91)			if ((_hx_char == HX_(",",2c,00,00,00))) {
HXLINE(  91)				_hx_tmp = (counter == 0);
            			}
            			else {
HXLINE(  91)				_hx_tmp = false;
            			}
HXDLIN(  91)			if (_hx_tmp) {
HXLINE(  92)				params->push(s.substring(startParameter,i));
HXLINE(  93)				startParameter = (i + 1);
            			}
HXLINE(  95)			if ((_hx_char == HX_("(",28,00,00,00))) {
HXLINE(  96)				counter = (counter - 1);
            			}
            			else {
HXLINE(  97)				if ((_hx_char == HX_(")",29,00,00,00))) {
HXLINE(  98)					counter = (counter + 1);
            				}
            			}
HXLINE( 100)			i = (i + 1);
            		}
HXLINE( 102)		params->push(s.substring(startParameter,s.length));
HXLINE( 103)		return params;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,paramsSplitter,return )

::Array< ::String > ValueTools_obj::extractCalls(::String s){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_106_extractCalls)
HXLINE( 108)		::Array< ::String > calls = ::Array_obj< ::String >::__new(0);
HXLINE( 109)		int counter = 0;
HXLINE( 111)		int i = 0;
HXLINE( 112)		int startCall = 0;
HXLINE( 113)		int startParams = -1;
HXLINE( 114)		while((i < s.length)){
HXLINE( 115)			::String _hx_char = s.charAt(i);
HXLINE( 116)			if ((_hx_char == HX_("(",28,00,00,00))) {
HXLINE( 117)				if ((startParams == -1)) {
HXLINE( 117)					startParams = i;
            				}
HXLINE( 118)				counter = (counter - 1);
            			}
            			else {
HXLINE( 119)				if ((_hx_char == HX_(")",29,00,00,00))) {
HXLINE( 120)					counter = (counter + 1);
            				}
            			}
HXLINE( 123)			bool _hx_tmp;
HXDLIN( 123)			if ((startParams != -1)) {
HXLINE( 123)				_hx_tmp = (counter == 0);
            			}
            			else {
HXLINE( 123)				_hx_tmp = false;
            			}
HXDLIN( 123)			if (_hx_tmp) {
HXLINE( 124)				::String preParams = s.substring(startCall,startParams);
HXLINE( 128)				::Array< ::String > words = preParams.split(HX_(" ",20,00,00,00));
HXLINE( 129)				{
HXLINE( 129)					int _g = 0;
HXDLIN( 129)					int _g1 = words->length;
HXDLIN( 129)					while((_g < _g1)){
HXLINE( 129)						_g = (_g + 1);
HXDLIN( 129)						int j = (_g - 1);
HXLINE( 130)						::String word = ::StringTools_obj::trim(words->__get(j));
HXLINE( 132)						if ((j == (words->length - 1))) {
HXLINE( 133)							::String func_params = s.substring(startParams,(i + 1));
HXLINE( 134)							calls->push((word + func_params));
            						}
            						else {
HXLINE( 137)							if ((word != HX_("",00,00,00,00))) {
HXLINE( 137)								calls->push(word);
            							}
            						}
            					}
            				}
HXLINE( 141)				startCall = (i + 1);
HXLINE( 142)				startParams = -1;
            			}
HXLINE( 144)			i = (i + 1);
            		}
HXLINE( 146)		return calls;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,extractCalls,return )

int ValueTools_obj::compositeParts( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_149_compositeParts)
HXLINE( 150)		if (::hx::IsNull( value )) {
HXLINE( 151)			return 0;
            		}
HXLINE( 154)		if ((value->_hx_getIndex() == 7)) {
HXLINE( 155)			::Array< ::Dynamic> vl = value->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 156)			return vl->length;
            		}
            		else {
HXLINE( 158)			return 0;
            		}
HXLINE( 154)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,compositeParts,return )

::Array< ::Dynamic> ValueTools_obj::composite( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_162_composite)
HXLINE( 163)		if (::hx::IsNull( value )) {
HXLINE( 164)			return null();
            		}
HXLINE( 167)		switch((int)(value->_hx_getIndex())){
            			case (int)0: {
HXLINE( 170)				::String _g = value->_hx_getString(0);
HXLINE( 171)				return ::Array_obj< ::Dynamic>::__new(1)->init(0,value);
            			}
            			break;
            			case (int)1: {
HXLINE( 170)				Float _g = value->_hx_getFloat(0);
HXLINE( 171)				return ::Array_obj< ::Dynamic>::__new(1)->init(0,value);
            			}
            			break;
            			case (int)3: {
HXLINE( 170)				 ::haxe::ui::styles::Dimension _g = value->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXLINE( 171)				return ::Array_obj< ::Dynamic>::__new(1)->init(0,value);
            			}
            			break;
            			case (int)6: {
HXLINE( 170)				::String _g = value->_hx_getString(0);
HXLINE( 171)				return ::Array_obj< ::Dynamic>::__new(1)->init(0,value);
            			}
            			break;
            			case (int)7: {
HXLINE( 168)				::Array< ::Dynamic> vl = value->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 169)				return vl;
            			}
            			break;
            			case (int)9: {
HXLINE( 173)				return ::Array_obj< ::Dynamic>::__new(0);
            			}
            			break;
            			default:{
HXLINE( 175)				return null();
            			}
            		}
HXLINE( 167)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,composite,return )

bool ValueTools_obj::isNum(::String s){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_180_isNum)
HXLINE( 181)		bool b = true;
HXLINE( 183)		{
HXLINE( 183)			int _g = 0;
HXDLIN( 183)			int _g1 = s.length;
HXDLIN( 183)			while((_g < _g1)){
HXLINE( 183)				_g = (_g + 1);
HXDLIN( 183)				int i = (_g - 1);
HXLINE( 184)				 ::Dynamic c = s.charCodeAt(i);
HXLINE( 185)				bool _hx_tmp;
HXDLIN( 185)				bool _hx_tmp1;
HXDLIN( 185)				bool _hx_tmp2;
HXDLIN( 185)				if (::hx::IsGreaterEq( c,48 )) {
HXLINE( 185)					_hx_tmp2 = ::hx::IsLessEq( c,57 );
            				}
            				else {
HXLINE( 185)					_hx_tmp2 = false;
            				}
HXDLIN( 185)				if (!(_hx_tmp2)) {
HXLINE( 185)					_hx_tmp1 = ::hx::IsEq( c,46 );
            				}
            				else {
HXLINE( 185)					_hx_tmp1 = true;
            				}
HXDLIN( 185)				if (!(_hx_tmp1)) {
HXLINE( 185)					_hx_tmp = ::hx::IsEq( c,45 );
            				}
            				else {
HXLINE( 185)					_hx_tmp = true;
            				}
HXDLIN( 185)				if (!(_hx_tmp)) {
HXLINE( 186)					b = false;
HXLINE( 187)					goto _hx_goto_11;
            				}
            			}
            			_hx_goto_11:;
            		}
HXLINE( 191)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,isNum,return )

 ::haxe::ui::styles::Value ValueTools_obj::parseColor(::String s){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_195_parseColor)
HXDLIN( 195)		return ::haxe::ui::styles::Value_obj::VColor(::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromString(s)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,parseColor,return )

bool ValueTools_obj::validColor(::String s){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_199_validColor)
HXDLIN( 199)		return ::haxe::ui::util::_Color::Color_Impl__obj::isValidColor(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,validColor,return )

 ::Dynamic ValueTools_obj::time( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_202_time)
HXLINE( 203)		if (::hx::IsNull( value )) {
HXLINE( 204)			return null();
            		}
HXLINE( 207)		if ((value->_hx_getIndex() == 8)) {
HXLINE( 208)			Float v = value->_hx_getFloat(0);
HXDLIN( 208)			::String unit = value->_hx_getString(1);
HXLINE( 209)			::String _hx_switch_0 = unit;
            			if (  (_hx_switch_0==HX_("ms",66,5f,00,00)) ){
HXLINE( 213)				return (v / ( (Float)(1000) ));
HXDLIN( 213)				goto _hx_goto_15;
            			}
            			if (  (_hx_switch_0==HX_("s",73,00,00,00)) ){
HXLINE( 211)				return v;
HXDLIN( 211)				goto _hx_goto_15;
            			}
            			/* default */{
HXLINE( 215)				return null();
            			}
            			_hx_goto_15:;
            		}
            		else {
HXLINE( 218)			return null();
            		}
HXLINE( 207)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,time,return )

 ::haxe::ui::util::VariantType ValueTools_obj::variant( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_222_variant)
HXLINE( 223)		if (::hx::IsNull( value )) {
HXLINE( 224)			return null();
            		}
HXLINE( 227)		switch((int)(value->_hx_getIndex())){
            			case (int)0: {
HXLINE( 228)				::String v = value->_hx_getString(0);
HXLINE( 229)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(v);
            			}
            			break;
            			case (int)1: {
HXLINE( 230)				Float v = value->_hx_getFloat(0);
HXLINE( 231)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(v);
            			}
            			break;
            			case (int)2: {
HXLINE( 232)				bool v = value->_hx_getBool(0);
HXLINE( 233)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(v);
            			}
            			break;
            			case (int)5: {
HXLINE( 234)				::String f = value->_hx_getString(0);
HXDLIN( 234)				::Array< ::Dynamic> vl = value->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 235)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(::haxe::ui::styles::ValueTools_obj::call(f,vl));
            			}
            			break;
            			case (int)6: {
HXLINE( 228)				::String v = value->_hx_getString(0);
HXLINE( 229)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(v);
            			}
            			break;
            			default:{
HXLINE( 237)				return null();
            			}
            		}
HXLINE( 227)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,variant,return )

::String ValueTools_obj::string( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_241_string)
HXLINE( 242)		if (::hx::IsNull( value )) {
HXLINE( 243)			return null();
            		}
HXLINE( 246)		switch((int)(value->_hx_getIndex())){
            			case (int)0: {
HXLINE( 247)				::String v = value->_hx_getString(0);
HXLINE( 248)				return v;
            			}
            			break;
            			case (int)2: {
HXLINE( 249)				bool v = value->_hx_getBool(0);
HXLINE( 250)				return ::Std_obj::string(v);
            			}
            			break;
            			case (int)5: {
HXLINE( 251)				::String f = value->_hx_getString(0);
HXDLIN( 251)				::Array< ::Dynamic> vl = value->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 252)				return ( (::String)(::haxe::ui::styles::ValueTools_obj::call(f,vl)) );
            			}
            			break;
            			case (int)6: {
HXLINE( 247)				::String v = value->_hx_getString(0);
HXLINE( 248)				return v;
            			}
            			break;
            			default:{
HXLINE( 254)				return null();
            			}
            		}
HXLINE( 246)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,string,return )

 ::Dynamic ValueTools_obj::_hx_bool( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_258_bool)
HXLINE( 259)		if (::hx::IsNull( value )) {
HXLINE( 260)			return null();
            		}
HXLINE( 263)		if ((value->_hx_getIndex() == 2)) {
HXLINE( 264)			bool v = value->_hx_getBool(0);
HXLINE( 265)			return v;
            		}
            		else {
HXLINE( 267)			return null();
            		}
HXLINE( 263)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,_hx_bool,return )

 ::Dynamic ValueTools_obj::none( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_271_none)
HXLINE( 272)		if (::hx::IsNull( value )) {
HXLINE( 273)			return null();
            		}
HXLINE( 276)		if ((value->_hx_getIndex() == 9)) {
HXLINE( 278)			return true;
            		}
            		else {
HXLINE( 280)			return null();
            		}
HXLINE( 276)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,none,return )

 ::Dynamic ValueTools_obj::_hx_int( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_284_int)
HXLINE( 285)		if (::hx::IsNull( value )) {
HXLINE( 286)			return null();
            		}
HXLINE( 289)		switch((int)(value->_hx_getIndex())){
            			case (int)1: {
HXLINE( 292)				Float v = value->_hx_getFloat(0);
HXLINE( 293)				return ::Std_obj::_hx_int(v);
            			}
            			break;
            			case (int)4: {
HXLINE( 290)				int v = value->_hx_getInt(0);
HXLINE( 291)				return v;
            			}
            			break;
            			case (int)5: {
HXLINE( 296)				::String f = value->_hx_getString(0);
HXDLIN( 296)				::Array< ::Dynamic> vl = value->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 297)				return ::haxe::ui::styles::ValueTools_obj::call(f,vl);
            			}
            			break;
            			case (int)9: {
HXLINE( 295)				return null();
            			}
            			break;
            			default:{
HXLINE( 299)				return null();
            			}
            		}
HXLINE( 289)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,_hx_int,return )

 ::Dynamic ValueTools_obj::_hx_float( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_303_float)
HXLINE( 304)		if (::hx::IsNull( value )) {
HXLINE( 305)			return null();
            		}
HXLINE( 308)		switch((int)(value->_hx_getIndex())){
            			case (int)1: {
HXLINE( 309)				Float v = value->_hx_getFloat(0);
HXLINE( 310)				return v;
            			}
            			break;
            			case (int)4: {
HXLINE( 311)				int v = value->_hx_getInt(0);
HXLINE( 312)				return v;
            			}
            			break;
            			case (int)9: {
HXLINE( 314)				return null();
            			}
            			break;
            			default:{
HXLINE( 316)				return null();
            			}
            		}
HXLINE( 308)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,_hx_float,return )

 ::Dynamic ValueTools_obj::any( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_320_any)
HXLINE( 321)		if (::hx::IsNull( v )) {
HXLINE( 322)			return null();
            		}
HXLINE( 325)		switch((int)(v->_hx_getIndex())){
            			case (int)1: {
HXLINE( 326)				Float v1 = v->_hx_getFloat(0);
HXLINE( 327)				return v1;
            			}
            			break;
            			case (int)2: {
HXLINE( 332)				bool v1 = v->_hx_getBool(0);
HXLINE( 333)				return v1;
            			}
            			break;
            			case (int)3: {
HXLINE( 328)				 ::haxe::ui::styles::Dimension _g = v->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXDLIN( 328)				if ((_g->_hx_getIndex() == 1)) {
HXLINE( 328)					Float v = _g->_hx_getFloat(0);
HXLINE( 329)					return v;
            				}
            				else {
HXLINE( 337)					return null();
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 330)				int v1 = v->_hx_getInt(0);
HXLINE( 331)				return v1;
            			}
            			break;
            			case (int)5: {
HXLINE( 334)				::String f = v->_hx_getString(0);
HXDLIN( 334)				::Array< ::Dynamic> vl = v->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 335)				return ::haxe::ui::styles::ValueTools_obj::call(f,vl);
            			}
            			break;
            			default:{
HXLINE( 337)				return null();
            			}
            		}
HXLINE( 325)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,any,return )

::cpp::VirtualArray ValueTools_obj::array(::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_341_array)
HXLINE( 342)		::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 344)		{
HXLINE( 344)			int _g = 0;
HXDLIN( 344)			while((_g < vl->length)){
HXLINE( 344)				 ::haxe::ui::styles::Value v = vl->__get(_g).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN( 344)				_g = (_g + 1);
HXLINE( 345)				 ::Dynamic a = ::haxe::ui::styles::ValueTools_obj::any(v);
HXLINE( 346)				if (::hx::IsNotNull( a )) {
HXLINE( 347)					arr->push(a);
            				}
            			}
            		}
HXLINE( 351)		return arr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,array,return )

 ::Dynamic ValueTools_obj::percent( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_354_percent)
HXLINE( 355)		if (::hx::IsNull( value )) {
HXLINE( 356)			return null();
            		}
HXLINE( 359)		if ((value->_hx_getIndex() == 3)) {
HXLINE( 360)			 ::haxe::ui::styles::Dimension v = value->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXLINE( 361)			if ((v->_hx_getIndex() == 0)) {
HXLINE( 362)				Float d = v->_hx_getFloat(0);
HXLINE( 363)				return d;
            			}
            			else {
HXLINE( 365)				return null();
            			}
            		}
            		else {
HXLINE( 368)			return null();
            		}
HXLINE( 359)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,percent,return )

bool ValueTools_obj::constant( ::haxe::ui::styles::Value value,::String required){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_372_constant)
HXLINE( 373)		if (::hx::IsNull( value )) {
HXLINE( 374)			return false;
            		}
HXLINE( 377)		if ((value->_hx_getIndex() == 6)) {
HXLINE( 378)			::String v = value->_hx_getString(0);
HXLINE( 379)			return (v == required);
            		}
            		else {
HXLINE( 381)			return false;
            		}
HXLINE( 377)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ValueTools_obj,constant,return )

 ::Dynamic ValueTools_obj::calcDimension( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_385_calcDimension)
HXLINE( 386)		if (::hx::IsNull( value )) {
HXLINE( 387)			return null();
            		}
HXLINE( 390)		switch((int)(value->_hx_getIndex())){
            			case (int)1: {
HXLINE( 404)				Float v = value->_hx_getFloat(0);
HXLINE( 405)				return v;
            			}
            			break;
            			case (int)3: {
HXLINE( 391)				 ::haxe::ui::styles::Dimension v = value->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXLINE( 392)				switch((int)(v->_hx_getIndex())){
            					case (int)1: {
HXLINE( 393)						Float d = v->_hx_getFloat(0);
HXLINE( 394)						return d;
            					}
            					break;
            					case (int)2: {
HXLINE( 395)						Float d = v->_hx_getFloat(0);
HXLINE( 396)						return ((d / ( (Float)(100) )) * ::haxe::ui::core::Screen_obj::get_instance()->get_width());
            					}
            					break;
            					case (int)3: {
HXLINE( 397)						Float d = v->_hx_getFloat(0);
HXLINE( 398)						return ((d / ( (Float)(100) )) * ::haxe::ui::core::Screen_obj::get_instance()->get_height());
            					}
            					break;
            					case (int)4: {
HXLINE( 399)						Float d = v->_hx_getFloat(0);
HXLINE( 400)						return (d * ( (Float)(::haxe::ui::Toolkit_obj::pixelsPerRem) ));
            					}
            					break;
            					default:{
HXLINE( 402)						return null();
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 406)				::String f = value->_hx_getString(0);
HXDLIN( 406)				::Array< ::Dynamic> vl = value->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 407)				return ::haxe::ui::styles::ValueTools_obj::call(f,vl);
            			}
            			break;
            			case (int)9: {
HXLINE( 409)				return null();
            			}
            			break;
            			default:{
HXLINE( 411)				return null();
            			}
            		}
HXLINE( 390)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,calcDimension,return )

::String ValueTools_obj::calcEasing( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_416_calcEasing)
HXDLIN( 416)		switch((int)(value->_hx_getIndex())){
            			case (int)0: {
HXLINE( 417)				::String v = value->_hx_getString(0);
HXLINE( 418)				::String _hx_switch_0 = v;
            				if (  (_hx_switch_0==HX_("ease",ee,8b,0c,43)) ){
HXLINE( 422)					return HX_("ease",ee,8b,0c,43);
HXDLIN( 422)					goto _hx_goto_29;
            				}
            				if (  (_hx_switch_0==HX_("ease-in",24,9e,8f,aa)) ){
HXLINE( 424)					return HX_("easeIn",73,23,3a,88);
HXDLIN( 424)					goto _hx_goto_29;
            				}
            				if (  (_hx_switch_0==HX_("ease-in-out",a5,ba,36,c6)) ){
HXLINE( 428)					return HX_("easeInOut",db,9e,bd,46);
HXDLIN( 428)					goto _hx_goto_29;
            				}
            				if (  (_hx_switch_0==HX_("ease-out",6f,55,1f,93)) ){
HXLINE( 426)					return HX_("easeOut",40,75,a9,aa);
HXDLIN( 426)					goto _hx_goto_29;
            				}
            				if (  (_hx_switch_0==HX_("linear",e5,51,a0,ec)) ){
HXLINE( 420)					return HX_("linear",e5,51,a0,ec);
HXDLIN( 420)					goto _hx_goto_29;
            				}
            				/* default */{
HXLINE( 430)					return null();
            				}
            				_hx_goto_29:;
            			}
            			break;
            			case (int)6: {
HXLINE( 417)				::String v = value->_hx_getString(0);
HXLINE( 418)				::String _hx_switch_1 = v;
            				if (  (_hx_switch_1==HX_("ease",ee,8b,0c,43)) ){
HXLINE( 422)					return HX_("ease",ee,8b,0c,43);
HXDLIN( 422)					goto _hx_goto_30;
            				}
            				if (  (_hx_switch_1==HX_("ease-in",24,9e,8f,aa)) ){
HXLINE( 424)					return HX_("easeIn",73,23,3a,88);
HXDLIN( 424)					goto _hx_goto_30;
            				}
            				if (  (_hx_switch_1==HX_("ease-in-out",a5,ba,36,c6)) ){
HXLINE( 428)					return HX_("easeInOut",db,9e,bd,46);
HXDLIN( 428)					goto _hx_goto_30;
            				}
            				if (  (_hx_switch_1==HX_("ease-out",6f,55,1f,93)) ){
HXLINE( 426)					return HX_("easeOut",40,75,a9,aa);
HXDLIN( 426)					goto _hx_goto_30;
            				}
            				if (  (_hx_switch_1==HX_("linear",e5,51,a0,ec)) ){
HXLINE( 420)					return HX_("linear",e5,51,a0,ec);
HXDLIN( 420)					goto _hx_goto_30;
            				}
            				/* default */{
HXLINE( 430)					return null();
            				}
            				_hx_goto_30:;
            			}
            			break;
            			default:{
HXLINE( 433)				return null();
            			}
            		}
HXLINE( 416)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,calcEasing,return )

 ::Dynamic ValueTools_obj::call(::String f,::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_437_call)
HXLINE( 438)		if (!(::haxe::ui::styles::CssFunctions_obj::_cssFunctions->exists(f))) {
HXLINE( 439)			::haxe::Log_obj::trace((HX_("unknown css function: ",d1,78,df,a7) + f),::hx::SourceInfo(HX_("haxe/ui/styles/ValueTools.hx",b9,b2,da,39),439,HX_("haxe.ui.styles.ValueTools",84,d4,9a,9b),HX_("call",9e,18,ba,41)));
HXLINE( 440)			return null();
            		}
HXLINE( 443)		return ::haxe::ui::styles::CssFunctions_obj::_cssFunctions->get(f)(vl);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ValueTools_obj,call,return )


ValueTools_obj::ValueTools_obj()
{
}

bool ValueTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { outValue = _hx_int_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"any") ) { outValue = any_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { outValue = time_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bool") ) { outValue = _hx_bool_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"none") ) { outValue = none_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"call") ) { outValue = call_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isNum") ) { outValue = isNum_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"float") ) { outValue = _hx_float_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"array") ) { outValue = array_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { outValue = string_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"variant") ) { outValue = variant_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"percent") ) { outValue = percent_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"timeEReg") ) { outValue = ( timeEReg ); return true; }
		if (HX_FIELD_EQ(inName,"constant") ) { outValue = constant_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"composite") ) { outValue = composite_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseColor") ) { outValue = parseColor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"validColor") ) { outValue = validColor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"calcEasing") ) { outValue = calcEasing_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"extractCalls") ) { outValue = extractCalls_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"calcDimension") ) { outValue = calcDimension_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"paramsSplitter") ) { outValue = paramsSplitter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"compositeParts") ) { outValue = compositeParts_dyn(); return true; }
	}
	return false;
}

bool ValueTools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"timeEReg") ) { timeEReg=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ValueTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ValueTools_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(void *) &ValueTools_obj::timeEReg,HX_("timeEReg",9c,a0,62,e3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ValueTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ValueTools_obj::timeEReg,"timeEReg");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ValueTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ValueTools_obj::timeEReg,"timeEReg");
};

#endif

::hx::Class ValueTools_obj::__mClass;

static ::String ValueTools_obj_sStaticFields[] = {
	HX_("timeEReg",9c,a0,62,e3),
	HX_("parse",33,90,55,bd),
	HX_("paramsSplitter",ad,a4,d2,04),
	HX_("extractCalls",14,81,a0,60),
	HX_("compositeParts",99,77,03,0a),
	HX_("composite",07,10,a5,12),
	HX_("isNum",7c,08,52,c1),
	HX_("parseColor",30,b8,3d,74),
	HX_("validColor",c7,da,9b,98),
	HX_("time",0d,cc,fc,4c),
	HX_("variant",85,40,e2,dc),
	HX_("string",d1,28,30,11),
	HX_("bool",2a,84,1b,41),
	HX_("none",b8,12,0a,49),
	HX_("int",ef,0c,50,00),
	HX_("float",9c,c5,96,02),
	HX_("any",ec,fa,49,00),
	HX_("array",99,6d,8f,25),
	HX_("percent",c5,aa,da,78),
	HX_("constant",64,c1,9d,a5),
	HX_("calcDimension",11,c8,81,d4),
	HX_("calcEasing",20,f7,2b,3d),
	HX_("call",9e,18,ba,41),
	::String(null())
};

void ValueTools_obj::__register()
{
	ValueTools_obj _hx_dummy;
	ValueTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.ValueTools",84,d4,9a,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ValueTools_obj::__GetStatic;
	__mClass->mSetStaticField = &ValueTools_obj::__SetStatic;
	__mClass->mMarkFunc = ValueTools_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ValueTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ValueTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ValueTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValueTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValueTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ValueTools_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_11_boot)
HXDLIN(  11)		timeEReg =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(-?\\d+(?:\\.\\d+)?)(s|ms)$",d4,6d,c4,70),HX_("gi",22,5a,00,00));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
