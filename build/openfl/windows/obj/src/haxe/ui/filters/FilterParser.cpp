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
#ifndef INCLUDED_haxe_ui_filters_FilterParser
#include <haxe/ui/filters/FilterParser.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_CssFilters
#include <haxe/ui/styles/CssFilters.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_31bcc7ff180c92b7_6_parseFilter,"haxe.ui.filters.FilterParser","parseFilter",0xbacdfa59,"haxe.ui.filters.FilterParser.parseFilter","haxe/ui/filters/FilterParser.hx",6,0x8c53ed41)
namespace haxe{
namespace ui{
namespace filters{

void FilterParser_obj::__construct() { }

Dynamic FilterParser_obj::__CreateEmpty() { return new FilterParser_obj; }

void *FilterParser_obj::_hx_vtable = 0;

Dynamic FilterParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FilterParser_obj > _hx_result = new FilterParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FilterParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ed0f618;
}

 ::haxe::ui::filters::Filter FilterParser_obj::parseFilter(::cpp::VirtualArray filterDetails){
            	HX_STACKFRAME(&_hx_pos_31bcc7ff180c92b7_6_parseFilter)
HXLINE(   7)		 ::Dynamic filterName = filterDetails->shift();
HXLINE(   8)		if (!(::haxe::ui::styles::CssFilters_obj::_cssFilters->exists(( (::String)(filterName) )))) {
HXLINE(   9)			return null();
            		}
HXLINE(  12)		 ::Dynamic ctor = ::haxe::ui::styles::CssFilters_obj::_cssFilters->get(( (::String)(filterName) ));
HXLINE(  13)		 ::haxe::ui::filters::Filter filter = ( ( ::haxe::ui::filters::Filter)(ctor()) );
HXLINE(  14)		filter->parse(filterDetails);
HXLINE(  15)		return filter;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterParser_obj,parseFilter,return )


FilterParser_obj::FilterParser_obj()
{
}

bool FilterParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"parseFilter") ) { outValue = parseFilter_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FilterParser_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FilterParser_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FilterParser_obj::__mClass;

static ::String FilterParser_obj_sStaticFields[] = {
	HX_("parseFilter",4b,cc,71,00),
	::String(null())
};

void FilterParser_obj::__register()
{
	FilterParser_obj _hx_dummy;
	FilterParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.FilterParser",7c,31,b4,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FilterParser_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FilterParser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FilterParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FilterParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FilterParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
