#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
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
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFReader
#include <openfl/utils/_internal/format/amf/AMFReader.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFValue
#include <openfl/utils/_internal/format/amf/AMFValue.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4855d7b7d70450bd_37_new,"openfl.utils._internal.format.amf.AMFReader","new",0xddb8f491,"openfl.utils._internal.format.amf.AMFReader.new","openfl/utils/_internal/format/amf/AMFReader.hx",37,0xa8fae29e)
HX_LOCAL_STACK_FRAME(_hx_pos_4855d7b7d70450bd_43_readObject,"openfl.utils._internal.format.amf.AMFReader","readObject",0xe2aa96a4,"openfl.utils._internal.format.amf.AMFReader.readObject","openfl/utils/_internal/format/amf/AMFReader.hx",43,0xa8fae29e)
HX_LOCAL_STACK_FRAME(_hx_pos_4855d7b7d70450bd_58_readArray,"openfl.utils._internal.format.amf.AMFReader","readArray",0x67ea9954,"openfl.utils._internal.format.amf.AMFReader.readArray","openfl/utils/_internal/format/amf/AMFReader.hx",58,0xa8fae29e)
HX_LOCAL_STACK_FRAME(_hx_pos_4855d7b7d70450bd_68_readInt,"openfl.utils._internal.format.amf.AMFReader","readInt",0x9a3343ea,"openfl.utils._internal.format.amf.AMFReader.readInt","openfl/utils/_internal/format/amf/AMFReader.hx",68,0xa8fae29e)
HX_LOCAL_STACK_FRAME(_hx_pos_4855d7b7d70450bd_75_readWithCode,"openfl.utils._internal.format.amf.AMFReader","readWithCode",0x64bd6978,"openfl.utils._internal.format.amf.AMFReader.readWithCode","openfl/utils/_internal/format/amf/AMFReader.hx",75,0xa8fae29e)
HX_LOCAL_STACK_FRAME(_hx_pos_4855d7b7d70450bd_115_read,"openfl.utils._internal.format.amf.AMFReader","read",0x26c1d205,"openfl.utils._internal.format.amf.AMFReader.read","openfl/utils/_internal/format/amf/AMFReader.hx",115,0xa8fae29e)
namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf{

void AMFReader_obj::__construct( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_4855d7b7d70450bd_37_new)
HXLINE(  38)		this->i = i;
HXLINE(  39)		i->set_bigEndian(true);
            	}

Dynamic AMFReader_obj::__CreateEmpty() { return new AMFReader_obj; }

void *AMFReader_obj::_hx_vtable = 0;

Dynamic AMFReader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AMFReader_obj > _hx_result = new AMFReader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AMFReader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x26103655;
}

 ::haxe::ds::StringMap AMFReader_obj::readObject(){
            	HX_GC_STACKFRAME(&_hx_pos_4855d7b7d70450bd_43_readObject)
HXLINE(  44)		 ::haxe::ds::StringMap h =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  45)		while(true){
HXLINE(  47)			int c1 = this->i->readByte();
HXLINE(  48)			int c2 = this->i->readByte();
HXLINE(  49)			::String name = this->i->readString(((c1 << 8) | c2),null());
HXLINE(  50)			int k = this->i->readByte();
HXLINE(  51)			if ((k == 9)) {
HXLINE(  51)				goto _hx_goto_1;
            			}
HXLINE(  52)			h->set(name,this->readWithCode(k));
            		}
            		_hx_goto_1:;
HXLINE(  54)		return h;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMFReader_obj,readObject,return )

::Array< ::Dynamic> AMFReader_obj::readArray(int n){
            	HX_STACKFRAME(&_hx_pos_4855d7b7d70450bd_58_readArray)
HXLINE(  59)		::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE(  60)		{
HXLINE(  60)			int _g = 0;
HXDLIN(  60)			int _g1 = n;
HXDLIN(  60)			while((_g < _g1)){
HXLINE(  60)				_g = (_g + 1);
HXDLIN(  60)				int i = (_g - 1);
HXLINE(  61)				a->push(this->read());
            			}
            		}
HXLINE(  62)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AMFReader_obj,readArray,return )

int AMFReader_obj::readInt(){
            	HX_STACKFRAME(&_hx_pos_4855d7b7d70450bd_68_readInt)
HXDLIN(  68)		return this->i->readInt32();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMFReader_obj,readInt,return )

 ::openfl::utils::_internal::format::amf::AMFValue AMFReader_obj::readWithCode(int id){
            	HX_STACKFRAME(&_hx_pos_4855d7b7d70450bd_75_readWithCode)
HXLINE(  76)		 ::haxe::io::Input i = this->i;
HXLINE(  77)		switch((int)(id)){
            			case (int)0: {
HXLINE(  80)				return ::openfl::utils::_internal::format::amf::AMFValue_obj::ANumber(i->readDouble());
            			}
            			break;
            			case (int)1: {
HXLINE(  82)				bool _hx_tmp;
HXDLIN(  82)				switch((int)(i->readByte())){
            					case (int)0: {
HXLINE(  82)						_hx_tmp = false;
            					}
            					break;
            					case (int)1: {
HXLINE(  82)						_hx_tmp = true;
            					}
            					break;
            					default:{
HXLINE(  86)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid AMF",11,24,c1,76)));
            					}
            				}
HXLINE(  82)				return ::openfl::utils::_internal::format::amf::AMFValue_obj::ABool(_hx_tmp);
            			}
            			break;
            			case (int)2: {
HXLINE(  89)				return ::openfl::utils::_internal::format::amf::AMFValue_obj::AString(i->readString(i->readUInt16(),null()));
            			}
            			break;
            			case (int)5: {
HXLINE(  95)				return ::openfl::utils::_internal::format::amf::AMFValue_obj::ANull_dyn();
            			}
            			break;
            			case (int)6: {
HXLINE(  97)				return ::openfl::utils::_internal::format::amf::AMFValue_obj::AUndefined_dyn();
            			}
            			break;
            			case (int)7: {
HXLINE(  99)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not supported : Reference",66,a2,cf,e7)));
            			}
            			break;
            			case (int)3: case (int)8: {
HXLINE(  91)				bool ismixed = (id == 8);
HXLINE(  92)				 ::Dynamic size;
HXDLIN(  92)				if (ismixed) {
HXLINE(  92)					size = this->i->readInt32();
            				}
            				else {
HXLINE(  92)					size = null();
            				}
HXLINE(  93)				return ::openfl::utils::_internal::format::amf::AMFValue_obj::AObject(this->readObject(),size);
            			}
            			break;
            			case (int)10: {
HXLINE( 101)				return ::openfl::utils::_internal::format::amf::AMFValue_obj::AArray(this->readArray(this->i->readInt32()));
            			}
            			break;
            			case (int)11: {
HXLINE( 103)				Float time_ms = i->readDouble();
HXLINE( 104)				int tz_min = i->readUInt16();
HXLINE( 105)				return ::openfl::utils::_internal::format::amf::AMFValue_obj::ADate(::Date_obj::fromTime((time_ms + (( (Float)((tz_min * 60)) ) * ((Float)1000.0)))));
            			}
            			break;
            			case (int)12: {
HXLINE( 107)				return ::openfl::utils::_internal::format::amf::AMFValue_obj::AString(i->readString(this->i->readInt32(),null()));
            			}
            			break;
            			default:{
HXLINE( 109)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unknown AMF ",7c,2d,9c,eb) + id)));
            			}
            		}
HXLINE(  77)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AMFReader_obj,readWithCode,return )

 ::openfl::utils::_internal::format::amf::AMFValue AMFReader_obj::read(){
            	HX_STACKFRAME(&_hx_pos_4855d7b7d70450bd_115_read)
HXDLIN( 115)		return this->readWithCode(this->i->readByte());
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMFReader_obj,read,return )


::hx::ObjectPtr< AMFReader_obj > AMFReader_obj::__new( ::haxe::io::Input i) {
	::hx::ObjectPtr< AMFReader_obj > __this = new AMFReader_obj();
	__this->__construct(i);
	return __this;
}

::hx::ObjectPtr< AMFReader_obj > AMFReader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i) {
	AMFReader_obj *__this = (AMFReader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AMFReader_obj), true, "openfl.utils._internal.format.amf.AMFReader"));
	*(void **)__this = AMFReader_obj::_hx_vtable;
	__this->__construct(i);
	return __this;
}

AMFReader_obj::AMFReader_obj()
{
}

void AMFReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AMFReader);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_END_CLASS();
}

void AMFReader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
}

::hx::Val AMFReader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readInt") ) { return ::hx::Val( readInt_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readArray") ) { return ::hx::Val( readArray_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readObject") ) { return ::hx::Val( readObject_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readWithCode") ) { return ::hx::Val( readWithCode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AMFReader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AMFReader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("i",69,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AMFReader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(AMFReader_obj,i),HX_("i",69,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AMFReader_obj_sStaticStorageInfo = 0;
#endif

static ::String AMFReader_obj_sMemberFields[] = {
	HX_("i",69,00,00,00),
	HX_("readObject",b5,62,bb,0e),
	HX_("readArray",63,ba,76,f6),
	HX_("readInt",39,b3,c9,02),
	HX_("readWithCode",c9,1b,a6,4f),
	HX_("read",56,4b,a7,4b),
	::String(null()) };

::hx::Class AMFReader_obj::__mClass;

void AMFReader_obj::__register()
{
	AMFReader_obj _hx_dummy;
	AMFReader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._internal.format.amf.AMFReader",1f,58,05,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AMFReader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AMFReader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AMFReader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AMFReader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf
