#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Grayscale
#include <haxe/ui/filters/Grayscale.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad0ee81a21535fff_3_new,"haxe.ui.filters.Grayscale","new",0xcea69dd4,"haxe.ui.filters.Grayscale.new","haxe/ui/filters/Grayscale.hx",3,0x9d1fbc3d)
HX_LOCAL_STACK_FRAME(_hx_pos_ad0ee81a21535fff_8_parse,"haxe.ui.filters.Grayscale","parse",0xe00da2a7,"haxe.ui.filters.Grayscale.parse","haxe/ui/filters/Grayscale.hx",8,0x9d1fbc3d)
HX_LOCAL_STACK_FRAME(_hx_pos_ad0ee81a21535fff_4_boot,"haxe.ui.filters.Grayscale","boot",0xfb3c7c3e,"haxe.ui.filters.Grayscale.boot","haxe/ui/filters/Grayscale.hx",4,0x9d1fbc3d)
namespace haxe{
namespace ui{
namespace filters{

void Grayscale_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ad0ee81a21535fff_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic Grayscale_obj::__CreateEmpty() { return new Grayscale_obj; }

void *Grayscale_obj::_hx_vtable = 0;

Dynamic Grayscale_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Grayscale_obj > _hx_result = new Grayscale_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Grayscale_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0acce5c6) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0acce5c6;
	} else {
		return inClassId==(int)0x2b166675;
	}
}

void Grayscale_obj::parse(::cpp::VirtualArray filterDetails){
            	HX_STACKFRAME(&_hx_pos_ad0ee81a21535fff_8_parse)
HXLINE(   9)		::cpp::VirtualArray copy = ::haxe::ui::filters::Filter_obj::applyDefaults(filterDetails,::haxe::ui::filters::Grayscale_obj::DEFAULTS);
HXLINE(  10)		this->amount = ( (Float)(copy->__get(0)) );
            	}


::cpp::VirtualArray Grayscale_obj::DEFAULTS;


Grayscale_obj::Grayscale_obj()
{
}

::hx::Val Grayscale_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

bool Grayscale_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { outValue = ( DEFAULTS ); return true; }
	}
	return false;
}

::hx::Val Grayscale_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { amount=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Grayscale_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { DEFAULTS=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

void Grayscale_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("amount",d8,11,03,d5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Grayscale_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Grayscale_obj,amount),HX_("amount",d8,11,03,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Grayscale_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &Grayscale_obj::DEFAULTS,HX_("DEFAULTS",92,60,1f,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Grayscale_obj_sMemberFields[] = {
	HX_("amount",d8,11,03,d5),
	HX_("parse",33,90,55,bd),
	::String(null()) };

static void Grayscale_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Grayscale_obj::DEFAULTS,"DEFAULTS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Grayscale_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Grayscale_obj::DEFAULTS,"DEFAULTS");
};

#endif

::hx::Class Grayscale_obj::__mClass;

static ::String Grayscale_obj_sStaticFields[] = {
	HX_("DEFAULTS",92,60,1f,09),
	::String(null())
};

void Grayscale_obj::__register()
{
	Grayscale_obj _hx_dummy;
	Grayscale_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.Grayscale",e2,63,ee,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Grayscale_obj::__GetStatic;
	__mClass->mSetStaticField = &Grayscale_obj::__SetStatic;
	__mClass->mMarkFunc = Grayscale_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Grayscale_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Grayscale_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Grayscale_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Grayscale_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Grayscale_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Grayscale_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Grayscale_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ad0ee81a21535fff_4_boot)
HXDLIN(   4)		DEFAULTS = ::cpp::VirtualArray_obj::__new(1)->init(0,100);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
