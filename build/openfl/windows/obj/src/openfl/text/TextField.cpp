#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeWindow
#include <lime/_internal/backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_text_StyleSheet
#include <openfl/text/StyleSheet.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextLineMetrics
#include <openfl/text/TextLineMetrics.h>
#endif
#ifndef INCLUDED_openfl_text__internal_GlyphPosition
#include <openfl/text/_internal/GlyphPosition.h>
#endif
#ifndef INCLUDED_openfl_text__internal_HTMLParser
#include <openfl/text/_internal/HTMLParser.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextEngine
#include <openfl/text/_internal/TextEngine.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextFormatRange
#include <openfl/text/_internal/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayoutGroup
#include <openfl/text/_internal/TextLayoutGroup.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d001dbc361c2c159_135_new,"openfl.text.TextField","new",0xbd7676bc,"openfl.text.TextField.new","openfl/text/TextField.hx",135,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_894_appendText,"openfl.text.TextField","appendText",0xaa44eccb,"openfl.text.TextField.appendText","openfl/text/TextField.hx",894,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_920_getCharBoundaries,"openfl.text.TextField","getCharBoundaries",0xf44814d0,"openfl.text.TextField.getCharBoundaries","openfl/text/TextField.hx",920,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_946_getCharIndexAtPoint,"openfl.text.TextField","getCharIndexAtPoint",0x758b0c73,"openfl.text.TextField.getCharIndexAtPoint","openfl/text/TextField.hx",946,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_996_getFirstCharInParagraph,"openfl.text.TextField","getFirstCharInParagraph",0xe06fd955,"openfl.text.TextField.getFirstCharInParagraph","openfl/text/TextField.hx",996,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1045_getLineIndexAtPoint,"openfl.text.TextField","getLineIndexAtPoint",0x633efa91,"openfl.text.TextField.getLineIndexAtPoint","openfl/text/TextField.hx",1045,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1077_getLineIndexOfChar,"openfl.text.TextField","getLineIndexOfChar",0xcab049d9,"openfl.text.TextField.getLineIndexOfChar","openfl/text/TextField.hx",1077,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1101_getLineLength,"openfl.text.TextField","getLineLength",0x953e9d8c,"openfl.text.TextField.getLineLength","openfl/text/TextField.hx",1101,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1134_getLineMetrics,"openfl.text.TextField","getLineMetrics",0xa6c52add,"openfl.text.TextField.getLineMetrics","openfl/text/TextField.hx",1134,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1165_getLineOffset,"openfl.text.TextField","getLineOffset",0x5676a039,"openfl.text.TextField.getLineOffset","openfl/text/TextField.hx",1165,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1191_getLineText,"openfl.text.TextField","getLineText",0xb8113fd3,"openfl.text.TextField.getLineText","openfl/text/TextField.hx",1191,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1230_getParagraphLength,"openfl.text.TextField","getParagraphLength",0xed64f022,"openfl.text.TextField.getParagraphLength","openfl/text/TextField.hx",1230,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1269_getTextFormat,"openfl.text.TextField","getTextFormat",0x560e1d56,"openfl.text.TextField.getTextFormat","openfl/text/TextField.hx",1269,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1365_replaceSelectedText,"openfl.text.TextField","replaceSelectedText",0x86221d58,"openfl.text.TextField.replaceSelectedText","openfl/text/TextField.hx",1365,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1386_replaceText,"openfl.text.TextField","replaceText",0x698fcd5d,"openfl.text.TextField.replaceText","openfl/text/TextField.hx",1386,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1405_setSelection,"openfl.text.TextField","setSelection",0xa586666e,"openfl.text.TextField.setSelection","openfl/text/TextField.hx",1405,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1471_setTextFormat,"openfl.text.TextField","setTextFormat",0x9b13ff62,"openfl.text.TextField.setTextFormat","openfl/text/TextField.hx",1471,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1643___setStageReference,"openfl.text.TextField","__setStageReference",0xbfd403ab,"openfl.text.TextField.__setStageReference","openfl/text/TextField.hx",1643,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1654___allowMouseFocus,"openfl.text.TextField","__allowMouseFocus",0x70182198,"openfl.text.TextField.__allowMouseFocus","openfl/text/TextField.hx",1654,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1659___caretBeginningOfLine,"openfl.text.TextField","__caretBeginningOfLine",0x4c500c69,"openfl.text.TextField.__caretBeginningOfLine","openfl/text/TextField.hx",1659,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1663___caretBeginningOfNextLine,"openfl.text.TextField","__caretBeginningOfNextLine",0x9988917c,"openfl.text.TextField.__caretBeginningOfNextLine","openfl/text/TextField.hx",1663,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1677___caretBeginningOfPreviousLine,"openfl.text.TextField","__caretBeginningOfPreviousLine",0x6f5ad940,"openfl.text.TextField.__caretBeginningOfPreviousLine","openfl/text/TextField.hx",1677,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1696___caretEndOfLine,"openfl.text.TextField","__caretEndOfLine",0xeca90427,"openfl.text.TextField.__caretEndOfLine","openfl/text/TextField.hx",1696,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1711___caretNextCharacter,"openfl.text.TextField","__caretNextCharacter",0xafbbedf7,"openfl.text.TextField.__caretNextCharacter","openfl/text/TextField.hx",1711,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1718___caretNextLine,"openfl.text.TextField","__caretNextLine",0xd85e2866,"openfl.text.TextField.__caretNextLine","openfl/text/TextField.hx",1718,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1729___caretPreviousCharacter,"openfl.text.TextField","__caretPreviousCharacter",0x656722b3,"openfl.text.TextField.__caretPreviousCharacter","openfl/text/TextField.hx",1729,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1736___caretPreviousLine,"openfl.text.TextField","__caretPreviousLine",0x13772d2a,"openfl.text.TextField.__caretPreviousLine","openfl/text/TextField.hx",1736,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1747___disableInput,"openfl.text.TextField","__disableInput",0xd160e346,"openfl.text.TextField.__disableInput","openfl/text/TextField.hx",1747,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1761___dispatch,"openfl.text.TextField","__dispatch",0x10db5efe,"openfl.text.TextField.__dispatch","openfl/text/TextField.hx",1761,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1791___enableInput,"openfl.text.TextField","__enableInput",0x9681fcc3,"openfl.text.TextField.__enableInput","openfl/text/TextField.hx",1791,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1838___getAdvance,"openfl.text.TextField","__getAdvance",0x6a1cb7d0,"openfl.text.TextField.__getAdvance","openfl/text/TextField.hx",1838,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1843___getBounds,"openfl.text.TextField","__getBounds",0x189abae7,"openfl.text.TextField.__getBounds","openfl/text/TextField.hx",1843,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1857___getCharBoundaries,"openfl.text.TextField","__getCharBoundaries",0x097fccb0,"openfl.text.TextField.__getCharBoundaries","openfl/text/TextField.hx",1857,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1889___getCharIndexOnDifferentLine,"openfl.text.TextField","__getCharIndexOnDifferentLine",0x6afd9f64,"openfl.text.TextField.__getCharIndexOnDifferentLine","openfl/text/TextField.hx",1889,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1926___getCursor,"openfl.text.TextField","__getCursor",0xf165c348,"openfl.text.TextField.__getCursor","openfl/text/TextField.hx",1926,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1942___getGroup,"openfl.text.TextField","__getGroup",0xec43530d,"openfl.text.TextField.__getGroup","openfl/text/TextField.hx",1942,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1992___getPosition,"openfl.text.TextField","__getPosition",0xfe83559b,"openfl.text.TextField.__getPosition","openfl/text/TextField.hx",1992,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2023___getPositionByIdentifier,"openfl.text.TextField","__getPositionByIdentifier",0xfd93935b,"openfl.text.TextField.__getPositionByIdentifier","openfl/text/TextField.hx",2023,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2051___getOppositeIdentifierBound,"openfl.text.TextField","__getOppositeIdentifierBound",0xdbd4313c,"openfl.text.TextField.__getOppositeIdentifierBound","openfl/text/TextField.hx",2051,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2080___hitTest,"openfl.text.TextField","__hitTest",0x83278481,"openfl.text.TextField.__hitTest","openfl/text/TextField.hx",2080,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2104___hitTestMask,"openfl.text.TextField","__hitTestMask",0x0119c60d,"openfl.text.TextField.__hitTestMask","openfl/text/TextField.hx",2104,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2120___replaceSelectedText,"openfl.text.TextField","__replaceSelectedText",0x229f8d38,"openfl.text.TextField.__replaceSelectedText","openfl/text/TextField.hx",2120,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2143___replaceText,"openfl.text.TextField","__replaceText",0x6f2a5d3d,"openfl.text.TextField.__replaceText","openfl/text/TextField.hx",2143,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2274___startCursorTimer,"openfl.text.TextField","__startCursorTimer",0xacba2811,"openfl.text.TextField.__startCursorTimer","openfl/text/TextField.hx",2274,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2292___startTextInput,"openfl.text.TextField","__startTextInput",0x3a7d3e9f,"openfl.text.TextField.__startTextInput","openfl/text/TextField.hx",2292,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2308___stopCursorTimer,"openfl.text.TextField","__stopCursorTimer",0x8f135c69,"openfl.text.TextField.__stopCursorTimer","openfl/text/TextField.hx",2308,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2324___stopTextInput,"openfl.text.TextField","__stopTextInput",0x6c7c2cf7,"openfl.text.TextField.__stopTextInput","openfl/text/TextField.hx",2324,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2335___updateLayout,"openfl.text.TextField","__updateLayout",0x2d3b57d7,"openfl.text.TextField.__updateLayout","openfl/text/TextField.hx",2335,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2366___updateMouseDrag,"openfl.text.TextField","__updateMouseDrag",0x2a5075ac,"openfl.text.TextField.__updateMouseDrag","openfl/text/TextField.hx",2366,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2398___updateScrollH,"openfl.text.TextField","__updateScrollH",0x4ea991ce,"openfl.text.TextField.__updateScrollH","openfl/text/TextField.hx",2398,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2472___updateScrollV,"openfl.text.TextField","__updateScrollV",0x4ea991dc,"openfl.text.TextField.__updateScrollV","openfl/text/TextField.hx",2472,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2534___updateText,"openfl.text.TextField","__updateText",0x315de09a,"openfl.text.TextField.__updateText","openfl/text/TextField.hx",2534,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2594___updateTransforms,"openfl.text.TextField","__updateTransforms",0x79c7d534,"openfl.text.TextField.__updateTransforms","openfl/text/TextField.hx",2594,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2602_get_antiAliasType,"openfl.text.TextField","get_antiAliasType",0x57115f1b,"openfl.text.TextField.get_antiAliasType","openfl/text/TextField.hx",2602,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2606_set_antiAliasType,"openfl.text.TextField","set_antiAliasType",0x7a7f3727,"openfl.text.TextField.set_antiAliasType","openfl/text/TextField.hx",2606,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2617_get_autoSize,"openfl.text.TextField","get_autoSize",0xd7aef1fd,"openfl.text.TextField.get_autoSize","openfl/text/TextField.hx",2617,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2621_set_autoSize,"openfl.text.TextField","set_autoSize",0xeca81571,"openfl.text.TextField.set_autoSize","openfl/text/TextField.hx",2621,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2634_get_background,"openfl.text.TextField","get_background",0x50119b5b,"openfl.text.TextField.get_background","openfl/text/TextField.hx",2634,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2638_set_background,"openfl.text.TextField","set_background",0x703183cf,"openfl.text.TextField.set_background","openfl/text/TextField.hx",2638,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2650_get_backgroundColor,"openfl.text.TextField","get_backgroundColor",0x63403c08,"openfl.text.TextField.get_backgroundColor","openfl/text/TextField.hx",2650,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2654_set_backgroundColor,"openfl.text.TextField","set_backgroundColor",0x9fdd2f14,"openfl.text.TextField.set_backgroundColor","openfl/text/TextField.hx",2654,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2666_get_border,"openfl.text.TextField","get_border",0xa3e0d9d9,"openfl.text.TextField.get_border","openfl/text/TextField.hx",2666,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2670_set_border,"openfl.text.TextField","set_border",0xa75e784d,"openfl.text.TextField.set_border","openfl/text/TextField.hx",2670,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2682_get_borderColor,"openfl.text.TextField","get_borderColor",0x6267b4ca,"openfl.text.TextField.get_borderColor","openfl/text/TextField.hx",2682,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2686_set_borderColor,"openfl.text.TextField","set_borderColor",0x5e3331d6,"openfl.text.TextField.set_borderColor","openfl/text/TextField.hx",2686,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2697_get_bottomScrollV,"openfl.text.TextField","get_bottomScrollV",0xfa9e92b1,"openfl.text.TextField.get_bottomScrollV","openfl/text/TextField.hx",2697,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2705_get_caretIndex,"openfl.text.TextField","get_caretIndex",0x074fbdfc,"openfl.text.TextField.get_caretIndex","openfl/text/TextField.hx",2705,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2710_get_defaultTextFormat,"openfl.text.TextField","get_defaultTextFormat",0x83063818,"openfl.text.TextField.get_defaultTextFormat","openfl/text/TextField.hx",2710,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2714_set_defaultTextFormat,"openfl.text.TextField","set_defaultTextFormat",0xd70f0624,"openfl.text.TextField.set_defaultTextFormat","openfl/text/TextField.hx",2714,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2726_get_displayAsPassword,"openfl.text.TextField","get_displayAsPassword",0x62bc3b42,"openfl.text.TextField.get_displayAsPassword","openfl/text/TextField.hx",2726,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2730_set_displayAsPassword,"openfl.text.TextField","set_displayAsPassword",0xb6c5094e,"openfl.text.TextField.set_displayAsPassword","openfl/text/TextField.hx",2730,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2746_get_embedFonts,"openfl.text.TextField","get_embedFonts",0xb8d5ce98,"openfl.text.TextField.get_embedFonts","openfl/text/TextField.hx",2746,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2758_set_embedFonts,"openfl.text.TextField","set_embedFonts",0xd8f5b70c,"openfl.text.TextField.set_embedFonts","openfl/text/TextField.hx",2758,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2763_get_gridFitType,"openfl.text.TextField","get_gridFitType",0x3fa66af8,"openfl.text.TextField.get_gridFitType","openfl/text/TextField.hx",2763,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2775_set_gridFitType,"openfl.text.TextField","set_gridFitType",0x3b71e804,"openfl.text.TextField.set_gridFitType","openfl/text/TextField.hx",2775,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2779_get_height,"openfl.text.TextField","get_height",0x421294d4,"openfl.text.TextField.get_height","openfl/text/TextField.hx",2779,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2785_set_height,"openfl.text.TextField","set_height",0x45903348,"openfl.text.TextField.set_height","openfl/text/TextField.hx",2785,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2802_get_htmlText,"openfl.text.TextField","get_htmlText",0xb86d81e5,"openfl.text.TextField.get_htmlText","openfl/text/TextField.hx",2802,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2809_set_htmlText,"openfl.text.TextField","set_htmlText",0xcd66a559,"openfl.text.TextField.set_htmlText","openfl/text/TextField.hx",2809,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2874_get_length,"openfl.text.TextField","get_length",0xdece21d3,"openfl.text.TextField.get_length","openfl/text/TextField.hx",2874,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2885_get_maxChars,"openfl.text.TextField","get_maxChars",0x980651c6,"openfl.text.TextField.get_maxChars","openfl/text/TextField.hx",2885,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2889_set_maxChars,"openfl.text.TextField","set_maxChars",0xacff753a,"openfl.text.TextField.set_maxChars","openfl/text/TextField.hx",2889,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2903_get_maxScrollH,"openfl.text.TextField","get_maxScrollH",0xc4f0b4c4,"openfl.text.TextField.get_maxScrollH","openfl/text/TextField.hx",2903,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2910_get_maxScrollV,"openfl.text.TextField","get_maxScrollV",0xc4f0b4d2,"openfl.text.TextField.get_maxScrollV","openfl/text/TextField.hx",2910,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2918_get_mouseWheelEnabled,"openfl.text.TextField","get_mouseWheelEnabled",0xdd79871e,"openfl.text.TextField.get_mouseWheelEnabled","openfl/text/TextField.hx",2918,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2923_set_mouseWheelEnabled,"openfl.text.TextField","set_mouseWheelEnabled",0x3182552a,"openfl.text.TextField.set_mouseWheelEnabled","openfl/text/TextField.hx",2923,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2928_get_multiline,"openfl.text.TextField","get_multiline",0x24925820,"openfl.text.TextField.get_multiline","openfl/text/TextField.hx",2928,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2933_set_multiline,"openfl.text.TextField","set_multiline",0x69983a2c,"openfl.text.TextField.set_multiline","openfl/text/TextField.hx",2933,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2937_get_numLines,"openfl.text.TextField","get_numLines",0xda475406,"openfl.text.TextField.get_numLines","openfl/text/TextField.hx",2937,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2945_get_restrict,"openfl.text.TextField","get_restrict",0x99d42d69,"openfl.text.TextField.get_restrict","openfl/text/TextField.hx",2945,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2949_set_restrict,"openfl.text.TextField","set_restrict",0xaecd50dd,"openfl.text.TextField.set_restrict","openfl/text/TextField.hx",2949,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2961_get_scrollH,"openfl.text.TextField","get_scrollH",0xbeccf60e,"openfl.text.TextField.get_scrollH","openfl/text/TextField.hx",2961,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2965_set_scrollH,"openfl.text.TextField","set_scrollH",0xc939fd1a,"openfl.text.TextField.set_scrollH","openfl/text/TextField.hx",2965,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2984_get_scrollV,"openfl.text.TextField","get_scrollV",0xbeccf61c,"openfl.text.TextField.get_scrollV","openfl/text/TextField.hx",2984,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2988_set_scrollV,"openfl.text.TextField","set_scrollV",0xc939fd28,"openfl.text.TextField.set_scrollV","openfl/text/TextField.hx",2988,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3007_get_selectable,"openfl.text.TextField","get_selectable",0xee1ebe03,"openfl.text.TextField.get_selectable","openfl/text/TextField.hx",3007,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3011_set_selectable,"openfl.text.TextField","set_selectable",0x0e3ea677,"openfl.text.TextField.set_selectable","openfl/text/TextField.hx",3011,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3029_get_selectionBeginIndex,"openfl.text.TextField","get_selectionBeginIndex",0xb79fa288,"openfl.text.TextField.get_selectionBeginIndex","openfl/text/TextField.hx",3029,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3034_get_selectionEndIndex,"openfl.text.TextField","get_selectionEndIndex",0xc3677dd6,"openfl.text.TextField.get_selectionEndIndex","openfl/text/TextField.hx",3034,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3039_get_sharpness,"openfl.text.TextField","get_sharpness",0xa1a5a7b4,"openfl.text.TextField.get_sharpness","openfl/text/TextField.hx",3039,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3043_set_sharpness,"openfl.text.TextField","set_sharpness",0xe6ab89c0,"openfl.text.TextField.set_sharpness","openfl/text/TextField.hx",3043,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3055_get_styleSheet,"openfl.text.TextField","get_styleSheet",0x260a431b,"openfl.text.TextField.get_styleSheet","openfl/text/TextField.hx",3055,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3059_set_styleSheet,"openfl.text.TextField","set_styleSheet",0x462a2b8f,"openfl.text.TextField.set_styleSheet","openfl/text/TextField.hx",3059,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3085_get_tabEnabled,"openfl.text.TextField","get_tabEnabled",0x69fcfe19,"openfl.text.TextField.get_tabEnabled","openfl/text/TextField.hx",3085,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3090_get_text,"openfl.text.TextField","get_text",0x3b0d545a,"openfl.text.TextField.get_text","openfl/text/TextField.hx",3090,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3094_set_text,"openfl.text.TextField","set_text",0xe96aadce,"openfl.text.TextField.set_text","openfl/text/TextField.hx",3094,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3138_get_textColor,"openfl.text.TextField","get_textColor",0x69ca86a9,"openfl.text.TextField.get_textColor","openfl/text/TextField.hx",3138,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3142_set_textColor,"openfl.text.TextField","set_textColor",0xaed068b5,"openfl.text.TextField.set_textColor","openfl/text/TextField.hx",3142,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3158_get_textWidth,"openfl.text.TextField","get_textWidth",0xe9d0cb4c,"openfl.text.TextField.get_textWidth","openfl/text/TextField.hx",3158,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3164_get_textHeight,"openfl.text.TextField","get_textHeight",0x63308fe1,"openfl.text.TextField.get_textHeight","openfl/text/TextField.hx",3164,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3171_get_type,"openfl.text.TextField","get_type",0x3b1c7a67,"openfl.text.TextField.get_type","openfl/text/TextField.hx",3171,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3175_set_type,"openfl.text.TextField","set_type",0xe979d3db,"openfl.text.TextField.set_type","openfl/text/TextField.hx",3175,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3212_get_width,"openfl.text.TextField","get_width",0x2d65e5b9,"openfl.text.TextField.get_width","openfl/text/TextField.hx",3212,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3218_set_width,"openfl.text.TextField","set_width",0x10b6d1c5,"openfl.text.TextField.set_width","openfl/text/TextField.hx",3218,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3234_get_wordWrap,"openfl.text.TextField","get_wordWrap",0xa91076e1,"openfl.text.TextField.get_wordWrap","openfl/text/TextField.hx",3234,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3238_set_wordWrap,"openfl.text.TextField","set_wordWrap",0xbe099a55,"openfl.text.TextField.set_wordWrap","openfl/text/TextField.hx",3238,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3251_get_x,"openfl.text.TextField","get_x",0xd93e9aab,"openfl.text.TextField.get_x","openfl/text/TextField.hx",3251,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3255_set_x,"openfl.text.TextField","set_x",0xc20d90b7,"openfl.text.TextField.set_x","openfl/text/TextField.hx",3255,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3263_get_y,"openfl.text.TextField","get_y",0xd93e9aac,"openfl.text.TextField.get_y","openfl/text/TextField.hx",3263,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3267_set_y,"openfl.text.TextField","set_y",0xc20d90b8,"openfl.text.TextField.set_y","openfl/text/TextField.hx",3267,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3275_stage_onMouseMove,"openfl.text.TextField","stage_onMouseMove",0x47084bd2,"openfl.text.TextField.stage_onMouseMove","openfl/text/TextField.hx",3275,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3317_stage_onMouseUp,"openfl.text.TextField","stage_onMouseUp",0x9bb86cdc,"openfl.text.TextField.stage_onMouseUp","openfl/text/TextField.hx",3317,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3363_this_onAddedToStage,"openfl.text.TextField","this_onAddedToStage",0x3dbcbc7f,"openfl.text.TextField.this_onAddedToStage","openfl/text/TextField.hx",3363,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3368_this_onEnterFrame,"openfl.text.TextField","this_onEnterFrame",0xf6c59f11,"openfl.text.TextField.this_onEnterFrame","openfl/text/TextField.hx",3368,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3374_this_onFocusIn,"openfl.text.TextField","this_onFocusIn",0x90f9e141,"openfl.text.TextField.this_onFocusIn","openfl/text/TextField.hx",3374,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3385_this_onFocusOut,"openfl.text.TextField","this_onFocusOut",0x49afcbb2,"openfl.text.TextField.this_onFocusOut","openfl/text/TextField.hx",3385,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3403_this_onKeyDown,"openfl.text.TextField","this_onKeyDown",0xebbe0505,"openfl.text.TextField.this_onKeyDown","openfl/text/TextField.hx",3403,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3414_this_onMouseDown,"openfl.text.TextField","this_onMouseDown",0xfda1ed8b,"openfl.text.TextField.this_onMouseDown","openfl/text/TextField.hx",3414,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3466_this_onMouseWheel,"openfl.text.TextField","this_onMouseWheel",0xdbfcc352,"openfl.text.TextField.this_onMouseWheel","openfl/text/TextField.hx",3466,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3478_window_onKeyDown,"openfl.text.TextField","window_onKeyDown",0x61330e17,"openfl.text.TextField.window_onKeyDown","openfl/text/TextField.hx",3478,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3704_window_onTextInput,"openfl.text.TextField","window_onTextInput",0xe9818213,"openfl.text.TextField.window_onTextInput","openfl/text/TextField.hx",3704,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_138_boot,"openfl.text.TextField","boot",0x024a6e56,"openfl.text.TextField.boot","openfl/text/TextField.hx",138,0xccf02094)
namespace openfl{
namespace text{

void TextField_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_135_new)
HXLINE( 714)		this->_hx___mouseScrollVCounter = 0;
HXLINE( 278)		this->condenseWhite = false;
HXLINE( 850)		super::__construct();
HXLINE( 852)		this->_hx___wordSelection = false;
HXLINE( 853)		this->_hx___drawableType = 7;
HXLINE( 854)		this->_hx___caretIndex = -1;
HXLINE( 855)		this->_hx___selectionIndex = -1;
HXLINE( 856)		this->_hx___displayAsPassword = false;
HXLINE( 857)		this->_hx___graphics =  ::openfl::display::Graphics_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 858)		this->_hx___textEngine =  ::openfl::text::_internal::TextEngine_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 859)		this->_hx___layoutDirty = true;
HXLINE( 860)		this->_hx___offsetX = ( (Float)(0) );
HXLINE( 861)		this->_hx___offsetY = ( (Float)(0) );
HXLINE( 862)		this->_hx___mouseWheelEnabled = true;
HXLINE( 863)		this->_hx___text = HX_("",00,00,00,00);
HXLINE( 865)		if (::hx::IsNull( ::openfl::text::TextField_obj::_hx___defaultTextFormat )) {
HXLINE( 867)			::openfl::text::TextField_obj::_hx___defaultTextFormat =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,HX_("Times New Roman",03,86,44,c3),12,0,false,false,false,HX_("",00,00,00,00),HX_("",00,00,00,00),3,0,0,0,0);
HXLINE( 868)			::openfl::text::TextField_obj::_hx___defaultTextFormat->blockIndent = 0;
HXLINE( 869)			::openfl::text::TextField_obj::_hx___defaultTextFormat->bullet = false;
HXLINE( 870)			::openfl::text::TextField_obj::_hx___defaultTextFormat->letterSpacing = 0;
HXLINE( 871)			::openfl::text::TextField_obj::_hx___defaultTextFormat->kerning = false;
            		}
HXLINE( 874)		this->_hx___textFormat = ::openfl::text::TextField_obj::_hx___defaultTextFormat->clone();
HXLINE( 875)		{
HXLINE( 875)			::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN( 875)			( ( ::openfl::_Vector::ObjectVector)(this1) )->push( ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,this->_hx___textFormat,0,0));
            		}
HXLINE( 877)		this->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->this_onMouseDown_dyn(),null(),null(),null());
HXLINE( 878)		this->addEventListener(HX_("focusIn",dd,45,83,41),this->this_onFocusIn_dyn(),null(),null(),null());
HXLINE( 879)		this->addEventListener(HX_("focusOut",96,6f,5e,11),this->this_onFocusOut_dyn(),null(),null(),null());
HXLINE( 880)		this->addEventListener(HX_("keyDown",a1,69,47,9c),this->this_onKeyDown_dyn(),null(),null(),null());
HXLINE( 881)		this->addEventListener(HX_("mouseWheel",36,28,87,e7),this->this_onMouseWheel_dyn(),null(),null(),null());
            	}

Dynamic TextField_obj::__CreateEmpty() { return new TextField_obj; }

void *TextField_obj::_hx_vtable = 0;

Dynamic TextField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextField_obj > _hx_result = new TextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextField_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0330636f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x6b353933 || inClassId==(int)0x7f0de750;
	}
}

void TextField_obj::appendText(::String text){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_894_appendText)
HXLINE( 895)		bool _hx_tmp;
HXDLIN( 895)		if (::hx::IsNotNull( text )) {
HXLINE( 895)			_hx_tmp = (text == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 895)			_hx_tmp = true;
            		}
HXDLIN( 895)		if (_hx_tmp) {
HXLINE( 895)			return;
            		}
HXLINE( 897)		this->_hx___dirty = true;
HXLINE( 898)		this->_hx___layoutDirty = true;
HXLINE( 899)		if (!(this->_hx___renderDirty)) {
HXLINE( 899)			this->_hx___renderDirty = true;
HXDLIN( 899)			this->_hx___setParentRenderDirty();
            		}
HXLINE( 901)		this->_hx___updateText((this->_hx___text + text));
HXLINE( 903)		::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN( 903)		( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->_hx___textEngine->textFormatRanges->get_length() - 1)).StaticCast<  ::openfl::text::_internal::TextFormatRange >()->end = this->_hx___text.length;
HXLINE( 905)		this->_hx___selectionIndex = (this->_hx___caretIndex = this->_hx___text.length);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,appendText,(void))

 ::openfl::geom::Rectangle TextField_obj::getCharBoundaries(int charIndex){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_920_getCharBoundaries)
HXLINE( 921)		bool _hx_tmp;
HXDLIN( 921)		if ((charIndex >= 0)) {
HXLINE( 921)			_hx_tmp = (charIndex > (this->_hx___text.length - 1));
            		}
            		else {
HXLINE( 921)			_hx_tmp = true;
            		}
HXDLIN( 921)		if (_hx_tmp) {
HXLINE( 921)			return null();
            		}
HXLINE( 923)		 ::openfl::geom::Rectangle rect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 925)		if (this->_hx___getCharBoundaries(charIndex,rect)) {
HXLINE( 927)			return rect;
            		}
            		else {
HXLINE( 931)			return null();
            		}
HXLINE( 925)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getCharBoundaries,return )

int TextField_obj::getCharIndexAtPoint(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_946_getCharIndexAtPoint)
HXLINE( 947)		bool _hx_tmp;
HXDLIN( 947)		bool _hx_tmp1;
HXDLIN( 947)		bool _hx_tmp2;
HXDLIN( 947)		if (!((x <= 2))) {
HXLINE( 947)			_hx_tmp2 = (x > (this->get_width() + 4));
            		}
            		else {
HXLINE( 947)			_hx_tmp2 = true;
            		}
HXDLIN( 947)		if (!(_hx_tmp2)) {
HXLINE( 947)			_hx_tmp1 = (y <= 0);
            		}
            		else {
HXLINE( 947)			_hx_tmp1 = true;
            		}
HXDLIN( 947)		if (!(_hx_tmp1)) {
HXLINE( 947)			_hx_tmp = (y > (this->get_height() + 4));
            		}
            		else {
HXLINE( 947)			_hx_tmp = true;
            		}
HXDLIN( 947)		if (_hx_tmp) {
HXLINE( 947)			return -1;
            		}
HXLINE( 949)		this->_hx___updateLayout();
HXLINE( 951)		x = (x + this->get_scrollH());
HXLINE( 953)		{
HXLINE( 953)			int _g = 0;
HXDLIN( 953)			int _g1 = (this->get_scrollV() - 1);
HXDLIN( 953)			while((_g < _g1)){
HXLINE( 953)				_g = (_g + 1);
HXDLIN( 953)				int i = (_g - 1);
HXLINE( 955)				y = (y + this->_hx___textEngine->lineHeights->get(i));
            			}
            		}
HXLINE( 958)		{
HXLINE( 958)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN( 958)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 958)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 960)				bool _hx_tmp;
HXDLIN( 960)				if ((y >= group1->offsetY)) {
HXLINE( 960)					_hx_tmp = (y <= (group1->offsetY + group1->height));
            				}
            				else {
HXLINE( 960)					_hx_tmp = false;
            				}
HXDLIN( 960)				if (_hx_tmp) {
HXLINE( 962)					bool _hx_tmp;
HXDLIN( 962)					if ((x >= group1->offsetX)) {
HXLINE( 962)						_hx_tmp = (x <= (group1->offsetX + group1->width));
            					}
            					else {
HXLINE( 962)						_hx_tmp = false;
            					}
HXDLIN( 962)					if (_hx_tmp) {
HXLINE( 964)						Float advance = ((Float)0.0);
HXLINE( 966)						{
HXLINE( 966)							int _g = 0;
HXDLIN( 966)							int _g1 = group1->positions->length;
HXDLIN( 966)							while((_g < _g1)){
HXLINE( 966)								_g = (_g + 1);
HXDLIN( 966)								int i = (_g - 1);
HXLINE( 968)								Float advance1;
HXDLIN( 968)								bool advance2;
HXDLIN( 968)								if ((i >= 0)) {
HXLINE( 968)									advance2 = (i < group1->positions->length);
            								}
            								else {
HXLINE( 968)									advance2 = false;
            								}
HXDLIN( 968)								if (advance2) {
HXLINE( 968)									advance1 = group1->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            								}
            								else {
HXLINE( 968)									advance1 = ( (Float)(0) );
            								}
HXDLIN( 968)								advance = (advance + advance1);
HXLINE( 970)								if ((x <= (group1->offsetX + advance))) {
HXLINE( 972)									return (group1->startIndex + i);
            								}
            							}
            						}
HXLINE( 976)						return group1->endIndex;
            					}
            				}
            			}
            		}
HXLINE( 981)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getCharIndexAtPoint,return )

int TextField_obj::getFirstCharInParagraph(int charIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_996_getFirstCharInParagraph)
HXLINE( 997)		bool _hx_tmp;
HXDLIN( 997)		if ((charIndex >= 0)) {
HXLINE( 997)			_hx_tmp = (charIndex > this->get_text().length);
            		}
            		else {
HXLINE( 997)			_hx_tmp = true;
            		}
HXDLIN( 997)		if (_hx_tmp) {
HXLINE( 997)			return -1;
            		}
HXLINE( 998)		if ((this->_hx___textEngine->lineBreaks->get_length() == 0)) {
HXLINE( 998)			return 0;
            		}
HXLINE(1000)		{
HXLINE(1000)			int _g = 0;
HXDLIN(1000)			int _g1 = this->_hx___textEngine->lineBreaks->get_length();
HXDLIN(1000)			while((_g < _g1)){
HXLINE(1000)				_g = (_g + 1);
HXDLIN(1000)				int i = (_g - 1);
HXLINE(1002)				if ((charIndex <= this->_hx___textEngine->lineBreaks->get(i))) {
HXLINE(1004)					if ((i == 0)) {
HXLINE(1004)						return 0;
            					}
            					else {
HXLINE(1004)						return (this->_hx___textEngine->lineBreaks->get((i - 1)) + 1);
            					}
            				}
            			}
            		}
HXLINE(1008)		::Dynamic this1 = this->_hx___textEngine->lineBreaks;
HXDLIN(1008)		return (( ( ::openfl::_Vector::IntVector)(this1) )->get((this->_hx___textEngine->lineBreaks->get_length() - 1)) + 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getFirstCharInParagraph,return )

int TextField_obj::getLineIndexAtPoint(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1045_getLineIndexAtPoint)
HXLINE(1046)		this->_hx___updateLayout();
HXLINE(1048)		bool _hx_tmp;
HXDLIN(1048)		bool _hx_tmp1;
HXDLIN(1048)		bool _hx_tmp2;
HXDLIN(1048)		if (!((x <= 2))) {
HXLINE(1048)			_hx_tmp2 = (x > (this->get_width() + 4));
            		}
            		else {
HXLINE(1048)			_hx_tmp2 = true;
            		}
HXDLIN(1048)		if (!(_hx_tmp2)) {
HXLINE(1048)			_hx_tmp1 = (y <= 0);
            		}
            		else {
HXLINE(1048)			_hx_tmp1 = true;
            		}
HXDLIN(1048)		if (!(_hx_tmp1)) {
HXLINE(1048)			_hx_tmp = (y > (this->get_height() + 4));
            		}
            		else {
HXLINE(1048)			_hx_tmp = true;
            		}
HXDLIN(1048)		if (_hx_tmp) {
HXLINE(1048)			return -1;
            		}
HXLINE(1050)		{
HXLINE(1050)			int _g = 0;
HXDLIN(1050)			int _g1 = (this->get_scrollV() - 1);
HXDLIN(1050)			while((_g < _g1)){
HXLINE(1050)				_g = (_g + 1);
HXDLIN(1050)				int i = (_g - 1);
HXLINE(1052)				y = (y + this->_hx___textEngine->lineHeights->get(i));
            			}
            		}
HXLINE(1055)		{
HXLINE(1055)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN(1055)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1055)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1057)				bool _hx_tmp;
HXDLIN(1057)				if ((y >= group1->offsetY)) {
HXLINE(1057)					_hx_tmp = (y <= (group1->offsetY + group1->height));
            				}
            				else {
HXLINE(1057)					_hx_tmp = false;
            				}
HXDLIN(1057)				if (_hx_tmp) {
HXLINE(1059)					return group1->lineIndex;
            				}
            			}
            		}
HXLINE(1063)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getLineIndexAtPoint,return )

int TextField_obj::getLineIndexOfChar(int charIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1077_getLineIndexOfChar)
HXLINE(1078)		bool _hx_tmp;
HXDLIN(1078)		if ((charIndex >= 0)) {
HXLINE(1078)			_hx_tmp = (charIndex > this->_hx___text.length);
            		}
            		else {
HXLINE(1078)			_hx_tmp = true;
            		}
HXDLIN(1078)		if (_hx_tmp) {
HXLINE(1078)			return -1;
            		}
HXLINE(1080)		this->_hx___updateLayout();
HXLINE(1082)		{
HXLINE(1082)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN(1082)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1082)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1084)				bool _hx_tmp;
HXDLIN(1084)				if ((group1->startIndex <= charIndex)) {
HXLINE(1084)					_hx_tmp = (group1->endIndex >= charIndex);
            				}
            				else {
HXLINE(1084)					_hx_tmp = false;
            				}
HXDLIN(1084)				if (_hx_tmp) {
HXLINE(1086)					return group1->lineIndex;
            				}
            			}
            		}
HXLINE(1090)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineIndexOfChar,return )

int TextField_obj::getLineLength(int lineIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1101_getLineLength)
HXLINE(1102)		this->_hx___updateLayout();
HXLINE(1104)		bool _hx_tmp;
HXDLIN(1104)		if ((lineIndex >= 0)) {
HXLINE(1104)			_hx_tmp = (lineIndex > (this->_hx___textEngine->numLines - 1));
            		}
            		else {
HXLINE(1104)			_hx_tmp = true;
            		}
HXDLIN(1104)		if (_hx_tmp) {
HXLINE(1104)			return 0;
            		}
HXLINE(1106)		int startIndex = -1;
HXLINE(1107)		int endIndex = -1;
HXLINE(1109)		{
HXLINE(1109)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN(1109)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1109)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1111)				if ((group1->lineIndex == lineIndex)) {
HXLINE(1113)					if ((startIndex == -1)) {
HXLINE(1113)						startIndex = group1->startIndex;
            					}
            				}
            				else {
HXLINE(1115)					if ((group1->lineIndex == (lineIndex + 1))) {
HXLINE(1117)						endIndex = group1->startIndex;
HXLINE(1118)						goto _hx_goto_14;
            					}
            				}
            			}
            			_hx_goto_14:;
            		}
HXLINE(1122)		if ((endIndex == -1)) {
HXLINE(1122)			endIndex = this->_hx___text.length;
            		}
HXLINE(1123)		return (endIndex - startIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineLength,return )

 ::openfl::text::TextLineMetrics TextField_obj::getLineMetrics(int lineIndex){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_1134_getLineMetrics)
HXLINE(1135)		this->_hx___updateLayout();
HXLINE(1137)		Float ascender = this->_hx___textEngine->lineAscents->get(lineIndex);
HXLINE(1138)		Float descender = this->_hx___textEngine->lineDescents->get(lineIndex);
HXLINE(1139)		Float leading = this->_hx___textEngine->lineLeadings->get(lineIndex);
HXLINE(1140)		Float lineHeight = this->_hx___textEngine->lineHeights->get(lineIndex);
HXLINE(1141)		Float lineWidth = this->_hx___textEngine->lineWidths->get(lineIndex);
HXLINE(1145)		Float margin;
HXDLIN(1145)		 ::Dynamic _hx_switch_0 = this->_hx___textFormat->align;
            		if (  (_hx_switch_0==0) ){
HXLINE(1145)			margin = ((this->_hx___textEngine->width - lineWidth) / ( (Float)(2) ));
HXDLIN(1145)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==1) ||  (_hx_switch_0==4) ){
HXLINE(1145)			margin = ((this->_hx___textEngine->width - lineWidth) - ( (Float)(2) ));
HXDLIN(1145)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==2) ||  (_hx_switch_0==3) ||  (_hx_switch_0==5) ){
HXLINE(1145)			margin = ( (Float)(2) );
HXDLIN(1145)			goto _hx_goto_16;
            		}
            		_hx_goto_16:;
HXLINE(1152)		return  ::openfl::text::TextLineMetrics_obj::__alloc( HX_CTX ,margin,lineWidth,lineHeight,ascender,descender,leading);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineMetrics,return )

int TextField_obj::getLineOffset(int lineIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1165_getLineOffset)
HXLINE(1166)		this->_hx___updateLayout();
HXLINE(1168)		bool _hx_tmp;
HXDLIN(1168)		if ((lineIndex >= 0)) {
HXLINE(1168)			_hx_tmp = (lineIndex > (this->_hx___textEngine->numLines - 1));
            		}
            		else {
HXLINE(1168)			_hx_tmp = true;
            		}
HXDLIN(1168)		if (_hx_tmp) {
HXLINE(1168)			return -1;
            		}
HXLINE(1170)		{
HXLINE(1170)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN(1170)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1170)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1172)				if ((group1->lineIndex == lineIndex)) {
HXLINE(1174)					return group1->startIndex;
            				}
            			}
            		}
HXLINE(1178)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineOffset,return )

::String TextField_obj::getLineText(int lineIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1191_getLineText)
HXLINE(1192)		this->_hx___updateLayout();
HXLINE(1194)		bool _hx_tmp;
HXDLIN(1194)		if ((lineIndex >= 0)) {
HXLINE(1194)			_hx_tmp = (lineIndex > (this->_hx___textEngine->numLines - 1));
            		}
            		else {
HXLINE(1194)			_hx_tmp = true;
            		}
HXDLIN(1194)		if (_hx_tmp) {
HXLINE(1194)			return null();
            		}
HXLINE(1196)		int startIndex = -1;
HXLINE(1197)		int endIndex = -1;
HXLINE(1199)		{
HXLINE(1199)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN(1199)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1199)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1201)				if ((group1->lineIndex == lineIndex)) {
HXLINE(1203)					if ((startIndex == -1)) {
HXLINE(1203)						startIndex = group1->startIndex;
            					}
            				}
            				else {
HXLINE(1205)					if ((group1->lineIndex == (lineIndex + 1))) {
HXLINE(1207)						endIndex = group1->startIndex;
HXLINE(1208)						goto _hx_goto_20;
            					}
            				}
            			}
            			_hx_goto_20:;
            		}
HXLINE(1212)		if ((endIndex == -1)) {
HXLINE(1212)			endIndex = this->_hx___text.length;
            		}
HXLINE(1214)		return this->_hx___textEngine->text.substring(startIndex,endIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineText,return )

int TextField_obj::getParagraphLength(int charIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1230_getParagraphLength)
HXLINE(1231)		bool _hx_tmp;
HXDLIN(1231)		if ((charIndex >= 0)) {
HXLINE(1231)			_hx_tmp = (charIndex > this->get_text().length);
            		}
            		else {
HXLINE(1231)			_hx_tmp = true;
            		}
HXDLIN(1231)		if (_hx_tmp) {
HXLINE(1231)			return -1;
            		}
HXLINE(1233)		int startIndex = this->getFirstCharInParagraph(charIndex);
HXLINE(1235)		if ((charIndex >= this->get_text().length)) {
HXLINE(1235)			return ((this->get_text().length - startIndex) + 1);
            		}
HXLINE(1237)		int endIndex = (this->_hx___textEngine->getLineBreakIndex(charIndex) + 1);
HXLINE(1239)		if ((endIndex == 0)) {
HXLINE(1239)			endIndex = this->_hx___text.length;
            		}
HXLINE(1240)		return (endIndex - startIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getParagraphLength,return )

 ::openfl::text::TextFormat TextField_obj::getTextFormat(::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(-1);
            		int endIndex = __o_endIndex.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_1269_getTextFormat)
HXLINE(1270)		 ::openfl::text::TextFormat format = null();
HXLINE(1272)		bool _hx_tmp;
HXDLIN(1272)		bool _hx_tmp1;
HXDLIN(1272)		bool _hx_tmp2;
HXDLIN(1272)		if ((beginIndex < this->get_text().length)) {
HXLINE(1272)			_hx_tmp2 = (beginIndex < -1);
            		}
            		else {
HXLINE(1272)			_hx_tmp2 = true;
            		}
HXDLIN(1272)		if (!(_hx_tmp2)) {
HXLINE(1272)			_hx_tmp1 = (endIndex > this->get_text().length);
            		}
            		else {
HXLINE(1272)			_hx_tmp1 = true;
            		}
HXDLIN(1272)		if (!(_hx_tmp1)) {
HXLINE(1272)			_hx_tmp = (endIndex < -1);
            		}
            		else {
HXLINE(1272)			_hx_tmp = true;
            		}
HXDLIN(1272)		if (_hx_tmp) {
HXLINE(1273)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("The supplied index is out of bounds",37,5a,d3,87)));
            		}
HXLINE(1275)		if ((beginIndex == -1)) {
HXLINE(1275)			beginIndex = 0;
            		}
HXLINE(1276)		if ((endIndex == -1)) {
HXLINE(1276)			endIndex = this->get_text().length;
            		}
HXLINE(1278)		if ((beginIndex >= endIndex)) {
HXLINE(1278)			return  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(1280)		{
HXLINE(1280)			 ::Dynamic group = this->_hx___textEngine->textFormatRanges->iterator();
HXDLIN(1280)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1280)				 ::openfl::text::_internal::TextFormatRange group1 = ( ( ::openfl::text::_internal::TextFormatRange)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1282)				bool _hx_tmp;
HXDLIN(1282)				bool _hx_tmp1;
HXDLIN(1282)				if ((group1->start <= beginIndex)) {
HXLINE(1282)					_hx_tmp1 = (group1->end > beginIndex);
            				}
            				else {
HXLINE(1282)					_hx_tmp1 = false;
            				}
HXDLIN(1282)				if (!(_hx_tmp1)) {
HXLINE(1282)					if ((group1->start < endIndex)) {
HXLINE(1282)						_hx_tmp = (group1->end >= endIndex);
            					}
            					else {
HXLINE(1282)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(1282)					_hx_tmp = true;
            				}
HXDLIN(1282)				if (_hx_tmp) {
HXLINE(1284)					if (::hx::IsNull( format )) {
HXLINE(1286)						format = group1->format->clone();
            					}
            					else {
HXLINE(1290)						if ((group1->format->font != format->font)) {
HXLINE(1290)							format->font = null();
            						}
HXLINE(1291)						if (::hx::IsNotEq( group1->format->size,format->size )) {
HXLINE(1291)							format->size = null();
            						}
HXLINE(1292)						if (::hx::IsNotEq( group1->format->color,format->color )) {
HXLINE(1292)							format->color = null();
            						}
HXLINE(1293)						if (::hx::IsNotEq( group1->format->bold,format->bold )) {
HXLINE(1293)							format->bold = null();
            						}
HXLINE(1294)						if (::hx::IsNotEq( group1->format->italic,format->italic )) {
HXLINE(1294)							format->italic = null();
            						}
HXLINE(1295)						if (::hx::IsNotEq( group1->format->underline,format->underline )) {
HXLINE(1295)							format->underline = null();
            						}
HXLINE(1296)						if ((group1->format->url != format->url)) {
HXLINE(1296)							format->url = null();
            						}
HXLINE(1297)						if ((group1->format->target != format->target)) {
HXLINE(1297)							format->target = null();
            						}
HXLINE(1298)						if (::hx::IsNotEq( group1->format->align,format->align )) {
HXLINE(1298)							format->align = null();
            						}
HXLINE(1299)						if (::hx::IsNotEq( group1->format->leftMargin,format->leftMargin )) {
HXLINE(1299)							format->leftMargin = null();
            						}
HXLINE(1300)						if (::hx::IsNotEq( group1->format->rightMargin,format->rightMargin )) {
HXLINE(1300)							format->rightMargin = null();
            						}
HXLINE(1301)						if (::hx::IsNotEq( group1->format->indent,format->indent )) {
HXLINE(1301)							format->indent = null();
            						}
HXLINE(1302)						if (::hx::IsNotEq( group1->format->leading,format->leading )) {
HXLINE(1302)							format->leading = null();
            						}
HXLINE(1303)						if (::hx::IsNotEq( group1->format->blockIndent,format->blockIndent )) {
HXLINE(1303)							format->blockIndent = null();
            						}
HXLINE(1304)						if (::hx::IsNotEq( group1->format->bullet,format->bullet )) {
HXLINE(1304)							format->bullet = null();
            						}
HXLINE(1305)						if (::hx::IsNotEq( group1->format->kerning,format->kerning )) {
HXLINE(1305)							format->kerning = null();
            						}
HXLINE(1306)						if (::hx::IsNotEq( group1->format->letterSpacing,format->letterSpacing )) {
HXLINE(1306)							format->letterSpacing = null();
            						}
HXLINE(1307)						if (::hx::IsPointerNotEq( group1->format->tabStops,format->tabStops )) {
HXLINE(1307)							format->tabStops = null();
            						}
            					}
            				}
            			}
            		}
HXLINE(1312)		if (::hx::IsNull( format )) {
HXLINE(1312)			format =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(1313)		return format;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getTextFormat,return )

void TextField_obj::replaceSelectedText(::String value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1365_replaceSelectedText)
HXDLIN(1365)		this->_hx___replaceSelectedText(value,false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,replaceSelectedText,(void))

void TextField_obj::replaceText(int beginIndex,int endIndex,::String newText){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1386_replaceText)
HXDLIN(1386)		this->_hx___replaceText(beginIndex,endIndex,newText,false);
            	}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,replaceText,(void))

void TextField_obj::setSelection(int beginIndex,int endIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1405_setSelection)
HXLINE(1406)		this->_hx___selectionIndex = beginIndex;
HXLINE(1407)		this->_hx___caretIndex = endIndex;
HXLINE(1409)		this->_hx___updateScrollV();
HXLINE(1410)		this->_hx___updateScrollH();
HXLINE(1412)		bool _hx_tmp;
HXDLIN(1412)		if (::hx::IsNotNull( this->stage )) {
HXLINE(1412)			_hx_tmp = ::hx::IsInstanceEq( this->stage->get_focus(),::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE(1412)			_hx_tmp = false;
            		}
HXDLIN(1412)		if (_hx_tmp) {
HXLINE(1414)			this->_hx___stopCursorTimer();
HXLINE(1419)			this->_hx___startCursorTimer();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,setSelection,(void))

void TextField_obj::setTextFormat( ::openfl::text::TextFormat format,::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(-1);
            		int endIndex = __o_endIndex.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_1471_setTextFormat)
HXLINE(1472)		int max = this->get_text().length;
HXLINE(1473)		 ::openfl::text::_internal::TextFormatRange range;
HXLINE(1475)		if ((beginIndex == -1)) {
HXLINE(1477)			if ((endIndex == -1)) {
HXLINE(1477)				endIndex = max;
            			}
HXLINE(1478)			beginIndex = 0;
            		}
            		else {
HXLINE(1480)			if ((endIndex == -1)) {
HXLINE(1482)				endIndex = (beginIndex + 1);
            			}
            		}
HXLINE(1485)		if ((beginIndex == endIndex)) {
HXLINE(1485)			return;
            		}
HXLINE(1486)		bool _hx_tmp;
HXDLIN(1486)		bool _hx_tmp1;
HXDLIN(1486)		bool _hx_tmp2;
HXDLIN(1486)		bool _hx_tmp3;
HXDLIN(1486)		if ((beginIndex >= 0)) {
HXLINE(1486)			_hx_tmp3 = (endIndex <= 0);
            		}
            		else {
HXLINE(1486)			_hx_tmp3 = true;
            		}
HXDLIN(1486)		if (!(_hx_tmp3)) {
HXLINE(1486)			_hx_tmp2 = (endIndex < beginIndex);
            		}
            		else {
HXLINE(1486)			_hx_tmp2 = true;
            		}
HXDLIN(1486)		if (!(_hx_tmp2)) {
HXLINE(1486)			_hx_tmp1 = (beginIndex >= max);
            		}
            		else {
HXLINE(1486)			_hx_tmp1 = true;
            		}
HXDLIN(1486)		if (!(_hx_tmp1)) {
HXLINE(1486)			_hx_tmp = (endIndex > max);
            		}
            		else {
HXLINE(1486)			_hx_tmp = true;
            		}
HXDLIN(1486)		if (_hx_tmp) {
HXLINE(1486)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,null()));
            		}
HXLINE(1504)		bool _hx_tmp4;
HXDLIN(1504)		if ((beginIndex == 0)) {
HXLINE(1504)			_hx_tmp4 = (endIndex == max);
            		}
            		else {
HXLINE(1504)			_hx_tmp4 = false;
            		}
HXDLIN(1504)		if (_hx_tmp4) {
HXLINE(1507)			this->_hx___textEngine->textFormatRanges->set_length(1);
HXLINE(1509)			range = this->_hx___textEngine->textFormatRanges->get(0).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXLINE(1510)			range->start = 0;
HXLINE(1511)			range->end = max;
HXLINE(1512)			range->format->_hx___merge(format);
            		}
            		else {
HXLINE(1516)			int index = 0;
HXLINE(1517)			 ::openfl::text::_internal::TextFormatRange newRange;
HXLINE(1519)			while((index < this->_hx___textEngine->textFormatRanges->get_length())){
HXLINE(1521)				range = this->_hx___textEngine->textFormatRanges->get(index).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXLINE(1523)				if ((range->end <= beginIndex)) {
HXLINE(1526)					index = (index + 1);
            				}
            				else {
HXLINE(1528)					if ((range->start >= endIndex)) {
HXLINE(1531)						goto _hx_goto_28;
            					}
            					else {
HXLINE(1533)						bool _hx_tmp;
HXDLIN(1533)						if ((range->start <= beginIndex)) {
HXLINE(1533)							_hx_tmp = (range->end >= endIndex);
            						}
            						else {
HXLINE(1533)							_hx_tmp = false;
            						}
HXDLIN(1533)						if (_hx_tmp) {
HXLINE(1535)							bool _hx_tmp;
HXDLIN(1535)							if ((range->start == beginIndex)) {
HXLINE(1535)								_hx_tmp = (range->end == endIndex);
            							}
            							else {
HXLINE(1535)								_hx_tmp = false;
            							}
HXDLIN(1535)							if (_hx_tmp) {
HXLINE(1538)								range->format = range->format->clone();
HXLINE(1539)								range->format->_hx___merge(format);
HXLINE(1540)								goto _hx_goto_28;
            							}
            							else {
HXLINE(1542)								if ((range->start == beginIndex)) {
HXLINE(1545)									newRange =  ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,range->format->clone(),beginIndex,endIndex);
HXLINE(1546)									newRange->format->_hx___merge(format);
HXLINE(1547)									this->_hx___textEngine->textFormatRanges->insertAt(index,newRange);
HXLINE(1548)									range->start = endIndex;
HXLINE(1549)									index = (index + 2);
            								}
            								else {
HXLINE(1551)									if ((range->end == endIndex)) {
HXLINE(1554)										newRange =  ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,range->format->clone(),beginIndex,endIndex);
HXLINE(1555)										newRange->format->_hx___merge(format);
HXLINE(1556)										this->_hx___textEngine->textFormatRanges->insertAt((index + 1),newRange);
HXLINE(1558)										range->end = beginIndex;
HXLINE(1559)										goto _hx_goto_28;
            									}
            									else {
HXLINE(1564)										newRange =  ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,range->format->clone(),beginIndex,endIndex);
HXLINE(1565)										newRange->format->_hx___merge(format);
HXLINE(1566)										this->_hx___textEngine->textFormatRanges->insertAt((index + 1),newRange);
HXLINE(1568)										 ::openfl::text::TextFormat newRange1 = range->format->clone();
HXDLIN(1568)										newRange =  ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,newRange1,endIndex,range->end);
HXLINE(1569)										this->_hx___textEngine->textFormatRanges->insertAt((index + 2),newRange);
HXLINE(1571)										range->end = beginIndex;
HXLINE(1572)										goto _hx_goto_28;
            									}
            								}
            							}
            						}
            						else {
HXLINE(1575)							bool _hx_tmp;
HXDLIN(1575)							if ((range->start >= beginIndex)) {
HXLINE(1575)								_hx_tmp = (range->end <= endIndex);
            							}
            							else {
HXLINE(1575)								_hx_tmp = false;
            							}
HXDLIN(1575)							if (_hx_tmp) {
HXLINE(1578)								if ((range->start == beginIndex)) {
HXLINE(1581)									range->format = range->format->clone();
HXLINE(1582)									range->format->_hx___merge(format);
HXLINE(1583)									range->end = endIndex;
            								}
            								else {
HXLINE(1588)									this->_hx___textEngine->textFormatRanges->removeAt(index).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
            								}
            							}
            							else {
HXLINE(1591)								bool _hx_tmp;
HXDLIN(1591)								if ((range->start > beginIndex)) {
HXLINE(1591)									_hx_tmp = (range->end > beginIndex);
            								}
            								else {
HXLINE(1591)									_hx_tmp = false;
            								}
HXDLIN(1591)								if (_hx_tmp) {
HXLINE(1594)									range->start = endIndex;
HXLINE(1595)									goto _hx_goto_28;
            								}
            								else {
HXLINE(1597)									bool _hx_tmp;
HXDLIN(1597)									if ((range->start < beginIndex)) {
HXLINE(1597)										_hx_tmp = (range->end <= endIndex);
            									}
            									else {
HXLINE(1597)										_hx_tmp = false;
            									}
HXDLIN(1597)									if (_hx_tmp) {
HXLINE(1600)										newRange =  ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,range->format->clone(),beginIndex,endIndex);
HXLINE(1601)										newRange->format->_hx___merge(format);
HXLINE(1602)										this->_hx___textEngine->textFormatRanges->insertAt((index + 1),newRange);
HXLINE(1603)										range->end = beginIndex;
HXLINE(1604)										index = (index + 2);
            									}
            									else {
HXLINE(1609)										index = (index + 1);
HXLINE(1610)										::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/TextField.hx",94,20,f0,cc),1610,HX_("openfl.text.TextField",ca,a8,d5,ef),HX_("setTextFormat",06,4e,f7,d5)));
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            			_hx_goto_28:;
            		}
HXLINE(1637)		this->_hx___dirty = true;
HXLINE(1638)		this->_hx___layoutDirty = true;
HXLINE(1639)		if (!(this->_hx___renderDirty)) {
HXLINE(1639)			this->_hx___renderDirty = true;
HXDLIN(1639)			this->_hx___setParentRenderDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,setTextFormat,(void))

void TextField_obj::_hx___setStageReference( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1643___setStageReference)
HXLINE(1646)		this->_hx___stopTextInput();
HXLINE(1647)		this->super::_hx___setStageReference(stage);
            	}


bool TextField_obj::_hx___allowMouseFocus(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1654___allowMouseFocus)
HXDLIN(1654)		return this->mouseEnabled;
            	}


void TextField_obj::_hx___caretBeginningOfLine(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1659___caretBeginningOfLine)
HXDLIN(1659)		this->_hx___caretIndex = this->getLineOffset(this->getLineIndexOfChar(this->_hx___caretIndex));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretBeginningOfLine,(void))

void TextField_obj::_hx___caretBeginningOfNextLine(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1663___caretBeginningOfNextLine)
HXLINE(1664)		int lineIndex = this->getLineIndexOfChar(this->_hx___caretIndex);
HXLINE(1666)		if ((lineIndex < (this->_hx___textEngine->numLines - 1))) {
HXLINE(1668)			this->_hx___caretIndex = this->getLineOffset((lineIndex + 1));
            		}
            		else {
HXLINE(1672)			this->_hx___caretIndex = this->_hx___text.length;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretBeginningOfNextLine,(void))

void TextField_obj::_hx___caretBeginningOfPreviousLine(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1677___caretBeginningOfPreviousLine)
HXLINE(1678)		int lineIndex = this->getLineIndexOfChar(this->_hx___caretIndex);
HXLINE(1680)		if ((lineIndex > 0)) {
HXLINE(1682)			int index = this->getLineOffset(this->getLineIndexOfChar(this->_hx___caretIndex));
HXLINE(1684)			if ((this->_hx___caretIndex == index)) {
HXLINE(1686)				this->_hx___caretIndex = this->getLineOffset((lineIndex - 1));
            			}
            			else {
HXLINE(1690)				this->_hx___caretIndex = index;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretBeginningOfPreviousLine,(void))

void TextField_obj::_hx___caretEndOfLine(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1696___caretEndOfLine)
HXLINE(1697)		int lineIndex = this->getLineIndexOfChar(this->_hx___caretIndex);
HXLINE(1699)		if ((lineIndex < (this->_hx___textEngine->numLines - 1))) {
HXLINE(1701)			this->_hx___caretIndex = (this->getLineOffset((lineIndex + 1)) - 1);
            		}
            		else {
HXLINE(1705)			this->_hx___caretIndex = this->_hx___text.length;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretEndOfLine,(void))

void TextField_obj::_hx___caretNextCharacter(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1711___caretNextCharacter)
HXDLIN(1711)		if ((this->_hx___caretIndex < this->_hx___text.length)) {
HXLINE(1713)			this->_hx___caretIndex++;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretNextCharacter,(void))

void TextField_obj::_hx___caretNextLine(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1718___caretNextLine)
HXLINE(1719)		int lineIndex = this->getLineIndexOfChar(this->_hx___caretIndex);
HXLINE(1721)		if ((lineIndex < (this->_hx___textEngine->numLines - 1))) {
HXLINE(1723)			this->_hx___caretIndex = this->_hx___getCharIndexOnDifferentLine(this->get_caretIndex(),(lineIndex + 1));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretNextLine,(void))

void TextField_obj::_hx___caretPreviousCharacter(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1729___caretPreviousCharacter)
HXDLIN(1729)		if ((this->_hx___caretIndex > 0)) {
HXLINE(1731)			this->_hx___caretIndex--;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretPreviousCharacter,(void))

void TextField_obj::_hx___caretPreviousLine(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1736___caretPreviousLine)
HXLINE(1737)		int lineIndex = this->getLineIndexOfChar(this->_hx___caretIndex);
HXLINE(1739)		if ((lineIndex > 0)) {
HXLINE(1741)			this->_hx___caretIndex = this->_hx___getCharIndexOnDifferentLine(this->get_caretIndex(),(lineIndex - 1));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretPreviousLine,(void))

void TextField_obj::_hx___disableInput(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1747___disableInput)
HXDLIN(1747)		bool _hx_tmp;
HXDLIN(1747)		if (this->_hx___inputEnabled) {
HXDLIN(1747)			_hx_tmp = ::hx::IsNotNull( this->stage );
            		}
            		else {
HXDLIN(1747)			_hx_tmp = false;
            		}
HXDLIN(1747)		if (_hx_tmp) {
HXLINE(1750)			this->stage->window->_hx___backend->setTextInputEnabled(false);
HXLINE(1751)			this->stage->window->onTextInput->remove(this->window_onTextInput_dyn());
HXLINE(1752)			this->stage->window->onKeyDown->remove(this->window_onKeyDown_dyn());
HXLINE(1755)			this->_hx___inputEnabled = false;
HXLINE(1756)			this->_hx___stopCursorTimer();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___disableInput,(void))

bool TextField_obj::_hx___dispatch( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_1761___dispatch)
HXLINE(1762)		bool _hx_tmp;
HXDLIN(1762)		if ((event->eventPhase == 2)) {
HXLINE(1762)			_hx_tmp = (event->type == HX_("mouseUp",e0,f3,72,c0));
            		}
            		else {
HXLINE(1762)			_hx_tmp = false;
            		}
HXDLIN(1762)		if (_hx_tmp) {
HXLINE(1764)			 ::openfl::events::MouseEvent event1 = ( ( ::openfl::events::MouseEvent)(event) );
HXLINE(1765)			Float group = this->get_mouseX();
HXDLIN(1765)			 ::openfl::text::_internal::TextLayoutGroup group1 = this->_hx___getGroup(group,this->get_mouseY(),true);
HXLINE(1767)			if (::hx::IsNotNull( group1 )) {
HXLINE(1769)				::String url = group1->format->url;
HXLINE(1771)				bool _hx_tmp;
HXDLIN(1771)				if (::hx::IsNotNull( url )) {
HXLINE(1771)					_hx_tmp = (url != HX_("",00,00,00,00));
            				}
            				else {
HXLINE(1771)					_hx_tmp = false;
            				}
HXDLIN(1771)				if (_hx_tmp) {
HXLINE(1773)					if (::StringTools_obj::startsWith(url,HX_("event:",e0,4e,6a,96))) {
HXLINE(1775)						this->dispatchEvent( ::openfl::events::TextEvent_obj::__alloc( HX_CTX ,HX_("link",fa,17,b3,47),true,false,url.substr(6,null())));
            					}
            					else {
HXLINE(1779)						::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,url),null());
            					}
            				}
            			}
            		}
HXLINE(1785)		return this->super::_hx___dispatch(event);
            	}


void TextField_obj::_hx___enableInput(){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_1791___enableInput)
HXDLIN(1791)		if (::hx::IsNotNull( this->stage )) {
HXLINE(1795)			 ::openfl::geom::Rectangle bounds = this->getBounds(this->stage);
HXLINE(1796)			 ::lime::math::Rectangle limeRect =  ::lime::math::Rectangle_obj::__alloc( HX_CTX ,bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE(1807)			this->stage->window->setTextInputRect(limeRect);
HXLINE(1810)			this->stage->window->_hx___backend->setTextInputEnabled(true);
HXLINE(1812)			if (!(this->_hx___inputEnabled)) {
HXLINE(1814)				this->stage->window->_hx___backend->setTextInputEnabled(true);
HXLINE(1816)				if (!(this->stage->window->onTextInput->has(this->window_onTextInput_dyn()))) {
HXLINE(1818)					this->stage->window->onTextInput->add(this->window_onTextInput_dyn(),null(),null());
HXLINE(1819)					this->stage->window->onKeyDown->add(this->window_onKeyDown_dyn(),null(),null());
            				}
HXLINE(1822)				this->_hx___inputEnabled = true;
HXLINE(1826)				this->_hx___stopCursorTimer();
HXLINE(1827)				this->_hx___startCursorTimer();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___enableInput,(void))

Float TextField_obj::_hx___getAdvance( ::Dynamic position){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1838___getAdvance)
HXDLIN(1838)		return ( (Float)( ::Dynamic(position->__Field(HX_("advance",82,08,0c,ef),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,_hx___getAdvance,return )

void TextField_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1843___getBounds)
HXLINE(1844)		this->_hx___updateLayout();
HXLINE(1846)		 ::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(1847)		bounds->copyFrom(this->_hx___textEngine->bounds);
HXLINE(1848)		bounds->offset(this->_hx___offsetX,this->_hx___offsetY);
HXLINE(1849)		bounds->_hx___transform(bounds,matrix);
HXLINE(1851)		rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE(1853)		::openfl::geom::Rectangle_obj::_hx___pool->release(bounds);
            	}


bool TextField_obj::_hx___getCharBoundaries(int charIndex, ::openfl::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1857___getCharBoundaries)
HXLINE(1858)		bool _hx_tmp;
HXDLIN(1858)		if ((charIndex >= 0)) {
HXLINE(1858)			_hx_tmp = (charIndex > (this->_hx___text.length - 1));
            		}
            		else {
HXLINE(1858)			_hx_tmp = true;
            		}
HXDLIN(1858)		if (_hx_tmp) {
HXLINE(1858)			return false;
            		}
HXLINE(1860)		this->_hx___updateLayout();
HXLINE(1862)		{
HXLINE(1862)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN(1862)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1862)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1864)				bool _hx_tmp;
HXDLIN(1864)				if ((charIndex >= group1->startIndex)) {
HXLINE(1864)					_hx_tmp = (charIndex < group1->endIndex);
            				}
            				else {
HXLINE(1864)					_hx_tmp = false;
            				}
HXDLIN(1864)				if (_hx_tmp) {
HXLINE(1866)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1868)						Float x = group1->offsetX;
HXLINE(1870)						{
HXLINE(1870)							int _g = 0;
HXDLIN(1870)							int _g1 = (charIndex - group1->startIndex);
HXDLIN(1870)							while((_g < _g1)){
HXLINE(1870)								_g = (_g + 1);
HXDLIN(1870)								int i = (_g - 1);
HXLINE(1872)								Float x1;
HXDLIN(1872)								bool x2;
HXDLIN(1872)								if ((i >= 0)) {
HXLINE(1872)									x2 = (i < group1->positions->length);
            								}
            								else {
HXLINE(1872)									x2 = false;
            								}
HXDLIN(1872)								if (x2) {
HXLINE(1872)									x1 = group1->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            								}
            								else {
HXLINE(1872)									x1 = ( (Float)(0) );
            								}
HXDLIN(1872)								x = (x + x1);
            							}
            						}
HXLINE(1876)						int index = (charIndex - group1->startIndex);
HXDLIN(1876)						Float lastPosition;
HXDLIN(1876)						bool lastPosition1;
HXDLIN(1876)						if ((index >= 0)) {
HXLINE(1876)							lastPosition1 = (index < group1->positions->length);
            						}
            						else {
HXLINE(1876)							lastPosition1 = false;
            						}
HXDLIN(1876)						if (lastPosition1) {
HXLINE(1876)							lastPosition = group1->positions->__get(index).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            						}
            						else {
HXLINE(1876)							lastPosition = ( (Float)(0) );
            						}
HXLINE(1878)						rect->setTo(x,group1->offsetY,lastPosition,(group1->ascent + group1->descent));
HXLINE(1879)						return true;
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE(1881)							{
HXLINE(1881)								null();
            							}
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
            			}
            		}
HXLINE(1885)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,_hx___getCharBoundaries,return )

int TextField_obj::_hx___getCharIndexOnDifferentLine(int charIndex,int lineIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1889___getCharIndexOnDifferentLine)
HXLINE(1890)		bool _hx_tmp;
HXDLIN(1890)		if ((charIndex >= 0)) {
HXLINE(1890)			_hx_tmp = (charIndex > this->_hx___text.length);
            		}
            		else {
HXLINE(1890)			_hx_tmp = true;
            		}
HXDLIN(1890)		if (_hx_tmp) {
HXLINE(1890)			return -1;
            		}
HXLINE(1891)		bool _hx_tmp1;
HXDLIN(1891)		if ((lineIndex >= 0)) {
HXLINE(1891)			_hx_tmp1 = (lineIndex > (this->_hx___textEngine->numLines - 1));
            		}
            		else {
HXLINE(1891)			_hx_tmp1 = true;
            		}
HXDLIN(1891)		if (_hx_tmp1) {
HXLINE(1891)			return -1;
            		}
HXLINE(1893)		 ::Dynamic x = null();
HXDLIN(1893)		 ::Dynamic y = null();
HXLINE(1895)		{
HXLINE(1895)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN(1895)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1895)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1897)				bool _hx_tmp;
HXDLIN(1897)				if ((charIndex >= group1->startIndex)) {
HXLINE(1897)					_hx_tmp = (charIndex <= group1->endIndex);
            				}
            				else {
HXLINE(1897)					_hx_tmp = false;
            				}
HXDLIN(1897)				if (_hx_tmp) {
HXLINE(1899)					x = group1->offsetX;
HXLINE(1901)					{
HXLINE(1901)						int _g = 0;
HXDLIN(1901)						int _g1 = (charIndex - group1->startIndex);
HXDLIN(1901)						while((_g < _g1)){
HXLINE(1901)							_g = (_g + 1);
HXDLIN(1901)							int i = (_g - 1);
HXLINE(1903)							Float x1;
HXDLIN(1903)							bool x2;
HXDLIN(1903)							if ((i >= 0)) {
HXLINE(1903)								x2 = (i < group1->positions->length);
            							}
            							else {
HXLINE(1903)								x2 = false;
            							}
HXDLIN(1903)							if (x2) {
HXLINE(1903)								x1 = group1->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            							}
            							else {
HXLINE(1903)								x1 = ( (Float)(0) );
            							}
HXDLIN(1903)							x = (x + x1);
            						}
            					}
HXLINE(1906)					if (::hx::IsNotNull( y )) {
HXLINE(1906)						return this->_hx___getPosition(( (Float)(x) ),( (Float)(y) ));
            					}
            				}
HXLINE(1909)				if ((group1->lineIndex == lineIndex)) {
HXLINE(1911)					y = (group1->offsetY + (group1->height / ( (Float)(2) )));
HXLINE(1913)					{
HXLINE(1913)						int _g = 0;
HXDLIN(1913)						int _g1 = (this->get_scrollV() - 1);
HXDLIN(1913)						while((_g < _g1)){
HXLINE(1913)							_g = (_g + 1);
HXDLIN(1913)							int i = (_g - 1);
HXLINE(1915)							y = (y - this->_hx___textEngine->lineHeights->get(i));
            						}
            					}
HXLINE(1918)					if (::hx::IsNotNull( x )) {
HXLINE(1918)						return this->_hx___getPosition(( (Float)(x) ),( (Float)(y) ));
            					}
            				}
            			}
            		}
HXLINE(1922)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,_hx___getCharIndexOnDifferentLine,return )

::String TextField_obj::_hx___getCursor(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1926___getCursor)
HXLINE(1927)		Float group = this->get_mouseX();
HXDLIN(1927)		 ::openfl::text::_internal::TextLayoutGroup group1 = this->_hx___getGroup(group,this->get_mouseY(),true);
HXLINE(1929)		bool _hx_tmp;
HXDLIN(1929)		if (::hx::IsNotNull( group1 )) {
HXLINE(1929)			_hx_tmp = (group1->format->url != HX_("",00,00,00,00));
            		}
            		else {
HXLINE(1929)			_hx_tmp = false;
            		}
HXDLIN(1929)		if (_hx_tmp) {
HXLINE(1931)			return HX_("button",f2,61,e0,d9);
            		}
            		else {
HXLINE(1933)			if (this->_hx___textEngine->selectable) {
HXLINE(1935)				return HX_("ibeam",58,ca,26,b6);
            			}
            		}
HXLINE(1938)		return null();
            	}


 ::openfl::text::_internal::TextLayoutGroup TextField_obj::_hx___getGroup(Float x,Float y,::hx::Null< bool >  __o_precise){
            		bool precise = __o_precise.Default(false);
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1942___getGroup)
HXLINE(1943)		this->_hx___updateLayout();
HXLINE(1945)		x = (x + this->get_scrollH());
HXLINE(1947)		{
HXLINE(1947)			int _g = 0;
HXDLIN(1947)			int _g1 = (this->get_scrollV() - 1);
HXDLIN(1947)			while((_g < _g1)){
HXLINE(1947)				_g = (_g + 1);
HXDLIN(1947)				int i = (_g - 1);
HXLINE(1949)				y = (y + this->_hx___textEngine->lineHeights->get(i));
            			}
            		}
HXLINE(1952)		bool _hx_tmp;
HXDLIN(1952)		if (!(precise)) {
HXLINE(1952)			_hx_tmp = (y > this->_hx___textEngine->textHeight);
            		}
            		else {
HXLINE(1952)			_hx_tmp = false;
            		}
HXDLIN(1952)		if (_hx_tmp) {
HXLINE(1952)			y = this->_hx___textEngine->textHeight;
            		}
HXLINE(1954)		bool firstGroup = true;
HXLINE(1955)		 ::openfl::text::_internal::TextLayoutGroup group;
HXLINE(1956)		 ::openfl::text::_internal::TextLayoutGroup nextGroup;
HXLINE(1958)		{
HXLINE(1958)			int _g2 = 0;
HXDLIN(1958)			int _g3 = this->_hx___textEngine->layoutGroups->get_length();
HXDLIN(1958)			while((_g2 < _g3)){
HXLINE(1958)				_g2 = (_g2 + 1);
HXDLIN(1958)				int i = (_g2 - 1);
HXLINE(1960)				group = this->_hx___textEngine->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1962)				if ((i < (this->_hx___textEngine->layoutGroups->get_length() - 1))) {
HXLINE(1964)					nextGroup = this->_hx___textEngine->layoutGroups->get((i + 1)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
            				}
            				else {
HXLINE(1968)					nextGroup = null();
            				}
HXLINE(1971)				if (firstGroup) {
HXLINE(1973)					if ((y < group->offsetY)) {
HXLINE(1973)						y = group->offsetY;
            					}
HXLINE(1974)					if ((x < group->offsetX)) {
HXLINE(1974)						x = group->offsetX;
            					}
HXLINE(1975)					firstGroup = false;
            				}
HXLINE(1978)				bool _hx_tmp;
HXDLIN(1978)				bool _hx_tmp1;
HXDLIN(1978)				if ((y >= group->offsetY)) {
HXLINE(1978)					_hx_tmp1 = (y <= (group->offsetY + group->height));
            				}
            				else {
HXLINE(1978)					_hx_tmp1 = false;
            				}
HXDLIN(1978)				if (!(_hx_tmp1)) {
HXLINE(1978)					if (!(precise)) {
HXLINE(1978)						_hx_tmp = ::hx::IsNull( nextGroup );
            					}
            					else {
HXLINE(1978)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(1978)					_hx_tmp = true;
            				}
HXDLIN(1978)				if (_hx_tmp) {
HXLINE(1980)					bool _hx_tmp;
HXDLIN(1980)					bool _hx_tmp1;
HXDLIN(1980)					if ((x >= group->offsetX)) {
HXLINE(1980)						_hx_tmp1 = (x <= (group->offsetX + group->width));
            					}
            					else {
HXLINE(1980)						_hx_tmp1 = false;
            					}
HXDLIN(1980)					if (!(_hx_tmp1)) {
HXLINE(1981)						if (!(precise)) {
HXLINE(1981)							if (::hx::IsNotNull( nextGroup )) {
HXLINE(1980)								_hx_tmp = (nextGroup->lineIndex != group->lineIndex);
            							}
            							else {
HXLINE(1980)								_hx_tmp = true;
            							}
            						}
            						else {
HXLINE(1980)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE(1980)						_hx_tmp = true;
            					}
HXDLIN(1980)					if (_hx_tmp) {
HXLINE(1983)						return group;
            					}
            				}
            			}
            		}
HXLINE(1988)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,_hx___getGroup,return )

int TextField_obj::_hx___getPosition(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1992___getPosition)
HXLINE(1993)		 ::openfl::text::_internal::TextLayoutGroup group = this->_hx___getGroup(x,y,null());
HXLINE(1995)		if (::hx::IsNull( group )) {
HXLINE(1997)			return this->_hx___text.length;
            		}
HXLINE(2000)		Float advance = ((Float)0.0);
HXLINE(2002)		{
HXLINE(2002)			int _g = 0;
HXDLIN(2002)			int _g1 = group->positions->length;
HXDLIN(2002)			while((_g < _g1)){
HXLINE(2002)				_g = (_g + 1);
HXDLIN(2002)				int i = (_g - 1);
HXLINE(2004)				Float advance1;
HXDLIN(2004)				bool advance2;
HXDLIN(2004)				if ((i >= 0)) {
HXLINE(2004)					advance2 = (i < group->positions->length);
            				}
            				else {
HXLINE(2004)					advance2 = false;
            				}
HXDLIN(2004)				if (advance2) {
HXLINE(2004)					advance1 = group->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            				}
            				else {
HXLINE(2004)					advance1 = ( (Float)(0) );
            				}
HXDLIN(2004)				advance = (advance + advance1);
HXLINE(2006)				if ((x <= (group->offsetX + advance))) {
HXLINE(2008)					Float _hx_tmp;
HXDLIN(2008)					bool _hx_tmp1;
HXDLIN(2008)					if ((i >= 0)) {
HXLINE(2008)						_hx_tmp1 = (i < group->positions->length);
            					}
            					else {
HXLINE(2008)						_hx_tmp1 = false;
            					}
HXDLIN(2008)					if (_hx_tmp1) {
HXLINE(2008)						_hx_tmp = group->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            					}
            					else {
HXLINE(2008)						_hx_tmp = ( (Float)(0) );
            					}
HXDLIN(2008)					Float _hx_tmp2;
HXDLIN(2008)					bool _hx_tmp3;
HXDLIN(2008)					if ((i >= 0)) {
HXLINE(2008)						_hx_tmp3 = (i < group->positions->length);
            					}
            					else {
HXLINE(2008)						_hx_tmp3 = false;
            					}
HXDLIN(2008)					if (_hx_tmp3) {
HXLINE(2008)						_hx_tmp2 = group->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            					}
            					else {
HXLINE(2008)						_hx_tmp2 = ( (Float)(0) );
            					}
HXDLIN(2008)					if ((x <= ((group->offsetX + (advance - _hx_tmp)) + (_hx_tmp2 / ( (Float)(2) ))))) {
HXLINE(2010)						return (group->startIndex + i);
            					}
            					else {
HXLINE(2014)						if (((group->startIndex + i) < group->endIndex)) {
HXLINE(2014)							return ((group->startIndex + i) + 1);
            						}
            						else {
HXLINE(2014)							return group->endIndex;
            						}
            					}
            				}
            			}
            		}
HXLINE(2019)		return group->endIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,_hx___getPosition,return )

int TextField_obj::_hx___getPositionByIdentifier(Float x,Float y,bool line){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2023___getPositionByIdentifier)
HXLINE(2024)		int position = this->_hx___getPosition(x,y);
HXLINE(2025)		::String delimiters;
HXDLIN(2025)		if (line) {
HXLINE(2025)			delimiters = HX_("\n",0a,00,00,00);
            		}
            		else {
HXLINE(2025)			delimiters = HX_(" .,;:!?()[]{}<>/\\|-=+*&^%$#@~`'\"",ad,47,c7,55);
            		}
HXLINE(2026)		::String _hx_char = this->_hx___text.charAt(position);
HXLINE(2027)		if ((this->_hx___specialSelectionInitialIndex <= position)) {
HXLINE(2029)			while(true){
HXLINE(2029)				bool _hx_tmp;
HXDLIN(2029)				if ((delimiters.indexOf(_hx_char,null()) == -1)) {
HXLINE(2029)					_hx_tmp = (position < this->_hx___text.length);
            				}
            				else {
HXLINE(2029)					_hx_tmp = false;
            				}
HXDLIN(2029)				if (!(_hx_tmp)) {
HXLINE(2029)					goto _hx_goto_58;
            				}
HXLINE(2031)				position = (position + 1);
HXLINE(2032)				_hx_char = this->_hx___text.charAt(position);
            			}
            			_hx_goto_58:;
            		}
            		else {
HXLINE(2037)			while(true){
HXLINE(2037)				bool _hx_tmp;
HXDLIN(2037)				if ((delimiters.indexOf(_hx_char,null()) == -1)) {
HXLINE(2037)					_hx_tmp = (position > 0);
            				}
            				else {
HXLINE(2037)					_hx_tmp = false;
            				}
HXDLIN(2037)				if (!(_hx_tmp)) {
HXLINE(2037)					goto _hx_goto_59;
            				}
HXLINE(2039)				position = (position - 1);
HXLINE(2040)				_hx_char = this->_hx___text.charAt(position);
            			}
            			_hx_goto_59:;
HXLINE(2043)			if ((position == 0)) {
HXLINE(2043)				return position;
            			}
HXLINE(2044)			position = (position + 1);
            		}
HXLINE(2047)		return position;
            	}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,_hx___getPositionByIdentifier,return )

int TextField_obj::_hx___getOppositeIdentifierBound(int charIndex,bool line){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2051___getOppositeIdentifierBound)
HXLINE(2052)		int position = charIndex;
HXLINE(2053)		::String delimiters;
HXDLIN(2053)		if (line) {
HXLINE(2053)			delimiters = HX_("\n",0a,00,00,00);
            		}
            		else {
HXLINE(2053)			delimiters = HX_(" .,;:!?()[]{}<>/\\|-=+*&^%$#@~`'\"",ad,47,c7,55);
            		}
HXLINE(2054)		::String _hx_char = this->_hx___text.charAt(position);
HXLINE(2056)		if ((position <= this->_hx___caretIndex)) {
HXLINE(2058)			while(true){
HXLINE(2058)				bool _hx_tmp;
HXDLIN(2058)				if ((delimiters.indexOf(_hx_char,null()) == -1)) {
HXLINE(2058)					_hx_tmp = (position > 0);
            				}
            				else {
HXLINE(2058)					_hx_tmp = false;
            				}
HXDLIN(2058)				if (!(_hx_tmp)) {
HXLINE(2058)					goto _hx_goto_61;
            				}
HXLINE(2060)				position = (position - 1);
HXLINE(2061)				_hx_char = this->_hx___text.charAt(position);
            			}
            			_hx_goto_61:;
HXLINE(2063)			if ((position == 0)) {
HXLINE(2063)				return position;
            			}
HXLINE(2064)			position = (position + 1);
            		}
            		else {
HXLINE(2068)			while(true){
HXLINE(2068)				bool _hx_tmp;
HXDLIN(2068)				if ((delimiters.indexOf(_hx_char,null()) == -1)) {
HXLINE(2068)					_hx_tmp = (position < this->_hx___text.length);
            				}
            				else {
HXLINE(2068)					_hx_tmp = false;
            				}
HXDLIN(2068)				if (!(_hx_tmp)) {
HXLINE(2068)					goto _hx_goto_62;
            				}
HXLINE(2070)				position = (position + 1);
HXLINE(2071)				_hx_char = this->_hx___text.charAt(position);
            			}
            			_hx_goto_62:;
            		}
HXLINE(2075)		return position;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,_hx___getOppositeIdentifierBound,return )

bool TextField_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2080___hitTest)
HXLINE(2081)		bool _hx_tmp;
HXDLIN(2081)		bool _hx_tmp1;
HXDLIN(2081)		if (hitObject->get_visible()) {
HXLINE(2081)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE(2081)			_hx_tmp1 = true;
            		}
HXDLIN(2081)		if (!(_hx_tmp1)) {
HXLINE(2081)			if (interactiveOnly) {
HXLINE(2081)				_hx_tmp = !(this->mouseEnabled);
            			}
            			else {
HXLINE(2081)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(2081)			_hx_tmp = true;
            		}
HXDLIN(2081)		if (_hx_tmp) {
HXLINE(2081)			return false;
            		}
HXLINE(2082)		bool _hx_tmp2;
HXDLIN(2082)		if (::hx::IsNotNull( this->get_mask() )) {
HXLINE(2082)			_hx_tmp2 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE(2082)			_hx_tmp2 = false;
            		}
HXDLIN(2082)		if (_hx_tmp2) {
HXLINE(2082)			return false;
            		}
HXLINE(2084)		this->_hx___getRenderTransform();
HXLINE(2085)		this->_hx___updateLayout();
HXLINE(2087)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN(2087)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN(2087)		Float px;
HXDLIN(2087)		if ((norm == 0)) {
HXLINE(2087)			px = -(_this->tx);
            		}
            		else {
HXLINE(2087)			px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - y)) + (_this->d * (x - _this->tx))));
            		}
HXLINE(2088)		 ::openfl::geom::Matrix _this1 = this->_hx___renderTransform;
HXDLIN(2088)		Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN(2088)		Float py;
HXDLIN(2088)		if ((norm1 == 0)) {
HXLINE(2088)			py = -(_this1->ty);
            		}
            		else {
HXLINE(2088)			py = ((((Float)1.0) / norm1) * ((_this1->a * (y - _this1->ty)) + (_this1->b * (_this1->tx - x))));
            		}
HXLINE(2090)		if (this->_hx___textEngine->bounds->contains(px,py)) {
HXLINE(2092)			if (::hx::IsNotNull( stack )) {
HXLINE(2094)				stack->push(hitObject);
            			}
HXLINE(2097)			return true;
            		}
HXLINE(2100)		return false;
            	}


bool TextField_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2104___hitTestMask)
HXLINE(2105)		this->_hx___getRenderTransform();
HXLINE(2106)		this->_hx___updateLayout();
HXLINE(2108)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN(2108)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN(2108)		Float px;
HXDLIN(2108)		if ((norm == 0)) {
HXLINE(2108)			px = -(_this->tx);
            		}
            		else {
HXLINE(2108)			px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - y)) + (_this->d * (x - _this->tx))));
            		}
HXLINE(2109)		 ::openfl::geom::Matrix _this1 = this->_hx___renderTransform;
HXDLIN(2109)		Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN(2109)		Float py;
HXDLIN(2109)		if ((norm1 == 0)) {
HXLINE(2109)			py = -(_this1->ty);
            		}
            		else {
HXLINE(2109)			py = ((((Float)1.0) / norm1) * ((_this1->a * (y - _this1->ty)) + (_this1->b * (_this1->tx - x))));
            		}
HXLINE(2111)		if (this->_hx___textEngine->bounds->contains(px,py)) {
HXLINE(2113)			return true;
            		}
HXLINE(2116)		return false;
            	}


void TextField_obj::_hx___replaceSelectedText(::String value,::hx::Null< bool >  __o_restrict){
            		bool restrict = __o_restrict.Default(true);
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2120___replaceSelectedText)
HXLINE(2121)		if (::hx::IsNull( value )) {
HXLINE(2121)			value = HX_("",00,00,00,00);
            		}
HXLINE(2122)		bool _hx_tmp;
HXDLIN(2122)		if ((value == HX_("",00,00,00,00))) {
HXLINE(2122)			_hx_tmp = (this->_hx___selectionIndex == this->_hx___caretIndex);
            		}
            		else {
HXLINE(2122)			_hx_tmp = false;
            		}
HXDLIN(2122)		if (_hx_tmp) {
HXLINE(2122)			return;
            		}
HXLINE(2124)		int startIndex;
HXDLIN(2124)		if ((this->_hx___caretIndex < this->_hx___selectionIndex)) {
HXLINE(2124)			startIndex = this->_hx___caretIndex;
            		}
            		else {
HXLINE(2124)			startIndex = this->_hx___selectionIndex;
            		}
HXLINE(2125)		int endIndex;
HXDLIN(2125)		if ((this->_hx___caretIndex > this->_hx___selectionIndex)) {
HXLINE(2125)			endIndex = this->_hx___caretIndex;
            		}
            		else {
HXLINE(2125)			endIndex = this->_hx___selectionIndex;
            		}
HXLINE(2127)		bool _hx_tmp1;
HXDLIN(2127)		bool _hx_tmp2;
HXDLIN(2127)		if ((startIndex == endIndex)) {
HXLINE(2127)			_hx_tmp2 = (this->_hx___textEngine->maxChars > 0);
            		}
            		else {
HXLINE(2127)			_hx_tmp2 = false;
            		}
HXDLIN(2127)		if (_hx_tmp2) {
HXLINE(2127)			_hx_tmp1 = (this->_hx___text.length == this->_hx___textEngine->maxChars);
            		}
            		else {
HXLINE(2127)			_hx_tmp1 = false;
            		}
HXDLIN(2127)		if (_hx_tmp1) {
HXLINE(2127)			return;
            		}
HXLINE(2129)		if ((startIndex > this->_hx___text.length)) {
HXLINE(2129)			startIndex = this->_hx___text.length;
            		}
HXLINE(2130)		if ((endIndex > this->_hx___text.length)) {
HXLINE(2130)			endIndex = this->_hx___text.length;
            		}
HXLINE(2131)		if ((endIndex < startIndex)) {
HXLINE(2133)			int cache = endIndex;
HXLINE(2134)			endIndex = startIndex;
HXLINE(2135)			startIndex = cache;
            		}
HXLINE(2137)		if ((startIndex < 0)) {
HXLINE(2137)			startIndex = 0;
            		}
HXLINE(2139)		this->_hx___replaceText(startIndex,endIndex,value,restrict);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,_hx___replaceSelectedText,(void))

void TextField_obj::_hx___replaceText(int beginIndex,int endIndex,::String newText,bool restrict){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_2143___replaceText)
HXLINE(2144)		bool _hx_tmp;
HXDLIN(2144)		bool _hx_tmp1;
HXDLIN(2144)		bool _hx_tmp2;
HXDLIN(2144)		if ((endIndex >= beginIndex)) {
HXLINE(2144)			_hx_tmp2 = (beginIndex < 0);
            		}
            		else {
HXLINE(2144)			_hx_tmp2 = true;
            		}
HXDLIN(2144)		if (!(_hx_tmp2)) {
HXLINE(2144)			_hx_tmp1 = (endIndex > this->_hx___text.length);
            		}
            		else {
HXLINE(2144)			_hx_tmp1 = true;
            		}
HXDLIN(2144)		if (!(_hx_tmp1)) {
HXLINE(2144)			_hx_tmp = ::hx::IsNull( newText );
            		}
            		else {
HXLINE(2144)			_hx_tmp = true;
            		}
HXDLIN(2144)		if (_hx_tmp) {
HXLINE(2144)			return;
            		}
HXLINE(2146)		if (restrict) {
HXLINE(2148)			newText = this->_hx___textEngine->restrictText(newText);
HXLINE(2150)			if ((this->_hx___textEngine->maxChars > 0)) {
HXLINE(2152)				int removeLength = (endIndex - beginIndex);
HXLINE(2153)				int maxLength = ((this->_hx___textEngine->maxChars - this->_hx___text.length) + removeLength);
HXLINE(2155)				if ((maxLength <= 0)) {
HXLINE(2157)					newText = HX_("",00,00,00,00);
            				}
            				else {
HXLINE(2159)					if ((maxLength < newText.length)) {
HXLINE(2161)						newText = newText.substr(0,maxLength);
            					}
            				}
            			}
            		}
HXLINE(2166)		::String _hx_tmp3 = (this->_hx___text.substring(0,beginIndex) + newText);
HXDLIN(2166)		this->_hx___updateText((_hx_tmp3 + this->_hx___text.substring(endIndex,null())));
HXLINE(2168)		int offset = (newText.length - (endIndex - beginIndex));
HXLINE(2170)		int i = 0;
HXLINE(2171)		 ::openfl::text::_internal::TextFormatRange range;
HXLINE(2173)		while((i < this->_hx___textEngine->textFormatRanges->get_length())){
HXLINE(2175)			range = this->_hx___textEngine->textFormatRanges->get(i).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXLINE(2177)			if ((beginIndex == endIndex)) {
HXLINE(2179)				if ((range->start == range->end)) {
HXLINE(2182)					if ((range->start != 0)) {
HXLINE(2184)						::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/TextField.hx",94,20,f0,cc),2184,HX_("openfl.text.TextField",ca,a8,d5,ef),HX_("__replaceText",e1,ab,0d,aa)));
            					}
            					else {
HXLINE(2188)						 ::openfl::text::_internal::TextFormatRange range1 = range;
HXDLIN(2188)						range1->end = (range1->end + offset);
            					}
            				}
            				else {
HXLINE(2191)					if ((range->end >= beginIndex)) {
HXLINE(2195)						if ((range->start >= beginIndex)) {
HXLINE(2198)							 ::openfl::text::_internal::TextFormatRange range1 = range;
HXDLIN(2198)							range1->start = (range1->start + offset);
HXLINE(2199)							 ::openfl::text::_internal::TextFormatRange range2 = range;
HXDLIN(2199)							range2->end = (range2->end + offset);
            						}
            						else {
HXLINE(2201)							bool _hx_tmp;
HXDLIN(2201)							if ((range->start < beginIndex)) {
HXLINE(2201)								_hx_tmp = (range->end >= endIndex);
            							}
            							else {
HXLINE(2201)								_hx_tmp = false;
            							}
HXDLIN(2201)							if (_hx_tmp) {
HXLINE(2205)								 ::openfl::text::_internal::TextFormatRange range1 = range;
HXDLIN(2205)								range1->end = (range1->end + offset);
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE(2210)				if ((range->end > beginIndex)) {
HXLINE(2214)					if ((range->start > endIndex)) {
HXLINE(2217)						 ::openfl::text::_internal::TextFormatRange range1 = range;
HXDLIN(2217)						range1->start = (range1->start + offset);
HXLINE(2218)						 ::openfl::text::_internal::TextFormatRange range2 = range;
HXDLIN(2218)						range2->end = (range2->end + offset);
            					}
            					else {
HXLINE(2220)						bool _hx_tmp;
HXDLIN(2220)						if ((range->start <= beginIndex)) {
HXLINE(2220)							_hx_tmp = (range->end > endIndex);
            						}
            						else {
HXLINE(2220)							_hx_tmp = false;
            						}
HXDLIN(2220)						if (_hx_tmp) {
HXLINE(2223)							 ::openfl::text::_internal::TextFormatRange range1 = range;
HXDLIN(2223)							range1->end = (range1->end + offset);
            						}
            						else {
HXLINE(2225)							bool _hx_tmp;
HXDLIN(2225)							if ((range->start >= beginIndex)) {
HXLINE(2225)								_hx_tmp = (range->end <= endIndex);
            							}
            							else {
HXLINE(2225)								_hx_tmp = false;
            							}
HXDLIN(2225)							if (_hx_tmp) {
HXLINE(2228)								::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN(2228)								i = (i - 1);
HXDLIN(2228)								::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(2228)								this1->__SetField(HX_("__tempIndex",3e,e8,54,22),(i + 1),::hx::paccDynamic);
HXDLIN(2228)								{
HXLINE(2228)									int _g_current = 0;
HXDLIN(2228)									::cpp::VirtualArray _g_args = this2;
HXDLIN(2228)									while((_g_current < _g_args->get_length())){
HXLINE(2228)										_g_current = (_g_current + 1);
HXDLIN(2228)										 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN(2228)										( ( ::openfl::_Vector::ObjectVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( ( ::openfl::text::_internal::TextFormatRange)(item) ));
HXDLIN(2228)										::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            									}
            								}
HXDLIN(2228)								( ( ::openfl::_Vector::ObjectVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),1);
            							}
            							else {
HXLINE(2230)								bool _hx_tmp;
HXDLIN(2230)								bool _hx_tmp1;
HXDLIN(2230)								if ((range->end > endIndex)) {
HXLINE(2230)									_hx_tmp1 = (range->start > beginIndex);
            								}
            								else {
HXLINE(2230)									_hx_tmp1 = false;
            								}
HXDLIN(2230)								if (_hx_tmp1) {
HXLINE(2230)									_hx_tmp = (range->start <= endIndex);
            								}
            								else {
HXLINE(2230)									_hx_tmp = false;
            								}
HXDLIN(2230)								if (_hx_tmp) {
HXLINE(2234)									range->start = beginIndex;
HXLINE(2235)									 ::openfl::text::_internal::TextFormatRange range1 = range;
HXDLIN(2235)									range1->end = (range1->end + offset);
            								}
            								else {
HXLINE(2237)									bool _hx_tmp;
HXDLIN(2237)									bool _hx_tmp1;
HXDLIN(2237)									if ((range->start < beginIndex)) {
HXLINE(2237)										_hx_tmp1 = (range->end > beginIndex);
            									}
            									else {
HXLINE(2237)										_hx_tmp1 = false;
            									}
HXDLIN(2237)									if (_hx_tmp1) {
HXLINE(2237)										_hx_tmp = (range->end <= endIndex);
            									}
            									else {
HXLINE(2237)										_hx_tmp = false;
            									}
HXDLIN(2237)									if (_hx_tmp) {
HXLINE(2240)										range->end = beginIndex;
            									}
            								}
            							}
            						}
            					}
            				}
            			}
HXLINE(2244)			i = (i + 1);
            		}
HXLINE(2248)		if ((this->_hx___textEngine->textFormatRanges->get_length() == 0)) {
HXLINE(2251)			::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN(2251)			 ::openfl::text::TextFormat value = this->get_defaultTextFormat()->clone();
HXDLIN(2251)			( ( ::openfl::_Vector::ObjectVector)(this1) )->push( ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,value,0,newText.length));
            		}
            		else {
HXLINE(2253)			bool _hx_tmp;
HXDLIN(2253)			if ((beginIndex == endIndex)) {
HXLINE(2253)				_hx_tmp = (this->_hx___textEngine->textFormatRanges->get(0).StaticCast<  ::openfl::text::_internal::TextFormatRange >()->start > 0);
            			}
            			else {
HXLINE(2253)				_hx_tmp = false;
            			}
HXDLIN(2253)			if (_hx_tmp) {
HXLINE(2256)				::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN(2256)				 ::openfl::text::TextFormat value = this->get_defaultTextFormat()->clone();
HXDLIN(2256)				( ( ::openfl::_Vector::ObjectVector)(this1) )->unshift( ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,value,0,this->_hx___textEngine->textFormatRanges->get(0).StaticCast<  ::openfl::text::_internal::TextFormatRange >()->start));
            			}
            			else {
HXLINE(2258)				bool _hx_tmp;
HXDLIN(2258)				if ((beginIndex != endIndex)) {
HXLINE(2258)					::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN(2258)					 ::openfl::text::_internal::TextFormatRange _hx_tmp1 = ( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->_hx___textEngine->textFormatRanges->get_length() - 1)).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(2258)					_hx_tmp = (_hx_tmp1->end < this->_hx___text.length);
            				}
            				else {
HXLINE(2258)					_hx_tmp = false;
            				}
HXDLIN(2258)				if (_hx_tmp) {
HXLINE(2261)					::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN(2261)					 ::openfl::text::TextFormat value = this->get_defaultTextFormat()->clone();
HXLINE(2262)					::Dynamic this2 = this->_hx___textEngine->textFormatRanges;
HXDLIN(2262)					 ::openfl::text::_internal::TextFormatRange value1 = ( ( ::openfl::_Vector::ObjectVector)(this2) )->get((this->_hx___textEngine->textFormatRanges->get_length() - 1)).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXLINE(2261)					( ( ::openfl::_Vector::ObjectVector)(this1) )->push( ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,value,value1->end,this->_hx___text.length));
            				}
            			}
            		}
HXLINE(2265)		this->_hx___selectionIndex = (this->_hx___caretIndex = (beginIndex + newText.length));
HXLINE(2267)		this->_hx___dirty = true;
HXLINE(2268)		this->_hx___layoutDirty = true;
HXLINE(2269)		if (!(this->_hx___renderDirty)) {
HXLINE(2269)			this->_hx___renderDirty = true;
HXDLIN(2269)			this->_hx___setParentRenderDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(TextField_obj,_hx___replaceText,(void))

void TextField_obj::_hx___startCursorTimer(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2274___startCursorTimer)
HXDLIN(2274)		if (::hx::IsEq( this->get_type(),1 )) {
HXLINE(2276)			if (this->_hx___inputEnabled) {
HXLINE(2278)				this->_hx___cursorTimer = ::haxe::Timer_obj::delay(this->_hx___startCursorTimer_dyn(),600);
HXLINE(2279)				this->_hx___showCursor = !(this->_hx___showCursor);
            			}
HXLINE(2281)			this->_hx___dirty = true;
HXLINE(2282)			if (!(this->_hx___renderDirty)) {
HXLINE(2282)				this->_hx___renderDirty = true;
HXDLIN(2282)				this->_hx___setParentRenderDirty();
            			}
            		}
            		else {
HXLINE(2284)			if (this->get_selectable()) {
HXLINE(2286)				this->_hx___dirty = true;
HXLINE(2287)				if (!(this->_hx___renderDirty)) {
HXLINE(2287)					this->_hx___renderDirty = true;
HXDLIN(2287)					this->_hx___setParentRenderDirty();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___startCursorTimer,(void))

void TextField_obj::_hx___startTextInput(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2292___startTextInput)
HXLINE(2293)		if ((this->_hx___caretIndex < 0)) {
HXLINE(2295)			this->_hx___caretIndex = this->_hx___text.length;
HXLINE(2296)			this->_hx___selectionIndex = this->_hx___caretIndex;
            		}
HXLINE(2299)		bool enableInput = true;
HXLINE(2301)		if (enableInput) {
HXLINE(2303)			this->_hx___enableInput();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___startTextInput,(void))

void TextField_obj::_hx___stopCursorTimer(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2308___stopCursorTimer)
HXLINE(2309)		if (::hx::IsNotNull( this->_hx___cursorTimer )) {
HXLINE(2311)			this->_hx___cursorTimer->stop();
HXLINE(2312)			this->_hx___cursorTimer = null();
            		}
HXLINE(2315)		if (this->_hx___showCursor) {
HXLINE(2317)			this->_hx___showCursor = false;
HXLINE(2318)			this->_hx___dirty = true;
HXLINE(2319)			if (!(this->_hx___renderDirty)) {
HXLINE(2319)				this->_hx___renderDirty = true;
HXDLIN(2319)				this->_hx___setParentRenderDirty();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___stopCursorTimer,(void))

void TextField_obj::_hx___stopTextInput(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2324___stopTextInput)
HXLINE(2325)		bool disableInput = true;
HXLINE(2327)		if (disableInput) {
HXLINE(2329)			this->_hx___disableInput();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___stopTextInput,(void))

void TextField_obj::_hx___updateLayout(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2335___updateLayout)
HXDLIN(2335)		if (this->_hx___layoutDirty) {
HXLINE(2337)			Float cacheWidth = this->_hx___textEngine->width;
HXLINE(2338)			this->_hx___textEngine->update();
HXLINE(2340)			if (::hx::IsNotEq( this->_hx___textEngine->autoSize,2 )) {
HXLINE(2342)				if ((this->_hx___textEngine->width != cacheWidth)) {
HXLINE(2344)					 ::Dynamic _hx_switch_0 = this->_hx___textEngine->autoSize;
            					if (  (_hx_switch_0==0) ){
HXLINE(2350)						Float _hx_tmp = this->get_x();
HXDLIN(2350)						this->set_x((_hx_tmp + ((cacheWidth - this->_hx___textEngine->width) / ( (Float)(2) ))));
HXDLIN(2350)						goto _hx_goto_74;
            					}
            					if (  (_hx_switch_0==3) ){
HXLINE(2347)						Float _hx_tmp = this->get_x();
HXDLIN(2347)						this->set_x((_hx_tmp + (cacheWidth - this->_hx___textEngine->width)));
HXDLIN(2347)						goto _hx_goto_74;
            					}
            					/* default */{
            					}
            					_hx_goto_74:;
            				}
HXLINE(2356)				this->_hx___textEngine->getBounds();
            			}
HXLINE(2359)			this->_hx___layoutDirty = false;
HXLINE(2361)			this->setSelection(this->_hx___selectionIndex,this->_hx___caretIndex);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___updateLayout,(void))

void TextField_obj::_hx___updateMouseDrag(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2366___updateMouseDrag)
HXLINE(2367)		if (::hx::IsNull( this->stage )) {
HXLINE(2367)			return;
            		}
HXLINE(2369)		 ::openfl::geom::Rectangle bounds = this->getBounds(::hx::ObjectPtr<OBJ_>(this));
HXLINE(2371)		Float _hx_tmp = this->get_mouseX();
HXDLIN(2371)		if ((_hx_tmp > (bounds->width - ( (Float)(1) )))) {
HXLINE(2373)			int _hx_tmp = this->get_scrollH();
HXDLIN(2373)			Float _hx_tmp1 = this->get_mouseX();
HXDLIN(2373)			this->set_scrollH((_hx_tmp + ::Std_obj::_hx_int(::Math_obj::max(::Math_obj::min(((_hx_tmp1 - bounds->width) * ((Float).1)),( (Float)(10) )),( (Float)(1) )))));
            		}
            		else {
HXLINE(2375)			if ((this->get_mouseX() < 1)) {
HXLINE(2377)				int _hx_tmp = this->get_scrollH();
HXDLIN(2377)				this->set_scrollH((_hx_tmp - ::Std_obj::_hx_int(::Math_obj::max(::Math_obj::min((this->get_mouseX() * ((Float)-.1)),( (Float)(10) )),( (Float)(1) )))));
            			}
            		}
HXLINE(2380)		this->_hx___mouseScrollVCounter++;
HXLINE(2382)		int _hx_tmp1 = this->_hx___mouseScrollVCounter;
HXDLIN(2382)		if ((_hx_tmp1 > (this->stage->get_frameRate() / ( (Float)(10) )))) {
HXLINE(2384)			Float _hx_tmp = this->get_mouseY();
HXDLIN(2384)			if ((_hx_tmp > (bounds->height - ( (Float)(2) )))) {
HXLINE(2386)				int _hx_tmp = this->get_scrollV();
HXDLIN(2386)				Float _hx_tmp1 = this->get_mouseY();
HXDLIN(2386)				Float _hx_tmp2 = (_hx_tmp + ::Math_obj::max(::Math_obj::min(((_hx_tmp1 - bounds->height) * ((Float).03)),( (Float)(5) )),( (Float)(1) )));
HXDLIN(2386)				this->set_scrollV(::Std_obj::_hx_int(::Math_obj::min(_hx_tmp2,( (Float)(this->get_maxScrollV()) ))));
            			}
            			else {
HXLINE(2388)				if ((this->get_mouseY() < 2)) {
HXLINE(2390)					int _hx_tmp = this->get_scrollV();
HXDLIN(2390)					this->set_scrollV((_hx_tmp - ::Std_obj::_hx_int(::Math_obj::max(::Math_obj::min((this->get_mouseY() * ((Float)-.03)),( (Float)(5) )),( (Float)(1) )))));
            				}
            			}
HXLINE(2392)			this->_hx___mouseScrollVCounter = 0;
            		}
HXLINE(2394)		this->stage_onMouseMove(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___updateMouseDrag,(void))

void TextField_obj::_hx___updateScrollH(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2398___updateScrollH)
HXLINE(2399)		this->_hx___updateLayout();
HXLINE(2401)		 ::openfl::geom::Rectangle bounds = this->getBounds(::hx::ObjectPtr<OBJ_>(this));
HXLINE(2403)		Float _hx_tmp = this->get_textWidth();
HXDLIN(2403)		if ((_hx_tmp <= (bounds->width - ( (Float)(4) )))) {
HXLINE(2405)			this->set_scrollH(0);
HXLINE(2406)			return;
            		}
HXLINE(2409)		int tempScrollH = this->get_scrollH();
HXLINE(2413)		bool _hx_tmp1;
HXDLIN(2413)		if ((this->_hx___caretIndex != 0)) {
HXLINE(2413)			int _hx_tmp = this->getLineOffset(this->getLineIndexOfChar(this->_hx___caretIndex));
HXDLIN(2413)			_hx_tmp1 = (_hx_tmp == this->_hx___caretIndex);
            		}
            		else {
HXLINE(2413)			_hx_tmp1 = true;
            		}
HXDLIN(2413)		if (_hx_tmp1) {
HXLINE(2416)			tempScrollH = 0;
            		}
            		else {
HXLINE(2420)			 ::openfl::geom::Rectangle caret = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(2421)			bool written = false;
HXLINE(2423)			if ((this->_hx___caretIndex < this->_hx___text.length)) {
HXLINE(2425)				written = this->_hx___getCharBoundaries(this->_hx___caretIndex,caret);
            			}
HXLINE(2427)			if (!(written)) {
HXLINE(2431)				this->_hx___getCharBoundaries((this->_hx___caretIndex - 1),caret);
HXLINE(2432)				 ::openfl::geom::Rectangle caret1 = caret;
HXDLIN(2432)				caret1->x = (caret1->x + caret->width);
            			}
HXLINE(2435)			while(true){
HXLINE(2435)				bool _hx_tmp;
HXDLIN(2435)				if ((caret->x < tempScrollH)) {
HXLINE(2435)					_hx_tmp = (tempScrollH > 0);
            				}
            				else {
HXLINE(2435)					_hx_tmp = false;
            				}
HXDLIN(2435)				if (!(_hx_tmp)) {
HXLINE(2435)					goto _hx_goto_77;
            				}
HXLINE(2437)				tempScrollH = (tempScrollH - 24);
            			}
            			_hx_goto_77:;
HXLINE(2439)			while((caret->x > ((tempScrollH + bounds->width) - ( (Float)(4) )))){
HXLINE(2441)				tempScrollH = (tempScrollH + 24);
            			}
HXLINE(2444)			::openfl::geom::Rectangle_obj::_hx___pool->release(caret);
            		}
HXLINE(2447)		bool _hx_tmp2;
HXDLIN(2447)		if ((tempScrollH > 0)) {
HXLINE(2447)			_hx_tmp2 = ::hx::IsNotEq( this->get_type(),1 );
            		}
            		else {
HXLINE(2447)			_hx_tmp2 = false;
            		}
HXDLIN(2447)		if (_hx_tmp2) {
HXLINE(2450)			int lineLength = this->getLineLength(this->getLineIndexOfChar(this->_hx___caretIndex));
HXLINE(2451)			int _hx_tmp = this->get_scrollH();
HXDLIN(2451)			if ((((_hx_tmp + bounds->width) - ( (Float)(4) )) > lineLength)) {
HXLINE(2453)				this->set_scrollH(::Math_obj::ceil(((( (Float)(lineLength) ) - bounds->width) + 4)));
            			}
            		}
HXLINE(2457)		if ((tempScrollH < 0)) {
HXLINE(2459)			this->set_scrollH(0);
            		}
            		else {
HXLINE(2461)			if ((tempScrollH > this->get_maxScrollH())) {
HXLINE(2463)				this->set_scrollH(this->get_maxScrollH());
            			}
            			else {
HXLINE(2467)				this->set_scrollH(tempScrollH);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___updateScrollH,(void))

void TextField_obj::_hx___updateScrollV(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2472___updateScrollV)
HXLINE(2473)		this->_hx___updateLayout();
HXLINE(2475)		Float _hx_tmp = this->get_textHeight();
HXDLIN(2475)		if ((_hx_tmp <= (this->get_height() - ( (Float)(4) )))) {
HXLINE(2477)			this->set_scrollV(1);
HXLINE(2478)			return;
            		}
HXLINE(2481)		int lineIndex = this->getLineIndexOfChar(this->_hx___caretIndex);
HXLINE(2483)		bool _hx_tmp1;
HXDLIN(2483)		if ((lineIndex == -1)) {
HXLINE(2483)			_hx_tmp1 = (this->_hx___caretIndex > 0);
            		}
            		else {
HXLINE(2483)			_hx_tmp1 = false;
            		}
HXDLIN(2483)		if (_hx_tmp1) {
HXLINE(2486)			lineIndex = (this->getLineIndexOfChar((this->_hx___caretIndex - 1)) + 1);
            		}
HXLINE(2489)		if (((lineIndex + 1) < this->get_scrollV())) {
HXLINE(2491)			this->set_scrollV((lineIndex + 1));
            		}
            		else {
HXLINE(2493)			if (((lineIndex + 1) > this->get_bottomScrollV())) {
HXLINE(2495)				int i = lineIndex;
HXDLIN(2495)				Float tempHeight = ((Float)0.0);
HXLINE(2497)				if ((i >= this->_hx___textEngine->lineHeights->get_length())) {
HXLINE(2499)					i = (this->_hx___textEngine->lineHeights->get_length() - 1);
            				}
HXLINE(2502)				while((i >= 0)){
HXLINE(2504)					tempHeight = (tempHeight + this->_hx___textEngine->lineHeights->get(i));
HXLINE(2506)					if ((tempHeight > (this->get_height() - ( (Float)(4) )))) {
HXLINE(2508)						int i1;
HXDLIN(2508)						if (((tempHeight - this->get_height()) < 0)) {
HXLINE(2508)							i1 = 1;
            						}
            						else {
HXLINE(2508)							i1 = 2;
            						}
HXDLIN(2508)						i = (i + i1);
HXLINE(2509)						goto _hx_goto_80;
            					}
HXLINE(2511)					i = (i - 1);
            				}
            				_hx_goto_80:;
HXLINE(2523)				this->set_scrollV(i);
            			}
            			else {
HXLINE(2529)				this->set_scrollV(this->get_scrollV());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___updateScrollV,(void))

void TextField_obj::_hx___updateText(::String value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2534___updateText)
HXLINE(2544)		this->_hx___textEngine->set_text(value);
HXLINE(2545)		this->_hx___text = this->_hx___textEngine->text;
HXLINE(2547)		bool _hx_tmp;
HXDLIN(2547)		if (::hx::IsNotNull( this->stage )) {
HXLINE(2547)			_hx_tmp = ::hx::IsInstanceEq( this->stage->get_focus(),::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE(2547)			_hx_tmp = false;
            		}
HXDLIN(2547)		if (_hx_tmp) {
HXLINE(2551)			if ((this->_hx___text.length < this->_hx___selectionIndex)) {
HXLINE(2553)				this->_hx___selectionIndex = this->_hx___text.length;
            			}
HXLINE(2555)			if ((this->_hx___text.length < this->_hx___caretIndex)) {
HXLINE(2557)				this->_hx___caretIndex = this->_hx___text.length;
            			}
            		}
            		else {
HXLINE(2564)			if (this->_hx___isHTML) {
HXLINE(2566)				this->_hx___selectionIndex = (this->_hx___caretIndex = this->_hx___text.length);
            			}
            			else {
HXLINE(2570)				this->_hx___selectionIndex = 0;
HXLINE(2571)				this->_hx___caretIndex = 0;
            			}
            		}
HXLINE(2575)		if (!(this->_hx___displayAsPassword)) {
HXLINE(2577)			this->_hx___textEngine->set_text(this->_hx___text);
            		}
            		else {
HXLINE(2581)			int length = this->get_text().length;
HXLINE(2582)			::String mask = HX_("",00,00,00,00);
HXLINE(2584)			{
HXLINE(2584)				int _g = 0;
HXDLIN(2584)				int _g1 = length;
HXDLIN(2584)				while((_g < _g1)){
HXLINE(2584)					_g = (_g + 1);
HXDLIN(2584)					int i = (_g - 1);
HXLINE(2586)					mask = (mask + HX_("*",2a,00,00,00));
            				}
            			}
HXLINE(2589)			this->_hx___textEngine->set_text(mask);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,_hx___updateText,(void))

void TextField_obj::_hx___updateTransforms( ::openfl::geom::Matrix overrideTransform){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2594___updateTransforms)
HXLINE(2595)		this->super::_hx___updateTransforms(overrideTransform);
HXLINE(2596)		{
HXLINE(2596)			 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN(2596)			Float px = this->_hx___offsetX;
HXDLIN(2596)			Float py = this->_hx___offsetY;
HXDLIN(2596)			_this->tx = (((px * _this->a) + (py * _this->c)) + _this->tx);
HXDLIN(2596)			_this->ty = (((px * _this->b) + (py * _this->d)) + _this->ty);
            		}
            	}


 ::Dynamic TextField_obj::get_antiAliasType(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2602_get_antiAliasType)
HXDLIN(2602)		return this->_hx___textEngine->antiAliasType;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_antiAliasType,return )

 ::Dynamic TextField_obj::set_antiAliasType( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2606_set_antiAliasType)
HXLINE(2607)		bool _hx_tmp = ::hx::IsNotEq( value,this->_hx___textEngine->antiAliasType );
HXLINE(2612)		return (this->_hx___textEngine->antiAliasType = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_antiAliasType,return )

 ::Dynamic TextField_obj::get_autoSize(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2617_get_autoSize)
HXDLIN(2617)		return this->_hx___textEngine->autoSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_autoSize,return )

 ::Dynamic TextField_obj::set_autoSize( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2621_set_autoSize)
HXLINE(2622)		if (::hx::IsNotEq( value,this->_hx___textEngine->autoSize )) {
HXLINE(2624)			this->_hx___dirty = true;
HXLINE(2625)			this->_hx___layoutDirty = true;
HXLINE(2626)			if (!(this->_hx___renderDirty)) {
HXLINE(2626)				this->_hx___renderDirty = true;
HXDLIN(2626)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2629)		return (this->_hx___textEngine->autoSize = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_autoSize,return )

bool TextField_obj::get_background(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2634_get_background)
HXDLIN(2634)		return this->_hx___textEngine->background;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_background,return )

bool TextField_obj::set_background(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2638_set_background)
HXLINE(2639)		if ((value != this->_hx___textEngine->background)) {
HXLINE(2641)			this->_hx___dirty = true;
HXLINE(2642)			if (!(this->_hx___renderDirty)) {
HXLINE(2642)				this->_hx___renderDirty = true;
HXDLIN(2642)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2645)		return (this->_hx___textEngine->background = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_background,return )

int TextField_obj::get_backgroundColor(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2650_get_backgroundColor)
HXDLIN(2650)		return this->_hx___textEngine->backgroundColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_backgroundColor,return )

int TextField_obj::set_backgroundColor(int value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2654_set_backgroundColor)
HXLINE(2655)		if ((value != this->_hx___textEngine->backgroundColor)) {
HXLINE(2657)			this->_hx___dirty = true;
HXLINE(2658)			if (!(this->_hx___renderDirty)) {
HXLINE(2658)				this->_hx___renderDirty = true;
HXDLIN(2658)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2661)		return (this->_hx___textEngine->backgroundColor = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_backgroundColor,return )

bool TextField_obj::get_border(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2666_get_border)
HXDLIN(2666)		return this->_hx___textEngine->border;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_border,return )

bool TextField_obj::set_border(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2670_set_border)
HXLINE(2671)		if ((value != this->_hx___textEngine->border)) {
HXLINE(2673)			this->_hx___dirty = true;
HXLINE(2674)			if (!(this->_hx___renderDirty)) {
HXLINE(2674)				this->_hx___renderDirty = true;
HXDLIN(2674)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2677)		return (this->_hx___textEngine->border = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_border,return )

int TextField_obj::get_borderColor(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2682_get_borderColor)
HXDLIN(2682)		return this->_hx___textEngine->borderColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_borderColor,return )

int TextField_obj::set_borderColor(int value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2686_set_borderColor)
HXLINE(2687)		if ((value != this->_hx___textEngine->borderColor)) {
HXLINE(2689)			this->_hx___dirty = true;
HXLINE(2690)			if (!(this->_hx___renderDirty)) {
HXLINE(2690)				this->_hx___renderDirty = true;
HXDLIN(2690)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2693)		return (this->_hx___textEngine->borderColor = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_borderColor,return )

int TextField_obj::get_bottomScrollV(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2697_get_bottomScrollV)
HXLINE(2698)		this->_hx___updateLayout();
HXLINE(2700)		return this->_hx___textEngine->get_bottomScrollV();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_bottomScrollV,return )

int TextField_obj::get_caretIndex(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2705_get_caretIndex)
HXDLIN(2705)		return this->_hx___caretIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_caretIndex,return )

 ::openfl::text::TextFormat TextField_obj::get_defaultTextFormat(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2710_get_defaultTextFormat)
HXDLIN(2710)		return this->_hx___textFormat->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_defaultTextFormat,return )

 ::openfl::text::TextFormat TextField_obj::set_defaultTextFormat( ::openfl::text::TextFormat value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2714_set_defaultTextFormat)
HXLINE(2715)		this->_hx___textFormat->_hx___merge(value);
HXLINE(2717)		this->_hx___layoutDirty = true;
HXLINE(2718)		this->_hx___dirty = true;
HXLINE(2719)		if (!(this->_hx___renderDirty)) {
HXLINE(2719)			this->_hx___renderDirty = true;
HXDLIN(2719)			this->_hx___setParentRenderDirty();
            		}
HXLINE(2721)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_defaultTextFormat,return )

bool TextField_obj::get_displayAsPassword(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2726_get_displayAsPassword)
HXDLIN(2726)		return this->_hx___displayAsPassword;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_displayAsPassword,return )

bool TextField_obj::set_displayAsPassword(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2730_set_displayAsPassword)
HXLINE(2731)		if ((value != this->_hx___displayAsPassword)) {
HXLINE(2733)			this->_hx___dirty = true;
HXLINE(2734)			this->_hx___layoutDirty = true;
HXLINE(2735)			if (!(this->_hx___renderDirty)) {
HXLINE(2735)				this->_hx___renderDirty = true;
HXDLIN(2735)				this->_hx___setParentRenderDirty();
            			}
HXLINE(2737)			this->_hx___displayAsPassword = value;
HXLINE(2738)			this->_hx___updateText(this->_hx___text);
            		}
HXLINE(2741)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_displayAsPassword,return )

bool TextField_obj::get_embedFonts(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2746_get_embedFonts)
HXDLIN(2746)		return this->_hx___textEngine->embedFonts;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_embedFonts,return )

bool TextField_obj::set_embedFonts(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2758_set_embedFonts)
HXDLIN(2758)		return (this->_hx___textEngine->embedFonts = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_embedFonts,return )

 ::Dynamic TextField_obj::get_gridFitType(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2763_get_gridFitType)
HXDLIN(2763)		return this->_hx___textEngine->gridFitType;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_gridFitType,return )

 ::Dynamic TextField_obj::set_gridFitType( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2775_set_gridFitType)
HXDLIN(2775)		return (this->_hx___textEngine->gridFitType = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_gridFitType,return )

Float TextField_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2779_get_height)
HXLINE(2780)		this->_hx___updateLayout();
HXLINE(2781)		Float _hx_tmp = this->_hx___textEngine->height;
HXDLIN(2781)		return (_hx_tmp * ::Math_obj::abs(this->get_scaleY()));
            	}


Float TextField_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2785_set_height)
HXLINE(2786)		if ((value != this->_hx___textEngine->height)) {
HXLINE(2788)			this->_hx___setTransformDirty();
HXLINE(2789)			this->_hx___dirty = true;
HXLINE(2790)			this->_hx___layoutDirty = true;
HXLINE(2791)			if (!(this->_hx___renderDirty)) {
HXLINE(2791)				this->_hx___renderDirty = true;
HXDLIN(2791)				this->_hx___setParentRenderDirty();
            			}
HXLINE(2793)			this->_hx___textEngine->height = value;
            		}
HXLINE(2796)		Float _hx_tmp = this->_hx___textEngine->height;
HXDLIN(2796)		return (_hx_tmp * ::Math_obj::abs(this->get_scaleY()));
            	}


::String TextField_obj::get_htmlText(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2802_get_htmlText)
HXDLIN(2802)		if (this->_hx___isHTML) {
HXDLIN(2802)			return this->_hx___htmlText;
            		}
            		else {
HXDLIN(2802)			return this->_hx___text;
            		}
HXDLIN(2802)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_htmlText,return )

::String TextField_obj::set_htmlText(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_2809_set_htmlText)
HXLINE(2810)		if (::hx::IsNull( value )) {
HXLINE(2812)			 ::openfl::errors::TypeError error =  ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,HX_("Error #2007: Parameter text must be non-null.",bb,5f,62,25));
HXLINE(2813)			error->errorID = 2007;
HXLINE(2814)			HX_STACK_DO_THROW(error);
            		}
HXLINE(2817)		bool _hx_tmp;
HXDLIN(2817)		if (this->_hx___isHTML) {
HXLINE(2817)			_hx_tmp = (this->_hx___text != value);
            		}
            		else {
HXLINE(2817)			_hx_tmp = true;
            		}
HXDLIN(2817)		if (_hx_tmp) {
HXLINE(2819)			this->_hx___dirty = true;
HXLINE(2820)			this->_hx___layoutDirty = true;
HXLINE(2821)			if (!(this->_hx___renderDirty)) {
HXLINE(2821)				this->_hx___renderDirty = true;
HXDLIN(2821)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2824)		this->_hx___isHTML = true;
HXLINE(2827)		if (this->condenseWhite) {
HXLINE(2829)			value =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\s+",b4,33,46,00),HX_("g",67,00,00,00))->replace(value,HX_(" ",20,00,00,00));
            		}
HXLINE(2832)		this->_hx___htmlText = value;
HXLINE(2835)		bool value1 = this->get_multiline();
HXDLIN(2835)		value = ::openfl::text::_internal::HTMLParser_obj::parse(value,value1,this->_hx___styleSheet,this->_hx___textFormat,this->_hx___textEngine->textFormatRanges);
HXLINE(2867)		this->_hx___updateText(value);
HXLINE(2870)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_htmlText,return )

int TextField_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2874_get_length)
HXLINE(2875)		if (::hx::IsNotNull( this->_hx___text )) {
HXLINE(2877)			return this->_hx___text.length;
            		}
HXLINE(2880)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_length,return )

int TextField_obj::get_maxChars(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2885_get_maxChars)
HXDLIN(2885)		return this->_hx___textEngine->maxChars;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxChars,return )

int TextField_obj::set_maxChars(int value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2889_set_maxChars)
HXLINE(2890)		if ((value != this->_hx___textEngine->maxChars)) {
HXLINE(2892)			this->_hx___textEngine->maxChars = value;
HXLINE(2894)			this->_hx___dirty = true;
HXLINE(2895)			this->_hx___layoutDirty = true;
HXLINE(2896)			if (!(this->_hx___renderDirty)) {
HXLINE(2896)				this->_hx___renderDirty = true;
HXDLIN(2896)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2899)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_maxChars,return )

int TextField_obj::get_maxScrollH(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2903_get_maxScrollH)
HXLINE(2904)		this->_hx___updateLayout();
HXLINE(2906)		return this->_hx___textEngine->maxScrollH;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollH,return )

int TextField_obj::get_maxScrollV(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2910_get_maxScrollV)
HXLINE(2911)		this->_hx___updateLayout();
HXLINE(2913)		return this->_hx___textEngine->get_maxScrollV();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollV,return )

bool TextField_obj::get_mouseWheelEnabled(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2918_get_mouseWheelEnabled)
HXDLIN(2918)		return this->_hx___mouseWheelEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_mouseWheelEnabled,return )

bool TextField_obj::set_mouseWheelEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2923_set_mouseWheelEnabled)
HXDLIN(2923)		return (this->_hx___mouseWheelEnabled = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_mouseWheelEnabled,return )

bool TextField_obj::get_multiline(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2928_get_multiline)
HXDLIN(2928)		return this->_hx___textEngine->multiline;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_multiline,return )

bool TextField_obj::set_multiline(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2933_set_multiline)
HXDLIN(2933)		return (this->_hx___textEngine->multiline = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_multiline,return )

int TextField_obj::get_numLines(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2937_get_numLines)
HXLINE(2938)		this->_hx___updateLayout();
HXLINE(2940)		return this->_hx___textEngine->numLines;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_numLines,return )

::String TextField_obj::get_restrict(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2945_get_restrict)
HXDLIN(2945)		return this->_hx___textEngine->restrict;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_restrict,return )

::String TextField_obj::set_restrict(::String value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2949_set_restrict)
HXLINE(2950)		if ((this->_hx___textEngine->restrict != value)) {
HXLINE(2952)			this->_hx___textEngine->set_restrict(value);
HXLINE(2953)			this->_hx___updateText(this->_hx___text);
            		}
HXLINE(2956)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_restrict,return )

int TextField_obj::get_scrollH(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2961_get_scrollH)
HXDLIN(2961)		return this->_hx___textEngine->scrollH;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollH,return )

int TextField_obj::set_scrollH(int value){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_2965_set_scrollH)
HXLINE(2966)		this->_hx___updateLayout();
HXLINE(2968)		if ((value > this->_hx___textEngine->maxScrollH)) {
HXLINE(2968)			value = this->_hx___textEngine->maxScrollH;
            		}
HXLINE(2969)		if ((value < 0)) {
HXLINE(2969)			value = 0;
            		}
HXLINE(2971)		if ((value != this->_hx___textEngine->scrollH)) {
HXLINE(2973)			this->_hx___dirty = true;
HXLINE(2974)			if (!(this->_hx___renderDirty)) {
HXLINE(2974)				this->_hx___renderDirty = true;
HXDLIN(2974)				this->_hx___setParentRenderDirty();
            			}
HXLINE(2975)			this->_hx___textEngine->scrollH = value;
HXLINE(2976)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("scroll",0d,d8,64,47),null(),null()));
            		}
HXLINE(2979)		return this->_hx___textEngine->scrollH;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollH,return )

int TextField_obj::get_scrollV(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2984_get_scrollV)
HXDLIN(2984)		return this->_hx___textEngine->get_scrollV();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollV,return )

int TextField_obj::set_scrollV(int value){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_2988_set_scrollV)
HXLINE(2989)		this->_hx___updateLayout();
HXLINE(2991)		if ((value > this->_hx___textEngine->get_maxScrollV())) {
HXLINE(2991)			value = this->_hx___textEngine->get_maxScrollV();
            		}
HXLINE(2992)		if ((value < 1)) {
HXLINE(2992)			value = 1;
            		}
HXLINE(2994)		bool _hx_tmp;
HXDLIN(2994)		if ((value == this->_hx___textEngine->get_scrollV())) {
HXLINE(2994)			_hx_tmp = (this->_hx___textEngine->get_scrollV() == 0);
            		}
            		else {
HXLINE(2994)			_hx_tmp = true;
            		}
HXDLIN(2994)		if (_hx_tmp) {
HXLINE(2996)			this->_hx___dirty = true;
HXLINE(2997)			if (!(this->_hx___renderDirty)) {
HXLINE(2997)				this->_hx___renderDirty = true;
HXDLIN(2997)				this->_hx___setParentRenderDirty();
            			}
HXLINE(2998)			this->_hx___textEngine->set_scrollV(value);
HXLINE(2999)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("scroll",0d,d8,64,47),null(),null()));
            		}
HXLINE(3002)		return this->_hx___textEngine->get_scrollV();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollV,return )

bool TextField_obj::get_selectable(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3007_get_selectable)
HXDLIN(3007)		return this->_hx___textEngine->selectable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectable,return )

bool TextField_obj::set_selectable(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3011_set_selectable)
HXLINE(3012)		bool _hx_tmp;
HXDLIN(3012)		if ((value != this->_hx___textEngine->selectable)) {
HXLINE(3012)			_hx_tmp = ::hx::IsEq( this->get_type(),1 );
            		}
            		else {
HXLINE(3012)			_hx_tmp = false;
            		}
HXDLIN(3012)		if (_hx_tmp) {
HXLINE(3014)			bool _hx_tmp;
HXDLIN(3014)			if (::hx::IsNotNull( this->stage )) {
HXLINE(3014)				_hx_tmp = ::hx::IsInstanceEq( this->stage->get_focus(),::hx::ObjectPtr<OBJ_>(this) );
            			}
            			else {
HXLINE(3014)				_hx_tmp = false;
            			}
HXDLIN(3014)			if (_hx_tmp) {
HXLINE(3016)				this->_hx___startTextInput();
            			}
            			else {
HXLINE(3018)				if (!(value)) {
HXLINE(3020)					this->_hx___stopTextInput();
            				}
            			}
            		}
HXLINE(3024)		return (this->_hx___textEngine->selectable = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_selectable,return )

int TextField_obj::get_selectionBeginIndex(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3029_get_selectionBeginIndex)
HXDLIN(3029)		return ::Std_obj::_hx_int(::Math_obj::min(( (Float)(this->_hx___caretIndex) ),( (Float)(this->_hx___selectionIndex) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectionBeginIndex,return )

int TextField_obj::get_selectionEndIndex(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3034_get_selectionEndIndex)
HXDLIN(3034)		return ::Std_obj::_hx_int(::Math_obj::max(( (Float)(this->_hx___caretIndex) ),( (Float)(this->_hx___selectionIndex) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectionEndIndex,return )

Float TextField_obj::get_sharpness(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3039_get_sharpness)
HXDLIN(3039)		return this->_hx___textEngine->sharpness;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_sharpness,return )

Float TextField_obj::set_sharpness(Float value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3043_set_sharpness)
HXLINE(3044)		if ((value != this->_hx___textEngine->sharpness)) {
HXLINE(3046)			this->_hx___dirty = true;
HXLINE(3047)			if (!(this->_hx___renderDirty)) {
HXLINE(3047)				this->_hx___renderDirty = true;
HXDLIN(3047)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(3050)		return (this->_hx___textEngine->sharpness = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_sharpness,return )

 ::openfl::text::StyleSheet TextField_obj::get_styleSheet(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3055_get_styleSheet)
HXDLIN(3055)		return this->_hx___styleSheet;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_styleSheet,return )

 ::openfl::text::StyleSheet TextField_obj::set_styleSheet( ::openfl::text::StyleSheet value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3059_set_styleSheet)
HXLINE(3060)		bool _hx_tmp;
HXDLIN(3060)		if (::hx::IsNotNull( this->_hx___styleSheet )) {
HXLINE(3060)			_hx_tmp = ::hx::IsNull( value );
            		}
            		else {
HXLINE(3060)			_hx_tmp = false;
            		}
HXDLIN(3060)		if (!(_hx_tmp)) {
HXLINE(3065)			if (::hx::IsNotNull( value )) {
HXLINE(3069)				bool _hx_tmp;
HXDLIN(3069)				if (this->_hx___isHTML) {
HXLINE(3069)					_hx_tmp = ::hx::IsInstanceNotEq( value,this->_hx___styleSheet );
            				}
            				else {
HXLINE(3069)					_hx_tmp = false;
            				}
HXDLIN(3069)				if (_hx_tmp) {
HXLINE(3071)					this->_hx___dirty = true;
HXLINE(3072)					this->_hx___layoutDirty = true;
HXLINE(3073)					if (!(this->_hx___renderDirty)) {
HXLINE(3073)						this->_hx___renderDirty = true;
HXDLIN(3073)						this->_hx___setParentRenderDirty();
            					}
HXLINE(3074)					this->set_htmlText(this->_hx___htmlText);
            				}
HXLINE(3078)				this->set_type(0);
            			}
            		}
HXLINE(3080)		return (this->_hx___styleSheet = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_styleSheet,return )

bool TextField_obj::get_tabEnabled(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3085_get_tabEnabled)
HXDLIN(3085)		if (::hx::IsNull( this->_hx___tabEnabled )) {
HXDLIN(3085)			return ::hx::IsEq( this->_hx___textEngine->type,1 );
            		}
            		else {
HXDLIN(3085)			return ( (bool)(this->_hx___tabEnabled) );
            		}
HXDLIN(3085)		return false;
            	}


::String TextField_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3090_get_text)
HXDLIN(3090)		return this->_hx___text;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_text,return )

::String TextField_obj::set_text(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_3094_set_text)
HXLINE(3095)		if (::hx::IsNull( value )) {
HXLINE(3097)			 ::openfl::errors::TypeError error =  ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,HX_("Error #2007: Parameter text must be non-null.",bb,5f,62,25));
HXLINE(3098)			error->errorID = 2007;
HXLINE(3099)			HX_STACK_DO_THROW(error);
            		}
HXLINE(3102)		if (::hx::IsNotNull( this->_hx___styleSheet )) {
HXLINE(3104)			return this->set_htmlText(value);
            		}
HXLINE(3107)		bool _hx_tmp;
HXDLIN(3107)		if (!(this->_hx___isHTML)) {
HXLINE(3107)			_hx_tmp = (this->_hx___text != value);
            		}
            		else {
HXLINE(3107)			_hx_tmp = true;
            		}
HXDLIN(3107)		if (_hx_tmp) {
HXLINE(3109)			this->_hx___dirty = true;
HXLINE(3110)			this->_hx___layoutDirty = true;
HXLINE(3111)			if (!(this->_hx___renderDirty)) {
HXLINE(3111)				this->_hx___renderDirty = true;
HXDLIN(3111)				this->_hx___setParentRenderDirty();
            			}
            		}
            		else {
HXLINE(3115)			return value;
            		}
HXLINE(3118)		if ((this->_hx___textEngine->textFormatRanges->get_length() > 1)) {
HXLINE(3120)			::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN(3120)			int deleteCount = (this->_hx___textEngine->textFormatRanges->get_length() - 1);
HXDLIN(3120)			::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(3120)			this1->__SetField(HX_("__tempIndex",3e,e8,54,22),1,::hx::paccDynamic);
HXDLIN(3120)			{
HXLINE(3120)				int _g_current = 0;
HXDLIN(3120)				::cpp::VirtualArray _g_args = this2;
HXDLIN(3120)				while((_g_current < _g_args->get_length())){
HXLINE(3120)					_g_current = (_g_current + 1);
HXDLIN(3120)					 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN(3120)					( ( ::openfl::_Vector::ObjectVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( ( ::openfl::text::_internal::TextFormatRange)(item) ));
HXDLIN(3120)					::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN(3120)			( ( ::openfl::_Vector::ObjectVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),deleteCount);
            		}
HXLINE(3123)		::String utfValue = value;
HXLINE(3124)		 ::openfl::text::_internal::TextFormatRange range = this->_hx___textEngine->textFormatRanges->get(0).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXLINE(3125)		range->format = this->_hx___textFormat;
HXLINE(3126)		range->start = 0;
HXLINE(3127)		range->end = utfValue.length;
HXLINE(3129)		this->_hx___isHTML = false;
HXLINE(3131)		this->_hx___updateText(value);
HXLINE(3133)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_text,return )

int TextField_obj::get_textColor(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3138_get_textColor)
HXDLIN(3138)		return ( (int)(this->_hx___textFormat->color) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textColor,return )

int TextField_obj::set_textColor(int value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3142_set_textColor)
HXLINE(3143)		if (::hx::IsNotEq( value,this->_hx___textFormat->color )) {
HXLINE(3145)			this->_hx___dirty = true;
HXLINE(3146)			if (!(this->_hx___renderDirty)) {
HXLINE(3146)				this->_hx___renderDirty = true;
HXDLIN(3146)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(3149)		{
HXLINE(3149)			 ::Dynamic range = this->_hx___textEngine->textFormatRanges->iterator();
HXDLIN(3149)			while(( (bool)(range->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(3149)				 ::openfl::text::_internal::TextFormatRange range1 = ( ( ::openfl::text::_internal::TextFormatRange)(range->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(3151)				range1->format->color = value;
            			}
            		}
HXLINE(3154)		return ( (int)((this->_hx___textFormat->color = value)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_textColor,return )

Float TextField_obj::get_textWidth(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3158_get_textWidth)
HXLINE(3159)		this->_hx___updateLayout();
HXLINE(3160)		return this->_hx___textEngine->textWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textWidth,return )

Float TextField_obj::get_textHeight(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3164_get_textHeight)
HXLINE(3165)		this->_hx___updateLayout();
HXLINE(3166)		return this->_hx___textEngine->textHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textHeight,return )

 ::Dynamic TextField_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3171_get_type)
HXDLIN(3171)		return this->_hx___textEngine->type;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_type,return )

 ::Dynamic TextField_obj::set_type( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3175_set_type)
HXLINE(3176)		if (::hx::IsNotNull( this->_hx___styleSheet )) {
HXLINE(3180)			value = 0;
            		}
HXLINE(3183)		if (::hx::IsNotEq( value,this->_hx___textEngine->type )) {
HXLINE(3187)			this->_hx___textEngine->type = value;
HXLINE(3188)			if (::hx::IsEq( value,1 )) {
HXLINE(3190)				this->addEventListener(HX_("addedToStage",63,22,55,0c),this->this_onAddedToStage_dyn(),null(),null(),null());
HXLINE(3192)				this->this_onFocusIn(null());
HXLINE(3193)				this->_hx___textEngine->_hx___useIntAdvances = true;
            			}
            			else {
HXLINE(3197)				this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->this_onAddedToStage_dyn(),null());
HXLINE(3199)				this->_hx___stopTextInput();
HXLINE(3200)				this->_hx___textEngine->_hx___useIntAdvances = null();
            			}
HXLINE(3203)			this->_hx___dirty = true;
HXLINE(3204)			this->_hx___layoutDirty = true;
HXLINE(3205)			if (!(this->_hx___renderDirty)) {
HXLINE(3205)				this->_hx___renderDirty = true;
HXDLIN(3205)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(3208)		return this->_hx___textEngine->type;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_type,return )

Float TextField_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3212_get_width)
HXLINE(3213)		this->_hx___updateLayout();
HXLINE(3214)		return (this->_hx___textEngine->width * ::Math_obj::abs(this->_hx___scaleX));
            	}


Float TextField_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3218_set_width)
HXLINE(3219)		if ((value != this->_hx___textEngine->width)) {
HXLINE(3221)			this->_hx___setTransformDirty();
HXLINE(3222)			this->_hx___dirty = true;
HXLINE(3223)			this->_hx___layoutDirty = true;
HXLINE(3224)			if (!(this->_hx___renderDirty)) {
HXLINE(3224)				this->_hx___renderDirty = true;
HXDLIN(3224)				this->_hx___setParentRenderDirty();
            			}
HXLINE(3226)			this->_hx___textEngine->width = value;
            		}
HXLINE(3229)		return (this->_hx___textEngine->width * ::Math_obj::abs(this->_hx___scaleX));
            	}


bool TextField_obj::get_wordWrap(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3234_get_wordWrap)
HXDLIN(3234)		return this->_hx___textEngine->wordWrap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_wordWrap,return )

bool TextField_obj::set_wordWrap(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3238_set_wordWrap)
HXLINE(3239)		if ((value != this->_hx___textEngine->wordWrap)) {
HXLINE(3241)			this->_hx___dirty = true;
HXLINE(3242)			this->_hx___layoutDirty = true;
HXLINE(3243)			if (!(this->_hx___renderDirty)) {
HXLINE(3243)				this->_hx___renderDirty = true;
HXDLIN(3243)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(3246)		return (this->_hx___textEngine->wordWrap = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_wordWrap,return )

Float TextField_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3251_get_x)
HXDLIN(3251)		return (this->_hx___transform->tx + this->_hx___offsetX);
            	}


Float TextField_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3255_set_x)
HXLINE(3256)		if ((value != (this->_hx___transform->tx + this->_hx___offsetX))) {
HXLINE(3256)			this->_hx___setTransformDirty();
            		}
HXLINE(3257)		this->_hx___transform->tx = (value - this->_hx___offsetX);
HXLINE(3258)		return value;
            	}


Float TextField_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3263_get_y)
HXDLIN(3263)		return (this->_hx___transform->ty + this->_hx___offsetY);
            	}


Float TextField_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3267_set_y)
HXLINE(3268)		if ((value != (this->_hx___transform->ty + this->_hx___offsetY))) {
HXLINE(3268)			this->_hx___setTransformDirty();
            		}
HXLINE(3269)		this->_hx___transform->ty = (value - this->_hx___offsetY);
HXLINE(3270)		return value;
            	}


void TextField_obj::stage_onMouseMove( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3275_stage_onMouseMove)
HXLINE(3276)		if (::hx::IsNull( this->stage )) {
HXLINE(3276)			return;
            		}
HXLINE(3278)		bool _hx_tmp;
HXDLIN(3278)		if (this->get_selectable()) {
HXLINE(3278)			_hx_tmp = (this->_hx___selectionIndex >= 0);
            		}
            		else {
HXLINE(3278)			_hx_tmp = false;
            		}
HXDLIN(3278)		if (_hx_tmp) {
HXLINE(3280)			this->_hx___updateLayout();
HXLINE(3282)			int position;
HXDLIN(3282)			if (this->_hx___lineSelection) {
HXLINE(3282)				Float position1 = this->get_mouseX();
HXDLIN(3282)				Float position2 = (position1 + this->get_scrollH());
HXDLIN(3282)				position = this->_hx___getPositionByIdentifier(position2,this->get_mouseY(),true);
            			}
            			else {
HXLINE(3283)				if (this->_hx___wordSelection) {
HXLINE(3283)					Float position1 = this->get_mouseX();
HXDLIN(3283)					Float position2 = (position1 + this->get_scrollH());
HXLINE(3282)					position = this->_hx___getPositionByIdentifier(position2,this->get_mouseY(),false);
            				}
            				else {
HXLINE(3283)					Float position1 = this->get_mouseX();
HXDLIN(3283)					Float position2 = (position1 + this->get_scrollH());
HXLINE(3282)					position = this->_hx___getPosition(position2,this->get_mouseY());
            				}
            			}
HXLINE(3285)			if ((position != this->_hx___caretIndex)) {
HXLINE(3287)				this->_hx___caretIndex = position;
HXLINE(3288)				bool _hx_tmp;
HXDLIN(3288)				if (!(this->_hx___wordSelection)) {
HXLINE(3288)					_hx_tmp = this->_hx___lineSelection;
            				}
            				else {
HXLINE(3288)					_hx_tmp = true;
            				}
HXDLIN(3288)				if (_hx_tmp) {
HXLINE(3291)					this->_hx___selectionIndex = this->_hx___getOppositeIdentifierBound(this->_hx___specialSelectionInitialIndex,this->_hx___lineSelection);
            				}
HXLINE(3294)				bool setDirty = true;
HXLINE(3307)				if (setDirty) {
HXLINE(3309)					this->_hx___dirty = true;
HXLINE(3310)					if (!(this->_hx___renderDirty)) {
HXLINE(3310)						this->_hx___renderDirty = true;
HXDLIN(3310)						this->_hx___setParentRenderDirty();
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,stage_onMouseMove,(void))

void TextField_obj::stage_onMouseUp( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3317_stage_onMouseUp)
HXLINE(3318)		 ::openfl::display::Stage stage = ( ( ::openfl::display::Stage)(event->currentTarget) );
HXLINE(3320)		stage->removeEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null());
HXLINE(3321)		stage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->stage_onMouseMove_dyn(),null());
HXLINE(3322)		stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->stage_onMouseUp_dyn(),null());
HXLINE(3324)		if (::hx::IsInstanceNotEq( this->stage,stage )) {
HXLINE(3324)			return;
            		}
HXLINE(3326)		if (::hx::IsInstanceEq( stage->get_focus(),::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE(3328)			this->_hx___getWorldTransform();
HXLINE(3329)			this->_hx___updateLayout();
HXLINE(3331)			int upPos;
HXDLIN(3331)			if (this->_hx___lineSelection) {
HXLINE(3331)				Float upPos1 = this->get_mouseX();
HXDLIN(3331)				Float upPos2 = (upPos1 + this->get_scrollH());
HXDLIN(3331)				upPos = this->_hx___getPositionByIdentifier(upPos2,this->get_mouseY(),true);
            			}
            			else {
HXLINE(3332)				if (this->_hx___wordSelection) {
HXLINE(3332)					Float upPos1 = this->get_mouseX();
HXDLIN(3332)					Float upPos2 = (upPos1 + this->get_scrollH());
HXLINE(3331)					upPos = this->_hx___getPositionByIdentifier(upPos2,this->get_mouseY(),false);
            				}
            				else {
HXLINE(3332)					Float upPos1 = this->get_mouseX();
HXDLIN(3332)					Float upPos2 = (upPos1 + this->get_scrollH());
HXLINE(3331)					upPos = this->_hx___getPosition(upPos2,this->get_mouseY());
            				}
            			}
HXLINE(3333)			int leftPos = ::Std_obj::_hx_int(::Math_obj::min(( (Float)(this->_hx___selectionIndex) ),( (Float)(upPos) )));
HXLINE(3334)			int rightPos = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(this->_hx___selectionIndex) ),( (Float)(upPos) )));
HXLINE(3339)			this->_hx___selectionIndex = leftPos;
HXLINE(3340)			this->_hx___caretIndex = rightPos;
HXLINE(3342)			this->_hx___wordSelection = (this->_hx___lineSelection = false);
HXLINE(3344)			if (this->_hx___inputEnabled) {
HXLINE(3346)				this->this_onFocusIn(null());
HXLINE(3348)				this->_hx___stopCursorTimer();
HXLINE(3349)				this->_hx___startCursorTimer();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,stage_onMouseUp,(void))

void TextField_obj::this_onAddedToStage( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3363_this_onAddedToStage)
HXDLIN(3363)		this->this_onFocusIn(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onAddedToStage,(void))

void TextField_obj::this_onEnterFrame( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3368_this_onEnterFrame)
HXDLIN(3368)		this->_hx___updateMouseDrag();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onEnterFrame,(void))

void TextField_obj::this_onFocusIn( ::openfl::events::FocusEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3374_this_onFocusIn)
HXDLIN(3374)		bool _hx_tmp;
HXDLIN(3374)		bool _hx_tmp1;
HXDLIN(3374)		if (::hx::IsEq( this->get_type(),1 )) {
HXDLIN(3374)			_hx_tmp1 = ::hx::IsNotNull( this->stage );
            		}
            		else {
HXDLIN(3374)			_hx_tmp1 = false;
            		}
HXDLIN(3374)		if (_hx_tmp1) {
HXDLIN(3374)			_hx_tmp = ::hx::IsInstanceEq( this->stage->get_focus(),::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN(3374)			_hx_tmp = false;
            		}
HXDLIN(3374)		if (_hx_tmp) {
HXLINE(3376)			this->_hx___startTextInput();
            		}
            		else {
HXLINE(3378)			bool _hx_tmp;
HXDLIN(3378)			bool _hx_tmp1;
HXDLIN(3378)			bool _hx_tmp2;
HXDLIN(3378)			if (::hx::IsNotEq( this->get_type(),1 )) {
HXLINE(3378)				_hx_tmp2 = this->get_selectable();
            			}
            			else {
HXLINE(3378)				_hx_tmp2 = false;
            			}
HXDLIN(3378)			if (_hx_tmp2) {
HXLINE(3378)				_hx_tmp1 = ::hx::IsNotNull( this->stage );
            			}
            			else {
HXLINE(3378)				_hx_tmp1 = false;
            			}
HXDLIN(3378)			if (_hx_tmp1) {
HXLINE(3378)				_hx_tmp = ::hx::IsInstanceEq( this->stage->get_focus(),::hx::ObjectPtr<OBJ_>(this) );
            			}
            			else {
HXLINE(3378)				_hx_tmp = false;
            			}
HXDLIN(3378)			if (_hx_tmp) {
HXLINE(3380)				this->_hx___startCursorTimer();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onFocusIn,(void))

void TextField_obj::this_onFocusOut( ::openfl::events::FocusEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3385_this_onFocusOut)
HXLINE(3386)		this->_hx___stopCursorTimer();
HXLINE(3390)		this->_hx___stopTextInput();
HXLINE(3392)		if ((this->_hx___selectionIndex != this->_hx___caretIndex)) {
HXLINE(3394)			this->_hx___selectionIndex = this->_hx___caretIndex;
HXLINE(3395)			this->_hx___dirty = true;
HXLINE(3396)			if (!(this->_hx___renderDirty)) {
HXLINE(3396)				this->_hx___renderDirty = true;
HXDLIN(3396)				this->_hx___setParentRenderDirty();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onFocusOut,(void))

void TextField_obj::this_onKeyDown( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3403_this_onKeyDown)
HXDLIN(3403)		bool _hx_tmp;
HXDLIN(3403)		bool _hx_tmp1;
HXDLIN(3403)		bool _hx_tmp2;
HXDLIN(3403)		if (this->get_selectable()) {
HXDLIN(3403)			_hx_tmp2 = ::hx::IsNotEq( this->get_type(),1 );
            		}
            		else {
HXDLIN(3403)			_hx_tmp2 = false;
            		}
HXDLIN(3403)		if (_hx_tmp2) {
HXDLIN(3403)			_hx_tmp1 = (event->keyCode == 67);
            		}
            		else {
HXDLIN(3403)			_hx_tmp1 = false;
            		}
HXDLIN(3403)		if (_hx_tmp1) {
HXDLIN(3403)			if (!(event->commandKey)) {
HXDLIN(3403)				_hx_tmp = event->ctrlKey;
            			}
            			else {
HXDLIN(3403)				_hx_tmp = true;
            			}
            		}
            		else {
HXDLIN(3403)			_hx_tmp = false;
            		}
HXDLIN(3403)		if (_hx_tmp) {
HXLINE(3405)			bool _hx_tmp;
HXDLIN(3405)			if ((this->_hx___caretIndex != this->_hx___selectionIndex)) {
HXLINE(3405)				_hx_tmp = !(this->get_displayAsPassword());
            			}
            			else {
HXLINE(3405)				_hx_tmp = false;
            			}
HXDLIN(3405)			if (_hx_tmp) {
HXLINE(3407)				::lime::_hx_system::Clipboard_obj::set_text(this->_hx___text.substring(this->_hx___caretIndex,this->_hx___selectionIndex));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onKeyDown,(void))

void TextField_obj::this_onMouseDown( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3414_this_onMouseDown)
HXLINE(3415)		bool _hx_tmp;
HXDLIN(3415)		if (!(this->get_selectable())) {
HXLINE(3415)			_hx_tmp = ::hx::IsNotEq( this->get_type(),1 );
            		}
            		else {
HXLINE(3415)			_hx_tmp = false;
            		}
HXDLIN(3415)		if (_hx_tmp) {
HXLINE(3415)			return;
            		}
HXLINE(3418)		this->_hx___lineSelection = (event->clickCount == 3);
HXLINE(3419)		this->_hx___wordSelection = (event->clickCount == 2);
HXLINE(3421)		if (this->_hx___lineSelection) {
HXLINE(3423)			int prevCaretIndex = this->_hx___caretIndex;
HXLINE(3424)			Float event1 = event->stageX;
HXDLIN(3424)			Float _hx_tmp = (event1 + this->get_scrollH());
HXDLIN(3424)			this->_hx___caretIndex = this->_hx___getPositionByIdentifier(_hx_tmp,event->stageY,true);
HXLINE(3425)			this->_hx___selectionIndex = this->_hx___getOppositeIdentifierBound(prevCaretIndex,true);
HXLINE(3426)			this->setSelection(this->_hx___caretIndex,this->_hx___selectionIndex);
            		}
            		else {
HXLINE(3428)			if (this->_hx___wordSelection) {
HXLINE(3430)				int prevCaretIndex = this->_hx___caretIndex;
HXLINE(3431)				Float event1 = event->stageX;
HXDLIN(3431)				Float _hx_tmp = (event1 + this->get_scrollH());
HXDLIN(3431)				this->_hx___caretIndex = this->_hx___getPositionByIdentifier(_hx_tmp,event->stageY,false);
HXLINE(3432)				this->_hx___selectionIndex = this->_hx___getOppositeIdentifierBound(prevCaretIndex,false);
HXLINE(3433)				this->_hx___specialSelectionInitialIndex = prevCaretIndex;
HXLINE(3434)				this->setSelection(this->_hx___caretIndex,this->_hx___selectionIndex);
            			}
            			else {
HXLINE(3438)				Float _hx_tmp = this->get_mouseX();
HXDLIN(3438)				Float _hx_tmp1 = (_hx_tmp + this->get_scrollH());
HXDLIN(3438)				this->_hx___caretIndex = this->_hx___getPosition(_hx_tmp1,this->get_mouseY());
HXLINE(3439)				this->_hx___selectionIndex = this->_hx___caretIndex;
HXLINE(3440)				this->setSelection(this->_hx___caretIndex,this->_hx___selectionIndex);
            			}
            		}
HXLINE(3443)		this->_hx___updateLayout();
HXLINE(3448)		{
HXLINE(3449)			this->_hx___dirty = true;
HXLINE(3450)			if (!(this->_hx___renderDirty)) {
HXLINE(3450)				this->_hx___renderDirty = true;
HXDLIN(3450)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(3455)		if (::hx::IsNull( this->stage )) {
HXLINE(3455)			return;
            		}
HXLINE(3458)		this->stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null(),null(),null());
HXLINE(3460)		this->stage->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->stage_onMouseMove_dyn(),null(),null(),null());
HXLINE(3461)		this->stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->stage_onMouseUp_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onMouseDown,(void))

void TextField_obj::this_onMouseWheel( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3466_this_onMouseWheel)
HXDLIN(3466)		if (this->get_mouseWheelEnabled()) {
HXLINE(3468)			int _hx_tmp = this->get_scrollV();
HXDLIN(3468)			int _hx_tmp1 = (_hx_tmp - event->delta);
HXDLIN(3468)			this->set_scrollV(::Std_obj::_hx_int(::Math_obj::min(( (Float)(_hx_tmp1) ),( (Float)(this->get_maxScrollV()) ))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onMouseWheel,(void))

void TextField_obj::window_onKeyDown(int key,int modifier){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_3478_window_onKeyDown)
HXDLIN(3478)		switch((int)(key)){
            			case (int)8: {
HXLINE(3501)				bool _hx_tmp;
HXDLIN(3501)				if ((this->_hx___selectionIndex == this->_hx___caretIndex)) {
HXLINE(3501)					_hx_tmp = (this->_hx___caretIndex > 0);
            				}
            				else {
HXLINE(3501)					_hx_tmp = false;
            				}
HXDLIN(3501)				if (_hx_tmp) {
HXLINE(3503)					this->_hx___selectionIndex = (this->_hx___caretIndex - 1);
            				}
HXLINE(3506)				if ((this->_hx___selectionIndex != this->_hx___caretIndex)) {
HXLINE(3508)					this->replaceSelectedText(HX_("",00,00,00,00));
HXLINE(3509)					this->_hx___selectionIndex = this->_hx___caretIndex;
HXLINE(3511)					this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),true,null()));
            				}
            				else {
HXLINE(3515)					this->_hx___stopCursorTimer();
HXLINE(3516)					this->_hx___startCursorTimer();
            				}
            			}
            			break;
            			case (int)97: {
HXLINE(3692)				if (this->get_selectable()) {
HXLINE(3693)					bool _hx_tmp;
HXDLIN(3693)					if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier)) {
HXLINE(3693)						_hx_tmp = !(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier));
            					}
            					else {
HXLINE(3693)						_hx_tmp = false;
            					}
HXDLIN(3693)					if (_hx_tmp) {
HXLINE(3695)						this->setSelection(0,this->_hx___text.length);
            					}
            				}
            			}
            			break;
            			case (int)99: {
HXLINE(3642)				bool _hx_tmp;
HXDLIN(3642)				if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier)) {
HXLINE(3642)					_hx_tmp = !(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier));
            				}
            				else {
HXLINE(3642)					_hx_tmp = false;
            				}
HXDLIN(3642)				if (_hx_tmp) {
HXLINE(3644)					bool _hx_tmp;
HXDLIN(3644)					if ((this->_hx___caretIndex != this->_hx___selectionIndex)) {
HXLINE(3644)						_hx_tmp = !(this->get_displayAsPassword());
            					}
            					else {
HXLINE(3644)						_hx_tmp = false;
            					}
HXDLIN(3644)					if (_hx_tmp) {
HXLINE(3646)						::lime::_hx_system::Clipboard_obj::set_text(this->_hx___text.substring(this->_hx___caretIndex,this->_hx___selectionIndex));
            					}
            				}
            			}
            			break;
            			case (int)118: {
HXLINE(3668)				bool _hx_tmp;
HXDLIN(3668)				if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier)) {
HXLINE(3668)					_hx_tmp = !(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier));
            				}
            				else {
HXLINE(3668)					_hx_tmp = false;
            				}
HXDLIN(3668)				if (_hx_tmp) {
HXLINE(3670)					if (::hx::IsNotNull( ::lime::_hx_system::Clipboard_obj::get_text() )) {
HXLINE(3672)						 ::openfl::events::TextEvent te =  ::openfl::events::TextEvent_obj::__alloc( HX_CTX ,HX_("textInput",1d,54,0b,57),true,true,::lime::_hx_system::Clipboard_obj::get_text());
HXLINE(3674)						this->dispatchEvent(te);
HXLINE(3676)						if (!(te->isDefaultPrevented())) {
HXLINE(3678)							this->_hx___replaceSelectedText(::lime::_hx_system::Clipboard_obj::get_text(),true);
HXLINE(3680)							this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),true,null()));
            						}
            					}
            				}
            				else {
HXLINE(3687)					::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN(3687)					( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->_hx___textEngine->textFormatRanges->get_length() - 1)).StaticCast<  ::openfl::text::_internal::TextFormatRange >()->end = this->_hx___text.length;
            				}
            			}
            			break;
            			case (int)120: {
HXLINE(3653)				bool _hx_tmp;
HXDLIN(3653)				if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier)) {
HXLINE(3653)					_hx_tmp = !(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier));
            				}
            				else {
HXLINE(3653)					_hx_tmp = false;
            				}
HXDLIN(3653)				if (_hx_tmp) {
HXLINE(3655)					bool _hx_tmp;
HXDLIN(3655)					if ((this->_hx___caretIndex != this->_hx___selectionIndex)) {
HXLINE(3655)						_hx_tmp = !(this->get_displayAsPassword());
            					}
            					else {
HXLINE(3655)						_hx_tmp = false;
            					}
HXDLIN(3655)					if (_hx_tmp) {
HXLINE(3657)						::lime::_hx_system::Clipboard_obj::set_text(this->_hx___text.substring(this->_hx___caretIndex,this->_hx___selectionIndex));
HXLINE(3659)						this->replaceSelectedText(HX_("",00,00,00,00));
HXLINE(3660)						this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),true,null()));
            					}
            				}
            			}
            			break;
            			case (int)127: {
HXLINE(3520)				bool _hx_tmp;
HXDLIN(3520)				if ((this->_hx___selectionIndex == this->_hx___caretIndex)) {
HXLINE(3520)					_hx_tmp = (this->_hx___caretIndex < this->_hx___text.length);
            				}
            				else {
HXLINE(3520)					_hx_tmp = false;
            				}
HXDLIN(3520)				if (_hx_tmp) {
HXLINE(3522)					this->_hx___selectionIndex = (this->_hx___caretIndex + 1);
            				}
HXLINE(3525)				if ((this->_hx___selectionIndex != this->_hx___caretIndex)) {
HXLINE(3527)					this->replaceSelectedText(HX_("",00,00,00,00));
HXLINE(3528)					this->_hx___selectionIndex = this->_hx___caretIndex;
HXLINE(3530)					this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),true,null()));
            				}
            				else {
HXLINE(3534)					this->_hx___stopCursorTimer();
HXLINE(3535)					this->_hx___startCursorTimer();
            				}
            			}
            			break;
            			case (int)1073741898: {
HXLINE(3606)				if (this->get_selectable()) {
HXLINE(3607)					bool _hx_tmp;
HXDLIN(3607)					if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier)) {
HXLINE(3607)						_hx_tmp = !(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier));
            					}
            					else {
HXLINE(3607)						_hx_tmp = false;
            					}
HXDLIN(3607)					if (_hx_tmp) {
HXLINE(3609)						this->_hx___caretIndex = 0;
            					}
            					else {
HXLINE(3613)						this->_hx___caretBeginningOfLine();
            					}
HXLINE(3616)					if (!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))) {
HXLINE(3618)						this->_hx___selectionIndex = this->_hx___caretIndex;
            					}
HXLINE(3621)					this->setSelection(this->_hx___selectionIndex,this->_hx___caretIndex);
            				}
            			}
            			break;
            			case (int)1073741901: {
HXLINE(3623)				if (this->get_selectable()) {
HXLINE(3624)					bool _hx_tmp;
HXDLIN(3624)					if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier)) {
HXLINE(3624)						_hx_tmp = !(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier));
            					}
            					else {
HXLINE(3624)						_hx_tmp = false;
            					}
HXDLIN(3624)					if (_hx_tmp) {
HXLINE(3626)						this->_hx___caretIndex = this->_hx___text.length;
            					}
            					else {
HXLINE(3630)						this->_hx___caretEndOfLine();
            					}
HXLINE(3633)					if (!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))) {
HXLINE(3635)						this->_hx___selectionIndex = this->_hx___caretIndex;
            					}
HXLINE(3638)					this->setSelection(this->_hx___selectionIndex,this->_hx___caretIndex);
            				}
            			}
            			break;
            			case (int)1073741903: {
HXLINE(3555)				if (this->get_selectable()) {
HXLINE(3556)					bool _hx_tmp;
HXDLIN(3556)					if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier)) {
HXLINE(3556)						_hx_tmp = !(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier));
            					}
            					else {
HXLINE(3556)						_hx_tmp = false;
            					}
HXDLIN(3556)					if (_hx_tmp) {
HXLINE(3558)						this->_hx___caretBeginningOfNextLine();
            					}
            					else {
HXLINE(3562)						this->_hx___caretNextCharacter();
            					}
HXLINE(3565)					if (!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))) {
HXLINE(3567)						this->_hx___selectionIndex = this->_hx___caretIndex;
            					}
HXLINE(3570)					this->setSelection(this->_hx___selectionIndex,this->_hx___caretIndex);
            				}
            			}
            			break;
            			case (int)1073741904: {
HXLINE(3538)				if (this->get_selectable()) {
HXLINE(3539)					bool _hx_tmp;
HXDLIN(3539)					if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier)) {
HXLINE(3539)						_hx_tmp = !(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier));
            					}
            					else {
HXLINE(3539)						_hx_tmp = false;
            					}
HXDLIN(3539)					if (_hx_tmp) {
HXLINE(3541)						this->_hx___caretBeginningOfPreviousLine();
            					}
            					else {
HXLINE(3545)						this->_hx___caretPreviousCharacter();
            					}
HXLINE(3548)					if (!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))) {
HXLINE(3550)						this->_hx___selectionIndex = this->_hx___caretIndex;
            					}
HXLINE(3553)					this->setSelection(this->_hx___selectionIndex,this->_hx___caretIndex);
            				}
            			}
            			break;
            			case (int)1073741905: {
HXLINE(3572)				if (this->get_selectable()) {
HXLINE(3573)					bool _hx_tmp;
HXDLIN(3573)					if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier)) {
HXLINE(3573)						_hx_tmp = !(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier));
            					}
            					else {
HXLINE(3573)						_hx_tmp = false;
            					}
HXDLIN(3573)					if (_hx_tmp) {
HXLINE(3575)						this->_hx___caretIndex = this->_hx___text.length;
            					}
            					else {
HXLINE(3579)						this->_hx___caretNextLine();
            					}
HXLINE(3582)					if (!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))) {
HXLINE(3584)						this->_hx___selectionIndex = this->_hx___caretIndex;
            					}
HXLINE(3587)					this->setSelection(this->_hx___selectionIndex,this->_hx___caretIndex);
            				}
            			}
            			break;
            			case (int)1073741906: {
HXLINE(3589)				if (this->get_selectable()) {
HXLINE(3590)					bool _hx_tmp;
HXDLIN(3590)					if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier)) {
HXLINE(3590)						_hx_tmp = !(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier));
            					}
            					else {
HXLINE(3590)						_hx_tmp = false;
            					}
HXDLIN(3590)					if (_hx_tmp) {
HXLINE(3592)						this->_hx___caretIndex = 0;
            					}
            					else {
HXLINE(3596)						this->_hx___caretPreviousLine();
            					}
HXLINE(3599)					if (!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))) {
HXLINE(3601)						this->_hx___selectionIndex = this->_hx___caretIndex;
            					}
HXLINE(3604)					this->setSelection(this->_hx___selectionIndex,this->_hx___caretIndex);
            				}
            			}
            			break;
            			case (int)13: case (int)1073741912: {
HXLINE(3481)				if (this->_hx___textEngine->multiline) {
HXLINE(3483)					 ::openfl::events::TextEvent te =  ::openfl::events::TextEvent_obj::__alloc( HX_CTX ,HX_("textInput",1d,54,0b,57),true,true,HX_("\n",0a,00,00,00));
HXLINE(3485)					this->dispatchEvent(te);
HXLINE(3487)					if (!(te->isDefaultPrevented())) {
HXLINE(3489)						this->_hx___replaceSelectedText(HX_("\n",0a,00,00,00),true);
HXLINE(3491)						this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),true,null()));
            					}
            				}
            				else {
HXLINE(3496)					this->_hx___stopCursorTimer();
HXLINE(3497)					this->_hx___startCursorTimer();
            				}
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,window_onKeyDown,(void))

void TextField_obj::window_onTextInput(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_3704_window_onTextInput)
HXLINE(3705)		this->_hx___replaceSelectedText(value,true);
HXLINE(3708)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),true,null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,window_onTextInput,(void))

 ::openfl::text::TextFormat TextField_obj::_hx___defaultTextFormat;

 ::haxe::ds::StringMap TextField_obj::_hx___missingFontWarning;


::hx::ObjectPtr< TextField_obj > TextField_obj::__new() {
	::hx::ObjectPtr< TextField_obj > __this = new TextField_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextField_obj > TextField_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextField_obj *__this = (TextField_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextField_obj), true, "openfl.text.TextField"));
	*(void **)__this = TextField_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextField_obj::TextField_obj()
{
}

void TextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextField);
	HX_MARK_MEMBER_NAME(condenseWhite,"condenseWhite");
	HX_MARK_MEMBER_NAME(_hx___wordSelection,"__wordSelection");
	HX_MARK_MEMBER_NAME(_hx___lineSelection,"__lineSelection");
	HX_MARK_MEMBER_NAME(_hx___specialSelectionInitialIndex,"__specialSelectionInitialIndex");
	HX_MARK_MEMBER_NAME(_hx___bounds,"__bounds");
	HX_MARK_MEMBER_NAME(_hx___caretIndex,"__caretIndex");
	HX_MARK_MEMBER_NAME(_hx___cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_MARK_MEMBER_NAME(_hx___displayAsPassword,"__displayAsPassword");
	HX_MARK_MEMBER_NAME(_hx___domRender,"__domRender");
	HX_MARK_MEMBER_NAME(_hx___inputEnabled,"__inputEnabled");
	HX_MARK_MEMBER_NAME(_hx___isHTML,"__isHTML");
	HX_MARK_MEMBER_NAME(_hx___layoutDirty,"__layoutDirty");
	HX_MARK_MEMBER_NAME(_hx___mouseScrollVCounter,"__mouseScrollVCounter");
	HX_MARK_MEMBER_NAME(_hx___mouseWheelEnabled,"__mouseWheelEnabled");
	HX_MARK_MEMBER_NAME(_hx___offsetX,"__offsetX");
	HX_MARK_MEMBER_NAME(_hx___offsetY,"__offsetY");
	HX_MARK_MEMBER_NAME(_hx___selectionIndex,"__selectionIndex");
	HX_MARK_MEMBER_NAME(_hx___showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(_hx___styleSheet,"__styleSheet");
	HX_MARK_MEMBER_NAME(_hx___text,"__text");
	HX_MARK_MEMBER_NAME(_hx___htmlText,"__htmlText");
	HX_MARK_MEMBER_NAME(_hx___textEngine,"__textEngine");
	HX_MARK_MEMBER_NAME(_hx___textFormat,"__textFormat");
	 ::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(condenseWhite,"condenseWhite");
	HX_VISIT_MEMBER_NAME(_hx___wordSelection,"__wordSelection");
	HX_VISIT_MEMBER_NAME(_hx___lineSelection,"__lineSelection");
	HX_VISIT_MEMBER_NAME(_hx___specialSelectionInitialIndex,"__specialSelectionInitialIndex");
	HX_VISIT_MEMBER_NAME(_hx___bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(_hx___caretIndex,"__caretIndex");
	HX_VISIT_MEMBER_NAME(_hx___cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(_hx___displayAsPassword,"__displayAsPassword");
	HX_VISIT_MEMBER_NAME(_hx___domRender,"__domRender");
	HX_VISIT_MEMBER_NAME(_hx___inputEnabled,"__inputEnabled");
	HX_VISIT_MEMBER_NAME(_hx___isHTML,"__isHTML");
	HX_VISIT_MEMBER_NAME(_hx___layoutDirty,"__layoutDirty");
	HX_VISIT_MEMBER_NAME(_hx___mouseScrollVCounter,"__mouseScrollVCounter");
	HX_VISIT_MEMBER_NAME(_hx___mouseWheelEnabled,"__mouseWheelEnabled");
	HX_VISIT_MEMBER_NAME(_hx___offsetX,"__offsetX");
	HX_VISIT_MEMBER_NAME(_hx___offsetY,"__offsetY");
	HX_VISIT_MEMBER_NAME(_hx___selectionIndex,"__selectionIndex");
	HX_VISIT_MEMBER_NAME(_hx___showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(_hx___styleSheet,"__styleSheet");
	HX_VISIT_MEMBER_NAME(_hx___text,"__text");
	HX_VISIT_MEMBER_NAME(_hx___htmlText,"__htmlText");
	HX_VISIT_MEMBER_NAME(_hx___textEngine,"__textEngine");
	HX_VISIT_MEMBER_NAME(_hx___textFormat,"__textFormat");
	 ::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextField_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_type() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_border() ); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"__text") ) { return ::hx::Val( _hx___text ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scrollH() ); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scrollV() ); }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return ::hx::Val( _hx___dirty ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoSize() ); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_htmlText() ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxChars() ); }
		if (HX_FIELD_EQ(inName,"numLines") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numLines() ); }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_restrict() ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_wordWrap() ); }
		if (HX_FIELD_EQ(inName,"__bounds") ) { return ::hx::Val( _hx___bounds ); }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { return ::hx::Val( _hx___isHTML ); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return ::hx::Val( get_type_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return ::hx::Val( set_type_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_multiline() ); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sharpness() ); }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textColor() ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textWidth() ); }
		if (HX_FIELD_EQ(inName,"__offsetX") ) { return ::hx::Val( _hx___offsetX ); }
		if (HX_FIELD_EQ(inName,"__offsetY") ) { return ::hx::Val( _hx___offsetY ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_background() ); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_caretIndex() ); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_embedFonts() ); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxScrollH() ); }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxScrollV() ); }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectable() ); }
		if (HX_FIELD_EQ(inName,"styleSheet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleSheet() ); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textHeight() ); }
		if (HX_FIELD_EQ(inName,"__htmlText") ) { return ::hx::Val( _hx___htmlText ); }
		if (HX_FIELD_EQ(inName,"appendText") ) { return ::hx::Val( appendText_dyn() ); }
		if (HX_FIELD_EQ(inName,"__dispatch") ) { return ::hx::Val( _hx___dispatch_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getGroup") ) { return ::hx::Val( _hx___getGroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_border") ) { return ::hx::Val( get_border_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_border") ) { return ::hx::Val( set_border_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_borderColor() ); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_gridFitType() ); }
		if (HX_FIELD_EQ(inName,"__domRender") ) { return ::hx::Val( _hx___domRender ); }
		if (HX_FIELD_EQ(inName,"getLineText") ) { return ::hx::Val( getLineText_dyn() ); }
		if (HX_FIELD_EQ(inName,"replaceText") ) { return ::hx::Val( replaceText_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return ::hx::Val( _hx___getCursor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scrollH") ) { return ::hx::Val( get_scrollH_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollH") ) { return ::hx::Val( set_scrollH_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scrollV") ) { return ::hx::Val( get_scrollV_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollV") ) { return ::hx::Val( set_scrollV_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__caretIndex") ) { return ::hx::Val( _hx___caretIndex ); }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return ::hx::Val( _hx___showCursor ); }
		if (HX_FIELD_EQ(inName,"__styleSheet") ) { return ::hx::Val( _hx___styleSheet ); }
		if (HX_FIELD_EQ(inName,"__textEngine") ) { return ::hx::Val( _hx___textEngine ); }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return ::hx::Val( _hx___textFormat ); }
		if (HX_FIELD_EQ(inName,"setSelection") ) { return ::hx::Val( setSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getAdvance") ) { return ::hx::Val( _hx___getAdvance_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateText") ) { return ::hx::Val( _hx___updateText_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return ::hx::Val( get_autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return ::hx::Val( set_autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return ::hx::Val( get_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return ::hx::Val( set_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return ::hx::Val( get_maxChars_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return ::hx::Val( set_maxChars_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numLines") ) { return ::hx::Val( get_numLines_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_restrict") ) { return ::hx::Val( get_restrict_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_restrict") ) { return ::hx::Val( set_restrict_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return ::hx::Val( get_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return ::hx::Val( set_wordWrap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_antiAliasType() ); }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bottomScrollV() ); }
		if (HX_FIELD_EQ(inName,"condenseWhite") ) { return ::hx::Val( condenseWhite ); }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return ::hx::Val( _hx___cursorTimer ); }
		if (HX_FIELD_EQ(inName,"__layoutDirty") ) { return ::hx::Val( _hx___layoutDirty ); }
		if (HX_FIELD_EQ(inName,"getLineLength") ) { return ::hx::Val( getLineLength_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLineOffset") ) { return ::hx::Val( getLineOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return ::hx::Val( getTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return ::hx::Val( setTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"__enableInput") ) { return ::hx::Val( _hx___enableInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getPosition") ) { return ::hx::Val( _hx___getPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return ::hx::Val( _hx___hitTestMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"__replaceText") ) { return ::hx::Val( _hx___replaceText_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return ::hx::Val( get_multiline_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return ::hx::Val( set_multiline_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_sharpness") ) { return ::hx::Val( get_sharpness_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_sharpness") ) { return ::hx::Val( set_sharpness_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textColor") ) { return ::hx::Val( get_textColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return ::hx::Val( set_textColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return ::hx::Val( get_textWidth_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__inputEnabled") ) { return ::hx::Val( _hx___inputEnabled ); }
		if (HX_FIELD_EQ(inName,"getLineMetrics") ) { return ::hx::Val( getLineMetrics_dyn() ); }
		if (HX_FIELD_EQ(inName,"__disableInput") ) { return ::hx::Val( _hx___disableInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateLayout") ) { return ::hx::Val( _hx___updateLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return ::hx::Val( get_background_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return ::hx::Val( set_background_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_caretIndex") ) { return ::hx::Val( get_caretIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_embedFonts") ) { return ::hx::Val( get_embedFonts_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_embedFonts") ) { return ::hx::Val( set_embedFonts_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxScrollH") ) { return ::hx::Val( get_maxScrollH_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return ::hx::Val( get_maxScrollV_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return ::hx::Val( get_selectable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return ::hx::Val( set_selectable_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleSheet") ) { return ::hx::Val( get_styleSheet_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_styleSheet") ) { return ::hx::Val( set_styleSheet_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tabEnabled") ) { return ::hx::Val( get_tabEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return ::hx::Val( get_textHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onFocusIn") ) { return ::hx::Val( this_onFocusIn_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onKeyDown") ) { return ::hx::Val( this_onKeyDown_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundColor() ); }
		if (HX_FIELD_EQ(inName,"__wordSelection") ) { return ::hx::Val( _hx___wordSelection ); }
		if (HX_FIELD_EQ(inName,"__lineSelection") ) { return ::hx::Val( _hx___lineSelection ); }
		if (HX_FIELD_EQ(inName,"__caretNextLine") ) { return ::hx::Val( _hx___caretNextLine_dyn() ); }
		if (HX_FIELD_EQ(inName,"__stopTextInput") ) { return ::hx::Val( _hx___stopTextInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateScrollH") ) { return ::hx::Val( _hx___updateScrollH_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateScrollV") ) { return ::hx::Val( _hx___updateScrollV_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return ::hx::Val( get_borderColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return ::hx::Val( set_borderColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_gridFitType") ) { return ::hx::Val( get_gridFitType_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_gridFitType") ) { return ::hx::Val( set_gridFitType_dyn() ); }
		if (HX_FIELD_EQ(inName,"stage_onMouseUp") ) { return ::hx::Val( stage_onMouseUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onFocusOut") ) { return ::hx::Val( this_onFocusOut_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__selectionIndex") ) { return ::hx::Val( _hx___selectionIndex ); }
		if (HX_FIELD_EQ(inName,"__caretEndOfLine") ) { return ::hx::Val( _hx___caretEndOfLine_dyn() ); }
		if (HX_FIELD_EQ(inName,"__startTextInput") ) { return ::hx::Val( _hx___startTextInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onMouseDown") ) { return ::hx::Val( this_onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"window_onKeyDown") ) { return ::hx::Val( window_onKeyDown_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_defaultTextFormat() ); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_displayAsPassword() ); }
		if (HX_FIELD_EQ(inName,"mouseWheelEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseWheelEnabled() ); }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectionEndIndex() ); }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return ::hx::Val( getCharBoundaries_dyn() ); }
		if (HX_FIELD_EQ(inName,"__allowMouseFocus") ) { return ::hx::Val( _hx___allowMouseFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"__stopCursorTimer") ) { return ::hx::Val( _hx___stopCursorTimer_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateMouseDrag") ) { return ::hx::Val( _hx___updateMouseDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_antiAliasType") ) { return ::hx::Val( get_antiAliasType_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_antiAliasType") ) { return ::hx::Val( set_antiAliasType_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return ::hx::Val( get_bottomScrollV_dyn() ); }
		if (HX_FIELD_EQ(inName,"stage_onMouseMove") ) { return ::hx::Val( stage_onMouseMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onEnterFrame") ) { return ::hx::Val( this_onEnterFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onMouseWheel") ) { return ::hx::Val( this_onMouseWheel_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getLineIndexOfChar") ) { return ::hx::Val( getLineIndexOfChar_dyn() ); }
		if (HX_FIELD_EQ(inName,"getParagraphLength") ) { return ::hx::Val( getParagraphLength_dyn() ); }
		if (HX_FIELD_EQ(inName,"__startCursorTimer") ) { return ::hx::Val( _hx___startCursorTimer_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return ::hx::Val( _hx___updateTransforms_dyn() ); }
		if (HX_FIELD_EQ(inName,"window_onTextInput") ) { return ::hx::Val( window_onTextInput_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectionBeginIndex() ); }
		if (HX_FIELD_EQ(inName,"__displayAsPassword") ) { return ::hx::Val( _hx___displayAsPassword ); }
		if (HX_FIELD_EQ(inName,"__mouseWheelEnabled") ) { return ::hx::Val( _hx___mouseWheelEnabled ); }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return ::hx::Val( getCharIndexAtPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLineIndexAtPoint") ) { return ::hx::Val( getLineIndexAtPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"replaceSelectedText") ) { return ::hx::Val( replaceSelectedText_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return ::hx::Val( _hx___setStageReference_dyn() ); }
		if (HX_FIELD_EQ(inName,"__caretPreviousLine") ) { return ::hx::Val( _hx___caretPreviousLine_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getCharBoundaries") ) { return ::hx::Val( _hx___getCharBoundaries_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return ::hx::Val( get_backgroundColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return ::hx::Val( set_backgroundColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onAddedToStage") ) { return ::hx::Val( this_onAddedToStage_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__caretNextCharacter") ) { return ::hx::Val( _hx___caretNextCharacter_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__mouseScrollVCounter") ) { return ::hx::Val( _hx___mouseScrollVCounter ); }
		if (HX_FIELD_EQ(inName,"__replaceSelectedText") ) { return ::hx::Val( _hx___replaceSelectedText_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_defaultTextFormat") ) { return ::hx::Val( get_defaultTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_defaultTextFormat") ) { return ::hx::Val( set_defaultTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_displayAsPassword") ) { return ::hx::Val( get_displayAsPassword_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_displayAsPassword") ) { return ::hx::Val( set_displayAsPassword_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseWheelEnabled") ) { return ::hx::Val( get_mouseWheelEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mouseWheelEnabled") ) { return ::hx::Val( set_mouseWheelEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectionEndIndex") ) { return ::hx::Val( get_selectionEndIndex_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__caretBeginningOfLine") ) { return ::hx::Val( _hx___caretBeginningOfLine_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFirstCharInParagraph") ) { return ::hx::Val( getFirstCharInParagraph_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectionBeginIndex") ) { return ::hx::Val( get_selectionBeginIndex_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__caretPreviousCharacter") ) { return ::hx::Val( _hx___caretPreviousCharacter_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__getPositionByIdentifier") ) { return ::hx::Val( _hx___getPositionByIdentifier_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__caretBeginningOfNextLine") ) { return ::hx::Val( _hx___caretBeginningOfNextLine_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__getOppositeIdentifierBound") ) { return ::hx::Val( _hx___getOppositeIdentifierBound_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__getCharIndexOnDifferentLine") ) { return ::hx::Val( _hx___getCharIndexOnDifferentLine_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"__specialSelectionInitialIndex") ) { return ::hx::Val( _hx___specialSelectionInitialIndex ); }
		if (HX_FIELD_EQ(inName,"__caretBeginningOfPreviousLine") ) { return ::hx::Val( _hx___caretBeginningOfPreviousLine_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { outValue = ( _hx___defaultTextFormat ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__missingFontWarning") ) { outValue = ( _hx___missingFontWarning ); return true; }
	}
	return false;
}

::hx::Val TextField_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_type(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_border(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__text") ) { _hx___text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollH(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollV(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"__dirty") ) { _hx___dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoSize(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_htmlText(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxChars(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_restrict(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wordWrap(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__bounds") ) { _hx___bounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { _hx___isHTML=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_multiline(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_sharpness(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textColor(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"__offsetX") ) { _hx___offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__offsetY") ) { _hx___offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_background(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_embedFonts(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectable(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"styleSheet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_styleSheet(inValue.Cast<  ::openfl::text::StyleSheet >()) ); }
		if (HX_FIELD_EQ(inName,"__htmlText") ) { _hx___htmlText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderColor(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_gridFitType(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"__domRender") ) { _hx___domRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__caretIndex") ) { _hx___caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { _hx___showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__styleSheet") ) { _hx___styleSheet=inValue.Cast<  ::openfl::text::StyleSheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textEngine") ) { _hx___textEngine=inValue.Cast<  ::openfl::text::_internal::TextEngine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { _hx___textFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_antiAliasType(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"condenseWhite") ) { condenseWhite=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { _hx___cursorTimer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__layoutDirty") ) { _hx___layoutDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__inputEnabled") ) { _hx___inputEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundColor(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"__wordSelection") ) { _hx___wordSelection=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__lineSelection") ) { _hx___lineSelection=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__selectionIndex") ) { _hx___selectionIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_defaultTextFormat(inValue.Cast<  ::openfl::text::TextFormat >()) ); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_displayAsPassword(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"mouseWheelEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mouseWheelEnabled(inValue.Cast< bool >()) ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__displayAsPassword") ) { _hx___displayAsPassword=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseWheelEnabled") ) { _hx___mouseWheelEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__mouseScrollVCounter") ) { _hx___mouseScrollVCounter=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"__specialSelectionInitialIndex") ) { _hx___specialSelectionInitialIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { _hx___defaultTextFormat=ioValue.Cast<  ::openfl::text::TextFormat >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__missingFontWarning") ) { _hx___missingFontWarning=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("antiAliasType",68,c4,fa,e7));
	outFields->push(HX_("autoSize",d0,8f,79,2f));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("border",ec,4c,1a,64));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("bottomScrollV",fe,f7,87,8b));
	outFields->push(HX_("caretIndex",8f,b6,5b,dd));
	outFields->push(HX_("condenseWhite",4c,f5,1f,32));
	outFields->push(HX_("defaultTextFormat",e5,c7,e0,0a));
	outFields->push(HX_("displayAsPassword",0f,cb,96,ea));
	outFields->push(HX_("embedFonts",2b,c7,e1,8e));
	outFields->push(HX_("gridFitType",05,f3,13,b4));
	outFields->push(HX_("htmlText",b8,1f,38,10));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("maxChars",99,ef,d0,ef));
	outFields->push(HX_("maxScrollH",57,ad,fc,9a));
	outFields->push(HX_("maxScrollV",65,ad,fc,9a));
	outFields->push(HX_("mouseWheelEnabled",eb,16,54,65));
	outFields->push(HX_("multiline",ed,d2,11,9e));
	outFields->push(HX_("numLines",d9,f1,11,32));
	outFields->push(HX_("restrict",3c,cb,9e,f1));
	outFields->push(HX_("scrollH",9b,33,d8,30));
	outFields->push(HX_("scrollV",a9,33,d8,30));
	outFields->push(HX_("selectable",96,b6,2a,c4));
	outFields->push(HX_("selectionBeginIndex",95,7f,17,d7));
	outFields->push(HX_("selectionEndIndex",a3,0d,42,4b));
	outFields->push(HX_("sharpness",81,22,25,1b));
	outFields->push(HX_("styleSheet",ae,3b,16,fc));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("textColor",76,01,4a,e3));
	outFields->push(HX_("textHeight",74,88,3c,39));
	outFields->push(HX_("textWidth",19,46,50,63));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("__wordSelection",02,86,3d,26));
	outFields->push(HX_("__lineSelection",98,5a,4c,59));
	outFields->push(HX_("__specialSelectionInitialIndex",81,ea,b9,4b));
	outFields->push(HX_("__bounds",95,f1,4c,0e));
	outFields->push(HX_("__caretIndex",af,31,ef,15));
	outFields->push(HX_("__cursorTimer",ef,59,8f,e1));
	outFields->push(HX_("__dirty",f2,a8,2e,44));
	outFields->push(HX_("__displayAsPassword",ef,f3,86,9d));
	outFields->push(HX_("__domRender",58,38,ba,4f));
	outFields->push(HX_("__inputEnabled",b7,e0,1d,37));
	outFields->push(HX_("__isHTML",75,61,94,0a));
	outFields->push(HX_("__layoutDirty",e8,e9,31,d3));
	outFields->push(HX_("__mouseScrollVCounter",38,bc,63,27));
	outFields->push(HX_("__mouseWheelEnabled",cb,3f,44,18));
	outFields->push(HX_("__offsetX",45,5a,b3,58));
	outFields->push(HX_("__offsetY",46,5a,b3,58));
	outFields->push(HX_("__selectionIndex",46,0a,c3,7d));
	outFields->push(HX_("__showCursor",d3,ae,f0,e0));
	outFields->push(HX_("__styleSheet",ce,b6,a9,34));
	outFields->push(HX_("__text",cd,2f,f2,fb));
	outFields->push(HX_("__htmlText",d8,92,70,b3));
	outFields->push(HX_("__textEngine",6f,43,08,6c));
	outFields->push(HX_("__textFormat",e4,8a,12,6d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextField_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(TextField_obj,condenseWhite),HX_("condenseWhite",4c,f5,1f,32)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___wordSelection),HX_("__wordSelection",02,86,3d,26)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___lineSelection),HX_("__lineSelection",98,5a,4c,59)},
	{::hx::fsInt,(int)offsetof(TextField_obj,_hx___specialSelectionInitialIndex),HX_("__specialSelectionInitialIndex",81,ea,b9,4b)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(TextField_obj,_hx___bounds),HX_("__bounds",95,f1,4c,0e)},
	{::hx::fsInt,(int)offsetof(TextField_obj,_hx___caretIndex),HX_("__caretIndex",af,31,ef,15)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(TextField_obj,_hx___cursorTimer),HX_("__cursorTimer",ef,59,8f,e1)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___dirty),HX_("__dirty",f2,a8,2e,44)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___displayAsPassword),HX_("__displayAsPassword",ef,f3,86,9d)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___domRender),HX_("__domRender",58,38,ba,4f)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___inputEnabled),HX_("__inputEnabled",b7,e0,1d,37)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___isHTML),HX_("__isHTML",75,61,94,0a)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___layoutDirty),HX_("__layoutDirty",e8,e9,31,d3)},
	{::hx::fsInt,(int)offsetof(TextField_obj,_hx___mouseScrollVCounter),HX_("__mouseScrollVCounter",38,bc,63,27)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___mouseWheelEnabled),HX_("__mouseWheelEnabled",cb,3f,44,18)},
	{::hx::fsFloat,(int)offsetof(TextField_obj,_hx___offsetX),HX_("__offsetX",45,5a,b3,58)},
	{::hx::fsFloat,(int)offsetof(TextField_obj,_hx___offsetY),HX_("__offsetY",46,5a,b3,58)},
	{::hx::fsInt,(int)offsetof(TextField_obj,_hx___selectionIndex),HX_("__selectionIndex",46,0a,c3,7d)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___showCursor),HX_("__showCursor",d3,ae,f0,e0)},
	{::hx::fsObject /*  ::openfl::text::StyleSheet */ ,(int)offsetof(TextField_obj,_hx___styleSheet),HX_("__styleSheet",ce,b6,a9,34)},
	{::hx::fsString,(int)offsetof(TextField_obj,_hx___text),HX_("__text",cd,2f,f2,fb)},
	{::hx::fsString,(int)offsetof(TextField_obj,_hx___htmlText),HX_("__htmlText",d8,92,70,b3)},
	{::hx::fsObject /*  ::openfl::text::_internal::TextEngine */ ,(int)offsetof(TextField_obj,_hx___textEngine),HX_("__textEngine",6f,43,08,6c)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(TextField_obj,_hx___textFormat),HX_("__textFormat",e4,8a,12,6d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TextField_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(void *) &TextField_obj::_hx___defaultTextFormat,HX_("__defaultTextFormat",c5,f0,d0,bd)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &TextField_obj::_hx___missingFontWarning,HX_("__missingFontWarning",a7,0d,0e,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TextField_obj_sMemberFields[] = {
	HX_("condenseWhite",4c,f5,1f,32),
	HX_("__wordSelection",02,86,3d,26),
	HX_("__lineSelection",98,5a,4c,59),
	HX_("__specialSelectionInitialIndex",81,ea,b9,4b),
	HX_("__bounds",95,f1,4c,0e),
	HX_("__caretIndex",af,31,ef,15),
	HX_("__cursorTimer",ef,59,8f,e1),
	HX_("__dirty",f2,a8,2e,44),
	HX_("__displayAsPassword",ef,f3,86,9d),
	HX_("__domRender",58,38,ba,4f),
	HX_("__inputEnabled",b7,e0,1d,37),
	HX_("__isHTML",75,61,94,0a),
	HX_("__layoutDirty",e8,e9,31,d3),
	HX_("__mouseScrollVCounter",38,bc,63,27),
	HX_("__mouseWheelEnabled",cb,3f,44,18),
	HX_("__offsetX",45,5a,b3,58),
	HX_("__offsetY",46,5a,b3,58),
	HX_("__selectionIndex",46,0a,c3,7d),
	HX_("__showCursor",d3,ae,f0,e0),
	HX_("__styleSheet",ce,b6,a9,34),
	HX_("__text",cd,2f,f2,fb),
	HX_("__htmlText",d8,92,70,b3),
	HX_("__textEngine",6f,43,08,6c),
	HX_("__textFormat",e4,8a,12,6d),
	HX_("appendText",a7,cf,05,5b),
	HX_("getCharBoundaries",74,85,a1,8b),
	HX_("getCharIndexAtPoint",17,ee,9c,aa),
	HX_("getFirstCharInParagraph",f9,5c,3d,08),
	HX_("getLineIndexAtPoint",35,dc,50,98),
	HX_("getLineIndexOfChar",b5,68,99,a1),
	HX_("getLineLength",30,ec,21,d0),
	HX_("getLineMetrics",b9,ab,c6,f2),
	HX_("getLineOffset",dd,ee,59,91),
	HX_("getLineText",77,dd,16,b0),
	HX_("getParagraphLength",fe,0e,4e,c4),
	HX_("getTextFormat",fa,6b,f1,90),
	HX_("replaceSelectedText",fc,fe,33,bb),
	HX_("replaceText",01,6b,95,61),
	HX_("setSelection",4a,b8,6a,b2),
	HX_("setTextFormat",06,4e,f7,d5),
	HX_("__setStageReference",4f,e5,e5,f4),
	HX_("__allowMouseFocus",3c,92,71,07),
	HX_("__caretBeginningOfLine",45,c9,47,fd),
	HX_("__caretBeginningOfNextLine",58,ec,35,93),
	HX_("__caretBeginningOfPreviousLine",1c,d2,e4,ff),
	HX_("__caretEndOfLine",03,74,b1,5c),
	HX_("__caretNextCharacter",d3,7b,4f,ea),
	HX_("__caretNextLine",0a,68,ad,0d),
	HX_("__caretPreviousCharacter",8f,ce,6c,11),
	HX_("__caretPreviousLine",ce,0e,89,48),
	HX_("__disableInput",22,64,62,1d),
	HX_("__dispatch",da,41,9c,c1),
	HX_("__enableInput",67,4b,65,d1),
	HX_("__getAdvance",ac,09,01,77),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__getCharBoundaries",54,ae,91,3e),
	HX_("__getCharIndexOnDifferentLine",08,76,0f,0a),
	HX_("__getCursor",ec,60,6b,e9),
	HX_("__getGroup",e9,35,04,9d),
	HX_("__getPosition",3f,a4,66,39),
	HX_("__getPositionByIdentifier",ff,47,84,d6),
	HX_("__getOppositeIdentifierBound",18,fb,b2,9f),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("__replaceSelectedText",dc,1f,28,29),
	HX_("__replaceText",e1,ab,0d,aa),
	HX_("__startCursorTimer",ed,46,a3,83),
	HX_("__startTextInput",7b,ae,85,aa),
	HX_("__stopCursorTimer",0d,cd,6c,26),
	HX_("__stopTextInput",9b,6c,cb,a1),
	HX_("__updateLayout",b3,d8,3c,79),
	HX_("__updateMouseDrag",50,e6,a9,c1),
	HX_("__updateScrollH",72,d1,f8,83),
	HX_("__updateScrollV",80,d1,f8,83),
	HX_("__updateText",76,32,42,3e),
	HX_("__updateTransforms",10,f4,b0,50),
	HX_("get_antiAliasType",bf,cf,6a,ee),
	HX_("set_antiAliasType",cb,a7,d8,11),
	HX_("get_autoSize",d9,43,93,e4),
	HX_("set_autoSize",4d,67,8c,f9),
	HX_("get_background",37,1c,13,9c),
	HX_("set_background",ab,04,33,bc),
	HX_("get_backgroundColor",ac,1d,52,98),
	HX_("set_backgroundColor",b8,10,ef,d4),
	HX_("get_border",b5,bc,a1,54),
	HX_("set_border",29,5b,1f,58),
	HX_("get_borderColor",6e,f4,b6,97),
	HX_("set_borderColor",7a,71,82,93),
	HX_("get_bottomScrollV",55,03,f8,91),
	HX_("get_caretIndex",d8,3e,51,53),
	HX_("get_defaultTextFormat",bc,ca,8e,89),
	HX_("set_defaultTextFormat",c8,98,97,dd),
	HX_("get_displayAsPassword",e6,cd,44,69),
	HX_("set_displayAsPassword",f2,9b,4d,bd),
	HX_("get_embedFonts",74,4f,d7,04),
	HX_("set_embedFonts",e8,37,f7,24),
	HX_("get_gridFitType",9c,aa,f5,74),
	HX_("set_gridFitType",a8,27,c1,70),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_htmlText",c1,d3,51,c5),
	HX_("set_htmlText",35,f7,4a,da),
	HX_("get_length",af,04,8f,8f),
	HX_("get_maxChars",a2,a3,ea,a4),
	HX_("set_maxChars",16,c7,e3,b9),
	HX_("get_maxScrollH",a0,35,f2,10),
	HX_("get_maxScrollV",ae,35,f2,10),
	HX_("get_mouseWheelEnabled",c2,19,02,e4),
	HX_("set_mouseWheelEnabled",ce,e7,0a,38),
	HX_("get_multiline",c4,a6,75,5f),
	HX_("set_multiline",d0,88,7b,a4),
	HX_("get_numLines",e2,a5,2b,e7),
	HX_("get_restrict",45,7f,b8,a6),
	HX_("set_restrict",b9,a2,b1,bb),
	HX_("get_scrollH",b2,93,d2,b6),
	HX_("set_scrollH",be,9a,3f,c1),
	HX_("get_scrollV",c0,93,d2,b6),
	HX_("set_scrollV",cc,9a,3f,c1),
	HX_("get_selectable",df,3e,20,3a),
	HX_("set_selectable",53,27,40,5a),
	HX_("get_selectionBeginIndex",2c,26,6d,df),
	HX_("get_selectionEndIndex",7a,10,f0,c9),
	HX_("get_sharpness",58,f6,88,dc),
	HX_("set_sharpness",64,d8,8e,21),
	HX_("get_styleSheet",f7,c3,0b,72),
	HX_("set_styleSheet",6b,ac,2b,92),
	HX_("get_tabEnabled",f5,7e,fe,b5),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_textColor",4d,d5,ad,a4),
	HX_("set_textColor",59,b7,b3,e9),
	HX_("get_textWidth",f0,19,b4,24),
	HX_("get_textHeight",bd,10,32,af),
	HX_("get_type",43,ae,c3,cc),
	HX_("set_type",b7,07,21,7b),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_wordWrap",bd,c8,f4,b5),
	HX_("set_wordWrap",31,ec,ed,ca),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	HX_("stage_onMouseMove",76,bc,61,de),
	HX_("stage_onMouseUp",80,ac,07,d1),
	HX_("this_onAddedToStage",23,9e,ce,72),
	HX_("this_onEnterFrame",b5,0f,1f,8e),
	HX_("this_onFocusIn",1d,62,fb,dc),
	HX_("this_onFocusOut",56,0b,ff,7e),
	HX_("this_onKeyDown",e1,85,bf,37),
	HX_("this_onMouseDown",67,5d,aa,6d),
	HX_("this_onMouseWheel",f6,33,56,73),
	HX_("window_onKeyDown",f3,7d,3b,d1),
	HX_("window_onTextInput",ef,a0,6a,c0),
	::String(null()) };

static void TextField_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextField_obj::_hx___defaultTextFormat,"__defaultTextFormat");
	HX_MARK_MEMBER_NAME(TextField_obj::_hx___missingFontWarning,"__missingFontWarning");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextField_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextField_obj::_hx___defaultTextFormat,"__defaultTextFormat");
	HX_VISIT_MEMBER_NAME(TextField_obj::_hx___missingFontWarning,"__missingFontWarning");
};

#endif

::hx::Class TextField_obj::__mClass;

static ::String TextField_obj_sStaticFields[] = {
	HX_("__defaultTextFormat",c5,f0,d0,bd),
	HX_("__missingFontWarning",a7,0d,0e,1a),
	::String(null())
};

void TextField_obj::__register()
{
	TextField_obj _hx_dummy;
	TextField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text.TextField",ca,a8,d5,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextField_obj::__GetStatic;
	__mClass->mSetStaticField = &TextField_obj::__SetStatic;
	__mClass->mMarkFunc = TextField_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextField_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextField_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextField_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextField_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextField_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_138_boot)
HXDLIN( 138)		_hx___missingFontWarning =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace text
