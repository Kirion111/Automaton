#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonLayout
#include <haxe/ui/components/ButtonLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_core_ICompositeInteractiveComponent
#include <haxe/ui/core/ICompositeInteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_49c59bbbec578e16_141_new,"haxe.ui.components.ButtonLayout","new",0xc6d1ddd4,"haxe.ui.components.ButtonLayout.new","haxe/ui/components/Button.hx",141,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_143_get_iconPosition,"haxe.ui.components.ButtonLayout","get_iconPosition",0x015f6bd7,"haxe.ui.components.ButtonLayout.get_iconPosition","haxe/ui/components/Button.hx",143,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_150_resizeChildren,"haxe.ui.components.ButtonLayout","resizeChildren",0x32c1025f,"haxe.ui.components.ButtonLayout.resizeChildren","haxe/ui/components/Button.hx",150,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_179_get_usableSize,"haxe.ui.components.ButtonLayout","get_usableSize",0xb0864b2e,"haxe.ui.components.ButtonLayout.get_usableSize","haxe/ui/components/Button.hx",179,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_188_calcAutoSize,"haxe.ui.components.ButtonLayout","calcAutoSize",0x60d62591,"haxe.ui.components.ButtonLayout.calcAutoSize","haxe/ui/components/Button.hx",188,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_202_isIconRelevant,"haxe.ui.components.ButtonLayout","isIconRelevant",0x982c45cc,"haxe.ui.components.ButtonLayout.isIconRelevant","haxe/ui/components/Button.hx",202,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_207_repositionChildren,"haxe.ui.components.ButtonLayout","repositionChildren",0x87f235c7,"haxe.ui.components.ButtonLayout.repositionChildren","haxe/ui/components/Button.hx",207,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_319_getTextAlignPos,"haxe.ui.components.ButtonLayout","getTextAlignPos",0x0e58c6c6,"haxe.ui.components.ButtonLayout.getTextAlignPos","haxe/ui/components/Button.hx",319,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_a9c2c02d86dbeab3_700_cloneLayout,"haxe.ui.components.ButtonLayout","cloneLayout",0x41433b5b,"haxe.ui.components.ButtonLayout.cloneLayout","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_77161d05d15a585a_113_self,"haxe.ui.components.ButtonLayout","self",0x341e4398,"haxe.ui.components.ButtonLayout.self","haxe/ui/macros/LayoutMacros.hx",113,0xe44eaad7)
namespace haxe{
namespace ui{
namespace components{

void ButtonLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_141_new)
HXDLIN( 141)		super::__construct();
            	}

Dynamic ButtonLayout_obj::__CreateEmpty() { return new ButtonLayout_obj; }

void *ButtonLayout_obj::_hx_vtable = 0;

Dynamic ButtonLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonLayout_obj > _hx_result = new ButtonLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ButtonLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23db4184) {
		if (inClassId<=(int)0x02db37b4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x02db37b4;
		} else {
			return inClassId==(int)0x23db4184;
		}
	} else {
		return inClassId==(int)0x3799f835;
	}
}

::String ButtonLayout_obj::get_iconPosition(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_143_get_iconPosition)
HXLINE( 144)		bool _hx_tmp;
HXDLIN( 144)		if (::hx::IsNotNull( this->get_component()->get_style() )) {
HXLINE( 144)			_hx_tmp = ::hx::IsNull( this->get_component()->get_style()->iconPosition );
            		}
            		else {
HXLINE( 144)			_hx_tmp = true;
            		}
HXDLIN( 144)		if (_hx_tmp) {
HXLINE( 145)			return HX_("left",07,08,b0,47);
            		}
HXLINE( 147)		return this->get_component()->get_style()->iconPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonLayout_obj,get_iconPosition,return )

void ButtonLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_150_resizeChildren)
HXLINE( 151)		this->super::resizeChildren();
HXLINE( 153)		if ((this->_component->get_autoWidth() == false)) {
HXLINE( 154)			 ::haxe::ui::components::Label label = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),false,null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 155)			Float ucx = this->get_usableSize()->width;
HXLINE( 156)			if (::hx::IsNotNull( label )) {
HXLINE( 157)				label->set_width(ucx);
            			}
HXLINE( 160)			 ::haxe::ui::core::ItemRenderer itemRenderer = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 161)			if (::hx::IsNotNull( itemRenderer )) {
HXLINE( 162)				itemRenderer->set_width(ucx);
            			}
            		}
HXLINE( 166)		if ((this->_component->get_autoHeight() == false)) {
HXLINE( 167)			 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 168)			Float ucy = this->get_usableSize()->height;
HXLINE( 169)			if (::hx::IsNotNull( icon )) {
HXLINE( 170)				bool _hx_tmp;
HXDLIN( 170)				bool _hx_tmp1;
HXDLIN( 170)				if ((icon->get_height() > 0)) {
HXLINE( 170)					_hx_tmp1 = (ucy > 0);
            				}
            				else {
HXLINE( 170)					_hx_tmp1 = false;
            				}
HXDLIN( 170)				if (_hx_tmp1) {
HXLINE( 170)					_hx_tmp = (icon->get_height() > ucy);
            				}
            				else {
HXLINE( 170)					_hx_tmp = false;
            				}
HXDLIN( 170)				if (_hx_tmp) {
HXLINE( 171)					Float ratio = icon->get_width();
HXDLIN( 171)					Float ratio1 = (ratio / icon->get_height());
HXLINE( 172)					icon->set_height(ucy);
HXLINE( 173)					icon->set_width((ucy * ratio1));
            				}
            			}
            		}
            	}


 ::haxe::ui::geom::Size ButtonLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_179_get_usableSize)
HXLINE( 180)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE( 181)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 182)		bool _hx_tmp;
HXDLIN( 182)		if (::hx::IsNotNull( icon )) {
HXLINE( 182)			bool _hx_tmp1;
HXDLIN( 182)			bool _hx_tmp2;
HXDLIN( 182)			if ((this->get_iconPosition() != HX_("far-right",a6,3e,4f,24))) {
HXLINE( 182)				_hx_tmp2 = (this->get_iconPosition() == HX_("far-left",7d,bc,22,51));
            			}
            			else {
HXLINE( 182)				_hx_tmp2 = true;
            			}
HXDLIN( 182)			if (!(_hx_tmp2)) {
HXLINE( 182)				_hx_tmp1 = (this->get_iconPosition() == HX_("left",07,08,b0,47));
            			}
            			else {
HXLINE( 182)				_hx_tmp1 = true;
            			}
HXDLIN( 182)			if (!(_hx_tmp1)) {
HXLINE( 182)				_hx_tmp = (this->get_iconPosition() == HX_("right",dc,0b,64,e9));
            			}
            			else {
HXLINE( 182)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 182)			_hx_tmp = false;
            		}
HXDLIN( 182)		if (_hx_tmp) {
HXLINE( 183)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 183)			Float size2 = size1->width;
HXDLIN( 183)			Float _hx_tmp = icon->get_width();
HXDLIN( 183)			size1->width = (size2 - (_hx_tmp + this->get_verticalSpacing()));
            		}
HXLINE( 185)		return size;
            	}


 ::haxe::ui::geom::Size ButtonLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_188_calcAutoSize)
HXLINE( 189)		::Array< ::Dynamic> exclusions1 = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 190)		 ::haxe::ui::core::ItemRenderer itemRenderer = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 191)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 192)		bool _hx_tmp;
HXDLIN( 192)		if (::hx::IsNotNull( itemRenderer )) {
HXLINE( 192)			 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXDLIN( 192)			if (::hx::IsNotNull( icon )) {
HXLINE( 192)				bool _hx_tmp1;
HXDLIN( 192)				bool _hx_tmp2;
HXDLIN( 192)				if ((this->get_iconPosition() != HX_("far-right",a6,3e,4f,24))) {
HXLINE( 192)					_hx_tmp2 = (this->get_iconPosition() == HX_("far-left",7d,bc,22,51));
            				}
            				else {
HXLINE( 192)					_hx_tmp2 = true;
            				}
HXDLIN( 192)				if (!(_hx_tmp2)) {
HXLINE( 192)					_hx_tmp1 = (this->get_iconPosition() == HX_("left",07,08,b0,47));
            				}
            				else {
HXLINE( 192)					_hx_tmp1 = true;
            				}
HXDLIN( 192)				if (!(_hx_tmp1)) {
HXLINE( 192)					_hx_tmp = (this->get_iconPosition() == HX_("right",dc,0b,64,e9));
            				}
            				else {
HXLINE( 192)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 192)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 192)			_hx_tmp = false;
            		}
HXDLIN( 192)		if (_hx_tmp) {
HXLINE( 193)			exclusions1->push(icon);
            		}
HXLINE( 195)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(exclusions1);
HXLINE( 196)		bool _hx_tmp1;
HXDLIN( 196)		if (::hx::IsNotNull( itemRenderer )) {
HXLINE( 196)			 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXDLIN( 196)			if (::hx::IsNotNull( icon )) {
HXLINE( 196)				bool _hx_tmp;
HXDLIN( 196)				bool _hx_tmp2;
HXDLIN( 196)				if ((this->get_iconPosition() != HX_("far-right",a6,3e,4f,24))) {
HXLINE( 196)					_hx_tmp2 = (this->get_iconPosition() == HX_("far-left",7d,bc,22,51));
            				}
            				else {
HXLINE( 196)					_hx_tmp2 = true;
            				}
HXDLIN( 196)				if (!(_hx_tmp2)) {
HXLINE( 196)					_hx_tmp = (this->get_iconPosition() == HX_("left",07,08,b0,47));
            				}
            				else {
HXLINE( 196)					_hx_tmp = true;
            				}
HXDLIN( 196)				if (!(_hx_tmp)) {
HXLINE( 196)					_hx_tmp1 = (this->get_iconPosition() == HX_("right",dc,0b,64,e9));
            				}
            				else {
HXLINE( 196)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 196)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 196)			_hx_tmp1 = false;
            		}
HXDLIN( 196)		if (_hx_tmp1) {
HXLINE( 197)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 197)			Float size2 = size1->width;
HXDLIN( 197)			Float _hx_tmp = icon->get_width();
HXDLIN( 197)			size1->width = (size2 + (_hx_tmp + this->get_verticalSpacing()));
            		}
HXLINE( 199)		return size;
            	}


bool ButtonLayout_obj::isIconRelevant(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_202_isIconRelevant)
HXLINE( 203)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 204)		if (::hx::IsNotNull( icon )) {
HXLINE( 204)			bool _hx_tmp;
HXDLIN( 204)			bool _hx_tmp1;
HXDLIN( 204)			if ((this->get_iconPosition() != HX_("far-right",a6,3e,4f,24))) {
HXLINE( 204)				_hx_tmp1 = (this->get_iconPosition() == HX_("far-left",7d,bc,22,51));
            			}
            			else {
HXLINE( 204)				_hx_tmp1 = true;
            			}
HXDLIN( 204)			if (!(_hx_tmp1)) {
HXLINE( 204)				_hx_tmp = (this->get_iconPosition() == HX_("left",07,08,b0,47));
            			}
            			else {
HXLINE( 204)				_hx_tmp = true;
            			}
HXDLIN( 204)			if (!(_hx_tmp)) {
HXLINE( 204)				return (this->get_iconPosition() == HX_("right",dc,0b,64,e9));
            			}
            			else {
HXLINE( 204)				return true;
            			}
            		}
            		else {
HXLINE( 204)			return false;
            		}
HXDLIN( 204)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonLayout_obj,isIconRelevant,return )

void ButtonLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_207_repositionChildren)
HXLINE( 208)		this->super::repositionChildren();
HXLINE( 210)		 ::haxe::ui::components::Label label = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),false,null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 211)		bool _hx_tmp;
HXDLIN( 211)		if (::hx::IsNotNull( label )) {
HXLINE( 211)			_hx_tmp = (label->get_hidden() == true);
            		}
            		else {
HXLINE( 211)			_hx_tmp = false;
            		}
HXDLIN( 211)		if (_hx_tmp) {
HXLINE( 212)			label = null();
            		}
HXLINE( 214)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 215)		bool _hx_tmp1;
HXDLIN( 215)		if (::hx::IsNotNull( icon )) {
HXLINE( 215)			_hx_tmp1 = (icon->get_hidden() == true);
            		}
            		else {
HXLINE( 215)			_hx_tmp1 = false;
            		}
HXDLIN( 215)		if (_hx_tmp1) {
HXLINE( 216)			icon = null();
            		}
HXLINE( 218)		::String _hx_switch_0 = this->get_iconPosition();
            		if (  (_hx_switch_0==HX_("far-left",7d,bc,22,51)) ){
HXLINE( 246)			bool _hx_tmp;
HXDLIN( 246)			if (::hx::IsNotNull( label )) {
HXLINE( 246)				_hx_tmp = ::hx::IsNotNull( icon );
            			}
            			else {
HXLINE( 246)				_hx_tmp = false;
            			}
HXDLIN( 246)			if (_hx_tmp) {
HXLINE( 247)				Float x = this->get_paddingLeft();
HXLINE( 249)				if ((this->get_iconPosition() == HX_("far-left",7d,bc,22,51))) {
HXLINE( 250)					Float _hx_tmp = (x + this->marginLeft(icon));
HXDLIN( 250)					icon->set_left((_hx_tmp - this->marginRight(icon)));
HXLINE( 251)					Float x1 = this->get_horizontalSpacing();
HXDLIN( 251)					x = (x + (x1 + icon->get_componentWidth()));
HXLINE( 252)					Float _hx_tmp1 = (x + this->marginLeft(label));
HXDLIN( 252)					label->set_left((_hx_tmp1 - this->marginRight(label)));
            				}
HXLINE( 255)				Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 255)				int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 255)				Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 255)				label->set_top((_hx_tmp2 - this->marginBottom(label)));
HXLINE( 256)				Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 256)				int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 256)				Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(icon));
HXDLIN( 256)				icon->set_top((_hx_tmp5 - this->marginBottom(icon)));
            			}
            			else {
HXLINE( 257)				if (::hx::IsNotNull( label )) {
HXLINE( 258)					label->set_left(this->get_paddingLeft());
HXLINE( 259)					Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 259)					int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 259)					Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 259)					label->set_top((_hx_tmp2 - this->marginBottom(label)));
            				}
            				else {
HXLINE( 260)					if (::hx::IsNotNull( icon )) {
HXLINE( 261)						Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 261)						icon->set_left(::Std_obj::_hx_int((_hx_tmp - (( (Float)(icon->get_componentWidth()) ) / ( (Float)(2) )))));
HXLINE( 262)						Float _hx_tmp1 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 262)						int _hx_tmp2 = ::Std_obj::_hx_int((_hx_tmp1 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 262)						Float _hx_tmp3 = (_hx_tmp2 + this->marginTop(icon));
HXDLIN( 262)						icon->set_top((_hx_tmp3 - this->marginBottom(icon)));
            					}
            				}
            			}
HXLINE( 246)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("far-right",a6,3e,4f,24)) ){
HXLINE( 220)			bool _hx_tmp;
HXDLIN( 220)			if (::hx::IsNotNull( label )) {
HXLINE( 220)				_hx_tmp = ::hx::IsNotNull( icon );
            			}
            			else {
HXLINE( 220)				_hx_tmp = false;
            			}
HXDLIN( 220)			if (_hx_tmp) {
HXLINE( 221)				 ::Dynamic cx = label->get_componentWidth();
HXDLIN( 221)				Float cx1 = (cx + icon->get_componentWidth());
HXDLIN( 221)				Float cx2 = (cx1 + this->get_horizontalSpacing());
HXLINE( 222)				Float x = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) )) - (cx2 / ( (Float)(2) ))))) );
HXLINE( 224)				if ((this->get_iconPosition() == HX_("far-right",a6,3e,4f,24))) {
HXLINE( 225)					Float _hx_tmp = (cx2 + this->get_paddingLeft());
HXDLIN( 225)					Float _hx_tmp1 = (_hx_tmp + this->get_paddingRight());
HXDLIN( 225)					if (::hx::IsLess( _hx_tmp1,this->get_component()->get_componentWidth() )) {
HXLINE( 226)						label->set_left(this->get_paddingLeft());
HXLINE( 227)						Float x1 = this->get_horizontalSpacing();
HXDLIN( 227)						x = (x + (x1 + label->get_componentWidth()));
HXLINE( 228)						 ::Dynamic _hx_tmp = this->get_component()->get_componentWidth();
HXDLIN( 228)						Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - ( (Float)(icon->get_componentWidth()) ));
HXDLIN( 228)						Float _hx_tmp2 = (_hx_tmp1 - this->get_paddingRight());
HXDLIN( 228)						Float _hx_tmp3 = (_hx_tmp2 + this->marginLeft(icon));
HXDLIN( 228)						icon->set_left((_hx_tmp3 - this->marginRight(icon)));
            					}
            					else {
HXLINE( 230)						label->set_left(this->get_paddingLeft());
HXLINE( 231)						Float x1 = this->get_horizontalSpacing();
HXDLIN( 231)						x = (x + (x1 + label->get_componentWidth()));
HXLINE( 232)						Float _hx_tmp = (x + this->marginLeft(icon));
HXDLIN( 232)						icon->set_left((_hx_tmp - this->marginRight(icon)));
            					}
            				}
HXLINE( 236)				Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 236)				int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 236)				Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 236)				label->set_top((_hx_tmp2 - this->marginBottom(label)));
HXLINE( 237)				Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 237)				int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 237)				Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(icon));
HXDLIN( 237)				icon->set_top((_hx_tmp5 - this->marginBottom(icon)));
            			}
            			else {
HXLINE( 238)				if (::hx::IsNotNull( label )) {
HXLINE( 239)					label->set_left(this->get_paddingLeft());
HXLINE( 240)					Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 240)					int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 240)					Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 240)					label->set_top((_hx_tmp2 - this->marginBottom(label)));
            				}
            				else {
HXLINE( 241)					if (::hx::IsNotNull( icon )) {
HXLINE( 242)						 ::Dynamic _hx_tmp = this->get_component()->get_componentWidth();
HXDLIN( 242)						Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - ( (Float)(icon->get_componentWidth()) ));
HXDLIN( 242)						Float _hx_tmp2 = (_hx_tmp1 - this->get_paddingRight());
HXDLIN( 242)						Float _hx_tmp3 = (_hx_tmp2 + this->marginLeft(icon));
HXDLIN( 242)						icon->set_left((_hx_tmp3 - this->marginRight(icon)));
HXLINE( 243)						Float _hx_tmp4 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 243)						int _hx_tmp5 = ::Std_obj::_hx_int((_hx_tmp4 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 243)						Float _hx_tmp6 = (_hx_tmp5 + this->marginTop(icon));
HXDLIN( 243)						icon->set_top((_hx_tmp6 - this->marginBottom(icon)));
            					}
            				}
            			}
HXLINE( 220)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ||  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 265)			bool _hx_tmp;
HXDLIN( 265)			if (::hx::IsNotNull( label )) {
HXLINE( 265)				_hx_tmp = ::hx::IsNotNull( icon );
            			}
            			else {
HXLINE( 265)				_hx_tmp = false;
            			}
HXDLIN( 265)			if (_hx_tmp) {
HXLINE( 266)				 ::Dynamic cx = label->get_componentWidth();
HXDLIN( 266)				Float cx1 = (cx + icon->get_componentWidth());
HXDLIN( 266)				Float cx2 = (cx1 + this->get_horizontalSpacing());
HXLINE( 267)				Float x = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) )) - (cx2 / ( (Float)(2) ))))) );
HXLINE( 268)				if ((::hx::TCast<  ::haxe::ui::components::Button >::cast(this->get_component())->get_textAlign() == HX_("left",07,08,b0,47))) {
HXLINE( 269)					x = this->get_paddingLeft();
            				}
HXLINE( 272)				if ((this->get_iconPosition() == HX_("right",dc,0b,64,e9))) {
HXLINE( 273)					Float _hx_tmp = (x + this->marginLeft(label));
HXDLIN( 273)					label->set_left((_hx_tmp - this->marginRight(label)));
HXLINE( 274)					Float x1 = this->get_horizontalSpacing();
HXDLIN( 274)					x = (x + (x1 + label->get_componentWidth()));
HXLINE( 275)					Float _hx_tmp1 = (x + this->marginLeft(icon));
HXDLIN( 275)					icon->set_left((_hx_tmp1 - this->marginRight(icon)));
            				}
            				else {
HXLINE( 277)					Float _hx_tmp = (x + this->marginLeft(icon));
HXDLIN( 277)					icon->set_left((_hx_tmp - this->marginRight(icon)));
HXLINE( 278)					Float x1 = this->get_horizontalSpacing();
HXDLIN( 278)					x = (x + (x1 + icon->get_componentWidth()));
HXLINE( 279)					Float _hx_tmp1 = (x + this->marginLeft(label));
HXDLIN( 279)					label->set_left((_hx_tmp1 - this->marginRight(label)));
            				}
HXLINE( 282)				Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 282)				int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 282)				Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 282)				label->set_top((_hx_tmp2 - this->marginBottom(label)));
HXLINE( 283)				Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 283)				int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 283)				Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(icon));
HXDLIN( 283)				icon->set_top((_hx_tmp5 - this->marginBottom(icon)));
            			}
            			else {
HXLINE( 284)				if (::hx::IsNotNull( label )) {
HXLINE( 285)					label->set_left(this->getTextAlignPos(label,( (Float)(this->get_component()->get_componentWidth()) )));
HXLINE( 286)					Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 286)					int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 286)					Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(label));
HXDLIN( 286)					label->set_top((_hx_tmp2 - this->marginBottom(label)));
            				}
            				else {
HXLINE( 287)					if (::hx::IsNotNull( icon )) {
HXLINE( 288)						Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 288)						icon->set_left(::Std_obj::_hx_int((_hx_tmp - (( (Float)(icon->get_componentWidth()) ) / ( (Float)(2) )))));
HXLINE( 289)						Float _hx_tmp1 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 289)						int _hx_tmp2 = ::Std_obj::_hx_int((_hx_tmp1 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 289)						Float _hx_tmp3 = (_hx_tmp2 + this->marginTop(icon));
HXDLIN( 289)						icon->set_top((_hx_tmp3 - this->marginBottom(icon)));
            					}
            				}
            			}
HXLINE( 265)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ||  (_hx_switch_0==HX_("top",95,66,58,00)) ){
HXLINE( 292)			bool _hx_tmp;
HXDLIN( 292)			if (::hx::IsNotNull( label )) {
HXLINE( 292)				_hx_tmp = ::hx::IsNotNull( icon );
            			}
            			else {
HXLINE( 292)				_hx_tmp = false;
            			}
HXDLIN( 292)			if (_hx_tmp) {
HXLINE( 293)				 ::Dynamic cy = label->get_componentHeight();
HXDLIN( 293)				Float cy1 = (cy + icon->get_componentHeight());
HXDLIN( 293)				Float cy2 = (cy1 + this->get_verticalSpacing());
HXLINE( 294)				Float y = ( (Float)(::Std_obj::_hx_int(((( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) )) - (cy2 / ( (Float)(2) ))))) );
HXLINE( 296)				if ((this->get_iconPosition() == HX_("bottom",eb,e6,78,65))) {
HXLINE( 297)					Float _hx_tmp = (y + this->marginTop(label));
HXDLIN( 297)					label->set_top((_hx_tmp - this->marginBottom(label)));
HXLINE( 298)					Float y1 = this->get_verticalSpacing();
HXDLIN( 298)					y = (y + (y1 + label->get_componentHeight()));
HXLINE( 299)					Float _hx_tmp1 = (y + this->marginTop(icon));
HXDLIN( 299)					icon->set_top((_hx_tmp1 - this->marginBottom(icon)));
            				}
            				else {
HXLINE( 301)					Float _hx_tmp = (y + this->marginTop(icon));
HXDLIN( 301)					icon->set_top((_hx_tmp - this->marginBottom(icon)));
HXLINE( 302)					Float y1 = this->get_verticalSpacing();
HXDLIN( 302)					y = (y + (y1 + icon->get_componentHeight()));
HXLINE( 303)					Float _hx_tmp1 = (y + this->marginTop(label));
HXDLIN( 303)					label->set_top((_hx_tmp1 - this->marginBottom(label)));
            				}
HXLINE( 306)				label->set_left(this->getTextAlignPos(label,( (Float)(this->get_component()->get_componentWidth()) )));
HXLINE( 307)				Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 307)				int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(icon->get_componentWidth()) ) / ( (Float)(2) ))));
HXDLIN( 307)				Float _hx_tmp2 = (_hx_tmp1 + this->marginLeft(icon));
HXDLIN( 307)				icon->set_left((_hx_tmp2 - this->marginRight(icon)));
            			}
            			else {
HXLINE( 308)				if (::hx::IsNotNull( label )) {
HXLINE( 309)					Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 309)					int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(label->get_componentWidth()) ) / ( (Float)(2) ))));
HXDLIN( 309)					Float _hx_tmp2 = (_hx_tmp1 + this->marginLeft(label));
HXDLIN( 309)					label->set_left((_hx_tmp2 - this->marginRight(label)));
HXLINE( 310)					Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 310)					int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 310)					Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(label));
HXDLIN( 310)					label->set_top((_hx_tmp5 - this->marginBottom(label)));
            				}
            				else {
HXLINE( 311)					if (::hx::IsNotNull( icon )) {
HXLINE( 312)						Float _hx_tmp = (( (Float)(this->get_component()->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 312)						int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp - (( (Float)(icon->get_componentWidth()) ) / ( (Float)(2) ))));
HXDLIN( 312)						Float _hx_tmp2 = (_hx_tmp1 + this->marginLeft(icon));
HXDLIN( 312)						icon->set_left((_hx_tmp2 - this->marginRight(icon)));
HXLINE( 313)						Float _hx_tmp3 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 313)						int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXDLIN( 313)						Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(icon));
HXDLIN( 313)						icon->set_top((_hx_tmp5 - this->marginBottom(icon)));
            					}
            				}
            			}
HXLINE( 292)			goto _hx_goto_6;
            		}
            		_hx_goto_6:;
            	}


Float ButtonLayout_obj::getTextAlignPos( ::haxe::ui::components::Label label,Float usableWidth){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_319_getTextAlignPos)
HXDLIN( 319)		::String _hx_switch_0 = ::hx::TCast<  ::haxe::ui::components::Button >::cast(this->get_component())->get_textAlign();
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 321)			Float _hx_tmp = this->marginLeft(label);
HXDLIN( 321)			return (_hx_tmp + this->get_paddingLeft());
HXDLIN( 321)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 323)			Float _hx_tmp = (usableWidth - ( (Float)(label->get_componentWidth()) ));
HXDLIN( 323)			Float _hx_tmp1 = (_hx_tmp - this->marginRight(label));
HXDLIN( 323)			return (_hx_tmp1 - this->get_paddingRight());
HXDLIN( 323)			goto _hx_goto_8;
            		}
            		/* default */{
HXLINE( 325)			int _hx_tmp = ::Std_obj::_hx_int(((usableWidth / ( (Float)(2) )) - (( (Float)(label->get_componentWidth()) ) / ( (Float)(2) ))));
HXDLIN( 325)			Float _hx_tmp1 = (_hx_tmp + this->marginLeft(label));
HXDLIN( 325)			return (_hx_tmp1 - this->marginRight(label));
            		}
            		_hx_goto_8:;
HXLINE( 319)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ButtonLayout_obj,getTextAlignPos,return )

 ::haxe::ui::layouts::Layout ButtonLayout_obj::cloneLayout(){
            	HX_STACKFRAME(&_hx_pos_a9c2c02d86dbeab3_700_cloneLayout)
HXLINE(  85)		 ::haxe::ui::components::ButtonLayout c = ( ( ::haxe::ui::components::ButtonLayout)(this->super::cloneLayout()) );
HXLINE( 101)		return c;
            	}


 ::haxe::ui::layouts::Layout ButtonLayout_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_77161d05d15a585a_113_self)
HXDLIN( 113)		return  ::haxe::ui::components::ButtonLayout_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< ButtonLayout_obj > ButtonLayout_obj::__new() {
	::hx::ObjectPtr< ButtonLayout_obj > __this = new ButtonLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ButtonLayout_obj > ButtonLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ButtonLayout_obj *__this = (ButtonLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonLayout_obj), true, "haxe.ui.components.ButtonLayout"));
	*(void **)__this = ButtonLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ButtonLayout_obj::ButtonLayout_obj()
{
}

void ButtonLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonLayout);
	HX_MARK_MEMBER_NAME(iconPosition,"iconPosition");
	 ::haxe::ui::layouts::Layout_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ButtonLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iconPosition,"iconPosition");
	 ::haxe::ui::layouts::Layout_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ButtonLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cloneLayout") ) { return ::hx::Val( cloneLayout_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_iconPosition() : iconPosition ); }
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"isIconRelevant") ) { return ::hx::Val( isIconRelevant_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextAlignPos") ) { return ::hx::Val( getTextAlignPos_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_iconPosition") ) { return ::hx::Val( get_iconPosition_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ButtonLayout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { iconPosition=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("iconPosition",42,e5,38,76));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonLayout_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ButtonLayout_obj,iconPosition),HX_("iconPosition",42,e5,38,76)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ButtonLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonLayout_obj_sMemberFields[] = {
	HX_("iconPosition",42,e5,38,76),
	HX_("get_iconPosition",cb,d1,d7,7a),
	HX_("resizeChildren",53,43,30,c1),
	HX_("get_usableSize",22,8c,f5,3e),
	HX_("calcAutoSize",85,81,3f,fd),
	HX_("isIconRelevant",c0,86,9b,26),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("getTextAlignPos",52,5b,42,21),
	HX_("cloneLayout",e7,99,0c,f5),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class ButtonLayout_obj::__mClass;

void ButtonLayout_obj::__register()
{
	ButtonLayout_obj _hx_dummy;
	ButtonLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.ButtonLayout",e2,a3,79,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
