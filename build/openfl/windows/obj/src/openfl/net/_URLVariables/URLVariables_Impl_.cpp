#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_openfl_net__URLVariables_URLVariables_Impl_
#include <openfl/net/_URLVariables/URLVariables_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8056606f6909a50a_31__new,"openfl.net._URLVariables.URLVariables_Impl_","_new",0x5fed9531,"openfl.net._URLVariables.URLVariables_Impl_._new","openfl/net/URLVariables.hx",31,0x10f26625)
HX_LOCAL_STACK_FRAME(_hx_pos_8056606f6909a50a_53_decode,"openfl.net._URLVariables.URLVariables_Impl_","decode",0x363770fe,"openfl.net._URLVariables.URLVariables_Impl_.decode","openfl/net/URLVariables.hx",53,0x10f26625)
HX_LOCAL_STACK_FRAME(_hx_pos_8056606f6909a50a_85_toString,"openfl.net._URLVariables.URLVariables_Impl_","toString",0x7f41787c,"openfl.net._URLVariables.URLVariables_Impl_.toString","openfl/net/URLVariables.hx",85,0x10f26625)
HX_LOCAL_STACK_FRAME(_hx_pos_8056606f6909a50a_112___get,"openfl.net._URLVariables.URLVariables_Impl_","__get",0x860c37a6,"openfl.net._URLVariables.URLVariables_Impl_.__get","openfl/net/URLVariables.hx",112,0x10f26625)
HX_LOCAL_STACK_FRAME(_hx_pos_8056606f6909a50a_118___set,"openfl.net._URLVariables.URLVariables_Impl_","__set",0x861552b2,"openfl.net._URLVariables.URLVariables_Impl_.__set","openfl/net/URLVariables.hx",118,0x10f26625)
HX_LOCAL_STACK_FRAME(_hx_pos_8056606f6909a50a_19_boot,"openfl.net._URLVariables.URLVariables_Impl_","boot",0x61ea0402,"openfl.net._URLVariables.URLVariables_Impl_.boot","openfl/net/URLVariables.hx",19,0x10f26625)
namespace openfl{
namespace net{
namespace _URLVariables{

void URLVariables_Impl__obj::__construct() { }

Dynamic URLVariables_Impl__obj::__CreateEmpty() { return new URLVariables_Impl__obj; }

void *URLVariables_Impl__obj::_hx_vtable = 0;

Dynamic URLVariables_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< URLVariables_Impl__obj > _hx_result = new URLVariables_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool URLVariables_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5a0b72a2;
}

 ::Dynamic URLVariables_Impl__obj::_new(::String source){
            	HX_STACKFRAME(&_hx_pos_8056606f6909a50a_31__new)
HXDLIN(  31)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE(  35)		if (::hx::IsNotNull( source )) {
HXLINE(  37)			::openfl::net::_URLVariables::URLVariables_Impl__obj::decode(this1,source);
            		}
HXLINE(  31)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLVariables_Impl__obj,_new,return )

void URLVariables_Impl__obj::decode( ::Dynamic this1,::String source){
            	HX_STACKFRAME(&_hx_pos_8056606f6909a50a_53_decode)
HXLINE(  54)		::Array< ::String > fields = ::Reflect_obj::fields(this1);
HXLINE(  56)		{
HXLINE(  56)			int _g = 0;
HXDLIN(  56)			while((_g < fields->length)){
HXLINE(  56)				::String f = fields->__get(_g);
HXDLIN(  56)				_g = (_g + 1);
HXLINE(  58)				::Reflect_obj::deleteField(this1,f);
            			}
            		}
HXLINE(  61)		::Array< ::String > fields1 = source.split(HX_(";",3b,00,00,00))->join(HX_("&",26,00,00,00)).split(HX_("&",26,00,00,00));
HXLINE(  63)		{
HXLINE(  63)			int _g1 = 0;
HXDLIN(  63)			while((_g1 < fields1->length)){
HXLINE(  63)				::String f = fields1->__get(_g1);
HXDLIN(  63)				_g1 = (_g1 + 1);
HXLINE(  65)				int eq = f.indexOf(HX_("=",3d,00,00,00),null());
HXLINE(  67)				if ((eq > 0)) {
HXLINE(  69)					::String _hx_tmp = ::StringTools_obj::urlDecode(f.substr(0,eq));
HXDLIN(  69)					::Reflect_obj::setField(this1,_hx_tmp,::StringTools_obj::urlDecode(f.substr((eq + 1),null())));
            				}
            				else {
HXLINE(  71)					if ((eq != 0)) {
HXLINE(  73)						::Reflect_obj::setField(this1,::StringTools_obj::urlDecode(f),HX_("",00,00,00,00));
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(URLVariables_Impl__obj,decode,(void))

::String URLVariables_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8056606f6909a50a_85_toString)
HXLINE(  86)		::Array< ::String > result = ::Array_obj< ::String >::__new();
HXLINE(  87)		::Array< ::String > fields = ::Reflect_obj::fields(this1);
HXLINE(  89)		{
HXLINE(  89)			int _g = 0;
HXDLIN(  89)			while((_g < fields->length)){
HXLINE(  89)				::String f = fields->__get(_g);
HXDLIN(  89)				_g = (_g + 1);
HXLINE(  91)				 ::Dynamic value = ::Reflect_obj::field(this1,f);
HXLINE(  92)				bool _hx_tmp;
HXDLIN(  92)				if ((f.indexOf(HX_("[]",a2,4f,00,00),null()) > -1)) {
HXLINE(  92)					_hx_tmp = ::Std_obj::isOfType(value,::hx::ArrayBase::__mClass);
            				}
            				else {
HXLINE(  92)					_hx_tmp = false;
            				}
HXDLIN(  92)				if (_hx_tmp) {
HXLINE(  94)					::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(  94)					{
HXLINE(  94)						 ::Dynamic x = value->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN(  94)						while(( (bool)(x->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  94)							::String x1 = ( (::String)(x->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  94)							_g->push(::StringTools_obj::urlEncode(x1));
            						}
            					}
HXDLIN(  94)					::String arrayValue = _g->join(((HX_("&amp;",dd,d4,aa,21) + f) + HX_("=",3d,00,00,00)));
HXLINE(  98)					result->push(((::StringTools_obj::urlEncode(f) + HX_("=",3d,00,00,00)) + arrayValue));
            				}
            				else {
HXLINE( 102)					::String _hx_tmp = (::StringTools_obj::urlEncode(f) + HX_("=",3d,00,00,00));
HXDLIN( 102)					result->push((_hx_tmp + ::StringTools_obj::urlEncode(::Std_obj::string(value))));
            				}
            			}
            		}
HXLINE( 106)		return result->join(HX_("&",26,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLVariables_Impl__obj,toString,return )

 ::Dynamic URLVariables_Impl__obj::__get( ::Dynamic this1,::String key){
            	HX_STACKFRAME(&_hx_pos_8056606f6909a50a_112___get)
HXDLIN( 112)		return ::Reflect_obj::field(this1,key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(URLVariables_Impl__obj,__get,return )

void URLVariables_Impl__obj::__set( ::Dynamic this1,::String key,::String value){
            	HX_STACKFRAME(&_hx_pos_8056606f6909a50a_118___set)
HXDLIN( 118)		::Reflect_obj::setField(this1,key,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(URLVariables_Impl__obj,__set,(void))


URLVariables_Impl__obj::URLVariables_Impl__obj()
{
}

bool URLVariables_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { outValue = __get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__set") ) { outValue = __set_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *URLVariables_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *URLVariables_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class URLVariables_Impl__obj::__mClass;

static ::String URLVariables_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("decode",2e,5d,ed,64),
	HX_("toString",ac,d0,6e,38),
	HX_("__get",76,e1,2a,f2),
	HX_("__set",82,fc,33,f2),
	::String(null())
};

void URLVariables_Impl__obj::__register()
{
	URLVariables_Impl__obj _hx_dummy;
	URLVariables_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net._URLVariables.URLVariables_Impl_",9e,f2,35,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &URLVariables_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(URLVariables_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< URLVariables_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLVariables_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLVariables_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void URLVariables_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8056606f6909a50a_19_boot)
HXDLIN(  19)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("statics",05,3c,65,36), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("__get",76,e1,2a,f2), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            				->setFixed(1,HX_("__set",82,fc,33,f2), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
}

} // end namespace openfl
} // end namespace net
} // end namespace _URLVariables
