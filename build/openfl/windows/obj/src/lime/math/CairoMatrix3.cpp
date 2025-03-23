#include <hxcpp.h>

#ifndef INCLUDED_lime_math_CairoMatrix3
#include <lime/math/CairoMatrix3.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_305c4c96db43e091_639_new,"lime.math.CairoMatrix3","new",0xaeb15a89,"lime.math.CairoMatrix3.new","lime/math/Matrix3.hx",639,0xeabca539)
namespace lime{
namespace math{

void CairoMatrix3_obj::__construct(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty){
            		Float a = __o_a.Default(1);
            		Float b = __o_b.Default(0);
            		Float c = __o_c.Default(0);
            		Float d = __o_d.Default(1);
            		Float tx = __o_tx.Default(0);
            		Float ty = __o_ty.Default(0);
            	HX_STACKFRAME(&_hx_pos_305c4c96db43e091_639_new)
HXLINE( 640)		this->a = a;
HXLINE( 641)		this->b = b;
HXLINE( 642)		this->c = c;
HXLINE( 643)		this->d = d;
HXLINE( 644)		this->tx = tx;
HXLINE( 645)		this->ty = ty;
            	}

Dynamic CairoMatrix3_obj::__CreateEmpty() { return new CairoMatrix3_obj; }

void *CairoMatrix3_obj::_hx_vtable = 0;

Dynamic CairoMatrix3_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoMatrix3_obj > _hx_result = new CairoMatrix3_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool CairoMatrix3_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cfc6713;
}


CairoMatrix3_obj::CairoMatrix3_obj()
{
}

::hx::Val CairoMatrix3_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"c") ) { return ::hx::Val( c ); }
		if (HX_FIELD_EQ(inName,"d") ) { return ::hx::Val( d ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return ::hx::Val( tx ); }
		if (HX_FIELD_EQ(inName,"ty") ) { return ::hx::Val( ty ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CairoMatrix3_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoMatrix3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("c",63,00,00,00));
	outFields->push(HX_("d",64,00,00,00));
	outFields->push(HX_("tx",84,65,00,00));
	outFields->push(HX_("ty",85,65,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CairoMatrix3_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(CairoMatrix3_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsFloat,(int)offsetof(CairoMatrix3_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsFloat,(int)offsetof(CairoMatrix3_obj,c),HX_("c",63,00,00,00)},
	{::hx::fsFloat,(int)offsetof(CairoMatrix3_obj,d),HX_("d",64,00,00,00)},
	{::hx::fsFloat,(int)offsetof(CairoMatrix3_obj,tx),HX_("tx",84,65,00,00)},
	{::hx::fsFloat,(int)offsetof(CairoMatrix3_obj,ty),HX_("ty",85,65,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CairoMatrix3_obj_sStaticStorageInfo = 0;
#endif

static ::String CairoMatrix3_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("b",62,00,00,00),
	HX_("c",63,00,00,00),
	HX_("d",64,00,00,00),
	HX_("tx",84,65,00,00),
	HX_("ty",85,65,00,00),
	::String(null()) };

::hx::Class CairoMatrix3_obj::__mClass;

void CairoMatrix3_obj::__register()
{
	CairoMatrix3_obj _hx_dummy;
	CairoMatrix3_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.math.CairoMatrix3",17,62,65,76);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CairoMatrix3_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CairoMatrix3_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoMatrix3_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoMatrix3_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace math
