#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6f99d968e31f22fe_10_new,"haxe.ui.backend.ScreenBase","new",0x2ba37cdb,"haxe.ui.backend.ScreenBase.new","haxe/ui/backend/ScreenBase.hx",10,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_15_get_options,"haxe.ui.backend.ScreenBase","get_options",0x84d1b2f0,"haxe.ui.backend.ScreenBase.get_options","haxe/ui/backend/ScreenBase.hx",15,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_17_set_options,"haxe.ui.backend.ScreenBase","set_options",0x8f3eb9fc,"haxe.ui.backend.ScreenBase.set_options","haxe/ui/backend/ScreenBase.hx",17,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_24_get_dpi,"haxe.ui.backend.ScreenBase","get_dpi",0x63a011ef,"haxe.ui.backend.ScreenBase.get_dpi","haxe/ui/backend/ScreenBase.hx",24,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_29_get_title,"haxe.ui.backend.ScreenBase","get_title",0xcb0d2caa,"haxe.ui.backend.ScreenBase.get_title","haxe/ui/backend/ScreenBase.hx",29,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_32_set_title,"haxe.ui.backend.ScreenBase","set_title",0xae5e18b6,"haxe.ui.backend.ScreenBase.set_title","haxe/ui/backend/ScreenBase.hx",32,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_37_get_width,"haxe.ui.backend.ScreenBase","get_width",0x8534cd18,"haxe.ui.backend.ScreenBase.get_width","haxe/ui/backend/ScreenBase.hx",37,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_42_get_height,"haxe.ui.backend.ScreenBase","get_height",0xbf4e2095,"haxe.ui.backend.ScreenBase.get_height","haxe/ui/backend/ScreenBase.hx",42,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_47_get_actualWidth,"haxe.ui.backend.ScreenBase","get_actualWidth",0x36c1892a,"haxe.ui.backend.ScreenBase.get_actualWidth","haxe/ui/backend/ScreenBase.hx",47,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_52_get_actualHeight,"haxe.ui.backend.ScreenBase","get_actualHeight",0x68e5f443,"haxe.ui.backend.ScreenBase.get_actualHeight","haxe/ui/backend/ScreenBase.hx",52,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_57_get_isRetina,"haxe.ui.backend.ScreenBase","get_isRetina",0xf5ca41d3,"haxe.ui.backend.ScreenBase.get_isRetina","haxe/ui/backend/ScreenBase.hx",57,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_61_get_topComponent,"haxe.ui.backend.ScreenBase","get_topComponent",0x2e243e96,"haxe.ui.backend.ScreenBase.get_topComponent","haxe/ui/backend/ScreenBase.hx",61,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_85_addComponent,"haxe.ui.backend.ScreenBase","addComponent",0xedca7e81,"haxe.ui.backend.ScreenBase.addComponent","haxe/ui/backend/ScreenBase.hx",85,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_89_removeComponent,"haxe.ui.backend.ScreenBase","removeComponent",0x8e1084d4,"haxe.ui.backend.ScreenBase.removeComponent","haxe/ui/backend/ScreenBase.hx",89,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_93_containsComponent,"haxe.ui.backend.ScreenBase","containsComponent",0x703f2859,"haxe.ui.backend.ScreenBase.containsComponent","haxe/ui/backend/ScreenBase.hx",93,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_96_handleSetComponentIndex,"haxe.ui.backend.ScreenBase","handleSetComponentIndex",0x47be5f8a,"haxe.ui.backend.ScreenBase.handleSetComponentIndex","haxe/ui/backend/ScreenBase.hx",96,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_99_resizeComponent,"haxe.ui.backend.ScreenBase","resizeComponent",0xa9909124,"haxe.ui.backend.ScreenBase.resizeComponent","haxe/ui/backend/ScreenBase.hx",99,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_113_refreshStyleRootComponents,"haxe.ui.backend.ScreenBase","refreshStyleRootComponents",0x33d888b3,"haxe.ui.backend.ScreenBase.refreshStyleRootComponents","haxe/ui/backend/ScreenBase.hx",113,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_119_resizeRootComponents,"haxe.ui.backend.ScreenBase","resizeRootComponents",0x3bfff011,"haxe.ui.backend.ScreenBase.resizeRootComponents","haxe/ui/backend/ScreenBase.hx",119,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_126__refreshStyleComponent,"haxe.ui.backend.ScreenBase","_refreshStyleComponent",0xc823da2d,"haxe.ui.backend.ScreenBase._refreshStyleComponent","haxe/ui/backend/ScreenBase.hx",126,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_135__onRootComponentResize,"haxe.ui.backend.ScreenBase","_onRootComponentResize",0x1590e656,"haxe.ui.backend.ScreenBase._onRootComponentResize","haxe/ui/backend/ScreenBase.hx",135,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_139_invalidateAll,"haxe.ui.backend.ScreenBase","invalidateAll",0x05e6aaa1,"haxe.ui.backend.ScreenBase.invalidateAll","haxe/ui/backend/ScreenBase.hx",139,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_144_invalidateChildren,"haxe.ui.backend.ScreenBase","invalidateChildren",0xedd9f7bf,"haxe.ui.backend.ScreenBase.invalidateChildren","haxe/ui/backend/ScreenBase.hx",144,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_155_supportsEvent,"haxe.ui.backend.ScreenBase","supportsEvent",0x0daeec31,"haxe.ui.backend.ScreenBase.supportsEvent","haxe/ui/backend/ScreenBase.hx",155,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_158_mapEvent,"haxe.ui.backend.ScreenBase","mapEvent",0xf34d6d83,"haxe.ui.backend.ScreenBase.mapEvent","haxe/ui/backend/ScreenBase.hx",158,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_161_unmapEvent,"haxe.ui.backend.ScreenBase","unmapEvent",0x3f45c81c,"haxe.ui.backend.ScreenBase.unmapEvent","haxe/ui/backend/ScreenBase.hx",161,0xded7efb4)
namespace haxe{
namespace ui{
namespace backend{

void ScreenBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_10_new)
HXDLIN(  10)		this->rootComponents = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic ScreenBase_obj::__CreateEmpty() { return new ScreenBase_obj; }

void *ScreenBase_obj::_hx_vtable = 0;

Dynamic ScreenBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScreenBase_obj > _hx_result = new ScreenBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScreenBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f344a3f;
}

static ::haxe::ui::core::IComponentContainer_obj _hx_haxe_ui_backend_ScreenBase__hx_haxe_ui_core_IComponentContainer= {
	(  ::haxe::ui::core::Component (::hx::Object::*)( ::haxe::ui::core::Component))&::haxe::ui::backend::ScreenBase_obj::addComponent,
	(  ::haxe::ui::core::Component (::hx::Object::*)( ::haxe::ui::core::Component,::hx::Null< bool > ,::hx::Null< bool > ))&::haxe::ui::backend::ScreenBase_obj::removeComponent,
	( bool (::hx::Object::*)( ::haxe::ui::core::Component))&::haxe::ui::backend::ScreenBase_obj::containsComponent,
};

void *ScreenBase_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xf8a1c034: return &_hx_haxe_ui_backend_ScreenBase__hx_haxe_ui_core_IComponentContainer;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::Dynamic ScreenBase_obj::get_options(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_15_get_options)
HXDLIN(  15)		return this->_options;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_options,return )

 ::Dynamic ScreenBase_obj::set_options( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_17_set_options)
HXLINE(  18)		this->_options = value;
HXLINE(  19)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,set_options,return )

Float ScreenBase_obj::get_dpi(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_24_get_dpi)
HXDLIN(  24)		return ( (Float)(72) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_dpi,return )

::String ScreenBase_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_29_get_title)
HXDLIN(  29)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_title,return )

::String ScreenBase_obj::set_title(::String s){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_32_set_title)
HXDLIN(  32)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,set_title,return )

Float ScreenBase_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_37_get_width)
HXDLIN(  37)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_width,return )

Float ScreenBase_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_42_get_height)
HXDLIN(  42)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_height,return )

Float ScreenBase_obj::get_actualWidth(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_47_get_actualWidth)
HXDLIN(  47)		Float _hx_tmp = this->get_width();
HXDLIN(  47)		return (_hx_tmp * ::haxe::ui::Toolkit_obj::get_scaleX());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_actualWidth,return )

Float ScreenBase_obj::get_actualHeight(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_52_get_actualHeight)
HXDLIN(  52)		Float _hx_tmp = this->get_height();
HXDLIN(  52)		return (_hx_tmp * ::haxe::ui::Toolkit_obj::get_scaleY());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_actualHeight,return )

bool ScreenBase_obj::get_isRetina(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_57_get_isRetina)
HXDLIN(  57)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_isRetina,return )

 ::haxe::ui::core::Component ScreenBase_obj::get_topComponent(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_61_get_topComponent)
HXLINE(  62)		if ((this->rootComponents->length == 0)) {
HXLINE(  63)			return null();
            		}
HXLINE(  69)		int n = (this->rootComponents->length - 1);
HXLINE(  70)		 ::haxe::ui::core::Component c = null();
HXLINE(  71)		while((n >= 0)){
HXLINE(  72)			c = this->rootComponents->__get(n).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  73)			if (::hx::IsNull( c->get_style() )) {
HXLINE(  74)				goto _hx_goto_11;
            			}
HXLINE(  76)			if ((c->get_style()->pointerEvents != HX_("none",b8,12,0a,49))) {
HXLINE(  77)				goto _hx_goto_11;
            			}
HXLINE(  79)			n = (n - 1);
            		}
            		_hx_goto_11:;
HXLINE(  81)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_topComponent,return )

 ::haxe::ui::core::Component ScreenBase_obj::addComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_85_addComponent)
HXDLIN(  85)		return component;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,addComponent,return )

 ::haxe::ui::core::Component ScreenBase_obj::removeComponent( ::haxe::ui::core::Component component,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_89_removeComponent)
HXDLIN(  89)		return component;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ScreenBase_obj,removeComponent,return )

bool ScreenBase_obj::containsComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_93_containsComponent)
HXDLIN(  93)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,containsComponent,return )

void ScreenBase_obj::handleSetComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_96_handleSetComponentIndex)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,handleSetComponentIndex,(void))

void ScreenBase_obj::resizeComponent( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_99_resizeComponent)
HXLINE( 100)		 ::Dynamic cx = null();
HXLINE( 101)		 ::Dynamic cy = null();
HXLINE( 103)		if (::hx::IsGreater( c->get_percentWidth(),0 )) {
HXLINE( 104)			Float cx1 = this->get_width();
HXDLIN( 104)			cx = ((cx1 * ( (Float)(c->get_percentWidth()) )) / ( (Float)(100) ));
            		}
HXLINE( 106)		if (::hx::IsGreater( c->get_percentHeight(),0 )) {
HXLINE( 107)			Float cy1 = this->get_height();
HXDLIN( 107)			cy = ((cy1 * ( (Float)(c->get_percentHeight()) )) / ( (Float)(100) ));
            		}
HXLINE( 109)		c->resizeComponent(cx,cy);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,resizeComponent,(void))

void ScreenBase_obj::refreshStyleRootComponents(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_113_refreshStyleRootComponents)
HXDLIN( 113)		int _g = 0;
HXDLIN( 113)		::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN( 113)		while((_g < _g1->length)){
HXDLIN( 113)			 ::haxe::ui::core::Component component = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 113)			_g = (_g + 1);
HXLINE( 114)			this->_refreshStyleComponent(component);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,refreshStyleRootComponents,(void))

void ScreenBase_obj::resizeRootComponents(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_119_resizeRootComponents)
HXDLIN( 119)		int _g = 0;
HXDLIN( 119)		::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN( 119)		while((_g < _g1->length)){
HXDLIN( 119)			 ::haxe::ui::core::Component component = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 119)			_g = (_g + 1);
HXLINE( 120)			this->resizeComponent(component);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,resizeRootComponents,(void))

void ScreenBase_obj::_refreshStyleComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_126__refreshStyleComponent)
HXDLIN( 126)		int _g = 0;
HXDLIN( 126)		::Array< ::Dynamic> _g1;
HXDLIN( 126)		if (::hx::IsNull( component->_children )) {
HXDLIN( 126)			_g1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXDLIN( 126)			_g1 = component->_children;
            		}
HXDLIN( 126)		while((_g < _g1->length)){
HXDLIN( 126)			 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 126)			_g = (_g + 1);
HXLINE( 128)			{
HXLINE( 128)				child->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 128)				{
            				}
            			}
HXLINE( 129)			child->invalidateComponent(HX_("display",42,2a,4a,bb),false);
HXLINE( 130)			this->_refreshStyleComponent(child);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,_refreshStyleComponent,(void))

void ScreenBase_obj::_onRootComponentResize( ::haxe::ui::events::UIEvent e){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_135__onRootComponentResize)
HXDLIN( 135)		this->_refreshStyleComponent(e->target);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,_onRootComponentResize,(void))

void ScreenBase_obj::invalidateAll(::String __o_flag){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_139_invalidateAll)
HXDLIN( 139)		int _g = 0;
HXDLIN( 139)		::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN( 139)		while((_g < _g1->length)){
HXDLIN( 139)			 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 139)			_g = (_g + 1);
HXLINE( 140)			this->invalidateChildren(c,flag);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,invalidateAll,(void))

void ScreenBase_obj::invalidateChildren( ::haxe::ui::core::Component c,::String __o_flag){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_144_invalidateChildren)
HXLINE( 145)		{
HXLINE( 145)			int _g = 0;
HXDLIN( 145)			::Array< ::Dynamic> _g1;
HXDLIN( 145)			if (::hx::IsNull( c->_children )) {
HXLINE( 145)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 145)				_g1 = c->_children;
            			}
HXDLIN( 145)			while((_g < _g1->length)){
HXLINE( 145)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 145)				_g = (_g + 1);
HXLINE( 146)				this->invalidateChildren(child,flag);
            			}
            		}
HXLINE( 148)		c->invalidateComponent(flag,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,invalidateChildren,(void))

bool ScreenBase_obj::supportsEvent(::String type){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_155_supportsEvent)
HXDLIN( 155)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,supportsEvent,return )

void ScreenBase_obj::mapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_158_mapEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,mapEvent,(void))

void ScreenBase_obj::unmapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_161_unmapEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,unmapEvent,(void))


::hx::ObjectPtr< ScreenBase_obj > ScreenBase_obj::__new() {
	::hx::ObjectPtr< ScreenBase_obj > __this = new ScreenBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScreenBase_obj > ScreenBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScreenBase_obj *__this = (ScreenBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScreenBase_obj), true, "haxe.ui.backend.ScreenBase"));
	*(void **)__this = ScreenBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScreenBase_obj::ScreenBase_obj()
{
}

void ScreenBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenBase);
	HX_MARK_MEMBER_NAME(rootComponents,"rootComponents");
	HX_MARK_MEMBER_NAME(_options,"_options");
	HX_MARK_MEMBER_NAME(dpi,"dpi");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(actualWidth,"actualWidth");
	HX_MARK_MEMBER_NAME(actualHeight,"actualHeight");
	HX_MARK_MEMBER_NAME(isRetina,"isRetina");
	HX_MARK_MEMBER_NAME(topComponent,"topComponent");
	HX_MARK_END_CLASS();
}

void ScreenBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rootComponents,"rootComponents");
	HX_VISIT_MEMBER_NAME(_options,"_options");
	HX_VISIT_MEMBER_NAME(dpi,"dpi");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(actualWidth,"actualWidth");
	HX_VISIT_MEMBER_NAME(actualHeight,"actualHeight");
	HX_VISIT_MEMBER_NAME(isRetina,"isRetina");
	HX_VISIT_MEMBER_NAME(topComponent,"topComponent");
}

::hx::Val ScreenBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dpi() : dpi ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_title() ); }
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_width() : width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_height() : height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_options() ); }
		if (HX_FIELD_EQ(inName,"get_dpi") ) { return ::hx::Val( get_dpi_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_options") ) { return ::hx::Val( _options ); }
		if (HX_FIELD_EQ(inName,"isRetina") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isRetina() : isRetina ); }
		if (HX_FIELD_EQ(inName,"mapEvent") ) { return ::hx::Val( mapEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_title") ) { return ::hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return ::hx::Val( set_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"unmapEvent") ) { return ::hx::Val( unmapEvent_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_options") ) { return ::hx::Val( get_options_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_options") ) { return ::hx::Val( set_options_dyn() ); }
		if (HX_FIELD_EQ(inName,"actualWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_actualWidth() : actualWidth ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"actualHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_actualHeight() : actualHeight ); }
		if (HX_FIELD_EQ(inName,"get_isRetina") ) { return ::hx::Val( get_isRetina_dyn() ); }
		if (HX_FIELD_EQ(inName,"topComponent") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_topComponent() : topComponent ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"invalidateAll") ) { return ::hx::Val( invalidateAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"supportsEvent") ) { return ::hx::Val( supportsEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rootComponents") ) { return ::hx::Val( rootComponents ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_actualWidth") ) { return ::hx::Val( get_actualWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"resizeComponent") ) { return ::hx::Val( resizeComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_actualHeight") ) { return ::hx::Val( get_actualHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_topComponent") ) { return ::hx::Val( get_topComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"containsComponent") ) { return ::hx::Val( containsComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"invalidateChildren") ) { return ::hx::Val( invalidateChildren_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"resizeRootComponents") ) { return ::hx::Val( resizeRootComponents_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_refreshStyleComponent") ) { return ::hx::Val( _refreshStyleComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onRootComponentResize") ) { return ::hx::Val( _onRootComponentResize_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"handleSetComponentIndex") ) { return ::hx::Val( handleSetComponentIndex_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"refreshStyleRootComponents") ) { return ::hx::Val( refreshStyleRootComponents_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScreenBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { dpi=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_title(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_options(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_options") ) { _options=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isRetina") ) { isRetina=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"actualWidth") ) { actualWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"actualHeight") ) { actualHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"topComponent") ) { topComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rootComponents") ) { rootComponents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rootComponents",d8,65,3e,27));
	outFields->push(HX_("_options",df,8c,b6,19));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("dpi",5d,43,4c,00));
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("actualWidth",98,d8,41,38));
	outFields->push(HX_("actualHeight",15,25,ab,b7));
	outFields->push(HX_("isRetina",a5,21,8e,61));
	outFields->push(HX_("topComponent",68,6f,e9,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScreenBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ScreenBase_obj,rootComponents),HX_("rootComponents",d8,65,3e,27)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ScreenBase_obj,_options),HX_("_options",df,8c,b6,19)},
	{::hx::fsFloat,(int)offsetof(ScreenBase_obj,dpi),HX_("dpi",5d,43,4c,00)},
	{::hx::fsFloat,(int)offsetof(ScreenBase_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(ScreenBase_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsFloat,(int)offsetof(ScreenBase_obj,actualWidth),HX_("actualWidth",98,d8,41,38)},
	{::hx::fsFloat,(int)offsetof(ScreenBase_obj,actualHeight),HX_("actualHeight",15,25,ab,b7)},
	{::hx::fsBool,(int)offsetof(ScreenBase_obj,isRetina),HX_("isRetina",a5,21,8e,61)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ScreenBase_obj,topComponent),HX_("topComponent",68,6f,e9,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScreenBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ScreenBase_obj_sMemberFields[] = {
	HX_("rootComponents",d8,65,3e,27),
	HX_("_options",df,8c,b6,19),
	HX_("get_options",75,93,f8,65),
	HX_("set_options",81,9a,65,70),
	HX_("dpi",5d,43,4c,00),
	HX_("get_dpi",f4,0b,c1,26),
	HX_("get_title",ef,71,e4,53),
	HX_("set_title",fb,5d,35,37),
	HX_("width",06,b6,62,ca),
	HX_("get_width",5d,12,0c,0e),
	HX_("height",e7,07,4c,02),
	HX_("get_height",b0,77,d3,f2),
	HX_("actualWidth",98,d8,41,38),
	HX_("get_actualWidth",2f,90,23,f9),
	HX_("actualHeight",15,25,ab,b7),
	HX_("get_actualHeight",9e,11,4a,bc),
	HX_("isRetina",a5,21,8e,61),
	HX_("get_isRetina",ae,d5,a7,16),
	HX_("topComponent",68,6f,e9,7c),
	HX_("get_topComponent",f1,5b,88,81),
	HX_("addComponent",5c,12,a8,0e),
	HX_("removeComponent",d9,8b,72,50),
	HX_("containsComponent",9e,ba,74,14),
	HX_("handleSetComponentIndex",8f,73,b6,f4),
	HX_("resizeComponent",29,98,f2,6b),
	HX_("refreshStyleRootComponents",ce,05,73,2d),
	HX_("resizeRootComponents",ec,56,ad,15),
	HX_("_refreshStyleComponent",c8,ed,1c,75),
	HX_("_onRootComponentResize",f1,f9,89,c2),
	HX_("invalidateAll",66,76,ea,a6),
	HX_("invalidateChildren",da,61,84,f8),
	HX_("supportsEvent",f6,b7,b2,ae),
	HX_("mapEvent",de,37,07,ed),
	HX_("unmapEvent",37,1f,cb,72),
	::String(null()) };

::hx::Class ScreenBase_obj::__mClass;

void ScreenBase_obj::__register()
{
	ScreenBase_obj _hx_dummy;
	ScreenBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ScreenBase",69,73,9f,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScreenBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScreenBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
