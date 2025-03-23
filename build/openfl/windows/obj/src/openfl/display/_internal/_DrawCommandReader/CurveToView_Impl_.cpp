#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_CurveToView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/CurveToView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b7964c5d852eee6f_521__new,"openfl.display._internal._DrawCommandReader.CurveToView_Impl_","_new",0x1ca8bfa7,"openfl.display._internal._DrawCommandReader.CurveToView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",521,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b7964c5d852eee6f_530_get_controlX,"openfl.display._internal._DrawCommandReader.CurveToView_Impl_","get_controlX",0xf91c9aaa,"openfl.display._internal._DrawCommandReader.CurveToView_Impl_.get_controlX","openfl/display/_internal/DrawCommandReader.hx",530,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b7964c5d852eee6f_537_get_controlY,"openfl.display._internal._DrawCommandReader.CurveToView_Impl_","get_controlY",0xf91c9aab,"openfl.display._internal._DrawCommandReader.CurveToView_Impl_.get_controlY","openfl/display/_internal/DrawCommandReader.hx",537,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b7964c5d852eee6f_544_get_anchorX,"openfl.display._internal._DrawCommandReader.CurveToView_Impl_","get_anchorX",0x81c716d4,"openfl.display._internal._DrawCommandReader.CurveToView_Impl_.get_anchorX","openfl/display/_internal/DrawCommandReader.hx",544,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b7964c5d852eee6f_551_get_anchorY,"openfl.display._internal._DrawCommandReader.CurveToView_Impl_","get_anchorY",0x81c716d5,"openfl.display._internal._DrawCommandReader.CurveToView_Impl_.get_anchorY","openfl/display/_internal/DrawCommandReader.hx",551,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void CurveToView_Impl__obj::__construct() { }

Dynamic CurveToView_Impl__obj::__CreateEmpty() { return new CurveToView_Impl__obj; }

void *CurveToView_Impl__obj::_hx_vtable = 0;

Dynamic CurveToView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CurveToView_Impl__obj > _hx_result = new CurveToView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CurveToView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x124d671a;
}

 ::openfl::display::_internal::DrawCommandReader CurveToView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_b7964c5d852eee6f_521__new)
HXDLIN( 521)		 ::openfl::display::_internal::DrawCommandReader this1 = d;
HXDLIN( 521)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CurveToView_Impl__obj,_new,return )

Float CurveToView_Impl__obj::get_controlX( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_b7964c5d852eee6f_530_get_controlX)
HXDLIN( 530)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CurveToView_Impl__obj,get_controlX,return )

Float CurveToView_Impl__obj::get_controlY( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_b7964c5d852eee6f_537_get_controlY)
HXDLIN( 537)		return this1->buffer->f->__get((this1->fPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CurveToView_Impl__obj,get_controlY,return )

Float CurveToView_Impl__obj::get_anchorX( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_b7964c5d852eee6f_544_get_anchorX)
HXDLIN( 544)		return this1->buffer->f->__get((this1->fPos + 2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CurveToView_Impl__obj,get_anchorX,return )

Float CurveToView_Impl__obj::get_anchorY( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_b7964c5d852eee6f_551_get_anchorY)
HXDLIN( 551)		return this1->buffer->f->__get((this1->fPos + 3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CurveToView_Impl__obj,get_anchorY,return )


CurveToView_Impl__obj::CurveToView_Impl__obj()
{
}

bool CurveToView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_anchorX") ) { outValue = get_anchorX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_anchorY") ) { outValue = get_anchorY_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_controlX") ) { outValue = get_controlX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_controlY") ) { outValue = get_controlY_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CurveToView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CurveToView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class CurveToView_Impl__obj::__mClass;

static ::String CurveToView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_controlX",64,3a,d6,ec),
	HX_("get_controlY",65,3a,d6,ec),
	HX_("get_anchorX",5a,4c,9c,88),
	HX_("get_anchorY",5b,4c,9c,88),
	::String(null())
};

void CurveToView_Impl__obj::__register()
{
	CurveToView_Impl__obj _hx_dummy;
	CurveToView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.CurveToView_Impl_",e8,db,f6,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CurveToView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CurveToView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CurveToView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CurveToView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CurveToView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
