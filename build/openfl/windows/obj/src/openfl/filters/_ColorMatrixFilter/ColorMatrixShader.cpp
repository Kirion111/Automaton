#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
#ifndef INCLUDED_openfl_filters__ColorMatrixFilter_ColorMatrixShader
#include <openfl/filters/_ColorMatrixFilter/ColorMatrixShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_65d84bf4a5bd7bcf_275_new,"openfl.filters._ColorMatrixFilter.ColorMatrixShader","new",0xf11da59b,"openfl.filters._ColorMatrixFilter.ColorMatrixShader.new","openfl/filters/ColorMatrixFilter.hx",275,0xb64128b5)
static const Float _hx_array_data_a1263c29_1[] = {
	(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,
};
static const Float _hx_array_data_a1263c29_2[] = {
	(Float)0,(Float)0,(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_65d84bf4a5bd7bcf_285_init,"openfl.filters._ColorMatrixFilter.ColorMatrixShader","init",0x058bf975,"openfl.filters._ColorMatrixFilter.ColorMatrixShader.init","openfl/filters/ColorMatrixFilter.hx",285,0xb64128b5)
HX_LOCAL_STACK_FRAME(_hx_pos_65d84bf4a5bd7bcf_248_boot,"openfl.filters._ColorMatrixFilter.ColorMatrixShader","boot",0x00ec4297,"openfl.filters._ColorMatrixFilter.ColorMatrixShader.boot","openfl/filters/ColorMatrixFilter.hx",248,0xb64128b5)
namespace openfl{
namespace filters{
namespace _ColorMatrixFilter{

void ColorMatrixShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_65d84bf4a5bd7bcf_275_new)
HXLINE( 183)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 185)			this->_hx___glFragmentSource = HX_("varying vec2 openfl_TextureCoordv;\n\t\tuniform sampler2D openfl_Texture;\n\n\t\tuniform mat4 uMultipliers;\n\t\tuniform vec4 uOffsets;\n\n\t\tvoid main(void) {\n\n\t\t\tvec4 color = texture2D (openfl_Texture, openfl_TextureCoordv);\n\n\t\t\tif (color.a == 0.0) {\n\n\t\t\t\tgl_FragColor = vec4 (0.0, 0.0, 0.0, 0.0);\n\n\t\t\t} else {\n\n\t\t\t\tcolor = vec4 (color.rgb / color.a, color.a);\n\t\t\t\tcolor = uOffsets + color * uMultipliers;\n\n\t\t\t\tgl_FragColor = vec4 (color.rgb * color.a, color.a);\n\n\t\t\t}\n\n\t\t}",68,fe,a4,e6);
            		}
HXLINE( 175)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 177)			this->_hx___glVertexSource = HX_("attribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform vec2 openfl_TextureSize;\n\n\n\t\tvoid main(void) {\n\n\t\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\n\t\t}",36,88,23,1e);
            		}
HXLINE( 276)		super::__construct(null());
HXLINE( 279)		this->uMultipliers->value = ::Array_obj< Float >::fromData( _hx_array_data_a1263c29_1,16);
HXLINE( 280)		this->uOffsets->value = ::Array_obj< Float >::fromData( _hx_array_data_a1263c29_2,4);
HXLINE( 248)		this->_hx___isGenerated = true;
HXDLIN( 248)		this->_hx___initGL();
            	}

Dynamic ColorMatrixShader_obj::__CreateEmpty() { return new ColorMatrixShader_obj; }

void *ColorMatrixShader_obj::_hx_vtable = 0;

Dynamic ColorMatrixShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorMatrixShader_obj > _hx_result = new ColorMatrixShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ColorMatrixShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x39fae001) {
		if (inClassId<=(int)0x253b4db3) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x253b4db3;
		} else {
			return inClassId==(int)0x39fae001;
		}
	} else {
		return inClassId==(int)0x78d8d737;
	}
}

void ColorMatrixShader_obj::init(::Array< Float > matrix){
            	HX_STACKFRAME(&_hx_pos_65d84bf4a5bd7bcf_285_init)
HXLINE( 287)		::Array< Float > multipliers = this->uMultipliers->value;
HXLINE( 288)		::Array< Float > offsets = this->uOffsets->value;
HXLINE( 290)		multipliers[0] = matrix->__get(0);
HXLINE( 291)		multipliers[1] = matrix->__get(1);
HXLINE( 292)		multipliers[2] = matrix->__get(2);
HXLINE( 293)		multipliers[3] = matrix->__get(3);
HXLINE( 294)		multipliers[4] = matrix->__get(5);
HXLINE( 295)		multipliers[5] = matrix->__get(6);
HXLINE( 296)		multipliers[6] = matrix->__get(7);
HXLINE( 297)		multipliers[7] = matrix->__get(8);
HXLINE( 298)		multipliers[8] = matrix->__get(10);
HXLINE( 299)		multipliers[9] = matrix->__get(11);
HXLINE( 300)		multipliers[10] = matrix->__get(12);
HXLINE( 301)		multipliers[11] = matrix->__get(13);
HXLINE( 302)		multipliers[12] = matrix->__get(15);
HXLINE( 303)		multipliers[13] = matrix->__get(16);
HXLINE( 304)		multipliers[14] = matrix->__get(17);
HXLINE( 305)		multipliers[15] = matrix->__get(18);
HXLINE( 307)		offsets[0] = (matrix->__get(4) / ((Float)255.0));
HXLINE( 308)		offsets[1] = (matrix->__get(9) / ((Float)255.0));
HXLINE( 309)		offsets[2] = (matrix->__get(14) / ((Float)255.0));
HXLINE( 310)		offsets[3] = (matrix->__get(19) / ((Float)255.0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrixShader_obj,init,(void))


::hx::ObjectPtr< ColorMatrixShader_obj > ColorMatrixShader_obj::__new() {
	::hx::ObjectPtr< ColorMatrixShader_obj > __this = new ColorMatrixShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ColorMatrixShader_obj > ColorMatrixShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ColorMatrixShader_obj *__this = (ColorMatrixShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorMatrixShader_obj), true, "openfl.filters._ColorMatrixFilter.ColorMatrixShader"));
	*(void **)__this = ColorMatrixShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ColorMatrixShader_obj::ColorMatrixShader_obj()
{
}

void ColorMatrixShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorMatrixShader);
	HX_MARK_MEMBER_NAME(uMultipliers,"uMultipliers");
	HX_MARK_MEMBER_NAME(uOffsets,"uOffsets");
	 ::openfl::filters::BitmapFilterShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorMatrixShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uMultipliers,"uMultipliers");
	HX_VISIT_MEMBER_NAME(uOffsets,"uOffsets");
	 ::openfl::filters::BitmapFilterShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ColorMatrixShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uOffsets") ) { return ::hx::Val( uOffsets ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uMultipliers") ) { return ::hx::Val( uMultipliers ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ColorMatrixShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"uOffsets") ) { uOffsets=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uMultipliers") ) { uMultipliers=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorMatrixShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("uMultipliers",5d,5b,61,e5));
	outFields->push(HX_("uOffsets",8b,59,c4,c8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ColorMatrixShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ColorMatrixShader_obj,uMultipliers),HX_("uMultipliers",5d,5b,61,e5)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ColorMatrixShader_obj,uOffsets),HX_("uOffsets",8b,59,c4,c8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ColorMatrixShader_obj_sStaticStorageInfo = 0;
#endif

static ::String ColorMatrixShader_obj_sMemberFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("uMultipliers",5d,5b,61,e5),
	HX_("uOffsets",8b,59,c4,c8),
	::String(null()) };

::hx::Class ColorMatrixShader_obj::__mClass;

void ColorMatrixShader_obj::__register()
{
	ColorMatrixShader_obj _hx_dummy;
	ColorMatrixShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.filters._ColorMatrixFilter.ColorMatrixShader",29,3c,26,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColorMatrixShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ColorMatrixShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorMatrixShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorMatrixShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ColorMatrixShader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_65d84bf4a5bd7bcf_248_boot)
HXDLIN( 248)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace filters
} // end namespace _ColorMatrixFilter
