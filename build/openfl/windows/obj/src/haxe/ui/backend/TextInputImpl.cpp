#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_TextInputData
#include <haxe/ui/core/TextInputData.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4ea6bad8e3979189_12_new,"haxe.ui.backend.TextInputImpl","new",0xf95d98c3,"haxe.ui.backend.TextInputImpl.new","haxe/ui/backend/TextInputImpl.hx",12,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_23_createTextField,"haxe.ui.backend.TextInputImpl","createTextField",0x787c2f14,"haxe.ui.backend.TextInputImpl.createTextField","haxe/ui/backend/TextInputImpl.hx",23,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_43_focus,"haxe.ui.backend.TextInputImpl","focus",0xa9e046fb,"haxe.ui.backend.TextInputImpl.focus","haxe/ui/backend/TextInputImpl.hx",43,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_49_blur,"haxe.ui.backend.TextInputImpl","blur",0x309ed0e4,"haxe.ui.backend.TextInputImpl.blur","haxe/ui/backend/TextInputImpl.hx",49,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_54_dispose,"haxe.ui.backend.TextInputImpl","dispose",0x9185b682,"haxe.ui.backend.TextInputImpl.dispose","haxe/ui/backend/TextInputImpl.hx",54,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_66_set_dataSource,"haxe.ui.backend.TextInputImpl","set_dataSource",0x302b83df,"haxe.ui.backend.TextInputImpl.set_dataSource","haxe/ui/backend/TextInputImpl.hx",66,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_79_onDataSourceAdd,"haxe.ui.backend.TextInputImpl","onDataSourceAdd",0x3a06e0c0,"haxe.ui.backend.TextInputImpl.onDataSourceAdd","haxe/ui/backend/TextInputImpl.hx",79,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_86_onDataSourceClear,"haxe.ui.backend.TextInputImpl","onDataSourceClear",0x1e2885ec,"haxe.ui.backend.TextInputImpl.onDataSourceClear","haxe/ui/backend/TextInputImpl.hx",86,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_94_get_caretIndex,"haxe.ui.backend.TextInputImpl","get_caretIndex",0xcf93db55,"haxe.ui.backend.TextInputImpl.get_caretIndex","haxe/ui/backend/TextInputImpl.hx",94,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_96_set_caretIndex,"haxe.ui.backend.TextInputImpl","set_caretIndex",0xefb3c3c9,"haxe.ui.backend.TextInputImpl.set_caretIndex","haxe/ui/backend/TextInputImpl.hx",96,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_104_validateData,"haxe.ui.backend.TextInputImpl","validateData",0x3eace91d,"haxe.ui.backend.TextInputImpl.validateData","haxe/ui/backend/TextInputImpl.hx",104,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_129_validateStyle,"haxe.ui.backend.TextInputImpl","validateStyle",0x4834a6de,"haxe.ui.backend.TextInputImpl.validateStyle","haxe/ui/backend/TextInputImpl.hx",129,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_145_validatePosition,"haxe.ui.backend.TextInputImpl","validatePosition",0x8ad4291c,"haxe.ui.backend.TextInputImpl.validatePosition","haxe/ui/backend/TextInputImpl.hx",145,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_161_measureText,"haxe.ui.backend.TextInputImpl","measureText",0x27ee5e8e,"haxe.ui.backend.TextInputImpl.measureText","haxe/ui/backend/TextInputImpl.hx",161,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_195_onChange,"haxe.ui.backend.TextInputImpl","onChange",0x32f578ac,"haxe.ui.backend.TextInputImpl.onChange","haxe/ui/backend/TextInputImpl.hx",195,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_206_onScroll,"haxe.ui.backend.TextInputImpl","onScroll",0xc2e7bf49,"haxe.ui.backend.TextInputImpl.onScroll","haxe/ui/backend/TextInputImpl.hx",206,0x120cd8ae)
namespace haxe{
namespace ui{
namespace backend{

void TextInputImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_12_new)
HXLINE(  13)		super::__construct();
HXLINE(  15)		this->_resetHtmlText = false;
HXLINE(  17)		this->textField->addEventListener(HX_("change",70,91,72,b7),this->onChange_dyn(),false,0,true);
HXLINE(  18)		this->textField->addEventListener(HX_("scroll",0d,d8,64,47),this->onScroll_dyn(),false,0,true);
HXLINE(  19)		this->_inputData->vscrollPageStep = 1;
HXLINE(  20)		this->_inputData->vscrollNativeWheel = true;
            	}

Dynamic TextInputImpl_obj::__CreateEmpty() { return new TextInputImpl_obj; }

void *TextInputImpl_obj::_hx_vtable = 0;

Dynamic TextInputImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextInputImpl_obj > _hx_result = new TextInputImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextInputImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c38975b) {
		if (inClassId<=(int)0x0b41c5d8) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b41c5d8;
		} else {
			return inClassId==(int)0x0c38975b;
		}
	} else {
		return inClassId==(int)0x256fefab;
	}
}

 ::openfl::text::TextField TextInputImpl_obj::createTextField(){
            	HX_GC_STACKFRAME(&_hx_pos_4ea6bad8e3979189_23_createTextField)
HXLINE(  24)		 ::openfl::text::TextField tf =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  25)		tf->set_type(1);
HXLINE(  26)		tf->set_selectable(true);
HXLINE(  27)		tf->mouseEnabled = true;
HXLINE(  28)		tf->set_autoSize(2);
HXLINE(  29)		tf->set_multiline(true);
HXLINE(  30)		tf->set_wordWrap(true);
HXLINE(  39)		return tf;
            	}


void TextInputImpl_obj::focus(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_43_focus)
HXDLIN(  43)		if (::hx::IsNotNull( this->textField->stage )) {
HXLINE(  44)			this->textField->stage->set_focus(this->textField);
            		}
            	}


void TextInputImpl_obj::blur(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_49_blur)
HXDLIN(  49)		if (::hx::IsNotNull( this->textField->stage )) {
HXLINE(  50)			this->textField->stage->set_focus(null());
            		}
            	}


void TextInputImpl_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_54_dispose)
HXLINE(  55)		if (::hx::IsNotNull( this->textField )) {
HXLINE(  56)			if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(  57)				this->parentComponent->removeChild(this->textField);
            			}
HXLINE(  59)			this->textField->removeEventListener(HX_("change",70,91,72,b7),this->onChange_dyn(),null());
HXLINE(  60)			this->textField->removeEventListener(HX_("scroll",0d,d8,64,47),this->onScroll_dyn(),null());
HXLINE(  61)			this->textField = null();
            		}
HXLINE(  63)		this->super::dispose();
            	}


 ::haxe::ui::data::DataSource TextInputImpl_obj::set_dataSource( ::haxe::ui::data::DataSource value){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_66_set_dataSource)
HXLINE(  67)		if (::hx::IsNotNull( this->_dataSource )) {
HXLINE(  68)			this->_dataSource->onAdd = null();
HXLINE(  69)			this->_dataSource->onChange = null();
            		}
HXLINE(  71)		this->_dataSource = value;
HXLINE(  72)		if (::hx::IsNotNull( this->_dataSource )) {
HXLINE(  73)			this->_dataSource->onAdd = this->onDataSourceAdd_dyn();
HXLINE(  74)			this->_dataSource->onClear = this->onDataSourceClear_dyn();
            		}
HXLINE(  76)		return value;
            	}


void TextInputImpl_obj::onDataSourceAdd(::String s){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_79_onDataSourceAdd)
HXLINE(  80)		this->textField->appendText(s);
HXLINE(  81)		 ::haxe::ui::core::Component _hx_tmp = this->parentComponent;
HXDLIN(  81)		_hx_tmp->set_text(this->textField->get_text());
HXLINE(  82)		this->measureText();
HXLINE(  83)		this->parentComponent->syncComponentValidation(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInputImpl_obj,onDataSourceAdd,(void))

void TextInputImpl_obj::onDataSourceClear(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_86_onDataSourceClear)
HXLINE(  87)		this->textField->set_text(HX_("",00,00,00,00));
HXLINE(  88)		this->parentComponent->set_text(HX_("",00,00,00,00));
HXLINE(  89)		this->measureText();
HXLINE(  90)		this->parentComponent->syncComponentValidation(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInputImpl_obj,onDataSourceClear,(void))

int TextInputImpl_obj::get_caretIndex(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_94_get_caretIndex)
HXDLIN(  94)		return this->textField->get_caretIndex();
            	}


int TextInputImpl_obj::set_caretIndex(int value){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_96_set_caretIndex)
HXLINE(  97)		this->textField->setSelection(value,value);
HXLINE(  98)		return value;
            	}


void TextInputImpl_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_104_validateData)
HXLINE( 105)		this->textField->removeEventListener(HX_("scroll",0d,d8,64,47),this->onScroll_dyn(),null());
HXLINE( 107)		this->super::validateData();
HXLINE( 109)		bool changed = false;
HXLINE( 110)		int hscrollValue = ::Math_obj::round(this->_inputData->hscrollPos);
HXLINE( 111)		if ((this->textField->get_scrollH() != hscrollValue)) {
HXLINE( 112)			this->textField->set_scrollH(hscrollValue);
HXLINE( 113)			changed = true;
            		}
HXLINE( 116)		int vscrollValue = ::Math_obj::round(this->_inputData->vscrollPos);
HXLINE( 117)		if ((this->textField->get_scrollV() != vscrollValue)) {
HXLINE( 118)			this->textField->set_scrollV(vscrollValue);
HXLINE( 119)			changed = true;
            		}
HXLINE( 122)		this->textField->addEventListener(HX_("scroll",0d,d8,64,47),this->onScroll_dyn(),false,0,true);
HXLINE( 124)		if ((changed == true)) {
HXLINE( 125)			this->onScroll(null());
            		}
            	}


bool TextInputImpl_obj::validateStyle(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_129_validateStyle)
HXLINE( 130)		bool measureTextRequired = this->super::validateStyle();
HXLINE( 132)		bool _hx_tmp = this->textField->get_displayAsPassword();
HXDLIN( 132)		if ((_hx_tmp != this->_inputData->password)) {
HXLINE( 133)			this->textField->set_displayAsPassword(this->_inputData->password);
            		}
HXLINE( 136)		if (this->parentComponent->get_disabled()) {
HXLINE( 137)			this->textField->set_selectable(false);
            		}
            		else {
HXLINE( 139)			this->textField->set_selectable(true);
            		}
HXLINE( 142)		return measureTextRequired;
            	}


void TextInputImpl_obj::validatePosition(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_145_validatePosition)
HXLINE( 146)		this->_left = ( (Float)(::Math_obj::round(this->_left)) );
HXLINE( 147)		this->_top = ( (Float)(::Math_obj::round(this->_top)) );
HXLINE( 156)		this->textField->set_x((this->_left - ( (Float)(3) )));
HXLINE( 157)		this->textField->set_y((this->_top - ( (Float)(3) )));
            	}


void TextInputImpl_obj::measureText(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_161_measureText)
HXLINE( 167)		this->super::measureText();
HXLINE( 179)		this->_inputData->hscrollMax = ( (Float)(this->textField->get_maxScrollH()) );
HXLINE( 181)		this->_inputData->hscrollPageSize = ((this->_width * this->_inputData->hscrollMax) / this->_textWidth);
HXLINE( 183)		int msv = this->textField->get_maxScrollV();
HXLINE( 189)		this->_inputData->vscrollMax = ( (Float)(msv) );
HXLINE( 192)		this->_inputData->vscrollPageSize = ((this->_height * this->_inputData->vscrollMax) / this->_textHeight);
            	}


void TextInputImpl_obj::onChange( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_195_onChange)
HXLINE( 196)		this->_text = this->textField->get_text();
HXLINE( 197)		this->_htmlText = this->textField->get_htmlText();
HXLINE( 199)		this->measureText();
HXLINE( 201)		if (::hx::IsNotNull( this->_inputData->onChangedCallback )) {
HXLINE( 202)			this->_inputData->onChangedCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInputImpl_obj,onChange,(void))

void TextInputImpl_obj::onScroll( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_206_onScroll)
HXLINE( 207)		Float _hx_tmp = this->_inputData->vscrollPos;
HXDLIN( 207)		if (((_hx_tmp - ( (Float)(this->textField->get_scrollV()) )) > 2)) {
HXLINE( 208)			return;
            		}
HXLINE( 210)		this->_inputData->hscrollPos = ( (Float)(this->textField->get_scrollH()) );
HXLINE( 211)		this->_inputData->vscrollPos = ( (Float)(this->textField->get_scrollV()) );
HXLINE( 213)		if (::hx::IsNotNull( this->_inputData->onScrollCallback )) {
HXLINE( 214)			this->_inputData->onScrollCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInputImpl_obj,onScroll,(void))


::hx::ObjectPtr< TextInputImpl_obj > TextInputImpl_obj::__new() {
	::hx::ObjectPtr< TextInputImpl_obj > __this = new TextInputImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextInputImpl_obj > TextInputImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextInputImpl_obj *__this = (TextInputImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextInputImpl_obj), true, "haxe.ui.backend.TextInputImpl"));
	*(void **)__this = TextInputImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextInputImpl_obj::TextInputImpl_obj()
{
}

::hx::Val TextInputImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"blur") ) { return ::hx::Val( blur_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { return ::hx::Val( focus_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"onScroll") ) { return ::hx::Val( onScroll_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"measureText") ) { return ::hx::Val( measureText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"validateStyle") ) { return ::hx::Val( validateStyle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return ::hx::Val( set_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_caretIndex") ) { return ::hx::Val( get_caretIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_caretIndex") ) { return ::hx::Val( set_caretIndex_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTextField") ) { return ::hx::Val( createTextField_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDataSourceAdd") ) { return ::hx::Val( onDataSourceAdd_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"validatePosition") ) { return ::hx::Val( validatePosition_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onDataSourceClear") ) { return ::hx::Val( onDataSourceClear_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextInputImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextInputImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String TextInputImpl_obj_sMemberFields[] = {
	HX_("createTextField",31,de,75,3a),
	HX_("focus",d8,5f,89,04),
	HX_("blur",a7,42,19,41),
	HX_("dispose",9f,80,4c,bb),
	HX_("set_dataSource",62,e7,e8,b3),
	HX_("onDataSourceAdd",dd,8f,00,fc),
	HX_("onDataSourceClear",49,f6,41,95),
	HX_("get_caretIndex",d8,3e,51,53),
	HX_("set_caretIndex",4c,27,71,73),
	HX_("validateData",e0,55,63,96),
	HX_("validateStyle",bb,64,1d,b0),
	HX_("validatePosition",5f,b3,53,83),
	HX_("measureText",2b,fb,80,50),
	HX_("onChange",ef,87,1f,97),
	HX_("onScroll",8c,ce,11,27),
	::String(null()) };

::hx::Class TextInputImpl_obj::__mClass;

void TextInputImpl_obj::__register()
{
	TextInputImpl_obj _hx_dummy;
	TextInputImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.TextInputImpl",51,7b,53,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextInputImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextInputImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextInputImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextInputImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
