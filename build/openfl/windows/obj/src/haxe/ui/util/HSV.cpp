#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_util_HSV
#include <haxe/ui/util/HSV.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aab02d088fa7d9db_11_new,"haxe.ui.util.HSV","new",0x28ca0f03,"haxe.ui.util.HSV.new","haxe/ui/util/ColorUtil.hx",11,0x8c838474)
namespace haxe{
namespace ui{
namespace util{

void HSV_obj::__construct(Float h,Float s,Float v){
            	HX_STACKFRAME(&_hx_pos_aab02d088fa7d9db_11_new)
HXDLIN(  11)		this->h = h;
HXDLIN(  11)		this->s = s;
HXDLIN(  11)		this->v = v;
            	}

Dynamic HSV_obj::__CreateEmpty() { return new HSV_obj; }

void *HSV_obj::_hx_vtable = 0;

Dynamic HSV_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HSV_obj > _hx_result = new HSV_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool HSV_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04f7196f;
}


HSV_obj::HSV_obj()
{
}

::hx::Val HSV_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return ::hx::Val( h ); }
		if (HX_FIELD_EQ(inName,"s") ) { return ::hx::Val( s ); }
		if (HX_FIELD_EQ(inName,"v") ) { return ::hx::Val( v ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HSV_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HSV_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("h",68,00,00,00));
	outFields->push(HX_("s",73,00,00,00));
	outFields->push(HX_("v",76,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HSV_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(HSV_obj,h),HX_("h",68,00,00,00)},
	{::hx::fsFloat,(int)offsetof(HSV_obj,s),HX_("s",73,00,00,00)},
	{::hx::fsFloat,(int)offsetof(HSV_obj,v),HX_("v",76,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HSV_obj_sStaticStorageInfo = 0;
#endif

static ::String HSV_obj_sMemberFields[] = {
	HX_("h",68,00,00,00),
	HX_("s",73,00,00,00),
	HX_("v",76,00,00,00),
	::String(null()) };

::hx::Class HSV_obj::__mClass;

void HSV_obj::__register()
{
	HSV_obj _hx_dummy;
	HSV_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.HSV",91,d1,37,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HSV_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HSV_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HSV_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HSV_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
