#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Saturate
#include <haxe/ui/filters/Saturate.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_19a002f19487a264_3_new,"haxe.ui.filters.Saturate","new",0xd9de7b26,"haxe.ui.filters.Saturate.new","haxe/ui/filters/Saturate.hx",3,0xdeb28609)
HX_LOCAL_STACK_FRAME(_hx_pos_19a002f19487a264_11_parse,"haxe.ui.filters.Saturate","parse",0x0ef4f879,"haxe.ui.filters.Saturate.parse","haxe/ui/filters/Saturate.hx",11,0xdeb28609)
HX_LOCAL_STACK_FRAME(_hx_pos_19a002f19487a264_4_boot,"haxe.ui.filters.Saturate","boot",0xc0e646ac,"haxe.ui.filters.Saturate.boot","haxe/ui/filters/Saturate.hx",4,0xdeb28609)
namespace haxe{
namespace ui{
namespace filters{

void Saturate_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_19a002f19487a264_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic Saturate_obj::__CreateEmpty() { return new Saturate_obj; }

void *Saturate_obj::_hx_vtable = 0;

Dynamic Saturate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Saturate_obj > _hx_result = new Saturate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Saturate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2b166675) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2b166675;
	} else {
		return inClassId==(int)0x33b3f6d0;
	}
}

void Saturate_obj::parse(::cpp::VirtualArray filterDetails){
            	HX_STACKFRAME(&_hx_pos_19a002f19487a264_11_parse)
HXLINE(  12)		::cpp::VirtualArray copy = ::haxe::ui::filters::Filter_obj::applyDefaults(filterDetails,::haxe::ui::filters::Saturate_obj::DEFAULTS);
HXLINE(  13)		this->multiplier = ( (Float)(copy->__get(0)) );
HXLINE(  15)		if ((this->multiplier < 0)) {
HXLINE(  16)			this->multiplier = ( (Float)(0) );
            		}
            	}


::cpp::VirtualArray Saturate_obj::DEFAULTS;


Saturate_obj::Saturate_obj()
{
}

::hx::Val Saturate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

bool Saturate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { outValue = ( DEFAULTS ); return true; }
	}
	return false;
}

::hx::Val Saturate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"multiplier") ) { multiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Saturate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { DEFAULTS=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

void Saturate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("multiplier",81,e7,18,01));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Saturate_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Saturate_obj,multiplier),HX_("multiplier",81,e7,18,01)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Saturate_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &Saturate_obj::DEFAULTS,HX_("DEFAULTS",92,60,1f,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Saturate_obj_sMemberFields[] = {
	HX_("multiplier",81,e7,18,01),
	HX_("parse",33,90,55,bd),
	::String(null()) };

static void Saturate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Saturate_obj::DEFAULTS,"DEFAULTS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Saturate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Saturate_obj::DEFAULTS,"DEFAULTS");
};

#endif

::hx::Class Saturate_obj::__mClass;

static ::String Saturate_obj_sStaticFields[] = {
	HX_("DEFAULTS",92,60,1f,09),
	::String(null())
};

void Saturate_obj::__register()
{
	Saturate_obj _hx_dummy;
	Saturate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.Saturate",34,b0,34,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Saturate_obj::__GetStatic;
	__mClass->mSetStaticField = &Saturate_obj::__SetStatic;
	__mClass->mMarkFunc = Saturate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Saturate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Saturate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Saturate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Saturate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Saturate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Saturate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Saturate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_19a002f19487a264_4_boot)
HXDLIN(   4)		DEFAULTS = ::cpp::VirtualArray_obj::__new(1)->init(0,1);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
