#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__Box_Builder
#include <haxe/ui/containers/_Box/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__Box_DataSourceBehaviour
#include <haxe/ui/containers/_Box/DataSourceBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#include <haxe/ui/layouts/LayoutFactory.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_23_new,"haxe.ui.containers.Box","new",0xf4b94f93,"haxe.ui.containers.Box.new","haxe/ui/containers/Box.hx",23,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_39_get_layoutName,"haxe.ui.containers.Box","get_layoutName",0x35d42a0b,"haxe.ui.containers.Box.get_layoutName","haxe/ui/containers/Box.hx",39,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_41_set_layoutName,"haxe.ui.containers.Box","set_layoutName",0x55f4127f,"haxe.ui.containers.Box.set_layoutName","haxe/ui/containers/Box.hx",41,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_57_get_itemRenderer,"haxe.ui.containers.Box","get_itemRenderer",0xd102baec,"haxe.ui.containers.Box.get_itemRenderer","haxe/ui/containers/Box.hx",57,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_59_set_itemRenderer,"haxe.ui.containers.Box","set_itemRenderer",0x2744a860,"haxe.ui.containers.Box.set_itemRenderer","haxe/ui/containers/Box.hx",59,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_71_createDefaults,"haxe.ui.containers.Box","createDefaults",0xde14075b,"haxe.ui.containers.Box.createDefaults","haxe/ui/containers/Box.hx",71,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_79_applyStyle,"haxe.ui.containers.Box","applyStyle",0x2d543e10,"haxe.ui.containers.Box.applyStyle","haxe/ui/containers/Box.hx",79,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_204_registerComposite,"haxe.ui.containers.Box","registerComposite",0x7c067797,"haxe.ui.containers.Box.registerComposite","haxe/ui/macros/Macros.hx",204,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_550_registerBehaviours,"haxe.ui.containers.Box","registerBehaviours",0x8ca13a06,"haxe.ui.containers.Box.registerBehaviours","haxe/ui/macros/Macros.hx",550,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_597_get_icon,"haxe.ui.containers.Box","get_icon",0x79ef2aef,"haxe.ui.containers.Box.get_icon","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_648_set_icon,"haxe.ui.containers.Box","set_icon",0x284c8463,"haxe.ui.containers.Box.set_icon","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_597_get_dataSource,"haxe.ui.containers.Box","get_dataSource",0x7008b69b,"haxe.ui.containers.Box.get_dataSource","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_648_set_dataSource,"haxe.ui.containers.Box","set_dataSource",0x90289f0f,"haxe.ui.containers.Box.set_dataSource","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_96fe4c9de6174193_700_cloneComponent,"haxe.ui.containers.Box","cloneComponent",0x0296a14d,"haxe.ui.containers.Box.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_521_self,"haxe.ui.containers.Box","self",0x30ba58f9,"haxe.ui.containers.Box.self","haxe/ui/macros/Macros.hx",521,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void Box_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_23_new)
HXLINE(  78)		this->_direction = null();
HXLINE(  23)		super::__construct();
            	}

Dynamic Box_obj::__CreateEmpty() { return new Box_obj; }

void *Box_obj::_hx_vtable = 0;

Dynamic Box_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Box_obj > _hx_result = new Box_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Box_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x241810fb || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x6b353933;
			}
		} else {
			return inClassId==(int)0x72c347e4;
		}
	}
}

static ::haxe::ui::core::IDataComponent_obj _hx_haxe_ui_containers_Box__hx_haxe_ui_core_IDataComponent= {
	(  ::haxe::ui::data::DataSource (::hx::Object::*)())&::haxe::ui::containers::Box_obj::get_dataSource,
	(  ::haxe::ui::data::DataSource (::hx::Object::*)( ::haxe::ui::data::DataSource))&::haxe::ui::containers::Box_obj::set_dataSource,
};

void *Box_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xfafb3fc3: return &_hx_haxe_ui_containers_Box__hx_haxe_ui_core_IDataComponent;
	}
	return super::_hx_getInterface(inHash);
}

::String Box_obj::get_layoutName(){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_39_get_layoutName)
HXDLIN(  39)		return this->_layoutName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,get_layoutName,return )

::String Box_obj::set_layoutName(::String value){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_41_set_layoutName)
HXLINE(  42)		if ((this->_layoutName == value)) {
HXLINE(  43)			return value;
            		}
HXLINE(  46)		this->_layoutName = value;
HXLINE(  47)		 ::haxe::ui::layouts::Layout l = ::haxe::ui::layouts::LayoutFactory_obj::createFromName(this->get_layoutName());
HXLINE(  48)		if (::hx::IsNotNull( l )) {
HXLINE(  49)			this->set_layout(l);
            		}
HXLINE(  51)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,set_layoutName,return )

 ::haxe::ui::core::ItemRenderer Box_obj::get_itemRenderer(){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_57_get_itemRenderer)
HXDLIN(  57)		return this->_itemRenderer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,get_itemRenderer,return )

 ::haxe::ui::core::ItemRenderer Box_obj::set_itemRenderer( ::haxe::ui::core::ItemRenderer value){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_59_set_itemRenderer)
HXLINE(  60)		if (::hx::IsInstanceNotEq( this->_itemRenderer,value )) {
HXLINE(  61)			this->_itemRenderer = value;
HXLINE(  62)			{
HXLINE(  62)				bool _hx_tmp;
HXDLIN(  62)				if (::hx::IsNotNull( this->_layout )) {
HXLINE(  62)					_hx_tmp = (this->_layoutLocked == true);
            				}
            				else {
HXLINE(  62)					_hx_tmp = true;
            				}
HXDLIN(  62)				if (!(_hx_tmp)) {
HXLINE(  62)					this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
            		}
HXLINE(  65)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,set_itemRenderer,return )

void Box_obj::createDefaults(){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_71_createDefaults)
HXLINE(  72)		this->super::createDefaults();
HXLINE(  73)		if (::hx::IsNull( this->_defaultLayoutClass )) {
HXLINE(  74)			this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::layouts::DefaultLayout >();
            		}
            	}


void Box_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_79_applyStyle)
HXLINE(  80)		this->super::applyStyle(style);
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		if (::hx::IsNotNull( style->direction )) {
HXLINE(  82)			_hx_tmp = (style->direction != this->_direction);
            		}
            		else {
HXLINE(  82)			_hx_tmp = false;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  83)			this->_direction = style->direction;
HXLINE(  84)			this->set_layout(::haxe::ui::layouts::LayoutFactory_obj::createFromName(this->_direction));
            		}
HXLINE(  86)		if (::hx::IsNotNull( style->layout )) {
HXLINE(  87)			this->set_layoutName(style->layout);
            		}
            	}


void Box_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_8a16a98353e79089_204_registerComposite)
HXLINE( 205)		this->super::registerComposite();
HXLINE( 217)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::_Box::Builder >();
HXLINE( 221)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::layouts::DefaultLayout >();
            	}


void Box_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_8a16a98353e79089_550_registerBehaviours)
HXLINE( 551)		this->super::registerBehaviours();
HXLINE( 667)		this->behaviours->_hx_register(HX_("icon",79,e7,b2,45),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 667)		this->behaviours->_hx_register(HX_("dataSource",a5,76,d3,1d),::hx::ClassOf< ::haxe::ui::containers::_Box::DataSourceBehaviour >(),null());
            	}


 ::haxe::ui::util::VariantType Box_obj::get_icon(){
            	HX_STACKFRAME(&_hx_pos_8a16a98353e79089_597_get_icon)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return this->behaviours->get(HX_("icon",79,e7,b2,45));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,get_icon,return )

 ::haxe::ui::util::VariantType Box_obj::set_icon( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_8a16a98353e79089_648_set_icon)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		this->behaviours->set(HX_("icon",79,e7,b2,45),value);
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("icon",79,e7,b2,45)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,set_icon,return )

 ::haxe::ui::data::DataSource Box_obj::get_dataSource(){
            	HX_STACKFRAME(&_hx_pos_8a16a98353e79089_597_get_dataSource)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->behaviours->get(HX_("dataSource",a5,76,d3,1d)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,get_dataSource,return )

 ::haxe::ui::data::DataSource Box_obj::set_dataSource( ::haxe::ui::data::DataSource value){
            	HX_GC_STACKFRAME(&_hx_pos_8a16a98353e79089_648_set_dataSource)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("dataSource",a5,76,d3,1d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("dataSource",a5,76,d3,1d)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,set_dataSource,return )

 ::haxe::ui::backend::ComponentBase Box_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_96fe4c9de6174193_700_cloneComponent)
HXLINE( 469)		 ::haxe::ui::containers::Box c = ( ( ::haxe::ui::containers::Box)(this->super::cloneComponent()) );
HXLINE( 478)		if (::hx::IsNotNull( this->get_layoutName() )) {
HXLINE( 478)			c->set_layoutName(this->get_layoutName());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_itemRenderer() )) {
HXLINE( 478)			c->set_itemRenderer(this->get_itemRenderer());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_icon() )) {
HXLINE( 478)			c->set_icon(this->get_icon());
            		}
HXDLIN( 478)		if (::hx::IsNotNull( this->get_dataSource() )) {
HXLINE( 478)			c->set_dataSource(this->get_dataSource());
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


 ::haxe::ui::backend::ComponentBase Box_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_8a16a98353e79089_521_self)
HXDLIN( 521)		return  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Box_obj > Box_obj::__new() {
	::hx::ObjectPtr< Box_obj > __this = new Box_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Box_obj > Box_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Box_obj *__this = (Box_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Box_obj), true, "haxe.ui.containers.Box"));
	*(void **)__this = Box_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Box_obj::Box_obj()
{
}

void Box_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Box);
	HX_MARK_MEMBER_NAME(_layoutName,"_layoutName");
	HX_MARK_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_MARK_MEMBER_NAME(_direction,"_direction");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Box_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_layoutName,"_layoutName");
	HX_VISIT_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_VISIT_MEMBER_NAME(_direction,"_direction");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Box_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_icon() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_icon") ) { return ::hx::Val( get_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return ::hx::Val( set_icon_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"layoutName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layoutName() ); }
		if (HX_FIELD_EQ(inName,"_direction") ) { return ::hx::Val( _direction ); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dataSource() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layoutName") ) { return ::hx::Val( _layoutName ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_itemRenderer() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { return ::hx::Val( _itemRenderer ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_layoutName") ) { return ::hx::Val( get_layoutName_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layoutName") ) { return ::hx::Val( set_layoutName_dyn() ); }
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return ::hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return ::hx::Val( get_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return ::hx::Val( set_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_itemRenderer") ) { return ::hx::Val( get_itemRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_itemRenderer") ) { return ::hx::Val( set_itemRenderer_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Box_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_icon(inValue.Cast<  ::haxe::ui::util::VariantType >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"layoutName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_layoutName(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"_direction") ) { _direction=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dataSource(inValue.Cast<  ::haxe::ui::data::DataSource >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layoutName") ) { _layoutName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_itemRenderer(inValue.Cast<  ::haxe::ui::core::ItemRenderer >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { _itemRenderer=inValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Box_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_layoutName",34,b7,28,b6));
	outFields->push(HX_("layoutName",15,ea,9e,e3));
	outFields->push(HX_("_itemRenderer",55,a4,73,79));
	outFields->push(HX_("itemRenderer",76,11,05,97));
	outFields->push(HX_("_direction",00,de,e2,6b));
	outFields->push(HX_("icon",79,e7,b2,45));
	outFields->push(HX_("dataSource",a5,76,d3,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Box_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Box_obj,_layoutName),HX_("_layoutName",34,b7,28,b6)},
	{::hx::fsObject /*  ::haxe::ui::core::ItemRenderer */ ,(int)offsetof(Box_obj,_itemRenderer),HX_("_itemRenderer",55,a4,73,79)},
	{::hx::fsString,(int)offsetof(Box_obj,_direction),HX_("_direction",00,de,e2,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Box_obj_sStaticStorageInfo = 0;
#endif

static ::String Box_obj_sMemberFields[] = {
	HX_("_layoutName",34,b7,28,b6),
	HX_("get_layoutName",5e,72,94,59),
	HX_("set_layoutName",d2,5a,b4,79),
	HX_("_itemRenderer",55,a4,73,79),
	HX_("get_itemRenderer",ff,fd,a3,9b),
	HX_("set_itemRenderer",73,eb,e5,f1),
	HX_("createDefaults",ae,4f,d4,01),
	HX_("_direction",00,de,e2,6b),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_icon",02,a3,6d,c5),
	HX_("set_icon",76,fc,ca,73),
	HX_("get_dataSource",ee,fe,c8,93),
	HX_("set_dataSource",62,e7,e8,b3),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Box_obj::__mClass;

void Box_obj::__register()
{
	Box_obj _hx_dummy;
	Box_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.Box",21,8a,37,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Box_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Box_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Box_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Box_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
