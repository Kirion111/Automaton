#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFTools
#include <openfl/utils/_internal/format/amf/AMFTools.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFValue
#include <openfl/utils/_internal/format/amf/AMFValue.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_898be4d443cbb8e2_36_encode,"openfl.utils._internal.format.amf.AMFTools","encode",0x2e703fe5,"openfl.utils._internal.format.amf.AMFTools.encode","openfl/utils/_internal/format/amf/AMFTools.hx",36,0xbb01f3a0)
HX_LOCAL_STACK_FRAME(_hx_pos_898be4d443cbb8e2_73_number,"openfl.utils._internal.format.amf.AMFTools","number",0xd606d498,"openfl.utils._internal.format.amf.AMFTools.number","openfl/utils/_internal/format/amf/AMFTools.hx",73,0xbb01f3a0)
HX_LOCAL_STACK_FRAME(_hx_pos_898be4d443cbb8e2_83_string,"openfl.utils._internal.format.amf.AMFTools","string",0x45bc76a0,"openfl.utils._internal.format.amf.AMFTools.string","openfl/utils/_internal/format/amf/AMFTools.hx",83,0xbb01f3a0)
HX_LOCAL_STACK_FRAME(_hx_pos_898be4d443cbb8e2_93_object,"openfl.utils._internal.format.amf.AMFTools","object",0x49cbcc8e,"openfl.utils._internal.format.amf.AMFTools.object","openfl/utils/_internal/format/amf/AMFTools.hx",93,0xbb01f3a0)
HX_LOCAL_STACK_FRAME(_hx_pos_898be4d443cbb8e2_103_abool,"openfl.utils._internal.format.amf.AMFTools","abool",0x66fa6a1c,"openfl.utils._internal.format.amf.AMFTools.abool","openfl/utils/_internal/format/amf/AMFTools.hx",103,0xbb01f3a0)
HX_LOCAL_STACK_FRAME(_hx_pos_898be4d443cbb8e2_113_array,"openfl.utils._internal.format.amf.AMFTools","array",0x71900eaa,"openfl.utils._internal.format.amf.AMFTools.array","openfl/utils/_internal/format/amf/AMFTools.hx",113,0xbb01f3a0)
HX_LOCAL_STACK_FRAME(_hx_pos_898be4d443cbb8e2_124_unwrapValue,"openfl.utils._internal.format.amf.AMFTools","unwrapValue",0x6971c39f,"openfl.utils._internal.format.amf.AMFTools.unwrapValue","openfl/utils/_internal/format/amf/AMFTools.hx",124,0xbb01f3a0)
namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf{

void AMFTools_obj::__construct() { }

Dynamic AMFTools_obj::__CreateEmpty() { return new AMFTools_obj; }

void *AMFTools_obj::_hx_vtable = 0;

Dynamic AMFTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AMFTools_obj > _hx_result = new AMFTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AMFTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5b06c781;
}

 ::openfl::utils::_internal::format::amf::AMFValue AMFTools_obj::encode( ::Dynamic o){
            	HX_GC_STACKFRAME(&_hx_pos_898be4d443cbb8e2_36_encode)
HXDLIN(  36)		 ::ValueType _g = ::Type_obj::_hx_typeof(o);
HXDLIN(  36)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(  38)				return ::openfl::utils::_internal::format::amf::AMFValue_obj::ANull_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE(  39)				return ::openfl::utils::_internal::format::amf::AMFValue_obj::ANumber(o);
            			}
            			break;
            			case (int)2: {
HXLINE(  40)				return ::openfl::utils::_internal::format::amf::AMFValue_obj::ANumber(o);
            			}
            			break;
            			case (int)3: {
HXLINE(  41)				return ::openfl::utils::_internal::format::amf::AMFValue_obj::ABool(o);
            			}
            			break;
            			case (int)4: {
HXLINE(  43)				 ::haxe::ds::StringMap h =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  44)				{
HXLINE(  44)					int _g = 0;
HXDLIN(  44)					::Array< ::String > _g1 = ::Reflect_obj::fields(o);
HXDLIN(  44)					while((_g < _g1->length)){
HXLINE(  44)						::String f = _g1->__get(_g);
HXDLIN(  44)						_g = (_g + 1);
HXLINE(  45)						h->set(f,::openfl::utils::_internal::format::amf::AMFTools_obj::encode(::Reflect_obj::field(o,f)));
            					}
            				}
HXLINE(  46)				return ::openfl::utils::_internal::format::amf::AMFValue_obj::AObject(h,null());
            			}
            			break;
            			case (int)6: {
HXLINE(  47)				::hx::Class c = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXLINE(  48)				::hx::Class _hx_switch_0 = c;
            				if (  (_hx_switch_0==::hx::ArrayBase::__mClass) ){
HXLINE(  59)					::cpp::VirtualArray o1 = ( (::cpp::VirtualArray)(o) );
HXLINE(  60)					::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE(  61)					{
HXLINE(  61)						int _g = 0;
HXDLIN(  61)						while((_g < o1->get_length())){
HXLINE(  61)							 ::Dynamic v = o1->__get(_g);
HXDLIN(  61)							_g = (_g + 1);
HXLINE(  62)							a->push(::openfl::utils::_internal::format::amf::AMFTools_obj::encode(v));
            						}
            					}
HXLINE(  63)					return ::openfl::utils::_internal::format::amf::AMFValue_obj::AArray(a);
HXLINE(  58)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::String >()) ){
HXLINE(  51)					return ::openfl::utils::_internal::format::amf::AMFValue_obj::AString(o);
HXDLIN(  51)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::haxe::ds::StringMap >()) ){
HXLINE(  53)					 ::haxe::ds::StringMap o1 = ( ( ::haxe::ds::StringMap)(o) );
HXLINE(  54)					 ::haxe::ds::StringMap h =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  55)					{
HXLINE(  55)						 ::Dynamic f = o1->keys();
HXDLIN(  55)						while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  55)							::String f1 = ( (::String)(f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  56)							h->set(f1,::openfl::utils::_internal::format::amf::AMFTools_obj::encode(o1->get(f1)));
            						}
            					}
HXLINE(  57)					return ::openfl::utils::_internal::format::amf::AMFValue_obj::AObject(h,null());
HXLINE(  52)					goto _hx_goto_1;
            				}
            				/* default */{
HXLINE(  65)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Can't encode instance of ",25,18,82,b6) + ::Type_obj::getClassName(c))));
            				}
            				_hx_goto_1:;
            			}
            			break;
            			default:{
HXLINE(  68)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Can't encode ",87,74,15,3f) + ::Std_obj::string(o))));
            			}
            		}
HXLINE(  36)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMFTools_obj,encode,return )

 ::Dynamic AMFTools_obj::number( ::openfl::utils::_internal::format::amf::AMFValue a){
            	HX_STACKFRAME(&_hx_pos_898be4d443cbb8e2_73_number)
HXLINE(  74)		if (::hx::IsNull( a )) {
HXLINE(  74)			return null();
            		}
HXLINE(  75)		if ((a->_hx_getIndex() == 0)) {
HXLINE(  77)			Float n = a->_hx_getFloat(0);
HXDLIN(  77)			return n;
            		}
            		else {
HXLINE(  78)			return null();
            		}
HXLINE(  75)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMFTools_obj,number,return )

::String AMFTools_obj::string( ::openfl::utils::_internal::format::amf::AMFValue a){
            	HX_STACKFRAME(&_hx_pos_898be4d443cbb8e2_83_string)
HXLINE(  84)		if (::hx::IsNull( a )) {
HXLINE(  84)			return null();
            		}
HXLINE(  85)		if ((a->_hx_getIndex() == 2)) {
HXLINE(  87)			::String s = a->_hx_getString(0);
HXDLIN(  87)			return s;
            		}
            		else {
HXLINE(  88)			return null();
            		}
HXLINE(  85)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMFTools_obj,string,return )

 ::haxe::ds::StringMap AMFTools_obj::object( ::openfl::utils::_internal::format::amf::AMFValue a){
            	HX_STACKFRAME(&_hx_pos_898be4d443cbb8e2_93_object)
HXLINE(  94)		if (::hx::IsNull( a )) {
HXLINE(  94)			return null();
            		}
HXLINE(  95)		if ((a->_hx_getIndex() == 3)) {
HXLINE(  97)			 ::Dynamic _g = a->_hx_getObject(1);
HXDLIN(  97)			 ::haxe::ds::StringMap o = a->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN(  97)			return o;
            		}
            		else {
HXLINE(  98)			return null();
            		}
HXLINE(  95)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMFTools_obj,object,return )

 ::Dynamic AMFTools_obj::abool( ::openfl::utils::_internal::format::amf::AMFValue a){
            	HX_STACKFRAME(&_hx_pos_898be4d443cbb8e2_103_abool)
HXLINE( 104)		if (::hx::IsNull( a )) {
HXLINE( 104)			return null();
            		}
HXLINE( 105)		if ((a->_hx_getIndex() == 1)) {
HXLINE( 107)			bool b = a->_hx_getBool(0);
HXDLIN( 107)			return b;
            		}
            		else {
HXLINE( 108)			return null();
            		}
HXLINE( 105)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMFTools_obj,abool,return )

::Array< ::Dynamic> AMFTools_obj::array( ::openfl::utils::_internal::format::amf::AMFValue a){
            	HX_STACKFRAME(&_hx_pos_898be4d443cbb8e2_113_array)
HXLINE( 114)		if (::hx::IsNull( a )) {
HXLINE( 114)			return null();
            		}
HXLINE( 115)		if ((a->_hx_getIndex() == 7)) {
HXLINE( 117)			::Array< ::Dynamic> a1 = a->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 117)			return a1;
            		}
            		else {
HXLINE( 118)			return null();
            		}
HXLINE( 115)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMFTools_obj,array,return )

 ::Dynamic AMFTools_obj::unwrapValue( ::openfl::utils::_internal::format::amf::AMFValue val){
            	HX_STACKFRAME(&_hx_pos_898be4d443cbb8e2_124_unwrapValue)
HXDLIN( 124)		switch((int)(val->_hx_getIndex())){
            			case (int)0: {
HXLINE( 126)				Float f = val->_hx_getFloat(0);
HXLINE( 127)				return f;
            			}
            			break;
            			case (int)1: {
HXLINE( 128)				bool b = val->_hx_getBool(0);
HXLINE( 129)				return b;
            			}
            			break;
            			case (int)2: {
HXLINE( 130)				::String s = val->_hx_getString(0);
HXLINE( 131)				return s;
            			}
            			break;
            			case (int)3: {
HXLINE( 141)				 ::Dynamic _g = val->_hx_getObject(1);
HXDLIN( 141)				 ::haxe::ds::StringMap vmap = val->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 143)				 ::Dynamic obj =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 144)				{
HXLINE( 144)					 ::Dynamic name = vmap->keys();
HXDLIN( 144)					while(( (bool)(name->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 144)						::String name1 = ( (::String)(name->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 146)						::Reflect_obj::setField(obj,name1,::openfl::utils::_internal::format::amf::AMFTools_obj::unwrapValue(vmap->get(name1)));
            					}
            				}
HXLINE( 148)				return obj;
            			}
            			break;
            			case (int)4: {
HXLINE( 132)				 ::Date d = val->_hx_getObject(0).StaticCast<  ::Date >();
HXLINE( 133)				return d;
            			}
            			break;
            			case (int)5: {
HXLINE( 135)				return null();
            			}
            			break;
            			case (int)6: {
HXLINE( 137)				return null();
            			}
            			break;
            			case (int)7: {
HXLINE( 138)				::Array< ::Dynamic> vals = val->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 139)				 ::Dynamic f = ::openfl::utils::_internal::format::amf::AMFTools_obj::unwrapValue_dyn();
HXDLIN( 139)				::cpp::VirtualArray result = ::cpp::VirtualArray_obj::__new(vals->length);
HXDLIN( 139)				{
HXLINE( 139)					int _g = 0;
HXDLIN( 139)					int _g1 = vals->length;
HXDLIN( 139)					while((_g < _g1)){
HXLINE( 139)						_g = (_g + 1);
HXDLIN( 139)						int i = (_g - 1);
HXDLIN( 139)						{
HXLINE( 139)							 ::Dynamic inValue = f(_hx_array_unsafe_get(vals,i));
HXDLIN( 139)							result->__unsafe_set(i,inValue);
            						}
            					}
            				}
HXDLIN( 139)				return result;
            			}
            			break;
            		}
HXLINE( 124)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMFTools_obj,unwrapValue,return )


AMFTools_obj::AMFTools_obj()
{
}

bool AMFTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"abool") ) { outValue = abool_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"array") ) { outValue = array_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"number") ) { outValue = number_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"string") ) { outValue = string_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"object") ) { outValue = object_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"unwrapValue") ) { outValue = unwrapValue_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AMFTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AMFTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class AMFTools_obj::__mClass;

static ::String AMFTools_obj_sStaticFields[] = {
	HX_("encode",16,f2,e3,f9),
	HX_("number",c9,86,7a,a1),
	HX_("string",d1,28,30,11),
	HX_("object",bf,7e,3f,15),
	HX_("abool",0b,c9,f9,1a),
	HX_("array",99,6d,8f,25),
	HX_("unwrapValue",ce,7f,d5,5a),
	::String(null())
};

void AMFTools_obj::__register()
{
	AMFTools_obj _hx_dummy;
	AMFTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._internal.format.amf.AMFTools",bf,ee,6b,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AMFTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AMFTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AMFTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AMFTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AMFTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf
