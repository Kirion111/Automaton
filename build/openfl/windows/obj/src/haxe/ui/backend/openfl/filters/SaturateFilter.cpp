#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_openfl_filters_SaturateFilter
#include <haxe/ui/backend/openfl/filters/SaturateFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#include <openfl/filters/ColorMatrixFilter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6410bc408d695982_13_new,"haxe.ui.backend.openfl.filters.SaturateFilter","new",0xc50efc5e,"haxe.ui.backend.openfl.filters.SaturateFilter.new","haxe/ui/backend/openfl/filters/SaturateFilter.hx",13,0xd2328831)
HX_LOCAL_STACK_FRAME(_hx_pos_6410bc408d695982_7_boot,"haxe.ui.backend.openfl.filters.SaturateFilter","boot",0xa026d674,"haxe.ui.backend.openfl.filters.SaturateFilter.boot","haxe/ui/backend/openfl/filters/SaturateFilter.hx",7,0xd2328831)
HX_LOCAL_STACK_FRAME(_hx_pos_6410bc408d695982_8_boot,"haxe.ui.backend.openfl.filters.SaturateFilter","boot",0xa026d674,"haxe.ui.backend.openfl.filters.SaturateFilter.boot","haxe/ui/backend/openfl/filters/SaturateFilter.hx",8,0xd2328831)
HX_LOCAL_STACK_FRAME(_hx_pos_6410bc408d695982_9_boot,"haxe.ui.backend.openfl.filters.SaturateFilter","boot",0xa026d674,"haxe.ui.backend.openfl.filters.SaturateFilter.boot","haxe/ui/backend/openfl/filters/SaturateFilter.hx",9,0xd2328831)
namespace haxe{
namespace ui{
namespace backend{
namespace openfl{
namespace filters{

void SaturateFilter_obj::__construct(::hx::Null< Float >  __o_multiplier){
            		Float multiplier = __o_multiplier.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_6410bc408d695982_13_new)
HXLINE(  15)		Float sat = multiplier;
HXLINE(  16)		Float invSat = (( (Float)(1) ) - multiplier);
HXLINE(  17)		Float invLumR = (invSat * ((Float)0.299));
HXLINE(  18)		Float invLumG = (invSat * ((Float)0.587));
HXLINE(  19)		Float invLumB = (invSat * ((Float)0.114));
HXLINE(  21)		this->filter =  ::openfl::filters::ColorMatrixFilter_obj::__alloc( HX_CTX ,::Array_obj< Float >::__new(20)->init(0,(invLumR + sat))->init(1,invLumG)->init(2,invLumB)->init(3,0)->init(4,0)->init(5,invLumR)->init(6,(invLumG + sat))->init(7,invLumB)->init(8,0)->init(9,0)->init(10,invLumR)->init(11,invLumG)->init(12,(invLumB + sat))->init(13,0)->init(14,0)->init(15,0)->init(16,0)->init(17,0)->init(18,1)->init(19,0));
            	}

Dynamic SaturateFilter_obj::__CreateEmpty() { return new SaturateFilter_obj; }

void *SaturateFilter_obj::_hx_vtable = 0;

Dynamic SaturateFilter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SaturateFilter_obj > _hx_result = new SaturateFilter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SaturateFilter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ae1a69c;
}

Float SaturateFilter_obj::LUMA_R;

Float SaturateFilter_obj::LUMA_G;

Float SaturateFilter_obj::LUMA_B;


::hx::ObjectPtr< SaturateFilter_obj > SaturateFilter_obj::__new(::hx::Null< Float >  __o_multiplier) {
	::hx::ObjectPtr< SaturateFilter_obj > __this = new SaturateFilter_obj();
	__this->__construct(__o_multiplier);
	return __this;
}

::hx::ObjectPtr< SaturateFilter_obj > SaturateFilter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_multiplier) {
	SaturateFilter_obj *__this = (SaturateFilter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SaturateFilter_obj), true, "haxe.ui.backend.openfl.filters.SaturateFilter"));
	*(void **)__this = SaturateFilter_obj::_hx_vtable;
	__this->__construct(__o_multiplier);
	return __this;
}

SaturateFilter_obj::SaturateFilter_obj()
{
}

void SaturateFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SaturateFilter);
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_END_CLASS();
}

void SaturateFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filter,"filter");
}

::hx::Val SaturateFilter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SaturateFilter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast<  ::openfl::filters::ColorMatrixFilter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SaturateFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("filter",b8,1f,35,85));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SaturateFilter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::filters::ColorMatrixFilter */ ,(int)offsetof(SaturateFilter_obj,filter),HX_("filter",b8,1f,35,85)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SaturateFilter_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &SaturateFilter_obj::LUMA_R,HX_("LUMA_R",70,ce,45,87)},
	{::hx::fsFloat,(void *) &SaturateFilter_obj::LUMA_G,HX_("LUMA_G",65,ce,45,87)},
	{::hx::fsFloat,(void *) &SaturateFilter_obj::LUMA_B,HX_("LUMA_B",60,ce,45,87)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SaturateFilter_obj_sMemberFields[] = {
	HX_("filter",b8,1f,35,85),
	::String(null()) };

static void SaturateFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SaturateFilter_obj::LUMA_R,"LUMA_R");
	HX_MARK_MEMBER_NAME(SaturateFilter_obj::LUMA_G,"LUMA_G");
	HX_MARK_MEMBER_NAME(SaturateFilter_obj::LUMA_B,"LUMA_B");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SaturateFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SaturateFilter_obj::LUMA_R,"LUMA_R");
	HX_VISIT_MEMBER_NAME(SaturateFilter_obj::LUMA_G,"LUMA_G");
	HX_VISIT_MEMBER_NAME(SaturateFilter_obj::LUMA_B,"LUMA_B");
};

#endif

::hx::Class SaturateFilter_obj::__mClass;

static ::String SaturateFilter_obj_sStaticFields[] = {
	HX_("LUMA_R",70,ce,45,87),
	HX_("LUMA_G",65,ce,45,87),
	HX_("LUMA_B",60,ce,45,87),
	::String(null())
};

void SaturateFilter_obj::__register()
{
	SaturateFilter_obj _hx_dummy;
	SaturateFilter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.openfl.filters.SaturateFilter",6c,35,4e,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SaturateFilter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SaturateFilter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SaturateFilter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SaturateFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SaturateFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SaturateFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SaturateFilter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SaturateFilter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6410bc408d695982_7_boot)
HXDLIN(   7)		LUMA_R = ((Float)0.299);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6410bc408d695982_8_boot)
HXDLIN(   8)		LUMA_G = ((Float)0.587);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6410bc408d695982_9_boot)
HXDLIN(   9)		LUMA_B = ((Float)0.114);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl
} // end namespace filters
