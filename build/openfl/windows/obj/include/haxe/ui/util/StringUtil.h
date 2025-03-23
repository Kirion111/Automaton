#ifndef INCLUDED_haxe_ui_util_StringUtil
#define INCLUDED_haxe_ui_util_StringUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,util,StringUtil)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES StringUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StringUtil_obj OBJ_;
		StringUtil_obj();

	public:
		enum { _hx_ClassId = 0x36d67457 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.StringUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util.StringUtil"); }

		inline static ::hx::ObjectPtr< StringUtil_obj > __new() {
			::hx::ObjectPtr< StringUtil_obj > __this = new StringUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StringUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			StringUtil_obj *__this = (StringUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringUtil_obj), false, "haxe.ui.util.StringUtil"));
			*(void **)__this = StringUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StringUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringUtil",93,ed,5b,f6); }

		static void __boot();
		static ::String uncapitalizeFirstLetter(::String s);
		static ::Dynamic uncapitalizeFirstLetter_dyn();

		static ::String capitalizeFirstLetter(::String s);
		static ::Dynamic capitalizeFirstLetter_dyn();

		static ::String capitalizeHyphens(::String s);
		static ::Dynamic capitalizeHyphens_dyn();

		static ::String capitalizeDelim(::String s,::String d);
		static ::Dynamic capitalizeDelim_dyn();

		static ::String toDashes(::String s,::hx::Null< bool >  toLower);
		static ::Dynamic toDashes_dyn();

		static ::Array< ::String > splitOnCapitals(::String s,::hx::Null< bool >  toLower);
		static ::Dynamic splitOnCapitals_dyn();

		static ::String replaceVars(::String s, ::haxe::ds::StringMap params);
		static ::Dynamic replaceVars_dyn();

		static ::String rpad(::String s,int count,::String c);
		static ::Dynamic rpad_dyn();

		static ::String padDecimal(Float v, ::Dynamic precision);
		static ::Dynamic padDecimal_dyn();

		static int countTokens(::String s,::String token);
		static ::Dynamic countTokens_dyn();

		static  ::EReg humanReadableRegex;
		static int THOUSAND;
		static int MILLION;
		static int BILLION;
		static ::String formatNumber(Float n,::hx::Null< int >  precision,::hx::Null< bool >  standardNotation,::hx::Null< bool >  includeSpace);
		static ::Dynamic formatNumber_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_StringUtil */ 
