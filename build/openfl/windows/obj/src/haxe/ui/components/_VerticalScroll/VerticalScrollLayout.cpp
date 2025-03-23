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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components__VerticalScroll_VerticalScrollLayout
#include <haxe/ui/components/_VerticalScroll/VerticalScrollLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
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
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_04a0cde2e8eecef0_96_new,"haxe.ui.components._VerticalScroll.VerticalScrollLayout","new",0x1e4e5251,"haxe.ui.components._VerticalScroll.VerticalScrollLayout.new","haxe/ui/components/VerticalScroll.hx",96,0x571b9394)
HX_LOCAL_STACK_FRAME(_hx_pos_04a0cde2e8eecef0_99_resizeChildren,"haxe.ui.components._VerticalScroll.VerticalScrollLayout","resizeChildren",0x2ce99502,"haxe.ui.components._VerticalScroll.VerticalScrollLayout.resizeChildren","haxe/ui/components/VerticalScroll.hx",99,0x571b9394)
HX_LOCAL_STACK_FRAME(_hx_pos_04a0cde2e8eecef0_127_repositionChildren,"haxe.ui.components._VerticalScroll.VerticalScrollLayout","repositionChildren",0x111c55ea,"haxe.ui.components._VerticalScroll.VerticalScrollLayout.repositionChildren","haxe/ui/components/VerticalScroll.hx",127,0x571b9394)
HX_LOCAL_STACK_FRAME(_hx_pos_04a0cde2e8eecef0_153_get_usableHeight,"haxe.ui.components._VerticalScroll.VerticalScrollLayout","get_usableHeight",0x1bbca8f7,"haxe.ui.components._VerticalScroll.VerticalScrollLayout.get_usableHeight","haxe/ui/components/VerticalScroll.hx",153,0x571b9394)
HX_LOCAL_STACK_FRAME(_hx_pos_a78260017d70d7c3_700_cloneLayout,"haxe.ui.components._VerticalScroll.VerticalScrollLayout","cloneLayout",0xd833f4d8,"haxe.ui.components._VerticalScroll.VerticalScrollLayout.cloneLayout","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_b5c97f3a2fbdd95c_113_self,"haxe.ui.components._VerticalScroll.VerticalScrollLayout","self",0x6987bc7b,"haxe.ui.components._VerticalScroll.VerticalScrollLayout.self","haxe/ui/macros/LayoutMacros.hx",113,0xe44eaad7)
namespace haxe{
namespace ui{
namespace components{
namespace _VerticalScroll{

void VerticalScrollLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_04a0cde2e8eecef0_96_new)
HXDLIN(  96)		super::__construct();
            	}

Dynamic VerticalScrollLayout_obj::__CreateEmpty() { return new VerticalScrollLayout_obj; }

void *VerticalScrollLayout_obj::_hx_vtable = 0;

Dynamic VerticalScrollLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VerticalScrollLayout_obj > _hx_result = new VerticalScrollLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VerticalScrollLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3799f835) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x3799f835;
		}
	} else {
		return inClassId==(int)0x6e640bdf;
	}
}

void VerticalScrollLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_04a0cde2e8eecef0_99_resizeChildren)
HXLINE( 100)		this->super::resizeChildren();
HXLINE( 102)		 ::haxe::ui::components::Scroll scroll = ::hx::TCast<  ::haxe::ui::components::Scroll >::cast(this->get_component());
HXLINE( 103)		 ::haxe::ui::components::Button thumb = this->get_component()->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 104)		if (::hx::IsNotNull( thumb )) {
HXLINE( 105)			Float _hx_tmp = scroll->get_min();
HXDLIN( 105)			if ((_hx_tmp == scroll->get_max())) {
HXLINE( 106)				thumb->hide();
            			}
            			else {
HXLINE( 108)				Float m = scroll->get_max();
HXDLIN( 108)				Float m1 = (m - scroll->get_min());
HXLINE( 109)				Float ucy = this->get_usableHeight();
HXLINE( 110)				Float thumbHeight = ((scroll->get_pageSize() / m1) * ucy);
HXLINE( 111)				if (::hx::IsNotNull( scroll->get_thumbSize() )) {
HXLINE( 112)					thumbHeight = ( (Float)(scroll->get_thumbSize()) );
            				}
HXLINE( 114)				if ((thumbHeight < this->get_innerWidth())) {
HXLINE( 115)					thumbHeight = this->get_innerWidth();
            				}
            				else {
HXLINE( 116)					if ((thumbHeight > ucy)) {
HXLINE( 117)						thumbHeight = ucy;
            					}
            				}
HXLINE( 119)				bool _hx_tmp;
HXDLIN( 119)				if ((thumbHeight > 0)) {
HXLINE( 119)					_hx_tmp = (::Math_obj::isNaN(thumbHeight) == false);
            				}
            				else {
HXLINE( 119)					_hx_tmp = false;
            				}
HXDLIN( 119)				if (_hx_tmp) {
HXLINE( 120)					thumb->set_height(thumbHeight);
            				}
HXLINE( 122)				thumb->show();
            			}
            		}
            	}


void VerticalScrollLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_04a0cde2e8eecef0_127_repositionChildren)
HXLINE( 128)		this->super::repositionChildren();
HXLINE( 130)		 ::haxe::ui::components::Button deinc = this->get_component()->findComponent(HX_("scroll-deinc-button",02,43,8d,9e),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 131)		 ::haxe::ui::components::Button inc = this->get_component()->findComponent(HX_("scroll-inc-button",41,40,5a,37),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 132)		bool _hx_tmp;
HXDLIN( 132)		if (::hx::IsNotNull( inc )) {
HXLINE( 132)			_hx_tmp = (this->hidden(inc) == false);
            		}
            		else {
HXLINE( 132)			_hx_tmp = false;
            		}
HXDLIN( 132)		if (_hx_tmp) {
HXLINE( 133)			Float _hx_tmp = this->get_component()->get_height();
HXDLIN( 133)			Float _hx_tmp1 = (_hx_tmp - inc->get_height());
HXDLIN( 133)			inc->set_top((_hx_tmp1 - this->get_paddingBottom()));
            		}
HXLINE( 136)		 ::haxe::ui::components::Scroll scroll = ::hx::TCast<  ::haxe::ui::components::Scroll >::cast(this->get_component());
HXLINE( 137)		 ::haxe::ui::components::Button thumb = this->get_component()->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 138)		if (::hx::IsNotNull( thumb )) {
HXLINE( 139)			Float m = scroll->get_max();
HXDLIN( 139)			Float m1 = (m - scroll->get_min());
HXLINE( 140)			Float u = this->get_usableHeight();
HXLINE( 141)			u = (u - thumb->get_height());
HXLINE( 142)			Float y = scroll->get_pos();
HXDLIN( 142)			Float y1 = (((y - scroll->get_min()) / m1) * u);
HXLINE( 143)			y1 = (y1 + this->get_paddingTop());
HXLINE( 144)			bool _hx_tmp;
HXDLIN( 144)			if (::hx::IsNotNull( deinc )) {
HXLINE( 144)				_hx_tmp = (this->hidden(deinc) == false);
            			}
            			else {
HXLINE( 144)				_hx_tmp = false;
            			}
HXDLIN( 144)			if (_hx_tmp) {
HXLINE( 145)				Float y = deinc->get_height();
HXDLIN( 145)				y1 = (y1 + (y + this->get_verticalSpacing()));
            			}
HXLINE( 147)			thumb->set_left(::Math_obj::fround(( (Float)(thumb->get_left()) )));
HXLINE( 148)			thumb->set_top(y1);
            		}
            	}


Float VerticalScrollLayout_obj::get_usableHeight(){
            	HX_STACKFRAME(&_hx_pos_04a0cde2e8eecef0_153_get_usableHeight)
HXLINE( 154)		Float ucy = this->get_innerHeight();
HXLINE( 155)		 ::haxe::ui::components::Button deinc = this->get_component()->findComponent(HX_("scroll-deinc-button",02,43,8d,9e),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 156)		 ::haxe::ui::components::Button inc = this->get_component()->findComponent(HX_("scroll-inc-button",41,40,5a,37),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 157)		bool _hx_tmp;
HXDLIN( 157)		if (::hx::IsNotNull( deinc )) {
HXLINE( 157)			_hx_tmp = (this->hidden(deinc) == false);
            		}
            		else {
HXLINE( 157)			_hx_tmp = false;
            		}
HXDLIN( 157)		if (_hx_tmp) {
HXLINE( 158)			Float ucy1 = deinc->get_height();
HXDLIN( 158)			ucy = (ucy - (ucy1 + this->get_verticalSpacing()));
            		}
HXLINE( 160)		bool _hx_tmp1;
HXDLIN( 160)		if (::hx::IsNotNull( inc )) {
HXLINE( 160)			_hx_tmp1 = (this->hidden(inc) == false);
            		}
            		else {
HXLINE( 160)			_hx_tmp1 = false;
            		}
HXDLIN( 160)		if (_hx_tmp1) {
HXLINE( 161)			Float ucy1 = inc->get_height();
HXDLIN( 161)			ucy = (ucy - (ucy1 + this->get_verticalSpacing()));
            		}
HXLINE( 163)		return ucy;
            	}


 ::haxe::ui::layouts::Layout VerticalScrollLayout_obj::cloneLayout(){
            	HX_STACKFRAME(&_hx_pos_a78260017d70d7c3_700_cloneLayout)
HXLINE(  85)		 ::haxe::ui::components::_VerticalScroll::VerticalScrollLayout c = ( ( ::haxe::ui::components::_VerticalScroll::VerticalScrollLayout)(this->super::cloneLayout()) );
HXLINE( 101)		return c;
            	}


 ::haxe::ui::layouts::Layout VerticalScrollLayout_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_b5c97f3a2fbdd95c_113_self)
HXDLIN( 113)		return  ::haxe::ui::components::_VerticalScroll::VerticalScrollLayout_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< VerticalScrollLayout_obj > VerticalScrollLayout_obj::__new() {
	::hx::ObjectPtr< VerticalScrollLayout_obj > __this = new VerticalScrollLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VerticalScrollLayout_obj > VerticalScrollLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VerticalScrollLayout_obj *__this = (VerticalScrollLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VerticalScrollLayout_obj), true, "haxe.ui.components._VerticalScroll.VerticalScrollLayout"));
	*(void **)__this = VerticalScrollLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VerticalScrollLayout_obj::VerticalScrollLayout_obj()
{
}

::hx::Val VerticalScrollLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cloneLayout") ) { return ::hx::Val( cloneLayout_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return ::hx::Val( get_usableHeight_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *VerticalScrollLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VerticalScrollLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VerticalScrollLayout_obj_sMemberFields[] = {
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("get_usableHeight",88,4d,c8,51),
	HX_("cloneLayout",e7,99,0c,f5),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class VerticalScrollLayout_obj::__mClass;

void VerticalScrollLayout_obj::__register()
{
	VerticalScrollLayout_obj _hx_dummy;
	VerticalScrollLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._VerticalScroll.VerticalScrollLayout",df,d5,a8,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VerticalScrollLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VerticalScrollLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VerticalScrollLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VerticalScrollLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _VerticalScroll
