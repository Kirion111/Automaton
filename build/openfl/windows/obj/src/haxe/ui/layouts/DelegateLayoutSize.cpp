#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
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
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_14aba5b6e82353d0_38_new,"haxe.ui.layouts.DelegateLayoutSize","new",0xa230f919,"haxe.ui.layouts.DelegateLayoutSize.new","haxe/ui/layouts/DelegateLayout.hx",38,0x87ba55f7)
HX_LOCAL_STACK_FRAME(_hx_pos_14aba5b6e82353d0_46_get_width,"haxe.ui.layouts.DelegateLayoutSize","get_width",0x5b3a0bd6,"haxe.ui.layouts.DelegateLayoutSize.get_width","haxe/ui/layouts/DelegateLayout.hx",46,0x87ba55f7)
HX_LOCAL_STACK_FRAME(_hx_pos_14aba5b6e82353d0_51_get_height,"haxe.ui.layouts.DelegateLayoutSize","get_height",0x2ddfc817,"haxe.ui.layouts.DelegateLayoutSize.get_height","haxe/ui/layouts/DelegateLayout.hx",51,0x87ba55f7)
HX_LOCAL_STACK_FRAME(_hx_pos_14aba5b6e82353d0_56_get_usableWidthModifier,"haxe.ui.layouts.DelegateLayoutSize","get_usableWidthModifier",0x33e91f35,"haxe.ui.layouts.DelegateLayoutSize.get_usableWidthModifier","haxe/ui/layouts/DelegateLayout.hx",56,0x87ba55f7)
HX_LOCAL_STACK_FRAME(_hx_pos_14aba5b6e82353d0_61_get_usableHeightModifier,"haxe.ui.layouts.DelegateLayoutSize","get_usableHeightModifier",0x824c43a6,"haxe.ui.layouts.DelegateLayoutSize.get_usableHeightModifier","haxe/ui/layouts/DelegateLayout.hx",61,0x87ba55f7)
HX_LOCAL_STACK_FRAME(_hx_pos_14aba5b6e82353d0_64_getString,"haxe.ui.layouts.DelegateLayoutSize","getString",0xdab4ab80,"haxe.ui.layouts.DelegateLayoutSize.getString","haxe/ui/layouts/DelegateLayout.hx",64,0x87ba55f7)
HX_LOCAL_STACK_FRAME(_hx_pos_14aba5b6e82353d0_74_getInt,"haxe.ui.layouts.DelegateLayoutSize","getInt",0xb43396e0,"haxe.ui.layouts.DelegateLayoutSize.getInt","haxe/ui/layouts/DelegateLayout.hx",74,0x87ba55f7)
HX_LOCAL_STACK_FRAME(_hx_pos_14aba5b6e82353d0_82_getBool,"haxe.ui.layouts.DelegateLayoutSize","getBool",0xf450ad19,"haxe.ui.layouts.DelegateLayoutSize.getBool","haxe/ui/layouts/DelegateLayout.hx",82,0x87ba55f7)
namespace haxe{
namespace ui{
namespace layouts{

void DelegateLayoutSize_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_14aba5b6e82353d0_38_new)
            	}

Dynamic DelegateLayoutSize_obj::__CreateEmpty() { return new DelegateLayoutSize_obj; }

void *DelegateLayoutSize_obj::_hx_vtable = 0;

Dynamic DelegateLayoutSize_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DelegateLayoutSize_obj > _hx_result = new DelegateLayoutSize_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DelegateLayoutSize_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x099a2e57;
}

Float DelegateLayoutSize_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_14aba5b6e82353d0_46_get_width)
HXDLIN(  46)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(DelegateLayoutSize_obj,get_width,return )

Float DelegateLayoutSize_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_14aba5b6e82353d0_51_get_height)
HXDLIN(  51)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(DelegateLayoutSize_obj,get_height,return )

Float DelegateLayoutSize_obj::get_usableWidthModifier(){
            	HX_STACKFRAME(&_hx_pos_14aba5b6e82353d0_56_get_usableWidthModifier)
HXDLIN(  56)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(DelegateLayoutSize_obj,get_usableWidthModifier,return )

Float DelegateLayoutSize_obj::get_usableHeightModifier(){
            	HX_STACKFRAME(&_hx_pos_14aba5b6e82353d0_61_get_usableHeightModifier)
HXDLIN(  61)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(DelegateLayoutSize_obj,get_usableHeightModifier,return )

::String DelegateLayoutSize_obj::getString(::String name,::String defaultValue){
            	HX_STACKFRAME(&_hx_pos_14aba5b6e82353d0_64_getString)
HXLINE(  65)		if (::hx::IsNull( this->config )) {
HXLINE(  66)			return defaultValue;
            		}
HXLINE(  68)		if ((this->config->exists(name) == false)) {
HXLINE(  69)			return defaultValue;
            		}
HXLINE(  71)		return this->config->get_string(name);
            	}


HX_DEFINE_DYNAMIC_FUNC2(DelegateLayoutSize_obj,getString,return )

int DelegateLayoutSize_obj::getInt(::String name,::hx::Null< int >  __o_defaultValue){
            		int defaultValue = __o_defaultValue.Default(0);
            	HX_STACKFRAME(&_hx_pos_14aba5b6e82353d0_74_getInt)
HXLINE(  75)		::String v = this->getString(name,null());
HXLINE(  76)		if (::hx::IsNull( v )) {
HXLINE(  77)			return defaultValue;
            		}
HXLINE(  79)		return ( (int)(::Std_obj::parseInt(v)) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(DelegateLayoutSize_obj,getInt,return )

bool DelegateLayoutSize_obj::getBool(::String name,::hx::Null< bool >  __o_defaultValue){
            		bool defaultValue = __o_defaultValue.Default(false);
            	HX_STACKFRAME(&_hx_pos_14aba5b6e82353d0_82_getBool)
HXLINE(  83)		::String v = this->getString(name,null());
HXLINE(  84)		if (::hx::IsNull( v )) {
HXLINE(  85)			return defaultValue;
            		}
HXLINE(  87)		return (v == HX_("true",4e,a7,03,4d));
            	}


HX_DEFINE_DYNAMIC_FUNC2(DelegateLayoutSize_obj,getBool,return )


::hx::ObjectPtr< DelegateLayoutSize_obj > DelegateLayoutSize_obj::__new() {
	::hx::ObjectPtr< DelegateLayoutSize_obj > __this = new DelegateLayoutSize_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DelegateLayoutSize_obj > DelegateLayoutSize_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DelegateLayoutSize_obj *__this = (DelegateLayoutSize_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DelegateLayoutSize_obj), true, "haxe.ui.layouts.DelegateLayoutSize"));
	*(void **)__this = DelegateLayoutSize_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DelegateLayoutSize_obj::DelegateLayoutSize_obj()
{
}

void DelegateLayoutSize_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DelegateLayoutSize);
	HX_MARK_MEMBER_NAME(component,"component");
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(usableWidthModifier,"usableWidthModifier");
	HX_MARK_MEMBER_NAME(usableHeightModifier,"usableHeightModifier");
	HX_MARK_END_CLASS();
}

void DelegateLayoutSize_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(component,"component");
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(usableWidthModifier,"usableWidthModifier");
	HX_VISIT_MEMBER_NAME(usableHeightModifier,"usableHeightModifier");
}

::hx::Val DelegateLayoutSize_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_width() : width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return ::hx::Val( config ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_height() : height ); }
		if (HX_FIELD_EQ(inName,"getInt") ) { return ::hx::Val( getInt_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getBool") ) { return ::hx::Val( getBool_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { return ::hx::Val( component ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"getString") ) { return ::hx::Val( getString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"usableWidthModifier") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_usableWidthModifier() : usableWidthModifier ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"usableHeightModifier") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_usableHeightModifier() : usableHeightModifier ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_usableWidthModifier") ) { return ::hx::Val( get_usableWidthModifier_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_usableHeightModifier") ) { return ::hx::Val( get_usableHeightModifier_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DelegateLayoutSize_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"usableWidthModifier") ) { usableWidthModifier=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"usableHeightModifier") ) { usableHeightModifier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DelegateLayoutSize_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("component",bd,f0,53,0f));
	outFields->push(HX_("config",c2,56,d2,c7));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("usableWidthModifier",65,3d,55,e0));
	outFields->push(HX_("usableHeightModifier",76,8f,7a,b4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DelegateLayoutSize_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(DelegateLayoutSize_obj,component),HX_("component",bd,f0,53,0f)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(DelegateLayoutSize_obj,config),HX_("config",c2,56,d2,c7)},
	{::hx::fsFloat,(int)offsetof(DelegateLayoutSize_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(DelegateLayoutSize_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsFloat,(int)offsetof(DelegateLayoutSize_obj,usableWidthModifier),HX_("usableWidthModifier",65,3d,55,e0)},
	{::hx::fsFloat,(int)offsetof(DelegateLayoutSize_obj,usableHeightModifier),HX_("usableHeightModifier",76,8f,7a,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DelegateLayoutSize_obj_sStaticStorageInfo = 0;
#endif

static ::String DelegateLayoutSize_obj_sMemberFields[] = {
	HX_("component",bd,f0,53,0f),
	HX_("config",c2,56,d2,c7),
	HX_("width",06,b6,62,ca),
	HX_("get_width",5d,12,0c,0e),
	HX_("height",e7,07,4c,02),
	HX_("get_height",b0,77,d3,f2),
	HX_("usableWidthModifier",65,3d,55,e0),
	HX_("get_usableWidthModifier",fc,e3,aa,e8),
	HX_("usableHeightModifier",76,8f,7a,b4),
	HX_("get_usableHeightModifier",ff,ac,16,f7),
	HX_("getString",07,b2,86,8d),
	HX_("getInt",f9,45,1f,a3),
	HX_("getBool",e0,33,9e,13),
	::String(null()) };

::hx::Class DelegateLayoutSize_obj::__mClass;

void DelegateLayoutSize_obj::__register()
{
	DelegateLayoutSize_obj _hx_dummy;
	DelegateLayoutSize_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.DelegateLayoutSize",a7,78,ee,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DelegateLayoutSize_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DelegateLayoutSize_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DelegateLayoutSize_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DelegateLayoutSize_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
