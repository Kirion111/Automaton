#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_tooltips_ToolTip
#include <haxe/ui/tooltips/ToolTip.h>
#endif
#ifndef INCLUDED_haxe_ui_tooltips_ToolTipManager
#include <haxe/ui/tooltips/ToolTipManager.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b161232e6aa20de7_13_new,"haxe.ui.tooltips.ToolTipManager","new",0x95828fa8,"haxe.ui.tooltips.ToolTipManager.new","haxe/ui/tooltips/ToolTipManager.hx",13,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_39_registerTooltipRegion,"haxe.ui.tooltips.ToolTipManager","registerTooltipRegion",0x222e5f3c,"haxe.ui.tooltips.ToolTipManager.registerTooltipRegion","haxe/ui/tooltips/ToolTipManager.hx",39,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_53_unregisterTooltipRegion,"haxe.ui.tooltips.ToolTipManager","unregisterTooltipRegion",0xc66cf643,"haxe.ui.tooltips.ToolTipManager.unregisterTooltipRegion","haxe/ui/tooltips/ToolTipManager.hx",53,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_60_registerTooltip,"haxe.ui.tooltips.ToolTipManager","registerTooltip",0xfb959c28,"haxe.ui.tooltips.ToolTipManager.registerTooltip","haxe/ui/tooltips/ToolTipManager.hx",60,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_71_unregisterTooltip,"haxe.ui.tooltips.ToolTipManager","unregisterTooltip",0x3a65a3ef,"haxe.ui.tooltips.ToolTipManager.unregisterTooltip","haxe/ui/tooltips/ToolTipManager.hx",71,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_79_getTooltipOptions,"haxe.ui.tooltips.ToolTipManager","getTooltipOptions",0xce114119,"haxe.ui.tooltips.ToolTipManager.getTooltipOptions","haxe/ui/tooltips/ToolTipManager.hx",79,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_82_updateTooltipRenderer,"haxe.ui.tooltips.ToolTipManager","updateTooltipRenderer",0x63ba4ea5,"haxe.ui.tooltips.ToolTipManager.updateTooltipRenderer","haxe/ui/tooltips/ToolTipManager.hx",82,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_93_onScreenMouseMoveRegion,"haxe.ui.tooltips.ToolTipManager","onScreenMouseMoveRegion",0x81221f07,"haxe.ui.tooltips.ToolTipManager.onScreenMouseMoveRegion","haxe/ui/tooltips/ToolTipManager.hx",93,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_127_onTargetMouseOver,"haxe.ui.tooltips.ToolTipManager","onTargetMouseOver",0xc6667371,"haxe.ui.tooltips.ToolTipManager.onTargetMouseOver","haxe/ui/tooltips/ToolTipManager.hx",127,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_149_onTargetMouseMove,"haxe.ui.tooltips.ToolTipManager","onTargetMouseMove",0xc50ec52e,"haxe.ui.tooltips.ToolTipManager.onTargetMouseMove","haxe/ui/tooltips/ToolTipManager.hx",149,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_160_onTargetMouseOut,"haxe.ui.tooltips.ToolTipManager","onTargetMouseOut",0x1a253111,"haxe.ui.tooltips.ToolTipManager.onTargetMouseOut","haxe/ui/tooltips/ToolTipManager.hx",160,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_170_onDelayTimer,"haxe.ui.tooltips.ToolTipManager","onDelayTimer",0x0f87f6f9,"haxe.ui.tooltips.ToolTipManager.onDelayTimer","haxe/ui/tooltips/ToolTipManager.hx",170,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_181_onScreenMouseMove,"haxe.ui.tooltips.ToolTipManager","onScreenMouseMove",0xb03021b3,"haxe.ui.tooltips.ToolTipManager.onScreenMouseMove","haxe/ui/tooltips/ToolTipManager.hx",181,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_185_onScreenMouseDown,"haxe.ui.tooltips.ToolTipManager","onScreenMouseDown",0xaa3d3704,"haxe.ui.tooltips.ToolTipManager.onScreenMouseDown","haxe/ui/tooltips/ToolTipManager.hx",185,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_189_startTimer,"haxe.ui.tooltips.ToolTipManager","startTimer",0x7233d1bb,"haxe.ui.tooltips.ToolTipManager.startTimer","haxe/ui/tooltips/ToolTipManager.hx",189,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_193_stopTimer,"haxe.ui.tooltips.ToolTipManager","stopTimer",0x01c95dab,"haxe.ui.tooltips.ToolTipManager.stopTimer","haxe/ui/tooltips/ToolTipManager.hx",193,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_199_stopCurrent,"haxe.ui.tooltips.ToolTipManager","stopCurrent",0x0006ff9f,"haxe.ui.tooltips.ToolTipManager.stopCurrent","haxe/ui/tooltips/ToolTipManager.hx",199,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_210_createToolTip,"haxe.ui.tooltips.ToolTipManager","createToolTip",0x9df8e68f,"haxe.ui.tooltips.ToolTipManager.createToolTip","haxe/ui/tooltips/ToolTipManager.hx",210,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_218_reset,"haxe.ui.tooltips.ToolTipManager","reset",0x349b6b17,"haxe.ui.tooltips.ToolTipManager.reset","haxe/ui/tooltips/ToolTipManager.hx",218,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_246_showToolTipAt,"haxe.ui.tooltips.ToolTipManager","showToolTipAt",0x77618941,"haxe.ui.tooltips.ToolTipManager.showToolTipAt","haxe/ui/tooltips/ToolTipManager.hx",246,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_226_showToolTipAt,"haxe.ui.tooltips.ToolTipManager","showToolTipAt",0x77618941,"haxe.ui.tooltips.ToolTipManager.showToolTipAt","haxe/ui/tooltips/ToolTipManager.hx",226,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_287_showToolTipForComponent,"haxe.ui.tooltips.ToolTipManager","showToolTipForComponent",0xb1354242,"haxe.ui.tooltips.ToolTipManager.showToolTipForComponent","haxe/ui/tooltips/ToolTipManager.hx",287,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_256_showToolTipForComponent,"haxe.ui.tooltips.ToolTipManager","showToolTipForComponent",0xb1354242,"haxe.ui.tooltips.ToolTipManager.showToolTipForComponent","haxe/ui/tooltips/ToolTipManager.hx",256,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_319_showToolTipForRegion,"haxe.ui.tooltips.ToolTipManager","showToolTipForRegion",0xe60b7a4f,"haxe.ui.tooltips.ToolTipManager.showToolTipForRegion","haxe/ui/tooltips/ToolTipManager.hx",319,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_297_showToolTipForRegion,"haxe.ui.tooltips.ToolTipManager","showToolTipForRegion",0xe60b7a4f,"haxe.ui.tooltips.ToolTipManager.showToolTipForRegion","haxe/ui/tooltips/ToolTipManager.hx",297,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_329_positionToolTip,"haxe.ui.tooltips.ToolTipManager","positionToolTip",0x47a0ce82,"haxe.ui.tooltips.ToolTipManager.positionToolTip","haxe/ui/tooltips/ToolTipManager.hx",329,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_359_hideCurrentToolTip,"haxe.ui.tooltips.ToolTipManager","hideCurrentToolTip",0x49da63c4,"haxe.ui.tooltips.ToolTipManager.hideCurrentToolTip","haxe/ui/tooltips/ToolTipManager.hx",359,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_370_createToolTipRenderer,"haxe.ui.tooltips.ToolTipManager","createToolTipRenderer",0x9bb60ef2,"haxe.ui.tooltips.ToolTipManager.createToolTipRenderer","haxe/ui/tooltips/ToolTipManager.hx",370,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_21_get_instance,"haxe.ui.tooltips.ToolTipManager","get_instance",0x086deb56,"haxe.ui.tooltips.ToolTipManager.get_instance","haxe/ui/tooltips/ToolTipManager.hx",21,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_14_boot,"haxe.ui.tooltips.ToolTipManager","boot",0x34d423ea,"haxe.ui.tooltips.ToolTipManager.boot","haxe/ui/tooltips/ToolTipManager.hx",14,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_15_boot,"haxe.ui.tooltips.ToolTipManager","boot",0x34d423ea,"haxe.ui.tooltips.ToolTipManager.boot","haxe/ui/tooltips/ToolTipManager.hx",15,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_16_boot,"haxe.ui.tooltips.ToolTipManager","boot",0x34d423ea,"haxe.ui.tooltips.ToolTipManager.boot","haxe/ui/tooltips/ToolTipManager.hx",16,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_17_boot,"haxe.ui.tooltips.ToolTipManager","boot",0x34d423ea,"haxe.ui.tooltips.ToolTipManager.boot","haxe/ui/tooltips/ToolTipManager.hx",17,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_91_boot,"haxe.ui.tooltips.ToolTipManager","boot",0x34d423ea,"haxe.ui.tooltips.ToolTipManager.boot","haxe/ui/tooltips/ToolTipManager.hx",91,0x086a0a47)
namespace haxe{
namespace ui{
namespace tooltips{

void ToolTipManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b161232e6aa20de7_13_new)
HXLINE( 209)		this->_toolTipContents = null();
HXLINE( 208)		this->_toolTip = null();
HXLINE( 126)		this->_timer = null();
HXLINE( 125)		this->_currentComponent = null();
HXLINE(  92)		this->_currentRegion = null();
HXLINE(  33)		this->_toolTipRegions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  31)		this->_lastMouseEvent = null();
HXLINE(  36)		this->_toolTipOptions =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}

Dynamic ToolTipManager_obj::__CreateEmpty() { return new ToolTipManager_obj; }

void *ToolTipManager_obj::_hx_vtable = 0;

Dynamic ToolTipManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ToolTipManager_obj > _hx_result = new ToolTipManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ToolTipManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3668ea20;
}

 ::Dynamic ToolTipManager_obj::registerTooltipRegion( ::Dynamic options){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_39_registerTooltipRegion)
HXLINE(  40)		if ((this->_toolTipRegions->indexOf(options,null()) == -1)) {
HXLINE(  41)			this->_toolTipRegions->insert(0,options);
            		}
HXLINE(  46)		bool _hx_tmp;
HXDLIN(  46)		if ((this->_toolTipRegions->length > 0)) {
HXLINE(  46)			_hx_tmp = !(::haxe::ui::core::Screen_obj::get_instance()->hasEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_MOVE,this->onScreenMouseMoveRegion_dyn()));
            		}
            		else {
HXLINE(  46)			_hx_tmp = false;
            		}
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  47)			::haxe::ui::core::Screen_obj::get_instance()->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_MOVE,this->onScreenMouseMoveRegion_dyn(),-1000);
            		}
HXLINE(  50)		return options;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,registerTooltipRegion,return )

void ToolTipManager_obj::unregisterTooltipRegion( ::Dynamic options){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_53_unregisterTooltipRegion)
HXLINE(  54)		this->_toolTipRegions->remove(options);
HXLINE(  55)		if ((this->_toolTipRegions->length == 0)) {
HXLINE(  56)			::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_MOVE,this->onScreenMouseMoveRegion_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,unregisterTooltipRegion,(void))

void ToolTipManager_obj::registerTooltip( ::haxe::ui::core::Component target, ::Dynamic options){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_60_registerTooltip)
HXLINE(  61)		if (this->_toolTipOptions->exists(target)) {
HXLINE(  62)			return;
            		}
HXLINE(  65)		if (::hx::IsNull( options )) {
HXLINE(  65)			options =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE(  66)		if (::hx::IsNull( options->__Field(HX_("tipData",25,2d,50,7d),::hx::paccDynamic) )) {
HXLINE(  66)			options->__SetField(HX_("tipData",25,2d,50,7d), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("text",ad,cc,f9,4c),target->get_tooltip())),::hx::paccDynamic);
            		}
HXLINE(  67)		this->_toolTipOptions->set(target,options);
HXLINE(  68)		target->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OVER,this->onTargetMouseOver_dyn(),-100);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ToolTipManager_obj,registerTooltip,(void))

void ToolTipManager_obj::unregisterTooltip( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_71_unregisterTooltip)
HXLINE(  72)		target->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OVER,this->onTargetMouseOver_dyn());
HXLINE(  73)		target->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT,this->onTargetMouseOut_dyn());
HXLINE(  74)		target->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_MOVE,this->onTargetMouseMove_dyn());
HXLINE(  75)		this->_toolTipOptions->remove(target);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,unregisterTooltip,(void))

 ::Dynamic ToolTipManager_obj::getTooltipOptions( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_79_getTooltipOptions)
HXDLIN(  79)		return this->_toolTipOptions->get(target);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,getTooltipOptions,return )

void ToolTipManager_obj::updateTooltipRenderer( ::haxe::ui::core::Component target, ::haxe::ui::core::ItemRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_82_updateTooltipRenderer)
HXLINE(  83)		if (!(this->_toolTipOptions->exists(target))) {
HXLINE(  84)			return;
            		}
HXLINE(  87)		 ::Dynamic options = this->_toolTipOptions->get(target);
HXLINE(  88)		options->__SetField(HX_("renderer",43,c5,db,b2),renderer,::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ToolTipManager_obj,updateTooltipRenderer,(void))

void ToolTipManager_obj::onScreenMouseMoveRegion( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_93_onScreenMouseMoveRegion)
HXLINE(  94)		this->_lastMouseEvent = event;
HXLINE(  96)		bool found = false;
HXLINE(  97)		{
HXLINE(  97)			int _g = 0;
HXDLIN(  97)			::Array< ::Dynamic> _g1 = this->_toolTipRegions;
HXDLIN(  97)			while((_g < _g1->length)){
HXLINE(  97)				 ::Dynamic region = _g1->__get(_g);
HXDLIN(  97)				_g = (_g + 1);
HXLINE(  98)				::haxe::ui::tooltips::ToolTipManager_obj::calcRect->set(region->__Field(HX_("left",07,08,b0,47),::hx::paccDynamic),region->__Field(HX_("top",95,66,58,00),::hx::paccDynamic),region->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic),region->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic));
HXLINE(  99)				if (::haxe::ui::tooltips::ToolTipManager_obj::calcRect->containsPoint(event->screenX,event->screenY)) {
HXLINE( 100)					found = true;
HXLINE( 101)					if (::hx::IsNotEq( this->_currentRegion,region )) {
HXLINE( 102)						if (::hx::IsNotNull( this->_currentRegion )) {
HXLINE( 103)							this->hideCurrentToolTip();
            						}
HXLINE( 105)						this->_currentRegion = region;
HXLINE( 106)						this->stopTimer();
HXLINE( 107)						this->startTimer();
            					}
            					else {
HXLINE( 109)						bool _hx_tmp;
HXDLIN( 109)						if (::hx::IsNotNull( this->_toolTip )) {
HXLINE( 109)							_hx_tmp = ::haxe::ui::tooltips::ToolTipManager_obj::followMouse;
            						}
            						else {
HXLINE( 109)							_hx_tmp = false;
            						}
HXDLIN( 109)						if (_hx_tmp) {
HXLINE( 110)							this->positionToolTip(this->_lastMouseEvent->screenX,this->_lastMouseEvent->screenY);
            						}
            					}
HXLINE( 113)					goto _hx_goto_7;
            				}
            			}
            			_hx_goto_7:;
            		}
HXLINE( 116)		if (!(found)) {
HXLINE( 117)			if (::hx::IsNotNull( this->_currentRegion )) {
HXLINE( 118)				this->stopTimer();
HXLINE( 119)				this->hideCurrentToolTip();
            			}
HXLINE( 121)			this->_currentRegion = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,onScreenMouseMoveRegion,(void))

void ToolTipManager_obj::onTargetMouseOver( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_127_onTargetMouseOver)
HXLINE( 128)		bool _hx_tmp;
HXDLIN( 128)		bool _hx_tmp1;
HXDLIN( 128)		bool _hx_tmp2;
HXDLIN( 128)		if (::hx::IsNotNull( this->_currentComponent )) {
HXLINE( 128)			_hx_tmp2 = ::hx::IsNotNull( this->_currentComponent->get_style() );
            		}
            		else {
HXLINE( 128)			_hx_tmp2 = false;
            		}
HXDLIN( 128)		if (_hx_tmp2) {
HXLINE( 128)			_hx_tmp1 = ::hx::IsNotNull( this->_currentComponent->get_style()->pointerEvents );
            		}
            		else {
HXLINE( 128)			_hx_tmp1 = false;
            		}
HXDLIN( 128)		if (_hx_tmp1) {
HXLINE( 128)			_hx_tmp = (this->_currentComponent->get_style()->pointerEvents != HX_("none",b8,12,0a,49));
            		}
            		else {
HXLINE( 128)			_hx_tmp = false;
            		}
HXDLIN( 128)		if (_hx_tmp) {
HXLINE( 129)			bool _hx_tmp;
HXDLIN( 129)			if (::hx::IsInstanceNotEq( this->_currentComponent,event->target )) {
HXLINE( 129)				_hx_tmp = this->_currentComponent->containsChildComponent(event->target,true);
            			}
            			else {
HXLINE( 129)				_hx_tmp = true;
            			}
HXDLIN( 129)			if (_hx_tmp) {
HXLINE( 130)				return;
            			}
            		}
HXLINE( 134)		if (::hx::IsNotNull( this->_toolTip )) {
HXLINE( 135)			this->_toolTip->hide();
            		}
HXLINE( 138)		event->cancel();
HXLINE( 139)		this->stopCurrent();
HXLINE( 141)		this->_lastMouseEvent = event;
HXLINE( 142)		this->_currentComponent = event->target;
HXLINE( 143)		event->target->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT,this->onTargetMouseOut_dyn(),-100);
HXLINE( 144)		event->target->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_MOVE,this->onTargetMouseMove_dyn(),-100);
HXLINE( 145)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_MOVE,this->onScreenMouseMove_dyn(),-100);
HXLINE( 146)		this->startTimer();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,onTargetMouseOver,(void))

void ToolTipManager_obj::onTargetMouseMove( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_149_onTargetMouseMove)
HXLINE( 150)		bool _hx_tmp;
HXDLIN( 150)		if (::hx::IsNotNull( this->_toolTip )) {
HXLINE( 150)			_hx_tmp = (this->_toolTip->get_hidden() == false);
            		}
            		else {
HXLINE( 150)			_hx_tmp = false;
            		}
HXDLIN( 150)		if (_hx_tmp) {
HXLINE( 151)			if (::haxe::ui::tooltips::ToolTipManager_obj::followMouse) {
HXLINE( 152)				this->positionToolTip(null(),null());
            			}
HXLINE( 154)			return;
            		}
HXLINE( 156)		this->stopTimer();
HXLINE( 157)		this->startTimer();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,onTargetMouseMove,(void))

void ToolTipManager_obj::onTargetMouseOut( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_160_onTargetMouseOut)
HXLINE( 161)		bool _hx_tmp;
HXDLIN( 161)		bool _hx_tmp1;
HXDLIN( 161)		bool _hx_tmp2;
HXDLIN( 161)		if (::hx::IsNotNull( this->_currentComponent )) {
HXLINE( 161)			_hx_tmp2 = ::hx::IsNotNull( this->_currentComponent->get_style() );
            		}
            		else {
HXLINE( 161)			_hx_tmp2 = false;
            		}
HXDLIN( 161)		if (_hx_tmp2) {
HXLINE( 161)			_hx_tmp1 = ::hx::IsNotNull( this->_currentComponent->get_style()->pointerEvents );
            		}
            		else {
HXLINE( 161)			_hx_tmp1 = false;
            		}
HXDLIN( 161)		if (_hx_tmp1) {
HXLINE( 161)			_hx_tmp = (this->_currentComponent->get_style()->pointerEvents != HX_("none",b8,12,0a,49));
            		}
            		else {
HXLINE( 161)			_hx_tmp = false;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 162)			if (event->target->hitTest(event->screenX,event->screenY,null())) {
HXLINE( 163)				return;
            			}
            		}
HXLINE( 166)		this->stopCurrent();
HXLINE( 167)		this->hideCurrentToolTip();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,onTargetMouseOut,(void))

void ToolTipManager_obj::onDelayTimer(){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_170_onDelayTimer)
HXLINE( 171)		this->_timer->stop();
HXLINE( 172)		this->_timer = null();
HXLINE( 173)		if (::hx::IsNotNull( this->_currentRegion )) {
HXLINE( 174)			this->showToolTipForRegion(this->_currentRegion);
            		}
            		else {
HXLINE( 175)			if (::hx::IsNotNull( this->_currentComponent )) {
HXLINE( 176)				this->showToolTipForComponent(this->_currentComponent);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,onDelayTimer,(void))

void ToolTipManager_obj::onScreenMouseMove( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_181_onScreenMouseMove)
HXDLIN( 181)		this->_lastMouseEvent = event;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,onScreenMouseMove,(void))

void ToolTipManager_obj::onScreenMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_185_onScreenMouseDown)
HXDLIN( 185)		this->hideCurrentToolTip();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,onScreenMouseDown,(void))

void ToolTipManager_obj::startTimer(){
            	HX_GC_STACKFRAME(&_hx_pos_b161232e6aa20de7_189_startTimer)
HXDLIN( 189)		this->_timer =  ::haxe::ui::util::Timer_obj::__alloc( HX_CTX ,::haxe::ui::tooltips::ToolTipManager_obj::defaultDelay,this->onDelayTimer_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,startTimer,(void))

void ToolTipManager_obj::stopTimer(){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_193_stopTimer)
HXDLIN( 193)		if (::hx::IsNotNull( this->_timer )) {
HXLINE( 194)			this->_timer->stop();
HXLINE( 195)			this->_timer = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,stopTimer,(void))

void ToolTipManager_obj::stopCurrent(){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_199_stopCurrent)
HXLINE( 200)		if (::hx::IsNotNull( this->_currentComponent )) {
HXLINE( 201)			this->_currentComponent->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT,this->onTargetMouseOut_dyn());
HXLINE( 202)			this->_currentComponent = null();
            		}
HXLINE( 204)		this->stopTimer();
HXLINE( 205)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_MOVE,this->onScreenMouseMove_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,stopCurrent,(void))

void ToolTipManager_obj::createToolTip(){
            	HX_GC_STACKFRAME(&_hx_pos_b161232e6aa20de7_210_createToolTip)
HXLINE( 211)		if (::hx::IsNotNull( this->_toolTip )) {
HXLINE( 212)			return;
            		}
HXLINE( 215)		this->_toolTip =  ::haxe::ui::tooltips::ToolTip_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,createToolTip,(void))

void ToolTipManager_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_218_reset)
HXLINE( 219)		if (::hx::IsNotNull( this->_toolTip )) {
HXLINE( 220)			::haxe::ui::core::Screen_obj::get_instance()->removeComponent(this->_toolTip,null(),null());
            		}
HXLINE( 222)		this->_toolTip = null();
HXLINE( 223)		this->_toolTipContents = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,reset,(void))

void ToolTipManager_obj::showToolTipAt(Float left,Float top, ::Dynamic options){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::tooltips::ToolTipManager,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_246_showToolTipAt)
HXLINE( 246)			if ((::haxe::ui::tooltips::ToolTipManager_obj::fade == true)) {
HXLINE( 247)				_gthis->_toolTip->fadeIn(null(),null());
            			}
            			else {
HXLINE( 249)				_gthis->_toolTip->show();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_226_showToolTipAt)
HXDLIN( 226)		 ::haxe::ui::tooltips::ToolTipManager _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 227)		this->createToolTip();
HXLINE( 228)		this->_toolTip->hide();
HXLINE( 230)		 ::haxe::ui::core::ItemRenderer renderer = this->createToolTipRenderer(options);
HXLINE( 231)		 ::haxe::ui::tooltips::ToolTip _this = this->_toolTip;
HXDLIN( 231)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 231)		if (::hx::IsNull( _this->_children )) {
HXLINE( 231)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 231)			_hx_tmp = _this->_children;
            		}
HXDLIN( 231)		if (::hx::IsInstanceNotEq( _hx_tmp->__get(0).StaticCast<  ::haxe::ui::core::Component >(),renderer )) {
HXLINE( 232)			 ::haxe::ui::tooltips::ToolTip _this = this->_toolTip;
HXDLIN( 232)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 232)			if (::hx::IsNull( _this->_children )) {
HXLINE( 232)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 232)				_hx_tmp = _this->_children;
            			}
HXDLIN( 232)			if ((_hx_tmp->length > 0)) {
HXLINE( 233)				this->_toolTip->removeComponentAt(0,false,null());
            			}
HXLINE( 235)			this->_toolTip->addComponent(renderer);
            		}
HXLINE( 238)		renderer->set_data( ::Dynamic(options->__Field(HX_("tipData",25,2d,50,7d),::hx::paccDynamic)));
HXLINE( 240)		::haxe::ui::core::Screen_obj::get_instance()->addComponent(this->_toolTip);
HXLINE( 241)		 ::haxe::ui::core::Screen _hx_tmp1 = ::haxe::ui::core::Screen_obj::get_instance();
HXDLIN( 241)		 ::haxe::ui::tooltips::ToolTip _hx_tmp2 = this->_toolTip;
HXDLIN( 241)		_hx_tmp1->setComponentIndex(_hx_tmp2,(::haxe::ui::core::Screen_obj::get_instance()->rootComponents->length - 1));
HXLINE( 242)		this->_toolTip->validateNow();
HXLINE( 244)		this->positionToolTip(left,top);
HXLINE( 245)		::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE( 253)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN,this->onScreenMouseDown_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(ToolTipManager_obj,showToolTipAt,(void))

void ToolTipManager_obj::showToolTipForComponent( ::haxe::ui::core::Component component){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::tooltips::ToolTipManager,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_287_showToolTipForComponent)
HXLINE( 287)			if ((::haxe::ui::tooltips::ToolTipManager_obj::fade == true)) {
HXLINE( 288)				_gthis->_toolTip->fadeIn(null(),null());
            			}
            			else {
HXLINE( 290)				_gthis->_toolTip->show();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_256_showToolTipForComponent)
HXDLIN( 256)		 ::haxe::ui::tooltips::ToolTipManager _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 257)		if (::hx::IsNull( component )) {
HXLINE( 258)			return;
            		}
HXLINE( 261)		bool _hx_tmp;
HXDLIN( 261)		if ((component->get_disabled() != true)) {
HXLINE( 261)			_hx_tmp = (component->get_hidden() == true);
            		}
            		else {
HXLINE( 261)			_hx_tmp = true;
            		}
HXDLIN( 261)		if (_hx_tmp) {
HXLINE( 262)			this->stopCurrent();
HXLINE( 263)			return;
            		}
HXLINE( 266)		this->createToolTip();
HXLINE( 268)		this->_toolTip->hide();
HXLINE( 270)		 ::Dynamic options = this->_toolTipOptions->get(component);
HXLINE( 271)		 ::haxe::ui::core::ItemRenderer renderer = this->createToolTipRenderer(options);
HXLINE( 272)		 ::haxe::ui::tooltips::ToolTip _this = this->_toolTip;
HXDLIN( 272)		::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 272)		if (::hx::IsNull( _this->_children )) {
HXLINE( 272)			_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 272)			_hx_tmp1 = _this->_children;
            		}
HXDLIN( 272)		if (::hx::IsInstanceNotEq( _hx_tmp1->__get(0).StaticCast<  ::haxe::ui::core::Component >(),renderer )) {
HXLINE( 273)			 ::haxe::ui::tooltips::ToolTip _this = this->_toolTip;
HXDLIN( 273)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 273)			if (::hx::IsNull( _this->_children )) {
HXLINE( 273)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 273)				_hx_tmp = _this->_children;
            			}
HXDLIN( 273)			if ((_hx_tmp->length > 0)) {
HXLINE( 274)				this->_toolTip->removeComponentAt(0,false,null());
            			}
HXLINE( 276)			this->_toolTip->addComponent(renderer);
            		}
HXLINE( 279)		renderer->set_data( ::Dynamic(options->__Field(HX_("tipData",25,2d,50,7d),::hx::paccDynamic)));
HXLINE( 281)		::haxe::ui::core::Screen_obj::get_instance()->addComponent(this->_toolTip);
HXLINE( 282)		 ::haxe::ui::core::Screen _hx_tmp2 = ::haxe::ui::core::Screen_obj::get_instance();
HXDLIN( 282)		 ::haxe::ui::tooltips::ToolTip _hx_tmp3 = this->_toolTip;
HXDLIN( 282)		_hx_tmp2->setComponentIndex(_hx_tmp3,(::haxe::ui::core::Screen_obj::get_instance()->rootComponents->length - 1));
HXLINE( 283)		this->_toolTip->validateNow();
HXLINE( 285)		this->positionToolTip(null(),null());
HXLINE( 286)		::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE( 294)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN,this->onScreenMouseDown_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,showToolTipForComponent,(void))

void ToolTipManager_obj::showToolTipForRegion( ::Dynamic region){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::tooltips::ToolTipManager,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_319_showToolTipForRegion)
HXLINE( 319)			if ((::haxe::ui::tooltips::ToolTipManager_obj::fade == true)) {
HXLINE( 320)				_gthis->_toolTip->fadeIn(null(),null());
            			}
            			else {
HXLINE( 322)				_gthis->_toolTip->show();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_297_showToolTipForRegion)
HXDLIN( 297)		 ::haxe::ui::tooltips::ToolTipManager _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 298)		this->createToolTip();
HXLINE( 300)		this->_toolTip->hide();
HXLINE( 302)		 ::Dynamic options = region;
HXLINE( 303)		 ::haxe::ui::core::ItemRenderer renderer = this->createToolTipRenderer(options);
HXLINE( 304)		 ::haxe::ui::tooltips::ToolTip _this = this->_toolTip;
HXDLIN( 304)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 304)		if (::hx::IsNull( _this->_children )) {
HXLINE( 304)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 304)			_hx_tmp = _this->_children;
            		}
HXDLIN( 304)		if (::hx::IsInstanceNotEq( _hx_tmp->__get(0).StaticCast<  ::haxe::ui::core::Component >(),renderer )) {
HXLINE( 305)			 ::haxe::ui::tooltips::ToolTip _this = this->_toolTip;
HXDLIN( 305)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 305)			if (::hx::IsNull( _this->_children )) {
HXLINE( 305)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 305)				_hx_tmp = _this->_children;
            			}
HXDLIN( 305)			if ((_hx_tmp->length > 0)) {
HXLINE( 306)				this->_toolTip->removeComponentAt(0,false,null());
            			}
HXLINE( 308)			this->_toolTip->addComponent(renderer);
            		}
HXLINE( 311)		renderer->set_data( ::Dynamic(options->__Field(HX_("tipData",25,2d,50,7d),::hx::paccDynamic)));
HXLINE( 313)		::haxe::ui::core::Screen_obj::get_instance()->addComponent(this->_toolTip);
HXLINE( 314)		 ::haxe::ui::core::Screen _hx_tmp1 = ::haxe::ui::core::Screen_obj::get_instance();
HXDLIN( 314)		 ::haxe::ui::tooltips::ToolTip _hx_tmp2 = this->_toolTip;
HXDLIN( 314)		_hx_tmp1->setComponentIndex(_hx_tmp2,(::haxe::ui::core::Screen_obj::get_instance()->rootComponents->length - 1));
HXLINE( 315)		this->_toolTip->validateNow();
HXLINE( 317)		this->positionToolTip(this->_lastMouseEvent->screenX,this->_lastMouseEvent->screenY);
HXLINE( 318)		::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE( 326)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN,this->onScreenMouseDown_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,showToolTipForRegion,(void))

void ToolTipManager_obj::positionToolTip( ::Dynamic left, ::Dynamic top){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_329_positionToolTip)
HXLINE( 330)		 ::Dynamic x = this->_toolTip->get_marginLeft();
HXLINE( 331)		 ::Dynamic y = this->_toolTip->get_marginTop();
HXLINE( 332)		if (::hx::IsNull( left )) {
HXLINE( 333)			x = (x + this->_lastMouseEvent->screenX);
            		}
            		else {
HXLINE( 335)			x = (x + left);
            		}
HXLINE( 337)		if (::hx::IsNull( top )) {
HXLINE( 338)			y = (y + this->_lastMouseEvent->screenY);
            		}
            		else {
HXLINE( 340)			y = (y + top);
            		}
HXLINE( 342)		Float w = this->_toolTip->get_width();
HXLINE( 343)		Float h = this->_toolTip->get_height();
HXLINE( 345)		Float maxX = ::haxe::ui::core::Screen_obj::get_instance()->get_width();
HXLINE( 346)		Float maxY = ::haxe::ui::core::Screen_obj::get_instance()->get_height();
HXLINE( 348)		if (((x + w) > maxX)) {
HXLINE( 349)			x = (( (Float)(x) ) - w);
            		}
HXLINE( 351)		if (((y + h) > maxY)) {
HXLINE( 352)			Float y1 = (this->_lastMouseEvent->screenY - h);
HXDLIN( 352)			y = (y1 - (( (Float)(this->_toolTip->get_marginTop()) ) / ( (Float)(2) )));
            		}
HXLINE( 355)		 ::haxe::ui::tooltips::ToolTip _hx_tmp = this->_toolTip;
HXDLIN( 355)		_hx_tmp->set_left((( (Float)(x) ) * ::haxe::ui::Toolkit_obj::get_scale()));
HXLINE( 356)		 ::haxe::ui::tooltips::ToolTip _hx_tmp1 = this->_toolTip;
HXDLIN( 356)		_hx_tmp1->set_top((( (Float)(y) ) * ::haxe::ui::Toolkit_obj::get_scale()));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ToolTipManager_obj,positionToolTip,(void))

void ToolTipManager_obj::hideCurrentToolTip(){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_359_hideCurrentToolTip)
HXLINE( 360)		if (::hx::IsNotNull( this->_toolTip )) {
HXLINE( 361)			if ((::haxe::ui::tooltips::ToolTipManager_obj::fade == true)) {
HXLINE( 362)				this->_toolTip->fadeOut(null(),null());
            			}
            			else {
HXLINE( 364)				this->_toolTip->hide();
            			}
            		}
HXLINE( 367)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN,this->onScreenMouseDown_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,hideCurrentToolTip,(void))

 ::haxe::ui::core::ItemRenderer ToolTipManager_obj::createToolTipRenderer( ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_b161232e6aa20de7_370_createToolTipRenderer)
HXLINE( 371)		if (::hx::IsNotNull( options->__Field(HX_("renderer",43,c5,db,b2),::hx::paccDynamic) )) {
HXLINE( 372)			return ( ( ::haxe::ui::core::ItemRenderer)(options->__Field(HX_("renderer",43,c5,db,b2),::hx::paccDynamic)) );
            		}
HXLINE( 375)		if (::hx::IsNotNull( ::haxe::ui::tooltips::ToolTipManager_obj::defaultRenderer )) {
HXLINE( 376)			return ::haxe::ui::tooltips::ToolTipManager_obj::defaultRenderer;
            		}
HXLINE( 379)		if (::hx::IsNotNull( this->_toolTipContents )) {
HXLINE( 380)			return this->_toolTipContents;
            		}
HXLINE( 383)		this->_toolTipContents =  ::haxe::ui::core::ItemRenderer_obj::__alloc( HX_CTX );
HXLINE( 384)		 ::haxe::ui::components::Label label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 385)		label->set_id(HX_("text",ad,cc,f9,4c));
HXLINE( 386)		this->_toolTipContents->addComponent(label);
HXLINE( 387)		return this->_toolTipContents;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,createToolTipRenderer,return )

int ToolTipManager_obj::defaultDelay;

 ::haxe::ui::core::ItemRenderer ToolTipManager_obj::defaultRenderer;

bool ToolTipManager_obj::fade;

bool ToolTipManager_obj::followMouse;

 ::haxe::ui::tooltips::ToolTipManager ToolTipManager_obj::_instance;

 ::haxe::ui::tooltips::ToolTipManager ToolTipManager_obj::instance;

 ::haxe::ui::tooltips::ToolTipManager ToolTipManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_b161232e6aa20de7_21_get_instance)
HXLINE(  22)		if (::hx::IsNull( ::haxe::ui::tooltips::ToolTipManager_obj::_instance )) {
HXLINE(  23)			::haxe::ui::tooltips::ToolTipManager_obj::_instance =  ::haxe::ui::tooltips::ToolTipManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  25)		return ::haxe::ui::tooltips::ToolTipManager_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,get_instance,return )

 ::haxe::ui::geom::Rectangle ToolTipManager_obj::calcRect;


::hx::ObjectPtr< ToolTipManager_obj > ToolTipManager_obj::__new() {
	::hx::ObjectPtr< ToolTipManager_obj > __this = new ToolTipManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ToolTipManager_obj > ToolTipManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ToolTipManager_obj *__this = (ToolTipManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ToolTipManager_obj), true, "haxe.ui.tooltips.ToolTipManager"));
	*(void **)__this = ToolTipManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ToolTipManager_obj::ToolTipManager_obj()
{
}

void ToolTipManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ToolTipManager);
	HX_MARK_MEMBER_NAME(_lastMouseEvent,"_lastMouseEvent");
	HX_MARK_MEMBER_NAME(_toolTipOptions,"_toolTipOptions");
	HX_MARK_MEMBER_NAME(_toolTipRegions,"_toolTipRegions");
	HX_MARK_MEMBER_NAME(_currentRegion,"_currentRegion");
	HX_MARK_MEMBER_NAME(_currentComponent,"_currentComponent");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_toolTip,"_toolTip");
	HX_MARK_MEMBER_NAME(_toolTipContents,"_toolTipContents");
	HX_MARK_END_CLASS();
}

void ToolTipManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lastMouseEvent,"_lastMouseEvent");
	HX_VISIT_MEMBER_NAME(_toolTipOptions,"_toolTipOptions");
	HX_VISIT_MEMBER_NAME(_toolTipRegions,"_toolTipRegions");
	HX_VISIT_MEMBER_NAME(_currentRegion,"_currentRegion");
	HX_VISIT_MEMBER_NAME(_currentComponent,"_currentComponent");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_toolTip,"_toolTip");
	HX_VISIT_MEMBER_NAME(_toolTipContents,"_toolTipContents");
}

::hx::Val ToolTipManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { return ::hx::Val( _timer ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_toolTip") ) { return ::hx::Val( _toolTip ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopTimer") ) { return ::hx::Val( stopTimer_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startTimer") ) { return ::hx::Val( startTimer_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stopCurrent") ) { return ::hx::Val( stopCurrent_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onDelayTimer") ) { return ::hx::Val( onDelayTimer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createToolTip") ) { return ::hx::Val( createToolTip_dyn() ); }
		if (HX_FIELD_EQ(inName,"showToolTipAt") ) { return ::hx::Val( showToolTipAt_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currentRegion") ) { return ::hx::Val( _currentRegion ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_lastMouseEvent") ) { return ::hx::Val( _lastMouseEvent ); }
		if (HX_FIELD_EQ(inName,"_toolTipOptions") ) { return ::hx::Val( _toolTipOptions ); }
		if (HX_FIELD_EQ(inName,"_toolTipRegions") ) { return ::hx::Val( _toolTipRegions ); }
		if (HX_FIELD_EQ(inName,"registerTooltip") ) { return ::hx::Val( registerTooltip_dyn() ); }
		if (HX_FIELD_EQ(inName,"positionToolTip") ) { return ::hx::Val( positionToolTip_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onTargetMouseOut") ) { return ::hx::Val( onTargetMouseOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"_toolTipContents") ) { return ::hx::Val( _toolTipContents ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unregisterTooltip") ) { return ::hx::Val( unregisterTooltip_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTooltipOptions") ) { return ::hx::Val( getTooltipOptions_dyn() ); }
		if (HX_FIELD_EQ(inName,"_currentComponent") ) { return ::hx::Val( _currentComponent ); }
		if (HX_FIELD_EQ(inName,"onTargetMouseOver") ) { return ::hx::Val( onTargetMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"onTargetMouseMove") ) { return ::hx::Val( onTargetMouseMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"onScreenMouseMove") ) { return ::hx::Val( onScreenMouseMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"onScreenMouseDown") ) { return ::hx::Val( onScreenMouseDown_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hideCurrentToolTip") ) { return ::hx::Val( hideCurrentToolTip_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"showToolTipForRegion") ) { return ::hx::Val( showToolTipForRegion_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"registerTooltipRegion") ) { return ::hx::Val( registerTooltipRegion_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateTooltipRenderer") ) { return ::hx::Val( updateTooltipRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"createToolTipRenderer") ) { return ::hx::Val( createToolTipRenderer_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"unregisterTooltipRegion") ) { return ::hx::Val( unregisterTooltipRegion_dyn() ); }
		if (HX_FIELD_EQ(inName,"onScreenMouseMoveRegion") ) { return ::hx::Val( onScreenMouseMoveRegion_dyn() ); }
		if (HX_FIELD_EQ(inName,"showToolTipForComponent") ) { return ::hx::Val( showToolTipForComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ToolTipManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fade") ) { outValue = ( fade ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		if (HX_FIELD_EQ(inName,"calcRect") ) { outValue = ( calcRect ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"followMouse") ) { outValue = ( followMouse ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultDelay") ) { outValue = ( defaultDelay ); return true; }
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultRenderer") ) { outValue = ( defaultRenderer ); return true; }
	}
	return false;
}

::hx::Val ToolTipManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast<  ::haxe::ui::util::Timer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_toolTip") ) { _toolTip=inValue.Cast<  ::haxe::ui::tooltips::ToolTip >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currentRegion") ) { _currentRegion=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_lastMouseEvent") ) { _lastMouseEvent=inValue.Cast<  ::haxe::ui::events::MouseEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toolTipOptions") ) { _toolTipOptions=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toolTipRegions") ) { _toolTipRegions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_toolTipContents") ) { _toolTipContents=inValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentComponent") ) { _currentComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ToolTipManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fade") ) { fade=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::tooltips::ToolTipManager >(); return true; }
		if (HX_FIELD_EQ(inName,"calcRect") ) { calcRect=ioValue.Cast<  ::haxe::ui::geom::Rectangle >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::tooltips::ToolTipManager >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"followMouse") ) { followMouse=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultDelay") ) { defaultDelay=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultRenderer") ) { defaultRenderer=ioValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return true; }
	}
	return false;
}

void ToolTipManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_lastMouseEvent",4a,9a,78,50));
	outFields->push(HX_("_toolTipOptions",5a,f1,0a,ef));
	outFields->push(HX_("_toolTipRegions",fb,d2,a8,89));
	outFields->push(HX_("_currentRegion",4e,32,3b,22));
	outFields->push(HX_("_currentComponent",a3,53,ff,9a));
	outFields->push(HX_("_timer",06,07,1d,0c));
	outFields->push(HX_("_toolTip",64,be,2c,a4));
	outFields->push(HX_("_toolTipContents",9e,83,3d,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ToolTipManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::events::MouseEvent */ ,(int)offsetof(ToolTipManager_obj,_lastMouseEvent),HX_("_lastMouseEvent",4a,9a,78,50)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(ToolTipManager_obj,_toolTipOptions),HX_("_toolTipOptions",5a,f1,0a,ef)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ToolTipManager_obj,_toolTipRegions),HX_("_toolTipRegions",fb,d2,a8,89)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ToolTipManager_obj,_currentRegion),HX_("_currentRegion",4e,32,3b,22)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ToolTipManager_obj,_currentComponent),HX_("_currentComponent",a3,53,ff,9a)},
	{::hx::fsObject /*  ::haxe::ui::util::Timer */ ,(int)offsetof(ToolTipManager_obj,_timer),HX_("_timer",06,07,1d,0c)},
	{::hx::fsObject /*  ::haxe::ui::tooltips::ToolTip */ ,(int)offsetof(ToolTipManager_obj,_toolTip),HX_("_toolTip",64,be,2c,a4)},
	{::hx::fsObject /*  ::haxe::ui::core::ItemRenderer */ ,(int)offsetof(ToolTipManager_obj,_toolTipContents),HX_("_toolTipContents",9e,83,3d,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ToolTipManager_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ToolTipManager_obj::defaultDelay,HX_("defaultDelay",02,13,82,8c)},
	{::hx::fsObject /*  ::haxe::ui::core::ItemRenderer */ ,(void *) &ToolTipManager_obj::defaultRenderer,HX_("defaultRenderer",24,83,e9,db)},
	{::hx::fsBool,(void *) &ToolTipManager_obj::fade,HX_("fade",7c,b5,b5,43)},
	{::hx::fsBool,(void *) &ToolTipManager_obj::followMouse,HX_("followMouse",f4,1a,e2,13)},
	{::hx::fsObject /*  ::haxe::ui::tooltips::ToolTipManager */ ,(void *) &ToolTipManager_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ui::tooltips::ToolTipManager */ ,(void *) &ToolTipManager_obj::instance,HX_("instance",95,1f,e1,59)},
	{::hx::fsObject /*  ::haxe::ui::geom::Rectangle */ ,(void *) &ToolTipManager_obj::calcRect,HX_("calcRect",59,00,db,45)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ToolTipManager_obj_sMemberFields[] = {
	HX_("_lastMouseEvent",4a,9a,78,50),
	HX_("_toolTipOptions",5a,f1,0a,ef),
	HX_("_toolTipRegions",fb,d2,a8,89),
	HX_("registerTooltipRegion",f4,2d,b6,7b),
	HX_("unregisterTooltipRegion",fb,e2,8f,6c),
	HX_("registerTooltip",e0,10,a1,1d),
	HX_("unregisterTooltip",a7,b6,c1,8d),
	HX_("getTooltipOptions",d1,53,6d,21),
	HX_("updateTooltipRenderer",5d,1d,42,bd),
	HX_("_currentRegion",4e,32,3b,22),
	HX_("onScreenMouseMoveRegion",bf,0b,45,27),
	HX_("_currentComponent",a3,53,ff,9a),
	HX_("_timer",06,07,1d,0c),
	HX_("onTargetMouseOver",29,86,c2,19),
	HX_("onTargetMouseMove",e6,d7,6a,18),
	HX_("onTargetMouseOut",59,dd,1f,c2),
	HX_("onDelayTimer",41,df,14,16),
	HX_("onScreenMouseMove",6b,34,8c,03),
	HX_("onScreenMouseDown",bc,49,99,fd),
	HX_("startTimer",03,98,4c,2c),
	HX_("stopTimer",63,f8,77,20),
	HX_("stopCurrent",57,b8,9b,1b),
	HX_("_toolTip",64,be,2c,a4),
	HX_("_toolTipContents",9e,83,3d,4b),
	HX_("createToolTip",47,3d,b7,52),
	HX_("reset",cf,49,c8,e6),
	HX_("showToolTipAt",f9,df,1f,2c),
	HX_("showToolTipForComponent",fa,2e,58,57),
	HX_("showToolTipForRegion",97,ea,a5,73),
	HX_("positionToolTip",3a,43,ac,69),
	HX_("hideCurrentToolTip",0c,b2,0e,e7),
	HX_("createToolTipRenderer",aa,dd,3d,f5),
	::String(null()) };

static void ToolTipManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::defaultDelay,"defaultDelay");
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::defaultRenderer,"defaultRenderer");
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::fade,"fade");
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::followMouse,"followMouse");
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::calcRect,"calcRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ToolTipManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::defaultDelay,"defaultDelay");
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::defaultRenderer,"defaultRenderer");
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::fade,"fade");
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::followMouse,"followMouse");
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::calcRect,"calcRect");
};

#endif

::hx::Class ToolTipManager_obj::__mClass;

static ::String ToolTipManager_obj_sStaticFields[] = {
	HX_("defaultDelay",02,13,82,8c),
	HX_("defaultRenderer",24,83,e9,db),
	HX_("fade",7c,b5,b5,43),
	HX_("followMouse",f4,1a,e2,13),
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	HX_("calcRect",59,00,db,45),
	::String(null())
};

void ToolTipManager_obj::__register()
{
	ToolTipManager_obj _hx_dummy;
	ToolTipManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.tooltips.ToolTipManager",b6,db,4f,97);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ToolTipManager_obj::__GetStatic;
	__mClass->mSetStaticField = &ToolTipManager_obj::__SetStatic;
	__mClass->mMarkFunc = ToolTipManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ToolTipManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ToolTipManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ToolTipManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ToolTipManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ToolTipManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ToolTipManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ToolTipManager_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_14_boot)
HXDLIN(  14)		defaultDelay = 500;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_15_boot)
HXDLIN(  15)		defaultRenderer = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_16_boot)
HXDLIN(  16)		fade = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_17_boot)
HXDLIN(  17)		followMouse = false;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_b161232e6aa20de7_91_boot)
HXDLIN(  91)		calcRect =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace tooltips
