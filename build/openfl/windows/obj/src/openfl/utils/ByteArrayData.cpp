#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_CompressionAlgorithm
#include <lime/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_openfl_errors_EOFError
#include <openfl/errors/EOFError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
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
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFReader
#include <openfl/utils/_internal/format/amf/AMFReader.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFTools
#include <openfl/utils/_internal/format/amf/AMFTools.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFValue
#include <openfl/utils/_internal/format/amf/AMFValue.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFWriter
#include <openfl/utils/_internal/format/amf/AMFWriter.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Reader
#include <openfl/utils/_internal/format/amf3/AMF3Reader.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Tools
#include <openfl/utils/_internal/format/amf3/AMF3Tools.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Value
#include <openfl/utils/_internal/format/amf3/AMF3Value.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Writer
#include <openfl/utils/_internal/format/amf3/AMF3Writer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1204_new,"openfl.utils.ByteArrayData","new",0x36383a32,"openfl.utils.ByteArrayData.new","openfl/utils/ByteArray.hx",1204,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1233_clear,"openfl.utils.ByteArrayData","clear",0x0f8b73df,"openfl.utils.ByteArrayData.clear","openfl/utils/ByteArray.hx",1233,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1239_compress,"openfl.utils.ByteArrayData","compress",0xe3300490,"openfl.utils.ByteArrayData.compress","openfl/utils/ByteArray.hx",1239,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1274_deflate,"openfl.utils.ByteArrayData","deflate",0x97ecc63d,"openfl.utils.ByteArrayData.deflate","openfl/utils/ByteArray.hx",1274,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1293_inflate,"openfl.utils.ByteArrayData","inflate",0x010e5759,"openfl.utils.ByteArrayData.inflate","openfl/utils/ByteArray.hx",1293,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1310_readBoolean,"openfl.utils.ByteArrayData","readBoolean",0x98e809c4,"openfl.utils.ByteArrayData.readBoolean","openfl/utils/ByteArray.hx",1310,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1322_readByte,"openfl.utils.ByteArrayData","readByte",0xc88bb66c,"openfl.utils.ByteArrayData.readByte","openfl/utils/ByteArray.hx",1322,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1336_readBytes,"openfl.utils.ByteArrayData","readBytes",0xb1b3e887,"openfl.utils.ByteArrayData.readBytes","openfl/utils/ByteArray.hx",1336,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1355_readDouble,"openfl.utils.ByteArrayData","readDouble",0xd7136375,"openfl.utils.ByteArrayData.readDouble","openfl/utils/ByteArray.hx",1355,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1377_readFloat,"openfl.utils.ByteArrayData","readFloat",0xf6b2a5b8,"openfl.utils.ByteArrayData.readFloat","openfl/utils/ByteArray.hx",1377,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1395_readInt,"openfl.utils.ByteArrayData","readInt",0xf7bc6e0b,"openfl.utils.ByteArrayData.readInt","openfl/utils/ByteArray.hx",1395,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1412_readInt64,"openfl.utils.ByteArrayData","readInt64",0xb23c7609,"openfl.utils.ByteArrayData.readInt64","openfl/utils/ByteArray.hx",1412,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1437_readMultiByte,"openfl.utils.ByteArrayData","readMultiByte",0x011f243d,"openfl.utils.ByteArrayData.readMultiByte","openfl/utils/ByteArray.hx",1437,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1442_readObject,"openfl.utils.ByteArrayData","readObject",0xb987b723,"openfl.utils.ByteArrayData.readObject","openfl/utils/ByteArray.hx",1442,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1472_readShort,"openfl.utils.ByteArrayData","readShort",0x70436498,"openfl.utils.ByteArrayData.readShort","openfl/utils/ByteArray.hx",1472,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1499_readUnsignedByte,"openfl.utils.ByteArrayData","readUnsignedByte",0x50ca6601,"openfl.utils.ByteArrayData.readUnsignedByte","openfl/utils/ByteArray.hx",1499,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1511_readUnsignedInt,"openfl.utils.ByteArrayData","readUnsignedInt",0xac948816,"openfl.utils.ByteArrayData.readUnsignedInt","openfl/utils/ByteArray.hx",1511,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1528_readUnsignedShort,"openfl.utils.ByteArrayData","readUnsignedShort",0x1ede5763,"openfl.utils.ByteArrayData.readUnsignedShort","openfl/utils/ByteArray.hx",1528,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1543_readUTF,"openfl.utils.ByteArrayData","readUTF",0xf7c57243,"openfl.utils.ByteArrayData.readUTF","openfl/utils/ByteArray.hx",1543,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1549_readUTFBytes,"openfl.utils.ByteArrayData","readUTFBytes",0x87ebf328,"openfl.utils.ByteArrayData.readUTFBytes","openfl/utils/ByteArray.hx",1549,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1561_uncompress,"openfl.utils.ByteArrayData","uncompress",0xb44f8369,"openfl.utils.ByteArrayData.uncompress","openfl/utils/ByteArray.hx",1561,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1597_writeBoolean,"openfl.utils.ByteArrayData","writeBoolean",0x790a5b77,"openfl.utils.ByteArrayData.writeBoolean","openfl/utils/ByteArray.hx",1597,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1601_writeByte,"openfl.utils.ByteArrayData","writeByte",0x6d0ba6d9,"openfl.utils.ByteArrayData.writeByte","openfl/utils/ByteArray.hx",1601,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1607_writeBytes,"openfl.utils.ByteArrayData","writeBytes",0xfd26577a,"openfl.utils.ByteArrayData.writeBytes","openfl/utils/ByteArray.hx",1607,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1618_writeDouble,"openfl.utils.ByteArrayData","writeDouble",0x8fc20922,"openfl.utils.ByteArrayData.writeDouble","openfl/utils/ByteArray.hx",1618,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1635_writeFloat,"openfl.utils.ByteArrayData","writeFloat",0x422514ab,"openfl.utils.ByteArrayData.writeFloat","openfl/utils/ByteArray.hx",1635,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1649_writeInt,"openfl.utils.ByteArrayData","writeInt",0x83612a3e,"openfl.utils.ByteArrayData.writeInt","openfl/utils/ByteArray.hx",1649,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1670_writeInt64,"openfl.utils.ByteArrayData","writeInt64",0xfdaee4fc,"openfl.utils.ByteArrayData.writeInt64","openfl/utils/ByteArray.hx",1670,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1684_writeMultiByte,"openfl.utils.ByteArrayData","writeMultiByte",0xebbf88b0,"openfl.utils.ByteArrayData.writeMultiByte","openfl/utils/ByteArray.hx",1684,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1689_writeObject,"openfl.utils.ByteArrayData","writeObject",0x72365cd0,"openfl.utils.ByteArrayData.writeObject","openfl/utils/ByteArray.hx",1689,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1728_writeShort,"openfl.utils.ByteArrayData","writeShort",0xbbb5d38b,"openfl.utils.ByteArrayData.writeShort","openfl/utils/ByteArray.hx",1728,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1745_writeUnsignedInt,"openfl.utils.ByteArrayData","writeUnsignedInt",0xcb6d2f49,"openfl.utils.ByteArrayData.writeUnsignedInt","openfl/utils/ByteArray.hx",1745,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1749_writeUTF,"openfl.utils.ByteArrayData","writeUTF",0x836a2e76,"openfl.utils.ByteArrayData.writeUTF","openfl/utils/ByteArray.hx",1749,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1757_writeUTFBytes,"openfl.utils.ByteArrayData","writeUTFBytes",0xc5d11e15,"openfl.utils.ByteArrayData.writeUTFBytes","openfl/utils/ByteArray.hx",1757,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1763___fromBytes,"openfl.utils.ByteArrayData","__fromBytes",0x684ac753,"openfl.utils.ByteArrayData.__fromBytes","openfl/utils/ByteArray.hx",1763,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1769___resize,"openfl.utils.ByteArrayData","__resize",0x101b8202,"openfl.utils.ByteArrayData.__resize","openfl/utils/ByteArray.hx",1769,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1795___setData,"openfl.utils.ByteArrayData","__setData",0xac6a7b1e,"openfl.utils.ByteArrayData.__setData","openfl/utils/ByteArray.hx",1795,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1816_get_bytesAvailable,"openfl.utils.ByteArrayData","get_bytesAvailable",0x68329f15,"openfl.utils.ByteArrayData.get_bytesAvailable","openfl/utils/ByteArray.hx",1816,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1849_get_endian,"openfl.utils.ByteArrayData","get_endian",0x95dc5cd2,"openfl.utils.ByteArrayData.get_endian","openfl/utils/ByteArray.hx",1849,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1854_set_endian,"openfl.utils.ByteArrayData","set_endian",0x9959fb46,"openfl.utils.ByteArrayData.set_endian","openfl/utils/ByteArray.hx",1854,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1860_get___length,"openfl.utils.ByteArrayData","get___length",0x322d7ffd,"openfl.utils.ByteArrayData.get___length","openfl/utils/ByteArray.hx",1860,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1865_set___length,"openfl.utils.ByteArrayData","set___length",0x4726a371,"openfl.utils.ByteArrayData.set___length","openfl/utils/ByteArray.hx",1865,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1285_fromBytes,"openfl.utils.ByteArrayData","fromBytes",0x955585f3,"openfl.utils.ByteArrayData.fromBytes","openfl/utils/ByteArray.hx",1285,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1820_get_defaultEndian,"openfl.utils.ByteArrayData","get_defaultEndian",0xa344ace5,"openfl.utils.ByteArrayData.get_defaultEndian","openfl/utils/ByteArray.hx",1820,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1844_set_defaultEndian,"openfl.utils.ByteArrayData","set_defaultEndian",0xc6b284f1,"openfl.utils.ByteArrayData.set_defaultEndian","openfl/utils/ByteArray.hx",1844,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1139_boot,"openfl.utils.ByteArrayData","boot",0x3313b220,"openfl.utils.ByteArrayData.boot","openfl/utils/ByteArray.hx",1139,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1142_boot,"openfl.utils.ByteArrayData","boot",0x3313b220,"openfl.utils.ByteArrayData.boot","openfl/utils/ByteArray.hx",1142,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1143_boot,"openfl.utils.ByteArrayData","boot",0x3313b220,"openfl.utils.ByteArrayData.boot","openfl/utils/ByteArray.hx",1143,0xaa5cee4a)
namespace openfl{
namespace utils{

void ByteArrayData_obj::__construct(::hx::Null< int >  __o_length){
            		int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1204_new)
HXLINE(1205)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(length);
HXLINE(1208)		if ((length > 0)) {
HXLINE(1210)			bytes->fill(0,length,0);
            		}
HXLINE(1219)		super::__construct(length,bytes->b);
HXLINE(1225)		this->_hx___allocated = length;
HXLINE(1227)		{
HXLINE(1227)			if (::hx::IsNull( ::openfl::utils::ByteArrayData_obj::_hx___defaultEndian )) {
HXLINE(1227)				if (::hx::IsPointerEq( ::lime::_hx_system::System_obj::get_endianness(),::lime::_hx_system::Endian_obj::_hx_LITTLE_ENDIAN_dyn() )) {
HXLINE(1227)					::openfl::utils::ByteArrayData_obj::_hx___defaultEndian = 1;
            				}
            				else {
HXLINE(1227)					::openfl::utils::ByteArrayData_obj::_hx___defaultEndian = 0;
            				}
            			}
HXDLIN(1227)			this->_hx___endian = ::openfl::utils::ByteArrayData_obj::_hx___defaultEndian;
            		}
HXLINE(1228)		this->objectEncoding = ::openfl::utils::ByteArrayData_obj::defaultObjectEncoding;
HXLINE(1229)		this->position = 0;
            	}

Dynamic ByteArrayData_obj::__CreateEmpty() { return new ByteArrayData_obj; }

void *ByteArrayData_obj::_hx_vtable = 0;

Dynamic ByteArrayData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ByteArrayData_obj > _hx_result = new ByteArrayData_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ByteArrayData_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12ff8ebe) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x12ff8ebe;
	} else {
		return inClassId==(int)0x195c64b7;
	}
}

static ::openfl::utils::IDataOutput_obj _hx_openfl_utils_ByteArrayData__hx_openfl_utils_IDataOutput= {
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::get_endian,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::openfl::utils::ByteArrayData_obj::set_endian,
	( void (::hx::Object::*)(bool))&::openfl::utils::ByteArrayData_obj::writeBoolean,
	( void (::hx::Object::*)(int))&::openfl::utils::ByteArrayData_obj::writeByte,
	( void (::hx::Object::*)( ::openfl::utils::ByteArrayData,::hx::Null< int > ,::hx::Null< int > ))&::openfl::utils::ByteArrayData_obj::writeBytes,
	( void (::hx::Object::*)(Float))&::openfl::utils::ByteArrayData_obj::writeDouble,
	( void (::hx::Object::*)(Float))&::openfl::utils::ByteArrayData_obj::writeFloat,
	( void (::hx::Object::*)(int))&::openfl::utils::ByteArrayData_obj::writeInt,
	( void (::hx::Object::*)(::String,::String))&::openfl::utils::ByteArrayData_obj::writeMultiByte,
	( void (::hx::Object::*)( ::Dynamic))&::openfl::utils::ByteArrayData_obj::writeObject,
	( void (::hx::Object::*)(int))&::openfl::utils::ByteArrayData_obj::writeShort,
	( void (::hx::Object::*)(int))&::openfl::utils::ByteArrayData_obj::writeUnsignedInt,
	( void (::hx::Object::*)(::String))&::openfl::utils::ByteArrayData_obj::writeUTF,
	( void (::hx::Object::*)(::String))&::openfl::utils::ByteArrayData_obj::writeUTFBytes,
};

static ::openfl::utils::IDataInput_obj _hx_openfl_utils_ByteArrayData__hx_openfl_utils_IDataInput= {
	( int (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::get_bytesAvailable,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::get_endian,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::openfl::utils::ByteArrayData_obj::set_endian,
	( bool (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readBoolean,
	( int (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readByte,
	( void (::hx::Object::*)( ::openfl::utils::ByteArrayData,::hx::Null< int > ,::hx::Null< int > ))&::openfl::utils::ByteArrayData_obj::readBytes,
	( Float (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readDouble,
	( Float (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readFloat,
	( int (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readInt,
	( ::String (::hx::Object::*)(int,::String))&::openfl::utils::ByteArrayData_obj::readMultiByte,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readObject,
	( int (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readShort,
	( int (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readUnsignedByte,
	( int (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readUnsignedInt,
	( int (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readUnsignedShort,
	( ::String (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readUTF,
	( ::String (::hx::Object::*)(int))&::openfl::utils::ByteArrayData_obj::readUTFBytes,
};

void *ByteArrayData_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x948d2d33: return &_hx_openfl_utils_ByteArrayData__hx_openfl_utils_IDataOutput;
		case (int)0xbeb9f218: return &_hx_openfl_utils_ByteArrayData__hx_openfl_utils_IDataInput;
	}
	return super::_hx_getInterface(inHash);
}

void ByteArrayData_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1233_clear)
HXLINE(1234)		this->length = 0;
HXLINE(1235)		this->position = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,clear,(void))

void ByteArrayData_obj::compress( ::Dynamic __o_algorithm){
            		 ::Dynamic algorithm = __o_algorithm;
            		if (::hx::IsNull(__o_algorithm)) algorithm = 2;
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1239_compress)
HXLINE(1253)		 ::haxe::io::Bytes limeBytes = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1255)		 ::haxe::io::Bytes bytes;
HXDLIN(1255)		 ::Dynamic _hx_switch_0 = algorithm;
            		if (  (_hx_switch_0==0) ){
HXLINE(1255)			bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::compress(limeBytes,::lime::utils::CompressionAlgorithm_obj::DEFLATE_dyn());
HXDLIN(1255)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(1255)			bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::compress(limeBytes,::lime::utils::CompressionAlgorithm_obj::LZMA_dyn());
HXDLIN(1255)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(1255)			bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::compress(limeBytes,::lime::utils::CompressionAlgorithm_obj::ZLIB_dyn());
            		}
            		_hx_goto_2:;
HXLINE(1262)		if (::hx::IsNotNull( bytes )) {
HXLINE(1264)			{
HXLINE(1264)				this->b = bytes->b;
HXDLIN(1264)				this->_hx___allocated = bytes->length;
            			}
HXLINE(1266)			this->length = this->_hx___allocated;
HXLINE(1267)			this->position = this->length;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,compress,(void))

void ByteArrayData_obj::deflate(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1274_deflate)
HXDLIN(1274)		this->compress(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,deflate,(void))

void ByteArrayData_obj::inflate(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1293_inflate)
HXDLIN(1293)		this->uncompress(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,inflate,(void))

bool ByteArrayData_obj::readBoolean(){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1310_readBoolean)
HXDLIN(1310)		if ((this->position < this->length)) {
HXLINE(1312)			return (this->b->__get(this->position++) != 0);
            		}
            		else {
HXLINE(1316)			HX_STACK_DO_THROW( ::openfl::errors::EOFError_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE(1310)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readBoolean,return )

int ByteArrayData_obj::readByte(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1322_readByte)
HXLINE(1323)		int value = this->readUnsignedByte();
HXLINE(1325)		if (((value & 128) != 0)) {
HXLINE(1327)			return (value - 256);
            		}
            		else {
HXLINE(1331)			return value;
            		}
HXLINE(1325)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readByte,return )

void ByteArrayData_obj::readBytes( ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  __o_offset,::hx::Null< int >  __o_length){
            		int offset = __o_offset.Default(0);
            		int length = __o_length.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1336_readBytes)
HXLINE(1337)		if ((length == 0)) {
HXLINE(1337)			length = (this->length - this->position);
            		}
HXLINE(1339)		if (((this->position + length) > this->length)) {
HXLINE(1341)			HX_STACK_DO_THROW( ::openfl::errors::EOFError_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE(1344)		if ((bytes->length < (offset + length))) {
HXLINE(1346)			bytes->_hx___resize((offset + length));
            		}
HXLINE(1349)		bytes->blit(offset,::hx::ObjectPtr<OBJ_>(this),this->position,length);
HXLINE(1350)		 ::openfl::utils::ByteArrayData _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1350)		_hx_tmp->position = (_hx_tmp->position + length);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ByteArrayData_obj,readBytes,(void))

Float ByteArrayData_obj::readDouble(){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1355_readDouble)
HXDLIN(1355)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1357)			if (((this->position + 8) > this->length)) {
HXLINE(1359)				HX_STACK_DO_THROW( ::openfl::errors::EOFError_obj::__alloc( HX_CTX ,null(),null()));
            			}
HXLINE(1363)			 ::openfl::utils::ByteArrayData _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1363)			_hx_tmp->position = (_hx_tmp->position + 8);
HXLINE(1364)			int pos = (this->position - 8);
HXDLIN(1364)			bool _hx_tmp1;
HXDLIN(1364)			if ((pos >= 0)) {
HXLINE(1364)				_hx_tmp1 = ((pos + 8) > this->length);
            			}
            			else {
HXLINE(1364)				_hx_tmp1 = true;
            			}
HXDLIN(1364)			if (_hx_tmp1) {
HXLINE(1364)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            			}
HXDLIN(1364)			return  ::__hxcpp_memory_get_double(this->b,pos);
            		}
            		else {
HXLINE(1368)			int ch1 = this->readInt();
HXLINE(1369)			int ch2 = this->readInt();
HXLINE(1371)			return ::haxe::io::FPHelper_obj::i64ToDouble(ch2,ch1);
            		}
HXLINE(1355)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readDouble,return )

Float ByteArrayData_obj::readFloat(){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1377_readFloat)
HXDLIN(1377)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1379)			if (((this->position + 4) > this->length)) {
HXLINE(1381)				HX_STACK_DO_THROW( ::openfl::errors::EOFError_obj::__alloc( HX_CTX ,null(),null()));
            			}
HXLINE(1385)			 ::openfl::utils::ByteArrayData _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1385)			_hx_tmp->position = (_hx_tmp->position + 4);
HXLINE(1386)			int pos = (this->position - 4);
HXDLIN(1386)			bool _hx_tmp1;
HXDLIN(1386)			if ((pos >= 0)) {
HXLINE(1386)				_hx_tmp1 = ((pos + 4) > this->length);
            			}
            			else {
HXLINE(1386)				_hx_tmp1 = true;
            			}
HXDLIN(1386)			if (_hx_tmp1) {
HXLINE(1386)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            			}
HXDLIN(1386)			return  ::__hxcpp_memory_get_float(this->b,pos);
            		}
            		else {
HXLINE(1390)			return ::haxe::io::FPHelper_obj::i32ToFloat(this->readInt());
            		}
HXLINE(1377)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readFloat,return )

int ByteArrayData_obj::readInt(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1395_readInt)
HXLINE(1396)		int ch1 = this->readUnsignedByte();
HXLINE(1397)		int ch2 = this->readUnsignedByte();
HXLINE(1398)		int ch3 = this->readUnsignedByte();
HXLINE(1399)		int ch4 = this->readUnsignedByte();
HXLINE(1401)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1403)			return ((((ch4 << 24) | (ch3 << 16)) | (ch2 << 8)) | ch1);
            		}
            		else {
HXLINE(1407)			return ((((ch1 << 24) | (ch2 << 16)) | (ch3 << 8)) | ch4);
            		}
HXLINE(1401)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readInt,return )

 cpp::Int64Struct ByteArrayData_obj::readInt64(){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1412_readInt64)
HXLINE(1413)		if (((this->position + 8) > this->length)) {
HXLINE(1415)			HX_STACK_DO_THROW( ::openfl::errors::EOFError_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE(1418)		int high;
HXLINE(1419)		int low;
HXLINE(1421)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1423)			low = this->readUnsignedInt();
HXLINE(1424)			high = this->readUnsignedInt();
            		}
            		else {
HXLINE(1428)			high = this->readUnsignedInt();
HXLINE(1429)			low = this->readUnsignedInt();
            		}
HXLINE(1432)		return _hx_int64_make(high,low);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readInt64,return )

::String ByteArrayData_obj::readMultiByte(int length,::String charSet){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1437_readMultiByte)
HXDLIN(1437)		return this->readUTFBytes(length);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ByteArrayData_obj,readMultiByte,return )

 ::Dynamic ByteArrayData_obj::readObject(){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1442_readObject)
HXDLIN(1442)		switch((int)(this->objectEncoding)){
            			case (int)0: {
HXLINE(1445)				 ::haxe::io::BytesInput input =  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),this->position,null());
HXLINE(1446)				 ::openfl::utils::_internal::format::amf::AMFReader reader =  ::openfl::utils::_internal::format::amf::AMFReader_obj::__alloc( HX_CTX ,input);
HXLINE(1447)				 ::Dynamic data = ::openfl::utils::_internal::format::amf::AMFTools_obj::unwrapValue(reader->read());
HXLINE(1448)				this->position = input->pos;
HXLINE(1449)				return data;
            			}
            			break;
            			case (int)3: {
HXLINE(1452)				 ::haxe::io::BytesInput input =  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),this->position,null());
HXLINE(1453)				 ::openfl::utils::_internal::format::amf3::AMF3Reader reader =  ::openfl::utils::_internal::format::amf3::AMF3Reader_obj::__alloc( HX_CTX ,input,this->_hx___amf3Reader);
HXLINE(1454)				 ::Dynamic data = ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(reader->read());
HXLINE(1455)				this->position = input->pos;
HXLINE(1456)				return data;
            			}
            			break;
            			case (int)10: {
HXLINE(1459)				::String data = this->readUTF();
HXLINE(1460)				return ::haxe::Unserializer_obj::run(data);
            			}
            			break;
            			case (int)12: {
HXLINE(1463)				::String data = this->readUTF();
HXLINE(1464)				return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,data)->doParse();
            			}
            			break;
            			default:{
HXLINE(1467)				return null();
            			}
            		}
HXLINE(1442)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readObject,return )

int ByteArrayData_obj::readShort(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1472_readShort)
HXLINE(1473)		int ch1 = this->readUnsignedByte();
HXLINE(1474)		int ch2 = this->readUnsignedByte();
HXLINE(1476)		int value;
HXLINE(1478)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1480)			value = ((ch2 << 8) | ch1);
            		}
            		else {
HXLINE(1484)			value = ((ch1 << 8) | ch2);
            		}
HXLINE(1487)		if (((value & 32768) != 0)) {
HXLINE(1489)			return (value - 65536);
            		}
            		else {
HXLINE(1493)			return value;
            		}
HXLINE(1487)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readShort,return )

int ByteArrayData_obj::readUnsignedByte(){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1499_readUnsignedByte)
HXDLIN(1499)		if ((this->position < this->length)) {
HXLINE(1501)			return ( (int)(this->b->__get(this->position++)) );
            		}
            		else {
HXLINE(1505)			HX_STACK_DO_THROW( ::openfl::errors::EOFError_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE(1499)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedByte,return )

int ByteArrayData_obj::readUnsignedInt(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1511_readUnsignedInt)
HXLINE(1512)		int ch1 = this->readUnsignedByte();
HXLINE(1513)		int ch2 = this->readUnsignedByte();
HXLINE(1514)		int ch3 = this->readUnsignedByte();
HXLINE(1515)		int ch4 = this->readUnsignedByte();
HXLINE(1517)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1519)			return ((((ch4 << 24) | (ch3 << 16)) | (ch2 << 8)) | ch1);
            		}
            		else {
HXLINE(1523)			return ((((ch1 << 24) | (ch2 << 16)) | (ch3 << 8)) | ch4);
            		}
HXLINE(1517)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedInt,return )

int ByteArrayData_obj::readUnsignedShort(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1528_readUnsignedShort)
HXLINE(1529)		int ch1 = this->readUnsignedByte();
HXLINE(1530)		int ch2 = this->readUnsignedByte();
HXLINE(1532)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1534)			return ((ch2 << 8) + ch1);
            		}
            		else {
HXLINE(1538)			return ((ch1 << 8) | ch2);
            		}
HXLINE(1532)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedShort,return )

::String ByteArrayData_obj::readUTF(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1543_readUTF)
HXLINE(1544)		int bytesCount = this->readUnsignedShort();
HXLINE(1545)		return this->readUTFBytes(bytesCount);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUTF,return )

::String ByteArrayData_obj::readUTFBytes(int length){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1549_readUTFBytes)
HXLINE(1550)		if (((this->position + length) > this->length)) {
HXLINE(1552)			HX_STACK_DO_THROW( ::openfl::errors::EOFError_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE(1555)		 ::openfl::utils::ByteArrayData _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1555)		_hx_tmp->position = (_hx_tmp->position + length);
HXLINE(1557)		return this->getString((this->position - length),length,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,readUTFBytes,return )

void ByteArrayData_obj::uncompress( ::Dynamic __o_algorithm){
            		 ::Dynamic algorithm = __o_algorithm;
            		if (::hx::IsNull(__o_algorithm)) algorithm = 2;
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1561_uncompress)
HXLINE(1575)		 ::haxe::io::Bytes limeBytes = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1577)		 ::haxe::io::Bytes bytes;
HXDLIN(1577)		 ::Dynamic _hx_switch_0 = algorithm;
            		if (  (_hx_switch_0==0) ){
HXLINE(1577)			bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::decompress(limeBytes,::lime::utils::CompressionAlgorithm_obj::DEFLATE_dyn());
HXDLIN(1577)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(1577)			bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::decompress(limeBytes,::lime::utils::CompressionAlgorithm_obj::LZMA_dyn());
HXDLIN(1577)			goto _hx_goto_21;
            		}
            		/* default */{
HXLINE(1577)			bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::decompress(limeBytes,::lime::utils::CompressionAlgorithm_obj::ZLIB_dyn());
            		}
            		_hx_goto_21:;
HXLINE(1584)		if (::hx::IsNotNull( bytes )) {
HXLINE(1586)			{
HXLINE(1586)				this->b = bytes->b;
HXDLIN(1586)				this->_hx___allocated = bytes->length;
            			}
HXLINE(1588)			this->length = this->_hx___allocated;
            		}
HXLINE(1592)		this->position = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,uncompress,(void))

void ByteArrayData_obj::writeBoolean(bool value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1597_writeBoolean)
HXDLIN(1597)		int _hx_tmp;
HXDLIN(1597)		if (value) {
HXDLIN(1597)			_hx_tmp = 1;
            		}
            		else {
HXDLIN(1597)			_hx_tmp = 0;
            		}
HXDLIN(1597)		this->writeByte(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeBoolean,(void))

void ByteArrayData_obj::writeByte(int value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1601_writeByte)
HXLINE(1602)		this->_hx___resize((this->position + 1));
HXLINE(1603)		this->b[this->position++] = ( (unsigned char)((value & 255)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeByte,(void))

void ByteArrayData_obj::writeBytes( ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  __o_offset,::hx::Null< int >  __o_length){
            		int offset = __o_offset.Default(0);
            		int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1607_writeBytes)
HXLINE(1608)		if ((::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(bytes) == 0)) {
HXLINE(1608)			return;
            		}
HXLINE(1609)		if ((length == 0)) {
HXLINE(1609)			length = (::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(bytes) - offset);
            		}
HXLINE(1611)		this->_hx___resize((this->position + length));
HXLINE(1612)		this->blit(this->position,bytes,offset,length);
HXLINE(1614)		this->position = (this->position + length);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ByteArrayData_obj,writeBytes,(void))

void ByteArrayData_obj::writeDouble(Float value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1618_writeDouble)
HXLINE(1619)		 cpp::Int64Struct int64 = ::haxe::io::FPHelper_obj::doubleToI64(value);
HXLINE(1621)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1623)			this->writeInt(_hx_int64_low(int64));
HXLINE(1624)			this->writeInt(_hx_int64_high(int64));
            		}
            		else {
HXLINE(1628)			this->writeInt(_hx_int64_high(int64));
HXLINE(1629)			this->writeInt(_hx_int64_low(int64));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeDouble,(void))

void ByteArrayData_obj::writeFloat(Float value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1635_writeFloat)
HXDLIN(1635)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1637)			this->_hx___resize((this->position + 4));
HXLINE(1638)			this->setFloat(this->position,value);
HXLINE(1639)			 ::openfl::utils::ByteArrayData _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1639)			_hx_tmp->position = (_hx_tmp->position + 4);
            		}
            		else {
HXLINE(1643)			int _hx_int = ::haxe::io::FPHelper_obj::floatToI32(value);
HXLINE(1644)			this->writeInt(_hx_int);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeFloat,(void))

void ByteArrayData_obj::writeInt(int value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1649_writeInt)
HXLINE(1650)		this->_hx___resize((this->position + 4));
HXLINE(1652)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1654)			this->b[this->position++] = ( (unsigned char)((value & 255)) );
HXLINE(1655)			this->b[this->position++] = ( (unsigned char)(((value >> 8) & 255)) );
HXLINE(1656)			this->b[this->position++] = ( (unsigned char)(((value >> 16) & 255)) );
HXLINE(1657)			this->b[this->position++] = ( (unsigned char)(((value >> 24) & 255)) );
            		}
            		else {
HXLINE(1661)			this->b[this->position++] = ( (unsigned char)(((value >> 24) & 255)) );
HXLINE(1662)			this->b[this->position++] = ( (unsigned char)(((value >> 16) & 255)) );
HXLINE(1663)			this->b[this->position++] = ( (unsigned char)(((value >> 8) & 255)) );
HXLINE(1664)			this->b[this->position++] = ( (unsigned char)((value & 255)) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeInt,(void))

void ByteArrayData_obj::writeInt64( cpp::Int64Struct value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1670_writeInt64)
HXDLIN(1670)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1672)			this->writeUnsignedInt(_hx_int64_low(value));
HXLINE(1673)			this->writeUnsignedInt(_hx_int64_high(value));
            		}
            		else {
HXLINE(1677)			this->writeUnsignedInt(_hx_int64_high(value));
HXLINE(1678)			this->writeUnsignedInt(_hx_int64_low(value));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeInt64,(void))

void ByteArrayData_obj::writeMultiByte(::String value,::String charSet){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1684_writeMultiByte)
HXDLIN(1684)		this->writeUTFBytes(value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ByteArrayData_obj,writeMultiByte,(void))

void ByteArrayData_obj::writeObject( ::Dynamic object){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1689_writeObject)
HXDLIN(1689)		switch((int)(this->objectEncoding)){
            			case (int)0: {
HXLINE(1692)				 ::openfl::utils::_internal::format::amf::AMFValue value = ::openfl::utils::_internal::format::amf::AMFTools_obj::encode(object);
HXLINE(1693)				 ::haxe::io::BytesOutput output =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE(1694)				 ::openfl::utils::_internal::format::amf::AMFWriter writer =  ::openfl::utils::_internal::format::amf::AMFWriter_obj::__alloc( HX_CTX ,output);
HXLINE(1695)				writer->write(value);
HXLINE(1696)				this->writeBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(output->getBytes()),null(),null());
            			}
            			break;
            			case (int)3: {
HXLINE(1699)				 ::haxe::io::BytesOutput output =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE(1700)				 ::openfl::utils::_internal::format::amf3::AMF3Writer writer =  ::openfl::utils::_internal::format::amf3::AMF3Writer_obj::__alloc( HX_CTX ,output);
HXLINE(1702)				if (::Std_obj::isOfType(object,::hx::ClassOf< ::openfl::utils::ByteArrayData >())) {
HXLINE(1704)					writer->write(::openfl::utils::_internal::format::amf3::AMF3Value_obj::AByteArray(object));
            				}
            				else {
HXLINE(1708)					 ::openfl::utils::_internal::format::amf3::AMF3Value value = ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::encode(object);
HXLINE(1709)					writer->write(value);
            				}
HXLINE(1712)				this->writeBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(output->getBytes()),null(),null());
            			}
            			break;
            			case (int)10: {
HXLINE(1715)				::String value = ::haxe::Serializer_obj::run(object);
HXLINE(1716)				this->writeUTF(value);
            			}
            			break;
            			case (int)12: {
HXLINE(1719)				 ::Dynamic replacer = null();
HXDLIN(1719)				::String space = null();
HXDLIN(1719)				::String value = ::haxe::format::JsonPrinter_obj::print(object,replacer,space);
HXLINE(1720)				this->writeUTF(value);
            			}
            			break;
            			default:{
HXLINE(1723)				return;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeObject,(void))

void ByteArrayData_obj::writeShort(int value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1728_writeShort)
HXLINE(1729)		this->_hx___resize((this->position + 2));
HXLINE(1731)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1733)			this->b[this->position++] = ( (unsigned char)(value) );
HXLINE(1734)			this->b[this->position++] = ( (unsigned char)((value >> 8)) );
            		}
            		else {
HXLINE(1738)			this->b[this->position++] = ( (unsigned char)((value >> 8)) );
HXLINE(1739)			this->b[this->position++] = ( (unsigned char)(value) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeShort,(void))

void ByteArrayData_obj::writeUnsignedInt(int value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1745_writeUnsignedInt)
HXDLIN(1745)		this->writeInt(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUnsignedInt,(void))

void ByteArrayData_obj::writeUTF(::String value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1749_writeUTF)
HXLINE(1750)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(value,null());
HXLINE(1752)		this->writeShort(bytes->length);
HXLINE(1753)		this->writeBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(bytes),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUTF,(void))

void ByteArrayData_obj::writeUTFBytes(::String value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1757_writeUTFBytes)
HXLINE(1758)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(value,null());
HXLINE(1759)		this->writeBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(bytes),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUTFBytes,(void))

void ByteArrayData_obj::_hx___fromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1763___fromBytes)
HXLINE(1764)		{
HXLINE(1764)			this->b = bytes->b;
HXDLIN(1764)			this->_hx___allocated = bytes->length;
            		}
HXLINE(1765)		this->length = bytes->length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,_hx___fromBytes,(void))

void ByteArrayData_obj::_hx___resize(int size){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1769___resize)
HXLINE(1770)		if ((size > this->_hx___allocated)) {
HXLINE(1772)			 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc((((size + 1) * 3) >> 1));
HXLINE(1774)			bytes->fill(this->_hx___allocated,(size - this->_hx___allocated),0);
HXLINE(1777)			if ((this->_hx___allocated > 0)) {
HXLINE(1779)				int cacheLength = this->length;
HXLINE(1780)				this->length = this->_hx___allocated;
HXLINE(1781)				bytes->blit(0,::hx::ObjectPtr<OBJ_>(this),0,this->_hx___allocated);
HXLINE(1782)				this->length = cacheLength;
            			}
HXLINE(1785)			{
HXLINE(1785)				this->b = bytes->b;
HXDLIN(1785)				this->_hx___allocated = bytes->length;
            			}
            		}
HXLINE(1788)		if ((this->length < size)) {
HXLINE(1790)			this->length = size;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,_hx___resize,(void))

void ByteArrayData_obj::_hx___setData( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1795___setData)
HXLINE(1803)		this->b = bytes->b;
HXLINE(1806)		this->_hx___allocated = bytes->length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,_hx___setData,(void))

int ByteArrayData_obj::get_bytesAvailable(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1816_get_bytesAvailable)
HXDLIN(1816)		return (this->length - this->position);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,get_bytesAvailable,return )

 ::Dynamic ByteArrayData_obj::get_endian(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1849_get_endian)
HXDLIN(1849)		return this->_hx___endian;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,get_endian,return )

 ::Dynamic ByteArrayData_obj::set_endian( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1854_set_endian)
HXDLIN(1854)		return (this->_hx___endian = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,set_endian,return )

int ByteArrayData_obj::get___length(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1860_get___length)
HXDLIN(1860)		return this->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,get___length,return )

int ByteArrayData_obj::set___length(int value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1865_set___length)
HXDLIN(1865)		return (this->length = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,set___length,return )

int ByteArrayData_obj::defaultObjectEncoding;

 ::Dynamic ByteArrayData_obj::_hx___defaultEndian;

 ::openfl::utils::ByteArrayData ByteArrayData_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1285_fromBytes)
HXLINE(1286)		 ::openfl::utils::ByteArrayData result =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,null());
HXLINE(1287)		result->_hx___fromBytes(bytes);
HXLINE(1288)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,fromBytes,return )

 ::Dynamic ByteArrayData_obj::get_defaultEndian(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1820_get_defaultEndian)
HXLINE(1821)		if (::hx::IsNull( ::openfl::utils::ByteArrayData_obj::_hx___defaultEndian )) {
HXLINE(1826)			if (::hx::IsPointerEq( ::lime::_hx_system::System_obj::get_endianness(),::lime::_hx_system::Endian_obj::_hx_LITTLE_ENDIAN_dyn() )) {
HXLINE(1828)				::openfl::utils::ByteArrayData_obj::_hx___defaultEndian = 1;
            			}
            			else {
HXLINE(1832)				::openfl::utils::ByteArrayData_obj::_hx___defaultEndian = 0;
            			}
            		}
HXLINE(1839)		return ::openfl::utils::ByteArrayData_obj::_hx___defaultEndian;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,get_defaultEndian,return )

 ::Dynamic ByteArrayData_obj::set_defaultEndian( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1844_set_defaultEndian)
HXDLIN(1844)		return (::openfl::utils::ByteArrayData_obj::_hx___defaultEndian = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,set_defaultEndian,return )


::hx::ObjectPtr< ByteArrayData_obj > ByteArrayData_obj::__new(::hx::Null< int >  __o_length) {
	::hx::ObjectPtr< ByteArrayData_obj > __this = new ByteArrayData_obj();
	__this->__construct(__o_length);
	return __this;
}

::hx::ObjectPtr< ByteArrayData_obj > ByteArrayData_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_length) {
	ByteArrayData_obj *__this = (ByteArrayData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ByteArrayData_obj), true, "openfl.utils.ByteArrayData"));
	*(void **)__this = ByteArrayData_obj::_hx_vtable;
	__this->__construct(__o_length);
	return __this;
}

ByteArrayData_obj::ByteArrayData_obj()
{
}

void ByteArrayData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ByteArrayData);
	HX_MARK_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(_hx___endian,"__endian");
	HX_MARK_MEMBER_NAME(_hx___allocated,"__allocated");
	HX_MARK_MEMBER_NAME(_hx___amf3Reader,"__amf3Reader");
	 ::haxe::io::Bytes_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ByteArrayData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(_hx___endian,"__endian");
	HX_VISIT_MEMBER_NAME(_hx___allocated,"__allocated");
	HX_VISIT_MEMBER_NAME(_hx___amf3Reader,"__amf3Reader");
	 ::haxe::io::Bytes_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ByteArrayData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_endian() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return ::hx::Val( deflate_dyn() ); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return ::hx::Val( inflate_dyn() ); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return ::hx::Val( readInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return ::hx::Val( readUTF_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		if (HX_FIELD_EQ(inName,"__endian") ) { return ::hx::Val( _hx___endian ); }
		if (HX_FIELD_EQ(inName,"__length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get___length() ); }
		if (HX_FIELD_EQ(inName,"compress") ) { return ::hx::Val( compress_dyn() ); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return ::hx::Val( readByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return ::hx::Val( writeInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return ::hx::Val( writeUTF_dyn() ); }
		if (HX_FIELD_EQ(inName,"__resize") ) { return ::hx::Val( _hx___resize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return ::hx::Val( readBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return ::hx::Val( readFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"readInt64") ) { return ::hx::Val( readInt64_dyn() ); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return ::hx::Val( readShort_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return ::hx::Val( writeByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setData") ) { return ::hx::Val( _hx___setData_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readDouble") ) { return ::hx::Val( readDouble_dyn() ); }
		if (HX_FIELD_EQ(inName,"readObject") ) { return ::hx::Val( readObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return ::hx::Val( uncompress_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return ::hx::Val( writeBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return ::hx::Val( writeFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeInt64") ) { return ::hx::Val( writeInt64_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return ::hx::Val( writeShort_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return ::hx::Val( get_endian_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return ::hx::Val( set_endian_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__allocated") ) { return ::hx::Val( _hx___allocated ); }
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return ::hx::Val( readBoolean_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return ::hx::Val( writeDouble_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeObject") ) { return ::hx::Val( writeObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return ::hx::Val( _hx___fromBytes_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__amf3Reader") ) { return ::hx::Val( _hx___amf3Reader ); }
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return ::hx::Val( readUTFBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return ::hx::Val( writeBoolean_dyn() ); }
		if (HX_FIELD_EQ(inName,"get___length") ) { return ::hx::Val( get___length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set___length") ) { return ::hx::Val( set___length_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return ::hx::Val( readMultiByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return ::hx::Val( writeUTFBytes_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bytesAvailable() ); }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return ::hx::Val( objectEncoding ); }
		if (HX_FIELD_EQ(inName,"writeMultiByte") ) { return ::hx::Val( writeMultiByte_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return ::hx::Val( readUnsignedInt_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return ::hx::Val( readUnsignedByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return ::hx::Val( writeUnsignedInt_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return ::hx::Val( readUnsignedShort_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return ::hx::Val( get_bytesAvailable_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ByteArrayData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultEndian") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_defaultEndian() ); return true; } }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__defaultEndian") ) { outValue = ( _hx___defaultEndian ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_defaultEndian") ) { outValue = get_defaultEndian_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_defaultEndian") ) { outValue = set_defaultEndian_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"defaultObjectEncoding") ) { outValue = ( defaultObjectEncoding ); return true; }
	}
	return false;
}

::hx::Val ByteArrayData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_endian(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__endian") ) { _hx___endian=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set___length(inValue.Cast< int >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__allocated") ) { _hx___allocated=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__amf3Reader") ) { _hx___amf3Reader=inValue.Cast<  ::openfl::utils::_internal::format::amf3::AMF3Reader >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ByteArrayData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"defaultEndian") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_defaultEndian(ioValue.Cast<  ::Dynamic >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__defaultEndian") ) { _hx___defaultEndian=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"defaultObjectEncoding") ) { defaultObjectEncoding=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ByteArrayData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bytesAvailable",de,4b,9d,9b));
	outFields->push(HX_("endian",9b,98,88,fa));
	outFields->push(HX_("objectEncoding",b2,1e,15,2a));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("__endian",bb,03,b8,a2));
	outFields->push(HX_("__allocated",e7,db,b9,6a));
	outFields->push(HX_("__amf3Reader",3c,d6,9a,29));
	outFields->push(HX_("__length",06,00,37,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ByteArrayData_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ByteArrayData_obj,objectEncoding),HX_("objectEncoding",b2,1e,15,2a)},
	{::hx::fsInt,(int)offsetof(ByteArrayData_obj,position),HX_("position",a9,a0,fa,ca)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ByteArrayData_obj,_hx___endian),HX_("__endian",bb,03,b8,a2)},
	{::hx::fsInt,(int)offsetof(ByteArrayData_obj,_hx___allocated),HX_("__allocated",e7,db,b9,6a)},
	{::hx::fsObject /*  ::openfl::utils::_internal::format::amf3::AMF3Reader */ ,(int)offsetof(ByteArrayData_obj,_hx___amf3Reader),HX_("__amf3Reader",3c,d6,9a,29)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ByteArrayData_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ByteArrayData_obj::defaultObjectEncoding,HX_("defaultObjectEncoding",53,fb,eb,ff)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &ByteArrayData_obj::_hx___defaultEndian,HX_("__defaultEndian",1c,a5,b3,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ByteArrayData_obj_sMemberFields[] = {
	HX_("objectEncoding",b2,1e,15,2a),
	HX_("position",a9,a0,fa,ca),
	HX_("__endian",bb,03,b8,a2),
	HX_("__allocated",e7,db,b9,6a),
	HX_("__amf3Reader",3c,d6,9a,29),
	HX_("clear",8d,71,5b,48),
	HX_("compress",a2,47,bf,83),
	HX_("deflate",6b,0b,fa,a2),
	HX_("inflate",87,9c,1b,0c),
	HX_("readBoolean",f2,7d,ea,d0),
	HX_("readByte",7e,f9,1a,69),
	HX_("readBytes",35,55,7f,8e),
	HX_("readDouble",07,0f,47,2c),
	HX_("readFloat",66,12,7e,d3),
	HX_("readInt",39,b3,c9,02),
	HX_("readInt64",b7,e2,07,8f),
	HX_("readMultiByte",eb,7f,c9,15),
	HX_("readObject",b5,62,bb,0e),
	HX_("readShort",46,d1,0e,4d),
	HX_("readUnsignedByte",13,0b,ce,9b),
	HX_("readUnsignedInt",44,ab,4f,05),
	HX_("readUnsignedShort",11,22,0b,77),
	HX_("readUTF",71,b7,d2,02),
	HX_("readUTFBytes",3a,27,0f,52),
	HX_("uncompress",fb,2e,83,09),
	HX_("writeBoolean",89,8f,2d,43),
	HX_("writeByte",87,13,d7,49),
	HX_("writeBytes",0c,03,5a,52),
	HX_("writeDouble",50,7d,c4,c7),
	HX_("writeFloat",3d,c0,58,97),
	HX_("writeInt",50,6d,f0,23),
	HX_("writeInt64",8e,90,e2,52),
	HX_("writeMultiByte",42,65,25,ec),
	HX_("writeObject",fe,d0,38,aa),
	HX_("writeShort",1d,7f,e9,10),
	HX_("writeUnsignedInt",5b,d4,70,16),
	HX_("writeUTF",88,71,f9,23),
	HX_("writeUTFBytes",c3,79,7b,da),
	HX_("__fromBytes",81,3b,4d,a0),
	HX_("__resize",14,c5,aa,b0),
	HX_("__setData",cc,e7,35,89),
	HX_("get_bytesAvailable",a7,2c,37,37),
	HX_("get_endian",64,08,10,eb),
	HX_("set_endian",d8,a6,8d,ee),
	HX_("get___length",0f,b4,50,fc),
	HX_("set___length",83,d7,49,11),
	::String(null()) };

static void ByteArrayData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArrayData_obj::defaultObjectEncoding,"defaultObjectEncoding");
	HX_MARK_MEMBER_NAME(ByteArrayData_obj::_hx___defaultEndian,"__defaultEndian");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ByteArrayData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArrayData_obj::defaultObjectEncoding,"defaultObjectEncoding");
	HX_VISIT_MEMBER_NAME(ByteArrayData_obj::_hx___defaultEndian,"__defaultEndian");
};

#endif

::hx::Class ByteArrayData_obj::__mClass;

static ::String ByteArrayData_obj_sStaticFields[] = {
	HX_("defaultObjectEncoding",53,fb,eb,ff),
	HX_("__defaultEndian",1c,a5,b3,7c),
	HX_("fromBytes",a1,f2,20,72),
	HX_("get_defaultEndian",93,77,71,fb),
	HX_("set_defaultEndian",9f,4f,df,1e),
	::String(null())
};

void ByteArrayData_obj::__register()
{
	ByteArrayData_obj _hx_dummy;
	ByteArrayData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils.ByteArrayData",40,f9,66,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArrayData_obj::__GetStatic;
	__mClass->mSetStaticField = &ByteArrayData_obj::__SetStatic;
	__mClass->mMarkFunc = ByteArrayData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ByteArrayData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ByteArrayData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ByteArrayData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ByteArrayData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ByteArrayData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ByteArrayData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ByteArrayData_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1139_boot)
HXDLIN(1139)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1142_boot)
HXDLIN(1142)		defaultObjectEncoding = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1143_boot)
HXDLIN(1143)		_hx___defaultEndian = null();
            	}
}

} // end namespace openfl
} // end namespace utils
