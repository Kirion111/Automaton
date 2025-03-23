#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_CssFilters
#include <haxe/ui/styles/CssFilters.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ecf4334c6b39e190_9_registerCssFilter,"haxe.ui.styles.CssFilters","registerCssFilter",0x0f98695c,"haxe.ui.styles.CssFilters.registerCssFilter","haxe/ui/styles/CssFilters.hx",9,0xd1b18c2b)
HX_LOCAL_STACK_FRAME(_hx_pos_ecf4334c6b39e190_13_hasCssFilter,"haxe.ui.styles.CssFilters","hasCssFilter",0x44b6c33d,"haxe.ui.styles.CssFilters.hasCssFilter","haxe/ui/styles/CssFilters.hx",13,0xd1b18c2b)
HX_LOCAL_STACK_FRAME(_hx_pos_ecf4334c6b39e190_17_getCssFilter,"haxe.ui.styles.CssFilters","getCssFilter",0xc6bb7a81,"haxe.ui.styles.CssFilters.getCssFilter","haxe/ui/styles/CssFilters.hx",17,0xd1b18c2b)
HX_LOCAL_STACK_FRAME(_hx_pos_ecf4334c6b39e190_6_boot,"haxe.ui.styles.CssFilters","boot",0xa1a01a4e,"haxe.ui.styles.CssFilters.boot","haxe/ui/styles/CssFilters.hx",6,0xd1b18c2b)
namespace haxe{
namespace ui{
namespace styles{

void CssFilters_obj::__construct() { }

Dynamic CssFilters_obj::__CreateEmpty() { return new CssFilters_obj; }

void *CssFilters_obj::_hx_vtable = 0;

Dynamic CssFilters_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CssFilters_obj > _hx_result = new CssFilters_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CssFilters_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a5742f4;
}

 ::haxe::ds::StringMap CssFilters_obj::_cssFilters;

void CssFilters_obj::registerCssFilter(::String name, ::Dynamic ctor){
            	HX_STACKFRAME(&_hx_pos_ecf4334c6b39e190_9_registerCssFilter)
HXDLIN(   9)		::haxe::ui::styles::CssFilters_obj::_cssFilters->set(name,ctor);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CssFilters_obj,registerCssFilter,(void))

bool CssFilters_obj::hasCssFilter(::String name){
            	HX_STACKFRAME(&_hx_pos_ecf4334c6b39e190_13_hasCssFilter)
HXDLIN(  13)		return ::haxe::ui::styles::CssFilters_obj::_cssFilters->exists(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CssFilters_obj,hasCssFilter,return )

 ::Dynamic CssFilters_obj::getCssFilter(::String name){
            	HX_STACKFRAME(&_hx_pos_ecf4334c6b39e190_17_getCssFilter)
HXDLIN(  17)		return ::haxe::ui::styles::CssFilters_obj::_cssFilters->get(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CssFilters_obj,getCssFilter,return )


CssFilters_obj::CssFilters_obj()
{
}

bool CssFilters_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_cssFilters") ) { outValue = ( _cssFilters ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasCssFilter") ) { outValue = hasCssFilter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCssFilter") ) { outValue = getCssFilter_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerCssFilter") ) { outValue = registerCssFilter_dyn(); return true; }
	}
	return false;
}

bool CssFilters_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_cssFilters") ) { _cssFilters=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CssFilters_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CssFilters_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &CssFilters_obj::_cssFilters,HX_("_cssFilters",57,61,09,7a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CssFilters_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CssFilters_obj::_cssFilters,"_cssFilters");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CssFilters_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CssFilters_obj::_cssFilters,"_cssFilters");
};

#endif

::hx::Class CssFilters_obj::__mClass;

static ::String CssFilters_obj_sStaticFields[] = {
	HX_("_cssFilters",57,61,09,7a),
	HX_("registerCssFilter",f8,a0,cd,98),
	HX_("hasCssFilter",21,b1,44,3a),
	HX_("getCssFilter",65,68,49,bc),
	::String(null())
};

void CssFilters_obj::__register()
{
	CssFilters_obj _hx_dummy;
	CssFilters_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.CssFilters",d2,7f,4f,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CssFilters_obj::__GetStatic;
	__mClass->mSetStaticField = &CssFilters_obj::__SetStatic;
	__mClass->mMarkFunc = CssFilters_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CssFilters_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CssFilters_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CssFilters_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CssFilters_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CssFilters_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CssFilters_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_ecf4334c6b39e190_6_boot)
HXDLIN(   6)		_cssFilters =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
