#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <haxe/ui/layouts/HorizontalLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4514bb6da4ff9b3b_6_new,"haxe.ui.layouts.HorizontalLayout","new",0xccf07ad7,"haxe.ui.layouts.HorizontalLayout.new","haxe/ui/layouts/HorizontalLayout.hx",6,0xc1db5e78)
HX_LOCAL_STACK_FRAME(_hx_pos_4514bb6da4ff9b3b_12_repositionChildren,"haxe.ui.layouts.HorizontalLayout","repositionChildren",0xf25cb424,"haxe.ui.layouts.HorizontalLayout.repositionChildren","haxe/ui/layouts/HorizontalLayout.hx",12,0xc1db5e78)
HX_LOCAL_STACK_FRAME(_hx_pos_4514bb6da4ff9b3b_79_get_usableSize,"haxe.ui.layouts.HorizontalLayout","get_usableSize",0x6ea1170b,"haxe.ui.layouts.HorizontalLayout.get_usableSize","haxe/ui/layouts/HorizontalLayout.hx",79,0xc1db5e78)
HX_LOCAL_STACK_FRAME(_hx_pos_2461773af835b7dd_700_cloneLayout,"haxe.ui.layouts.HorizontalLayout","cloneLayout",0x1b9b135e,"haxe.ui.layouts.HorizontalLayout.cloneLayout","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_3939fa0c206fca98_113_self,"haxe.ui.layouts.HorizontalLayout","self",0x88c90935,"haxe.ui.layouts.HorizontalLayout.self","haxe/ui/macros/LayoutMacros.hx",113,0xe44eaad7)
namespace haxe{
namespace ui{
namespace layouts{

void HorizontalLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4514bb6da4ff9b3b_6_new)
HXLINE(   7)		super::__construct();
HXLINE(   8)		this->_calcFullWidths = true;
HXLINE(   9)		this->_roundFullWidths = true;
            	}

Dynamic HorizontalLayout_obj::__CreateEmpty() { return new HorizontalLayout_obj; }

void *HorizontalLayout_obj::_hx_vtable = 0;

Dynamic HorizontalLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HorizontalLayout_obj > _hx_result = new HorizontalLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3799f835) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x3799f835;
		}
	} else {
		return inClassId==(int)0x6be4a2dd;
	}
}

void HorizontalLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_4514bb6da4ff9b3b_12_repositionChildren)
HXLINE(  13)		Float xpos = this->get_paddingLeft();
HXLINE(  14)		 ::haxe::ui::geom::Size usableSize = this->get_usableSize();
HXLINE(  16)		 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  16)		::Array< ::Dynamic> visibleChildren;
HXDLIN(  16)		if (::hx::IsNull( _this->_children )) {
HXLINE(  16)			visibleChildren = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  16)			visibleChildren = _this->_children;
            		}
HXDLIN(  16)		int visibleChildren1 = visibleChildren->length;
HXLINE(  17)		{
HXLINE(  17)			int _g = 0;
HXDLIN(  17)			 ::haxe::ui::core::Component _this1 = this->get_component();
HXDLIN(  17)			::Array< ::Dynamic> _g1;
HXDLIN(  17)			if (::hx::IsNull( _this1->_children )) {
HXLINE(  17)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  17)				_g1 = _this1->_children;
            			}
HXDLIN(  17)			while((_g < _g1->length)){
HXLINE(  17)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  17)				_g = (_g + 1);
HXLINE(  18)				if ((child->get_includeInLayout() == false)) {
HXLINE(  19)					visibleChildren1 = (visibleChildren1 - 1);
HXLINE(  20)					continue;
            				}
            			}
            		}
HXLINE(  24)		bool evenlySpace = false;
HXLINE(  25)		bool aroundSpace = false;
HXLINE(  26)		bool betweenSpace = false;
HXLINE(  27)		if (::hx::IsNotNull( this->get_component()->get_style() )) {
HXLINE(  28)			if ((this->get_component()->get_style()->justifyContent == HX_("space-between",01,64,1b,f8))) {
HXLINE(  28)				betweenSpace = true;
            			}
HXLINE(  30)			if ((this->get_component()->get_style()->justifyContent == HX_("space-evenly",0e,60,77,d0))) {
HXLINE(  30)				evenlySpace = true;
            			}
HXLINE(  32)			if ((this->get_component()->get_style()->justifyContent == HX_("space-around",34,10,11,f0))) {
HXLINE(  32)				aroundSpace = true;
            			}
            		}
HXLINE(  35)		Float spacing = this->get_horizontalSpacing();
HXLINE(  37)		if (betweenSpace) {
HXLINE(  38)			Float spacing1 = (usableSize->width / ( (Float)((visibleChildren1 - 1)) ));
HXDLIN(  38)			spacing = (spacing1 + this->get_horizontalSpacing());
            		}
            		else {
HXLINE(  40)			if (aroundSpace) {
HXLINE(  41)				Float usableSize1 = usableSize->width;
HXDLIN(  41)				spacing = ((usableSize1 + (this->get_horizontalSpacing() * ( (Float)((visibleChildren1 - 1)) ))) / ( (Float)(visibleChildren1) ));
            			}
            			else {
HXLINE(  43)				if (evenlySpace) {
HXLINE(  44)					Float usableSize1 = usableSize->width;
HXDLIN(  44)					spacing = ((usableSize1 + (this->get_horizontalSpacing() * ( (Float)((visibleChildren1 - 1)) ))) / ( (Float)((visibleChildren1 + 1)) ));
            				}
            			}
            		}
HXLINE(  48)		{
HXLINE(  48)			int _g2 = 0;
HXDLIN(  48)			 ::haxe::ui::core::Component _this2 = this->get_component();
HXDLIN(  48)			::Array< ::Dynamic> _g3;
HXDLIN(  48)			if (::hx::IsNull( _this2->_children )) {
HXLINE(  48)				_g3 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  48)				_g3 = _this2->_children;
            			}
HXDLIN(  48)			while((_g2 < _g3->length)){
HXLINE(  48)				 ::haxe::ui::core::Component child = _g3->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  48)				_g2 = (_g2 + 1);
HXLINE(  49)				if ((child->get_includeInLayout() == false)) {
HXLINE(  50)					continue;
            				}
HXLINE(  53)				Float ypos = ( (Float)(0) );
HXLINE(  55)				::String _hx_switch_0 = this->verticalAlign(child);
            				if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ){
HXLINE(  59)					 ::Dynamic _hx_tmp = child->get_componentHeight();
HXDLIN(  59)					if (::hx::IsLess( _hx_tmp,this->get_component()->get_componentHeight() )) {
HXLINE(  60)						 ::Dynamic ypos1 = this->get_component()->get_componentHeight();
HXDLIN(  60)						 ::Dynamic ypos2 = child->get_componentHeight();
HXDLIN(  60)						Float ypos3 = (ypos2 + this->get_paddingBottom());
HXDLIN(  60)						ypos = (( (Float)(ypos1) ) - (ypos3 + this->marginTop(child)));
            					}
HXLINE(  59)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(  57)					Float usableSize1 = usableSize->height;
HXDLIN(  57)					Float ypos1 = ((usableSize1 - ( (Float)(child->get_componentHeight()) )) / ( (Float)(2) ));
HXDLIN(  57)					Float ypos2 = (ypos1 + this->get_paddingTop());
HXDLIN(  57)					Float ypos3 = (ypos2 + this->marginTop(child));
HXDLIN(  57)					ypos = (ypos3 - this->marginBottom(child));
HXDLIN(  57)					goto _hx_goto_3;
            				}
            				/* default */{
HXLINE(  63)					Float ypos1 = this->get_paddingTop();
HXDLIN(  63)					ypos = (ypos1 + this->marginTop(child));
            				}
            				_hx_goto_3:;
HXLINE(  66)				if (aroundSpace) {
HXLINE(  67)					child->moveComponent(((xpos + (spacing / ( (Float)(2) ))) + this->marginLeft(child)),ypos);
            				}
            				else {
HXLINE(  69)					if (evenlySpace) {
HXLINE(  70)						child->moveComponent(((xpos + spacing) + this->marginLeft(child)),ypos);
            					}
            					else {
HXLINE(  73)						child->moveComponent((xpos + this->marginLeft(child)),ypos);
            					}
            				}
HXLINE(  75)				xpos = (xpos + (child->get_componentWidth() + spacing));
            			}
            		}
            	}


 ::haxe::ui::geom::Size HorizontalLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_4514bb6da4ff9b3b_79_get_usableSize)
HXLINE(  80)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE(  82)		 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  82)		::Array< ::Dynamic> visibleChildren;
HXDLIN(  82)		if (::hx::IsNull( _this->_children )) {
HXLINE(  82)			visibleChildren = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  82)			visibleChildren = _this->_children;
            		}
HXDLIN(  82)		int visibleChildren1 = visibleChildren->length;
HXLINE(  83)		{
HXLINE(  83)			int _g = 0;
HXDLIN(  83)			 ::haxe::ui::core::Component _this1 = this->get_component();
HXDLIN(  83)			::Array< ::Dynamic> _g1;
HXDLIN(  83)			if (::hx::IsNull( _this1->_children )) {
HXLINE(  83)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  83)				_g1 = _this1->_children;
            			}
HXDLIN(  83)			while((_g < _g1->length)){
HXLINE(  83)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  83)				_g = (_g + 1);
HXLINE(  84)				if ((child->get_includeInLayout() == false)) {
HXLINE(  85)					visibleChildren1 = (visibleChildren1 - 1);
HXLINE(  86)					continue;
            				}
HXLINE(  89)				bool _hx_tmp;
HXDLIN(  89)				if (::hx::IsGreater( child->get_componentWidth(),0 )) {
HXLINE(  89)					if (::hx::IsNotNull( child->get_percentWidth() )) {
HXLINE(  89)						_hx_tmp = (this->fixedMinWidth(child) == true);
            					}
            					else {
HXLINE(  89)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  89)					_hx_tmp = false;
            				}
HXDLIN(  89)				if (_hx_tmp) {
HXLINE(  90)					 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  90)					Float size2 = size1->width;
HXDLIN(  90)					 ::Dynamic _hx_tmp = child->get_componentWidth();
HXDLIN(  90)					Float _hx_tmp1 = (_hx_tmp + this->marginLeft(child));
HXDLIN(  90)					size1->width = (size2 - (_hx_tmp1 + this->marginRight(child)));
            				}
            			}
            		}
HXLINE(  94)		if ((visibleChildren1 > 1)) {
HXLINE(  95)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  95)			Float size2 = size1->width;
HXDLIN(  95)			size1->width = (size2 - (this->get_horizontalSpacing() * ( (Float)((visibleChildren1 - 1)) )));
            		}
HXLINE(  98)		if ((size->width < 0)) {
HXLINE(  99)			size->width = ( (Float)(0) );
            		}
HXLINE( 102)		return size;
            	}


 ::haxe::ui::layouts::Layout HorizontalLayout_obj::cloneLayout(){
            	HX_STACKFRAME(&_hx_pos_2461773af835b7dd_700_cloneLayout)
HXLINE(  85)		 ::haxe::ui::layouts::HorizontalLayout c = ( ( ::haxe::ui::layouts::HorizontalLayout)(this->super::cloneLayout()) );
HXLINE( 101)		return c;
            	}


 ::haxe::ui::layouts::Layout HorizontalLayout_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_3939fa0c206fca98_113_self)
HXDLIN( 113)		return  ::haxe::ui::layouts::HorizontalLayout_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< HorizontalLayout_obj > HorizontalLayout_obj::__new() {
	::hx::ObjectPtr< HorizontalLayout_obj > __this = new HorizontalLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HorizontalLayout_obj > HorizontalLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HorizontalLayout_obj *__this = (HorizontalLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalLayout_obj), true, "haxe.ui.layouts.HorizontalLayout"));
	*(void **)__this = HorizontalLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalLayout_obj::HorizontalLayout_obj()
{
}

::hx::Val HorizontalLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cloneLayout") ) { return ::hx::Val( cloneLayout_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HorizontalLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HorizontalLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("get_usableSize",22,8c,f5,3e),
	HX_("cloneLayout",e7,99,0c,f5),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class HorizontalLayout_obj::__mClass;

void HorizontalLayout_obj::__register()
{
	HorizontalLayout_obj _hx_dummy;
	HorizontalLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.HorizontalLayout",65,c3,9e,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HorizontalLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HorizontalLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
