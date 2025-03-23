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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_StyleSheet
#include <openfl/text/StyleSheet.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__internal_CSSParser
#include <openfl/text/_internal/CSSParser.h>
#endif
#ifndef INCLUDED_openfl_utils__Object_Object_Impl_
#include <openfl/utils/_Object/Object_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_70_new,"openfl.text.StyleSheet","new",0xd37f3283,"openfl.text.StyleSheet.new","openfl/text/StyleSheet.hx",70,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_79_clear,"openfl.text.StyleSheet","clear",0xc6bde270,"openfl.text.StyleSheet.clear","openfl/text/StyleSheet.hx",79,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_93_getStyle,"openfl.text.StyleSheet","getStyle",0xacc3b3b8,"openfl.text.StyleSheet.getStyle","openfl/text/StyleSheet.hx",93,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_116_parseCSS,"openfl.text.StyleSheet","parseCSS",0x9f3c704d,"openfl.text.StyleSheet.parseCSS","openfl/text/StyleSheet.hx",116,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_190_setStyle,"openfl.text.StyleSheet","setStyle",0x5b210d2c,"openfl.text.StyleSheet.setStyle","openfl/text/StyleSheet.hx",190,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_218_transform,"openfl.text.StyleSheet","transform",0x31e34bcf,"openfl.text.StyleSheet.transform","openfl/text/StyleSheet.hx",218,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_225___applyStyle,"openfl.text.StyleSheet","__applyStyle",0x23895d80,"openfl.text.StyleSheet.__applyStyle","openfl/text/StyleSheet.hx",225,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_236___applyStyleObject,"openfl.text.StyleSheet","__applyStyleObject",0x50fc705f,"openfl.text.StyleSheet.__applyStyleObject","openfl/text/StyleSheet.hx",236,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_337___parseFont,"openfl.text.StyleSheet","__parseFont",0xb0f1b5a5,"openfl.text.StyleSheet.__parseFont","openfl/text/StyleSheet.hx",337,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_356_get_styleNames,"openfl.text.StyleSheet","get_styleNames",0x48484bdd,"openfl.text.StyleSheet.get_styleNames","openfl/text/StyleSheet.hx",356,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_57_boot,"openfl.text.StyleSheet","boot",0x33e600af,"openfl.text.StyleSheet.boot","openfl/text/StyleSheet.hx",57,0xaad435ed)
static const ::String _hx_array_data_2fb53511_21[] = {
	HX_("color",63,71,5c,4a),HX_("display",42,2a,4a,bb),HX_("font-family",a2,c9,66,81),HX_("font-size",3f,ef,09,4e),HX_("font-style",f3,04,ec,01),HX_("font-weight",76,db,6b,98),HX_("kerning",cc,ba,37,b0),HX_("leading",c6,32,61,09),HX_("letter-spacing",dc,45,12,42),HX_("margin-left",c6,4b,ff,e7),HX_("margin-right",3d,0f,70,8e),HX_("text-align",e5,9f,fc,21),HX_("text-decoration",10,b8,a7,ac),HX_("text-indent",4c,bf,67,f1),
};
namespace openfl{
namespace text{

void StyleSheet_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_70_new)
HXLINE(  71)		super::__construct(null());
HXLINE(  72)		this->clear();
            	}

Dynamic StyleSheet_obj::__CreateEmpty() { return new StyleSheet_obj; }

void *StyleSheet_obj::_hx_vtable = 0;

Dynamic StyleSheet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StyleSheet_obj > _hx_result = new StyleSheet_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StyleSheet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x1cad992f;
	}
}

void StyleSheet_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_79_clear)
HXLINE(  80)		this->_hx___styleNamesDirty = false;
HXLINE(  81)		this->_hx___styleNames = null();
HXLINE(  82)		this->_hx___styles =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(StyleSheet_obj,clear,(void))

 ::Dynamic StyleSheet_obj::getStyle(::String styleName){
            	HX_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_93_getStyle)
HXLINE(  94)		styleName = styleName.toLowerCase();
HXLINE(  95)		if (this->_hx___styles->exists(styleName)) {
HXLINE(  97)			return this->_hx___styles->get(styleName);
            		}
            		else {
HXLINE( 101)			return null();
            		}
HXLINE(  95)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,getStyle,return )

void StyleSheet_obj::parseCSS(::String CSSText){
            	HX_GC_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_116_parseCSS)
HXLINE( 117)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 117)		_g->set(HX_("silent",95,76,cd,b7),true);
HXDLIN( 117)		 ::openfl::text::_internal::CSSParser parser =  ::openfl::text::_internal::CSSParser_obj::__alloc( HX_CTX ,_g);
HXLINE( 118)		 ::haxe::ds::StringMap ast = parser->parse(CSSText);
HXLINE( 119)		if (::hx::IsNotNull( ast )) {
HXLINE( 121)			::Array< ::Dynamic> rules = ( (::Array< ::Dynamic>)(ast->get(HX_("rules",f7,63,56,f1))) );
HXLINE( 122)			{
HXLINE( 122)				int _g = 0;
HXDLIN( 122)				while((_g < rules->length)){
HXLINE( 122)					 ::haxe::ds::StringMap rule = rules->__get(_g).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 122)					_g = (_g + 1);
HXLINE( 124)					::String styleName;
HXDLIN( 124)					if (rule->exists(HX_("selectors",74,88,1f,8e))) {
HXLINE( 124)						styleName = ( (::String)(rule->get(HX_("selectors",74,88,1f,8e))) );
            					}
            					else {
HXLINE( 124)						styleName = null();
            					}
HXLINE( 125)					if (::hx::IsNotNull( styleName )) {
HXLINE( 127)						styleName = styleName.toLowerCase();
HXLINE( 128)						if (!(this->_hx___styles->exists(styleName))) {
HXLINE( 130)							{
HXLINE( 130)								 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN( 130)								this->_hx___styles->set(styleName,this1);
            							}
HXLINE( 131)							this->_hx___styleNamesDirty = true;
            						}
HXLINE( 134)						 ::Dynamic object = this->_hx___styles->get(styleName);
HXLINE( 135)						::Array< ::Dynamic> declarations = ( (::Array< ::Dynamic>)(rule->get(HX_("declarations",39,36,ad,ea))) );
HXLINE( 136)						if (::hx::IsNotNull( declarations )) {
HXLINE( 138)							int _g = 0;
HXDLIN( 138)							while((_g < declarations->length)){
HXLINE( 138)								 ::haxe::ds::StringMap declaration = declarations->__get(_g).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 138)								_g = (_g + 1);
HXLINE( 140)								::String property = declaration->get_string(HX_("property",55,48,38,ac));
HXLINE( 141)								::String value = ::Std_obj::string(declaration->get_string(HX_("value",71,7f,b8,31)));
HXLINE( 142)								if (::hx::IsNotNull( property )) {
HXLINE( 144)									if (::hx::IsNull( property )) {
HXLINE( 165)										::Reflect_obj::setField(object,property,value);
            									}
            									else {
HXLINE( 144)										::String _hx_switch_0 = property;
            										if (  (_hx_switch_0==HX_("font-family",a2,c9,66,81)) ){
HXLINE( 147)											 ::Dynamic value1 = ::StringTools_obj::replace(value,HX_("\"",22,00,00,00),HX_("",00,00,00,00));
HXDLIN( 147)											{
HXLINE( 147)												 ::Dynamic this1 = object;
HXDLIN( 147)												if (::hx::IsNotNull( this1 )) {
HXLINE( 147)													::Reflect_obj::setProperty(this1,HX_("fontFamily",d3,f6,f4,9e),value1);
            												}
            											}
HXDLIN( 147)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("font-size",3f,ef,09,4e)) ){
HXLINE( 149)											 ::Dynamic this1 = object;
HXDLIN( 149)											if (::hx::IsNotNull( this1 )) {
HXLINE( 149)												::Reflect_obj::setProperty(this1,HX_("fontSize",30,be,d1,ce),value);
            											}
HXDLIN( 149)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("font-style",f3,04,ec,01)) ){
HXLINE( 151)											 ::Dynamic this1 = object;
HXDLIN( 151)											if (::hx::IsNotNull( this1 )) {
HXLINE( 151)												::Reflect_obj::setProperty(this1,HX_("fontStyle",e2,48,f9,2f),value);
            											}
HXDLIN( 151)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("font-weight",76,db,6b,98)) ){
HXLINE( 153)											 ::Dynamic this1 = object;
HXDLIN( 153)											if (::hx::IsNotNull( this1 )) {
HXLINE( 153)												::Reflect_obj::setProperty(this1,HX_("fontWeight",a7,08,fa,b5),value);
            											}
HXDLIN( 153)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("letter-spacing",dc,45,12,42)) ){
HXLINE( 155)											 ::Dynamic this1 = object;
HXDLIN( 155)											if (::hx::IsNotNull( this1 )) {
HXLINE( 155)												::Reflect_obj::setProperty(this1,HX_("letterSpacing",3d,b7,03,f5),value);
            											}
HXDLIN( 155)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("margin-left",c6,4b,ff,e7)) ){
HXLINE( 157)											 ::Dynamic this1 = object;
HXDLIN( 157)											if (::hx::IsNotNull( this1 )) {
HXLINE( 157)												::Reflect_obj::setProperty(this1,HX_("marginLeft",55,53,dd,84),value);
            											}
HXDLIN( 157)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("text-align",e5,9f,fc,21)) ){
HXLINE( 159)											 ::Dynamic this1 = object;
HXDLIN( 159)											if (::hx::IsNotNull( this1 )) {
HXLINE( 159)												::Reflect_obj::setProperty(this1,HX_("textAlign",d8,e6,7e,ba),value);
            											}
HXDLIN( 159)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("text-decoration",10,b8,a7,ac)) ){
HXLINE( 161)											 ::Dynamic this1 = object;
HXDLIN( 161)											if (::hx::IsNotNull( this1 )) {
HXLINE( 161)												::Reflect_obj::setProperty(this1,HX_("textDecoration",3d,60,e0,20),value);
            											}
HXDLIN( 161)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("text-indent",4c,bf,67,f1)) ){
HXLINE( 163)											 ::Dynamic this1 = object;
HXDLIN( 163)											if (::hx::IsNotNull( this1 )) {
HXLINE( 163)												::Reflect_obj::setProperty(this1,HX_("textIndent",f9,8c,e3,ca),value);
            											}
HXDLIN( 163)											goto _hx_goto_5;
            										}
            										/* default */{
HXLINE( 165)											::Reflect_obj::setField(object,property,value);
            										}
            										_hx_goto_5:;
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,parseCSS,(void))

void StyleSheet_obj::setStyle(::String styleName, ::Dynamic styleObject){
            	HX_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_190_setStyle)
HXLINE( 191)		styleName = styleName.toLowerCase();
HXLINE( 192)		if (::hx::IsNull( styleObject )) {
HXLINE( 194)			if (this->_hx___styles->exists(styleName)) {
HXLINE( 196)				this->_hx___styles->remove(styleName);
            			}
            		}
            		else {
HXLINE( 201)			 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN( 201)			 ::Dynamic object = this1;
HXLINE( 202)			{
HXLINE( 202)				int _g = 0;
HXDLIN( 202)				::Array< ::String > _g1 = ::Reflect_obj::fields(styleObject);
HXDLIN( 202)				while((_g < _g1->length)){
HXLINE( 202)					::String field = _g1->__get(_g);
HXDLIN( 202)					_g = (_g + 1);
HXLINE( 204)					::Reflect_obj::setField(object,field,::Reflect_obj::field(styleObject,field));
            				}
            			}
HXLINE( 206)			this->_hx___styles->set(styleName,object);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(StyleSheet_obj,setStyle,(void))

 ::openfl::text::TextFormat StyleSheet_obj::transform( ::Dynamic formatObject){
            	HX_GC_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_218_transform)
HXLINE( 219)		 ::openfl::text::TextFormat format =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 220)		this->_hx___applyStyleObject(formatObject,format);
HXLINE( 221)		return format;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,transform,return )

void StyleSheet_obj::_hx___applyStyle(::String styleName, ::openfl::text::TextFormat textFormat){
            	HX_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_225___applyStyle)
HXLINE( 226)		styleName = styleName.toLowerCase();
HXLINE( 227)		if (this->_hx___styles->exists(styleName)) {
HXLINE( 229)			 ::Dynamic style = this->_hx___styles->get(styleName);
HXLINE( 230)			this->_hx___applyStyleObject(style,textFormat);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(StyleSheet_obj,_hx___applyStyle,(void))

void StyleSheet_obj::_hx___applyStyleObject( ::Dynamic styleObject, ::openfl::text::TextFormat textFormat){
            	HX_GC_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_236___applyStyleObject)
HXDLIN( 236)		if (::hx::IsNotNull( styleObject )) {
HXLINE( 238)			 ::EReg hex =  ::EReg_obj::__alloc( HX_CTX ,HX_("[0-9A-Fa-f]+",cf,38,92,17),HX_("",00,00,00,00));
HXLINE( 239)			 ::EReg numeric =  ::EReg_obj::__alloc( HX_CTX ,HX_("[0-9]+",8f,d9,9f,23),HX_("",00,00,00,00));
HXLINE( 240)			bool _hx_tmp;
HXDLIN( 240)			 ::Dynamic this1 = styleObject;
HXDLIN( 240)			bool _hx_tmp1;
HXDLIN( 240)			if (::hx::IsNotNull( this1 )) {
HXLINE( 240)				_hx_tmp1 = ::Reflect_obj::hasField(this1,HX_("color",63,71,5c,4a));
            			}
            			else {
HXLINE( 240)				_hx_tmp1 = false;
            			}
HXDLIN( 240)			if (_hx_tmp1) {
HXLINE( 240)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("color",63,71,5c,4a));
HXDLIN( 240)				::String _hx_tmp1;
HXDLIN( 240)				if (::hx::IsNull( this1 )) {
HXLINE( 240)					_hx_tmp1 = null();
            				}
            				else {
HXLINE( 240)					_hx_tmp1 = ::Std_obj::string(this1);
            				}
HXDLIN( 240)				_hx_tmp = hex->match(_hx_tmp1);
            			}
            			else {
HXLINE( 240)				_hx_tmp = false;
            			}
HXDLIN( 240)			if (_hx_tmp) {
HXLINE( 242)				textFormat->color = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + hex->matched(0)));
            			}
HXLINE( 254)			 ::Dynamic this2 = styleObject;
HXDLIN( 254)			bool _hx_tmp2;
HXDLIN( 254)			if (::hx::IsNotNull( this2 )) {
HXLINE( 254)				_hx_tmp2 = ::Reflect_obj::hasField(this2,HX_("fontFamily",d3,f6,f4,9e));
            			}
            			else {
HXLINE( 254)				_hx_tmp2 = false;
            			}
HXDLIN( 254)			if (_hx_tmp2) {
HXLINE( 256)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("fontFamily",d3,f6,f4,9e));
HXDLIN( 256)				::String _hx_tmp;
HXDLIN( 256)				if (::hx::IsNull( this1 )) {
HXLINE( 256)					_hx_tmp = null();
            				}
            				else {
HXLINE( 256)					_hx_tmp = ::Std_obj::string(this1);
            				}
HXDLIN( 256)				textFormat->font = this->_hx___parseFont(_hx_tmp);
            			}
HXLINE( 258)			bool _hx_tmp3;
HXDLIN( 258)			 ::Dynamic this3 = styleObject;
HXDLIN( 258)			bool _hx_tmp4;
HXDLIN( 258)			if (::hx::IsNotNull( this3 )) {
HXLINE( 258)				_hx_tmp4 = ::Reflect_obj::hasField(this3,HX_("fontSize",30,be,d1,ce));
            			}
            			else {
HXLINE( 258)				_hx_tmp4 = false;
            			}
HXDLIN( 258)			if (_hx_tmp4) {
HXLINE( 258)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("fontSize",30,be,d1,ce));
HXDLIN( 258)				::String _hx_tmp;
HXDLIN( 258)				if (::hx::IsNull( this1 )) {
HXLINE( 258)					_hx_tmp = null();
            				}
            				else {
HXLINE( 258)					_hx_tmp = ::Std_obj::string(this1);
            				}
HXDLIN( 258)				_hx_tmp3 = numeric->match(_hx_tmp);
            			}
            			else {
HXLINE( 258)				_hx_tmp3 = false;
            			}
HXDLIN( 258)			if (_hx_tmp3) {
HXLINE( 260)				textFormat->size = ::Std_obj::parseInt(numeric->matched(0));
            			}
HXLINE( 262)			 ::Dynamic this4 = styleObject;
HXDLIN( 262)			bool _hx_tmp5;
HXDLIN( 262)			if (::hx::IsNotNull( this4 )) {
HXLINE( 262)				_hx_tmp5 = ::Reflect_obj::hasField(this4,HX_("fontStyle",e2,48,f9,2f));
            			}
            			else {
HXLINE( 262)				_hx_tmp5 = false;
            			}
HXDLIN( 262)			if (_hx_tmp5) {
HXLINE( 264)				 ::Dynamic _hx_switch_0 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("fontStyle",e2,48,f9,2f));
            				if (  (_hx_switch_0==HX_("italic",f0,2e,64,06)) ){
HXLINE( 269)					textFormat->italic = true;
HXDLIN( 269)					goto _hx_goto_11;
            				}
            				if (  (_hx_switch_0==HX_("normal",27,72,69,30)) ){
HXLINE( 267)					textFormat->italic = false;
HXDLIN( 267)					goto _hx_goto_11;
            				}
            				/* default */{
            				}
            				_hx_goto_11:;
            			}
HXLINE( 273)			 ::Dynamic this5 = styleObject;
HXDLIN( 273)			bool _hx_tmp6;
HXDLIN( 273)			if (::hx::IsNotNull( this5 )) {
HXLINE( 273)				_hx_tmp6 = ::Reflect_obj::hasField(this5,HX_("fontWeight",a7,08,fa,b5));
            			}
            			else {
HXLINE( 273)				_hx_tmp6 = false;
            			}
HXDLIN( 273)			if (_hx_tmp6) {
HXLINE( 275)				 ::Dynamic _hx_switch_1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("fontWeight",a7,08,fa,b5));
            				if (  (_hx_switch_1==HX_("bold",85,81,1b,41)) ){
HXLINE( 280)					textFormat->bold = true;
HXDLIN( 280)					goto _hx_goto_12;
            				}
            				if (  (_hx_switch_1==HX_("normal",27,72,69,30)) ){
HXLINE( 278)					textFormat->bold = false;
HXDLIN( 278)					goto _hx_goto_12;
            				}
            				/* default */{
            				}
            				_hx_goto_12:;
            			}
HXLINE( 287)			bool _hx_tmp7;
HXDLIN( 287)			 ::Dynamic this6 = styleObject;
HXDLIN( 287)			bool _hx_tmp8;
HXDLIN( 287)			if (::hx::IsNotNull( this6 )) {
HXLINE( 287)				_hx_tmp8 = ::Reflect_obj::hasField(this6,HX_("leading",c6,32,61,09));
            			}
            			else {
HXLINE( 287)				_hx_tmp8 = false;
            			}
HXDLIN( 287)			if (_hx_tmp8) {
HXLINE( 287)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("leading",c6,32,61,09));
HXDLIN( 287)				::String _hx_tmp;
HXDLIN( 287)				if (::hx::IsNull( this1 )) {
HXLINE( 287)					_hx_tmp = null();
            				}
            				else {
HXLINE( 287)					_hx_tmp = ::Std_obj::string(this1);
            				}
HXDLIN( 287)				_hx_tmp7 = numeric->match(_hx_tmp);
            			}
            			else {
HXLINE( 287)				_hx_tmp7 = false;
            			}
HXDLIN( 287)			if (_hx_tmp7) {
HXLINE( 289)				textFormat->leading = ::Std_obj::parseInt(numeric->matched(0));
            			}
HXLINE( 291)			bool _hx_tmp9;
HXDLIN( 291)			 ::Dynamic this7 = styleObject;
HXDLIN( 291)			bool _hx_tmp10;
HXDLIN( 291)			if (::hx::IsNotNull( this7 )) {
HXLINE( 291)				_hx_tmp10 = ::Reflect_obj::hasField(this7,HX_("letterSpacing",3d,b7,03,f5));
            			}
            			else {
HXLINE( 291)				_hx_tmp10 = false;
            			}
HXDLIN( 291)			if (_hx_tmp10) {
HXLINE( 291)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("letterSpacing",3d,b7,03,f5));
HXDLIN( 291)				::String _hx_tmp;
HXDLIN( 291)				if (::hx::IsNull( this1 )) {
HXLINE( 291)					_hx_tmp = null();
            				}
            				else {
HXLINE( 291)					_hx_tmp = ::Std_obj::string(this1);
            				}
HXDLIN( 291)				_hx_tmp9 = numeric->match(_hx_tmp);
            			}
            			else {
HXLINE( 291)				_hx_tmp9 = false;
            			}
HXDLIN( 291)			if (_hx_tmp9) {
HXLINE( 293)				textFormat->letterSpacing = ::Std_obj::parseFloat(numeric->matched(0));
            			}
HXLINE( 295)			bool _hx_tmp11;
HXDLIN( 295)			 ::Dynamic this8 = styleObject;
HXDLIN( 295)			bool _hx_tmp12;
HXDLIN( 295)			if (::hx::IsNotNull( this8 )) {
HXLINE( 295)				_hx_tmp12 = ::Reflect_obj::hasField(this8,HX_("marginLeft",55,53,dd,84));
            			}
            			else {
HXLINE( 295)				_hx_tmp12 = false;
            			}
HXDLIN( 295)			if (_hx_tmp12) {
HXLINE( 295)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("marginLeft",55,53,dd,84));
HXDLIN( 295)				::String _hx_tmp;
HXDLIN( 295)				if (::hx::IsNull( this1 )) {
HXLINE( 295)					_hx_tmp = null();
            				}
            				else {
HXLINE( 295)					_hx_tmp = ::Std_obj::string(this1);
            				}
HXDLIN( 295)				_hx_tmp11 = numeric->match(_hx_tmp);
            			}
            			else {
HXLINE( 295)				_hx_tmp11 = false;
            			}
HXDLIN( 295)			if (_hx_tmp11) {
HXLINE( 297)				textFormat->leftMargin = ::Std_obj::parseInt(numeric->matched(0));
            			}
HXLINE( 299)			bool _hx_tmp13;
HXDLIN( 299)			 ::Dynamic this9 = styleObject;
HXDLIN( 299)			bool _hx_tmp14;
HXDLIN( 299)			if (::hx::IsNotNull( this9 )) {
HXLINE( 299)				_hx_tmp14 = ::Reflect_obj::hasField(this9,HX_("marginRight",ce,a4,d8,33));
            			}
            			else {
HXLINE( 299)				_hx_tmp14 = false;
            			}
HXDLIN( 299)			if (_hx_tmp14) {
HXLINE( 299)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("marginRight",ce,a4,d8,33));
HXDLIN( 299)				::String _hx_tmp;
HXDLIN( 299)				if (::hx::IsNull( this1 )) {
HXLINE( 299)					_hx_tmp = null();
            				}
            				else {
HXLINE( 299)					_hx_tmp = ::Std_obj::string(this1);
            				}
HXDLIN( 299)				_hx_tmp13 = numeric->match(_hx_tmp);
            			}
            			else {
HXLINE( 299)				_hx_tmp13 = false;
            			}
HXDLIN( 299)			if (_hx_tmp13) {
HXLINE( 301)				textFormat->rightMargin = ::Std_obj::parseInt(numeric->matched(0));
            			}
HXLINE( 303)			 ::Dynamic this10 = styleObject;
HXDLIN( 303)			bool _hx_tmp15;
HXDLIN( 303)			if (::hx::IsNotNull( this10 )) {
HXLINE( 303)				_hx_tmp15 = ::Reflect_obj::hasField(this10,HX_("textAlign",d8,e6,7e,ba));
            			}
            			else {
HXLINE( 303)				_hx_tmp15 = false;
            			}
HXDLIN( 303)			if (_hx_tmp15) {
HXLINE( 305)				 ::Dynamic _hx_switch_2 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("textAlign",d8,e6,7e,ba));
            				if (  (_hx_switch_2==HX_("center",d5,25,db,05)) ){
HXLINE( 312)					textFormat->align = 0;
HXDLIN( 312)					goto _hx_goto_13;
            				}
            				if (  (_hx_switch_2==HX_("justify",50,df,b5,83)) ){
HXLINE( 314)					textFormat->align = 2;
HXDLIN( 314)					goto _hx_goto_13;
            				}
            				if (  (_hx_switch_2==HX_("left",07,08,b0,47)) ){
HXLINE( 308)					textFormat->align = 3;
HXDLIN( 308)					goto _hx_goto_13;
            				}
            				if (  (_hx_switch_2==HX_("right",dc,0b,64,e9)) ){
HXLINE( 310)					textFormat->align = 4;
HXDLIN( 310)					goto _hx_goto_13;
            				}
            				/* default */{
            				}
            				_hx_goto_13:;
            			}
HXLINE( 318)			 ::Dynamic this11 = styleObject;
HXDLIN( 318)			bool _hx_tmp16;
HXDLIN( 318)			if (::hx::IsNotNull( this11 )) {
HXLINE( 318)				_hx_tmp16 = ::Reflect_obj::hasField(this11,HX_("textDecoration",3d,60,e0,20));
            			}
            			else {
HXLINE( 318)				_hx_tmp16 = false;
            			}
HXDLIN( 318)			if (_hx_tmp16) {
HXLINE( 320)				 ::Dynamic _hx_switch_3 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("textDecoration",3d,60,e0,20));
            				if (  (_hx_switch_3==HX_("none",b8,12,0a,49)) ){
HXLINE( 323)					textFormat->underline = false;
HXDLIN( 323)					goto _hx_goto_14;
            				}
            				if (  (_hx_switch_3==HX_("underline",0c,15,d1,87)) ){
HXLINE( 325)					textFormat->underline = true;
HXDLIN( 325)					goto _hx_goto_14;
            				}
            				/* default */{
            				}
            				_hx_goto_14:;
            			}
HXLINE( 329)			bool _hx_tmp17;
HXDLIN( 329)			 ::Dynamic this12 = styleObject;
HXDLIN( 329)			bool _hx_tmp18;
HXDLIN( 329)			if (::hx::IsNotNull( this12 )) {
HXLINE( 329)				_hx_tmp18 = ::Reflect_obj::hasField(this12,HX_("textIndent",f9,8c,e3,ca));
            			}
            			else {
HXLINE( 329)				_hx_tmp18 = false;
            			}
HXDLIN( 329)			if (_hx_tmp18) {
HXLINE( 329)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("textIndent",f9,8c,e3,ca));
HXDLIN( 329)				::String _hx_tmp;
HXDLIN( 329)				if (::hx::IsNull( this1 )) {
HXLINE( 329)					_hx_tmp = null();
            				}
            				else {
HXLINE( 329)					_hx_tmp = ::Std_obj::string(this1);
            				}
HXDLIN( 329)				_hx_tmp17 = numeric->match(_hx_tmp);
            			}
            			else {
HXLINE( 329)				_hx_tmp17 = false;
            			}
HXDLIN( 329)			if (_hx_tmp17) {
HXLINE( 331)				textFormat->blockIndent = ::Std_obj::parseInt(numeric->matched(0));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(StyleSheet_obj,_hx___applyStyleObject,(void))

::String StyleSheet_obj::_hx___parseFont(::String fontFamily){
            	HX_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_337___parseFont)
HXLINE( 338)		if (::hx::IsNull( fontFamily )) {
HXLINE( 338)			return null();
            		}
HXLINE( 339)		if ((fontFamily.indexOf(HX_(",",2c,00,00,00),null()) > -1)) {
HXLINE( 339)			fontFamily = fontFamily.substr(0,fontFamily.indexOf(HX_(",",2c,00,00,00),null()));
            		}
HXLINE( 340)		::String _hx_switch_0 = fontFamily;
            		if (  (_hx_switch_0==HX_("mono",23,dc,60,48)) ){
HXLINE( 343)			return HX_("_typewriter",0c,5e,52,94);
HXDLIN( 343)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==HX_("sans-serif",c3,60,fb,08)) ){
HXLINE( 345)			return HX_("_sans",32,a0,5e,ff);
HXDLIN( 345)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==HX_("serif",7d,1f,2e,7a)) ){
HXLINE( 347)			return HX_("_serif",be,66,15,76);
HXDLIN( 347)			goto _hx_goto_16;
            		}
            		/* default */{
HXLINE( 349)			return fontFamily;
            		}
            		_hx_goto_16:;
HXLINE( 340)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,_hx___parseFont,return )

::Array< ::String > StyleSheet_obj::get_styleNames(){
            	HX_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_356_get_styleNames)
HXLINE( 357)		bool _hx_tmp;
HXDLIN( 357)		if (::hx::IsNotNull( this->_hx___styleNames )) {
HXLINE( 357)			_hx_tmp = this->_hx___styleNamesDirty;
            		}
            		else {
HXLINE( 357)			_hx_tmp = true;
            		}
HXDLIN( 357)		if (_hx_tmp) {
HXLINE( 359)			this->_hx___styleNames = ::Array_obj< ::String >::__new(0);
HXLINE( 360)			{
HXLINE( 360)				 ::Dynamic style = this->_hx___styles->keys();
HXDLIN( 360)				while(( (bool)(style->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 360)					::String style1 = ( (::String)(style->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 362)					this->_hx___styleNames->push(style1);
            				}
            			}
HXLINE( 364)			this->_hx___styleNamesDirty = false;
            		}
HXLINE( 366)		return this->_hx___styleNames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StyleSheet_obj,get_styleNames,return )

::Array< ::String > StyleSheet_obj::_hx___supportedStyles;


::hx::ObjectPtr< StyleSheet_obj > StyleSheet_obj::__new() {
	::hx::ObjectPtr< StyleSheet_obj > __this = new StyleSheet_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StyleSheet_obj > StyleSheet_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StyleSheet_obj *__this = (StyleSheet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StyleSheet_obj), true, "openfl.text.StyleSheet"));
	*(void **)__this = StyleSheet_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StyleSheet_obj::StyleSheet_obj()
{
}

void StyleSheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleSheet);
	HX_MARK_MEMBER_NAME(_hx___styleNames,"__styleNames");
	HX_MARK_MEMBER_NAME(_hx___styleNamesDirty,"__styleNamesDirty");
	HX_MARK_MEMBER_NAME(_hx___styles,"__styles");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StyleSheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___styleNames,"__styleNames");
	HX_VISIT_MEMBER_NAME(_hx___styleNamesDirty,"__styleNamesDirty");
	HX_VISIT_MEMBER_NAME(_hx___styles,"__styles");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StyleSheet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__styles") ) { return ::hx::Val( _hx___styles ); }
		if (HX_FIELD_EQ(inName,"getStyle") ) { return ::hx::Val( getStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseCSS") ) { return ::hx::Val( parseCSS_dyn() ); }
		if (HX_FIELD_EQ(inName,"setStyle") ) { return ::hx::Val( setStyle_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"styleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleNames() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__parseFont") ) { return ::hx::Val( _hx___parseFont_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__styleNames") ) { return ::hx::Val( _hx___styleNames ); }
		if (HX_FIELD_EQ(inName,"__applyStyle") ) { return ::hx::Val( _hx___applyStyle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_styleNames") ) { return ::hx::Val( get_styleNames_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__styleNamesDirty") ) { return ::hx::Val( _hx___styleNamesDirty ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__applyStyleObject") ) { return ::hx::Val( _hx___applyStyleObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool StyleSheet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__supportedStyles") ) { outValue = ( _hx___supportedStyles ); return true; }
	}
	return false;
}

::hx::Val StyleSheet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__styles") ) { _hx___styles=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__styleNames") ) { _hx___styleNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__styleNamesDirty") ) { _hx___styleNamesDirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StyleSheet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__supportedStyles") ) { _hx___supportedStyles=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void StyleSheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("styleNames",d7,e8,7a,16));
	outFields->push(HX_("__styleNames",f7,63,0e,4f));
	outFields->push(HX_("__styleNamesDirty",9b,9c,0e,e2));
	outFields->push(HX_("__styles",42,51,02,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StyleSheet_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(StyleSheet_obj,_hx___styleNames),HX_("__styleNames",f7,63,0e,4f)},
	{::hx::fsBool,(int)offsetof(StyleSheet_obj,_hx___styleNamesDirty),HX_("__styleNamesDirty",9b,9c,0e,e2)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(StyleSheet_obj,_hx___styles),HX_("__styles",42,51,02,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo StyleSheet_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &StyleSheet_obj::_hx___supportedStyles,HX_("__supportedStyles",d0,27,3f,e2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String StyleSheet_obj_sMemberFields[] = {
	HX_("__styleNames",f7,63,0e,4f),
	HX_("__styleNamesDirty",9b,9c,0e,e2),
	HX_("__styles",42,51,02,be),
	HX_("clear",8d,71,5b,48),
	HX_("getStyle",bb,b4,f4,e3),
	HX_("parseCSS",50,71,6d,d6),
	HX_("setStyle",2f,0e,52,92),
	HX_("transform",6c,2d,93,45),
	HX_("__applyStyle",03,9c,02,68),
	HX_("__applyStyleObject",22,f3,73,30),
	HX_("__parseFont",82,f8,92,f9),
	HX_("get_styleNames",20,71,70,8c),
	::String(null()) };

static void StyleSheet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleSheet_obj::_hx___supportedStyles,"__supportedStyles");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StyleSheet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleSheet_obj::_hx___supportedStyles,"__supportedStyles");
};

#endif

::hx::Class StyleSheet_obj::__mClass;

static ::String StyleSheet_obj_sStaticFields[] = {
	HX_("__supportedStyles",d0,27,3f,e2),
	::String(null())
};

void StyleSheet_obj::__register()
{
	StyleSheet_obj _hx_dummy;
	StyleSheet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text.StyleSheet",11,35,b5,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StyleSheet_obj::__GetStatic;
	__mClass->mSetStaticField = &StyleSheet_obj::__SetStatic;
	__mClass->mMarkFunc = StyleSheet_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StyleSheet_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StyleSheet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StyleSheet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StyleSheet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StyleSheet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StyleSheet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StyleSheet_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_57_boot)
HXDLIN(  57)		_hx___supportedStyles = ::Array_obj< ::String >::fromData( _hx_array_data_2fb53511_21,14);
            	}
}

} // end namespace openfl
} // end namespace text
