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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonGroups
#include <haxe/ui/components/ButtonGroups.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Button_GroupBehaviour
#include <haxe/ui/components/_Button/GroupBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_33100ef250bd0142_334_new,"haxe.ui.components._Button.GroupBehaviour","new",0x422d79b3,"haxe.ui.components._Button.GroupBehaviour.new","haxe/ui/components/Button.hx",334,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_33100ef250bd0142_335_set,"haxe.ui.components._Button.GroupBehaviour","set",0x423144f5,"haxe.ui.components._Button.GroupBehaviour.set","haxe/ui/components/Button.hx",335,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_33100ef250bd0142_343_validateData,"haxe.ui.components._Button.GroupBehaviour","validateData",0x52b16a2d,"haxe.ui.components._Button.GroupBehaviour.validateData","haxe/ui/components/Button.hx",343,0x45086125)
namespace haxe{
namespace ui{
namespace components{
namespace _Button{

void GroupBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_33100ef250bd0142_334_new)
HXDLIN( 334)		super::__construct(component);
            	}

Dynamic GroupBehaviour_obj::__CreateEmpty() { return new GroupBehaviour_obj; }

void *GroupBehaviour_obj::_hx_vtable = 0;

Dynamic GroupBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GroupBehaviour_obj > _hx_result = new GroupBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GroupBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x36bdd8ff) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x36bdd8ff;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void GroupBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_33100ef250bd0142_335_set)
HXLINE( 336)		this->super::set(value);
HXLINE( 337)		bool _hx_tmp;
HXDLIN( 337)		bool _hx_tmp1;
HXDLIN( 337)		if (::hx::IsNotNull( this->_previousValue )) {
HXLINE( 337)			_hx_tmp1 = !(::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_previousValue));
            		}
            		else {
HXLINE( 337)			_hx_tmp1 = false;
            		}
HXDLIN( 337)		if (_hx_tmp1) {
HXLINE( 337)			::String _hx_tmp1 = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_previousValue);
HXDLIN( 337)			_hx_tmp = (_hx_tmp1 != ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
            		}
            		else {
HXLINE( 337)			_hx_tmp = false;
            		}
HXDLIN( 337)		if (_hx_tmp) {
HXLINE( 338)			 ::haxe::ui::components::ButtonGroups _hx_tmp = ::haxe::ui::components::ButtonGroups_obj::get_instance();
HXDLIN( 338)			_hx_tmp->remove(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_previousValue),( ( ::haxe::ui::components::Button)(this->_component) ));
            		}
HXLINE( 340)		 ::haxe::ui::components::ButtonGroups _hx_tmp2 = ::haxe::ui::components::ButtonGroups_obj::get_instance();
HXDLIN( 340)		_hx_tmp2->add(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value),( ( ::haxe::ui::components::Button)(this->_component) ));
            	}


void GroupBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_33100ef250bd0142_343_validateData)
HXLINE( 344)		bool _hx_tmp;
HXDLIN( 344)		bool _hx_tmp1;
HXDLIN( 344)		if (::hx::IsNotNull( this->_previousValue )) {
HXLINE( 344)			_hx_tmp1 = !(::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_previousValue));
            		}
            		else {
HXLINE( 344)			_hx_tmp1 = false;
            		}
HXDLIN( 344)		if (_hx_tmp1) {
HXLINE( 344)			::String _hx_tmp1 = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_previousValue);
HXDLIN( 344)			_hx_tmp = (_hx_tmp1 != ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
            		}
            		else {
HXLINE( 344)			_hx_tmp = false;
            		}
HXDLIN( 344)		if (_hx_tmp) {
HXLINE( 345)			 ::haxe::ui::components::ButtonGroups _hx_tmp = ::haxe::ui::components::ButtonGroups_obj::get_instance();
HXDLIN( 345)			_hx_tmp->remove(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_previousValue),( ( ::haxe::ui::components::Button)(this->_component) ));
            		}
HXLINE( 347)		 ::haxe::ui::components::ButtonGroups _hx_tmp2 = ::haxe::ui::components::ButtonGroups_obj::get_instance();
HXDLIN( 347)		_hx_tmp2->add(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value),( ( ::haxe::ui::components::Button)(this->_component) ));
            	}



::hx::ObjectPtr< GroupBehaviour_obj > GroupBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< GroupBehaviour_obj > __this = new GroupBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< GroupBehaviour_obj > GroupBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	GroupBehaviour_obj *__this = (GroupBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GroupBehaviour_obj), true, "haxe.ui.components._Button.GroupBehaviour"));
	*(void **)__this = GroupBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

GroupBehaviour_obj::GroupBehaviour_obj()
{
}

::hx::Val GroupBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GroupBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GroupBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String GroupBehaviour_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class GroupBehaviour_obj::__mClass;

void GroupBehaviour_obj::__register()
{
	GroupBehaviour_obj _hx_dummy;
	GroupBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Button.GroupBehaviour",41,24,84,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GroupBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GroupBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GroupBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GroupBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Button
