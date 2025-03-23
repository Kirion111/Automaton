#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Button_ToggleBehaviour
#include <haxe/ui/components/_Button/ToggleBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a7c69801980b3472_436_new,"haxe.ui.components._Button.ToggleBehaviour","new",0x04a58158,"haxe.ui.components._Button.ToggleBehaviour.new","haxe/ui/components/Button.hx",436,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_a7c69801980b3472_440_get,"haxe.ui.components._Button.ToggleBehaviour","get",0x04a0318e,"haxe.ui.components._Button.ToggleBehaviour.get","haxe/ui/components/Button.hx",440,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_a7c69801980b3472_443_set,"haxe.ui.components._Button.ToggleBehaviour","set",0x04a94c9a,"haxe.ui.components._Button.ToggleBehaviour.set","haxe/ui/components/Button.hx",443,0x45086125)
namespace haxe{
namespace ui{
namespace components{
namespace _Button{

void ToggleBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_a7c69801980b3472_436_new)
HXDLIN( 436)		super::__construct(component);
            	}

Dynamic ToggleBehaviour_obj::__CreateEmpty() { return new ToggleBehaviour_obj; }

void *ToggleBehaviour_obj::_hx_vtable = 0;

Dynamic ToggleBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ToggleBehaviour_obj > _hx_result = new ToggleBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ToggleBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2b90a6e8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2b90a6e8;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType ToggleBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_a7c69801980b3472_440_get)
HXDLIN( 440)		return this->_value;
            	}


void ToggleBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_a7c69801980b3472_443_set)
HXLINE( 444)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(this->_value,value)) {
HXLINE( 445)			return;
            		}
HXLINE( 448)		this->_value = value;
HXLINE( 449)		 ::haxe::ui::components::Button button = ::hx::TCast<  ::haxe::ui::components::Button >::cast(this->_component);
HXLINE( 450)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false))) {
HXLINE( 451)			button->set_selected(false);
            		}
HXLINE( 453)		button->registerInternalEvents(button->_internalEventsClass,true);
            	}



::hx::ObjectPtr< ToggleBehaviour_obj > ToggleBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ToggleBehaviour_obj > __this = new ToggleBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ToggleBehaviour_obj > ToggleBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ToggleBehaviour_obj *__this = (ToggleBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ToggleBehaviour_obj), true, "haxe.ui.components._Button.ToggleBehaviour"));
	*(void **)__this = ToggleBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ToggleBehaviour_obj::ToggleBehaviour_obj()
{
}

void ToggleBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ToggleBehaviour);
	HX_MARK_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::behaviours::Behaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ToggleBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::behaviours::Behaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ToggleBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return ::hx::Val( _value ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ToggleBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ToggleBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_value",b2,c6,9f,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ToggleBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::util::VariantType */ ,(int)offsetof(ToggleBehaviour_obj,_value),HX_("_value",b2,c6,9f,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ToggleBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ToggleBehaviour_obj_sMemberFields[] = {
	HX_("_value",b2,c6,9f,2d),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class ToggleBehaviour_obj::__mClass;

void ToggleBehaviour_obj::__register()
{
	ToggleBehaviour_obj _hx_dummy;
	ToggleBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Button.ToggleBehaviour",66,35,4c,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ToggleBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ToggleBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ToggleBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ToggleBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Button
