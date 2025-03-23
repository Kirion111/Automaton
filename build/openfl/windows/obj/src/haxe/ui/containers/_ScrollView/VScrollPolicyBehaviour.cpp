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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_VScrollPolicyBehaviour
#include <haxe/ui/containers/_ScrollView/VScrollPolicyBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e650f21020b99b16_639_new,"haxe.ui.containers._ScrollView.VScrollPolicyBehaviour","new",0xd309b5a1,"haxe.ui.containers._ScrollView.VScrollPolicyBehaviour.new","haxe/ui/containers/ScrollView.hx",639,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void VScrollPolicyBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_e650f21020b99b16_639_new)
HXDLIN( 639)		super::__construct(component);
            	}

Dynamic VScrollPolicyBehaviour_obj::__CreateEmpty() { return new VScrollPolicyBehaviour_obj; }

void *VScrollPolicyBehaviour_obj::_hx_vtable = 0;

Dynamic VScrollPolicyBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VScrollPolicyBehaviour_obj > _hx_result = new VScrollPolicyBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VScrollPolicyBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x0eac6f65) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0eac6f65;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}


::hx::ObjectPtr< VScrollPolicyBehaviour_obj > VScrollPolicyBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< VScrollPolicyBehaviour_obj > __this = new VScrollPolicyBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< VScrollPolicyBehaviour_obj > VScrollPolicyBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	VScrollPolicyBehaviour_obj *__this = (VScrollPolicyBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VScrollPolicyBehaviour_obj), true, "haxe.ui.containers._ScrollView.VScrollPolicyBehaviour"));
	*(void **)__this = VScrollPolicyBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

VScrollPolicyBehaviour_obj::VScrollPolicyBehaviour_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *VScrollPolicyBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VScrollPolicyBehaviour_obj_sStaticStorageInfo = 0;
#endif

::hx::Class VScrollPolicyBehaviour_obj::__mClass;

void VScrollPolicyBehaviour_obj::__register()
{
	VScrollPolicyBehaviour_obj _hx_dummy;
	VScrollPolicyBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.VScrollPolicyBehaviour",2f,51,7c,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< VScrollPolicyBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VScrollPolicyBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VScrollPolicyBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
