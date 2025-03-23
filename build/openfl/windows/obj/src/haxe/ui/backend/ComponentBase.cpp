#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentDisabledBehaviour
#include <haxe/ui/backend/ComponentDisabledBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentTextBehaviour
#include <haxe/ui/backend/ComponentTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentToolTipBehaviour
#include <haxe/ui/backend/ComponentToolTipBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentToolTipRendererBehaviour
#include <haxe/ui/backend/ComponentToolTipRendererBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentValueBehaviour
#include <haxe/ui/backend/ComponentValueBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IScroller
#include <haxe/ui/core/IScroller.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#include <haxe/ui/core/ImageDisplay.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_KeyboardEvent
#include <haxe/ui/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_EventMap
#include <haxe/ui/util/EventMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_FunctionArray
#include <haxe/ui/util/FunctionArray.h>
#endif
#ifndef INCLUDED_haxe_ui_util_GenericConfig
#include <haxe/ui/util/GenericConfig.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Listener_ListenerInternal
#include <haxe/ui/util/_Listener/ListenerInternal.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Listener_Listener_Impl_
#include <haxe/ui/util/_Listener/Listener_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_99836deeea93cd49_37_new,"haxe.ui.backend.ComponentBase","new",0xd4652b14,"haxe.ui.backend.ComponentBase.new","haxe/ui/backend/ComponentBase.hx",37,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_85_registerBehaviours,"haxe.ui.backend.ComponentBase","registerBehaviours",0x97c877a5,"haxe.ui.backend.ComponentBase.registerBehaviours","haxe/ui/backend/ComponentBase.hx",85,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_96_get_isReady,"haxe.ui.backend.ComponentBase","get_isReady",0x06f3d2e4,"haxe.ui.backend.ComponentBase.get_isReady","haxe/ui/backend/ComponentBase.hx",96,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_105_get_id,"haxe.ui.backend.ComponentBase","get_id",0xe3ed40f0,"haxe.ui.backend.ComponentBase.get_id","haxe/ui/backend/ComponentBase.hx",105,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_107_set_id,"haxe.ui.backend.ComponentBase","set_id",0xb0359564,"haxe.ui.backend.ComponentBase.set_id","haxe/ui/backend/ComponentBase.hx",107,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_129_get_parentComponent,"haxe.ui.backend.ComponentBase","get_parentComponent",0x40d7a7fe,"haxe.ui.backend.ComponentBase.get_parentComponent","haxe/ui/backend/ComponentBase.hx",129,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_132_set_parentComponent,"haxe.ui.backend.ComponentBase","set_parentComponent",0x7d749b0a,"haxe.ui.backend.ComponentBase.set_parentComponent","haxe/ui/backend/ComponentBase.hx",132,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_141_onParentComponentSet,"haxe.ui.backend.ComponentBase","onParentComponentSet",0x3358b2fa,"haxe.ui.backend.ComponentBase.onParentComponentSet","haxe/ui/backend/ComponentBase.hx",141,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_148_get_isInScroller,"haxe.ui.backend.ComponentBase","get_isInScroller",0xc5882c9e,"haxe.ui.backend.ComponentBase.get_isInScroller","haxe/ui/backend/ComponentBase.hx",148,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_158_findScroller,"haxe.ui.backend.ComponentBase","findScroller",0x7e22a9df,"haxe.ui.backend.ComponentBase.findScroller","haxe/ui/backend/ComponentBase.hx",158,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_171_containsChildComponent,"haxe.ui.backend.ComponentBase","containsChildComponent",0xd6b67fcc,"haxe.ui.backend.ComponentBase.containsChildComponent","haxe/ui/backend/ComponentBase.hx",171,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_192_get_childComponents,"haxe.ui.backend.ComponentBase","get_childComponents",0xd07fcf9d,"haxe.ui.backend.ComponentBase.get_childComponents","haxe/ui/backend/ComponentBase.hx",192,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_208_addComponent,"haxe.ui.backend.ComponentBase","addComponent",0x12f7c128,"haxe.ui.backend.ComponentBase.addComponent","haxe/ui/backend/ComponentBase.hx",208,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_224_addComponentAt,"haxe.ui.backend.ComponentBase","addComponentAt",0x9148943b,"haxe.ui.backend.ComponentBase.addComponentAt","haxe/ui/backend/ComponentBase.hx",224,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_236_removeComponent,"haxe.ui.backend.ComponentBase","removeComponent",0x317b248d,"haxe.ui.backend.ComponentBase.removeComponent","haxe/ui/backend/ComponentBase.hx",236,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_240_containsComponent,"haxe.ui.backend.ComponentBase","containsComponent",0xbb5be852,"haxe.ui.backend.ComponentBase.containsComponent","haxe/ui/backend/ComponentBase.hx",240,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_252_removeComponentAt,"haxe.ui.backend.ComponentBase","removeComponentAt",0xe1f75ae0,"haxe.ui.backend.ComponentBase.removeComponentAt","haxe/ui/backend/ComponentBase.hx",252,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_259_moveComponentToBack,"haxe.ui.backend.ComponentBase","moveComponentToBack",0x51c99882,"haxe.ui.backend.ComponentBase.moveComponentToBack","haxe/ui/backend/ComponentBase.hx",259,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_270_moveComponentBackward,"haxe.ui.backend.ComponentBase","moveComponentBackward",0x3f037f23,"haxe.ui.backend.ComponentBase.moveComponentBackward","haxe/ui/backend/ComponentBase.hx",270,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_287_moveComponentToFront,"haxe.ui.backend.ComponentBase","moveComponentToFront",0x977be9ee,"haxe.ui.backend.ComponentBase.moveComponentToFront","haxe/ui/backend/ComponentBase.hx",287,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_298_moveComponentFrontward,"haxe.ui.backend.ComponentBase","moveComponentFrontward",0x7688b825,"haxe.ui.backend.ComponentBase.moveComponentFrontward","haxe/ui/backend/ComponentBase.hx",298,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_315_get_bottomComponent,"haxe.ui.backend.ComponentBase","get_bottomComponent",0x651d061d,"haxe.ui.backend.ComponentBase.get_bottomComponent","haxe/ui/backend/ComponentBase.hx",315,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_326_get_topComponent,"haxe.ui.backend.ComponentBase","get_topComponent",0x880560bd,"haxe.ui.backend.ComponentBase.get_topComponent","haxe/ui/backend/ComponentBase.hx",326,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_333_postCloneComponent,"haxe.ui.backend.ComponentBase","postCloneComponent",0x0424b9ec,"haxe.ui.backend.ComponentBase.postCloneComponent","haxe/ui/backend/ComponentBase.hx",333,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_341_registerInternalEvents,"haxe.ui.backend.ComponentBase","registerInternalEvents",0x30a6ddc5,"haxe.ui.backend.ComponentBase.registerInternalEvents","haxe/ui/backend/ComponentBase.hx",341,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_349_unregisterInternalEvents,"haxe.ui.backend.ComponentBase","unregisterInternalEvents",0x2c9999de,"haxe.ui.backend.ComponentBase.unregisterInternalEvents","haxe/ui/backend/ComponentBase.hx",349,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_363_registerEvent,"haxe.ui.backend.ComponentBase","registerEvent",0x2c96ce6b,"haxe.ui.backend.ComponentBase.registerEvent","haxe/ui/backend/ComponentBase.hx",363,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_392_hasEvent,"haxe.ui.backend.ComponentBase","hasEvent",0xe7226b2c,"haxe.ui.backend.ComponentBase.hasEvent","haxe/ui/backend/ComponentBase.hx",392,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_403_unregisterEvent,"haxe.ui.backend.ComponentBase","unregisterEvent",0x09aff972,"haxe.ui.backend.ComponentBase.unregisterEvent","haxe/ui/backend/ComponentBase.hx",403,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_420_unregisterEvents,"haxe.ui.backend.ComponentBase","unregisterEvents",0x704a4ac1,"haxe.ui.backend.ComponentBase.unregisterEvents","haxe/ui/backend/ComponentBase.hx",420,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_435_dispatch,"haxe.ui.backend.ComponentBase","dispatch",0x03692786,"haxe.ui.backend.ComponentBase.dispatch","haxe/ui/backend/ComponentBase.hx",435,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_450_dispatchRecursively,"haxe.ui.backend.ComponentBase","dispatchRecursively",0x861f7c99,"haxe.ui.backend.ComponentBase.dispatchRecursively","haxe/ui/backend/ComponentBase.hx",450,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_458_removeAllListeners,"haxe.ui.backend.ComponentBase","removeAllListeners",0xabc0ae4e,"haxe.ui.backend.ComponentBase.removeAllListeners","haxe/ui/backend/ComponentBase.hx",458,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_463_dispatchRecursivelyWhen,"haxe.ui.backend.ComponentBase","dispatchRecursivelyWhen",0x83ad0ff3,"haxe.ui.backend.ComponentBase.dispatchRecursivelyWhen","haxe/ui/backend/ComponentBase.hx",463,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_476_checkWatchForMoveEvents,"haxe.ui.backend.ComponentBase","checkWatchForMoveEvents",0x1b6f4940,"haxe.ui.backend.ComponentBase.checkWatchForMoveEvents","haxe/ui/backend/ComponentBase.hx",476,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_485__onMoveInternal,"haxe.ui.backend.ComponentBase","_onMoveInternal",0x11044080,"haxe.ui.backend.ComponentBase._onMoveInternal","haxe/ui/backend/ComponentBase.hx",485,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_489_checkComponentBounds,"haxe.ui.backend.ComponentBase","checkComponentBounds",0x03a081f6,"haxe.ui.backend.ComponentBase.checkComponentBounds","haxe/ui/backend/ComponentBase.hx",489,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_509_checkComponentBounds,"haxe.ui.backend.ComponentBase","checkComponentBounds",0x03a081f6,"haxe.ui.backend.ComponentBase.checkComponentBounds","haxe/ui/backend/ComponentBase.hx",509,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_516__onMappedEvent,"haxe.ui.backend.ComponentBase","_onMappedEvent",0x93232295,"haxe.ui.backend.ComponentBase._onMappedEvent","haxe/ui/backend/ComponentBase.hx",516,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_527_isInteractiveEvent,"haxe.ui.backend.ComponentBase","isInteractiveEvent",0x678362ae,"haxe.ui.backend.ComponentBase.isInteractiveEvent","haxe/ui/backend/ComponentBase.hx",527,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_531_disableInteractiveEvents,"haxe.ui.backend.ComponentBase","disableInteractiveEvents",0x618ef85f,"haxe.ui.backend.ComponentBase.disableInteractiveEvents","haxe/ui/backend/ComponentBase.hx",531,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_569_disableInteractivity,"haxe.ui.backend.ComponentBase","disableInteractivity",0xb07c98af,"haxe.ui.backend.ComponentBase.disableInteractivity","haxe/ui/backend/ComponentBase.hx",569,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_614_unregisterEventsInternal,"haxe.ui.backend.ComponentBase","unregisterEventsInternal",0x9ccc971e,"haxe.ui.backend.ComponentBase.unregisterEventsInternal","haxe/ui/backend/ComponentBase.hx",614,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_635_pauseEvent,"haxe.ui.backend.ComponentBase","pauseEvent",0x7ee38910,"haxe.ui.backend.ComponentBase.pauseEvent","haxe/ui/backend/ComponentBase.hx",635,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_650_resumeEvent,"haxe.ui.backend.ComponentBase","resumeEvent",0x4447c9e1,"haxe.ui.backend.ComponentBase.resumeEvent","haxe/ui/backend/ComponentBase.hx",650,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_653_resumeEvent,"haxe.ui.backend.ComponentBase","resumeEvent",0x4447c9e1,"haxe.ui.backend.ComponentBase.resumeEvent","haxe/ui/backend/ComponentBase.hx",653,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_688_get_autoWidth,"haxe.ui.backend.ComponentBase","get_autoWidth",0x2b3b0ba2,"haxe.ui.backend.ComponentBase.get_autoWidth","haxe/ui/backend/ComponentBase.hx",688,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_711_get_autoHeight,"haxe.ui.backend.ComponentBase","get_autoHeight",0x5ebe9acb,"haxe.ui.backend.ComponentBase.get_autoHeight","haxe/ui/backend/ComponentBase.hx",711,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_730_resizeComponent,"haxe.ui.backend.ComponentBase","resizeComponent",0x4cfb30dd,"haxe.ui.backend.ComponentBase.resizeComponent","haxe/ui/backend/ComponentBase.hx",730,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_755_get_actualComponentWidth,"haxe.ui.backend.ComponentBase","get_actualComponentWidth",0x722b318c,"haxe.ui.backend.ComponentBase.get_actualComponentWidth","haxe/ui/backend/ComponentBase.hx",755,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_765_get_actualComponentHeight,"haxe.ui.backend.ComponentBase","get_actualComponentHeight",0x29efa1a1,"haxe.ui.backend.ComponentBase.get_actualComponentHeight","haxe/ui/backend/ComponentBase.hx",765,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_777_get_componentWidth,"haxe.ui.backend.ComponentBase","get_componentWidth",0x1864189e,"haxe.ui.backend.ComponentBase.get_componentWidth","haxe/ui/backend/ComponentBase.hx",777,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_783_set_componentWidth,"haxe.ui.backend.ComponentBase","set_componentWidth",0xf5134b12,"haxe.ui.backend.ComponentBase.set_componentWidth","haxe/ui/backend/ComponentBase.hx",783,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_797_get_componentHeight,"haxe.ui.backend.ComponentBase","get_componentHeight",0xf580ea4f,"haxe.ui.backend.ComponentBase.get_componentHeight","haxe/ui/backend/ComponentBase.hx",797,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_803_set_componentHeight,"haxe.ui.backend.ComponentBase","set_componentHeight",0x321ddd5b,"haxe.ui.backend.ComponentBase.set_componentHeight","haxe/ui/backend/ComponentBase.hx",803,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_816_get_percentWidth,"haxe.ui.backend.ComponentBase","get_percentWidth",0x09374256,"haxe.ui.backend.ComponentBase.get_percentWidth","haxe/ui/backend/ComponentBase.hx",816,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_818_set_percentWidth,"haxe.ui.backend.ComponentBase","set_percentWidth",0x5f792fca,"haxe.ui.backend.ComponentBase.set_percentWidth","haxe/ui/backend/ComponentBase.hx",818,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_841_get_percentHeight,"haxe.ui.backend.ComponentBase","get_percentHeight",0xbd724197,"haxe.ui.backend.ComponentBase.get_percentHeight","haxe/ui/backend/ComponentBase.hx",841,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_843_set_percentHeight,"haxe.ui.backend.ComponentBase","set_percentHeight",0xe0e019a3,"haxe.ui.backend.ComponentBase.set_percentHeight","haxe/ui/backend/ComponentBase.hx",843,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_859_cachePercentSizes,"haxe.ui.backend.ComponentBase","cachePercentSizes",0x75bf12a3,"haxe.ui.backend.ComponentBase.cachePercentSizes","haxe/ui/backend/ComponentBase.hx",859,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_874_restorePercentSizes,"haxe.ui.backend.ComponentBase","restorePercentSizes",0x6fce16af,"haxe.ui.backend.ComponentBase.restorePercentSizes","haxe/ui/backend/ComponentBase.hx",874,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_886_set_x,"haxe.ui.backend.ComponentBase","set_x",0x79540b0f,"haxe.ui.backend.ComponentBase.set_x","haxe/ui/backend/ComponentBase.hx",886,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_897_set_y,"haxe.ui.backend.ComponentBase","set_y",0x79540b10,"haxe.ui.backend.ComponentBase.set_y","haxe/ui/backend/ComponentBase.hx",897,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_909_set_width,"haxe.ui.backend.ComponentBase","set_width",0x7105581d,"haxe.ui.backend.ComponentBase.set_width","haxe/ui/backend/ComponentBase.hx",909,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_924_get_width,"haxe.ui.backend.ComponentBase","get_width",0x8db46c11,"haxe.ui.backend.ComponentBase.get_width","haxe/ui/backend/ComponentBase.hx",924,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_931_set_height,"haxe.ui.backend.ComponentBase","set_height",0x29f739f0,"haxe.ui.backend.ComponentBase.set_height","haxe/ui/backend/ComponentBase.hx",931,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_946_get_height,"haxe.ui.backend.ComponentBase","get_height",0x26799b7c,"haxe.ui.backend.ComponentBase.get_height","haxe/ui/backend/ComponentBase.hx",946,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1042_get_hasScreen,"haxe.ui.backend.ComponentBase","get_hasScreen",0x0b1305f1,"haxe.ui.backend.ComponentBase.get_hasScreen","haxe/ui/backend/ComponentBase.hx",1042,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1059_hitTest,"haxe.ui.backend.ComponentBase","hitTest",0x476624f9,"haxe.ui.backend.ComponentBase.hitTest","haxe/ui/backend/ComponentBase.hx",1059,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1111_autoSize,"haxe.ui.backend.ComponentBase","autoSize",0x147ee89c,"haxe.ui.backend.ComponentBase.autoSize","haxe/ui/backend/ComponentBase.hx",1111,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1136_moveComponent,"haxe.ui.backend.ComponentBase","moveComponent",0xeb6cc720,"haxe.ui.backend.ComponentBase.moveComponent","haxe/ui/backend/ComponentBase.hx",1136,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1161_get_left,"haxe.ui.backend.ComponentBase","get_left",0xac701c5c,"haxe.ui.backend.ComponentBase.get_left","haxe/ui/backend/ComponentBase.hx",1161,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1163_set_left,"haxe.ui.backend.ComponentBase","set_left",0x5acd75d0,"haxe.ui.backend.ComponentBase.set_left","haxe/ui/backend/ComponentBase.hx",1163,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1177_get_top,"haxe.ui.backend.ComponentBase","get_top",0x8bb3f3e0,"haxe.ui.backend.ComponentBase.get_top","haxe/ui/backend/ComponentBase.hx",1177,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1179_set_top,"haxe.ui.backend.ComponentBase","set_top",0x7eb584ec,"haxe.ui.backend.ComponentBase.set_top","haxe/ui/backend/ComponentBase.hx",1179,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1190_get_screenLeft,"haxe.ui.backend.ComponentBase","get_screenLeft",0xb08e17a8,"haxe.ui.backend.ComponentBase.get_screenLeft","haxe/ui/backend/ComponentBase.hx",1190,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1195_get_screenRight,"haxe.ui.backend.ComponentBase","get_screenRight",0x42d3a91b,"haxe.ui.backend.ComponentBase.get_screenRight","haxe/ui/backend/ComponentBase.hx",1195,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1204_get_screenTop,"haxe.ui.backend.ComponentBase","get_screenTop",0xbac9e614,"haxe.ui.backend.ComponentBase.get_screenTop","haxe/ui/backend/ComponentBase.hx",1204,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1209_get_screenBottom,"haxe.ui.backend.ComponentBase","get_screenBottom",0x4db2e0cc,"haxe.ui.backend.ComponentBase.get_screenBottom","haxe/ui/backend/ComponentBase.hx",1209,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1214_get_screenBounds,"haxe.ui.backend.ComponentBase","get_screenBounds",0x4e578056,"haxe.ui.backend.ComponentBase.get_screenBounds","haxe/ui/backend/ComponentBase.hx",1214,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1255_get_componentClipRect,"haxe.ui.backend.ComponentBase","get_componentClipRect",0x2c6adc7c,"haxe.ui.backend.ComponentBase.get_componentClipRect","haxe/ui/backend/ComponentBase.hx",1255,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1261_set_componentClipRect,"haxe.ui.backend.ComponentBase","set_componentClipRect",0x8073aa88,"haxe.ui.backend.ComponentBase.set_componentClipRect","haxe/ui/backend/ComponentBase.hx",1261,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1274_get_isComponentClipped,"haxe.ui.backend.ComponentBase","get_isComponentClipped",0xf3a7cbe1,"haxe.ui.backend.ComponentBase.get_isComponentClipped","haxe/ui/backend/ComponentBase.hx",1274,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1285_get_isComponentOffscreen,"haxe.ui.backend.ComponentBase","get_isComponentOffscreen",0xd4f28c7d,"haxe.ui.backend.ComponentBase.get_isComponentOffscreen","haxe/ui/backend/ComponentBase.hx",1285,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1306_get_style,"haxe.ui.backend.ComponentBase","get_style",0x476f5b3c,"haxe.ui.backend.ComponentBase.get_style","haxe/ui/backend/ComponentBase.hx",1306,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1309_set_style,"haxe.ui.backend.ComponentBase","set_style",0x2ac04748,"haxe.ui.backend.ComponentBase.set_style","haxe/ui/backend/ComponentBase.hx",1309,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1329_get_depth,"haxe.ui.backend.ComponentBase","get_depth",0x9a7ba70e,"haxe.ui.backend.ComponentBase.get_depth","haxe/ui/backend/ComponentBase.hx",1329,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1331_set_depth,"haxe.ui.backend.ComponentBase","set_depth",0x7dcc931a,"haxe.ui.backend.ComponentBase.set_depth","haxe/ui/backend/ComponentBase.hx",1331,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1345_isComponentInvalid,"haxe.ui.backend.ComponentBase","isComponentInvalid",0x3ac14f90,"haxe.ui.backend.ComponentBase.isComponentInvalid","haxe/ui/backend/ComponentBase.hx",1345,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1365_invalidateComponent,"haxe.ui.backend.ComponentBase","invalidateComponent",0x2f8e3276,"haxe.ui.backend.ComponentBase.invalidateComponent","haxe/ui/backend/ComponentBase.hx",1365,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1432_invalidateComponentData,"haxe.ui.backend.ComponentBase","invalidateComponentData",0x361427c0,"haxe.ui.backend.ComponentBase.invalidateComponentData","haxe/ui/backend/ComponentBase.hx",1432,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1439_invalidateComponentLayout,"haxe.ui.backend.ComponentBase","invalidateComponentLayout",0x377191c0,"haxe.ui.backend.ComponentBase.invalidateComponentLayout","haxe/ui/backend/ComponentBase.hx",1439,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1451_invalidateComponentPosition,"haxe.ui.backend.ComponentBase","invalidateComponentPosition",0x7402f53f,"haxe.ui.backend.ComponentBase.invalidateComponentPosition","haxe/ui/backend/ComponentBase.hx",1451,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1459_invalidateComponentDisplay,"haxe.ui.backend.ComponentBase","invalidateComponentDisplay",0xbe57fa6c,"haxe.ui.backend.ComponentBase.invalidateComponentDisplay","haxe/ui/backend/ComponentBase.hx",1459,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1466_invalidateComponentStyle,"haxe.ui.backend.ComponentBase","invalidateComponentStyle",0xcb2436db,"haxe.ui.backend.ComponentBase.invalidateComponentStyle","haxe/ui/backend/ComponentBase.hx",1466,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1477_validateComponent,"haxe.ui.backend.ComponentBase","validateComponent",0x4bd26afb,"haxe.ui.backend.ComponentBase.validateComponent","haxe/ui/backend/ComponentBase.hx",1477,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1523_validateNow,"haxe.ui.backend.ComponentBase","validateNow",0xc878f0d4,"haxe.ui.backend.ComponentBase.validateNow","haxe/ui/backend/ComponentBase.hx",1523,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1535_syncComponentValidation,"haxe.ui.backend.ComponentBase","syncComponentValidation",0x16521e6f,"haxe.ui.backend.ComponentBase.syncComponentValidation","haxe/ui/backend/ComponentBase.hx",1535,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1560_validateComponentInternal,"haxe.ui.backend.ComponentBase","validateComponentInternal",0x38268158,"haxe.ui.backend.ComponentBase.validateComponentInternal","haxe/ui/backend/ComponentBase.hx",1560,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1603_initializeComponent,"haxe.ui.backend.ComponentBase","initializeComponent",0xbe97f801,"haxe.ui.backend.ComponentBase.initializeComponent","haxe/ui/backend/ComponentBase.hx",1603,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1607_validateInitialSize,"haxe.ui.backend.ComponentBase","validateInitialSize",0x5d387523,"haxe.ui.backend.ComponentBase.validateInitialSize","haxe/ui/backend/ComponentBase.hx",1607,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1611_validateComponentData,"haxe.ui.backend.ComponentBase","validateComponentData",0xc91f86c5,"haxe.ui.backend.ComponentBase.validateComponentData","haxe/ui/backend/ComponentBase.hx",1611,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1615_validateComponentLayout,"haxe.ui.backend.ComponentBase","validateComponentLayout",0x2b567c05,"haxe.ui.backend.ComponentBase.validateComponentLayout","haxe/ui/backend/ComponentBase.hx",1615,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1618_validateComponentStyle,"haxe.ui.backend.ComponentBase","validateComponentStyle",0xe20bfc36,"haxe.ui.backend.ComponentBase.validateComponentStyle","haxe/ui/backend/ComponentBase.hx",1618,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1622_validateComponentPosition,"haxe.ui.backend.ComponentBase","validateComponentPosition",0xdaaabac4,"haxe.ui.backend.ComponentBase.validateComponentPosition","haxe/ui/backend/ComponentBase.hx",1622,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1630_handleCreate,"haxe.ui.backend.ComponentBase","handleCreate",0xce8b3b90,"haxe.ui.backend.ComponentBase.handleCreate","haxe/ui/backend/ComponentBase.hx",1630,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1634_handleDestroy,"haxe.ui.backend.ComponentBase","handleDestroy",0xfe6459e6,"haxe.ui.backend.ComponentBase.handleDestroy","haxe/ui/backend/ComponentBase.hx",1634,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1638_handlePosition,"haxe.ui.backend.ComponentBase","handlePosition",0x9383c23d,"haxe.ui.backend.ComponentBase.handlePosition","haxe/ui/backend/ComponentBase.hx",1638,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1642_handlePreReposition,"haxe.ui.backend.ComponentBase","handlePreReposition",0xd9da234b,"haxe.ui.backend.ComponentBase.handlePreReposition","haxe/ui/backend/ComponentBase.hx",1642,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1646_handlePostReposition,"haxe.ui.backend.ComponentBase","handlePostReposition",0x9825b870,"haxe.ui.backend.ComponentBase.handlePostReposition","haxe/ui/backend/ComponentBase.hx",1646,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1650_handleSize,"haxe.ui.backend.ComponentBase","handleSize",0x9e9f6855,"haxe.ui.backend.ComponentBase.handleSize","haxe/ui/backend/ComponentBase.hx",1650,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1654_handleReady,"haxe.ui.backend.ComponentBase","handleReady",0x96bd7a4f,"haxe.ui.backend.ComponentBase.handleReady","haxe/ui/backend/ComponentBase.hx",1654,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1658_handleClipRect,"haxe.ui.backend.ComponentBase","handleClipRect",0x20f3b1a8,"haxe.ui.backend.ComponentBase.handleClipRect","haxe/ui/backend/ComponentBase.hx",1658,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1662_handleVisibility,"haxe.ui.backend.ComponentBase","handleVisibility",0xa9515c66,"haxe.ui.backend.ComponentBase.handleVisibility","haxe/ui/backend/ComponentBase.hx",1662,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1666_handleDisabled,"haxe.ui.backend.ComponentBase","handleDisabled",0x448d6310,"haxe.ui.backend.ComponentBase.handleDisabled","haxe/ui/backend/ComponentBase.hx",1666,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1670_handleSetComponentIndex,"haxe.ui.backend.ComponentBase","handleSetComponentIndex",0xc5d4e043,"haxe.ui.backend.ComponentBase.handleSetComponentIndex","haxe/ui/backend/ComponentBase.hx",1670,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1675_handleAddComponent,"haxe.ui.backend.ComponentBase","handleAddComponent",0xc0238df0,"haxe.ui.backend.ComponentBase.handleAddComponent","haxe/ui/backend/ComponentBase.hx",1675,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1680_handleAddComponentAt,"haxe.ui.backend.ComponentBase","handleAddComponentAt",0xba972303,"haxe.ui.backend.ComponentBase.handleAddComponentAt","haxe/ui/backend/ComponentBase.hx",1680,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1685_handleRemoveComponent,"haxe.ui.backend.ComponentBase","handleRemoveComponent",0x2ce984c5,"haxe.ui.backend.ComponentBase.handleRemoveComponent","haxe/ui/backend/ComponentBase.hx",1685,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1690_handleRemoveComponentAt,"haxe.ui.backend.ComponentBase","handleRemoveComponentAt",0x5de83918,"haxe.ui.backend.ComponentBase.handleRemoveComponentAt","haxe/ui/backend/ComponentBase.hx",1690,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1694_applyStyle,"haxe.ui.backend.ComponentBase","applyStyle",0x631544af,"haxe.ui.backend.ComponentBase.applyStyle","haxe/ui/backend/ComponentBase.hx",1694,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1698_mapEvent,"haxe.ui.backend.ComponentBase","mapEvent",0xd20c90aa,"haxe.ui.backend.ComponentBase.mapEvent","haxe/ui/backend/ComponentBase.hx",1698,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1702_unmapEvent,"haxe.ui.backend.ComponentBase","unmapEvent",0xa6714303,"haxe.ui.backend.ComponentBase.unmapEvent","haxe/ui/backend/ComponentBase.hx",1702,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1706_getComponentOffset,"haxe.ui.backend.ComponentBase","getComponentOffset",0x4d3b1806,"haxe.ui.backend.ComponentBase.getComponentOffset","haxe/ui/backend/ComponentBase.hx",1706,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1711_get_isNativeScroller,"haxe.ui.backend.ComponentBase","get_isNativeScroller",0xfd9077d0,"haxe.ui.backend.ComponentBase.get_isNativeScroller","haxe/ui/backend/ComponentBase.hx",1711,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1714_handleFrameworkProperty,"haxe.ui.backend.ComponentBase","handleFrameworkProperty",0xa1ec52df,"haxe.ui.backend.ComponentBase.handleFrameworkProperty","haxe/ui/backend/ComponentBase.hx",1714,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1723_createTextDisplay,"haxe.ui.backend.ComponentBase","createTextDisplay",0x90522d2d,"haxe.ui.backend.ComponentBase.createTextDisplay","haxe/ui/backend/ComponentBase.hx",1723,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1736_getTextDisplay,"haxe.ui.backend.ComponentBase","getTextDisplay",0x991a71eb,"haxe.ui.backend.ComponentBase.getTextDisplay","haxe/ui/backend/ComponentBase.hx",1736,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1741_hasTextDisplay,"haxe.ui.backend.ComponentBase","hasTextDisplay",0x030661a7,"haxe.ui.backend.ComponentBase.hasTextDisplay","haxe/ui/backend/ComponentBase.hx",1741,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1746_createTextInput,"haxe.ui.backend.ComponentBase","createTextInput",0xd908a635,"haxe.ui.backend.ComponentBase.createTextInput","haxe/ui/backend/ComponentBase.hx",1746,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1759_getTextInput,"haxe.ui.backend.ComponentBase","getTextInput",0x6ab19f73,"haxe.ui.backend.ComponentBase.getTextInput","haxe/ui/backend/ComponentBase.hx",1759,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1764_hasTextInput,"haxe.ui.backend.ComponentBase","hasTextInput",0xe8ace82f,"haxe.ui.backend.ComponentBase.hasTextInput","haxe/ui/backend/ComponentBase.hx",1764,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1772_createImageDisplay,"haxe.ui.backend.ComponentBase","createImageDisplay",0x0891b10f,"haxe.ui.backend.ComponentBase.createImageDisplay","haxe/ui/backend/ComponentBase.hx",1772,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1782_getImageDisplay,"haxe.ui.backend.ComponentBase","getImageDisplay",0xaf059291,"haxe.ui.backend.ComponentBase.getImageDisplay","haxe/ui/backend/ComponentBase.hx",1782,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1787_hasImageDisplay,"haxe.ui.backend.ComponentBase","hasImageDisplay",0xf38b6755,"haxe.ui.backend.ComponentBase.hasImageDisplay","haxe/ui/backend/ComponentBase.hx",1787,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1792_removeImageDisplay,"haxe.ui.backend.ComponentBase","removeImageDisplay",0x5aa9b257,"haxe.ui.backend.ComponentBase.removeImageDisplay","haxe/ui/backend/ComponentBase.hx",1792,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1805_getClassProperty,"haxe.ui.backend.ComponentBase","getClassProperty",0xa4e72303,"haxe.ui.backend.ComponentBase.getClassProperty","haxe/ui/backend/ComponentBase.hx",1805,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1822_setClassProperty,"haxe.ui.backend.ComponentBase","setClassProperty",0xfb291077,"haxe.ui.backend.ComponentBase.setClassProperty","haxe/ui/backend/ComponentBase.hx",1822,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1831_get_hasNativeEntry,"haxe.ui.backend.ComponentBase","get_hasNativeEntry",0xc806eeb6,"haxe.ui.backend.ComponentBase.get_hasNativeEntry","haxe/ui/backend/ComponentBase.hx",1831,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1838_getNativeConfigProperty,"haxe.ui.backend.ComponentBase","getNativeConfigProperty",0xa7c5ad98,"haxe.ui.backend.ComponentBase.getNativeConfigProperty","haxe/ui/backend/ComponentBase.hx",1838,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1843_getNativeConfigPropertyBool,"haxe.ui.backend.ComponentBase","getNativeConfigPropertyBool",0x717d09e2,"haxe.ui.backend.ComponentBase.getNativeConfigPropertyBool","haxe/ui/backend/ComponentBase.hx",1843,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1848_getNativeConfigProperties,"haxe.ui.backend.ComponentBase","getNativeConfigProperties",0x66b277f6,"haxe.ui.backend.ComponentBase.getNativeConfigProperties","haxe/ui/backend/ComponentBase.hx",1848,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1855_get_className,"haxe.ui.backend.ComponentBase","get_className",0x5f0aaa2e,"haxe.ui.backend.ComponentBase.get_className","haxe/ui/backend/ComponentBase.hx",1855,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1865_get_nodeName,"haxe.ui.backend.ComponentBase","get_nodeName",0xabe63442,"haxe.ui.backend.ComponentBase.get_nodeName","haxe/ui/backend/ComponentBase.hx",1865,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_1875_get_nativeClassName,"haxe.ui.backend.ComponentBase","get_nativeClassName",0x38df0fd7,"haxe.ui.backend.ComponentBase.get_nativeClassName","haxe/ui/backend/ComponentBase.hx",1875,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_9f66ddde5f9eb820_597_get_text,"haxe.ui.backend.ComponentBase","get_text",0xb1b9e102,"haxe.ui.backend.ComponentBase.get_text","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9f66ddde5f9eb820_630_set_text,"haxe.ui.backend.ComponentBase","set_text",0x60173a76,"haxe.ui.backend.ComponentBase.set_text","haxe/ui/macros/Macros.hx",630,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9f66ddde5f9eb820_583_get_value,"haxe.ui.backend.ComponentBase","get_value",0xf50a357c,"haxe.ui.backend.ComponentBase.get_value","haxe/ui/macros/Macros.hx",583,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9f66ddde5f9eb820_624_set_value,"haxe.ui.backend.ComponentBase","set_value",0xd85b2188,"haxe.ui.backend.ComponentBase.set_value","haxe/ui/macros/Macros.hx",624,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9f66ddde5f9eb820_597_get_disabled,"haxe.ui.backend.ComponentBase","get_disabled",0x356da451,"haxe.ui.backend.ComponentBase.get_disabled","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9f66ddde5f9eb820_648_set_disabled,"haxe.ui.backend.ComponentBase","set_disabled",0x4a66c7c5,"haxe.ui.backend.ComponentBase.set_disabled","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9f66ddde5f9eb820_583_get_tooltip,"haxe.ui.backend.ComponentBase","get_tooltip",0xee403bce,"haxe.ui.backend.ComponentBase.get_tooltip","haxe/ui/macros/Macros.hx",583,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9f66ddde5f9eb820_624_set_tooltip,"haxe.ui.backend.ComponentBase","set_tooltip",0xf8ad42da,"haxe.ui.backend.ComponentBase.set_tooltip","haxe/ui/macros/Macros.hx",624,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9f66ddde5f9eb820_590_get_tooltipRenderer,"haxe.ui.backend.ComponentBase","get_tooltipRenderer",0x1c433b31,"haxe.ui.backend.ComponentBase.get_tooltipRenderer","haxe/ui/macros/Macros.hx",590,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9f66ddde5f9eb820_648_set_tooltipRenderer,"haxe.ui.backend.ComponentBase","set_tooltipRenderer",0x58e02e3d,"haxe.ui.backend.ComponentBase.set_tooltipRenderer","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e3dc0ef695412051_700_cloneComponent,"haxe.ui.backend.ComponentBase","cloneComponent",0xa108e36c,"haxe.ui.backend.ComponentBase.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_9f66ddde5f9eb820_521_self,"haxe.ui.backend.ComponentBase","self",0x076e8e58,"haxe.ui.backend.ComponentBase.self","haxe/ui/macros/Macros.hx",521,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_37_boot,"haxe.ui.backend.ComponentBase","boot",0xfc3986fe,"haxe.ui.backend.ComponentBase.boot","haxe/ui/backend/ComponentBase.hx",37,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_520_boot,"haxe.ui.backend.ComponentBase","boot",0xfc3986fe,"haxe.ui.backend.ComponentBase.boot","haxe/ui/backend/ComponentBase.hx",520,0xb60bbb7d)
namespace haxe{
namespace ui{
namespace backend{

void ComponentBase_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_37_new)
HXLINE(1873)		this->_nativeClassName = null();
HXLINE(1863)		this->_nodeName = null();
HXLINE(1853)		this->_className = null();
HXLINE(1325)		this->_depth = -1;
HXLINE(1323)		this->_invalidateCount = 0;
HXLINE(1322)		this->_isDisposed = false;
HXLINE(1321)		this->_isInitialized = false;
HXLINE(1320)		this->_isValidating = false;
HXLINE(1319)		this->_isAllInvalid = false;
HXLINE(1318)		this->_delayedInvalidationFlags =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(1317)		this->_invalidationFlags =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(1302)		this->_style = null();
HXLINE(1248)		this->_componentClipRect = null();
HXLINE(1212)		this->_screenBounds = null();
HXLINE(1168)		this->_top = ((Float)0);
HXLINE(1152)		this->_left = ((Float)0);
HXLINE(1036)		this->_hasScreen = null();
HXLINE( 858)		this->_cachedPercentHeight = null();
HXLINE( 857)		this->_cachedPercentWidth = null();
HXLINE( 674)		this->_layoutLocked = false;
HXLINE( 672)		this->_layout = null();
HXLINE( 634)		this->_pausedEvents = null();
HXLINE( 565)		this->_interactivityDisabledCounter = 0;
HXLINE( 564)		this->_interactivityDisabled = false;
HXLINE( 340)		this->_internalEventsClass = null();
HXLINE( 339)		this->_internalEvents = null();
HXLINE( 124)		this->_parentComponent = null();
HXLINE(  99)		this->_id = null();
HXLINE(  90)		this->_componentReady = false;
HXLINE(  42)		super::__construct();
HXLINE(  43)		this->behaviours =  ::haxe::ui::behaviours::Behaviours_obj::__alloc( HX_CTX ,::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this)));
            	}

Dynamic ComponentBase_obj::__CreateEmpty() { return new ComponentBase_obj; }

void *ComponentBase_obj::_hx_vtable = 0;

Dynamic ComponentBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentBase_obj > _hx_result = new ComponentBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentBase_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

static ::haxe::ui::core::IComponentContainer_obj _hx_haxe_ui_backend_ComponentBase__hx_haxe_ui_core_IComponentContainer= {
	(  ::haxe::ui::core::Component (::hx::Object::*)( ::haxe::ui::core::Component))&::haxe::ui::backend::ComponentBase_obj::addComponent,
	(  ::haxe::ui::core::Component (::hx::Object::*)( ::haxe::ui::core::Component,::hx::Null< bool > ,::hx::Null< bool > ))&::haxe::ui::backend::ComponentBase_obj::removeComponent,
	( bool (::hx::Object::*)( ::haxe::ui::core::Component))&::haxe::ui::backend::ComponentBase_obj::containsComponent,
};

static ::haxe::ui::core::IEventDispatcher_obj _hx_haxe_ui_backend_ComponentBase__hx_haxe_ui_core_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< int > ))&::haxe::ui::backend::ComponentBase_obj::registerEvent,
	( bool (::hx::Object::*)(::String, ::Dynamic))&::haxe::ui::backend::ComponentBase_obj::hasEvent,
	( void (::hx::Object::*)(::String, ::Dynamic))&::haxe::ui::backend::ComponentBase_obj::unregisterEvent,
	( void (::hx::Object::*)( ::Dynamic, ::haxe::ui::core::Component))&::haxe::ui::backend::ComponentBase_obj::dispatch,
	( void (::hx::Object::*)())&::haxe::ui::backend::ComponentBase_obj::removeAllListeners,
};

static ::haxe::ui::core::IClonable_obj _hx_haxe_ui_backend_ComponentBase__hx_haxe_ui_core_IClonable= {
	(  ::Dynamic (::hx::Object::*)())&::haxe::ui::backend::ComponentBase_obj::cloneComponent_2aa2127b,
	(  ::Dynamic (::hx::Object::*)())&::haxe::ui::backend::ComponentBase_obj::self_2aa2127b,
	( void (::hx::Object::*)( ::haxe::ui::core::Component))&::haxe::ui::backend::ComponentBase_obj::postCloneComponent,
};

 ::Dynamic ComponentBase_obj::self_2aa2127b() {
			return self();
}

 ::Dynamic ComponentBase_obj::cloneComponent_2aa2127b() {
			return cloneComponent();
}
void *ComponentBase_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xf8a1c034: return &_hx_haxe_ui_backend_ComponentBase__hx_haxe_ui_core_IComponentContainer;
		case (int)0x3e4a18f1: return &_hx_haxe_ui_backend_ComponentBase__hx_haxe_ui_core_IEventDispatcher;
		case (int)0x7e9cb512: return &_hx_haxe_ui_backend_ComponentBase__hx_haxe_ui_core_IClonable;
	}
	return super::_hx_getInterface(inHash);
}

void ComponentBase_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_85_registerBehaviours)
HXLINE( 667)		this->behaviours->_hx_register(HX_("text",ad,cc,f9,4c),::hx::ClassOf< ::haxe::ui::backend::ComponentTextBehaviour >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::backend::ComponentValueBehaviour >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("disabled",7c,41,04,7c),::hx::ClassOf< ::haxe::ui::backend::ComponentDisabledBehaviour >(),null());
HXLINE( 671)		this->behaviours->_hx_register(HX_("tooltip",03,ad,8c,6a),::hx::ClassOf< ::haxe::ui::backend::ComponentToolTipBehaviour >(),null());
HXDLIN( 671)		this->behaviours->_hx_register(HX_("tooltipRenderer",66,69,e3,ff),::hx::ClassOf< ::haxe::ui::backend::ComponentToolTipRendererBehaviour >(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,registerBehaviours,(void))

bool ComponentBase_obj::get_isReady(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_96_get_isReady)
HXDLIN(  96)		return this->_componentReady;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_isReady,return )

::String ComponentBase_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_105_get_id)
HXDLIN( 105)		return this->_id;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_id,return )

::String ComponentBase_obj::set_id(::String value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_107_set_id)
HXLINE( 108)		if ((this->_id != value)) {
HXLINE( 109)			this->_id = value;
            		}
HXLINE( 113)		return this->_id;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_id,return )

 ::haxe::ui::core::Component ComponentBase_obj::get_parentComponent(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_129_get_parentComponent)
HXDLIN( 129)		return this->_parentComponent;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_parentComponent,return )

 ::haxe::ui::core::Component ComponentBase_obj::set_parentComponent( ::haxe::ui::core::Component value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_132_set_parentComponent)
HXLINE( 133)		this->_parentComponent = value;
HXLINE( 134)		if (::hx::IsNotNull( value )) {
HXLINE( 135)			this->onParentComponentSet();
            		}
HXLINE( 137)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_parentComponent,return )

void ComponentBase_obj::onParentComponentSet(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_141_onParentComponentSet)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,onParentComponentSet,(void))

bool ComponentBase_obj::get_isInScroller(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_148_get_isInScroller)
HXLINE( 149)		::Dynamic scroller = this->findScroller();
HXLINE( 150)		if (::hx::IsNull( scroller )) {
HXLINE( 151)			return false;
            		}
HXLINE( 154)		return ::haxe::ui::core::IScroller_obj::get_isScrollable(scroller);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_isInScroller,return )

::Dynamic ComponentBase_obj::findScroller(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_158_findScroller)
HXLINE( 159)		::Dynamic view = null();
HXLINE( 160)		 ::haxe::ui::backend::ComponentBase ref = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 161)		while(::hx::IsNotNull( ref )){
HXLINE( 162)			if (::Std_obj::isOfType(ref,::hx::ClassOf< ::haxe::ui::core::IScroller >())) {
HXLINE( 163)				view =  ::hx::interface_check(ref,0x69483d2a);
HXLINE( 164)				goto _hx_goto_9;
            			}
HXLINE( 166)			ref = ref->get_parentComponent();
            		}
            		_hx_goto_9:;
HXLINE( 168)		return view;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,findScroller,return )

bool ComponentBase_obj::containsChildComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_171_containsChildComponent)
HXLINE( 172)		bool contains;
HXDLIN( 172)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 172)			contains = (this->_children->indexOf(child,null()) != -1);
            		}
            		else {
HXLINE( 172)			contains = false;
            		}
HXLINE( 173)		bool _hx_tmp;
HXDLIN( 173)		bool _hx_tmp1;
HXDLIN( 173)		if (recursive) {
HXLINE( 173)			_hx_tmp1 = !(contains);
            		}
            		else {
HXLINE( 173)			_hx_tmp1 = false;
            		}
HXDLIN( 173)		if (_hx_tmp1) {
HXLINE( 173)			_hx_tmp = ::hx::IsNotNull( this->_children );
            		}
            		else {
HXLINE( 173)			_hx_tmp = false;
            		}
HXDLIN( 173)		if (_hx_tmp) {
HXLINE( 174)			int _g = 0;
HXDLIN( 174)			::Array< ::Dynamic> _g1 = this->_children;
HXDLIN( 174)			while((_g < _g1->length)){
HXLINE( 174)				 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 174)				_g = (_g + 1);
HXLINE( 175)				contains = c->containsChildComponent(child,recursive);
HXLINE( 176)				if (contains) {
HXLINE( 177)					goto _hx_goto_11;
            				}
            			}
            			_hx_goto_11:;
            		}
HXLINE( 181)		return contains;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,containsChildComponent,return )

::Array< ::Dynamic> ComponentBase_obj::get_childComponents(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_192_get_childComponents)
HXLINE( 193)		if (::hx::IsNull( this->_children )) {
HXLINE( 194)			return ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 196)		return this->_children;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_childComponents,return )

 ::haxe::ui::core::Component ComponentBase_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_208_addComponent)
HXDLIN( 208)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,addComponent,return )

 ::haxe::ui::core::Component ComponentBase_obj::addComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_224_addComponentAt)
HXDLIN( 224)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,addComponentAt,return )

 ::haxe::ui::core::Component ComponentBase_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_236_removeComponent)
HXDLIN( 236)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentBase_obj,removeComponent,return )

bool ComponentBase_obj::containsComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_240_containsComponent)
HXDLIN( 240)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,containsComponent,return )

 ::haxe::ui::core::Component ComponentBase_obj::removeComponentAt(int index,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_252_removeComponentAt)
HXDLIN( 252)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentBase_obj,removeComponentAt,return )

void ComponentBase_obj::moveComponentToBack(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_259_moveComponentToBack)
HXLINE( 260)		bool _hx_tmp;
HXDLIN( 260)		if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE( 260)			_hx_tmp = (this->get_parentComponent()->get_numComponents() <= 1);
            		}
            		else {
HXLINE( 260)			_hx_tmp = true;
            		}
HXDLIN( 260)		if (_hx_tmp) {
HXLINE( 261)			return;
            		}
HXLINE( 264)		this->get_parentComponent()->setComponentIndex(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,moveComponentToBack,(void))

void ComponentBase_obj::moveComponentBackward(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_270_moveComponentBackward)
HXLINE( 271)		bool _hx_tmp;
HXDLIN( 271)		if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE( 271)			_hx_tmp = (this->get_parentComponent()->get_numComponents() <= 1);
            		}
            		else {
HXLINE( 271)			_hx_tmp = true;
            		}
HXDLIN( 271)		if (_hx_tmp) {
HXLINE( 272)			return;
            		}
HXLINE( 275)		int index = this->get_parentComponent()->getComponentIndex(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ));
HXLINE( 276)		if ((index == 0)) {
HXLINE( 277)			return;
            		}
HXLINE( 280)		this->get_parentComponent()->setComponentIndex(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),(index - 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,moveComponentBackward,(void))

void ComponentBase_obj::moveComponentToFront(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_287_moveComponentToFront)
HXLINE( 288)		bool _hx_tmp;
HXDLIN( 288)		if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE( 288)			_hx_tmp = (this->get_parentComponent()->get_numComponents() <= 1);
            		}
            		else {
HXLINE( 288)			_hx_tmp = true;
            		}
HXDLIN( 288)		if (_hx_tmp) {
HXLINE( 289)			return;
            		}
HXLINE( 292)		 ::haxe::ui::core::Component _hx_tmp1 = this->get_parentComponent();
HXDLIN( 292)		_hx_tmp1->setComponentIndex(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),(this->get_parentComponent()->get_numComponents() - 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,moveComponentToFront,(void))

void ComponentBase_obj::moveComponentFrontward(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_298_moveComponentFrontward)
HXLINE( 299)		bool _hx_tmp;
HXDLIN( 299)		if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE( 299)			_hx_tmp = (this->get_parentComponent()->get_numComponents() <= 1);
            		}
            		else {
HXLINE( 299)			_hx_tmp = true;
            		}
HXDLIN( 299)		if (_hx_tmp) {
HXLINE( 300)			return;
            		}
HXLINE( 303)		int index = this->get_parentComponent()->getComponentIndex(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ));
HXLINE( 304)		if ((index == (this->get_parentComponent()->get_numComponents() - 1))) {
HXLINE( 305)			return;
            		}
HXLINE( 308)		this->get_parentComponent()->setComponentIndex(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),(index + 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,moveComponentFrontward,(void))

 ::haxe::ui::core::Component ComponentBase_obj::get_bottomComponent(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_315_get_bottomComponent)
HXLINE( 316)		bool _hx_tmp;
HXDLIN( 316)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 316)			_hx_tmp = (this->_children->length == 0);
            		}
            		else {
HXLINE( 316)			_hx_tmp = true;
            		}
HXDLIN( 316)		if (_hx_tmp) {
HXLINE( 317)			return null();
            		}
HXLINE( 319)		return this->_children->__get(0).StaticCast<  ::haxe::ui::core::Component >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_bottomComponent,return )

 ::haxe::ui::core::Component ComponentBase_obj::get_topComponent(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_326_get_topComponent)
HXLINE( 327)		bool _hx_tmp;
HXDLIN( 327)		if (::hx::IsNotNull( this->_children )) {
HXLINE( 327)			_hx_tmp = (this->_children->length == 0);
            		}
            		else {
HXLINE( 327)			_hx_tmp = true;
            		}
HXDLIN( 327)		if (_hx_tmp) {
HXLINE( 328)			return null();
            		}
HXLINE( 330)		return this->_children->__get((this->_children->length - 1)).StaticCast<  ::haxe::ui::core::Component >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_topComponent,return )

void ComponentBase_obj::postCloneComponent( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_333_postCloneComponent)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,postCloneComponent,(void))

void ComponentBase_obj::registerInternalEvents(::hx::Class eventsClass,::hx::Null< bool >  __o_reregister){
            		bool reregister = __o_reregister.Default(false);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_341_registerInternalEvents)
HXLINE( 342)		bool _hx_tmp;
HXDLIN( 342)		if (::hx::IsNull( this->_internalEvents )) {
HXLINE( 342)			_hx_tmp = ::hx::IsNotNull( eventsClass );
            		}
            		else {
HXLINE( 342)			_hx_tmp = false;
            		}
HXDLIN( 342)		if (_hx_tmp) {
HXLINE( 343)			this->_internalEvents = ( ( ::haxe::ui::events::Events)(::Type_obj::createInstance(eventsClass,::cpp::VirtualArray_obj::__new(1)->init(0,::hx::ObjectPtr<OBJ_>(this)))) );
HXLINE( 344)			this->_internalEvents->_hx_register();
            		}
HXLINE( 345)		bool _hx_tmp1;
HXDLIN( 345)		if ((reregister == true)) {
HXLINE( 345)			_hx_tmp1 = ::hx::IsNotNull( this->_internalEvents );
            		}
            		else {
HXLINE( 345)			_hx_tmp1 = false;
            		}
HXDLIN( 345)		if (_hx_tmp1) {
HXLINE( 346)			this->_internalEvents->_hx_register();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,registerInternalEvents,(void))

void ComponentBase_obj::unregisterInternalEvents(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_349_unregisterInternalEvents)
HXLINE( 350)		if (::hx::IsNull( this->_internalEvents )) {
HXLINE( 351)			return;
            		}
HXLINE( 353)		this->_internalEvents->unregister();
HXLINE( 354)		this->_internalEvents = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,unregisterInternalEvents,(void))

void ComponentBase_obj::registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  __o_priority){
            		int priority = __o_priority.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_363_registerEvent)
HXLINE( 364)		bool _hx_tmp;
HXDLIN( 364)		if ((::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this))->classes->indexOf(HX_(":mobile",1c,94,54,2b),null()) != -1)) {
HXLINE( 367)			::String _hx_tmp1 = ::Std_obj::string(type);
HXDLIN( 367)			if ((_hx_tmp1 != ::Std_obj::string(::haxe::ui::events::MouseEvent_obj::MOUSE_OVER))) {
HXLINE( 367)				::String _hx_tmp1 = ::Std_obj::string(type);
HXLINE( 364)				_hx_tmp = (_hx_tmp1 == ::Std_obj::string(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT));
            			}
            			else {
HXLINE( 364)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 364)			_hx_tmp = false;
            		}
HXDLIN( 364)		if (_hx_tmp) {
HXLINE( 368)			return;
            		}
HXLINE( 371)		bool _hx_tmp1;
HXDLIN( 371)		if ((this->get_disabled() == true)) {
HXLINE( 371)			_hx_tmp1 = (this->isInteractiveEvent(type) == true);
            		}
            		else {
HXLINE( 371)			_hx_tmp1 = false;
            		}
HXDLIN( 371)		if (_hx_tmp1) {
HXLINE( 372)			if (::hx::IsNull( this->_disabledEvents )) {
HXLINE( 373)				this->_disabledEvents =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
            			}
HXLINE( 375)			this->_disabledEvents->add(type,listener,priority);
HXLINE( 376)			return;
            		}
HXLINE( 379)		if (::hx::IsNull( this->_hx___events )) {
HXLINE( 380)			this->_hx___events =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 382)		if ((this->_hx___events->add(type,listener,priority) == true)) {
HXLINE( 383)			this->mapEvent(type,this->_onMappedEvent_dyn());
            		}
HXLINE( 385)		this->checkWatchForMoveEvents();
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentBase_obj,registerEvent,(void))

bool ComponentBase_obj::hasEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_392_hasEvent)
HXLINE( 393)		if (::hx::IsNull( this->_hx___events )) {
HXLINE( 394)			return false;
            		}
HXLINE( 396)		return this->_hx___events->contains(type,listener);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,hasEvent,return )

void ComponentBase_obj::unregisterEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_403_unregisterEvent)
HXLINE( 404)		bool _hx_tmp;
HXDLIN( 404)		if (::hx::IsNotNull( this->_disabledEvents )) {
HXLINE( 404)			_hx_tmp = !(this->_interactivityDisabled);
            		}
            		else {
HXLINE( 404)			_hx_tmp = false;
            		}
HXDLIN( 404)		if (_hx_tmp) {
HXLINE( 405)			this->_disabledEvents->remove(type,listener);
            		}
HXLINE( 408)		if (::hx::IsNotNull( this->_hx___events )) {
HXLINE( 409)			if ((this->_hx___events->remove(type,listener) == true)) {
HXLINE( 410)				this->unmapEvent(type,this->_onMappedEvent_dyn());
            			}
HXLINE( 412)			this->checkWatchForMoveEvents();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,unregisterEvent,(void))

void ComponentBase_obj::unregisterEvents(::String type){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_420_unregisterEvents)
HXLINE( 421)		bool _hx_tmp;
HXDLIN( 421)		if (::hx::IsNotNull( this->_disabledEvents )) {
HXLINE( 421)			_hx_tmp = !(this->_interactivityDisabled);
            		}
            		else {
HXLINE( 421)			_hx_tmp = false;
            		}
HXDLIN( 421)		if (_hx_tmp) {
HXLINE( 422)			this->_disabledEvents->removeAll(type);
            		}
HXLINE( 425)		if (::hx::IsNotNull( this->_hx___events )) {
HXLINE( 426)			this->_hx___events->removeAll(type);
HXLINE( 427)			this->unmapEvent(type,this->_onMappedEvent_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,unregisterEvents,(void))

void ComponentBase_obj::dispatch( ::Dynamic event, ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_435_dispatch)
HXLINE( 436)		bool _hx_tmp;
HXDLIN( 436)		if (::hx::IsNotNull( this->_pausedEvents )) {
HXLINE( 436)			_hx_tmp = (this->_pausedEvents->indexOf(( ( ::haxe::ui::events::UIEvent)(event) )->type,null()) != -1);
            		}
            		else {
HXLINE( 436)			_hx_tmp = false;
            		}
HXDLIN( 436)		if (_hx_tmp) {
HXLINE( 437)			return;
            		}
HXLINE( 439)		if (::hx::IsNotNull( event )) {
HXLINE( 440)			if (::hx::IsNotNull( this->_hx___events )) {
HXLINE( 441)				this->_hx___events->invoke(( ( ::haxe::ui::events::UIEvent)(event) )->type,event,::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this)));
            			}
HXLINE( 444)			bool _hx_tmp;
HXDLIN( 444)			bool _hx_tmp1;
HXDLIN( 444)			if ((( ( ::haxe::ui::events::UIEvent)(event) )->bubble == true)) {
HXLINE( 444)				_hx_tmp1 = (( ( ::haxe::ui::events::UIEvent)(event) )->canceled == false);
            			}
            			else {
HXLINE( 444)				_hx_tmp1 = false;
            			}
HXDLIN( 444)			if (_hx_tmp1) {
HXLINE( 444)				_hx_tmp = ::hx::IsNotNull( this->get_parentComponent() );
            			}
            			else {
HXLINE( 444)				_hx_tmp = false;
            			}
HXDLIN( 444)			if (_hx_tmp) {
HXLINE( 445)				this->get_parentComponent()->dispatch(event,null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,dispatch,(void))

void ComponentBase_obj::dispatchRecursively( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_450_dispatchRecursively)
HXLINE( 451)		this->dispatch(event,null());
HXLINE( 452)		{
HXLINE( 452)			int _g = 0;
HXDLIN( 452)			::Array< ::Dynamic> _g1;
HXDLIN( 452)			if (::hx::IsNull( this->_children )) {
HXLINE( 452)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 452)				_g1 = this->_children;
            			}
HXDLIN( 452)			while((_g < _g1->length)){
HXLINE( 452)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 452)				_g = (_g + 1);
HXLINE( 453)				child->dispatchRecursively(event);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,dispatchRecursively,(void))

void ComponentBase_obj::removeAllListeners(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_458_removeAllListeners)
HXDLIN( 458)		if (::hx::IsNotNull( this->_hx___events )) {
HXLINE( 459)			this->_hx___events->removeAll(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,removeAllListeners,(void))

void ComponentBase_obj::dispatchRecursivelyWhen( ::Dynamic event, ::Dynamic condition){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_463_dispatchRecursivelyWhen)
HXLINE( 464)		if (::hx::IsEq( condition(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) )),true )) {
HXLINE( 465)			this->dispatch(event,null());
            		}
HXLINE( 467)		{
HXLINE( 467)			int _g = 0;
HXDLIN( 467)			::Array< ::Dynamic> _g1;
HXDLIN( 467)			if (::hx::IsNull( this->_children )) {
HXLINE( 467)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 467)				_g1 = this->_children;
            			}
HXDLIN( 467)			while((_g < _g1->length)){
HXLINE( 467)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 467)				_g = (_g + 1);
HXLINE( 468)				if (::hx::IsEq( condition(child),true )) {
HXLINE( 469)					child->dispatchRecursivelyWhen(event,condition);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,dispatchRecursivelyWhen,(void))

void ComponentBase_obj::checkWatchForMoveEvents(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_476_checkWatchForMoveEvents)
HXDLIN( 476)		bool _hx_tmp;
HXDLIN( 476)		if (!(this->hasEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OVER,null()))) {
HXDLIN( 476)			_hx_tmp = this->hasEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT,null());
            		}
            		else {
HXDLIN( 476)			_hx_tmp = true;
            		}
HXDLIN( 476)		if (_hx_tmp) {
HXLINE( 477)			if (!(this->hasEvent(::haxe::ui::events::UIEvent_obj::MOVE,this->_onMoveInternal_dyn()))) {
HXLINE( 478)				this->registerEvent(::haxe::ui::events::UIEvent_obj::MOVE,this->_onMoveInternal_dyn(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,checkWatchForMoveEvents,(void))

void ComponentBase_obj::_onMoveInternal( ::haxe::ui::events::UIEvent _){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_485__onMoveInternal)
HXDLIN( 485)		this->checkComponentBounds(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,_onMoveInternal,(void))

void ComponentBase_obj::checkComponentBounds(::hx::Null< bool >  __o_checkNextFrame){
            		bool checkNextFrame = __o_checkNextFrame.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_489_checkComponentBounds)
HXDLIN( 489)		 ::haxe::ui::backend::ComponentBase _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 490)		bool _hx_tmp;
HXDLIN( 490)		if (::hx::IsNotNull( ::haxe::ui::core::Screen_obj::get_instance()->currentMouseX )) {
HXLINE( 490)			_hx_tmp = ::hx::IsNull( ::haxe::ui::core::Screen_obj::get_instance()->currentMouseY );
            		}
            		else {
HXLINE( 490)			_hx_tmp = true;
            		}
HXDLIN( 490)		if (_hx_tmp) {
HXLINE( 491)			return;
            		}
HXLINE( 494)		bool hasHover = (::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this))->classes->indexOf(HX_(":hover",42,d3,17,5c),null()) != -1);
HXLINE( 495)		bool _hx_tmp1;
HXDLIN( 495)		if (!(hasHover)) {
HXLINE( 495)			 ::haxe::ui::geom::Rectangle _hx_tmp = this->get_screenBounds();
HXDLIN( 495)			 ::Dynamic _hx_tmp2 = ::haxe::ui::core::Screen_obj::get_instance()->currentMouseX;
HXDLIN( 495)			_hx_tmp1 = _hx_tmp->containsPoint(( (Float)(_hx_tmp2) ),( (Float)(::haxe::ui::core::Screen_obj::get_instance()->currentMouseY) ));
            		}
            		else {
HXLINE( 495)			_hx_tmp1 = false;
            		}
HXDLIN( 495)		if (_hx_tmp1) {
HXLINE( 496)			 ::haxe::ui::events::MouseEvent mouseEvent =  ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::MouseEvent_obj::MOUSE_OVER);
HXLINE( 497)			mouseEvent->screenX = ( (Float)(::haxe::ui::core::Screen_obj::get_instance()->currentMouseX) );
HXLINE( 498)			mouseEvent->screenY = ( (Float)(::haxe::ui::core::Screen_obj::get_instance()->currentMouseY) );
HXLINE( 499)			this->dispatch(mouseEvent,null());
            		}
            		else {
HXLINE( 500)			bool _hx_tmp;
HXDLIN( 500)			if (hasHover) {
HXLINE( 500)				 ::haxe::ui::geom::Rectangle _hx_tmp1 = this->get_screenBounds();
HXDLIN( 500)				 ::Dynamic _hx_tmp2 = ::haxe::ui::core::Screen_obj::get_instance()->currentMouseX;
HXDLIN( 500)				_hx_tmp = !(_hx_tmp1->containsPoint(( (Float)(_hx_tmp2) ),( (Float)(::haxe::ui::core::Screen_obj::get_instance()->currentMouseY) )));
            			}
            			else {
HXLINE( 500)				_hx_tmp = false;
            			}
HXDLIN( 500)			if (_hx_tmp) {
HXLINE( 501)				 ::haxe::ui::events::MouseEvent mouseEvent =  ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::MouseEvent_obj::MOUSE_OUT);
HXLINE( 502)				mouseEvent->screenX = ( (Float)(::haxe::ui::core::Screen_obj::get_instance()->currentMouseX) );
HXLINE( 503)				mouseEvent->screenY = ( (Float)(::haxe::ui::core::Screen_obj::get_instance()->currentMouseY) );
HXLINE( 504)				this->dispatch(mouseEvent,null());
            			}
            		}
HXLINE( 507)		if (checkNextFrame) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::backend::ComponentBase,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_509_checkComponentBounds)
HXLINE( 509)				_gthis->checkComponentBounds(false);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 508)			::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(_gthis)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,checkComponentBounds,(void))

void ComponentBase_obj::_onMappedEvent( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_516__onMappedEvent)
HXDLIN( 516)		this->dispatch(event,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,_onMappedEvent,(void))

bool ComponentBase_obj::isInteractiveEvent(::String type){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_527_isInteractiveEvent)
HXDLIN( 527)		return (::haxe::ui::backend::ComponentBase_obj::INTERACTIVE_EVENTS->indexOf(type,null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,isInteractiveEvent,return )

void ComponentBase_obj::disableInteractiveEvents(bool disable){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_531_disableInteractiveEvents)
HXDLIN( 531)		if ((disable == true)) {
HXLINE( 532)			if (::hx::IsNotNull( this->_hx___events )) {
HXLINE( 533)				 ::Dynamic eventType = this->_hx___events->keys();
HXDLIN( 533)				while(( (bool)(eventType->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 533)					::String eventType1 = ( (::String)(eventType->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 534)					if (!(this->isInteractiveEvent(eventType1))) {
HXLINE( 535)						continue;
            					}
HXLINE( 537)					 ::haxe::ui::util::FunctionArray listeners = this->_hx___events->listeners(eventType1);
HXLINE( 538)					if (::hx::IsNotNull( listeners )) {
HXLINE( 539)						 ::Dynamic listener = listeners->copy()->iterator();
HXDLIN( 539)						while(( (bool)(listener->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 539)							 ::haxe::ui::util::_Listener::ListenerInternal listener1 = ( ( ::haxe::ui::util::_Listener::ListenerInternal)(listener->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 540)							if (::hx::IsNull( this->_disabledEvents )) {
HXLINE( 541)								this->_disabledEvents =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
            							}
HXLINE( 543)							 ::haxe::ui::util::EventMap _hx_tmp = this->_disabledEvents;
HXDLIN( 543)							_hx_tmp->add(eventType1,::haxe::ui::util::_Listener::Listener_Impl__obj::toFunc(listener1),null());
HXLINE( 544)							this->unregisterEvent(eventType1,::haxe::ui::util::_Listener::Listener_Impl__obj::toFunc(listener1));
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 550)			if (::hx::IsNotNull( this->_disabledEvents )) {
HXLINE( 551)				{
HXLINE( 551)					 ::Dynamic eventType = this->_disabledEvents->keys();
HXDLIN( 551)					while(( (bool)(eventType->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 551)						::String eventType1 = ( (::String)(eventType->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 552)						 ::haxe::ui::util::FunctionArray listeners = this->_disabledEvents->listeners(eventType1);
HXLINE( 553)						if (::hx::IsNotNull( listeners )) {
HXLINE( 554)							 ::Dynamic listener = listeners->copy()->iterator();
HXDLIN( 554)							while(( (bool)(listener->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 554)								 ::haxe::ui::util::_Listener::ListenerInternal listener1 = ( ( ::haxe::ui::util::_Listener::ListenerInternal)(listener->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 555)								this->registerEvent(eventType1,::haxe::ui::util::_Listener::Listener_Impl__obj::toFunc(listener1),null());
            							}
            						}
            					}
            				}
HXLINE( 559)				this->_disabledEvents = null();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,disableInteractiveEvents,(void))

void ComponentBase_obj::disableInteractivity(bool disable,::hx::Null< bool >  __o_recursive,::hx::Null< bool >  __o_updateStyle,::hx::Null< bool >  __o_force){
            		bool recursive = __o_recursive.Default(true);
            		bool updateStyle = __o_updateStyle.Default(false);
            		bool force = __o_force.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_569_disableInteractivity)
HXLINE( 570)		if ((force == true)) {
HXLINE( 571)			this->_interactivityDisabledCounter = 0;
            		}
HXLINE( 573)		if ((disable == true)) {
HXLINE( 574)			this->_interactivityDisabledCounter++;
            		}
            		else {
HXLINE( 576)			this->_interactivityDisabledCounter--;
            		}
HXLINE( 579)		bool _hx_tmp;
HXDLIN( 579)		if ((this->_interactivityDisabledCounter > 0)) {
HXLINE( 579)			_hx_tmp = (this->_interactivityDisabled == false);
            		}
            		else {
HXLINE( 579)			_hx_tmp = false;
            		}
HXDLIN( 579)		if (_hx_tmp) {
HXLINE( 580)			this->_interactivityDisabled = true;
HXLINE( 581)			if ((updateStyle == true)) {
HXLINE( 582)				::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this))->swapClass(HX_(":disabled",b6,0b,b6,46),HX_(":hover",42,d3,17,5c),null(),null());
            			}
HXLINE( 584)			this->handleDisabled(true);
HXLINE( 585)			this->disableInteractiveEvents(true);
HXLINE( 586)			this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::DISABLED,null(),null()),null());
            		}
            		else {
HXLINE( 591)			bool _hx_tmp;
HXDLIN( 591)			if ((this->_interactivityDisabledCounter < 1)) {
HXLINE( 591)				_hx_tmp = (this->_interactivityDisabled == true);
            			}
            			else {
HXLINE( 591)				_hx_tmp = false;
            			}
HXDLIN( 591)			if (_hx_tmp) {
HXLINE( 592)				this->_interactivityDisabled = false;
HXLINE( 593)				if ((updateStyle == true)) {
HXLINE( 594)					::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this))->removeClass(HX_(":disabled",b6,0b,b6,46),null(),null());
            				}
HXLINE( 596)				this->handleDisabled(false);
HXLINE( 597)				this->disableInteractiveEvents(false);
HXLINE( 598)				this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::ENABLED,null(),null()),null());
            			}
            		}
HXLINE( 606)		if ((recursive == true)) {
HXLINE( 607)			int _g = 0;
HXDLIN( 607)			::Array< ::Dynamic> _g1;
HXDLIN( 607)			if (::hx::IsNull( this->_children )) {
HXLINE( 607)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 607)				_g1 = this->_children;
            			}
HXDLIN( 607)			while((_g < _g1->length)){
HXLINE( 607)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 607)				_g = (_g + 1);
HXLINE( 608)				child->disableInteractivity(disable,recursive,updateStyle,null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(ComponentBase_obj,disableInteractivity,(void))

void ComponentBase_obj::unregisterEventsInternal(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_614_unregisterEventsInternal)
HXDLIN( 614)		if (::hx::IsNotNull( this->_hx___events )) {
HXLINE( 615)			::Array< ::String > copy = ::Array_obj< ::String >::__new(0);
HXLINE( 616)			{
HXLINE( 616)				 ::Dynamic eventType = this->_hx___events->keys();
HXDLIN( 616)				while(( (bool)(eventType->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 616)					::String eventType1 = ( (::String)(eventType->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 617)					copy->push(eventType1);
            				}
            			}
HXLINE( 619)			{
HXLINE( 619)				int _g = 0;
HXDLIN( 619)				while((_g < copy->length)){
HXLINE( 619)					::String eventType = copy->__get(_g);
HXDLIN( 619)					_g = (_g + 1);
HXLINE( 620)					 ::haxe::ui::util::FunctionArray listeners = this->_hx___events->listeners(eventType);
HXLINE( 621)					if (::hx::IsNotNull( listeners )) {
HXLINE( 622)						 ::Dynamic listener = listeners->iterator();
HXDLIN( 622)						while(( (bool)(listener->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 622)							 ::haxe::ui::util::_Listener::ListenerInternal listener1 = ( ( ::haxe::ui::util::_Listener::ListenerInternal)(listener->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 623)							if (::hx::IsNotNull( listener1 )) {
HXLINE( 624)								 ::haxe::ui::util::EventMap _hx_tmp = this->_hx___events;
HXDLIN( 624)								if ((_hx_tmp->remove(eventType,::haxe::ui::util::_Listener::Listener_Impl__obj::toFunc(listener1)) == true)) {
HXLINE( 625)									this->unmapEvent(eventType,this->_onMappedEvent_dyn());
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,unregisterEventsInternal,(void))

void ComponentBase_obj::pauseEvent(::String type,::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_635_pauseEvent)
HXLINE( 636)		if (::hx::IsNull( this->_pausedEvents )) {
HXLINE( 637)			this->_pausedEvents = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 639)		if ((this->_pausedEvents->indexOf(type,null()) == -1)) {
HXLINE( 640)			this->_pausedEvents->push(type);
            		}
HXLINE( 643)		if ((recursive == true)) {
HXLINE( 644)			int _g = 0;
HXDLIN( 644)			::Array< ::Dynamic> _g1;
HXDLIN( 644)			if (::hx::IsNull( this->_children )) {
HXLINE( 644)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 644)				_g1 = this->_children;
            			}
HXDLIN( 644)			while((_g < _g1->length)){
HXLINE( 644)				 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 644)				_g = (_g + 1);
HXLINE( 645)				c->pauseEvent(type,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,pauseEvent,(void))

void ComponentBase_obj::resumeEvent(::String type,::hx::Null< bool >  __o_nextFrame,::hx::Null< bool >  __o_recursive){
            		bool nextFrame = __o_nextFrame.Default(false);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_650_resumeEvent)
HXDLIN( 650)		 ::haxe::ui::backend::ComponentBase _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 651)		if (nextFrame) {
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,bool,recursive, ::haxe::ui::backend::ComponentBase,_gthis,::String,type) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_99836deeea93cd49_653_resumeEvent)
HXLINE( 653)				_gthis->resumeEvent(type,false,recursive);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 652)			::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(recursive,_gthis,type)));
            		}
            		else {
HXLINE( 656)			bool _hx_tmp;
HXDLIN( 656)			if (::hx::IsNotNull( this->_pausedEvents )) {
HXLINE( 656)				_hx_tmp = (this->_pausedEvents->indexOf(type,null()) != -1);
            			}
            			else {
HXLINE( 656)				_hx_tmp = false;
            			}
HXDLIN( 656)			if (_hx_tmp) {
HXLINE( 657)				this->_pausedEvents->remove(type);
            			}
HXLINE( 660)			if ((recursive == true)) {
HXLINE( 661)				int _g = 0;
HXDLIN( 661)				::Array< ::Dynamic> _g1;
HXDLIN( 661)				if (::hx::IsNull( this->_children )) {
HXLINE( 661)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 661)					_g1 = this->_children;
            				}
HXDLIN( 661)				while((_g < _g1->length)){
HXLINE( 661)					 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 661)					_g = (_g + 1);
HXLINE( 662)					c->resumeEvent(type,false,recursive);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentBase_obj,resumeEvent,(void))

bool ComponentBase_obj::get_autoWidth(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_688_get_autoWidth)
HXLINE( 689)		bool _hx_tmp;
HXDLIN( 689)		if (::hx::IsNull( this->_percentWidth )) {
HXLINE( 689)			_hx_tmp = ::hx::IsNotNull( this->_width );
            		}
            		else {
HXLINE( 689)			_hx_tmp = true;
            		}
HXDLIN( 689)		if (_hx_tmp) {
HXLINE( 690)			return false;
            		}
HXLINE( 693)		if (::hx::IsNull( this->get_style() )) {
HXLINE( 694)			return true;
            		}
HXLINE( 697)		if (::hx::IsNull( this->get_style()->autoWidth )) {
HXLINE( 698)			return false;
            		}
HXLINE( 700)		return ( (bool)(this->get_style()->autoWidth) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_autoWidth,return )

bool ComponentBase_obj::get_autoHeight(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_711_get_autoHeight)
HXLINE( 712)		bool _hx_tmp;
HXDLIN( 712)		bool _hx_tmp1;
HXDLIN( 712)		if (::hx::IsNull( this->_percentHeight )) {
HXLINE( 712)			_hx_tmp1 = ::hx::IsNotNull( this->_height );
            		}
            		else {
HXLINE( 712)			_hx_tmp1 = true;
            		}
HXDLIN( 712)		if (!(_hx_tmp1)) {
HXLINE( 712)			_hx_tmp = ::hx::IsNull( this->get_style() );
            		}
            		else {
HXLINE( 712)			_hx_tmp = true;
            		}
HXDLIN( 712)		if (_hx_tmp) {
HXLINE( 713)			return false;
            		}
HXLINE( 715)		if (::hx::IsNull( this->get_style()->autoHeight )) {
HXLINE( 716)			return false;
            		}
HXLINE( 718)		return ( (bool)(this->get_style()->autoHeight) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_autoHeight,return )

void ComponentBase_obj::resizeComponent( ::Dynamic w, ::Dynamic h){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_730_resizeComponent)
HXLINE( 731)		bool invalidate = false;
HXLINE( 733)		bool _hx_tmp;
HXDLIN( 733)		if (::hx::IsNotNull( w )) {
HXLINE( 733)			_hx_tmp = ::hx::IsNotEq( this->_componentWidth,w );
            		}
            		else {
HXLINE( 733)			_hx_tmp = false;
            		}
HXDLIN( 733)		if (_hx_tmp) {
HXLINE( 734)			this->_componentWidth = w;
HXLINE( 735)			invalidate = true;
            		}
HXLINE( 738)		bool _hx_tmp1;
HXDLIN( 738)		if (::hx::IsNotNull( h )) {
HXLINE( 738)			_hx_tmp1 = ::hx::IsNotEq( this->_componentHeight,h );
            		}
            		else {
HXLINE( 738)			_hx_tmp1 = false;
            		}
HXDLIN( 738)		if (_hx_tmp1) {
HXLINE( 739)			this->_componentHeight = h;
HXLINE( 740)			invalidate = true;
            		}
HXLINE( 743)		bool _hx_tmp2;
HXDLIN( 743)		if ((invalidate == true)) {
HXLINE( 743)			_hx_tmp2 = (this->isComponentInvalid(HX_("layout",aa,ae,b8,58)) == false);
            		}
            		else {
HXLINE( 743)			_hx_tmp2 = false;
            		}
HXDLIN( 743)		if (_hx_tmp2) {
HXLINE( 744)			bool _hx_tmp;
HXDLIN( 744)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 744)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 744)				_hx_tmp = true;
            			}
HXDLIN( 744)			if (!(_hx_tmp)) {
HXLINE( 744)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,resizeComponent,(void))

Float ComponentBase_obj::get_actualComponentWidth(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_755_get_actualComponentWidth)
HXDLIN( 755)		 ::Dynamic _hx_tmp = this->get_componentWidth();
HXDLIN( 755)		return (( (Float)(_hx_tmp) ) * ::haxe::ui::Toolkit_obj::get_scaleX());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_actualComponentWidth,return )

Float ComponentBase_obj::get_actualComponentHeight(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_765_get_actualComponentHeight)
HXDLIN( 765)		 ::Dynamic _hx_tmp = this->get_componentHeight();
HXDLIN( 765)		return (( (Float)(_hx_tmp) ) * ::haxe::ui::Toolkit_obj::get_scaleY());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_actualComponentHeight,return )

 ::Dynamic ComponentBase_obj::get_componentWidth(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_777_get_componentWidth)
HXLINE( 778)		if (::hx::IsNull( this->_componentWidth )) {
HXLINE( 779)			return 0;
            		}
HXLINE( 781)		return this->_componentWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_componentWidth,return )

 ::Dynamic ComponentBase_obj::set_componentWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_783_set_componentWidth)
HXLINE( 784)		this->resizeComponent(value,null());
HXLINE( 785)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_componentWidth,return )

 ::Dynamic ComponentBase_obj::get_componentHeight(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_797_get_componentHeight)
HXLINE( 798)		if (::hx::IsNull( this->_componentHeight )) {
HXLINE( 799)			return 0;
            		}
HXLINE( 801)		return this->_componentHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_componentHeight,return )

 ::Dynamic ComponentBase_obj::set_componentHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_803_set_componentHeight)
HXLINE( 804)		this->resizeComponent(null(),value);
HXLINE( 805)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_componentHeight,return )

 ::Dynamic ComponentBase_obj::get_percentWidth(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_816_get_percentWidth)
HXDLIN( 816)		return this->_percentWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_percentWidth,return )

 ::Dynamic ComponentBase_obj::set_percentWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_818_set_percentWidth)
HXLINE( 819)		if (::hx::IsEq( this->_percentWidth,value )) {
HXLINE( 820)			return value;
            		}
HXLINE( 823)		this->_percentWidth = value;
HXLINE( 825)		if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE( 826)			 ::haxe::ui::core::Component _this = this->get_parentComponent();
HXDLIN( 826)			bool _hx_tmp;
HXDLIN( 826)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 826)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 826)				_hx_tmp = true;
            			}
HXDLIN( 826)			if (!(_hx_tmp)) {
HXLINE( 826)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            		else {
HXLINE( 828)			::haxe::ui::core::Screen_obj::get_instance()->resizeRootComponents();
            		}
HXLINE( 830)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_percentWidth,return )

 ::Dynamic ComponentBase_obj::get_percentHeight(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_841_get_percentHeight)
HXDLIN( 841)		return this->_percentHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_percentHeight,return )

 ::Dynamic ComponentBase_obj::set_percentHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_843_set_percentHeight)
HXLINE( 844)		if (::hx::IsEq( this->_percentHeight,value )) {
HXLINE( 845)			return value;
            		}
HXLINE( 847)		this->_percentHeight = value;
HXLINE( 849)		if (::hx::IsNotNull( this->get_parentComponent() )) {
HXLINE( 850)			 ::haxe::ui::core::Component _this = this->get_parentComponent();
HXDLIN( 850)			bool _hx_tmp;
HXDLIN( 850)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 850)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 850)				_hx_tmp = true;
            			}
HXDLIN( 850)			if (!(_hx_tmp)) {
HXLINE( 850)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            		else {
HXLINE( 852)			::haxe::ui::core::Screen_obj::get_instance()->resizeRootComponents();
            		}
HXLINE( 854)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_percentHeight,return )

void ComponentBase_obj::cachePercentSizes(::hx::Null< bool >  __o_clearExisting){
            		bool clearExisting = __o_clearExisting.Default(true);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_859_cachePercentSizes)
HXLINE( 860)		if (::hx::IsNotNull( this->_percentWidth )) {
HXLINE( 861)			this->_cachedPercentWidth = this->_percentWidth;
HXLINE( 862)			if ((clearExisting == true)) {
HXLINE( 863)				this->_percentWidth = null();
            			}
            		}
HXLINE( 866)		if (::hx::IsNotNull( this->_percentHeight )) {
HXLINE( 867)			this->_cachedPercentHeight = this->_percentHeight;
HXLINE( 868)			if ((clearExisting == true)) {
HXLINE( 869)				this->_percentHeight = null();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,cachePercentSizes,(void))

void ComponentBase_obj::restorePercentSizes(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_874_restorePercentSizes)
HXLINE( 875)		if (::hx::IsNotNull( this->_cachedPercentWidth )) {
HXLINE( 876)			this->set_percentWidth(this->_cachedPercentWidth);
            		}
HXLINE( 878)		if (::hx::IsNotNull( this->_cachedPercentHeight )) {
HXLINE( 879)			this->set_percentHeight(this->_cachedPercentHeight);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,restorePercentSizes,(void))

Float ComponentBase_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_886_set_x)
HXLINE( 890)		this->super::set_x(value);
HXLINE( 892)		this->set_left(value);
HXLINE( 893)		return value;
            	}


Float ComponentBase_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_897_set_y)
HXLINE( 901)		this->super::set_y(value);
HXLINE( 903)		this->set_top(value);
HXLINE( 904)		return value;
            	}


Float ComponentBase_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_909_set_width)
HXLINE( 910)		if (::hx::IsEq( this->_width,value )) {
HXLINE( 911)			return value;
            		}
HXLINE( 913)		if ((value == (int)-2147483648)) {
HXLINE( 914)			this->_width = null();
HXLINE( 915)			this->set_componentWidth(null());
            		}
            		else {
HXLINE( 917)			this->_width = value;
HXLINE( 918)			this->set_componentWidth(value);
            		}
HXLINE( 920)		return value;
            	}


Float ComponentBase_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_924_get_width)
HXLINE( 925)		Float f = ( (Float)(this->get_componentWidth()) );
HXLINE( 926)		return f;
            	}


Float ComponentBase_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_931_set_height)
HXLINE( 932)		if (::hx::IsEq( this->_height,value )) {
HXLINE( 933)			return value;
            		}
HXLINE( 935)		if ((value == (int)-2147483648)) {
HXLINE( 936)			this->_height = null();
HXLINE( 937)			this->set_componentHeight(null());
            		}
            		else {
HXLINE( 939)			this->_height = value;
HXLINE( 940)			this->set_componentHeight(value);
            		}
HXLINE( 942)		return value;
            	}


Float ComponentBase_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_946_get_height)
HXLINE( 947)		Float f = ( (Float)(this->get_componentHeight()) );
HXLINE( 948)		return f;
            	}


bool ComponentBase_obj::get_hasScreen(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1042_get_hasScreen)
HXLINE(1043)		 ::haxe::ui::backend::ComponentBase p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1044)		while(::hx::IsNotNull( p )){
HXLINE(1045)			if (::hx::IsEq( p->_hasScreen,false )) {
HXLINE(1046)				return false;
            			}
HXLINE(1048)			p = p->get_parentComponent();
            		}
HXLINE(1050)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_hasScreen,return )

bool ComponentBase_obj::hitTest( ::Dynamic left, ::Dynamic top,::hx::Null< bool >  __o_allowZeroSized){
            		bool allowZeroSized = __o_allowZeroSized.Default(false);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1059_hitTest)
HXLINE(1060)		bool _hx_tmp;
HXDLIN(1060)		if (::hx::IsNotNull( left )) {
HXLINE(1060)			_hx_tmp = ::hx::IsNull( top );
            		}
            		else {
HXLINE(1060)			_hx_tmp = true;
            		}
HXDLIN(1060)		if (_hx_tmp) {
HXLINE(1061)			return false;
            		}
HXLINE(1064)		if ((this->get_hasScreen() == false)) {
HXLINE(1065)			return false;
            		}
HXLINE(1068)		left = (left * ::haxe::ui::Toolkit_obj::get_scale());
HXLINE(1069)		top = (top * ::haxe::ui::Toolkit_obj::get_scale());
HXLINE(1071)		bool b = false;
HXLINE(1072)		 ::haxe::ui::geom::Rectangle bounds = this->get_screenBounds();
HXLINE(1073)		Float sx = bounds->left;
HXLINE(1074)		Float sy = bounds->top;
HXLINE(1076)		Float cx = ( (Float)(0) );
HXLINE(1077)		if (::hx::IsNotNull( this->get_componentWidth() )) {
HXLINE(1078)			cx = this->get_actualComponentWidth();
            		}
HXLINE(1080)		Float cy = ( (Float)(0) );
HXLINE(1081)		if (::hx::IsNotNull( this->get_componentHeight() )) {
HXLINE(1082)			cy = this->get_actualComponentHeight();
            		}
HXLINE(1085)		if ((allowZeroSized == true)) {
HXLINE(1095)			bool _hx_tmp;
HXDLIN(1095)			if (!((this->get_width() <= 0))) {
HXLINE(1095)				_hx_tmp = (this->get_height() <= 0);
            			}
            			else {
HXLINE(1095)				_hx_tmp = true;
            			}
HXDLIN(1095)			if (_hx_tmp) {
HXLINE(1096)				return true;
            			}
            		}
HXLINE(1100)		bool _hx_tmp1;
HXDLIN(1100)		bool _hx_tmp2;
HXDLIN(1100)		bool _hx_tmp3;
HXDLIN(1100)		if (::hx::IsGreaterEq( left,sx )) {
HXLINE(1100)			_hx_tmp3 = ::hx::IsLess( left,(sx + cx) );
            		}
            		else {
HXLINE(1100)			_hx_tmp3 = false;
            		}
HXDLIN(1100)		if (_hx_tmp3) {
HXLINE(1100)			_hx_tmp2 = ::hx::IsGreaterEq( top,sy );
            		}
            		else {
HXLINE(1100)			_hx_tmp2 = false;
            		}
HXDLIN(1100)		if (_hx_tmp2) {
HXLINE(1100)			_hx_tmp1 = ::hx::IsLess( top,(sy + cy) );
            		}
            		else {
HXLINE(1100)			_hx_tmp1 = false;
            		}
HXDLIN(1100)		if (_hx_tmp1) {
HXLINE(1101)			b = true;
            		}
HXLINE(1104)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentBase_obj,hitTest,return )

bool ComponentBase_obj::autoSize(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1111_autoSize)
HXLINE(1112)		bool _hx_tmp;
HXDLIN(1112)		if ((this->_componentReady != false)) {
HXLINE(1112)			_hx_tmp = ::hx::IsNull( this->_layout );
            		}
            		else {
HXLINE(1112)			_hx_tmp = true;
            		}
HXDLIN(1112)		if (_hx_tmp) {
HXLINE(1113)			return false;
            		}
HXLINE(1115)		return this->_layout->autoSize();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,autoSize,return )

void ComponentBase_obj::moveComponent( ::Dynamic left, ::Dynamic top){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1136_moveComponent)
HXLINE(1137)		bool invalidate = false;
HXLINE(1138)		bool _hx_tmp;
HXDLIN(1138)		if (::hx::IsNotNull( left )) {
HXLINE(1138)			_hx_tmp = ::hx::IsNotEq( this->_left,left );
            		}
            		else {
HXLINE(1138)			_hx_tmp = false;
            		}
HXDLIN(1138)		if (_hx_tmp) {
HXLINE(1139)			this->_left = left;
HXLINE(1140)			invalidate = true;
            		}
HXLINE(1142)		bool _hx_tmp1;
HXDLIN(1142)		if (::hx::IsNotNull( top )) {
HXLINE(1142)			_hx_tmp1 = ::hx::IsNotEq( this->_top,top );
            		}
            		else {
HXLINE(1142)			_hx_tmp1 = false;
            		}
HXDLIN(1142)		if (_hx_tmp1) {
HXLINE(1143)			this->_top = top;
HXLINE(1144)			invalidate = true;
            		}
HXLINE(1147)		bool _hx_tmp2;
HXDLIN(1147)		if ((invalidate == true)) {
HXLINE(1147)			_hx_tmp2 = (this->isComponentInvalid(HX_("position",a9,a0,fa,ca)) == false);
            		}
            		else {
HXLINE(1147)			_hx_tmp2 = false;
            		}
HXDLIN(1147)		if (_hx_tmp2) {
HXLINE(1148)			this->invalidateComponent(HX_("position",a9,a0,fa,ca),false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,moveComponent,(void))

 ::Dynamic ComponentBase_obj::get_left(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1161_get_left)
HXDLIN(1161)		return this->_left;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_left,return )

 ::Dynamic ComponentBase_obj::set_left( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1163_set_left)
HXLINE(1164)		this->moveComponent(value,null());
HXLINE(1165)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_left,return )

 ::Dynamic ComponentBase_obj::get_top(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1177_get_top)
HXDLIN(1177)		return this->_top;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_top,return )

 ::Dynamic ComponentBase_obj::set_top( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1179_set_top)
HXLINE(1180)		this->moveComponent(null(),value);
HXLINE(1181)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_top,return )

Float ComponentBase_obj::get_screenLeft(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1190_get_screenLeft)
HXDLIN(1190)		return this->get_screenBounds()->left;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_screenLeft,return )

Float ComponentBase_obj::get_screenRight(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1195_get_screenRight)
HXDLIN(1195)		Float _hx_tmp = this->get_screenLeft();
HXDLIN(1195)		return (_hx_tmp + this->get_width());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_screenRight,return )

Float ComponentBase_obj::get_screenTop(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1204_get_screenTop)
HXDLIN(1204)		return this->get_screenBounds()->top;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_screenTop,return )

Float ComponentBase_obj::get_screenBottom(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1209_get_screenBottom)
HXDLIN(1209)		Float _hx_tmp = this->get_screenTop();
HXDLIN(1209)		return (_hx_tmp + this->get_height());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_screenBottom,return )

 ::haxe::ui::geom::Rectangle ComponentBase_obj::get_screenBounds(){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_1214_get_screenBounds)
HXLINE(1215)		if (::hx::IsNull( this->_screenBounds )) {
HXLINE(1216)			this->_screenBounds =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(1219)		 ::haxe::ui::backend::ComponentBase c = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1220)		Float xpos = ( (Float)(0) );
HXLINE(1221)		Float ypos = ( (Float)(0) );
HXLINE(1222)		while(::hx::IsNotNull( c )){
HXLINE(1223)			 ::Dynamic l = c->get_left();
HXLINE(1224)			 ::Dynamic t = c->get_top();
HXLINE(1225)			if (::hx::IsNotNull( c->get_parentComponent() )) {
HXLINE(1226)				l = (l * ::haxe::ui::Toolkit_obj::get_scale());
HXLINE(1227)				t = (t * ::haxe::ui::Toolkit_obj::get_scale());
            			}
HXLINE(1229)			xpos = (xpos + l);
HXLINE(1230)			ypos = (ypos + t);
HXLINE(1232)			if (::hx::IsNotNull( c->get_componentClipRect() )) {
HXLINE(1233)				Float xpos1 = c->get_componentClipRect()->left;
HXDLIN(1233)				xpos = (xpos - (xpos1 * ::haxe::ui::Toolkit_obj::get_scaleX()));
HXLINE(1234)				Float ypos1 = c->get_componentClipRect()->top;
HXDLIN(1234)				ypos = (ypos - (ypos1 * ::haxe::ui::Toolkit_obj::get_scaleY()));
            			}
HXLINE(1237)			c = c->get_parentComponent();
            		}
HXLINE(1240)		 ::haxe::ui::geom::Rectangle _hx_tmp = this->_screenBounds;
HXDLIN(1240)		Float _hx_tmp1 = this->get_width();
HXDLIN(1240)		_hx_tmp->set(xpos,ypos,_hx_tmp1,this->get_height());
HXLINE(1242)		return this->_screenBounds;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_screenBounds,return )

 ::haxe::ui::geom::Rectangle ComponentBase_obj::get_componentClipRect(){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_1255_get_componentClipRect)
HXLINE(1256)		bool _hx_tmp;
HXDLIN(1256)		bool _hx_tmp1;
HXDLIN(1256)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE(1256)			_hx_tmp1 = ::hx::IsNotNull( this->get_style()->clip );
            		}
            		else {
HXLINE(1256)			_hx_tmp1 = false;
            		}
HXDLIN(1256)		if (_hx_tmp1) {
HXLINE(1256)			_hx_tmp = ::hx::IsEq( this->get_style()->clip,true );
            		}
            		else {
HXLINE(1256)			_hx_tmp = false;
            		}
HXDLIN(1256)		if (_hx_tmp) {
HXLINE(1257)			 ::Dynamic _hx_tmp = this->get_componentWidth();
HXDLIN(1257)			return  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,_hx_tmp,this->get_componentHeight());
            		}
HXLINE(1259)		return this->_componentClipRect;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_componentClipRect,return )

 ::haxe::ui::geom::Rectangle ComponentBase_obj::set_componentClipRect( ::haxe::ui::geom::Rectangle value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1261_set_componentClipRect)
HXLINE(1262)		this->_componentClipRect = value;
HXLINE(1263)		if (!(this->isComponentInvalid(HX_("display",42,2a,4a,bb)))) {
HXLINE(1264)			this->invalidateComponent(HX_("display",42,2a,4a,bb),false);
            		}
HXLINE(1266)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_componentClipRect,return )

bool ComponentBase_obj::get_isComponentClipped(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1274_get_isComponentClipped)
HXDLIN(1274)		return ::hx::IsNotNull( this->get_componentClipRect() );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_isComponentClipped,return )

bool ComponentBase_obj::get_isComponentOffscreen(){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_1285_get_isComponentOffscreen)
HXLINE(1286)		bool _hx_tmp;
HXDLIN(1286)		if ((this->get_width() == 0)) {
HXLINE(1286)			_hx_tmp = (this->get_height() == 0);
            		}
            		else {
HXLINE(1286)			_hx_tmp = false;
            		}
HXDLIN(1286)		if (_hx_tmp) {
HXLINE(1287)			return false;
            		}
HXLINE(1289)		Float x = this->get_screenLeft();
HXLINE(1290)		Float y = this->get_screenTop();
HXLINE(1291)		Float w = this->get_width();
HXLINE(1292)		Float h = this->get_height();
HXLINE(1294)		 ::haxe::ui::geom::Rectangle thisRect =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,x,y,w,h);
HXLINE(1295)		Float screenRect = ::haxe::ui::core::Screen_obj::get_instance()->get_width();
HXDLIN(1295)		 ::haxe::ui::geom::Rectangle screenRect1 =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,screenRect,::haxe::ui::core::Screen_obj::get_instance()->get_height());
HXLINE(1296)		return !(screenRect1->intersects(thisRect));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_isComponentOffscreen,return )

 ::haxe::ui::styles::Style ComponentBase_obj::get_style(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1306_get_style)
HXDLIN(1306)		return this->_style;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_style,return )

 ::haxe::ui::styles::Style ComponentBase_obj::set_style( ::haxe::ui::styles::Style value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1309_set_style)
HXLINE(1310)		this->_style = value;
HXLINE(1311)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_style,return )

int ComponentBase_obj::get_depth(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1329_get_depth)
HXDLIN(1329)		return this->_depth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_depth,return )

int ComponentBase_obj::set_depth(int value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1331_set_depth)
HXLINE(1332)		if ((this->_depth == value)) {
HXLINE(1333)			return value;
            		}
HXLINE(1336)		this->_depth = value;
HXLINE(1338)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_depth,return )

bool ComponentBase_obj::isComponentInvalid(::String __o_flag){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1345_isComponentInvalid)
HXLINE(1346)		if ((this->_isAllInvalid == true)) {
HXLINE(1347)			return true;
            		}
HXLINE(1350)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE(1351)			{
HXLINE(1351)				 ::Dynamic value = this->_invalidationFlags->iterator();
HXDLIN(1351)				while(( (bool)(value->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1351)					bool value1 = ( (bool)(value->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1352)					return true;
            				}
            			}
HXLINE(1355)			return false;
            		}
HXLINE(1358)		return this->_invalidationFlags->exists(flag);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,isComponentInvalid,return )

void ComponentBase_obj::invalidateComponent(::String __o_flag,::hx::Null< bool >  __o_recursive){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1365_invalidateComponent)
HXLINE(1366)		if ((this->_componentReady == false)) {
HXLINE(1367)			return;
            		}
HXLINE(1370)		bool isAlreadyInvalid = this->isComponentInvalid(flag);
HXLINE(1371)		bool isAlreadyDelayedInvalid = false;
HXLINE(1372)		if ((this->_isValidating == true)) {
HXLINE(1373)			 ::Dynamic value = this->_delayedInvalidationFlags->iterator();
HXDLIN(1373)			while(( (bool)(value->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1373)				bool value1 = ( (bool)(value->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1374)				isAlreadyDelayedInvalid = true;
HXLINE(1375)				goto _hx_goto_106;
            			}
            			_hx_goto_106:;
            		}
HXLINE(1379)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE(1380)			if ((this->_isValidating == true)) {
HXLINE(1381)				this->_delayedInvalidationFlags->set(HX_("all",21,f9,49,00),true);
            			}
            			else {
HXLINE(1383)				this->_isAllInvalid = true;
            			}
            		}
            		else {
HXLINE(1386)			if ((this->_isValidating == true)) {
HXLINE(1387)				this->_delayedInvalidationFlags->set(flag,true);
            			}
            			else {
HXLINE(1388)				bool _hx_tmp;
HXDLIN(1388)				if ((flag != HX_("all",21,f9,49,00))) {
HXLINE(1388)					_hx_tmp = !(this->_invalidationFlags->exists(flag));
            				}
            				else {
HXLINE(1388)					_hx_tmp = false;
            				}
HXDLIN(1388)				if (_hx_tmp) {
HXLINE(1389)					this->_invalidationFlags->set(flag,true);
            				}
            			}
            		}
HXLINE(1393)		if ((this->_isValidating == true)) {
HXLINE(1395)			if ((isAlreadyDelayedInvalid == true)) {
HXLINE(1396)				return;
            			}
HXLINE(1399)			this->_invalidateCount++;
HXLINE(1402)			if ((this->_invalidateCount >= 10)) {
HXLINE(1403)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("The validation queue returned too many times during validation. This may be an infinite loop. Try to avoid doing anything that calls invalidate() during validation.",74,3c,c2,7e)));
            			}
HXLINE(1406)			::haxe::ui::validation::ValidationManager_obj::get_instance()->add( ::hx::interface_check(::hx::ObjectPtr<OBJ_>(this),0x1e962029));
HXLINE(1407)			return;
            		}
            		else {
HXLINE(1408)			if ((isAlreadyInvalid == true)) {
HXLINE(1409)				if ((recursive == true)) {
HXLINE(1410)					int _g = 0;
HXDLIN(1410)					::Array< ::Dynamic> _g1;
HXDLIN(1410)					if (::hx::IsNull( this->_children )) {
HXLINE(1410)						_g1 = ::Array_obj< ::Dynamic>::__new(0);
            					}
            					else {
HXLINE(1410)						_g1 = this->_children;
            					}
HXDLIN(1410)					while((_g < _g1->length)){
HXLINE(1410)						 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1410)						_g = (_g + 1);
HXLINE(1411)						child->invalidateComponent(flag,recursive);
            					}
            				}
HXLINE(1414)				return;
            			}
            		}
HXLINE(1417)		this->_invalidateCount = 0;
HXLINE(1418)		::haxe::ui::validation::ValidationManager_obj::get_instance()->add( ::hx::interface_check(::hx::ObjectPtr<OBJ_>(this),0x1e962029));
HXLINE(1420)		if ((recursive == true)) {
HXLINE(1421)			int _g = 0;
HXDLIN(1421)			::Array< ::Dynamic> _g1;
HXDLIN(1421)			if (::hx::IsNull( this->_children )) {
HXLINE(1421)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1421)				_g1 = this->_children;
            			}
HXDLIN(1421)			while((_g < _g1->length)){
HXLINE(1421)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1421)				_g = (_g + 1);
HXLINE(1422)				child->invalidateComponent(flag,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,invalidateComponent,(void))

void ComponentBase_obj::invalidateComponentData(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1432_invalidateComponentData)
HXDLIN(1432)		this->invalidateComponent(HX_("data",2a,56,63,42),recursive);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,invalidateComponentData,(void))

void ComponentBase_obj::invalidateComponentLayout(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1439_invalidateComponentLayout)
HXLINE(1440)		bool _hx_tmp;
HXDLIN(1440)		if (::hx::IsNotNull( this->_layout )) {
HXLINE(1440)			_hx_tmp = (this->_layoutLocked == true);
            		}
            		else {
HXLINE(1440)			_hx_tmp = true;
            		}
HXDLIN(1440)		if (_hx_tmp) {
HXLINE(1441)			return;
            		}
HXLINE(1443)		this->invalidateComponent(HX_("layout",aa,ae,b8,58),recursive);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,invalidateComponentLayout,(void))

void ComponentBase_obj::invalidateComponentPosition(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1451_invalidateComponentPosition)
HXDLIN(1451)		this->invalidateComponent(HX_("position",a9,a0,fa,ca),recursive);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,invalidateComponentPosition,(void))

void ComponentBase_obj::invalidateComponentDisplay(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1459_invalidateComponentDisplay)
HXDLIN(1459)		this->invalidateComponent(HX_("display",42,2a,4a,bb),recursive);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,invalidateComponentDisplay,(void))

void ComponentBase_obj::invalidateComponentStyle(::hx::Null< bool >  __o_force,::hx::Null< bool >  __o_recursive){
            		bool force = __o_force.Default(false);
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1466_invalidateComponentStyle)
HXLINE(1467)		this->invalidateComponent(HX_("style",31,a5,1d,84),recursive);
HXLINE(1468)		if ((force == true)) {
HXLINE(1469)			this->_style = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,invalidateComponentStyle,(void))

void ComponentBase_obj::validateComponent(::hx::Null< bool >  __o_nextFrame){
            		bool nextFrame = __o_nextFrame.Default(true);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1477_validateComponent)
HXLINE(1478)		bool _hx_tmp;
HXDLIN(1478)		bool _hx_tmp1;
HXDLIN(1478)		bool _hx_tmp2;
HXDLIN(1478)		if ((this->_componentReady != false)) {
HXLINE(1478)			_hx_tmp2 = (this->_isDisposed == true);
            		}
            		else {
HXLINE(1478)			_hx_tmp2 = true;
            		}
HXDLIN(1478)		if (!(_hx_tmp2)) {
HXLINE(1478)			_hx_tmp1 = (this->_isValidating == true);
            		}
            		else {
HXLINE(1478)			_hx_tmp1 = true;
            		}
HXDLIN(1478)		if (!(_hx_tmp1)) {
HXLINE(1478)			_hx_tmp = (this->isComponentInvalid(null()) == false);
            		}
            		else {
HXLINE(1478)			_hx_tmp = true;
            		}
HXDLIN(1478)		if (_hx_tmp) {
HXLINE(1482)			return;
            		}
HXLINE(1485)		bool isInitialized = this->_isInitialized;
HXLINE(1486)		if ((isInitialized == false)) {
HXLINE(1487)			this->initializeComponent();
            		}
HXLINE(1490)		this->_isValidating = true;
HXLINE(1492)		this->validateComponentInternal(nextFrame);
HXLINE(1493)		this->validateInitialSize(isInitialized);
HXLINE(1498)		this->_invalidationFlags->clear();
HXLINE(1501)		this->_isAllInvalid = false;
HXLINE(1503)		{
HXLINE(1503)			 ::Dynamic flag = this->_delayedInvalidationFlags->keys();
HXDLIN(1503)			while(( (bool)(flag->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1503)				::String flag1 = ( (::String)(flag->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1504)				if ((flag1 == HX_("all",21,f9,49,00))) {
HXLINE(1505)					this->_isAllInvalid = true;
            				}
            				else {
HXLINE(1507)					this->_invalidationFlags->set(flag1,true);
            				}
            			}
            		}
HXLINE(1513)		this->_delayedInvalidationFlags->clear();
HXLINE(1516)		this->_isValidating = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,validateComponent,(void))

void ComponentBase_obj::validateNow(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1523_validateNow)
HXLINE(1524)		{
HXLINE(1524)			int _g = 0;
HXDLIN(1524)			::Array< ::Dynamic> _g1;
HXDLIN(1524)			if (::hx::IsNull( this->_children )) {
HXLINE(1524)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(1524)				_g1 = this->_children;
            			}
HXDLIN(1524)			while((_g < _g1->length)){
HXLINE(1524)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1524)				_g = (_g + 1);
HXLINE(1525)				child->validateNow();
            			}
            		}
HXLINE(1527)		this->invalidateComponent(null(),null());
HXLINE(1528)		this->syncComponentValidation(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,validateNow,(void))

void ComponentBase_obj::syncComponentValidation(::hx::Null< bool >  __o_nextFrame){
            		bool nextFrame = __o_nextFrame.Default(true);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1535_syncComponentValidation)
HXLINE(1536)		int count = 0;
HXLINE(1537)		while(this->isComponentInvalid(null())){
HXLINE(1538)			this->validateComponent(nextFrame);
HXLINE(1540)			{
HXLINE(1540)				int _g = 0;
HXDLIN(1540)				::Array< ::Dynamic> _g1;
HXDLIN(1540)				if (::hx::IsNull( this->_children )) {
HXLINE(1540)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE(1540)					_g1 = this->_children;
            				}
HXDLIN(1540)				while((_g < _g1->length)){
HXLINE(1540)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(1540)					_g = (_g + 1);
HXLINE(1541)					child->syncComponentValidation(nextFrame);
            				}
            			}
HXLINE(1544)			count = (count + 1);
HXDLIN(1544)			if ((count >= 10)) {
HXLINE(1545)				if (this->_isDisposed) {
HXLINE(1549)					::String _hx_tmp = ((HX_("There was a problem validating this component as it has already been destroyed (",8d,52,2e,9f) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)))) + HX_("#",23,00,00,00));
HXDLIN(1549)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((_hx_tmp + this->get_id()) + HX_(")",29,00,00,00))));
            				}
            				else {
HXLINE(1554)					::String _hx_tmp = ((HX_("The syncValidation returned too many times during validation. This may be an infinite loop. Try to avoid doing anything that calls invalidate() during validation (",78,cf,c5,85) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)))) + HX_("#",23,00,00,00));
HXDLIN(1554)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((_hx_tmp + this->get_id()) + HX_(").",e5,23,00,00))));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,syncComponentValidation,(void))

void ComponentBase_obj::validateComponentInternal(::hx::Null< bool >  __o_nextFrame){
            		bool nextFrame = __o_nextFrame.Default(true);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1560_validateComponentInternal)
HXLINE(1561)		bool dataInvalid = this->isComponentInvalid(HX_("data",2a,56,63,42));
HXLINE(1562)		bool styleInvalid = this->isComponentInvalid(HX_("style",31,a5,1d,84));
HXLINE(1563)		bool textDisplayInvalid;
HXDLIN(1563)		if (this->isComponentInvalid(HX_("textDisplay",15,25,ca,96))) {
HXLINE(1563)			textDisplayInvalid = this->hasTextDisplay();
            		}
            		else {
HXLINE(1563)			textDisplayInvalid = false;
            		}
HXLINE(1564)		bool textInputInvalid;
HXDLIN(1564)		if (this->isComponentInvalid(HX_("textInput",1d,54,0b,57))) {
HXLINE(1564)			textInputInvalid = this->hasTextInput();
            		}
            		else {
HXLINE(1564)			textInputInvalid = false;
            		}
HXLINE(1565)		bool imageDisplayInvalid;
HXDLIN(1565)		if (this->isComponentInvalid(HX_("imageDisplay",27,a4,12,ab))) {
HXLINE(1565)			imageDisplayInvalid = this->hasImageDisplay();
            		}
            		else {
HXLINE(1565)			imageDisplayInvalid = false;
            		}
HXLINE(1566)		bool positionInvalid = this->isComponentInvalid(HX_("position",a9,a0,fa,ca));
HXLINE(1567)		bool displayInvalid = this->isComponentInvalid(HX_("display",42,2a,4a,bb));
HXLINE(1568)		bool layoutInvalid;
HXDLIN(1568)		if (this->isComponentInvalid(HX_("layout",aa,ae,b8,58))) {
HXLINE(1568)			layoutInvalid = (this->_layoutLocked == false);
            		}
            		else {
HXLINE(1568)			layoutInvalid = false;
            		}
HXLINE(1570)		if (dataInvalid) {
HXLINE(1571)			this->validateComponentData();
            		}
HXLINE(1574)		if (styleInvalid) {
HXLINE(1575)			this->validateComponentStyle();
            		}
HXLINE(1578)		if (textDisplayInvalid) {
HXLINE(1579)			this->getTextDisplay()->validateComponent(null());
            		}
HXLINE(1582)		if (textInputInvalid) {
HXLINE(1583)			this->getTextInput()->validateComponent(null());
            		}
HXLINE(1586)		if (imageDisplayInvalid) {
HXLINE(1587)			this->getImageDisplay()->validateComponent();
            		}
HXLINE(1590)		if (positionInvalid) {
HXLINE(1591)			this->validateComponentPosition();
            		}
HXLINE(1594)		if (layoutInvalid) {
HXLINE(1595)			if (this->validateComponentLayout()) {
HXLINE(1595)				displayInvalid = true;
            			}
            		}
HXLINE(1598)		bool _hx_tmp;
HXDLIN(1598)		if (!(displayInvalid)) {
HXLINE(1598)			_hx_tmp = styleInvalid;
            		}
            		else {
HXLINE(1598)			_hx_tmp = true;
            		}
HXDLIN(1598)		if (_hx_tmp) {
HXLINE(1599)			::haxe::ui::validation::ValidationManager_obj::get_instance()->addDisplay(::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this)),nextFrame);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,validateComponentInternal,(void))

void ComponentBase_obj::initializeComponent(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1603_initializeComponent)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,initializeComponent,(void))

void ComponentBase_obj::validateInitialSize(bool isInitialized){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1607_validateInitialSize)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,validateInitialSize,(void))

void ComponentBase_obj::validateComponentData(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1611_validateComponentData)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,validateComponentData,(void))

bool ComponentBase_obj::validateComponentLayout(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1615_validateComponentLayout)
HXDLIN(1615)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,validateComponentLayout,return )

void ComponentBase_obj::validateComponentStyle(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1618_validateComponentStyle)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,validateComponentStyle,(void))

void ComponentBase_obj::validateComponentPosition(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1622_validateComponentPosition)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,validateComponentPosition,(void))

void ComponentBase_obj::handleCreate(bool native){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1630_handleCreate)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,handleCreate,(void))

void ComponentBase_obj::handleDestroy(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1634_handleDestroy)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,handleDestroy,(void))

void ComponentBase_obj::handlePosition( ::Dynamic left, ::Dynamic top, ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1638_handlePosition)
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentBase_obj,handlePosition,(void))

void ComponentBase_obj::handlePreReposition(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1642_handlePreReposition)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,handlePreReposition,(void))

void ComponentBase_obj::handlePostReposition(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1646_handlePostReposition)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,handlePostReposition,(void))

void ComponentBase_obj::handleSize( ::Dynamic width, ::Dynamic height, ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1650_handleSize)
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentBase_obj,handleSize,(void))

void ComponentBase_obj::handleReady(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1654_handleReady)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,handleReady,(void))

void ComponentBase_obj::handleClipRect( ::haxe::ui::geom::Rectangle value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1658_handleClipRect)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,handleClipRect,(void))

void ComponentBase_obj::handleVisibility(bool show){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1662_handleVisibility)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,handleVisibility,(void))

void ComponentBase_obj::handleDisabled(bool show){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1666_handleDisabled)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,handleDisabled,(void))

void ComponentBase_obj::handleSetComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1670_handleSetComponentIndex)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,handleSetComponentIndex,(void))

 ::haxe::ui::core::Component ComponentBase_obj::handleAddComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1675_handleAddComponent)
HXDLIN(1675)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,handleAddComponent,return )

 ::haxe::ui::core::Component ComponentBase_obj::handleAddComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1680_handleAddComponentAt)
HXDLIN(1680)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,handleAddComponentAt,return )

 ::haxe::ui::core::Component ComponentBase_obj::handleRemoveComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1685_handleRemoveComponent)
HXDLIN(1685)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,handleRemoveComponent,return )

 ::haxe::ui::core::Component ComponentBase_obj::handleRemoveComponentAt(int index,::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1690_handleRemoveComponentAt)
HXDLIN(1690)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,handleRemoveComponentAt,return )

void ComponentBase_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1694_applyStyle)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,applyStyle,(void))

void ComponentBase_obj::mapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1698_mapEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,mapEvent,(void))

void ComponentBase_obj::unmapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1702_unmapEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,unmapEvent,(void))

 ::haxe::ui::geom::Point ComponentBase_obj::getComponentOffset(){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_1706_getComponentOffset)
HXDLIN(1706)		return  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,0,0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,getComponentOffset,return )

bool ComponentBase_obj::get_isNativeScroller(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1711_get_isNativeScroller)
HXDLIN(1711)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_isNativeScroller,return )

void ComponentBase_obj::handleFrameworkProperty(::String id, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1714_handleFrameworkProperty)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,handleFrameworkProperty,(void))

 ::haxe::ui::core::TextDisplay ComponentBase_obj::createTextDisplay(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_1723_createTextDisplay)
HXLINE(1724)		if (::hx::IsNull( this->_textDisplay )) {
HXLINE(1725)			this->_textDisplay =  ::haxe::ui::core::TextDisplay_obj::__alloc( HX_CTX );
HXLINE(1726)			this->_textDisplay->parentComponent = ::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(1728)		if (::hx::IsNotNull( text )) {
HXLINE(1729)			this->_textDisplay->set_text(text);
            		}
HXLINE(1731)		return this->_textDisplay;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,createTextDisplay,return )

 ::haxe::ui::core::TextDisplay ComponentBase_obj::getTextDisplay(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1736_getTextDisplay)
HXDLIN(1736)		return this->createTextDisplay(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,getTextDisplay,return )

bool ComponentBase_obj::hasTextDisplay(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1741_hasTextDisplay)
HXDLIN(1741)		return ::hx::IsNotNull( this->_textDisplay );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,hasTextDisplay,return )

 ::haxe::ui::core::TextInput ComponentBase_obj::createTextInput(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_1746_createTextInput)
HXLINE(1747)		if (::hx::IsNull( this->_textInput )) {
HXLINE(1748)			this->_textInput =  ::haxe::ui::core::TextInput_obj::__alloc( HX_CTX );
HXLINE(1749)			this->_textInput->parentComponent = ::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(1751)		if (::hx::IsNotNull( text )) {
HXLINE(1752)			this->_textInput->set_text(text);
            		}
HXLINE(1754)		return this->_textInput;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,createTextInput,return )

 ::haxe::ui::core::TextInput ComponentBase_obj::getTextInput(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1759_getTextInput)
HXDLIN(1759)		return this->createTextInput(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,getTextInput,return )

bool ComponentBase_obj::hasTextInput(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1764_hasTextInput)
HXDLIN(1764)		return ::hx::IsNotNull( this->_textInput );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,hasTextInput,return )

 ::haxe::ui::core::ImageDisplay ComponentBase_obj::createImageDisplay(){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_1772_createImageDisplay)
HXLINE(1773)		if (::hx::IsNull( this->_imageDisplay )) {
HXLINE(1774)			this->_imageDisplay =  ::haxe::ui::core::ImageDisplay_obj::__alloc( HX_CTX );
HXLINE(1775)			this->_imageDisplay->parentComponent = ::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(1777)		return this->_imageDisplay;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,createImageDisplay,return )

 ::haxe::ui::core::ImageDisplay ComponentBase_obj::getImageDisplay(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1782_getImageDisplay)
HXDLIN(1782)		return this->createImageDisplay();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,getImageDisplay,return )

bool ComponentBase_obj::hasImageDisplay(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1787_hasImageDisplay)
HXDLIN(1787)		return ::hx::IsNotNull( this->_imageDisplay );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,hasImageDisplay,return )

void ComponentBase_obj::removeImageDisplay(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1792_removeImageDisplay)
HXDLIN(1792)		if (::hx::IsNotNull( this->_imageDisplay )) {
HXLINE(1793)			this->_imageDisplay->dispose();
HXLINE(1794)			this->_imageDisplay = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,removeImageDisplay,(void))

::String ComponentBase_obj::getClassProperty(::String name){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1805_getClassProperty)
HXLINE(1806)		::String v = null();
HXLINE(1807)		if (::hx::IsNotNull( this->_classProperties )) {
HXLINE(1808)			v = this->_classProperties->get_string(name);
            		}
HXLINE(1810)		if (::hx::IsNull( v )) {
HXLINE(1811)			::String c = ((::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))).toLowerCase() + HX_(".",2e,00,00,00)) + name);
HXLINE(1812)			v = ::haxe::ui::Toolkit_obj::properties->get_string(c);
            		}
HXLINE(1814)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,getClassProperty,return )

void ComponentBase_obj::setClassProperty(::String name,::String value){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_1822_setClassProperty)
HXLINE(1823)		if (::hx::IsNull( this->_classProperties )) {
HXLINE(1824)			this->_classProperties =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(1826)		this->_classProperties->set(name,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,setClassProperty,(void))

bool ComponentBase_obj::get_hasNativeEntry(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1831_get_hasNativeEntry)
HXLINE(1832)		if (::hx::IsNull( this->_hasNativeEntry )) {
HXLINE(1833)			this->_hasNativeEntry = ::hx::IsNotNull( this->getNativeConfigProperty(HX_(".@id",ad,bc,98,1e),null()) );
            		}
HXLINE(1835)		return ( (bool)(this->_hasNativeEntry) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_hasNativeEntry,return )

::String ComponentBase_obj::getNativeConfigProperty(::String query,::String defaultValue){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1838_getNativeConfigProperty)
HXLINE(1839)		query = (((HX_("component[id=",c4,01,3e,ef) + this->get_nativeClassName()) + HX_("]",5d,00,00,00)) + query);
HXLINE(1840)		return ::haxe::ui::Toolkit_obj::nativeConfig->query(query,defaultValue,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,getNativeConfigProperty,return )

bool ComponentBase_obj::getNativeConfigPropertyBool(::String query,::hx::Null< bool >  __o_defaultValue){
            		bool defaultValue = __o_defaultValue.Default(false);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1843_getNativeConfigPropertyBool)
HXLINE(1844)		query = (((HX_("component[id=",c4,01,3e,ef) + this->get_nativeClassName()) + HX_("]",5d,00,00,00)) + query);
HXLINE(1845)		return ::haxe::ui::Toolkit_obj::nativeConfig->queryBool(query,defaultValue,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,getNativeConfigPropertyBool,return )

 ::haxe::ds::StringMap ComponentBase_obj::getNativeConfigProperties(::String __o_query){
            		::String query = __o_query;
            		if (::hx::IsNull(__o_query)) query = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1848_getNativeConfigProperties)
HXLINE(1849)		query = (((HX_("component[id=",c4,01,3e,ef) + this->get_nativeClassName()) + HX_("]",5d,00,00,00)) + query);
HXLINE(1850)		return ::haxe::ui::Toolkit_obj::nativeConfig->queryValues(query,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,getNativeConfigProperties,return )

::String ComponentBase_obj::get_className(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1855_get_className)
HXLINE(1856)		if (::hx::IsNotNull( this->_className )) {
HXLINE(1857)			return this->_className;
            		}
HXLINE(1859)		this->_className = ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)));
HXLINE(1860)		return this->_className;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_className,return )

::String ComponentBase_obj::get_nodeName(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1865_get_nodeName)
HXLINE(1866)		if (::hx::IsNotNull( this->_nodeName )) {
HXLINE(1867)			return this->_nodeName;
            		}
HXLINE(1869)		this->_nodeName = ( (::String)(this->get_className().split(HX_(".",2e,00,00,00))->pop()) ).toLowerCase();
HXLINE(1870)		return this->_nodeName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_nodeName,return )

::String ComponentBase_obj::get_nativeClassName(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_1875_get_nativeClassName)
HXLINE(1876)		if (::hx::IsNotNull( this->_nativeClassName )) {
HXLINE(1877)			return this->_nativeClassName;
            		}
HXLINE(1880)		::hx::Class r = ::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this));
HXLINE(1881)		while(::hx::IsNotNull( r )){
HXLINE(1882)			::String c = ::Type_obj::getClassName(r);
HXLINE(1883)			::String t = ::haxe::ui::Toolkit_obj::nativeConfig->query(((HX_("component[id=",c4,01,3e,ef) + c) + HX_("].@class",e9,5b,5e,1f)),null(),::hx::ObjectPtr<OBJ_>(this));
HXLINE(1884)			if (::hx::IsNotNull( t )) {
HXLINE(1885)				this->_nativeClassName = c;
HXLINE(1886)				goto _hx_goto_168;
            			}
HXLINE(1888)			r = ::Type_obj::getSuperClass(r);
HXLINE(1889)			if (::hx::IsPointerEq( r,::hx::ClassOf< ::haxe::ui::core::Component >() )) {
HXLINE(1890)				goto _hx_goto_168;
            			}
            		}
            		_hx_goto_168:;
HXLINE(1894)		if (::hx::IsNull( this->_nativeClassName )) {
HXLINE(1895)			this->_nativeClassName = this->get_className();
            		}
HXLINE(1898)		return this->_nativeClassName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_nativeClassName,return )

::String ComponentBase_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_9f66ddde5f9eb820_597_get_text)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("text",ad,cc,f9,4c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_text,return )

::String ComponentBase_obj::set_text(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_9f66ddde5f9eb820_630_set_text)
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
HXLINE( 634)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("text",ad,cc,f9,4c),null(),value,null());
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
HXDLIN( 643)		_hx_tmp->set(HX_("text",ad,cc,f9,4c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 644)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("text",ad,cc,f9,4c)),null());
HXLINE( 645)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_text,return )

 ::Dynamic ComponentBase_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_9f66ddde5f9eb820_583_get_value)
HXLINE( 584)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 585)			return null();
            		}
HXLINE( 587)		return this->behaviours->getDynamic(HX_("value",71,7f,b8,31));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_value,return )

 ::Dynamic ComponentBase_obj::set_value( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_9f66ddde5f9eb820_624_set_value)
HXLINE( 625)		this->behaviours->setDynamic(HX_("value",71,7f,b8,31),value);
HXLINE( 626)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("value",71,7f,b8,31)),null());
HXLINE( 627)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_value,return )

bool ComponentBase_obj::get_disabled(){
            	HX_STACKFRAME(&_hx_pos_9f66ddde5f9eb820_597_get_disabled)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return false;
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("disabled",7c,41,04,7c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_disabled,return )

bool ComponentBase_obj::set_disabled(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_9f66ddde5f9eb820_648_set_disabled)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("disabled",7c,41,04,7c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("disabled",7c,41,04,7c)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_disabled,return )

 ::Dynamic ComponentBase_obj::get_tooltip(){
            	HX_STACKFRAME(&_hx_pos_9f66ddde5f9eb820_583_get_tooltip)
HXLINE( 584)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 585)			return null();
            		}
HXLINE( 587)		return this->behaviours->getDynamic(HX_("tooltip",03,ad,8c,6a));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_tooltip,return )

 ::Dynamic ComponentBase_obj::set_tooltip( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_9f66ddde5f9eb820_624_set_tooltip)
HXLINE( 625)		this->behaviours->setDynamic(HX_("tooltip",03,ad,8c,6a),value);
HXLINE( 626)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("tooltip",03,ad,8c,6a)),null());
HXLINE( 627)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_tooltip,return )

 ::haxe::ui::core::Component ComponentBase_obj::get_tooltipRenderer(){
            	HX_STACKFRAME(&_hx_pos_9f66ddde5f9eb820_590_get_tooltipRenderer)
HXLINE( 591)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 592)			return null();
            		}
HXLINE( 594)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->get(HX_("tooltipRenderer",66,69,e3,ff)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_tooltipRenderer,return )

 ::haxe::ui::core::Component ComponentBase_obj::set_tooltipRenderer( ::haxe::ui::core::Component value){
            	HX_GC_STACKFRAME(&_hx_pos_9f66ddde5f9eb820_648_set_tooltipRenderer)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("tooltipRenderer",66,69,e3,ff),::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("tooltipRenderer",66,69,e3,ff)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,set_tooltipRenderer,return )

 ::haxe::ui::backend::ComponentBase ComponentBase_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_e3dc0ef695412051_700_cloneComponent)
HXLINE( 471)		 ::haxe::ui::backend::ComponentBase c = this->self();
HXLINE( 478)		if (::hx::IsNotNull( this->get_id() )) {
HXLINE( 478)			c->set_id(this->get_id());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_componentWidth() )) {
HXLINE( 478)			c->set_componentWidth(this->get_componentWidth());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_componentHeight() )) {
HXLINE( 478)			c->set_componentHeight(this->get_componentHeight());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_percentWidth() )) {
HXLINE( 478)			c->set_percentWidth(this->get_percentWidth());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_percentHeight() )) {
HXLINE( 478)			c->set_percentHeight(this->get_percentHeight());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_text() )) {
HXLINE( 478)			c->set_text(this->get_text());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_value() )) {
HXLINE( 478)			c->set_value(this->get_value());
            		}
HXLINE( 480)		c->set_disabled(this->get_disabled());
HXLINE( 478)		if (::hx::IsNotNull( this->get_tooltip() )) {
HXLINE( 478)			c->set_tooltip(this->get_tooltip());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_tooltipRenderer() )) {
HXLINE( 478)			c->set_tooltipRenderer(this->get_tooltipRenderer());
            		}
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


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,cloneComponent,return )

 ::haxe::ui::backend::ComponentBase ComponentBase_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_9f66ddde5f9eb820_521_self)
HXDLIN( 521)		return  ::haxe::ui::backend::ComponentBase_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,self,return )

::Array< ::String > ComponentBase_obj::INTERACTIVE_EVENTS;


::hx::ObjectPtr< ComponentBase_obj > ComponentBase_obj::__new() {
	::hx::ObjectPtr< ComponentBase_obj > __this = new ComponentBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ComponentBase_obj > ComponentBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ComponentBase_obj *__this = (ComponentBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentBase_obj), true, "haxe.ui.backend.ComponentBase"));
	*(void **)__this = ComponentBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentBase_obj::ComponentBase_obj()
{
}

void ComponentBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentBase);
	HX_MARK_MEMBER_NAME(behaviours,"behaviours");
	HX_MARK_MEMBER_NAME(_componentReady,"_componentReady");
	HX_MARK_MEMBER_NAME(isReady,"isReady");
	HX_MARK_MEMBER_NAME(_id,"_id");
	HX_MARK_MEMBER_NAME(_parentComponent,"_parentComponent");
	HX_MARK_MEMBER_NAME(isInScroller,"isInScroller");
	HX_MARK_MEMBER_NAME(_children,"_children");
	HX_MARK_MEMBER_NAME(childComponents,"childComponents");
	HX_MARK_MEMBER_NAME(bottomComponent,"bottomComponent");
	HX_MARK_MEMBER_NAME(topComponent,"topComponent");
	HX_MARK_MEMBER_NAME(_internalEvents,"_internalEvents");
	HX_MARK_MEMBER_NAME(_internalEventsClass,"_internalEventsClass");
	HX_MARK_MEMBER_NAME(_hx___events,"__events");
	HX_MARK_MEMBER_NAME(_disabledEvents,"_disabledEvents");
	HX_MARK_MEMBER_NAME(_interactivityDisabled,"_interactivityDisabled");
	HX_MARK_MEMBER_NAME(_interactivityDisabledCounter,"_interactivityDisabledCounter");
	HX_MARK_MEMBER_NAME(_pausedEvents,"_pausedEvents");
	HX_MARK_MEMBER_NAME(_layout,"_layout");
	HX_MARK_MEMBER_NAME(_layoutLocked,"_layoutLocked");
	HX_MARK_MEMBER_NAME(autoWidth,"autoWidth");
	HX_MARK_MEMBER_NAME(autoHeight,"autoHeight");
	HX_MARK_MEMBER_NAME(actualComponentWidth,"actualComponentWidth");
	HX_MARK_MEMBER_NAME(actualComponentHeight,"actualComponentHeight");
	HX_MARK_MEMBER_NAME(_componentWidth,"_componentWidth");
	HX_MARK_MEMBER_NAME(_componentHeight,"_componentHeight");
	HX_MARK_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_MARK_MEMBER_NAME(_percentHeight,"_percentHeight");
	HX_MARK_MEMBER_NAME(_cachedPercentWidth,"_cachedPercentWidth");
	HX_MARK_MEMBER_NAME(_cachedPercentHeight,"_cachedPercentHeight");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_actualWidth,"_actualWidth");
	HX_MARK_MEMBER_NAME(_actualHeight,"_actualHeight");
	HX_MARK_MEMBER_NAME(_hasScreen,"_hasScreen");
	HX_MARK_MEMBER_NAME(hasScreen,"hasScreen");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_top,"_top");
	HX_MARK_MEMBER_NAME(screenLeft,"screenLeft");
	HX_MARK_MEMBER_NAME(screenRight,"screenRight");
	HX_MARK_MEMBER_NAME(screenTop,"screenTop");
	HX_MARK_MEMBER_NAME(screenBottom,"screenBottom");
	HX_MARK_MEMBER_NAME(_screenBounds,"_screenBounds");
	HX_MARK_MEMBER_NAME(screenBounds,"screenBounds");
	HX_MARK_MEMBER_NAME(_componentClipRect,"_componentClipRect");
	HX_MARK_MEMBER_NAME(isComponentClipped,"isComponentClipped");
	HX_MARK_MEMBER_NAME(isComponentOffscreen,"isComponentOffscreen");
	HX_MARK_MEMBER_NAME(_style,"_style");
	HX_MARK_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_MARK_MEMBER_NAME(_delayedInvalidationFlags,"_delayedInvalidationFlags");
	HX_MARK_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_MARK_MEMBER_NAME(_isValidating,"_isValidating");
	HX_MARK_MEMBER_NAME(_isInitialized,"_isInitialized");
	HX_MARK_MEMBER_NAME(_isDisposed,"_isDisposed");
	HX_MARK_MEMBER_NAME(_invalidateCount,"_invalidateCount");
	HX_MARK_MEMBER_NAME(_depth,"_depth");
	HX_MARK_MEMBER_NAME(isNativeScroller,"isNativeScroller");
	HX_MARK_MEMBER_NAME(_textDisplay,"_textDisplay");
	HX_MARK_MEMBER_NAME(_textInput,"_textInput");
	HX_MARK_MEMBER_NAME(_imageDisplay,"_imageDisplay");
	HX_MARK_MEMBER_NAME(_classProperties,"_classProperties");
	HX_MARK_MEMBER_NAME(_hasNativeEntry,"_hasNativeEntry");
	HX_MARK_MEMBER_NAME(hasNativeEntry,"hasNativeEntry");
	HX_MARK_MEMBER_NAME(_className,"_className");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(_nodeName,"_nodeName");
	HX_MARK_MEMBER_NAME(nodeName,"nodeName");
	HX_MARK_MEMBER_NAME(_nativeClassName,"_nativeClassName");
	HX_MARK_MEMBER_NAME(nativeClassName,"nativeClassName");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComponentBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(behaviours,"behaviours");
	HX_VISIT_MEMBER_NAME(_componentReady,"_componentReady");
	HX_VISIT_MEMBER_NAME(isReady,"isReady");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	HX_VISIT_MEMBER_NAME(_parentComponent,"_parentComponent");
	HX_VISIT_MEMBER_NAME(isInScroller,"isInScroller");
	HX_VISIT_MEMBER_NAME(_children,"_children");
	HX_VISIT_MEMBER_NAME(childComponents,"childComponents");
	HX_VISIT_MEMBER_NAME(bottomComponent,"bottomComponent");
	HX_VISIT_MEMBER_NAME(topComponent,"topComponent");
	HX_VISIT_MEMBER_NAME(_internalEvents,"_internalEvents");
	HX_VISIT_MEMBER_NAME(_internalEventsClass,"_internalEventsClass");
	HX_VISIT_MEMBER_NAME(_hx___events,"__events");
	HX_VISIT_MEMBER_NAME(_disabledEvents,"_disabledEvents");
	HX_VISIT_MEMBER_NAME(_interactivityDisabled,"_interactivityDisabled");
	HX_VISIT_MEMBER_NAME(_interactivityDisabledCounter,"_interactivityDisabledCounter");
	HX_VISIT_MEMBER_NAME(_pausedEvents,"_pausedEvents");
	HX_VISIT_MEMBER_NAME(_layout,"_layout");
	HX_VISIT_MEMBER_NAME(_layoutLocked,"_layoutLocked");
	HX_VISIT_MEMBER_NAME(autoWidth,"autoWidth");
	HX_VISIT_MEMBER_NAME(autoHeight,"autoHeight");
	HX_VISIT_MEMBER_NAME(actualComponentWidth,"actualComponentWidth");
	HX_VISIT_MEMBER_NAME(actualComponentHeight,"actualComponentHeight");
	HX_VISIT_MEMBER_NAME(_componentWidth,"_componentWidth");
	HX_VISIT_MEMBER_NAME(_componentHeight,"_componentHeight");
	HX_VISIT_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_VISIT_MEMBER_NAME(_percentHeight,"_percentHeight");
	HX_VISIT_MEMBER_NAME(_cachedPercentWidth,"_cachedPercentWidth");
	HX_VISIT_MEMBER_NAME(_cachedPercentHeight,"_cachedPercentHeight");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_actualWidth,"_actualWidth");
	HX_VISIT_MEMBER_NAME(_actualHeight,"_actualHeight");
	HX_VISIT_MEMBER_NAME(_hasScreen,"_hasScreen");
	HX_VISIT_MEMBER_NAME(hasScreen,"hasScreen");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_top,"_top");
	HX_VISIT_MEMBER_NAME(screenLeft,"screenLeft");
	HX_VISIT_MEMBER_NAME(screenRight,"screenRight");
	HX_VISIT_MEMBER_NAME(screenTop,"screenTop");
	HX_VISIT_MEMBER_NAME(screenBottom,"screenBottom");
	HX_VISIT_MEMBER_NAME(_screenBounds,"_screenBounds");
	HX_VISIT_MEMBER_NAME(screenBounds,"screenBounds");
	HX_VISIT_MEMBER_NAME(_componentClipRect,"_componentClipRect");
	HX_VISIT_MEMBER_NAME(isComponentClipped,"isComponentClipped");
	HX_VISIT_MEMBER_NAME(isComponentOffscreen,"isComponentOffscreen");
	HX_VISIT_MEMBER_NAME(_style,"_style");
	HX_VISIT_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_VISIT_MEMBER_NAME(_delayedInvalidationFlags,"_delayedInvalidationFlags");
	HX_VISIT_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_VISIT_MEMBER_NAME(_isValidating,"_isValidating");
	HX_VISIT_MEMBER_NAME(_isInitialized,"_isInitialized");
	HX_VISIT_MEMBER_NAME(_isDisposed,"_isDisposed");
	HX_VISIT_MEMBER_NAME(_invalidateCount,"_invalidateCount");
	HX_VISIT_MEMBER_NAME(_depth,"_depth");
	HX_VISIT_MEMBER_NAME(isNativeScroller,"isNativeScroller");
	HX_VISIT_MEMBER_NAME(_textDisplay,"_textDisplay");
	HX_VISIT_MEMBER_NAME(_textInput,"_textInput");
	HX_VISIT_MEMBER_NAME(_imageDisplay,"_imageDisplay");
	HX_VISIT_MEMBER_NAME(_classProperties,"_classProperties");
	HX_VISIT_MEMBER_NAME(_hasNativeEntry,"_hasNativeEntry");
	HX_VISIT_MEMBER_NAME(hasNativeEntry,"hasNativeEntry");
	HX_VISIT_MEMBER_NAME(_className,"_className");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(_nodeName,"_nodeName");
	HX_VISIT_MEMBER_NAME(nodeName,"nodeName");
	HX_VISIT_MEMBER_NAME(_nativeClassName,"_nativeClassName");
	HX_VISIT_MEMBER_NAME(nativeClassName,"nativeClassName");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ComponentBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_id() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return ::hx::Val( _id ); }
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_top() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_left() ); }
		if (HX_FIELD_EQ(inName,"_top") ) { return ::hx::Val( _top ); }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"_left") ) { return ::hx::Val( _left ); }
		if (HX_FIELD_EQ(inName,"style") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_style() ); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depth() ); }
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_value() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return ::hx::Val( get_id_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return ::hx::Val( set_id_dyn() ); }
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"_style") ) { return ::hx::Val( _style ); }
		if (HX_FIELD_EQ(inName,"_depth") ) { return ::hx::Val( _depth ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isReady() : isReady ); }
		if (HX_FIELD_EQ(inName,"_layout") ) { return ::hx::Val( _layout ); }
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return ::hx::Val( hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return ::hx::Val( get_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return ::hx::Val( set_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"tooltip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tooltip() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__events") ) { return ::hx::Val( _hx___events ); }
		if (HX_FIELD_EQ(inName,"hasEvent") ) { return ::hx::Val( hasEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return ::hx::Val( dispatch_dyn() ); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { return ::hx::Val( autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return ::hx::Val( get_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return ::hx::Val( set_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"mapEvent") ) { return ::hx::Val( mapEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"nodeName") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_nodeName() : nodeName ); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"disabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disabled() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_children") ) { return ::hx::Val( _children ); }
		if (HX_FIELD_EQ(inName,"autoWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_autoWidth() : autoWidth ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasScreen") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_hasScreen() : hasScreen ); }
		if (HX_FIELD_EQ(inName,"screenTop") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_screenTop() : screenTop ); }
		if (HX_FIELD_EQ(inName,"get_style") ) { return ::hx::Val( get_style_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_style") ) { return ::hx::Val( set_style_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return ::hx::Val( get_depth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return ::hx::Val( set_depth_dyn() ); }
		if (HX_FIELD_EQ(inName,"className") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_className() : className ); }
		if (HX_FIELD_EQ(inName,"_nodeName") ) { return ::hx::Val( _nodeName ); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"behaviours") ) { return ::hx::Val( behaviours ); }
		if (HX_FIELD_EQ(inName,"pauseEvent") ) { return ::hx::Val( pauseEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"autoHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_autoHeight() : autoHeight ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"_hasScreen") ) { return ::hx::Val( _hasScreen ); }
		if (HX_FIELD_EQ(inName,"screenLeft") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_screenLeft() : screenLeft ); }
		if (HX_FIELD_EQ(inName,"handleSize") ) { return ::hx::Val( handleSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"unmapEvent") ) { return ::hx::Val( unmapEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_textInput") ) { return ::hx::Val( _textInput ); }
		if (HX_FIELD_EQ(inName,"_className") ) { return ::hx::Val( _className ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isReady") ) { return ::hx::Val( get_isReady_dyn() ); }
		if (HX_FIELD_EQ(inName,"resumeEvent") ) { return ::hx::Val( resumeEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"screenRight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_screenRight() : screenRight ); }
		if (HX_FIELD_EQ(inName,"_isDisposed") ) { return ::hx::Val( _isDisposed ); }
		if (HX_FIELD_EQ(inName,"validateNow") ) { return ::hx::Val( validateNow_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleReady") ) { return ::hx::Val( handleReady_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tooltip") ) { return ::hx::Val( get_tooltip_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tooltip") ) { return ::hx::Val( set_tooltip_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isInScroller") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isInScroller() : isInScroller ); }
		if (HX_FIELD_EQ(inName,"findScroller") ) { return ::hx::Val( findScroller_dyn() ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"topComponent") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_topComponent() : topComponent ); }
		if (HX_FIELD_EQ(inName,"percentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentWidth() ); }
		if (HX_FIELD_EQ(inName,"_actualWidth") ) { return ::hx::Val( _actualWidth ); }
		if (HX_FIELD_EQ(inName,"screenBottom") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_screenBottom() : screenBottom ); }
		if (HX_FIELD_EQ(inName,"screenBounds") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_screenBounds() : screenBounds ); }
		if (HX_FIELD_EQ(inName,"handleCreate") ) { return ::hx::Val( handleCreate_dyn() ); }
		if (HX_FIELD_EQ(inName,"_textDisplay") ) { return ::hx::Val( _textDisplay ); }
		if (HX_FIELD_EQ(inName,"getTextInput") ) { return ::hx::Val( getTextInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasTextInput") ) { return ::hx::Val( hasTextInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_nodeName") ) { return ::hx::Val( get_nodeName_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_disabled") ) { return ::hx::Val( get_disabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_disabled") ) { return ::hx::Val( set_disabled_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"registerEvent") ) { return ::hx::Val( registerEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_pausedEvents") ) { return ::hx::Val( _pausedEvents ); }
		if (HX_FIELD_EQ(inName,"_layoutLocked") ) { return ::hx::Val( _layoutLocked ); }
		if (HX_FIELD_EQ(inName,"get_autoWidth") ) { return ::hx::Val( get_autoWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { return ::hx::Val( _percentWidth ); }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentHeight() ); }
		if (HX_FIELD_EQ(inName,"_actualHeight") ) { return ::hx::Val( _actualHeight ); }
		if (HX_FIELD_EQ(inName,"get_hasScreen") ) { return ::hx::Val( get_hasScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveComponent") ) { return ::hx::Val( moveComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_screenTop") ) { return ::hx::Val( get_screenTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"_screenBounds") ) { return ::hx::Val( _screenBounds ); }
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { return ::hx::Val( _isAllInvalid ); }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { return ::hx::Val( _isValidating ); }
		if (HX_FIELD_EQ(inName,"handleDestroy") ) { return ::hx::Val( handleDestroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"_imageDisplay") ) { return ::hx::Val( _imageDisplay ); }
		if (HX_FIELD_EQ(inName,"get_className") ) { return ::hx::Val( get_className_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addComponentAt") ) { return ::hx::Val( addComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMappedEvent") ) { return ::hx::Val( _onMappedEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_autoHeight") ) { return ::hx::Val( get_autoHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"componentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentWidth() ); }
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { return ::hx::Val( _percentHeight ); }
		if (HX_FIELD_EQ(inName,"get_screenLeft") ) { return ::hx::Val( get_screenLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"_isInitialized") ) { return ::hx::Val( _isInitialized ); }
		if (HX_FIELD_EQ(inName,"handlePosition") ) { return ::hx::Val( handlePosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleClipRect") ) { return ::hx::Val( handleClipRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleDisabled") ) { return ::hx::Val( handleDisabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTextDisplay") ) { return ::hx::Val( getTextDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasTextDisplay") ) { return ::hx::Val( hasTextDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasNativeEntry") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_hasNativeEntry() : hasNativeEntry ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_componentReady") ) { return ::hx::Val( _componentReady ); }
		if (HX_FIELD_EQ(inName,"parentComponent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_parentComponent() ); }
		if (HX_FIELD_EQ(inName,"childComponents") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_childComponents() : childComponents ); }
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"bottomComponent") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_bottomComponent() : bottomComponent ); }
		if (HX_FIELD_EQ(inName,"_internalEvents") ) { return ::hx::Val( _internalEvents ); }
		if (HX_FIELD_EQ(inName,"unregisterEvent") ) { return ::hx::Val( unregisterEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMoveInternal") ) { return ::hx::Val( _onMoveInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"_disabledEvents") ) { return ::hx::Val( _disabledEvents ); }
		if (HX_FIELD_EQ(inName,"resizeComponent") ) { return ::hx::Val( resizeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_componentWidth") ) { return ::hx::Val( _componentWidth ); }
		if (HX_FIELD_EQ(inName,"componentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentHeight() ); }
		if (HX_FIELD_EQ(inName,"get_screenRight") ) { return ::hx::Val( get_screenRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"createTextInput") ) { return ::hx::Val( createTextInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"getImageDisplay") ) { return ::hx::Val( getImageDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasImageDisplay") ) { return ::hx::Val( hasImageDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"_hasNativeEntry") ) { return ::hx::Val( _hasNativeEntry ); }
		if (HX_FIELD_EQ(inName,"nativeClassName") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_nativeClassName() : nativeClassName ); }
		if (HX_FIELD_EQ(inName,"tooltipRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tooltipRenderer() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_parentComponent") ) { return ::hx::Val( _parentComponent ); }
		if (HX_FIELD_EQ(inName,"get_isInScroller") ) { return ::hx::Val( get_isInScroller_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_topComponent") ) { return ::hx::Val( get_topComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"unregisterEvents") ) { return ::hx::Val( unregisterEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"_componentHeight") ) { return ::hx::Val( _componentHeight ); }
		if (HX_FIELD_EQ(inName,"get_percentWidth") ) { return ::hx::Val( get_percentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentWidth") ) { return ::hx::Val( set_percentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_screenBottom") ) { return ::hx::Val( get_screenBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_screenBounds") ) { return ::hx::Val( get_screenBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"_invalidateCount") ) { return ::hx::Val( _invalidateCount ); }
		if (HX_FIELD_EQ(inName,"handleVisibility") ) { return ::hx::Val( handleVisibility_dyn() ); }
		if (HX_FIELD_EQ(inName,"isNativeScroller") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isNativeScroller() : isNativeScroller ); }
		if (HX_FIELD_EQ(inName,"getClassProperty") ) { return ::hx::Val( getClassProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"_classProperties") ) { return ::hx::Val( _classProperties ); }
		if (HX_FIELD_EQ(inName,"setClassProperty") ) { return ::hx::Val( setClassProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"_nativeClassName") ) { return ::hx::Val( _nativeClassName ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"containsComponent") ) { return ::hx::Val( containsComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponentAt") ) { return ::hx::Val( removeComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_percentHeight") ) { return ::hx::Val( get_percentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentHeight") ) { return ::hx::Val( set_percentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"cachePercentSizes") ) { return ::hx::Val( cachePercentSizes_dyn() ); }
		if (HX_FIELD_EQ(inName,"componentClipRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentClipRect() ); }
		if (HX_FIELD_EQ(inName,"validateComponent") ) { return ::hx::Val( validateComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"createTextDisplay") ) { return ::hx::Val( createTextDisplay_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"postCloneComponent") ) { return ::hx::Val( postCloneComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAllListeners") ) { return ::hx::Val( removeAllListeners_dyn() ); }
		if (HX_FIELD_EQ(inName,"isInteractiveEvent") ) { return ::hx::Val( isInteractiveEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_componentWidth") ) { return ::hx::Val( get_componentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentWidth") ) { return ::hx::Val( set_componentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"_componentClipRect") ) { return ::hx::Val( _componentClipRect ); }
		if (HX_FIELD_EQ(inName,"isComponentClipped") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isComponentClipped() : isComponentClipped ); }
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { return ::hx::Val( _invalidationFlags ); }
		if (HX_FIELD_EQ(inName,"isComponentInvalid") ) { return ::hx::Val( isComponentInvalid_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleAddComponent") ) { return ::hx::Val( handleAddComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentOffset") ) { return ::hx::Val( getComponentOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"createImageDisplay") ) { return ::hx::Val( createImageDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeImageDisplay") ) { return ::hx::Val( removeImageDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hasNativeEntry") ) { return ::hx::Val( get_hasNativeEntry_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_parentComponent") ) { return ::hx::Val( get_parentComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_parentComponent") ) { return ::hx::Val( set_parentComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_childComponents") ) { return ::hx::Val( get_childComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveComponentToBack") ) { return ::hx::Val( moveComponentToBack_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bottomComponent") ) { return ::hx::Val( get_bottomComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatchRecursively") ) { return ::hx::Val( dispatchRecursively_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_componentHeight") ) { return ::hx::Val( get_componentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentHeight") ) { return ::hx::Val( set_componentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"_cachedPercentWidth") ) { return ::hx::Val( _cachedPercentWidth ); }
		if (HX_FIELD_EQ(inName,"restorePercentSizes") ) { return ::hx::Val( restorePercentSizes_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidateComponent") ) { return ::hx::Val( invalidateComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"initializeComponent") ) { return ::hx::Val( initializeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateInitialSize") ) { return ::hx::Val( validateInitialSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"handlePreReposition") ) { return ::hx::Val( handlePreReposition_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_nativeClassName") ) { return ::hx::Val( get_nativeClassName_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tooltipRenderer") ) { return ::hx::Val( get_tooltipRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tooltipRenderer") ) { return ::hx::Val( set_tooltipRenderer_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onParentComponentSet") ) { return ::hx::Val( onParentComponentSet_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveComponentToFront") ) { return ::hx::Val( moveComponentToFront_dyn() ); }
		if (HX_FIELD_EQ(inName,"_internalEventsClass") ) { return ::hx::Val( _internalEventsClass ); }
		if (HX_FIELD_EQ(inName,"checkComponentBounds") ) { return ::hx::Val( checkComponentBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"disableInteractivity") ) { return ::hx::Val( disableInteractivity_dyn() ); }
		if (HX_FIELD_EQ(inName,"actualComponentWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_actualComponentWidth() : actualComponentWidth ); }
		if (HX_FIELD_EQ(inName,"_cachedPercentHeight") ) { return ::hx::Val( _cachedPercentHeight ); }
		if (HX_FIELD_EQ(inName,"isComponentOffscreen") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isComponentOffscreen() : isComponentOffscreen ); }
		if (HX_FIELD_EQ(inName,"handlePostReposition") ) { return ::hx::Val( handlePostReposition_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleAddComponentAt") ) { return ::hx::Val( handleAddComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isNativeScroller") ) { return ::hx::Val( get_isNativeScroller_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"moveComponentBackward") ) { return ::hx::Val( moveComponentBackward_dyn() ); }
		if (HX_FIELD_EQ(inName,"actualComponentHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_actualComponentHeight() : actualComponentHeight ); }
		if (HX_FIELD_EQ(inName,"get_componentClipRect") ) { return ::hx::Val( get_componentClipRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentClipRect") ) { return ::hx::Val( set_componentClipRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentData") ) { return ::hx::Val( validateComponentData_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleRemoveComponent") ) { return ::hx::Val( handleRemoveComponent_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"containsChildComponent") ) { return ::hx::Val( containsChildComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveComponentFrontward") ) { return ::hx::Val( moveComponentFrontward_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerInternalEvents") ) { return ::hx::Val( registerInternalEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"_interactivityDisabled") ) { return ::hx::Val( _interactivityDisabled ); }
		if (HX_FIELD_EQ(inName,"get_isComponentClipped") ) { return ::hx::Val( get_isComponentClipped_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentStyle") ) { return ::hx::Val( validateComponentStyle_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"dispatchRecursivelyWhen") ) { return ::hx::Val( dispatchRecursivelyWhen_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkWatchForMoveEvents") ) { return ::hx::Val( checkWatchForMoveEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidateComponentData") ) { return ::hx::Val( invalidateComponentData_dyn() ); }
		if (HX_FIELD_EQ(inName,"syncComponentValidation") ) { return ::hx::Val( syncComponentValidation_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentLayout") ) { return ::hx::Val( validateComponentLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleSetComponentIndex") ) { return ::hx::Val( handleSetComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleRemoveComponentAt") ) { return ::hx::Val( handleRemoveComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleFrameworkProperty") ) { return ::hx::Val( handleFrameworkProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNativeConfigProperty") ) { return ::hx::Val( getNativeConfigProperty_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"unregisterInternalEvents") ) { return ::hx::Val( unregisterInternalEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"disableInteractiveEvents") ) { return ::hx::Val( disableInteractiveEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"unregisterEventsInternal") ) { return ::hx::Val( unregisterEventsInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_actualComponentWidth") ) { return ::hx::Val( get_actualComponentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isComponentOffscreen") ) { return ::hx::Val( get_isComponentOffscreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidateComponentStyle") ) { return ::hx::Val( invalidateComponentStyle_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_actualComponentHeight") ) { return ::hx::Val( get_actualComponentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"_delayedInvalidationFlags") ) { return ::hx::Val( _delayedInvalidationFlags ); }
		if (HX_FIELD_EQ(inName,"invalidateComponentLayout") ) { return ::hx::Val( invalidateComponentLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentInternal") ) { return ::hx::Val( validateComponentInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponentPosition") ) { return ::hx::Val( validateComponentPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNativeConfigProperties") ) { return ::hx::Val( getNativeConfigProperties_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"invalidateComponentDisplay") ) { return ::hx::Val( invalidateComponentDisplay_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"invalidateComponentPosition") ) { return ::hx::Val( invalidateComponentPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNativeConfigPropertyBool") ) { return ::hx::Val( getNativeConfigPropertyBool_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_interactivityDisabledCounter") ) { return ::hx::Val( _interactivityDisabledCounter ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ComponentBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"INTERACTIVE_EVENTS") ) { outValue = ( INTERACTIVE_EVENTS ); return true; }
	}
	return false;
}

::hx::Val ComponentBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_id(inValue.Cast< ::String >()) ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_top(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_left(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_top") ) { _top=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"style") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_style(inValue.Cast<  ::haxe::ui::styles::Style >()) ); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_depth(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_value(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_style") ) { _style=inValue.Cast<  ::haxe::ui::styles::Style >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depth") ) { _depth=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { isReady=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layout") ) { _layout=inValue.Cast<  ::haxe::ui::layouts::Layout >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tooltip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tooltip(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__events") ) { _hx___events=inValue.Cast<  ::haxe::ui::util::EventMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nodeName") ) { nodeName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_disabled(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_children") ) { _children=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoWidth") ) { autoWidth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasScreen") ) { hasScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenTop") ) { screenTop=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nodeName") ) { _nodeName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"behaviours") ) { behaviours=inValue.Cast<  ::haxe::ui::behaviours::Behaviours >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoHeight") ) { autoHeight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasScreen") ) { _hasScreen=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenLeft") ) { screenLeft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textInput") ) { _textInput=inValue.Cast<  ::haxe::ui::core::TextInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_className") ) { _className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenRight") ) { screenRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isDisposed") ) { _isDisposed=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isInScroller") ) { isInScroller=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"topComponent") ) { topComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_actualWidth") ) { _actualWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenBottom") ) { screenBottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenBounds") ) { screenBounds=inValue.Cast<  ::haxe::ui::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textDisplay") ) { _textDisplay=inValue.Cast<  ::haxe::ui::core::TextDisplay >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pausedEvents") ) { _pausedEvents=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layoutLocked") ) { _layoutLocked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { _percentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentHeight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_actualHeight") ) { _actualHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screenBounds") ) { _screenBounds=inValue.Cast<  ::haxe::ui::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { _isAllInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { _isValidating=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_imageDisplay") ) { _imageDisplay=inValue.Cast<  ::haxe::ui::core::ImageDisplay >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"componentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { _percentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isInitialized") ) { _isInitialized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasNativeEntry") ) { hasNativeEntry=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_componentReady") ) { _componentReady=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentComponent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_parentComponent(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
		if (HX_FIELD_EQ(inName,"childComponents") ) { childComponents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomComponent") ) { bottomComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internalEvents") ) { _internalEvents=inValue.Cast<  ::haxe::ui::events::Events >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_disabledEvents") ) { _disabledEvents=inValue.Cast<  ::haxe::ui::util::EventMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_componentWidth") ) { _componentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"componentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentHeight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_hasNativeEntry") ) { _hasNativeEntry=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nativeClassName") ) { nativeClassName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tooltipRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tooltipRenderer(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_parentComponent") ) { _parentComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_componentHeight") ) { _componentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_invalidateCount") ) { _invalidateCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isNativeScroller") ) { isNativeScroller=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_classProperties") ) { _classProperties=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nativeClassName") ) { _nativeClassName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentClipRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentClipRect(inValue.Cast<  ::haxe::ui::geom::Rectangle >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_componentClipRect") ) { _componentClipRect=inValue.Cast<  ::haxe::ui::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isComponentClipped") ) { isComponentClipped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { _invalidationFlags=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_cachedPercentWidth") ) { _cachedPercentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_internalEventsClass") ) { _internalEventsClass=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actualComponentWidth") ) { actualComponentWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedPercentHeight") ) { _cachedPercentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isComponentOffscreen") ) { isComponentOffscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"actualComponentHeight") ) { actualComponentHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_interactivityDisabled") ) { _interactivityDisabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_delayedInvalidationFlags") ) { _delayedInvalidationFlags=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_interactivityDisabledCounter") ) { _interactivityDisabledCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ComponentBase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"INTERACTIVE_EVENTS") ) { INTERACTIVE_EVENTS=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void ComponentBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("behaviours",96,03,c8,c0));
	outFields->push(HX_("_componentReady",05,9b,21,7f));
	outFields->push(HX_("isReady",19,44,40,83));
	outFields->push(HX_("_id",fa,71,48,00));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("_parentComponent",b4,18,57,0f));
	outFields->push(HX_("parentComponent",33,d6,77,24));
	outFields->push(HX_("isInScroller",49,3b,6c,ba));
	outFields->push(HX_("_children",9e,10,00,b8));
	outFields->push(HX_("childComponents",d2,fd,1f,b4));
	outFields->push(HX_("bottomComponent",52,34,bd,48));
	outFields->push(HX_("topComponent",68,6f,e9,7c));
	outFields->push(HX_("_internalEvents",d5,fe,b9,04));
	outFields->push(HX_("_internalEventsClass",23,05,d7,e7));
	outFields->push(HX_("__events",39,ba,99,3e));
	outFields->push(HX_("_disabledEvents",54,92,ef,82));
	outFields->push(HX_("_interactivityDisabled",c8,62,98,d1));
	outFields->push(HX_("_interactivityDisabledCounter",14,dd,2b,fb));
	outFields->push(HX_("_pausedEvents",46,4d,38,b9));
	outFields->push(HX_("_layout",49,c0,2f,c7));
	outFields->push(HX_("_layoutLocked",33,16,7a,57));
	outFields->push(HX_("autoWidth",17,f4,6d,a8));
	outFields->push(HX_("autoHeight",b6,18,17,6e));
	outFields->push(HX_("actualComponentWidth",37,63,0e,06));
	outFields->push(HX_("actualComponentHeight",96,e5,d7,fc));
	outFields->push(HX_("_componentWidth",a8,b0,c9,62));
	outFields->push(HX_("componentWidth",09,68,69,19));
	outFields->push(HX_("_componentHeight",05,5b,00,c4));
	outFields->push(HX_("componentHeight",84,18,21,d9));
	outFields->push(HX_("_percentWidth",e0,e3,89,e0));
	outFields->push(HX_("percentWidth",01,51,1b,fe));
	outFields->push(HX_("_percentHeight",cd,f8,6c,4e));
	outFields->push(HX_("percentHeight",8c,08,1b,10));
	outFields->push(HX_("_cachedPercentWidth",22,cc,7b,fc));
	outFields->push(HX_("_cachedPercentHeight",4b,4a,26,a6));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_actualWidth",99,86,4b,9e));
	outFields->push(HX_("_actualHeight",f4,b7,19,9a));
	outFields->push(HX_("_hasScreen",27,6a,e8,e3));
	outFields->push(HX_("hasScreen",66,ee,45,88));
	outFields->push(HX_("_left",e6,23,c1,fa));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("_top",96,ab,23,3f));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("screenLeft",93,95,e6,bf));
	outFields->push(HX_("screenRight",d0,58,e9,a0));
	outFields->push(HX_("screenTop",89,ce,fc,37));
	outFields->push(HX_("screenBottom",77,ef,96,42));
	outFields->push(HX_("_screenBounds",e0,21,aa,25));
	outFields->push(HX_("screenBounds",01,8f,3b,43));
	outFields->push(HX_("_componentClipRect",b2,66,30,2e));
	outFields->push(HX_("componentClipRect",f1,c1,1a,5b));
	outFields->push(HX_("isComponentClipped",cc,ac,e0,9e));
	outFields->push(HX_("isComponentOffscreen",28,be,d5,68));
	outFields->push(HX_("_style",72,ec,04,80));
	outFields->push(HX_("style",31,a5,1d,84));
	outFields->push(HX_("_invalidationFlags",ca,12,21,cb));
	outFields->push(HX_("_delayedInvalidationFlags",66,26,ce,04));
	outFields->push(HX_("_isAllInvalid",3f,9b,7e,b8));
	outFields->push(HX_("_isValidating",bc,c6,7a,96));
	outFields->push(HX_("_isInitialized",8b,35,86,7e));
	outFields->push(HX_("_isDisposed",0e,ea,dc,74));
	outFields->push(HX_("_invalidateCount",d5,9f,f0,22));
	outFields->push(HX_("_depth",44,38,11,d3));
	outFields->push(HX_("depth",03,f1,29,d7));
	outFields->push(HX_("isNativeScroller",fb,b7,18,46));
	outFields->push(HX_("_textDisplay",16,d3,d3,fc));
	outFields->push(HX_("_textInput",de,cf,ad,b2));
	outFields->push(HX_("_imageDisplay",06,37,81,8d));
	outFields->push(HX_("_classProperties",cc,30,e5,db));
	outFields->push(HX_("_hasNativeEntry",c0,86,6c,12));
	outFields->push(HX_("hasNativeEntry",21,3e,0c,c9));
	outFields->push(HX_("_className",64,0e,e0,37));
	outFields->push(HX_("className",a3,92,3d,dc));
	outFields->push(HX_("_nodeName",cc,c8,12,3a));
	outFields->push(HX_("nodeName",6d,d1,7c,f2));
	outFields->push(HX_("_nativeClassName",8d,80,5e,07));
	outFields->push(HX_("nativeClassName",0c,3e,7f,1c));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("disabled",7c,41,04,7c));
	outFields->push(HX_("tooltip",03,ad,8c,6a));
	outFields->push(HX_("tooltipRenderer",66,69,e3,ff));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComponentBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::behaviours::Behaviours */ ,(int)offsetof(ComponentBase_obj,behaviours),HX_("behaviours",96,03,c8,c0)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,_componentReady),HX_("_componentReady",05,9b,21,7f)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,isReady),HX_("isReady",19,44,40,83)},
	{::hx::fsString,(int)offsetof(ComponentBase_obj,_id),HX_("_id",fa,71,48,00)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ComponentBase_obj,_parentComponent),HX_("_parentComponent",b4,18,57,0f)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,isInScroller),HX_("isInScroller",49,3b,6c,ba)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ComponentBase_obj,_children),HX_("_children",9e,10,00,b8)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ComponentBase_obj,childComponents),HX_("childComponents",d2,fd,1f,b4)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ComponentBase_obj,bottomComponent),HX_("bottomComponent",52,34,bd,48)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ComponentBase_obj,topComponent),HX_("topComponent",68,6f,e9,7c)},
	{::hx::fsObject /*  ::haxe::ui::events::Events */ ,(int)offsetof(ComponentBase_obj,_internalEvents),HX_("_internalEvents",d5,fe,b9,04)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(ComponentBase_obj,_internalEventsClass),HX_("_internalEventsClass",23,05,d7,e7)},
	{::hx::fsObject /*  ::haxe::ui::util::EventMap */ ,(int)offsetof(ComponentBase_obj,_hx___events),HX_("__events",39,ba,99,3e)},
	{::hx::fsObject /*  ::haxe::ui::util::EventMap */ ,(int)offsetof(ComponentBase_obj,_disabledEvents),HX_("_disabledEvents",54,92,ef,82)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,_interactivityDisabled),HX_("_interactivityDisabled",c8,62,98,d1)},
	{::hx::fsInt,(int)offsetof(ComponentBase_obj,_interactivityDisabledCounter),HX_("_interactivityDisabledCounter",14,dd,2b,fb)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(ComponentBase_obj,_pausedEvents),HX_("_pausedEvents",46,4d,38,b9)},
	{::hx::fsObject /*  ::haxe::ui::layouts::Layout */ ,(int)offsetof(ComponentBase_obj,_layout),HX_("_layout",49,c0,2f,c7)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,_layoutLocked),HX_("_layoutLocked",33,16,7a,57)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,autoWidth),HX_("autoWidth",17,f4,6d,a8)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,autoHeight),HX_("autoHeight",b6,18,17,6e)},
	{::hx::fsFloat,(int)offsetof(ComponentBase_obj,actualComponentWidth),HX_("actualComponentWidth",37,63,0e,06)},
	{::hx::fsFloat,(int)offsetof(ComponentBase_obj,actualComponentHeight),HX_("actualComponentHeight",96,e5,d7,fc)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_componentWidth),HX_("_componentWidth",a8,b0,c9,62)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_componentHeight),HX_("_componentHeight",05,5b,00,c4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_percentWidth),HX_("_percentWidth",e0,e3,89,e0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_percentHeight),HX_("_percentHeight",cd,f8,6c,4e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_cachedPercentWidth),HX_("_cachedPercentWidth",22,cc,7b,fc)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_cachedPercentHeight),HX_("_cachedPercentHeight",4b,4a,26,a6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_actualWidth),HX_("_actualWidth",99,86,4b,9e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_actualHeight),HX_("_actualHeight",f4,b7,19,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_hasScreen),HX_("_hasScreen",27,6a,e8,e3)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,hasScreen),HX_("hasScreen",66,ee,45,88)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_left),HX_("_left",e6,23,c1,fa)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_top),HX_("_top",96,ab,23,3f)},
	{::hx::fsFloat,(int)offsetof(ComponentBase_obj,screenLeft),HX_("screenLeft",93,95,e6,bf)},
	{::hx::fsFloat,(int)offsetof(ComponentBase_obj,screenRight),HX_("screenRight",d0,58,e9,a0)},
	{::hx::fsFloat,(int)offsetof(ComponentBase_obj,screenTop),HX_("screenTop",89,ce,fc,37)},
	{::hx::fsFloat,(int)offsetof(ComponentBase_obj,screenBottom),HX_("screenBottom",77,ef,96,42)},
	{::hx::fsObject /*  ::haxe::ui::geom::Rectangle */ ,(int)offsetof(ComponentBase_obj,_screenBounds),HX_("_screenBounds",e0,21,aa,25)},
	{::hx::fsObject /*  ::haxe::ui::geom::Rectangle */ ,(int)offsetof(ComponentBase_obj,screenBounds),HX_("screenBounds",01,8f,3b,43)},
	{::hx::fsObject /*  ::haxe::ui::geom::Rectangle */ ,(int)offsetof(ComponentBase_obj,_componentClipRect),HX_("_componentClipRect",b2,66,30,2e)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,isComponentClipped),HX_("isComponentClipped",cc,ac,e0,9e)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,isComponentOffscreen),HX_("isComponentOffscreen",28,be,d5,68)},
	{::hx::fsObject /*  ::haxe::ui::styles::Style */ ,(int)offsetof(ComponentBase_obj,_style),HX_("_style",72,ec,04,80)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ComponentBase_obj,_invalidationFlags),HX_("_invalidationFlags",ca,12,21,cb)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ComponentBase_obj,_delayedInvalidationFlags),HX_("_delayedInvalidationFlags",66,26,ce,04)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,_isAllInvalid),HX_("_isAllInvalid",3f,9b,7e,b8)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,_isValidating),HX_("_isValidating",bc,c6,7a,96)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,_isInitialized),HX_("_isInitialized",8b,35,86,7e)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,_isDisposed),HX_("_isDisposed",0e,ea,dc,74)},
	{::hx::fsInt,(int)offsetof(ComponentBase_obj,_invalidateCount),HX_("_invalidateCount",d5,9f,f0,22)},
	{::hx::fsInt,(int)offsetof(ComponentBase_obj,_depth),HX_("_depth",44,38,11,d3)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,isNativeScroller),HX_("isNativeScroller",fb,b7,18,46)},
	{::hx::fsObject /*  ::haxe::ui::core::TextDisplay */ ,(int)offsetof(ComponentBase_obj,_textDisplay),HX_("_textDisplay",16,d3,d3,fc)},
	{::hx::fsObject /*  ::haxe::ui::core::TextInput */ ,(int)offsetof(ComponentBase_obj,_textInput),HX_("_textInput",de,cf,ad,b2)},
	{::hx::fsObject /*  ::haxe::ui::core::ImageDisplay */ ,(int)offsetof(ComponentBase_obj,_imageDisplay),HX_("_imageDisplay",06,37,81,8d)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ComponentBase_obj,_classProperties),HX_("_classProperties",cc,30,e5,db)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_hasNativeEntry),HX_("_hasNativeEntry",c0,86,6c,12)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,hasNativeEntry),HX_("hasNativeEntry",21,3e,0c,c9)},
	{::hx::fsString,(int)offsetof(ComponentBase_obj,_className),HX_("_className",64,0e,e0,37)},
	{::hx::fsString,(int)offsetof(ComponentBase_obj,className),HX_("className",a3,92,3d,dc)},
	{::hx::fsString,(int)offsetof(ComponentBase_obj,_nodeName),HX_("_nodeName",cc,c8,12,3a)},
	{::hx::fsString,(int)offsetof(ComponentBase_obj,nodeName),HX_("nodeName",6d,d1,7c,f2)},
	{::hx::fsString,(int)offsetof(ComponentBase_obj,_nativeClassName),HX_("_nativeClassName",8d,80,5e,07)},
	{::hx::fsString,(int)offsetof(ComponentBase_obj,nativeClassName),HX_("nativeClassName",0c,3e,7f,1c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ComponentBase_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &ComponentBase_obj::INTERACTIVE_EVENTS,HX_("INTERACTIVE_EVENTS",36,5f,34,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ComponentBase_obj_sMemberFields[] = {
	HX_("behaviours",96,03,c8,c0),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("_componentReady",05,9b,21,7f),
	HX_("isReady",19,44,40,83),
	HX_("get_isReady",30,a4,3a,09),
	HX_("_id",fa,71,48,00),
	HX_("get_id",24,f3,2f,a3),
	HX_("set_id",98,47,78,6f),
	HX_("_parentComponent",b4,18,57,0f),
	HX_("get_parentComponent",4a,a5,82,af),
	HX_("set_parentComponent",56,98,1f,ec),
	HX_("onParentComponentSet",2e,58,4b,9a),
	HX_("isInScroller",49,3b,6c,ba),
	HX_("get_isInScroller",d2,27,0b,bf),
	HX_("findScroller",13,fb,d2,79),
	HX_("containsChildComponent",00,da,83,db),
	HX_("_children",9e,10,00,b8),
	HX_("childComponents",d2,fd,1f,b4),
	HX_("get_childComponents",e9,cc,2a,3f),
	HX_("addComponent",5c,12,a8,0e),
	HX_("addComponentAt",6f,9a,96,16),
	HX_("removeComponent",d9,8b,72,50),
	HX_("containsComponent",9e,ba,74,14),
	HX_("removeComponentAt",2c,2d,10,3b),
	HX_("moveComponentToBack",ce,95,74,c0),
	HX_("moveComponentBackward",6f,67,61,ec),
	HX_("moveComponentToFront",22,8f,6e,fe),
	HX_("moveComponentFrontward",59,12,56,7b),
	HX_("bottomComponent",52,34,bd,48),
	HX_("get_bottomComponent",69,03,c8,d3),
	HX_("topComponent",68,6f,e9,7c),
	HX_("get_topComponent",f1,5b,88,81),
	HX_("postCloneComponent",20,ea,c3,a0),
	HX_("_internalEvents",d5,fe,b9,04),
	HX_("_internalEventsClass",23,05,d7,e7),
	HX_("registerInternalEvents",f9,37,74,35),
	HX_("unregisterInternalEvents",12,e9,18,03),
	HX_("__events",39,ba,99,3e),
	HX_("registerEvent",b7,8a,2d,6b),
	HX_("hasEvent",60,12,1d,02),
	HX_("unregisterEvent",be,60,a7,28),
	HX_("unregisterEvents",f5,45,cd,69),
	HX_("dispatch",ba,ce,63,1e),
	HX_("dispatchRecursively",e5,79,ca,f4),
	HX_("removeAllListeners",82,de,5f,48),
	HX_("dispatchRecursivelyWhen",3f,a3,8e,b2),
	HX_("checkWatchForMoveEvents",8c,dc,50,4a),
	HX_("_onMoveInternal",cc,a7,fb,2f),
	HX_("checkComponentBounds",2a,27,93,6a),
	HX_("_onMappedEvent",c9,28,71,18),
	HX_("_disabledEvents",54,92,ef,82),
	HX_("isInteractiveEvent",e2,92,22,04),
	HX_("disableInteractiveEvents",93,47,0e,38),
	HX_("_interactivityDisabled",c8,62,98,d1),
	HX_("_interactivityDisabledCounter",14,dd,2b,fb),
	HX_("disableInteractivity",e3,3d,6f,17),
	HX_("unregisterEventsInternal",52,e6,4b,73),
	HX_("_pausedEvents",46,4d,38,b9),
	HX_("pauseEvent",44,65,3d,4b),
	HX_("resumeEvent",2d,9b,8e,46),
	HX_("_layout",49,c0,2f,c7),
	HX_("_layoutLocked",33,16,7a,57),
	HX_("autoWidth",17,f4,6d,a8),
	HX_("get_autoWidth",ee,c7,d1,69),
	HX_("autoHeight",b6,18,17,6e),
	HX_("get_autoHeight",ff,a0,0c,e4),
	HX_("resizeComponent",29,98,f2,6b),
	HX_("actualComponentWidth",37,63,0e,06),
	HX_("get_actualComponentWidth",c0,80,aa,48),
	HX_("actualComponentHeight",96,e5,d7,fc),
	HX_("get_actualComponentHeight",ed,9f,d5,02),
	HX_("_componentWidth",a8,b0,c9,62),
	HX_("get_componentWidth",d2,48,03,b5),
	HX_("set_componentWidth",46,7b,b2,91),
	HX_("_componentHeight",05,5b,00,c4),
	HX_("get_componentHeight",9b,e7,2b,64),
	HX_("set_componentHeight",a7,da,c8,a0),
	HX_("_percentWidth",e0,e3,89,e0),
	HX_("get_percentWidth",8a,3d,ba,02),
	HX_("set_percentWidth",fe,2a,fc,58),
	HX_("_percentHeight",cd,f8,6c,4e),
	HX_("get_percentHeight",e3,13,8b,16),
	HX_("set_percentHeight",ef,eb,f8,39),
	HX_("_cachedPercentWidth",22,cc,7b,fc),
	HX_("_cachedPercentHeight",4b,4a,26,a6),
	HX_("cachePercentSizes",ef,e4,d7,ce),
	HX_("restorePercentSizes",fb,13,79,de),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("_width",47,fd,49,c6),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_width",5d,12,0c,0e),
	HX_("_height",86,19,c3,70),
	HX_("set_height",24,16,51,f6),
	HX_("get_height",b0,77,d3,f2),
	HX_("_actualWidth",99,86,4b,9e),
	HX_("_actualHeight",f4,b7,19,9a),
	HX_("_hasScreen",27,6a,e8,e3),
	HX_("hasScreen",66,ee,45,88),
	HX_("get_hasScreen",3d,c2,a9,49),
	HX_("hitTest",45,60,7f,e2),
	HX_("autoSize",d0,8f,79,2f),
	HX_("moveComponent",6c,83,03,2a),
	HX_("_left",e6,23,c1,fa),
	HX_("get_left",90,c3,6a,c7),
	HX_("set_left",04,1d,c8,75),
	HX_("_top",96,ab,23,3f),
	HX_("get_top",2c,2f,cd,26),
	HX_("set_top",38,c0,ce,19),
	HX_("screenLeft",93,95,e6,bf),
	HX_("get_screenLeft",dc,1d,dc,35),
	HX_("screenRight",d0,58,e9,a0),
	HX_("get_screenRight",67,10,cb,61),
	HX_("screenTop",89,ce,fc,37),
	HX_("get_screenTop",60,a2,60,f9),
	HX_("screenBottom",77,ef,96,42),
	HX_("get_screenBottom",00,dc,35,47),
	HX_("_screenBounds",e0,21,aa,25),
	HX_("screenBounds",01,8f,3b,43),
	HX_("get_screenBounds",8a,7b,da,47),
	HX_("_componentClipRect",b2,66,30,2e),
	HX_("get_componentClipRect",c8,c4,c8,d9),
	HX_("set_componentClipRect",d4,92,d1,2d),
	HX_("isComponentClipped",cc,ac,e0,9e),
	HX_("get_isComponentClipped",15,26,75,f8),
	HX_("isComponentOffscreen",28,be,d5,68),
	HX_("get_isComponentOffscreen",b1,db,71,ab),
	HX_("_style",72,ec,04,80),
	HX_("get_style",88,01,c7,c7),
	HX_("set_style",94,ed,17,ab),
	HX_("_invalidationFlags",ca,12,21,cb),
	HX_("_delayedInvalidationFlags",66,26,ce,04),
	HX_("_isAllInvalid",3f,9b,7e,b8),
	HX_("_isValidating",bc,c6,7a,96),
	HX_("_isInitialized",8b,35,86,7e),
	HX_("_isDisposed",0e,ea,dc,74),
	HX_("_invalidateCount",d5,9f,f0,22),
	HX_("_depth",44,38,11,d3),
	HX_("get_depth",5a,4d,d3,1a),
	HX_("set_depth",66,39,24,fe),
	HX_("isComponentInvalid",c4,7f,60,d7),
	HX_("invalidateComponent",c2,2f,39,9e),
	HX_("invalidateComponentData",0c,bb,f5,64),
	HX_("invalidateComponentLayout",0c,90,57,10),
	HX_("invalidateComponentPosition",8b,1e,1e,d1),
	HX_("invalidateComponentDisplay",a0,7e,b0,ae),
	HX_("invalidateComponentStyle",0f,86,a3,a1),
	HX_("validateComponent",47,3d,eb,a4),
	HX_("validateNow",20,c2,bf,ca),
	HX_("syncComponentValidation",bb,b1,33,45),
	HX_("validateComponentInternal",a4,7f,0c,11),
	HX_("initializeComponent",4d,f5,42,2d),
	HX_("validateInitialSize",6f,72,e3,cb),
	HX_("validateComponentData",11,6f,7d,76),
	HX_("validateComponentLayout",51,0f,38,5a),
	HX_("validateComponentStyle",6a,56,d9,e6),
	HX_("validateComponentPosition",10,b9,90,b3),
	HX_("handleCreate",c4,8c,3b,ca),
	HX_("handleDestroy",32,16,fb,3c),
	HX_("handlePosition",71,c8,d1,18),
	HX_("handlePreReposition",97,20,85,48),
	HX_("handlePostReposition",a4,5d,18,ff),
	HX_("handleSize",89,44,f9,6a),
	HX_("handleReady",9b,4b,04,99),
	HX_("handleClipRect",dc,b7,41,a6),
	HX_("handleVisibility",9a,57,d4,a2),
	HX_("handleDisabled",44,69,db,c9),
	HX_("handleSetComponentIndex",8f,73,b6,f4),
	HX_("handleAddComponent",24,be,c2,5c),
	HX_("handleAddComponentAt",37,c8,89,21),
	HX_("handleRemoveComponent",11,6d,47,da),
	HX_("handleRemoveComponentAt",64,cc,c9,8c),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("mapEvent",de,37,07,ed),
	HX_("unmapEvent",37,1f,cb,72),
	HX_("getComponentOffset",3a,48,da,e9),
	HX_("isNativeScroller",fb,b7,18,46),
	HX_("get_isNativeScroller",04,1d,83,64),
	HX_("handleFrameworkProperty",2b,e6,cd,d0),
	HX_("_textDisplay",16,d3,d3,fc),
	HX_("createTextDisplay",79,ff,6a,e9),
	HX_("getTextDisplay",1f,78,68,1e),
	HX_("hasTextDisplay",db,67,54,88),
	HX_("_textInput",de,cf,ad,b2),
	HX_("createTextInput",81,0d,00,f8),
	HX_("getTextInput",a7,f0,61,66),
	HX_("hasTextInput",63,39,5d,e4),
	HX_("_imageDisplay",06,37,81,8d),
	HX_("createImageDisplay",43,e1,30,a5),
	HX_("getImageDisplay",dd,f9,fc,cd),
	HX_("hasImageDisplay",a1,ce,82,12),
	HX_("removeImageDisplay",8b,e2,48,f7),
	HX_("getClassProperty",37,1e,6a,9e),
	HX_("_classProperties",cc,30,e5,db),
	HX_("setClassProperty",ab,0b,ac,f4),
	HX_("_hasNativeEntry",c0,86,6c,12),
	HX_("hasNativeEntry",21,3e,0c,c9),
	HX_("get_hasNativeEntry",ea,1e,a6,64),
	HX_("getNativeConfigProperty",e4,40,a7,d6),
	HX_("getNativeConfigPropertyBool",2e,33,98,ce),
	HX_("getNativeConfigProperties",42,76,98,3f),
	HX_("_className",64,0e,e0,37),
	HX_("className",a3,92,3d,dc),
	HX_("get_className",7a,66,a1,9d),
	HX_("_nodeName",cc,c8,12,3a),
	HX_("nodeName",6d,d1,7c,f2),
	HX_("get_nodeName",76,85,96,a7),
	HX_("_nativeClassName",8d,80,5e,07),
	HX_("nativeClassName",0c,3e,7f,1c),
	HX_("get_nativeClassName",23,0d,8a,a7),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("get_disabled",85,f5,1d,31),
	HX_("set_disabled",f9,18,17,46),
	HX_("get_tooltip",1a,0d,87,f0),
	HX_("set_tooltip",26,14,f4,fa),
	HX_("get_tooltipRenderer",7d,38,ee,8a),
	HX_("set_tooltipRenderer",89,2b,8b,c7),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

static void ComponentBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentBase_obj::INTERACTIVE_EVENTS,"INTERACTIVE_EVENTS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ComponentBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentBase_obj::INTERACTIVE_EVENTS,"INTERACTIVE_EVENTS");
};

#endif

::hx::Class ComponentBase_obj::__mClass;

static ::String ComponentBase_obj_sStaticFields[] = {
	HX_("INTERACTIVE_EVENTS",36,5f,34,0c),
	::String(null())
};

void ComponentBase_obj::__register()
{
	ComponentBase_obj _hx_dummy;
	ComponentBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ComponentBase",22,51,8d,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ComponentBase_obj::__GetStatic;
	__mClass->mSetStaticField = &ComponentBase_obj::__SetStatic;
	__mClass->mMarkFunc = ComponentBase_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ComponentBase_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ComponentBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ComponentBase_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_37_boot)
HXDLIN(  37)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("percentWidth",01,51,1b,fe), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(1,HX_("percentHeight",8c,08,1b,10), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null()))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_520_boot)
HXDLIN( 520)		INTERACTIVE_EVENTS = ::Array_obj< ::String >::__new(10)->init(0,::haxe::ui::events::MouseEvent_obj::MOUSE_MOVE)->init(1,::haxe::ui::events::MouseEvent_obj::MOUSE_OVER)->init(2,::haxe::ui::events::MouseEvent_obj::MOUSE_OUT)->init(3,::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN)->init(4,::haxe::ui::events::MouseEvent_obj::MOUSE_UP)->init(5,::haxe::ui::events::MouseEvent_obj::MOUSE_WHEEL)->init(6,::haxe::ui::events::MouseEvent_obj::CLICK)->init(7,::haxe::ui::events::MouseEvent_obj::DBL_CLICK)->init(8,::haxe::ui::events::KeyboardEvent_obj::KEY_DOWN)->init(9,::haxe::ui::events::KeyboardEvent_obj::KEY_UP);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
