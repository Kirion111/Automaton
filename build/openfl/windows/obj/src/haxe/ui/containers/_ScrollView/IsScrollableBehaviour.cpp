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
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_IsScrollableBehaviour
#include <haxe/ui/containers/_ScrollView/IsScrollableBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IScroller
#include <haxe/ui/core/IScroller.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a751fb251fc15ce5_600_new,"haxe.ui.containers._ScrollView.IsScrollableBehaviour","new",0x4a807977,"haxe.ui.containers._ScrollView.IsScrollableBehaviour.new","haxe/ui/containers/ScrollView.hx",600,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_a751fb251fc15ce5_605_get,"haxe.ui.containers._ScrollView.IsScrollableBehaviour","get",0x4a7b29ad,"haxe.ui.containers._ScrollView.IsScrollableBehaviour.get","haxe/ui/containers/ScrollView.hx",605,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void IsScrollableBehaviour_obj::__construct( ::haxe::ui::containers::ScrollView scrollview){
            	HX_STACKFRAME(&_hx_pos_a751fb251fc15ce5_600_new)
HXLINE( 601)		super::__construct(scrollview);
HXLINE( 602)		this->_scrollview = scrollview;
            	}

Dynamic IsScrollableBehaviour_obj::__CreateEmpty() { return new IsScrollableBehaviour_obj; }

void *IsScrollableBehaviour_obj::_hx_vtable = 0;

Dynamic IsScrollableBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IsScrollableBehaviour_obj > _hx_result = new IsScrollableBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool IsScrollableBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6597ec6c) {
		if (inClassId<=(int)0x3c5dd90d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
		} else {
			return inClassId==(int)0x6597ec6c;
		}
	} else {
		return inClassId==(int)0x714409f3;
	}
}

 ::haxe::ui::util::VariantType IsScrollableBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_a751fb251fc15ce5_605_get)
HXLINE( 606)		if (this->_scrollview->get_isScrollableVertically()) {
HXLINE( 607)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true);
            		}
HXLINE( 609)		if (this->_scrollview->get_isScrollableHorizontally()) {
HXLINE( 610)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true);
            		}
HXLINE( 612)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false);
            	}



::hx::ObjectPtr< IsScrollableBehaviour_obj > IsScrollableBehaviour_obj::__new( ::haxe::ui::containers::ScrollView scrollview) {
	::hx::ObjectPtr< IsScrollableBehaviour_obj > __this = new IsScrollableBehaviour_obj();
	__this->__construct(scrollview);
	return __this;
}

::hx::ObjectPtr< IsScrollableBehaviour_obj > IsScrollableBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview) {
	IsScrollableBehaviour_obj *__this = (IsScrollableBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IsScrollableBehaviour_obj), true, "haxe.ui.containers._ScrollView.IsScrollableBehaviour"));
	*(void **)__this = IsScrollableBehaviour_obj::_hx_vtable;
	__this->__construct(scrollview);
	return __this;
}

IsScrollableBehaviour_obj::IsScrollableBehaviour_obj()
{
}

void IsScrollableBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IsScrollableBehaviour);
	HX_MARK_MEMBER_NAME(_scrollview,"_scrollview");
	 ::haxe::ui::behaviours::DefaultBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IsScrollableBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollview,"_scrollview");
	 ::haxe::ui::behaviours::DefaultBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val IsScrollableBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { return ::hx::Val( _scrollview ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IsScrollableBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { _scrollview=inValue.Cast<  ::haxe::ui::containers::ScrollView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IsScrollableBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_scrollview",11,62,bf,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IsScrollableBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::ScrollView */ ,(int)offsetof(IsScrollableBehaviour_obj,_scrollview),HX_("_scrollview",11,62,bf,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IsScrollableBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String IsScrollableBehaviour_obj_sMemberFields[] = {
	HX_("_scrollview",11,62,bf,f3),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class IsScrollableBehaviour_obj::__mClass;

void IsScrollableBehaviour_obj::__register()
{
	IsScrollableBehaviour_obj _hx_dummy;
	IsScrollableBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.IsScrollableBehaviour",05,f2,62,f9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IsScrollableBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IsScrollableBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IsScrollableBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IsScrollableBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
