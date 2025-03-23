#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TypeMap
#include <haxe/ui/core/TypeMap.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ItemEvent
#include <haxe/ui/events/ItemEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ItemRendererEvent
#include <haxe/ui/events/ItemRendererEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_TypeConverter
#include <haxe/ui/util/TypeConverter.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b9089dc793ca35ae_14_new,"haxe.ui.core.ItemRenderer","new",0x7561ad25,"haxe.ui.core.ItemRenderer.new","haxe/ui/core/ItemRenderer.hx",14,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_26__onItemMouseOver,"haxe.ui.core.ItemRenderer","_onItemMouseOver",0x92442083,"haxe.ui.core.ItemRenderer._onItemMouseOver","haxe/ui/core/ItemRenderer.hx",26,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_38__onItemMouseOut,"haxe.ui.core.ItemRenderer","_onItemMouseOut",0x691f4c3f,"haxe.ui.core.ItemRenderer._onItemMouseOut","haxe/ui/core/ItemRenderer.hx",38,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_50__onItemMouseDown,"haxe.ui.core.ItemRenderer","_onItemMouseDown",0x8af98791,"haxe.ui.core.ItemRenderer._onItemMouseDown","haxe/ui/core/ItemRenderer.hx",50,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_62__onItemMouseUp,"haxe.ui.core.ItemRenderer","_onItemMouseUp",0x16487bca,"haxe.ui.core.ItemRenderer._onItemMouseUp","haxe/ui/core/ItemRenderer.hx",62,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_77_get_allowHover,"haxe.ui.core.ItemRenderer","get_allowHover",0x22bd2817,"haxe.ui.core.ItemRenderer.get_allowHover","haxe/ui/core/ItemRenderer.hx",77,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_79_set_allowHover,"haxe.ui.core.ItemRenderer","set_allowHover",0x42dd108b,"haxe.ui.core.ItemRenderer.set_allowHover","haxe/ui/core/ItemRenderer.hx",79,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_97_get_data,"haxe.ui.core.ItemRenderer","get_data",0x25a0cace,"haxe.ui.core.ItemRenderer.get_data","haxe/ui/core/ItemRenderer.hx",97,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_99_set_data,"haxe.ui.core.ItemRenderer","set_data",0xd3fe2442,"haxe.ui.core.ItemRenderer.set_data","haxe/ui/core/ItemRenderer.hx",99,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_108_validateComponentData,"haxe.ui.core.ItemRenderer","validateComponentData",0x5342e116,"haxe.ui.core.ItemRenderer.validateComponentData","haxe/ui/core/ItemRenderer.hx",108,0x40996daa)
static const ::String _hx_array_data_221936b3_21[] = {
	HX_("text",ad,cc,f9,4c),
};
static const ::String _hx_array_data_221936b3_22[] = {
	HX_("text",ad,cc,f9,4c),
};
static const ::String _hx_array_data_221936b3_23[] = {
	HX_("text",ad,cc,f9,4c),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_153_onDataChanged,"haxe.ui.core.ItemRenderer","onDataChanged",0xe8437e10,"haxe.ui.core.ItemRenderer.onDataChanged","haxe/ui/core/ItemRenderer.hx",153,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_156_onItemChange,"haxe.ui.core.ItemRenderer","onItemChange",0x7768df7d,"haxe.ui.core.ItemRenderer.onItemChange","haxe/ui/core/ItemRenderer.hx",156,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_188_onItemClick,"haxe.ui.core.ItemRenderer","onItemClick",0xfe9c6edb,"haxe.ui.core.ItemRenderer.onItemClick","haxe/ui/core/ItemRenderer.hx",188,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_210_updateValues,"haxe.ui.core.ItemRenderer","updateValues",0x491f8d66,"haxe.ui.core.ItemRenderer.updateValues","haxe/ui/core/ItemRenderer.hx",210,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_261_setComponentProperty,"haxe.ui.core.ItemRenderer","setComponentProperty",0xb796ddcb,"haxe.ui.core.ItemRenderer.setComponentProperty","haxe/ui/core/ItemRenderer.hx",261,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_a11f04ad81e36a66_551_registerBehaviours,"haxe.ui.core.ItemRenderer","registerBehaviours",0x2160f0b4,"haxe.ui.core.ItemRenderer.registerBehaviours","haxe/ui/macros/Macros.hx",551,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f5f102a918a50d65_700_cloneComponent,"haxe.ui.core.ItemRenderer","cloneComponent",0x7cede8fb,"haxe.ui.core.ItemRenderer.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_a11f04ad81e36a66_521_self,"haxe.ui.core.ItemRenderer","self",0x4363db27,"haxe.ui.core.ItemRenderer.self","haxe/ui/macros/Macros.hx",521,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_14_boot,"haxe.ui.core.ItemRenderer","boot",0x382ed3cd,"haxe.ui.core.ItemRenderer.boot","haxe/ui/core/ItemRenderer.hx",14,0x40996daa)
namespace haxe{
namespace ui{
namespace core{

void ItemRenderer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_14_new)
HXLINE( 107)		this->_fieldList = null();
HXLINE( 105)		this->itemIndex = -1;
HXLINE(  74)		this->_allowHover = true;
HXLINE(  16)		this->recursiveStyling = false;
HXLINE(  15)		this->autoRegisterInteractiveEvents = true;
HXLINE(  19)		super::__construct();
HXLINE(  20)		this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OVER,this->_onItemMouseOver_dyn(),null());
HXLINE(  21)		this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT,this->_onItemMouseOut_dyn(),null());
HXLINE(  22)		this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_DOWN,this->_onItemMouseDown_dyn(),null());
HXLINE(  23)		this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_UP,this->_onItemMouseUp_dyn(),null());
            	}

Dynamic ItemRenderer_obj::__CreateEmpty() { return new ItemRenderer_obj; }

void *ItemRenderer_obj::_hx_vtable = 0;

Dynamic ItemRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ItemRenderer_obj > _hx_result = new ItemRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ItemRenderer_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x5e4d6caf) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x241810fb || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x5e4d6caf;
			}
		} else {
			return inClassId==(int)0x6b353933 || inClassId==(int)0x72c347e4;
		}
	}
}

void ItemRenderer_obj::_onItemMouseOver( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_26__onItemMouseOver)
HXLINE(  27)		this->addClass(HX_(":hover",42,d3,17,5c),true,this->recursiveStyling);
HXLINE(  28)		if (!(this->recursiveStyling)) {
HXLINE(  29)			{
HXLINE(  29)				int _g = 0;
HXDLIN(  29)				::Array< ::Dynamic> _g1 = this->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),null());
HXDLIN(  29)				while((_g < _g1->length)){
HXLINE(  29)					 ::haxe::ui::components::Label c = _g1->__get(_g).StaticCast<  ::haxe::ui::components::Label >();
HXDLIN(  29)					_g = (_g + 1);
HXLINE(  30)					c->addClass(HX_(":hover",42,d3,17,5c),null(),null());
            				}
            			}
HXLINE(  32)			{
HXLINE(  32)				int _g2 = 0;
HXDLIN(  32)				::Array< ::Dynamic> _g3 = this->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Image >(),null());
HXDLIN(  32)				while((_g2 < _g3->length)){
HXLINE(  32)					 ::haxe::ui::components::Image c = _g3->__get(_g2).StaticCast<  ::haxe::ui::components::Image >();
HXDLIN(  32)					_g2 = (_g2 + 1);
HXLINE(  33)					c->addClass(HX_(":hover",42,d3,17,5c),null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,_onItemMouseOver,(void))

void ItemRenderer_obj::_onItemMouseOut( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_38__onItemMouseOut)
HXLINE(  39)		this->removeClass(HX_(":hover",42,d3,17,5c),true,this->recursiveStyling);
HXLINE(  40)		if (!(this->recursiveStyling)) {
HXLINE(  41)			{
HXLINE(  41)				int _g = 0;
HXDLIN(  41)				::Array< ::Dynamic> _g1 = this->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),null());
HXDLIN(  41)				while((_g < _g1->length)){
HXLINE(  41)					 ::haxe::ui::components::Label c = _g1->__get(_g).StaticCast<  ::haxe::ui::components::Label >();
HXDLIN(  41)					_g = (_g + 1);
HXLINE(  42)					c->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            				}
            			}
HXLINE(  44)			{
HXLINE(  44)				int _g2 = 0;
HXDLIN(  44)				::Array< ::Dynamic> _g3 = this->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Image >(),null());
HXDLIN(  44)				while((_g2 < _g3->length)){
HXLINE(  44)					 ::haxe::ui::components::Image c = _g3->__get(_g2).StaticCast<  ::haxe::ui::components::Image >();
HXDLIN(  44)					_g2 = (_g2 + 1);
HXLINE(  45)					c->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,_onItemMouseOut,(void))

void ItemRenderer_obj::_onItemMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_50__onItemMouseDown)
HXLINE(  51)		this->addClass(HX_(":down",9c,9d,ab,a7),true,this->recursiveStyling);
HXLINE(  52)		if (!(this->recursiveStyling)) {
HXLINE(  53)			{
HXLINE(  53)				int _g = 0;
HXDLIN(  53)				::Array< ::Dynamic> _g1 = this->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),null());
HXDLIN(  53)				while((_g < _g1->length)){
HXLINE(  53)					 ::haxe::ui::components::Label c = _g1->__get(_g).StaticCast<  ::haxe::ui::components::Label >();
HXDLIN(  53)					_g = (_g + 1);
HXLINE(  54)					c->addClass(HX_(":down",9c,9d,ab,a7),null(),null());
            				}
            			}
HXLINE(  56)			{
HXLINE(  56)				int _g2 = 0;
HXDLIN(  56)				::Array< ::Dynamic> _g3 = this->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Image >(),null());
HXDLIN(  56)				while((_g2 < _g3->length)){
HXLINE(  56)					 ::haxe::ui::components::Image c = _g3->__get(_g2).StaticCast<  ::haxe::ui::components::Image >();
HXDLIN(  56)					_g2 = (_g2 + 1);
HXLINE(  57)					c->addClass(HX_(":down",9c,9d,ab,a7),null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,_onItemMouseDown,(void))

void ItemRenderer_obj::_onItemMouseUp( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_62__onItemMouseUp)
HXLINE(  63)		this->removeClass(HX_(":down",9c,9d,ab,a7),true,this->recursiveStyling);
HXLINE(  64)		if (!(this->recursiveStyling)) {
HXLINE(  65)			{
HXLINE(  65)				int _g = 0;
HXDLIN(  65)				::Array< ::Dynamic> _g1 = this->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),null());
HXDLIN(  65)				while((_g < _g1->length)){
HXLINE(  65)					 ::haxe::ui::components::Label c = _g1->__get(_g).StaticCast<  ::haxe::ui::components::Label >();
HXDLIN(  65)					_g = (_g + 1);
HXLINE(  66)					c->removeClass(HX_(":down",9c,9d,ab,a7),null(),null());
            				}
            			}
HXLINE(  68)			{
HXLINE(  68)				int _g2 = 0;
HXDLIN(  68)				::Array< ::Dynamic> _g3 = this->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Image >(),null());
HXDLIN(  68)				while((_g2 < _g3->length)){
HXLINE(  68)					 ::haxe::ui::components::Image c = _g3->__get(_g2).StaticCast<  ::haxe::ui::components::Image >();
HXDLIN(  68)					_g2 = (_g2 + 1);
HXLINE(  69)					c->removeClass(HX_(":down",9c,9d,ab,a7),null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,_onItemMouseUp,(void))

bool ItemRenderer_obj::get_allowHover(){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_77_get_allowHover)
HXDLIN(  77)		return this->_allowHover;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ItemRenderer_obj,get_allowHover,return )

bool ItemRenderer_obj::set_allowHover(bool value){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_79_set_allowHover)
HXLINE(  80)		if ((this->_allowHover == value)) {
HXLINE(  81)			return value;
            		}
HXLINE(  83)		this->_allowHover = value;
HXLINE(  84)		if ((this->_allowHover == true)) {
HXLINE(  85)			this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OVER,this->_onItemMouseOver_dyn(),null());
HXLINE(  86)			this->registerEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT,this->_onItemMouseOut_dyn(),null());
            		}
            		else {
HXLINE(  88)			this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OVER,this->_onItemMouseOver_dyn());
HXLINE(  89)			this->unregisterEvent(::haxe::ui::events::MouseEvent_obj::MOUSE_OUT,this->_onItemMouseOut_dyn());
            		}
HXLINE(  91)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,set_allowHover,return )

 ::Dynamic ItemRenderer_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_97_get_data)
HXDLIN(  97)		return this->_data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ItemRenderer_obj,get_data,return )

 ::Dynamic ItemRenderer_obj::set_data( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_99_set_data)
HXLINE( 100)		this->_data = value;
HXLINE( 101)		this->invalidateComponent(HX_("data",2a,56,63,42),false);
HXLINE( 102)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,set_data,return )

void ItemRenderer_obj::validateComponentData(){
            	HX_GC_STACKFRAME(&_hx_pos_b9089dc793ca35ae_108_validateComponentData)
HXLINE( 109)		bool _hx_tmp;
HXDLIN( 109)		if (::hx::IsNotNull( this->_data )) {
HXLINE( 109)			if (::hx::IsNotNull( this->_fieldList )) {
HXLINE( 109)				_hx_tmp = (this->_fieldList->length == 0);
            			}
            			else {
HXLINE( 109)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 109)			_hx_tmp = false;
            		}
HXDLIN( 109)		if (_hx_tmp) {
HXLINE( 110)			 ::ValueType _g = ::Type_obj::_hx_typeof(this->_data);
HXDLIN( 110)			switch((int)(_g->_hx_getIndex())){
            				case (int)4: {
HXLINE( 112)					if ((::Std_obj::isOfType(this->_data,::hx::ClassOf< ::String >()) == false)) {
HXLINE( 113)						::Array< ::String > fieldList = ::Reflect_obj::fields(this->_data);
HXLINE( 114)						if (::hx::IsNotNull( ::Type_obj::getClass(this->_data) )) {
HXLINE( 115)							::Array< ::String > instanceFields = ::Type_obj::getInstanceFields(::Type_obj::getClass(this->_data));
HXLINE( 116)							{
HXLINE( 116)								int _g = 0;
HXDLIN( 116)								while((_g < instanceFields->length)){
HXLINE( 116)									::String i = instanceFields->__get(_g);
HXDLIN( 116)									_g = (_g + 1);
HXLINE( 117)									bool _hx_tmp;
HXDLIN( 117)									if ((fieldList->indexOf(i,null()) == -1)) {
HXLINE( 117)										_hx_tmp = (::Reflect_obj::isFunction(::Reflect_obj::getProperty(this->_data,i)) == false);
            									}
            									else {
HXLINE( 117)										_hx_tmp = false;
            									}
HXDLIN( 117)									if (_hx_tmp) {
HXLINE( 118)										fieldList->push(i);
            									}
            									else {
HXLINE( 119)										bool _hx_tmp;
HXDLIN( 119)										bool _hx_tmp1;
HXDLIN( 119)										if (::StringTools_obj::startsWith(i,HX_("get_",09,03,62,44))) {
HXLINE( 119)											_hx_tmp1 = (fieldList->indexOf(i.substr(4,null()),null()) == -1);
            										}
            										else {
HXLINE( 119)											_hx_tmp1 = false;
            										}
HXDLIN( 119)										if (_hx_tmp1) {
HXLINE( 119)											_hx_tmp = (::Reflect_obj::isFunction(::Reflect_obj::getProperty(this->_data,i)) == true);
            										}
            										else {
HXLINE( 119)											_hx_tmp = false;
            										}
HXDLIN( 119)										if (_hx_tmp) {
HXLINE( 120)											fieldList->push(i.substr(4,null()));
            										}
            									}
            								}
            							}
HXLINE( 123)							this->_fieldList = fieldList;
            						}
            					}
            					else {
HXLINE( 126)						this->_fieldList = ::Array_obj< ::String >::fromData( _hx_array_data_221936b3_21,1);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 111)					::hx::Class _g1 = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXLINE( 112)					if ((::Std_obj::isOfType(this->_data,::hx::ClassOf< ::String >()) == false)) {
HXLINE( 113)						::Array< ::String > fieldList = ::Reflect_obj::fields(this->_data);
HXLINE( 114)						if (::hx::IsNotNull( ::Type_obj::getClass(this->_data) )) {
HXLINE( 115)							::Array< ::String > instanceFields = ::Type_obj::getInstanceFields(::Type_obj::getClass(this->_data));
HXLINE( 116)							{
HXLINE( 116)								int _g = 0;
HXDLIN( 116)								while((_g < instanceFields->length)){
HXLINE( 116)									::String i = instanceFields->__get(_g);
HXDLIN( 116)									_g = (_g + 1);
HXLINE( 117)									bool _hx_tmp;
HXDLIN( 117)									if ((fieldList->indexOf(i,null()) == -1)) {
HXLINE( 117)										_hx_tmp = (::Reflect_obj::isFunction(::Reflect_obj::getProperty(this->_data,i)) == false);
            									}
            									else {
HXLINE( 117)										_hx_tmp = false;
            									}
HXDLIN( 117)									if (_hx_tmp) {
HXLINE( 118)										fieldList->push(i);
            									}
            									else {
HXLINE( 119)										bool _hx_tmp;
HXDLIN( 119)										bool _hx_tmp1;
HXDLIN( 119)										if (::StringTools_obj::startsWith(i,HX_("get_",09,03,62,44))) {
HXLINE( 119)											_hx_tmp1 = (fieldList->indexOf(i.substr(4,null()),null()) == -1);
            										}
            										else {
HXLINE( 119)											_hx_tmp1 = false;
            										}
HXDLIN( 119)										if (_hx_tmp1) {
HXLINE( 119)											_hx_tmp = (::Reflect_obj::isFunction(::Reflect_obj::getProperty(this->_data,i)) == true);
            										}
            										else {
HXLINE( 119)											_hx_tmp = false;
            										}
HXDLIN( 119)										if (_hx_tmp) {
HXLINE( 120)											fieldList->push(i.substr(4,null()));
            										}
            									}
            								}
            							}
HXLINE( 123)							this->_fieldList = fieldList;
            						}
            					}
            					else {
HXLINE( 126)						this->_fieldList = ::Array_obj< ::String >::fromData( _hx_array_data_221936b3_22,1);
            					}
            				}
            				break;
            				default:{
HXLINE( 129)					this->_fieldList = ::Array_obj< ::String >::fromData( _hx_array_data_221936b3_23,1);
            				}
            			}
            		}
HXLINE( 133)		this->updateValues(this->_data,this->_fieldList);
HXLINE( 135)		if (this->autoRegisterInteractiveEvents) {
HXLINE( 136)			::Array< ::Dynamic> components = this->findComponents(null(),::hx::ClassOf< ::haxe::ui::core::InteractiveComponent >(),null());
HXLINE( 137)			{
HXLINE( 137)				int _g = 0;
HXDLIN( 137)				while((_g < components->length)){
HXLINE( 137)					 ::haxe::ui::core::InteractiveComponent c = components->__get(_g).StaticCast<  ::haxe::ui::core::InteractiveComponent >();
HXDLIN( 137)					_g = (_g + 1);
HXLINE( 138)					if ((c->hasEvent(::haxe::ui::events::MouseEvent_obj::CLICK,this->onItemClick_dyn()) == false)) {
HXLINE( 139)						c->registerEvent(::haxe::ui::events::MouseEvent_obj::CLICK,this->onItemClick_dyn(),null());
            					}
HXLINE( 141)					if ((c->hasEvent(::haxe::ui::events::UIEvent_obj::CHANGE,this->onItemChange_dyn()) == false)) {
HXLINE( 142)						c->registerEvent(::haxe::ui::events::UIEvent_obj::CHANGE,this->onItemChange_dyn(),null());
            					}
            				}
            			}
            		}
HXLINE( 147)		this->onDataChanged(this->_data);
HXLINE( 148)		 ::haxe::ui::events::ItemRendererEvent event =  ::haxe::ui::events::ItemRendererEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ItemRendererEvent_obj::DATA_CHANGED,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 149)		this->dispatch(event,null());
            	}


void ItemRenderer_obj::onDataChanged( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_153_onDataChanged)
HXDLIN( 153)		this->_data = data;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,onDataChanged,(void))

void ItemRenderer_obj::onItemChange( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_b9089dc793ca35ae_156_onItemChange)
HXLINE( 157)		if ((this->itemIndex < 0)) {
HXLINE( 158)			return;
            		}
HXLINE( 160)		 ::Dynamic v = event->target->get_value();
HXLINE( 161)		bool _hx_tmp;
HXDLIN( 161)		if (::hx::IsNotNull( this->_data )) {
HXLINE( 161)			_hx_tmp = ::hx::IsNotNull( event->target->get_id() );
            		}
            		else {
HXLINE( 161)			_hx_tmp = false;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 162)			 ::Dynamic item = this->_data;
HXDLIN( 162)			 ::Dynamic item1 = ::Reflect_obj::getProperty(item,event->target->get_id());
HXLINE( 163)			if ((::Type_obj::_hx_typeof(item1)->_hx_getIndex() == 4)) {
HXLINE( 165)				item1->__SetField(HX_("value",71,7f,b8,31),v,::hx::paccDynamic);
            			}
            			else {
HXLINE( 167)				 ::Dynamic _hx_tmp = this->_data;
HXDLIN( 167)				::Reflect_obj::setProperty(_hx_tmp,event->target->get_id(),v);
            			}
            		}
HXLINE( 171)		 ::haxe::ui::events::ItemEvent e =  ::haxe::ui::events::ItemEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ItemEvent_obj::COMPONENT_EVENT,null(),null());
HXLINE( 172)		e->bubble = true;
HXLINE( 173)		e->source = event->target;
HXLINE( 174)		e->sourceEvent = event;
HXLINE( 175)		e->itemIndex = this->itemIndex;
HXLINE( 176)		e->data = this->_data;
HXLINE( 177)		this->dispatch(e,null());
HXLINE( 179)		 ::haxe::ui::events::ItemEvent e2 =  ::haxe::ui::events::ItemEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ItemEvent_obj::COMPONENT_CHANGE_EVENT,null(),null());
HXLINE( 180)		e2->bubble = true;
HXLINE( 181)		e2->source = event->target;
HXLINE( 182)		e2->sourceEvent = event;
HXLINE( 183)		e2->itemIndex = this->itemIndex;
HXLINE( 184)		e2->data = this->_data;
HXLINE( 185)		this->dispatch(e2,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,onItemChange,(void))

void ItemRenderer_obj::onItemClick( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_b9089dc793ca35ae_188_onItemClick)
HXLINE( 189)		if ((this->itemIndex < 0)) {
HXLINE( 190)			return;
            		}
HXLINE( 193)		 ::haxe::ui::events::ItemEvent e =  ::haxe::ui::events::ItemEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ItemEvent_obj::COMPONENT_EVENT,null(),null());
HXLINE( 194)		e->bubble = true;
HXLINE( 195)		e->source = event->target;
HXLINE( 196)		e->sourceEvent = event;
HXLINE( 197)		e->itemIndex = this->itemIndex;
HXLINE( 198)		e->data = this->_data;
HXLINE( 199)		this->dispatch(e,null());
HXLINE( 201)		 ::haxe::ui::events::ItemEvent e2 =  ::haxe::ui::events::ItemEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::ItemEvent_obj::COMPONENT_CLICK_EVENT,null(),null());
HXLINE( 202)		e2->bubble = true;
HXLINE( 203)		e2->source = event->target;
HXLINE( 204)		e2->sourceEvent = event;
HXLINE( 205)		e2->itemIndex = this->itemIndex;
HXLINE( 206)		e2->data = this->_data;
HXLINE( 207)		this->dispatch(e2,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,onItemClick,(void))

void ItemRenderer_obj::updateValues( ::Dynamic value,::Array< ::String > fieldList){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_210_updateValues)
HXLINE( 211)		if (::hx::IsNull( fieldList )) {
HXLINE( 212)			fieldList = ::Reflect_obj::fields(value);
            		}
HXLINE( 215)		 ::Dynamic valueObject = null();
HXLINE( 216)		{
HXLINE( 216)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 216)			switch((int)(_g->_hx_getIndex())){
            				case (int)4: {
HXLINE( 218)					if ((::Std_obj::isOfType(value,::hx::ClassOf< ::String >()) == false)) {
HXLINE( 219)						valueObject = value;
            					}
            					else {
HXLINE( 221)						valueObject =  ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("text",ad,cc,f9,4c),value));
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 217)					::hx::Class _g1 = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXLINE( 218)					if ((::Std_obj::isOfType(value,::hx::ClassOf< ::String >()) == false)) {
HXLINE( 219)						valueObject = value;
            					}
            					else {
HXLINE( 221)						valueObject =  ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("text",ad,cc,f9,4c),value));
            					}
            				}
            				break;
            				default:{
HXLINE( 224)					valueObject =  ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("text",ad,cc,f9,4c),value));
            				}
            			}
            		}
HXLINE( 227)		{
HXLINE( 227)			int _g1 = 0;
HXDLIN( 227)			while((_g1 < fieldList->length)){
HXLINE( 227)				::String f = fieldList->__get(_g1);
HXDLIN( 227)				_g1 = (_g1 + 1);
HXLINE( 228)				::String property = HX_("value",71,7f,b8,31);
HXLINE( 229)				 ::Dynamic v = ::Reflect_obj::getProperty(valueObject,f);
HXLINE( 230)				::String componentId = f;
HXLINE( 231)				int n = f.indexOf(HX_(".",2e,00,00,00),null());
HXLINE( 232)				if ((n != -1)) {
HXLINE( 233)					componentId = f.substring(0,n);
HXLINE( 234)					property = f.substring((n + 1),null());
            				}
HXLINE( 236)				 ::haxe::ui::core::Component c = ( ( ::haxe::ui::core::Component)(this->findComponent(componentId,null(),true,null())) );
HXLINE( 237)				bool _hx_tmp;
HXDLIN( 237)				if (::hx::IsNotNull( c )) {
HXLINE( 237)					_hx_tmp = ::hx::IsNotNull( v );
            				}
            				else {
HXLINE( 237)					_hx_tmp = false;
            				}
HXDLIN( 237)				if (_hx_tmp) {
HXLINE( 238)					if ((::Type_obj::_hx_typeof(v)->_hx_getIndex() == 4)) {
HXLINE( 240)						int _g = 0;
HXDLIN( 240)						::Array< ::String > _g1 = ::Reflect_obj::fields(v);
HXDLIN( 240)						while((_g < _g1->length)){
HXLINE( 240)							::String valueField = _g1->__get(_g);
HXDLIN( 240)							_g = (_g + 1);
HXLINE( 241)							 ::Dynamic valueFieldValue = ::Reflect_obj::field(v,valueField);
HXLINE( 242)							this->setComponentProperty(c,valueFieldValue,valueField);
            						}
            					}
            					else {
HXLINE( 245)						this->setComponentProperty(c,v,property);
            					}
HXLINE( 248)					c->show();
            				}
            				else {
HXLINE( 249)					if (::hx::IsNotNull( c )) {
HXLINE( 250)						c->hide();
            					}
            					else {
HXLINE( 251)						bool _hx_tmp;
HXDLIN( 251)						if ((f != HX_("id",db,5b,00,00))) {
HXLINE( 251)							_hx_tmp = (f != HX_("layout",aa,ae,b8,58));
            						}
            						else {
HXLINE( 251)							_hx_tmp = false;
            						}
HXDLIN( 251)						if (_hx_tmp) {
HXLINE( 252)							try {
            								HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 253)								::Reflect_obj::setProperty(::hx::ObjectPtr<OBJ_>(this),f,v);
            							} catch( ::Dynamic _hx_e) {
            								if (_hx_e.IsClass<  ::Dynamic >() ){
            									HX_STACK_BEGIN_CATCH
            									 ::Dynamic _g = _hx_e;
HXLINE( 254)									{
HXLINE( 254)										null();
            									}
            								}
            								else {
            									HX_STACK_DO_THROW(_hx_e);
            								}
            							}
            						}
            						else {
HXLINE( 255)							if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(v),::ValueType_obj::TObject_dyn() )) {
HXLINE( 256)								this->updateValues(v,null());
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ItemRenderer_obj,updateValues,(void))

void ItemRenderer_obj::setComponentProperty( ::haxe::ui::core::Component c, ::Dynamic v,::String property){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_261_setComponentProperty)
HXLINE( 262)		::String typeInfo = ::haxe::ui::core::TypeMap_obj::getTypeInfo(c->get_className(),property);
HXLINE( 263)		 ::Dynamic propValue = ::haxe::ui::util::TypeConverter_obj::convertTo(v,typeInfo);
HXLINE( 264)		if ((property == HX_("value",71,7f,b8,31))) {
HXLINE( 265)			c->set_value(propValue);
            		}
            		else {
HXLINE( 266)			if ((typeInfo == HX_("variant",85,40,e2,dc))) {
HXLINE( 267)				::Reflect_obj::setProperty(c,property,::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(v));
            			}
            			else {
HXLINE( 269)				::Reflect_obj::setProperty(c,property,v);
            			}
            		}
HXLINE( 272)		if (this->autoRegisterInteractiveEvents) {
HXLINE( 273)			bool _hx_tmp;
HXDLIN( 273)			if (!(::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::core::InteractiveComponent >()))) {
HXLINE( 273)				_hx_tmp = ::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >());
            			}
            			else {
HXLINE( 273)				_hx_tmp = true;
            			}
HXDLIN( 273)			if (_hx_tmp) {
HXLINE( 274)				if ((c->hasEvent(::haxe::ui::events::UIEvent_obj::CHANGE,this->onItemChange_dyn()) == false)) {
HXLINE( 275)					c->registerEvent(::haxe::ui::events::UIEvent_obj::CHANGE,this->onItemChange_dyn(),null());
            				}
HXLINE( 277)				if ((c->hasEvent(::haxe::ui::events::MouseEvent_obj::CLICK,this->onItemClick_dyn()) == false)) {
HXLINE( 278)					c->registerEvent(::haxe::ui::events::MouseEvent_obj::CLICK,this->onItemClick_dyn(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ItemRenderer_obj,setComponentProperty,(void))

void ItemRenderer_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_a11f04ad81e36a66_551_registerBehaviours)
HXDLIN( 551)		this->super::registerBehaviours();
            	}


 ::haxe::ui::backend::ComponentBase ItemRenderer_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_f5f102a918a50d65_700_cloneComponent)
HXLINE( 469)		 ::haxe::ui::core::ItemRenderer c = ( ( ::haxe::ui::core::ItemRenderer)(this->super::cloneComponent()) );
HXLINE( 480)		c->autoRegisterInteractiveEvents = this->autoRegisterInteractiveEvents;
HXDLIN( 480)		c->recursiveStyling = this->recursiveStyling;
HXDLIN( 480)		c->set_allowHover(this->get_allowHover());
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


 ::haxe::ui::backend::ComponentBase ItemRenderer_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_a11f04ad81e36a66_521_self)
HXDLIN( 521)		return  ::haxe::ui::core::ItemRenderer_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< ItemRenderer_obj > ItemRenderer_obj::__new() {
	::hx::ObjectPtr< ItemRenderer_obj > __this = new ItemRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ItemRenderer_obj > ItemRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ItemRenderer_obj *__this = (ItemRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ItemRenderer_obj), true, "haxe.ui.core.ItemRenderer"));
	*(void **)__this = ItemRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ItemRenderer_obj::ItemRenderer_obj()
{
}

void ItemRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ItemRenderer);
	HX_MARK_MEMBER_NAME(autoRegisterInteractiveEvents,"autoRegisterInteractiveEvents");
	HX_MARK_MEMBER_NAME(recursiveStyling,"recursiveStyling");
	HX_MARK_MEMBER_NAME(_allowHover,"_allowHover");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(itemIndex,"itemIndex");
	HX_MARK_MEMBER_NAME(_fieldList,"_fieldList");
	 ::haxe::ui::containers::Box_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ItemRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(autoRegisterInteractiveEvents,"autoRegisterInteractiveEvents");
	HX_VISIT_MEMBER_NAME(recursiveStyling,"recursiveStyling");
	HX_VISIT_MEMBER_NAME(_allowHover,"_allowHover");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(itemIndex,"itemIndex");
	HX_VISIT_MEMBER_NAME(_fieldList,"_fieldList");
	 ::haxe::ui::containers::Box_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ItemRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_data() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return ::hx::Val( _data ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return ::hx::Val( get_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return ::hx::Val( set_data_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemIndex") ) { return ::hx::Val( itemIndex ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowHover") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_allowHover() ); }
		if (HX_FIELD_EQ(inName,"_fieldList") ) { return ::hx::Val( _fieldList ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowHover") ) { return ::hx::Val( _allowHover ); }
		if (HX_FIELD_EQ(inName,"onItemClick") ) { return ::hx::Val( onItemClick_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onItemChange") ) { return ::hx::Val( onItemChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateValues") ) { return ::hx::Val( updateValues_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onDataChanged") ) { return ::hx::Val( onDataChanged_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onItemMouseUp") ) { return ::hx::Val( _onItemMouseUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_allowHover") ) { return ::hx::Val( get_allowHover_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowHover") ) { return ::hx::Val( set_allowHover_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onItemMouseOut") ) { return ::hx::Val( _onItemMouseOut_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"recursiveStyling") ) { return ::hx::Val( recursiveStyling ); }
		if (HX_FIELD_EQ(inName,"_onItemMouseOver") ) { return ::hx::Val( _onItemMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onItemMouseDown") ) { return ::hx::Val( _onItemMouseDown_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setComponentProperty") ) { return ::hx::Val( setComponentProperty_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"validateComponentData") ) { return ::hx::Val( validateComponentData_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"autoRegisterInteractiveEvents") ) { return ::hx::Val( autoRegisterInteractiveEvents ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ItemRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_data(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemIndex") ) { itemIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowHover") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowHover(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_fieldList") ) { _fieldList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowHover") ) { _allowHover=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"recursiveStyling") ) { recursiveStyling=inValue.Cast< bool >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"autoRegisterInteractiveEvents") ) { autoRegisterInteractiveEvents=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ItemRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("autoRegisterInteractiveEvents",49,5d,a7,cf));
	outFields->push(HX_("recursiveStyling",5c,2b,a5,4a));
	outFields->push(HX_("_allowHover",92,6d,ba,28));
	outFields->push(HX_("allowHover",73,a0,30,56));
	outFields->push(HX_("_data",09,72,74,f5));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("itemIndex",ff,00,00,be));
	outFields->push(HX_("_fieldList",f9,3d,a4,3a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ItemRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ItemRenderer_obj,autoRegisterInteractiveEvents),HX_("autoRegisterInteractiveEvents",49,5d,a7,cf)},
	{::hx::fsBool,(int)offsetof(ItemRenderer_obj,recursiveStyling),HX_("recursiveStyling",5c,2b,a5,4a)},
	{::hx::fsBool,(int)offsetof(ItemRenderer_obj,_allowHover),HX_("_allowHover",92,6d,ba,28)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ItemRenderer_obj,_data),HX_("_data",09,72,74,f5)},
	{::hx::fsInt,(int)offsetof(ItemRenderer_obj,itemIndex),HX_("itemIndex",ff,00,00,be)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(ItemRenderer_obj,_fieldList),HX_("_fieldList",f9,3d,a4,3a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ItemRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String ItemRenderer_obj_sMemberFields[] = {
	HX_("autoRegisterInteractiveEvents",49,5d,a7,cf),
	HX_("recursiveStyling",5c,2b,a5,4a),
	HX_("_onItemMouseOver",68,54,6a,28),
	HX_("_onItemMouseOut",fa,db,96,fb),
	HX_("_onItemMouseDown",76,bb,1f,21),
	HX_("_onItemMouseUp",6f,7c,b1,bf),
	HX_("_allowHover",92,6d,ba,28),
	HX_("get_allowHover",bc,28,26,cc),
	HX_("set_allowHover",30,11,46,ec),
	HX_("_data",09,72,74,f5),
	HX_("get_data",b3,11,1e,c2),
	HX_("set_data",27,6b,7b,70),
	HX_("itemIndex",ff,00,00,be),
	HX_("_fieldList",f9,3d,a4,3a),
	HX_("validateComponentData",11,6f,7d,76),
	HX_("onDataChanged",0b,19,a2,71),
	HX_("onItemChange",e2,fc,c3,7d),
	HX_("onItemClick",16,c5,8c,6a),
	HX_("updateValues",cb,aa,7a,4f),
	HX_("setComponentProperty",30,68,15,a3),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class ItemRenderer_obj::__mClass;

void ItemRenderer_obj::__register()
{
	ItemRenderer_obj _hx_dummy;
	ItemRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ItemRenderer",b3,36,19,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ItemRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ItemRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ItemRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ItemRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ItemRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_14_boot)
HXDLIN(  14)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("allowHover",73,a0,30,56), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null()))))));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
