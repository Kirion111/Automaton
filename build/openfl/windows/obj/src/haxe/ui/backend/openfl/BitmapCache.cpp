#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_openfl_BitmapCache
#include <haxe/ui/backend/openfl/BitmapCache.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0f623e8733d3967a_22_new,"haxe.ui.backend.openfl.BitmapCache","new",0xf99b18f3,"haxe.ui.backend.openfl.BitmapCache.new","haxe/ui/backend/openfl/BitmapCache.hx",22,0x8ad2555d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f623e8733d3967a_26_get,"haxe.ui.backend.openfl.BitmapCache","get",0xf995c929,"haxe.ui.backend.openfl.BitmapCache.get","haxe/ui/backend/openfl/BitmapCache.hx",26,0x8ad2555d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f623e8733d3967a_32_set,"haxe.ui.backend.openfl.BitmapCache","set",0xf99ee435,"haxe.ui.backend.openfl.BitmapCache.set","haxe/ui/backend/openfl/BitmapCache.hx",32,0x8ad2555d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f623e8733d3967a_9_get_instance,"haxe.ui.backend.openfl.BitmapCache","get_instance",0x914d60ab,"haxe.ui.backend.openfl.BitmapCache.get_instance","haxe/ui/backend/openfl/BitmapCache.hx",9,0x8ad2555d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f623e8733d3967a_17_rectId,"haxe.ui.backend.openfl.BitmapCache","rectId",0xc390336c,"haxe.ui.backend.openfl.BitmapCache.rectId","haxe/ui/backend/openfl/BitmapCache.hx",17,0x8ad2555d)
namespace haxe{
namespace ui{
namespace backend{
namespace openfl{

void BitmapCache_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0f623e8733d3967a_22_new)
HXDLIN(  22)		this->_cache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic BitmapCache_obj::__CreateEmpty() { return new BitmapCache_obj; }

void *BitmapCache_obj::_hx_vtable = 0;

Dynamic BitmapCache_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BitmapCache_obj > _hx_result = new BitmapCache_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BitmapCache_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1bdc1075;
}

 ::openfl::display::BitmapData BitmapCache_obj::get(::String id){
            	HX_STACKFRAME(&_hx_pos_0f623e8733d3967a_26_get)
HXLINE(  27)		 ::openfl::display::BitmapData bmpData = ( ( ::openfl::display::BitmapData)(this->_cache->get(id)) );
HXLINE(  28)		return bmpData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapCache_obj,get,return )

void BitmapCache_obj::set(::String id, ::openfl::display::BitmapData bmpData){
            	HX_STACKFRAME(&_hx_pos_0f623e8733d3967a_32_set)
HXDLIN(  32)		this->_cache->set(id,bmpData);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BitmapCache_obj,set,(void))

 ::haxe::ui::backend::openfl::BitmapCache BitmapCache_obj::_instance;

 ::haxe::ui::backend::openfl::BitmapCache BitmapCache_obj::instance;

 ::haxe::ui::backend::openfl::BitmapCache BitmapCache_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_0f623e8733d3967a_9_get_instance)
HXLINE(  10)		if (::hx::IsNull( ::haxe::ui::backend::openfl::BitmapCache_obj::_instance )) {
HXLINE(  11)			::haxe::ui::backend::openfl::BitmapCache_obj::_instance =  ::haxe::ui::backend::openfl::BitmapCache_obj::__alloc( HX_CTX );
            		}
HXLINE(  13)		return ::haxe::ui::backend::openfl::BitmapCache_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BitmapCache_obj,get_instance,return )

::String BitmapCache_obj::rectId( ::openfl::geom::Rectangle rc){
            	HX_STACKFRAME(&_hx_pos_0f623e8733d3967a_17_rectId)
HXDLIN(  17)		::String _hx_tmp = (rc->get_left() + HX_("_",5f,00,00,00));
HXDLIN(  17)		::String _hx_tmp1 = ((_hx_tmp + rc->get_top()) + HX_("_",5f,00,00,00));
HXDLIN(  17)		return (((_hx_tmp1 + rc->width) + HX_("_",5f,00,00,00)) + rc->height);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapCache_obj,rectId,return )


::hx::ObjectPtr< BitmapCache_obj > BitmapCache_obj::__new() {
	::hx::ObjectPtr< BitmapCache_obj > __this = new BitmapCache_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BitmapCache_obj > BitmapCache_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BitmapCache_obj *__this = (BitmapCache_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BitmapCache_obj), true, "haxe.ui.backend.openfl.BitmapCache"));
	*(void **)__this = BitmapCache_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BitmapCache_obj::BitmapCache_obj()
{
}

void BitmapCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapCache);
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_END_CLASS();
}

void BitmapCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
}

::hx::Val BitmapCache_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { return ::hx::Val( _cache ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BitmapCache_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"rectId") ) { outValue = rectId_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val BitmapCache_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapCache_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::backend::openfl::BitmapCache >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::backend::openfl::BitmapCache >(); return true; }
	}
	return false;
}

void BitmapCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_cache",83,e1,fb,3c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BitmapCache_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(BitmapCache_obj,_cache),HX_("_cache",83,e1,fb,3c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo BitmapCache_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::backend::openfl::BitmapCache */ ,(void *) &BitmapCache_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ui::backend::openfl::BitmapCache */ ,(void *) &BitmapCache_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String BitmapCache_obj_sMemberFields[] = {
	HX_("_cache",83,e1,fb,3c),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

static void BitmapCache_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapCache_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(BitmapCache_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BitmapCache_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapCache_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(BitmapCache_obj::instance,"instance");
};

#endif

::hx::Class BitmapCache_obj::__mClass;

static ::String BitmapCache_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	HX_("rectId",1f,1e,f0,fd),
	::String(null())
};

void BitmapCache_obj::__register()
{
	BitmapCache_obj _hx_dummy;
	BitmapCache_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.openfl.BitmapCache",81,23,61,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapCache_obj::__GetStatic;
	__mClass->mSetStaticField = &BitmapCache_obj::__SetStatic;
	__mClass->mMarkFunc = BitmapCache_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BitmapCache_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BitmapCache_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BitmapCache_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BitmapCache_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapCache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapCache_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl
