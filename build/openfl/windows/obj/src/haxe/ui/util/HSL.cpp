#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_util_HSL
#include <haxe/ui/util/HSL.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e3920487ee966361_4_new,"haxe.ui.util.HSL","new",0x66c841f9,"haxe.ui.util.HSL.new","haxe/ui/util/ColorUtil.hx",4,0x8c838474)
namespace haxe{
namespace ui{
namespace util{

void HSL_obj::__construct(Float h,Float s,Float l){
            	HX_STACKFRAME(&_hx_pos_e3920487ee966361_4_new)
HXDLIN(   4)		this->h = h;
HXDLIN(   4)		this->s = s;
HXDLIN(   4)		this->l = l;
            	}

Dynamic HSL_obj::__CreateEmpty() { return new HSL_obj; }

void *HSL_obj::_hx_vtable = 0;

Dynamic HSL_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HSL_obj > _hx_result = new HSL_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool HSL_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04f71965;
}


HSL_obj::HSL_obj()
{
}

::hx::Val HSL_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return ::hx::Val( h ); }
		if (HX_FIELD_EQ(inName,"s") ) { return ::hx::Val( s ); }
		if (HX_FIELD_EQ(inName,"l") ) { return ::hx::Val( l ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HSL_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"l") ) { l=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HSL_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("h",68,00,00,00));
	outFields->push(HX_("s",73,00,00,00));
	outFields->push(HX_("l",6c,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HSL_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(HSL_obj,h),HX_("h",68,00,00,00)},
	{::hx::fsFloat,(int)offsetof(HSL_obj,s),HX_("s",73,00,00,00)},
	{::hx::fsFloat,(int)offsetof(HSL_obj,l),HX_("l",6c,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HSL_obj_sStaticStorageInfo = 0;
#endif

static ::String HSL_obj_sMemberFields[] = {
	HX_("h",68,00,00,00),
	HX_("s",73,00,00,00),
	HX_("l",6c,00,00,00),
	::String(null()) };

::hx::Class HSL_obj::__mClass;

void HSL_obj::__register()
{
	HSL_obj _hx_dummy;
	HSL_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.HSL",87,d1,37,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HSL_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HSL_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HSL_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HSL_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
