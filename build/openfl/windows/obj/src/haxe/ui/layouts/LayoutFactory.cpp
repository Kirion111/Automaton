#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#include <haxe/ui/layouts/LayoutFactory.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e6134b142d9c99f4_7_createFromName,"haxe.ui.layouts.LayoutFactory","createFromName",0xa5b41496,"haxe.ui.layouts.LayoutFactory.createFromName","haxe/ui/layouts/LayoutFactory.hx",7,0x59aaf4d6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6134b142d9c99f4_26_register,"haxe.ui.layouts.LayoutFactory","register",0x16eb4148,"haxe.ui.layouts.LayoutFactory.register","haxe/ui/layouts/LayoutFactory.hx",26,0x59aaf4d6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6134b142d9c99f4_30_lookupClass,"haxe.ui.layouts.LayoutFactory","lookupClass",0x9e7d8d99,"haxe.ui.layouts.LayoutFactory.lookupClass","haxe/ui/layouts/LayoutFactory.hx",30,0x59aaf4d6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6134b142d9c99f4_4_boot,"haxe.ui.layouts.LayoutFactory","boot",0x311c8897,"haxe.ui.layouts.LayoutFactory.boot","haxe/ui/layouts/LayoutFactory.hx",4,0x59aaf4d6)
namespace haxe{
namespace ui{
namespace layouts{

void LayoutFactory_obj::__construct() { }

Dynamic LayoutFactory_obj::__CreateEmpty() { return new LayoutFactory_obj; }

void *LayoutFactory_obj::_hx_vtable = 0;

Dynamic LayoutFactory_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LayoutFactory_obj > _hx_result = new LayoutFactory_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LayoutFactory_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08afed15;
}

 ::haxe::ds::StringMap LayoutFactory_obj::_map;

 ::haxe::ui::layouts::Layout LayoutFactory_obj::createFromName(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_e6134b142d9c99f4_7_createFromName)
HXLINE(   8)		::Dynamic this1 = ::haxe::ui::layouts::LayoutFactory_obj::_map;
HXDLIN(   8)		::String className = ( ( ::haxe::ds::StringMap)(this1) )->get_string(name.toLowerCase());
HXLINE(   9)		if (::hx::IsNull( className )) {
HXLINE(  10)			::haxe::Log_obj::trace(((HX_("WARNING: layout '",13,e3,b3,31) + name) + HX_("' not found",3c,4a,88,c3)),::hx::SourceInfo(HX_("haxe/ui/layouts/LayoutFactory.hx",d6,f4,aa,59),10,HX_("haxe.ui.layouts.LayoutFactory",29,b6,db,aa),HX_("createFromName",f1,bf,05,f9)));
HXLINE(  11)			return  ::haxe::ui::layouts::DefaultLayout_obj::__alloc( HX_CTX );
            		}
HXLINE(  14)		::hx::Class cls = ::Type_obj::resolveClass(className);
HXLINE(  15)		if (::hx::IsNull( cls )) {
HXLINE(  16)			::haxe::Log_obj::trace(((HX_("WARNING: layout '",13,e3,b3,31) + name) + HX_("' not found",3c,4a,88,c3)),::hx::SourceInfo(HX_("haxe/ui/layouts/LayoutFactory.hx",d6,f4,aa,59),16,HX_("haxe.ui.layouts.LayoutFactory",29,b6,db,aa),HX_("createFromName",f1,bf,05,f9)));
HXLINE(  17)			return  ::haxe::ui::layouts::DefaultLayout_obj::__alloc( HX_CTX );
            		}
HXLINE(  20)		 ::haxe::ui::layouts::Layout instance = ( ( ::haxe::ui::layouts::Layout)(::Type_obj::createInstance(cls,::cpp::VirtualArray_obj::__new(0))) );
HXLINE(  21)		return instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LayoutFactory_obj,createFromName,return )

void LayoutFactory_obj::_hx_register(::String name,::String className){
            	HX_STACKFRAME(&_hx_pos_e6134b142d9c99f4_26_register)
HXDLIN(  26)		::Dynamic this1 = ::haxe::ui::layouts::LayoutFactory_obj::_map;
HXDLIN(  26)		( ( ::haxe::ds::StringMap)(this1) )->set(name.toLowerCase(),className);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LayoutFactory_obj,_hx_register,(void))

::String LayoutFactory_obj::lookupClass(::String name){
            	HX_STACKFRAME(&_hx_pos_e6134b142d9c99f4_30_lookupClass)
HXDLIN(  30)		::Dynamic this1 = ::haxe::ui::layouts::LayoutFactory_obj::_map;
HXDLIN(  30)		return ( ( ::haxe::ds::StringMap)(this1) )->get_string(name.toLowerCase());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LayoutFactory_obj,lookupClass,return )


LayoutFactory_obj::LayoutFactory_obj()
{
}

bool LayoutFactory_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { outValue = ( _map ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { outValue = _hx_register_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lookupClass") ) { outValue = lookupClass_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createFromName") ) { outValue = createFromName_dyn(); return true; }
	}
	return false;
}

bool LayoutFactory_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LayoutFactory_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo LayoutFactory_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &LayoutFactory_obj::_map,HX_("_map",9d,4f,1e,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void LayoutFactory_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LayoutFactory_obj::_map,"_map");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LayoutFactory_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LayoutFactory_obj::_map,"_map");
};

#endif

::hx::Class LayoutFactory_obj::__mClass;

static ::String LayoutFactory_obj_sStaticFields[] = {
	HX_("_map",9d,4f,1e,3f),
	HX_("createFromName",f1,bf,05,f9),
	HX_("register",63,a6,9f,d0),
	HX_("lookupClass",5e,0b,af,c1),
	::String(null())
};

void LayoutFactory_obj::__register()
{
	LayoutFactory_obj _hx_dummy;
	LayoutFactory_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.LayoutFactory",29,b6,db,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LayoutFactory_obj::__GetStatic;
	__mClass->mSetStaticField = &LayoutFactory_obj::__SetStatic;
	__mClass->mMarkFunc = LayoutFactory_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LayoutFactory_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LayoutFactory_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LayoutFactory_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LayoutFactory_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LayoutFactory_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LayoutFactory_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_e6134b142d9c99f4_4_boot)
HXDLIN(   4)		_map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
