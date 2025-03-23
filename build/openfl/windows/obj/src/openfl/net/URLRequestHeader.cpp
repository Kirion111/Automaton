#include <hxcpp.h>

#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8cde7e51a6201b8b_109_new,"openfl.net.URLRequestHeader","new",0xe794452e,"openfl.net.URLRequestHeader.new","openfl/net/URLRequestHeader.hx",109,0xf4ac7ec0)
namespace openfl{
namespace net{

void URLRequestHeader_obj::__construct(::String __o_name,::String __o_value){
            		::String name = __o_name;
            		if (::hx::IsNull(__o_name)) name = HX_("",00,00,00,00);
            		::String value = __o_value;
            		if (::hx::IsNull(__o_value)) value = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_8cde7e51a6201b8b_109_new)
HXLINE( 110)		this->name = name;
HXLINE( 111)		this->value = value;
            	}

Dynamic URLRequestHeader_obj::__CreateEmpty() { return new URLRequestHeader_obj; }

void *URLRequestHeader_obj::_hx_vtable = 0;

Dynamic URLRequestHeader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< URLRequestHeader_obj > _hx_result = new URLRequestHeader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool URLRequestHeader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f232c46;
}


URLRequestHeader_obj::URLRequestHeader_obj()
{
}

void URLRequestHeader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLRequestHeader);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void URLRequestHeader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(value,"value");
}

::hx::Val URLRequestHeader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val URLRequestHeader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLRequestHeader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo URLRequestHeader_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(URLRequestHeader_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(URLRequestHeader_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *URLRequestHeader_obj_sStaticStorageInfo = 0;
#endif

static ::String URLRequestHeader_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("value",71,7f,b8,31),
	::String(null()) };

::hx::Class URLRequestHeader_obj::__mClass;

void URLRequestHeader_obj::__register()
{
	URLRequestHeader_obj _hx_dummy;
	URLRequestHeader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net.URLRequestHeader",3c,d6,aa,5f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(URLRequestHeader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< URLRequestHeader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLRequestHeader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLRequestHeader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace net
