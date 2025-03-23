#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_Dimension
#include <haxe/ui/styles/Dimension.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
namespace haxe{
namespace ui{
namespace styles{

::haxe::ui::styles::Value Value_obj::VBool(bool v)
{
	return ::hx::CreateEnum< Value_obj >(HX_("VBool",a0,93,6a,b0),2,1)->_hx_init(0,v);
}

::haxe::ui::styles::Value Value_obj::VCall(::String f,::Array< ::Dynamic> vl)
{
	return ::hx::CreateEnum< Value_obj >(HX_("VCall",14,28,09,b1),5,2)->_hx_init(0,f)->_hx_init(1,vl);
}

::haxe::ui::styles::Value Value_obj::VColor(int v)
{
	return ::hx::CreateEnum< Value_obj >(HX_("VColor",2d,e9,3a,40),4,1)->_hx_init(0,v);
}

::haxe::ui::styles::Value Value_obj::VComposite(::Array< ::Dynamic> vl)
{
	return ::hx::CreateEnum< Value_obj >(HX_("VComposite",d1,34,7c,4d),7,1)->_hx_init(0,vl);
}

::haxe::ui::styles::Value Value_obj::VConstant(::String v)
{
	return ::hx::CreateEnum< Value_obj >(HX_("VConstant",da,c3,68,5c),6,1)->_hx_init(0,v);
}

::haxe::ui::styles::Value Value_obj::VDimension( ::haxe::ui::styles::Dimension v)
{
	return ::hx::CreateEnum< Value_obj >(HX_("VDimension",30,60,eb,cf),3,1)->_hx_init(0,v);
}

::haxe::ui::styles::Value Value_obj::VNone;

::haxe::ui::styles::Value Value_obj::VNumber(Float v)
{
	return ::hx::CreateEnum< Value_obj >(HX_("VNumber",bf,df,44,ce),1,1)->_hx_init(0,v);
}

::haxe::ui::styles::Value Value_obj::VString(::String v)
{
	return ::hx::CreateEnum< Value_obj >(HX_("VString",c7,81,fa,3d),0,1)->_hx_init(0,v);
}

::haxe::ui::styles::Value Value_obj::VTime(Float v,::String unit)
{
	return ::hx::CreateEnum< Value_obj >(HX_("VTime",83,db,4b,bc),8,2)->_hx_init(0,v)->_hx_init(1,unit);
}

bool Value_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("VBool",a0,93,6a,b0)) { outValue = Value_obj::VBool_dyn(); return true; }
	if (inName==HX_("VCall",14,28,09,b1)) { outValue = Value_obj::VCall_dyn(); return true; }
	if (inName==HX_("VColor",2d,e9,3a,40)) { outValue = Value_obj::VColor_dyn(); return true; }
	if (inName==HX_("VComposite",d1,34,7c,4d)) { outValue = Value_obj::VComposite_dyn(); return true; }
	if (inName==HX_("VConstant",da,c3,68,5c)) { outValue = Value_obj::VConstant_dyn(); return true; }
	if (inName==HX_("VDimension",30,60,eb,cf)) { outValue = Value_obj::VDimension_dyn(); return true; }
	if (inName==HX_("VNone",2e,22,59,b8)) { outValue = Value_obj::VNone; return true; }
	if (inName==HX_("VNumber",bf,df,44,ce)) { outValue = Value_obj::VNumber_dyn(); return true; }
	if (inName==HX_("VString",c7,81,fa,3d)) { outValue = Value_obj::VString_dyn(); return true; }
	if (inName==HX_("VTime",83,db,4b,bc)) { outValue = Value_obj::VTime_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Value_obj)

int Value_obj::__FindIndex(::String inName)
{
	if (inName==HX_("VBool",a0,93,6a,b0)) return 2;
	if (inName==HX_("VCall",14,28,09,b1)) return 5;
	if (inName==HX_("VColor",2d,e9,3a,40)) return 4;
	if (inName==HX_("VComposite",d1,34,7c,4d)) return 7;
	if (inName==HX_("VConstant",da,c3,68,5c)) return 6;
	if (inName==HX_("VDimension",30,60,eb,cf)) return 3;
	if (inName==HX_("VNone",2e,22,59,b8)) return 9;
	if (inName==HX_("VNumber",bf,df,44,ce)) return 1;
	if (inName==HX_("VString",c7,81,fa,3d)) return 0;
	if (inName==HX_("VTime",83,db,4b,bc)) return 8;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VBool,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Value_obj,VCall,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VColor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VComposite,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VConstant,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VDimension,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VNumber,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VString,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Value_obj,VTime,return)

int Value_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("VBool",a0,93,6a,b0)) return 1;
	if (inName==HX_("VCall",14,28,09,b1)) return 2;
	if (inName==HX_("VColor",2d,e9,3a,40)) return 1;
	if (inName==HX_("VComposite",d1,34,7c,4d)) return 1;
	if (inName==HX_("VConstant",da,c3,68,5c)) return 1;
	if (inName==HX_("VDimension",30,60,eb,cf)) return 1;
	if (inName==HX_("VNone",2e,22,59,b8)) return 0;
	if (inName==HX_("VNumber",bf,df,44,ce)) return 1;
	if (inName==HX_("VString",c7,81,fa,3d)) return 1;
	if (inName==HX_("VTime",83,db,4b,bc)) return 2;
	return super::__FindArgCount(inName);
}

::hx::Val Value_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("VBool",a0,93,6a,b0)) return VBool_dyn();
	if (inName==HX_("VCall",14,28,09,b1)) return VCall_dyn();
	if (inName==HX_("VColor",2d,e9,3a,40)) return VColor_dyn();
	if (inName==HX_("VComposite",d1,34,7c,4d)) return VComposite_dyn();
	if (inName==HX_("VConstant",da,c3,68,5c)) return VConstant_dyn();
	if (inName==HX_("VDimension",30,60,eb,cf)) return VDimension_dyn();
	if (inName==HX_("VNone",2e,22,59,b8)) return VNone;
	if (inName==HX_("VNumber",bf,df,44,ce)) return VNumber_dyn();
	if (inName==HX_("VString",c7,81,fa,3d)) return VString_dyn();
	if (inName==HX_("VTime",83,db,4b,bc)) return VTime_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Value_obj_sStaticFields[] = {
	HX_("VString",c7,81,fa,3d),
	HX_("VNumber",bf,df,44,ce),
	HX_("VBool",a0,93,6a,b0),
	HX_("VDimension",30,60,eb,cf),
	HX_("VColor",2d,e9,3a,40),
	HX_("VCall",14,28,09,b1),
	HX_("VConstant",da,c3,68,5c),
	HX_("VComposite",d1,34,7c,4d),
	HX_("VTime",83,db,4b,bc),
	HX_("VNone",2e,22,59,b8),
	::String(null())
};

::hx::Class Value_obj::__mClass;

Dynamic __Create_Value_obj() { return new Value_obj; }

void Value_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.ui.styles.Value",17,3a,64,46), ::hx::TCanCast< Value_obj >,Value_obj_sStaticFields,0,
	&__Create_Value_obj, &__Create,
	&super::__SGetClass(), &CreateValue_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Value_obj::__GetStatic;
}

void Value_obj::__boot()
{
VNone = ::hx::CreateConstEnum< Value_obj >(HX_("VNone",2e,22,59,b8),9);
}


} // end namespace haxe
} // end namespace ui
} // end namespace styles
