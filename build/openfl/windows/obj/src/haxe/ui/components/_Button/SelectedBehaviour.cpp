#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonGroups
#include <haxe/ui/components/ButtonGroups.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Button_SelectedBehaviour
#include <haxe/ui/components/_Button/SelectedBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_ICompositeInteractiveComponent
#include <haxe/ui/core/ICompositeInteractiveComponent.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_532b9f5f4ea619a7_460_new,"haxe.ui.components._Button.SelectedBehaviour","new",0xcddd1771,"haxe.ui.components._Button.SelectedBehaviour.new","haxe/ui/components/Button.hx",460,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_532b9f5f4ea619a7_461_validateData,"haxe.ui.components._Button.SelectedBehaviour","validateData",0xbbeb24af,"haxe.ui.components._Button.SelectedBehaviour.validateData","haxe/ui/components/Button.hx",461,0x45086125)
namespace haxe{
namespace ui{
namespace components{
namespace _Button{

void SelectedBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_532b9f5f4ea619a7_460_new)
HXDLIN( 460)		super::__construct(component);
            	}

Dynamic SelectedBehaviour_obj::__CreateEmpty() { return new SelectedBehaviour_obj; }

void *SelectedBehaviour_obj::_hx_vtable = 0;

Dynamic SelectedBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectedBehaviour_obj > _hx_result = new SelectedBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x274be101) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x274be101;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void SelectedBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_532b9f5f4ea619a7_461_validateData)
HXLINE( 462)		 ::haxe::ui::components::Button button = ::hx::TCast<  ::haxe::ui::components::Button >::cast(this->_component);
HXLINE( 463)		if ((button->get_toggle() == false)) {
HXLINE( 464)			return;
            		}
HXLINE( 467)		 ::haxe::ui::components::ButtonGroups _hx_tmp = ::haxe::ui::components::ButtonGroups_obj::get_instance();
HXDLIN( 467)		_hx_tmp->setSelection(button,::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->_value),null());
HXLINE( 469)		 ::haxe::ui::util::VariantType _hx_tmp1 = this->_value;
HXDLIN( 469)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(_hx_tmp1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false))) {
HXLINE( 470)			button->removeClass(HX_(":down",9c,9d,ab,a7),true,true);
            		}
            		else {
HXLINE( 472)			button->addClass(HX_(":down",9c,9d,ab,a7),true,true);
            		}
HXLINE( 474)		 ::haxe::ui::components::ButtonEvents events = ::hx::TCast<  ::haxe::ui::components::ButtonEvents >::cast(button->_internalEvents);
HXLINE( 475)		 ::Dynamic _hx_tmp2 = ::haxe::ui::core::Screen_obj::get_instance()->currentMouseX;
HXDLIN( 475)		if (button->hitTest(_hx_tmp2,::haxe::ui::core::Screen_obj::get_instance()->currentMouseY,null())) {
HXLINE( 476)			button->addClass(HX_(":hover",42,d3,17,5c),true,events->recursiveStyling);
            		}
            		else {
HXLINE( 478)			button->removeClass(HX_(":hover",42,d3,17,5c),true,events->recursiveStyling);
            		}
HXLINE( 480)		events->dispatchChanged();
            	}



::hx::ObjectPtr< SelectedBehaviour_obj > SelectedBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedBehaviour_obj > __this = new SelectedBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedBehaviour_obj > SelectedBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedBehaviour_obj *__this = (SelectedBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedBehaviour_obj), true, "haxe.ui.components._Button.SelectedBehaviour"));
	*(void **)__this = SelectedBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedBehaviour_obj::SelectedBehaviour_obj()
{
}

::hx::Val SelectedBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectedBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectedBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class SelectedBehaviour_obj::__mClass;

void SelectedBehaviour_obj::__register()
{
	SelectedBehaviour_obj _hx_dummy;
	SelectedBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Button.SelectedBehaviour",ff,8a,e6,24);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectedBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectedBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Button
