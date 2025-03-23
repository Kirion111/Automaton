#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_util_RGBF
#include <haxe/ui/util/RGBF.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0b2a48cf95df95b6_18_new,"haxe.ui.util.RGBF","new",0x792dc9c5,"haxe.ui.util.RGBF.new","haxe/ui/util/ColorUtil.hx",18,0x8c838474)
namespace haxe{
namespace ui{
namespace util{

void RGBF_obj::__construct(Float r,Float g,Float b){
            	HX_STACKFRAME(&_hx_pos_0b2a48cf95df95b6_18_new)
HXDLIN(  18)		this->r = r;
HXDLIN(  18)		this->g = g;
HXDLIN(  18)		this->b = b;
            	}

Dynamic RGBF_obj::__CreateEmpty() { return new RGBF_obj; }

void *RGBF_obj::_hx_vtable = 0;

Dynamic RGBF_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RGBF_obj > _hx_result = new RGBF_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool RGBF_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x59d21db5;
}


RGBF_obj::RGBF_obj()
{
}

::hx::Val RGBF_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return ::hx::Val( r ); }
		if (HX_FIELD_EQ(inName,"g") ) { return ::hx::Val( g ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RGBF_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RGBF_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("r",72,00,00,00));
	outFields->push(HX_("g",67,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RGBF_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(RGBF_obj,r),HX_("r",72,00,00,00)},
	{::hx::fsFloat,(int)offsetof(RGBF_obj,g),HX_("g",67,00,00,00)},
	{::hx::fsFloat,(int)offsetof(RGBF_obj,b),HX_("b",62,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RGBF_obj_sStaticStorageInfo = 0;
#endif

static ::String RGBF_obj_sMemberFields[] = {
	HX_("r",72,00,00,00),
	HX_("g",67,00,00,00),
	HX_("b",62,00,00,00),
	::String(null()) };

::hx::Class RGBF_obj::__mClass;

void RGBF_obj::__register()
{
	RGBF_obj _hx_dummy;
	RGBF_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.RGBF",53,83,32,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RGBF_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RGBF_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RGBF_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RGBF_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
