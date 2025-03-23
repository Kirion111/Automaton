#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_HueRotate
#include <haxe/ui/filters/HueRotate.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_00034fad02b51635_3_new,"haxe.ui.filters.HueRotate","new",0x4535a140,"haxe.ui.filters.HueRotate.new","haxe/ui/filters/HueRotate.hx",3,0xb9350a51)
HX_LOCAL_STACK_FRAME(_hx_pos_00034fad02b51635_11_parse,"haxe.ui.filters.HueRotate","parse",0x5af55913,"haxe.ui.filters.HueRotate.parse","haxe/ui/filters/HueRotate.hx",11,0xb9350a51)
HX_LOCAL_STACK_FRAME(_hx_pos_00034fad02b51635_4_boot,"haxe.ui.filters.HueRotate","boot",0x41d07752,"haxe.ui.filters.HueRotate.boot","haxe/ui/filters/HueRotate.hx",4,0xb9350a51)
namespace haxe{
namespace ui{
namespace filters{

void HueRotate_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_00034fad02b51635_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic HueRotate_obj::__CreateEmpty() { return new HueRotate_obj; }

void *HueRotate_obj::_hx_vtable = 0;

Dynamic HueRotate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HueRotate_obj > _hx_result = new HueRotate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HueRotate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2b166675) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2b166675;
	} else {
		return inClassId==(int)0x5562c332;
	}
}

void HueRotate_obj::parse(::cpp::VirtualArray filterDetails){
            	HX_STACKFRAME(&_hx_pos_00034fad02b51635_11_parse)
HXLINE(  12)		::cpp::VirtualArray copy = ::haxe::ui::filters::Filter_obj::applyDefaults(filterDetails,::haxe::ui::filters::HueRotate_obj::DEFAULTS);
HXLINE(  13)		this->angleDegree = ( (Float)(copy->__get(0)) );
            	}


::cpp::VirtualArray HueRotate_obj::DEFAULTS;


HueRotate_obj::HueRotate_obj()
{
}

::hx::Val HueRotate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angleDegree") ) { return ::hx::Val( angleDegree ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HueRotate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { outValue = ( DEFAULTS ); return true; }
	}
	return false;
}

::hx::Val HueRotate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"angleDegree") ) { angleDegree=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HueRotate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { DEFAULTS=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

void HueRotate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("angleDegree",7f,57,d0,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HueRotate_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(HueRotate_obj,angleDegree),HX_("angleDegree",7f,57,d0,78)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo HueRotate_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &HueRotate_obj::DEFAULTS,HX_("DEFAULTS",92,60,1f,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String HueRotate_obj_sMemberFields[] = {
	HX_("angleDegree",7f,57,d0,78),
	HX_("parse",33,90,55,bd),
	::String(null()) };

static void HueRotate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HueRotate_obj::DEFAULTS,"DEFAULTS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HueRotate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HueRotate_obj::DEFAULTS,"DEFAULTS");
};

#endif

::hx::Class HueRotate_obj::__mClass;

static ::String HueRotate_obj_sStaticFields[] = {
	HX_("DEFAULTS",92,60,1f,09),
	::String(null())
};

void HueRotate_obj::__register()
{
	HueRotate_obj _hx_dummy;
	HueRotate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.HueRotate",4e,41,84,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HueRotate_obj::__GetStatic;
	__mClass->mSetStaticField = &HueRotate_obj::__SetStatic;
	__mClass->mMarkFunc = HueRotate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HueRotate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HueRotate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HueRotate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HueRotate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HueRotate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HueRotate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HueRotate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_00034fad02b51635_4_boot)
HXDLIN(   4)		DEFAULTS = ::cpp::VirtualArray_obj::__new(1)->init(0,1);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
