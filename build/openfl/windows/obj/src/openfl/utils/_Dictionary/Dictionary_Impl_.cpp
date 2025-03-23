#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_utils__Dictionary_ClassMap
#include <openfl/utils/_Dictionary/ClassMap.h>
#endif
#ifndef INCLUDED_openfl_utils__Dictionary_Dictionary_Impl_
#include <openfl/utils/_Dictionary/Dictionary_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils__Dictionary_FloatMap
#include <openfl/utils/_Dictionary/FloatMap.h>
#endif
#ifndef INCLUDED_openfl_utils__Dictionary_UtilsObjectMap
#include <openfl/utils/_Dictionary/UtilsObjectMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_62_exists,"openfl.utils._Dictionary.Dictionary_Impl_","exists",0x2c05b8c0,"openfl.utils._Dictionary.Dictionary_Impl_.exists","openfl/utils/Dictionary.hx",62,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_81_get,"openfl.utils._Dictionary.Dictionary_Impl_","get",0x56beef32,"openfl.utils._Dictionary.Dictionary_Impl_.get","openfl/utils/Dictionary.hx",81,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_92_keyValueIterator,"openfl.utils._Dictionary.Dictionary_Impl_","keyValueIterator",0xc9f06d44,"openfl.utils._Dictionary.Dictionary_Impl_.keyValueIterator","openfl/utils/Dictionary.hx",92,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_103_remove,"openfl.utils._Dictionary.Dictionary_Impl_","remove",0x70ae3728,"openfl.utils._Dictionary.Dictionary_Impl_.remove","openfl/utils/Dictionary.hx",103,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_114_set,"openfl.utils._Dictionary.Dictionary_Impl_","set",0x56c80a3e,"openfl.utils._Dictionary.Dictionary_Impl_.set","openfl/utils/Dictionary.hx",114,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_126_iterator,"openfl.utils._Dictionary.Dictionary_Impl_","iterator",0x888765d2,"openfl.utils._Dictionary.Dictionary_Impl_.iterator","openfl/utils/Dictionary.hx",126,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_136_each,"openfl.utils._Dictionary.Dictionary_Impl_","each",0x8efcd7e5,"openfl.utils._Dictionary.Dictionary_Impl_.each","openfl/utils/Dictionary.hx",136,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_141_toStringMap,"openfl.utils._Dictionary.Dictionary_Impl_","toStringMap",0xbb490fec,"openfl.utils._Dictionary.Dictionary_Impl_.toStringMap","openfl/utils/Dictionary.hx",141,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_146_toIntMap,"openfl.utils._Dictionary.Dictionary_Impl_","toIntMap",0xba9ff8ac,"openfl.utils._Dictionary.Dictionary_Impl_.toIntMap","openfl/utils/Dictionary.hx",146,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_151_toFloatMap,"openfl.utils._Dictionary.Dictionary_Impl_","toFloatMap",0x2efdd7df,"openfl.utils._Dictionary.Dictionary_Impl_.toFloatMap","openfl/utils/Dictionary.hx",151,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_156_toEnumValueMapMap,"openfl.utils._Dictionary.Dictionary_Impl_","toEnumValueMapMap",0xa2f7a691,"openfl.utils._Dictionary.Dictionary_Impl_.toEnumValueMapMap","openfl/utils/Dictionary.hx",156,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_161_toObjectMap,"openfl.utils._Dictionary.Dictionary_Impl_","toObjectMap",0x370da2be,"openfl.utils._Dictionary.Dictionary_Impl_.toObjectMap","openfl/utils/Dictionary.hx",161,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_166_toUtilsObjectMap,"openfl.utils._Dictionary.Dictionary_Impl_","toUtilsObjectMap",0x34d1c76b,"openfl.utils._Dictionary.Dictionary_Impl_.toUtilsObjectMap","openfl/utils/Dictionary.hx",166,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_171_toClassMap,"openfl.utils._Dictionary.Dictionary_Impl_","toClassMap",0x46f4aec3,"openfl.utils._Dictionary.Dictionary_Impl_.toClassMap","openfl/utils/Dictionary.hx",171,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_176_fromStringMap,"openfl.utils._Dictionary.Dictionary_Impl_","fromStringMap",0x17b1b91d,"openfl.utils._Dictionary.Dictionary_Impl_.fromStringMap","openfl/utils/Dictionary.hx",176,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_181_fromIntMap,"openfl.utils._Dictionary.Dictionary_Impl_","fromIntMap",0xc10f16db,"openfl.utils._Dictionary.Dictionary_Impl_.fromIntMap","openfl/utils/Dictionary.hx",181,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_186_fromFloatMap,"openfl.utils._Dictionary.Dictionary_Impl_","fromFloatMap",0x06141fce,"openfl.utils._Dictionary.Dictionary_Impl_.fromFloatMap","openfl/utils/Dictionary.hx",186,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_191_fromObjectMap,"openfl.utils._Dictionary.Dictionary_Impl_","fromObjectMap",0x93764bef,"openfl.utils._Dictionary.Dictionary_Impl_.fromObjectMap","openfl/utils/Dictionary.hx",191,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_196_fromUtilsObjectMap,"openfl.utils._Dictionary.Dictionary_Impl_","fromUtilsObjectMap",0xc6e12c9a,"openfl.utils._Dictionary.Dictionary_Impl_.fromUtilsObjectMap","openfl/utils/Dictionary.hx",196,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ae78cdd2bf70574c_201_fromClassMap,"openfl.utils._Dictionary.Dictionary_Impl_","fromClassMap",0x1e0af6b2,"openfl.utils._Dictionary.Dictionary_Impl_.fromClassMap","openfl/utils/Dictionary.hx",201,0x5979b1eb)
namespace openfl{
namespace utils{
namespace _Dictionary{

void Dictionary_Impl__obj::__construct() { }

Dynamic Dictionary_Impl__obj::__CreateEmpty() { return new Dictionary_Impl__obj; }

void *Dictionary_Impl__obj::_hx_vtable = 0;

Dynamic Dictionary_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Dictionary_Impl__obj > _hx_result = new Dictionary_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Dictionary_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2bbd1eea;
}

bool Dictionary_Impl__obj::exists(::Dynamic this1, ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_62_exists)
HXDLIN(  62)		return ::haxe::IMap_obj::exists(this1,key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Dictionary_Impl__obj,exists,return )

 ::Dynamic Dictionary_Impl__obj::get(::Dynamic this1, ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_81_get)
HXDLIN(  81)		return ::haxe::IMap_obj::get(this1,key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Dictionary_Impl__obj,get,return )

 ::Dynamic Dictionary_Impl__obj::keyValueIterator(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_92_keyValueIterator)
HXDLIN(  92)		return ::haxe::IMap_obj::keyValueIterator(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dictionary_Impl__obj,keyValueIterator,return )

bool Dictionary_Impl__obj::remove(::Dynamic this1, ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_103_remove)
HXDLIN( 103)		return ::haxe::IMap_obj::remove(this1,key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Dictionary_Impl__obj,remove,return )

 ::Dynamic Dictionary_Impl__obj::set(::Dynamic this1, ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_114_set)
HXLINE( 115)		::haxe::IMap_obj::set(this1,key,value);
HXLINE( 116)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Dictionary_Impl__obj,set,return )

 ::Dynamic Dictionary_Impl__obj::iterator(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_126_iterator)
HXDLIN( 126)		return ::haxe::IMap_obj::keys(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dictionary_Impl__obj,iterator,return )

 ::Dynamic Dictionary_Impl__obj::each(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_136_each)
HXDLIN( 136)		return ::haxe::IMap_obj::iterator(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dictionary_Impl__obj,each,return )

 ::haxe::ds::StringMap Dictionary_Impl__obj::toStringMap(::Dynamic t,bool weakKeys){
            	HX_GC_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_141_toStringMap)
HXDLIN( 141)		return  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Dictionary_Impl__obj,toStringMap,return )

 ::haxe::ds::IntMap Dictionary_Impl__obj::toIntMap(::Dynamic t,bool weakKeys){
            	HX_GC_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_146_toIntMap)
HXDLIN( 146)		return  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Dictionary_Impl__obj,toIntMap,return )

 ::openfl::utils::_Dictionary::FloatMap Dictionary_Impl__obj::toFloatMap(::Dynamic t,bool weakKeys){
            	HX_GC_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_151_toFloatMap)
HXDLIN( 151)		return  ::openfl::utils::_Dictionary::FloatMap_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Dictionary_Impl__obj,toFloatMap,return )

 ::haxe::ds::EnumValueMap Dictionary_Impl__obj::toEnumValueMapMap(::Dynamic t,bool weakKeys){
            	HX_GC_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_156_toEnumValueMapMap)
HXDLIN( 156)		return  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Dictionary_Impl__obj,toEnumValueMapMap,return )

 ::haxe::ds::ObjectMap Dictionary_Impl__obj::toObjectMap(::Dynamic t,bool weakKeys){
            	HX_GC_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_161_toObjectMap)
HXDLIN( 161)		return  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Dictionary_Impl__obj,toObjectMap,return )

 ::openfl::utils::_Dictionary::UtilsObjectMap Dictionary_Impl__obj::toUtilsObjectMap(::Dynamic t,bool weakKeys){
            	HX_GC_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_166_toUtilsObjectMap)
HXDLIN( 166)		return  ::openfl::utils::_Dictionary::UtilsObjectMap_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Dictionary_Impl__obj,toUtilsObjectMap,return )

 ::openfl::utils::_Dictionary::ClassMap Dictionary_Impl__obj::toClassMap(::Dynamic t,bool weakKeys){
            	HX_GC_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_171_toClassMap)
HXDLIN( 171)		return  ::openfl::utils::_Dictionary::ClassMap_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Dictionary_Impl__obj,toClassMap,return )

 ::haxe::ds::StringMap Dictionary_Impl__obj::fromStringMap( ::haxe::ds::StringMap map){
            	HX_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_176_fromStringMap)
HXDLIN( 176)		return map;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dictionary_Impl__obj,fromStringMap,return )

 ::haxe::ds::IntMap Dictionary_Impl__obj::fromIntMap( ::haxe::ds::IntMap map){
            	HX_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_181_fromIntMap)
HXDLIN( 181)		return map;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dictionary_Impl__obj,fromIntMap,return )

 ::openfl::utils::_Dictionary::FloatMap Dictionary_Impl__obj::fromFloatMap( ::openfl::utils::_Dictionary::FloatMap map){
            	HX_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_186_fromFloatMap)
HXDLIN( 186)		return map;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dictionary_Impl__obj,fromFloatMap,return )

 ::haxe::ds::ObjectMap Dictionary_Impl__obj::fromObjectMap( ::haxe::ds::ObjectMap map){
            	HX_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_191_fromObjectMap)
HXDLIN( 191)		return map;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dictionary_Impl__obj,fromObjectMap,return )

 ::haxe::ds::StringMap Dictionary_Impl__obj::fromUtilsObjectMap( ::openfl::utils::_Dictionary::UtilsObjectMap map){
            	HX_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_196_fromUtilsObjectMap)
HXDLIN( 196)		return ( ( ::haxe::ds::StringMap)(map) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dictionary_Impl__obj,fromUtilsObjectMap,return )

 ::openfl::utils::_Dictionary::UtilsObjectMap Dictionary_Impl__obj::fromClassMap( ::openfl::utils::_Dictionary::ClassMap map){
            	HX_STACKFRAME(&_hx_pos_ae78cdd2bf70574c_201_fromClassMap)
HXDLIN( 201)		return ( ( ::openfl::utils::_Dictionary::UtilsObjectMap)(map) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dictionary_Impl__obj,fromClassMap,return )


Dictionary_Impl__obj::Dictionary_Impl__obj()
{
}

bool Dictionary_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"each") ) { outValue = each_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"remove") ) { outValue = remove_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toIntMap") ) { outValue = toIntMap_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toFloatMap") ) { outValue = toFloatMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toClassMap") ) { outValue = toClassMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromIntMap") ) { outValue = fromIntMap_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toStringMap") ) { outValue = toStringMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toObjectMap") ) { outValue = toObjectMap_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromFloatMap") ) { outValue = fromFloatMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromClassMap") ) { outValue = fromClassMap_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromStringMap") ) { outValue = fromStringMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromObjectMap") ) { outValue = fromObjectMap_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"keyValueIterator") ) { outValue = keyValueIterator_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toUtilsObjectMap") ) { outValue = toUtilsObjectMap_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"toEnumValueMapMap") ) { outValue = toEnumValueMapMap_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"fromUtilsObjectMap") ) { outValue = fromUtilsObjectMap_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Dictionary_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Dictionary_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Dictionary_Impl__obj::__mClass;

static ::String Dictionary_Impl__obj_sStaticFields[] = {
	HX_("exists",dc,1d,e0,bf),
	HX_("get",96,80,4e,00),
	HX_("keyValueIterator",60,cd,ee,4a),
	HX_("remove",44,9c,88,04),
	HX_("set",a2,9b,57,00),
	HX_("iterator",ee,49,9a,93),
	HX_("each",01,7e,0c,43),
	HX_("toStringMap",50,a5,9e,2e),
	HX_("toIntMap",c8,dc,b2,c5),
	HX_("toFloatMap",fb,fa,a6,4f),
	HX_("toEnumValueMapMap",f5,5e,8d,00),
	HX_("toObjectMap",22,38,63,aa),
	HX_("toUtilsObjectMap",87,27,d0,b5),
	HX_("toClassMap",df,d1,9d,67),
	HX_("fromStringMap",81,6f,a2,3b),
	HX_("fromIntMap",f7,39,b8,e1),
	HX_("fromFloatMap",ea,41,a1,7d),
	HX_("fromObjectMap",53,02,67,b7),
	HX_("fromUtilsObjectMap",b6,cb,4c,4c),
	HX_("fromClassMap",ce,18,98,95),
	::String(null())
};

void Dictionary_Impl__obj::__register()
{
	Dictionary_Impl__obj _hx_dummy;
	Dictionary_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._Dictionary.Dictionary_Impl_",0a,51,0a,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Dictionary_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Dictionary_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Dictionary_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Dictionary_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Dictionary_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
} // end namespace _Dictionary
