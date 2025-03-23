#include <hxcpp.h>

#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_system__Locale_Locale_Impl_
#include <lime/system/_Locale/Locale_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_edbc5bc898b35f40_18__new,"lime.system._Locale.Locale_Impl_","_new",0xef04a55a,"lime.system._Locale.Locale_Impl_._new","lime/system/Locale.hx",18,0x3407735e)
HX_LOCAL_STACK_FRAME(_hx_pos_edbc5bc898b35f40_24_equals,"lime.system._Locale.Locale_Impl_","equals",0x60572e78,"lime.system._Locale.Locale_Impl_.equals","lime/system/Locale.hx",24,0x3407735e)
HX_LOCAL_STACK_FRAME(_hx_pos_edbc5bc898b35f40_56___init,"lime.system._Locale.Locale_Impl_","__init",0x9517de69,"lime.system._Locale.Locale_Impl_.__init","lime/system/Locale.hx",56,0x3407735e)
HX_LOCAL_STACK_FRAME(_hx_pos_edbc5bc898b35f40_92_get_language,"lime.system._Locale.Locale_Impl_","get_language",0xd286e55a,"lime.system._Locale.Locale_Impl_.get_language","lime/system/Locale.hx",92,0x3407735e)
HX_LOCAL_STACK_FRAME(_hx_pos_edbc5bc898b35f40_117_get_region,"lime.system._Locale.Locale_Impl_","get_region",0x0a6f8176,"lime.system._Locale.Locale_Impl_.get_region","lime/system/Locale.hx",117,0x3407735e)
HX_LOCAL_STACK_FRAME(_hx_pos_edbc5bc898b35f40_153_get_currentLocale,"lime.system._Locale.Locale_Impl_","get_currentLocale",0xf4af2971,"lime.system._Locale.Locale_Impl_.get_currentLocale","lime/system/Locale.hx",153,0x3407735e)
HX_LOCAL_STACK_FRAME(_hx_pos_edbc5bc898b35f40_160_set_currentLocale,"lime.system._Locale.Locale_Impl_","set_currentLocale",0x181d017d,"lime.system._Locale.Locale_Impl_.set_currentLocale","lime/system/Locale.hx",160,0x3407735e)
HX_LOCAL_STACK_FRAME(_hx_pos_edbc5bc898b35f40_167_get_systemLocale,"lime.system._Locale.Locale_Impl_","get_systemLocale",0x132deaeb,"lime.system._Locale.Locale_Impl_.get_systemLocale","lime/system/Locale.hx",167,0x3407735e)
namespace lime{
namespace _hx_system{
namespace _Locale{

void Locale_Impl__obj::__construct() { }

Dynamic Locale_Impl__obj::__CreateEmpty() { return new Locale_Impl__obj; }

void *Locale_Impl__obj::_hx_vtable = 0;

Dynamic Locale_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Locale_Impl__obj > _hx_result = new Locale_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Locale_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x386b48ef;
}

::String Locale_Impl__obj::currentLocale;

::String Locale_Impl__obj::_hx___systemLocale;

::String Locale_Impl__obj::_new(::String value){
            	HX_STACKFRAME(&_hx_pos_edbc5bc898b35f40_18__new)
HXDLIN(  18)		::String this1 = value;
HXDLIN(  18)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Locale_Impl__obj,_new,return )

bool Locale_Impl__obj::equals(::String a,::String b){
            	HX_STACKFRAME(&_hx_pos_edbc5bc898b35f40_24_equals)
HXLINE(  25)		::String language = ::lime::_hx_system::_Locale::Locale_Impl__obj::get_language(a);
HXLINE(  26)		::String region = ::lime::_hx_system::_Locale::Locale_Impl__obj::get_region(a);
HXLINE(  28)		::String language2 = ::lime::_hx_system::_Locale::Locale_Impl__obj::get_language(b);
HXLINE(  29)		::String region2 = ::lime::_hx_system::_Locale::Locale_Impl__obj::get_region(b);
HXLINE(  31)		bool languageMatch = (language == language2);
HXLINE(  32)		bool regionMatch = (region == region2);
HXLINE(  34)		bool _hx_tmp;
HXDLIN(  34)		bool _hx_tmp1;
HXDLIN(  34)		if (!(languageMatch)) {
HXLINE(  34)			_hx_tmp1 = ::hx::IsNotNull( language );
            		}
            		else {
HXLINE(  34)			_hx_tmp1 = false;
            		}
HXDLIN(  34)		if (_hx_tmp1) {
HXLINE(  34)			_hx_tmp = ::hx::IsNotNull( language2 );
            		}
            		else {
HXLINE(  34)			_hx_tmp = false;
            		}
HXDLIN(  34)		if (_hx_tmp) {
HXLINE(  36)			::String languageMatch1 = language.toLowerCase();
HXDLIN(  36)			languageMatch = (languageMatch1 == language2.toLowerCase());
            		}
HXLINE(  39)		bool _hx_tmp2;
HXDLIN(  39)		bool _hx_tmp3;
HXDLIN(  39)		if (!(regionMatch)) {
HXLINE(  39)			_hx_tmp3 = ::hx::IsNotNull( region );
            		}
            		else {
HXLINE(  39)			_hx_tmp3 = false;
            		}
HXDLIN(  39)		if (_hx_tmp3) {
HXLINE(  39)			_hx_tmp2 = ::hx::IsNotNull( region2 );
            		}
            		else {
HXLINE(  39)			_hx_tmp2 = false;
            		}
HXDLIN(  39)		if (_hx_tmp2) {
HXLINE(  41)			::String regionMatch1 = region.toLowerCase();
HXDLIN(  41)			regionMatch = (regionMatch1 == region2.toLowerCase());
            		}
HXLINE(  44)		if (languageMatch) {
HXLINE(  44)			return regionMatch;
            		}
            		else {
HXLINE(  44)			return false;
            		}
HXDLIN(  44)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Locale_Impl__obj,equals,return )

void Locale_Impl__obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_edbc5bc898b35f40_56___init)
HXDLIN(  56)		if (::hx::IsNull( ::lime::_hx_system::_Locale::Locale_Impl__obj::_hx___systemLocale )) {
HXLINE(  58)			::String locale = null();
HXLINE(  73)			locale = ( (::String)(::lime::_hx_system::CFFI_obj::load(HX_("lime",15,17,b3,47),HX_("lime_locale_get_system_locale",06,d8,a2,c2),0,null())()) );
HXLINE(  77)			if (::hx::IsNotNull( locale )) {
HXLINE(  79)				::lime::_hx_system::_Locale::Locale_Impl__obj::_hx___systemLocale = locale;
            			}
            			else {
HXLINE(  83)				::lime::_hx_system::_Locale::Locale_Impl__obj::_hx___systemLocale = HX_("en-US",02,7f,50,70);
            			}
HXLINE(  86)			::lime::_hx_system::_Locale::Locale_Impl__obj::set_currentLocale(::lime::_hx_system::_Locale::Locale_Impl__obj::_hx___systemLocale);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Locale_Impl__obj,_hx___init,(void))

::String Locale_Impl__obj::get_language(::String this1){
            	HX_STACKFRAME(&_hx_pos_edbc5bc898b35f40_92_get_language)
HXLINE(  93)		if (::hx::IsNotNull( this1 )) {
HXLINE(  95)			int index = this1.indexOf(HX_("_",5f,00,00,00),null());
HXLINE(  97)			if ((index > -1)) {
HXLINE(  99)				int dashIndex = this1.indexOf(HX_("-",2d,00,00,00),null());
HXLINE( 100)				bool _hx_tmp;
HXDLIN( 100)				if ((dashIndex > -1)) {
HXLINE( 100)					_hx_tmp = (dashIndex < index);
            				}
            				else {
HXLINE( 100)					_hx_tmp = false;
            				}
HXDLIN( 100)				if (_hx_tmp) {
HXLINE( 100)					index = dashIndex;
            				}
HXLINE( 102)				return this1.substring(0,index);
            			}
HXLINE( 105)			index = this1.indexOf(HX_("-",2d,00,00,00),null());
HXLINE( 107)			if ((index > -1)) {
HXLINE( 109)				return this1.substring(0,index);
            			}
            		}
HXLINE( 113)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Locale_Impl__obj,get_language,return )

::String Locale_Impl__obj::get_region(::String this1){
            	HX_STACKFRAME(&_hx_pos_edbc5bc898b35f40_117_get_region)
HXLINE( 118)		if (::hx::IsNotNull( this1 )) {
HXLINE( 120)			int underscoreIndex = this1.indexOf(HX_("_",5f,00,00,00),null());
HXLINE( 121)			int dotIndex = this1.indexOf(HX_(".",2e,00,00,00),null());
HXLINE( 122)			int dashIndex = this1.indexOf(HX_("-",2d,00,00,00),null());
HXLINE( 124)			if ((underscoreIndex > -1)) {
HXLINE( 126)				if ((dotIndex > -1)) {
HXLINE( 128)					return this1.substring((underscoreIndex + 1),dotIndex);
            				}
            				else {
HXLINE( 132)					return this1.substring((underscoreIndex + 1),null());
            				}
            			}
            			else {
HXLINE( 135)				if ((dashIndex > -1)) {
HXLINE( 137)					if ((dotIndex > -1)) {
HXLINE( 139)						return this1.substring((dashIndex + 1),dotIndex);
            					}
            					else {
HXLINE( 143)						return this1.substring((dashIndex + 1),null());
            					}
            				}
            			}
            		}
HXLINE( 148)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Locale_Impl__obj,get_region,return )

::String Locale_Impl__obj::get_currentLocale(){
            	HX_STACKFRAME(&_hx_pos_edbc5bc898b35f40_153_get_currentLocale)
HXLINE( 154)		::lime::_hx_system::_Locale::Locale_Impl__obj::_hx___init();
HXLINE( 156)		return ::lime::_hx_system::_Locale::Locale_Impl__obj::currentLocale;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Locale_Impl__obj,get_currentLocale,return )

::String Locale_Impl__obj::set_currentLocale(::String value){
            	HX_STACKFRAME(&_hx_pos_edbc5bc898b35f40_160_set_currentLocale)
HXLINE( 161)		::lime::_hx_system::_Locale::Locale_Impl__obj::_hx___init();
HXLINE( 163)		return (::lime::_hx_system::_Locale::Locale_Impl__obj::currentLocale = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Locale_Impl__obj,set_currentLocale,return )

::String Locale_Impl__obj::get_systemLocale(){
            	HX_STACKFRAME(&_hx_pos_edbc5bc898b35f40_167_get_systemLocale)
HXLINE( 168)		::lime::_hx_system::_Locale::Locale_Impl__obj::_hx___init();
HXLINE( 170)		return ::lime::_hx_system::_Locale::Locale_Impl__obj::_hx___systemLocale;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Locale_Impl__obj,get_systemLocale,return )


Locale_Impl__obj::Locale_Impl__obj()
{
}

bool Locale_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__init") ) { outValue = _hx___init_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_region") ) { outValue = get_region_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_language") ) { outValue = get_language_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_systemLocale") ) { outValue = get_systemLocale_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_currentLocale") ) { outValue = get_currentLocale_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_currentLocale") ) { outValue = set_currentLocale_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Locale_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Locale_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Locale_Impl__obj::currentLocale,HX_("currentLocale",b3,f5,1b,3d)},
	{::hx::fsString,(void *) &Locale_Impl__obj::_hx___systemLocale,HX_("__systemLocale",09,60,95,5d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Locale_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Locale_Impl__obj::currentLocale,"currentLocale");
	HX_MARK_MEMBER_NAME(Locale_Impl__obj::_hx___systemLocale,"__systemLocale");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Locale_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Locale_Impl__obj::currentLocale,"currentLocale");
	HX_VISIT_MEMBER_NAME(Locale_Impl__obj::_hx___systemLocale,"__systemLocale");
};

#endif

::hx::Class Locale_Impl__obj::__mClass;

static ::String Locale_Impl__obj_sStaticFields[] = {
	HX_("currentLocale",b3,f5,1b,3d),
	HX_("__systemLocale",09,60,95,5d),
	HX_("_new",61,15,1f,3f),
	HX_("equals",3f,ee,f2,bf),
	HX_("__init",30,9e,b3,f4),
	HX_("get_language",61,34,2b,2f),
	HX_("get_region",bd,30,14,f1),
	HX_("get_currentLocale",0a,01,8c,43),
	HX_("set_currentLocale",16,d9,f9,66),
	HX_("get_systemLocale",72,c9,73,41),
	::String(null())
};

void Locale_Impl__obj::__register()
{
	Locale_Impl__obj _hx_dummy;
	Locale_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system._Locale.Locale_Impl_",15,d3,ea,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Locale_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Locale_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Locale_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Locale_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Locale_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Locale_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Locale_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
} // end namespace _Locale
