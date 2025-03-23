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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_FocusManagerBase
#include <haxe/ui/backend/FocusManagerBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_FocusManagerImpl
#include <haxe/ui/backend/FocusManagerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusManager
#include <haxe/ui/focus/FocusManager.h>
#endif
#ifndef INCLUDED_haxe_ui_util_EventMap
#include <haxe/ui/util/EventMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_62_new,"haxe.ui.core.Screen","new",0x467c6e5b,"haxe.ui.core.Screen.new","haxe/ui/core/Screen.hx",62,0xa3acdbf4)
HX_DEFINE_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_19_new,"haxe.ui.core.Screen","new",0x467c6e5b,"haxe.ui.core.Screen.new","haxe/ui/core/Screen.hx",19,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_77_addComponent,"haxe.ui.core.Screen","addComponent",0xf8075d01,"haxe.ui.core.Screen.addComponent","haxe/ui/core/Screen.hx",77,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_109_removeComponent,"haxe.ui.core.Screen","removeComponent",0xa34db654,"haxe.ui.core.Screen.removeComponent","haxe/ui/core/Screen.hx",109,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_132_containsComponent,"haxe.ui.core.Screen","containsComponent",0x344bb9d9,"haxe.ui.core.Screen.containsComponent","haxe/ui/core/Screen.hx",132,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_157_setComponentIndex,"haxe.ui.core.Screen","setComponentIndex",0xc2d3d392,"haxe.ui.core.Screen.setComponentIndex","haxe/ui/core/Screen.hx",157,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_172_moveComponentToFront,"haxe.ui.core.Screen","moveComponentToFront",0x9cc086c7,"haxe.ui.core.Screen.moveComponentToFront","haxe/ui/core/Screen.hx",172,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_186_findComponent,"haxe.ui.core.Screen","findComponent",0x3a07b6ff,"haxe.ui.core.Screen.findComponent","haxe/ui/core/Screen.hx",186,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_207_findComponentsUnderPoint,"haxe.ui.core.Screen","findComponentsUnderPoint",0xa96e09cc,"haxe.ui.core.Screen.findComponentsUnderPoint","haxe/ui/core/Screen.hx",207,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_235_hasComponentUnderPoint,"haxe.ui.core.Screen","hasComponentUnderPoint",0xa83122e0,"haxe.ui.core.Screen.hasComponentUnderPoint","haxe/ui/core/Screen.hx",235,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_258_findSolidComponentUnderPoint,"haxe.ui.core.Screen","findSolidComponentUnderPoint",0x5ca83dc8,"haxe.ui.core.Screen.findSolidComponentUnderPoint","haxe/ui/core/Screen.hx",258,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_283_hasSolidComponentUnderPoint,"haxe.ui.core.Screen","hasSolidComponentUnderPoint",0x54f41a3f,"haxe.ui.core.Screen.hasSolidComponentUnderPoint","haxe/ui/core/Screen.hx",283,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_291_onThemeChanged,"haxe.ui.core.Screen","onThemeChanged",0x9ffb7b8f,"haxe.ui.core.Screen.onThemeChanged","haxe/ui/core/Screen.hx",291,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_297_onThemeChangedChildren,"haxe.ui.core.Screen","onThemeChangedChildren",0xaf63f7ee,"haxe.ui.core.Screen.onThemeChangedChildren","haxe/ui/core/Screen.hx",297,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_316_registerEvent,"haxe.ui.core.Screen","registerEvent",0xb52f9072,"haxe.ui.core.Screen.registerEvent","haxe/ui/core/Screen.hx",316,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_328_hasEvent,"haxe.ui.core.Screen","hasEvent",0xce2ee685,"haxe.ui.core.Screen.hasEvent","haxe/ui/core/Screen.hx",328,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_338_unregisterEvent,"haxe.ui.core.Screen","unregisterEvent",0x7b828b39,"haxe.ui.core.Screen.unregisterEvent","haxe/ui/core/Screen.hx",338,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_344__onMappedEvent,"haxe.ui.core.Screen","_onMappedEvent",0x903426ae,"haxe.ui.core.Screen._onMappedEvent","haxe/ui/core/Screen.hx",344,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_26_get_instance,"haxe.ui.core.Screen","get_instance",0xf85a1e43,"haxe.ui.core.Screen.get_instance","haxe/ui/core/Screen.hx",26,0xa3acdbf4)
namespace haxe{
namespace ui{
namespace core{

void Screen_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Screen,_gthis) HXARGC(1)
            		void _hx_run( ::haxe::ui::events::MouseEvent e){
            			HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_62_new)
HXLINE(  63)			_gthis->currentMouseX = e->screenX;
HXLINE(  64)			_gthis->currentMouseY = e->screenY;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_19_new)
HXLINE(  52)		this->currentMouseY = null();
HXLINE(  44)		this->currentMouseX = null();
HXLINE(  36)		this->_eventMap =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
HXLINE(  60)		 ::haxe::ui::core::Screen _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  61)		super::__construct();
HXLINE(  62)		this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_MOVE, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}

Dynamic Screen_obj::__CreateEmpty() { return new Screen_obj; }

void *Screen_obj::_hx_vtable = 0;

Dynamic Screen_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Screen_obj > _hx_result = new Screen_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Screen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7f344a3f) {
		if (inClassId<=(int)0x0f4c0249) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0f4c0249;
		} else {
			return inClassId==(int)0x7f344a3f;
		}
	} else {
		return inClassId==(int)0x7faef962;
	}
}

 ::haxe::ui::core::Component Screen_obj::addComponent( ::haxe::ui::core::Component component){
            	HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_77_addComponent)
HXLINE(  78)		bool wasReady = component->get_isReady();
HXLINE(  79)		component->_hasScreen = true;
HXLINE(  80)		this->super::addComponent(component);
HXLINE(  82)		component->ready();
HXLINE(  84)		if ((this->rootComponents->indexOf(component,null()) == -1)) {
HXLINE(  85)			this->rootComponents->push(component);
            		}
HXLINE(  87)		::haxe::ui::focus::FocusManager_obj::get_instance()->pushView(component);
HXLINE(  88)		if ((component->hasEvent(::haxe::ui::events::UIEvent_obj::RESIZE,this->_onRootComponentResize_dyn()) == false)) {
HXLINE(  89)			component->registerEvent(::haxe::ui::events::UIEvent_obj::RESIZE,this->_onRootComponentResize_dyn(),null());
            		}
HXLINE(  92)		bool _hx_tmp;
HXDLIN(  92)		if (wasReady) {
HXLINE(  92)			_hx_tmp = (component->get_hidden() == false);
            		}
            		else {
HXLINE(  92)			_hx_tmp = false;
            		}
HXDLIN(  92)		if (_hx_tmp) {
HXLINE(  93)			component->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::SHOWN,null(),null()),null());
            		}
HXLINE(  96)		return component;
            	}


 ::haxe::ui::core::Component Screen_obj::removeComponent( ::haxe::ui::core::Component component,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_109_removeComponent)
HXLINE( 110)		if ((this->rootComponents->indexOf(component,null()) == -1)) {
HXLINE( 111)			if (dispose) {
HXLINE( 112)				component->disposeComponent();
            			}
HXLINE( 114)			return component;
            		}
HXLINE( 116)		component->_hasScreen = false;
HXLINE( 117)		this->super::removeComponent(component,dispose,null());
HXLINE( 118)		component->set_depth(-1);
HXLINE( 119)		this->rootComponents->remove(component);
HXLINE( 120)		::haxe::ui::focus::FocusManager_obj::get_instance()->removeView(component);
HXLINE( 121)		component->unregisterEvent(::haxe::ui::events::UIEvent_obj::RESIZE,this->_onRootComponentResize_dyn());
HXLINE( 122)		if (dispose) {
HXLINE( 123)			component->disposeComponent();
            		}
            		else {
HXLINE( 125)			component->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::HIDDEN,null(),null()),null());
HXLINE( 127)			component->removeClass(HX_(":hover",42,d3,17,5c),false,true);
            		}
HXLINE( 129)		return component;
            	}


bool Screen_obj::containsComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_132_containsComponent)
HXLINE( 133)		if (::hx::IsNull( child )) {
HXLINE( 134)			return false;
            		}
HXLINE( 137)		{
HXLINE( 137)			int _g = 0;
HXDLIN( 137)			::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN( 137)			while((_g < _g1->length)){
HXLINE( 137)				 ::haxe::ui::core::Component rootComponent = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 137)				_g = (_g + 1);
HXLINE( 138)				if (::hx::IsInstanceEq( rootComponent,child )) {
HXLINE( 139)					return true;
            				}
            			}
            		}
HXLINE( 143)		return false;
            	}


 ::haxe::ui::core::Component Screen_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_157_setComponentIndex)
HXLINE( 158)		bool _hx_tmp;
HXDLIN( 158)		if ((index >= 0)) {
HXLINE( 158)			_hx_tmp = (index <= this->rootComponents->length);
            		}
            		else {
HXLINE( 158)			_hx_tmp = false;
            		}
HXDLIN( 158)		if (_hx_tmp) {
HXLINE( 159)			this->handleSetComponentIndex(child,index);
HXLINE( 160)			this->rootComponents->remove(child);
HXLINE( 161)			this->rootComponents->insert(index,child);
            		}
HXLINE( 163)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Screen_obj,setComponentIndex,return )

void Screen_obj::moveComponentToFront( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_172_moveComponentToFront)
HXDLIN( 172)		if ((this->rootComponents->indexOf(child,null()) != -1)) {
HXLINE( 173)			this->setComponentIndex(child,(this->rootComponents->length - 1));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,moveComponentToFront,(void))

 ::Dynamic Screen_obj::findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String __o_searchType){
            		::String searchType = __o_searchType;
            		if (::hx::IsNull(__o_searchType)) searchType = HX_("id",db,5b,00,00);
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_186_findComponent)
HXLINE( 187)		{
HXLINE( 187)			int _g = 0;
HXDLIN( 187)			::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN( 187)			while((_g < _g1->length)){
HXLINE( 187)				 ::haxe::ui::core::Component rootComponent = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 187)				_g = (_g + 1);
HXLINE( 188)				 ::Dynamic result = rootComponent->findComponent(criteria,type,recursive,searchType);
HXLINE( 189)				if (::hx::IsNotNull( result )) {
HXLINE( 190)					return result;
            				}
            			}
            		}
HXLINE( 193)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(Screen_obj,findComponent,return )

::Array< ::Dynamic> Screen_obj::findComponentsUnderPoint( ::Dynamic screenX, ::Dynamic screenY,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_207_findComponentsUnderPoint)
HXLINE( 208)		bool _hx_tmp;
HXDLIN( 208)		if (::hx::IsNotNull( screenX )) {
HXLINE( 208)			_hx_tmp = ::hx::IsNull( screenY );
            		}
            		else {
HXLINE( 208)			_hx_tmp = true;
            		}
HXDLIN( 208)		if (_hx_tmp) {
HXLINE( 209)			return ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 211)		::Array< ::Dynamic> c = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 212)		{
HXLINE( 212)			int _g = 0;
HXDLIN( 212)			::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN( 212)			while((_g < _g1->length)){
HXLINE( 212)				 ::haxe::ui::core::Component r = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 212)				_g = (_g + 1);
HXLINE( 213)				if (r->hitTest(screenX,screenY,null())) {
HXLINE( 214)					bool match = true;
HXLINE( 215)					bool _hx_tmp;
HXDLIN( 215)					if (::hx::IsNotNull( type )) {
HXLINE( 215)						_hx_tmp = (::Std_obj::isOfType(r,type) == false);
            					}
            					else {
HXLINE( 215)						_hx_tmp = false;
            					}
HXDLIN( 215)					if (_hx_tmp) {
HXLINE( 216)						match = false;
            					}
HXLINE( 218)					if ((match == true)) {
HXLINE( 219)						c->push(r);
            					}
            				}
HXLINE( 222)				c = c->concat(r->findComponentsUnderPoint(( (Float)(screenX) ),( (Float)(screenY) ),type));
            			}
            		}
HXLINE( 224)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Screen_obj,findComponentsUnderPoint,return )

bool Screen_obj::hasComponentUnderPoint( ::Dynamic screenX, ::Dynamic screenY,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_235_hasComponentUnderPoint)
HXLINE( 236)		bool _hx_tmp;
HXDLIN( 236)		if (::hx::IsNotNull( screenX )) {
HXLINE( 236)			_hx_tmp = ::hx::IsNull( screenY );
            		}
            		else {
HXLINE( 236)			_hx_tmp = true;
            		}
HXDLIN( 236)		if (_hx_tmp) {
HXLINE( 237)			return false;
            		}
HXLINE( 239)		{
HXLINE( 239)			int _g = 0;
HXDLIN( 239)			::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN( 239)			while((_g < _g1->length)){
HXLINE( 239)				 ::haxe::ui::core::Component r = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 239)				_g = (_g + 1);
HXLINE( 240)				if ((r->hasComponentUnderPoint(( (Float)(screenX) ),( (Float)(screenY) ),type) == true)) {
HXLINE( 241)					return true;
            				}
            			}
            		}
HXLINE( 244)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Screen_obj,hasComponentUnderPoint,return )

::Array< ::Dynamic> Screen_obj::findSolidComponentUnderPoint( ::Dynamic screenX, ::Dynamic screenY,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_258_findSolidComponentUnderPoint)
HXLINE( 259)		bool _hx_tmp;
HXDLIN( 259)		if (::hx::IsNotNull( screenX )) {
HXLINE( 259)			_hx_tmp = ::hx::IsNull( screenY );
            		}
            		else {
HXLINE( 259)			_hx_tmp = true;
            		}
HXDLIN( 259)		if (_hx_tmp) {
HXLINE( 260)			return ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 262)		::Array< ::Dynamic> solidComponents = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 263)		::Array< ::Dynamic> components = this->findComponentsUnderPoint(screenX,screenY,type);
HXLINE( 264)		{
HXLINE( 264)			int _g = 0;
HXDLIN( 264)			while((_g < components->length)){
HXLINE( 264)				 ::haxe::ui::core::Component c = components->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 264)				_g = (_g + 1);
HXLINE( 265)				if (c->get_isComponentSolid()) {
HXLINE( 266)					solidComponents->push(c);
            				}
            			}
            		}
HXLINE( 269)		return solidComponents;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Screen_obj,findSolidComponentUnderPoint,return )

bool Screen_obj::hasSolidComponentUnderPoint( ::Dynamic screenX, ::Dynamic screenY,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_283_hasSolidComponentUnderPoint)
HXLINE( 284)		bool _hx_tmp;
HXDLIN( 284)		if (::hx::IsNotNull( screenX )) {
HXLINE( 284)			_hx_tmp = ::hx::IsNull( screenY );
            		}
            		else {
HXLINE( 284)			_hx_tmp = true;
            		}
HXDLIN( 284)		if (_hx_tmp) {
HXLINE( 285)			return false;
            		}
HXLINE( 287)		return (this->findSolidComponentUnderPoint(screenX,screenY,type)->length > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Screen_obj,hasSolidComponentUnderPoint,return )

void Screen_obj::onThemeChanged(){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_291_onThemeChanged)
HXDLIN( 291)		int _g = 0;
HXDLIN( 291)		::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN( 291)		while((_g < _g1->length)){
HXDLIN( 291)			 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 291)			_g = (_g + 1);
HXLINE( 292)			this->onThemeChangedChildren(c);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,onThemeChanged,(void))

void Screen_obj::onThemeChangedChildren( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_297_onThemeChangedChildren)
HXLINE( 298)		{
HXLINE( 298)			int _g = 0;
HXDLIN( 298)			::Array< ::Dynamic> _g1;
HXDLIN( 298)			if (::hx::IsNull( c->_children )) {
HXLINE( 298)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 298)				_g1 = c->_children;
            			}
HXDLIN( 298)			while((_g < _g1->length)){
HXLINE( 298)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 298)				_g = (_g + 1);
HXLINE( 299)				this->onThemeChangedChildren(child);
            			}
            		}
HXLINE( 301)		c->onThemeChanged();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,onThemeChangedChildren,(void))

void Screen_obj::registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  __o_priority){
            		int priority = __o_priority.Default(0);
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_316_registerEvent)
HXDLIN( 316)		if ((this->supportsEvent(type) == true)) {
HXLINE( 317)			if ((this->_eventMap->add(type,listener,priority) == true)) {
HXLINE( 318)				this->mapEvent(type,this->_onMappedEvent_dyn());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Screen_obj,registerEvent,(void))

bool Screen_obj::hasEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_328_hasEvent)
HXDLIN( 328)		return this->_eventMap->contains(type,listener);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Screen_obj,hasEvent,return )

void Screen_obj::unregisterEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_338_unregisterEvent)
HXDLIN( 338)		if ((this->_eventMap->remove(type,listener) == true)) {
HXLINE( 339)			this->unmapEvent(type,this->_onMappedEvent_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Screen_obj,unregisterEvent,(void))

void Screen_obj::_onMappedEvent( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_344__onMappedEvent)
HXDLIN( 344)		this->_eventMap->invoke(event->type,event,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,_onMappedEvent,(void))

 ::haxe::ui::core::Screen Screen_obj::_instance;

 ::haxe::ui::core::Screen Screen_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_26_get_instance)
HXLINE(  27)		if (::hx::IsNull( ::haxe::ui::core::Screen_obj::_instance )) {
HXLINE(  28)			::haxe::ui::core::Screen_obj::_instance =  ::haxe::ui::core::Screen_obj::__alloc( HX_CTX );
            		}
HXLINE(  30)		return ::haxe::ui::core::Screen_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_instance,return )


::hx::ObjectPtr< Screen_obj > Screen_obj::__new() {
	::hx::ObjectPtr< Screen_obj > __this = new Screen_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Screen_obj > Screen_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Screen_obj *__this = (Screen_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Screen_obj), true, "haxe.ui.core.Screen"));
	*(void **)__this = Screen_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Screen_obj::Screen_obj()
{
}

void Screen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Screen);
	HX_MARK_MEMBER_NAME(_eventMap,"_eventMap");
	HX_MARK_MEMBER_NAME(currentMouseX,"currentMouseX");
	HX_MARK_MEMBER_NAME(currentMouseY,"currentMouseY");
	 ::haxe::ui::backend::ScreenImpl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Screen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_eventMap,"_eventMap");
	HX_VISIT_MEMBER_NAME(currentMouseX,"currentMouseX");
	HX_VISIT_MEMBER_NAME(currentMouseY,"currentMouseY");
	 ::haxe::ui::backend::ScreenImpl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Screen_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"hasEvent") ) { return ::hx::Val( hasEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { return ::hx::Val( _eventMap ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentMouseX") ) { return ::hx::Val( currentMouseX ); }
		if (HX_FIELD_EQ(inName,"currentMouseY") ) { return ::hx::Val( currentMouseY ); }
		if (HX_FIELD_EQ(inName,"findComponent") ) { return ::hx::Val( findComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerEvent") ) { return ::hx::Val( registerEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onThemeChanged") ) { return ::hx::Val( onThemeChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMappedEvent") ) { return ::hx::Val( _onMappedEvent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"unregisterEvent") ) { return ::hx::Val( unregisterEvent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"containsComponent") ) { return ::hx::Val( containsComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return ::hx::Val( setComponentIndex_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"moveComponentToFront") ) { return ::hx::Val( moveComponentToFront_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hasComponentUnderPoint") ) { return ::hx::Val( hasComponentUnderPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"onThemeChangedChildren") ) { return ::hx::Val( onThemeChangedChildren_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"findComponentsUnderPoint") ) { return ::hx::Val( findComponentsUnderPoint_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hasSolidComponentUnderPoint") ) { return ::hx::Val( hasSolidComponentUnderPoint_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"findSolidComponentUnderPoint") ) { return ::hx::Val( findSolidComponentUnderPoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Screen_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_instance() ); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val Screen_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { _eventMap=inValue.Cast<  ::haxe::ui::util::EventMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentMouseX") ) { currentMouseX=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentMouseY") ) { currentMouseY=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Screen_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::core::Screen >(); return true; }
	}
	return false;
}

void Screen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_eventMap",01,7e,68,08));
	outFields->push(HX_("currentMouseX",ac,cb,6a,af));
	outFields->push(HX_("currentMouseY",ad,cb,6a,af));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Screen_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::util::EventMap */ ,(int)offsetof(Screen_obj,_eventMap),HX_("_eventMap",01,7e,68,08)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Screen_obj,currentMouseX),HX_("currentMouseX",ac,cb,6a,af)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Screen_obj,currentMouseY),HX_("currentMouseY",ad,cb,6a,af)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Screen_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Screen */ ,(void *) &Screen_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Screen_obj_sMemberFields[] = {
	HX_("_eventMap",01,7e,68,08),
	HX_("currentMouseX",ac,cb,6a,af),
	HX_("currentMouseY",ad,cb,6a,af),
	HX_("addComponent",5c,12,a8,0e),
	HX_("removeComponent",d9,8b,72,50),
	HX_("containsComponent",9e,ba,74,14),
	HX_("setComponentIndex",57,d4,fc,a2),
	HX_("moveComponentToFront",22,8f,6e,fe),
	HX_("findComponent",44,b1,05,f0),
	HX_("findComponentsUnderPoint",a7,db,36,14),
	HX_("hasComponentUnderPoint",fb,37,b6,57),
	HX_("findSolidComponentUnderPoint",23,99,6e,a3),
	HX_("hasSolidComponentUnderPoint",44,a3,85,8d),
	HX_("onThemeChanged",aa,7d,38,28),
	HX_("onThemeChangedChildren",09,0d,e9,5e),
	HX_("registerEvent",b7,8a,2d,6b),
	HX_("hasEvent",60,12,1d,02),
	HX_("unregisterEvent",be,60,a7,28),
	HX_("_onMappedEvent",c9,28,71,18),
	::String(null()) };

static void Screen_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::_instance,"_instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Screen_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::_instance,"_instance");
};

#endif

::hx::Class Screen_obj::__mClass;

static ::String Screen_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void Screen_obj::__register()
{
	Screen_obj _hx_dummy;
	Screen_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.Screen",e9,a4,c1,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Screen_obj::__GetStatic;
	__mClass->mSetStaticField = &Screen_obj::__SetStatic;
	__mClass->mMarkFunc = Screen_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Screen_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Screen_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Screen_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Screen_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Screen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Screen_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
