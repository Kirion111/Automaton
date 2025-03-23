#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_filters_Contrast
#include <haxe/ui/filters/Contrast.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_027c0300e7ed4a6f_3_new,"haxe.ui.filters.Contrast","new",0xb2089db9,"haxe.ui.filters.Contrast.new","haxe/ui/filters/Contrast.hx",3,0xa08716d6)
HX_LOCAL_STACK_FRAME(_hx_pos_027c0300e7ed4a6f_11_parse,"haxe.ui.filters.Contrast","parse",0xdfdb25cc,"haxe.ui.filters.Contrast.parse","haxe/ui/filters/Contrast.hx",11,0xa08716d6)
HX_LOCAL_STACK_FRAME(_hx_pos_027c0300e7ed4a6f_4_boot,"haxe.ui.filters.Contrast","boot",0x0d9a64b9,"haxe.ui.filters.Contrast.boot","haxe/ui/filters/Contrast.hx",4,0xa08716d6)
namespace haxe{
namespace ui{
namespace filters{

void Contrast_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_027c0300e7ed4a6f_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic Contrast_obj::__CreateEmpty() { return new Contrast_obj; }

void *Contrast_obj::_hx_vtable = 0;

Dynamic Contrast_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Contrast_obj > _hx_result = new Contrast_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Contrast_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0d801cff) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0d801cff;
	} else {
		return inClassId==(int)0x2b166675;
	}
}

void Contrast_obj::parse(::cpp::VirtualArray filterDetails){
            	HX_STACKFRAME(&_hx_pos_027c0300e7ed4a6f_11_parse)
HXLINE(  12)		::cpp::VirtualArray copy = ::haxe::ui::filters::Filter_obj::applyDefaults(filterDetails,::haxe::ui::filters::Contrast_obj::DEFAULTS);
HXLINE(  13)		this->multiplier = ( (Float)(copy->__get(0)) );
HXLINE(  15)		if ((this->multiplier < 0)) {
HXLINE(  16)			this->multiplier = ( (Float)(0) );
            		}
            	}


::cpp::VirtualArray Contrast_obj::DEFAULTS;


Contrast_obj::Contrast_obj()
{
}

::hx::Val Contrast_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"multiplier") ) { return ::hx::Val( multiplier ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Contrast_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { outValue = ( DEFAULTS ); return true; }
	}
	return false;
}

::hx::Val Contrast_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"multiplier") ) { multiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Contrast_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { DEFAULTS=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

void Contrast_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("multiplier",81,e7,18,01));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Contrast_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Contrast_obj,multiplier),HX_("multiplier",81,e7,18,01)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Contrast_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &Contrast_obj::DEFAULTS,HX_("DEFAULTS",92,60,1f,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Contrast_obj_sMemberFields[] = {
	HX_("multiplier",81,e7,18,01),
	HX_("parse",33,90,55,bd),
	::String(null()) };

static void Contrast_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Contrast_obj::DEFAULTS,"DEFAULTS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Contrast_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Contrast_obj::DEFAULTS,"DEFAULTS");
};

#endif

::hx::Class Contrast_obj::__mClass;

static ::String Contrast_obj_sStaticFields[] = {
	HX_("DEFAULTS",92,60,1f,09),
	::String(null())
};

void Contrast_obj::__register()
{
	Contrast_obj _hx_dummy;
	Contrast_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.Contrast",47,4d,af,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Contrast_obj::__GetStatic;
	__mClass->mSetStaticField = &Contrast_obj::__SetStatic;
	__mClass->mMarkFunc = Contrast_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Contrast_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Contrast_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Contrast_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Contrast_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Contrast_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Contrast_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Contrast_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_027c0300e7ed4a6f_4_boot)
HXDLIN(   4)		DEFAULTS = ::cpp::VirtualArray_obj::__new(1)->init(0,1);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
