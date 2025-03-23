#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#include <haxe/ui/backend/PlatformImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Platform
#include <haxe/ui/core/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_CssFunctions
#include <haxe/ui/styles/CssFunctions.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleLookupMap
#include <haxe/ui/styles/StyleLookupMap.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_ValueTools
#include <haxe/ui/styles/ValueTools.h>
#endif
#ifndef INCLUDED_haxe_ui_themes_ThemeManager
#include <haxe/ui/themes/ThemeManager.h>
#endif
#ifndef INCLUDED_haxe_ui_util_ColorUtil
#include <haxe/ui/util/ColorUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_HSL
#include <haxe/ui/util/HSL.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <haxe/ui/util/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7bb9121368e23db5_15_registerCssFunction,"haxe.ui.styles.CssFunctions","registerCssFunction",0x1a34721c,"haxe.ui.styles.CssFunctions.registerCssFunction","haxe/ui/styles/CssFunctions.hx",15,0x7e3fe98b)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb9121368e23db5_19_hasCssFunction,"haxe.ui.styles.CssFunctions","hasCssFunction",0x1edd897d,"haxe.ui.styles.CssFunctions.hasCssFunction","haxe/ui/styles/CssFunctions.hx",19,0x7e3fe98b)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb9121368e23db5_23_getCssFunction,"haxe.ui.styles.CssFunctions","getCssFunction",0xb4f199c1,"haxe.ui.styles.CssFunctions.getCssFunction","haxe/ui/styles/CssFunctions.hx",23,0x7e3fe98b)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb9121368e23db5_37_calc,"haxe.ui.styles.CssFunctions","calc",0x48d27651,"haxe.ui.styles.CssFunctions.calc","haxe/ui/styles/CssFunctions.hx",37,0x7e3fe98b)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb9121368e23db5_42_min,"haxe.ui.styles.CssFunctions","min",0x04f2bf56,"haxe.ui.styles.CssFunctions.min","haxe/ui/styles/CssFunctions.hx",42,0x7e3fe98b)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb9121368e23db5_54_max,"haxe.ui.styles.CssFunctions","max",0x04f2b868,"haxe.ui.styles.CssFunctions.max","haxe/ui/styles/CssFunctions.hx",54,0x7e3fe98b)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb9121368e23db5_66_clamp,"haxe.ui.styles.CssFunctions","clamp",0x769219bf,"haxe.ui.styles.CssFunctions.clamp","haxe/ui/styles/CssFunctions.hx",66,0x7e3fe98b)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb9121368e23db5_82_platformColor,"haxe.ui.styles.CssFunctions","platformColor",0xa1309074,"haxe.ui.styles.CssFunctions.platformColor","haxe/ui/styles/CssFunctions.hx",82,0x7e3fe98b)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb9121368e23db5_86_themeIcon,"haxe.ui.styles.CssFunctions","themeIcon",0xc45322e6,"haxe.ui.styles.CssFunctions.themeIcon","haxe/ui/styles/CssFunctions.hx",86,0x7e3fe98b)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb9121368e23db5_90_rgb,"haxe.ui.styles.CssFunctions","rgb",0x04f688d1,"haxe.ui.styles.CssFunctions.rgb","haxe/ui/styles/CssFunctions.hx",90,0x7e3fe98b)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb9121368e23db5_94_lookup,"haxe.ui.styles.CssFunctions","lookup",0xa5ede736,"haxe.ui.styles.CssFunctions.lookup","haxe/ui/styles/CssFunctions.hx",94,0x7e3fe98b)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb9121368e23db5_97_lighten,"haxe.ui.styles.CssFunctions","lighten",0x86e72a83,"haxe.ui.styles.CssFunctions.lighten","haxe/ui/styles/CssFunctions.hx",97,0x7e3fe98b)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb9121368e23db5_109_darken,"haxe.ui.styles.CssFunctions","darken",0x65727b1b,"haxe.ui.styles.CssFunctions.darken","haxe/ui/styles/CssFunctions.hx",109,0x7e3fe98b)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb9121368e23db5_12_boot,"haxe.ui.styles.CssFunctions","boot",0x4833e1ee,"haxe.ui.styles.CssFunctions.boot","haxe/ui/styles/CssFunctions.hx",12,0x7e3fe98b)
namespace haxe{
namespace ui{
namespace styles{

void CssFunctions_obj::__construct() { }

Dynamic CssFunctions_obj::__CreateEmpty() { return new CssFunctions_obj; }

void *CssFunctions_obj::_hx_vtable = 0;

Dynamic CssFunctions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CssFunctions_obj > _hx_result = new CssFunctions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CssFunctions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c753c38;
}

 ::haxe::ds::StringMap CssFunctions_obj::_cssFunctions;

void CssFunctions_obj::registerCssFunction(::String name, ::Dynamic fn){
            	HX_STACKFRAME(&_hx_pos_7bb9121368e23db5_15_registerCssFunction)
HXDLIN(  15)		::haxe::ui::styles::CssFunctions_obj::_cssFunctions->set(name,fn);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CssFunctions_obj,registerCssFunction,(void))

bool CssFunctions_obj::hasCssFunction(::String name){
            	HX_STACKFRAME(&_hx_pos_7bb9121368e23db5_19_hasCssFunction)
HXDLIN(  19)		return ::haxe::ui::styles::CssFunctions_obj::_cssFunctions->exists(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CssFunctions_obj,hasCssFunction,return )

 ::Dynamic CssFunctions_obj::getCssFunction(::String name){
            	HX_STACKFRAME(&_hx_pos_7bb9121368e23db5_23_getCssFunction)
HXDLIN(  23)		return ::haxe::ui::styles::CssFunctions_obj::_cssFunctions->get(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CssFunctions_obj,getCssFunction,return )

 ::Dynamic CssFunctions_obj::calc(::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_7bb9121368e23db5_37_calc)
HXDLIN(  37)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CssFunctions_obj,calc,return )

 ::Dynamic CssFunctions_obj::min(::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_7bb9121368e23db5_42_min)
HXLINE(  43)		Float minv = ::Math_obj::POSITIVE_INFINITY;
HXLINE(  44)		{
HXLINE(  44)			int _g = 0;
HXDLIN(  44)			while((_g < vl->length)){
HXLINE(  44)				 ::haxe::ui::styles::Value val = vl->__get(_g).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(  44)				_g = (_g + 1);
HXLINE(  45)				 ::Dynamic num = ::haxe::ui::styles::ValueTools_obj::calcDimension(val);
HXLINE(  46)				if (::hx::IsNull( num )) {
HXLINE(  47)					return null();
            				}
            				else {
HXLINE(  48)					if (::hx::IsLess( num,minv )) {
HXLINE(  49)						minv = ( (Float)(num) );
            					}
            				}
            			}
            		}
HXLINE(  51)		return minv;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CssFunctions_obj,min,return )

 ::Dynamic CssFunctions_obj::max(::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_7bb9121368e23db5_54_max)
HXLINE(  55)		Float maxv = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(  56)		{
HXLINE(  56)			int _g = 0;
HXDLIN(  56)			while((_g < vl->length)){
HXLINE(  56)				 ::haxe::ui::styles::Value val = vl->__get(_g).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(  56)				_g = (_g + 1);
HXLINE(  57)				 ::Dynamic num = ::haxe::ui::styles::ValueTools_obj::calcDimension(val);
HXLINE(  58)				if (::hx::IsNull( num )) {
HXLINE(  59)					return null();
            				}
            				else {
HXLINE(  60)					if (::hx::IsGreater( num,maxv )) {
HXLINE(  61)						maxv = ( (Float)(num) );
            					}
            				}
            			}
            		}
HXLINE(  63)		return maxv;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CssFunctions_obj,max,return )

 ::Dynamic CssFunctions_obj::clamp(::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_7bb9121368e23db5_66_clamp)
HXLINE(  67)		 ::Dynamic valNum = ::haxe::ui::styles::ValueTools_obj::calcDimension(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >());
HXLINE(  68)		 ::Dynamic minNum = ::haxe::ui::styles::ValueTools_obj::calcDimension(vl->__get(1).StaticCast<  ::haxe::ui::styles::Value >());
HXLINE(  69)		 ::Dynamic maxNum = ::haxe::ui::styles::ValueTools_obj::calcDimension(vl->__get(2).StaticCast<  ::haxe::ui::styles::Value >());
HXLINE(  71)		bool _hx_tmp;
HXDLIN(  71)		bool _hx_tmp1;
HXDLIN(  71)		if (::hx::IsNotNull( valNum )) {
HXLINE(  71)			_hx_tmp1 = ::hx::IsNull( minNum );
            		}
            		else {
HXLINE(  71)			_hx_tmp1 = true;
            		}
HXDLIN(  71)		if (!(_hx_tmp1)) {
HXLINE(  71)			_hx_tmp = ::hx::IsNull( maxNum );
            		}
            		else {
HXLINE(  71)			_hx_tmp = true;
            		}
HXDLIN(  71)		if (_hx_tmp) {
HXLINE(  72)			return null();
            		}
            		else {
HXLINE(  73)			if (::hx::IsLess( valNum,minNum )) {
HXLINE(  74)				return minNum;
            			}
            			else {
HXLINE(  75)				if (::hx::IsGreater( valNum,maxNum )) {
HXLINE(  76)					return maxNum;
            				}
            				else {
HXLINE(  78)					return valNum;
            				}
            			}
            		}
HXLINE(  71)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CssFunctions_obj,clamp,return )

 ::Dynamic CssFunctions_obj::platformColor(::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_7bb9121368e23db5_82_platformColor)
HXDLIN(  82)		 ::haxe::ui::core::Platform value = ::haxe::ui::core::Platform_obj::get_instance();
HXDLIN(  82)		return value->getColor(::haxe::ui::styles::ValueTools_obj::string(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CssFunctions_obj,platformColor,return )

 ::Dynamic CssFunctions_obj::themeIcon(::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_7bb9121368e23db5_86_themeIcon)
HXDLIN(  86)		 ::haxe::ui::themes::ThemeManager value = ::haxe::ui::themes::ThemeManager_obj::get_instance();
HXDLIN(  86)		return value->image(::haxe::ui::styles::ValueTools_obj::string(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CssFunctions_obj,themeIcon,return )

 ::Dynamic CssFunctions_obj::rgb(::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_7bb9121368e23db5_90_rgb)
HXDLIN(  90)		 ::Dynamic value = ::haxe::ui::styles::ValueTools_obj::_hx_int(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >());
HXDLIN(  90)		 ::Dynamic value1 = ::haxe::ui::styles::ValueTools_obj::_hx_int(vl->__get(1).StaticCast<  ::haxe::ui::styles::Value >());
HXDLIN(  90)		return ::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromComponents(( (int)(value) ),( (int)(value1) ),( (int)(::haxe::ui::styles::ValueTools_obj::_hx_int(vl->__get(2).StaticCast<  ::haxe::ui::styles::Value >())) ),0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CssFunctions_obj,rgb,return )

 ::Dynamic CssFunctions_obj::lookup(::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_7bb9121368e23db5_94_lookup)
HXDLIN(  94)		 ::haxe::ui::styles::StyleLookupMap _hx_tmp = ::haxe::ui::styles::StyleLookupMap_obj::get_instance();
HXDLIN(  94)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDynamic(_hx_tmp->get(::haxe::ui::styles::ValueTools_obj::string(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >())));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CssFunctions_obj,lookup,return )

 ::Dynamic CssFunctions_obj::lighten(::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_7bb9121368e23db5_97_lighten)
HXLINE(  98)		int color = ( (int)(::haxe::ui::styles::ValueTools_obj::_hx_int(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >())) );
HXLINE(  99)		int amount = ( (int)(::haxe::ui::styles::ValueTools_obj::_hx_int(vl->__get(1).StaticCast<  ::haxe::ui::styles::Value >())) );
HXLINE( 101)		 ::haxe::ui::util::HSL hsl = ::haxe::ui::util::ColorUtil_obj::toHSL(color);
HXLINE( 102)		Float diffL = (((( (Float)(100) ) - hsl->l) * ( (Float)(amount) )) / ( (Float)(100) ));
HXLINE( 104)		int newColor = ::haxe::ui::util::ColorUtil_obj::fromHSL(hsl->h,hsl->s,(hsl->l + diffL));
HXLINE( 106)		return newColor;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CssFunctions_obj,lighten,return )

 ::Dynamic CssFunctions_obj::darken(::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_7bb9121368e23db5_109_darken)
HXLINE( 110)		int color = ( (int)(::haxe::ui::styles::ValueTools_obj::_hx_int(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >())) );
HXLINE( 111)		int amount = ( (int)(::haxe::ui::styles::ValueTools_obj::_hx_int(vl->__get(1).StaticCast<  ::haxe::ui::styles::Value >())) );
HXLINE( 113)		 ::haxe::ui::util::HSL hsl = ::haxe::ui::util::ColorUtil_obj::toHSL(color);
HXLINE( 114)		Float diffL = ((hsl->l * ( (Float)(amount) )) / ( (Float)(100) ));
HXLINE( 116)		int newColor = ::haxe::ui::util::ColorUtil_obj::fromHSL(hsl->h,hsl->s,(hsl->l - diffL));
HXLINE( 118)		return newColor;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CssFunctions_obj,darken,return )


CssFunctions_obj::CssFunctions_obj()
{
}

bool CssFunctions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { outValue = min_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"max") ) { outValue = max_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rgb") ) { outValue = rgb_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"calc") ) { outValue = calc_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clamp") ) { outValue = clamp_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lookup") ) { outValue = lookup_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"darken") ) { outValue = darken_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lighten") ) { outValue = lighten_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"themeIcon") ) { outValue = themeIcon_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_cssFunctions") ) { outValue = ( _cssFunctions ); return true; }
		if (HX_FIELD_EQ(inName,"platformColor") ) { outValue = platformColor_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hasCssFunction") ) { outValue = hasCssFunction_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCssFunction") ) { outValue = getCssFunction_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registerCssFunction") ) { outValue = registerCssFunction_dyn(); return true; }
	}
	return false;
}

bool CssFunctions_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_cssFunctions") ) { _cssFunctions=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CssFunctions_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CssFunctions_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &CssFunctions_obj::_cssFunctions,HX_("_cssFunctions",f7,e8,a9,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CssFunctions_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CssFunctions_obj::_cssFunctions,"_cssFunctions");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CssFunctions_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CssFunctions_obj::_cssFunctions,"_cssFunctions");
};

#endif

::hx::Class CssFunctions_obj::__mClass;

static ::String CssFunctions_obj_sStaticFields[] = {
	HX_("_cssFunctions",f7,e8,a9,ea),
	HX_("registerCssFunction",58,fc,fd,9f),
	HX_("hasCssFunction",c1,28,78,d9),
	HX_("getCssFunction",05,39,8c,6f),
	HX_("calc",95,18,ba,41),
	HX_("min",92,11,53,00),
	HX_("max",a4,0a,53,00),
	HX_("clamp",fb,72,58,48),
	HX_("platformColor",b0,85,0c,07),
	HX_("themeIcon",22,ca,c4,26),
	HX_("rgb",0d,db,56,00),
	HX_("lookup",7a,a2,b5,61),
	HX_("lighten",bf,4a,e3,19),
	HX_("darken",5f,36,3a,21),
	::String(null())
};

void CssFunctions_obj::__register()
{
	CssFunctions_obj _hx_dummy;
	CssFunctions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.CssFunctions",32,dc,90,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CssFunctions_obj::__GetStatic;
	__mClass->mSetStaticField = &CssFunctions_obj::__SetStatic;
	__mClass->mMarkFunc = CssFunctions_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CssFunctions_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CssFunctions_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CssFunctions_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CssFunctions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CssFunctions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CssFunctions_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_7bb9121368e23db5_12_boot)
HXDLIN(  12)		_cssFunctions =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
