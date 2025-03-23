#ifndef INCLUDED_haxe_ui_locale__LocaleString_LocaleStringPart
#define INCLUDED_haxe_ui_locale__LocaleString_LocaleStringPart

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,locale,LocaleStringExpressionBlock)
HX_DECLARE_CLASS4(haxe,ui,locale,_LocaleString,LocaleStringPart)
namespace haxe{
namespace ui{
namespace locale{
namespace _LocaleString{


class LocaleStringPart_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef LocaleStringPart_obj OBJ_;

	public:
		LocaleStringPart_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.ui.locale._LocaleString.LocaleStringPart",a4,48,c6,e9); }
		::String __ToString() const { return HX_("LocaleStringPart.",b0,97,85,a9) + _hx_tag; }

		static ::haxe::ui::locale::_LocaleString::LocaleStringPart ExpressionBlock( ::haxe::ui::locale::LocaleStringExpressionBlock block);
		static ::Dynamic ExpressionBlock_dyn();
		static ::haxe::ui::locale::_LocaleString::LocaleStringPart Literal(::String s);
		static ::Dynamic Literal_dyn();
};

} // end namespace haxe
} // end namespace ui
} // end namespace locale
} // end namespace _LocaleString

#endif /* INCLUDED_haxe_ui_locale__LocaleString_LocaleStringPart */ 
