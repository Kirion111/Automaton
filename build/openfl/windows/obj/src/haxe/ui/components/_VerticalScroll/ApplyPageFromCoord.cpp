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
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components__VerticalScroll_ApplyPageFromCoord
#include <haxe/ui/components/_VerticalScroll/ApplyPageFromCoord.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ff0d7d4e21ee8d3b_74_new,"haxe.ui.components._VerticalScroll.ApplyPageFromCoord","new",0xc8270872,"haxe.ui.components._VerticalScroll.ApplyPageFromCoord.new","haxe/ui/components/VerticalScroll.hx",74,0x571b9394)
HX_LOCAL_STACK_FRAME(_hx_pos_ff0d7d4e21ee8d3b_75_call,"haxe.ui.components._VerticalScroll.ApplyPageFromCoord","call",0x52b7f04c,"haxe.ui.components._VerticalScroll.ApplyPageFromCoord.call","haxe/ui/components/VerticalScroll.hx",75,0x571b9394)
namespace haxe{
namespace ui{
namespace components{
namespace _VerticalScroll{

void ApplyPageFromCoord_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_ff0d7d4e21ee8d3b_74_new)
HXDLIN(  74)		super::__construct(component);
            	}

Dynamic ApplyPageFromCoord_obj::__CreateEmpty() { return new ApplyPageFromCoord_obj; }

void *ApplyPageFromCoord_obj::_hx_vtable = 0;

Dynamic ApplyPageFromCoord_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ApplyPageFromCoord_obj > _hx_result = new ApplyPageFromCoord_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ApplyPageFromCoord_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x14b245f0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x14b245f0;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType ApplyPageFromCoord_obj::call( ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_ff0d7d4e21ee8d3b_75_call)
HXLINE(  76)		 ::haxe::ui::geom::Point p = ::hx::TCast<  ::haxe::ui::geom::Point >::cast(pos);
HXLINE(  77)		 ::haxe::ui::components::Scroll scroll = ::hx::TCast<  ::haxe::ui::components::Scroll >::cast(this->_component);
HXLINE(  78)		 ::haxe::ui::components::Button thumb = this->_component->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE(  80)		Float p1 = p->y;
HXDLIN(  80)		if ((p1 < thumb->get_screenTop())) {
HXLINE(  81)			Float _hx_tmp = scroll->get_pos();
HXDLIN(  81)			scroll->set_pos((_hx_tmp - scroll->get_pageSize()));
            		}
            		else {
HXLINE(  82)			Float p1 = p->y;
HXDLIN(  82)			Float _hx_tmp = thumb->get_screenTop();
HXDLIN(  82)			if ((p1 > (_hx_tmp + thumb->get_height()))) {
HXLINE(  83)				Float _hx_tmp = scroll->get_pos();
HXDLIN(  83)				scroll->set_pos((_hx_tmp + scroll->get_pageSize()));
            			}
            		}
HXLINE(  86)		return null();
            	}



::hx::ObjectPtr< ApplyPageFromCoord_obj > ApplyPageFromCoord_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ApplyPageFromCoord_obj > __this = new ApplyPageFromCoord_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ApplyPageFromCoord_obj > ApplyPageFromCoord_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ApplyPageFromCoord_obj *__this = (ApplyPageFromCoord_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ApplyPageFromCoord_obj), true, "haxe.ui.components._VerticalScroll.ApplyPageFromCoord"));
	*(void **)__this = ApplyPageFromCoord_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ApplyPageFromCoord_obj::ApplyPageFromCoord_obj()
{
}

::hx::Val ApplyPageFromCoord_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ApplyPageFromCoord_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ApplyPageFromCoord_obj_sStaticStorageInfo = 0;
#endif

static ::String ApplyPageFromCoord_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class ApplyPageFromCoord_obj::__mClass;

void ApplyPageFromCoord_obj::__register()
{
	ApplyPageFromCoord_obj _hx_dummy;
	ApplyPageFromCoord_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._VerticalScroll.ApplyPageFromCoord",80,a7,c1,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ApplyPageFromCoord_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ApplyPageFromCoord_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ApplyPageFromCoord_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ApplyPageFromCoord_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _VerticalScroll
