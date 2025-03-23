#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_filters_Blur
#include <haxe/ui/filters/Blur.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_74e540f925efc24d_3_new,"haxe.ui.filters.Blur","new",0x9686235e,"haxe.ui.filters.Blur.new","haxe/ui/filters/Blur.hx",3,0xfaa1a151)
HX_LOCAL_STACK_FRAME(_hx_pos_74e540f925efc24d_8_parse,"haxe.ui.filters.Blur","parse",0x03011eb1,"haxe.ui.filters.Blur.parse","haxe/ui/filters/Blur.hx",8,0xfaa1a151)
HX_LOCAL_STACK_FRAME(_hx_pos_74e540f925efc24d_4_boot,"haxe.ui.filters.Blur","boot",0x16f1cf74,"haxe.ui.filters.Blur.boot","haxe/ui/filters/Blur.hx",4,0xfaa1a151)
namespace haxe{
namespace ui{
namespace filters{

void Blur_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_74e540f925efc24d_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic Blur_obj::__CreateEmpty() { return new Blur_obj; }

void *Blur_obj::_hx_vtable = 0;

Dynamic Blur_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Blur_obj > _hx_result = new Blur_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Blur_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2b166675) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2b166675;
	} else {
		return inClassId==(int)0x43367024;
	}
}

void Blur_obj::parse(::cpp::VirtualArray filterDetails){
            	HX_STACKFRAME(&_hx_pos_74e540f925efc24d_8_parse)
HXLINE(   9)		::cpp::VirtualArray copy = ::haxe::ui::filters::Filter_obj::applyDefaults(filterDetails,::haxe::ui::filters::Blur_obj::DEFAULTS);
HXLINE(  10)		this->amount = ( (Float)(copy->__get(0)) );
            	}


::cpp::VirtualArray Blur_obj::DEFAULTS;


Blur_obj::Blur_obj()
{
}

::hx::Val Blur_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { return ::hx::Val( amount ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Blur_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { outValue = ( DEFAULTS ); return true; }
	}
	return false;
}

::hx::Val Blur_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { amount=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Blur_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { DEFAULTS=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

void Blur_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("amount",d8,11,03,d5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Blur_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Blur_obj,amount),HX_("amount",d8,11,03,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Blur_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &Blur_obj::DEFAULTS,HX_("DEFAULTS",92,60,1f,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Blur_obj_sMemberFields[] = {
	HX_("amount",d8,11,03,d5),
	HX_("parse",33,90,55,bd),
	::String(null()) };

static void Blur_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Blur_obj::DEFAULTS,"DEFAULTS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Blur_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Blur_obj::DEFAULTS,"DEFAULTS");
};

#endif

::hx::Class Blur_obj::__mClass;

static ::String Blur_obj_sStaticFields[] = {
	HX_("DEFAULTS",92,60,1f,09),
	::String(null())
};

void Blur_obj::__register()
{
	Blur_obj _hx_dummy;
	Blur_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.Blur",6c,dc,65,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Blur_obj::__GetStatic;
	__mClass->mSetStaticField = &Blur_obj::__SetStatic;
	__mClass->mMarkFunc = Blur_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Blur_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Blur_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Blur_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Blur_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Blur_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Blur_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Blur_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_74e540f925efc24d_4_boot)
HXDLIN(   4)		DEFAULTS = ::cpp::VirtualArray_obj::__new(1)->init(0,1);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
