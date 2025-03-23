#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ItemRendererEvent
#include <haxe/ui/events/ItemRendererEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events__EventType_EventType_Impl_
#include <haxe/ui/events/_EventType/EventType_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8d35f28d666b52b3_11_new,"haxe.ui.events.ItemRendererEvent","new",0xa1256e93,"haxe.ui.events.ItemRendererEvent.new","haxe/ui/events/ItemRendererEvent.hx",11,0x8bc9f81e)
HX_LOCAL_STACK_FRAME(_hx_pos_8d35f28d666b52b3_19_clone,"haxe.ui.events.ItemRendererEvent","clone",0xf77ee450,"haxe.ui.events.ItemRendererEvent.clone","haxe/ui/events/ItemRendererEvent.hx",19,0x8bc9f81e)
HX_LOCAL_STACK_FRAME(_hx_pos_8d35f28d666b52b3_25_copyFrom,"haxe.ui.events.ItemRendererEvent","copyFrom",0x592614ac,"haxe.ui.events.ItemRendererEvent.copyFrom","haxe/ui/events/ItemRendererEvent.hx",25,0x8bc9f81e)
HX_LOCAL_STACK_FRAME(_hx_pos_8d35f28d666b52b3_7_boot,"haxe.ui.events.ItemRendererEvent","boot",0x57b4529f,"haxe.ui.events.ItemRendererEvent.boot","haxe/ui/events/ItemRendererEvent.hx",7,0x8bc9f81e)
namespace haxe{
namespace ui{
namespace events{

void ItemRendererEvent_obj::__construct(::String type, ::haxe::ui::core::ItemRenderer itemRenderer){
            	HX_STACKFRAME(&_hx_pos_8d35f28d666b52b3_11_new)
HXLINE(  12)		super::__construct(type,true,null());
HXLINE(  13)		this->itemRenderer = itemRenderer;
HXLINE(  14)		if (::hx::IsNotNull( this->itemRenderer )) {
HXLINE(  15)			this->data = this->itemRenderer->get_data();
            		}
            	}

Dynamic ItemRendererEvent_obj::__CreateEmpty() { return new ItemRendererEvent_obj; }

void *ItemRendererEvent_obj::_hx_vtable = 0;

Dynamic ItemRendererEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ItemRendererEvent_obj > _hx_result = new ItemRendererEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ItemRendererEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x477668f1) {
		if (inClassId<=(int)0x3db3e34f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3db3e34f;
		} else {
			return inClassId==(int)0x477668f1;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

 ::haxe::ui::events::UIEvent ItemRendererEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_8d35f28d666b52b3_19_clone)
HXLINE(  20)		 ::haxe::ui::events::ItemRendererEvent c =  ::haxe::ui::events::ItemRendererEvent_obj::__alloc( HX_CTX ,this->type,this->itemRenderer);
HXLINE(  21)		this->postClone(c);
HXLINE(  22)		return c;
            	}


void ItemRendererEvent_obj::copyFrom( ::haxe::ui::events::UIEvent e){
            	HX_STACKFRAME(&_hx_pos_8d35f28d666b52b3_25_copyFrom)
HXLINE(  26)		 ::haxe::ui::events::ItemRendererEvent ire = ::hx::TCast<  ::haxe::ui::events::ItemRendererEvent >::cast(e);
HXLINE(  27)		this->itemRenderer = ire->itemRenderer;
HXLINE(  28)		if (::hx::IsNotNull( this->itemRenderer )) {
HXLINE(  29)			this->data = this->itemRenderer->get_data();
            		}
            	}


::String ItemRendererEvent_obj::DATA_CHANGED;


::hx::ObjectPtr< ItemRendererEvent_obj > ItemRendererEvent_obj::__new(::String type, ::haxe::ui::core::ItemRenderer itemRenderer) {
	::hx::ObjectPtr< ItemRendererEvent_obj > __this = new ItemRendererEvent_obj();
	__this->__construct(type,itemRenderer);
	return __this;
}

::hx::ObjectPtr< ItemRendererEvent_obj > ItemRendererEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::haxe::ui::core::ItemRenderer itemRenderer) {
	ItemRendererEvent_obj *__this = (ItemRendererEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ItemRendererEvent_obj), true, "haxe.ui.events.ItemRendererEvent"));
	*(void **)__this = ItemRendererEvent_obj::_hx_vtable;
	__this->__construct(type,itemRenderer);
	return __this;
}

ItemRendererEvent_obj::ItemRendererEvent_obj()
{
}

void ItemRendererEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ItemRendererEvent);
	HX_MARK_MEMBER_NAME(itemRenderer,"itemRenderer");
	 ::haxe::ui::events::UIEvent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ItemRendererEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(itemRenderer,"itemRenderer");
	 ::haxe::ui::events::UIEvent_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ItemRendererEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { return ::hx::Val( itemRenderer ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ItemRendererEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"DATA_CHANGED") ) { outValue = ( DATA_CHANGED ); return true; }
	}
	return false;
}

::hx::Val ItemRendererEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { itemRenderer=inValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ItemRendererEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"DATA_CHANGED") ) { DATA_CHANGED=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void ItemRendererEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("itemRenderer",76,11,05,97));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ItemRendererEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::ItemRenderer */ ,(int)offsetof(ItemRendererEvent_obj,itemRenderer),HX_("itemRenderer",76,11,05,97)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ItemRendererEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ItemRendererEvent_obj::DATA_CHANGED,HX_("DATA_CHANGED",7f,36,66,5d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ItemRendererEvent_obj_sMemberFields[] = {
	HX_("itemRenderer",76,11,05,97),
	HX_("clone",5d,13,63,48),
	HX_("copyFrom",bf,0b,61,c8),
	::String(null()) };

static void ItemRendererEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ItemRendererEvent_obj::DATA_CHANGED,"DATA_CHANGED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ItemRendererEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ItemRendererEvent_obj::DATA_CHANGED,"DATA_CHANGED");
};

#endif

::hx::Class ItemRendererEvent_obj::__mClass;

static ::String ItemRendererEvent_obj_sStaticFields[] = {
	HX_("DATA_CHANGED",7f,36,66,5d),
	::String(null())
};

void ItemRendererEvent_obj::__register()
{
	ItemRendererEvent_obj _hx_dummy;
	ItemRendererEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.ItemRendererEvent",21,29,68,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ItemRendererEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &ItemRendererEvent_obj::__SetStatic;
	__mClass->mMarkFunc = ItemRendererEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ItemRendererEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ItemRendererEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ItemRendererEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ItemRendererEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ItemRendererEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ItemRendererEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ItemRendererEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8d35f28d666b52b3_7_boot)
HXDLIN(   7)		DATA_CHANGED = ::haxe::ui::events::_EventType::EventType_Impl__obj::name(HX_("datachanged",0a,d4,66,41));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
