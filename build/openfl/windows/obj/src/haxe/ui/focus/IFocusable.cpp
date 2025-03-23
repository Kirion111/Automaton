#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif

namespace haxe{
namespace ui{
namespace focus{


static ::String IFocusable_obj_sMemberFields[] = {
	HX_("get_focus",2f,bc,32,48),
	HX_("set_focus",3b,a8,83,2b),
	HX_("get_allowFocus",d8,a2,4a,a5),
	HX_("set_allowFocus",4c,8b,6a,c5),
	HX_("get_autoFocus",c0,71,f8,a3),
	HX_("set_autoFocus",cc,53,fe,e8),
	HX_("get_disabled",85,f5,1d,31),
	HX_("set_disabled",f9,18,17,46),
	::String(null()) };

::hx::Class IFocusable_obj::__mClass;

void IFocusable_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.focus.IFocusable",d1,63,92,66);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFocusable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x04f087c7 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace focus
