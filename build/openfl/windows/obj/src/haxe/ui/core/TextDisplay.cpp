#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <haxe/ui/backend/AssetsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentContainer
#include <haxe/ui/core/IComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextDisplayData
#include <haxe/ui/core/TextDisplayData.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aba319191a839d6a_20_new,"haxe.ui.core.TextDisplay","new",0x0409736a,"haxe.ui.core.TextDisplay.new","haxe/ui/core/TextDisplay.hx",20,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_31_get_id,"haxe.ui.core.TextDisplay","get_id",0xe2fe525a,"haxe.ui.core.TextDisplay.get_id","haxe/ui/core/TextDisplay.hx",31,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_38_set_id,"haxe.ui.core.TextDisplay","set_id",0xaf46a6ce,"haxe.ui.core.TextDisplay.set_id","haxe/ui/core/TextDisplay.hx",38,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_43_get_isComponentOffscreen,"haxe.ui.core.TextDisplay","get_isComponentOffscreen",0xe2064067,"haxe.ui.core.TextDisplay.get_isComponentOffscreen","haxe/ui/core/TextDisplay.hx",43,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_51_get_textStyle,"haxe.ui.core.TextDisplay","get_textStyle",0x1d5e9ca5,"haxe.ui.core.TextDisplay.get_textStyle","haxe/ui/core/TextDisplay.hx",51,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_54_set_textStyle,"haxe.ui.core.TextDisplay","set_textStyle",0x62647eb1,"haxe.ui.core.TextDisplay.set_textStyle","haxe/ui/core/TextDisplay.hx",54,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_60_set_textStyle,"haxe.ui.core.TextDisplay","set_textStyle",0x62647eb1,"haxe.ui.core.TextDisplay.set_textStyle","haxe/ui/core/TextDisplay.hx",60,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_75_get_text,"haxe.ui.core.TextDisplay","get_text",0x6441a0ec,"haxe.ui.core.TextDisplay.get_text","haxe/ui/core/TextDisplay.hx",75,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_77_set_text,"haxe.ui.core.TextDisplay","set_text",0x129efa60,"haxe.ui.core.TextDisplay.set_text","haxe/ui/core/TextDisplay.hx",77,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_90_get_htmlText,"haxe.ui.core.TextDisplay","get_htmlText",0x10387f77,"haxe.ui.core.TextDisplay.get_htmlText","haxe/ui/core/TextDisplay.hx",90,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_92_set_htmlText,"haxe.ui.core.TextDisplay","set_htmlText",0x2531a2eb,"haxe.ui.core.TextDisplay.set_htmlText","haxe/ui/core/TextDisplay.hx",92,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_105_get_left,"haxe.ui.core.TextDisplay","get_left",0x5ef7dc46,"haxe.ui.core.TextDisplay.get_left","haxe/ui/core/TextDisplay.hx",105,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_107_set_left,"haxe.ui.core.TextDisplay","set_left",0x0d5535ba,"haxe.ui.core.TextDisplay.set_left","haxe/ui/core/TextDisplay.hx",107,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_119_get_top,"haxe.ui.core.TextDisplay","get_top",0xbb921f36,"haxe.ui.core.TextDisplay.get_top","haxe/ui/core/TextDisplay.hx",119,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_121_set_top,"haxe.ui.core.TextDisplay","set_top",0xae93b042,"haxe.ui.core.TextDisplay.set_top","haxe/ui/core/TextDisplay.hx",121,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_132_set_width,"haxe.ui.core.TextDisplay","set_width",0xf54584f3,"haxe.ui.core.TextDisplay.set_width","haxe/ui/core/TextDisplay.hx",132,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_143_get_width,"haxe.ui.core.TextDisplay","get_width",0x11f498e7,"haxe.ui.core.TextDisplay.get_width","haxe/ui/core/TextDisplay.hx",143,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_147_set_height,"haxe.ui.core.TextDisplay","set_height",0x5dde485a,"haxe.ui.core.TextDisplay.set_height","haxe/ui/core/TextDisplay.hx",147,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_158_get_height,"haxe.ui.core.TextDisplay","get_height",0x5a60a9e6,"haxe.ui.core.TextDisplay.get_height","haxe/ui/core/TextDisplay.hx",158,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_162_get_textWidth,"haxe.ui.core.TextDisplay","get_textWidth",0x63a3ad7a,"haxe.ui.core.TextDisplay.get_textWidth","haxe/ui/core/TextDisplay.hx",162,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_183_get_textHeight,"haxe.ui.core.TextDisplay","get_textHeight",0x81e395f3,"haxe.ui.core.TextDisplay.get_textHeight","haxe/ui/core/TextDisplay.hx",183,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_207_get_multiline,"haxe.ui.core.TextDisplay","get_multiline",0x9e653a4e,"haxe.ui.core.TextDisplay.get_multiline","haxe/ui/core/TextDisplay.hx",207,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_209_set_multiline,"haxe.ui.core.TextDisplay","set_multiline",0xe36b1c5a,"haxe.ui.core.TextDisplay.set_multiline","haxe/ui/core/TextDisplay.hx",209,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_221_get_wordWrap,"haxe.ui.core.TextDisplay","get_wordWrap",0x00db7473,"haxe.ui.core.TextDisplay.get_wordWrap","haxe/ui/core/TextDisplay.hx",221,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_223_set_wordWrap,"haxe.ui.core.TextDisplay","set_wordWrap",0x15d497e7,"haxe.ui.core.TextDisplay.set_wordWrap","haxe/ui/core/TextDisplay.hx",223,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_235_get_selectable,"haxe.ui.core.TextDisplay","get_selectable",0x0cd1c415,"haxe.ui.core.TextDisplay.get_selectable","haxe/ui/core/TextDisplay.hx",235,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_237_set_selectable,"haxe.ui.core.TextDisplay","set_selectable",0x2cf1ac89,"haxe.ui.core.TextDisplay.set_selectable","haxe/ui/core/TextDisplay.hx",237,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_247_isComponentInvalid,"haxe.ui.core.TextDisplay","isComponentInvalid",0xb95bd7fa,"haxe.ui.core.TextDisplay.isComponentInvalid","haxe/ui/core/TextDisplay.hx",247,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_264_invalidateComponent,"haxe.ui.core.TextDisplay","invalidateComponent",0x782b06cc,"haxe.ui.core.TextDisplay.invalidateComponent","haxe/ui/core/TextDisplay.hx",264,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_277_get_depth,"haxe.ui.core.TextDisplay","get_depth",0x1ebbd3e4,"haxe.ui.core.TextDisplay.get_depth","haxe/ui/core/TextDisplay.hx",277,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_279_set_depth,"haxe.ui.core.TextDisplay","set_depth",0x020cbff0,"haxe.ui.core.TextDisplay.set_depth","haxe/ui/core/TextDisplay.hx",279,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_289_updateComponentDisplay,"haxe.ui.core.TextDisplay","updateComponentDisplay",0x2a8d1264,"haxe.ui.core.TextDisplay.updateComponentDisplay","haxe/ui/core/TextDisplay.hx",289,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_292_validateComponent,"haxe.ui.core.TextDisplay","validateComponent",0xe3ec5dd1,"haxe.ui.core.TextDisplay.validateComponent","haxe/ui/core/TextDisplay.hx",292,0xd6487467)
HX_LOCAL_STACK_FRAME(_hx_pos_aba319191a839d6a_311_validateComponentInternal,"haxe.ui.core.TextDisplay","validateComponentInternal",0x9c503a2e,"haxe.ui.core.TextDisplay.validateComponentInternal","haxe/ui/core/TextDisplay.hx",311,0xd6487467)
namespace haxe{
namespace ui{
namespace core{

void TextDisplay_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_aba319191a839d6a_20_new)
HXLINE( 273)		this->_depth = -1;
HXLINE(  24)		this->_isValidating = false;
HXLINE(  23)		this->_isAllInvalid = false;
HXLINE(  22)		this->_invalidationFlags =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  27)		super::__construct();
            	}

Dynamic TextDisplay_obj::__CreateEmpty() { return new TextDisplay_obj; }

void *TextDisplay_obj::_hx_vtable = 0;

Dynamic TextDisplay_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextDisplay_obj > _hx_result = new TextDisplay_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextDisplay_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c38975b) {
		if (inClassId<=(int)0x0b41c5d8) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b41c5d8;
		} else {
			return inClassId==(int)0x0c38975b;
		}
	} else {
		return inClassId==(int)0x361ad3fc;
	}
}

static ::haxe::ui::validation::IValidating_obj _hx_haxe_ui_core_TextDisplay__hx_haxe_ui_validation_IValidating= {
	( int (::hx::Object::*)())&::haxe::ui::core::TextDisplay_obj::get_depth,
	( int (::hx::Object::*)(int))&::haxe::ui::core::TextDisplay_obj::set_depth,
	( ::String (::hx::Object::*)())&::haxe::ui::core::TextDisplay_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::haxe::ui::core::TextDisplay_obj::set_id,
	( bool (::hx::Object::*)())&::haxe::ui::core::TextDisplay_obj::get_isComponentOffscreen,
	( void (::hx::Object::*)(::hx::Null< bool > ))&::haxe::ui::core::TextDisplay_obj::validateComponent,
	( void (::hx::Object::*)())&::haxe::ui::core::TextDisplay_obj::updateComponentDisplay,
};

void *TextDisplay_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x1e962029: return &_hx_haxe_ui_core_TextDisplay__hx_haxe_ui_validation_IValidating;
	}
	return super::_hx_getInterface(inHash);
}

::String TextDisplay_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_31_get_id)
HXLINE(  32)		if (::hx::IsNull( this->parentComponent )) {
HXLINE(  33)			return null();
            		}
HXLINE(  35)		return (this->parentComponent->get_id() + HX_("_textdisplay",36,ab,82,2f));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_id,return )

::String TextDisplay_obj::set_id(::String value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_38_set_id)
HXDLIN(  38)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_id,return )

bool TextDisplay_obj::get_isComponentOffscreen(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_43_get_isComponentOffscreen)
HXDLIN(  43)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_isComponentOffscreen,return )

 ::haxe::ui::styles::Style TextDisplay_obj::get_textStyle(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_51_get_textStyle)
HXDLIN(  51)		return this->_textStyle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_textStyle,return )

 ::haxe::ui::styles::Style TextDisplay_obj::set_textStyle( ::haxe::ui::styles::Style value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_54_set_textStyle)
HXDLIN(  54)		 ::haxe::ui::core::TextDisplay _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  55)		if (::hx::IsNull( value )) {
HXLINE(  56)			return value;
            		}
HXLINE(  59)		bool _hx_tmp;
HXDLIN(  59)		bool _hx_tmp1;
HXDLIN(  59)		if (::hx::IsNotNull( value->fontName )) {
HXLINE(  59)			_hx_tmp1 = ::hx::IsNull( this->_textStyle );
            		}
            		else {
HXLINE(  59)			_hx_tmp1 = false;
            		}
HXDLIN(  59)		if (!(_hx_tmp1)) {
HXLINE(  59)			if (::hx::IsNotNull( this->_textStyle )) {
HXLINE(  59)				_hx_tmp = (value->fontName != this->_textStyle->fontName);
            			}
            			else {
HXLINE(  59)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(  59)			_hx_tmp = true;
            		}
HXDLIN(  59)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::TextDisplay,_gthis) HXARGC(1)
            			void _hx_run( ::Dynamic fontInfo){
            				HX_STACKFRAME(&_hx_pos_aba319191a839d6a_60_set_textStyle)
HXLINE(  61)				_gthis->_fontInfo = fontInfo;
HXLINE(  62)				_gthis->invalidateComponent(HX_("style",31,a5,1d,84));
HXLINE(  63)				_gthis->parentComponent->invalidateComponent(HX_("style",31,a5,1d,84),null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  60)			::haxe::ui::ToolkitAssets_obj::get_instance()->getFont(value->fontName, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            		}
            		else {
HXLINE(  66)			this->invalidateComponent(HX_("style",31,a5,1d,84));
            		}
HXLINE(  69)		this->_textStyle = value;
HXLINE(  70)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_textStyle,return )

::String TextDisplay_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_75_get_text)
HXDLIN(  75)		return this->_text;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_text,return )

::String TextDisplay_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_77_set_text)
HXLINE(  78)		if ((value == this->_text)) {
HXLINE(  79)			return value;
            		}
HXLINE(  82)		this->_text = value;
HXLINE(  83)		this->_htmlText = null();
HXLINE(  84)		this->invalidateComponent(HX_("data",2a,56,63,42));
HXLINE(  85)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_text,return )

::String TextDisplay_obj::get_htmlText(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_90_get_htmlText)
HXDLIN(  90)		return this->_htmlText;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_htmlText,return )

::String TextDisplay_obj::set_htmlText(::String value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_92_set_htmlText)
HXLINE(  93)		if ((value == this->_htmlText)) {
HXLINE(  94)			return value;
            		}
HXLINE(  97)		this->_htmlText = value;
HXLINE(  98)		this->_text = null();
HXLINE(  99)		this->invalidateComponent(HX_("data",2a,56,63,42));
HXLINE( 100)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_htmlText,return )

Float TextDisplay_obj::get_left(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_105_get_left)
HXDLIN( 105)		return this->_left;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_left,return )

Float TextDisplay_obj::set_left(Float value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_107_set_left)
HXLINE( 108)		if ((value == this->_left)) {
HXLINE( 109)			return value;
            		}
HXLINE( 112)		this->invalidateComponent(HX_("position",a9,a0,fa,ca));
HXLINE( 113)		this->_left = value;
HXLINE( 114)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_left,return )

Float TextDisplay_obj::get_top(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_119_get_top)
HXDLIN( 119)		return this->_top;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_top,return )

Float TextDisplay_obj::set_top(Float value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_121_set_top)
HXLINE( 122)		if ((value == this->_top)) {
HXLINE( 123)			return value;
            		}
HXLINE( 126)		this->invalidateComponent(HX_("position",a9,a0,fa,ca));
HXLINE( 127)		this->_top = value;
HXLINE( 128)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_top,return )

Float TextDisplay_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_132_set_width)
HXLINE( 133)		if ((this->_width == value)) {
HXLINE( 134)			return value;
            		}
HXLINE( 137)		this->invalidateComponent(HX_("display",42,2a,4a,bb));
HXLINE( 138)		this->_width = value;
HXLINE( 139)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_width,return )

Float TextDisplay_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_143_get_width)
HXDLIN( 143)		return this->_width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_width,return )

Float TextDisplay_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_147_set_height)
HXLINE( 148)		if ((this->_height == value)) {
HXLINE( 149)			return value;
            		}
HXLINE( 152)		this->invalidateComponent(HX_("display",42,2a,4a,bb));
HXLINE( 153)		this->_height = value;
HXLINE( 154)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_height,return )

Float TextDisplay_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_158_get_height)
HXDLIN( 158)		return this->_height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_height,return )

Float TextDisplay_obj::get_textWidth(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_162_get_textWidth)
HXLINE( 163)		bool _hx_tmp;
HXDLIN( 163)		if (::hx::IsNull( this->_text )) {
HXLINE( 163)			_hx_tmp = ::hx::IsNull( this->_htmlText );
            		}
            		else {
HXLINE( 163)			_hx_tmp = false;
            		}
HXDLIN( 163)		if (_hx_tmp) {
HXLINE( 164)			return ( (Float)(0) );
            		}
HXLINE( 167)		bool _hx_tmp1;
HXDLIN( 167)		if (::hx::IsNotNull( this->_text )) {
HXLINE( 167)			_hx_tmp1 = (this->_text.length == 0);
            		}
            		else {
HXLINE( 167)			_hx_tmp1 = false;
            		}
HXDLIN( 167)		if (_hx_tmp1) {
HXLINE( 168)			return ( (Float)(0) );
            		}
HXLINE( 171)		bool _hx_tmp2;
HXDLIN( 171)		if (::hx::IsNotNull( this->_htmlText )) {
HXLINE( 171)			_hx_tmp2 = (this->_htmlText.length == 0);
            		}
            		else {
HXLINE( 171)			_hx_tmp2 = false;
            		}
HXDLIN( 171)		if (_hx_tmp2) {
HXLINE( 172)			return ( (Float)(0) );
            		}
HXLINE( 175)		if ((this->isComponentInvalid(null()) == true)) {
HXLINE( 176)			this->validateComponent(null());
            		}
HXLINE( 179)		return this->_textWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_textWidth,return )

Float TextDisplay_obj::get_textHeight(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_183_get_textHeight)
HXLINE( 198)		if ((this->isComponentInvalid(null()) == true)) {
HXLINE( 199)			this->validateComponent(null());
            		}
HXLINE( 202)		return this->_textHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_textHeight,return )

bool TextDisplay_obj::get_multiline(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_207_get_multiline)
HXDLIN( 207)		return this->_displayData->multiline;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_multiline,return )

bool TextDisplay_obj::set_multiline(bool value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_209_set_multiline)
HXLINE( 210)		if ((value == this->_displayData->multiline)) {
HXLINE( 211)			return value;
            		}
HXLINE( 214)		this->invalidateComponent(HX_("style",31,a5,1d,84));
HXLINE( 215)		this->_displayData->multiline = value;
HXLINE( 216)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_multiline,return )

bool TextDisplay_obj::get_wordWrap(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_221_get_wordWrap)
HXDLIN( 221)		return this->_displayData->wordWrap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_wordWrap,return )

bool TextDisplay_obj::set_wordWrap(bool value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_223_set_wordWrap)
HXLINE( 224)		if ((value == this->_displayData->wordWrap)) {
HXLINE( 225)			return value;
            		}
HXLINE( 228)		this->invalidateComponent(HX_("style",31,a5,1d,84));
HXLINE( 229)		this->_displayData->wordWrap = value;
HXLINE( 230)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_wordWrap,return )

bool TextDisplay_obj::get_selectable(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_235_get_selectable)
HXDLIN( 235)		return this->_displayData->selectable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_selectable,return )

bool TextDisplay_obj::set_selectable(bool value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_237_set_selectable)
HXLINE( 238)		if ((value == this->_displayData->selectable)) {
HXLINE( 239)			return value;
            		}
HXLINE( 242)		this->_displayData->selectable = value;
HXLINE( 243)		this->invalidateComponent(HX_("style",31,a5,1d,84));
HXLINE( 244)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_selectable,return )

bool TextDisplay_obj::isComponentInvalid(::String __o_flag){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_247_isComponentInvalid)
HXLINE( 248)		if ((this->_isAllInvalid == true)) {
HXLINE( 249)			return true;
            		}
HXLINE( 252)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE( 253)			{
HXLINE( 253)				 ::Dynamic value = this->_invalidationFlags->iterator();
HXDLIN( 253)				while(( (bool)(value->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 253)					bool value1 = ( (bool)(value->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 254)					return true;
            				}
            			}
HXLINE( 257)			return false;
            		}
HXLINE( 260)		return this->_invalidationFlags->exists(flag);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,isComponentInvalid,return )

void TextDisplay_obj::invalidateComponent(::String __o_flag){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_264_invalidateComponent)
HXDLIN( 264)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE( 265)			this->_isAllInvalid = true;
HXLINE( 266)			this->parentComponent->invalidateComponent(HX_("textDisplay",15,25,ca,96),null());
            		}
            		else {
HXLINE( 267)			if (!(this->_invalidationFlags->exists(flag))) {
HXLINE( 268)				this->_invalidationFlags->set(flag,true);
HXLINE( 269)				this->parentComponent->invalidateComponent(HX_("textDisplay",15,25,ca,96),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,invalidateComponent,(void))

int TextDisplay_obj::get_depth(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_277_get_depth)
HXDLIN( 277)		return this->_depth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_depth,return )

int TextDisplay_obj::set_depth(int value){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_279_set_depth)
HXLINE( 280)		if ((this->_depth == value)) {
HXLINE( 281)			return value;
            		}
HXLINE( 284)		this->_depth = value;
HXLINE( 286)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_depth,return )

void TextDisplay_obj::updateComponentDisplay(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_289_updateComponentDisplay)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,updateComponentDisplay,(void))

void TextDisplay_obj::validateComponent(::hx::Null< bool >  __o_nextFrame){
            		bool nextFrame = __o_nextFrame.Default(true);
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_292_validateComponent)
HXLINE( 293)		bool _hx_tmp;
HXDLIN( 293)		if ((this->_isValidating != true)) {
HXLINE( 293)			_hx_tmp = (this->isComponentInvalid(null()) == false);
            		}
            		else {
HXLINE( 293)			_hx_tmp = true;
            		}
HXDLIN( 293)		if (_hx_tmp) {
HXLINE( 294)			return;
            		}
HXLINE( 297)		this->_isValidating = true;
HXLINE( 299)		this->validateComponentInternal();
HXLINE( 304)		this->_invalidationFlags->clear();
HXLINE( 307)		this->_isAllInvalid = false;
HXLINE( 308)		this->_isValidating = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,validateComponent,(void))

void TextDisplay_obj::validateComponentInternal(){
            	HX_STACKFRAME(&_hx_pos_aba319191a839d6a_311_validateComponentInternal)
HXLINE( 312)		bool dataInvalid = this->isComponentInvalid(HX_("data",2a,56,63,42));
HXLINE( 313)		bool styleInvalid = this->isComponentInvalid(HX_("style",31,a5,1d,84));
HXLINE( 314)		bool positionInvalid = this->isComponentInvalid(HX_("position",a9,a0,fa,ca));
HXLINE( 315)		bool displayInvalid = this->isComponentInvalid(HX_("display",42,2a,4a,bb));
HXLINE( 316)		bool measureInvalid = this->isComponentInvalid(HX_("measure",5e,fb,e9,3c));
HXLINE( 318)		if (dataInvalid) {
HXLINE( 319)			this->validateData();
            		}
HXLINE( 322)		if (styleInvalid) {
HXLINE( 323)			if (this->validateStyle()) {
HXLINE( 323)				measureInvalid = true;
            			}
            		}
HXLINE( 326)		bool _hx_tmp;
HXDLIN( 326)		if (!(positionInvalid)) {
HXLINE( 326)			_hx_tmp = styleInvalid;
            		}
            		else {
HXLINE( 326)			_hx_tmp = true;
            		}
HXDLIN( 326)		if (_hx_tmp) {
HXLINE( 327)			this->validatePosition();
            		}
HXLINE( 330)		if (displayInvalid) {
HXLINE( 331)			this->validateDisplay();
            		}
HXLINE( 334)		bool _hx_tmp1;
HXDLIN( 334)		bool _hx_tmp2;
HXDLIN( 334)		if (!(dataInvalid)) {
HXLINE( 334)			_hx_tmp2 = displayInvalid;
            		}
            		else {
HXLINE( 334)			_hx_tmp2 = true;
            		}
HXDLIN( 334)		if (!(_hx_tmp2)) {
HXLINE( 334)			_hx_tmp1 = measureInvalid;
            		}
            		else {
HXLINE( 334)			_hx_tmp1 = true;
            		}
HXDLIN( 334)		if (_hx_tmp1) {
HXLINE( 335)			Float oldTextWidth = this->get_textWidth();
HXLINE( 336)			Float oldTextHeight = this->get_textHeight();
HXLINE( 337)			this->measureText();
HXLINE( 339)			bool _hx_tmp;
HXDLIN( 339)			if ((this->get_textWidth() == oldTextWidth)) {
HXLINE( 339)				_hx_tmp = (this->get_textHeight() != oldTextHeight);
            			}
            			else {
HXLINE( 339)				_hx_tmp = true;
            			}
HXDLIN( 339)			if (_hx_tmp) {
HXLINE( 340)				this->parentComponent->invalidateComponent(HX_("layout",aa,ae,b8,58),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,validateComponentInternal,(void))


::hx::ObjectPtr< TextDisplay_obj > TextDisplay_obj::__new() {
	::hx::ObjectPtr< TextDisplay_obj > __this = new TextDisplay_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextDisplay_obj > TextDisplay_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextDisplay_obj *__this = (TextDisplay_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextDisplay_obj), true, "haxe.ui.core.TextDisplay"));
	*(void **)__this = TextDisplay_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextDisplay_obj::TextDisplay_obj()
{
}

void TextDisplay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextDisplay);
	HX_MARK_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_MARK_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_MARK_MEMBER_NAME(_isValidating,"_isValidating");
	HX_MARK_MEMBER_NAME(isComponentOffscreen,"isComponentOffscreen");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(_depth,"_depth");
	 ::haxe::ui::backend::TextDisplayImpl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextDisplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_VISIT_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_VISIT_MEMBER_NAME(_isValidating,"_isValidating");
	HX_VISIT_MEMBER_NAME(isComponentOffscreen,"isComponentOffscreen");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(_depth,"_depth");
	 ::haxe::ui::backend::TextDisplayImpl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextDisplay_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_id() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_top() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_left() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depth() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return ::hx::Val( get_id_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return ::hx::Val( set_id_dyn() ); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"_depth") ) { return ::hx::Val( _depth ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_top") ) { return ::hx::Val( get_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return ::hx::Val( set_top_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_htmlText() ); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return ::hx::Val( get_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return ::hx::Val( set_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_wordWrap() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textStyle() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_textWidth() : textWidth ); }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_multiline() ); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return ::hx::Val( get_depth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return ::hx::Val( set_depth_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_textHeight() : textHeight ); }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectable() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return ::hx::Val( get_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return ::hx::Val( set_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return ::hx::Val( get_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return ::hx::Val( set_wordWrap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { return ::hx::Val( _isAllInvalid ); }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { return ::hx::Val( _isValidating ); }
		if (HX_FIELD_EQ(inName,"get_textStyle") ) { return ::hx::Val( get_textStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textStyle") ) { return ::hx::Val( set_textStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return ::hx::Val( get_textWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return ::hx::Val( get_multiline_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return ::hx::Val( set_multiline_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return ::hx::Val( get_textHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return ::hx::Val( get_selectable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return ::hx::Val( set_selectable_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"validateComponent") ) { return ::hx::Val( validateComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { return ::hx::Val( _invalidationFlags ); }
		if (HX_FIELD_EQ(inName,"isComponentInvalid") ) { return ::hx::Val( isComponentInvalid_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"invalidateComponent") ) { return ::hx::Val( invalidateComponent_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isComponentOffscreen") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isComponentOffscreen() : isComponentOffscreen ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"updateComponentDisplay") ) { return ::hx::Val( updateComponentDisplay_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_isComponentOffscreen") ) { return ::hx::Val( get_isComponentOffscreen_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"validateComponentInternal") ) { return ::hx::Val( validateComponentInternal_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextDisplay_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_id(inValue.Cast< ::String >()) ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_top(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_left(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_depth(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_depth") ) { _depth=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_htmlText(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wordWrap(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textStyle(inValue.Cast<  ::haxe::ui::styles::Style >()) ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_multiline(inValue.Cast< bool >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectable(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { _isAllInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { _isValidating=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { _invalidationFlags=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isComponentOffscreen") ) { isComponentOffscreen=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextDisplay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_invalidationFlags",ca,12,21,cb));
	outFields->push(HX_("_isAllInvalid",3f,9b,7e,b8));
	outFields->push(HX_("_isValidating",bc,c6,7a,96));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("isComponentOffscreen",28,be,d5,68));
	outFields->push(HX_("textStyle",44,35,0b,1d));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("htmlText",b8,1f,38,10));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("textWidth",19,46,50,63));
	outFields->push(HX_("textHeight",74,88,3c,39));
	outFields->push(HX_("multiline",ed,d2,11,9e));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("selectable",96,b6,2a,c4));
	outFields->push(HX_("_depth",44,38,11,d3));
	outFields->push(HX_("depth",03,f1,29,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextDisplay_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(TextDisplay_obj,_invalidationFlags),HX_("_invalidationFlags",ca,12,21,cb)},
	{::hx::fsBool,(int)offsetof(TextDisplay_obj,_isAllInvalid),HX_("_isAllInvalid",3f,9b,7e,b8)},
	{::hx::fsBool,(int)offsetof(TextDisplay_obj,_isValidating),HX_("_isValidating",bc,c6,7a,96)},
	{::hx::fsBool,(int)offsetof(TextDisplay_obj,isComponentOffscreen),HX_("isComponentOffscreen",28,be,d5,68)},
	{::hx::fsFloat,(int)offsetof(TextDisplay_obj,textWidth),HX_("textWidth",19,46,50,63)},
	{::hx::fsFloat,(int)offsetof(TextDisplay_obj,textHeight),HX_("textHeight",74,88,3c,39)},
	{::hx::fsInt,(int)offsetof(TextDisplay_obj,_depth),HX_("_depth",44,38,11,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextDisplay_obj_sStaticStorageInfo = 0;
#endif

static ::String TextDisplay_obj_sMemberFields[] = {
	HX_("_invalidationFlags",ca,12,21,cb),
	HX_("_isAllInvalid",3f,9b,7e,b8),
	HX_("_isValidating",bc,c6,7a,96),
	HX_("get_id",24,f3,2f,a3),
	HX_("set_id",98,47,78,6f),
	HX_("isComponentOffscreen",28,be,d5,68),
	HX_("get_isComponentOffscreen",b1,db,71,ab),
	HX_("get_textStyle",1b,09,6f,de),
	HX_("set_textStyle",27,eb,74,23),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_htmlText",c1,d3,51,c5),
	HX_("set_htmlText",35,f7,4a,da),
	HX_("get_left",90,c3,6a,c7),
	HX_("set_left",04,1d,c8,75),
	HX_("get_top",2c,2f,cd,26),
	HX_("set_top",38,c0,ce,19),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_height",24,16,51,f6),
	HX_("get_height",b0,77,d3,f2),
	HX_("textWidth",19,46,50,63),
	HX_("get_textWidth",f0,19,b4,24),
	HX_("textHeight",74,88,3c,39),
	HX_("get_textHeight",bd,10,32,af),
	HX_("get_multiline",c4,a6,75,5f),
	HX_("set_multiline",d0,88,7b,a4),
	HX_("get_wordWrap",bd,c8,f4,b5),
	HX_("set_wordWrap",31,ec,ed,ca),
	HX_("get_selectable",df,3e,20,3a),
	HX_("set_selectable",53,27,40,5a),
	HX_("isComponentInvalid",c4,7f,60,d7),
	HX_("invalidateComponent",c2,2f,39,9e),
	HX_("_depth",44,38,11,d3),
	HX_("get_depth",5a,4d,d3,1a),
	HX_("set_depth",66,39,24,fe),
	HX_("updateComponentDisplay",2e,67,62,d4),
	HX_("validateComponent",47,3d,eb,a4),
	HX_("validateComponentInternal",a4,7f,0c,11),
	::String(null()) };

::hx::Class TextDisplay_obj::__mClass;

void TextDisplay_obj::__register()
{
	TextDisplay_obj _hx_dummy;
	TextDisplay_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.TextDisplay",78,36,65,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextDisplay_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextDisplay_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextDisplay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextDisplay_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
