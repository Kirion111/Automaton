#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_openfl_filters_TintFilter
#include <haxe/ui/backend/openfl/filters/TintFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#include <openfl/filters/ColorMatrixFilter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a11fc92e0e439006_15_new,"haxe.ui.backend.openfl.filters.TintFilter","new",0xfc3d29ea,"haxe.ui.backend.openfl.filters.TintFilter.new","haxe/ui/backend/openfl/filters/TintFilter.hx",15,0xfba274a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a11fc92e0e439006_11_boot,"haxe.ui.backend.openfl.filters.TintFilter","boot",0xb1608368,"haxe.ui.backend.openfl.filters.TintFilter.boot","haxe/ui/backend/openfl/filters/TintFilter.hx",11,0xfba274a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a11fc92e0e439006_12_boot,"haxe.ui.backend.openfl.filters.TintFilter","boot",0xb1608368,"haxe.ui.backend.openfl.filters.TintFilter.boot","haxe/ui/backend/openfl/filters/TintFilter.hx",12,0xfba274a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a11fc92e0e439006_13_boot,"haxe.ui.backend.openfl.filters.TintFilter","boot",0xb1608368,"haxe.ui.backend.openfl.filters.TintFilter.boot","haxe/ui/backend/openfl/filters/TintFilter.hx",13,0xfba274a5)
namespace haxe{
namespace ui{
namespace backend{
namespace openfl{
namespace filters{

void TintFilter_obj::__construct(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_amount){
            		int color = __o_color.Default(0);
            		Float amount = __o_amount.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_a11fc92e0e439006_15_new)
HXLINE(  17)		int color1 = color;
HXLINE(  19)		Float r = (( (Float)(((color1 >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE(  20)		Float g = (( (Float)(((color1 >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE(  21)		Float b = (( (Float)((color1 & 255)) ) / ( (Float)(255) ));
HXLINE(  22)		Float q = (( (Float)(1) ) - amount);
HXLINE(  24)		Float rA = (amount * r);
HXLINE(  25)		Float gA = (amount * g);
HXLINE(  26)		Float bA = (amount * b);
HXLINE(  28)		this->filter =  ::openfl::filters::ColorMatrixFilter_obj::__alloc( HX_CTX ,::Array_obj< Float >::__new(20)->init(0,(q + (rA * ((Float)0.212671))))->init(1,(rA * ((Float)0.71516)))->init(2,(rA * ((Float)0.072169)))->init(3,0)->init(4,0)->init(5,(gA * ((Float)0.212671)))->init(6,(q + (gA * ((Float)0.71516))))->init(7,(gA * ((Float)0.072169)))->init(8,0)->init(9,0)->init(10,(bA * ((Float)0.212671)))->init(11,(bA * ((Float)0.71516)))->init(12,(q + (bA * ((Float)0.072169))))->init(13,0)->init(14,0)->init(15,0)->init(16,0)->init(17,0)->init(18,1)->init(19,0));
            	}

Dynamic TintFilter_obj::__CreateEmpty() { return new TintFilter_obj; }

void *TintFilter_obj::_hx_vtable = 0;

Dynamic TintFilter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TintFilter_obj > _hx_result = new TintFilter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TintFilter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0450dec0;
}

Float TintFilter_obj::LUMA_R;

Float TintFilter_obj::LUMA_G;

Float TintFilter_obj::LUMA_B;


::hx::ObjectPtr< TintFilter_obj > TintFilter_obj::__new(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_amount) {
	::hx::ObjectPtr< TintFilter_obj > __this = new TintFilter_obj();
	__this->__construct(__o_color,__o_amount);
	return __this;
}

::hx::ObjectPtr< TintFilter_obj > TintFilter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_amount) {
	TintFilter_obj *__this = (TintFilter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TintFilter_obj), true, "haxe.ui.backend.openfl.filters.TintFilter"));
	*(void **)__this = TintFilter_obj::_hx_vtable;
	__this->__construct(__o_color,__o_amount);
	return __this;
}

TintFilter_obj::TintFilter_obj()
{
}

void TintFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TintFilter);
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_END_CLASS();
}

void TintFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filter,"filter");
}

::hx::Val TintFilter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TintFilter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast<  ::openfl::filters::ColorMatrixFilter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TintFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("filter",b8,1f,35,85));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TintFilter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::filters::ColorMatrixFilter */ ,(int)offsetof(TintFilter_obj,filter),HX_("filter",b8,1f,35,85)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TintFilter_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &TintFilter_obj::LUMA_R,HX_("LUMA_R",70,ce,45,87)},
	{::hx::fsFloat,(void *) &TintFilter_obj::LUMA_G,HX_("LUMA_G",65,ce,45,87)},
	{::hx::fsFloat,(void *) &TintFilter_obj::LUMA_B,HX_("LUMA_B",60,ce,45,87)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TintFilter_obj_sMemberFields[] = {
	HX_("filter",b8,1f,35,85),
	::String(null()) };

static void TintFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TintFilter_obj::LUMA_R,"LUMA_R");
	HX_MARK_MEMBER_NAME(TintFilter_obj::LUMA_G,"LUMA_G");
	HX_MARK_MEMBER_NAME(TintFilter_obj::LUMA_B,"LUMA_B");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TintFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TintFilter_obj::LUMA_R,"LUMA_R");
	HX_VISIT_MEMBER_NAME(TintFilter_obj::LUMA_G,"LUMA_G");
	HX_VISIT_MEMBER_NAME(TintFilter_obj::LUMA_B,"LUMA_B");
};

#endif

::hx::Class TintFilter_obj::__mClass;

static ::String TintFilter_obj_sStaticFields[] = {
	HX_("LUMA_R",70,ce,45,87),
	HX_("LUMA_G",65,ce,45,87),
	HX_("LUMA_B",60,ce,45,87),
	::String(null())
};

void TintFilter_obj::__register()
{
	TintFilter_obj _hx_dummy;
	TintFilter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.openfl.filters.TintFilter",f8,ac,db,1c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TintFilter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TintFilter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TintFilter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TintFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TintFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TintFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TintFilter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TintFilter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a11fc92e0e439006_11_boot)
HXDLIN(  11)		LUMA_R = ((Float)0.212671);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a11fc92e0e439006_12_boot)
HXDLIN(  12)		LUMA_G = ((Float)0.71516);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a11fc92e0e439006_13_boot)
HXDLIN(  13)		LUMA_B = ((Float)0.072169);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl
} // end namespace filters
