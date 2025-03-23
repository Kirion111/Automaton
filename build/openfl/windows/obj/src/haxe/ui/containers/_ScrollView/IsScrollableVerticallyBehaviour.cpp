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
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_IsScrollableVerticallyBehaviour
#include <haxe/ui/containers/_ScrollView/IsScrollableVerticallyBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3874d43d47908125_581_new,"haxe.ui.containers._ScrollView.IsScrollableVerticallyBehaviour","new",0x469ad8f4,"haxe.ui.containers._ScrollView.IsScrollableVerticallyBehaviour.new","haxe/ui/containers/ScrollView.hx",581,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_3874d43d47908125_586_get,"haxe.ui.containers._ScrollView.IsScrollableVerticallyBehaviour","get",0x4695892a,"haxe.ui.containers._ScrollView.IsScrollableVerticallyBehaviour.get","haxe/ui/containers/ScrollView.hx",586,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void IsScrollableVerticallyBehaviour_obj::__construct( ::haxe::ui::containers::ScrollView scrollview){
            	HX_STACKFRAME(&_hx_pos_3874d43d47908125_581_new)
HXLINE( 582)		super::__construct(scrollview);
HXLINE( 583)		this->_scrollview = scrollview;
            	}

Dynamic IsScrollableVerticallyBehaviour_obj::__CreateEmpty() { return new IsScrollableVerticallyBehaviour_obj; }

void *IsScrollableVerticallyBehaviour_obj::_hx_vtable = 0;

Dynamic IsScrollableVerticallyBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IsScrollableVerticallyBehaviour_obj > _hx_result = new IsScrollableVerticallyBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool IsScrollableVerticallyBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x34b5d7a8) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x34b5d7a8;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType IsScrollableVerticallyBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_3874d43d47908125_586_get)
HXLINE( 587)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(HX_("scrollview-vscroll",68,7b,46,57),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),null(),null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 588)		if (::hx::IsNull( vscroll )) {
HXLINE( 589)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false);
            		}
HXLINE( 591)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true);
            	}



::hx::ObjectPtr< IsScrollableVerticallyBehaviour_obj > IsScrollableVerticallyBehaviour_obj::__new( ::haxe::ui::containers::ScrollView scrollview) {
	::hx::ObjectPtr< IsScrollableVerticallyBehaviour_obj > __this = new IsScrollableVerticallyBehaviour_obj();
	__this->__construct(scrollview);
	return __this;
}

::hx::ObjectPtr< IsScrollableVerticallyBehaviour_obj > IsScrollableVerticallyBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview) {
	IsScrollableVerticallyBehaviour_obj *__this = (IsScrollableVerticallyBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IsScrollableVerticallyBehaviour_obj), true, "haxe.ui.containers._ScrollView.IsScrollableVerticallyBehaviour"));
	*(void **)__this = IsScrollableVerticallyBehaviour_obj::_hx_vtable;
	__this->__construct(scrollview);
	return __this;
}

IsScrollableVerticallyBehaviour_obj::IsScrollableVerticallyBehaviour_obj()
{
}

void IsScrollableVerticallyBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IsScrollableVerticallyBehaviour);
	HX_MARK_MEMBER_NAME(_scrollview,"_scrollview");
	 ::haxe::ui::behaviours::DefaultBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IsScrollableVerticallyBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollview,"_scrollview");
	 ::haxe::ui::behaviours::DefaultBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val IsScrollableVerticallyBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val IsScrollableVerticallyBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { _scrollview=inValue.Cast<  ::haxe::ui::containers::ScrollView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IsScrollableVerticallyBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_scrollview",11,62,bf,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IsScrollableVerticallyBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::ScrollView */ ,(int)offsetof(IsScrollableVerticallyBehaviour_obj,_scrollview),HX_("_scrollview",11,62,bf,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IsScrollableVerticallyBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String IsScrollableVerticallyBehaviour_obj_sMemberFields[] = {
	HX_("_scrollview",11,62,bf,f3),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class IsScrollableVerticallyBehaviour_obj::__mClass;

void IsScrollableVerticallyBehaviour_obj::__register()
{
	IsScrollableVerticallyBehaviour_obj _hx_dummy;
	IsScrollableVerticallyBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.IsScrollableVerticallyBehaviour",02,8f,1e,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IsScrollableVerticallyBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IsScrollableVerticallyBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IsScrollableVerticallyBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IsScrollableVerticallyBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
