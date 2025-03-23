#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
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
#ifndef INCLUDED_haxe_ui_focus_FocusApplicator
#include <haxe/ui/focus/FocusApplicator.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusApplicator
#include <haxe/ui/focus/IFocusApplicator.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_StyleFocusApplicator
#include <haxe/ui/focus/StyleFocusApplicator.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d1cd7535493f438d_5_new,"haxe.ui.focus.StyleFocusApplicator","new",0xaeb8885c,"haxe.ui.focus.StyleFocusApplicator.new","haxe/ui/focus/StyleFocusApplicator.hx",5,0xc8327c13)
HX_LOCAL_STACK_FRAME(_hx_pos_d1cd7535493f438d_7_apply,"haxe.ui.focus.StyleFocusApplicator","apply",0xbf3b346a,"haxe.ui.focus.StyleFocusApplicator.apply","haxe/ui/focus/StyleFocusApplicator.hx",7,0xc8327c13)
HX_LOCAL_STACK_FRAME(_hx_pos_d1cd7535493f438d_11_unapply,"haxe.ui.focus.StyleFocusApplicator","unapply",0x3e52e271,"haxe.ui.focus.StyleFocusApplicator.unapply","haxe/ui/focus/StyleFocusApplicator.hx",11,0xc8327c13)
namespace haxe{
namespace ui{
namespace focus{

void StyleFocusApplicator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d1cd7535493f438d_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic StyleFocusApplicator_obj::__CreateEmpty() { return new StyleFocusApplicator_obj; }

void *StyleFocusApplicator_obj::_hx_vtable = 0;

Dynamic StyleFocusApplicator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StyleFocusApplicator_obj > _hx_result = new StyleFocusApplicator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StyleFocusApplicator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1380b73c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1380b73c;
	} else {
		return inClassId==(int)0x1c6f58c1;
	}
}

void StyleFocusApplicator_obj::apply( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_d1cd7535493f438d_7_apply)
HXDLIN(   7)		target->addClass(HX_(":active",80,29,23,82),null(),null());
            	}


void StyleFocusApplicator_obj::unapply( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_d1cd7535493f438d_11_unapply)
HXDLIN(  11)		target->removeClass(HX_(":active",80,29,23,82),null(),null());
            	}



::hx::ObjectPtr< StyleFocusApplicator_obj > StyleFocusApplicator_obj::__new() {
	::hx::ObjectPtr< StyleFocusApplicator_obj > __this = new StyleFocusApplicator_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StyleFocusApplicator_obj > StyleFocusApplicator_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StyleFocusApplicator_obj *__this = (StyleFocusApplicator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StyleFocusApplicator_obj), false, "haxe.ui.focus.StyleFocusApplicator"));
	*(void **)__this = StyleFocusApplicator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StyleFocusApplicator_obj::StyleFocusApplicator_obj()
{
}

::hx::Val StyleFocusApplicator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unapply") ) { return ::hx::Val( unapply_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StyleFocusApplicator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StyleFocusApplicator_obj_sStaticStorageInfo = 0;
#endif

static ::String StyleFocusApplicator_obj_sMemberFields[] = {
	HX_("apply",6e,85,3b,24),
	HX_("unapply",75,7c,cc,20),
	::String(null()) };

::hx::Class StyleFocusApplicator_obj::__mClass;

void StyleFocusApplicator_obj::__register()
{
	StyleFocusApplicator_obj _hx_dummy;
	StyleFocusApplicator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.focus.StyleFocusApplicator",6a,6a,06,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StyleFocusApplicator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StyleFocusApplicator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StyleFocusApplicator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StyleFocusApplicator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace focus
