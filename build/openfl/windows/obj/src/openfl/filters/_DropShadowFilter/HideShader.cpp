#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
#ifndef INCLUDED_openfl_filters__DropShadowFilter_HideShader
#include <openfl/filters/_DropShadowFilter/HideShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_07af302b8e600910_583_new,"openfl.filters._DropShadowFilter.HideShader","new",0x8120a732,"openfl.filters._DropShadowFilter.HideShader.new","openfl/filters/DropShadowFilter.hx",583,0x048fdea4)
static const Float _hx_array_data_2554e640_1[] = {
	(Float)0,(Float)0,
};
namespace openfl{
namespace filters{
namespace _DropShadowFilter{

void HideShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_07af302b8e600910_583_new)
HXLINE( 183)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 185)			this->_hx___glFragmentSource = HX_("\n\t\tuniform sampler2D openfl_Texture;\n\t\tuniform sampler2D sourceBitmap;\n\t\tvarying vec4 textureCoords;\n\n\t\tvoid main(void) {\n\t\t\tgl_FragColor = texture2D(openfl_Texture, textureCoords.zw);\n\t\t}\n\t",21,27,f1,08);
            		}
HXLINE( 175)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 177)			this->_hx___glVertexSource = HX_("attribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform vec2 offset;\n\t\tvarying vec4 textureCoords;\n\n\t\tvoid main(void) {\n\t\t\tgl_Position = openfl_Matrix * openfl_Position;\n\t\t\ttextureCoords = vec4(openfl_TextureCoord, openfl_TextureCoord - offset / openfl_TextureSize);\n\t\t}\n\t",5a,3b,76,b1);
            		}
HXLINE( 584)		super::__construct(null());
HXLINE( 586)		this->offset->value = ::Array_obj< Float >::fromData( _hx_array_data_2554e640_1,2);
HXLINE( 559)		this->_hx___isGenerated = true;
HXDLIN( 559)		this->_hx___initGL();
            	}

Dynamic HideShader_obj::__CreateEmpty() { return new HideShader_obj; }

void *HideShader_obj::_hx_vtable = 0;

Dynamic HideShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HideShader_obj > _hx_result = new HideShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HideShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2dd94b62) {
		if (inClassId<=(int)0x253b4db3) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x253b4db3;
		} else {
			return inClassId==(int)0x2dd94b62;
		}
	} else {
		return inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< HideShader_obj > HideShader_obj::__new() {
	::hx::ObjectPtr< HideShader_obj > __this = new HideShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HideShader_obj > HideShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HideShader_obj *__this = (HideShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HideShader_obj), true, "openfl.filters._DropShadowFilter.HideShader"));
	*(void **)__this = HideShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HideShader_obj::HideShader_obj()
{
}

void HideShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HideShader);
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(sourceBitmap,"sourceBitmap");
	 ::openfl::filters::BitmapFilterShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HideShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(sourceBitmap,"sourceBitmap");
	 ::openfl::filters::BitmapFilterShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HideShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sourceBitmap") ) { return ::hx::Val( sourceBitmap ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HideShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sourceBitmap") ) { sourceBitmap=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HideShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("sourceBitmap",2a,cb,12,e7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HideShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(HideShader_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(HideShader_obj,sourceBitmap),HX_("sourceBitmap",2a,cb,12,e7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HideShader_obj_sStaticStorageInfo = 0;
#endif

static ::String HideShader_obj_sMemberFields[] = {
	HX_("offset",93,97,3f,60),
	HX_("sourceBitmap",2a,cb,12,e7),
	::String(null()) };

::hx::Class HideShader_obj::__mClass;

void HideShader_obj::__register()
{
	HideShader_obj _hx_dummy;
	HideShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.filters._DropShadowFilter.HideShader",40,e6,54,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HideShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HideShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HideShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HideShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters
} // end namespace _DropShadowFilter
