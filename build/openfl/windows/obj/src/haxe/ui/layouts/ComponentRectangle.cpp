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
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ComponentRectangle
#include <haxe/ui/layouts/ComponentRectangle.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2e44871b12cb69b0_197_new,"haxe.ui.layouts.ComponentRectangle","new",0x926f699b,"haxe.ui.layouts.ComponentRectangle.new","haxe/ui/layouts/HorizontalContinuousLayout.hx",197,0x640fb469)
HX_LOCAL_STACK_FRAME(_hx_pos_2e44871b12cb69b0_200_apply,"haxe.ui.layouts.ComponentRectangle","apply",0x275c2369,"haxe.ui.layouts.ComponentRectangle.apply","haxe/ui/layouts/HorizontalContinuousLayout.hx",200,0x640fb469)
namespace haxe{
namespace ui{
namespace layouts{

void ComponentRectangle_obj::__construct( ::Dynamic left, ::Dynamic top, ::Dynamic width, ::Dynamic height){
            	HX_STACKFRAME(&_hx_pos_2e44871b12cb69b0_197_new)
HXDLIN( 197)		super::__construct(left,top,width,height);
            	}

Dynamic ComponentRectangle_obj::__CreateEmpty() { return new ComponentRectangle_obj; }

void *ComponentRectangle_obj::_hx_vtable = 0;

Dynamic ComponentRectangle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentRectangle_obj > _hx_result = new ComponentRectangle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ComponentRectangle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x315cada1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x315cada1;
	} else {
		return inClassId==(int)0x72cf5d19;
	}
}

void ComponentRectangle_obj::apply(){
            	HX_STACKFRAME(&_hx_pos_2e44871b12cb69b0_200_apply)
HXLINE( 201)		this->component->moveComponent(this->left,this->top);
HXLINE( 202)		this->component->resizeComponent(this->width,this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentRectangle_obj,apply,(void))


::hx::ObjectPtr< ComponentRectangle_obj > ComponentRectangle_obj::__new( ::Dynamic left, ::Dynamic top, ::Dynamic width, ::Dynamic height) {
	::hx::ObjectPtr< ComponentRectangle_obj > __this = new ComponentRectangle_obj();
	__this->__construct(left,top,width,height);
	return __this;
}

::hx::ObjectPtr< ComponentRectangle_obj > ComponentRectangle_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic left, ::Dynamic top, ::Dynamic width, ::Dynamic height) {
	ComponentRectangle_obj *__this = (ComponentRectangle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentRectangle_obj), true, "haxe.ui.layouts.ComponentRectangle"));
	*(void **)__this = ComponentRectangle_obj::_hx_vtable;
	__this->__construct(left,top,width,height);
	return __this;
}

ComponentRectangle_obj::ComponentRectangle_obj()
{
}

void ComponentRectangle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentRectangle);
	HX_MARK_MEMBER_NAME(component,"component");
	 ::haxe::ui::geom::Rectangle_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComponentRectangle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(component,"component");
	 ::haxe::ui::geom::Rectangle_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ComponentRectangle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { return ::hx::Val( component ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ComponentRectangle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentRectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("component",bd,f0,53,0f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComponentRectangle_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ComponentRectangle_obj,component),HX_("component",bd,f0,53,0f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ComponentRectangle_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentRectangle_obj_sMemberFields[] = {
	HX_("component",bd,f0,53,0f),
	HX_("apply",6e,85,3b,24),
	::String(null()) };

::hx::Class ComponentRectangle_obj::__mClass;

void ComponentRectangle_obj::__register()
{
	ComponentRectangle_obj _hx_dummy;
	ComponentRectangle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.ComponentRectangle",29,00,46,bd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentRectangle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentRectangle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentRectangle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentRectangle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
