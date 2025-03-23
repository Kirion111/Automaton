#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TimerImpl
#include <haxe/ui/backend/TimerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <haxe/ui/containers/ScrollViewEvents.h>
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
#ifndef INCLUDED_haxe_ui_core_IScroller
#include <haxe/ui/core/IScroller.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ActionEvent
#include <haxe/ui/events/ActionEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ScrollEvent
#include <haxe/ui/events/ScrollEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_253fa99b051b5118_663_new,"haxe.ui.containers.ScrollViewEvents","new",0x8940bb67,"haxe.ui.containers.ScrollViewEvents.new","haxe/ui/containers/ScrollView.hx",663,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_671_register,"haxe.ui.containers.ScrollViewEvents","register",0x1a7e61fc,"haxe.ui.containers.ScrollViewEvents.register","haxe/ui/containers/ScrollView.hx",671,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_727_unregister,"haxe.ui.containers.ScrollViewEvents","unregister",0xe21b2195,"haxe.ui.containers.ScrollViewEvents.unregister","haxe/ui/containers/ScrollView.hx",727,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_761_onShown,"haxe.ui.containers.ScrollViewEvents","onShown",0xb371a1b9,"haxe.ui.containers.ScrollViewEvents.onShown","haxe/ui/containers/ScrollView.hx",761,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_774_onComponentAdded,"haxe.ui.containers.ScrollViewEvents","onComponentAdded",0x397a10db,"haxe.ui.containers.ScrollViewEvents.onComponentAdded","haxe/ui/containers/ScrollView.hx",774,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_782_onContentsComponentAdded,"haxe.ui.containers.ScrollViewEvents","onContentsComponentAdded",0x05dc7b95,"haxe.ui.containers.ScrollViewEvents.onContentsComponentAdded","haxe/ui/containers/ScrollView.hx",782,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_786_onComponentRemoved,"haxe.ui.containers.ScrollViewEvents","onComponentRemoved",0x7751d87b,"haxe.ui.containers.ScrollViewEvents.onComponentRemoved","haxe/ui/containers/ScrollView.hx",786,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_794_onContentsComponentRemoved,"haxe.ui.containers.ScrollViewEvents","onContentsComponentRemoved",0xf12fe5b5,"haxe.ui.containers.ScrollViewEvents.onContentsComponentRemoved","haxe/ui/containers/ScrollView.hx",794,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_798_onContentsResized,"haxe.ui.containers.ScrollViewEvents","onContentsResized",0x54e400de,"haxe.ui.containers.ScrollViewEvents.onContentsResized","haxe/ui/containers/ScrollView.hx",798,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_801_onHScroll,"haxe.ui.containers.ScrollViewEvents","onHScroll",0x9161ad7d,"haxe.ui.containers.ScrollViewEvents.onHScroll","haxe/ui/containers/ScrollView.hx",801,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_807_onHScrollScroll,"haxe.ui.containers.ScrollViewEvents","onHScrollScroll",0x1b55b56a,"haxe.ui.containers.ScrollViewEvents.onHScrollScroll","haxe/ui/containers/ScrollView.hx",807,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_810_onVScroll,"haxe.ui.containers.ScrollViewEvents","onVScroll",0xd78e2c0b,"haxe.ui.containers.ScrollViewEvents.onVScroll","haxe/ui/containers/ScrollView.hx",810,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_816_onVScrollScroll,"haxe.ui.containers.ScrollViewEvents","onVScrollScroll",0xebdc9278,"haxe.ui.containers.ScrollViewEvents.onVScrollScroll","haxe/ui/containers/ScrollView.hx",816,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_821_onLeftMouseDown,"haxe.ui.containers.ScrollViewEvents","onLeftMouseDown",0xc6971108,"haxe.ui.containers.ScrollViewEvents.onLeftMouseDown","haxe/ui/containers/ScrollView.hx",821,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_828_onMiddleMouseDown,"haxe.ui.containers.ScrollViewEvents","onMiddleMouseDown",0x9d6775fa,"haxe.ui.containers.ScrollViewEvents.onMiddleMouseDown","haxe/ui/containers/ScrollView.hx",828,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_835_onRightMouseDown,"haxe.ui.containers.ScrollViewEvents","onRightMouseDown",0x9c06b3c3,"haxe.ui.containers.ScrollViewEvents.onRightMouseDown","haxe/ui/containers/ScrollView.hx",835,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_844_onMouseDown,"haxe.ui.containers.ScrollViewEvents","onMouseDown",0xc5ef5e0f,"haxe.ui.containers.ScrollViewEvents.onMouseDown","haxe/ui/containers/ScrollView.hx",844,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_906_onMouseMove,"haxe.ui.containers.ScrollViewEvents","onMouseMove",0xcbe248be,"haxe.ui.containers.ScrollViewEvents.onMouseMove","haxe/ui/containers/ScrollView.hx",906,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_940_pauseContainerEvents,"haxe.ui.containers.ScrollViewEvents","pauseContainerEvents",0xd33dd1fd,"haxe.ui.containers.ScrollViewEvents.pauseContainerEvents","haxe/ui/containers/ScrollView.hx",940,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_948_resumeContainerEvents,"haxe.ui.containers.ScrollViewEvents","resumeContainerEvents",0x42bbe0d4,"haxe.ui.containers.ScrollViewEvents.resumeContainerEvents","haxe/ui/containers/ScrollView.hx",948,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_958_onContainerEventsStatusChanged,"haxe.ui.containers.ScrollViewEvents","onContainerEventsStatusChanged",0xf0fdd460,"haxe.ui.containers.ScrollViewEvents.onContainerEventsStatusChanged","haxe/ui/containers/ScrollView.hx",958,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_999_onMouseUp,"haxe.ui.containers.ScrollViewEvents","onMouseUp",0xf12316c8,"haxe.ui.containers.ScrollViewEvents.onMouseUp","haxe/ui/containers/ScrollView.hx",999,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_1071_inertialScroll,"haxe.ui.containers.ScrollViewEvents","inertialScroll",0x8bb71c38,"haxe.ui.containers.ScrollViewEvents.inertialScroll","haxe/ui/containers/ScrollView.hx",1071,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_1134_onMouseWheel,"haxe.ui.containers.ScrollViewEvents","onMouseWheel",0x5771c64e,"haxe.ui.containers.ScrollViewEvents.onMouseWheel","haxe/ui/containers/ScrollView.hx",1134,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_1180_onMouseWheel,"haxe.ui.containers.ScrollViewEvents","onMouseWheel",0x5771c64e,"haxe.ui.containers.ScrollViewEvents.onMouseWheel","haxe/ui/containers/ScrollView.hx",1180,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_1189_onActionStart,"haxe.ui.containers.ScrollViewEvents","onActionStart",0xd3d02bb4,"haxe.ui.containers.ScrollViewEvents.onActionStart","haxe/ui/containers/ScrollView.hx",1189,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_841_boot,"haxe.ui.containers.ScrollViewEvents","boot",0x877c3f4b,"haxe.ui.containers.ScrollViewEvents.boot","haxe/ui/containers/ScrollView.hx",841,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{

void ScrollViewEvents_obj::__construct( ::haxe::ui::containers::ScrollView scrollview){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_663_new)
HXLINE(1132)		this->_fadeTimer = null();
HXLINE( 939)		this->_containerEventsPaused = false;
HXLINE( 905)		this->_lastMousePos = null();
HXLINE( 904)		this->_movementThreshold = 3;
HXLINE( 842)		this->_inertia = null();
HXLINE( 667)		super::__construct(scrollview);
HXLINE( 668)		this->_scrollview = scrollview;
            	}

Dynamic ScrollViewEvents_obj::__CreateEmpty() { return new ScrollViewEvents_obj; }

void *ScrollViewEvents_obj::_hx_vtable = 0;

Dynamic ScrollViewEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollViewEvents_obj > _hx_result = new ScrollViewEvents_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollViewEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0548a7cc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
	} else {
		return inClassId==(int)0x1bae5da3;
	}
}

void ScrollViewEvents_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_671_register)
HXLINE( 672)		 ::haxe::ui::core::Component contents = this->_scrollview->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 673)		bool _hx_tmp;
HXDLIN( 673)		if (::hx::IsNotNull( contents )) {
HXLINE( 673)			_hx_tmp = (contents->hasEvent(::haxe::ui::events::UIEvent_obj::RESIZE,this->onContentsResized_dyn()) == false);
            		}
            		else {
HXLINE( 673)			_hx_tmp = false;
            		}
HXDLIN( 673)		if (_hx_tmp) {
HXLINE( 674)			contents->registerEvent(::haxe::ui::events::UIEvent_obj::RESIZE,this->onContentsResized_dyn(),null());
            		}
HXLINE( 677)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 678)		bool _hx_tmp1;
HXDLIN( 678)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 678)			_hx_tmp1 = (hscroll->hasEvent(::haxe::ui::events::UIEvent_obj::CHANGE,this->onHScroll_dyn()) == false);
            		}
            		else {
HXLINE( 678)			_hx_tmp1 = false;
            		}
HXDLIN( 678)		if (_hx_tmp1) {
HXLINE( 679)			hscroll->registerEvent(::haxe::ui::events::UIEvent_obj::CHANGE,this->onHScroll_dyn(),null());
            		}
HXLINE( 681)		bool _hx_tmp2;
HXDLIN( 681)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 681)			_hx_tmp2 = (hscroll->hasEvent(::haxe::ui::events::ScrollEvent_obj::SCROLL,this->onHScrollScroll_dyn()) == false);
            		}
            		else {
HXLINE( 681)			_hx_tmp2 = false;
            		}
HXDLIN( 681)		if (_hx_tmp2) {
HXLINE( 682)			hscroll->registerEvent(::haxe::ui::events::ScrollEvent_obj::SCROLL,this->onHScrollScroll_dyn(),null());
            		}
HXLINE( 685)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 686)		bool _hx_tmp3;
HXDLIN( 686)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 686)			_hx_tmp3 = (vscroll->hasEvent(::haxe::ui::events::UIEvent_obj::CHANGE,this->onVScroll_dyn()) == false);
            		}
            		else {
HXLINE( 686)			_hx_tmp3 = false;
            		}
HXDLIN( 686)		if (_hx_tmp3) {
HXLINE( 687)			vscroll->registerEvent(::haxe::ui::events::UIEvent_obj::CHANGE,this->onVScroll_dyn(),null());
            		}
HXLINE( 689)		bool _hx_tmp4;
HXDLIN( 689)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 689)			_hx_tmp4 = (vscroll->hasEvent(::haxe::ui::events::ScrollEvent_obj::SCROLL,this->onVScrollScroll_dyn()) == false);
            		}
            		else {
HXLINE( 689)			_hx_tmp4 = false;
            		}
HXDLIN( 689)		if (_hx_tmp4) {
HXLINE( 690)			vscroll->registerEvent(::haxe::ui::events::ScrollEvent_obj::SCROLL,this->onVScrollScroll_dyn(),null());
            		}
HXLINE( 693)		bool _hx_tmp5;
HXDLIN( 693)		if ((this->_scrollview->get_scrollMode() != HX_("drag",f4,2b,70,42))) {
HXLINE( 693)			_hx_tmp5 = (this->_scrollview->get_scrollMode() == HX_("inertial",32,2a,a0,a6));
            		}
            		else {
HXLINE( 693)			_hx_tmp5 = true;
            		}
HXDLIN( 693)		if (_hx_tmp5) {
HXLINE( 694)			this->registerEvent(::haxe::ui::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN,this->onMiddleMouseDown_dyn(),null());
HXLINE( 695)			this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN,this->onLeftMouseDown_dyn(),null());
HXLINE( 696)			this->registerEvent(::haxe::ui::events::MouseEvent_obj::RIGHT_MOUSE_DOWN,this->onRightMouseDown_dyn(),null());
            		}
            		else {
HXLINE( 697)			if (this->hasEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN,this->onLeftMouseDown_dyn())) {
HXLINE( 698)				this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN,this->onMiddleMouseDown_dyn());
HXLINE( 699)				this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN,this->onLeftMouseDown_dyn());
HXLINE( 700)				this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::RIGHT_MOUSE_DOWN,this->onRightMouseDown_dyn());
            			}
            		}
HXLINE( 703)		if ((this->_scrollview->hasEvent(::haxe::ui::events::UIEvent_obj::SHOWN,null()) == false)) {
HXLINE( 704)			this->registerEvent(::haxe::ui::events::UIEvent_obj::SHOWN,this->onShown_dyn(),null());
            		}
HXLINE( 707)		if ((this->_scrollview->hasEvent(::haxe::ui::events::UIEvent_obj::COMPONENT_ADDED,null()) == false)) {
HXLINE( 708)			this->registerEvent(::haxe::ui::events::UIEvent_obj::COMPONENT_ADDED,this->onComponentAdded_dyn(),null());
            		}
HXLINE( 711)		bool _hx_tmp6;
HXDLIN( 711)		if (::hx::IsNotNull( contents )) {
HXLINE( 711)			_hx_tmp6 = (contents->hasEvent(::haxe::ui::events::UIEvent_obj::COMPONENT_ADDED,null()) == false);
            		}
            		else {
HXLINE( 711)			_hx_tmp6 = false;
            		}
HXDLIN( 711)		if (_hx_tmp6) {
HXLINE( 712)			contents->registerEvent(::haxe::ui::events::UIEvent_obj::COMPONENT_ADDED,this->onContentsComponentAdded_dyn(),null());
            		}
HXLINE( 715)		if ((this->_scrollview->hasEvent(::haxe::ui::events::UIEvent_obj::COMPONENT_REMOVED,null()) == false)) {
HXLINE( 716)			this->registerEvent(::haxe::ui::events::UIEvent_obj::COMPONENT_REMOVED,this->onComponentRemoved_dyn(),null());
            		}
HXLINE( 719)		bool _hx_tmp7;
HXDLIN( 719)		if (::hx::IsNotNull( contents )) {
HXLINE( 719)			_hx_tmp7 = (contents->hasEvent(::haxe::ui::events::UIEvent_obj::COMPONENT_REMOVED,null()) == false);
            		}
            		else {
HXLINE( 719)			_hx_tmp7 = false;
            		}
HXDLIN( 719)		if (_hx_tmp7) {
HXLINE( 720)			contents->registerEvent(::haxe::ui::events::UIEvent_obj::COMPONENT_REMOVED,this->onComponentRemoved_dyn(),null());
            		}
HXLINE( 723)		this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn(),-100);
HXLINE( 724)		this->registerEvent(::haxe::ui::events::ActionEvent_obj::ACTION_START,this->onActionStart_dyn(),-100);
            	}


void ScrollViewEvents_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_727_unregister)
HXLINE( 728)		 ::haxe::ui::core::Component contents = this->_scrollview->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 729)		if (::hx::IsNotNull( contents )) {
HXLINE( 730)			contents->unregisterEvent(::haxe::ui::events::UIEvent_obj::RESIZE,this->onContentsResized_dyn());
            		}
HXLINE( 733)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 734)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 735)			hscroll->unregisterEvent(::haxe::ui::events::UIEvent_obj::CHANGE,this->onHScroll_dyn());
HXLINE( 736)			hscroll->unregisterEvent(::haxe::ui::events::ScrollEvent_obj::SCROLL,this->onHScrollScroll_dyn());
            		}
HXLINE( 739)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 740)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 741)			vscroll->unregisterEvent(::haxe::ui::events::UIEvent_obj::CHANGE,this->onVScroll_dyn());
HXLINE( 742)			vscroll->unregisterEvent(::haxe::ui::events::ScrollEvent_obj::SCROLL,this->onVScrollScroll_dyn());
            		}
HXLINE( 745)		this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN,this->onMiddleMouseDown_dyn());
HXLINE( 746)		this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::RIGHT_MOUSE_DOWN,this->onRightMouseDown_dyn());
HXLINE( 747)		this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN,this->onLeftMouseDown_dyn());
HXLINE( 748)		this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn());
HXLINE( 749)		this->unregisterEvent(::haxe::ui::events::UIEvent_obj::SHOWN,this->onShown_dyn());
HXLINE( 750)		this->unregisterEvent(::haxe::ui::events::UIEvent_obj::COMPONENT_ADDED,this->onComponentAdded_dyn());
HXLINE( 751)		if (::hx::IsNotNull( contents )) {
HXLINE( 752)			contents->unregisterEvent(::haxe::ui::events::UIEvent_obj::COMPONENT_ADDED,this->onContentsComponentAdded_dyn());
            		}
HXLINE( 754)		this->unregisterEvent(::haxe::ui::events::UIEvent_obj::COMPONENT_REMOVED,this->onComponentRemoved_dyn());
HXLINE( 755)		if (::hx::IsNotNull( contents )) {
HXLINE( 756)			contents->unregisterEvent(::haxe::ui::events::UIEvent_obj::COMPONENT_REMOVED,this->onContentsComponentRemoved_dyn());
            		}
HXLINE( 758)		this->unregisterEvent(::haxe::ui::events::ActionEvent_obj::ACTION_START,this->onActionStart_dyn());
            	}


void ScrollViewEvents_obj::onShown( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_761_onShown)
HXLINE( 762)		{
HXLINE( 762)			 ::haxe::ui::containers::ScrollView _this = this->_scrollview;
HXDLIN( 762)			bool _hx_tmp;
HXDLIN( 762)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 762)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 762)				_hx_tmp = true;
            			}
HXDLIN( 762)			if (!(_hx_tmp)) {
HXLINE( 762)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 763)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 764)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 765)			bool _hx_tmp;
HXDLIN( 765)			if (::hx::IsNotNull( hscroll->_layout )) {
HXLINE( 765)				_hx_tmp = (hscroll->_layoutLocked == true);
            			}
            			else {
HXLINE( 765)				_hx_tmp = true;
            			}
HXDLIN( 765)			if (!(_hx_tmp)) {
HXLINE( 765)				hscroll->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 767)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 768)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 769)			bool _hx_tmp;
HXDLIN( 769)			if (::hx::IsNotNull( vscroll->_layout )) {
HXLINE( 769)				_hx_tmp = (vscroll->_layoutLocked == true);
            			}
            			else {
HXLINE( 769)				_hx_tmp = true;
            			}
HXDLIN( 769)			if (!(_hx_tmp)) {
HXLINE( 769)				vscroll->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onShown,(void))

void ScrollViewEvents_obj::onComponentAdded( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_774_onComponentAdded)
HXDLIN( 774)		if (::Std_obj::isOfType(event->relatedComponent,::hx::ClassOf< ::haxe::ui::components::Scroll >())) {
HXLINE( 775)			event->cancel();
HXLINE( 776)			 ::haxe::ui::events::ScrollEvent scrollEvent =  ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ScrollEvent_obj::CHANGE);
HXLINE( 777)			this->_scrollview->dispatch(scrollEvent,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onComponentAdded,(void))

void ScrollViewEvents_obj::onContentsComponentAdded( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_782_onContentsComponentAdded)
HXDLIN( 782)		this->_scrollview->dispatch(event,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onContentsComponentAdded,(void))

void ScrollViewEvents_obj::onComponentRemoved( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_786_onComponentRemoved)
HXDLIN( 786)		if (::Std_obj::isOfType(event->relatedComponent,::hx::ClassOf< ::haxe::ui::components::Scroll >())) {
HXLINE( 787)			event->cancel();
HXLINE( 788)			 ::haxe::ui::events::ScrollEvent scrollEvent =  ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ScrollEvent_obj::CHANGE);
HXLINE( 789)			this->_scrollview->dispatch(scrollEvent,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onComponentRemoved,(void))

void ScrollViewEvents_obj::onContentsComponentRemoved( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_794_onContentsComponentRemoved)
HXDLIN( 794)		this->_scrollview->dispatch(event,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onContentsComponentRemoved,(void))

void ScrollViewEvents_obj::onContentsResized( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_798_onContentsResized)
HXDLIN( 798)		this->_scrollview->invalidateComponent(HX_("scroll",0d,d8,64,47),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onContentsResized,(void))

void ScrollViewEvents_obj::onHScroll( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_801_onHScroll)
HXLINE( 802)		this->_scrollview->invalidateComponent(HX_("scroll",0d,d8,64,47),null());
HXLINE( 803)		 ::haxe::ui::core::Component _hx_tmp = this->_target;
HXDLIN( 803)		_hx_tmp->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ScrollEvent_obj::CHANGE),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onHScroll,(void))

void ScrollViewEvents_obj::onHScrollScroll( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_807_onHScrollScroll)
HXDLIN( 807)		 ::haxe::ui::core::Component _hx_tmp = this->_target;
HXDLIN( 807)		_hx_tmp->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ScrollEvent_obj::SCROLL),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onHScrollScroll,(void))

void ScrollViewEvents_obj::onVScroll( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_810_onVScroll)
HXLINE( 811)		this->_scrollview->invalidateComponent(HX_("scroll",0d,d8,64,47),null());
HXLINE( 812)		 ::haxe::ui::core::Component _hx_tmp = this->_target;
HXDLIN( 812)		_hx_tmp->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ScrollEvent_obj::CHANGE),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onVScroll,(void))

void ScrollViewEvents_obj::onVScrollScroll( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_816_onVScrollScroll)
HXDLIN( 816)		 ::haxe::ui::core::Component _hx_tmp = this->_target;
HXDLIN( 816)		_hx_tmp->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ScrollEvent_obj::SCROLL),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onVScrollScroll,(void))

void ScrollViewEvents_obj::onLeftMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_821_onLeftMouseDown)
HXDLIN( 821)		if ((this->_scrollview->get_scrollMouseButton() == HX_("left",07,08,b0,47))) {
HXLINE( 822)			this->onMouseDown(event);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onLeftMouseDown,(void))

void ScrollViewEvents_obj::onMiddleMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_828_onMiddleMouseDown)
HXDLIN( 828)		if ((this->_scrollview->get_scrollMouseButton() == HX_("middle",55,d3,5e,4c))) {
HXLINE( 829)			this->onMouseDown(event);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onMiddleMouseDown,(void))

void ScrollViewEvents_obj::onRightMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_835_onRightMouseDown)
HXDLIN( 835)		if ((this->_scrollview->get_scrollMouseButton() == HX_("right",dc,0b,64,e9))) {
HXLINE( 836)			this->onMouseDown(event);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onRightMouseDown,(void))

void ScrollViewEvents_obj::onMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_844_onMouseDown)
HXLINE( 845)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 846)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 848)		bool _hx_tmp;
HXDLIN( 848)		if (::hx::IsNull( hscroll )) {
HXLINE( 848)			_hx_tmp = ::hx::IsNull( vscroll );
            		}
            		else {
HXLINE( 848)			_hx_tmp = false;
            		}
HXDLIN( 848)		if (_hx_tmp) {
HXLINE( 849)			return;
            		}
HXLINE( 852)		this->_scrollview->addClass(HX_(":down",9c,9d,ab,a7),null(),null());
HXLINE( 854)		this->_lastMousePos =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,event->screenX,event->screenY);
HXLINE( 856)		 ::haxe::ui::geom::Point componentOffset = this->_scrollview->getComponentOffset();
HXLINE( 859)		::Array< ::Dynamic> under = this->_scrollview->findComponentsUnderPoint((event->screenX - componentOffset->x),(event->screenY - componentOffset->y),null());
HXLINE( 860)		{
HXLINE( 860)			int _g = 0;
HXDLIN( 860)			while((_g < under->length)){
HXLINE( 860)				 ::haxe::ui::core::Component c = under->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 860)				_g = (_g + 1);
HXLINE( 861)				bool _hx_tmp;
HXDLIN( 861)				if (!(c->hasTextInput())) {
HXLINE( 861)					_hx_tmp = ::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::components::Scroll >());
            				}
            				else {
HXLINE( 861)					_hx_tmp = true;
            				}
HXDLIN( 861)				if (_hx_tmp) {
HXLINE( 862)					return;
            				}
            			}
            		}
HXLINE( 868)		this->_offset =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 869)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 870)			Float _hx_tmp = hscroll->get_pos();
HXDLIN( 870)			this->_offset->x = (_hx_tmp + event->screenX);
            		}
HXLINE( 872)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 873)			Float _hx_tmp = vscroll->get_pos();
HXDLIN( 873)			this->_offset->y = (_hx_tmp + event->screenY);
            		}
HXLINE( 876)		if ((this->_scrollview->get_scrollMode() == HX_("inertial",32,2a,a0,a6))) {
HXLINE( 877)			if (::hx::IsNull( this->_inertia )) {
HXLINE( 879)				 ::haxe::ui::geom::Point _hx_tmp =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 880)				 ::haxe::ui::geom::Point _hx_tmp1 =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 881)				 ::haxe::ui::geom::Point _hx_tmp2 =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 878)				this->_inertia =  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("target",51,f3,ec,86),_hx_tmp1)
            					->setFixed(1,HX_("timestamp",d6,d4,ce,a5),( (Float)(0) ))
            					->setFixed(2,HX_("direction",3f,62,40,10), ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null()))
            					->setFixed(3,HX_("screen",6c,3b,5d,47),_hx_tmp)
            					->setFixed(4,HX_("amplitude",43,15,fb,69),_hx_tmp2));
            			}
HXLINE( 887)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x = this->_scrollview->get_hscrollPos();
HXLINE( 888)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y = this->_scrollview->get_vscrollPos();
HXLINE( 889)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x = ( (Float)(0) );
HXLINE( 890)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y = ( (Float)(0) );
HXLINE( 892)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->x = event->screenX;
HXLINE( 893)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->y = event->screenY;
HXLINE( 895)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 895)			Float _hx_tmp;
HXDLIN( 895)			if ((timer > 0)) {
HXLINE( 895)				_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE( 895)				_hx_tmp = ( (Float)(0) );
            			}
HXDLIN( 895)			this->_inertia->__SetField(HX_("timestamp",d6,d4,ce,a5),_hx_tmp,::hx::paccDynamic);
            		}
HXLINE( 898)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_MOVE,this->onMouseMove_dyn(),null());
HXLINE( 899)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(::haxe::ui::events::MouseEvent_obj::MIDDLE_MOUSE_UP,this->onMouseUp_dyn(),null());
HXLINE( 900)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(::haxe::ui::events::MouseEvent_obj::RIGHT_MOUSE_UP,this->onMouseUp_dyn(),null());
HXLINE( 901)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onMouseDown,(void))

void ScrollViewEvents_obj::onMouseMove( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_906_onMouseMove)
HXLINE( 907)		event->cancel();
HXLINE( 908)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 909)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 910)			hscroll->set_pos((this->_offset->x - event->screenX));
HXLINE( 911)			Float distX = ::Math_obj::abs((event->screenX - this->_lastMousePos->x));
HXLINE( 917)			if ((distX > ::haxe::ui::Toolkit_obj::get_scaleX())) {
HXLINE( 918)				this->pauseContainerEvents();
            			}
            		}
HXLINE( 922)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 923)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 924)			vscroll->set_pos((this->_offset->y - event->screenY));
HXLINE( 925)			Float distY = ::Math_obj::abs((event->screenY - this->_lastMousePos->y));
HXLINE( 931)			if ((distY > ::haxe::ui::Toolkit_obj::get_scaleY())) {
HXLINE( 932)				this->pauseContainerEvents();
            			}
            		}
HXLINE( 936)		this->_lastMousePos =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,event->screenX,event->screenY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onMouseMove,(void))

void ScrollViewEvents_obj::pauseContainerEvents(){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_940_pauseContainerEvents)
HXLINE( 941)		if ((this->_containerEventsPaused == true)) {
HXLINE( 942)			return;
            		}
HXLINE( 944)		this->_containerEventsPaused = true;
HXLINE( 945)		this->onContainerEventsStatusChanged();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewEvents_obj,pauseContainerEvents,(void))

void ScrollViewEvents_obj::resumeContainerEvents(){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_948_resumeContainerEvents)
HXLINE( 949)		if ((this->_containerEventsPaused == false)) {
HXLINE( 950)			return;
            		}
HXLINE( 953)		this->_containerEventsPaused = false;
HXLINE( 954)		this->onContainerEventsStatusChanged();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewEvents_obj,resumeContainerEvents,(void))

void ScrollViewEvents_obj::onContainerEventsStatusChanged(){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_958_onContainerEventsStatusChanged)
HXLINE( 959)		 ::haxe::ui::core::Component scrollViewContents = this->_scrollview->findComponent(HX_("scrollview-contents",15,b7,70,a7),::hx::ClassOf< ::haxe::ui::core::Component >(),true,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 960)		scrollViewContents->disableInteractivity(this->_containerEventsPaused,null(),null(),null());
HXLINE( 962)		if ((this->_containerEventsPaused == true)) {
HXLINE( 963)			scrollViewContents->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            		}
            		else {
HXLINE( 965)			 ::Dynamic components = ::haxe::ui::core::Screen_obj::get_instance()->currentMouseX;
HXDLIN( 965)			::Array< ::Dynamic> components1 = scrollViewContents->findComponentsUnderPoint(( (Float)(components) ),( (Float)(::haxe::ui::core::Screen_obj::get_instance()->currentMouseY) ),null());
HXLINE( 966)			{
HXLINE( 966)				int _g = 0;
HXDLIN( 966)				while((_g < components1->length)){
HXLINE( 966)					 ::haxe::ui::core::Component c = components1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 966)					_g = (_g + 1);
HXLINE( 967)					 ::haxe::ui::events::MouseEvent mouseEvent =  ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::MouseEvent_obj::MOUSE_OVER);
HXLINE( 968)					c->dispatch(mouseEvent,null());
            				}
            			}
            		}
HXLINE( 972)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 973)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 974)		bool _hx_tmp;
HXDLIN( 974)		if (::hx::IsNull( hscroll )) {
HXLINE( 974)			_hx_tmp = ::hx::IsNotNull( vscroll );
            		}
            		else {
HXLINE( 974)			_hx_tmp = true;
            		}
HXDLIN( 974)		if (_hx_tmp) {
HXLINE( 975)			if ((this->_scrollview->get_autoHideScrolls() == true)) {
HXLINE( 976)				if ((this->_containerEventsPaused == true)) {
HXLINE( 977)					if (::hx::IsNotNull( hscroll )) {
HXLINE( 979)						hscroll->fadeIn(null(),null());
            					}
HXLINE( 981)					if (::hx::IsNotNull( vscroll )) {
HXLINE( 983)						vscroll->fadeIn(null(),null());
            					}
            				}
            				else {
HXLINE( 986)					if (::hx::IsNotNull( hscroll )) {
HXLINE( 988)						hscroll->fadeOut(null(),null());
            					}
HXLINE( 990)					if (::hx::IsNotNull( vscroll )) {
HXLINE( 992)						vscroll->fadeOut(null(),null());
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewEvents_obj,onContainerEventsStatusChanged,(void))

void ScrollViewEvents_obj::onMouseUp( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_999_onMouseUp)
HXLINE(1000)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_MOVE,this->onMouseMove_dyn());
HXLINE(1001)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MIDDLE_MOUSE_UP,this->onMouseUp_dyn());
HXLINE(1002)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(::haxe::ui::events::MouseEvent_obj::RIGHT_MOUSE_UP,this->onMouseUp_dyn());
HXLINE(1003)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn());
HXLINE(1005)		if ((this->_scrollview->get_scrollMode() == HX_("inertial",32,2a,a0,a6))) {
HXLINE(1006)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(1006)			Float now;
HXDLIN(1006)			if ((timer > 0)) {
HXLINE(1006)				now = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE(1006)				now = ( (Float)(0) );
            			}
HXLINE(1007)			Float elapsed = ((now - ( (Float)(this->_inertia->__Field(HX_("timestamp",d6,d4,ce,a5),::hx::paccDynamic)) )) * ( (Float)(1000) ));
HXLINE(1009)			Float deltaX = ::Math_obj::abs((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->x - event->screenX));
HXLINE(1010)			Float deltaY = ::Math_obj::abs((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->y - event->screenY));
HXLINE(1012)			Float _hx_tmp;
HXDLIN(1012)			if (((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->x - event->screenX) < 0)) {
HXLINE(1012)				_hx_tmp = ( (Float)(0) );
            			}
            			else {
HXLINE(1012)				_hx_tmp = ( (Float)(1) );
            			}
HXDLIN(1012)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->x = _hx_tmp;
HXLINE(1013)			Float velocityX = (deltaX / elapsed);
HXLINE(1014)			Float v = ((( (Float)(1000) ) * deltaX) / (1 + elapsed));
HXLINE(1015)			velocityX = ((((Float)0.8) * v) + (((Float)0.2) * velocityX));
HXLINE(1017)			Float _hx_tmp1;
HXDLIN(1017)			if (((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->y - event->screenY) < 0)) {
HXLINE(1017)				_hx_tmp1 = ( (Float)(0) );
            			}
            			else {
HXLINE(1017)				_hx_tmp1 = ( (Float)(1) );
            			}
HXDLIN(1017)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->y = _hx_tmp1;
HXLINE(1018)			Float velocityY = (deltaY / elapsed);
HXLINE(1019)			Float v1 = ((( (Float)(1000) ) * deltaY) / (1 + elapsed));
HXLINE(1020)			velocityY = ((((Float)0.8) * v1) + (((Float)0.2) * velocityY));
HXLINE(1022)			bool _hx_tmp2;
HXDLIN(1022)			if ((velocityX <= 75)) {
HXLINE(1022)				_hx_tmp2 = (velocityY <= 75);
            			}
            			else {
HXLINE(1022)				_hx_tmp2 = false;
            			}
HXDLIN(1022)			if (_hx_tmp2) {
HXLINE(1023)				this->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ScrollEvent_obj::STOP));
HXLINE(1024)				::haxe::ui::Toolkit_obj::callLater(this->resumeContainerEvents_dyn());
HXLINE(1025)				return;
            			}
HXLINE(1028)			int timer1 = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(1028)			Float _hx_tmp3;
HXDLIN(1028)			if ((timer1 > 0)) {
HXLINE(1028)				_hx_tmp3 = (( (Float)(timer1) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE(1028)				_hx_tmp3 = ( (Float)(0) );
            			}
HXDLIN(1028)			this->_inertia->__SetField(HX_("timestamp",d6,d4,ce,a5),_hx_tmp3,::hx::paccDynamic);
HXLINE(1030)			 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(1031)			if (::hx::IsNotNull( hscroll )) {
HXLINE(1032)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x = (((Float)0.8) * velocityX);
            			}
HXLINE(1034)			if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->x == 0)) {
HXLINE(1035)				Float _hx_tmp = this->_scrollview->get_hscrollPos();
HXDLIN(1035)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x = ( (Float)(::Math_obj::round((_hx_tmp - ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x))) );
            			}
            			else {
HXLINE(1037)				Float _hx_tmp = this->_scrollview->get_hscrollPos();
HXDLIN(1037)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x = ( (Float)(::Math_obj::round((_hx_tmp + ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x))) );
            			}
HXLINE(1040)			 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(1041)			if (::hx::IsNotNull( vscroll )) {
HXLINE(1042)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y = (((Float)0.8) * velocityY);
            			}
HXLINE(1044)			if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->y == 0)) {
HXLINE(1045)				Float _hx_tmp = this->_scrollview->get_vscrollPos();
HXDLIN(1045)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y = ( (Float)(::Math_obj::round((_hx_tmp - ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y))) );
            			}
            			else {
HXLINE(1047)				Float _hx_tmp = this->_scrollview->get_vscrollPos();
HXDLIN(1047)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y = ( (Float)(::Math_obj::round((_hx_tmp + ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y))) );
            			}
HXLINE(1050)			bool _hx_tmp4;
HXDLIN(1050)			Float _hx_tmp5 = this->_scrollview->get_hscrollPos();
HXDLIN(1050)			if ((_hx_tmp5 == ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x)) {
HXLINE(1050)				Float _hx_tmp = this->_scrollview->get_vscrollPos();
HXDLIN(1050)				_hx_tmp4 = (_hx_tmp == ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y);
            			}
            			else {
HXLINE(1050)				_hx_tmp4 = false;
            			}
HXDLIN(1050)			if (_hx_tmp4) {
HXLINE(1051)				this->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ScrollEvent_obj::STOP));
HXLINE(1052)				::haxe::ui::Toolkit_obj::callLater(this->resumeContainerEvents_dyn());
HXLINE(1053)				return;
            			}
HXLINE(1056)			Float _hx_tmp6 = this->_scrollview->get_hscrollPos();
HXDLIN(1056)			if ((_hx_tmp6 == ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x)) {
HXLINE(1057)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x = ( (Float)(0) );
            			}
HXLINE(1059)			Float _hx_tmp7 = this->_scrollview->get_vscrollPos();
HXDLIN(1059)			if ((_hx_tmp7 == ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y)) {
HXLINE(1060)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y = ( (Float)(0) );
            			}
HXLINE(1063)			::haxe::ui::Toolkit_obj::callLater(this->inertialScroll_dyn());
            		}
            		else {
HXLINE(1065)			this->_scrollview->removeClass(HX_(":down",9c,9d,ab,a7),null(),null());
HXLINE(1066)			this->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ScrollEvent_obj::STOP));
HXLINE(1067)			::haxe::ui::Toolkit_obj::callLater(this->resumeContainerEvents_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onMouseUp,(void))

void ScrollViewEvents_obj::inertialScroll(){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_1071_inertialScroll)
HXLINE(1072)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(1072)		Float elapsed;
HXDLIN(1072)		if ((timer > 0)) {
HXLINE(1072)			elapsed = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(1072)			elapsed = ( (Float)(0) );
            		}
HXDLIN(1072)		Float elapsed1 = ((elapsed - ( (Float)(this->_inertia->__Field(HX_("timestamp",d6,d4,ce,a5),::hx::paccDynamic)) )) * ( (Float)(1000) ));
HXLINE(1074)		bool finishedX = false;
HXLINE(1075)		if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x != 0)) {
HXLINE(1076)			Float deltaX = (-(( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x) * ::Math_obj::exp((-(elapsed1) / ( (Float)(325) ))));
HXLINE(1077)			bool _hx_tmp;
HXDLIN(1077)			if (!((deltaX > ((Float)0.5)))) {
HXLINE(1077)				_hx_tmp = (deltaX < ((Float)-0.5));
            			}
            			else {
HXLINE(1077)				_hx_tmp = true;
            			}
HXDLIN(1077)			if (_hx_tmp) {
HXLINE(1078)				Float oldPos = this->_scrollview->get_hscrollPos();
HXLINE(1079)				Float newPos = ( (Float)(0) );
HXLINE(1080)				if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->x == 0)) {
HXLINE(1081)					newPos = (( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x - deltaX);
            				}
            				else {
HXLINE(1083)					newPos = (( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x + deltaX);
            				}
HXLINE(1085)				if ((newPos < 0)) {
HXLINE(1086)					newPos = ( (Float)(0) );
            				}
            				else {
HXLINE(1087)					if ((newPos > this->_scrollview->get_hscrollMax())) {
HXLINE(1088)						newPos = this->_scrollview->get_hscrollMax();
            					}
            				}
HXLINE(1090)				this->_scrollview->set_hscrollPos(newPos);
HXLINE(1091)				bool finishedX1;
HXDLIN(1091)				if ((newPos != oldPos)) {
HXLINE(1091)					finishedX1 = (newPos == 0);
            				}
            				else {
HXLINE(1091)					finishedX1 = true;
            				}
HXDLIN(1091)				if (!(finishedX1)) {
HXLINE(1091)					finishedX = (newPos == this->_scrollview->get_hscrollMax());
            				}
            				else {
HXLINE(1091)					finishedX = true;
            				}
            			}
            			else {
HXLINE(1093)				finishedX = true;
            			}
            		}
            		else {
HXLINE(1096)			finishedX = true;
            		}
HXLINE(1099)		bool finishedY = false;
HXLINE(1100)		if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y != 0)) {
HXLINE(1101)			Float deltaY = (-(( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y) * ::Math_obj::exp((-(elapsed1) / ( (Float)(325) ))));
HXLINE(1102)			bool _hx_tmp;
HXDLIN(1102)			if (!((deltaY > ((Float)0.5)))) {
HXLINE(1102)				_hx_tmp = (deltaY < ((Float)-0.5));
            			}
            			else {
HXLINE(1102)				_hx_tmp = true;
            			}
HXDLIN(1102)			if (_hx_tmp) {
HXLINE(1103)				Float oldPos = this->_scrollview->get_vscrollPos();
HXLINE(1104)				Float newPos = ( (Float)(0) );
HXLINE(1105)				if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->y == 0)) {
HXLINE(1106)					newPos = (( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y - deltaY);
            				}
            				else {
HXLINE(1108)					newPos = (( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y + deltaY);
            				}
HXLINE(1110)				if ((newPos < 0)) {
HXLINE(1111)					newPos = ( (Float)(0) );
            				}
            				else {
HXLINE(1112)					if ((newPos > this->_scrollview->get_vscrollMax())) {
HXLINE(1113)						newPos = this->_scrollview->get_vscrollMax();
            					}
            				}
HXLINE(1115)				this->_scrollview->set_vscrollPos(newPos);
HXLINE(1116)				bool finishedY1;
HXDLIN(1116)				if ((newPos != oldPos)) {
HXLINE(1116)					finishedY1 = (newPos == 0);
            				}
            				else {
HXLINE(1116)					finishedY1 = true;
            				}
HXDLIN(1116)				if (!(finishedY1)) {
HXLINE(1116)					finishedY = (newPos == this->_scrollview->get_vscrollMax());
            				}
            				else {
HXLINE(1116)					finishedY = true;
            				}
            			}
            			else {
HXLINE(1118)				finishedY = true;
            			}
            		}
            		else {
HXLINE(1121)			finishedY = true;
            		}
HXLINE(1124)		bool _hx_tmp;
HXDLIN(1124)		if ((finishedX == true)) {
HXLINE(1124)			_hx_tmp = (finishedY == true);
            		}
            		else {
HXLINE(1124)			_hx_tmp = false;
            		}
HXDLIN(1124)		if (_hx_tmp) {
HXLINE(1125)			this->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ScrollEvent_obj::STOP));
HXLINE(1126)			::haxe::ui::Toolkit_obj::callLater(this->resumeContainerEvents_dyn());
            		}
            		else {
HXLINE(1128)			::haxe::ui::Toolkit_obj::callLater(this->inertialScroll_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewEvents_obj,inertialScroll,(void))

void ScrollViewEvents_obj::onMouseWheel( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_1134_onMouseWheel)
HXDLIN(1134)		 ::haxe::ui::containers::ScrollViewEvents _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1139)		if ((this->_scrollview->get_scrollPolicy() == HX_("never",8c,3e,30,99))) {
HXLINE(1140)			return;
            		}
HXLINE(1142)		::hx::Class primaryType = ::hx::ClassOf< ::haxe::ui::components::VerticalScroll >();
HXLINE(1143)		::hx::Class secondaryType = ::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >();
HXLINE(1144)		if (event->shiftKey) {
HXLINE(1145)			primaryType = ::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >();
HXLINE(1146)			secondaryType = ::hx::ClassOf< ::haxe::ui::components::VerticalScroll >();
            		}
HXLINE(1148)		::Array< ::Dynamic> scroll = ::Array_obj< ::Dynamic>::__new(1)->init(0,this->_scrollview->findComponent(null(),primaryType,false,null()).StaticCast<  ::haxe::ui::components::Scroll >());
HXLINE(1149)		if (::hx::IsNull( scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >() )) {
HXLINE(1150)			scroll[0] = this->_scrollview->findComponent(null(),secondaryType,false,null()).StaticCast<  ::haxe::ui::components::Scroll >();
            		}
HXLINE(1153)		if (::hx::IsNotNull( scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >() )) {
HXLINE(1154)			::String currentScrollPolicy;
HXDLIN(1154)			if ((scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >()->get_id() == HX_("scrollview-vscroll",68,7b,46,57))) {
HXLINE(1154)				currentScrollPolicy = this->_scrollview->get_verticalScrollPolicy();
            			}
            			else {
HXLINE(1154)				currentScrollPolicy = this->_scrollview->get_horizontalScrollPolicy();
            			}
HXLINE(1158)			if ((currentScrollPolicy == HX_("never",8c,3e,30,99))) {
HXLINE(1159)				return;
            			}
HXLINE(1162)			bool _hx_tmp;
HXDLIN(1162)			if ((this->_scrollview->get_autoHideScrolls() == true)) {
HXLINE(1162)				_hx_tmp = ::hx::IsNull( this->_fadeTimer );
            			}
            			else {
HXLINE(1162)				_hx_tmp = false;
            			}
HXDLIN(1162)			if (_hx_tmp) {
HXLINE(1163)				scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >()->fadeIn(null(),null());
            			}
HXLINE(1165)			event->cancel();
HXLINE(1166)			int amount = 50;
HXLINE(1170)			if ((event->delta > 0)) {
HXLINE(1171)				 ::haxe::ui::components::Scroll scroll1 = scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >();
HXDLIN(1171)				scroll1->set_pos((scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >()->get_pos() - ( (Float)(amount) )));
            			}
            			else {
HXLINE(1172)				if ((event->delta < 0)) {
HXLINE(1173)					 ::haxe::ui::components::Scroll scroll1 = scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >();
HXDLIN(1173)					scroll1->set_pos((scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >()->get_pos() + amount));
            				}
            			}
HXLINE(1175)			if ((this->_scrollview->get_autoHideScrolls() == true)) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::containers::ScrollViewEvents,_gthis,::Array< ::Dynamic>,scroll) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_253fa99b051b5118_1180_onMouseWheel)
HXLINE(1181)					scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >()->fadeOut(null(),null());
HXLINE(1182)					_gthis->_fadeTimer->stop();
HXLINE(1183)					_gthis->_fadeTimer = null();
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(1176)				if (::hx::IsNotNull( this->_fadeTimer )) {
HXLINE(1177)					this->_fadeTimer->stop();
HXLINE(1178)					this->_fadeTimer = null();
            				}
HXLINE(1180)				this->_fadeTimer =  ::haxe::ui::util::Timer_obj::__alloc( HX_CTX ,300, ::Dynamic(new _hx_Closure_0(_gthis,scroll)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onMouseWheel,(void))

void ScrollViewEvents_obj::onActionStart( ::haxe::ui::events::ActionEvent event){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_1189_onActionStart)
HXLINE(1190)		if ((this->_scrollview->get_scrollPolicy() == HX_("never",8c,3e,30,99))) {
HXLINE(1191)			return;
            		}
HXLINE(1193)		::String _hx_switch_0 = event->action;
            		if (  (_hx_switch_0==HX_("actionDown",38,73,b4,4d)) ){
HXLINE(1195)			if ((this->_scrollview->get_verticalScrollPolicy() != HX_("never",8c,3e,30,99))) {
HXLINE(1196)				 ::haxe::ui::containers::ScrollView fh = this->_scrollview;
HXDLIN(1196)				fh->set_vscrollPos((fh->get_vscrollPos() + 1));
HXLINE(1197)				event->repeater = true;
            			}
HXLINE(1195)			goto _hx_goto_27;
            		}
            		if (  (_hx_switch_0==HX_("actionLeft",dd,82,f6,52)) ){
HXLINE(1205)			if ((this->_scrollview->get_horizontalScrollPolicy() != HX_("never",8c,3e,30,99))) {
HXLINE(1206)				 ::haxe::ui::containers::ScrollView fh = this->_scrollview;
HXDLIN(1206)				fh->set_hscrollPos((fh->get_hscrollPos() - ( (Float)(1) )));
HXLINE(1207)				event->repeater = true;
            			}
HXLINE(1205)			goto _hx_goto_27;
            		}
            		if (  (_hx_switch_0==HX_("actionRight",46,0c,c9,bb)) ){
HXLINE(1210)			if ((this->_scrollview->get_horizontalScrollPolicy() != HX_("never",8c,3e,30,99))) {
HXLINE(1211)				 ::haxe::ui::containers::ScrollView fh = this->_scrollview;
HXDLIN(1211)				fh->set_hscrollPos((fh->get_hscrollPos() + 1));
HXLINE(1212)				event->repeater = true;
            			}
HXLINE(1210)			goto _hx_goto_27;
            		}
            		if (  (_hx_switch_0==HX_("actionUp",b1,5f,15,e1)) ){
HXLINE(1200)			if ((this->_scrollview->get_verticalScrollPolicy() != HX_("never",8c,3e,30,99))) {
HXLINE(1201)				 ::haxe::ui::containers::ScrollView fh = this->_scrollview;
HXDLIN(1201)				fh->set_vscrollPos((fh->get_vscrollPos() - ( (Float)(1) )));
HXLINE(1202)				event->repeater = true;
            			}
HXLINE(1200)			goto _hx_goto_27;
            		}
            		/* default */{
            		}
            		_hx_goto_27:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onActionStart,(void))

int ScrollViewEvents_obj::INERTIAL_TIME_CONSTANT;


::hx::ObjectPtr< ScrollViewEvents_obj > ScrollViewEvents_obj::__new( ::haxe::ui::containers::ScrollView scrollview) {
	::hx::ObjectPtr< ScrollViewEvents_obj > __this = new ScrollViewEvents_obj();
	__this->__construct(scrollview);
	return __this;
}

::hx::ObjectPtr< ScrollViewEvents_obj > ScrollViewEvents_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview) {
	ScrollViewEvents_obj *__this = (ScrollViewEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollViewEvents_obj), true, "haxe.ui.containers.ScrollViewEvents"));
	*(void **)__this = ScrollViewEvents_obj::_hx_vtable;
	__this->__construct(scrollview);
	return __this;
}

ScrollViewEvents_obj::ScrollViewEvents_obj()
{
}

void ScrollViewEvents_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollViewEvents);
	HX_MARK_MEMBER_NAME(_scrollview,"_scrollview");
	HX_MARK_MEMBER_NAME(_offset,"_offset");
	HX_MARK_MEMBER_NAME(_inertia,"_inertia");
	HX_MARK_MEMBER_NAME(_movementThreshold,"_movementThreshold");
	HX_MARK_MEMBER_NAME(_lastMousePos,"_lastMousePos");
	HX_MARK_MEMBER_NAME(_containerEventsPaused,"_containerEventsPaused");
	HX_MARK_MEMBER_NAME(_fadeTimer,"_fadeTimer");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollViewEvents_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollview,"_scrollview");
	HX_VISIT_MEMBER_NAME(_offset,"_offset");
	HX_VISIT_MEMBER_NAME(_inertia,"_inertia");
	HX_VISIT_MEMBER_NAME(_movementThreshold,"_movementThreshold");
	HX_VISIT_MEMBER_NAME(_lastMousePos,"_lastMousePos");
	HX_VISIT_MEMBER_NAME(_containerEventsPaused,"_containerEventsPaused");
	HX_VISIT_MEMBER_NAME(_fadeTimer,"_fadeTimer");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScrollViewEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onShown") ) { return ::hx::Val( onShown_dyn() ); }
		if (HX_FIELD_EQ(inName,"_offset") ) { return ::hx::Val( _offset ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		if (HX_FIELD_EQ(inName,"_inertia") ) { return ::hx::Val( _inertia ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onHScroll") ) { return ::hx::Val( onHScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"onVScroll") ) { return ::hx::Val( onVScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return ::hx::Val( onMouseUp_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		if (HX_FIELD_EQ(inName,"_fadeTimer") ) { return ::hx::Val( _fadeTimer ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { return ::hx::Val( _scrollview ); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return ::hx::Val( onMouseMove_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return ::hx::Val( onMouseWheel_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_lastMousePos") ) { return ::hx::Val( _lastMousePos ); }
		if (HX_FIELD_EQ(inName,"onActionStart") ) { return ::hx::Val( onActionStart_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inertialScroll") ) { return ::hx::Val( inertialScroll_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onHScrollScroll") ) { return ::hx::Val( onHScrollScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"onVScrollScroll") ) { return ::hx::Val( onVScrollScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLeftMouseDown") ) { return ::hx::Val( onLeftMouseDown_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onComponentAdded") ) { return ::hx::Val( onComponentAdded_dyn() ); }
		if (HX_FIELD_EQ(inName,"onRightMouseDown") ) { return ::hx::Val( onRightMouseDown_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onContentsResized") ) { return ::hx::Val( onContentsResized_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMiddleMouseDown") ) { return ::hx::Val( onMiddleMouseDown_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onComponentRemoved") ) { return ::hx::Val( onComponentRemoved_dyn() ); }
		if (HX_FIELD_EQ(inName,"_movementThreshold") ) { return ::hx::Val( _movementThreshold ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pauseContainerEvents") ) { return ::hx::Val( pauseContainerEvents_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"resumeContainerEvents") ) { return ::hx::Val( resumeContainerEvents_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_containerEventsPaused") ) { return ::hx::Val( _containerEventsPaused ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"onContentsComponentAdded") ) { return ::hx::Val( onContentsComponentAdded_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"onContentsComponentRemoved") ) { return ::hx::Val( onContentsComponentRemoved_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"onContainerEventsStatusChanged") ) { return ::hx::Val( onContainerEventsStatusChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScrollViewEvents_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_offset") ) { _offset=inValue.Cast<  ::haxe::ui::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_inertia") ) { _inertia=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fadeTimer") ) { _fadeTimer=inValue.Cast<  ::haxe::ui::util::Timer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { _scrollview=inValue.Cast<  ::haxe::ui::containers::ScrollView >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_lastMousePos") ) { _lastMousePos=inValue.Cast<  ::haxe::ui::geom::Point >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_movementThreshold") ) { _movementThreshold=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_containerEventsPaused") ) { _containerEventsPaused=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollViewEvents_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_scrollview",11,62,bf,f3));
	outFields->push(HX_("_offset",32,a9,b6,ce));
	outFields->push(HX_("_inertia",7b,0a,73,b6));
	outFields->push(HX_("_movementThreshold",3d,25,68,68));
	outFields->push(HX_("_lastMousePos",c4,43,1f,e8));
	outFields->push(HX_("_containerEventsPaused",c9,94,8f,05));
	outFields->push(HX_("_fadeTimer",6a,94,c0,57));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScrollViewEvents_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::ScrollView */ ,(int)offsetof(ScrollViewEvents_obj,_scrollview),HX_("_scrollview",11,62,bf,f3)},
	{::hx::fsObject /*  ::haxe::ui::geom::Point */ ,(int)offsetof(ScrollViewEvents_obj,_offset),HX_("_offset",32,a9,b6,ce)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ScrollViewEvents_obj,_inertia),HX_("_inertia",7b,0a,73,b6)},
	{::hx::fsInt,(int)offsetof(ScrollViewEvents_obj,_movementThreshold),HX_("_movementThreshold",3d,25,68,68)},
	{::hx::fsObject /*  ::haxe::ui::geom::Point */ ,(int)offsetof(ScrollViewEvents_obj,_lastMousePos),HX_("_lastMousePos",c4,43,1f,e8)},
	{::hx::fsBool,(int)offsetof(ScrollViewEvents_obj,_containerEventsPaused),HX_("_containerEventsPaused",c9,94,8f,05)},
	{::hx::fsObject /*  ::haxe::ui::util::Timer */ ,(int)offsetof(ScrollViewEvents_obj,_fadeTimer),HX_("_fadeTimer",6a,94,c0,57)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ScrollViewEvents_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ScrollViewEvents_obj::INERTIAL_TIME_CONSTANT,HX_("INERTIAL_TIME_CONSTANT",09,a9,df,c0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ScrollViewEvents_obj_sMemberFields[] = {
	HX_("_scrollview",11,62,bf,f3),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onShown",32,27,65,12),
	HX_("onComponentAdded",42,94,a0,77),
	HX_("onContentsComponentAdded",fc,3d,df,41),
	HX_("onComponentRemoved",a2,43,ad,6e),
	HX_("onContentsComponentRemoved",dc,4f,35,45),
	HX_("onContentsResized",97,77,70,78),
	HX_("onHScroll",36,43,5c,38),
	HX_("onHScrollScroll",e3,db,f0,44),
	HX_("onVScroll",c4,c1,88,7e),
	HX_("onVScrollScroll",f1,b8,77,15),
	HX_("onLeftMouseDown",81,37,32,f0),
	HX_("onMiddleMouseDown",b3,ec,f3,c0),
	HX_("onRightMouseDown",2a,37,2d,da),
	HX_("_offset",32,a9,b6,ce),
	HX_("_inertia",7b,0a,73,b6),
	HX_("onMouseDown",08,94,05,11),
	HX_("_movementThreshold",3d,25,68,68),
	HX_("_lastMousePos",c4,43,1f,e8),
	HX_("onMouseMove",b7,7e,f8,16),
	HX_("_containerEventsPaused",c9,94,8f,05),
	HX_("pauseContainerEvents",e4,94,a7,e8),
	HX_("resumeContainerEvents",0d,a8,dc,e9),
	HX_("onContainerEventsStatusChanged",07,de,a0,19),
	HX_("onMouseUp",81,ac,1d,98),
	HX_("inertialScroll",df,27,46,7f),
	HX_("_fadeTimer",6a,94,c0,57),
	HX_("onMouseWheel",35,ca,ca,bf),
	HX_("onActionStart",ed,91,5a,b9),
	::String(null()) };

static void ScrollViewEvents_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollViewEvents_obj::INERTIAL_TIME_CONSTANT,"INERTIAL_TIME_CONSTANT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScrollViewEvents_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollViewEvents_obj::INERTIAL_TIME_CONSTANT,"INERTIAL_TIME_CONSTANT");
};

#endif

::hx::Class ScrollViewEvents_obj::__mClass;

static ::String ScrollViewEvents_obj_sStaticFields[] = {
	HX_("INERTIAL_TIME_CONSTANT",09,a9,df,c0),
	::String(null())
};

void ScrollViewEvents_obj::__register()
{
	ScrollViewEvents_obj _hx_dummy;
	ScrollViewEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.ScrollViewEvents",f5,7b,7f,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ScrollViewEvents_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ScrollViewEvents_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollViewEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollViewEvents_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScrollViewEvents_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollViewEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollViewEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ScrollViewEvents_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_841_boot)
HXDLIN( 841)		INERTIAL_TIME_CONSTANT = 325;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
