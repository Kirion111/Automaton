#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
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
#ifndef INCLUDED_haxe_ui_components__Label_SelectableBehaviour
#include <haxe/ui/components/_Label/SelectableBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_80cd583123238189_152_new,"haxe.ui.components._Label.SelectableBehaviour","new",0x10c01dc6,"haxe.ui.components._Label.SelectableBehaviour.new","haxe/ui/components/Label.hx",152,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_80cd583123238189_154_validateData,"haxe.ui.components._Label.SelectableBehaviour","validateData",0x1c312bba,"haxe.ui.components._Label.SelectableBehaviour.validateData","haxe/ui/components/Label.hx",154,0xeb990e51)
namespace haxe{
namespace ui{
namespace components{
namespace _Label{

void SelectableBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_80cd583123238189_152_new)
HXDLIN( 152)		super::__construct(component);
            	}

Dynamic SelectableBehaviour_obj::__CreateEmpty() { return new SelectableBehaviour_obj; }

void *SelectableBehaviour_obj::_hx_vtable = 0;

Dynamic SelectableBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectableBehaviour_obj > _hx_result = new SelectableBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectableBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x698cac22 || inClassId==(int)0x7e17fa9f;
	}
}

void SelectableBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_80cd583123238189_154_validateData)
HXDLIN( 154)		 ::haxe::ui::core::TextDisplay _hx_tmp = this->_component->getTextDisplay();
HXDLIN( 154)		_hx_tmp->set_selectable(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->_value));
            	}



::hx::ObjectPtr< SelectableBehaviour_obj > SelectableBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectableBehaviour_obj > __this = new SelectableBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectableBehaviour_obj > SelectableBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectableBehaviour_obj *__this = (SelectableBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectableBehaviour_obj), true, "haxe.ui.components._Label.SelectableBehaviour"));
	*(void **)__this = SelectableBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectableBehaviour_obj::SelectableBehaviour_obj()
{
}

::hx::Val SelectableBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectableBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectableBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectableBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class SelectableBehaviour_obj::__mClass;

void SelectableBehaviour_obj::__register()
{
	SelectableBehaviour_obj _hx_dummy;
	SelectableBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Label.SelectableBehaviour",d4,82,a8,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectableBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectableBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectableBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectableBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Label
