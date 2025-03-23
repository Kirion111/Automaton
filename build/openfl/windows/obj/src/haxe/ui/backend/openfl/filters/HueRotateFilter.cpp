#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_ui_backend_openfl_filters_HueRotateFilter
#include <haxe/ui/backend/openfl/filters/HueRotateFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#include <openfl/filters/ColorMatrixFilter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d717d431f06f6be8_12_new,"haxe.ui.backend.openfl.filters.HueRotateFilter","new",0xa1b5c138,"haxe.ui.backend.openfl.filters.HueRotateFilter.new","haxe/ui/backend/openfl/filters/HueRotateFilter.hx",12,0x3b4c70f9)
HX_LOCAL_STACK_FRAME(_hx_pos_d717d431f06f6be8_6_boot,"haxe.ui.backend.openfl.filters.HueRotateFilter","boot",0xd56c505a,"haxe.ui.backend.openfl.filters.HueRotateFilter.boot","haxe/ui/backend/openfl/filters/HueRotateFilter.hx",6,0x3b4c70f9)
HX_LOCAL_STACK_FRAME(_hx_pos_d717d431f06f6be8_7_boot,"haxe.ui.backend.openfl.filters.HueRotateFilter","boot",0xd56c505a,"haxe.ui.backend.openfl.filters.HueRotateFilter.boot","haxe/ui/backend/openfl/filters/HueRotateFilter.hx",7,0x3b4c70f9)
HX_LOCAL_STACK_FRAME(_hx_pos_d717d431f06f6be8_8_boot,"haxe.ui.backend.openfl.filters.HueRotateFilter","boot",0xd56c505a,"haxe.ui.backend.openfl.filters.HueRotateFilter.boot","haxe/ui/backend/openfl/filters/HueRotateFilter.hx",8,0x3b4c70f9)
namespace haxe{
namespace ui{
namespace backend{
namespace openfl{
namespace filters{

void HueRotateFilter_obj::__construct(::hx::Null< Float >  __o_degreeAngle){
            		Float degreeAngle = __o_degreeAngle.Default(90);
            	HX_GC_STACKFRAME(&_hx_pos_d717d431f06f6be8_12_new)
HXLINE(  14)		Float value = ((degreeAngle / ( (Float)(180) )) * ::Math_obj::PI);
HXLINE(  15)		if ((value == 0)) {
HXLINE(  15)			this->filter =  ::openfl::filters::ColorMatrixFilter_obj::__alloc( HX_CTX ,null());
            		}
HXLINE(  17)		Float cosVal = ::Math_obj::cos(value);
HXLINE(  18)		Float sinVal = ::Math_obj::sin(value);
HXLINE(  20)		this->filter =  ::openfl::filters::ColorMatrixFilter_obj::__alloc( HX_CTX ,::Array_obj< Float >::__new(25)->init(0,((((Float)0.213) + (cosVal * ((Float)0.787))) + (sinVal * ((Float)-0.213))))->init(1,((((Float)0.715) + (cosVal * ((Float)-0.715))) + (sinVal * ((Float)-0.715))))->init(2,((((Float)0.072) + (cosVal * ((Float)-0.072))) + (sinVal * ((Float)0.928))))->init(3,0)->init(4,0)->init(5,((((Float)0.213) + (cosVal * ((Float)-0.213))) + (sinVal * ((Float)0.143))))->init(6,((((Float)0.715) + (cosVal * ((Float)0.28500000000000003))) + (sinVal * ((Float)0.14))))->init(7,((((Float)0.072) + (cosVal * ((Float)-0.072))) + (sinVal * ((Float)-0.283))))->init(8,0)->init(9,0)->init(10,((((Float)0.213) + (cosVal * ((Float)-0.213))) + (sinVal * ((Float)-0.787))))->init(11,((((Float)0.715) + (cosVal * ((Float)-0.715))) + (sinVal * ((Float)0.715))))->init(12,((((Float)0.072) + (cosVal * ((Float)0.928))) + (sinVal * ((Float)0.072))))->init(13,0)->init(14,0)->init(15,0)->init(16,0)->init(17,0)->init(18,1)->init(19,0)->init(20,0)->init(21,0)->init(22,0)->init(23,0)->init(24,1));
            	}

Dynamic HueRotateFilter_obj::__CreateEmpty() { return new HueRotateFilter_obj; }

void *HueRotateFilter_obj::_hx_vtable = 0;

Dynamic HueRotateFilter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HueRotateFilter_obj > _hx_result = new HueRotateFilter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HueRotateFilter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4f47a0fa;
}

Float HueRotateFilter_obj::LUMA_R;

Float HueRotateFilter_obj::LUMA_G;

Float HueRotateFilter_obj::LUMA_B;


::hx::ObjectPtr< HueRotateFilter_obj > HueRotateFilter_obj::__new(::hx::Null< Float >  __o_degreeAngle) {
	::hx::ObjectPtr< HueRotateFilter_obj > __this = new HueRotateFilter_obj();
	__this->__construct(__o_degreeAngle);
	return __this;
}

::hx::ObjectPtr< HueRotateFilter_obj > HueRotateFilter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_degreeAngle) {
	HueRotateFilter_obj *__this = (HueRotateFilter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HueRotateFilter_obj), true, "haxe.ui.backend.openfl.filters.HueRotateFilter"));
	*(void **)__this = HueRotateFilter_obj::_hx_vtable;
	__this->__construct(__o_degreeAngle);
	return __this;
}

HueRotateFilter_obj::HueRotateFilter_obj()
{
}

void HueRotateFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HueRotateFilter);
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_END_CLASS();
}

void HueRotateFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filter,"filter");
}

::hx::Val HueRotateFilter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HueRotateFilter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast<  ::openfl::filters::ColorMatrixFilter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HueRotateFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("filter",b8,1f,35,85));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HueRotateFilter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::filters::ColorMatrixFilter */ ,(int)offsetof(HueRotateFilter_obj,filter),HX_("filter",b8,1f,35,85)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo HueRotateFilter_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &HueRotateFilter_obj::LUMA_R,HX_("LUMA_R",70,ce,45,87)},
	{::hx::fsFloat,(void *) &HueRotateFilter_obj::LUMA_G,HX_("LUMA_G",65,ce,45,87)},
	{::hx::fsFloat,(void *) &HueRotateFilter_obj::LUMA_B,HX_("LUMA_B",60,ce,45,87)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String HueRotateFilter_obj_sMemberFields[] = {
	HX_("filter",b8,1f,35,85),
	::String(null()) };

static void HueRotateFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HueRotateFilter_obj::LUMA_R,"LUMA_R");
	HX_MARK_MEMBER_NAME(HueRotateFilter_obj::LUMA_G,"LUMA_G");
	HX_MARK_MEMBER_NAME(HueRotateFilter_obj::LUMA_B,"LUMA_B");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HueRotateFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HueRotateFilter_obj::LUMA_R,"LUMA_R");
	HX_VISIT_MEMBER_NAME(HueRotateFilter_obj::LUMA_G,"LUMA_G");
	HX_VISIT_MEMBER_NAME(HueRotateFilter_obj::LUMA_B,"LUMA_B");
};

#endif

::hx::Class HueRotateFilter_obj::__mClass;

static ::String HueRotateFilter_obj_sStaticFields[] = {
	HX_("LUMA_R",70,ce,45,87),
	HX_("LUMA_G",65,ce,45,87),
	HX_("LUMA_B",60,ce,45,87),
	::String(null())
};

void HueRotateFilter_obj::__register()
{
	HueRotateFilter_obj _hx_dummy;
	HueRotateFilter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.openfl.filters.HueRotateFilter",46,05,87,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HueRotateFilter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HueRotateFilter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HueRotateFilter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HueRotateFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HueRotateFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HueRotateFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HueRotateFilter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HueRotateFilter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d717d431f06f6be8_6_boot)
HXDLIN(   6)		LUMA_R = ((Float)0.213);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d717d431f06f6be8_7_boot)
HXDLIN(   7)		LUMA_G = ((Float)0.715);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d717d431f06f6be8_8_boot)
HXDLIN(   8)		LUMA_B = ((Float)0.072);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl
} // end namespace filters
