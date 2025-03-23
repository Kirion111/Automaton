#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Tint
#include <haxe/ui/filters/Tint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3b04ed1d1f36f4f9_3_new,"haxe.ui.filters.Tint","new",0x799f67b2,"haxe.ui.filters.Tint.new","haxe/ui/filters/Tint.hx",3,0xad96437d)
HX_LOCAL_STACK_FRAME(_hx_pos_3b04ed1d1f36f4f9_9_parse,"haxe.ui.filters.Tint","parse",0xd2332005,"haxe.ui.filters.Tint.parse","haxe/ui/filters/Tint.hx",9,0xad96437d)
HX_LOCAL_STACK_FRAME(_hx_pos_3b04ed1d1f36f4f9_4_boot,"haxe.ui.filters.Tint","boot",0xe9f454a0,"haxe.ui.filters.Tint.boot","haxe/ui/filters/Tint.hx",4,0xad96437d)
namespace haxe{
namespace ui{
namespace filters{

void Tint_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3b04ed1d1f36f4f9_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic Tint_obj::__CreateEmpty() { return new Tint_obj; }

void *Tint_obj::_hx_vtable = 0;

Dynamic Tint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tint_obj > _hx_result = new Tint_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tint_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2b166675) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2b166675;
	} else {
		return inClassId==(int)0x4f19fa78;
	}
}

void Tint_obj::parse(::cpp::VirtualArray filterDetails){
            	HX_STACKFRAME(&_hx_pos_3b04ed1d1f36f4f9_9_parse)
HXLINE(  10)		::cpp::VirtualArray copy = ::haxe::ui::filters::Filter_obj::applyDefaults(filterDetails,::haxe::ui::filters::Tint_obj::DEFAULTS);
HXLINE(  11)		this->color = ( (int)(copy->__get(0)) );
HXLINE(  12)		this->amount = ( (Float)(copy->__get(1)) );
HXLINE(  14)		if ((this->amount < 0)) {
HXLINE(  15)			this->amount = ( (Float)(0) );
            		}
            		else {
HXLINE(  16)			if ((this->amount > 1)) {
HXLINE(  17)				this->amount = ( (Float)(1) );
            			}
            		}
            	}


::cpp::VirtualArray Tint_obj::DEFAULTS;


Tint_obj::Tint_obj()
{
}

::hx::Val Tint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { return ::hx::Val( amount ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Tint_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { outValue = ( DEFAULTS ); return true; }
	}
	return false;
}

::hx::Val Tint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { amount=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"DEFAULTS") ) { DEFAULTS=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

void Tint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("amount",d8,11,03,d5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Tint_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Tint_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsFloat,(int)offsetof(Tint_obj,amount),HX_("amount",d8,11,03,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Tint_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &Tint_obj::DEFAULTS,HX_("DEFAULTS",92,60,1f,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Tint_obj_sMemberFields[] = {
	HX_("color",63,71,5c,4a),
	HX_("amount",d8,11,03,d5),
	HX_("parse",33,90,55,bd),
	::String(null()) };

static void Tint_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tint_obj::DEFAULTS,"DEFAULTS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Tint_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tint_obj::DEFAULTS,"DEFAULTS");
};

#endif

::hx::Class Tint_obj::__mClass;

static ::String Tint_obj_sStaticFields[] = {
	HX_("DEFAULTS",92,60,1f,09),
	::String(null())
};

void Tint_obj::__register()
{
	Tint_obj _hx_dummy;
	Tint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.Tint",c0,66,49,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tint_obj::__GetStatic;
	__mClass->mSetStaticField = &Tint_obj::__SetStatic;
	__mClass->mMarkFunc = Tint_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tint_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Tint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Tint_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Tint_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Tint_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3b04ed1d1f36f4f9_4_boot)
HXDLIN(   4)		DEFAULTS = ::cpp::VirtualArray_obj::__new(2)->init(0,0)->init(1,1);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
