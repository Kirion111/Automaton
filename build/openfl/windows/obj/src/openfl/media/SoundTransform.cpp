#include <hxcpp.h>

#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b69a1b3bd673fa32_100_new,"openfl.media.SoundTransform","new",0x75fea817,"openfl.media.SoundTransform.new","openfl/media/SoundTransform.hx",100,0xcbc8f637)
HX_LOCAL_STACK_FRAME(_hx_pos_b69a1b3bd673fa32_112_clone,"openfl.media.SoundTransform","clone",0xa03c86d4,"openfl.media.SoundTransform.clone","openfl/media/SoundTransform.hx",112,0xcbc8f637)
HX_LOCAL_STACK_FRAME(_hx_pos_b69a1b3bd673fa32_15_boot,"openfl.media.SoundTransform","boot",0xc0ed6c9b,"openfl.media.SoundTransform.boot","openfl/media/SoundTransform.hx",15,0xcbc8f637)
namespace openfl{
namespace media{

void SoundTransform_obj::__construct(::hx::Null< Float >  __o_vol,::hx::Null< Float >  __o_panning){
            		Float vol = __o_vol.Default(1);
            		Float panning = __o_panning.Default(0);
            	HX_STACKFRAME(&_hx_pos_b69a1b3bd673fa32_100_new)
HXLINE( 101)		this->volume = vol;
HXLINE( 102)		this->pan = panning;
HXLINE( 103)		this->leftToLeft = ( (Float)(0) );
HXLINE( 104)		this->leftToRight = ( (Float)(0) );
HXLINE( 105)		this->rightToLeft = ( (Float)(0) );
HXLINE( 106)		this->rightToRight = ( (Float)(0) );
            	}

Dynamic SoundTransform_obj::__CreateEmpty() { return new SoundTransform_obj; }

void *SoundTransform_obj::_hx_vtable = 0;

Dynamic SoundTransform_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SoundTransform_obj > _hx_result = new SoundTransform_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SoundTransform_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ea957cd;
}

 ::openfl::media::SoundTransform SoundTransform_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b69a1b3bd673fa32_112_clone)
HXDLIN( 112)		return  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,this->volume,this->pan);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundTransform_obj,clone,return )


SoundTransform_obj::SoundTransform_obj()
{
}

::hx::Val SoundTransform_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return ::hx::Val( pan ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return ::hx::Val( volume ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftToLeft") ) { return ::hx::Val( leftToLeft ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"leftToRight") ) { return ::hx::Val( leftToRight ); }
		if (HX_FIELD_EQ(inName,"rightToLeft") ) { return ::hx::Val( rightToLeft ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rightToRight") ) { return ::hx::Val( rightToRight ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SoundTransform_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { pan=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftToLeft") ) { leftToLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"leftToRight") ) { leftToRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightToLeft") ) { rightToLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rightToRight") ) { rightToRight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("leftToLeft",89,2e,7a,ac));
	outFields->push(HX_("leftToRight",1a,97,7b,b5));
	outFields->push(HX_("pan",5d,51,55,00));
	outFields->push(HX_("rightToLeft",1e,40,ee,e6));
	outFields->push(HX_("rightToRight",e5,e7,96,a0));
	outFields->push(HX_("volume",da,29,53,5f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SoundTransform_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(SoundTransform_obj,leftToLeft),HX_("leftToLeft",89,2e,7a,ac)},
	{::hx::fsFloat,(int)offsetof(SoundTransform_obj,leftToRight),HX_("leftToRight",1a,97,7b,b5)},
	{::hx::fsFloat,(int)offsetof(SoundTransform_obj,pan),HX_("pan",5d,51,55,00)},
	{::hx::fsFloat,(int)offsetof(SoundTransform_obj,rightToLeft),HX_("rightToLeft",1e,40,ee,e6)},
	{::hx::fsFloat,(int)offsetof(SoundTransform_obj,rightToRight),HX_("rightToRight",e5,e7,96,a0)},
	{::hx::fsFloat,(int)offsetof(SoundTransform_obj,volume),HX_("volume",da,29,53,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SoundTransform_obj_sStaticStorageInfo = 0;
#endif

static ::String SoundTransform_obj_sMemberFields[] = {
	HX_("leftToLeft",89,2e,7a,ac),
	HX_("leftToRight",1a,97,7b,b5),
	HX_("pan",5d,51,55,00),
	HX_("rightToLeft",1e,40,ee,e6),
	HX_("rightToRight",e5,e7,96,a0),
	HX_("volume",da,29,53,5f),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class SoundTransform_obj::__mClass;

void SoundTransform_obj::__register()
{
	SoundTransform_obj _hx_dummy;
	SoundTransform_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.media.SoundTransform",a5,50,3d,65);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SoundTransform_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SoundTransform_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SoundTransform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SoundTransform_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SoundTransform_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b69a1b3bd673fa32_15_boot)
HXDLIN(  15)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("clone",5d,13,63,48), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
}

} // end namespace openfl
} // end namespace media
