#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <haxe/ui/containers/ScrollViewEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ContentHeight
#include <haxe/ui/containers/_ScrollView/ContentHeight.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ContentLayoutName
#include <haxe/ui/containers/_ScrollView/ContentLayoutName.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ContentWidth
#include <haxe/ui/containers/_ScrollView/ContentWidth.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_EnsureVisible
#include <haxe/ui/containers/_ScrollView/EnsureVisible.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_GetContents
#include <haxe/ui/containers/_ScrollView/GetContents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_HScrollMax
#include <haxe/ui/containers/_ScrollView/HScrollMax.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_HScrollPageSize
#include <haxe/ui/containers/_ScrollView/HScrollPageSize.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_HScrollPolicyBehaviour
#include <haxe/ui/containers/_ScrollView/HScrollPolicyBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_HScrollPos
#include <haxe/ui/containers/_ScrollView/HScrollPos.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_HScrollThumbSize
#include <haxe/ui/containers/_ScrollView/HScrollThumbSize.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_IsScrollableBehaviour
#include <haxe/ui/containers/_ScrollView/IsScrollableBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_IsScrollableHorizontallyBehaviour
#include <haxe/ui/containers/_ScrollView/IsScrollableHorizontallyBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_IsScrollableVerticallyBehaviour
#include <haxe/ui/containers/_ScrollView/IsScrollableVerticallyBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_PercentContentHeight
#include <haxe/ui/containers/_ScrollView/PercentContentHeight.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_PercentContentWidth
#include <haxe/ui/containers/_ScrollView/PercentContentWidth.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ScrollModeBehaviour
#include <haxe/ui/containers/_ScrollView/ScrollModeBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ScrollPolicyBehaviour
#include <haxe/ui/containers/_ScrollView/ScrollPolicyBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ThumbSize
#include <haxe/ui/containers/_ScrollView/ThumbSize.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_VScrollMax
#include <haxe/ui/containers/_ScrollView/VScrollMax.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_VScrollPageSize
#include <haxe/ui/containers/_ScrollView/VScrollPageSize.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_VScrollPolicyBehaviour
#include <haxe/ui/containers/_ScrollView/VScrollPolicyBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_VScrollPos
#include <haxe/ui/containers/_ScrollView/VScrollPos.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_VScrollThumbSize
#include <haxe/ui/containers/_ScrollView/VScrollThumbSize.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_Virtual
#include <haxe/ui/containers/_ScrollView/Virtual.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
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
#ifndef INCLUDED_haxe_ui_core_IScroller
#include <haxe/ui/core/IScroller.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ScrollViewLayout
#include <haxe/ui/layouts/ScrollViewLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d194136255627609_34_new,"haxe.ui.containers.ScrollView","new",0x3c5772ae,"haxe.ui.containers.ScrollView.new","haxe/ui/containers/ScrollView.hx",34,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_685_ensureVisible,"haxe.ui.containers.ScrollView","ensureVisible",0xfd69ce22,"haxe.ui.containers.ScrollView.ensureVisible","haxe/ui/macros/Macros.hx",685,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_72_validateComponentInternal,"haxe.ui.containers.ScrollView","validateComponentInternal",0xd9d2cc72,"haxe.ui.containers.ScrollView.validateComponentInternal","haxe/ui/containers/ScrollView.hx",72,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_550_registerBehaviours,"haxe.ui.containers.ScrollView","registerBehaviours",0x1e76cd4b,"haxe.ui.containers.ScrollView.registerBehaviours","haxe/ui/macros/Macros.hx",550,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_virtual,"haxe.ui.containers.ScrollView","get_virtual",0x1e0f9e70,"haxe.ui.containers.ScrollView.get_virtual","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_virtual,"haxe.ui.containers.ScrollView","set_virtual",0x287ca57c,"haxe.ui.containers.ScrollView.set_virtual","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_contentLayoutName,"haxe.ui.containers.ScrollView","get_contentLayoutName",0x095ded53,"haxe.ui.containers.ScrollView.get_contentLayoutName","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_630_set_contentLayoutName,"haxe.ui.containers.ScrollView","set_contentLayoutName",0x5d66bb5f,"haxe.ui.containers.ScrollView.set_contentLayoutName","haxe/ui/macros/Macros.hx",630,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_contentWidth,"haxe.ui.containers.ScrollView","get_contentWidth",0xf33e7b88,"haxe.ui.containers.ScrollView.get_contentWidth","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_contentWidth,"haxe.ui.containers.ScrollView","set_contentWidth",0x498068fc,"haxe.ui.containers.ScrollView.set_contentWidth","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_percentContentWidth,"haxe.ui.containers.ScrollView","get_percentContentWidth",0x62451857,"haxe.ui.containers.ScrollView.get_percentContentWidth","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_percentContentWidth,"haxe.ui.containers.ScrollView","set_percentContentWidth",0x64a68163,"haxe.ui.containers.ScrollView.set_percentContentWidth","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_contentHeight,"haxe.ui.containers.ScrollView","get_contentHeight",0x99bd1425,"haxe.ui.containers.ScrollView.get_contentHeight","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_contentHeight,"haxe.ui.containers.ScrollView","set_contentHeight",0xbd2aec31,"haxe.ui.containers.ScrollView.set_contentHeight","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_percentContentHeight,"haxe.ui.containers.ScrollView","get_percentContentHeight",0x507fac76,"haxe.ui.containers.ScrollView.get_percentContentHeight","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_percentContentHeight,"haxe.ui.containers.ScrollView","set_percentContentHeight",0x635a2dea,"haxe.ui.containers.ScrollView.set_percentContentHeight","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_hscrollPos,"haxe.ui.containers.ScrollView","get_hscrollPos",0x8acc42da,"haxe.ui.containers.ScrollView.get_hscrollPos","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_hscrollPos,"haxe.ui.containers.ScrollView","set_hscrollPos",0xaaec2b4e,"haxe.ui.containers.ScrollView.set_hscrollPos","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_hscrollMax,"haxe.ui.containers.ScrollView","get_hscrollMax",0x8ac9efea,"haxe.ui.containers.ScrollView.get_hscrollMax","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_hscrollMax,"haxe.ui.containers.ScrollView","set_hscrollMax",0xaae9d85e,"haxe.ui.containers.ScrollView.set_hscrollMax","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_hscrollPageSize,"haxe.ui.containers.ScrollView","get_hscrollPageSize",0xd581b7aa,"haxe.ui.containers.ScrollView.get_hscrollPageSize","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_hscrollPageSize,"haxe.ui.containers.ScrollView","set_hscrollPageSize",0x121eaab6,"haxe.ui.containers.ScrollView.set_hscrollPageSize","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_hscrollThumbSize,"haxe.ui.containers.ScrollView","get_hscrollThumbSize",0xe5984fbd,"haxe.ui.containers.ScrollView.get_hscrollThumbSize","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_hscrollThumbSize,"haxe.ui.containers.ScrollView","set_hscrollThumbSize",0xb2500731,"haxe.ui.containers.ScrollView.set_hscrollThumbSize","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_vscrollPos,"haxe.ui.containers.ScrollView","get_vscrollPos",0x0eded10c,"haxe.ui.containers.ScrollView.get_vscrollPos","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_vscrollPos,"haxe.ui.containers.ScrollView","set_vscrollPos",0x2efeb980,"haxe.ui.containers.ScrollView.set_vscrollPos","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_vscrollMax,"haxe.ui.containers.ScrollView","get_vscrollMax",0x0edc7e1c,"haxe.ui.containers.ScrollView.get_vscrollMax","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_vscrollMax,"haxe.ui.containers.ScrollView","set_vscrollMax",0x2efc6690,"haxe.ui.containers.ScrollView.set_vscrollMax","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_vscrollPageSize,"haxe.ui.containers.ScrollView","get_vscrollPageSize",0xfb447438,"haxe.ui.containers.ScrollView.get_vscrollPageSize","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_vscrollPageSize,"haxe.ui.containers.ScrollView","set_vscrollPageSize",0x37e16744,"haxe.ui.containers.ScrollView.set_vscrollPageSize","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_vscrollThumbSize,"haxe.ui.containers.ScrollView","get_vscrollThumbSize",0xca3a8f6f,"haxe.ui.containers.ScrollView.get_vscrollThumbSize","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_vscrollThumbSize,"haxe.ui.containers.ScrollView","set_vscrollThumbSize",0x96f246e3,"haxe.ui.containers.ScrollView.set_vscrollThumbSize","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_thumbSize,"haxe.ui.containers.ScrollView","get_thumbSize",0x4f53d59c,"haxe.ui.containers.ScrollView.get_thumbSize","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_thumbSize,"haxe.ui.containers.ScrollView","set_thumbSize",0x9459b7a8,"haxe.ui.containers.ScrollView.set_thumbSize","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_scrollMouseButton,"haxe.ui.containers.ScrollView","get_scrollMouseButton",0x422c378f,"haxe.ui.containers.ScrollView.get_scrollMouseButton","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_scrollMouseButton,"haxe.ui.containers.ScrollView","set_scrollMouseButton",0x9635059b,"haxe.ui.containers.ScrollView.set_scrollMouseButton","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_scrollMode,"haxe.ui.containers.ScrollView","get_scrollMode",0x34a4eecb,"haxe.ui.containers.ScrollView.get_scrollMode","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_scrollMode,"haxe.ui.containers.ScrollView","set_scrollMode",0x54c4d73f,"haxe.ui.containers.ScrollView.set_scrollMode","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_scrollPolicy,"haxe.ui.containers.ScrollView","get_scrollPolicy",0x9335a15a,"haxe.ui.containers.ScrollView.get_scrollPolicy","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_scrollPolicy,"haxe.ui.containers.ScrollView","set_scrollPolicy",0xe9778ece,"haxe.ui.containers.ScrollView.set_scrollPolicy","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_horizontalScrollPolicy,"haxe.ui.containers.ScrollView","get_horizontalScrollPolicy",0xfefa781e,"haxe.ui.containers.ScrollView.get_horizontalScrollPolicy","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_horizontalScrollPolicy,"haxe.ui.containers.ScrollView","set_horizontalScrollPolicy",0x5e8f3e92,"haxe.ui.containers.ScrollView.set_horizontalScrollPolicy","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_verticalScrollPolicy,"haxe.ui.containers.ScrollView","get_verticalScrollPolicy",0x1217f5f0,"haxe.ui.containers.ScrollView.get_verticalScrollPolicy","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_verticalScrollPolicy,"haxe.ui.containers.ScrollView","set_verticalScrollPolicy",0x24f27764,"haxe.ui.containers.ScrollView.set_verticalScrollPolicy","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_590_get_contents,"haxe.ui.containers.ScrollView","get_contents",0x46665d15,"haxe.ui.containers.ScrollView.get_contents","haxe/ui/macros/Macros.hx",590,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_contents,"haxe.ui.containers.ScrollView","set_contents",0x5b5f8089,"haxe.ui.containers.ScrollView.set_contents","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_autoHideScrolls,"haxe.ui.containers.ScrollView","get_autoHideScrolls",0x0a7b315a,"haxe.ui.containers.ScrollView.get_autoHideScrolls","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_autoHideScrolls,"haxe.ui.containers.ScrollView","set_autoHideScrolls",0x47182466,"haxe.ui.containers.ScrollView.set_autoHideScrolls","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_allowAutoScroll,"haxe.ui.containers.ScrollView","get_allowAutoScroll",0x832d642a,"haxe.ui.containers.ScrollView.get_allowAutoScroll","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_allowAutoScroll,"haxe.ui.containers.ScrollView","set_allowAutoScroll",0xbfca5736,"haxe.ui.containers.ScrollView.set_allowAutoScroll","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_isScrollableHorizontally,"haxe.ui.containers.ScrollView","get_isScrollableHorizontally",0xd9c2a4bd,"haxe.ui.containers.ScrollView.get_isScrollableHorizontally","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_isScrollableHorizontally,"haxe.ui.containers.ScrollView","set_isScrollableHorizontally",0xdcecf031,"haxe.ui.containers.ScrollView.set_isScrollableHorizontally","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_isScrollableVertically,"haxe.ui.containers.ScrollView","get_isScrollableVertically",0xdd2601cf,"haxe.ui.containers.ScrollView.get_isScrollableVertically","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_isScrollableVertically,"haxe.ui.containers.ScrollView","set_isScrollableVertically",0x3cbac843,"haxe.ui.containers.ScrollView.set_isScrollableVertically","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_597_get_isScrollable,"haxe.ui.containers.ScrollView","get_isScrollable",0x27bb6a2c,"haxe.ui.containers.ScrollView.get_isScrollable","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_648_set_isScrollable,"haxe.ui.containers.ScrollView","set_isScrollable",0x7dfd57a0,"haxe.ui.containers.ScrollView.set_isScrollable","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_78ca0428d63f675c_700_cloneComponent,"haxe.ui.containers.ScrollView","cloneComponent",0xdee5ee12,"haxe.ui.containers.ScrollView.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_521_self,"haxe.ui.containers.ScrollView","self",0x937aed7e,"haxe.ui.containers.ScrollView.self","haxe/ui/macros/Macros.hx",521,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_204_registerComposite,"haxe.ui.containers.ScrollView","registerComposite",0xb985b3f2,"haxe.ui.containers.ScrollView.registerComposite","haxe/ui/macros/Macros.hx",204,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e5bd07947d78320d_244_set_onScroll,"haxe.ui.containers.ScrollView","set_onScroll",0x534d49fb,"haxe.ui.containers.ScrollView.set_onScroll","haxe/ui/macros/Macros.hx",244,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void ScrollView_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_34_new)
HXDLIN(  34)		super::__construct();
            	}

Dynamic ScrollView_obj::__CreateEmpty() { return new ScrollView_obj; }

void *ScrollView_obj::_hx_vtable = 0;

Dynamic ScrollView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollView_obj > _hx_result = new ScrollView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScrollView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x0f2dd418;
			}
		} else {
			return inClassId==(int)0x13d76ae7 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x433ebabe) {
				return inClassId==(int)0x395782b4 || inClassId==(int)0x433ebabe;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933 || inClassId==(int)0x72c347e4;
		}
	}
}

static ::haxe::ui::core::IScroller_obj _hx_haxe_ui_containers_ScrollView__hx_haxe_ui_core_IScroller= {
	( bool (::hx::Object::*)())&::haxe::ui::containers::ScrollView_obj::get_isScrollableHorizontally,
	( bool (::hx::Object::*)())&::haxe::ui::containers::ScrollView_obj::get_isScrollableVertically,
	( bool (::hx::Object::*)())&::haxe::ui::containers::ScrollView_obj::get_isScrollable,
	( void (::hx::Object::*)( ::haxe::ui::core::Component))&::haxe::ui::containers::ScrollView_obj::ensureVisible,
};

void *ScrollView_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x69483d2a: return &_hx_haxe_ui_containers_ScrollView__hx_haxe_ui_core_IScroller;
	}
	return super::_hx_getInterface(inHash);
}

void ScrollView_obj::ensureVisible( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_685_ensureVisible)
HXLINE( 686)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 687)			return;
            		}
HXLINE( 689)		this->behaviours->call(HX_("ensureVisible",54,fe,02,7c),component);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,ensureVisible,(void))

void ScrollView_obj::validateComponentInternal(::hx::Null< bool >  __o_nextFrame){
            		bool nextFrame = __o_nextFrame.Default(true);
            	HX_STACKFRAME(&_hx_pos_d194136255627609_72_validateComponentInternal)
HXLINE(  73)		if (::hx::IsEq( this->get_native(),true )) {
HXLINE(  74)			this->super::validateComponentInternal(nextFrame);
HXLINE(  75)			return;
            		}
HXLINE(  77)		bool scrollInvalid = this->isComponentInvalid(HX_("scroll",0d,d8,64,47));
HXLINE(  78)		bool layoutInvalid = this->isComponentInvalid(HX_("layout",aa,ae,b8,58));
HXLINE(  80)		this->super::validateComponentInternal(nextFrame);
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		if (!(scrollInvalid)) {
HXLINE(  82)			_hx_tmp = layoutInvalid;
            		}
            		else {
HXLINE(  82)			_hx_tmp = true;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  83)			::hx::TCast<  ::haxe::ui::containers::ScrollViewBuilder >::cast(this->_compositeBuilder)->checkScrolls();
HXLINE(  84)			::hx::TCast<  ::haxe::ui::containers::ScrollViewBuilder >::cast(this->_compositeBuilder)->updateScrollRect();
            		}
            	}


void ScrollView_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_550_registerBehaviours)
HXLINE( 551)		this->super::registerBehaviours();
HXLINE( 667)		this->behaviours->_hx_register(HX_("virtual",0b,9e,11,17),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::Virtual >(),null());
HXLINE( 671)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 671)		_hx_tmp->_hx_register(HX_("contentLayoutName",ae,9c,1f,41),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::ContentLayoutName >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("vertical",76,bc,15,6a)));
HXLINE( 667)		this->behaviours->_hx_register(HX_("contentWidth",0d,0a,f1,b0),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::ContentWidth >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("percentContentWidth",72,94,55,51),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::PercentContentWidth >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("contentHeight",00,3a,47,d8),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::ContentHeight >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("percentContentHeight",fb,c7,db,8f),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::PercentContentHeight >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("hscrollPos",1f,b6,47,5c),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::HScrollPos >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("hscrollMax",2f,63,45,5c),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::HScrollMax >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("hscrollPageSize",45,4a,45,67),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::HScrollPageSize >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("hscrollThumbSize",c2,04,f5,de),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::HScrollThumbSize >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("vscrollPos",51,44,5a,e0),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::VScrollPos >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("vscrollMax",61,f1,57,e0),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::VScrollMax >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("vscrollPageSize",d3,06,08,8d),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::VScrollPageSize >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("vscrollThumbSize",74,44,97,c3),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::VScrollThumbSize >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("thumbSize",f7,31,89,0c),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::ThumbSize >(),null());
HXLINE( 671)		 ::haxe::ui::behaviours::Behaviours _hx_tmp1 = this->behaviours;
HXDLIN( 671)		_hx_tmp1->_hx_register(HX_("scrollMouseButton",ea,e6,ed,79),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("left",07,08,b0,47)));
HXDLIN( 671)		 ::haxe::ui::behaviours::Behaviours _hx_tmp2 = this->behaviours;
HXDLIN( 671)		_hx_tmp2->_hx_register(HX_("scrollMode",10,62,20,06),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::ScrollModeBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("drag",f4,2b,70,42)));
HXLINE( 667)		this->behaviours->_hx_register(HX_("scrollPolicy",df,2f,e8,50),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::ScrollPolicyBehaviour >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("horizontalScrollPolicy",e3,3e,38,e2),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::HScrollPolicyBehaviour >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("verticalScrollPolicy",75,11,74,51),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::VScrollPolicyBehaviour >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("contents",1a,05,24,2f),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::GetContents >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("autoHideScrolls",f5,c3,3e,9c),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXLINE( 671)		 ::haxe::ui::behaviours::Behaviours _hx_tmp3 = this->behaviours;
HXDLIN( 671)		_hx_tmp3->_hx_register(HX_("allowAutoScroll",c5,f6,f0,14),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true));
HXLINE( 667)		this->behaviours->_hx_register(HX_("isScrollableHorizontally",c2,66,13,5d),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::IsScrollableHorizontallyBehaviour >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("isScrollableVertically",94,c8,63,c0),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::IsScrollableVerticallyBehaviour >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("isScrollable",b1,f8,6d,e5),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::IsScrollableBehaviour >(),null());
HXLINE( 706)		this->behaviours->_hx_register(HX_("ensureVisible",54,fe,02,7c),::hx::ClassOf< ::haxe::ui::containers::_ScrollView::EnsureVisible >(),null());
            	}


bool ScrollView_obj::get_virtual(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_virtual)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return false;
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("virtual",0b,9e,11,17)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_virtual,return )

bool ScrollView_obj::set_virtual(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_virtual)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("virtual",0b,9e,11,17),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("virtual",0b,9e,11,17)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_virtual,return )

::String ScrollView_obj::get_contentLayoutName(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_contentLayoutName)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("contentLayoutName",ae,9c,1f,41)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_contentLayoutName,return )

::String ScrollView_obj::set_contentLayoutName(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_630_set_contentLayoutName)
HXLINE( 631)		{
HXLINE( 631)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 631)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 632)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 633)					bool _hx_tmp;
HXDLIN( 633)					bool _hx_tmp1;
HXDLIN( 633)					if (::hx::IsNotNull( value )) {
HXLINE( 633)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 633)						_hx_tmp1 = false;
            					}
HXDLIN( 633)					if (_hx_tmp1) {
HXLINE( 633)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 633)						_hx_tmp = false;
            					}
HXDLIN( 633)					if (_hx_tmp) {
HXLINE( 634)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("contentLayoutName",ae,9c,1f,41),null(),value,null());
HXLINE( 635)						return value;
            					}
            				}
            			}
            		}
HXLINE( 639)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 640)			this->behaviours =  ::haxe::ui::behaviours::Behaviours_obj::__alloc( HX_CTX ,( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ));
HXLINE( 641)			this->registerBehaviours();
            		}
HXLINE( 643)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 643)		_hx_tmp->set(HX_("contentLayoutName",ae,9c,1f,41),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 644)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("contentLayoutName",ae,9c,1f,41)),null());
HXLINE( 645)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_contentLayoutName,return )

 ::Dynamic ScrollView_obj::get_contentWidth(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_contentWidth)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("contentWidth",0d,0a,f1,b0)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_contentWidth,return )

 ::Dynamic ScrollView_obj::set_contentWidth( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_contentWidth)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("contentWidth",0d,0a,f1,b0),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("contentWidth",0d,0a,f1,b0)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_contentWidth,return )

 ::Dynamic ScrollView_obj::get_percentContentWidth(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_percentContentWidth)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("percentContentWidth",72,94,55,51)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_percentContentWidth,return )

 ::Dynamic ScrollView_obj::set_percentContentWidth( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_percentContentWidth)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("percentContentWidth",72,94,55,51),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("percentContentWidth",72,94,55,51)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_percentContentWidth,return )

 ::Dynamic ScrollView_obj::get_contentHeight(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_contentHeight)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("contentHeight",00,3a,47,d8)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_contentHeight,return )

 ::Dynamic ScrollView_obj::set_contentHeight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_contentHeight)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("contentHeight",00,3a,47,d8),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("contentHeight",00,3a,47,d8)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_contentHeight,return )

 ::Dynamic ScrollView_obj::get_percentContentHeight(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_percentContentHeight)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("percentContentHeight",fb,c7,db,8f)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_percentContentHeight,return )

 ::Dynamic ScrollView_obj::set_percentContentHeight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_percentContentHeight)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("percentContentHeight",fb,c7,db,8f),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("percentContentHeight",fb,c7,db,8f)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_percentContentHeight,return )

Float ScrollView_obj::get_hscrollPos(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_hscrollPos)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return ( (Float)(0) );
            		}
HXLINE( 601)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("hscrollPos",1f,b6,47,5c)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollPos,return )

Float ScrollView_obj::set_hscrollPos(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_hscrollPos)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("hscrollPos",1f,b6,47,5c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("hscrollPos",1f,b6,47,5c)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollPos,return )

Float ScrollView_obj::get_hscrollMax(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_hscrollMax)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return ( (Float)(0) );
            		}
HXLINE( 601)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("hscrollMax",2f,63,45,5c)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollMax,return )

Float ScrollView_obj::set_hscrollMax(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_hscrollMax)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("hscrollMax",2f,63,45,5c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("hscrollMax",2f,63,45,5c)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollMax,return )

Float ScrollView_obj::get_hscrollPageSize(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_hscrollPageSize)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return ( (Float)(0) );
            		}
HXLINE( 601)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("hscrollPageSize",45,4a,45,67)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollPageSize,return )

Float ScrollView_obj::set_hscrollPageSize(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_hscrollPageSize)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("hscrollPageSize",45,4a,45,67),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("hscrollPageSize",45,4a,45,67)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollPageSize,return )

 ::Dynamic ScrollView_obj::get_hscrollThumbSize(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_hscrollThumbSize)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("hscrollThumbSize",c2,04,f5,de)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollThumbSize,return )

 ::Dynamic ScrollView_obj::set_hscrollThumbSize( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_hscrollThumbSize)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("hscrollThumbSize",c2,04,f5,de),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("hscrollThumbSize",c2,04,f5,de)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollThumbSize,return )

Float ScrollView_obj::get_vscrollPos(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_vscrollPos)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return ( (Float)(0) );
            		}
HXLINE( 601)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("vscrollPos",51,44,5a,e0)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollPos,return )

Float ScrollView_obj::set_vscrollPos(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_vscrollPos)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("vscrollPos",51,44,5a,e0),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("vscrollPos",51,44,5a,e0)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollPos,return )

Float ScrollView_obj::get_vscrollMax(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_vscrollMax)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return ( (Float)(0) );
            		}
HXLINE( 601)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("vscrollMax",61,f1,57,e0)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollMax,return )

Float ScrollView_obj::set_vscrollMax(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_vscrollMax)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("vscrollMax",61,f1,57,e0),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("vscrollMax",61,f1,57,e0)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollMax,return )

Float ScrollView_obj::get_vscrollPageSize(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_vscrollPageSize)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return ( (Float)(0) );
            		}
HXLINE( 601)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("vscrollPageSize",d3,06,08,8d)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollPageSize,return )

Float ScrollView_obj::set_vscrollPageSize(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_vscrollPageSize)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("vscrollPageSize",d3,06,08,8d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("vscrollPageSize",d3,06,08,8d)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollPageSize,return )

 ::Dynamic ScrollView_obj::get_vscrollThumbSize(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_vscrollThumbSize)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("vscrollThumbSize",74,44,97,c3)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollThumbSize,return )

 ::Dynamic ScrollView_obj::set_vscrollThumbSize( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_vscrollThumbSize)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("vscrollThumbSize",74,44,97,c3),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("vscrollThumbSize",74,44,97,c3)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollThumbSize,return )

 ::Dynamic ScrollView_obj::get_thumbSize(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_thumbSize)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("thumbSize",f7,31,89,0c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_thumbSize,return )

 ::Dynamic ScrollView_obj::set_thumbSize( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_thumbSize)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("thumbSize",f7,31,89,0c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("thumbSize",f7,31,89,0c)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_thumbSize,return )

::String ScrollView_obj::get_scrollMouseButton(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_scrollMouseButton)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("scrollMouseButton",ea,e6,ed,79)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_scrollMouseButton,return )

::String ScrollView_obj::set_scrollMouseButton(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_scrollMouseButton)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("scrollMouseButton",ea,e6,ed,79),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("scrollMouseButton",ea,e6,ed,79)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_scrollMouseButton,return )

::String ScrollView_obj::get_scrollMode(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_scrollMode)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("scrollMode",10,62,20,06)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_scrollMode,return )

::String ScrollView_obj::set_scrollMode(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_scrollMode)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("scrollMode",10,62,20,06),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("scrollMode",10,62,20,06)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_scrollMode,return )

::String ScrollView_obj::get_scrollPolicy(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_scrollPolicy)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("scrollPolicy",df,2f,e8,50)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_scrollPolicy,return )

::String ScrollView_obj::set_scrollPolicy(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_scrollPolicy)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("scrollPolicy",df,2f,e8,50),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("scrollPolicy",df,2f,e8,50)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_scrollPolicy,return )

::String ScrollView_obj::get_horizontalScrollPolicy(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_horizontalScrollPolicy)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("horizontalScrollPolicy",e3,3e,38,e2)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_horizontalScrollPolicy,return )

::String ScrollView_obj::set_horizontalScrollPolicy(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_horizontalScrollPolicy)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("horizontalScrollPolicy",e3,3e,38,e2),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("horizontalScrollPolicy",e3,3e,38,e2)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_horizontalScrollPolicy,return )

::String ScrollView_obj::get_verticalScrollPolicy(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_verticalScrollPolicy)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("verticalScrollPolicy",75,11,74,51)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_verticalScrollPolicy,return )

::String ScrollView_obj::set_verticalScrollPolicy(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_verticalScrollPolicy)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("verticalScrollPolicy",75,11,74,51),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("verticalScrollPolicy",75,11,74,51)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_verticalScrollPolicy,return )

 ::haxe::ui::core::Component ScrollView_obj::get_contents(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_590_get_contents)
HXLINE( 591)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 592)			return null();
            		}
HXLINE( 594)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->get(HX_("contents",1a,05,24,2f)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_contents,return )

 ::haxe::ui::core::Component ScrollView_obj::set_contents( ::haxe::ui::core::Component value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_contents)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("contents",1a,05,24,2f),::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("contents",1a,05,24,2f)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_contents,return )

bool ScrollView_obj::get_autoHideScrolls(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_autoHideScrolls)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return false;
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("autoHideScrolls",f5,c3,3e,9c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_autoHideScrolls,return )

bool ScrollView_obj::set_autoHideScrolls(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_autoHideScrolls)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("autoHideScrolls",f5,c3,3e,9c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("autoHideScrolls",f5,c3,3e,9c)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_autoHideScrolls,return )

bool ScrollView_obj::get_allowAutoScroll(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_allowAutoScroll)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return false;
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("allowAutoScroll",c5,f6,f0,14)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_allowAutoScroll,return )

bool ScrollView_obj::set_allowAutoScroll(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_allowAutoScroll)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("allowAutoScroll",c5,f6,f0,14),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("allowAutoScroll",c5,f6,f0,14)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_allowAutoScroll,return )

bool ScrollView_obj::get_isScrollableHorizontally(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_isScrollableHorizontally)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return false;
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("isScrollableHorizontally",c2,66,13,5d)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_isScrollableHorizontally,return )

bool ScrollView_obj::set_isScrollableHorizontally(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_isScrollableHorizontally)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("isScrollableHorizontally",c2,66,13,5d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("isScrollableHorizontally",c2,66,13,5d)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_isScrollableHorizontally,return )

bool ScrollView_obj::get_isScrollableVertically(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_isScrollableVertically)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return false;
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("isScrollableVertically",94,c8,63,c0)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_isScrollableVertically,return )

bool ScrollView_obj::set_isScrollableVertically(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_isScrollableVertically)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("isScrollableVertically",94,c8,63,c0),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("isScrollableVertically",94,c8,63,c0)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_isScrollableVertically,return )

bool ScrollView_obj::get_isScrollable(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_597_get_isScrollable)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return false;
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("isScrollable",b1,f8,6d,e5)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_isScrollable,return )

bool ScrollView_obj::set_isScrollable(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_648_set_isScrollable)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("isScrollable",b1,f8,6d,e5),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("isScrollable",b1,f8,6d,e5)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_isScrollable,return )

 ::haxe::ui::backend::ComponentBase ScrollView_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_78ca0428d63f675c_700_cloneComponent)
HXLINE( 469)		 ::haxe::ui::containers::ScrollView c = ( ( ::haxe::ui::containers::ScrollView)(this->super::cloneComponent()) );
HXLINE( 480)		c->set_virtual(this->get_virtual());
HXLINE( 478)		if (::hx::IsNotNull( this->get_contentLayoutName() )) {
HXLINE( 478)			c->set_contentLayoutName(this->get_contentLayoutName());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_contentWidth() )) {
HXLINE( 478)			c->set_contentWidth(this->get_contentWidth());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_percentContentWidth() )) {
HXLINE( 478)			c->set_percentContentWidth(this->get_percentContentWidth());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_contentHeight() )) {
HXLINE( 478)			c->set_contentHeight(this->get_contentHeight());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_percentContentHeight() )) {
HXLINE( 478)			c->set_percentContentHeight(this->get_percentContentHeight());
            		}
HXLINE( 480)		c->set_hscrollPos(this->get_hscrollPos());
HXDLIN( 480)		c->set_hscrollMax(this->get_hscrollMax());
HXDLIN( 480)		c->set_hscrollPageSize(this->get_hscrollPageSize());
HXLINE( 478)		if (::hx::IsNotNull( this->get_hscrollThumbSize() )) {
HXLINE( 478)			c->set_hscrollThumbSize(this->get_hscrollThumbSize());
            		}
HXLINE( 480)		c->set_vscrollPos(this->get_vscrollPos());
HXDLIN( 480)		c->set_vscrollMax(this->get_vscrollMax());
HXDLIN( 480)		c->set_vscrollPageSize(this->get_vscrollPageSize());
HXLINE( 478)		if (::hx::IsNotNull( this->get_vscrollThumbSize() )) {
HXLINE( 478)			c->set_vscrollThumbSize(this->get_vscrollThumbSize());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_thumbSize() )) {
HXLINE( 478)			c->set_thumbSize(this->get_thumbSize());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_scrollMouseButton() )) {
HXLINE( 478)			c->set_scrollMouseButton(this->get_scrollMouseButton());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_scrollMode() )) {
HXLINE( 478)			c->set_scrollMode(this->get_scrollMode());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_scrollPolicy() )) {
HXLINE( 478)			c->set_scrollPolicy(this->get_scrollPolicy());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_horizontalScrollPolicy() )) {
HXLINE( 478)			c->set_horizontalScrollPolicy(this->get_horizontalScrollPolicy());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_verticalScrollPolicy() )) {
HXLINE( 478)			c->set_verticalScrollPolicy(this->get_verticalScrollPolicy());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_contents() )) {
HXLINE( 478)			c->set_contents(this->get_contents());
            		}
HXLINE( 480)		c->set_autoHideScrolls(this->get_autoHideScrolls());
HXDLIN( 480)		c->set_allowAutoScroll(this->get_allowAutoScroll());
HXDLIN( 480)		c->set_isScrollableHorizontally(this->get_isScrollableHorizontally());
HXDLIN( 480)		c->set_isScrollableVertically(this->get_isScrollableVertically());
HXDLIN( 480)		c->set_isScrollable(this->get_isScrollable());
HXLINE( 484)		{
HXLINE( 485)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 485)			if (::hx::IsNull( this->_children )) {
HXLINE( 485)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 485)				_hx_tmp = this->_children;
            			}
HXDLIN( 485)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 485)			if (::hx::IsNull( c->_children )) {
HXLINE( 485)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 485)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 485)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 486)				int _g = 0;
HXDLIN( 486)				::Array< ::Dynamic> _g1;
HXDLIN( 486)				if (::hx::IsNull( this->_children )) {
HXLINE( 486)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 486)					_g1 = this->_children;
            				}
HXDLIN( 486)				while((_g < _g1->length)){
HXLINE( 486)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 486)					_g = (_g + 1);
HXLINE( 487)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 491)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 493)		return c;
            	}


 ::haxe::ui::backend::ComponentBase ScrollView_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_e5bd07947d78320d_521_self)
HXDLIN( 521)		return  ::haxe::ui::containers::ScrollView_obj::__alloc( HX_CTX );
            	}


void ScrollView_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_204_registerComposite)
HXLINE( 205)		this->super::registerComposite();
HXLINE( 213)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::containers::ScrollViewEvents >();
HXLINE( 217)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::ScrollViewBuilder >();
HXLINE( 221)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::layouts::ScrollViewLayout >();
            	}


 ::Dynamic ScrollView_obj::set_onScroll( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_e5bd07947d78320d_244_set_onScroll)
HXLINE( 245)		if (::hx::IsNotNull( this->_internal__onScroll )) {
HXLINE( 246)			this->unregisterEvent(::haxe::ui::events::ScrollEvent_obj::SCROLL,this->_internal__onScroll);
HXLINE( 247)			this->_internal__onScroll = null();
            		}
HXLINE( 249)		if (::hx::IsNotNull( value )) {
HXLINE( 250)			this->_internal__onScroll = value;
HXLINE( 251)			this->registerEvent(::haxe::ui::events::ScrollEvent_obj::SCROLL,value,null());
            		}
HXLINE( 253)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_onScroll,return )


::hx::ObjectPtr< ScrollView_obj > ScrollView_obj::__new() {
	::hx::ObjectPtr< ScrollView_obj > __this = new ScrollView_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScrollView_obj > ScrollView_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScrollView_obj *__this = (ScrollView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollView_obj), true, "haxe.ui.containers.ScrollView"));
	*(void **)__this = ScrollView_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScrollView_obj::ScrollView_obj()
{
}

void ScrollView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollView);
	HX_MARK_MEMBER_NAME(_internal__onScroll,"_internal__onScroll");
	HX_MARK_MEMBER_NAME(onScroll,"onScroll");
	 ::haxe::ui::core::InteractiveComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_internal__onScroll,"_internal__onScroll");
	HX_VISIT_MEMBER_NAME(onScroll,"onScroll");
	 ::haxe::ui::core::InteractiveComponent_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScrollView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"virtual") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_virtual() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contents") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_contents() ); }
		if (HX_FIELD_EQ(inName,"onScroll") ) { return ::hx::Val( onScroll ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thumbSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_thumbSize() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hscrollPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hscrollPos() ); }
		if (HX_FIELD_EQ(inName,"hscrollMax") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hscrollMax() ); }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vscrollPos() ); }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vscrollMax() ); }
		if (HX_FIELD_EQ(inName,"scrollMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scrollMode() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_virtual") ) { return ::hx::Val( get_virtual_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_virtual") ) { return ::hx::Val( set_virtual_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"contentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_contentWidth() ); }
		if (HX_FIELD_EQ(inName,"scrollPolicy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scrollPolicy() ); }
		if (HX_FIELD_EQ(inName,"get_contents") ) { return ::hx::Val( get_contents_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_contents") ) { return ::hx::Val( set_contents_dyn() ); }
		if (HX_FIELD_EQ(inName,"isScrollable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isScrollable() ); }
		if (HX_FIELD_EQ(inName,"set_onScroll") ) { return ::hx::Val( set_onScroll_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ensureVisible") ) { return ::hx::Val( ensureVisible_dyn() ); }
		if (HX_FIELD_EQ(inName,"contentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_contentHeight() ); }
		if (HX_FIELD_EQ(inName,"get_thumbSize") ) { return ::hx::Val( get_thumbSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_thumbSize") ) { return ::hx::Val( set_thumbSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_hscrollPos") ) { return ::hx::Val( get_hscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hscrollPos") ) { return ::hx::Val( set_hscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hscrollMax") ) { return ::hx::Val( get_hscrollMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hscrollMax") ) { return ::hx::Val( set_hscrollMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vscrollPos") ) { return ::hx::Val( get_vscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_vscrollPos") ) { return ::hx::Val( set_vscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vscrollMax") ) { return ::hx::Val( get_vscrollMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_vscrollMax") ) { return ::hx::Val( set_vscrollMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scrollMode") ) { return ::hx::Val( get_scrollMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollMode") ) { return ::hx::Val( set_scrollMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hscrollPageSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hscrollPageSize() ); }
		if (HX_FIELD_EQ(inName,"vscrollPageSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vscrollPageSize() ); }
		if (HX_FIELD_EQ(inName,"autoHideScrolls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoHideScrolls() ); }
		if (HX_FIELD_EQ(inName,"allowAutoScroll") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_allowAutoScroll() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_contentWidth") ) { return ::hx::Val( get_contentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_contentWidth") ) { return ::hx::Val( set_contentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"hscrollThumbSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hscrollThumbSize() ); }
		if (HX_FIELD_EQ(inName,"vscrollThumbSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vscrollThumbSize() ); }
		if (HX_FIELD_EQ(inName,"get_scrollPolicy") ) { return ::hx::Val( get_scrollPolicy_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollPolicy") ) { return ::hx::Val( set_scrollPolicy_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isScrollable") ) { return ::hx::Val( get_isScrollable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_isScrollable") ) { return ::hx::Val( set_isScrollable_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLayoutName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_contentLayoutName() ); }
		if (HX_FIELD_EQ(inName,"get_contentHeight") ) { return ::hx::Val( get_contentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_contentHeight") ) { return ::hx::Val( set_contentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"scrollMouseButton") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scrollMouseButton() ); }
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"percentContentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentContentWidth() ); }
		if (HX_FIELD_EQ(inName,"get_hscrollPageSize") ) { return ::hx::Val( get_hscrollPageSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hscrollPageSize") ) { return ::hx::Val( set_hscrollPageSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vscrollPageSize") ) { return ::hx::Val( get_vscrollPageSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_vscrollPageSize") ) { return ::hx::Val( set_vscrollPageSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_autoHideScrolls") ) { return ::hx::Val( get_autoHideScrolls_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoHideScrolls") ) { return ::hx::Val( set_autoHideScrolls_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_allowAutoScroll") ) { return ::hx::Val( get_allowAutoScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowAutoScroll") ) { return ::hx::Val( set_allowAutoScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onScroll") ) { return ::hx::Val( _internal__onScroll ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"percentContentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentContentHeight() ); }
		if (HX_FIELD_EQ(inName,"get_hscrollThumbSize") ) { return ::hx::Val( get_hscrollThumbSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hscrollThumbSize") ) { return ::hx::Val( set_hscrollThumbSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vscrollThumbSize") ) { return ::hx::Val( get_vscrollThumbSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_vscrollThumbSize") ) { return ::hx::Val( set_vscrollThumbSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"verticalScrollPolicy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_verticalScrollPolicy() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_contentLayoutName") ) { return ::hx::Val( get_contentLayoutName_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_contentLayoutName") ) { return ::hx::Val( set_contentLayoutName_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scrollMouseButton") ) { return ::hx::Val( get_scrollMouseButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollMouseButton") ) { return ::hx::Val( set_scrollMouseButton_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"horizontalScrollPolicy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_horizontalScrollPolicy() ); }
		if (HX_FIELD_EQ(inName,"isScrollableVertically") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isScrollableVertically() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_percentContentWidth") ) { return ::hx::Val( get_percentContentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentContentWidth") ) { return ::hx::Val( set_percentContentWidth_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_percentContentHeight") ) { return ::hx::Val( get_percentContentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentContentHeight") ) { return ::hx::Val( set_percentContentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_verticalScrollPolicy") ) { return ::hx::Val( get_verticalScrollPolicy_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_verticalScrollPolicy") ) { return ::hx::Val( set_verticalScrollPolicy_dyn() ); }
		if (HX_FIELD_EQ(inName,"isScrollableHorizontally") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isScrollableHorizontally() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"validateComponentInternal") ) { return ::hx::Val( validateComponentInternal_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_horizontalScrollPolicy") ) { return ::hx::Val( get_horizontalScrollPolicy_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_horizontalScrollPolicy") ) { return ::hx::Val( set_horizontalScrollPolicy_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isScrollableVertically") ) { return ::hx::Val( get_isScrollableVertically_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_isScrollableVertically") ) { return ::hx::Val( set_isScrollableVertically_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"get_isScrollableHorizontally") ) { return ::hx::Val( get_isScrollableHorizontally_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_isScrollableHorizontally") ) { return ::hx::Val( set_isScrollableHorizontally_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScrollView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"virtual") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_virtual(inValue.Cast< bool >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contents") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_contents(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
		if (HX_FIELD_EQ(inName,"onScroll") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onScroll(inValue.Cast<  ::Dynamic >()) );onScroll=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thumbSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_thumbSize(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hscrollPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hscrollPos(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"hscrollMax") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hscrollMax(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_vscrollPos(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_vscrollMax(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scrollMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollMode(inValue.Cast< ::String >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"contentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_contentWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"scrollPolicy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollPolicy(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"isScrollable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_isScrollable(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"contentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_contentHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hscrollPageSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hscrollPageSize(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"vscrollPageSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_vscrollPageSize(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"autoHideScrolls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoHideScrolls(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"allowAutoScroll") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowAutoScroll(inValue.Cast< bool >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hscrollThumbSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hscrollThumbSize(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"vscrollThumbSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_vscrollThumbSize(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLayoutName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_contentLayoutName(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"scrollMouseButton") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollMouseButton(inValue.Cast< ::String >()) ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"percentContentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentContentWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_internal__onScroll") ) { _internal__onScroll=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"percentContentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentContentHeight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"verticalScrollPolicy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_verticalScrollPolicy(inValue.Cast< ::String >()) ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"horizontalScrollPolicy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_horizontalScrollPolicy(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"isScrollableVertically") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_isScrollableVertically(inValue.Cast< bool >()) ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"isScrollableHorizontally") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_isScrollableHorizontally(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("virtual",0b,9e,11,17));
	outFields->push(HX_("contentLayoutName",ae,9c,1f,41));
	outFields->push(HX_("contentWidth",0d,0a,f1,b0));
	outFields->push(HX_("percentContentWidth",72,94,55,51));
	outFields->push(HX_("contentHeight",00,3a,47,d8));
	outFields->push(HX_("percentContentHeight",fb,c7,db,8f));
	outFields->push(HX_("hscrollPos",1f,b6,47,5c));
	outFields->push(HX_("hscrollMax",2f,63,45,5c));
	outFields->push(HX_("hscrollPageSize",45,4a,45,67));
	outFields->push(HX_("hscrollThumbSize",c2,04,f5,de));
	outFields->push(HX_("vscrollPos",51,44,5a,e0));
	outFields->push(HX_("vscrollMax",61,f1,57,e0));
	outFields->push(HX_("vscrollPageSize",d3,06,08,8d));
	outFields->push(HX_("vscrollThumbSize",74,44,97,c3));
	outFields->push(HX_("thumbSize",f7,31,89,0c));
	outFields->push(HX_("scrollMouseButton",ea,e6,ed,79));
	outFields->push(HX_("scrollMode",10,62,20,06));
	outFields->push(HX_("scrollPolicy",df,2f,e8,50));
	outFields->push(HX_("horizontalScrollPolicy",e3,3e,38,e2));
	outFields->push(HX_("verticalScrollPolicy",75,11,74,51));
	outFields->push(HX_("contents",1a,05,24,2f));
	outFields->push(HX_("autoHideScrolls",f5,c3,3e,9c));
	outFields->push(HX_("allowAutoScroll",c5,f6,f0,14));
	outFields->push(HX_("isScrollableHorizontally",c2,66,13,5d));
	outFields->push(HX_("isScrollableVertically",94,c8,63,c0));
	outFields->push(HX_("isScrollable",b1,f8,6d,e5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScrollView_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ScrollView_obj,_internal__onScroll),HX_("_internal__onScroll",48,7b,41,74)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ScrollView_obj,onScroll),HX_("onScroll",8c,ce,11,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScrollView_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollView_obj_sMemberFields[] = {
	HX_("ensureVisible",54,fe,02,7c),
	HX_("validateComponentInternal",a4,7f,0c,11),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_virtual",22,fe,0b,9d),
	HX_("set_virtual",2e,05,79,a7),
	HX_("get_contentLayoutName",85,9f,cd,bf),
	HX_("set_contentLayoutName",91,6d,d6,13),
	HX_("get_contentWidth",96,f6,8f,b5),
	HX_("set_contentWidth",0a,e4,d1,0b),
	HX_("get_percentContentWidth",09,3b,ab,59),
	HX_("set_percentContentWidth",15,a4,0c,5c),
	HX_("get_contentHeight",57,45,b7,de),
	HX_("set_contentHeight",63,1d,25,02),
	HX_("get_percentContentHeight",84,e5,77,d2),
	HX_("set_percentContentHeight",f8,66,52,e5),
	HX_("get_hscrollPos",68,3e,3d,d2),
	HX_("set_hscrollPos",dc,26,5d,f2),
	HX_("get_hscrollMax",78,eb,3a,d2),
	HX_("set_hscrollMax",ec,d3,5a,f2),
	HX_("get_hscrollPageSize",5c,19,50,f2),
	HX_("set_hscrollPageSize",68,0c,ed,2e),
	HX_("get_hscrollThumbSize",cb,69,5f,fd),
	HX_("set_hscrollThumbSize",3f,21,17,ca),
	HX_("get_vscrollPos",9a,cc,4f,56),
	HX_("set_vscrollPos",0e,b5,6f,76),
	HX_("get_vscrollMax",aa,79,4d,56),
	HX_("set_vscrollMax",1e,62,6d,76),
	HX_("get_vscrollPageSize",ea,d5,12,18),
	HX_("set_vscrollPageSize",f6,c8,af,54),
	HX_("get_vscrollThumbSize",7d,a9,01,e2),
	HX_("set_vscrollThumbSize",f1,60,b9,ae),
	HX_("get_thumbSize",ce,05,ed,cd),
	HX_("set_thumbSize",da,e7,f2,12),
	HX_("get_scrollMouseButton",c1,e9,9b,f8),
	HX_("set_scrollMouseButton",cd,b7,a4,4c),
	HX_("get_scrollMode",59,ea,15,7c),
	HX_("set_scrollMode",cd,d2,35,9c),
	HX_("get_scrollPolicy",68,1c,87,55),
	HX_("set_scrollPolicy",dc,09,c9,ab),
	HX_("get_horizontalScrollPolicy",ac,90,3d,1a),
	HX_("set_horizontalScrollPolicy",20,57,d2,79),
	HX_("get_verticalScrollPolicy",fe,2e,10,94),
	HX_("set_verticalScrollPolicy",72,b0,ea,a6),
	HX_("get_contents",23,b9,3d,e4),
	HX_("set_contents",97,dc,36,f9),
	HX_("get_autoHideScrolls",0c,93,49,27),
	HX_("set_autoHideScrolls",18,86,e6,63),
	HX_("get_allowAutoScroll",dc,c5,fb,9f),
	HX_("set_allowAutoScroll",e8,b8,98,dc),
	HX_("get_isScrollableHorizontally",cb,7c,67,9e),
	HX_("set_isScrollableHorizontally",3f,c8,91,a1),
	HX_("get_isScrollableVertically",5d,1a,69,f8),
	HX_("set_isScrollableVertically",d1,e0,fd,57),
	HX_("get_isScrollable",3a,e5,0c,ea),
	HX_("set_isScrollable",ae,d2,4e,40),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("_internal__onScroll",48,7b,41,74),
	HX_("onScroll",8c,ce,11,27),
	HX_("set_onScroll",09,a6,24,f1),
	::String(null()) };

::hx::Class ScrollView_obj::__mClass;

void ScrollView_obj::__register()
{
	ScrollView_obj _hx_dummy;
	ScrollView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.ScrollView",bc,43,e9,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
