#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_openfl_FilterConverter
#include <haxe/ui/backend/openfl/FilterConverter.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_openfl_filters_ContrastFilter
#include <haxe/ui/backend/openfl/filters/ContrastFilter.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_openfl_filters_GrayscaleFilter
#include <haxe/ui/backend/openfl/filters/GrayscaleFilter.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_openfl_filters_HueRotateFilter
#include <haxe/ui/backend/openfl/filters/HueRotateFilter.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_openfl_filters_SaturateFilter
#include <haxe/ui/backend/openfl/filters/SaturateFilter.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_openfl_filters_TintFilter
#include <haxe/ui/backend/openfl/filters/TintFilter.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Blur
#include <haxe/ui/filters/Blur.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Contrast
#include <haxe/ui/filters/Contrast.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_DropShadow
#include <haxe/ui/filters/DropShadow.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Grayscale
#include <haxe/ui/filters/Grayscale.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_HueRotate
#include <haxe/ui/filters/HueRotate.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Saturate
#include <haxe/ui/filters/Saturate.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Tint
#include <haxe/ui/filters/Tint.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BlurFilter
#include <openfl/filters/BlurFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#include <openfl/filters/ColorMatrixFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_DropShadowFilter
#include <openfl/filters/DropShadowFilter.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b4a03d766f8dffa5_15_convertFilter,"haxe.ui.backend.openfl.FilterConverter","convertFilter",0x51c54493,"haxe.ui.backend.openfl.FilterConverter.convertFilter","haxe/ui/backend/openfl/FilterConverter.hx",15,0xbbf81308)
namespace haxe{
namespace ui{
namespace backend{
namespace openfl{

void FilterConverter_obj::__construct() { }

Dynamic FilterConverter_obj::__CreateEmpty() { return new FilterConverter_obj; }

void *FilterConverter_obj::_hx_vtable = 0;

Dynamic FilterConverter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FilterConverter_obj > _hx_result = new FilterConverter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FilterConverter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x61f10722;
}

 ::openfl::filters::BitmapFilter FilterConverter_obj::convertFilter( ::haxe::ui::filters::Filter input){
            	HX_GC_STACKFRAME(&_hx_pos_b4a03d766f8dffa5_15_convertFilter)
HXLINE(  16)		if (::hx::IsNull( input )) {
HXLINE(  17)			return null();
            		}
HXLINE(  19)		 ::openfl::filters::BitmapFilter output = null();
HXLINE(  23)		if (::Std_obj::isOfType(input,::hx::ClassOf< ::haxe::ui::filters::DropShadow >())) {
HXLINE(  24)			 ::haxe::ui::filters::DropShadow inputDropShadow = ::hx::TCast<  ::haxe::ui::filters::DropShadow >::cast(input);
HXLINE(  25)			output =  ::openfl::filters::DropShadowFilter_obj::__alloc( HX_CTX ,(inputDropShadow->distance + 1),inputDropShadow->angle,inputDropShadow->color,((Float).9),inputDropShadow->blurX,inputDropShadow->blurY,1,3,inputDropShadow->inner,null(),null());
            		}
            		else {
HXLINE(  34)			if (::Std_obj::isOfType(input,::hx::ClassOf< ::haxe::ui::filters::Blur >())) {
HXLINE(  35)				 ::haxe::ui::filters::Blur inputBlur = ::hx::TCast<  ::haxe::ui::filters::Blur >::cast(input);
HXLINE(  36)				output =  ::openfl::filters::BlurFilter_obj::__alloc( HX_CTX ,inputBlur->amount,inputBlur->amount,null());
            			}
            			else {
HXLINE(  37)				if (::Std_obj::isOfType(input,::hx::ClassOf< ::haxe::ui::filters::Grayscale >())) {
HXLINE(  38)					 ::haxe::ui::filters::Grayscale inputGrayscale = ::hx::TCast<  ::haxe::ui::filters::Grayscale >::cast(input);
HXLINE(  39)					output =  ::haxe::ui::backend::openfl::filters::GrayscaleFilter_obj::__alloc( HX_CTX ,(inputGrayscale->amount / ( (Float)(100) )))->filter;
            				}
            				else {
HXLINE(  40)					if (::Std_obj::isOfType(input,::hx::ClassOf< ::haxe::ui::filters::Tint >())) {
HXLINE(  41)						 ::haxe::ui::filters::Tint tint = ::hx::TCast<  ::haxe::ui::filters::Tint >::cast(input);
HXLINE(  42)						output =  ::haxe::ui::backend::openfl::filters::TintFilter_obj::__alloc( HX_CTX ,tint->color,tint->amount)->filter;
            					}
            					else {
HXLINE(  43)						if (::Std_obj::isOfType(input,::hx::ClassOf< ::haxe::ui::filters::HueRotate >())) {
HXLINE(  44)							 ::haxe::ui::filters::HueRotate inputHue = ::hx::TCast<  ::haxe::ui::filters::HueRotate >::cast(input);
HXLINE(  45)							output =  ::haxe::ui::backend::openfl::filters::HueRotateFilter_obj::__alloc( HX_CTX ,inputHue->angleDegree)->filter;
            						}
            						else {
HXLINE(  46)							if (::Std_obj::isOfType(input,::hx::ClassOf< ::haxe::ui::filters::Contrast >())) {
HXLINE(  47)								 ::haxe::ui::filters::Contrast contrast = ::hx::TCast<  ::haxe::ui::filters::Contrast >::cast(input);
HXLINE(  48)								output =  ::haxe::ui::backend::openfl::filters::ContrastFilter_obj::__alloc( HX_CTX ,contrast->multiplier)->filter;
            							}
            							else {
HXLINE(  49)								if (::Std_obj::isOfType(input,::hx::ClassOf< ::haxe::ui::filters::Saturate >())) {
HXLINE(  50)									 ::haxe::ui::filters::Saturate saturate = ::hx::TCast<  ::haxe::ui::filters::Saturate >::cast(input);
HXLINE(  51)									output =  ::haxe::ui::backend::openfl::filters::SaturateFilter_obj::__alloc( HX_CTX ,saturate->multiplier)->filter;
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  56)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterConverter_obj,convertFilter,return )


FilterConverter_obj::FilterConverter_obj()
{
}

bool FilterConverter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"convertFilter") ) { outValue = convertFilter_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FilterConverter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FilterConverter_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FilterConverter_obj::__mClass;

static ::String FilterConverter_obj_sStaticFields[] = {
	HX_("convertFilter",0b,0a,8f,c0),
	::String(null())
};

void FilterConverter_obj::__register()
{
	FilterConverter_obj _hx_dummy;
	FilterConverter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.openfl.FilterConverter",f6,bc,f4,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FilterConverter_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FilterConverter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FilterConverter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FilterConverter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FilterConverter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl
