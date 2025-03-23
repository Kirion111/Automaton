#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_animation_util_PropertyDetails
#include <haxe/ui/styles/animation/util/PropertyDetails.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_44b0ea3dfecdba61_3_new,"haxe.ui.styles.animation.util.PropertyDetails","new",0x073355f7,"haxe.ui.styles.animation.util.PropertyDetails.new","haxe/ui/styles/animation/util/PropertyDetails.hx",3,0x2388fd38)
namespace haxe{
namespace ui{
namespace styles{
namespace animation{
namespace util{

void PropertyDetails_obj::__construct( ::Dynamic target,::String propertyName,Float start,Float change){
            	HX_STACKFRAME(&_hx_pos_44b0ea3dfecdba61_3_new)
HXLINE(   8)		this->lastValue = null();
HXLINE(  11)		this->target = target;
HXLINE(  12)		this->propertyName = propertyName;
HXLINE(  13)		this->start = start;
HXLINE(  14)		this->change = change;
            	}

Dynamic PropertyDetails_obj::__CreateEmpty() { return new PropertyDetails_obj; }

void *PropertyDetails_obj::_hx_vtable = 0;

Dynamic PropertyDetails_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PropertyDetails_obj > _hx_result = new PropertyDetails_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool PropertyDetails_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x63155a23;
}


PropertyDetails_obj::PropertyDetails_obj()
{
}

void PropertyDetails_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PropertyDetails);
	HX_MARK_MEMBER_NAME(change,"change");
	HX_MARK_MEMBER_NAME(propertyName,"propertyName");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(lastValue,"lastValue");
	HX_MARK_END_CLASS();
}

void PropertyDetails_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(change,"change");
	HX_VISIT_MEMBER_NAME(propertyName,"propertyName");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(lastValue,"lastValue");
}

::hx::Val PropertyDetails_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"change") ) { return ::hx::Val( change ); }
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastValue") ) { return ::hx::Val( lastValue ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"propertyName") ) { return ::hx::Val( propertyName ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PropertyDetails_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"change") ) { change=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastValue") ) { lastValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"propertyName") ) { propertyName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyDetails_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("change",70,91,72,b7));
	outFields->push(HX_("propertyName",40,35,e4,26));
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("lastValue",3b,ad,65,7e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PropertyDetails_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(PropertyDetails_obj,change),HX_("change",70,91,72,b7)},
	{::hx::fsString,(int)offsetof(PropertyDetails_obj,propertyName),HX_("propertyName",40,35,e4,26)},
	{::hx::fsFloat,(int)offsetof(PropertyDetails_obj,start),HX_("start",62,74,0b,84)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PropertyDetails_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PropertyDetails_obj,lastValue),HX_("lastValue",3b,ad,65,7e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PropertyDetails_obj_sStaticStorageInfo = 0;
#endif

static ::String PropertyDetails_obj_sMemberFields[] = {
	HX_("change",70,91,72,b7),
	HX_("propertyName",40,35,e4,26),
	HX_("start",62,74,0b,84),
	HX_("target",51,f3,ec,86),
	HX_("lastValue",3b,ad,65,7e),
	::String(null()) };

::hx::Class PropertyDetails_obj::__mClass;

void PropertyDetails_obj::__register()
{
	PropertyDetails_obj _hx_dummy;
	PropertyDetails_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.animation.util.PropertyDetails",85,8e,4d,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PropertyDetails_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PropertyDetails_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertyDetails_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertyDetails_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
} // end namespace util
