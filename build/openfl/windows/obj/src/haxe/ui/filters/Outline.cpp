#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Outline
#include <haxe/ui/filters/Outline.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_92196a44910df42d_3_new,"haxe.ui.filters.Outline","new",0xab22fa4f,"haxe.ui.filters.Outline.new","haxe/ui/filters/Outline.hx",3,0x3b7ecde2)
HX_LOCAL_STACK_FRAME(_hx_pos_92196a44910df42d_9_parse,"haxe.ui.filters.Outline","parse",0x19b653e2,"haxe.ui.filters.Outline.parse","haxe/ui/filters/Outline.hx",9,0x3b7ecde2)
HX_LOCAL_STACK_FRAME(_hx_pos_92196a44910df42d_4_boot,"haxe.ui.filters.Outline","boot",0x0b910b63,"haxe.ui.filters.Outline.boot","haxe/ui/filters/Outline.hx",4,0x3b7ecde2)
namespace haxe{
namespace ui{
namespace filters{

void Outline_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_92196a44910df42d_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic Outline_obj::__CreateEmpty() { return new Outline_obj; }

void *Outline_obj::_hx_vtable = 0;

Dynamic Outline_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Outline_obj > _hx_result = new Outline_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Outline_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x119fa7c1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x119fa7c1;
	} else {
		return inClassId==(int)0x2b166675;
	}
}

void Outline_obj::parse(::cpp::VirtualArray filterDetails){
            	HX_STACKFRAME(&_hx_pos_92196a44910df42d_9_parse)
HXLINE(  10)		::cpp::VirtualArray copy = ::haxe::ui::filters::Filter_obj::applyDefaults(filterDetails,::haxe::ui::filters::Outline_obj::DEFAULTS);
HXLINE(  11)		this->color = ( (int)(copy->__get(0)) );
HXLINE(  12)		this->size = ( (int)(copy->__get(1)) );
            	}


::cpp::VirtualArray Outline_obj::DEFAULTS;


Outline_obj::Outline_obj()
{
}

::hx::Val Outline_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Outline_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { outValue = ( DEFAULTS ); return true; }
	}
	return false;
}

::hx::Val Outline_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Outline_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { DEFAULTS=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

void Outline_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("size",c1,a0,53,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Outline_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Outline_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsInt,(int)offsetof(Outline_obj,size),HX_("size",c1,a0,53,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Outline_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &Outline_obj::DEFAULTS,HX_("DEFAULTS",92,60,1f,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Outline_obj_sMemberFields[] = {
	HX_("color",63,71,5c,4a),
	HX_("size",c1,a0,53,4c),
	HX_("parse",33,90,55,bd),
	::String(null()) };

static void Outline_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Outline_obj::DEFAULTS,"DEFAULTS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Outline_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Outline_obj::DEFAULTS,"DEFAULTS");
};

#endif

::hx::Class Outline_obj::__mClass;

static ::String Outline_obj_sStaticFields[] = {
	HX_("DEFAULTS",92,60,1f,09),
	::String(null())
};

void Outline_obj::__register()
{
	Outline_obj _hx_dummy;
	Outline_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.Outline",dd,26,ce,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Outline_obj::__GetStatic;
	__mClass->mSetStaticField = &Outline_obj::__SetStatic;
	__mClass->mMarkFunc = Outline_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Outline_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Outline_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Outline_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Outline_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Outline_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Outline_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Outline_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_92196a44910df42d_4_boot)
HXDLIN(   4)		DEFAULTS = ::cpp::VirtualArray_obj::__new(2)->init(0,0)->init(1,1);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
