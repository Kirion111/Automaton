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
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_IsScrollableHorizontallyBehaviour
#include <haxe/ui/containers/_ScrollView/IsScrollableHorizontallyBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_219cd6e2c99d0497_562_new,"haxe.ui.containers._ScrollView.IsScrollableHorizontallyBehaviour","new",0x2d1b4646,"haxe.ui.containers._ScrollView.IsScrollableHorizontallyBehaviour.new","haxe/ui/containers/ScrollView.hx",562,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_219cd6e2c99d0497_567_get,"haxe.ui.containers._ScrollView.IsScrollableHorizontallyBehaviour","get",0x2d15f67c,"haxe.ui.containers._ScrollView.IsScrollableHorizontallyBehaviour.get","haxe/ui/containers/ScrollView.hx",567,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void IsScrollableHorizontallyBehaviour_obj::__construct( ::haxe::ui::containers::ScrollView scrollview){
            	HX_STACKFRAME(&_hx_pos_219cd6e2c99d0497_562_new)
HXLINE( 563)		super::__construct(scrollview);
HXLINE( 564)		this->_scrollview = scrollview;
            	}

Dynamic IsScrollableHorizontallyBehaviour_obj::__CreateEmpty() { return new IsScrollableHorizontallyBehaviour_obj; }

void *IsScrollableHorizontallyBehaviour_obj::_hx_vtable = 0;

Dynamic IsScrollableHorizontallyBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IsScrollableHorizontallyBehaviour_obj > _hx_result = new IsScrollableHorizontallyBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool IsScrollableHorizontallyBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4c9ca97a) {
		if (inClassId<=(int)0x3c5dd90d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
		} else {
			return inClassId==(int)0x4c9ca97a;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType IsScrollableHorizontallyBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_219cd6e2c99d0497_567_get)
HXLINE( 568)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(HX_("scrollview-hscroll",da,fc,19,11),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),null(),null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 569)		if (::hx::IsNull( hscroll )) {
HXLINE( 570)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false);
            		}
HXLINE( 572)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true);
            	}



::hx::ObjectPtr< IsScrollableHorizontallyBehaviour_obj > IsScrollableHorizontallyBehaviour_obj::__new( ::haxe::ui::containers::ScrollView scrollview) {
	::hx::ObjectPtr< IsScrollableHorizontallyBehaviour_obj > __this = new IsScrollableHorizontallyBehaviour_obj();
	__this->__construct(scrollview);
	return __this;
}

::hx::ObjectPtr< IsScrollableHorizontallyBehaviour_obj > IsScrollableHorizontallyBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview) {
	IsScrollableHorizontallyBehaviour_obj *__this = (IsScrollableHorizontallyBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IsScrollableHorizontallyBehaviour_obj), true, "haxe.ui.containers._ScrollView.IsScrollableHorizontallyBehaviour"));
	*(void **)__this = IsScrollableHorizontallyBehaviour_obj::_hx_vtable;
	__this->__construct(scrollview);
	return __this;
}

IsScrollableHorizontallyBehaviour_obj::IsScrollableHorizontallyBehaviour_obj()
{
}

void IsScrollableHorizontallyBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IsScrollableHorizontallyBehaviour);
	HX_MARK_MEMBER_NAME(_scrollview,"_scrollview");
	 ::haxe::ui::behaviours::DefaultBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IsScrollableHorizontallyBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollview,"_scrollview");
	 ::haxe::ui::behaviours::DefaultBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val IsScrollableHorizontallyBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val IsScrollableHorizontallyBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { _scrollview=inValue.Cast<  ::haxe::ui::containers::ScrollView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IsScrollableHorizontallyBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_scrollview",11,62,bf,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IsScrollableHorizontallyBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::ScrollView */ ,(int)offsetof(IsScrollableHorizontallyBehaviour_obj,_scrollview),HX_("_scrollview",11,62,bf,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IsScrollableHorizontallyBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String IsScrollableHorizontallyBehaviour_obj_sMemberFields[] = {
	HX_("_scrollview",11,62,bf,f3),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class IsScrollableHorizontallyBehaviour_obj::__mClass;

void IsScrollableHorizontallyBehaviour_obj::__register()
{
	IsScrollableHorizontallyBehaviour_obj _hx_dummy;
	IsScrollableHorizontallyBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.IsScrollableHorizontallyBehaviour",54,6b,25,5a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IsScrollableHorizontallyBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IsScrollableHorizontallyBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IsScrollableHorizontallyBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IsScrollableHorizontallyBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
