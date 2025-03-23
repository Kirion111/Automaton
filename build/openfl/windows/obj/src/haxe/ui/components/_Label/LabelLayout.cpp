#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_components__Label_LabelLayout
#include <haxe/ui/components/_Label/LabelLayout.h>
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
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3d78d56b91c56ee8_67_new,"haxe.ui.components._Label.LabelLayout","new",0xf790173d,"haxe.ui.components._Label.LabelLayout.new","haxe/ui/components/Label.hx",67,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_3d78d56b91c56ee8_68_resizeChildren,"haxe.ui.components._Label.LabelLayout","resizeChildren",0xf5af5f96,"haxe.ui.components._Label.LabelLayout.resizeChildren","haxe/ui/components/Label.hx",68,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_3d78d56b91c56ee8_103_repositionChildren,"haxe.ui.components._Label.LabelLayout","repositionChildren",0x48dcfa7e,"haxe.ui.components._Label.LabelLayout.repositionChildren","haxe/ui/components/Label.hx",103,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_3d78d56b91c56ee8_109_calcAutoSize,"haxe.ui.components._Label.LabelLayout","calcAutoSize",0x9b93f708,"haxe.ui.components._Label.LabelLayout.calcAutoSize","haxe/ui/components/Label.hx",109,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_3d78d56b91c56ee8_118_textAlign,"haxe.ui.components._Label.LabelLayout","textAlign",0x8b3b3175,"haxe.ui.components._Label.LabelLayout.textAlign","haxe/ui/components/Label.hx",118,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_c49d9f1a6e109df1_700_cloneLayout,"haxe.ui.components._Label.LabelLayout","cloneLayout",0xa56685c4,"haxe.ui.components._Label.LabelLayout.cloneLayout","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_244f718c00b329b5_113_self,"haxe.ui.components._Label.LabelLayout","self",0xa9d2460f,"haxe.ui.components._Label.LabelLayout.self","haxe/ui/macros/LayoutMacros.hx",113,0xe44eaad7)
namespace haxe{
namespace ui{
namespace components{
namespace _Label{

void LabelLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3d78d56b91c56ee8_67_new)
HXDLIN(  67)		super::__construct();
            	}

Dynamic LabelLayout_obj::__CreateEmpty() { return new LabelLayout_obj; }

void *LabelLayout_obj::_hx_vtable = 0;

Dynamic LabelLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LabelLayout_obj > _hx_result = new LabelLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LabelLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3799f835) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x3799f835;
		}
	} else {
		return inClassId==(int)0x3bc5e019;
	}
}

void LabelLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_3d78d56b91c56ee8_68_resizeChildren)
HXLINE(  69)		if ((this->get_component()->get_autoWidth() == false)) {
HXLINE(  70)			 ::haxe::ui::core::TextDisplay _hx_tmp = this->get_component()->getTextDisplay();
HXDLIN(  70)			 ::Dynamic _hx_tmp1 = this->get_component()->get_componentWidth();
HXDLIN(  70)			Float _hx_tmp2 = (( (Float)(_hx_tmp1) ) - this->get_paddingLeft());
HXDLIN(  70)			_hx_tmp->set_width((_hx_tmp2 - this->get_paddingRight()));
HXLINE(  72)			bool wordWrap = true;
HXLINE(  73)			bool _hx_tmp3;
HXDLIN(  73)			if (::hx::IsNotNull( this->_component->get_style() )) {
HXLINE(  73)				_hx_tmp3 = ::hx::IsNotNull( this->_component->get_style()->wordWrap );
            			}
            			else {
HXLINE(  73)				_hx_tmp3 = false;
            			}
HXDLIN(  73)			if (_hx_tmp3) {
HXLINE(  74)				wordWrap = ( (bool)(this->_component->get_style()->wordWrap) );
            			}
HXLINE(  82)			this->get_component()->getTextDisplay()->textField->set_autoSize(2);
HXLINE(  83)			this->get_component()->getTextDisplay()->set_multiline(wordWrap);
HXLINE(  84)			this->get_component()->getTextDisplay()->set_wordWrap(wordWrap);
            		}
            		else {
HXLINE(  92)			 ::haxe::ui::core::TextDisplay _hx_tmp = this->get_component()->getTextDisplay();
HXDLIN(  92)			_hx_tmp->set_width(this->get_component()->getTextDisplay()->get_textWidth());
            		}
HXLINE(  95)		if ((this->get_component()->get_autoHeight() == true)) {
HXLINE(  96)			 ::haxe::ui::core::TextDisplay _hx_tmp = this->get_component()->getTextDisplay();
HXDLIN(  96)			_hx_tmp->set_height(this->get_component()->getTextDisplay()->get_textHeight());
            		}
            		else {
HXLINE(  98)			 ::haxe::ui::core::TextDisplay _hx_tmp = this->get_component()->getTextDisplay();
HXDLIN(  98)			_hx_tmp->set_height(this->get_component()->get_height());
            		}
            	}


void LabelLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_3d78d56b91c56ee8_103_repositionChildren)
HXDLIN( 103)		if ((this->get_component()->hasTextDisplay() == true)) {
HXLINE( 104)			 ::haxe::ui::core::TextDisplay _hx_tmp = this->get_component()->getTextDisplay();
HXDLIN( 104)			_hx_tmp->set_left(this->get_paddingLeft());
HXLINE( 105)			 ::haxe::ui::core::TextDisplay _hx_tmp1 = this->get_component()->getTextDisplay();
HXDLIN( 105)			_hx_tmp1->set_top(this->get_paddingTop());
            		}
            	}


 ::haxe::ui::geom::Size LabelLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_3d78d56b91c56ee8_109_calcAutoSize)
HXLINE( 110)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(exclusions);
HXLINE( 111)		if ((this->get_component()->hasTextDisplay() == true)) {
HXLINE( 112)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 112)			Float size2 = size1->width;
HXDLIN( 112)			size1->width = (size2 + this->get_component()->getTextDisplay()->get_textWidth());
HXLINE( 113)			 ::haxe::ui::geom::Size size3 = size;
HXDLIN( 113)			Float size4 = size3->height;
HXDLIN( 113)			size3->height = (size4 + this->get_component()->getTextDisplay()->get_textHeight());
            		}
HXLINE( 115)		return size;
            	}


::String LabelLayout_obj::textAlign( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_3d78d56b91c56ee8_118_textAlign)
HXLINE( 119)		bool _hx_tmp;
HXDLIN( 119)		bool _hx_tmp1;
HXDLIN( 119)		if (::hx::IsNotNull( child )) {
HXLINE( 119)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 119)			_hx_tmp1 = true;
            		}
HXDLIN( 119)		if (!(_hx_tmp1)) {
HXLINE( 119)			_hx_tmp = ::hx::IsNull( child->get_style()->textAlign );
            		}
            		else {
HXLINE( 119)			_hx_tmp = true;
            		}
HXDLIN( 119)		if (_hx_tmp) {
HXLINE( 120)			return HX_("left",07,08,b0,47);
            		}
HXLINE( 122)		return child->get_style()->textAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LabelLayout_obj,textAlign,return )

 ::haxe::ui::layouts::Layout LabelLayout_obj::cloneLayout(){
            	HX_STACKFRAME(&_hx_pos_c49d9f1a6e109df1_700_cloneLayout)
HXLINE(  85)		 ::haxe::ui::components::_Label::LabelLayout c = ( ( ::haxe::ui::components::_Label::LabelLayout)(this->super::cloneLayout()) );
HXLINE( 101)		return c;
            	}


 ::haxe::ui::layouts::Layout LabelLayout_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_244f718c00b329b5_113_self)
HXDLIN( 113)		return  ::haxe::ui::components::_Label::LabelLayout_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< LabelLayout_obj > LabelLayout_obj::__new() {
	::hx::ObjectPtr< LabelLayout_obj > __this = new LabelLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LabelLayout_obj > LabelLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LabelLayout_obj *__this = (LabelLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LabelLayout_obj), true, "haxe.ui.components._Label.LabelLayout"));
	*(void **)__this = LabelLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LabelLayout_obj::LabelLayout_obj()
{
}

::hx::Val LabelLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textAlign") ) { return ::hx::Val( textAlign_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cloneLayout") ) { return ::hx::Val( cloneLayout_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LabelLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LabelLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String LabelLayout_obj_sMemberFields[] = {
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("calcAutoSize",85,81,3f,fd),
	HX_("textAlign",d8,e6,7e,ba),
	HX_("cloneLayout",e7,99,0c,f5),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class LabelLayout_obj::__mClass;

void LabelLayout_obj::__register()
{
	LabelLayout_obj _hx_dummy;
	LabelLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Label.LabelLayout",cb,b4,12,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LabelLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LabelLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LabelLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LabelLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Label
