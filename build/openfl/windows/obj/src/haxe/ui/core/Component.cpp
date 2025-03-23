#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_haxe_ui_Backend
#include <haxe/ui/Backend.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_BackendImpl
#include <haxe/ui/backend/BackendImpl.h>
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
#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <haxe/ui/backend/ImageBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#include <haxe/ui/backend/ImageDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#include <haxe/ui/backend/ImageSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
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
#ifndef INCLUDED_haxe_ui_core_ICompositeInteractiveComponent
#include <haxe/ui/core/ICompositeInteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#include <haxe/ui/core/ImageDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_events_AnimationEvent
#include <haxe/ui/events/AnimationEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayout
#include <haxe/ui/layouts/DelegateLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_CompositeStyleSheet
#include <haxe/ui/styles/CompositeStyleSheet.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_DirectiveHandler
#include <haxe/ui/styles/DirectiveHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Parser
#include <haxe/ui/styles/Parser.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleBorderType
#include <haxe/ui/styles/StyleBorderType.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleSheet
#include <haxe/ui/styles/StyleSheet.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_Animation
#include <haxe/ui/styles/animation/Animation.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_AnimationOptions
#include <haxe/ui/styles/animation/AnimationOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrames
#include <haxe/ui/styles/elements/AnimationKeyFrames.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Directive
#include <haxe/ui/styles/elements/Directive.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_RuleElement
#include <haxe/ui/styles/elements/RuleElement.h>
#endif
#ifndef INCLUDED_haxe_ui_util_ComponentUtil
#include <haxe/ui/util/ComponentUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StringUtil
#include <haxe/ui/util/StringUtil.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_ValidationManager
#include <haxe/ui/validation/ValidationManager.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_38_new,"haxe.ui.core.Component","new",0xf80fa452,"haxe.ui.core.Component.new","haxe/ui/core/Component.hx",38,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_124_create,"haxe.ui.core.Component","create",0xe32f164a,"haxe.ui.core.Component.create","haxe/ui/core/Component.hx",124,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_93_create,"haxe.ui.core.Component","create",0xe32f164a,"haxe.ui.core.Component.create","haxe/ui/core/Component.hx",93,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_132_onComponentCreated,"haxe.ui.core.Component","onComponentCreated",0x7d284638,"haxe.ui.core.Component.onComponentCreated","haxe/ui/core/Component.hx",132,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_138_registerComposite,"haxe.ui.core.Component","registerComposite",0x2203fc96,"haxe.ui.core.Component.registerComposite","haxe/ui/core/Component.hx",138,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_141_createDefaults,"haxe.ui.core.Component","createDefaults",0x6c48fcfc,"haxe.ui.core.Component.createDefaults","haxe/ui/core/Component.hx",141,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_144_createChildren,"haxe.ui.core.Component","createChildren",0x2d1945a9,"haxe.ui.core.Component.createChildren","haxe/ui/core/Component.hx",144,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_149_destroyChildren,"haxe.ui.core.Component","destroyChildren",0x9e11834b,"haxe.ui.core.Component.destroyChildren","haxe/ui/core/Component.hx",149,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_152_createLayout,"haxe.ui.core.Component","createLayout",0x5b250c94,"haxe.ui.core.Component.createLayout","haxe/ui/core/Component.hx",152,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_184_get_native,"haxe.ui.core.Component","get_native",0xfe08a7ae,"haxe.ui.core.Component.get_native","haxe/ui/core/Component.hx",184,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_193_set_native,"haxe.ui.core.Component","set_native",0x01864622,"haxe.ui.core.Component.set_native","haxe/ui/core/Component.hx",193,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_229_get_animatable,"haxe.ui.core.Component","get_animatable",0x5e32d675,"haxe.ui.core.Component.get_animatable","haxe/ui/core/Component.hx",229,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_231_set_animatable,"haxe.ui.core.Component","set_animatable",0x7e52bee9,"haxe.ui.core.Component.set_animatable","haxe/ui/core/Component.hx",231,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_251_get_componentAnimation,"haxe.ui.core.Component","get_componentAnimation",0x643c831e,"haxe.ui.core.Component.get_componentAnimation","haxe/ui/core/Component.hx",251,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_253_set_componentAnimation,"haxe.ui.core.Component","set_componentAnimation",0x97e7ff92,"haxe.ui.core.Component.set_componentAnimation","haxe/ui/core/Component.hx",253,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_271_userDataAs,"haxe.ui.core.Component","userDataAs",0xfc6eacb5,"haxe.ui.core.Component.userDataAs","haxe/ui/core/Component.hx",271,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_283_get_screen,"haxe.ui.core.Component","get_screen",0x23491983,"haxe.ui.core.Component.get_screen","haxe/ui/core/Component.hx",283,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_302_get_rootComponent,"haxe.ui.core.Component","get_rootComponent",0x6f023104,"haxe.ui.core.Component.get_rootComponent","haxe/ui/core/Component.hx",302,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_315_get_numComponents,"haxe.ui.core.Component","get_numComponents",0x5eaa8dc5,"haxe.ui.core.Component.get_numComponents","haxe/ui/core/Component.hx",315,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_339_addComponent,"haxe.ui.core.Component","addComponent",0xeebf302a,"haxe.ui.core.Component.addComponent","haxe/ui/core/Component.hx",339,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_399_containsComponent,"haxe.ui.core.Component","containsComponent",0x37f8d210,"haxe.ui.core.Component.containsComponent","haxe/ui/core/Component.hx",399,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_394_containsComponent,"haxe.ui.core.Component","containsComponent",0x37f8d210,"haxe.ui.core.Component.containsComponent","haxe/ui/core/Component.hx",394,0x3bb69e3f)
static const bool _hx_array_data_1376d360_24[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_421_addComponentAt,"haxe.ui.core.Component","addComponentAt",0x810b47bd,"haxe.ui.core.Component.addComponentAt","haxe/ui/core/Component.hx",421,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_468_onComponentAdded,"haxe.ui.core.Component","onComponentAdded",0xea95b110,"haxe.ui.core.Component.onComponentAdded","haxe/ui/core/Component.hx",468,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_480_removeComponent,"haxe.ui.core.Component","removeComponent",0x0c1582cb,"haxe.ui.core.Component.removeComponent","haxe/ui/core/Component.hx",480,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_543_disposeComponent,"haxe.ui.core.Component","disposeComponent",0x497fe0ec,"haxe.ui.core.Component.disposeComponent","haxe/ui/core/Component.hx",543,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_586_removeComponentAt,"haxe.ui.core.Component","removeComponentAt",0x5e94449e,"haxe.ui.core.Component.removeComponentAt","haxe/ui/core/Component.hx",586,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_649_onComponentRemoved,"haxe.ui.core.Component","onComponentRemoved",0x5ebdaff0,"haxe.ui.core.Component.onComponentRemoved","haxe/ui/core/Component.hx",649,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_652_assignPositionClasses,"haxe.ui.core.Component","assignPositionClasses",0xc1aef400,"haxe.ui.core.Component.assignPositionClasses","haxe/ui/core/Component.hx",652,0x3bb69e3f)
static const ::String _hx_array_data_1376d360_34[] = {
	HX_("first",30,78,9d,00),HX_("last",56,0a,ad,47),
};
static const ::String _hx_array_data_1376d360_35[] = {
	HX_("first",30,78,9d,00),HX_("last",56,0a,ad,47),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_682_destroyComponent,"haxe.ui.core.Component","destroyComponent",0xd4295131,"haxe.ui.core.Component.destroyComponent","haxe/ui/core/Component.hx",682,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_691_onDestroy,"haxe.ui.core.Component","onDestroy",0x72573b0d,"haxe.ui.core.Component.onDestroy","haxe/ui/core/Component.hx",691,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_705_walkComponents,"haxe.ui.core.Component","walkComponents",0x417ec8cd,"haxe.ui.core.Component.walkComponents","haxe/ui/core/Component.hx",705,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_712_walkComponents,"haxe.ui.core.Component","walkComponents",0x417ec8cd,"haxe.ui.core.Component.walkComponents","haxe/ui/core/Component.hx",712,0x3bb69e3f)
static const bool _hx_array_data_1376d360_42[] = {
	1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_729_removeAllComponents,"haxe.ui.core.Component","removeAllComponents",0x5ae576a5,"haxe.ui.core.Component.removeAllComponents","haxe/ui/core/Component.hx",729,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_748_matchesSearch,"haxe.ui.core.Component","matchesSearch",0x1adfff2d,"haxe.ui.core.Component.matchesSearch","haxe/ui/core/Component.hx",748,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_772_findComponent,"haxe.ui.core.Component","findComponent",0x2428a7b6,"haxe.ui.core.Component.findComponent","haxe/ui/core/Component.hx",772,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_808_findComponents,"haxe.ui.core.Component","findComponents",0x7f6a17fd,"haxe.ui.core.Component.findComponents","haxe/ui/core/Component.hx",808,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_871_findAncestor,"haxe.ui.core.Component","findAncestor",0x61148f7a,"haxe.ui.core.Component.findAncestor","haxe/ui/core/Component.hx",871,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_891_hitTest,"haxe.ui.core.Component","hitTest",0xb7191537,"haxe.ui.core.Component.hitTest","haxe/ui/core/Component.hx",891,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_910_findComponentsUnderPoint,"haxe.ui.core.Component","findComponentsUnderPoint",0x29ea7675,"haxe.ui.core.Component.findComponentsUnderPoint","haxe/ui/core/Component.hx",910,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_937_hasComponentUnderPoint,"haxe.ui.core.Component","hasComponentUnderPoint",0xbfade349,"haxe.ui.core.Component.hasComponentUnderPoint","haxe/ui/core/Component.hx",937,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_968_getComponentIndex,"haxe.ui.core.Component","getComponentIndex",0xa31313bd,"haxe.ui.core.Component.getComponentIndex","haxe/ui/core/Component.hx",968,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_989_setComponentIndex,"haxe.ui.core.Component","setComponentIndex",0xc680ebc9,"haxe.ui.core.Component.setComponentIndex","haxe/ui/core/Component.hx",989,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1012_getComponentAt,"haxe.ui.core.Component","getComponentAt",0x72d29368,"haxe.ui.core.Component.getComponentAt","haxe/ui/core/Component.hx",1012,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1029_hide,"haxe.ui.core.Component","hide",0x11abd490,"haxe.ui.core.Component.hide","haxe/ui/core/Component.hx",1029,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1048_hideInternal,"haxe.ui.core.Component","hideInternal",0xc99307ed,"haxe.ui.core.Component.hideInternal","haxe/ui/core/Component.hx",1048,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1079_show,"haxe.ui.core.Component","show",0x18f074cb,"haxe.ui.core.Component.show","haxe/ui/core/Component.hx",1079,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1100_showInternal,"haxe.ui.core.Component","showInternal",0x341adb28,"haxe.ui.core.Component.showInternal","haxe/ui/core/Component.hx",1100,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1129_fadeIn,"haxe.ui.core.Component","fadeIn",0x4bcafbcf,"haxe.ui.core.Component.fadeIn","haxe/ui/core/Component.hx",1129,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1141_fadeIn,"haxe.ui.core.Component","fadeIn",0x4bcafbcf,"haxe.ui.core.Component.fadeIn","haxe/ui/core/Component.hx",1141,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1135_fadeIn,"haxe.ui.core.Component","fadeIn",0x4bcafbcf,"haxe.ui.core.Component.fadeIn","haxe/ui/core/Component.hx",1135,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1157_fadeOut,"haxe.ui.core.Component","fadeOut",0x05d5ed64,"haxe.ui.core.Component.fadeOut","haxe/ui/core/Component.hx",1157,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1160_fadeOut,"haxe.ui.core.Component","fadeOut",0x05d5ed64,"haxe.ui.core.Component.fadeOut","haxe/ui/core/Component.hx",1160,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1181_get_hidden,"haxe.ui.core.Component","get_hidden",0x2881dd81,"haxe.ui.core.Component.get_hidden","haxe/ui/core/Component.hx",1181,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1190_set_hidden,"haxe.ui.core.Component","set_hidden",0x2bff7bf5,"haxe.ui.core.Component.set_hidden","haxe/ui/core/Component.hx",1190,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1216_get_customStyle,"haxe.ui.core.Component","get_customStyle",0x95deba49,"haxe.ui.core.Component.get_customStyle","haxe/ui/core/Component.hx",1216,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1222_set_customStyle,"haxe.ui.core.Component","set_customStyle",0x91aa3755,"haxe.ui.core.Component.set_customStyle","haxe/ui/core/Component.hx",1222,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1242_addClass,"haxe.ui.core.Component","addClass",0xf39a3d25,"haxe.ui.core.Component.addClass","haxe/ui/core/Component.hx",1242,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1265_addClasses,"haxe.ui.core.Component","addClasses",0xbc7fe8d3,"haxe.ui.core.Component.addClasses","haxe/ui/core/Component.hx",1265,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1295_removeClass,"haxe.ui.core.Component","removeClass",0x53086b46,"haxe.ui.core.Component.removeClass","haxe/ui/core/Component.hx",1295,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1318_removeClasses,"haxe.ui.core.Component","removeClasses",0x766ea134,"haxe.ui.core.Component.removeClasses","haxe/ui/core/Component.hx",1318,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1347_hasClass,"haxe.ui.core.Component","hasClass",0x0695614c,"haxe.ui.core.Component.hasClass","haxe/ui/core/Component.hx",1347,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1359_swapClass,"haxe.ui.core.Component","swapClass",0x342bde17,"haxe.ui.core.Component.swapClass","haxe/ui/core/Component.hx",1359,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1390_get_styleNames,"haxe.ui.core.Component","get_styleNames",0xf6e51e6e,"haxe.ui.core.Component.get_styleNames","haxe/ui/core/Component.hx",1390,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1392_set_styleNames,"haxe.ui.core.Component","set_styleNames",0x170506e2,"haxe.ui.core.Component.set_styleNames","haxe/ui/core/Component.hx",1392,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1456_get_styleString,"haxe.ui.core.Component","get_styleString",0x054c6b6b,"haxe.ui.core.Component.get_styleString","haxe/ui/core/Component.hx",1456,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1458_set_styleString,"haxe.ui.core.Component","set_styleString",0x0117e877,"haxe.ui.core.Component.set_styleString","haxe/ui/core/Component.hx",1458,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1484_get_styleSheet,"haxe.ui.core.Component","get_styleSheet",0xdc807145,"haxe.ui.core.Component.get_styleSheet","haxe/ui/core/Component.hx",1484,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1504_set_styleSheet,"haxe.ui.core.Component","set_styleSheet",0xfca059b9,"haxe.ui.core.Component.set_styleSheet","haxe/ui/core/Component.hx",1504,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1509_resetCachedStyleSheetRef,"haxe.ui.core.Component","resetCachedStyleSheetRef",0xa7d00742,"haxe.ui.core.Component.resetCachedStyleSheetRef","haxe/ui/core/Component.hx",1509,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1528_get_includeInLayout,"haxe.ui.core.Component","get_includeInLayout",0x181f41c0,"haxe.ui.core.Component.get_includeInLayout","haxe/ui/core/Component.hx",1528,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1534_set_includeInLayout,"haxe.ui.core.Component","set_includeInLayout",0x54bc34cc,"haxe.ui.core.Component.set_includeInLayout","haxe/ui/core/Component.hx",1534,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1545_get_layout,"haxe.ui.core.Component","get_layout",0x34a48cc1,"haxe.ui.core.Component.get_layout","haxe/ui/core/Component.hx",1545,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1547_set_layout,"haxe.ui.core.Component","set_layout",0x38222b35,"haxe.ui.core.Component.set_layout","haxe/ui/core/Component.hx",1547,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1562_lockLayout,"haxe.ui.core.Component","lockLayout",0x8ec36f43,"haxe.ui.core.Component.lockLayout","haxe/ui/core/Component.hx",1562,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1575_unlockLayout,"haxe.ui.core.Component","unlockLayout",0xef854e5c,"haxe.ui.core.Component.unlockLayout","haxe/ui/core/Component.hx",1575,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1599_ready,"haxe.ui.core.Component","ready",0x2408d4d5,"haxe.ui.core.Component.ready","haxe/ui/core/Component.hx",1599,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1621_ready,"haxe.ui.core.Component","ready",0x2408d4d5,"haxe.ui.core.Component.ready","haxe/ui/core/Component.hx",1621,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1639_onReady,"haxe.ui.core.Component","onReady",0x5191f3b6,"haxe.ui.core.Component.onReady","haxe/ui/core/Component.hx",1639,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1642_onInitialize,"haxe.ui.core.Component","onInitialize",0xa515f11d,"haxe.ui.core.Component.onInitialize","haxe/ui/core/Component.hx",1642,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1646_onResized,"haxe.ui.core.Component","onResized",0xb1446a03,"haxe.ui.core.Component.onResized","haxe/ui/core/Component.hx",1646,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1650_onMoved,"haxe.ui.core.Component","onMoved",0x773d1f86,"haxe.ui.core.Component.onMoved","haxe/ui/core/Component.hx",1650,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1699_get_scriptAccess,"haxe.ui.core.Component","get_scriptAccess",0x1a29fb66,"haxe.ui.core.Component.get_scriptAccess","haxe/ui/core/Component.hx",1699,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1701_set_scriptAccess,"haxe.ui.core.Component","set_scriptAccess",0x706be8da,"haxe.ui.core.Component.set_scriptAccess","haxe/ui/core/Component.hx",1701,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1716_get_namedComponents,"haxe.ui.core.Component","get_namedComponents",0xbc51b138,"haxe.ui.core.Component.get_namedComponents","haxe/ui/core/Component.hx",1716,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1723_get_namedComponentsMap,"haxe.ui.core.Component","get_namedComponentsMap",0x3051a444,"haxe.ui.core.Component.get_namedComponentsMap","haxe/ui/core/Component.hx",1723,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1800_onThemeChanged,"haxe.ui.core.Component","onThemeChanged",0x92ad2af8,"haxe.ui.core.Component.onThemeChanged","haxe/ui/core/Component.hx",1800,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1820_initializeComponent,"haxe.ui.core.Component","initializeComponent",0x4b914d3f,"haxe.ui.core.Component.initializeComponent","haxe/ui/core/Component.hx",1820,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1844_validateInitialSize,"haxe.ui.core.Component","validateInitialSize",0xea31ca61,"haxe.ui.core.Component.validateInitialSize","haxe/ui/core/Component.hx",1844,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1867_validateComponentData,"haxe.ui.core.Component","validateComponentData",0x87072783,"haxe.ui.core.Component.validateComponentData","haxe/ui/core/Component.hx",1867,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1878_validateComponentLayout,"haxe.ui.core.Component","validateComponentLayout",0xeaf64843,"haxe.ui.core.Component.validateComponentLayout","haxe/ui/core/Component.hx",1878,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1913_enforceSizeConstraints,"haxe.ui.core.Component","enforceSizeConstraints",0x6ae632c1,"haxe.ui.core.Component.enforceSizeConstraints","haxe/ui/core/Component.hx",1913,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1970_validateComponentStyle,"haxe.ui.core.Component","validateComponentStyle",0x4ed101b8,"haxe.ui.core.Component.validateComponentStyle","haxe/ui/core/Component.hx",1970,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2000_validateComponentPosition,"haxe.ui.core.Component","validateComponentPosition",0x9b049282,"haxe.ui.core.Component.validateComponentPosition","haxe/ui/core/Component.hx",2000,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2008_updateComponentDisplay,"haxe.ui.core.Component","updateComponentDisplay",0x3c5a127c,"haxe.ui.core.Component.updateComponentDisplay","haxe/ui/core/Component.hx",2008,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2028_validateComponentAutoSize,"haxe.ui.core.Component","validateComponentAutoSize",0xff8381a9,"haxe.ui.core.Component.validateComponentAutoSize","haxe/ui/core/Component.hx",2028,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2051_applyStyle,"haxe.ui.core.Component","applyStyle",0x1ad38f31,"haxe.ui.core.Component.applyStyle","haxe/ui/core/Component.hx",2051,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2175_onPointerEventsMouseOver,"haxe.ui.core.Component","onPointerEventsMouseOver",0xa08c12d0,"haxe.ui.core.Component.onPointerEventsMouseOver","haxe/ui/core/Component.hx",2175,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2179_onPointerEventsMouseOut,"haxe.ui.core.Component","onPointerEventsMouseOut",0xfafae292,"haxe.ui.core.Component.onPointerEventsMouseOut","haxe/ui/core/Component.hx",2179,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2183_onPointerEventsMouseDown,"haxe.ui.core.Component","onPointerEventsMouseDown",0x994179de,"haxe.ui.core.Component.onPointerEventsMouseDown","haxe/ui/core/Component.hx",2183,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2187_onPointerEventsMouseUp,"haxe.ui.core.Component","onPointerEventsMouseUp",0x7f6750d7,"haxe.ui.core.Component.onPointerEventsMouseUp","haxe/ui/core/Component.hx",2187,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2206_applyAnimationKeyFrame,"haxe.ui.core.Component","applyAnimationKeyFrame",0xb58d5732,"haxe.ui.core.Component.applyAnimationKeyFrame","haxe/ui/core/Component.hx",2206,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2194_applyAnimationKeyFrame,"haxe.ui.core.Component","applyAnimationKeyFrame",0xb58d5732,"haxe.ui.core.Component.applyAnimationKeyFrame","haxe/ui/core/Component.hx",2194,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2220_cloneComponent,"haxe.ui.core.Component","cloneComponent",0x90cb96ee,"haxe.ui.core.Component.cloneComponent","haxe/ui/core/Component.hx",2220,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2246_get_isComponentClipped,"haxe.ui.core.Component","get_isComponentClipped",0x606cd163,"haxe.ui.core.Component.get_isComponentClipped","haxe/ui/core/Component.hx",2246,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2257_get_cssName,"haxe.ui.core.Component","get_cssName",0x0d3b35b7,"haxe.ui.core.Component.get_cssName","haxe/ui/core/Component.hx",2257,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_2272_get_isComponentSolid,"haxe.ui.core.Component","get_isComponentSolid",0x9e949c8f,"haxe.ui.core.Component.get_isComponentSolid","haxe/ui/core/Component.hx",2272,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_551_registerBehaviours,"haxe.ui.core.Component","registerBehaviours",0x24781427,"haxe.ui.core.Component.registerBehaviours","haxe/ui/macros/Macros.hx",551,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_color,"haxe.ui.core.Component","get_color",0x042c232c,"haxe.ui.core.Component.get_color","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_color,"haxe.ui.core.Component","set_color",0xe77d0f38,"haxe.ui.core.Component.set_color","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_backgroundColor,"haxe.ui.core.Component","get_backgroundColor",0xb6a0759e,"haxe.ui.core.Component.get_backgroundColor","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_backgroundColor,"haxe.ui.core.Component","set_backgroundColor",0xf33d68aa,"haxe.ui.core.Component.set_backgroundColor","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_backgroundColorEnd,"haxe.ui.core.Component","get_backgroundColorEnd",0xebfb1cdd,"haxe.ui.core.Component.get_backgroundColorEnd","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_backgroundColorEnd,"haxe.ui.core.Component","set_backgroundColorEnd",0x1fa69951,"haxe.ui.core.Component.set_backgroundColorEnd","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_backgroundImage,"haxe.ui.core.Component","get_backgroundImage",0x29ad2396,"haxe.ui.core.Component.get_backgroundImage","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_backgroundImage,"haxe.ui.core.Component","set_backgroundImage",0x664a16a2,"haxe.ui.core.Component.set_backgroundImage","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_borderColor,"haxe.ui.core.Component","get_borderColor",0x5359eb60,"haxe.ui.core.Component.get_borderColor","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_borderColor,"haxe.ui.core.Component","set_borderColor",0x4f25686c,"haxe.ui.core.Component.set_borderColor","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_borderSize,"haxe.ui.core.Component","get_borderSize",0xe7583564,"haxe.ui.core.Component.get_borderSize","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_borderSize,"haxe.ui.core.Component","set_borderSize",0x07781dd8,"haxe.ui.core.Component.set_borderSize","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_borderRadius,"haxe.ui.core.Component","get_borderRadius",0x85c413b5,"haxe.ui.core.Component.get_borderRadius","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_borderRadius,"haxe.ui.core.Component","set_borderRadius",0xdc060129,"haxe.ui.core.Component.set_borderRadius","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_padding,"haxe.ui.core.Component","get_padding",0x62f3cfda,"haxe.ui.core.Component.get_padding","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_padding,"haxe.ui.core.Component","set_padding",0x6d60d6e6,"haxe.ui.core.Component.set_padding","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_paddingLeft,"haxe.ui.core.Component","get_paddingLeft",0x026af901,"haxe.ui.core.Component.get_paddingLeft","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_paddingLeft,"haxe.ui.core.Component","set_paddingLeft",0xfe36760d,"haxe.ui.core.Component.set_paddingLeft","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_paddingRight,"haxe.ui.core.Component","get_paddingRight",0x923bf5a2,"haxe.ui.core.Component.get_paddingRight","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_paddingRight,"haxe.ui.core.Component","set_paddingRight",0xe87de316,"haxe.ui.core.Component.set_paddingRight","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_paddingTop,"haxe.ui.core.Component","get_paddingTop",0x1a7032db,"haxe.ui.core.Component.get_paddingTop","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_paddingTop,"haxe.ui.core.Component","set_paddingTop",0x3a901b4f,"haxe.ui.core.Component.set_paddingTop","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_paddingBottom,"haxe.ui.core.Component","get_paddingBottom",0x798d8a65,"haxe.ui.core.Component.get_paddingBottom","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_paddingBottom,"haxe.ui.core.Component","set_paddingBottom",0x9cfb6271,"haxe.ui.core.Component.set_paddingBottom","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_horizontalSpacing,"haxe.ui.core.Component","get_horizontalSpacing",0x00253e48,"haxe.ui.core.Component.get_horizontalSpacing","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_horizontalSpacing,"haxe.ui.core.Component","set_horizontalSpacing",0x542e0c54,"haxe.ui.core.Component.set_horizontalSpacing","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_verticalSpacing,"haxe.ui.core.Component","get_verticalSpacing",0xa3ffe0b6,"haxe.ui.core.Component.get_verticalSpacing","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_verticalSpacing,"haxe.ui.core.Component","set_verticalSpacing",0xe09cd3c2,"haxe.ui.core.Component.set_verticalSpacing","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_marginLeft,"haxe.ui.core.Component","get_marginLeft",0x654788ec,"haxe.ui.core.Component.get_marginLeft","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_marginLeft,"haxe.ui.core.Component","set_marginLeft",0x85677160,"haxe.ui.core.Component.set_marginLeft","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_marginRight,"haxe.ui.core.Component","get_marginRight",0xb05d5357,"haxe.ui.core.Component.get_marginRight","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_marginRight,"haxe.ui.core.Component","set_marginRight",0xac28d063,"haxe.ui.core.Component.set_marginRight","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_marginTop,"haxe.ui.core.Component","get_marginTop",0xe3c74950,"haxe.ui.core.Component.get_marginTop","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_marginTop,"haxe.ui.core.Component","set_marginTop",0x28cd2b5c,"haxe.ui.core.Component.set_marginTop","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_marginBottom,"haxe.ui.core.Component","get_marginBottom",0xb89e2b10,"haxe.ui.core.Component.get_marginBottom","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_marginBottom,"haxe.ui.core.Component","set_marginBottom",0x0ee01884,"haxe.ui.core.Component.set_marginBottom","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_clip,"haxe.ui.core.Component","get_clip",0xf361c927,"haxe.ui.core.Component.get_clip","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_clip,"haxe.ui.core.Component","set_clip",0xa1bf229b,"haxe.ui.core.Component.set_clip","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_opacity,"haxe.ui.core.Component","get_opacity",0x7ddbd3d4,"haxe.ui.core.Component.get_opacity","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_opacity,"haxe.ui.core.Component","set_opacity",0x8848dae0,"haxe.ui.core.Component.set_opacity","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_horizontalAlign,"haxe.ui.core.Component","get_horizontalAlign",0x9dc0b64a,"haxe.ui.core.Component.get_horizontalAlign","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_horizontalAlign,"haxe.ui.core.Component","set_horizontalAlign",0xda5da956,"haxe.ui.core.Component.set_horizontalAlign","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_278_get_verticalAlign,"haxe.ui.core.Component","get_verticalAlign",0x0e704138,"haxe.ui.core.Component.get_verticalAlign","haxe/ui/macros/Macros.hx",278,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_292_set_verticalAlign,"haxe.ui.core.Component","set_verticalAlign",0x31de1944,"haxe.ui.core.Component.set_verticalAlign","haxe/ui/macros/Macros.hx",292,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_521_self,"haxe.ui.core.Component","self",0x18ee2b5a,"haxe.ui.core.Component.self","haxe/ui/macros/Macros.hx",521,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_244_set_onAnimationStart,"haxe.ui.core.Component","set_onAnimationStart",0xf1e5cc88,"haxe.ui.core.Component.set_onAnimationStart","haxe/ui/macros/Macros.hx",244,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_244_set_onAnimationFrame,"haxe.ui.core.Component","set_onAnimationFrame",0x745dd053,"haxe.ui.core.Component.set_onAnimationFrame","haxe/ui/macros/Macros.hx",244,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_244_set_onAnimationEnd,"haxe.ui.core.Component","set_onAnimationEnd",0x3c6ce681,"haxe.ui.core.Component.set_onAnimationEnd","haxe/ui/macros/Macros.hx",244,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_244_set_onClick,"haxe.ui.core.Component","set_onClick",0x7b7f97be,"haxe.ui.core.Component.set_onClick","haxe/ui/macros/Macros.hx",244,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_244_set_onMouseOver,"haxe.ui.core.Component","set_onMouseOver",0x90a0588f,"haxe.ui.core.Component.set_onMouseOver","haxe/ui/macros/Macros.hx",244,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_244_set_onMouseOut,"haxe.ui.core.Component","set_onMouseOut",0x825ed9b3,"haxe.ui.core.Component.set_onMouseOut","haxe/ui/macros/Macros.hx",244,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_244_set_onDblClick,"haxe.ui.core.Component","set_onDblClick",0x2b43e084,"haxe.ui.core.Component.set_onDblClick","haxe/ui/macros/Macros.hx",244,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_244_set_onRightClick,"haxe.ui.core.Component","set_onRightClick",0xf13cfb96,"haxe.ui.core.Component.set_onRightClick","haxe/ui/macros/Macros.hx",244,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_ec37dc4904437dff_244_set_onChange,"haxe.ui.core.Component","set_onChange",0x41497d3a,"haxe.ui.core.Component.set_onChange","haxe/ui/macros/Macros.hx",244,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_1737_addNamedComponentsFrom,"haxe.ui.core.Component","addNamedComponentsFrom",0x87ba48e6,"haxe.ui.core.Component.addNamedComponentsFrom","haxe/ui/core/Component.hx",1737,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_b622e79a3ddd17cb_38_boot,"haxe.ui.core.Component","boot",0x0db92400,"haxe.ui.core.Component.boot","haxe/ui/core/Component.hx",38,0x3bb69e3f)
namespace haxe{
namespace ui{
namespace core{

void Component_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_38_new)
HXLINE(2173)		this->recursivePointerEvents = true;
HXLINE(2050)		this->_pauseAnimationStyleChanges = false;
HXLINE(1842)		this->_initialSizeApplied = false;
HXLINE(1691)		this->_scriptAccess = true;
HXLINE(1520)		this->_includeInLayout = true;
HXLINE(1482)		this->_styleSheet = null();
HXLINE(1481)		this->_cachedStyleSheetRef = null();
HXLINE(1480)		this->_useCachedStyleSheetRef = false;
HXLINE(1386)		this->_styleNamesList = null();
HXLINE(1385)		this->_styleNames = null();
HXLINE(1232)		this->cascadeActive = false;
HXLINE(1230)		this->classes = ::Array_obj< ::String >::__new(0);
HXLINE(1207)		this->_customStyle = null();
HXLINE(1174)		this->_hidden = false;
HXLINE(1074)		this->_invalidateRecursivelyOnShow = true;
HXLINE( 290)		this->bindingRoot = false;
HXLINE( 268)		this->userData = null();
HXLINE( 219)		this->_animatable = true;
HXLINE( 179)		this->_native = null();
HXLINE(  92)		this->_defaultLayoutClass = null();
HXLINE(  87)		this->componentTabIndex = 0;
HXLINE(  48)		super::__construct();
HXLINE(  56)		this->addClass(::haxe::ui::Backend_obj::get_id(),false,null());
HXLINE(  58)		::hx::Class c = ::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  59)		while(::hx::IsNotNull( c )){
HXLINE(  60)			::String css = ::Type_obj::getClassName(c);
HXLINE(  61)			::String className = ( (::String)(css.split(HX_(".",2e,00,00,00))->pop()) );
HXLINE(  62)			this->addClass(className.toLowerCase(),false,null());
HXLINE(  63)			this->addClass(::haxe::ui::util::StringUtil_obj::toDashes(className,null()),false,null());
HXLINE(  64)			if ((className.toLowerCase() == HX_("component",bd,f0,53,0f))) {
HXLINE(  65)				goto _hx_goto_0;
            			}
HXLINE(  67)			c = ::Type_obj::getSuperClass(c);
            		}
            		_hx_goto_0:;
HXLINE(  73)		 ::haxe::ui::styles::Style s = ::haxe::ui::Toolkit_obj::styleSheet->buildStyleFor(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		if (::hx::IsNotNull( s->native )) {
HXLINE(  74)			_hx_tmp = (this->get_hasNativeEntry() == true);
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  75)			this->set_native(s->native);
            		}
            		else {
HXLINE(  77)			this->create();
            		}
HXLINE(  81)		if ((::haxe::ui::Toolkit_obj::get_initialized() == false)) {
HXLINE(  82)			::haxe::Log_obj::trace(HX_("WARNING: You are trying to create a component before the toolkit has been initialized. This could have undefined results.",5e,d9,e2,65),::hx::SourceInfo(HX_("haxe/ui/core/Component.hx",3f,9e,b6,3b),82,HX_("haxe.ui.core.Component",60,d3,76,13),HX_("new",60,d0,53,00)));
            		}
            	}

Dynamic Component_obj::__CreateEmpty() { return new Component_obj; }

void *Component_obj::_hx_vtable = 0;

Dynamic Component_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Component_obj > _hx_result = new Component_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Component_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13d76ae7) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x0f2dd418 || inClassId==(int)0x13d76ae7;
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x6b353933;
			}
		} else {
			return inClassId==(int)0x72c347e4;
		}
	}
}

static ::haxe::ui::validation::IValidating_obj _hx_haxe_ui_core_Component__hx_haxe_ui_validation_IValidating= {
	( int (::hx::Object::*)())&::haxe::ui::core::Component_obj::get_depth,
	( int (::hx::Object::*)(int))&::haxe::ui::core::Component_obj::set_depth,
	( ::String (::hx::Object::*)())&::haxe::ui::core::Component_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::haxe::ui::core::Component_obj::set_id,
	( bool (::hx::Object::*)())&::haxe::ui::core::Component_obj::get_isComponentOffscreen,
	( void (::hx::Object::*)(::hx::Null< bool > ))&::haxe::ui::core::Component_obj::validateComponent,
	( void (::hx::Object::*)())&::haxe::ui::core::Component_obj::updateComponentDisplay,
};

void *Component_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x1e962029: return &_hx_haxe_ui_core_Component__hx_haxe_ui_validation_IValidating;
	}
	return super::_hx_getInterface(inHash);
}

void Component_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Component,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_124_create)
HXLINE( 125)			 ::haxe::ui::events::UIEvent event =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::COMPONENT_CREATED,true,null());
HXLINE( 126)			event->relatedComponent = _gthis;
HXLINE( 127)			_gthis->dispatch(event,null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_93_create)
HXDLIN(  93)		 ::haxe::ui::core::Component _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  94)		bool _hx_tmp;
HXDLIN(  94)		if (::hx::IsNotEq( this->get_native(),false )) {
HXLINE(  94)			_hx_tmp = ::hx::IsNull( this->get_native() );
            		}
            		else {
HXLINE(  94)			_hx_tmp = true;
            		}
HXDLIN(  94)		if (_hx_tmp) {
HXLINE(  95)			this->registerComposite();
            		}
HXLINE(  97)		this->createDefaults();
HXLINE(  98)		this->handleCreate(( (bool)(this->get_native()) ));
HXLINE(  99)		this->destroyChildren();
HXLINE( 100)		this->registerBehaviours();
HXLINE( 101)		this->behaviours->replaceNative();
HXLINE( 103)		bool _hx_tmp1;
HXDLIN( 103)		if (::hx::IsNotEq( this->get_native(),false )) {
HXLINE( 103)			_hx_tmp1 = ::hx::IsNull( this->get_native() );
            		}
            		else {
HXLINE( 103)			_hx_tmp1 = true;
            		}
HXDLIN( 103)		if (_hx_tmp1) {
HXLINE( 104)			if (::hx::IsNotNull( this->_compositeBuilderClass )) {
HXLINE( 105)				if (::hx::IsNull( this->_compositeBuilder )) {
HXLINE( 106)					this->_compositeBuilder = ( ( ::haxe::ui::core::CompositeBuilder)(::Type_obj::createInstance(this->_compositeBuilderClass,::cpp::VirtualArray_obj::__new(1)->init(0,::hx::ObjectPtr<OBJ_>(this)))) );
            				}
HXLINE( 108)				this->_compositeBuilder->create();
            			}
HXLINE( 110)			this->createChildren();
HXLINE( 111)			bool _hx_tmp;
HXDLIN( 111)			if (::hx::IsNotNull( this->_internalEventsClass )) {
HXLINE( 111)				_hx_tmp = ::hx::IsNull( this->_internalEvents );
            			}
            			else {
HXLINE( 111)				_hx_tmp = false;
            			}
HXDLIN( 111)			if (_hx_tmp) {
HXLINE( 112)				this->registerInternalEvents(this->_internalEventsClass,null());
            			}
            		}
            		else {
HXLINE( 115)			::String builderClass = this->getNativeConfigProperty(HX_(".builder.@class",99,29,ba,a8),null());
HXLINE( 116)			if (::hx::IsNotNull( builderClass )) {
HXLINE( 117)				if (::hx::IsNull( this->_compositeBuilder )) {
HXLINE( 118)					this->_compositeBuilder = ( ( ::haxe::ui::core::CompositeBuilder)(::Type_obj::createInstance(::Type_obj::resolveClass(builderClass),::cpp::VirtualArray_obj::__new(1)->init(0,::hx::ObjectPtr<OBJ_>(this)))) );
            				}
HXLINE( 120)				this->_compositeBuilder->create();
            			}
            		}
HXLINE( 123)		this->behaviours->applyDefaults();
HXLINE( 124)		::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE( 129)		this->onComponentCreated();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,create,(void))

void Component_obj::onComponentCreated(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_132_onComponentCreated)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onComponentCreated,(void))

void Component_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_138_registerComposite)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,registerComposite,(void))

void Component_obj::createDefaults(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_141_createDefaults)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,createDefaults,(void))

void Component_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_144_createChildren)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,createChildren,(void))

void Component_obj::destroyChildren(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_149_destroyChildren)
HXDLIN( 149)		this->unregisterInternalEvents();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,destroyChildren,(void))

 ::haxe::ui::layouts::Layout Component_obj::createLayout(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_152_createLayout)
HXLINE( 153)		 ::haxe::ui::layouts::Layout l = null();
HXLINE( 154)		if (::hx::IsEq( this->get_native(),true )) {
HXLINE( 155)			 ::haxe::ds::StringMap sizeProps = this->getNativeConfigProperties(HX_(".size",ef,4f,c2,c8));
HXLINE( 156)			bool _hx_tmp;
HXDLIN( 156)			if (::hx::IsNotNull( sizeProps )) {
HXLINE( 156)				_hx_tmp = sizeProps->exists(HX_("class",38,78,58,48));
            			}
            			else {
HXLINE( 156)				_hx_tmp = false;
            			}
HXDLIN( 156)			if (_hx_tmp) {
HXLINE( 157)				 ::haxe::ui::layouts::DelegateLayoutSize size = ( ( ::haxe::ui::layouts::DelegateLayoutSize)(::Type_obj::createInstance(::Type_obj::resolveClass(sizeProps->get_string(HX_("class",38,78,58,48))),::cpp::VirtualArray_obj::__new(0))) );
HXLINE( 158)				size->config = sizeProps;
HXLINE( 159)				l =  ::haxe::ui::layouts::DelegateLayout_obj::__alloc( HX_CTX ,size);
            			}
            			else {
HXLINE( 161)				 ::haxe::ds::StringMap layoutProps = this->getNativeConfigProperties(HX_(".layout",58,05,94,d1));
HXLINE( 162)				bool _hx_tmp;
HXDLIN( 162)				if (::hx::IsNotNull( layoutProps )) {
HXLINE( 162)					_hx_tmp = layoutProps->exists(HX_("class",38,78,58,48));
            				}
            				else {
HXLINE( 162)					_hx_tmp = false;
            				}
HXDLIN( 162)				if (_hx_tmp) {
HXLINE( 163)					l = ( ( ::haxe::ui::layouts::Layout)(::Type_obj::createInstance(::Type_obj::resolveClass(layoutProps->get_string(HX_("class",38,78,58,48))),::cpp::VirtualArray_obj::__new(0))) );
            				}
            			}
            		}
HXLINE( 168)		if (::hx::IsNull( l )) {
HXLINE( 169)			if (::hx::IsNotNull( this->_defaultLayoutClass )) {
HXLINE( 170)				l = ( ( ::haxe::ui::layouts::Layout)(::Type_obj::createInstance(this->_defaultLayoutClass,::cpp::VirtualArray_obj::__new(0))) );
            			}
            			else {
HXLINE( 172)				l =  ::haxe::ui::layouts::DefaultLayout_obj::__alloc( HX_CTX );
            			}
            		}
HXLINE( 176)		return l;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,createLayout,return )

 ::Dynamic Component_obj::get_native(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_184_get_native)
HXLINE( 185)		if (::hx::IsNull( this->_native )) {
HXLINE( 186)			return false;
            		}
HXLINE( 188)		if ((this->get_hasNativeEntry() == false)) {
HXLINE( 189)			return false;
            		}
HXLINE( 191)		return this->_native;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_native,return )

 ::Dynamic Component_obj::set_native( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_193_set_native)
HXLINE( 194)		if ((this->get_hasNativeEntry() == false)) {
HXLINE( 195)			return value;
            		}
HXLINE( 197)		if (::hx::IsEq( this->_native,value )) {
HXLINE( 198)			return value;
            		}
HXLINE( 201)		this->_native = value;
HXLINE( 202)		this->get_customStyle()->native = value;
HXLINE( 203)		bool _hx_tmp;
HXDLIN( 203)		if (::hx::IsEq( this->_native,true )) {
HXLINE( 203)			_hx_tmp = this->get_hasNativeEntry();
            		}
            		else {
HXLINE( 203)			_hx_tmp = false;
            		}
HXDLIN( 203)		if (_hx_tmp) {
HXLINE( 204)			this->addClass(HX_(":native",51,b1,f9,8d),null(),null());
            		}
            		else {
HXLINE( 206)			this->removeClass(HX_(":native",51,b1,f9,8d),null(),null());
            		}
HXLINE( 209)		this->behaviours->cache();
HXLINE( 210)		this->behaviours->detatch();
HXLINE( 211)		this->create();
HXLINE( 212)		if (::hx::IsNotNull( this->get_layout() )) {
HXLINE( 213)			this->set_layout(this->createLayout());
            		}
HXLINE( 215)		this->behaviours->restore();
HXLINE( 216)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_native,return )

bool Component_obj::get_animatable(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_229_get_animatable)
HXDLIN( 229)		return this->_animatable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_animatable,return )

bool Component_obj::set_animatable(bool value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_231_set_animatable)
HXLINE( 232)		if ((this->_animatable != value)) {
HXLINE( 233)			bool _hx_tmp;
HXDLIN( 233)			if ((value == false)) {
HXLINE( 233)				_hx_tmp = ::hx::IsNotNull( this->_componentAnimation );
            			}
            			else {
HXLINE( 233)				_hx_tmp = false;
            			}
HXDLIN( 233)			if (_hx_tmp) {
HXLINE( 234)				this->_componentAnimation->stop();
HXLINE( 235)				this->_componentAnimation = null();
            			}
HXLINE( 238)			this->_animatable = value;
            		}
HXLINE( 240)		this->_animatable = value;
HXLINE( 241)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_animatable,return )

 ::haxe::ui::styles::animation::Animation Component_obj::get_componentAnimation(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_251_get_componentAnimation)
HXDLIN( 251)		return this->_componentAnimation;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_componentAnimation,return )

 ::haxe::ui::styles::animation::Animation Component_obj::set_componentAnimation( ::haxe::ui::styles::animation::Animation value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_253_set_componentAnimation)
HXLINE( 254)		bool _hx_tmp;
HXDLIN( 254)		if (::hx::IsInstanceNotEq( this->_componentAnimation,value )) {
HXLINE( 254)			_hx_tmp = (this->_animatable == true);
            		}
            		else {
HXLINE( 254)			_hx_tmp = false;
            		}
HXDLIN( 254)		if (_hx_tmp) {
HXLINE( 255)			if (::hx::IsNotNull( this->_componentAnimation )) {
HXLINE( 256)				this->_componentAnimation->stop();
            			}
HXLINE( 259)			this->_componentAnimation = value;
            		}
HXLINE( 262)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_componentAnimation,return )

 ::Dynamic Component_obj::userDataAs(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_271_userDataAs)
HXDLIN( 271)		return this->userData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,userDataAs,return )

 ::haxe::ui::core::Screen Component_obj::get_screen(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_283_get_screen)
HXDLIN( 283)		return ::haxe::ui::Toolkit_obj::get_screen();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_screen,return )

 ::haxe::ui::core::Component Component_obj::get_rootComponent(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_302_get_rootComponent)
HXLINE( 303)		 ::haxe::ui::core::Component r = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 304)		while(::hx::IsNotNull( r->get_parentComponent() )){
HXLINE( 305)			r = r->get_parentComponent();
            		}
HXLINE( 307)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_rootComponent,return )

int Component_obj::get_numComponents(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_315_get_numComponents)
HXLINE( 316)		int n = 0;
HXLINE( 317)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 318)			 ::Dynamic builderCount = this->_compositeBuilder->get_numComponents();
HXLINE( 319)			if (::hx::IsNotNull( builderCount )) {
HXLINE( 320)				n = ( (int)(builderCount) );
            			}
            			else {
HXLINE( 321)				if (::hx::IsNotNull( this->_children )) {
HXLINE( 322)					n = this->_children->length;
            				}
            			}
            		}
            		else {
HXLINE( 324)			if (::hx::IsNotNull( this->_children )) {
HXLINE( 325)				n = this->_children->length;
            			}
            		}
HXLINE( 327)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_numComponents,return )

 ::haxe::ui::core::Component Component_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_339_addComponent)
HXLINE( 340)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 341)			 ::haxe::ui::core::Component v = this->_compositeBuilder->addComponent(child);
HXLINE( 342)			if (::hx::IsNotNull( v )) {
HXLINE( 343)				v->set_scriptAccess(this->get_scriptAccess());
HXLINE( 344)				return v;
            			}
            		}
HXLINE( 348)		if (::hx::IsEq( this->get_native(),true )) {
HXLINE( 349)			bool allowChildren = this->getNativeConfigPropertyBool(HX_(".@allowChildren",56,37,b0,b1),true);
HXLINE( 350)			if ((allowChildren == false)) {
HXLINE( 351)				return child;
            			}
            		}
HXLINE( 355)		child->set_parentComponent(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 356)		child->_isDisposed = false;
HXLINE( 358)		if (::hx::IsNull( this->_children )) {
HXLINE( 359)			this->_children = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 361)		this->_children->push(child);
HXLINE( 363)		this->handleAddComponent(child);
HXLINE( 364)		if (this->_componentReady) {
HXLINE( 365)			child->ready();
            		}
HXLINE( 368)		this->assignPositionClasses(null());
HXLINE( 369)		{
HXLINE( 369)			bool _hx_tmp;
HXDLIN( 369)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 369)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 369)				_hx_tmp = true;
            			}
HXDLIN( 369)			if (!(_hx_tmp)) {
HXLINE( 369)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 370)		if (this->get_disabled()) {
HXLINE( 371)			child->set_disabled(true);
            		}
HXLINE( 374)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 375)			this->_compositeBuilder->onComponentAdded(child);
            		}
HXLINE( 378)		this->onComponentAdded(child);
HXLINE( 379)		 ::haxe::ui::events::UIEvent event =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::COMPONENT_ADDED,null(),null());
HXLINE( 380)		event->relatedComponent = child;
HXLINE( 381)		this->dispatch(event,null());
HXLINE( 382)		child->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::COMPONENT_ADDED_TO_PARENT,null(),null()),null());
HXLINE( 384)		child->set_scriptAccess(this->get_scriptAccess());
HXLINE( 385)		return child;
            	}


bool Component_obj::containsComponent( ::haxe::ui::core::Component child){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< bool >,contains, ::haxe::ui::core::Component,child) HXARGC(1)
            		bool _hx_run( ::haxe::ui::core::Component c){
            			HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_399_containsComponent)
HXLINE( 400)			if (::hx::IsInstanceEq( child,c )) {
HXLINE( 401)				contains[0] = true;
            			}
HXLINE( 403)			return !(contains->__get(0));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_394_containsComponent)
HXLINE( 395)		if (::hx::IsNull( child )) {
HXLINE( 396)			return false;
            		}
HXLINE( 398)		::Array< bool > contains = ::Array_obj< bool >::fromData( _hx_array_data_1376d360_24,1);
HXLINE( 399)		this->walkComponents( ::Dynamic(new _hx_Closure_0(contains,child)));
HXLINE( 405)		return contains->__get(0);
            	}


 ::haxe::ui::core::Component Component_obj::addComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_421_addComponentAt)
HXLINE( 422)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 423)			 ::haxe::ui::core::Component v = this->_compositeBuilder->addComponentAt(child,index);
HXLINE( 424)			if (::hx::IsNotNull( v )) {
HXLINE( 425)				v->set_scriptAccess(this->get_scriptAccess());
HXLINE( 426)				return v;
            			}
            		}
HXLINE( 430)		if (::hx::IsEq( this->get_native(),true )) {
HXLINE( 431)			bool allowChildren = this->getNativeConfigPropertyBool(HX_(".@allowChildren",56,37,b0,b1),true);
HXLINE( 432)			if ((allowChildren == false)) {
HXLINE( 433)				return child;
            			}
            		}
HXLINE( 437)		child->set_parentComponent(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 438)		child->_isDisposed = false;
HXLINE( 440)		if (::hx::IsNull( this->_children )) {
HXLINE( 441)			this->_children = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 443)		this->_children->insert(index,child);
HXLINE( 445)		this->handleAddComponentAt(child,index);
HXLINE( 446)		if (this->_componentReady) {
HXLINE( 447)			child->ready();
            		}
HXLINE( 450)		this->assignPositionClasses(null());
HXLINE( 451)		{
HXLINE( 451)			bool _hx_tmp;
HXDLIN( 451)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 451)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 451)				_hx_tmp = true;
            			}
HXDLIN( 451)			if (!(_hx_tmp)) {
HXLINE( 451)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 452)		if (this->get_disabled()) {
HXLINE( 453)			child->set_disabled(true);
            		}
HXLINE( 456)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 457)			this->_compositeBuilder->onComponentAdded(child);
            		}
HXLINE( 460)		this->onComponentAdded(child);
HXLINE( 461)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::COMPONENT_ADDED,null(),null()),null());
HXLINE( 462)		child->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::COMPONENT_ADDED_TO_PARENT,null(),null()),null());
HXLINE( 464)		child->set_scriptAccess(this->get_scriptAccess());
HXLINE( 465)		return child;
            	}


void Component_obj::onComponentAdded( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_468_onComponentAdded)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onComponentAdded,(void))

 ::haxe::ui::core::Component Component_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_480_removeComponent)
HXLINE( 481)		if (::hx::IsNull( child )) {
HXLINE( 482)			return null();
            		}
HXLINE( 485)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 486)			 ::haxe::ui::core::Component v = this->_compositeBuilder->removeComponent(child,dispose,invalidate);
HXLINE( 487)			if (::hx::IsNotNull( v )) {
HXLINE( 488)				return v;
            			}
            		}
HXLINE( 492)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 493)			if ((this->_children->indexOf(child,null()) == -1)) {
HXLINE( 494)				::String childId = child->get_className();
HXLINE( 495)				if (::hx::IsNotNull( child->get_id() )) {
HXLINE( 496)					childId = (childId + (HX_("#",23,00,00,00) + child->get_id()));
            				}
HXLINE( 498)				::String thisId = this->get_className();
HXLINE( 499)				if (::hx::IsNotNull( this->get_id() )) {
HXLINE( 500)					thisId = (thisId + (HX_("#",23,00,00,00) + this->get_id()));
            				}
HXLINE( 502)				::haxe::Log_obj::trace(((((HX_("WARNING: trying to remove a child (",97,bd,ae,d5) + childId) + HX_(") that is not a child of this component (",c8,7a,aa,51)) + thisId) + HX_(")",29,00,00,00)),::hx::SourceInfo(HX_("haxe/ui/core/Component.hx",3f,9e,b6,3b),502,HX_("haxe.ui.core.Component",60,d3,76,13),HX_("removeComponent",d9,8b,72,50)));
HXLINE( 503)				return child;
            			}
HXLINE( 505)			if (this->_children->remove(child)) {
HXLINE( 506)				child->set_parentComponent(null());
HXLINE( 507)				child->set_depth(-1);
            			}
HXLINE( 509)			if ((dispose == true)) {
HXLINE( 510)				child->disposeComponent();
            			}
            			else {
HXLINE( 512)				child->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::HIDDEN,null(),null()),null());
HXLINE( 514)				child->removeClass(HX_(":hover",42,d3,17,5c),false,true);
            			}
            		}
HXLINE( 518)		this->handleRemoveComponent(child,dispose);
HXLINE( 519)		this->assignPositionClasses(invalidate);
HXLINE( 520)		bool _hx_tmp;
HXDLIN( 520)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 520)			_hx_tmp = (invalidate == true);
            		}
            		else {
HXLINE( 520)			_hx_tmp = false;
            		}
HXDLIN( 520)		if (_hx_tmp) {
HXLINE( 521)			bool _hx_tmp;
HXDLIN( 521)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 521)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 521)				_hx_tmp = true;
            			}
HXDLIN( 521)			if (!(_hx_tmp)) {
HXLINE( 521)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 524)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 525)			this->_compositeBuilder->onComponentRemoved(child);
            		}
HXLINE( 528)		this->onComponentRemoved(child);
HXLINE( 529)		 ::haxe::ui::events::UIEvent event =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::COMPONENT_REMOVED,null(),null());
HXLINE( 530)		event->relatedComponent = child;
HXLINE( 531)		this->dispatch(event,null());
HXLINE( 532)		child->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::COMPONENT_REMOVED_FROM_PARENT,null(),null()),null());
HXLINE( 534)		return child;
            	}


void Component_obj::disposeComponent(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_543_disposeComponent)
HXLINE( 544)		if (this->_isDisposed) {
HXLINE( 545)			return;
            		}
HXLINE( 548)		this->_isDisposed = true;
HXLINE( 549)		this->removeAllComponents(true);
HXLINE( 550)		this->destroyComponent();
HXLINE( 551)		this->unregisterEventsInternal();
HXLINE( 552)		if (this->hasTextDisplay()) {
HXLINE( 553)			this->getTextDisplay()->dispose();
            		}
HXLINE( 555)		if (this->hasTextInput()) {
HXLINE( 556)			this->getTextInput()->dispose();
            		}
HXLINE( 558)		if (this->hasImageDisplay()) {
HXLINE( 559)			this->getImageDisplay()->dispose();
            		}
HXLINE( 561)		if (::hx::IsNotNull( this->behaviours )) {
HXLINE( 562)			this->behaviours->dispose();
HXLINE( 563)			this->behaviours = null();
            		}
HXLINE( 565)		if (::hx::IsNotNull( this->_layout )) {
HXLINE( 566)			this->_layout->set_component(null());
HXLINE( 567)			this->_layout = null();
            		}
HXLINE( 569)		if (::hx::IsNotNull( this->_internalEvents )) {
HXLINE( 570)			this->_internalEvents->onDispose();
HXLINE( 571)			this->_internalEvents->_target = null();
HXLINE( 572)			this->_internalEvents = null();
            		}
HXLINE( 574)		this->set_parentComponent(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,disposeComponent,(void))

 ::haxe::ui::core::Component Component_obj::removeComponentAt(int index,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_586_removeComponentAt)
HXLINE( 587)		if (::hx::IsNull( this->_children )) {
HXLINE( 588)			return null();
            		}
HXLINE( 591)		int childCount = this->_children->length;
HXLINE( 592)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 593)			 ::Dynamic compositeChildCount = this->_compositeBuilder->get_numComponents();
HXLINE( 594)			if (::hx::IsNotNull( compositeChildCount )) {
HXLINE( 595)				childCount = ( (int)(compositeChildCount) );
            			}
            		}
HXLINE( 599)		bool _hx_tmp;
HXDLIN( 599)		if ((index >= 0)) {
HXLINE( 599)			_hx_tmp = (index > (childCount - 1));
            		}
            		else {
HXLINE( 599)			_hx_tmp = true;
            		}
HXDLIN( 599)		if (_hx_tmp) {
HXLINE( 600)			return null();
            		}
HXLINE( 603)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 604)			 ::haxe::ui::core::Component v = this->_compositeBuilder->removeComponentAt(index,dispose,invalidate);
HXLINE( 605)			if (::hx::IsNotNull( v )) {
HXLINE( 606)				return v;
            			}
            		}
HXLINE( 610)		 ::haxe::ui::core::Component child = this->_children->__get(index).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 611)		if (::hx::IsNull( child )) {
HXLINE( 612)			return null();
            		}
HXLINE( 615)		if ((dispose == true)) {
HXLINE( 616)			child->_isDisposed = true;
HXLINE( 617)			child->removeAllComponents(true);
            		}
            		else {
HXLINE( 619)			child->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::HIDDEN,null(),null()),null());
HXLINE( 621)			child->removeClass(HX_(":hover",42,d3,17,5c),false,true);
            		}
HXLINE( 623)		this->handleRemoveComponentAt(index,dispose);
HXLINE( 624)		if (this->_children->remove(child)) {
HXLINE( 625)			child->set_parentComponent(null());
HXLINE( 626)			child->set_depth(-1);
            		}
HXLINE( 628)		if ((dispose == true)) {
HXLINE( 629)			child->destroyComponent();
HXLINE( 630)			child->unregisterEventsInternal();
            		}
HXLINE( 633)		this->assignPositionClasses(invalidate);
HXLINE( 634)		if ((invalidate == true)) {
HXLINE( 635)			bool _hx_tmp;
HXDLIN( 635)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 635)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 635)				_hx_tmp = true;
            			}
HXDLIN( 635)			if (!(_hx_tmp)) {
HXLINE( 635)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 638)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 639)			this->_compositeBuilder->onComponentRemoved(child);
            		}
HXLINE( 642)		this->onComponentRemoved(child);
HXLINE( 643)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::COMPONENT_REMOVED,null(),null()),null());
HXLINE( 644)		child->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::COMPONENT_REMOVED_FROM_PARENT,null(),null()),null());
HXLINE( 646)		return child;
            	}


void Component_obj::onComponentRemoved( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_649_onComponentRemoved)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onComponentRemoved,(void))

void Component_obj::assignPositionClasses(::hx::Null< bool >  __o_invalidate){
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_652_assignPositionClasses)
HXLINE( 653)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 653)		if (::hx::IsNull( this->_children )) {
HXLINE( 653)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 653)			_hx_tmp = this->_children;
            		}
HXDLIN( 653)		if ((_hx_tmp->length == 1)) {
HXLINE( 654)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 654)			if (::hx::IsNull( this->_children )) {
HXLINE( 654)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 654)				_hx_tmp = this->_children;
            			}
HXDLIN( 654)			_hx_tmp->__get(0).StaticCast<  ::haxe::ui::core::Component >()->addClasses(::Array_obj< ::String >::fromData( _hx_array_data_1376d360_34,2),invalidate,null());
HXLINE( 655)			return;
            		}
HXLINE( 657)		int effectiveChildCount = 0;
HXLINE( 658)		{
HXLINE( 658)			int _g = 0;
HXDLIN( 658)			::Array< ::Dynamic> _g1;
HXDLIN( 658)			if (::hx::IsNull( this->_children )) {
HXLINE( 658)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 658)				_g1 = this->_children;
            			}
HXDLIN( 658)			int _g2 = _g1->length;
HXDLIN( 658)			while((_g < _g2)){
HXLINE( 658)				_g = (_g + 1);
HXDLIN( 658)				int i = (_g - 1);
HXLINE( 659)				::Array< ::Dynamic> c;
HXDLIN( 659)				if (::hx::IsNull( this->_children )) {
HXLINE( 659)					c = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 659)					c = this->_children;
            				}
HXDLIN( 659)				 ::haxe::ui::core::Component c1 = c->__get(i).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 660)				if (!(c1->get_includeInLayout())) {
HXLINE( 661)					continue;
            				}
HXLINE( 663)				effectiveChildCount = (effectiveChildCount + 1);
            			}
            		}
HXLINE( 665)		int n = 0;
HXLINE( 666)		{
HXLINE( 666)			int _g3 = 0;
HXDLIN( 666)			::Array< ::Dynamic> _g4;
HXDLIN( 666)			if (::hx::IsNull( this->_children )) {
HXLINE( 666)				_g4 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 666)				_g4 = this->_children;
            			}
HXDLIN( 666)			int _g5 = _g4->length;
HXDLIN( 666)			while((_g3 < _g5)){
HXLINE( 666)				_g3 = (_g3 + 1);
HXDLIN( 666)				int i = (_g3 - 1);
HXLINE( 667)				::Array< ::Dynamic> c;
HXDLIN( 667)				if (::hx::IsNull( this->_children )) {
HXLINE( 667)					c = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 667)					c = this->_children;
            				}
HXDLIN( 667)				 ::haxe::ui::core::Component c1 = c->__get(i).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 668)				if (!(c1->get_includeInLayout())) {
HXLINE( 669)					continue;
            				}
HXLINE( 671)				if ((i == 0)) {
HXLINE( 672)					c1->swapClass(HX_("first",30,78,9d,00),HX_("last",56,0a,ad,47),invalidate,null());
            				}
            				else {
HXLINE( 673)					if ((i == (effectiveChildCount - 1))) {
HXLINE( 674)						c1->swapClass(HX_("last",56,0a,ad,47),HX_("first",30,78,9d,00),invalidate,null());
            					}
            					else {
HXLINE( 676)						c1->removeClasses(::Array_obj< ::String >::fromData( _hx_array_data_1376d360_35,2),invalidate,null());
            					}
            				}
HXLINE( 678)				n = (n + 1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,assignPositionClasses,(void))

void Component_obj::destroyComponent(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_682_destroyComponent)
HXLINE( 683)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 684)			this->_compositeBuilder->destroy();
            		}
HXLINE( 686)		::haxe::ui::locale::LocaleManager_obj::get_instance()->unregisterComponent(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 687)		this->handleDestroy();
HXLINE( 688)		this->onDestroy();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,destroyComponent,(void))

void Component_obj::onDestroy(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_691_onDestroy)
HXLINE( 692)		{
HXLINE( 692)			int _g = 0;
HXDLIN( 692)			::Array< ::Dynamic> _g1;
HXDLIN( 692)			if (::hx::IsNull( this->_children )) {
HXLINE( 692)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 692)				_g1 = this->_children;
            			}
HXDLIN( 692)			while((_g < _g1->length)){
HXLINE( 692)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 692)				_g = (_g + 1);
HXLINE( 693)				child->onDestroy();
            			}
            		}
HXLINE( 695)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::HIDDEN,null(),null()),null());
HXLINE( 696)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::DESTROY,null(),null()),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onDestroy,(void))

void Component_obj::walkComponents( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_705_walkComponents)
HXLINE( 706)		if (::hx::IsEq( callback(::hx::ObjectPtr<OBJ_>(this)),false )) {
HXLINE( 707)			return;
            		}
HXLINE( 710)		{
HXLINE( 710)			int _g = 0;
HXDLIN( 710)			::Array< ::Dynamic> _g1;
HXDLIN( 710)			if (::hx::IsNull( this->_children )) {
HXLINE( 710)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 710)				_g1 = this->_children;
            			}
HXDLIN( 710)			while((_g < _g1->length)){
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< bool >,cont, ::Dynamic,callback) HXARGC(1)
            				bool _hx_run( ::haxe::ui::core::Component c){
            					HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_712_walkComponents)
HXLINE( 713)					cont[0] = ( (bool)(callback(c)) );
HXLINE( 714)					return cont->__get(0);
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 710)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 710)				_g = (_g + 1);
HXLINE( 711)				::Array< bool > cont = ::Array_obj< bool >::fromData( _hx_array_data_1376d360_42,1);
HXLINE( 712)				child->walkComponents( ::Dynamic(new _hx_Closure_0(cont,callback)));
HXLINE( 717)				if ((cont->__get(0) == false)) {
HXLINE( 718)					goto _hx_goto_39;
            				}
            			}
            			_hx_goto_39:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,walkComponents,(void))

void Component_obj::removeAllComponents(::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_729_removeAllComponents)
HXLINE( 730)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 731)			bool b = this->_compositeBuilder->removeAllComponents(dispose);
HXLINE( 732)			if ((b == true)) {
HXLINE( 733)				return;
            			}
            		}
HXLINE( 737)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 738)			while((this->_children->length > 0)){
HXLINE( 739)				if (dispose) {
HXLINE( 740)					this->_children->__get(0).StaticCast<  ::haxe::ui::core::Component >()->removeAllComponents(dispose);
            				}
HXLINE( 742)				this->removeComponent(this->_children->__get(0).StaticCast<  ::haxe::ui::core::Component >(),dispose,false);
            			}
HXLINE( 744)			{
HXLINE( 744)				bool _hx_tmp;
HXDLIN( 744)				if (::hx::IsNotNull( this->_layout )) {
HXLINE( 744)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE( 744)					_hx_tmp = true;
            				}
HXDLIN( 744)				if (!(_hx_tmp)) {
HXLINE( 744)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,removeAllComponents,(void))

bool Component_obj::matchesSearch(::String criteria,::hx::Class type,::String __o_searchType){
            		::String searchType = __o_searchType;
            		if (::hx::IsNull(__o_searchType)) searchType = HX_("id",db,5b,00,00);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_748_matchesSearch)
HXLINE( 749)		if (::hx::IsNotNull( criteria )) {
HXLINE( 750)			bool _hx_tmp;
HXDLIN( 750)			bool _hx_tmp1;
HXDLIN( 750)			if ((searchType == HX_("id",db,5b,00,00))) {
HXLINE( 750)				_hx_tmp1 = (this->get_id() == criteria);
            			}
            			else {
HXLINE( 750)				_hx_tmp1 = false;
            			}
HXDLIN( 750)			if (!(_hx_tmp1)) {
HXLINE( 750)				if ((searchType == HX_("css",c3,83,4b,00))) {
HXLINE( 750)					_hx_tmp = ((this->classes->indexOf(criteria,null()) != -1) == true);
            				}
            				else {
HXLINE( 750)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 750)				_hx_tmp = true;
            			}
HXDLIN( 750)			if (_hx_tmp) {
HXLINE( 751)				if (::hx::IsNotNull( type )) {
HXLINE( 752)					return ::Std_obj::isOfType(::hx::ObjectPtr<OBJ_>(this),type);
            				}
HXLINE( 754)				return true;
            			}
            		}
            		else {
HXLINE( 756)			if (::hx::IsNotNull( type )) {
HXLINE( 757)				return ::Std_obj::isOfType(::hx::ObjectPtr<OBJ_>(this),type);
            			}
            		}
HXLINE( 759)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,matchesSearch,return )

 ::Dynamic Component_obj::findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String __o_searchType){
            		::String searchType = __o_searchType;
            		if (::hx::IsNull(__o_searchType)) searchType = HX_("id",db,5b,00,00);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_772_findComponent)
HXLINE( 773)		bool _hx_tmp;
HXDLIN( 773)		bool _hx_tmp1;
HXDLIN( 773)		if (::hx::IsNull( recursive )) {
HXLINE( 773)			_hx_tmp1 = ::hx::IsNotNull( criteria );
            		}
            		else {
HXLINE( 773)			_hx_tmp1 = false;
            		}
HXDLIN( 773)		if (_hx_tmp1) {
HXLINE( 773)			_hx_tmp = (searchType == HX_("id",db,5b,00,00));
            		}
            		else {
HXLINE( 773)			_hx_tmp = false;
            		}
HXDLIN( 773)		if (_hx_tmp) {
HXLINE( 774)			recursive = true;
            		}
HXLINE( 777)		 ::haxe::ui::core::Component match = null();
HXLINE( 778)		{
HXLINE( 778)			int _g = 0;
HXDLIN( 778)			::Array< ::Dynamic> _g1;
HXDLIN( 778)			if (::hx::IsNull( this->_children )) {
HXLINE( 778)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 778)				_g1 = this->_children;
            			}
HXDLIN( 778)			while((_g < _g1->length)){
HXLINE( 778)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 778)				_g = (_g + 1);
HXLINE( 779)				if (child->matchesSearch(criteria,type,searchType)) {
HXLINE( 780)					match = child;
HXLINE( 781)					goto _hx_goto_46;
            				}
            			}
            			_hx_goto_46:;
            		}
HXLINE( 784)		bool _hx_tmp2;
HXDLIN( 784)		if (::hx::IsNull( match )) {
HXLINE( 784)			_hx_tmp2 = ::hx::IsEq( recursive,true );
            		}
            		else {
HXLINE( 784)			_hx_tmp2 = false;
            		}
HXDLIN( 784)		if (_hx_tmp2) {
HXLINE( 785)			{
HXLINE( 785)				int _g = 0;
HXDLIN( 785)				::Array< ::Dynamic> _g1;
HXDLIN( 785)				if (::hx::IsNull( this->_children )) {
HXLINE( 785)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 785)					_g1 = this->_children;
            				}
HXDLIN( 785)				while((_g < _g1->length)){
HXLINE( 785)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 785)					_g = (_g + 1);
HXLINE( 786)					 ::haxe::ui::core::Component temp = ( ( ::haxe::ui::core::Component)(child->findComponent(criteria,type,recursive,searchType)) );
HXLINE( 787)					if (::hx::IsNotNull( temp )) {
HXLINE( 788)						match = temp;
HXLINE( 789)						goto _hx_goto_47;
            					}
            				}
            				_hx_goto_47:;
            			}
HXLINE( 792)			bool _hx_tmp;
HXDLIN( 792)			if (::hx::IsNull( match )) {
HXLINE( 792)				_hx_tmp = ::hx::IsNotNull( this->_compositeBuilder );
            			}
            			else {
HXLINE( 792)				_hx_tmp = false;
            			}
HXDLIN( 792)			if (_hx_tmp) {
HXLINE( 793)				match = ( ( ::haxe::ui::core::Component)(this->_compositeBuilder->findComponent(criteria,type,recursive,searchType)) );
            			}
            		}
HXLINE( 797)		return match;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Component_obj,findComponent,return )

::cpp::VirtualArray Component_obj::findComponents(::String styleName,::hx::Class type,::hx::Null< int >  __o_maxDepth){
            		int maxDepth = __o_maxDepth.Default(5);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_808_findComponents)
HXLINE( 809)		if ((maxDepth == -1)) {
HXLINE( 810)			maxDepth = 100;
            		}
HXLINE( 812)		if ((maxDepth <= 0)) {
HXLINE( 813)			return ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 816)		maxDepth = (maxDepth - 1);
HXLINE( 818)		::cpp::VirtualArray r = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 819)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 820)			::cpp::VirtualArray childArray = this->_compositeBuilder->findComponents(styleName,type,maxDepth);
HXLINE( 821)			if (::hx::IsNotNull( childArray )) {
HXLINE( 822)				int _g = 0;
HXDLIN( 822)				while((_g < childArray->get_length())){
HXLINE( 822)					 ::Dynamic c = childArray->__get(_g);
HXDLIN( 822)					_g = (_g + 1);
HXLINE( 823)					r->push(c);
            				}
            			}
            		}
HXLINE( 828)		{
HXLINE( 828)			int _g = 0;
HXDLIN( 828)			::Array< ::Dynamic> _g1;
HXDLIN( 828)			if (::hx::IsNull( this->_children )) {
HXLINE( 828)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 828)				_g1 = this->_children;
            			}
HXDLIN( 828)			while((_g < _g1->length)){
HXLINE( 828)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 828)				_g = (_g + 1);
HXLINE( 829)				bool match = true;
HXLINE( 830)				bool _hx_tmp;
HXDLIN( 830)				if (::hx::IsNotNull( styleName )) {
HXLINE( 830)					_hx_tmp = ((child->classes->indexOf(styleName,null()) != -1) == false);
            				}
            				else {
HXLINE( 830)					_hx_tmp = false;
            				}
HXDLIN( 830)				if (_hx_tmp) {
HXLINE( 831)					match = false;
            				}
HXLINE( 833)				bool _hx_tmp1;
HXDLIN( 833)				if (::hx::IsNotNull( type )) {
HXLINE( 833)					_hx_tmp1 = (::Std_obj::isOfType(child,type) == false);
            				}
            				else {
HXLINE( 833)					_hx_tmp1 = false;
            				}
HXDLIN( 833)				if (_hx_tmp1) {
HXLINE( 834)					match = false;
            				}
HXLINE( 842)				bool continueRecursion = true;
HXLINE( 843)				bool _hx_tmp2;
HXDLIN( 843)				if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::core::ICompositeInteractiveComponent >())) {
HXLINE( 843)					_hx_tmp2 = ::hx::IsPointerEq( type,::hx::ClassOf< ::haxe::ui::core::InteractiveComponent >() );
            				}
            				else {
HXLINE( 843)					_hx_tmp2 = false;
            				}
HXDLIN( 843)				if (_hx_tmp2) {
HXLINE( 844)					continueRecursion = false;
            				}
HXLINE( 847)				if ((match == true)) {
HXLINE( 848)					r->push(child);
            				}
HXLINE( 851)				if (continueRecursion) {
HXLINE( 852)					::cpp::VirtualArray childArray = child->findComponents(styleName,type,maxDepth);
HXLINE( 853)					{
HXLINE( 853)						int _g = 0;
HXDLIN( 853)						while((_g < childArray->get_length())){
HXLINE( 853)							 ::Dynamic c = childArray->__get(_g);
HXDLIN( 853)							_g = (_g + 1);
HXLINE( 854)							r->push(c);
            						}
            					}
            				}
            			}
            		}
HXLINE( 859)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,findComponents,return )

 ::Dynamic Component_obj::findAncestor(::String criteria,::hx::Class type,::String __o_searchType){
            		::String searchType = __o_searchType;
            		if (::hx::IsNull(__o_searchType)) searchType = HX_("id",db,5b,00,00);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_871_findAncestor)
HXLINE( 872)		 ::haxe::ui::core::Component match = null();
HXLINE( 873)		 ::haxe::ui::core::Component p = this->get_parentComponent();
HXLINE( 874)		while(::hx::IsNotNull( p )){
HXLINE( 875)			if (p->matchesSearch(criteria,type,searchType)) {
HXLINE( 876)				match = p;
HXLINE( 877)				goto _hx_goto_53;
            			}
            			else {
HXLINE( 879)				p = p->get_parentComponent();
            			}
            		}
            		_hx_goto_53:;
HXLINE( 882)		return match;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,findAncestor,return )

bool Component_obj::hitTest( ::Dynamic left, ::Dynamic top,::hx::Null< bool >  __o_allowZeroSized){
            		bool allowZeroSized = __o_allowZeroSized.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_891_hitTest)
HXLINE( 892)		if (this->get_hidden()) {
HXLINE( 893)			return false;
            		}
HXLINE( 896)		return this->super::hitTest(left,top,allowZeroSized);
            	}


::Array< ::Dynamic> Component_obj::findComponentsUnderPoint(Float screenX,Float screenY,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_910_findComponentsUnderPoint)
HXLINE( 911)		::Array< ::Dynamic> c = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 912)		if (this->hitTest(screenX,screenY,false)) {
HXLINE( 913)			int _g = 0;
HXDLIN( 913)			::Array< ::Dynamic> _g1;
HXDLIN( 913)			if (::hx::IsNull( this->_children )) {
HXLINE( 913)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 913)				_g1 = this->_children;
            			}
HXDLIN( 913)			while((_g < _g1->length)){
HXLINE( 913)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 913)				_g = (_g + 1);
HXLINE( 914)				if (child->hitTest(screenX,screenY,false)) {
HXLINE( 915)					bool match = true;
HXLINE( 916)					bool _hx_tmp;
HXDLIN( 916)					if (::hx::IsNotNull( type )) {
HXLINE( 916)						_hx_tmp = (::Std_obj::isOfType(child,type) == false);
            					}
            					else {
HXLINE( 916)						_hx_tmp = false;
            					}
HXDLIN( 916)					if (_hx_tmp) {
HXLINE( 917)						match = false;
            					}
HXLINE( 919)					if ((match == true)) {
HXLINE( 920)						c->push(child);
            					}
HXLINE( 922)					c = c->concat(child->findComponentsUnderPoint(screenX,screenY,type));
            				}
            			}
            		}
HXLINE( 926)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,findComponentsUnderPoint,return )

bool Component_obj::hasComponentUnderPoint(Float screenX,Float screenY,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_937_hasComponentUnderPoint)
HXLINE( 938)		bool b = false;
HXLINE( 939)		if (this->hitTest(screenX,screenY,false)) {
HXLINE( 940)			if (::hx::IsNull( type )) {
HXLINE( 941)				return true;
            			}
HXLINE( 943)			{
HXLINE( 943)				int _g = 0;
HXDLIN( 943)				::Array< ::Dynamic> _g1;
HXDLIN( 943)				if (::hx::IsNull( this->_children )) {
HXLINE( 943)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 943)					_g1 = this->_children;
            				}
HXDLIN( 943)				while((_g < _g1->length)){
HXLINE( 943)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 943)					_g = (_g + 1);
HXLINE( 944)					if (child->hitTest(screenX,screenY,false)) {
HXLINE( 945)						bool match = true;
HXLINE( 946)						bool _hx_tmp;
HXDLIN( 946)						if (::hx::IsNotNull( type )) {
HXLINE( 946)							_hx_tmp = (::Std_obj::isOfType(child,type) == false);
            						}
            						else {
HXLINE( 946)							_hx_tmp = false;
            						}
HXDLIN( 946)						if (_hx_tmp) {
HXLINE( 947)							match = false;
            						}
HXLINE( 949)						if ((match == false)) {
HXLINE( 950)							match = child->hasComponentUnderPoint(screenX,screenY,type);
            						}
HXLINE( 952)						if ((match == true)) {
HXLINE( 953)							b = match;
HXLINE( 954)							goto _hx_goto_58;
            						}
            					}
            				}
            				_hx_goto_58:;
            			}
            		}
HXLINE( 959)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,hasComponentUnderPoint,return )

int Component_obj::getComponentIndex( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_968_getComponentIndex)
HXLINE( 969)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 970)			int index = this->_compositeBuilder->getComponentIndex(child);
HXLINE( 971)			if ((index != (int)-2147483648)) {
HXLINE( 972)				return index;
            			}
            		}
HXLINE( 976)		int index = -1;
HXLINE( 977)		bool _hx_tmp;
HXDLIN( 977)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 977)			_hx_tmp = ::hx::IsNotNull( child );
            		}
            		else {
HXLINE( 977)			_hx_tmp = false;
            		}
HXDLIN( 977)		if (_hx_tmp) {
HXLINE( 978)			index = this->_children->indexOf(child,null());
            		}
HXLINE( 980)		return index;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,getComponentIndex,return )

 ::haxe::ui::core::Component Component_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_989_setComponentIndex)
HXLINE( 990)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE( 991)			 ::haxe::ui::core::Component v = this->_compositeBuilder->setComponentIndex(child,index);
HXLINE( 992)			if (::hx::IsNotNull( v )) {
HXLINE( 993)				return v;
            			}
            		}
HXLINE( 997)		bool _hx_tmp;
HXDLIN( 997)		bool _hx_tmp1;
HXDLIN( 997)		if ((index >= 0)) {
HXLINE( 997)			_hx_tmp1 = (index <= this->_children->length);
            		}
            		else {
HXLINE( 997)			_hx_tmp1 = false;
            		}
HXDLIN( 997)		if (_hx_tmp1) {
HXLINE( 997)			_hx_tmp = ::hx::IsInstanceEq( child->get_parentComponent(),::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 997)			_hx_tmp = false;
            		}
HXDLIN( 997)		if (_hx_tmp) {
HXLINE( 998)			this->handleSetComponentIndex(child,index);
HXLINE( 999)			this->_children->remove(child);
HXLINE(1000)			this->_children->insert(index,child);
HXLINE(1001)			{
HXLINE(1001)				bool _hx_tmp;
HXDLIN(1001)				if (::hx::IsNotNull( this->_layout )) {
HXLINE(1001)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE(1001)					_hx_tmp = true;
            				}
HXDLIN(1001)				if (!(_hx_tmp)) {
HXLINE(1001)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
            		}
HXLINE(1003)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,setComponentIndex,return )

 ::haxe::ui::core::Component Component_obj::getComponentAt(int index){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1012_getComponentAt)
HXLINE(1013)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1014)			 ::haxe::ui::core::Component v = this->_compositeBuilder->getComponentAt(index);
HXLINE(1015)			if (::hx::IsNotNull( v )) {
HXLINE(1016)				return v;
            			}
            		}
HXLINE(1019)		if (::hx::IsNull( this->_children )) {
HXLINE(1020)			return null();
            		}
HXLINE(1022)		return this->_children->__get(index).StaticCast<  ::haxe::ui::core::Component >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,getComponentAt,return )

void Component_obj::hide(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1029_hide)
HXLINE(1030)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1031)			bool v = this->_compositeBuilder->hide();
HXLINE(1032)			if ((v == true)) {
HXLINE(1033)				return;
            			}
            		}
HXLINE(1037)		if ((this->_hidden == false)) {
HXLINE(1038)			this->_hidden = true;
HXLINE(1039)			this->handleVisibility(false);
HXLINE(1040)			if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE(1041)				 ::haxe::ui::core::Component _this = this->get_parentComponent();
HXDLIN(1041)				bool _hx_tmp;
HXDLIN(1041)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1041)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1041)					_hx_tmp = true;
            				}
HXDLIN(1041)				if (!(_hx_tmp)) {
HXLINE(1041)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1044)			this->dispatchRecursively( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::HIDDEN,null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,hide,(void))

void Component_obj::hideInternal(::hx::Null< bool >  __o_dispatchChildren){
            		bool dispatchChildren = __o_dispatchChildren.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1048_hideInternal)
HXLINE(1049)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1050)			bool v = this->_compositeBuilder->hide();
HXLINE(1051)			if ((v == true)) {
HXLINE(1052)				return;
            			}
            		}
HXLINE(1056)		if ((this->_hidden == false)) {
HXLINE(1057)			this->_hidden = true;
HXLINE(1058)			this->handleVisibility(false);
HXLINE(1059)			if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE(1060)				 ::haxe::ui::core::Component _this = this->get_parentComponent();
HXDLIN(1060)				bool _hx_tmp;
HXDLIN(1060)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1060)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1060)					_hx_tmp = true;
            				}
HXDLIN(1060)				if (!(_hx_tmp)) {
HXLINE(1060)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1063)			if ((dispatchChildren == true)) {
HXLINE(1064)				this->dispatchRecursively( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::HIDDEN,null(),null()));
            			}
            			else {
HXLINE(1066)				this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::HIDDEN,null(),null()),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,hideInternal,(void))

void Component_obj::show(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1079_show)
HXLINE(1080)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1081)			bool v = this->_compositeBuilder->show();
HXLINE(1082)			if ((v == true)) {
HXLINE(1083)				return;
            			}
            		}
HXLINE(1087)		if ((this->_hidden == true)) {
HXLINE(1088)			this->_hidden = false;
HXLINE(1089)			this->handleVisibility(true);
HXLINE(1090)			{
HXLINE(1090)				bool _hx_tmp;
HXDLIN(1090)				if (::hx::IsNotNull( this->_layout )) {
HXLINE(1090)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE(1090)					_hx_tmp = true;
            				}
HXDLIN(1090)				if (!(_hx_tmp)) {
HXLINE(1090)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),this->_invalidateRecursivelyOnShow);
            				}
            			}
HXLINE(1091)			this->_invalidateRecursivelyOnShow = false;
HXLINE(1092)			if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE(1093)				 ::haxe::ui::core::Component _this = this->get_parentComponent();
HXDLIN(1093)				bool _hx_tmp;
HXDLIN(1093)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1093)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1093)					_hx_tmp = true;
            				}
HXDLIN(1093)				if (!(_hx_tmp)) {
HXLINE(1093)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1096)			this->dispatchRecursively( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::SHOWN,null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,show,(void))

void Component_obj::showInternal(::hx::Null< bool >  __o_dispatchChildren){
            		bool dispatchChildren = __o_dispatchChildren.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1100_showInternal)
HXLINE(1101)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1102)			bool v = this->_compositeBuilder->show();
HXLINE(1103)			if ((v == true)) {
HXLINE(1104)				return;
            			}
            		}
HXLINE(1108)		if ((this->_hidden == true)) {
HXLINE(1109)			this->_hidden = false;
HXLINE(1110)			this->handleVisibility(true);
HXLINE(1111)			{
HXLINE(1111)				bool _hx_tmp;
HXDLIN(1111)				if (::hx::IsNotNull( this->_layout )) {
HXLINE(1111)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE(1111)					_hx_tmp = true;
            				}
HXDLIN(1111)				if (!(_hx_tmp)) {
HXLINE(1111)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1112)			if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE(1113)				 ::haxe::ui::core::Component _this = this->get_parentComponent();
HXDLIN(1113)				bool _hx_tmp;
HXDLIN(1113)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1113)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1113)					_hx_tmp = true;
            				}
HXDLIN(1113)				if (!(_hx_tmp)) {
HXLINE(1113)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1116)			if ((dispatchChildren == true)) {
HXLINE(1117)				this->dispatchRecursively( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::SHOWN,null(),null()));
            			}
            			else {
HXLINE(1119)				this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::SHOWN,null(),null()),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,showInternal,(void))

void Component_obj::fadeIn( ::Dynamic onEnd,::hx::Null< bool >  __o_show){
            		bool show = __o_show.Default(true);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1129_fadeIn)
HXDLIN(1129)		 ::haxe::ui::core::Component _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1130)		bool _hx_tmp;
HXDLIN(1130)		if (::hx::IsNull( onEnd )) {
HXLINE(1130)			_hx_tmp = (show == true);
            		}
            		else {
HXLINE(1130)			_hx_tmp = true;
            		}
HXDLIN(1130)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::haxe::ui::core::Component,_gthis, ::Dynamic,onEnd, ::Dynamic,prevEnd) HXARGC(1)
            			void _hx_run( ::haxe::ui::events::AnimationEvent e){
            				HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1141_fadeIn)
HXLINE(1142)				_gthis->removeClass(HX_("fade-in",56,61,22,31),null(),null());
HXLINE(1143)				_gthis->set_onAnimationEnd(prevEnd);
HXLINE(1144)				if (::hx::IsNotNull( onEnd )) {
HXLINE(1145)					onEnd();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(1131)			::Array< ::Dynamic> prevStart = ::Array_obj< ::Dynamic>::__new(1)->init(0,this->onAnimationStart);
HXLINE(1132)			 ::Dynamic prevEnd = this->onAnimationEnd;
HXLINE(1133)			if ((show == true)) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Component,_gthis,::Array< ::Dynamic>,prevStart) HXARGC(1)
            				void _hx_run( ::haxe::ui::events::AnimationEvent e){
            					HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1135_fadeIn)
HXLINE(1136)					_gthis->show();
HXLINE(1137)					_gthis->set_onAnimationStart(prevStart->__get(0));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(1134)				prevStart[0] = this->onAnimationStart;
HXLINE(1135)				this->set_onAnimationStart( ::Dynamic(new _hx_Closure_0(_gthis,prevStart)));
            			}
HXLINE(1141)			this->set_onAnimationEnd( ::Dynamic(new _hx_Closure_1(_gthis,onEnd,prevEnd)));
            		}
HXLINE(1149)		this->swapClass(HX_("fade-in",56,61,22,31),HX_("fade-out",fd,5d,f7,cc),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,fadeIn,(void))

void Component_obj::fadeOut( ::Dynamic onEnd,::hx::Null< bool >  __o_hide){
            		bool hide = __o_hide.Default(true);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1157_fadeOut)
HXDLIN(1157)		 ::haxe::ui::core::Component _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1158)		bool _hx_tmp;
HXDLIN(1158)		if (::hx::IsNull( onEnd )) {
HXLINE(1158)			_hx_tmp = (hide == true);
            		}
            		else {
HXLINE(1158)			_hx_tmp = true;
            		}
HXDLIN(1158)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Component,_gthis, ::Dynamic,onEnd, ::Dynamic,prevEnd,bool,hide) HXARGC(1)
            			void _hx_run( ::haxe::ui::events::AnimationEvent e){
            				HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1160_fadeOut)
HXLINE(1161)				if ((hide == true)) {
HXLINE(1162)					_gthis->hide();
            				}
HXLINE(1164)				_gthis->set_onAnimationEnd(prevEnd);
HXLINE(1165)				_gthis->removeClass(HX_("fade-out",fd,5d,f7,cc),null(),null());
HXLINE(1166)				if (::hx::IsNotNull( onEnd )) {
HXLINE(1167)					onEnd();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(1159)			 ::Dynamic prevEnd = this->onAnimationEnd;
HXLINE(1160)			this->set_onAnimationEnd( ::Dynamic(new _hx_Closure_0(_gthis,onEnd,prevEnd,hide)));
            		}
HXLINE(1171)		this->swapClass(HX_("fade-out",fd,5d,f7,cc),HX_("fade-in",56,61,22,31),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,fadeOut,(void))

bool Component_obj::get_hidden(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1181_get_hidden)
HXLINE(1182)		if ((this->_hidden == true)) {
HXLINE(1183)			return true;
            		}
HXLINE(1185)		if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE(1186)			return this->get_parentComponent()->get_hidden();
            		}
HXLINE(1188)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_hidden,return )

bool Component_obj::set_hidden(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1190_set_hidden)
HXLINE(1191)		if ((value == this->_hidden)) {
HXLINE(1192)			return value;
            		}
HXLINE(1194)		if ((value == true)) {
HXLINE(1195)			this->hide();
            		}
            		else {
HXLINE(1197)			this->show();
            		}
HXLINE(1199)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("hidden",6a,ff,95,4c)),null());
HXLINE(1200)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_hidden,return )

 ::haxe::ui::styles::Style Component_obj::get_customStyle(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1216_get_customStyle)
HXLINE(1217)		if (::hx::IsNull( this->_customStyle )) {
HXLINE(1218)			this->_customStyle =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(1220)		return this->_customStyle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_customStyle,return )

 ::haxe::ui::styles::Style Component_obj::set_customStyle( ::haxe::ui::styles::Style value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1222_set_customStyle)
HXLINE(1223)		if (::hx::IsInstanceNotEq( value,this->_customStyle )) {
HXLINE(1224)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1224)			{
            			}
            		}
HXLINE(1226)		this->_customStyle = value;
HXLINE(1227)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_customStyle,return )

void Component_obj::addClass(::String name,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1242_addClass)
HXLINE(1243)		if ((this->classes->indexOf(name,null()) == -1)) {
HXLINE(1244)			this->classes->push(name);
HXLINE(1245)			if ((invalidate == true)) {
HXLINE(1246)				this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1246)				{
            				}
            			}
            		}
HXLINE(1250)		bool _hx_tmp;
HXDLIN(1250)		if ((recursive != true)) {
HXLINE(1250)			if ((this->cascadeActive == true)) {
HXLINE(1250)				_hx_tmp = (name == HX_(":active",80,29,23,82));
            			}
            			else {
HXLINE(1250)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(1250)			_hx_tmp = true;
            		}
HXDLIN(1250)		if (_hx_tmp) {
HXLINE(1251)			int _g = 0;
HXDLIN(1251)			::Array< ::Dynamic> _g1;
HXDLIN(1251)			if (::hx::IsNull( this->_children )) {
HXLINE(1251)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1251)				_g1 = this->_children;
            			}
HXDLIN(1251)			while((_g < _g1->length)){
HXLINE(1251)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1251)				_g = (_g + 1);
HXLINE(1252)				child->addClass(name,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,addClass,(void))

void Component_obj::addClasses(::Array< ::String > names,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1265_addClasses)
HXLINE(1266)		bool needsInvalidate = false;
HXLINE(1267)		{
HXLINE(1267)			int _g = 0;
HXDLIN(1267)			while((_g < names->length)){
HXLINE(1267)				::String name = names->__get(_g);
HXDLIN(1267)				_g = (_g + 1);
HXLINE(1268)				if ((this->classes->indexOf(name,null()) == -1)) {
HXLINE(1269)					this->classes->push(name);
HXLINE(1270)					if ((invalidate == true)) {
HXLINE(1271)						needsInvalidate = true;
            					}
            				}
            			}
            		}
HXLINE(1276)		if ((needsInvalidate == true)) {
HXLINE(1277)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1277)			{
            			}
            		}
HXLINE(1280)		if ((recursive == true)) {
HXLINE(1281)			int _g = 0;
HXDLIN(1281)			::Array< ::Dynamic> _g1;
HXDLIN(1281)			if (::hx::IsNull( this->_children )) {
HXLINE(1281)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1281)				_g1 = this->_children;
            			}
HXDLIN(1281)			while((_g < _g1->length)){
HXLINE(1281)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1281)				_g = (_g + 1);
HXLINE(1282)				child->addClasses(names,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,addClasses,(void))

void Component_obj::removeClass(::String name,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1295_removeClass)
HXLINE(1296)		if ((this->classes->indexOf(name,null()) != -1)) {
HXLINE(1297)			this->classes->remove(name);
HXLINE(1298)			if ((invalidate == true)) {
HXLINE(1299)				this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1299)				{
            				}
            			}
            		}
HXLINE(1303)		bool _hx_tmp;
HXDLIN(1303)		if ((recursive != true)) {
HXLINE(1303)			if ((this->cascadeActive == true)) {
HXLINE(1303)				_hx_tmp = (name == HX_(":active",80,29,23,82));
            			}
            			else {
HXLINE(1303)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(1303)			_hx_tmp = true;
            		}
HXDLIN(1303)		if (_hx_tmp) {
HXLINE(1304)			int _g = 0;
HXDLIN(1304)			::Array< ::Dynamic> _g1;
HXDLIN(1304)			if (::hx::IsNull( this->_children )) {
HXLINE(1304)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1304)				_g1 = this->_children;
            			}
HXDLIN(1304)			while((_g < _g1->length)){
HXLINE(1304)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1304)				_g = (_g + 1);
HXLINE(1305)				child->removeClass(name,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,removeClass,(void))

void Component_obj::removeClasses(::Array< ::String > names,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1318_removeClasses)
HXLINE(1319)		bool needsInvalidate = false;
HXLINE(1320)		{
HXLINE(1320)			int _g = 0;
HXDLIN(1320)			while((_g < names->length)){
HXLINE(1320)				::String name = names->__get(_g);
HXDLIN(1320)				_g = (_g + 1);
HXLINE(1321)				if ((this->classes->indexOf(name,null()) != -1)) {
HXLINE(1322)					this->classes->remove(name);
HXLINE(1323)					if ((invalidate == true)) {
HXLINE(1324)						needsInvalidate = true;
            					}
            				}
            			}
            		}
HXLINE(1329)		if ((needsInvalidate == true)) {
HXLINE(1330)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1330)			{
            			}
            		}
HXLINE(1333)		if ((recursive == true)) {
HXLINE(1334)			int _g = 0;
HXDLIN(1334)			::Array< ::Dynamic> _g1;
HXDLIN(1334)			if (::hx::IsNull( this->_children )) {
HXLINE(1334)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1334)				_g1 = this->_children;
            			}
HXDLIN(1334)			while((_g < _g1->length)){
HXLINE(1334)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1334)				_g = (_g + 1);
HXLINE(1335)				child->removeClasses(names,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,removeClasses,(void))

bool Component_obj::hasClass(::String name){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1347_hasClass)
HXDLIN(1347)		return (this->classes->indexOf(name,null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,hasClass,return )

void Component_obj::swapClass(::String classToAdd,::String classToRemove,::hx::Null< bool >  __o_invalidate,::hx::Null< bool >  __o_recursive){
            		bool invalidate = __o_invalidate.Default(true);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1359_swapClass)
HXLINE(1360)		bool needsInvalidate = false;
HXLINE(1361)		bool _hx_tmp;
HXDLIN(1361)		if (::hx::IsNotNull( classToAdd )) {
HXLINE(1361)			_hx_tmp = (this->classes->indexOf(classToAdd,null()) == -1);
            		}
            		else {
HXLINE(1361)			_hx_tmp = false;
            		}
HXDLIN(1361)		if (_hx_tmp) {
HXLINE(1362)			this->classes->push(classToAdd);
HXLINE(1363)			needsInvalidate = true;
            		}
HXLINE(1366)		bool _hx_tmp1;
HXDLIN(1366)		if (::hx::IsNotNull( classToRemove )) {
HXLINE(1366)			_hx_tmp1 = (this->classes->indexOf(classToRemove,null()) != -1);
            		}
            		else {
HXLINE(1366)			_hx_tmp1 = false;
            		}
HXDLIN(1366)		if (_hx_tmp1) {
HXLINE(1367)			this->classes->remove(classToRemove);
HXLINE(1368)			needsInvalidate = true;
            		}
HXLINE(1371)		bool _hx_tmp2;
HXDLIN(1371)		if ((invalidate == true)) {
HXLINE(1371)			_hx_tmp2 = (needsInvalidate == true);
            		}
            		else {
HXLINE(1371)			_hx_tmp2 = false;
            		}
HXDLIN(1371)		if (_hx_tmp2) {
HXLINE(1372)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1372)			{
            			}
            		}
HXLINE(1375)		if ((recursive == true)) {
HXLINE(1376)			int _g = 0;
HXDLIN(1376)			::Array< ::Dynamic> _g1;
HXDLIN(1376)			if (::hx::IsNull( this->_children )) {
HXLINE(1376)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1376)				_g1 = this->_children;
            			}
HXDLIN(1376)			while((_g < _g1->length)){
HXLINE(1376)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1376)				_g = (_g + 1);
HXLINE(1377)				child->swapClass(classToAdd,classToRemove,invalidate,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Component_obj,swapClass,(void))

::String Component_obj::get_styleNames(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1390_get_styleNames)
HXDLIN(1390)		return this->_styleNames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_styleNames,return )

::String Component_obj::set_styleNames(::String value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1392_set_styleNames)
HXLINE(1393)		if ((value == this->_styleNames)) {
HXLINE(1394)			return value;
            		}
HXLINE(1397)		if (::hx::IsNull( value )) {
HXLINE(1398)			value = HX_("",00,00,00,00);
            		}
HXLINE(1401)		this->_styleNames = value;
HXLINE(1402)		::Array< ::String > newStyleNamesList = ::Array_obj< ::String >::__new(0);
HXLINE(1403)		::Array< ::String > classesToAdd = ::Array_obj< ::String >::__new(0);
HXLINE(1404)		bool requiresInvalidation = false;
HXLINE(1405)		{
HXLINE(1405)			int _g = 0;
HXDLIN(1405)			::Array< ::String > _g1 = value.split(HX_(" ",20,00,00,00));
HXDLIN(1405)			while((_g < _g1->length)){
HXLINE(1405)				::String x = _g1->__get(_g);
HXDLIN(1405)				_g = (_g + 1);
HXLINE(1406)				x = ::StringTools_obj::trim(x);
HXLINE(1407)				if ((x.length == 0)) {
HXLINE(1408)					continue;
            				}
HXLINE(1410)				newStyleNamesList->push(x);
HXLINE(1411)				if (::hx::IsNotNull( this->_styleNamesList )) {
HXLINE(1412)					if ((this->_styleNamesList->indexOf(x,null()) == -1)) {
HXLINE(1413)						classesToAdd->push(x);
HXLINE(1414)						requiresInvalidation = true;
            					}
            				}
            				else {
HXLINE(1417)					classesToAdd->push(x);
HXLINE(1418)					requiresInvalidation = true;
            				}
            			}
            		}
HXLINE(1422)		::Array< ::String > classesToRemove = ::Array_obj< ::String >::__new(0);
HXLINE(1423)		if (::hx::IsNotNull( this->_styleNamesList )) {
HXLINE(1424)			int _g = 0;
HXDLIN(1424)			::Array< ::String > _g1 = this->_styleNamesList;
HXDLIN(1424)			while((_g < _g1->length)){
HXLINE(1424)				::String x = _g1->__get(_g);
HXDLIN(1424)				_g = (_g + 1);
HXLINE(1425)				if ((newStyleNamesList->indexOf(x,null()) == -1)) {
HXLINE(1426)					classesToRemove->push(x);
HXLINE(1427)					requiresInvalidation = true;
            				}
            			}
            		}
HXLINE(1432)		this->_styleNamesList = newStyleNamesList;
HXLINE(1434)		if (requiresInvalidation) {
HXLINE(1435)			{
HXLINE(1435)				int _g = 0;
HXDLIN(1435)				while((_g < classesToAdd->length)){
HXLINE(1435)					::String x = classesToAdd->__get(_g);
HXDLIN(1435)					_g = (_g + 1);
HXLINE(1436)					this->addClass(x,false,false);
            				}
            			}
HXLINE(1438)			{
HXLINE(1438)				int _g1 = 0;
HXDLIN(1438)				while((_g1 < classesToRemove->length)){
HXLINE(1438)					::String x = classesToRemove->__get(_g1);
HXDLIN(1438)					_g1 = (_g1 + 1);
HXLINE(1439)					this->removeClass(x,false,false);
            				}
            			}
HXLINE(1442)			this->invalidateComponent(HX_("all",21,f9,49,00),true);
            		}
HXLINE(1445)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_styleNames,return )

::String Component_obj::get_styleString(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1456_get_styleString)
HXDLIN(1456)		return this->_styleString;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_styleString,return )

::String Component_obj::set_styleString(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1458_set_styleString)
HXLINE(1459)		bool _hx_tmp;
HXDLIN(1459)		if (::hx::IsNotNull( value )) {
HXLINE(1459)			_hx_tmp = (value == this->_styleString);
            		}
            		else {
HXLINE(1459)			_hx_tmp = true;
            		}
HXDLIN(1459)		if (_hx_tmp) {
HXLINE(1460)			return value;
            		}
HXLINE(1462)		::String cssString = ::StringTools_obj::trim(value);
HXLINE(1463)		if ((cssString.length == 0)) {
HXLINE(1464)			return value;
            		}
HXLINE(1466)		if ((::StringTools_obj::endsWith(cssString,HX_(";",3b,00,00,00)) == false)) {
HXLINE(1467)			cssString = (cssString + HX_(";",3b,00,00,00));
            		}
HXLINE(1469)		cssString = ((HX_("_ { ",66,f8,e3,3e) + cssString) + HX_("}",7d,00,00,00));
HXLINE(1470)		 ::haxe::ui::styles::StyleSheet s =  ::haxe::ui::styles::Parser_obj::__alloc( HX_CTX )->parse(cssString);
HXLINE(1471)		 ::haxe::ui::styles::Style _hx_tmp1 = this->get_customStyle();
HXDLIN(1471)		_hx_tmp1->mergeDirectives(s->get_rules()->__get(0).StaticCast<  ::haxe::ui::styles::elements::RuleElement >()->directives);
HXLINE(1473)		this->_styleString = value;
HXLINE(1474)		{
HXLINE(1474)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1474)			{
            			}
            		}
HXLINE(1475)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_styleString,return )

 ::haxe::ui::styles::StyleSheet Component_obj::get_styleSheet(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1484_get_styleSheet)
HXLINE(1485)		if ((this->_useCachedStyleSheetRef == true)) {
HXLINE(1486)			return this->_cachedStyleSheetRef;
            		}
HXLINE(1489)		 ::haxe::ui::styles::StyleSheet s = null();
HXLINE(1490)		 ::haxe::ui::core::Component ref = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1491)		while(::hx::IsNotNull( ref )){
HXLINE(1492)			if (::hx::IsNotNull( ref->_styleSheet )) {
HXLINE(1493)				s = ref->_styleSheet;
HXLINE(1494)				goto _hx_goto_97;
            			}
HXLINE(1496)			ref = ref->get_parentComponent();
            		}
            		_hx_goto_97:;
HXLINE(1499)		this->_useCachedStyleSheetRef = true;
HXLINE(1500)		this->_cachedStyleSheetRef = s;
HXLINE(1502)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_styleSheet,return )

 ::haxe::ui::styles::StyleSheet Component_obj::set_styleSheet( ::haxe::ui::styles::StyleSheet value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1504_set_styleSheet)
HXLINE(1505)		this->_styleSheet = value;
HXLINE(1506)		this->resetCachedStyleSheetRef();
HXLINE(1507)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_styleSheet,return )

void Component_obj::resetCachedStyleSheetRef(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1509_resetCachedStyleSheetRef)
HXLINE(1510)		this->_cachedStyleSheetRef = null();
HXLINE(1511)		this->_useCachedStyleSheetRef = false;
HXLINE(1512)		{
HXLINE(1512)			int _g = 0;
HXDLIN(1512)			::Array< ::Dynamic> _g1;
HXDLIN(1512)			if (::hx::IsNull( this->_children )) {
HXLINE(1512)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1512)				_g1 = this->_children;
            			}
HXDLIN(1512)			while((_g < _g1->length)){
HXLINE(1512)				 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1512)				_g = (_g + 1);
HXLINE(1513)				c->resetCachedStyleSheetRef();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,resetCachedStyleSheetRef,(void))

bool Component_obj::get_includeInLayout(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1528_get_includeInLayout)
HXLINE(1529)		if ((this->_hidden == true)) {
HXLINE(1530)			return false;
            		}
HXLINE(1532)		return this->_includeInLayout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_includeInLayout,return )

bool Component_obj::set_includeInLayout(bool value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1534_set_includeInLayout)
HXLINE(1535)		this->_includeInLayout = value;
HXLINE(1536)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_includeInLayout,return )

 ::haxe::ui::layouts::Layout Component_obj::get_layout(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1545_get_layout)
HXDLIN(1545)		return this->_layout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_layout,return )

 ::haxe::ui::layouts::Layout Component_obj::set_layout( ::haxe::ui::layouts::Layout value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1547_set_layout)
HXLINE(1548)		if (::hx::IsNull( value )) {
HXLINE(1550)			return value;
            		}
HXLINE(1553)		bool _hx_tmp;
HXDLIN(1553)		if (::hx::IsNotNull( this->_layout )) {
HXLINE(1553)			::String _hx_tmp1 = ::Type_obj::getClassName(::Type_obj::getClass(value));
HXDLIN(1553)			_hx_tmp = (_hx_tmp1 == ::Type_obj::getClassName(::Type_obj::getClass(this->_layout)));
            		}
            		else {
HXLINE(1553)			_hx_tmp = false;
            		}
HXDLIN(1553)		if (_hx_tmp) {
HXLINE(1554)			return value;
            		}
HXLINE(1557)		this->_layout = value;
HXLINE(1558)		this->_layout->set_component(::hx::ObjectPtr<OBJ_>(this));
HXLINE(1559)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_layout,return )

void Component_obj::lockLayout(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1562_lockLayout)
HXLINE(1563)		if ((this->_layoutLocked == true)) {
HXLINE(1564)			return;
            		}
HXLINE(1567)		this->_layoutLocked = true;
HXLINE(1568)		if ((recursive == true)) {
HXLINE(1569)			int _g = 0;
HXDLIN(1569)			::Array< ::Dynamic> _g1;
HXDLIN(1569)			if (::hx::IsNull( this->_children )) {
HXLINE(1569)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1569)				_g1 = this->_children;
            			}
HXDLIN(1569)			while((_g < _g1->length)){
HXLINE(1569)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1569)				_g = (_g + 1);
HXLINE(1570)				child->lockLayout(recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,lockLayout,(void))

void Component_obj::unlockLayout(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1575_unlockLayout)
HXLINE(1576)		if ((this->_layoutLocked == false)) {
HXLINE(1577)			return;
            		}
HXLINE(1580)		if ((recursive == true)) {
HXLINE(1581)			int _g = 0;
HXDLIN(1581)			::Array< ::Dynamic> _g1;
HXDLIN(1581)			if (::hx::IsNull( this->_children )) {
HXLINE(1581)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1581)				_g1 = this->_children;
            			}
HXDLIN(1581)			while((_g < _g1->length)){
HXLINE(1581)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1581)				_g = (_g + 1);
HXLINE(1582)				child->unlockLayout(recursive);
            			}
            		}
HXLINE(1586)		this->_layoutLocked = false;
HXLINE(1587)		{
HXLINE(1587)			bool _hx_tmp;
HXDLIN(1587)			if (::hx::IsNotNull( this->_layout )) {
HXLINE(1587)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE(1587)				_hx_tmp = true;
            			}
HXDLIN(1587)			if (!(_hx_tmp)) {
HXLINE(1587)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,unlockLayout,(void))

void Component_obj::ready(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1599_ready)
HXDLIN(1599)		 ::haxe::ui::core::Component _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1600)		this->set_depth(::haxe::ui::util::ComponentUtil_obj::getDepth(::hx::ObjectPtr<OBJ_>(this)));
HXLINE(1602)		if (this->isComponentInvalid(null())) {
HXLINE(1603)			this->_invalidateCount = 0;
HXLINE(1604)			::haxe::ui::validation::ValidationManager_obj::get_instance()->add(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(1607)		if ((this->_componentReady == false)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Component,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1621_ready)
HXLINE(1622)				_gthis->invalidateComponent(HX_("data",2a,56,63,42),false);
HXLINE(1623)				{
HXLINE(1623)					_gthis->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(1623)					{
            					}
            				}
HXLINE(1625)				if (::hx::IsNotNull( _gthis->_compositeBuilder )) {
HXLINE(1626)					_gthis->_compositeBuilder->onReady();
            				}
HXLINE(1629)				_gthis->onReady();
HXLINE(1631)				 ::haxe::ui::core::Component _gthis1 = _gthis;
HXDLIN(1631)				_gthis1->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::READY,null(),null()),null());
HXLINE(1632)				if ((_gthis->_hidden == false)) {
HXLINE(1633)					 ::haxe::ui::core::Component _gthis1 = _gthis;
HXDLIN(1633)					_gthis1->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::SHOWN,null(),null()),null());
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(1608)			this->_componentReady = true;
HXLINE(1609)			this->handleReady();
HXLINE(1611)			::Array< ::Dynamic> _hx_tmp;
HXDLIN(1611)			if (::hx::IsNull( this->_children )) {
HXLINE(1611)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1611)				_hx_tmp = this->_children;
            			}
HXDLIN(1611)			if (::hx::IsNotNull( _hx_tmp )) {
HXLINE(1612)				int _g = 0;
HXDLIN(1612)				::Array< ::Dynamic> _g1;
HXDLIN(1612)				if (::hx::IsNull( this->_children )) {
HXLINE(1612)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE(1612)					_g1 = this->_children;
            				}
HXDLIN(1612)				while((_g < _g1->length)){
HXLINE(1612)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1612)					_g = (_g + 1);
HXLINE(1613)					child->ready();
            				}
            			}
HXLINE(1617)			this->invalidateComponent(null(),null());
HXLINE(1619)			this->behaviours->ready();
HXLINE(1620)			this->behaviours->update();
HXLINE(1621)			::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(_gthis)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,ready,(void))

void Component_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1639_onReady)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onReady,(void))

void Component_obj::onInitialize(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1642_onInitialize)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onInitialize,(void))

void Component_obj::onResized(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1646_onResized)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onResized,(void))

void Component_obj::onMoved(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1650_onMoved)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onMoved,(void))

bool Component_obj::get_scriptAccess(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1699_get_scriptAccess)
HXDLIN(1699)		return this->_scriptAccess;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_scriptAccess,return )

bool Component_obj::set_scriptAccess(bool value){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1701_set_scriptAccess)
HXLINE(1702)		if ((value == this->_scriptAccess)) {
HXLINE(1703)			return value;
            		}
HXLINE(1706)		this->_scriptAccess = value;
HXLINE(1707)		{
HXLINE(1707)			int _g = 0;
HXDLIN(1707)			::Array< ::Dynamic> _g1;
HXDLIN(1707)			if (::hx::IsNull( this->_children )) {
HXLINE(1707)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1707)				_g1 = this->_children;
            			}
HXDLIN(1707)			while((_g < _g1->length)){
HXLINE(1707)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1707)				_g = (_g + 1);
HXLINE(1708)				child->set_scriptAccess(value);
            			}
            		}
HXLINE(1711)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_scriptAccess,return )

::Array< ::Dynamic> Component_obj::get_namedComponents(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1716_get_namedComponents)
HXLINE(1717)		::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1718)		::haxe::ui::core::Component_obj::addNamedComponentsFrom(::hx::ObjectPtr<OBJ_>(this),list);
HXLINE(1719)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_namedComponents,return )

 ::haxe::ds::StringMap Component_obj::get_namedComponentsMap(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1723_get_namedComponentsMap)
HXLINE(1724)		 ::haxe::ds::StringMap map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(1725)		{
HXLINE(1725)			int _g = 0;
HXDLIN(1725)			::Array< ::Dynamic> _g1 = this->get_namedComponents();
HXDLIN(1725)			while((_g < _g1->length)){
HXLINE(1725)				 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1725)				_g = (_g + 1);
HXLINE(1726)				map->set(c->get_id(),c);
            			}
            		}
HXLINE(1728)		return map;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_namedComponentsMap,return )

void Component_obj::onThemeChanged(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1800_onThemeChanged)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onThemeChanged,(void))

void Component_obj::initializeComponent(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1820_initializeComponent)
HXLINE(1821)		if ((this->_isInitialized == true)) {
HXLINE(1822)			return;
            		}
HXLINE(1825)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1826)			this->_compositeBuilder->onInitialize();
            		}
HXLINE(1829)		this->onInitialize();
HXLINE(1831)		if (::hx::IsNull( this->_layout )) {
HXLINE(1832)			this->set_layout(this->createLayout());
            		}
HXLINE(1835)		this->_isInitialized = true;
HXLINE(1837)		if (this->hasEvent(::haxe::ui::events::UIEvent_obj::INITIALIZE,null())) {
HXLINE(1838)			this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::INITIALIZE,null(),null()),null());
            		}
            	}


void Component_obj::validateInitialSize(bool isInitialized){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1844_validateInitialSize)
HXDLIN(1844)		bool _hx_tmp;
HXDLIN(1844)		bool _hx_tmp1;
HXDLIN(1844)		if ((isInitialized == false)) {
HXDLIN(1844)			_hx_tmp1 = ::hx::IsNotNull( this->_style );
            		}
            		else {
HXDLIN(1844)			_hx_tmp1 = false;
            		}
HXDLIN(1844)		if (_hx_tmp1) {
HXDLIN(1844)			_hx_tmp = (this->_initialSizeApplied == false);
            		}
            		else {
HXDLIN(1844)			_hx_tmp = false;
            		}
HXDLIN(1844)		if (_hx_tmp) {
HXLINE(1845)			bool _hx_tmp;
HXDLIN(1845)			bool _hx_tmp1;
HXDLIN(1845)			if (::hx::IsNull( this->_style->initialWidth )) {
HXLINE(1845)				_hx_tmp1 = ::hx::IsNotNull( this->_style->initialPercentWidth );
            			}
            			else {
HXLINE(1845)				_hx_tmp1 = true;
            			}
HXDLIN(1845)			if (_hx_tmp1) {
HXLINE(1845)				if ((this->get_width() <= 0)) {
HXLINE(1845)					_hx_tmp = ::hx::IsNull( this->get_percentWidth() );
            				}
            				else {
HXLINE(1845)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(1845)				_hx_tmp = false;
            			}
HXDLIN(1845)			if (_hx_tmp) {
HXLINE(1846)				if (::hx::IsNotNull( this->_style->initialWidth )) {
HXLINE(1847)					this->set_width(( (Float)(this->_style->initialWidth) ));
HXLINE(1848)					this->_initialSizeApplied = true;
            				}
            				else {
HXLINE(1849)					if (::hx::IsNotNull( this->_style->initialPercentWidth )) {
HXLINE(1850)						this->set_percentWidth(this->_style->initialPercentWidth);
HXLINE(1851)						this->_initialSizeApplied = true;
            					}
            				}
            			}
HXLINE(1855)			bool _hx_tmp2;
HXDLIN(1855)			bool _hx_tmp3;
HXDLIN(1855)			if (::hx::IsNull( this->_style->initialHeight )) {
HXLINE(1855)				_hx_tmp3 = ::hx::IsNotNull( this->_style->initialPercentHeight );
            			}
            			else {
HXLINE(1855)				_hx_tmp3 = true;
            			}
HXDLIN(1855)			if (_hx_tmp3) {
HXLINE(1855)				if ((this->get_height() <= 0)) {
HXLINE(1855)					_hx_tmp2 = ::hx::IsNull( this->get_percentHeight() );
            				}
            				else {
HXLINE(1855)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE(1855)				_hx_tmp2 = false;
            			}
HXDLIN(1855)			if (_hx_tmp2) {
HXLINE(1856)				if (::hx::IsNotNull( this->_style->initialHeight )) {
HXLINE(1857)					this->set_height(( (Float)(this->_style->initialHeight) ));
HXLINE(1858)					this->_initialSizeApplied = true;
            				}
            				else {
HXLINE(1859)					if (::hx::IsNotNull( this->_style->initialPercentHeight )) {
HXLINE(1860)						this->set_percentHeight(this->_style->initialPercentHeight);
HXLINE(1861)						this->_initialSizeApplied = true;
            					}
            				}
            			}
            		}
            	}


void Component_obj::validateComponentData(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1867_validateComponentData)
HXLINE(1868)		this->behaviours->validateData();
HXLINE(1870)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1871)			this->_compositeBuilder->validateComponentData();
            		}
            	}


bool Component_obj::validateComponentLayout(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1878_validateComponentLayout)
HXLINE(1879)		this->get_layout()->refresh();
HXLINE(1882)		while(this->validateComponentAutoSize()){
HXLINE(1883)			this->get_layout()->refresh();
            		}
HXLINE(1886)		bool sizeChanged = false;
HXLINE(1887)		bool _hx_tmp;
HXDLIN(1887)		if (::hx::IsEq( this->_componentWidth,this->_actualWidth )) {
HXLINE(1887)			_hx_tmp = ::hx::IsNotEq( this->_componentHeight,this->_actualHeight );
            		}
            		else {
HXLINE(1887)			_hx_tmp = true;
            		}
HXDLIN(1887)		if (_hx_tmp) {
HXLINE(1888)			this->_actualWidth = this->_componentWidth;
HXLINE(1889)			this->_actualHeight = this->_componentHeight;
HXLINE(1891)			this->enforceSizeConstraints();
HXLINE(1893)			if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE(1894)				 ::haxe::ui::core::Component _this = this->get_parentComponent();
HXDLIN(1894)				bool _hx_tmp;
HXDLIN(1894)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1894)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1894)					_hx_tmp = true;
            				}
HXDLIN(1894)				if (!(_hx_tmp)) {
HXLINE(1894)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1897)			this->onResized();
HXLINE(1899)			this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::RESIZE,null(),null()),null());
HXLINE(1902)			sizeChanged = true;
            		}
HXLINE(1905)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(1906)			if (this->_compositeBuilder->validateComponentLayout()) {
HXLINE(1906)				sizeChanged = true;
            			}
            		}
HXLINE(1909)		return sizeChanged;
            	}


void Component_obj::enforceSizeConstraints(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1913_enforceSizeConstraints)
HXDLIN(1913)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE(1915)			bool _hx_tmp;
HXDLIN(1915)			if (::hx::IsNotNull( this->get_style()->minWidth )) {
HXLINE(1915)				 ::Dynamic _hx_tmp1 = this->_componentWidth;
HXDLIN(1915)				_hx_tmp = ::hx::IsLess( _hx_tmp1,this->get_style()->minWidth );
            			}
            			else {
HXLINE(1915)				_hx_tmp = false;
            			}
HXDLIN(1915)			if (_hx_tmp) {
HXLINE(1916)				this->_componentWidth = (this->_actualWidth = (this->_width = this->get_style()->minWidth));
            			}
HXLINE(1920)			bool _hx_tmp1;
HXDLIN(1920)			bool _hx_tmp2;
HXDLIN(1920)			if (::hx::IsNotNull( this->get_style()->maxWidth )) {
HXLINE(1920)				_hx_tmp2 = ::hx::IsNull( this->get_style()->maxPercentWidth );
            			}
            			else {
HXLINE(1920)				_hx_tmp2 = false;
            			}
HXDLIN(1920)			if (_hx_tmp2) {
HXLINE(1920)				 ::Dynamic _hx_tmp = this->_componentWidth;
HXDLIN(1920)				_hx_tmp1 = ::hx::IsGreater( _hx_tmp,this->get_style()->maxWidth );
            			}
            			else {
HXLINE(1920)				_hx_tmp1 = false;
            			}
HXDLIN(1920)			if (_hx_tmp1) {
HXLINE(1921)				this->_componentWidth = (this->_actualWidth = (this->_width = this->get_style()->maxWidth));
            			}
            			else {
HXLINE(1922)				bool _hx_tmp;
HXDLIN(1922)				if (::hx::IsNull( this->get_style()->maxWidth )) {
HXLINE(1922)					_hx_tmp = ::hx::IsNotNull( this->get_style()->maxPercentWidth );
            				}
            				else {
HXLINE(1922)					_hx_tmp = false;
            				}
HXDLIN(1922)				if (_hx_tmp) {
HXLINE(1923)					 ::haxe::ui::core::Component p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1924)					Float max = ( (Float)(0) );
HXLINE(1925)					while(::hx::IsNotNull( p )){
HXLINE(1926)						bool _hx_tmp;
HXDLIN(1926)						if (::hx::IsNotNull( p->get_style() )) {
HXLINE(1926)							_hx_tmp = ::hx::IsNull( p->get_style()->maxPercentWidth );
            						}
            						else {
HXLINE(1926)							_hx_tmp = false;
            						}
HXDLIN(1926)						if (_hx_tmp) {
HXLINE(1927)							max = (max + p->get_width());
HXLINE(1928)							goto _hx_goto_129;
            						}
HXLINE(1930)						bool _hx_tmp1;
HXDLIN(1930)						if (::hx::IsNotNull( p->get_style() )) {
HXLINE(1930)							_hx_tmp1 = ::hx::IsInstanceNotEq( p,::hx::ObjectPtr<OBJ_>(this) );
            						}
            						else {
HXLINE(1930)							_hx_tmp1 = false;
            						}
HXDLIN(1930)						if (_hx_tmp1) {
HXLINE(1931)							 ::Dynamic max1 = p->get_style()->paddingLeft;
HXDLIN(1931)							max = (max - (max1 + p->get_style()->paddingRight));
            						}
HXLINE(1933)						p = p->get_parentComponent();
            					}
            					_hx_goto_129:;
HXLINE(1935)					max = ((max * ( (Float)(this->get_style()->maxPercentWidth) )) / ( (Float)(100) ));
HXLINE(1936)					bool _hx_tmp;
HXDLIN(1936)					if ((max > 0)) {
HXLINE(1936)						_hx_tmp = ::hx::IsGreater( this->_componentWidth,max );
            					}
            					else {
HXLINE(1936)						_hx_tmp = false;
            					}
HXDLIN(1936)					if (_hx_tmp) {
HXLINE(1937)						this->_componentWidth = (this->_actualWidth = (this->_width = max));
            					}
            				}
            			}
HXLINE(1942)			bool _hx_tmp3;
HXDLIN(1942)			if (::hx::IsNotNull( this->get_style()->minHeight )) {
HXLINE(1942)				 ::Dynamic _hx_tmp = this->_componentHeight;
HXDLIN(1942)				_hx_tmp3 = ::hx::IsLess( _hx_tmp,this->get_style()->minHeight );
            			}
            			else {
HXLINE(1942)				_hx_tmp3 = false;
            			}
HXDLIN(1942)			if (_hx_tmp3) {
HXLINE(1943)				this->_componentHeight = (this->_actualHeight = (this->_height = this->get_style()->minHeight));
            			}
HXLINE(1947)			bool _hx_tmp4;
HXDLIN(1947)			bool _hx_tmp5;
HXDLIN(1947)			if (::hx::IsNotNull( this->get_style()->maxHeight )) {
HXLINE(1947)				_hx_tmp5 = ::hx::IsNull( this->get_style()->maxPercentHeight );
            			}
            			else {
HXLINE(1947)				_hx_tmp5 = false;
            			}
HXDLIN(1947)			if (_hx_tmp5) {
HXLINE(1947)				 ::Dynamic _hx_tmp = this->_componentHeight;
HXDLIN(1947)				_hx_tmp4 = ::hx::IsGreater( _hx_tmp,this->get_style()->maxHeight );
            			}
            			else {
HXLINE(1947)				_hx_tmp4 = false;
            			}
HXDLIN(1947)			if (_hx_tmp4) {
HXLINE(1948)				this->_componentHeight = (this->_actualHeight = (this->_height = this->get_style()->maxHeight));
            			}
            			else {
HXLINE(1949)				bool _hx_tmp;
HXDLIN(1949)				if (::hx::IsNull( this->get_style()->maxHeight )) {
HXLINE(1949)					_hx_tmp = ::hx::IsNotNull( this->get_style()->maxPercentHeight );
            				}
            				else {
HXLINE(1949)					_hx_tmp = false;
            				}
HXDLIN(1949)				if (_hx_tmp) {
HXLINE(1950)					 ::haxe::ui::core::Component p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1951)					Float max = ( (Float)(0) );
HXLINE(1952)					while(::hx::IsNotNull( p )){
HXLINE(1953)						bool _hx_tmp;
HXDLIN(1953)						if (::hx::IsNotNull( p->get_style() )) {
HXLINE(1953)							_hx_tmp = ::hx::IsNull( p->get_style()->maxPercentHeight );
            						}
            						else {
HXLINE(1953)							_hx_tmp = false;
            						}
HXDLIN(1953)						if (_hx_tmp) {
HXLINE(1954)							max = (max + p->get_height());
HXLINE(1955)							goto _hx_goto_130;
            						}
HXLINE(1957)						bool _hx_tmp1;
HXDLIN(1957)						if (::hx::IsNotNull( p->get_style() )) {
HXLINE(1957)							_hx_tmp1 = ::hx::IsInstanceNotEq( p,::hx::ObjectPtr<OBJ_>(this) );
            						}
            						else {
HXLINE(1957)							_hx_tmp1 = false;
            						}
HXDLIN(1957)						if (_hx_tmp1) {
HXLINE(1958)							 ::Dynamic max1 = p->get_style()->paddingTop;
HXDLIN(1958)							max = (max - (max1 + p->get_style()->paddingBottom));
            						}
HXLINE(1960)						p = p->get_parentComponent();
            					}
            					_hx_goto_130:;
HXLINE(1962)					max = ((max * ( (Float)(this->get_style()->maxPercentHeight) )) / ( (Float)(100) ));
HXLINE(1963)					bool _hx_tmp;
HXDLIN(1963)					if ((max > 0)) {
HXLINE(1963)						_hx_tmp = ::hx::IsGreater( this->_componentHeight,max );
            					}
            					else {
HXLINE(1963)						_hx_tmp = false;
            					}
HXDLIN(1963)					if (_hx_tmp) {
HXLINE(1964)						this->_componentHeight = (this->_actualHeight = (this->_height = max));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,enforceSizeConstraints,(void))

void Component_obj::validateComponentStyle(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1970_validateComponentStyle)
HXLINE(1971)		 ::haxe::ui::styles::Style s = ::haxe::ui::Toolkit_obj::styleSheet->buildStyleFor(::hx::ObjectPtr<OBJ_>(this));
HXLINE(1972)		if (::hx::IsNotNull( this->get_styleSheet() )) {
HXLINE(1973)			 ::haxe::ui::styles::Style localStyle = this->get_styleSheet()->buildStyleFor(::hx::ObjectPtr<OBJ_>(this),null());
HXLINE(1974)			s->apply(localStyle);
            		}
HXLINE(1976)		s->apply(this->get_customStyle());
HXLINE(1978)		bool _hx_tmp;
HXDLIN(1978)		if (::hx::IsNotNull( this->_style )) {
HXLINE(1978)			_hx_tmp = (this->_style->equalTo(s) == false);
            		}
            		else {
HXLINE(1978)			_hx_tmp = true;
            		}
HXDLIN(1978)		if (_hx_tmp) {
HXLINE(1980)			bool marginsChanged = false;
HXLINE(1981)			bool _hx_tmp;
HXDLIN(1981)			if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE(1981)				_hx_tmp = ::hx::IsNotNull( this->_style );
            			}
            			else {
HXLINE(1981)				_hx_tmp = false;
            			}
HXDLIN(1981)			if (_hx_tmp) {
HXLINE(1982)				bool marginsChanged1;
HXDLIN(1982)				bool marginsChanged2;
HXDLIN(1982)				if (::hx::IsEq( this->_style->marginLeft,s->marginLeft )) {
HXLINE(1982)					marginsChanged2 = ::hx::IsNotEq( this->_style->marginRight,s->marginRight );
            				}
            				else {
HXLINE(1982)					marginsChanged2 = true;
            				}
HXDLIN(1982)				if (!(marginsChanged2)) {
HXLINE(1982)					marginsChanged1 = ::hx::IsNotEq( this->_style->marginTop,s->marginTop );
            				}
            				else {
HXLINE(1982)					marginsChanged1 = true;
            				}
HXDLIN(1982)				if (!(marginsChanged1)) {
HXLINE(1982)					marginsChanged = ::hx::IsNotEq( this->_style->marginBottom,s->marginBottom );
            				}
            				else {
HXLINE(1982)					marginsChanged = true;
            				}
            			}
HXLINE(1984)			bool bordersChanged = false;
HXLINE(1985)			bool _hx_tmp1;
HXDLIN(1985)			if (::hx::IsNotNull( this->_style )) {
HXLINE(1985)				 ::Dynamic _hx_tmp = this->_style->get_fullBorderSize();
HXDLIN(1985)				_hx_tmp1 = ::hx::IsNotEq( _hx_tmp,s->get_fullBorderSize() );
            			}
            			else {
HXLINE(1985)				_hx_tmp1 = false;
            			}
HXDLIN(1985)			if (_hx_tmp1) {
HXLINE(1986)				bordersChanged = true;
            			}
HXLINE(1989)			this->_style = s;
HXLINE(1990)			this->applyStyle(s);
HXLINE(1991)			if ((bordersChanged == true)) {
HXLINE(1992)				bool _hx_tmp;
HXDLIN(1992)				if (::hx::IsNotNull( this->_layout )) {
HXLINE(1992)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE(1992)					_hx_tmp = true;
            				}
HXDLIN(1992)				if (!(_hx_tmp)) {
HXLINE(1992)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(1994)			if ((marginsChanged == true)) {
HXLINE(1995)				 ::haxe::ui::core::Component _this = this->get_parentComponent();
HXDLIN(1995)				bool _hx_tmp;
HXDLIN(1995)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(1995)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(1995)					_hx_tmp = true;
            				}
HXDLIN(1995)				if (!(_hx_tmp)) {
HXLINE(1995)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
            		}
            	}


void Component_obj::validateComponentPosition(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2000_validateComponentPosition)
HXLINE(2001)		this->handlePosition(this->_left,this->_top,this->_style);
HXLINE(2003)		this->onMoved();
HXLINE(2004)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::MOVE,null(),null()),null());
            	}


void Component_obj::updateComponentDisplay(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2008_updateComponentDisplay)
HXLINE(2009)		bool _hx_tmp;
HXDLIN(2009)		if (::hx::IsNotNull( this->get_componentWidth() )) {
HXLINE(2009)			_hx_tmp = ::hx::IsNull( this->get_componentHeight() );
            		}
            		else {
HXLINE(2009)			_hx_tmp = true;
            		}
HXDLIN(2009)		if (_hx_tmp) {
HXLINE(2010)			return;
            		}
HXLINE(2013)		 ::Dynamic _hx_tmp1 = this->get_componentWidth();
HXDLIN(2013)		 ::Dynamic _hx_tmp2 = this->get_componentHeight();
HXDLIN(2013)		this->handleSize(_hx_tmp1,_hx_tmp2,this->_style);
HXLINE(2019)		bool _hx_tmp3;
HXDLIN(2019)		if (::hx::IsNull( this->_componentClipRect )) {
HXLINE(2020)			bool _hx_tmp;
HXDLIN(2020)			if (::hx::IsNotNull( this->get_style() )) {
HXLINE(2020)				_hx_tmp = ::hx::IsNotNull( this->get_style()->clip );
            			}
            			else {
HXLINE(2020)				_hx_tmp = false;
            			}
HXDLIN(2020)			if (_hx_tmp) {
HXLINE(2019)				_hx_tmp3 = ::hx::IsEq( this->get_style()->clip,true );
            			}
            			else {
HXLINE(2019)				_hx_tmp3 = false;
            			}
            		}
            		else {
HXLINE(2019)			_hx_tmp3 = true;
            		}
HXDLIN(2019)		if (_hx_tmp3) {
HXLINE(2021)			 ::haxe::ui::geom::Rectangle _hx_tmp;
HXDLIN(2021)			if (::hx::IsNotNull( this->_componentClipRect )) {
HXLINE(2021)				_hx_tmp = this->_componentClipRect;
            			}
            			else {
HXLINE(2021)				 ::Dynamic _hx_tmp1 = this->get_componentWidth();
HXDLIN(2021)				_hx_tmp =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,_hx_tmp1,this->get_componentHeight());
            			}
HXDLIN(2021)			this->handleClipRect(_hx_tmp);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,updateComponentDisplay,(void))

bool Component_obj::validateComponentAutoSize(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2028_validateComponentAutoSize)
HXLINE(2029)		bool invalidate = false;
HXLINE(2030)		bool _hx_tmp;
HXDLIN(2030)		if ((this->get_autoWidth() != true)) {
HXLINE(2030)			_hx_tmp = (this->get_autoHeight() == true);
            		}
            		else {
HXLINE(2030)			_hx_tmp = true;
            		}
HXDLIN(2030)		if (_hx_tmp) {
HXLINE(2031)			 ::haxe::ui::geom::Size s = this->get_layout()->calcAutoSize(null());
HXLINE(2032)			if ((this->get_autoWidth() == true)) {
HXLINE(2033)				if (::hx::IsNotEq( s->width,this->_componentWidth )) {
HXLINE(2034)					this->_componentWidth = s->width;
HXLINE(2035)					invalidate = true;
            				}
            			}
HXLINE(2038)			if ((this->get_autoHeight() == true)) {
HXLINE(2039)				if (::hx::IsNotEq( s->height,this->_componentHeight )) {
HXLINE(2040)					this->_componentHeight = s->height;
HXLINE(2041)					invalidate = true;
            				}
            			}
            		}
HXLINE(2046)		return invalidate;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,validateComponentAutoSize,return )

void Component_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2051_applyStyle)
HXLINE(2052)		this->super::applyStyle(style);
HXLINE(2054)		bool _hx_tmp;
HXDLIN(2054)		if (::hx::IsNotNull( style )) {
HXLINE(2054)			_hx_tmp = (this->_initialSizeApplied == false);
            		}
            		else {
HXLINE(2054)			_hx_tmp = false;
            		}
HXDLIN(2054)		if (_hx_tmp) {
HXLINE(2055)			bool _hx_tmp;
HXDLIN(2055)			bool _hx_tmp1;
HXDLIN(2055)			if (::hx::IsNull( style->initialWidth )) {
HXLINE(2055)				_hx_tmp1 = ::hx::IsNotNull( style->initialPercentWidth );
            			}
            			else {
HXLINE(2055)				_hx_tmp1 = true;
            			}
HXDLIN(2055)			if (_hx_tmp1) {
HXLINE(2055)				if ((this->get_width() <= 0)) {
HXLINE(2055)					_hx_tmp = ::hx::IsNull( this->get_percentWidth() );
            				}
            				else {
HXLINE(2055)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(2055)				_hx_tmp = false;
            			}
HXDLIN(2055)			if (_hx_tmp) {
HXLINE(2056)				if (::hx::IsNotNull( style->initialWidth )) {
HXLINE(2057)					this->set_width(( (Float)(style->initialWidth) ));
HXLINE(2058)					this->_initialSizeApplied = true;
            				}
            				else {
HXLINE(2059)					if (::hx::IsNotNull( style->initialPercentWidth )) {
HXLINE(2060)						this->set_percentWidth(style->initialPercentWidth);
HXLINE(2061)						this->_initialSizeApplied = true;
            					}
            				}
            			}
HXLINE(2065)			bool _hx_tmp2;
HXDLIN(2065)			bool _hx_tmp3;
HXDLIN(2065)			if (::hx::IsNull( style->initialHeight )) {
HXLINE(2065)				_hx_tmp3 = ::hx::IsNotNull( style->initialPercentHeight );
            			}
            			else {
HXLINE(2065)				_hx_tmp3 = true;
            			}
HXDLIN(2065)			if (_hx_tmp3) {
HXLINE(2065)				if ((this->get_height() <= 0)) {
HXLINE(2065)					_hx_tmp2 = ::hx::IsNull( this->get_percentHeight() );
            				}
            				else {
HXLINE(2065)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE(2065)				_hx_tmp2 = false;
            			}
HXDLIN(2065)			if (_hx_tmp2) {
HXLINE(2066)				if (::hx::IsNotNull( style->initialHeight )) {
HXLINE(2067)					this->set_height(( (Float)(style->initialHeight) ));
HXLINE(2068)					this->_initialSizeApplied = true;
            				}
            				else {
HXLINE(2069)					if (::hx::IsNotNull( style->initialPercentHeight )) {
HXLINE(2070)						this->set_percentHeight(style->initialPercentHeight);
HXLINE(2071)						this->_initialSizeApplied = true;
            					}
            				}
            			}
            		}
HXLINE(2076)		if (::hx::IsNotNull( style->left )) {
HXLINE(2077)			this->set_left(style->left);
            		}
HXLINE(2079)		if (::hx::IsNotNull( style->top )) {
HXLINE(2080)			this->set_top(style->top);
            		}
HXLINE(2083)		if (::hx::IsNotNull( style->percentWidth )) {
HXLINE(2084)			this->_width = null();
HXLINE(2085)			this->set_componentWidth(null());
HXLINE(2086)			this->set_percentWidth(style->percentWidth);
            		}
HXLINE(2088)		if (::hx::IsNotNull( style->percentHeight )) {
HXLINE(2089)			this->_height = null();
HXLINE(2090)			this->set_componentHeight(null());
HXLINE(2091)			this->set_percentHeight(style->percentHeight);
            		}
HXLINE(2093)		if (::hx::IsNotNull( style->width )) {
HXLINE(2094)			this->set_percentWidth(null());
HXLINE(2095)			this->set_width(( (Float)(style->width) ));
            		}
HXLINE(2097)		if (::hx::IsNotNull( style->height )) {
HXLINE(2098)			this->set_percentHeight(null());
HXLINE(2099)			this->set_height(( (Float)(style->height) ));
            		}
HXLINE(2102)		if (::hx::IsNotNull( style->native )) {
HXLINE(2103)			this->set_native(style->native);
            		}
HXLINE(2106)		if (::hx::IsNotNull( style->hidden )) {
HXLINE(2107)			this->set_hidden(( (bool)(style->hidden) ));
            		}
HXLINE(2110)		if ((this->_pauseAnimationStyleChanges == false)) {
HXLINE(2111)			if (::hx::IsNotNull( style->animationName )) {
HXLINE(2112)				::Dynamic this1 = ::haxe::ui::Toolkit_obj::styleSheet->get_animations();
HXDLIN(2112)				 ::haxe::ui::styles::elements::AnimationKeyFrames animationKeyFrames = ( ( ::haxe::ui::styles::elements::AnimationKeyFrames)(( ( ::haxe::ds::StringMap)(this1) )->get(style->animationName)) );
HXLINE(2113)				this->applyAnimationKeyFrame(animationKeyFrames,style->animationOptions);
            			}
            			else {
HXLINE(2114)				if (::hx::IsNotNull( this->get_componentAnimation() )) {
HXLINE(2115)					this->set_componentAnimation(null());
            				}
            			}
            		}
HXLINE(2119)		bool _hx_tmp1;
HXDLIN(2119)		if (::hx::IsNotNull( style->pointerEvents )) {
HXLINE(2119)			_hx_tmp1 = (style->pointerEvents != HX_("none",b8,12,0a,49));
            		}
            		else {
HXLINE(2119)			_hx_tmp1 = false;
            		}
HXDLIN(2119)		if (_hx_tmp1) {
HXLINE(2120)			if ((this->hasEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OVER,this->onPointerEventsMouseOver_dyn()) == false)) {
HXLINE(2121)				if (::hx::IsNull( style->cursor )) {
HXLINE(2122)					this->get_customStyle()->cursor = HX_("pointer",bd,c0,21,51);
            				}
HXLINE(2124)				this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OVER,this->onPointerEventsMouseOver_dyn(),null());
            			}
HXLINE(2126)			if ((this->hasEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT,this->onPointerEventsMouseOut_dyn()) == false)) {
HXLINE(2127)				this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT,this->onPointerEventsMouseOut_dyn(),null());
            			}
HXLINE(2129)			if ((this->hasEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN,this->onPointerEventsMouseDown_dyn()) == false)) {
HXLINE(2130)				this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN,this->onPointerEventsMouseDown_dyn(),null());
            			}
HXLINE(2132)			if ((this->hasEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_UP,this->onPointerEventsMouseUp_dyn()) == false)) {
HXLINE(2133)				this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_UP,this->onPointerEventsMouseUp_dyn(),null());
            			}
HXLINE(2135)			this->handleFrameworkProperty(HX_("allowMouseInteraction",56,34,ef,e0),true);
            		}
            		else {
HXLINE(2136)			if (::hx::IsNotNull( style->pointerEvents )) {
HXLINE(2137)				if ((this->hasEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OVER,this->onPointerEventsMouseOver_dyn()) == true)) {
HXLINE(2138)					this->get_customStyle()->cursor = null();
HXLINE(2139)					this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OVER,this->onPointerEventsMouseOver_dyn());
            				}
HXLINE(2141)				if ((this->hasEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT,this->onPointerEventsMouseOut_dyn()) == true)) {
HXLINE(2142)					this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT,this->onPointerEventsMouseOut_dyn());
            				}
HXLINE(2144)				if ((this->hasEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN,this->onPointerEventsMouseDown_dyn()) == true)) {
HXLINE(2145)					this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN,this->onPointerEventsMouseDown_dyn());
            				}
HXLINE(2147)				if ((this->hasEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_UP,this->onPointerEventsMouseUp_dyn()) == true)) {
HXLINE(2148)					this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_UP,this->onPointerEventsMouseUp_dyn());
            				}
HXLINE(2150)				this->handleFrameworkProperty(HX_("allowMouseInteraction",56,34,ef,e0),false);
            			}
            		}
HXLINE(2153)		if (::hx::IsNotNull( style->includeInLayout )) {
HXLINE(2154)			this->set_includeInLayout(( (bool)(style->includeInLayout) ));
            		}
HXLINE(2157)		if (::hx::IsNotNull( style->customDirectives )) {
HXLINE(2158)			 ::Dynamic directive = style->customDirectives->keys();
HXDLIN(2158)			while(( (bool)(directive->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(2158)				::String directive1 = ( (::String)(directive->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(2159)				if (::haxe::ui::styles::DirectiveHandler_obj::_directiveHandlers->exists(directive1)) {
HXLINE(2160)					 ::haxe::ui::styles::DirectiveHandler instance = ( ( ::haxe::ui::styles::DirectiveHandler)(::haxe::ui::styles::DirectiveHandler_obj::_directiveHandlerInstances->get(directive1)) );
HXDLIN(2160)					 ::haxe::ui::styles::DirectiveHandler handler;
HXDLIN(2160)					if (::hx::IsNotNull( instance )) {
HXLINE(2160)						handler = instance;
            					}
            					else {
HXLINE(2160)						 ::Dynamic ctor = ::haxe::ui::styles::DirectiveHandler_obj::_directiveHandlers->get(directive1);
HXDLIN(2160)						if (::hx::IsNull( ctor )) {
HXLINE(2160)							handler = null();
            						}
            						else {
HXLINE(2160)							instance = ( ( ::haxe::ui::styles::DirectiveHandler)(ctor()) );
HXDLIN(2160)							::haxe::ui::styles::DirectiveHandler_obj::_directiveHandlerInstances->set(directive1,instance);
HXDLIN(2160)							handler = instance;
            						}
            					}
HXDLIN(2160)					 ::haxe::ui::styles::DirectiveHandler handler1 = handler;
HXLINE(2161)					if (::hx::IsNotNull( handler1 )) {
HXLINE(2162)						handler1->apply(::hx::ObjectPtr<OBJ_>(this),( ( ::haxe::ui::styles::elements::Directive)(style->customDirectives->get(directive1)) ));
            					}
            				}
            			}
            		}
HXLINE(2168)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(2169)			this->_compositeBuilder->applyStyle(style);
            		}
            	}


void Component_obj::onPointerEventsMouseOver( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2175_onPointerEventsMouseOver)
HXDLIN(2175)		this->addClass(HX_(":hover",42,d3,17,5c),true,this->recursivePointerEvents);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onPointerEventsMouseOver,(void))

void Component_obj::onPointerEventsMouseOut( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2179_onPointerEventsMouseOut)
HXDLIN(2179)		this->removeClass(HX_(":hover",42,d3,17,5c),true,this->recursivePointerEvents);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onPointerEventsMouseOut,(void))

void Component_obj::onPointerEventsMouseDown( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2183_onPointerEventsMouseDown)
HXDLIN(2183)		this->addClass(HX_(":down",9c,9d,ab,a7),true,this->recursivePointerEvents);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onPointerEventsMouseDown,(void))

void Component_obj::onPointerEventsMouseUp( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2187_onPointerEventsMouseUp)
HXDLIN(2187)		this->removeClass(HX_(":down",9c,9d,ab,a7),true,this->recursivePointerEvents);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onPointerEventsMouseUp,(void))

void Component_obj::applyAnimationKeyFrame( ::haxe::ui::styles::elements::AnimationKeyFrames animationKeyFrames, ::haxe::ui::styles::animation::AnimationOptions options){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Component,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2206_applyAnimationKeyFrame)
HXLINE(2206)			if (_gthis->hasEvent(::haxe::ui::events::AnimationEvent_obj::END,null())) {
HXLINE(2207)				 ::haxe::ui::core::Component _gthis1 = _gthis;
HXDLIN(2207)				_gthis1->dispatch( ::haxe::ui::events::AnimationEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::AnimationEvent_obj::END),null());
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2194_applyAnimationKeyFrame)
HXDLIN(2194)		 ::haxe::ui::core::Component _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(2195)		bool _hx_tmp;
HXDLIN(2195)		bool _hx_tmp1;
HXDLIN(2195)		bool _hx_tmp2;
HXDLIN(2195)		if ((this->_animatable != false)) {
HXLINE(2195)			_hx_tmp2 = ::hx::IsNull( options );
            		}
            		else {
HXLINE(2195)			_hx_tmp2 = true;
            		}
HXDLIN(2195)		if (!(_hx_tmp2)) {
HXLINE(2195)			_hx_tmp1 = ::hx::IsEq( options->duration,0 );
            		}
            		else {
HXLINE(2195)			_hx_tmp1 = true;
            		}
HXDLIN(2195)		if (!(_hx_tmp1)) {
HXLINE(2196)			bool _hx_tmp1;
HXDLIN(2196)			if (::hx::IsNotNull( this->_componentAnimation )) {
HXLINE(2196)				_hx_tmp1 = (this->_componentAnimation->name == animationKeyFrames->id);
            			}
            			else {
HXLINE(2196)				_hx_tmp1 = false;
            			}
HXDLIN(2196)			if (_hx_tmp1) {
HXLINE(2195)				_hx_tmp = (options->compareToAnimation(this->_componentAnimation) == true);
            			}
            			else {
HXLINE(2195)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(2195)			_hx_tmp = true;
            		}
HXDLIN(2195)		if (_hx_tmp) {
HXLINE(2197)			return;
            		}
HXLINE(2200)		if (this->hasEvent(::haxe::ui::events::AnimationEvent_obj::START,null())) {
HXLINE(2201)			this->dispatch( ::haxe::ui::events::AnimationEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::AnimationEvent_obj::START),null());
            		}
HXLINE(2204)		this->set_componentAnimation(::haxe::ui::styles::animation::Animation_obj::createWithKeyFrames(animationKeyFrames,::hx::ObjectPtr<OBJ_>(this),options));
HXLINE(2205)		this->get_componentAnimation()->run( ::Dynamic(new _hx_Closure_0(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,applyAnimationKeyFrame,(void))

 ::haxe::ui::backend::ComponentBase Component_obj::cloneComponent(){
            	HX_GC_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2220_cloneComponent)
HXLINE( 469)		 ::haxe::ui::core::Component c = ( ( ::haxe::ui::core::Component)(this->super::cloneComponent()) );
HXLINE( 478)		if (::hx::IsNotNull( this->get_styleNames() )) {
HXLINE( 478)			c->set_styleNames(this->get_styleNames());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_styleString() )) {
HXLINE( 478)			c->set_styleString(this->get_styleString());
            		}
HXLINE(2221)		bool _hx_tmp = (this->_componentReady == false);
HXLINE(2225)		if (::hx::IsNotNull( this->get_layout() )) {
HXLINE(2226)			c->set_layout(this->get_layout()->cloneLayout());
            		}
HXLINE(2229)		if ((this->_hidden == true)) {
HXLINE(2230)			c->hide();
            		}
HXLINE(2232)		bool _hx_tmp1;
HXDLIN(2232)		if ((this->get_autoWidth() == false)) {
HXLINE(2232)			_hx_tmp1 = (this->get_width() > 0);
            		}
            		else {
HXLINE(2232)			_hx_tmp1 = false;
            		}
HXDLIN(2232)		if (_hx_tmp1) {
HXLINE(2233)			c->set_width(this->get_width());
            		}
HXLINE(2235)		bool _hx_tmp2;
HXDLIN(2235)		if ((this->get_autoHeight() == false)) {
HXLINE(2235)			_hx_tmp2 = (this->get_height() > 0);
            		}
            		else {
HXLINE(2235)			_hx_tmp2 = false;
            		}
HXDLIN(2235)		if (_hx_tmp2) {
HXLINE(2236)			c->set_height(this->get_height());
            		}
HXLINE(2238)		if (::hx::IsNotNull( this->get_customStyle() )) {
HXLINE(2239)			if (::hx::IsNull( c->get_customStyle() )) {
HXLINE(2240)				c->set_customStyle( ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
            			}
HXLINE(2242)			 ::haxe::ui::styles::Style _hx_tmp = c->get_customStyle();
HXDLIN(2242)			_hx_tmp->apply(this->get_customStyle());
            		}
HXLINE( 484)		{
HXLINE( 485)			::Array< ::Dynamic> _hx_tmp3;
HXDLIN( 485)			if (::hx::IsNull( this->_children )) {
HXLINE( 485)				_hx_tmp3 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 485)				_hx_tmp3 = this->_children;
            			}
HXDLIN( 485)			::Array< ::Dynamic> _hx_tmp4;
HXDLIN( 485)			if (::hx::IsNull( c->_children )) {
HXLINE( 485)				_hx_tmp4 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 485)				_hx_tmp4 = c->_children;
            			}
HXDLIN( 485)			if ((_hx_tmp3->length != _hx_tmp4->length)) {
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
HXLINE( 491)			this->postCloneComponent(c);
            		}
HXLINE( 493)		return c;
            	}


bool Component_obj::get_isComponentClipped(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2246_get_isComponentClipped)
HXLINE(2247)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(2248)			return this->_compositeBuilder->get_isComponentClipped();
            		}
HXLINE(2250)		return ::hx::IsNotNull( this->get_componentClipRect() );
            	}


::String Component_obj::get_cssName(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2257_get_cssName)
HXLINE(2258)		::String cssName = null();
HXLINE(2259)		if (::hx::IsNotNull( this->_compositeBuilder )) {
HXLINE(2260)			cssName = this->_compositeBuilder->get_cssName();
            		}
HXLINE(2262)		if (::hx::IsNull( cssName )) {
HXLINE(2263)			cssName = ( (::String)(::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))).split(HX_(".",2e,00,00,00))->pop()) ).toLowerCase();
            		}
HXLINE(2265)		return cssName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_cssName,return )

bool Component_obj::get_isComponentSolid(){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_2272_get_isComponentSolid)
HXLINE(2273)		if (::hx::IsNull( this->get_style() )) {
HXLINE(2274)			return false;
            		}
HXLINE(2277)		bool _hx_tmp;
HXDLIN(2277)		if (::hx::IsNull( this->get_style()->backgroundColor )) {
HXLINE(2277)			_hx_tmp = ::hx::IsNotNull( this->get_style()->backgroundImage );
            		}
            		else {
HXLINE(2277)			_hx_tmp = true;
            		}
HXDLIN(2277)		if (_hx_tmp) {
HXLINE(2278)			bool _hx_tmp;
HXDLIN(2278)			if (::hx::IsNotNull( this->get_style()->opacity )) {
HXLINE(2278)				_hx_tmp = ::hx::IsGreater( this->get_style()->opacity,0 );
            			}
            			else {
HXLINE(2278)				_hx_tmp = true;
            			}
HXDLIN(2278)			if (_hx_tmp) {
HXLINE(2279)				bool _hx_tmp;
HXDLIN(2279)				if (::hx::IsNotNull( this->get_style()->backgroundOpacity )) {
HXLINE(2279)					_hx_tmp = ::hx::IsGreater( this->get_style()->backgroundOpacity,0 );
            				}
            				else {
HXLINE(2279)					_hx_tmp = true;
            				}
HXDLIN(2279)				if (_hx_tmp) {
HXLINE(2280)					return true;
            				}
            			}
            		}
HXLINE(2285)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_isComponentSolid,return )

void Component_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_551_registerBehaviours)
HXDLIN( 551)		this->super::registerBehaviours();
            	}


 ::Dynamic Component_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_color)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->color )) {
HXLINE( 280)			return this->get_customStyle()->color;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->color );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_color,return )

 ::Dynamic Component_obj::set_color( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_color)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->color,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->color = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->color = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_color,return )

 ::Dynamic Component_obj::get_backgroundColor(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_backgroundColor)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->backgroundColor )) {
HXLINE( 280)			return this->get_customStyle()->backgroundColor;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->backgroundColor );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->backgroundColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_backgroundColor,return )

 ::Dynamic Component_obj::set_backgroundColor( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_backgroundColor)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->backgroundColor,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->backgroundColor = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->backgroundColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_backgroundColor,return )

 ::Dynamic Component_obj::get_backgroundColorEnd(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_backgroundColorEnd)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->backgroundColorEnd )) {
HXLINE( 280)			return this->get_customStyle()->backgroundColorEnd;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->backgroundColorEnd );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->backgroundColorEnd;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_backgroundColorEnd,return )

 ::Dynamic Component_obj::set_backgroundColorEnd( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_backgroundColorEnd)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->backgroundColorEnd,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->backgroundColorEnd = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->backgroundColorEnd = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_backgroundColorEnd,return )

 ::haxe::ui::util::VariantType Component_obj::get_backgroundImage(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_backgroundImage)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->backgroundImage )) {
HXLINE( 280)			return this->get_customStyle()->backgroundImage;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->backgroundImage );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->backgroundImage;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_backgroundImage,return )

 ::haxe::ui::util::VariantType Component_obj::set_backgroundImage( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_backgroundImage)
HXLINE( 293)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(this->get_customStyle()->backgroundImage,value)) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->backgroundImage = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->backgroundImage = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_backgroundImage,return )

 ::Dynamic Component_obj::get_borderColor(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_borderColor)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->borderColor )) {
HXLINE( 280)			return this->get_customStyle()->borderColor;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->borderColor );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->borderColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_borderColor,return )

 ::Dynamic Component_obj::set_borderColor( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_borderColor)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->borderColor,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->borderColor = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->borderColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 308)		{
HXLINE( 309)			this->get_customStyle()->borderTopColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
HXLINE( 310)			this->get_customStyle()->borderLeftColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
HXLINE( 311)			this->get_customStyle()->borderBottomColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
HXLINE( 312)			this->get_customStyle()->borderRightColor = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(value) ));
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_borderColor,return )

 ::Dynamic Component_obj::get_borderSize(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_borderSize)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->borderSize )) {
HXLINE( 280)			return this->get_customStyle()->borderSize;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->borderSize );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->borderSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_borderSize,return )

 ::Dynamic Component_obj::set_borderSize( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_borderSize)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->borderSize,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->borderSize = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->borderSize = value;
            		}
HXLINE( 315)		{
HXLINE( 316)			this->get_customStyle()->borderTopSize = value;
HXLINE( 317)			this->get_customStyle()->borderLeftSize = value;
HXLINE( 318)			this->get_customStyle()->borderBottomSize = value;
HXLINE( 319)			this->get_customStyle()->borderRightSize = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_borderSize,return )

 ::Dynamic Component_obj::get_borderRadius(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_borderRadius)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->borderRadius )) {
HXLINE( 280)			return this->get_customStyle()->borderRadius;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->borderRadius );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->borderRadius;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_borderRadius,return )

 ::Dynamic Component_obj::set_borderRadius( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_borderRadius)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->borderRadius,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->borderRadius = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->borderRadius = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_borderRadius,return )

 ::Dynamic Component_obj::get_padding(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_padding)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->padding )) {
HXLINE( 280)			return this->get_customStyle()->padding;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->padding );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->padding;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_padding,return )

 ::Dynamic Component_obj::set_padding( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_padding)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->padding,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->set_padding(null());
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->set_padding(value);
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 326)		{
HXLINE( 326)			bool _hx_tmp;
HXDLIN( 326)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 326)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 326)				_hx_tmp = true;
            			}
HXDLIN( 326)			if (!(_hx_tmp)) {
HXLINE( 326)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_padding,return )

 ::Dynamic Component_obj::get_paddingLeft(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_paddingLeft)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->paddingLeft )) {
HXLINE( 280)			return this->get_customStyle()->paddingLeft;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->paddingLeft );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->paddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_paddingLeft,return )

 ::Dynamic Component_obj::set_paddingLeft( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_paddingLeft)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->paddingLeft,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->paddingLeft = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->paddingLeft = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 326)		{
HXLINE( 326)			bool _hx_tmp;
HXDLIN( 326)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 326)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 326)				_hx_tmp = true;
            			}
HXDLIN( 326)			if (!(_hx_tmp)) {
HXLINE( 326)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_paddingLeft,return )

 ::Dynamic Component_obj::get_paddingRight(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_paddingRight)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->paddingRight )) {
HXLINE( 280)			return this->get_customStyle()->paddingRight;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->paddingRight );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->paddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_paddingRight,return )

 ::Dynamic Component_obj::set_paddingRight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_paddingRight)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->paddingRight,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->paddingRight = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->paddingRight = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 326)		{
HXLINE( 326)			bool _hx_tmp;
HXDLIN( 326)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 326)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 326)				_hx_tmp = true;
            			}
HXDLIN( 326)			if (!(_hx_tmp)) {
HXLINE( 326)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_paddingRight,return )

 ::Dynamic Component_obj::get_paddingTop(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_paddingTop)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->paddingTop )) {
HXLINE( 280)			return this->get_customStyle()->paddingTop;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->paddingTop );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->paddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_paddingTop,return )

 ::Dynamic Component_obj::set_paddingTop( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_paddingTop)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->paddingTop,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->paddingTop = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->paddingTop = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 326)		{
HXLINE( 326)			bool _hx_tmp;
HXDLIN( 326)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 326)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 326)				_hx_tmp = true;
            			}
HXDLIN( 326)			if (!(_hx_tmp)) {
HXLINE( 326)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_paddingTop,return )

 ::Dynamic Component_obj::get_paddingBottom(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_paddingBottom)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->paddingBottom )) {
HXLINE( 280)			return this->get_customStyle()->paddingBottom;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->paddingBottom );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->paddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_paddingBottom,return )

 ::Dynamic Component_obj::set_paddingBottom( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_paddingBottom)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->paddingBottom,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->paddingBottom = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->paddingBottom = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 326)		{
HXLINE( 326)			bool _hx_tmp;
HXDLIN( 326)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 326)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 326)				_hx_tmp = true;
            			}
HXDLIN( 326)			if (!(_hx_tmp)) {
HXLINE( 326)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_paddingBottom,return )

 ::Dynamic Component_obj::get_horizontalSpacing(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_horizontalSpacing)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->horizontalSpacing )) {
HXLINE( 280)			return this->get_customStyle()->horizontalSpacing;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->horizontalSpacing );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->horizontalSpacing;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_horizontalSpacing,return )

 ::Dynamic Component_obj::set_horizontalSpacing( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_horizontalSpacing)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->horizontalSpacing,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->horizontalSpacing = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->horizontalSpacing = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 326)		{
HXLINE( 326)			bool _hx_tmp;
HXDLIN( 326)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 326)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 326)				_hx_tmp = true;
            			}
HXDLIN( 326)			if (!(_hx_tmp)) {
HXLINE( 326)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_horizontalSpacing,return )

 ::Dynamic Component_obj::get_verticalSpacing(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_verticalSpacing)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->verticalSpacing )) {
HXLINE( 280)			return this->get_customStyle()->verticalSpacing;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->verticalSpacing );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->verticalSpacing;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_verticalSpacing,return )

 ::Dynamic Component_obj::set_verticalSpacing( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_verticalSpacing)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->verticalSpacing,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->verticalSpacing = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->verticalSpacing = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 326)		{
HXLINE( 326)			bool _hx_tmp;
HXDLIN( 326)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 326)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 326)				_hx_tmp = true;
            			}
HXDLIN( 326)			if (!(_hx_tmp)) {
HXLINE( 326)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_verticalSpacing,return )

 ::Dynamic Component_obj::get_marginLeft(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_marginLeft)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->marginLeft )) {
HXLINE( 280)			return this->get_customStyle()->marginLeft;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->marginLeft );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->marginLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_marginLeft,return )

 ::Dynamic Component_obj::set_marginLeft( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_marginLeft)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->marginLeft,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->marginLeft = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->marginLeft = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_marginLeft,return )

 ::Dynamic Component_obj::get_marginRight(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_marginRight)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->marginRight )) {
HXLINE( 280)			return this->get_customStyle()->marginRight;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->marginRight );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->marginRight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_marginRight,return )

 ::Dynamic Component_obj::set_marginRight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_marginRight)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->marginRight,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->marginRight = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->marginRight = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_marginRight,return )

 ::Dynamic Component_obj::get_marginTop(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_marginTop)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->marginTop )) {
HXLINE( 280)			return this->get_customStyle()->marginTop;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->marginTop );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->marginTop;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_marginTop,return )

 ::Dynamic Component_obj::set_marginTop( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_marginTop)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->marginTop,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->marginTop = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->marginTop = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_marginTop,return )

 ::Dynamic Component_obj::get_marginBottom(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_marginBottom)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->marginBottom )) {
HXLINE( 280)			return this->get_customStyle()->marginBottom;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->marginBottom );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->marginBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_marginBottom,return )

 ::Dynamic Component_obj::set_marginBottom( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_marginBottom)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->marginBottom,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->marginBottom = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->marginBottom = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_marginBottom,return )

 ::Dynamic Component_obj::get_clip(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_clip)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->clip )) {
HXLINE( 280)			return this->get_customStyle()->clip;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->clip );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->clip;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_clip,return )

 ::Dynamic Component_obj::set_clip( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_clip)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->clip,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->clip = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->clip = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_clip,return )

 ::Dynamic Component_obj::get_opacity(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_opacity)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->opacity )) {
HXLINE( 280)			return this->get_customStyle()->opacity;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->opacity );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->opacity;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_opacity,return )

 ::Dynamic Component_obj::set_opacity( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_opacity)
HXLINE( 293)		if (::hx::IsEq( this->get_customStyle()->opacity,value )) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->opacity = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->opacity = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_opacity,return )

::String Component_obj::get_horizontalAlign(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_horizontalAlign)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->horizontalAlign )) {
HXLINE( 280)			return this->get_customStyle()->horizontalAlign;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->horizontalAlign );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->horizontalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_horizontalAlign,return )

::String Component_obj::set_horizontalAlign(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_horizontalAlign)
HXLINE( 293)		if ((this->get_customStyle()->horizontalAlign == value)) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->horizontalAlign = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->horizontalAlign = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 331)		if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE( 331)			 ::haxe::ui::core::Component _this = this->get_parentComponent();
HXDLIN( 331)			bool _hx_tmp;
HXDLIN( 331)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 331)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 331)				_hx_tmp = true;
            			}
HXDLIN( 331)			if (!(_hx_tmp)) {
HXLINE( 331)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_horizontalAlign,return )

::String Component_obj::get_verticalAlign(){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_278_get_verticalAlign)
HXLINE( 279)		if (::hx::IsNotNull( this->get_customStyle()->verticalAlign )) {
HXLINE( 280)			return this->get_customStyle()->verticalAlign;
            		}
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 282)			_hx_tmp = ::hx::IsNull( this->get_style()->verticalAlign );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return null();
            		}
HXLINE( 285)		return this->get_style()->verticalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_verticalAlign,return )

::String Component_obj::set_verticalAlign(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_292_set_verticalAlign)
HXLINE( 293)		if ((this->get_customStyle()->verticalAlign == value)) {
HXLINE( 294)			return value;
            		}
HXLINE( 296)		if (::hx::IsNull( this->_style )) {
HXLINE( 297)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 299)		if (::hx::IsNull( value )) {
HXLINE( 300)			this->get_customStyle()->verticalAlign = null();
            		}
            		else {
HXLINE( 302)			this->get_customStyle()->verticalAlign = value;
            		}
HXLINE( 322)		{
HXLINE( 322)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 322)			{
            			}
            		}
HXLINE( 331)		if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE( 331)			 ::haxe::ui::core::Component _this = this->get_parentComponent();
HXDLIN( 331)			bool _hx_tmp;
HXDLIN( 331)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 331)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 331)				_hx_tmp = true;
            			}
HXDLIN( 331)			if (!(_hx_tmp)) {
HXLINE( 331)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 304)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_verticalAlign,return )

 ::haxe::ui::backend::ComponentBase Component_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_ec37dc4904437dff_521_self)
HXDLIN( 521)		return  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
            	}


 ::Dynamic Component_obj::set_onAnimationStart( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_244_set_onAnimationStart)
HXLINE( 245)		if (::hx::IsNotNull( this->_internal__onAnimationStart )) {
HXLINE( 246)			this->unregisterEvent(::haxe::ui::events::AnimationEvent_obj::START,this->_internal__onAnimationStart);
HXLINE( 247)			this->_internal__onAnimationStart = null();
            		}
HXLINE( 249)		if (::hx::IsNotNull( value )) {
HXLINE( 250)			this->_internal__onAnimationStart = value;
HXLINE( 251)			this->registerEvent(::haxe::ui::events::AnimationEvent_obj::START,value,null());
            		}
HXLINE( 253)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onAnimationStart,return )

 ::Dynamic Component_obj::set_onAnimationFrame( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_244_set_onAnimationFrame)
HXLINE( 245)		if (::hx::IsNotNull( this->_internal__onAnimationFrame )) {
HXLINE( 246)			this->unregisterEvent(::haxe::ui::events::AnimationEvent_obj::FRAME,this->_internal__onAnimationFrame);
HXLINE( 247)			this->_internal__onAnimationFrame = null();
            		}
HXLINE( 249)		if (::hx::IsNotNull( value )) {
HXLINE( 250)			this->_internal__onAnimationFrame = value;
HXLINE( 251)			this->registerEvent(::haxe::ui::events::AnimationEvent_obj::FRAME,value,null());
            		}
HXLINE( 253)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onAnimationFrame,return )

 ::Dynamic Component_obj::set_onAnimationEnd( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_244_set_onAnimationEnd)
HXLINE( 245)		if (::hx::IsNotNull( this->_internal__onAnimationEnd )) {
HXLINE( 246)			this->unregisterEvent(::haxe::ui::events::AnimationEvent_obj::END,this->_internal__onAnimationEnd);
HXLINE( 247)			this->_internal__onAnimationEnd = null();
            		}
HXLINE( 249)		if (::hx::IsNotNull( value )) {
HXLINE( 250)			this->_internal__onAnimationEnd = value;
HXLINE( 251)			this->registerEvent(::haxe::ui::events::AnimationEvent_obj::END,value,null());
            		}
HXLINE( 253)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onAnimationEnd,return )

 ::Dynamic Component_obj::set_onClick( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_244_set_onClick)
HXLINE( 245)		if (::hx::IsNotNull( this->_internal__onClick )) {
HXLINE( 246)			this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::CLICK,this->_internal__onClick);
HXLINE( 247)			this->_internal__onClick = null();
            		}
HXLINE( 249)		if (::hx::IsNotNull( value )) {
HXLINE( 250)			this->_internal__onClick = value;
HXLINE( 251)			this->registerEvent(::haxe::ui::events::MouseEvent_obj::CLICK,value,null());
            		}
HXLINE( 253)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onClick,return )

 ::Dynamic Component_obj::set_onMouseOver( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_244_set_onMouseOver)
HXLINE( 245)		if (::hx::IsNotNull( this->_internal__onMouseOver )) {
HXLINE( 246)			this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OVER,this->_internal__onMouseOver);
HXLINE( 247)			this->_internal__onMouseOver = null();
            		}
HXLINE( 249)		if (::hx::IsNotNull( value )) {
HXLINE( 250)			this->_internal__onMouseOver = value;
HXLINE( 251)			this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OVER,value,null());
            		}
HXLINE( 253)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onMouseOver,return )

 ::Dynamic Component_obj::set_onMouseOut( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_244_set_onMouseOut)
HXLINE( 245)		if (::hx::IsNotNull( this->_internal__onMouseOut )) {
HXLINE( 246)			this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT,this->_internal__onMouseOut);
HXLINE( 247)			this->_internal__onMouseOut = null();
            		}
HXLINE( 249)		if (::hx::IsNotNull( value )) {
HXLINE( 250)			this->_internal__onMouseOut = value;
HXLINE( 251)			this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT,value,null());
            		}
HXLINE( 253)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onMouseOut,return )

 ::Dynamic Component_obj::set_onDblClick( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_244_set_onDblClick)
HXLINE( 245)		if (::hx::IsNotNull( this->_internal__onDblClick )) {
HXLINE( 246)			this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::DBL_CLICK,this->_internal__onDblClick);
HXLINE( 247)			this->_internal__onDblClick = null();
            		}
HXLINE( 249)		if (::hx::IsNotNull( value )) {
HXLINE( 250)			this->_internal__onDblClick = value;
HXLINE( 251)			this->registerEvent(::haxe::ui::events::MouseEvent_obj::DBL_CLICK,value,null());
            		}
HXLINE( 253)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onDblClick,return )

 ::Dynamic Component_obj::set_onRightClick( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_244_set_onRightClick)
HXLINE( 245)		if (::hx::IsNotNull( this->_internal__onRightClick )) {
HXLINE( 246)			this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::RIGHT_CLICK,this->_internal__onRightClick);
HXLINE( 247)			this->_internal__onRightClick = null();
            		}
HXLINE( 249)		if (::hx::IsNotNull( value )) {
HXLINE( 250)			this->_internal__onRightClick = value;
HXLINE( 251)			this->registerEvent(::haxe::ui::events::MouseEvent_obj::RIGHT_CLICK,value,null());
            		}
HXLINE( 253)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onRightClick,return )

 ::Dynamic Component_obj::set_onChange( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ec37dc4904437dff_244_set_onChange)
HXLINE( 245)		if (::hx::IsNotNull( this->_internal__onChange )) {
HXLINE( 246)			this->unregisterEvent(::haxe::ui::events::UIEvent_obj::CHANGE,this->_internal__onChange);
HXLINE( 247)			this->_internal__onChange = null();
            		}
HXLINE( 249)		if (::hx::IsNotNull( value )) {
HXLINE( 250)			this->_internal__onChange = value;
HXLINE( 251)			this->registerEvent(::haxe::ui::events::UIEvent_obj::CHANGE,value,null());
            		}
HXLINE( 253)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_onChange,return )

void Component_obj::addNamedComponentsFrom( ::haxe::ui::core::Component parent,::Array< ::Dynamic> list){
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_1737_addNamedComponentsFrom)
HXLINE(1738)		if (::hx::IsNull( parent )) {
HXLINE(1739)			return;
            		}
HXLINE(1742)		if (::hx::IsNotNull( parent->get_id() )) {
HXLINE(1743)			list->push(parent);
            		}
HXLINE(1746)		{
HXLINE(1746)			int _g = 0;
HXDLIN(1746)			::Array< ::Dynamic> _g1;
HXDLIN(1746)			if (::hx::IsNull( parent->_children )) {
HXLINE(1746)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1746)				_g1 = parent->_children;
            			}
HXDLIN(1746)			while((_g < _g1->length)){
HXLINE(1746)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1746)				_g = (_g + 1);
HXLINE(1747)				::haxe::ui::core::Component_obj::addNamedComponentsFrom(child,list);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Component_obj,addNamedComponentsFrom,(void))


::hx::ObjectPtr< Component_obj > Component_obj::__new() {
	::hx::ObjectPtr< Component_obj > __this = new Component_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Component_obj > Component_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Component_obj *__this = (Component_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Component_obj), true, "haxe.ui.core.Component"));
	*(void **)__this = Component_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Component_obj::Component_obj()
{
}

void Component_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Component);
	HX_MARK_MEMBER_NAME(componentTabIndex,"componentTabIndex");
	HX_MARK_MEMBER_NAME(_defaultLayoutClass,"_defaultLayoutClass");
	HX_MARK_MEMBER_NAME(_compositeBuilderClass,"_compositeBuilderClass");
	HX_MARK_MEMBER_NAME(_compositeBuilder,"_compositeBuilder");
	HX_MARK_MEMBER_NAME(_native,"_native");
	HX_MARK_MEMBER_NAME(_animatable,"_animatable");
	HX_MARK_MEMBER_NAME(_componentAnimation,"_componentAnimation");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_MEMBER_NAME(bindingRoot,"bindingRoot");
	HX_MARK_MEMBER_NAME(_invalidateRecursivelyOnShow,"_invalidateRecursivelyOnShow");
	HX_MARK_MEMBER_NAME(_hidden,"_hidden");
	HX_MARK_MEMBER_NAME(_customStyle,"_customStyle");
	HX_MARK_MEMBER_NAME(classes,"classes");
	HX_MARK_MEMBER_NAME(cascadeActive,"cascadeActive");
	HX_MARK_MEMBER_NAME(_styleNames,"_styleNames");
	HX_MARK_MEMBER_NAME(_styleNamesList,"_styleNamesList");
	HX_MARK_MEMBER_NAME(_styleString,"_styleString");
	HX_MARK_MEMBER_NAME(_useCachedStyleSheetRef,"_useCachedStyleSheetRef");
	HX_MARK_MEMBER_NAME(_cachedStyleSheetRef,"_cachedStyleSheetRef");
	HX_MARK_MEMBER_NAME(_styleSheet,"_styleSheet");
	HX_MARK_MEMBER_NAME(_includeInLayout,"_includeInLayout");
	HX_MARK_MEMBER_NAME(_scriptAccess,"_scriptAccess");
	HX_MARK_MEMBER_NAME(namedComponents,"namedComponents");
	HX_MARK_MEMBER_NAME(namedComponentsMap,"namedComponentsMap");
	HX_MARK_MEMBER_NAME(_initialSizeApplied,"_initialSizeApplied");
	HX_MARK_MEMBER_NAME(_pauseAnimationStyleChanges,"_pauseAnimationStyleChanges");
	HX_MARK_MEMBER_NAME(recursivePointerEvents,"recursivePointerEvents");
	HX_MARK_MEMBER_NAME(cssName,"cssName");
	HX_MARK_MEMBER_NAME(isComponentSolid,"isComponentSolid");
	HX_MARK_MEMBER_NAME(_internal__onAnimationStart,"_internal__onAnimationStart");
	HX_MARK_MEMBER_NAME(onAnimationStart,"onAnimationStart");
	HX_MARK_MEMBER_NAME(_internal__onAnimationFrame,"_internal__onAnimationFrame");
	HX_MARK_MEMBER_NAME(onAnimationFrame,"onAnimationFrame");
	HX_MARK_MEMBER_NAME(_internal__onAnimationEnd,"_internal__onAnimationEnd");
	HX_MARK_MEMBER_NAME(onAnimationEnd,"onAnimationEnd");
	HX_MARK_MEMBER_NAME(_internal__onClick,"_internal__onClick");
	HX_MARK_MEMBER_NAME(onClick,"onClick");
	HX_MARK_MEMBER_NAME(_internal__onMouseOver,"_internal__onMouseOver");
	HX_MARK_MEMBER_NAME(onMouseOver,"onMouseOver");
	HX_MARK_MEMBER_NAME(_internal__onMouseOut,"_internal__onMouseOut");
	HX_MARK_MEMBER_NAME(onMouseOut,"onMouseOut");
	HX_MARK_MEMBER_NAME(_internal__onDblClick,"_internal__onDblClick");
	HX_MARK_MEMBER_NAME(onDblClick,"onDblClick");
	HX_MARK_MEMBER_NAME(_internal__onRightClick,"_internal__onRightClick");
	HX_MARK_MEMBER_NAME(onRightClick,"onRightClick");
	HX_MARK_MEMBER_NAME(_internal__onChange,"_internal__onChange");
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	 ::haxe::ui::backend::ComponentImpl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Component_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(componentTabIndex,"componentTabIndex");
	HX_VISIT_MEMBER_NAME(_defaultLayoutClass,"_defaultLayoutClass");
	HX_VISIT_MEMBER_NAME(_compositeBuilderClass,"_compositeBuilderClass");
	HX_VISIT_MEMBER_NAME(_compositeBuilder,"_compositeBuilder");
	HX_VISIT_MEMBER_NAME(_native,"_native");
	HX_VISIT_MEMBER_NAME(_animatable,"_animatable");
	HX_VISIT_MEMBER_NAME(_componentAnimation,"_componentAnimation");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(screen,"screen");
	HX_VISIT_MEMBER_NAME(bindingRoot,"bindingRoot");
	HX_VISIT_MEMBER_NAME(_invalidateRecursivelyOnShow,"_invalidateRecursivelyOnShow");
	HX_VISIT_MEMBER_NAME(_hidden,"_hidden");
	HX_VISIT_MEMBER_NAME(_customStyle,"_customStyle");
	HX_VISIT_MEMBER_NAME(classes,"classes");
	HX_VISIT_MEMBER_NAME(cascadeActive,"cascadeActive");
	HX_VISIT_MEMBER_NAME(_styleNames,"_styleNames");
	HX_VISIT_MEMBER_NAME(_styleNamesList,"_styleNamesList");
	HX_VISIT_MEMBER_NAME(_styleString,"_styleString");
	HX_VISIT_MEMBER_NAME(_useCachedStyleSheetRef,"_useCachedStyleSheetRef");
	HX_VISIT_MEMBER_NAME(_cachedStyleSheetRef,"_cachedStyleSheetRef");
	HX_VISIT_MEMBER_NAME(_styleSheet,"_styleSheet");
	HX_VISIT_MEMBER_NAME(_includeInLayout,"_includeInLayout");
	HX_VISIT_MEMBER_NAME(_scriptAccess,"_scriptAccess");
	HX_VISIT_MEMBER_NAME(namedComponents,"namedComponents");
	HX_VISIT_MEMBER_NAME(namedComponentsMap,"namedComponentsMap");
	HX_VISIT_MEMBER_NAME(_initialSizeApplied,"_initialSizeApplied");
	HX_VISIT_MEMBER_NAME(_pauseAnimationStyleChanges,"_pauseAnimationStyleChanges");
	HX_VISIT_MEMBER_NAME(recursivePointerEvents,"recursivePointerEvents");
	HX_VISIT_MEMBER_NAME(cssName,"cssName");
	HX_VISIT_MEMBER_NAME(isComponentSolid,"isComponentSolid");
	HX_VISIT_MEMBER_NAME(_internal__onAnimationStart,"_internal__onAnimationStart");
	HX_VISIT_MEMBER_NAME(onAnimationStart,"onAnimationStart");
	HX_VISIT_MEMBER_NAME(_internal__onAnimationFrame,"_internal__onAnimationFrame");
	HX_VISIT_MEMBER_NAME(onAnimationFrame,"onAnimationFrame");
	HX_VISIT_MEMBER_NAME(_internal__onAnimationEnd,"_internal__onAnimationEnd");
	HX_VISIT_MEMBER_NAME(onAnimationEnd,"onAnimationEnd");
	HX_VISIT_MEMBER_NAME(_internal__onClick,"_internal__onClick");
	HX_VISIT_MEMBER_NAME(onClick,"onClick");
	HX_VISIT_MEMBER_NAME(_internal__onMouseOver,"_internal__onMouseOver");
	HX_VISIT_MEMBER_NAME(onMouseOver,"onMouseOver");
	HX_VISIT_MEMBER_NAME(_internal__onMouseOut,"_internal__onMouseOut");
	HX_VISIT_MEMBER_NAME(onMouseOut,"onMouseOut");
	HX_VISIT_MEMBER_NAME(_internal__onDblClick,"_internal__onDblClick");
	HX_VISIT_MEMBER_NAME(onDblClick,"onDblClick");
	HX_VISIT_MEMBER_NAME(_internal__onRightClick,"_internal__onRightClick");
	HX_VISIT_MEMBER_NAME(onRightClick,"onRightClick");
	HX_VISIT_MEMBER_NAME(_internal__onChange,"_internal__onChange");
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	 ::haxe::ui::backend::ComponentImpl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Component_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { return ::hx::Val( hide_dyn() ); }
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"clip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_clip() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ::hx::Val( ready_dyn() ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"native") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_native() ); }
		if (HX_FIELD_EQ(inName,"screen") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_screen() : screen ); }
		if (HX_FIELD_EQ(inName,"fadeIn") ) { return ::hx::Val( fadeIn_dyn() ); }
		if (HX_FIELD_EQ(inName,"hidden") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hidden() ); }
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layout() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_native") ) { return ::hx::Val( _native ); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return ::hx::Val( hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { return ::hx::Val( fadeOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"_hidden") ) { return ::hx::Val( _hidden ); }
		if (HX_FIELD_EQ(inName,"classes") ) { return ::hx::Val( classes ); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return ::hx::Val( onReady_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMoved") ) { return ::hx::Val( onMoved_dyn() ); }
		if (HX_FIELD_EQ(inName,"cssName") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_cssName() : cssName ); }
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_padding() ); }
		if (HX_FIELD_EQ(inName,"opacity") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_opacity() ); }
		if (HX_FIELD_EQ(inName,"onClick") ) { return ::hx::Val( onClick ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return ::hx::Val( userData ); }
		if (HX_FIELD_EQ(inName,"addClass") ) { return ::hx::Val( addClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasClass") ) { return ::hx::Val( hasClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_clip") ) { return ::hx::Val( get_clip_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clip") ) { return ::hx::Val( set_clip_dyn() ); }
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onDestroy") ) { return ::hx::Val( onDestroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"swapClass") ) { return ::hx::Val( swapClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"onResized") ) { return ::hx::Val( onResized_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"marginTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_marginTop() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_native") ) { return ::hx::Val( get_native_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_native") ) { return ::hx::Val( set_native_dyn() ); }
		if (HX_FIELD_EQ(inName,"animatable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animatable() ); }
		if (HX_FIELD_EQ(inName,"userDataAs") ) { return ::hx::Val( userDataAs_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_screen") ) { return ::hx::Val( get_screen_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hidden") ) { return ::hx::Val( get_hidden_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hidden") ) { return ::hx::Val( set_hidden_dyn() ); }
		if (HX_FIELD_EQ(inName,"addClasses") ) { return ::hx::Val( addClasses_dyn() ); }
		if (HX_FIELD_EQ(inName,"styleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleNames() ); }
		if (HX_FIELD_EQ(inName,"styleSheet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleSheet() ); }
		if (HX_FIELD_EQ(inName,"get_layout") ) { return ::hx::Val( get_layout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layout") ) { return ::hx::Val( set_layout_dyn() ); }
		if (HX_FIELD_EQ(inName,"lockLayout") ) { return ::hx::Val( lockLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_borderSize() ); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingTop() ); }
		if (HX_FIELD_EQ(inName,"marginLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_marginLeft() ); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return ::hx::Val( onMouseOut ); }
		if (HX_FIELD_EQ(inName,"onDblClick") ) { return ::hx::Val( onDblClick ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animatable") ) { return ::hx::Val( _animatable ); }
		if (HX_FIELD_EQ(inName,"bindingRoot") ) { return ::hx::Val( bindingRoot ); }
		if (HX_FIELD_EQ(inName,"customStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_customStyle() ); }
		if (HX_FIELD_EQ(inName,"removeClass") ) { return ::hx::Val( removeClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"_styleNames") ) { return ::hx::Val( _styleNames ); }
		if (HX_FIELD_EQ(inName,"styleString") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleString() ); }
		if (HX_FIELD_EQ(inName,"_styleSheet") ) { return ::hx::Val( _styleSheet ); }
		if (HX_FIELD_EQ(inName,"get_cssName") ) { return ::hx::Val( get_cssName_dyn() ); }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_borderColor() ); }
		if (HX_FIELD_EQ(inName,"get_padding") ) { return ::hx::Val( get_padding_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return ::hx::Val( set_padding_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingLeft() ); }
		if (HX_FIELD_EQ(inName,"marginRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_marginRight() ); }
		if (HX_FIELD_EQ(inName,"get_opacity") ) { return ::hx::Val( get_opacity_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_opacity") ) { return ::hx::Val( set_opacity_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onClick") ) { return ::hx::Val( set_onClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return ::hx::Val( onMouseOver ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createLayout") ) { return ::hx::Val( createLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"findAncestor") ) { return ::hx::Val( findAncestor_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideInternal") ) { return ::hx::Val( hideInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"showInternal") ) { return ::hx::Val( showInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"_customStyle") ) { return ::hx::Val( _customStyle ); }
		if (HX_FIELD_EQ(inName,"_styleString") ) { return ::hx::Val( _styleString ); }
		if (HX_FIELD_EQ(inName,"unlockLayout") ) { return ::hx::Val( unlockLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"onInitialize") ) { return ::hx::Val( onInitialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"scriptAccess") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scriptAccess() ); }
		if (HX_FIELD_EQ(inName,"borderRadius") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_borderRadius() ); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingRight() ); }
		if (HX_FIELD_EQ(inName,"marginBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_marginBottom() ); }
		if (HX_FIELD_EQ(inName,"onRightClick") ) { return ::hx::Val( onRightClick ); }
		if (HX_FIELD_EQ(inName,"set_onChange") ) { return ::hx::Val( set_onChange_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rootComponent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rootComponent() ); }
		if (HX_FIELD_EQ(inName,"numComponents") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numComponents() ); }
		if (HX_FIELD_EQ(inName,"matchesSearch") ) { return ::hx::Val( matchesSearch_dyn() ); }
		if (HX_FIELD_EQ(inName,"findComponent") ) { return ::hx::Val( findComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"cascadeActive") ) { return ::hx::Val( cascadeActive ); }
		if (HX_FIELD_EQ(inName,"removeClasses") ) { return ::hx::Val( removeClasses_dyn() ); }
		if (HX_FIELD_EQ(inName,"_scriptAccess") ) { return ::hx::Val( _scriptAccess ); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingBottom() ); }
		if (HX_FIELD_EQ(inName,"get_marginTop") ) { return ::hx::Val( get_marginTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_marginTop") ) { return ::hx::Val( set_marginTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_verticalAlign() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return ::hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return ::hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_animatable") ) { return ::hx::Val( get_animatable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_animatable") ) { return ::hx::Val( set_animatable_dyn() ); }
		if (HX_FIELD_EQ(inName,"addComponentAt") ) { return ::hx::Val( addComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"walkComponents") ) { return ::hx::Val( walkComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"findComponents") ) { return ::hx::Val( findComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentAt") ) { return ::hx::Val( getComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleNames") ) { return ::hx::Val( get_styleNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_styleNames") ) { return ::hx::Val( set_styleNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleSheet") ) { return ::hx::Val( get_styleSheet_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_styleSheet") ) { return ::hx::Val( set_styleSheet_dyn() ); }
		if (HX_FIELD_EQ(inName,"onThemeChanged") ) { return ::hx::Val( onThemeChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_borderSize") ) { return ::hx::Val( get_borderSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return ::hx::Val( set_borderSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingTop") ) { return ::hx::Val( get_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingTop") ) { return ::hx::Val( set_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_marginLeft") ) { return ::hx::Val( get_marginLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_marginLeft") ) { return ::hx::Val( set_marginLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"onAnimationEnd") ) { return ::hx::Val( onAnimationEnd ); }
		if (HX_FIELD_EQ(inName,"set_onMouseOut") ) { return ::hx::Val( set_onMouseOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onDblClick") ) { return ::hx::Val( set_onDblClick_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"destroyChildren") ) { return ::hx::Val( destroyChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_customStyle") ) { return ::hx::Val( get_customStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_customStyle") ) { return ::hx::Val( set_customStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"_styleNamesList") ) { return ::hx::Val( _styleNamesList ); }
		if (HX_FIELD_EQ(inName,"get_styleString") ) { return ::hx::Val( get_styleString_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_styleString") ) { return ::hx::Val( set_styleString_dyn() ); }
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_includeInLayout() ); }
		if (HX_FIELD_EQ(inName,"namedComponents") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_namedComponents() : namedComponents ); }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundColor() ); }
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundImage() ); }
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return ::hx::Val( get_borderColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return ::hx::Val( set_borderColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingLeft") ) { return ::hx::Val( get_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingLeft") ) { return ::hx::Val( set_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"verticalSpacing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_verticalSpacing() ); }
		if (HX_FIELD_EQ(inName,"get_marginRight") ) { return ::hx::Val( get_marginRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_marginRight") ) { return ::hx::Val( set_marginRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_horizontalAlign() ); }
		if (HX_FIELD_EQ(inName,"set_onMouseOver") ) { return ::hx::Val( set_onMouseOver_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onComponentAdded") ) { return ::hx::Val( onComponentAdded_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeComponent") ) { return ::hx::Val( disposeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroyComponent") ) { return ::hx::Val( destroyComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_includeInLayout") ) { return ::hx::Val( _includeInLayout ); }
		if (HX_FIELD_EQ(inName,"get_scriptAccess") ) { return ::hx::Val( get_scriptAccess_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scriptAccess") ) { return ::hx::Val( set_scriptAccess_dyn() ); }
		if (HX_FIELD_EQ(inName,"isComponentSolid") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isComponentSolid() : isComponentSolid ); }
		if (HX_FIELD_EQ(inName,"get_borderRadius") ) { return ::hx::Val( get_borderRadius_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderRadius") ) { return ::hx::Val( set_borderRadius_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingRight") ) { return ::hx::Val( get_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingRight") ) { return ::hx::Val( set_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_marginBottom") ) { return ::hx::Val( get_marginBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_marginBottom") ) { return ::hx::Val( set_marginBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"onAnimationStart") ) { return ::hx::Val( onAnimationStart ); }
		if (HX_FIELD_EQ(inName,"onAnimationFrame") ) { return ::hx::Val( onAnimationFrame ); }
		if (HX_FIELD_EQ(inName,"set_onRightClick") ) { return ::hx::Val( set_onRightClick_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentTabIndex") ) { return ::hx::Val( componentTabIndex ); }
		if (HX_FIELD_EQ(inName,"_compositeBuilder") ) { return ::hx::Val( _compositeBuilder ); }
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rootComponent") ) { return ::hx::Val( get_rootComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numComponents") ) { return ::hx::Val( get_numComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"containsComponent") ) { return ::hx::Val( containsComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponentAt") ) { return ::hx::Val( removeComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentIndex") ) { return ::hx::Val( getComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return ::hx::Val( setComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingBottom") ) { return ::hx::Val( get_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingBottom") ) { return ::hx::Val( set_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"horizontalSpacing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_horizontalSpacing() ); }
		if (HX_FIELD_EQ(inName,"get_verticalAlign") ) { return ::hx::Val( get_verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_verticalAlign") ) { return ::hx::Val( set_verticalAlign_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onComponentCreated") ) { return ::hx::Val( onComponentCreated_dyn() ); }
		if (HX_FIELD_EQ(inName,"componentAnimation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentAnimation() ); }
		if (HX_FIELD_EQ(inName,"onComponentRemoved") ) { return ::hx::Val( onComponentRemoved_dyn() ); }
		if (HX_FIELD_EQ(inName,"namedComponentsMap") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_namedComponentsMap() : namedComponentsMap ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"backgroundColorEnd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundColorEnd() ); }
		if (HX_FIELD_EQ(inName,"set_onAnimationEnd") ) { return ::hx::Val( set_onAnimationEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onClick") ) { return ::hx::Val( _internal__onClick ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_defaultLayoutClass") ) { return ::hx::Val( _defaultLayoutClass ); }
		if (HX_FIELD_EQ(inName,"_componentAnimation") ) { return ::hx::Val( _componentAnimation ); }
		if (HX_FIELD_EQ(inName,"removeAllComponents") ) { return ::hx::Val( removeAllComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_includeInLayout") ) { return ::hx::Val( get_includeInLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_includeInLayout") ) { return ::hx::Val( set_includeInLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_namedComponents") ) { return ::hx::Val( get_namedComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"initializeComponent") ) { return ::hx::Val( initializeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_initialSizeApplied") ) { return ::hx::Val( _initialSizeApplied ); }
		if (HX_FIELD_EQ(inName,"validateInitialSize") ) { return ::hx::Val( validateInitialSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return ::hx::Val( get_backgroundColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return ::hx::Val( set_backgroundColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundImage") ) { return ::hx::Val( get_backgroundImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundImage") ) { return ::hx::Val( set_backgroundImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_verticalSpacing") ) { return ::hx::Val( get_verticalSpacing_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_verticalSpacing") ) { return ::hx::Val( set_verticalSpacing_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_horizontalAlign") ) { return ::hx::Val( get_horizontalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_horizontalAlign") ) { return ::hx::Val( set_horizontalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onChange") ) { return ::hx::Val( _internal__onChange ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_cachedStyleSheetRef") ) { return ::hx::Val( _cachedStyleSheetRef ); }
		if (HX_FIELD_EQ(inName,"get_isComponentSolid") ) { return ::hx::Val( get_isComponentSolid_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onAnimationStart") ) { return ::hx::Val( set_onAnimationStart_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onAnimationFrame") ) { return ::hx::Val( set_onAnimationFrame_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"assignPositionClasses") ) { return ::hx::Val( assignPositionClasses_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentData") ) { return ::hx::Val( validateComponentData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_horizontalSpacing") ) { return ::hx::Val( get_horizontalSpacing_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_horizontalSpacing") ) { return ::hx::Val( set_horizontalSpacing_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onMouseOut") ) { return ::hx::Val( _internal__onMouseOut ); }
		if (HX_FIELD_EQ(inName,"_internal__onDblClick") ) { return ::hx::Val( _internal__onDblClick ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_compositeBuilderClass") ) { return ::hx::Val( _compositeBuilderClass ); }
		if (HX_FIELD_EQ(inName,"get_componentAnimation") ) { return ::hx::Val( get_componentAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentAnimation") ) { return ::hx::Val( set_componentAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasComponentUnderPoint") ) { return ::hx::Val( hasComponentUnderPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_namedComponentsMap") ) { return ::hx::Val( get_namedComponentsMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"enforceSizeConstraints") ) { return ::hx::Val( enforceSizeConstraints_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentStyle") ) { return ::hx::Val( validateComponentStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateComponentDisplay") ) { return ::hx::Val( updateComponentDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"recursivePointerEvents") ) { return ::hx::Val( recursivePointerEvents ); }
		if (HX_FIELD_EQ(inName,"onPointerEventsMouseUp") ) { return ::hx::Val( onPointerEventsMouseUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyAnimationKeyFrame") ) { return ::hx::Val( applyAnimationKeyFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isComponentClipped") ) { return ::hx::Val( get_isComponentClipped_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundColorEnd") ) { return ::hx::Val( get_backgroundColorEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundColorEnd") ) { return ::hx::Val( set_backgroundColorEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onMouseOver") ) { return ::hx::Val( _internal__onMouseOver ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_useCachedStyleSheetRef") ) { return ::hx::Val( _useCachedStyleSheetRef ); }
		if (HX_FIELD_EQ(inName,"validateComponentLayout") ) { return ::hx::Val( validateComponentLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPointerEventsMouseOut") ) { return ::hx::Val( onPointerEventsMouseOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onRightClick") ) { return ::hx::Val( _internal__onRightClick ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"findComponentsUnderPoint") ) { return ::hx::Val( findComponentsUnderPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetCachedStyleSheetRef") ) { return ::hx::Val( resetCachedStyleSheetRef_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPointerEventsMouseOver") ) { return ::hx::Val( onPointerEventsMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPointerEventsMouseDown") ) { return ::hx::Val( onPointerEventsMouseDown_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"validateComponentPosition") ) { return ::hx::Val( validateComponentPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentAutoSize") ) { return ::hx::Val( validateComponentAutoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationEnd") ) { return ::hx::Val( _internal__onAnimationEnd ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_pauseAnimationStyleChanges") ) { return ::hx::Val( _pauseAnimationStyleChanges ); }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationStart") ) { return ::hx::Val( _internal__onAnimationStart ); }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationFrame") ) { return ::hx::Val( _internal__onAnimationFrame ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_invalidateRecursivelyOnShow") ) { return ::hx::Val( _invalidateRecursivelyOnShow ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Component_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"addNamedComponentsFrom") ) { outValue = addNamedComponentsFrom_dyn(); return true; }
	}
	return false;
}

::hx::Val Component_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_clip(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"native") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_native(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast<  ::haxe::ui::core::Screen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hidden") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hidden(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_layout(inValue.Cast<  ::haxe::ui::layouts::Layout >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_native") ) { _native=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hidden") ) { _hidden=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"classes") ) { classes=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cssName") ) { cssName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_padding(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"opacity") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_opacity(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"onClick") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onClick(inValue.Cast<  ::Dynamic >()) );onClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onChange") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onChange(inValue.Cast<  ::Dynamic >()) );onChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"marginTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_marginTop(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animatable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_animatable(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"styleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_styleNames(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"styleSheet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_styleSheet(inValue.Cast<  ::haxe::ui::styles::StyleSheet >()) ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderSize(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingTop(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"marginLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_marginLeft(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onMouseOut(inValue.Cast<  ::Dynamic >()) );onMouseOut=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDblClick") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onDblClick(inValue.Cast<  ::Dynamic >()) );onDblClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animatable") ) { _animatable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bindingRoot") ) { bindingRoot=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"customStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customStyle(inValue.Cast<  ::haxe::ui::styles::Style >()) ); }
		if (HX_FIELD_EQ(inName,"_styleNames") ) { _styleNames=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"styleString") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_styleString(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"_styleSheet") ) { _styleSheet=inValue.Cast<  ::haxe::ui::styles::StyleSheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderColor(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingLeft(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"marginRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_marginRight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onMouseOver(inValue.Cast<  ::Dynamic >()) );onMouseOver=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_customStyle") ) { _customStyle=inValue.Cast<  ::haxe::ui::styles::Style >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_styleString") ) { _styleString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scriptAccess") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scriptAccess(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"borderRadius") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderRadius(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingRight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"marginBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_marginBottom(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"onRightClick") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onRightClick(inValue.Cast<  ::Dynamic >()) );onRightClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cascadeActive") ) { cascadeActive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scriptAccess") ) { _scriptAccess=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingBottom(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_verticalAlign(inValue.Cast< ::String >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAnimationEnd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onAnimationEnd(inValue.Cast<  ::Dynamic >()) );onAnimationEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_styleNamesList") ) { _styleNamesList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_includeInLayout(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"namedComponents") ) { namedComponents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundColor(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundImage(inValue.Cast<  ::haxe::ui::util::VariantType >()) ); }
		if (HX_FIELD_EQ(inName,"verticalSpacing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_verticalSpacing(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_horizontalAlign(inValue.Cast< ::String >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_includeInLayout") ) { _includeInLayout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isComponentSolid") ) { isComponentSolid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onAnimationStart") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onAnimationStart(inValue.Cast<  ::Dynamic >()) );onAnimationStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onAnimationFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onAnimationFrame(inValue.Cast<  ::Dynamic >()) );onAnimationFrame=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentTabIndex") ) { componentTabIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_compositeBuilder") ) { _compositeBuilder=inValue.Cast<  ::haxe::ui::core::CompositeBuilder >(); return inValue; }
		if (HX_FIELD_EQ(inName,"horizontalSpacing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_horizontalSpacing(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"componentAnimation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentAnimation(inValue.Cast<  ::haxe::ui::styles::animation::Animation >()) ); }
		if (HX_FIELD_EQ(inName,"namedComponentsMap") ) { namedComponentsMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundColorEnd") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundColorEnd(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_internal__onClick") ) { _internal__onClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_defaultLayoutClass") ) { _defaultLayoutClass=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_componentAnimation") ) { _componentAnimation=inValue.Cast<  ::haxe::ui::styles::animation::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_initialSizeApplied") ) { _initialSizeApplied=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onChange") ) { _internal__onChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_cachedStyleSheetRef") ) { _cachedStyleSheetRef=inValue.Cast<  ::haxe::ui::styles::StyleSheet >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_internal__onMouseOut") ) { _internal__onMouseOut=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onDblClick") ) { _internal__onDblClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_compositeBuilderClass") ) { _compositeBuilderClass=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"recursivePointerEvents") ) { recursivePointerEvents=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onMouseOver") ) { _internal__onMouseOver=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_useCachedStyleSheetRef") ) { _useCachedStyleSheetRef=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onRightClick") ) { _internal__onRightClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_internal__onAnimationEnd") ) { _internal__onAnimationEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_pauseAnimationStyleChanges") ) { _pauseAnimationStyleChanges=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationStart") ) { _internal__onAnimationStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onAnimationFrame") ) { _internal__onAnimationFrame=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_invalidateRecursivelyOnShow") ) { _invalidateRecursivelyOnShow=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Component_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("componentTabIndex",5a,4e,69,2f));
	outFields->push(HX_("_defaultLayoutClass",0c,ba,3b,98));
	outFields->push(HX_("_compositeBuilderClass",05,4f,94,24));
	outFields->push(HX_("_compositeBuilder",33,00,05,49));
	outFields->push(HX_("_native",36,db,93,90));
	outFields->push(HX_("native",97,c9,1c,22));
	outFields->push(HX_("_animatable",fd,6d,52,50));
	outFields->push(HX_("animatable",de,a0,c8,7d));
	outFields->push(HX_("_componentAnimation",a6,e2,8a,82));
	outFields->push(HX_("componentAnimation",87,5e,b0,a2));
	outFields->push(HX_("userData",15,96,28,05));
	outFields->push(HX_("screen",6c,3b,5d,47));
	outFields->push(HX_("bindingRoot",07,2c,7d,bd));
	outFields->push(HX_("rootComponent",3b,0e,0e,45));
	outFields->push(HX_("numComponents",fc,6a,b6,34));
	outFields->push(HX_("_invalidateRecursivelyOnShow",a1,d1,26,c0));
	outFields->push(HX_("_hidden",09,11,0d,bb));
	outFields->push(HX_("hidden",6a,ff,95,4c));
	outFields->push(HX_("_customStyle",c1,b9,63,7f));
	outFields->push(HX_("customStyle",c0,0b,5a,19));
	outFields->push(HX_("classes",a6,4e,91,69));
	outFields->push(HX_("cascadeActive",1a,89,af,1b));
	outFields->push(HX_("_styleNames",f6,b5,04,e9));
	outFields->push(HX_("_styleNamesList",74,31,22,19));
	outFields->push(HX_("styleNames",d7,e8,7a,16));
	outFields->push(HX_("_styleString",e3,6a,d1,ee));
	outFields->push(HX_("styleString",e2,bc,c7,88));
	outFields->push(HX_("_useCachedStyleSheetRef",9b,74,e6,1d));
	outFields->push(HX_("_cachedStyleSheetRef",04,98,8d,3e));
	outFields->push(HX_("_styleSheet",cd,08,a0,ce));
	outFields->push(HX_("styleSheet",ae,3b,16,fc));
	outFields->push(HX_("_includeInLayout",38,5d,a5,59));
	outFields->push(HX_("includeInLayout",b7,1a,c6,6e));
	outFields->push(HX_("layout",aa,ae,b8,58));
	outFields->push(HX_("_scriptAccess",ee,84,04,85));
	outFields->push(HX_("scriptAccess",0f,f2,95,a2));
	outFields->push(HX_("namedComponents",2f,8a,f8,12));
	outFields->push(HX_("namedComponentsMap",ad,7f,c5,6e));
	outFields->push(HX_("_initialSizeApplied",77,94,44,c2));
	outFields->push(HX_("_pauseAnimationStyleChanges",3f,a9,c7,6f));
	outFields->push(HX_("recursivePointerEvents",e4,14,c2,5b));
	outFields->push(HX_("cssName",ae,bf,c4,7a));
	outFields->push(HX_("isComponentSolid",b8,9b,eb,19));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("backgroundColorEnd",46,f8,6e,2a));
	outFields->push(HX_("backgroundImage",8d,fc,53,80));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("borderSize",cd,ff,ed,06));
	outFields->push(HX_("borderRadius",5e,0a,30,0e));
	outFields->push(HX_("padding",d1,59,7d,d0));
	outFields->push(HX_("paddingLeft",78,4a,e6,85));
	outFields->push(HX_("paddingRight",4b,ec,a7,1a));
	outFields->push(HX_("paddingTop",44,fd,05,3a));
	outFields->push(HX_("paddingBottom",9c,67,99,4f));
	outFields->push(HX_("horizontalSpacing",ff,82,ed,70));
	outFields->push(HX_("verticalSpacing",ad,b9,a6,fa));
	outFields->push(HX_("marginLeft",55,53,dd,84));
	outFields->push(HX_("marginRight",ce,a4,d8,33));
	outFields->push(HX_("marginTop",07,7f,40,ee));
	outFields->push(HX_("marginBottom",b9,21,0a,41));
	outFields->push(HX_("clip",d0,6e,c2,41));
	outFields->push(HX_("opacity",cb,5d,65,eb));
	outFields->push(HX_("horizontalAlign",41,8f,67,f4));
	outFields->push(HX_("verticalAlign",6f,1e,7c,e4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Component_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Component_obj,componentTabIndex),HX_("componentTabIndex",5a,4e,69,2f)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(Component_obj,_defaultLayoutClass),HX_("_defaultLayoutClass",0c,ba,3b,98)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(Component_obj,_compositeBuilderClass),HX_("_compositeBuilderClass",05,4f,94,24)},
	{::hx::fsObject /*  ::haxe::ui::core::CompositeBuilder */ ,(int)offsetof(Component_obj,_compositeBuilder),HX_("_compositeBuilder",33,00,05,49)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_native),HX_("_native",36,db,93,90)},
	{::hx::fsBool,(int)offsetof(Component_obj,_animatable),HX_("_animatable",fd,6d,52,50)},
	{::hx::fsObject /*  ::haxe::ui::styles::animation::Animation */ ,(int)offsetof(Component_obj,_componentAnimation),HX_("_componentAnimation",a6,e2,8a,82)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,userData),HX_("userData",15,96,28,05)},
	{::hx::fsObject /*  ::haxe::ui::core::Screen */ ,(int)offsetof(Component_obj,screen),HX_("screen",6c,3b,5d,47)},
	{::hx::fsBool,(int)offsetof(Component_obj,bindingRoot),HX_("bindingRoot",07,2c,7d,bd)},
	{::hx::fsBool,(int)offsetof(Component_obj,_invalidateRecursivelyOnShow),HX_("_invalidateRecursivelyOnShow",a1,d1,26,c0)},
	{::hx::fsBool,(int)offsetof(Component_obj,_hidden),HX_("_hidden",09,11,0d,bb)},
	{::hx::fsObject /*  ::haxe::ui::styles::Style */ ,(int)offsetof(Component_obj,_customStyle),HX_("_customStyle",c1,b9,63,7f)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Component_obj,classes),HX_("classes",a6,4e,91,69)},
	{::hx::fsBool,(int)offsetof(Component_obj,cascadeActive),HX_("cascadeActive",1a,89,af,1b)},
	{::hx::fsString,(int)offsetof(Component_obj,_styleNames),HX_("_styleNames",f6,b5,04,e9)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Component_obj,_styleNamesList),HX_("_styleNamesList",74,31,22,19)},
	{::hx::fsString,(int)offsetof(Component_obj,_styleString),HX_("_styleString",e3,6a,d1,ee)},
	{::hx::fsBool,(int)offsetof(Component_obj,_useCachedStyleSheetRef),HX_("_useCachedStyleSheetRef",9b,74,e6,1d)},
	{::hx::fsObject /*  ::haxe::ui::styles::StyleSheet */ ,(int)offsetof(Component_obj,_cachedStyleSheetRef),HX_("_cachedStyleSheetRef",04,98,8d,3e)},
	{::hx::fsObject /*  ::haxe::ui::styles::StyleSheet */ ,(int)offsetof(Component_obj,_styleSheet),HX_("_styleSheet",cd,08,a0,ce)},
	{::hx::fsBool,(int)offsetof(Component_obj,_includeInLayout),HX_("_includeInLayout",38,5d,a5,59)},
	{::hx::fsBool,(int)offsetof(Component_obj,_scriptAccess),HX_("_scriptAccess",ee,84,04,85)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Component_obj,namedComponents),HX_("namedComponents",2f,8a,f8,12)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Component_obj,namedComponentsMap),HX_("namedComponentsMap",ad,7f,c5,6e)},
	{::hx::fsBool,(int)offsetof(Component_obj,_initialSizeApplied),HX_("_initialSizeApplied",77,94,44,c2)},
	{::hx::fsBool,(int)offsetof(Component_obj,_pauseAnimationStyleChanges),HX_("_pauseAnimationStyleChanges",3f,a9,c7,6f)},
	{::hx::fsBool,(int)offsetof(Component_obj,recursivePointerEvents),HX_("recursivePointerEvents",e4,14,c2,5b)},
	{::hx::fsString,(int)offsetof(Component_obj,cssName),HX_("cssName",ae,bf,c4,7a)},
	{::hx::fsBool,(int)offsetof(Component_obj,isComponentSolid),HX_("isComponentSolid",b8,9b,eb,19)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onAnimationStart),HX_("_internal__onAnimationStart",f9,dc,89,50)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onAnimationStart),HX_("onAnimationStart",3d,14,85,a0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onAnimationFrame),HX_("_internal__onAnimationFrame",c4,e0,01,d3)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onAnimationFrame),HX_("onAnimationFrame",08,18,fd,22)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onAnimationEnd),HX_("_internal__onAnimationEnd",b2,48,0f,a4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onAnimationEnd),HX_("onAnimationEnd",f6,66,13,d4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onClick),HX_("_internal__onClick",6d,59,c3,13)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onClick),HX_("onClick",a9,1a,9c,de)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onMouseOver),HX_("_internal__onMouseOver",be,1d,78,1f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onMouseOver),HX_("onMouseOver",fa,2c,50,18)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onMouseOut),HX_("_internal__onMouseOut",64,0f,d6,3b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onMouseOut),HX_("onMouseOut",a8,bb,d4,81)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onDblClick),HX_("_internal__onDblClick",35,16,bb,e4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onDblClick),HX_("onDblClick",79,c2,b9,2a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onRightClick),HX_("_internal__onRightClick",87,bf,31,5f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onRightClick),HX_("onRightClick",cb,04,67,23)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,_internal__onChange),HX_("_internal__onChange",ab,34,4f,e4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Component_obj,onChange),HX_("onChange",ef,87,1f,97)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Component_obj_sStaticStorageInfo = 0;
#endif

static ::String Component_obj_sMemberFields[] = {
	HX_("componentTabIndex",5a,4e,69,2f),
	HX_("_defaultLayoutClass",0c,ba,3b,98),
	HX_("create",fc,66,0f,7c),
	HX_("onComponentCreated",ea,d9,17,8d),
	HX_("_compositeBuilderClass",05,4f,94,24),
	HX_("_compositeBuilder",33,00,05,49),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("createDefaults",ae,4f,d4,01),
	HX_("createChildren",5b,98,a4,c2),
	HX_("destroyChildren",59,8c,6e,e2),
	HX_("createLayout",c6,ee,0d,7b),
	HX_("_native",36,db,93,90),
	HX_("get_native",60,39,a4,12),
	HX_("set_native",d4,d7,21,16),
	HX_("_animatable",fd,6d,52,50),
	HX_("get_animatable",27,29,be,f3),
	HX_("set_animatable",9b,11,de,13),
	HX_("_componentAnimation",a6,e2,8a,82),
	HX_("get_componentAnimation",d0,d7,44,fc),
	HX_("set_componentAnimation",44,54,f0,2f),
	HX_("userData",15,96,28,05),
	HX_("userDataAs",67,3e,0a,11),
	HX_("screen",6c,3b,5d,47),
	HX_("get_screen",35,ab,e4,37),
	HX_("bindingRoot",07,2c,7d,bd),
	HX_("get_rootComponent",92,19,7e,4b),
	HX_("get_numComponents",53,76,26,3b),
	HX_("addComponent",5c,12,a8,0e),
	HX_("containsComponent",9e,ba,74,14),
	HX_("addComponentAt",6f,9a,96,16),
	HX_("onComponentAdded",42,94,a0,77),
	HX_("removeComponent",d9,8b,72,50),
	HX_("disposeComponent",1e,c4,8a,d6),
	HX_("removeComponentAt",2c,2d,10,3b),
	HX_("onComponentRemoved",a2,43,ad,6e),
	HX_("assignPositionClasses",8e,3b,25,b1),
	HX_("destroyComponent",63,34,34,61),
	HX_("onDestroy",9b,e5,30,fc),
	HX_("walkComponents",7f,1b,0a,d7),
	HX_("removeAllComponents",b3,1e,97,3c),
	HX_("matchesSearch",bb,08,bd,e6),
	HX_("findComponent",44,b1,05,f0),
	HX_("findComponents",af,6a,f5,14),
	HX_("findAncestor",ac,71,fd,80),
	HX_("hitTest",45,60,7f,e2),
	HX_("findComponentsUnderPoint",a7,db,36,14),
	HX_("hasComponentUnderPoint",fb,37,b6,57),
	HX_("getComponentIndex",4b,fc,8e,7f),
	HX_("setComponentIndex",57,d4,fc,a2),
	HX_("getComponentAt",1a,e6,5d,08),
	HX_("hide",c2,34,0e,45),
	HX_("hideInternal",1f,ea,7b,e9),
	HX_("_invalidateRecursivelyOnShow",a1,d1,26,c0),
	HX_("show",fd,d4,52,4c),
	HX_("showInternal",5a,bd,03,54),
	HX_("fadeIn",81,4c,ab,e4),
	HX_("fadeOut",72,38,3c,31),
	HX_("_hidden",09,11,0d,bb),
	HX_("get_hidden",33,6f,1d,3d),
	HX_("set_hidden",a7,0d,9b,40),
	HX_("_customStyle",c1,b9,63,7f),
	HX_("get_customStyle",57,c3,3b,da),
	HX_("set_customStyle",63,40,07,d6),
	HX_("classes",a6,4e,91,69),
	HX_("cascadeActive",1a,89,af,1b),
	HX_("addClass",57,9e,b5,c1),
	HX_("addClasses",85,7a,1b,d1),
	HX_("removeClass",54,55,8c,46),
	HX_("removeClasses",c2,aa,4b,42),
	HX_("hasClass",7e,c2,b0,d4),
	HX_("swapClass",a5,88,05,be),
	HX_("_styleNames",f6,b5,04,e9),
	HX_("_styleNamesList",74,31,22,19),
	HX_("get_styleNames",20,71,70,8c),
	HX_("set_styleNames",94,59,90,ac),
	HX_("_styleString",e3,6a,d1,ee),
	HX_("get_styleString",79,74,a9,49),
	HX_("set_styleString",85,f1,74,45),
	HX_("_useCachedStyleSheetRef",9b,74,e6,1d),
	HX_("_cachedStyleSheetRef",04,98,8d,3e),
	HX_("_styleSheet",cd,08,a0,ce),
	HX_("get_styleSheet",f7,c3,0b,72),
	HX_("set_styleSheet",6b,ac,2b,92),
	HX_("resetCachedStyleSheetRef",74,6c,1c,92),
	HX_("_includeInLayout",38,5d,a5,59),
	HX_("get_includeInLayout",ce,e9,d0,f9),
	HX_("set_includeInLayout",da,dc,6d,36),
	HX_("get_layout",73,1e,40,49),
	HX_("set_layout",e7,bc,bd,4c),
	HX_("lockLayout",f5,00,5f,a3),
	HX_("unlockLayout",8e,30,6e,0f),
	HX_("ready",63,a0,ba,e6),
	HX_("onReady",c4,3e,f8,7c),
	HX_("onInitialize",4f,d3,fe,c4),
	HX_("onResized",91,14,1e,3b),
	HX_("onMoved",94,6a,a3,a2),
	HX_("_scriptAccess",ee,84,04,85),
	HX_("get_scriptAccess",98,de,34,a7),
	HX_("set_scriptAccess",0c,cc,76,fd),
	HX_("namedComponents",2f,8a,f8,12),
	HX_("get_namedComponents",46,59,03,9e),
	HX_("namedComponentsMap",ad,7f,c5,6e),
	HX_("get_namedComponentsMap",f6,f8,59,c8),
	HX_("onThemeChanged",aa,7d,38,28),
	HX_("initializeComponent",4d,f5,42,2d),
	HX_("_initialSizeApplied",77,94,44,c2),
	HX_("validateInitialSize",6f,72,e3,cb),
	HX_("validateComponentData",11,6f,7d,76),
	HX_("validateComponentLayout",51,0f,38,5a),
	HX_("enforceSizeConstraints",73,87,ee,02),
	HX_("validateComponentStyle",6a,56,d9,e6),
	HX_("validateComponentPosition",10,b9,90,b3),
	HX_("updateComponentDisplay",2e,67,62,d4),
	HX_("validateComponentAutoSize",37,a8,0f,18),
	HX_("_pauseAnimationStyleChanges",3f,a9,c7,6f),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("recursivePointerEvents",e4,14,c2,5b),
	HX_("onPointerEventsMouseOver",02,78,d8,8a),
	HX_("onPointerEventsMouseOut",a0,a9,3c,6a),
	HX_("onPointerEventsMouseDown",10,df,8d,83),
	HX_("onPointerEventsMouseUp",89,a5,6f,17),
	HX_("applyAnimationKeyFrame",e4,ab,95,4d),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("get_isComponentClipped",15,26,75,f8),
	HX_("cssName",ae,bf,c4,7a),
	HX_("get_cssName",c5,1f,bf,00),
	HX_("isComponentSolid",b8,9b,eb,19),
	HX_("get_isComponentSolid",c1,00,56,38),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_backgroundColor",ac,1d,52,98),
	HX_("set_backgroundColor",b8,10,ef,d4),
	HX_("get_backgroundColorEnd",8f,71,03,84),
	HX_("set_backgroundColorEnd",03,ee,ae,b7),
	HX_("get_backgroundImage",a4,cb,5e,0b),
	HX_("set_backgroundImage",b0,be,fb,47),
	HX_("get_borderColor",6e,f4,b6,97),
	HX_("set_borderColor",7a,71,82,93),
	HX_("get_borderSize",16,88,e3,7c),
	HX_("set_borderSize",8a,70,03,9d),
	HX_("get_borderRadius",e7,f6,ce,12),
	HX_("set_borderRadius",5b,e4,10,69),
	HX_("get_padding",e8,b9,77,56),
	HX_("set_padding",f4,c0,e4,60),
	HX_("get_paddingLeft",0f,02,c8,46),
	HX_("set_paddingLeft",1b,7f,93,42),
	HX_("get_paddingRight",d4,d8,46,1f),
	HX_("set_paddingRight",48,c6,88,75),
	HX_("get_paddingTop",8d,85,fb,af),
	HX_("set_paddingTop",01,6e,1b,d0),
	HX_("get_paddingBottom",f3,72,09,56),
	HX_("set_paddingBottom",ff,4a,77,79),
	HX_("get_horizontalSpacing",d6,85,9b,ef),
	HX_("set_horizontalSpacing",e2,53,a4,43),
	HX_("get_verticalSpacing",c4,88,b1,85),
	HX_("set_verticalSpacing",d0,7b,4e,c2),
	HX_("get_marginLeft",9e,db,d2,fa),
	HX_("set_marginLeft",12,c4,f2,1a),
	HX_("get_marginRight",65,5c,ba,f4),
	HX_("set_marginRight",71,d9,85,f0),
	HX_("get_marginTop",de,52,a4,af),
	HX_("set_marginTop",ea,34,aa,f4),
	HX_("get_marginBottom",42,0e,a9,45),
	HX_("set_marginBottom",b6,fb,ea,9b),
	HX_("get_clip",59,2a,7d,c1),
	HX_("set_clip",cd,83,da,6f),
	HX_("get_opacity",e2,bd,5f,71),
	HX_("set_opacity",ee,c4,cc,7b),
	HX_("get_horizontalAlign",58,5e,72,7f),
	HX_("set_horizontalAlign",64,51,0f,bc),
	HX_("get_verticalAlign",c6,29,ec,ea),
	HX_("set_verticalAlign",d2,01,5a,0e),
	HX_("self",8c,8b,50,4c),
	HX_("_internal__onAnimationStart",f9,dc,89,50),
	HX_("onAnimationStart",3d,14,85,a0),
	HX_("set_onAnimationStart",ba,30,a7,8b),
	HX_("_internal__onAnimationFrame",c4,e0,01,d3),
	HX_("onAnimationFrame",08,18,fd,22),
	HX_("set_onAnimationFrame",85,34,1f,0e),
	HX_("_internal__onAnimationEnd",b2,48,0f,a4),
	HX_("onAnimationEnd",f6,66,13,d4),
	HX_("set_onAnimationEnd",33,7a,5c,4c),
	HX_("_internal__onClick",6d,59,c3,13),
	HX_("onClick",a9,1a,9c,de),
	HX_("set_onClick",cc,81,03,6f),
	HX_("_internal__onMouseOver",be,1d,78,1f),
	HX_("onMouseOver",fa,2c,50,18),
	HX_("set_onMouseOver",9d,61,fd,d4),
	HX_("_internal__onMouseOut",64,0f,d6,3b),
	HX_("onMouseOut",a8,bb,d4,81),
	HX_("set_onMouseOut",65,2c,ea,17),
	HX_("_internal__onDblClick",35,16,bb,e4),
	HX_("onDblClick",79,c2,b9,2a),
	HX_("set_onDblClick",36,33,cf,c0),
	HX_("_internal__onRightClick",87,bf,31,5f),
	HX_("onRightClick",cb,04,67,23),
	HX_("set_onRightClick",c8,de,47,7e),
	HX_("_internal__onChange",ab,34,4f,e4),
	HX_("onChange",ef,87,1f,97),
	HX_("set_onChange",6c,5f,32,61),
	::String(null()) };

::hx::Class Component_obj::__mClass;

static ::String Component_obj_sStaticFields[] = {
	HX_("addNamedComponentsFrom",98,9d,c2,1f),
	::String(null())
};

void Component_obj::__register()
{
	Component_obj _hx_dummy;
	Component_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.Component",60,d3,76,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Component_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Component_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Component_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Component_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Component_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Component_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Component_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b622e79a3ddd17cb_38_boot)
HXDLIN(  38)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("styleString",e2,bc,c7,88), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())))
            				->setFixed(1,HX_("styleNames",d7,e8,7a,16), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null()))))));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
