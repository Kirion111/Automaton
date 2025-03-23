#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentTextBehaviour
#include <haxe/ui/backend/ComponentTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_12f1d0e0e4b01ef2_1907_new,"haxe.ui.backend.ComponentTextBehaviour","new",0x845ad111,"haxe.ui.backend.ComponentTextBehaviour.new","haxe/ui/backend/ComponentBase.hx",1907,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_12f1d0e0e4b01ef2_1908_set,"haxe.ui.backend.ComponentTextBehaviour","set",0x845e9c53,"haxe.ui.backend.ComponentTextBehaviour.set","haxe/ui/backend/ComponentBase.hx",1908,0xb60bbb7d)
namespace haxe{
namespace ui{
namespace backend{

void ComponentTextBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_12f1d0e0e4b01ef2_1907_new)
HXDLIN(1907)		super::__construct(component);
            	}

Dynamic ComponentTextBehaviour_obj::__CreateEmpty() { return new ComponentTextBehaviour_obj; }

void *ComponentTextBehaviour_obj::_hx_vtable = 0;

Dynamic ComponentTextBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentTextBehaviour_obj > _hx_result = new ComponentTextBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ComponentTextBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x642d62e9) {
		if (inClassId<=(int)0x3c5dd90d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
		} else {
			return inClassId==(int)0x642d62e9;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

void ComponentTextBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_12f1d0e0e4b01ef2_1908_set)
HXLINE(1909)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,this->_value)) {
HXLINE(1910)			return;
            		}
HXLINE(1913)		this->_value = value;
HXLINE(1915)		this->super::set(value);
            	}



::hx::ObjectPtr< ComponentTextBehaviour_obj > ComponentTextBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ComponentTextBehaviour_obj > __this = new ComponentTextBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ComponentTextBehaviour_obj > ComponentTextBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ComponentTextBehaviour_obj *__this = (ComponentTextBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentTextBehaviour_obj), true, "haxe.ui.backend.ComponentTextBehaviour"));
	*(void **)__this = ComponentTextBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ComponentTextBehaviour_obj::ComponentTextBehaviour_obj()
{
}

::hx::Val ComponentTextBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComponentTextBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ComponentTextBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentTextBehaviour_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class ComponentTextBehaviour_obj::__mClass;

void ComponentTextBehaviour_obj::__register()
{
	ComponentTextBehaviour_obj _hx_dummy;
	ComponentTextBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ComponentTextBehaviour",9f,f4,5e,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentTextBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentTextBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentTextBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentTextBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
