#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_openfl_filters_ContrastFilter
#include <haxe/ui/backend/openfl/filters/ContrastFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#include <openfl/filters/ColorMatrixFilter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6742914d47fc02d6_8_new,"haxe.ui.backend.openfl.filters.ContrastFilter","new",0xd351cf31,"haxe.ui.backend.openfl.filters.ContrastFilter.new","haxe/ui/backend/openfl/filters/ContrastFilter.hx",8,0x0a8330be)
namespace haxe{
namespace ui{
namespace backend{
namespace openfl{
namespace filters{

void ContrastFilter_obj::__construct(::hx::Null< Float >  __o_multiplier){
            		Float multiplier = __o_multiplier.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_6742914d47fc02d6_8_new)
HXLINE(  10)		Float s = multiplier;
HXLINE(  11)		Float o = (( (Float)(128) ) * (( (Float)(1) ) - s));
HXLINE(  13)		this->filter =  ::openfl::filters::ColorMatrixFilter_obj::__alloc( HX_CTX ,::Array_obj< Float >::__new(20)->init(0,s)->init(1,0)->init(2,0)->init(3,0)->init(4,o)->init(5,0)->init(6,s)->init(7,0)->init(8,0)->init(9,o)->init(10,0)->init(11,0)->init(12,s)->init(13,0)->init(14,o)->init(15,0)->init(16,0)->init(17,0)->init(18,1)->init(19,0));
            	}

Dynamic ContrastFilter_obj::__CreateEmpty() { return new ContrastFilter_obj; }

void *ContrastFilter_obj::_hx_vtable = 0;

Dynamic ContrastFilter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ContrastFilter_obj > _hx_result = new ContrastFilter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ContrastFilter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x102fee53;
}


::hx::ObjectPtr< ContrastFilter_obj > ContrastFilter_obj::__new(::hx::Null< Float >  __o_multiplier) {
	::hx::ObjectPtr< ContrastFilter_obj > __this = new ContrastFilter_obj();
	__this->__construct(__o_multiplier);
	return __this;
}

::hx::ObjectPtr< ContrastFilter_obj > ContrastFilter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_multiplier) {
	ContrastFilter_obj *__this = (ContrastFilter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ContrastFilter_obj), true, "haxe.ui.backend.openfl.filters.ContrastFilter"));
	*(void **)__this = ContrastFilter_obj::_hx_vtable;
	__this->__construct(__o_multiplier);
	return __this;
}

ContrastFilter_obj::ContrastFilter_obj()
{
}

void ContrastFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ContrastFilter);
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_END_CLASS();
}

void ContrastFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filter,"filter");
}

::hx::Val ContrastFilter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ContrastFilter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast<  ::openfl::filters::ColorMatrixFilter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ContrastFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("filter",b8,1f,35,85));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ContrastFilter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::filters::ColorMatrixFilter */ ,(int)offsetof(ContrastFilter_obj,filter),HX_("filter",b8,1f,35,85)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ContrastFilter_obj_sStaticStorageInfo = 0;
#endif

static ::String ContrastFilter_obj_sMemberFields[] = {
	HX_("filter",b8,1f,35,85),
	::String(null()) };

::hx::Class ContrastFilter_obj::__mClass;

void ContrastFilter_obj::__register()
{
	ContrastFilter_obj _hx_dummy;
	ContrastFilter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.openfl.filters.ContrastFilter",bf,62,34,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ContrastFilter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ContrastFilter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ContrastFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ContrastFilter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl
} // end namespace filters
