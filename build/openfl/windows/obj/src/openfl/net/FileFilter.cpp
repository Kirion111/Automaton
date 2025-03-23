#include <hxcpp.h>

#ifndef INCLUDED_openfl_net_FileFilter
#include <openfl/net/FileFilter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0860c5b2df24b64b_102_new,"openfl.net.FileFilter","new",0x526a6575,"openfl.net.FileFilter.new","openfl/net/FileFilter.hx",102,0x403301d9)
namespace openfl{
namespace net{

void FileFilter_obj::__construct(::String description,::String extension,::String macType){
            	HX_STACKFRAME(&_hx_pos_0860c5b2df24b64b_102_new)
HXLINE( 103)		this->description = description;
HXLINE( 104)		this->extension = extension;
HXLINE( 105)		this->macType = macType;
            	}

Dynamic FileFilter_obj::__CreateEmpty() { return new FileFilter_obj; }

void *FileFilter_obj::_hx_vtable = 0;

Dynamic FileFilter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FileFilter_obj > _hx_result = new FileFilter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FileFilter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x06d6661d;
}


FileFilter_obj::FileFilter_obj()
{
}

void FileFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileFilter);
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(extension,"extension");
	HX_MARK_MEMBER_NAME(macType,"macType");
	HX_MARK_END_CLASS();
}

void FileFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(extension,"extension");
	HX_VISIT_MEMBER_NAME(macType,"macType");
}

::hx::Val FileFilter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"macType") ) { return ::hx::Val( macType ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"extension") ) { return ::hx::Val( extension ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return ::hx::Val( description ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FileFilter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"macType") ) { macType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"extension") ) { extension=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("description",fc,08,1d,5f));
	outFields->push(HX_("extension",7f,93,10,e5));
	outFields->push(HX_("macType",e9,1c,cf,b5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FileFilter_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FileFilter_obj,description),HX_("description",fc,08,1d,5f)},
	{::hx::fsString,(int)offsetof(FileFilter_obj,extension),HX_("extension",7f,93,10,e5)},
	{::hx::fsString,(int)offsetof(FileFilter_obj,macType),HX_("macType",e9,1c,cf,b5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FileFilter_obj_sStaticStorageInfo = 0;
#endif

static ::String FileFilter_obj_sMemberFields[] = {
	HX_("description",fc,08,1d,5f),
	HX_("extension",7f,93,10,e5),
	HX_("macType",e9,1c,cf,b5),
	::String(null()) };

::hx::Class FileFilter_obj::__mClass;

void FileFilter_obj::__register()
{
	FileFilter_obj _hx_dummy;
	FileFilter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net.FileFilter",03,87,ab,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FileFilter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FileFilter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileFilter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace net
