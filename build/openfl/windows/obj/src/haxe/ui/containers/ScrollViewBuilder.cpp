#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
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
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#include <haxe/ui/layouts/LayoutFactory.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_23283b2891872f10_1230_new,"haxe.ui.containers.ScrollViewBuilder","new",0xf0805b31,"haxe.ui.containers.ScrollViewBuilder.new","haxe/ui/containers/ScrollView.hx",1230,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1236_create,"haxe.ui.containers.ScrollViewBuilder","create",0xb0fab4cb,"haxe.ui.containers.ScrollViewBuilder.create","haxe/ui/containers/ScrollView.hx",1236,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1244_destroy,"haxe.ui.containers.ScrollViewBuilder","destroy",0x3d7ef44b,"haxe.ui.containers.ScrollViewBuilder.destroy","haxe/ui/containers/ScrollView.hx",1244,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1248_get_numComponents,"haxe.ui.containers.ScrollViewBuilder","get_numComponents",0xe5ddece4,"haxe.ui.containers.ScrollViewBuilder.get_numComponents","haxe/ui/containers/ScrollView.hx",1248,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1251_addComponent,"haxe.ui.containers.ScrollViewBuilder","addComponent",0xda66256b,"haxe.ui.containers.ScrollViewBuilder.addComponent","haxe/ui/containers/ScrollView.hx",1251,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1258_addComponentAt,"haxe.ui.containers.ScrollViewBuilder","addComponentAt",0xdc4acf3e,"haxe.ui.containers.ScrollViewBuilder.addComponentAt","haxe/ui/containers/ScrollView.hx",1258,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1265_removeComponent,"haxe.ui.containers.ScrollViewBuilder","removeComponent",0x886c8c2a,"haxe.ui.containers.ScrollViewBuilder.removeComponent","haxe/ui/containers/ScrollView.hx",1265,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1272_removeAllComponents,"haxe.ui.containers.ScrollViewBuilder","removeAllComponents",0x9d061b84,"haxe.ui.containers.ScrollViewBuilder.removeAllComponents","haxe/ui/containers/ScrollView.hx",1272,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1278_removeComponentAt,"haxe.ui.containers.ScrollViewBuilder","removeComponentAt",0xe5c7a3bd,"haxe.ui.containers.ScrollViewBuilder.removeComponentAt","haxe/ui/containers/ScrollView.hx",1278,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1282_getComponentIndex,"haxe.ui.containers.ScrollViewBuilder","getComponentIndex",0x2a4672dc,"haxe.ui.containers.ScrollViewBuilder.getComponentIndex","haxe/ui/containers/ScrollView.hx",1282,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1285_setComponentIndex,"haxe.ui.containers.ScrollViewBuilder","setComponentIndex",0x4db44ae8,"haxe.ui.containers.ScrollViewBuilder.setComponentIndex","haxe/ui/containers/ScrollView.hx",1285,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1293_getComponentAt,"haxe.ui.containers.ScrollViewBuilder","getComponentAt",0xce121ae9,"haxe.ui.containers.ScrollViewBuilder.getComponentAt","haxe/ui/containers/ScrollView.hx",1293,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1297_createContentContainer,"haxe.ui.containers.ScrollViewBuilder","createContentContainer",0xdb7eefb3,"haxe.ui.containers.ScrollViewBuilder.createContentContainer","haxe/ui/containers/ScrollView.hx",1297,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1308_horizontalConstraintModifier,"haxe.ui.containers.ScrollViewBuilder","horizontalConstraintModifier",0xdb3147e7,"haxe.ui.containers.ScrollViewBuilder.horizontalConstraintModifier","haxe/ui/containers/ScrollView.hx",1308,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1312_verticalConstraintModifier,"haxe.ui.containers.ScrollViewBuilder","verticalConstraintModifier",0xd28ea239,"haxe.ui.containers.ScrollViewBuilder.verticalConstraintModifier","haxe/ui/containers/ScrollView.hx",1312,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1316_checkScrolls,"haxe.ui.containers.ScrollViewBuilder","checkScrolls",0xea1cfeed,"haxe.ui.containers.ScrollViewBuilder.checkScrolls","haxe/ui/containers/ScrollView.hx",1316,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1381_createHScroll,"haxe.ui.containers.ScrollViewBuilder","createHScroll",0xc386fd0a,"haxe.ui.containers.ScrollViewBuilder.createHScroll","haxe/ui/containers/ScrollView.hx",1381,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1422_createVScroll,"haxe.ui.containers.ScrollViewBuilder","createVScroll",0x09b37b98,"haxe.ui.containers.ScrollViewBuilder.createVScroll","haxe/ui/containers/ScrollView.hx",1422,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1463_destroyHScroll,"haxe.ui.containers.ScrollViewBuilder","destroyHScroll",0x92d1ad8a,"haxe.ui.containers.ScrollViewBuilder.destroyHScroll","haxe/ui/containers/ScrollView.hx",1463,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1471_destroyVScroll,"haxe.ui.containers.ScrollViewBuilder","destroyVScroll",0xd8fe2c18,"haxe.ui.containers.ScrollViewBuilder.destroyVScroll","haxe/ui/containers/ScrollView.hx",1471,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1517_updateScrollRect,"haxe.ui.containers.ScrollViewBuilder","updateScrollRect",0x1618f1c9,"haxe.ui.containers.ScrollViewBuilder.updateScrollRect","haxe/ui/containers/ScrollView.hx",1517,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1478_updateScrollRect,"haxe.ui.containers.ScrollViewBuilder","updateScrollRect",0x1618f1c9,"haxe.ui.containers.ScrollViewBuilder.updateScrollRect","haxe/ui/containers/ScrollView.hx",1478,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1531_get_virtualHorizontal,"haxe.ui.containers.ScrollViewBuilder","get_virtualHorizontal",0xe8f950b7,"haxe.ui.containers.ScrollViewBuilder.get_virtualHorizontal","haxe/ui/containers/ScrollView.hx",1531,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1536_get_virtualVertical,"haxe.ui.containers.ScrollViewBuilder","get_virtualVertical",0x4e806589,"haxe.ui.containers.ScrollViewBuilder.get_virtualVertical","haxe/ui/containers/ScrollView.hx",1536,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1539_onVirtualChanged,"haxe.ui.containers.ScrollViewBuilder","onVirtualChanged",0x5de33637,"haxe.ui.containers.ScrollViewBuilder.onVirtualChanged","haxe/ui/containers/ScrollView.hx",1539,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_23283b2891872f10_1543_applyStyle,"haxe.ui.containers.ScrollViewBuilder","applyStyle",0xc0770232,"haxe.ui.containers.ScrollViewBuilder.applyStyle","haxe/ui/containers/ScrollView.hx",1543,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{

void ScrollViewBuilder_obj::__construct( ::haxe::ui::containers::ScrollView scrollview){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1230_new)
HXLINE(1231)		super::__construct(scrollview);
HXLINE(1232)		this->_scrollview = scrollview;
HXLINE(1233)		this->_scrollview->cascadeActive = true;
            	}

Dynamic ScrollViewBuilder_obj::__CreateEmpty() { return new ScrollViewBuilder_obj; }

void *ScrollViewBuilder_obj::_hx_vtable = 0;

Dynamic ScrollViewBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollViewBuilder_obj > _hx_result = new ScrollViewBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollViewBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x17e93bfd;
	}
}

void ScrollViewBuilder_obj::create(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1236_create)
HXLINE(1237)		::String contentLayoutName = this->_scrollview->get_contentLayoutName();
HXLINE(1238)		if (::hx::IsNull( contentLayoutName )) {
HXLINE(1239)			contentLayoutName = HX_("vertical",76,bc,15,6a);
            		}
HXLINE(1241)		this->createContentContainer(contentLayoutName);
            	}


void ScrollViewBuilder_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1244_destroy)
            	}


 ::Dynamic ScrollViewBuilder_obj::get_numComponents(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1248_get_numComponents)
HXDLIN(1248)		return this->_contents->get_numComponents();
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1251_addComponent)
HXLINE(1252)		bool _hx_tmp;
HXDLIN(1252)		bool _hx_tmp1;
HXDLIN(1252)		if ((::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >()) == false)) {
HXLINE(1252)			_hx_tmp1 = (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::VerticalScroll >()) == false);
            		}
            		else {
HXLINE(1252)			_hx_tmp1 = false;
            		}
HXDLIN(1252)		if (_hx_tmp1) {
HXLINE(1252)			_hx_tmp = ((child->classes->indexOf(HX_("scrollview-contents",15,b7,70,a7),null()) != -1) == false);
            		}
            		else {
HXLINE(1252)			_hx_tmp = false;
            		}
HXDLIN(1252)		if (_hx_tmp) {
HXLINE(1253)			return this->_contents->addComponent(child);
            		}
HXLINE(1255)		return null();
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::addComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1258_addComponentAt)
HXLINE(1259)		bool _hx_tmp;
HXDLIN(1259)		bool _hx_tmp1;
HXDLIN(1259)		if ((::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >()) == false)) {
HXLINE(1259)			_hx_tmp1 = (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::VerticalScroll >()) == false);
            		}
            		else {
HXLINE(1259)			_hx_tmp1 = false;
            		}
HXDLIN(1259)		if (_hx_tmp1) {
HXLINE(1259)			_hx_tmp = ((child->classes->indexOf(HX_("scrollview-contents",15,b7,70,a7),null()) != -1) == false);
            		}
            		else {
HXLINE(1259)			_hx_tmp = false;
            		}
HXDLIN(1259)		if (_hx_tmp) {
HXLINE(1260)			return this->_contents->addComponentAt(child,index);
            		}
HXLINE(1262)		return null();
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1265_removeComponent)
HXLINE(1266)		bool _hx_tmp;
HXDLIN(1266)		bool _hx_tmp1;
HXDLIN(1266)		if ((::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >()) == false)) {
HXLINE(1266)			_hx_tmp1 = (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::VerticalScroll >()) == false);
            		}
            		else {
HXLINE(1266)			_hx_tmp1 = false;
            		}
HXDLIN(1266)		if (_hx_tmp1) {
HXLINE(1266)			_hx_tmp = ((child->classes->indexOf(HX_("scrollview-contents",15,b7,70,a7),null()) != -1) == false);
            		}
            		else {
HXLINE(1266)			_hx_tmp = false;
            		}
HXDLIN(1266)		if (_hx_tmp) {
HXLINE(1267)			return this->_contents->removeComponent(child,dispose,invalidate);
            		}
HXLINE(1269)		return null();
            	}


bool ScrollViewBuilder_obj::removeAllComponents(::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1272_removeAllComponents)
HXLINE(1273)		this->_contents->removeAllComponents(dispose);
HXLINE(1274)		return true;
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::removeComponentAt(int index,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1278_removeComponentAt)
HXDLIN(1278)		return this->_contents->removeComponentAt(index,dispose,invalidate);
            	}


int ScrollViewBuilder_obj::getComponentIndex( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1282_getComponentIndex)
HXDLIN(1282)		return this->_contents->getComponentIndex(child);
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1285_setComponentIndex)
HXLINE(1286)		bool _hx_tmp;
HXDLIN(1286)		bool _hx_tmp1;
HXDLIN(1286)		if ((::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >()) == false)) {
HXLINE(1286)			_hx_tmp1 = (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::VerticalScroll >()) == false);
            		}
            		else {
HXLINE(1286)			_hx_tmp1 = false;
            		}
HXDLIN(1286)		if (_hx_tmp1) {
HXLINE(1286)			_hx_tmp = ((child->classes->indexOf(HX_("scrollview-contents",15,b7,70,a7),null()) != -1) == false);
            		}
            		else {
HXLINE(1286)			_hx_tmp = false;
            		}
HXDLIN(1286)		if (_hx_tmp) {
HXLINE(1287)			return this->_contents->setComponentIndex(child,index);
            		}
HXLINE(1289)		return null();
            	}


 ::haxe::ui::core::Component ScrollViewBuilder_obj::getComponentAt(int index){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1293_getComponentAt)
HXDLIN(1293)		return this->_contents->getComponentAt(index);
            	}


void ScrollViewBuilder_obj::createContentContainer(::String layoutName){
            	HX_GC_STACKFRAME(&_hx_pos_23283b2891872f10_1297_createContentContainer)
HXDLIN(1297)		if (::hx::IsNull( this->_contents )) {
HXLINE(1298)			this->_contents =  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
HXLINE(1299)			this->_contents->addClass(HX_("scrollview-contents",15,b7,70,a7),null(),null());
HXLINE(1300)			this->_contents->set_id(HX_("scrollview-contents",15,b7,70,a7));
HXLINE(1301)			 ::haxe::ui::containers::Box _hx_tmp = this->_contents;
HXDLIN(1301)			_hx_tmp->set_layout(::haxe::ui::layouts::LayoutFactory_obj::createFromName(layoutName));
HXLINE(1302)			this->_component->addComponent(this->_contents);
HXLINE(1303)			this->_contentsLayoutName = layoutName;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewBuilder_obj,createContentContainer,(void))

Float ScrollViewBuilder_obj::horizontalConstraintModifier(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1308_horizontalConstraintModifier)
HXDLIN(1308)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,horizontalConstraintModifier,return )

Float ScrollViewBuilder_obj::verticalConstraintModifier(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1312_verticalConstraintModifier)
HXDLIN(1312)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,verticalConstraintModifier,return )

void ScrollViewBuilder_obj::checkScrolls(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1316_checkScrolls)
HXLINE(1317)		if ((this->_component->get_isNativeScroller() == true)) {
HXLINE(1318)			return;
            		}
HXLINE(1321)		 ::haxe::ui::geom::Size usableSize = this->_component->get_layout()->get_usableSize();
HXLINE(1323)		bool _hx_tmp;
HXDLIN(1323)		if ((this->get_virtualHorizontal() == false)) {
HXLINE(1323)			_hx_tmp = (usableSize->width > 0);
            		}
            		else {
HXLINE(1323)			_hx_tmp = false;
            		}
HXDLIN(1323)		if (_hx_tmp) {
HXLINE(1324)			 ::haxe::ui::containers::Box horizontalConstraint = this->_contents;
HXLINE(1325)			 ::haxe::ui::components::HorizontalScroll hscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(1326)			Float vcw = horizontalConstraint->get_width();
HXDLIN(1326)			Float vcw1 = (vcw + this->horizontalConstraintModifier());
HXLINE(1327)			if ((vcw1 > usableSize->width)) {
HXLINE(1328)				if (::hx::IsNull( hscroll )) {
HXLINE(1329)					hscroll = this->createHScroll();
            				}
HXLINE(1332)				hscroll->set_max((vcw1 - usableSize->width));
HXLINE(1333)				if (::hx::IsNull( this->_scrollview->get_hscrollThumbSize() )) {
HXLINE(1334)					Float _hx_tmp = (usableSize->width / vcw1);
HXDLIN(1334)					hscroll->set_pageSize((_hx_tmp * hscroll->get_max()));
            				}
HXLINE(1337)				hscroll->syncComponentValidation(null());
            			}
            			else {
HXLINE(1338)				if ((this->_scrollview->get_horizontalScrollPolicy() == HX_("always",cf,0e,d7,46))) {
HXLINE(1339)					if (::hx::IsNull( hscroll )) {
HXLINE(1340)						hscroll = this->createHScroll();
            					}
HXLINE(1342)					hscroll->set_max(( (Float)(0) ));
HXLINE(1343)					hscroll->set_pageSize(( (Float)(0) ));
            				}
            				else {
HXLINE(1345)					bool _hx_tmp;
HXDLIN(1345)					if ((this->_scrollview->get_horizontalScrollPolicy() != HX_("always",cf,0e,d7,46))) {
HXLINE(1345)						_hx_tmp = ::hx::IsNotNull( hscroll );
            					}
            					else {
HXLINE(1345)						_hx_tmp = false;
            					}
HXDLIN(1345)					if (_hx_tmp) {
HXLINE(1346)						this->destroyHScroll();
            					}
            				}
            			}
            		}
HXLINE(1351)		bool _hx_tmp1;
HXDLIN(1351)		if ((this->get_virtualVertical() == false)) {
HXLINE(1351)			_hx_tmp1 = (usableSize->height > 0);
            		}
            		else {
HXLINE(1351)			_hx_tmp1 = false;
            		}
HXDLIN(1351)		if (_hx_tmp1) {
HXLINE(1352)			 ::haxe::ui::containers::Box verticalConstraint = this->_contents;
HXLINE(1353)			 ::haxe::ui::components::VerticalScroll vscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(1354)			Float vch = verticalConstraint->get_height();
HXDLIN(1354)			Float vch1 = (vch + this->verticalConstraintModifier());
HXLINE(1355)			if ((vch1 > usableSize->height)) {
HXLINE(1356)				if (::hx::IsNull( vscroll )) {
HXLINE(1357)					vscroll = this->createVScroll();
            				}
HXLINE(1360)				vscroll->set_max((vch1 - usableSize->height));
HXLINE(1361)				if (::hx::IsNull( this->_scrollview->get_vscrollThumbSize() )) {
HXLINE(1362)					Float _hx_tmp = (usableSize->height / vch1);
HXDLIN(1362)					vscroll->set_pageSize((_hx_tmp * vscroll->get_max()));
            				}
HXLINE(1365)				vscroll->syncComponentValidation(null());
            			}
            			else {
HXLINE(1366)				if ((this->_scrollview->get_verticalScrollPolicy() == HX_("always",cf,0e,d7,46))) {
HXLINE(1367)					if (::hx::IsNull( vscroll )) {
HXLINE(1368)						vscroll = this->createVScroll();
            					}
HXLINE(1370)					vscroll->set_max(( (Float)(0) ));
HXLINE(1371)					vscroll->set_pageSize(( (Float)(0) ));
            				}
            				else {
HXLINE(1373)					bool _hx_tmp;
HXDLIN(1373)					if ((this->_scrollview->get_verticalScrollPolicy() != HX_("always",cf,0e,d7,46))) {
HXLINE(1373)						_hx_tmp = ::hx::IsNotNull( vscroll );
            					}
            					else {
HXLINE(1373)						_hx_tmp = false;
            					}
HXDLIN(1373)					if (_hx_tmp) {
HXLINE(1374)						this->destroyVScroll();
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,checkScrolls,(void))

 ::haxe::ui::components::HorizontalScroll ScrollViewBuilder_obj::createHScroll(){
            	HX_GC_STACKFRAME(&_hx_pos_23283b2891872f10_1381_createHScroll)
HXLINE(1382)		if ((this->_component->get_isNativeScroller() == true)) {
HXLINE(1383)			return null();
            		}
HXLINE(1386)		 ::haxe::ui::geom::Size usableSize = this->_component->get_layout()->get_usableSize();
HXLINE(1387)		 ::haxe::ui::containers::Box horizontalConstraint = this->_contents;
HXLINE(1388)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(1389)		Float vcw = horizontalConstraint->get_width();
HXDLIN(1389)		Float vcw1 = (vcw + this->horizontalConstraintModifier());
HXLINE(1391)		if ((usableSize->width <= 0)) {
HXLINE(1392)			return hscroll;
            		}
HXLINE(1395)		bool _hx_tmp;
HXDLIN(1395)		bool _hx_tmp1;
HXDLIN(1395)		if ((vcw1 > usableSize->width)) {
HXLINE(1395)			_hx_tmp1 = ::hx::IsNull( hscroll );
            		}
            		else {
HXLINE(1395)			_hx_tmp1 = false;
            		}
HXDLIN(1395)		if (!(_hx_tmp1)) {
HXLINE(1395)			_hx_tmp = (this->_scrollview->get_horizontalScrollPolicy() == HX_("always",cf,0e,d7,46));
            		}
            		else {
HXLINE(1395)			_hx_tmp = true;
            		}
HXDLIN(1395)		if (_hx_tmp) {
HXLINE(1396)			hscroll =  ::haxe::ui::components::HorizontalScroll_obj::__alloc( HX_CTX );
HXLINE(1397)			hscroll->set_scriptAccess(false);
HXLINE(1398)			hscroll->set_includeInLayout(!(this->_scrollview->get_autoHideScrolls()));
HXLINE(1399)			hscroll->set_hidden(this->_scrollview->get_autoHideScrolls());
HXLINE(1400)			hscroll->set_percentWidth(100);
HXLINE(1401)			hscroll->set_allowFocus(false);
HXLINE(1402)			hscroll->set_id(HX_("scrollview-hscroll",da,fc,19,11));
HXLINE(1403)			if (::hx::IsNotNull( this->_scrollview->get_hscrollThumbSize() )) {
HXLINE(1404)				hscroll->set_thumbSize(this->_scrollview->get_hscrollThumbSize());
            			}
HXLINE(1406)			this->_component->addComponent(hscroll);
HXLINE(1407)			this->_component->registerInternalEvents(null(),true);
            		}
HXLINE(1410)		if ((this->_scrollview->get_horizontalScrollPolicy() == HX_("never",8c,3e,30,99))) {
HXLINE(1411)			hscroll->set_includeInLayout(false);
HXLINE(1412)			hscroll->set_hidden(true);
            		}
            		else {
HXLINE(1413)			if ((this->_scrollview->get_horizontalScrollPolicy() == HX_("always",cf,0e,d7,46))) {
HXLINE(1414)				hscroll->set_includeInLayout(true);
HXLINE(1415)				hscroll->set_hidden(false);
            			}
            		}
HXLINE(1418)		return hscroll;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,createHScroll,return )

 ::haxe::ui::components::VerticalScroll ScrollViewBuilder_obj::createVScroll(){
            	HX_GC_STACKFRAME(&_hx_pos_23283b2891872f10_1422_createVScroll)
HXLINE(1423)		if ((this->_component->get_isNativeScroller() == true)) {
HXLINE(1424)			return null();
            		}
HXLINE(1427)		 ::haxe::ui::geom::Size usableSize = this->_component->get_layout()->get_usableSize();
HXLINE(1428)		 ::haxe::ui::containers::Box verticalConstraint = this->_contents;
HXLINE(1429)		 ::haxe::ui::components::VerticalScroll vscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(1430)		Float vch = verticalConstraint->get_height();
HXDLIN(1430)		Float vch1 = (vch + this->verticalConstraintModifier());
HXLINE(1432)		if ((usableSize->height <= 0)) {
HXLINE(1433)			return vscroll;
            		}
HXLINE(1436)		bool _hx_tmp;
HXDLIN(1436)		bool _hx_tmp1;
HXDLIN(1436)		if ((vch1 > usableSize->height)) {
HXLINE(1436)			_hx_tmp1 = ::hx::IsNull( vscroll );
            		}
            		else {
HXLINE(1436)			_hx_tmp1 = false;
            		}
HXDLIN(1436)		if (!(_hx_tmp1)) {
HXLINE(1436)			_hx_tmp = (this->_scrollview->get_verticalScrollPolicy() == HX_("always",cf,0e,d7,46));
            		}
            		else {
HXLINE(1436)			_hx_tmp = true;
            		}
HXDLIN(1436)		if (_hx_tmp) {
HXLINE(1437)			vscroll =  ::haxe::ui::components::VerticalScroll_obj::__alloc( HX_CTX );
HXLINE(1438)			vscroll->set_scriptAccess(false);
HXLINE(1439)			vscroll->set_includeInLayout(!(this->_scrollview->get_autoHideScrolls()));
HXLINE(1440)			vscroll->set_hidden(this->_scrollview->get_autoHideScrolls());
HXLINE(1441)			vscroll->set_percentHeight(100);
HXLINE(1442)			vscroll->set_allowFocus(false);
HXLINE(1443)			vscroll->set_id(HX_("scrollview-vscroll",68,7b,46,57));
HXLINE(1444)			if (::hx::IsNotNull( this->_scrollview->get_vscrollThumbSize() )) {
HXLINE(1445)				vscroll->set_thumbSize(this->_scrollview->get_vscrollThumbSize());
            			}
HXLINE(1447)			this->_component->addComponent(vscroll);
HXLINE(1448)			this->_component->registerInternalEvents(null(),true);
            		}
HXLINE(1451)		if ((this->_scrollview->get_verticalScrollPolicy() == HX_("never",8c,3e,30,99))) {
HXLINE(1452)			vscroll->set_includeInLayout(false);
HXLINE(1453)			vscroll->set_hidden(true);
            		}
            		else {
HXLINE(1454)			if ((this->_scrollview->get_verticalScrollPolicy() == HX_("always",cf,0e,d7,46))) {
HXLINE(1455)				vscroll->set_includeInLayout(true);
HXLINE(1456)				vscroll->set_hidden(false);
            			}
            		}
HXLINE(1459)		return vscroll;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,createVScroll,return )

void ScrollViewBuilder_obj::destroyHScroll(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1463_destroyHScroll)
HXLINE(1464)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(1465)		if (::hx::IsNotNull( hscroll )) {
HXLINE(1466)			this->_component->removeComponent(hscroll,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,destroyHScroll,(void))

void ScrollViewBuilder_obj::destroyVScroll(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1471_destroyVScroll)
HXLINE(1472)		 ::haxe::ui::components::VerticalScroll vscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(1473)		if (::hx::IsNotNull( vscroll )) {
HXLINE(1474)			this->_component->removeComponent(vscroll,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,destroyVScroll,(void))

void ScrollViewBuilder_obj::updateScrollRect(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		bool _hx_run( ::haxe::ui::core::Component c){
            			HX_GC_STACKFRAME(&_hx_pos_23283b2891872f10_1517_updateScrollRect)
HXLINE(1522)			if (c->hasEvent(::haxe::ui::events::UIEvent_obj::MOVE,null())) {
HXLINE(1523)				c->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::MOVE,null(),null()),null());
            			}
HXLINE(1525)			return true;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_23283b2891872f10_1478_updateScrollRect)
HXLINE(1479)		if (::hx::IsNull( this->_contents )) {
HXLINE(1480)			return;
            		}
HXLINE(1483)		 ::haxe::ui::geom::Size usableSize = this->_component->get_layout()->get_usableSize();
HXLINE(1485)		Float usableSize1 = usableSize->width;
HXDLIN(1485)		Float clipCX = (usableSize1 - this->horizontalConstraintModifier());
HXLINE(1486)		if ((clipCX > this->_contents->get_width())) {
HXLINE(1487)			Float clipCX1 = this->_contents->get_width();
HXDLIN(1487)			clipCX = (clipCX1 + this->horizontalConstraintModifier());
            		}
HXLINE(1489)		Float usableSize2 = usableSize->height;
HXDLIN(1489)		Float clipCY = (usableSize2 - this->verticalConstraintModifier());
HXLINE(1490)		if ((clipCY > this->_contents->get_height())) {
HXLINE(1491)			Float clipCY1 = this->_contents->get_height();
HXDLIN(1491)			clipCY = (clipCY1 + this->verticalConstraintModifier());
            		}
HXLINE(1494)		Float xpos = ( (Float)(0) );
HXLINE(1495)		Float ypos = ( (Float)(0) );
HXLINE(1497)		if ((this->get_virtualHorizontal() == false)) {
HXLINE(1498)			 ::haxe::ui::components::HorizontalScroll hscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(1499)			if (::hx::IsNotNull( hscroll )) {
HXLINE(1500)				xpos = hscroll->get_pos();
            			}
            		}
            		else {
HXLINE(1502)			if (::hx::IsNotNull( this->_contents->get_componentClipRect() )) {
HXLINE(1503)				clipCX = this->_contents->get_componentClipRect()->width;
            			}
            		}
HXLINE(1506)		if ((this->get_virtualVertical() == false)) {
HXLINE(1507)			 ::haxe::ui::components::VerticalScroll vscroll = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(1508)			if (::hx::IsNotNull( vscroll )) {
HXLINE(1509)				ypos = vscroll->get_pos();
            			}
            		}
            		else {
HXLINE(1511)			if (::hx::IsNotNull( this->_contents->get_componentClipRect() )) {
HXLINE(1512)				clipCY = this->_contents->get_componentClipRect()->height;
            			}
            		}
HXLINE(1515)		 ::haxe::ui::geom::Rectangle newClipRect =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,::Math_obj::fround(xpos),::Math_obj::fround(ypos),::Math_obj::fround(clipCX),::Math_obj::fround(clipCY));
HXLINE(1516)		this->_contents->set_componentClipRect(newClipRect);
HXLINE(1517)		this->_contents->walkComponents( ::Dynamic(new _hx_Closure_0()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,updateScrollRect,(void))

bool ScrollViewBuilder_obj::get_virtualHorizontal(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1531_get_virtualHorizontal)
HXDLIN(1531)		return this->_scrollview->get_virtual();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,get_virtualHorizontal,return )

bool ScrollViewBuilder_obj::get_virtualVertical(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1536_get_virtualVertical)
HXDLIN(1536)		return this->_scrollview->get_virtual();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,get_virtualVertical,return )

void ScrollViewBuilder_obj::onVirtualChanged(){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1539_onVirtualChanged)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewBuilder_obj,onVirtualChanged,(void))

void ScrollViewBuilder_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_23283b2891872f10_1543_applyStyle)
HXLINE(1544)		this->super::applyStyle(style);
HXLINE(1545)		if ((style->mode == HX_("mobile",62,ac,77,bf))) {
HXLINE(1546)			this->_scrollview->set_autoHideScrolls(true);
            		}
HXLINE(1549)		bool _hx_tmp;
HXDLIN(1549)		if (::hx::IsNotNull( style->contentWidth )) {
HXLINE(1549)			 ::Dynamic style1 = style->contentWidth;
HXDLIN(1549)			_hx_tmp = ::hx::IsNotEq( style1,this->_scrollview->get_contentWidth() );
            		}
            		else {
HXLINE(1549)			_hx_tmp = false;
            		}
HXDLIN(1549)		if (_hx_tmp) {
HXLINE(1550)			this->_scrollview->set_contentWidth(style->contentWidth);
            		}
            		else {
HXLINE(1551)			bool _hx_tmp;
HXDLIN(1551)			if (::hx::IsNotNull( style->contentWidthPercent )) {
HXLINE(1551)				 ::Dynamic style1 = style->contentWidthPercent;
HXDLIN(1551)				_hx_tmp = ::hx::IsNotEq( style1,this->_scrollview->get_percentContentWidth() );
            			}
            			else {
HXLINE(1551)				_hx_tmp = false;
            			}
HXDLIN(1551)			if (_hx_tmp) {
HXLINE(1552)				this->_scrollview->set_percentContentWidth(style->contentWidthPercent);
            			}
            		}
HXLINE(1555)		bool _hx_tmp1;
HXDLIN(1555)		if (::hx::IsNotNull( style->contentHeight )) {
HXLINE(1555)			 ::Dynamic style1 = style->contentHeight;
HXDLIN(1555)			_hx_tmp1 = ::hx::IsNotEq( style1,this->_scrollview->get_contentHeight() );
            		}
            		else {
HXLINE(1555)			_hx_tmp1 = false;
            		}
HXDLIN(1555)		if (_hx_tmp1) {
HXLINE(1556)			this->_scrollview->set_contentHeight(style->contentHeight);
            		}
            		else {
HXLINE(1557)			bool _hx_tmp;
HXDLIN(1557)			if (::hx::IsNotNull( style->contentHeightPercent )) {
HXLINE(1557)				 ::Dynamic style1 = style->contentHeightPercent;
HXDLIN(1557)				_hx_tmp = ::hx::IsNotEq( style1,this->_scrollview->get_percentContentHeight() );
            			}
            			else {
HXLINE(1557)				_hx_tmp = false;
            			}
HXDLIN(1557)			if (_hx_tmp) {
HXLINE(1558)				this->_scrollview->set_percentContentHeight(style->contentHeightPercent);
            			}
            		}
            	}



::hx::ObjectPtr< ScrollViewBuilder_obj > ScrollViewBuilder_obj::__new( ::haxe::ui::containers::ScrollView scrollview) {
	::hx::ObjectPtr< ScrollViewBuilder_obj > __this = new ScrollViewBuilder_obj();
	__this->__construct(scrollview);
	return __this;
}

::hx::ObjectPtr< ScrollViewBuilder_obj > ScrollViewBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview) {
	ScrollViewBuilder_obj *__this = (ScrollViewBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollViewBuilder_obj), true, "haxe.ui.containers.ScrollViewBuilder"));
	*(void **)__this = ScrollViewBuilder_obj::_hx_vtable;
	__this->__construct(scrollview);
	return __this;
}

ScrollViewBuilder_obj::ScrollViewBuilder_obj()
{
}

void ScrollViewBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollViewBuilder);
	HX_MARK_MEMBER_NAME(_scrollview,"_scrollview");
	HX_MARK_MEMBER_NAME(_contents,"_contents");
	HX_MARK_MEMBER_NAME(_contentsLayoutName,"_contentsLayoutName");
	HX_MARK_MEMBER_NAME(virtualHorizontal,"virtualHorizontal");
	HX_MARK_MEMBER_NAME(virtualVertical,"virtualVertical");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollViewBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollview,"_scrollview");
	HX_VISIT_MEMBER_NAME(_contents,"_contents");
	HX_VISIT_MEMBER_NAME(_contentsLayoutName,"_contentsLayoutName");
	HX_VISIT_MEMBER_NAME(virtualHorizontal,"virtualHorizontal");
	HX_VISIT_MEMBER_NAME(virtualVertical,"virtualVertical");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScrollViewBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_contents") ) { return ::hx::Val( _contents ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { return ::hx::Val( _scrollview ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkScrolls") ) { return ::hx::Val( checkScrolls_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createHScroll") ) { return ::hx::Val( createHScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"createVScroll") ) { return ::hx::Val( createVScroll_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addComponentAt") ) { return ::hx::Val( addComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentAt") ) { return ::hx::Val( getComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroyHScroll") ) { return ::hx::Val( destroyHScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroyVScroll") ) { return ::hx::Val( destroyVScroll_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"virtualVertical") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_virtualVertical() : virtualVertical ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateScrollRect") ) { return ::hx::Val( updateScrollRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"onVirtualChanged") ) { return ::hx::Val( onVirtualChanged_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_numComponents") ) { return ::hx::Val( get_numComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponentAt") ) { return ::hx::Val( removeComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentIndex") ) { return ::hx::Val( getComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return ::hx::Val( setComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"virtualHorizontal") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_virtualHorizontal() : virtualHorizontal ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_contentsLayoutName") ) { return ::hx::Val( _contentsLayoutName ); }
		if (HX_FIELD_EQ(inName,"removeAllComponents") ) { return ::hx::Val( removeAllComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_virtualVertical") ) { return ::hx::Val( get_virtualVertical_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_virtualHorizontal") ) { return ::hx::Val( get_virtualHorizontal_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createContentContainer") ) { return ::hx::Val( createContentContainer_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"verticalConstraintModifier") ) { return ::hx::Val( verticalConstraintModifier_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"horizontalConstraintModifier") ) { return ::hx::Val( horizontalConstraintModifier_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScrollViewBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_contents") ) { _contents=inValue.Cast<  ::haxe::ui::containers::Box >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { _scrollview=inValue.Cast<  ::haxe::ui::containers::ScrollView >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"virtualVertical") ) { virtualVertical=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"virtualHorizontal") ) { virtualHorizontal=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_contentsLayoutName") ) { _contentsLayoutName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollViewBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_scrollview",11,62,bf,f3));
	outFields->push(HX_("_contents",79,fc,b9,76));
	outFields->push(HX_("_contentsLayoutName",ee,9b,fd,2c));
	outFields->push(HX_("virtualHorizontal",cf,ba,86,d2));
	outFields->push(HX_("virtualVertical",a1,99,06,63));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScrollViewBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::ScrollView */ ,(int)offsetof(ScrollViewBuilder_obj,_scrollview),HX_("_scrollview",11,62,bf,f3)},
	{::hx::fsObject /*  ::haxe::ui::containers::Box */ ,(int)offsetof(ScrollViewBuilder_obj,_contents),HX_("_contents",79,fc,b9,76)},
	{::hx::fsString,(int)offsetof(ScrollViewBuilder_obj,_contentsLayoutName),HX_("_contentsLayoutName",ee,9b,fd,2c)},
	{::hx::fsBool,(int)offsetof(ScrollViewBuilder_obj,virtualHorizontal),HX_("virtualHorizontal",cf,ba,86,d2)},
	{::hx::fsBool,(int)offsetof(ScrollViewBuilder_obj,virtualVertical),HX_("virtualVertical",a1,99,06,63)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScrollViewBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollViewBuilder_obj_sMemberFields[] = {
	HX_("_scrollview",11,62,bf,f3),
	HX_("_contents",79,fc,b9,76),
	HX_("_contentsLayoutName",ee,9b,fd,2c),
	HX_("create",fc,66,0f,7c),
	HX_("destroy",fa,2c,86,24),
	HX_("get_numComponents",53,76,26,3b),
	HX_("addComponent",5c,12,a8,0e),
	HX_("addComponentAt",6f,9a,96,16),
	HX_("removeComponent",d9,8b,72,50),
	HX_("removeAllComponents",b3,1e,97,3c),
	HX_("removeComponentAt",2c,2d,10,3b),
	HX_("getComponentIndex",4b,fc,8e,7f),
	HX_("setComponentIndex",57,d4,fc,a2),
	HX_("getComponentAt",1a,e6,5d,08),
	HX_("createContentContainer",e4,d3,42,a7),
	HX_("horizontalConstraintModifier",d8,e6,93,6e),
	HX_("verticalConstraintModifier",ea,f2,b6,ce),
	HX_("checkScrolls",de,eb,5e,1e),
	HX_("createHScroll",f9,62,f4,48),
	HX_("createVScroll",87,e1,20,8f),
	HX_("destroyHScroll",bb,78,1d,cd),
	HX_("destroyVScroll",49,f7,49,13),
	HX_("updateScrollRect",3a,ab,52,53),
	HX_("virtualHorizontal",cf,ba,86,d2),
	HX_("get_virtualHorizontal",a6,bd,34,51),
	HX_("virtualVertical",a1,99,06,63),
	HX_("get_virtualVertical",b8,68,11,ee),
	HX_("onVirtualChanged",a8,ef,1c,9b),
	HX_("applyStyle",e3,20,6f,2f),
	::String(null()) };

::hx::Class ScrollViewBuilder_obj::__mClass;

void ScrollViewBuilder_obj::__register()
{
	ScrollViewBuilder_obj _hx_dummy;
	ScrollViewBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.ScrollViewBuilder",bf,ee,2c,f4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollViewBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollViewBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollViewBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollViewBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
