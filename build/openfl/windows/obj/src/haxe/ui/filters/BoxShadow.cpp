#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_filters_BoxShadow
#include <haxe/ui/filters/BoxShadow.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f4db388ff5c6970b_3_new,"haxe.ui.filters.BoxShadow","new",0x3fd83c58,"haxe.ui.filters.BoxShadow.new","haxe/ui/filters/BoxShadow.hx",3,0xf9785a39)
HX_LOCAL_STACK_FRAME(_hx_pos_f4db388ff5c6970b_14_parse,"haxe.ui.filters.BoxShadow","parse",0x37c6ea2b,"haxe.ui.filters.BoxShadow.parse","haxe/ui/filters/BoxShadow.hx",14,0xf9785a39)
HX_LOCAL_STACK_FRAME(_hx_pos_f4db388ff5c6970b_4_boot,"haxe.ui.filters.BoxShadow","boot",0x9575913a,"haxe.ui.filters.BoxShadow.boot","haxe/ui/filters/BoxShadow.hx",4,0xf9785a39)
namespace haxe{
namespace ui{
namespace filters{

void BoxShadow_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f4db388ff5c6970b_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic BoxShadow_obj::__CreateEmpty() { return new BoxShadow_obj; }

void *BoxShadow_obj::_hx_vtable = 0;

Dynamic BoxShadow_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BoxShadow_obj > _hx_result = new BoxShadow_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BoxShadow_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2b166675) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2b166675;
	} else {
		return inClassId==(int)0x74a3f24a;
	}
}

void BoxShadow_obj::parse(::cpp::VirtualArray filterDetails){
            	HX_STACKFRAME(&_hx_pos_f4db388ff5c6970b_14_parse)
HXLINE(  15)		::cpp::VirtualArray copy = ::haxe::ui::filters::Filter_obj::applyDefaults(filterDetails,::haxe::ui::filters::BoxShadow_obj::DEFAULTS);
HXLINE(  16)		this->offsetX = ( (Float)(copy->__get(0)) );
HXLINE(  17)		this->offsetY = ( (Float)(copy->__get(1)) );
HXLINE(  18)		this->color = ( (int)(copy->__get(2)) );
HXLINE(  19)		this->alpha = ( (Float)(copy->__get(3)) );
HXLINE(  20)		this->blurRadius = ( (Float)(copy->__get(4)) );
HXLINE(  21)		this->spreadRadius = ( (Float)(copy->__get(5)) );
HXLINE(  22)		this->inset = ( (bool)(copy->__get(6)) );
            	}


::cpp::VirtualArray BoxShadow_obj::DEFAULTS;


BoxShadow_obj::BoxShadow_obj()
{
}

::hx::Val BoxShadow_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"inset") ) { return ::hx::Val( inset ); }
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blurRadius") ) { return ::hx::Val( blurRadius ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"spreadRadius") ) { return ::hx::Val( spreadRadius ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BoxShadow_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { outValue = ( DEFAULTS ); return true; }
	}
	return false;
}

::hx::Val BoxShadow_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inset") ) { inset=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blurRadius") ) { blurRadius=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"spreadRadius") ) { spreadRadius=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BoxShadow_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { DEFAULTS=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

void BoxShadow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("blurRadius",59,7e,82,28));
	outFields->push(HX_("spreadRadius",25,df,bf,94));
	outFields->push(HX_("inset",dd,fc,1f,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BoxShadow_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(BoxShadow_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(BoxShadow_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{::hx::fsInt,(int)offsetof(BoxShadow_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsFloat,(int)offsetof(BoxShadow_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsFloat,(int)offsetof(BoxShadow_obj,blurRadius),HX_("blurRadius",59,7e,82,28)},
	{::hx::fsFloat,(int)offsetof(BoxShadow_obj,spreadRadius),HX_("spreadRadius",25,df,bf,94)},
	{::hx::fsBool,(int)offsetof(BoxShadow_obj,inset),HX_("inset",dd,fc,1f,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo BoxShadow_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &BoxShadow_obj::DEFAULTS,HX_("DEFAULTS",92,60,1f,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String BoxShadow_obj_sMemberFields[] = {
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("color",63,71,5c,4a),
	HX_("alpha",5e,a7,96,21),
	HX_("blurRadius",59,7e,82,28),
	HX_("spreadRadius",25,df,bf,94),
	HX_("inset",dd,fc,1f,be),
	HX_("parse",33,90,55,bd),
	::String(null()) };

static void BoxShadow_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoxShadow_obj::DEFAULTS,"DEFAULTS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BoxShadow_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoxShadow_obj::DEFAULTS,"DEFAULTS");
};

#endif

::hx::Class BoxShadow_obj::__mClass;

static ::String BoxShadow_obj_sStaticFields[] = {
	HX_("DEFAULTS",92,60,1f,09),
	::String(null())
};

void BoxShadow_obj::__register()
{
	BoxShadow_obj _hx_dummy;
	BoxShadow_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.BoxShadow",66,70,c5,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BoxShadow_obj::__GetStatic;
	__mClass->mSetStaticField = &BoxShadow_obj::__SetStatic;
	__mClass->mMarkFunc = BoxShadow_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BoxShadow_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BoxShadow_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BoxShadow_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BoxShadow_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BoxShadow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BoxShadow_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BoxShadow_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f4db388ff5c6970b_4_boot)
HXDLIN(   4)		DEFAULTS = ::cpp::VirtualArray_obj::__new(7)->init(0,2)->init(1,2)->init(2,0)->init(3,((Float).1))->init(4,1)->init(5,0)->init(6,false);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
