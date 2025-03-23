#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentToolTipRendererBehaviour
#include <haxe/ui/backend/ComponentToolTipRendererBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_tooltips_ToolTipManager
#include <haxe/ui/tooltips/ToolTipManager.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6840e96fe10c9912_1998_new,"haxe.ui.backend.ComponentToolTipRendererBehaviour","new",0xdab6c49a,"haxe.ui.backend.ComponentToolTipRendererBehaviour.new","haxe/ui/backend/ComponentBase.hx",1998,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_6840e96fe10c9912_2000_validateData,"haxe.ui.backend.ComponentToolTipRendererBehaviour","validateData",0xeae10a66,"haxe.ui.backend.ComponentToolTipRendererBehaviour.validateData","haxe/ui/backend/ComponentBase.hx",2000,0xb60bbb7d)
namespace haxe{
namespace ui{
namespace backend{

void ComponentToolTipRendererBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6840e96fe10c9912_1998_new)
HXDLIN(1998)		super::__construct(component);
            	}

Dynamic ComponentToolTipRendererBehaviour_obj::__CreateEmpty() { return new ComponentToolTipRendererBehaviour_obj; }

void *ComponentToolTipRendererBehaviour_obj::_hx_vtable = 0;

Dynamic ComponentToolTipRendererBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentToolTipRendererBehaviour_obj > _hx_result = new ComponentToolTipRendererBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ComponentToolTipRendererBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x01c8319e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x01c8319e;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void ComponentToolTipRendererBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_6840e96fe10c9912_2000_validateData)
HXDLIN(2000)		bool _hx_tmp;
HXDLIN(2000)		if (::hx::IsNotNull( this->_value )) {
HXDLIN(2000)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXDLIN(2000)			_hx_tmp = true;
            		}
HXDLIN(2000)		if (_hx_tmp) {
HXLINE(2001)			::haxe::ui::tooltips::ToolTipManager_obj::get_instance()->updateTooltipRenderer(this->_component,null());
            		}
            		else {
HXLINE(2003)			 ::haxe::ui::tooltips::ToolTipManager _hx_tmp = ::haxe::ui::tooltips::ToolTipManager_obj::get_instance();
HXDLIN(2003)			 ::haxe::ui::core::Component _hx_tmp1 = this->_component;
HXDLIN(2003)			_hx_tmp->updateTooltipRenderer(_hx_tmp1,( ( ::haxe::ui::core::ItemRenderer)(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->_value)) ));
            		}
            	}



::hx::ObjectPtr< ComponentToolTipRendererBehaviour_obj > ComponentToolTipRendererBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ComponentToolTipRendererBehaviour_obj > __this = new ComponentToolTipRendererBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ComponentToolTipRendererBehaviour_obj > ComponentToolTipRendererBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ComponentToolTipRendererBehaviour_obj *__this = (ComponentToolTipRendererBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentToolTipRendererBehaviour_obj), true, "haxe.ui.backend.ComponentToolTipRendererBehaviour"));
	*(void **)__this = ComponentToolTipRendererBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ComponentToolTipRendererBehaviour_obj::ComponentToolTipRendererBehaviour_obj()
{
}

::hx::Val ComponentToolTipRendererBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComponentToolTipRendererBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ComponentToolTipRendererBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentToolTipRendererBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class ComponentToolTipRendererBehaviour_obj::__mClass;

void ComponentToolTipRendererBehaviour_obj::__register()
{
	ComponentToolTipRendererBehaviour_obj _hx_dummy;
	ComponentToolTipRendererBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ComponentToolTipRendererBehaviour",a8,2f,66,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentToolTipRendererBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentToolTipRendererBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentToolTipRendererBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentToolTipRendererBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
