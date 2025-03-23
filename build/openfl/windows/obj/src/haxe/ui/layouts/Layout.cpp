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
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_AbsoluteLayout
#include <haxe/ui/layouts/AbsoluteLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_9_new,"haxe.ui.layouts.Layout","new",0xae62da13,"haxe.ui.layouts.Layout.new","haxe/ui/layouts/Layout.hx",9,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_16_get_component,"haxe.ui.layouts.Layout","get_component",0x34d10c07,"haxe.ui.layouts.Layout.get_component","haxe/ui/layouts/Layout.hx",16,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_18_set_component,"haxe.ui.layouts.Layout","set_component",0x79d6ee13,"haxe.ui.layouts.Layout.set_component","haxe/ui/layouts/Layout.hx",18,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_26_findComponent,"haxe.ui.layouts.Layout","findComponent",0x541ef8b7,"haxe.ui.layouts.Layout.findComponent","haxe/ui/layouts/Layout.hx",26,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_33_findComponents,"haxe.ui.layouts.Layout","findComponents",0x46faa7dc,"haxe.ui.layouts.Layout.findComponents","haxe/ui/layouts/Layout.hx",33,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_42_refresh,"haxe.ui.layouts.Layout","refresh",0xfaa2390e,"haxe.ui.layouts.Layout.refresh","haxe/ui/layouts/Layout.hx",42,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_52_autoSize,"haxe.ui.layouts.Layout","autoSize",0xf32b7d3d,"haxe.ui.layouts.Layout.autoSize","haxe/ui/layouts/Layout.hx",52,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_76_marginTop,"haxe.ui.layouts.Layout","marginTop",0x663e50fa,"haxe.ui.layouts.Layout.marginTop","haxe/ui/layouts/Layout.hx",76,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_83_marginLeft,"haxe.ui.layouts.Layout","marginLeft",0x0af73602,"haxe.ui.layouts.Layout.marginLeft","haxe/ui/layouts/Layout.hx",83,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_91_marginBottom,"haxe.ui.layouts.Layout","marginBottom",0xeb63c9a6,"haxe.ui.layouts.Layout.marginBottom","haxe/ui/layouts/Layout.hx",91,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_99_marginRight,"haxe.ui.layouts.Layout","marginRight",0x04651981,"haxe.ui.layouts.Layout.marginRight","haxe/ui/layouts/Layout.hx",99,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_107_childPaddingTop,"haxe.ui.layouts.Layout","childPaddingTop",0x26979033,"haxe.ui.layouts.Layout.childPaddingTop","haxe/ui/layouts/Layout.hx",107,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_114_childPaddingLeft,"haxe.ui.layouts.Layout","childPaddingLeft",0x98b548a9,"haxe.ui.layouts.Layout.childPaddingLeft","haxe/ui/layouts/Layout.hx",114,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_122_childPaddingBottom,"haxe.ui.layouts.Layout","childPaddingBottom",0xf2c9140d,"haxe.ui.layouts.Layout.childPaddingBottom","haxe/ui/layouts/Layout.hx",122,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_130_childPaddingRight,"haxe.ui.layouts.Layout","childPaddingRight",0x7cf758fa,"haxe.ui.layouts.Layout.childPaddingRight","haxe/ui/layouts/Layout.hx",130,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_138_hidden,"haxe.ui.layouts.Layout","hidden",0xfb23c797,"haxe.ui.layouts.Layout.hidden","haxe/ui/layouts/Layout.hx",138,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_145_horizontalAlign,"haxe.ui.layouts.Layout","horizontalAlign",0x86f7d974,"haxe.ui.layouts.Layout.horizontalAlign","haxe/ui/layouts/Layout.hx",145,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_152_verticalAlign,"haxe.ui.layouts.Layout","verticalAlign",0x489565e2,"haxe.ui.layouts.Layout.verticalAlign","haxe/ui/layouts/Layout.hx",152,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_159_fixedMinWidth,"haxe.ui.layouts.Layout","fixedMinWidth",0x6d8bb41b,"haxe.ui.layouts.Layout.fixedMinWidth","haxe/ui/layouts/Layout.hx",159,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_167_fixedMinHeight,"haxe.ui.layouts.Layout","fixedMinHeight",0x23015c32,"haxe.ui.layouts.Layout.fixedMinHeight","haxe/ui/layouts/Layout.hx",167,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_179_get_borderSize,"haxe.ui.layouts.Layout","get_borderSize",0xaee8c543,"haxe.ui.layouts.Layout.get_borderSize","haxe/ui/layouts/Layout.hx",179,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_192_get_paddingLeft,"haxe.ui.layouts.Layout","get_paddingLeft",0xd9584c42,"haxe.ui.layouts.Layout.get_paddingLeft","haxe/ui/layouts/Layout.hx",192,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_200_get_paddingTop,"haxe.ui.layouts.Layout","get_paddingTop",0xe200c2ba,"haxe.ui.layouts.Layout.get_paddingTop","haxe/ui/layouts/Layout.hx",200,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_208_get_paddingBottom,"haxe.ui.layouts.Layout","get_paddingBottom",0xe4e6efe6,"haxe.ui.layouts.Layout.get_paddingBottom","haxe/ui/layouts/Layout.hx",208,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_216_get_paddingRight,"haxe.ui.layouts.Layout","get_paddingRight",0xcaf77b41,"haxe.ui.layouts.Layout.get_paddingRight","haxe/ui/layouts/Layout.hx",216,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_224_get_horizontalSpacing,"haxe.ui.layouts.Layout","get_horizontalSpacing",0x4b45f849,"haxe.ui.layouts.Layout.get_horizontalSpacing","haxe/ui/layouts/Layout.hx",224,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_232_get_verticalSpacing,"haxe.ui.layouts.Layout","get_verticalSpacing",0xa49e6877,"haxe.ui.layouts.Layout.get_verticalSpacing","haxe/ui/layouts/Layout.hx",232,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_246_get_innerWidth,"haxe.ui.layouts.Layout","get_innerWidth",0x18253a06,"haxe.ui.layouts.Layout.get_innerWidth","haxe/ui/layouts/Layout.hx",246,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_254_get_innerHeight,"haxe.ui.layouts.Layout","get_innerHeight",0xbebd03e7,"haxe.ui.layouts.Layout.get_innerHeight","haxe/ui/layouts/Layout.hx",254,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_269_resizeChildren,"haxe.ui.layouts.Layout","resizeChildren",0xf3358080,"haxe.ui.layouts.Layout.resizeChildren","haxe/ui/layouts/Layout.hx",269,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_272_repositionChildren,"haxe.ui.layouts.Layout","repositionChildren",0x0fb6d868,"haxe.ui.layouts.Layout.repositionChildren","haxe/ui/layouts/Layout.hx",272,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_276_get_usableSize,"haxe.ui.layouts.Layout","get_usableSize",0x70fac94f,"haxe.ui.layouts.Layout.get_usableSize","haxe/ui/layouts/Layout.hx",276,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_294_get_usableWidth,"haxe.ui.layouts.Layout","get_usableWidth",0xb7ff09b8,"haxe.ui.layouts.Layout.get_usableWidth","haxe/ui/layouts/Layout.hx",294,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_299_get_usableHeight,"haxe.ui.layouts.Layout","get_usableHeight",0xfd78eff5,"haxe.ui.layouts.Layout.get_usableHeight","haxe/ui/layouts/Layout.hx",299,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_303_calcAutoWidth,"haxe.ui.layouts.Layout","calcAutoWidth",0x4bf4c835,"haxe.ui.layouts.Layout.calcAutoWidth","haxe/ui/layouts/Layout.hx",303,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_307_calcAutoHeight,"haxe.ui.layouts.Layout","calcAutoHeight",0xe089ded8,"haxe.ui.layouts.Layout.calcAutoHeight","haxe/ui/layouts/Layout.hx",307,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_310_calcAutoSize,"haxe.ui.layouts.Layout","calcAutoSize",0xa7992972,"haxe.ui.layouts.Layout.calcAutoSize","haxe/ui/layouts/Layout.hx",310,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_357_excluded,"haxe.ui.layouts.Layout","excluded",0xe4e62db7,"haxe.ui.layouts.Layout.excluded","haxe/ui/layouts/Layout.hx",357,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_4e52413c7bbffa61_700_cloneLayout,"haxe.ui.layouts.Layout","cloneLayout",0xc5990e9a,"haxe.ui.layouts.Layout.cloneLayout","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_02051fbbdf92c3de_113_self,"haxe.ui.layouts.Layout","self",0xeb69fe79,"haxe.ui.layouts.Layout.self","haxe/ui/macros/LayoutMacros.hx",113,0xe44eaad7)
namespace haxe{
namespace ui{
namespace layouts{

void Layout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_9_new)
            	}

Dynamic Layout_obj::__CreateEmpty() { return new Layout_obj; }

void *Layout_obj::_hx_vtable = 0;

Dynamic Layout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Layout_obj > _hx_result = new Layout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Layout_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3799f835;
}

static ::haxe::ui::layouts::ILayout_obj _hx_haxe_ui_layouts_Layout__hx_haxe_ui_layouts_ILayout= {
};

void *Layout_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xcbfa36e4: return &_hx_haxe_ui_layouts_Layout__hx_haxe_ui_layouts_ILayout;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::haxe::ui::core::Component Layout_obj::get_component(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_16_get_component)
HXDLIN(  16)		return this->_component;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_component,return )

 ::haxe::ui::core::Component Layout_obj::set_component( ::haxe::ui::core::Component value){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_18_set_component)
HXLINE(  19)		this->_component = value;
HXLINE(  20)		if (::hx::IsNotNull( this->_component )) {
HXLINE(  21)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  21)			bool _hx_tmp;
HXDLIN(  21)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE(  21)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE(  21)				_hx_tmp = true;
            			}
HXDLIN(  21)			if (!(_hx_tmp)) {
HXLINE(  21)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE(  23)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,set_component,return )

 ::Dynamic Layout_obj::findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String __o_searchType){
            		::String searchType = __o_searchType;
            		if (::hx::IsNull(__o_searchType)) searchType = HX_("id",db,5b,00,00);
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_26_findComponent)
HXLINE(  27)		if (::hx::IsNull( this->_component )) {
HXLINE(  28)			return null();
            		}
HXLINE(  30)		return this->_component->findComponent(criteria,type,recursive,searchType);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Layout_obj,findComponent,return )

::cpp::VirtualArray Layout_obj::findComponents(::String styleName,::hx::Class type,::hx::Null< int >  __o_maxDepth){
            		int maxDepth = __o_maxDepth.Default(5);
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_33_findComponents)
HXLINE(  34)		if (::hx::IsNull( this->_component )) {
HXLINE(  35)			return null();
            		}
HXLINE(  37)		return this->_component->findComponents(styleName,type,maxDepth);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Layout_obj,findComponents,return )

void Layout_obj::refresh(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_42_refresh)
HXDLIN(  42)		bool _hx_tmp;
HXDLIN(  42)		if (::hx::IsNotNull( this->_component )) {
HXDLIN(  42)			_hx_tmp = (this->_component->get_isReady() == true);
            		}
            		else {
HXDLIN(  42)			_hx_tmp = false;
            		}
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  44)			this->resizeChildren();
HXLINE(  46)			this->_component->handlePreReposition();
HXLINE(  47)			this->repositionChildren();
HXLINE(  48)			this->_component->handlePostReposition();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,refresh,(void))

bool Layout_obj::autoSize(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_52_autoSize)
HXLINE(  53)		if ((this->get_component()->get_isReady() == false)) {
HXLINE(  54)			return false;
            		}
HXLINE(  57)		 ::Dynamic calculatedWidth = null();
HXLINE(  58)		 ::Dynamic calculatedHeight = null();
HXLINE(  59)		bool _hx_tmp;
HXDLIN(  59)		if ((this->get_component()->get_autoWidth() != true)) {
HXLINE(  59)			_hx_tmp = (this->get_component()->get_autoHeight() == true);
            		}
            		else {
HXLINE(  59)			_hx_tmp = true;
            		}
HXDLIN(  59)		if (_hx_tmp) {
HXLINE(  60)			 ::haxe::ui::geom::Size size = this->calcAutoSize(null());
HXLINE(  61)			if ((this->get_component()->get_autoWidth() == true)) {
HXLINE(  62)				calculatedWidth = size->width;
            			}
HXLINE(  64)			if ((this->get_component()->get_autoHeight() == true)) {
HXLINE(  65)				calculatedHeight = size->height;
            			}
HXLINE(  67)			this->get_component()->resizeComponent(calculatedWidth,calculatedHeight);
            		}
HXLINE(  70)		if (::hx::IsNull( calculatedWidth )) {
HXLINE(  70)			return ::hx::IsNotNull( calculatedHeight );
            		}
            		else {
HXLINE(  70)			return true;
            		}
HXDLIN(  70)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,autoSize,return )

Float Layout_obj::marginTop( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_76_marginTop)
HXLINE(  77)		bool _hx_tmp;
HXDLIN(  77)		bool _hx_tmp1;
HXDLIN(  77)		if (::hx::IsNotNull( child )) {
HXLINE(  77)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE(  77)			_hx_tmp1 = true;
            		}
HXDLIN(  77)		if (!(_hx_tmp1)) {
HXLINE(  77)			_hx_tmp = ::hx::IsNull( child->get_style()->marginTop );
            		}
            		else {
HXLINE(  77)			_hx_tmp = true;
            		}
HXDLIN(  77)		if (_hx_tmp) {
HXLINE(  78)			return ( (Float)(0) );
            		}
HXLINE(  80)		return ( (Float)(child->get_style()->marginTop) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,marginTop,return )

Float Layout_obj::marginLeft( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_83_marginLeft)
HXLINE(  84)		bool _hx_tmp;
HXDLIN(  84)		bool _hx_tmp1;
HXDLIN(  84)		if (::hx::IsNotNull( child )) {
HXLINE(  84)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE(  84)			_hx_tmp1 = true;
            		}
HXDLIN(  84)		if (!(_hx_tmp1)) {
HXLINE(  84)			_hx_tmp = ::hx::IsNull( child->get_style()->marginLeft );
            		}
            		else {
HXLINE(  84)			_hx_tmp = true;
            		}
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  85)			return ( (Float)(0) );
            		}
HXLINE(  88)		return ( (Float)(child->get_style()->marginLeft) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,marginLeft,return )

Float Layout_obj::marginBottom( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_91_marginBottom)
HXLINE(  92)		bool _hx_tmp;
HXDLIN(  92)		bool _hx_tmp1;
HXDLIN(  92)		if (::hx::IsNotNull( child )) {
HXLINE(  92)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE(  92)			_hx_tmp1 = true;
            		}
HXDLIN(  92)		if (!(_hx_tmp1)) {
HXLINE(  92)			_hx_tmp = ::hx::IsNull( child->get_style()->marginBottom );
            		}
            		else {
HXLINE(  92)			_hx_tmp = true;
            		}
HXDLIN(  92)		if (_hx_tmp) {
HXLINE(  93)			return ( (Float)(0) );
            		}
HXLINE(  96)		return ( (Float)(child->get_style()->marginBottom) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,marginBottom,return )

Float Layout_obj::marginRight( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_99_marginRight)
HXLINE( 100)		bool _hx_tmp;
HXDLIN( 100)		bool _hx_tmp1;
HXDLIN( 100)		if (::hx::IsNotNull( child )) {
HXLINE( 100)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 100)			_hx_tmp1 = true;
            		}
HXDLIN( 100)		if (!(_hx_tmp1)) {
HXLINE( 100)			_hx_tmp = ::hx::IsNull( child->get_style()->marginRight );
            		}
            		else {
HXLINE( 100)			_hx_tmp = true;
            		}
HXDLIN( 100)		if (_hx_tmp) {
HXLINE( 101)			return ( (Float)(0) );
            		}
HXLINE( 104)		return ( (Float)(child->get_style()->marginRight) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,marginRight,return )

Float Layout_obj::childPaddingTop( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_107_childPaddingTop)
HXLINE( 108)		bool _hx_tmp;
HXDLIN( 108)		bool _hx_tmp1;
HXDLIN( 108)		if (::hx::IsNotNull( child )) {
HXLINE( 108)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 108)			_hx_tmp1 = true;
            		}
HXDLIN( 108)		if (!(_hx_tmp1)) {
HXLINE( 108)			_hx_tmp = ::hx::IsNull( child->get_style()->paddingTop );
            		}
            		else {
HXLINE( 108)			_hx_tmp = true;
            		}
HXDLIN( 108)		if (_hx_tmp) {
HXLINE( 109)			return ( (Float)(0) );
            		}
HXLINE( 111)		return ( (Float)(child->get_style()->paddingTop) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,childPaddingTop,return )

Float Layout_obj::childPaddingLeft( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_114_childPaddingLeft)
HXLINE( 115)		bool _hx_tmp;
HXDLIN( 115)		bool _hx_tmp1;
HXDLIN( 115)		if (::hx::IsNotNull( child )) {
HXLINE( 115)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 115)			_hx_tmp1 = true;
            		}
HXDLIN( 115)		if (!(_hx_tmp1)) {
HXLINE( 115)			_hx_tmp = ::hx::IsNull( child->get_style()->paddingLeft );
            		}
            		else {
HXLINE( 115)			_hx_tmp = true;
            		}
HXDLIN( 115)		if (_hx_tmp) {
HXLINE( 116)			return ( (Float)(0) );
            		}
HXLINE( 119)		return ( (Float)(child->get_style()->paddingLeft) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,childPaddingLeft,return )

Float Layout_obj::childPaddingBottom( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_122_childPaddingBottom)
HXLINE( 123)		bool _hx_tmp;
HXDLIN( 123)		bool _hx_tmp1;
HXDLIN( 123)		if (::hx::IsNotNull( child )) {
HXLINE( 123)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 123)			_hx_tmp1 = true;
            		}
HXDLIN( 123)		if (!(_hx_tmp1)) {
HXLINE( 123)			_hx_tmp = ::hx::IsNull( child->get_style()->paddingBottom );
            		}
            		else {
HXLINE( 123)			_hx_tmp = true;
            		}
HXDLIN( 123)		if (_hx_tmp) {
HXLINE( 124)			return ( (Float)(0) );
            		}
HXLINE( 127)		return ( (Float)(child->get_style()->paddingBottom) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,childPaddingBottom,return )

Float Layout_obj::childPaddingRight( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_130_childPaddingRight)
HXLINE( 131)		bool _hx_tmp;
HXDLIN( 131)		bool _hx_tmp1;
HXDLIN( 131)		if (::hx::IsNotNull( child )) {
HXLINE( 131)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 131)			_hx_tmp1 = true;
            		}
HXDLIN( 131)		if (!(_hx_tmp1)) {
HXLINE( 131)			_hx_tmp = ::hx::IsNull( child->get_style()->paddingRight );
            		}
            		else {
HXLINE( 131)			_hx_tmp = true;
            		}
HXDLIN( 131)		if (_hx_tmp) {
HXLINE( 132)			return ( (Float)(0) );
            		}
HXLINE( 135)		return ( (Float)(child->get_style()->paddingRight) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,childPaddingRight,return )

bool Layout_obj::hidden( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_138_hidden)
HXLINE( 139)		if (::hx::IsNull( c )) {
HXLINE( 140)			c = this->get_component();
            		}
HXLINE( 142)		return c->get_hidden();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,hidden,return )

::String Layout_obj::horizontalAlign( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_145_horizontalAlign)
HXLINE( 146)		bool _hx_tmp;
HXDLIN( 146)		bool _hx_tmp1;
HXDLIN( 146)		if (::hx::IsNotNull( child )) {
HXLINE( 146)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 146)			_hx_tmp1 = true;
            		}
HXDLIN( 146)		if (!(_hx_tmp1)) {
HXLINE( 146)			_hx_tmp = ::hx::IsNull( child->get_style()->horizontalAlign );
            		}
            		else {
HXLINE( 146)			_hx_tmp = true;
            		}
HXDLIN( 146)		if (_hx_tmp) {
HXLINE( 147)			return HX_("left",07,08,b0,47);
            		}
HXLINE( 149)		return child->get_style()->horizontalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,horizontalAlign,return )

::String Layout_obj::verticalAlign( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_152_verticalAlign)
HXLINE( 153)		bool _hx_tmp;
HXDLIN( 153)		bool _hx_tmp1;
HXDLIN( 153)		if (::hx::IsNotNull( child )) {
HXLINE( 153)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 153)			_hx_tmp1 = true;
            		}
HXDLIN( 153)		if (!(_hx_tmp1)) {
HXLINE( 153)			_hx_tmp = ::hx::IsNull( child->get_style()->verticalAlign );
            		}
            		else {
HXLINE( 153)			_hx_tmp = true;
            		}
HXDLIN( 153)		if (_hx_tmp) {
HXLINE( 154)			return HX_("top",95,66,58,00);
            		}
HXLINE( 156)		return child->get_style()->verticalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,verticalAlign,return )

bool Layout_obj::fixedMinWidth( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_159_fixedMinWidth)
HXLINE( 160)		bool fixedMinWidth = false;
HXLINE( 161)		bool _hx_tmp;
HXDLIN( 161)		bool _hx_tmp1;
HXDLIN( 161)		if (::hx::IsNotNull( child )) {
HXLINE( 161)			_hx_tmp1 = ::hx::IsNotNull( child->get_style() );
            		}
            		else {
HXLINE( 161)			_hx_tmp1 = false;
            		}
HXDLIN( 161)		if (_hx_tmp1) {
HXLINE( 161)			_hx_tmp = ::hx::IsNotNull( child->get_style()->minWidth );
            		}
            		else {
HXLINE( 161)			_hx_tmp = false;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 162)			 ::Dynamic fixedMinWidth1 = child->get_componentWidth();
HXDLIN( 162)			fixedMinWidth = ::hx::IsLessEq( fixedMinWidth1,child->get_style()->minWidth );
            		}
HXLINE( 164)		return fixedMinWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,fixedMinWidth,return )

bool Layout_obj::fixedMinHeight( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_167_fixedMinHeight)
HXLINE( 168)		bool fixedMinHeight = false;
HXLINE( 169)		bool _hx_tmp;
HXDLIN( 169)		bool _hx_tmp1;
HXDLIN( 169)		if (::hx::IsNotNull( child )) {
HXLINE( 169)			_hx_tmp1 = ::hx::IsNotNull( child->get_style() );
            		}
            		else {
HXLINE( 169)			_hx_tmp1 = false;
            		}
HXDLIN( 169)		if (_hx_tmp1) {
HXLINE( 169)			_hx_tmp = ::hx::IsNotNull( child->get_style()->minHeight );
            		}
            		else {
HXLINE( 169)			_hx_tmp = false;
            		}
HXDLIN( 169)		if (_hx_tmp) {
HXLINE( 170)			 ::Dynamic fixedMinHeight1 = child->get_componentHeight();
HXDLIN( 170)			fixedMinHeight = ::hx::IsLessEq( fixedMinHeight1,child->get_style()->minHeight );
            		}
HXLINE( 172)		return fixedMinHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,fixedMinHeight,return )

Float Layout_obj::get_borderSize(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_179_get_borderSize)
HXLINE( 180)		if (::hx::IsNull( this->_component->get_style() )) {
HXLINE( 181)			return ( (Float)(0) );
            		}
HXLINE( 184)		 ::Dynamic n = this->_component->get_style()->get_fullBorderSize();
HXLINE( 185)		bool _hx_tmp = ::hx::IsGreater( n,0 );
HXLINE( 188)		return ( (Float)(n) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_borderSize,return )

Float Layout_obj::get_paddingLeft(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_192_get_paddingLeft)
HXLINE( 193)		bool _hx_tmp;
HXDLIN( 193)		bool _hx_tmp1;
HXDLIN( 193)		if (::hx::IsNotNull( this->_component )) {
HXLINE( 193)			_hx_tmp1 = ::hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 193)			_hx_tmp1 = true;
            		}
HXDLIN( 193)		if (!(_hx_tmp1)) {
HXLINE( 193)			_hx_tmp = ::hx::IsNull( this->_component->get_style()->paddingLeft );
            		}
            		else {
HXLINE( 193)			_hx_tmp = true;
            		}
HXDLIN( 193)		if (_hx_tmp) {
HXLINE( 194)			return ( (Float)(0) );
            		}
HXLINE( 196)		return ( (Float)(this->_component->get_style()->paddingLeft) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_paddingLeft,return )

Float Layout_obj::get_paddingTop(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_200_get_paddingTop)
HXLINE( 201)		bool _hx_tmp;
HXDLIN( 201)		bool _hx_tmp1;
HXDLIN( 201)		if (::hx::IsNotNull( this->_component )) {
HXLINE( 201)			_hx_tmp1 = ::hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 201)			_hx_tmp1 = true;
            		}
HXDLIN( 201)		if (!(_hx_tmp1)) {
HXLINE( 201)			_hx_tmp = ::hx::IsNull( this->_component->get_style()->paddingTop );
            		}
            		else {
HXLINE( 201)			_hx_tmp = true;
            		}
HXDLIN( 201)		if (_hx_tmp) {
HXLINE( 202)			return ( (Float)(0) );
            		}
HXLINE( 204)		return ( (Float)(this->_component->get_style()->paddingTop) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_paddingTop,return )

Float Layout_obj::get_paddingBottom(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_208_get_paddingBottom)
HXLINE( 209)		bool _hx_tmp;
HXDLIN( 209)		bool _hx_tmp1;
HXDLIN( 209)		if (::hx::IsNotNull( this->_component )) {
HXLINE( 209)			_hx_tmp1 = ::hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 209)			_hx_tmp1 = true;
            		}
HXDLIN( 209)		if (!(_hx_tmp1)) {
HXLINE( 209)			_hx_tmp = ::hx::IsNull( this->_component->get_style()->paddingBottom );
            		}
            		else {
HXLINE( 209)			_hx_tmp = true;
            		}
HXDLIN( 209)		if (_hx_tmp) {
HXLINE( 210)			return ( (Float)(0) );
            		}
HXLINE( 212)		return ( (Float)(this->_component->get_style()->paddingBottom) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_paddingBottom,return )

Float Layout_obj::get_paddingRight(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_216_get_paddingRight)
HXLINE( 217)		bool _hx_tmp;
HXDLIN( 217)		bool _hx_tmp1;
HXDLIN( 217)		if (::hx::IsNotNull( this->_component )) {
HXLINE( 217)			_hx_tmp1 = ::hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 217)			_hx_tmp1 = true;
            		}
HXDLIN( 217)		if (!(_hx_tmp1)) {
HXLINE( 217)			_hx_tmp = ::hx::IsNull( this->_component->get_style()->paddingRight );
            		}
            		else {
HXLINE( 217)			_hx_tmp = true;
            		}
HXDLIN( 217)		if (_hx_tmp) {
HXLINE( 218)			return ( (Float)(0) );
            		}
HXLINE( 220)		return ( (Float)(this->_component->get_style()->paddingRight) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_paddingRight,return )

Float Layout_obj::get_horizontalSpacing(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_224_get_horizontalSpacing)
HXLINE( 225)		bool _hx_tmp;
HXDLIN( 225)		bool _hx_tmp1;
HXDLIN( 225)		if (::hx::IsNotNull( this->_component )) {
HXLINE( 225)			_hx_tmp1 = ::hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 225)			_hx_tmp1 = true;
            		}
HXDLIN( 225)		if (!(_hx_tmp1)) {
HXLINE( 225)			_hx_tmp = ::hx::IsNull( this->_component->get_style()->horizontalSpacing );
            		}
            		else {
HXLINE( 225)			_hx_tmp = true;
            		}
HXDLIN( 225)		if (_hx_tmp) {
HXLINE( 226)			return ( (Float)(0) );
            		}
HXLINE( 228)		return ( (Float)(this->_component->get_style()->horizontalSpacing) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_horizontalSpacing,return )

Float Layout_obj::get_verticalSpacing(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_232_get_verticalSpacing)
HXLINE( 233)		bool _hx_tmp;
HXDLIN( 233)		bool _hx_tmp1;
HXDLIN( 233)		if (::hx::IsNotNull( this->_component )) {
HXLINE( 233)			_hx_tmp1 = ::hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 233)			_hx_tmp1 = true;
            		}
HXDLIN( 233)		if (!(_hx_tmp1)) {
HXLINE( 233)			_hx_tmp = ::hx::IsNull( this->_component->get_style()->verticalSpacing );
            		}
            		else {
HXLINE( 233)			_hx_tmp = true;
            		}
HXDLIN( 233)		if (_hx_tmp) {
HXLINE( 234)			return ( (Float)(0) );
            		}
HXLINE( 236)		return ( (Float)(this->_component->get_style()->verticalSpacing) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_verticalSpacing,return )

Float Layout_obj::get_innerWidth(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_246_get_innerWidth)
HXLINE( 247)		if (::hx::IsNull( this->get_component() )) {
HXLINE( 248)			return ( (Float)(0) );
            		}
HXLINE( 250)		 ::Dynamic _hx_tmp = this->get_component()->get_componentWidth();
HXDLIN( 250)		Float _hx_tmp1 = this->get_paddingLeft();
HXDLIN( 250)		return (( (Float)(_hx_tmp) ) - (_hx_tmp1 + this->get_paddingRight()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_innerWidth,return )

Float Layout_obj::get_innerHeight(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_254_get_innerHeight)
HXLINE( 255)		if (::hx::IsNull( this->get_component() )) {
HXLINE( 256)			return ( (Float)(0) );
            		}
HXLINE( 258)		Float padding = ( (Float)(0) );
HXLINE( 259)		bool _hx_tmp;
HXDLIN( 259)		if (::hx::IsNotNull( this->get_component()->get_style() )) {
HXLINE( 259)			_hx_tmp = ::hx::IsNotNull( this->get_component()->get_style()->paddingTop );
            		}
            		else {
HXLINE( 259)			_hx_tmp = false;
            		}
HXDLIN( 259)		if (_hx_tmp) {
HXLINE( 260)			padding = (this->get_component()->get_style()->paddingTop + padding);
            		}
HXLINE( 262)		bool _hx_tmp1;
HXDLIN( 262)		if (::hx::IsNotNull( this->get_component()->get_style() )) {
HXLINE( 262)			_hx_tmp1 = ::hx::IsNotNull( this->get_component()->get_style()->paddingBottom );
            		}
            		else {
HXLINE( 262)			_hx_tmp1 = false;
            		}
HXDLIN( 262)		if (_hx_tmp1) {
HXLINE( 263)			padding = (this->get_component()->get_style()->paddingBottom + padding);
            		}
HXLINE( 265)		Float icy = (( (Float)(this->get_component()->get_componentHeight()) ) - padding);
HXLINE( 266)		return icy;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_innerHeight,return )

void Layout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_269_resizeChildren)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,resizeChildren,(void))

void Layout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_272_repositionChildren)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,repositionChildren,(void))

 ::haxe::ui::geom::Size Layout_obj::get_usableSize(){
            	HX_GC_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_276_get_usableSize)
HXLINE( 277)		Float ucx = ( (Float)(0) );
HXLINE( 278)		if (::hx::IsNotNull( this->_component->get_componentWidth() )) {
HXLINE( 279)			ucx = ( (Float)(this->_component->get_componentWidth()) );
HXLINE( 280)			Float ucx1 = this->get_paddingLeft();
HXDLIN( 280)			ucx = (ucx - (ucx1 + this->get_paddingRight()));
            		}
HXLINE( 283)		Float ucy = ( (Float)(0) );
HXLINE( 284)		if (::hx::IsNotNull( this->_component->get_componentHeight() )) {
HXLINE( 285)			ucy = ( (Float)(this->_component->get_componentHeight()) );
HXLINE( 286)			Float ucy1 = this->get_paddingTop();
HXDLIN( 286)			ucy = (ucy - (ucy1 + this->get_paddingBottom()));
            		}
HXLINE( 289)		return  ::haxe::ui::geom::Size_obj::__alloc( HX_CTX ,ucx,ucy);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_usableSize,return )

Float Layout_obj::get_usableWidth(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_294_get_usableWidth)
HXDLIN( 294)		return this->get_usableSize()->width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_usableWidth,return )

Float Layout_obj::get_usableHeight(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_299_get_usableHeight)
HXDLIN( 299)		return this->get_usableSize()->height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_usableHeight,return )

Float Layout_obj::calcAutoWidth(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_303_calcAutoWidth)
HXDLIN( 303)		return this->calcAutoSize(null())->width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,calcAutoWidth,return )

Float Layout_obj::calcAutoHeight(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_307_calcAutoHeight)
HXDLIN( 307)		return this->calcAutoSize(null())->height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,calcAutoHeight,return )

 ::haxe::ui::geom::Size Layout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_GC_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_310_calcAutoSize)
HXLINE( 311)		Float x1 = ( (Float)(16777215) );
HXLINE( 312)		Float x2 = ( (Float)(0) );
HXLINE( 313)		Float y1 = ( (Float)(16777215) );
HXLINE( 314)		Float y2 = ( (Float)(0) );
HXLINE( 315)		{
HXLINE( 315)			int _g = 0;
HXDLIN( 315)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 315)			::Array< ::Dynamic> _g1;
HXDLIN( 315)			if (::hx::IsNull( _this->_children )) {
HXLINE( 315)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 315)				_g1 = _this->_children;
            			}
HXDLIN( 315)			while((_g < _g1->length)){
HXLINE( 315)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 315)				_g = (_g + 1);
HXLINE( 316)				bool _hx_tmp;
HXDLIN( 316)				if ((child->get_includeInLayout() != false)) {
HXLINE( 316)					_hx_tmp = (this->excluded(exclusions,child) == true);
            				}
            				else {
HXLINE( 316)					_hx_tmp = true;
            				}
HXDLIN( 316)				if (_hx_tmp) {
HXLINE( 317)					continue;
            				}
HXLINE( 320)				if (::hx::IsNull( child->get_percentWidth() )) {
HXLINE( 321)					if (::hx::IsLess( child->get_left(),x1 )) {
HXLINE( 322)						 ::Dynamic x11 = child->get_left();
HXDLIN( 322)						Float x12 = (( (Float)(x11) ) - this->marginLeft(child));
HXDLIN( 322)						x1 = (x12 + this->marginRight(child));
            					}
HXLINE( 324)					bool _hx_tmp;
HXDLIN( 324)					if (::hx::IsNotNull( child->get_componentWidth() )) {
HXLINE( 324)						 ::Dynamic _hx_tmp1 = child->get_left();
HXDLIN( 324)						_hx_tmp = ((_hx_tmp1 + child->get_componentWidth()) > x2);
            					}
            					else {
HXLINE( 324)						_hx_tmp = false;
            					}
HXDLIN( 324)					if (_hx_tmp) {
HXLINE( 325)						 ::Dynamic x21 = child->get_left();
HXDLIN( 325)						Float x22 = (x21 + child->get_componentWidth());
HXDLIN( 325)						Float x23 = (x22 - this->marginLeft(child));
HXDLIN( 325)						x2 = (x23 + this->marginRight(child));
            					}
            				}
HXLINE( 329)				if (::hx::IsNull( child->get_percentHeight() )) {
HXLINE( 330)					if (::hx::IsLess( child->get_top(),y1 )) {
HXLINE( 331)						 ::Dynamic y11 = child->get_top();
HXDLIN( 331)						Float y12 = (( (Float)(y11) ) - this->marginTop(child));
HXDLIN( 331)						y1 = (y12 + this->marginBottom(child));
            					}
HXLINE( 333)					bool _hx_tmp;
HXDLIN( 333)					if (::hx::IsNotNull( child->get_componentHeight() )) {
HXLINE( 333)						 ::Dynamic _hx_tmp1 = child->get_top();
HXDLIN( 333)						_hx_tmp = ((_hx_tmp1 + child->get_componentHeight()) > y2);
            					}
            					else {
HXLINE( 333)						_hx_tmp = false;
            					}
HXDLIN( 333)					if (_hx_tmp) {
HXLINE( 334)						 ::Dynamic y21 = child->get_top();
HXDLIN( 334)						Float y22 = (y21 + child->get_componentHeight());
HXDLIN( 334)						Float y23 = (y22 - this->marginTop(child));
HXDLIN( 334)						y2 = (y23 + this->marginBottom(child));
            					}
            				}
            			}
            		}
HXLINE( 339)		if ((x1 == 16777215)) {
HXLINE( 340)			x1 = ( (Float)(0) );
            		}
HXLINE( 342)		if ((y1 == 16777215)) {
HXLINE( 343)			y1 = ( (Float)(0) );
            		}
HXLINE( 346)		Float w = this->get_paddingLeft();
HXDLIN( 346)		Float w1 = ((x2 - x1) + (w + this->get_paddingRight()));
HXLINE( 347)		Float h = this->get_paddingTop();
HXDLIN( 347)		Float h1 = ((y2 - y1) + (h + this->get_paddingBottom()));
HXLINE( 349)		if (::Std_obj::isOfType(::hx::ObjectPtr<OBJ_>(this),::hx::ClassOf< ::haxe::ui::layouts::AbsoluteLayout >())) {
HXLINE( 350)			w1 = (w1 + x1);
HXLINE( 351)			h1 = (h1 + y1);
            		}
HXLINE( 354)		return  ::haxe::ui::geom::Size_obj::__alloc( HX_CTX ,w1,h1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,calcAutoSize,return )

bool Layout_obj::excluded(::Array< ::Dynamic> exclusions, ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_357_excluded)
HXLINE( 358)		bool _hx_tmp;
HXDLIN( 358)		if (::hx::IsNotNull( exclusions )) {
HXLINE( 358)			_hx_tmp = ::hx::IsNull( child );
            		}
            		else {
HXLINE( 358)			_hx_tmp = true;
            		}
HXDLIN( 358)		if (_hx_tmp) {
HXLINE( 359)			return false;
            		}
HXLINE( 361)		return (exclusions->indexOf(child,null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Layout_obj,excluded,return )

 ::haxe::ui::layouts::Layout Layout_obj::cloneLayout(){
            	HX_STACKFRAME(&_hx_pos_4e52413c7bbffa61_700_cloneLayout)
HXLINE(  87)		 ::haxe::ui::layouts::Layout c = this->self();
HXLINE( 101)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,cloneLayout,return )

 ::haxe::ui::layouts::Layout Layout_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_02051fbbdf92c3de_113_self)
HXDLIN( 113)		return  ::haxe::ui::layouts::Layout_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,self,return )


::hx::ObjectPtr< Layout_obj > Layout_obj::__new() {
	::hx::ObjectPtr< Layout_obj > __this = new Layout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Layout_obj > Layout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Layout_obj *__this = (Layout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Layout_obj), true, "haxe.ui.layouts.Layout"));
	*(void **)__this = Layout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Layout_obj::Layout_obj()
{
}

void Layout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Layout);
	HX_MARK_MEMBER_NAME(_component,"_component");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(paddingLeft,"paddingLeft");
	HX_MARK_MEMBER_NAME(paddingTop,"paddingTop");
	HX_MARK_MEMBER_NAME(paddingBottom,"paddingBottom");
	HX_MARK_MEMBER_NAME(paddingRight,"paddingRight");
	HX_MARK_MEMBER_NAME(horizontalSpacing,"horizontalSpacing");
	HX_MARK_MEMBER_NAME(verticalSpacing,"verticalSpacing");
	HX_MARK_MEMBER_NAME(innerWidth,"innerWidth");
	HX_MARK_MEMBER_NAME(innerHeight,"innerHeight");
	HX_MARK_MEMBER_NAME(usableSize,"usableSize");
	HX_MARK_MEMBER_NAME(usableWidth,"usableWidth");
	HX_MARK_MEMBER_NAME(usableHeight,"usableHeight");
	HX_MARK_END_CLASS();
}

void Layout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_component,"_component");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(paddingLeft,"paddingLeft");
	HX_VISIT_MEMBER_NAME(paddingTop,"paddingTop");
	HX_VISIT_MEMBER_NAME(paddingBottom,"paddingBottom");
	HX_VISIT_MEMBER_NAME(paddingRight,"paddingRight");
	HX_VISIT_MEMBER_NAME(horizontalSpacing,"horizontalSpacing");
	HX_VISIT_MEMBER_NAME(verticalSpacing,"verticalSpacing");
	HX_VISIT_MEMBER_NAME(innerWidth,"innerWidth");
	HX_VISIT_MEMBER_NAME(innerHeight,"innerHeight");
	HX_VISIT_MEMBER_NAME(usableSize,"usableSize");
	HX_VISIT_MEMBER_NAME(usableWidth,"usableWidth");
	HX_VISIT_MEMBER_NAME(usableHeight,"usableHeight");
}

::hx::Val Layout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { return ::hx::Val( hidden_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return ::hx::Val( refresh_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return ::hx::Val( autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"excluded") ) { return ::hx::Val( excluded_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_component() ); }
		if (HX_FIELD_EQ(inName,"marginTop") ) { return ::hx::Val( marginTop_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return ::hx::Val( _component ); }
		if (HX_FIELD_EQ(inName,"marginLeft") ) { return ::hx::Val( marginLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_borderSize() : borderSize ); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_paddingTop() : paddingTop ); }
		if (HX_FIELD_EQ(inName,"innerWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_innerWidth() : innerWidth ); }
		if (HX_FIELD_EQ(inName,"usableSize") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_usableSize() : usableSize ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"marginRight") ) { return ::hx::Val( marginRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_paddingLeft() : paddingLeft ); }
		if (HX_FIELD_EQ(inName,"innerHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_innerHeight() : innerHeight ); }
		if (HX_FIELD_EQ(inName,"usableWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_usableWidth() : usableWidth ); }
		if (HX_FIELD_EQ(inName,"cloneLayout") ) { return ::hx::Val( cloneLayout_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"marginBottom") ) { return ::hx::Val( marginBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_paddingRight() : paddingRight ); }
		if (HX_FIELD_EQ(inName,"usableHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_usableHeight() : usableHeight ); }
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_component") ) { return ::hx::Val( get_component_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_component") ) { return ::hx::Val( set_component_dyn() ); }
		if (HX_FIELD_EQ(inName,"findComponent") ) { return ::hx::Val( findComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { return ::hx::Val( verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"fixedMinWidth") ) { return ::hx::Val( fixedMinWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_paddingBottom() : paddingBottom ); }
		if (HX_FIELD_EQ(inName,"calcAutoWidth") ) { return ::hx::Val( calcAutoWidth_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"findComponents") ) { return ::hx::Val( findComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"fixedMinHeight") ) { return ::hx::Val( fixedMinHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_borderSize") ) { return ::hx::Val( get_borderSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingTop") ) { return ::hx::Val( get_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_innerWidth") ) { return ::hx::Val( get_innerWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcAutoHeight") ) { return ::hx::Val( calcAutoHeight_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"childPaddingTop") ) { return ::hx::Val( childPaddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { return ::hx::Val( horizontalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingLeft") ) { return ::hx::Val( get_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"verticalSpacing") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_verticalSpacing() : verticalSpacing ); }
		if (HX_FIELD_EQ(inName,"get_innerHeight") ) { return ::hx::Val( get_innerHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return ::hx::Val( get_usableWidth_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"childPaddingLeft") ) { return ::hx::Val( childPaddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingRight") ) { return ::hx::Val( get_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return ::hx::Val( get_usableHeight_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"childPaddingRight") ) { return ::hx::Val( childPaddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingBottom") ) { return ::hx::Val( get_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"horizontalSpacing") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_horizontalSpacing() : horizontalSpacing ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"childPaddingBottom") ) { return ::hx::Val( childPaddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_verticalSpacing") ) { return ::hx::Val( get_verticalSpacing_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_horizontalSpacing") ) { return ::hx::Val( get_horizontalSpacing_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Layout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_component(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { paddingTop=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"innerWidth") ) { innerWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"usableSize") ) { usableSize=inValue.Cast<  ::haxe::ui::geom::Size >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { paddingLeft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"innerHeight") ) { innerHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"usableWidth") ) { usableWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paddingRight") ) { paddingRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"usableHeight") ) { usableHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { paddingBottom=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"verticalSpacing") ) { verticalSpacing=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"horizontalSpacing") ) { horizontalSpacing=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Layout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_component",7e,6c,f6,6a));
	outFields->push(HX_("component",bd,f0,53,0f));
	outFields->push(HX_("borderSize",cd,ff,ed,06));
	outFields->push(HX_("paddingLeft",78,4a,e6,85));
	outFields->push(HX_("paddingTop",44,fd,05,3a));
	outFields->push(HX_("paddingBottom",9c,67,99,4f));
	outFields->push(HX_("paddingRight",4b,ec,a7,1a));
	outFields->push(HX_("horizontalSpacing",ff,82,ed,70));
	outFields->push(HX_("verticalSpacing",ad,b9,a6,fa));
	outFields->push(HX_("innerWidth",90,74,2a,70));
	outFields->push(HX_("innerHeight",1d,02,4b,6b));
	outFields->push(HX_("usableSize",d9,03,00,c9));
	outFields->push(HX_("usableWidth",ee,07,8d,64));
	outFields->push(HX_("usableHeight",ff,60,29,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Layout_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(Layout_obj,_component),HX_("_component",7e,6c,f6,6a)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,borderSize),HX_("borderSize",cd,ff,ed,06)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,paddingLeft),HX_("paddingLeft",78,4a,e6,85)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,paddingTop),HX_("paddingTop",44,fd,05,3a)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,paddingBottom),HX_("paddingBottom",9c,67,99,4f)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,paddingRight),HX_("paddingRight",4b,ec,a7,1a)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,horizontalSpacing),HX_("horizontalSpacing",ff,82,ed,70)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,verticalSpacing),HX_("verticalSpacing",ad,b9,a6,fa)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,innerWidth),HX_("innerWidth",90,74,2a,70)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,innerHeight),HX_("innerHeight",1d,02,4b,6b)},
	{::hx::fsObject /*  ::haxe::ui::geom::Size */ ,(int)offsetof(Layout_obj,usableSize),HX_("usableSize",d9,03,00,c9)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,usableWidth),HX_("usableWidth",ee,07,8d,64)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,usableHeight),HX_("usableHeight",ff,60,29,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Layout_obj_sStaticStorageInfo = 0;
#endif

static ::String Layout_obj_sMemberFields[] = {
	HX_("_component",7e,6c,f6,6a),
	HX_("get_component",94,c4,b7,d0),
	HX_("set_component",a0,a6,bd,15),
	HX_("findComponent",44,b1,05,f0),
	HX_("findComponents",af,6a,f5,14),
	HX_("refresh",db,d9,20,ed),
	HX_("autoSize",d0,8f,79,2f),
	HX_("marginTop",07,7f,40,ee),
	HX_("marginLeft",55,53,dd,84),
	HX_("marginBottom",b9,21,0a,41),
	HX_("marginRight",ce,a4,d8,33),
	HX_("childPaddingTop",00,46,07,94),
	HX_("childPaddingLeft",3c,a6,04,ed),
	HX_("childPaddingBottom",60,3c,d9,7f),
	HX_("childPaddingRight",07,dc,19,ee),
	HX_("hidden",6a,ff,95,4c),
	HX_("horizontalAlign",41,8f,67,f4),
	HX_("verticalAlign",6f,1e,7c,e4),
	HX_("fixedMinWidth",a8,6c,72,09),
	HX_("fixedMinHeight",05,1f,fc,f0),
	HX_("borderSize",cd,ff,ed,06),
	HX_("get_borderSize",16,88,e3,7c),
	HX_("paddingLeft",78,4a,e6,85),
	HX_("get_paddingLeft",0f,02,c8,46),
	HX_("paddingTop",44,fd,05,3a),
	HX_("get_paddingTop",8d,85,fb,af),
	HX_("paddingBottom",9c,67,99,4f),
	HX_("get_paddingBottom",f3,72,09,56),
	HX_("paddingRight",4b,ec,a7,1a),
	HX_("get_paddingRight",d4,d8,46,1f),
	HX_("horizontalSpacing",ff,82,ed,70),
	HX_("get_horizontalSpacing",d6,85,9b,ef),
	HX_("verticalSpacing",ad,b9,a6,fa),
	HX_("get_verticalSpacing",c4,88,b1,85),
	HX_("innerWidth",90,74,2a,70),
	HX_("innerHeight",1d,02,4b,6b),
	HX_("get_innerWidth",d9,fc,1f,e6),
	HX_("get_innerHeight",b4,b9,2c,2c),
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("usableSize",d9,03,00,c9),
	HX_("get_usableSize",22,8c,f5,3e),
	HX_("usableWidth",ee,07,8d,64),
	HX_("get_usableWidth",85,bf,6e,25),
	HX_("usableHeight",ff,60,29,4d),
	HX_("get_usableHeight",88,4d,c8,51),
	HX_("calcAutoWidth",c2,80,db,e7),
	HX_("calcAutoHeight",ab,a1,84,ae),
	HX_("calcAutoSize",85,81,3f,fd),
	HX_("excluded",4a,40,34,21),
	HX_("cloneLayout",e7,99,0c,f5),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Layout_obj::__mClass;

void Layout_obj::__register()
{
	Layout_obj _hx_dummy;
	Layout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.Layout",a1,d4,a9,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Layout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Layout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Layout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Layout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
