#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IExternalizable
#include <openfl/utils/IExternalizable.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Reader
#include <openfl/utils/_internal/format/amf3/AMF3Reader.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3ReaderInput
#include <openfl/utils/_internal/format/amf3/AMF3ReaderInput.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Tools
#include <openfl/utils/_internal/format/amf3/AMF3Tools.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Value
#include <openfl/utils/_internal/format/amf3/AMF3Value.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ac5f93881f906e4_54_new,"openfl.utils._internal.format.amf3.AMF3Reader","new",0x5cc16b59,"openfl.utils._internal.format.amf3.AMF3Reader.new","openfl/utils/_internal/format/amf3/AMF3Reader.hx",54,0xe8923634)
HX_LOCAL_STACK_FRAME(_hx_pos_0ac5f93881f906e4_72_readObject,"openfl.utils._internal.format.amf3.AMF3Reader","readObject",0xc4a608dc,"openfl.utils._internal.format.amf3.AMF3Reader.readObject","openfl/utils/_internal/format/amf3/AMF3Reader.hx",72,0xe8923634)
HX_LOCAL_STACK_FRAME(_hx_pos_0ac5f93881f906e4_186_readMap,"openfl.utils._internal.format.amf3.AMF3Reader","readMap",0xadd5bc5f,"openfl.utils._internal.format.amf3.AMF3Reader.readMap","openfl/utils/_internal/format/amf3/AMF3Reader.hx",186,0xe8923634)
HX_LOCAL_STACK_FRAME(_hx_pos_0ac5f93881f906e4_207_readArray,"openfl.utils._internal.format.amf3.AMF3Reader","readArray",0x3e74561c,"openfl.utils._internal.format.amf3.AMF3Reader.readArray","openfl/utils/_internal/format/amf3/AMF3Reader.hx",207,0xe8923634)
HX_LOCAL_STACK_FRAME(_hx_pos_0ac5f93881f906e4_234_readIntVector,"openfl.utils._internal.format.amf3.AMF3Reader","readIntVector",0x7b53f515,"openfl.utils._internal.format.amf3.AMF3Reader.readIntVector","openfl/utils/_internal/format/amf3/AMF3Reader.hx",234,0xe8923634)
HX_LOCAL_STACK_FRAME(_hx_pos_0ac5f93881f906e4_259_readFloatVector,"openfl.utils._internal.format.amf3.AMF3Reader","readFloatVector",0xd57db442,"openfl.utils._internal.format.amf3.AMF3Reader.readFloatVector","openfl/utils/_internal/format/amf3/AMF3Reader.hx",259,0xe8923634)
HX_LOCAL_STACK_FRAME(_hx_pos_0ac5f93881f906e4_284_readObjectVector,"openfl.utils._internal.format.amf3.AMF3Reader","readObjectVector",0xf9403abf,"openfl.utils._internal.format.amf3.AMF3Reader.readObjectVector","openfl/utils/_internal/format/amf3/AMF3Reader.hx",284,0xe8923634)
HX_LOCAL_STACK_FRAME(_hx_pos_0ac5f93881f906e4_311_readByteArray,"openfl.utils._internal.format.amf3.AMF3Reader","readByteArray",0x7abb2774,"openfl.utils._internal.format.amf3.AMF3Reader.readByteArray","openfl/utils/_internal/format/amf3/AMF3Reader.hx",311,0xe8923634)
HX_LOCAL_STACK_FRAME(_hx_pos_0ac5f93881f906e4_333_readInt,"openfl.utils._internal.format.amf3.AMF3Reader","readInt",0xadd2beb2,"openfl.utils._internal.format.amf3.AMF3Reader.readInt","openfl/utils/_internal/format/amf3/AMF3Reader.hx",333,0xe8923634)
HX_LOCAL_STACK_FRAME(_hx_pos_0ac5f93881f906e4_357_readString,"openfl.utils._internal.format.amf3.AMF3Reader","readString",0xc096b2ee,"openfl.utils._internal.format.amf3.AMF3Reader.readString","openfl/utils/_internal/format/amf3/AMF3Reader.hx",357,0xe8923634)
HX_LOCAL_STACK_FRAME(_hx_pos_0ac5f93881f906e4_371_readStringNoHeader,"openfl.utils._internal.format.amf3.AMF3Reader","readStringNoHeader",0xe4ca11bc,"openfl.utils._internal.format.amf3.AMF3Reader.readStringNoHeader","openfl/utils/_internal/format/amf3/AMF3Reader.hx",371,0xe8923634)
HX_LOCAL_STACK_FRAME(_hx_pos_0ac5f93881f906e4_423_readDate,"openfl.utils._internal.format.amf3.AMF3Reader","readDate",0x673c2f0b,"openfl.utils._internal.format.amf3.AMF3Reader.readDate","openfl/utils/_internal/format/amf3/AMF3Reader.hx",423,0xe8923634)
HX_LOCAL_STACK_FRAME(_hx_pos_0ac5f93881f906e4_437_readXml,"openfl.utils._internal.format.amf3.AMF3Reader","readXml",0xadde1f9a,"openfl.utils._internal.format.amf3.AMF3Reader.readXml","openfl/utils/_internal/format/amf3/AMF3Reader.hx",437,0xe8923634)
HX_LOCAL_STACK_FRAME(_hx_pos_0ac5f93881f906e4_452_readWithCode,"openfl.utils._internal.format.amf3.AMF3Reader","readWithCode",0x5223d9b0,"openfl.utils._internal.format.amf3.AMF3Reader.readWithCode","openfl/utils/_internal/format/amf3/AMF3Reader.hx",452,0xe8923634)
HX_LOCAL_STACK_FRAME(_hx_pos_0ac5f93881f906e4_496_read,"openfl.utils._internal.format.amf3.AMF3Reader","read",0xcf214a3d,"openfl.utils._internal.format.amf3.AMF3Reader.read","openfl/utils/_internal/format/amf3/AMF3Reader.hx",496,0xe8923634)
namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf3{

void AMF3Reader_obj::__construct( ::haxe::io::Input i, ::openfl::utils::_internal::format::amf3::AMF3Reader parent){
            	HX_STACKFRAME(&_hx_pos_0ac5f93881f906e4_54_new)
HXLINE(  55)		if (::hx::IsNull( parent )) {
HXLINE(  57)			this->complexObjectsTable = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  58)			this->objectTraitsTable = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  59)			this->stringTable = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  63)			this->complexObjectsTable = parent->complexObjectsTable;
HXLINE(  64)			this->objectTraitsTable = parent->objectTraitsTable;
HXLINE(  65)			this->stringTable = parent->stringTable;
            		}
HXLINE(  67)		this->i = i;
HXLINE(  68)		i->set_bigEndian(true);
            	}

Dynamic AMF3Reader_obj::__CreateEmpty() { return new AMF3Reader_obj; }

void *AMF3Reader_obj::_hx_vtable = 0;

Dynamic AMF3Reader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AMF3Reader_obj > _hx_result = new AMF3Reader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AMF3Reader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09dc9707;
}

 ::openfl::utils::_internal::format::amf3::AMF3Value AMF3Reader_obj::readObject(){
            	HX_GC_STACKFRAME(&_hx_pos_0ac5f93881f906e4_72_readObject)
HXLINE(  73)		bool dyn = false;
HXLINE(  74)		bool isExternalizable = false;
HXLINE(  75)		 ::openfl::utils::_internal::format::amf3::AMF3Value className = null();
HXLINE(  76)		::Array< ::String > sealedMemberNames = ::Array_obj< ::String >::__new();
HXLINE(  78)		int n = this->readInt(null(),null());
HXLINE(  80)		if (((n & 1) == 0)) {
HXLINE(  83)			return this->complexObjectsTable->__get((n >> 1)).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >();
            		}
            		else {
HXLINE(  85)			if (((n & 3) == 1)) {
HXLINE(  88)				n = (n >> 2);
HXLINE( 102)				 ::Dynamic refTraits = this->objectTraitsTable->__get(n);
HXLINE( 103)				dyn = ( (bool)(refTraits->__Field(HX_("isDynamic",b5,1c,14,3a),::hx::paccDynamic)) );
HXLINE( 104)				isExternalizable = ( (bool)(refTraits->__Field(HX_("isExternalizable",20,d8,0d,64),::hx::paccDynamic)) );
HXLINE( 105)				className = refTraits->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic);
HXLINE( 106)				sealedMemberNames = ( (::Array< ::String >)(refTraits->__Field(HX_("sealedMemberNames",d2,88,70,ae),::hx::paccDynamic)) );
            			}
            			else {
HXLINE( 108)				if (((n & 7) == 3)) {
HXLINE( 111)					dyn = (((n >> 3) & 1) == 1);
HXLINE( 112)					n = (n >> 4);
HXLINE( 113)					className = this->readString();
HXLINE( 116)					{
HXLINE( 116)						int _g = 0;
HXDLIN( 116)						int _g1 = n;
HXDLIN( 116)						while((_g < _g1)){
HXLINE( 116)							_g = (_g + 1);
HXDLIN( 116)							int j = (_g - 1);
HXLINE( 117)							sealedMemberNames->push(::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(this->readString()));
            						}
            					}
HXLINE( 120)					this->objectTraitsTable->push( ::Dynamic(::hx::Anon_obj::Create(4)
            						->setFixed(0,HX_("sealedMemberNames",d2,88,70,ae),sealedMemberNames)
            						->setFixed(1,HX_("className",a3,92,3d,dc),className)
            						->setFixed(2,HX_("isDynamic",b5,1c,14,3a),dyn)
            						->setFixed(3,HX_("isExternalizable",20,d8,0d,64),isExternalizable)));
            				}
            				else {
HXLINE( 127)					if (((n & 7) == 7)) {
HXLINE( 130)						isExternalizable = true;
HXLINE( 131)						className = this->readString();
            					}
            					else {
HXLINE( 135)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid object traits",1d,19,36,88)));
            					}
            				}
            			}
            		}
HXLINE( 138)		 ::openfl::utils::_internal::format::amf3::AMF3Value ret = null();
HXLINE( 140)		if (isExternalizable) {
HXLINE( 142)			 ::Dynamic o = ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::object(::openfl::utils::_internal::format::amf3::AMF3Value_obj::AObject(null(),null(),::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(className)));
HXLINE( 144)			bool _hx_tmp;
HXDLIN( 144)			if (::hx::IsNotNull( o )) {
HXLINE( 144)				_hx_tmp = ::Std_obj::isOfType(o,::hx::ClassOf< ::openfl::utils::IExternalizable >());
            			}
            			else {
HXLINE( 144)				_hx_tmp = false;
            			}
HXDLIN( 144)			if (_hx_tmp) {
HXLINE( 146)				::Dynamic external = o;
HXLINE( 147)				::openfl::utils::IExternalizable_obj::readExternal(external, ::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this)));
HXLINE( 149)				ret = ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AExternal(external);
            			}
            			else {
HXLINE( 153)				ret = ::openfl::utils::_internal::format::amf3::AMF3Value_obj::ANull_dyn();
            			}
            		}
            		else {
HXLINE( 158)			 ::haxe::ds::StringMap h =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 160)			::String ret1;
HXDLIN( 160)			if (::hx::IsNotNull( className )) {
HXLINE( 160)				ret1 = ( (::String)(::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(className)) );
            			}
            			else {
HXLINE( 160)				ret1 = null();
            			}
HXDLIN( 160)			ret = ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AObject(h,null(),ret1);
HXLINE( 163)			{
HXLINE( 163)				int _g = 0;
HXDLIN( 163)				int _g1 = sealedMemberNames->length;
HXDLIN( 163)				while((_g < _g1)){
HXLINE( 163)					_g = (_g + 1);
HXDLIN( 163)					int j = (_g - 1);
HXLINE( 164)					{
HXLINE( 164)						 ::openfl::utils::_internal::format::amf3::AMF3Value value = this->read();
HXDLIN( 164)						h->set(sealedMemberNames->__get(j),value);
            					}
            				}
            			}
HXLINE( 167)			if (dyn) {
HXLINE( 169)				 ::Dynamic s;
HXLINE( 170)				while(true){
HXLINE( 172)					s = ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(this->readString());
HXLINE( 173)					if (::hx::IsEq( s,HX_("",00,00,00,00) )) {
HXLINE( 173)						goto _hx_goto_3;
            					}
HXLINE( 174)					h->set(( (::String)(s) ),this->read());
            				}
            				_hx_goto_3:;
            			}
            		}
HXLINE( 180)		this->complexObjectsTable->push(ret);
HXLINE( 182)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3Reader_obj,readObject,return )

 ::openfl::utils::_internal::format::amf3::AMF3Value AMF3Reader_obj::readMap(){
            	HX_GC_STACKFRAME(&_hx_pos_0ac5f93881f906e4_186_readMap)
HXLINE( 187)		int n = this->readInt(null(),null());
HXLINE( 188)		if (((n & 1) == 0)) {
HXLINE( 191)			return this->complexObjectsTable->__get((n >> 1)).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >();
            		}
HXLINE( 193)		n = (n >> 1);
HXLINE( 194)		 ::haxe::ds::EnumValueMap h =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE( 195)		 ::openfl::utils::_internal::format::amf3::AMF3Value ret = ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AMap(h);
HXLINE( 196)		this->complexObjectsTable->push(ret);
HXLINE( 197)		this->i->readByte();
HXLINE( 201)		{
HXLINE( 201)			int _g = 0;
HXDLIN( 201)			int _g1 = n;
HXDLIN( 201)			while((_g < _g1)){
HXLINE( 201)				_g = (_g + 1);
HXDLIN( 201)				int i = (_g - 1);
HXLINE( 202)				{
HXLINE( 202)					 ::openfl::utils::_internal::format::amf3::AMF3Value key = this->read();
HXDLIN( 202)					h->set(key,this->read());
            				}
            			}
            		}
HXLINE( 203)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3Reader_obj,readMap,return )

 ::openfl::utils::_internal::format::amf3::AMF3Value AMF3Reader_obj::readArray(){
            	HX_GC_STACKFRAME(&_hx_pos_0ac5f93881f906e4_207_readArray)
HXLINE( 208)		int n = this->readInt(null(),null());
HXLINE( 209)		if (((n & 1) == 0)) {
HXLINE( 212)			return this->complexObjectsTable->__get((n >> 1)).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >();
            		}
HXLINE( 214)		n = (n >> 1);
HXLINE( 215)		::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 216)		 ::haxe::ds::StringMap m =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 217)		 ::openfl::utils::_internal::format::amf3::AMF3Value ret = ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AArray(a,m);
HXLINE( 218)		this->complexObjectsTable->push(ret);
HXLINE( 219)		::String assocName = ( (::String)(::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(this->readString())) );
HXLINE( 220)		while((assocName.length != 0)){
HXLINE( 223)			{
HXLINE( 223)				 ::openfl::utils::_internal::format::amf3::AMF3Value v = this->read();
HXDLIN( 223)				m->set(assocName,v);
            			}
HXLINE( 226)			assocName = ( (::String)(::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(this->readString())) );
            		}
HXLINE( 228)		{
HXLINE( 228)			int _g = 0;
HXDLIN( 228)			int _g1 = n;
HXDLIN( 228)			while((_g < _g1)){
HXLINE( 228)				_g = (_g + 1);
HXDLIN( 228)				int i = (_g - 1);
HXLINE( 229)				a->push(this->read());
            			}
            		}
HXLINE( 230)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3Reader_obj,readArray,return )

 ::openfl::utils::_internal::format::amf3::AMF3Value AMF3Reader_obj::readIntVector(){
            	HX_GC_STACKFRAME(&_hx_pos_0ac5f93881f906e4_234_readIntVector)
HXLINE( 235)		int header = this->readInt(null(),null());
HXLINE( 236)		if (((header & 1) == 0)) {
HXLINE( 239)			return this->complexObjectsTable->__get((header >> 1)).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >();
            		}
HXLINE( 241)		int len = (header >> 1);
HXLINE( 242)		bool fixed = (this->i->readByte() != 0);
HXLINE( 243)		bool fixed1 = null();
HXDLIN( 243)		::Array< int > array = null();
HXDLIN( 243)		 ::openfl::_Vector::IntVector v =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,len,fixed1,array);
HXLINE( 244)		v->fixed = fixed;
HXLINE( 246)		{
HXLINE( 246)			int _g = 0;
HXDLIN( 246)			int _g1 = len;
HXDLIN( 246)			while((_g < _g1)){
HXLINE( 246)				_g = (_g + 1);
HXDLIN( 246)				int r = (_g - 1);
HXLINE( 248)				v->set(r,this->i->readInt32());
            			}
            		}
HXLINE( 251)		 ::openfl::utils::_internal::format::amf3::AMF3Value ret = ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AIntVector(v);
HXLINE( 253)		this->complexObjectsTable->push(ret);
HXLINE( 255)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3Reader_obj,readIntVector,return )

 ::openfl::utils::_internal::format::amf3::AMF3Value AMF3Reader_obj::readFloatVector(){
            	HX_GC_STACKFRAME(&_hx_pos_0ac5f93881f906e4_259_readFloatVector)
HXLINE( 260)		int header = this->readInt(null(),null());
HXLINE( 261)		if (((header & 1) == 0)) {
HXLINE( 264)			return this->complexObjectsTable->__get((header >> 1)).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >();
            		}
HXLINE( 266)		int len = (header >> 1);
HXLINE( 267)		bool fixed = (this->i->readByte() != 0);
HXLINE( 268)		bool fixed1 = null();
HXDLIN( 268)		::Array< Float > array = null();
HXDLIN( 268)		 ::openfl::_Vector::FloatVector v =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,len,fixed1,array,true);
HXLINE( 269)		v->fixed = fixed;
HXLINE( 271)		{
HXLINE( 271)			int _g = 0;
HXDLIN( 271)			int _g1 = len;
HXDLIN( 271)			while((_g < _g1)){
HXLINE( 271)				_g = (_g + 1);
HXDLIN( 271)				int r = (_g - 1);
HXLINE( 273)				v->set(r,this->i->readDouble());
            			}
            		}
HXLINE( 276)		 ::openfl::utils::_internal::format::amf3::AMF3Value ret = ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AFloatVector(v);
HXLINE( 278)		this->complexObjectsTable->push(ret);
HXLINE( 280)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3Reader_obj,readFloatVector,return )

 ::openfl::utils::_internal::format::amf3::AMF3Value AMF3Reader_obj::readObjectVector(){
            	HX_GC_STACKFRAME(&_hx_pos_0ac5f93881f906e4_284_readObjectVector)
HXLINE( 285)		int header = this->readInt(null(),null());
HXLINE( 286)		if (((header & 1) == 0)) {
HXLINE( 289)			return this->complexObjectsTable->__get((header >> 1)).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >();
            		}
HXLINE( 291)		int len = (header >> 1);
HXLINE( 292)		bool fixed = (this->i->readByte() != 0);
HXLINE( 293)		::String type = ( (::String)(::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(this->readString())) );
HXLINE( 295)		bool fixed1 = null();
HXDLIN( 295)		::Array< ::Dynamic> array = null();
HXDLIN( 295)		 ::openfl::_Vector::ObjectVector v =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,len,fixed1,array,true);
HXLINE( 296)		v->fixed = fixed;
HXLINE( 298)		 ::openfl::utils::_internal::format::amf3::AMF3Value ret = ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AObjectVector(v,type);
HXLINE( 300)		this->complexObjectsTable->push(ret);
HXLINE( 302)		{
HXLINE( 302)			int _g = 0;
HXDLIN( 302)			int _g1 = len;
HXDLIN( 302)			while((_g < _g1)){
HXLINE( 302)				_g = (_g + 1);
HXDLIN( 302)				int r = (_g - 1);
HXLINE( 304)				v->set(r,this->read()).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >();
            			}
            		}
HXLINE( 307)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3Reader_obj,readObjectVector,return )

 ::openfl::utils::_internal::format::amf3::AMF3Value AMF3Reader_obj::readByteArray(){
            	HX_STACKFRAME(&_hx_pos_0ac5f93881f906e4_311_readByteArray)
HXLINE( 312)		int n = this->readInt(null(),null());
HXLINE( 313)		if (((n & 1) == 0)) {
HXLINE( 316)			return this->complexObjectsTable->__get((n >> 1)).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >();
            		}
HXLINE( 318)		n = (n >> 1);
HXLINE( 319)		 ::haxe::io::Bytes b = ::haxe::io::Bytes_obj::alloc(n);
HXLINE( 320)		{
HXLINE( 320)			int _g = 0;
HXDLIN( 320)			int _g1 = n;
HXDLIN( 320)			while((_g < _g1)){
HXLINE( 320)				_g = (_g + 1);
HXDLIN( 320)				int j = (_g - 1);
HXLINE( 321)				{
HXLINE( 321)					int v = this->i->readByte();
HXDLIN( 321)					b->b[j] = ( (unsigned char)(v) );
            				}
            			}
            		}
HXLINE( 322)		 ::openfl::utils::ByteArrayData ba = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(b);
HXLINE( 323)		ba->_hx___endian = 0;
HXLINE( 325)		ba->_hx___amf3Reader = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 327)		 ::openfl::utils::_internal::format::amf3::AMF3Value ret = ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AByteArray(ba);
HXLINE( 328)		this->complexObjectsTable->push(ret);
HXLINE( 329)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3Reader_obj,readByteArray,return )

int AMF3Reader_obj::readInt(::hx::Null< bool >  __o_signExtend,::hx::Null< int >  __o_preShift){
            		bool signExtend = __o_signExtend.Default(false);
            		int preShift = __o_preShift.Default(0);
            	HX_STACKFRAME(&_hx_pos_0ac5f93881f906e4_333_readInt)
HXLINE( 334)		int c = (this->i->readByte() & 255);
HXLINE( 335)		if ((c < 128)) {
HXLINE( 335)			return (c >> preShift);
            		}
HXLINE( 337)		int ret = ((c & 127) << 7);
HXLINE( 338)		c = (this->i->readByte() & 255);
HXLINE( 339)		if ((c < 128)) {
HXLINE( 339)			return ((ret | c) >> preShift);
            		}
HXLINE( 341)		ret = (ret | (c & 127));
HXLINE( 342)		ret = (ret << 7);
HXLINE( 343)		c = (this->i->readByte() & 255);
HXLINE( 344)		if ((c < 128)) {
HXLINE( 344)			return ((ret | c) >> preShift);
            		}
HXLINE( 346)		ret = (ret | (c & 127));
HXLINE( 347)		ret = (ret << 8);
HXLINE( 348)		c = (this->i->readByte() & 255);
HXLINE( 349)		ret = (ret | c);
HXLINE( 351)		bool _hx_tmp;
HXDLIN( 351)		if (signExtend) {
HXLINE( 351)			_hx_tmp = ((ret & 268435456) != 0);
            		}
            		else {
HXLINE( 351)			_hx_tmp = false;
            		}
HXDLIN( 351)		if (_hx_tmp) {
HXLINE( 351)			ret = (ret | -536870912);
            		}
HXLINE( 353)		return (ret >> preShift);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AMF3Reader_obj,readInt,return )

 ::openfl::utils::_internal::format::amf3::AMF3Value AMF3Reader_obj::readString(){
            	HX_STACKFRAME(&_hx_pos_0ac5f93881f906e4_357_readString)
HXLINE( 358)		int header = this->readInt(null(),null());
HXLINE( 359)		if (((header & 1) == 0)) {
HXLINE( 362)			int strRefIdx = (header >> 1);
HXLINE( 363)			return this->stringTable->__get(strRefIdx).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >();
            		}
HXLINE( 366)		int len = (header >> 1);
HXLINE( 367)		return this->readStringNoHeader(len);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3Reader_obj,readString,return )

 ::openfl::utils::_internal::format::amf3::AMF3Value AMF3Reader_obj::readStringNoHeader(int len){
            	HX_STACKFRAME(&_hx_pos_0ac5f93881f906e4_371_readStringNoHeader)
HXLINE( 372)		if ((len == 0)) {
HXLINE( 372)			return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AString(HX_("",00,00,00,00));
            		}
HXLINE( 375)		 ::openfl::utils::_internal::format::amf3::AMF3Value ret = ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AString(this->i->readString(len,::haxe::io::Encoding_obj::UTF8_dyn()));
HXLINE( 418)		this->stringTable->push(ret);
HXLINE( 419)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AMF3Reader_obj,readStringNoHeader,return )

 ::openfl::utils::_internal::format::amf3::AMF3Value AMF3Reader_obj::readDate(){
            	HX_STACKFRAME(&_hx_pos_0ac5f93881f906e4_423_readDate)
HXLINE( 424)		int n = this->readInt(null(),null());
HXLINE( 425)		if (((n & 1) == 0)) {
HXLINE( 428)			return this->complexObjectsTable->__get((n >> 1)).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >();
            		}
HXLINE( 430)		 ::Date date = ::Date_obj::fromTime(this->i->readDouble());
HXLINE( 431)		 ::openfl::utils::_internal::format::amf3::AMF3Value ret = ::openfl::utils::_internal::format::amf3::AMF3Value_obj::ADate(date);
HXLINE( 432)		this->complexObjectsTable->push(ret);
HXLINE( 433)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3Reader_obj,readDate,return )

 ::openfl::utils::_internal::format::amf3::AMF3Value AMF3Reader_obj::readXml(){
            	HX_STACKFRAME(&_hx_pos_0ac5f93881f906e4_437_readXml)
HXLINE( 438)		int n = this->readInt(null(),null());
HXLINE( 439)		if (((n & 1) == 0)) {
HXLINE( 442)			return this->complexObjectsTable->__get((n >> 1)).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >();
            		}
HXLINE( 444)		n = (n >> 1);
HXLINE( 445)		 ::Xml xml = ::Xml_obj::parse(( (::String)(::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(this->readStringNoHeader(n))) ));
HXLINE( 446)		 ::openfl::utils::_internal::format::amf3::AMF3Value ret = ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AXml(xml);
HXLINE( 447)		this->complexObjectsTable->push(ret);
HXLINE( 448)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3Reader_obj,readXml,return )

 ::openfl::utils::_internal::format::amf3::AMF3Value AMF3Reader_obj::readWithCode(int id){
            	HX_STACKFRAME(&_hx_pos_0ac5f93881f906e4_452_readWithCode)
HXLINE( 453)		 ::haxe::io::Input i = this->i;
HXLINE( 454)		switch((int)(id)){
            			case (int)0: {
HXLINE( 457)				return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AUndefined_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE( 459)				return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::ANull_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE( 461)				return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::ABool(false);
            			}
            			break;
            			case (int)3: {
HXLINE( 463)				return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::ABool(true);
            			}
            			break;
            			case (int)4: {
HXLINE( 465)				return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AInt(this->readInt(true,null()));
            			}
            			break;
            			case (int)5: {
HXLINE( 467)				return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::ANumber(i->readDouble());
            			}
            			break;
            			case (int)6: {
HXLINE( 469)				return this->readString();
            			}
            			break;
            			case (int)7: {
HXLINE( 471)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("XMLDocument unsupported",87,e7,77,60)));
            			}
            			break;
            			case (int)8: {
HXLINE( 473)				return this->readDate();
            			}
            			break;
            			case (int)9: {
HXLINE( 475)				return this->readArray();
            			}
            			break;
            			case (int)10: {
HXLINE( 477)				return this->readObject();
            			}
            			break;
            			case (int)11: {
HXLINE( 479)				return this->readXml();
            			}
            			break;
            			case (int)12: {
HXLINE( 481)				return this->readByteArray();
            			}
            			break;
            			case (int)13: case (int)14: {
HXLINE( 483)				return this->readIntVector();
            			}
            			break;
            			case (int)15: {
HXLINE( 485)				return this->readFloatVector();
            			}
            			break;
            			case (int)16: {
HXLINE( 487)				return this->readObjectVector();
            			}
            			break;
            			case (int)17: {
HXLINE( 489)				return this->readMap();
            			}
            			break;
            			default:{
HXLINE( 491)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unknown AMF ",7c,2d,9c,eb) + id)));
            			}
            		}
HXLINE( 454)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AMF3Reader_obj,readWithCode,return )

 ::openfl::utils::_internal::format::amf3::AMF3Value AMF3Reader_obj::read(){
            	HX_STACKFRAME(&_hx_pos_0ac5f93881f906e4_496_read)
HXLINE( 497)		int byte = this->i->readByte();
HXLINE( 498)		return this->readWithCode(byte);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3Reader_obj,read,return )


::hx::ObjectPtr< AMF3Reader_obj > AMF3Reader_obj::__new( ::haxe::io::Input i, ::openfl::utils::_internal::format::amf3::AMF3Reader parent) {
	::hx::ObjectPtr< AMF3Reader_obj > __this = new AMF3Reader_obj();
	__this->__construct(i,parent);
	return __this;
}

::hx::ObjectPtr< AMF3Reader_obj > AMF3Reader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i, ::openfl::utils::_internal::format::amf3::AMF3Reader parent) {
	AMF3Reader_obj *__this = (AMF3Reader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AMF3Reader_obj), true, "openfl.utils._internal.format.amf3.AMF3Reader"));
	*(void **)__this = AMF3Reader_obj::_hx_vtable;
	__this->__construct(i,parent);
	return __this;
}

AMF3Reader_obj::AMF3Reader_obj()
{
}

void AMF3Reader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AMF3Reader);
	HX_MARK_MEMBER_NAME(complexObjectsTable,"complexObjectsTable");
	HX_MARK_MEMBER_NAME(objectTraitsTable,"objectTraitsTable");
	HX_MARK_MEMBER_NAME(stringTable,"stringTable");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_END_CLASS();
}

void AMF3Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(complexObjectsTable,"complexObjectsTable");
	HX_VISIT_MEMBER_NAME(objectTraitsTable,"objectTraitsTable");
	HX_VISIT_MEMBER_NAME(stringTable,"stringTable");
	HX_VISIT_MEMBER_NAME(i,"i");
}

::hx::Val AMF3Reader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readMap") ) { return ::hx::Val( readMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return ::hx::Val( readInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"readXml") ) { return ::hx::Val( readXml_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readDate") ) { return ::hx::Val( readDate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readArray") ) { return ::hx::Val( readArray_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readObject") ) { return ::hx::Val( readObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"readString") ) { return ::hx::Val( readString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stringTable") ) { return ::hx::Val( stringTable ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readWithCode") ) { return ::hx::Val( readWithCode_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readIntVector") ) { return ::hx::Val( readIntVector_dyn() ); }
		if (HX_FIELD_EQ(inName,"readByteArray") ) { return ::hx::Val( readByteArray_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readFloatVector") ) { return ::hx::Val( readFloatVector_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readObjectVector") ) { return ::hx::Val( readObjectVector_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"objectTraitsTable") ) { return ::hx::Val( objectTraitsTable ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"readStringNoHeader") ) { return ::hx::Val( readStringNoHeader_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"complexObjectsTable") ) { return ::hx::Val( complexObjectsTable ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AMF3Reader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stringTable") ) { stringTable=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"objectTraitsTable") ) { objectTraitsTable=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"complexObjectsTable") ) { complexObjectsTable=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AMF3Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("complexObjectsTable",ea,78,ad,35));
	outFields->push(HX_("objectTraitsTable",6a,ac,0b,09));
	outFields->push(HX_("stringTable",7d,69,e6,15));
	outFields->push(HX_("i",69,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AMF3Reader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AMF3Reader_obj,complexObjectsTable),HX_("complexObjectsTable",ea,78,ad,35)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AMF3Reader_obj,objectTraitsTable),HX_("objectTraitsTable",6a,ac,0b,09)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AMF3Reader_obj,stringTable),HX_("stringTable",7d,69,e6,15)},
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(AMF3Reader_obj,i),HX_("i",69,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AMF3Reader_obj_sStaticStorageInfo = 0;
#endif

static ::String AMF3Reader_obj_sMemberFields[] = {
	HX_("complexObjectsTable",ea,78,ad,35),
	HX_("objectTraitsTable",6a,ac,0b,09),
	HX_("stringTable",7d,69,e6,15),
	HX_("i",69,00,00,00),
	HX_("readObject",b5,62,bb,0e),
	HX_("readMap",e6,b0,cc,02),
	HX_("readArray",63,ba,76,f6),
	HX_("readIntVector",dc,88,cb,4f),
	HX_("readFloatVector",c9,07,d7,65),
	HX_("readObjectVector",58,fd,0f,b7),
	HX_("readByteArray",3b,bb,32,4f),
	HX_("readInt",39,b3,c9,02),
	HX_("readString",c7,0c,ac,0a),
	HX_("readStringNoHeader",95,6c,02,88),
	HX_("readDate",a4,30,5b,6a),
	HX_("readXml",21,14,d5,02),
	HX_("readWithCode",c9,1b,a6,4f),
	HX_("read",56,4b,a7,4b),
	::String(null()) };

::hx::Class AMF3Reader_obj::__mClass;

void AMF3Reader_obj::__register()
{
	AMF3Reader_obj _hx_dummy;
	AMF3Reader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._internal.format.amf3.AMF3Reader",e7,ca,48,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AMF3Reader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AMF3Reader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AMF3Reader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AMF3Reader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf3
