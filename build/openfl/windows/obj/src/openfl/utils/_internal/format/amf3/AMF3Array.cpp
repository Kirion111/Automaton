#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Array
#include <openfl/utils/_internal/format/amf3/AMF3Array.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_41f86d030a7f83d3_36_new,"openfl.utils._internal.format.amf3.AMF3Array","new",0xa04947e7,"openfl.utils._internal.format.amf3.AMF3Array.new","openfl/utils/_internal/format/amf3/AMF3Array.hx",36,0x4a488c0c)
HX_LOCAL_STACK_FRAME(_hx_pos_41f86d030a7f83d3_30_boot,"openfl.utils._internal.format.amf3.AMF3Array","boot",0x97eea2cb,"openfl.utils._internal.format.amf3.AMF3Array.boot","openfl/utils/_internal/format/amf3/AMF3Array.hx",30,0x4a488c0c)
namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf3{

void AMF3Array_obj::__construct(::cpp::VirtualArray initA, ::haxe::ds::StringMap initExtra){
            	HX_STACKFRAME(&_hx_pos_41f86d030a7f83d3_36_new)
HXLINE(  37)		this->a = initA;
HXLINE(  38)		this->extra = initExtra;
            	}

Dynamic AMF3Array_obj::__CreateEmpty() { return new AMF3Array_obj; }

void *AMF3Array_obj::_hx_vtable = 0;

Dynamic AMF3Array_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AMF3Array_obj > _hx_result = new AMF3Array_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AMF3Array_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7288e055;
}


::hx::ObjectPtr< AMF3Array_obj > AMF3Array_obj::__new(::cpp::VirtualArray initA, ::haxe::ds::StringMap initExtra) {
	::hx::ObjectPtr< AMF3Array_obj > __this = new AMF3Array_obj();
	__this->__construct(initA,initExtra);
	return __this;
}

::hx::ObjectPtr< AMF3Array_obj > AMF3Array_obj::__alloc(::hx::Ctx *_hx_ctx,::cpp::VirtualArray initA, ::haxe::ds::StringMap initExtra) {
	AMF3Array_obj *__this = (AMF3Array_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AMF3Array_obj), true, "openfl.utils._internal.format.amf3.AMF3Array"));
	*(void **)__this = AMF3Array_obj::_hx_vtable;
	__this->__construct(initA,initExtra);
	return __this;
}

AMF3Array_obj::AMF3Array_obj()
{
}

void AMF3Array_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AMF3Array);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(extra,"extra");
	HX_MARK_END_CLASS();
}

void AMF3Array_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(extra,"extra");
}

::hx::Val AMF3Array_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"extra") ) { return ::hx::Val( extra ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AMF3Array_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"extra") ) { extra=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AMF3Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("extra",90,9a,22,77));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AMF3Array_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(AMF3Array_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AMF3Array_obj,extra),HX_("extra",90,9a,22,77)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AMF3Array_obj_sStaticStorageInfo = 0;
#endif

static ::String AMF3Array_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("extra",90,9a,22,77),
	::String(null()) };

::hx::Class AMF3Array_obj::__mClass;

void AMF3Array_obj::__register()
{
	AMF3Array_obj _hx_dummy;
	AMF3Array_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._internal.format.amf3.AMF3Array",75,c8,27,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AMF3Array_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AMF3Array_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AMF3Array_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AMF3Array_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AMF3Array_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_41f86d030a7f83d3_30_boot)
HXDLIN(  30)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("extra",90,9a,22,77), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("optional",a0,af,6e,1e),null()))))));
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf3
