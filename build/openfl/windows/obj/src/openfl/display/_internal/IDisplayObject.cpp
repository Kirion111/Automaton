#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_IDisplayObject
#include <openfl/display/_internal/IDisplayObject.h>
#endif

namespace openfl{
namespace display{
namespace _internal{


static ::String IDisplayObject_obj_sMemberFields[] = {
	HX_("__renderFlash",5a,a3,b5,16),
	::String(null()) };

::hx::Class IDisplayObject_obj::__mClass;

void IDisplayObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.IDisplayObject",74,dc,a1,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IDisplayObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x4a12e282 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
