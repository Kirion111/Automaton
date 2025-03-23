#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz__HBLanguage_HBLanguage_Impl_
#include <lime/text/harfbuzz/_HBLanguage/HBLanguage_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ea4d32685afb113e_11__new,"lime.text.harfbuzz._HBLanguage.HBLanguage_Impl_","_new",0x28591bba,"lime.text.harfbuzz._HBLanguage.HBLanguage_Impl_._new","lime/text/harfbuzz/HBLanguage.hx",11,0x01dc06e5)
HX_LOCAL_STACK_FRAME(_hx_pos_ea4d32685afb113e_28_toString,"lime.text.harfbuzz._HBLanguage.HBLanguage_Impl_","toString",0xeccd7785,"lime.text.harfbuzz._HBLanguage.HBLanguage_Impl_.toString","lime/text/harfbuzz/HBLanguage.hx",28,0x01dc06e5)
HX_LOCAL_STACK_FRAME(_hx_pos_ea4d32685afb113e_41_fromString,"lime.text.harfbuzz._HBLanguage.HBLanguage_Impl_","fromString",0xdaecfcf4,"lime.text.harfbuzz._HBLanguage.HBLanguage_Impl_.fromString","lime/text/harfbuzz/HBLanguage.hx",41,0x01dc06e5)
namespace lime{
namespace text{
namespace harfbuzz{
namespace _HBLanguage{

void HBLanguage_Impl__obj::__construct() { }

Dynamic HBLanguage_Impl__obj::__CreateEmpty() { return new HBLanguage_Impl__obj; }

void *HBLanguage_Impl__obj::_hx_vtable = 0;

Dynamic HBLanguage_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HBLanguage_Impl__obj > _hx_result = new HBLanguage_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBLanguage_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1f86dfa1;
}

 ::Dynamic HBLanguage_Impl__obj::_new(::String language){
            	HX_STACKFRAME(&_hx_pos_ea4d32685afb113e_11__new)
HXDLIN(  11)		 ::Dynamic this1;
HXLINE(  14)		if (::hx::IsNotNull( language )) {
HXLINE(  16)			this1 = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_language_from_string(language)) );
            		}
            		else {
HXLINE(  20)			this1 = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_language_get_default()) );
            		}
HXLINE(  11)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBLanguage_Impl__obj,_new,return )

::String HBLanguage_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_ea4d32685afb113e_28_toString)
HXLINE(  30)		if (::hx::IsNotNull( this1 )) {
HXLINE(  32)			 ::hx::Object * result = ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_language_to_string(::hx::DynamicPtr(this1));
HXLINE(  33)			return ( (::String)(( ( ::Dynamic)(result) )) );
            		}
HXLINE(  36)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBLanguage_Impl__obj,toString,return )

 ::Dynamic HBLanguage_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_ea4d32685afb113e_41_fromString)
HXDLIN(  41)		return ::lime::text::harfbuzz::_HBLanguage::HBLanguage_Impl__obj::_new(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBLanguage_Impl__obj,fromString,return )


HBLanguage_Impl__obj::HBLanguage_Impl__obj()
{
}

bool HBLanguage_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HBLanguage_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HBLanguage_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class HBLanguage_Impl__obj::__mClass;

static ::String HBLanguage_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("toString",ac,d0,6e,38),
	HX_("fromString",db,2d,74,54),
	::String(null())
};

void HBLanguage_Impl__obj::__register()
{
	HBLanguage_Impl__obj _hx_dummy;
	HBLanguage_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.text.harfbuzz._HBLanguage.HBLanguage_Impl_",b5,f8,a9,ae);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HBLanguage_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HBLanguage_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HBLanguage_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBLanguage_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBLanguage_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
} // end namespace _HBLanguage
