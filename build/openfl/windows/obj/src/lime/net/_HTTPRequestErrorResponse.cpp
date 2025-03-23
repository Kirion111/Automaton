#include <hxcpp.h>

#ifndef INCLUDED_lime_net__HTTPRequestErrorResponse
#include <lime/net/_HTTPRequestErrorResponse.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f7b1deedf7981d65_166_new,"lime.net._HTTPRequestErrorResponse","new",0x2b8904a9,"lime.net._HTTPRequestErrorResponse.new","lime/net/HTTPRequest.hx",166,0x339db723)
namespace lime{
namespace net{

void _HTTPRequestErrorResponse_obj::__construct( ::Dynamic error, ::Dynamic responseData){
            	HX_STACKFRAME(&_hx_pos_f7b1deedf7981d65_166_new)
HXLINE( 167)		this->error = error;
HXLINE( 168)		this->responseData = responseData;
            	}

Dynamic _HTTPRequestErrorResponse_obj::__CreateEmpty() { return new _HTTPRequestErrorResponse_obj; }

void *_HTTPRequestErrorResponse_obj::_hx_vtable = 0;

Dynamic _HTTPRequestErrorResponse_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< _HTTPRequestErrorResponse_obj > _hx_result = new _HTTPRequestErrorResponse_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool _HTTPRequestErrorResponse_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3002a801;
}


_HTTPRequestErrorResponse_obj::_HTTPRequestErrorResponse_obj()
{
}

void _HTTPRequestErrorResponse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(_HTTPRequestErrorResponse);
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(responseData,"responseData");
	HX_MARK_END_CLASS();
}

void _HTTPRequestErrorResponse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(responseData,"responseData");
}

::hx::Val _HTTPRequestErrorResponse_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"responseData") ) { return ::hx::Val( responseData ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val _HTTPRequestErrorResponse_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"responseData") ) { responseData=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void _HTTPRequestErrorResponse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("error",c8,cb,29,73));
	outFields->push(HX_("responseData",4b,05,e9,c4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo _HTTPRequestErrorResponse_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(_HTTPRequestErrorResponse_obj,error),HX_("error",c8,cb,29,73)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(_HTTPRequestErrorResponse_obj,responseData),HX_("responseData",4b,05,e9,c4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *_HTTPRequestErrorResponse_obj_sStaticStorageInfo = 0;
#endif

static ::String _HTTPRequestErrorResponse_obj_sMemberFields[] = {
	HX_("error",c8,cb,29,73),
	HX_("responseData",4b,05,e9,c4),
	::String(null()) };

::hx::Class _HTTPRequestErrorResponse_obj::__mClass;

void _HTTPRequestErrorResponse_obj::__register()
{
	_HTTPRequestErrorResponse_obj _hx_dummy;
	_HTTPRequestErrorResponse_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.net._HTTPRequestErrorResponse",37,7c,55,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(_HTTPRequestErrorResponse_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< _HTTPRequestErrorResponse_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = _HTTPRequestErrorResponse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = _HTTPRequestErrorResponse_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
