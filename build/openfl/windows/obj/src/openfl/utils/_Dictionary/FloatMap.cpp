#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif
#ifndef INCLUDED_haxe_iterators_MapKeyValueIterator
#include <haxe/iterators/MapKeyValueIterator.h>
#endif
#ifndef INCLUDED_openfl_utils__Dictionary_FloatMap
#include <openfl/utils/_Dictionary/FloatMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_297_new,"openfl.utils._Dictionary.FloatMap","new",0xa412a9a6,"openfl.utils._Dictionary.FloatMap.new","openfl/utils/Dictionary.hx",297,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_304_clear,"openfl.utils._Dictionary.FloatMap","clear",0x7c77a853,"openfl.utils._Dictionary.FloatMap.clear","openfl/utils/Dictionary.hx",304,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_312_copy,"openfl.utils._Dictionary.FloatMap","copy",0xe503ffaf,"openfl.utils._Dictionary.FloatMap.copy","openfl/utils/Dictionary.hx",312,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_322_exists,"openfl.utils._Dictionary.FloatMap","exists",0x2473d456,"openfl.utils._Dictionary.FloatMap.exists","openfl/utils/Dictionary.hx",322,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_326_get,"openfl.utils._Dictionary.FloatMap","get",0xa40d59dc,"openfl.utils._Dictionary.FloatMap.get","openfl/utils/Dictionary.hx",326,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_334_keyValueIterator,"openfl.utils._Dictionary.FloatMap","keyValueIterator",0xcf81205a,"openfl.utils._Dictionary.FloatMap.keyValueIterator","openfl/utils/Dictionary.hx",334,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_340_keys,"openfl.utils._Dictionary.FloatMap","keys",0xea4625ee,"openfl.utils._Dictionary.FloatMap.keys","openfl/utils/Dictionary.hx",340,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_345_iterator,"openfl.utils._Dictionary.FloatMap","iterator",0x0d6412e8,"openfl.utils._Dictionary.FloatMap.iterator","openfl/utils/Dictionary.hx",345,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_349_remove,"openfl.utils._Dictionary.FloatMap","remove",0x691c52be,"openfl.utils._Dictionary.FloatMap.remove","openfl/utils/Dictionary.hx",349,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_364_set,"openfl.utils._Dictionary.FloatMap","set",0xa41674e8,"openfl.utils._Dictionary.FloatMap.set","openfl/utils/Dictionary.hx",364,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_372_indexOf,"openfl.utils._Dictionary.FloatMap","indexOf",0x7d6b3d0f,"openfl.utils._Dictionary.FloatMap.indexOf","openfl/utils/Dictionary.hx",372,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_417_insertSorted,"openfl.utils._Dictionary.FloatMap","insertSorted",0x4f3fc950,"openfl.utils._Dictionary.FloatMap.insertSorted","openfl/utils/Dictionary.hx",417,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_467_toString,"openfl.utils._Dictionary.FloatMap","toString",0xb23899a6,"openfl.utils._Dictionary.FloatMap.toString","openfl/utils/Dictionary.hx",467,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_291_boot,"openfl.utils._Dictionary.FloatMap","boot",0xe45ac82c,"openfl.utils._Dictionary.FloatMap.boot","openfl/utils/Dictionary.hx",291,0x5979b1eb)
namespace openfl{
namespace utils{
namespace _Dictionary{

void FloatMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_297_new)
HXLINE( 298)		this->floatKeys = ::cpp::VirtualArray_obj::__new();
HXLINE( 299)		this->values = ::cpp::VirtualArray_obj::__new();
            	}

Dynamic FloatMap_obj::__CreateEmpty() { return new FloatMap_obj; }

void *FloatMap_obj::_hx_vtable = 0;

Dynamic FloatMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FloatMap_obj > _hx_result = new FloatMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FloatMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b518c94;
}

static ::haxe::IMap_obj _hx_openfl_utils__Dictionary_FloatMap__hx_haxe_IMap= {
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::FloatMap_obj::get,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::utils::_Dictionary::FloatMap_obj::set_dca24b06,
	( bool (::hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::FloatMap_obj::exists,
	( bool (::hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::FloatMap_obj::remove,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::_Dictionary::FloatMap_obj::keys,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::_Dictionary::FloatMap_obj::iterator,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::_Dictionary::FloatMap_obj::keyValueIterator,
};

void FloatMap_obj::set_dca24b06( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}
void *FloatMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_openfl_utils__Dictionary_FloatMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FloatMap_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_304_clear)
HXLINE( 305)		this->floatKeys = ::cpp::VirtualArray_obj::__new();
HXLINE( 306)		this->values = ::cpp::VirtualArray_obj::__new();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,clear,(void))

 ::openfl::utils::_Dictionary::FloatMap FloatMap_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_312_copy)
HXLINE( 313)		 ::openfl::utils::_Dictionary::FloatMap copied =  ::openfl::utils::_Dictionary::FloatMap_obj::__alloc( HX_CTX );
HXLINE( 314)		{
HXLINE( 314)			 ::Dynamic key = this->keys();
HXDLIN( 314)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 314)				 ::Dynamic key1 = key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 315)				copied->set(key1,this->get(key1));
            			}
            		}
HXLINE( 316)		return copied;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,copy,return )

bool FloatMap_obj::exists( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_322_exists)
HXDLIN( 322)		return (this->indexOf(key) > -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatMap_obj,exists,return )

 ::Dynamic FloatMap_obj::get( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_326_get)
HXLINE( 327)		int ind = this->indexOf(key);
HXLINE( 328)		if ((ind > -1)) {
HXLINE( 328)			return this->values->__get(ind);
            		}
            		else {
HXLINE( 328)			return null();
            		}
HXDLIN( 328)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatMap_obj,get,return )

 ::Dynamic FloatMap_obj::keyValueIterator(){
            	HX_GC_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_334_keyValueIterator)
HXDLIN( 334)		return  ::haxe::iterators::MapKeyValueIterator_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,keyValueIterator,return )

 ::Dynamic FloatMap_obj::keys(){
            	HX_GC_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_340_keys)
HXDLIN( 340)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,this->floatKeys->copy());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,keys,return )

 ::Dynamic FloatMap_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_345_iterator)
HXDLIN( 345)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,this->values->copy());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,iterator,return )

bool FloatMap_obj::remove( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_349_remove)
HXLINE( 350)		int ind = this->indexOf(key);
HXLINE( 352)		if ((ind > -1)) {
HXLINE( 354)			this->floatKeys->splice(ind,1);
HXLINE( 355)			this->values->splice(ind,1);
HXLINE( 356)			return true;
            		}
HXLINE( 359)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatMap_obj,remove,return )

void FloatMap_obj::set( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_364_set)
HXDLIN( 364)		this->insertSorted(key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FloatMap_obj,set,(void))

int FloatMap_obj::indexOf( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_372_indexOf)
HXLINE( 373)		int len = this->floatKeys->get_length();
HXLINE( 374)		int startIndex = 0;
HXLINE( 375)		int endIndex = (len - 1);
HXLINE( 377)		if ((len == 0)) {
HXLINE( 379)			return -1;
            		}
HXLINE( 382)		int midIndex = 0;
HXLINE( 384)		while((startIndex < endIndex)){
HXLINE( 386)			midIndex = ::Math_obj::floor((( (Float)((startIndex + endIndex)) ) / ( (Float)(2) )));
HXLINE( 388)			if (::hx::IsEq( this->floatKeys->__get(midIndex),key )) {
HXLINE( 390)				return midIndex;
            			}
            			else {
HXLINE( 392)				if (::hx::IsGreater( this->floatKeys->__get(midIndex),key )) {
HXLINE( 394)					endIndex = (midIndex - 1);
            				}
            				else {
HXLINE( 398)					startIndex = (midIndex + 1);
            				}
            			}
            		}
HXLINE( 402)		if (::hx::IsEq( this->floatKeys->__get(startIndex),key )) {
HXLINE( 404)			return startIndex;
            		}
            		else {
HXLINE( 408)			return -1;
            		}
HXLINE( 402)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatMap_obj,indexOf,return )

void FloatMap_obj::insertSorted( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_417_insertSorted)
HXLINE( 418)		int len = this->floatKeys->get_length();
HXLINE( 419)		int startIndex = 0;
HXLINE( 420)		int endIndex = (len - 1);
HXLINE( 422)		if ((len == 0)) {
HXLINE( 424)			this->floatKeys->push(key);
HXLINE( 425)			this->values->push(value);
HXLINE( 426)			return;
            		}
HXLINE( 429)		int midIndex = 0;
HXLINE( 430)		while((startIndex < endIndex)){
HXLINE( 432)			midIndex = ::Math_obj::floor((( (Float)((startIndex + endIndex)) ) / ( (Float)(2) )));
HXLINE( 434)			if (::hx::IsEq( this->floatKeys->__get(midIndex),key )) {
HXLINE( 436)				this->values->set(midIndex,value);
HXLINE( 437)				return;
            			}
            			else {
HXLINE( 439)				if (::hx::IsGreater( this->floatKeys->__get(midIndex),key )) {
HXLINE( 441)					endIndex = (midIndex - 1);
            				}
            				else {
HXLINE( 445)					startIndex = (midIndex + 1);
            				}
            			}
            		}
HXLINE( 449)		if (::hx::IsGreater( this->floatKeys->__get(startIndex),key )) {
HXLINE( 451)			this->floatKeys->insert(startIndex,key);
HXLINE( 452)			this->values->insert(startIndex,value);
            		}
            		else {
HXLINE( 454)			if (::hx::IsLess( this->floatKeys->__get(startIndex),key )) {
HXLINE( 456)				this->floatKeys->insert((startIndex + 1),key);
HXLINE( 457)				this->values->insert((startIndex + 1),value);
            			}
            			else {
HXLINE( 461)				this->values->set(startIndex,value);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FloatMap_obj,insertSorted,(void))

::String FloatMap_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_467_toString)
HXDLIN( 467)		return this->values->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,toString,return )


::hx::ObjectPtr< FloatMap_obj > FloatMap_obj::__new() {
	::hx::ObjectPtr< FloatMap_obj > __this = new FloatMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FloatMap_obj > FloatMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FloatMap_obj *__this = (FloatMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FloatMap_obj), true, "openfl.utils._Dictionary.FloatMap"));
	*(void **)__this = FloatMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FloatMap_obj::FloatMap_obj()
{
}

void FloatMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FloatMap);
	HX_MARK_MEMBER_NAME(floatKeys,"floatKeys");
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_END_CLASS();
}

void FloatMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(floatKeys,"floatKeys");
	HX_VISIT_MEMBER_NAME(values,"values");
}

::hx::Val FloatMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return ::hx::Val( values ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { return ::hx::Val( indexOf_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floatKeys") ) { return ::hx::Val( floatKeys ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"insertSorted") ) { return ::hx::Val( insertSorted_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"keyValueIterator") ) { return ::hx::Val( keyValueIterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FloatMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floatKeys") ) { floatKeys=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FloatMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("floatKeys",b0,d1,3f,fa));
	outFields->push(HX_("values",e2,03,b7,4f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FloatMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FloatMap_obj,floatKeys),HX_("floatKeys",b0,d1,3f,fa)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FloatMap_obj,values),HX_("values",e2,03,b7,4f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FloatMap_obj_sStaticStorageInfo = 0;
#endif

static ::String FloatMap_obj_sMemberFields[] = {
	HX_("floatKeys",b0,d1,3f,fa),
	HX_("values",e2,03,b7,4f),
	HX_("clear",8d,71,5b,48),
	HX_("copy",b5,bb,c4,41),
	HX_("exists",dc,1d,e0,bf),
	HX_("get",96,80,4e,00),
	HX_("keyValueIterator",60,cd,ee,4a),
	HX_("keys",f4,e1,06,47),
	HX_("iterator",ee,49,9a,93),
	HX_("remove",44,9c,88,04),
	HX_("set",a2,9b,57,00),
	HX_("indexOf",c9,48,bf,e0),
	HX_("insertSorted",56,fb,c4,a6),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class FloatMap_obj::__mClass;

void FloatMap_obj::__register()
{
	FloatMap_obj _hx_dummy;
	FloatMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._Dictionary.FloatMap",b4,9e,0f,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FloatMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FloatMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FloatMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FloatMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FloatMap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_291_boot)
HXDLIN( 291)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _Dictionary
