#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_Formats
#include <haxe/ui/locale/Formats.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StringUtil
#include <haxe/ui/util/StringUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_4_uncapitalizeFirstLetter,"haxe.ui.util.StringUtil","uncapitalizeFirstLetter",0xf85d5430,"haxe.ui.util.StringUtil.uncapitalizeFirstLetter","haxe/ui/util/StringUtil.hx",4,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_9_capitalizeFirstLetter,"haxe.ui.util.StringUtil","capitalizeFirstLetter",0x3603c169,"haxe.ui.util.StringUtil.capitalizeFirstLetter","haxe/ui/util/StringUtil.hx",9,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_15_capitalizeHyphens,"haxe.ui.util.StringUtil","capitalizeHyphens",0x495322f4,"haxe.ui.util.StringUtil.capitalizeHyphens","haxe/ui/util/StringUtil.hx",15,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_18_capitalizeDelim,"haxe.ui.util.StringUtil","capitalizeDelim",0xbc1dca62,"haxe.ui.util.StringUtil.capitalizeDelim","haxe/ui/util/StringUtil.hx",18,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_32_toDashes,"haxe.ui.util.StringUtil","toDashes",0x514906fc,"haxe.ui.util.StringUtil.toDashes","haxe/ui/util/StringUtil.hx",32,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_30_toDashes,"haxe.ui.util.StringUtil","toDashes",0x514906fc,"haxe.ui.util.StringUtil.toDashes","haxe/ui/util/StringUtil.hx",30,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_43_splitOnCapitals,"haxe.ui.util.StringUtil","splitOnCapitals",0xae30d9c3,"haxe.ui.util.StringUtil.splitOnCapitals","haxe/ui/util/StringUtil.hx",43,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_46_replaceVars,"haxe.ui.util.StringUtil","replaceVars",0xb30793bf,"haxe.ui.util.StringUtil.replaceVars","haxe/ui/util/StringUtil.hx",46,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_55_rpad,"haxe.ui.util.StringUtil","rpad",0x54709882,"haxe.ui.util.StringUtil.rpad","haxe/ui/util/StringUtil.hx",55,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_62_padDecimal,"haxe.ui.util.StringUtil","padDecimal",0x69789e9f,"haxe.ui.util.StringUtil.padDecimal","haxe/ui/util/StringUtil.hx",62,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_79_countTokens,"haxe.ui.util.StringUtil","countTokens",0x20a79f48,"haxe.ui.util.StringUtil.countTokens","haxe/ui/util/StringUtil.hx",79,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_92_formatNumber,"haxe.ui.util.StringUtil","formatNumber",0xacdd0ac1,"haxe.ui.util.StringUtil.formatNumber","haxe/ui/util/StringUtil.hx",92,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_87_boot,"haxe.ui.util.StringUtil","boot",0x49dc7893,"haxe.ui.util.StringUtil.boot","haxe/ui/util/StringUtil.hx",87,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_88_boot,"haxe.ui.util.StringUtil","boot",0x49dc7893,"haxe.ui.util.StringUtil.boot","haxe/ui/util/StringUtil.hx",88,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_89_boot,"haxe.ui.util.StringUtil","boot",0x49dc7893,"haxe.ui.util.StringUtil.boot","haxe/ui/util/StringUtil.hx",89,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_90_boot,"haxe.ui.util.StringUtil","boot",0x49dc7893,"haxe.ui.util.StringUtil.boot","haxe/ui/util/StringUtil.hx",90,0x14027730)
namespace haxe{
namespace ui{
namespace util{

void StringUtil_obj::__construct() { }

Dynamic StringUtil_obj::__CreateEmpty() { return new StringUtil_obj; }

void *StringUtil_obj::_hx_vtable = 0;

Dynamic StringUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringUtil_obj > _hx_result = new StringUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x36d67457;
}

::String StringUtil_obj::uncapitalizeFirstLetter(::String s){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_4_uncapitalizeFirstLetter)
HXLINE(   5)		::String s1 = s.substr(0,1).toLowerCase();
HXDLIN(   5)		s = (s1 + s.substr(1,s.length));
HXLINE(   6)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringUtil_obj,uncapitalizeFirstLetter,return )

::String StringUtil_obj::capitalizeFirstLetter(::String s){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_9_capitalizeFirstLetter)
HXLINE(  10)		::String s1 = s.substr(0,1).toUpperCase();
HXDLIN(  10)		s = (s1 + s.substr(1,s.length));
HXLINE(  11)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringUtil_obj,capitalizeFirstLetter,return )

::String StringUtil_obj::capitalizeHyphens(::String s){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_15_capitalizeHyphens)
HXDLIN(  15)		return ::haxe::ui::util::StringUtil_obj::capitalizeDelim(s,HX_("-",2d,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringUtil_obj,capitalizeHyphens,return )

::String StringUtil_obj::capitalizeDelim(::String s,::String d){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_18_capitalizeDelim)
HXLINE(  19)		::String r = s;
HXLINE(  20)		int n = r.indexOf(d,null());
HXLINE(  21)		while((n != -1)){
HXLINE(  22)			::String before = r.substr(0,n);
HXLINE(  23)			::String after = r.substr((n + 1),r.length);
HXLINE(  24)			r = (before + ::haxe::ui::util::StringUtil_obj::capitalizeFirstLetter(after));
HXLINE(  25)			n = r.indexOf(d,(n + 1));
            		}
HXLINE(  27)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringUtil_obj,capitalizeDelim,return )

::String StringUtil_obj::toDashes(::String s,::hx::Null< bool >  __o_toLower){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::String _hx_run( ::EReg re){
            			HX_GC_STACKFRAME(&_hx_pos_276022ad0c305d13_32_toDashes)
HXLINE(  32)			return ((HX_("",00,00,00,00) + re->matched(1)) + HX_("-",2d,00,00,00));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		bool toLower = __o_toLower.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_276022ad0c305d13_30_toDashes)
HXLINE(  31)		::String s1 =  ::EReg_obj::__alloc( HX_CTX ,HX_("([a-zA-Z])(?=[A-Z])",86,7a,7c,3f),HX_("g",67,00,00,00))->map(s, ::Dynamic(new _hx_Closure_0()));
HXLINE(  35)		if ((toLower == true)) {
HXLINE(  36)			s1 = s1.toLowerCase();
            		}
HXLINE(  39)		return s1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringUtil_obj,toDashes,return )

::Array< ::String > StringUtil_obj::splitOnCapitals(::String s,::hx::Null< bool >  __o_toLower){
            		bool toLower = __o_toLower.Default(true);
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_43_splitOnCapitals)
HXDLIN(  43)		return ::haxe::ui::util::StringUtil_obj::toDashes(s,toLower).split(HX_("-",2d,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringUtil_obj,splitOnCapitals,return )

::String StringUtil_obj::replaceVars(::String s, ::haxe::ds::StringMap params){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_46_replaceVars)
HXLINE(  47)		if (::hx::IsNotNull( params )) {
HXLINE(  48)			 ::Dynamic k = params->keys();
HXDLIN(  48)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  48)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  49)				s = ::StringTools_obj::replace(s,((HX_("${",d7,1f,00,00) + k1) + HX_("}",7d,00,00,00)),( (::String)(params->get(k1)) ));
            			}
            		}
HXLINE(  52)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringUtil_obj,replaceVars,return )

::String StringUtil_obj::rpad(::String s,int count,::String __o_c){
            		::String c = __o_c;
            		if (::hx::IsNull(__o_c)) c = HX_(" ",20,00,00,00);
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_55_rpad)
HXLINE(  56)		{
HXLINE(  56)			int _g = 0;
HXDLIN(  56)			int _g1 = count;
HXDLIN(  56)			while((_g < _g1)){
HXLINE(  56)				_g = (_g + 1);
HXDLIN(  56)				int i = (_g - 1);
HXLINE(  57)				s = (s + c);
            			}
            		}
HXLINE(  59)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringUtil_obj,rpad,return )

::String StringUtil_obj::padDecimal(Float v, ::Dynamic precision){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_62_padDecimal)
HXLINE(  63)		::String s = ::Std_obj::string(v);
HXLINE(  64)		bool _hx_tmp;
HXDLIN(  64)		if (::hx::IsNotNull( precision )) {
HXLINE(  64)			_hx_tmp = ::hx::IsLessEq( precision,0 );
            		}
            		else {
HXLINE(  64)			_hx_tmp = true;
            		}
HXDLIN(  64)		if (_hx_tmp) {
HXLINE(  65)			return s;
            		}
HXLINE(  68)		int n = s.indexOf(HX_(".",2e,00,00,00),null());
HXLINE(  69)		if ((n == -1)) {
HXLINE(  70)			n = s.length;
HXLINE(  71)			s = (s + HX_(".",2e,00,00,00));
            		}
HXLINE(  74)		int delta = (( (int)(precision) ) - ((s.length - n) - 1));
HXLINE(  76)		return ::haxe::ui::util::StringUtil_obj::rpad(s,delta,HX_("0",30,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringUtil_obj,padDecimal,return )

int StringUtil_obj::countTokens(::String s,::String token){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_79_countTokens)
HXLINE(  80)		bool _hx_tmp;
HXDLIN(  80)		if (::hx::IsNotNull( s )) {
HXLINE(  80)			_hx_tmp = (s == HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  80)			_hx_tmp = true;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  81)			return 0;
            		}
HXLINE(  83)		return (s.split(token)->length - 1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringUtil_obj,countTokens,return )

 ::EReg StringUtil_obj::humanReadableRegex;

int StringUtil_obj::THOUSAND;

int StringUtil_obj::MILLION;

int StringUtil_obj::BILLION;

::String StringUtil_obj::formatNumber(Float n,::hx::Null< int >  __o_precision,::hx::Null< bool >  __o_standardNotation,::hx::Null< bool >  __o_includeSpace){
            		int precision = __o_precision.Default(0);
            		bool standardNotation = __o_standardNotation.Default(true);
            		bool includeSpace = __o_includeSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_92_formatNumber)
HXLINE(  93)		::String s = ::Std_obj::string(n);
HXLINE(  95)		if (standardNotation) {
HXLINE(  96)			Float a = ::Math_obj::abs(n);
HXLINE(  97)			Float i = n;
HXLINE(  98)			::String suffix = HX_("",00,00,00,00);
HXLINE(  99)			bool _hx_tmp;
HXDLIN(  99)			if ((a >= 0)) {
HXLINE(  99)				_hx_tmp = (a < 1000);
            			}
            			else {
HXLINE(  99)				_hx_tmp = false;
            			}
HXDLIN(  99)			if (_hx_tmp) {
HXLINE( 100)				suffix = HX_("",00,00,00,00);
HXLINE( 101)				i = n;
            			}
            			else {
HXLINE( 102)				bool _hx_tmp;
HXDLIN( 102)				if ((a >= 1000)) {
HXLINE( 102)					_hx_tmp = (a < 1000000);
            				}
            				else {
HXLINE( 102)					_hx_tmp = false;
            				}
HXDLIN( 102)				if (_hx_tmp) {
HXLINE( 103)					suffix = HX_("K",4b,00,00,00);
HXLINE( 104)					i = (n / ( (Float)(1000) ));
            				}
            				else {
HXLINE( 105)					bool _hx_tmp;
HXDLIN( 105)					if ((a >= 1000000)) {
HXLINE( 105)						_hx_tmp = (a < (int)1000000000);
            					}
            					else {
HXLINE( 105)						_hx_tmp = false;
            					}
HXDLIN( 105)					if (_hx_tmp) {
HXLINE( 106)						suffix = HX_("M",4d,00,00,00);
HXLINE( 107)						i = (n / ( (Float)(1000000) ));
            					}
            					else {
HXLINE( 109)						suffix = HX_("B",42,00,00,00);
HXLINE( 110)						i = (n / ( (Float)((int)1000000000) ));
            					}
            				}
            			}
HXLINE( 113)			bool _hx_tmp1;
HXDLIN( 113)			if ((suffix.length != 0)) {
HXLINE( 113)				_hx_tmp1 = includeSpace;
            			}
            			else {
HXLINE( 113)				_hx_tmp1 = false;
            			}
HXDLIN( 113)			if (_hx_tmp1) {
HXLINE( 114)				suffix = (HX_(" ",20,00,00,00) + suffix);
            			}
HXLINE( 116)			i = (::Math_obj::fround((i * ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) )))) / ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) )));
HXLINE( 117)			s = ::Std_obj::string(i);
HXLINE( 118)			int p = s.indexOf(HX_(".",2e,00,00,00),null());
HXLINE( 119)			bool _hx_tmp2;
HXDLIN( 119)			if ((p == -1)) {
HXLINE( 119)				_hx_tmp2 = (precision > 0);
            			}
            			else {
HXLINE( 119)				_hx_tmp2 = false;
            			}
HXDLIN( 119)			if (_hx_tmp2) {
HXLINE( 120)				p = s.length;
HXLINE( 121)				s = (s + HX_(".",2e,00,00,00));
            			}
HXLINE( 123)			s = ::StringTools_obj::rpad(s,HX_("0",30,00,00,00),((p + precision) + 1));
HXLINE( 124)			s = (s + suffix);
            		}
            		else {
HXLINE( 126)			 ::EReg s1 = ::haxe::ui::util::StringUtil_obj::humanReadableRegex;
HXDLIN( 126)			s = s1->replace(s,::haxe::ui::locale::Formats_obj::get_thousandsSeparator());
            		}
HXLINE( 129)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(StringUtil_obj,formatNumber,return )


StringUtil_obj::StringUtil_obj()
{
}

bool StringUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rpad") ) { outValue = rpad_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toDashes") ) { outValue = toDashes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"padDecimal") ) { outValue = padDecimal_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"replaceVars") ) { outValue = replaceVars_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"countTokens") ) { outValue = countTokens_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"formatNumber") ) { outValue = formatNumber_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"capitalizeDelim") ) { outValue = capitalizeDelim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"splitOnCapitals") ) { outValue = splitOnCapitals_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"capitalizeHyphens") ) { outValue = capitalizeHyphens_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"humanReadableRegex") ) { outValue = ( humanReadableRegex ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"capitalizeFirstLetter") ) { outValue = capitalizeFirstLetter_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"uncapitalizeFirstLetter") ) { outValue = uncapitalizeFirstLetter_dyn(); return true; }
	}
	return false;
}

bool StringUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"humanReadableRegex") ) { humanReadableRegex=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StringUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo StringUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(void *) &StringUtil_obj::humanReadableRegex,HX_("humanReadableRegex",ca,6e,b5,ae)},
	{::hx::fsInt,(void *) &StringUtil_obj::THOUSAND,HX_("THOUSAND",de,f4,e5,34)},
	{::hx::fsInt,(void *) &StringUtil_obj::MILLION,HX_("MILLION",4c,06,ea,a6)},
	{::hx::fsInt,(void *) &StringUtil_obj::BILLION,HX_("BILLION",01,ec,7d,dd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void StringUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringUtil_obj::humanReadableRegex,"humanReadableRegex");
	HX_MARK_MEMBER_NAME(StringUtil_obj::THOUSAND,"THOUSAND");
	HX_MARK_MEMBER_NAME(StringUtil_obj::MILLION,"MILLION");
	HX_MARK_MEMBER_NAME(StringUtil_obj::BILLION,"BILLION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringUtil_obj::humanReadableRegex,"humanReadableRegex");
	HX_VISIT_MEMBER_NAME(StringUtil_obj::THOUSAND,"THOUSAND");
	HX_VISIT_MEMBER_NAME(StringUtil_obj::MILLION,"MILLION");
	HX_VISIT_MEMBER_NAME(StringUtil_obj::BILLION,"BILLION");
};

#endif

::hx::Class StringUtil_obj::__mClass;

static ::String StringUtil_obj_sStaticFields[] = {
	HX_("uncapitalizeFirstLetter",f1,67,13,d0),
	HX_("capitalizeFirstLetter",ea,b2,39,df),
	HX_("capitalizeHyphens",f5,ff,ef,d2),
	HX_("capitalizeDelim",23,b5,d9,2e),
	HX_("toDashes",1b,ce,1f,49),
	HX_("splitOnCapitals",84,c4,ec,20),
	HX_("replaceVars",00,ca,e4,62),
	HX_("rpad",21,a4,af,4b),
	HX_("padDecimal",7e,ab,e6,19),
	HX_("countTokens",89,d5,84,d0),
	HX_("humanReadableRegex",ca,6e,b5,ae),
	HX_("THOUSAND",de,f4,e5,34),
	HX_("MILLION",4c,06,ea,a6),
	HX_("BILLION",01,ec,7d,dd),
	HX_("formatNumber",60,4d,8f,de),
	::String(null())
};

void StringUtil_obj::__register()
{
	StringUtil_obj _hx_dummy;
	StringUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.StringUtil",ad,c7,99,39);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &StringUtil_obj::__SetStatic;
	__mClass->mMarkFunc = StringUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StringUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StringUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StringUtil_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_276022ad0c305d13_87_boot)
HXDLIN(  87)		humanReadableRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\B(?=(\\d{3})+(?!\\d))",3b,c4,61,9f),HX_("g",67,00,00,00));
            	}
{
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_88_boot)
HXDLIN(  88)		THOUSAND = 1000;
            	}
{
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_89_boot)
HXDLIN(  89)		MILLION = 1000000;
            	}
{
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_90_boot)
HXDLIN(  90)		BILLION = (int)1000000000;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
