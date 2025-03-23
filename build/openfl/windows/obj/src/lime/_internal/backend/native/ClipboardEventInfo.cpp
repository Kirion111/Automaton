#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_ClipboardEventInfo
#include <lime/_internal/backend/native/ClipboardEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45f117d879fd522d_655_new,"lime._internal.backend.native.ClipboardEventInfo","new",0x8e61fe76,"lime._internal.backend.native.ClipboardEventInfo.new","lime/_internal/backend/native/NativeApplication.hx",655,0xc1eba895)
HX_LOCAL_STACK_FRAME(_hx_pos_45f117d879fd522d_660_clone,"lime._internal.backend.native.ClipboardEventInfo","clone",0x18e972f3,"lime._internal.backend.native.ClipboardEventInfo.clone","lime/_internal/backend/native/NativeApplication.hx",660,0xc1eba895)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void ClipboardEventInfo_obj::__construct( ::Dynamic type){
            	HX_STACKFRAME(&_hx_pos_45f117d879fd522d_655_new)
HXDLIN( 655)		this->type = ( (int)(type) );
            	}

Dynamic ClipboardEventInfo_obj::__CreateEmpty() { return new ClipboardEventInfo_obj; }

void *ClipboardEventInfo_obj::_hx_vtable = 0;

Dynamic ClipboardEventInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClipboardEventInfo_obj > _hx_result = new ClipboardEventInfo_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ClipboardEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x06373e3e;
}

 ::lime::_internal::backend::native::ClipboardEventInfo ClipboardEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_45f117d879fd522d_660_clone)
HXDLIN( 660)		return  ::lime::_internal::backend::native::ClipboardEventInfo_obj::__alloc( HX_CTX ,this->type);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClipboardEventInfo_obj,clone,return )


ClipboardEventInfo_obj::ClipboardEventInfo_obj()
{
}

::hx::Val ClipboardEventInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ClipboardEventInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClipboardEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ClipboardEventInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ClipboardEventInfo_obj,type),HX_("type",ba,f2,08,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ClipboardEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String ClipboardEventInfo_obj_sMemberFields[] = {
	HX_("type",ba,f2,08,4d),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class ClipboardEventInfo_obj::__mClass;

void ClipboardEventInfo_obj::__register()
{
	ClipboardEventInfo_obj _hx_dummy;
	ClipboardEventInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.ClipboardEventInfo",84,4b,40,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ClipboardEventInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ClipboardEventInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClipboardEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClipboardEventInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
