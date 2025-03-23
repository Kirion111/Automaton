#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentValueBehaviour
#include <haxe/ui/backend/ComponentValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_40c9c9c12e49da64_1944_new,"haxe.ui.backend.ComponentValueBehaviour","new",0x4787f84f,"haxe.ui.backend.ComponentValueBehaviour.new","haxe/ui/backend/ComponentBase.hx",1944,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_40c9c9c12e49da64_1945_set,"haxe.ui.backend.ComponentValueBehaviour","set",0x478bc391,"haxe.ui.backend.ComponentValueBehaviour.set","haxe/ui/backend/ComponentBase.hx",1945,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_40c9c9c12e49da64_1955_get,"haxe.ui.backend.ComponentValueBehaviour","get",0x4782a885,"haxe.ui.backend.ComponentValueBehaviour.get","haxe/ui/backend/ComponentBase.hx",1955,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_40c9c9c12e49da64_1959_getDynamic,"haxe.ui.backend.ComponentValueBehaviour","getDynamic",0x623e697a,"haxe.ui.backend.ComponentValueBehaviour.getDynamic","haxe/ui/backend/ComponentBase.hx",1959,0xb60bbb7d)
namespace haxe{
namespace ui{
namespace backend{

void ComponentValueBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_40c9c9c12e49da64_1944_new)
HXDLIN(1944)		super::__construct(component);
            	}

Dynamic ComponentValueBehaviour_obj::__CreateEmpty() { return new ComponentValueBehaviour_obj; }

void *ComponentValueBehaviour_obj::_hx_vtable = 0;

Dynamic ComponentValueBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentValueBehaviour_obj > _hx_result = new ComponentValueBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ComponentValueBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x1b2e3753) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1b2e3753;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

void ComponentValueBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_40c9c9c12e49da64_1945_set)
HXLINE(1946)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,this->_value)) {
HXLINE(1947)			return;
            		}
HXLINE(1950)		this->_value = value;
HXLINE(1951)		 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN(1951)		_hx_tmp->set_text(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value));
            	}


 ::haxe::ui::util::VariantType ComponentValueBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_40c9c9c12e49da64_1955_get)
HXDLIN(1955)		return this->_value;
            	}


 ::Dynamic ComponentValueBehaviour_obj::getDynamic(){
            	HX_STACKFRAME(&_hx_pos_40c9c9c12e49da64_1959_getDynamic)
HXDLIN(1959)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDynamic(this->_value);
            	}



::hx::ObjectPtr< ComponentValueBehaviour_obj > ComponentValueBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ComponentValueBehaviour_obj > __this = new ComponentValueBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ComponentValueBehaviour_obj > ComponentValueBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ComponentValueBehaviour_obj *__this = (ComponentValueBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentValueBehaviour_obj), true, "haxe.ui.backend.ComponentValueBehaviour"));
	*(void **)__this = ComponentValueBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ComponentValueBehaviour_obj::ComponentValueBehaviour_obj()
{
}

::hx::Val ComponentValueBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return ::hx::Val( getDynamic_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComponentValueBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ComponentValueBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentValueBehaviour_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("getDynamic",89,25,77,85),
	::String(null()) };

::hx::Class ComponentValueBehaviour_obj::__mClass;

void ComponentValueBehaviour_obj::__register()
{
	ComponentValueBehaviour_obj _hx_dummy;
	ComponentValueBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ComponentValueBehaviour",dd,24,5c,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentValueBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentValueBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentValueBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentValueBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
