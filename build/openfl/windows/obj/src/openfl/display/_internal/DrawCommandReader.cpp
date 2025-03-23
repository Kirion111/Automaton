#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandType
#include <openfl/display/_internal/DrawCommandType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b557290fba582da0_37_new,"openfl.display._internal.DrawCommandReader","new",0x2371abc0,"openfl.display._internal.DrawCommandReader.new","openfl/display/_internal/DrawCommandReader.hx",37,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_46_advance,"openfl.display._internal.DrawCommandReader","advance",0x6c2b13e2,"openfl.display._internal.DrawCommandReader.advance","openfl/display/_internal/DrawCommandReader.hx",46,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_130_bool,"openfl.display._internal.DrawCommandReader","bool",0xd81d9cca,"openfl.display._internal.DrawCommandReader.bool","openfl/display/_internal/DrawCommandReader.hx",130,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_134_destroy,"openfl.display._internal.DrawCommandReader","destroy",0xa1a5385a,"openfl.display._internal.DrawCommandReader.destroy","openfl/display/_internal/DrawCommandReader.hx",134,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_141_fArr,"openfl.display._internal.DrawCommandReader","fArr",0xda9f923b,"openfl.display._internal.DrawCommandReader.fArr","openfl/display/_internal/DrawCommandReader.hx",141,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_146_float,"openfl.display._internal.DrawCommandReader","float",0x8d6a38fc,"openfl.display._internal.DrawCommandReader.float","openfl/display/_internal/DrawCommandReader.hx",146,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_151_iArr,"openfl.display._internal.DrawCommandReader","iArr",0xdc9b3618,"openfl.display._internal.DrawCommandReader.iArr","openfl/display/_internal/DrawCommandReader.hx",151,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_156_int,"openfl.display._internal.DrawCommandReader","int",0x236de84f,"openfl.display._internal.DrawCommandReader.int","openfl/display/_internal/DrawCommandReader.hx",156,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_163_obj,"openfl.display._internal.DrawCommandReader","obj",0x23726b57,"openfl.display._internal.DrawCommandReader.obj","openfl/display/_internal/DrawCommandReader.hx",163,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_167_readBeginBitmapFill,"openfl.display._internal.DrawCommandReader","readBeginBitmapFill",0x56395245,"openfl.display._internal.DrawCommandReader.readBeginBitmapFill","openfl/display/_internal/DrawCommandReader.hx",167,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_174_readBeginFill,"openfl.display._internal.DrawCommandReader","readBeginFill",0xc289fa76,"openfl.display._internal.DrawCommandReader.readBeginFill","openfl/display/_internal/DrawCommandReader.hx",174,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_181_readBeginGradientFill,"openfl.display._internal.DrawCommandReader","readBeginGradientFill",0xb027c386,"openfl.display._internal.DrawCommandReader.readBeginGradientFill","openfl/display/_internal/DrawCommandReader.hx",181,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_188_readBeginShaderFill,"openfl.display._internal.DrawCommandReader","readBeginShaderFill",0x5374d47b,"openfl.display._internal.DrawCommandReader.readBeginShaderFill","openfl/display/_internal/DrawCommandReader.hx",188,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_195_readCubicCurveTo,"openfl.display._internal.DrawCommandReader","readCubicCurveTo",0x2a4cd0f6,"openfl.display._internal.DrawCommandReader.readCubicCurveTo","openfl/display/_internal/DrawCommandReader.hx",195,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_202_readCurveTo,"openfl.display._internal.DrawCommandReader","readCurveTo",0xc8ec2eb4,"openfl.display._internal.DrawCommandReader.readCurveTo","openfl/display/_internal/DrawCommandReader.hx",202,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_209_readDrawCircle,"openfl.display._internal.DrawCommandReader","readDrawCircle",0x97a024ca,"openfl.display._internal.DrawCommandReader.readDrawCircle","openfl/display/_internal/DrawCommandReader.hx",209,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_216_readDrawEllipse,"openfl.display._internal.DrawCommandReader","readDrawEllipse",0x2a4ff0e4,"openfl.display._internal.DrawCommandReader.readDrawEllipse","openfl/display/_internal/DrawCommandReader.hx",216,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_223_readDrawQuads,"openfl.display._internal.DrawCommandReader","readDrawQuads",0x5be6f852,"openfl.display._internal.DrawCommandReader.readDrawQuads","openfl/display/_internal/DrawCommandReader.hx",223,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_230_readDrawRect,"openfl.display._internal.DrawCommandReader","readDrawRect",0x7d01fd5e,"openfl.display._internal.DrawCommandReader.readDrawRect","openfl/display/_internal/DrawCommandReader.hx",230,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_237_readDrawRoundRect,"openfl.display._internal.DrawCommandReader","readDrawRoundRect",0x2c1dee18,"openfl.display._internal.DrawCommandReader.readDrawRoundRect","openfl/display/_internal/DrawCommandReader.hx",237,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_244_readDrawTriangles,"openfl.display._internal.DrawCommandReader","readDrawTriangles",0x27db6e31,"openfl.display._internal.DrawCommandReader.readDrawTriangles","openfl/display/_internal/DrawCommandReader.hx",244,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_251_readEndFill,"openfl.display._internal.DrawCommandReader","readEndFill",0x204456a8,"openfl.display._internal.DrawCommandReader.readEndFill","openfl/display/_internal/DrawCommandReader.hx",251,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_258_readLineBitmapStyle,"openfl.display._internal.DrawCommandReader","readLineBitmapStyle",0x3152c7d8,"openfl.display._internal.DrawCommandReader.readLineBitmapStyle","openfl/display/_internal/DrawCommandReader.hx",258,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_265_readLineGradientStyle,"openfl.display._internal.DrawCommandReader","readLineGradientStyle",0x4416abb7,"openfl.display._internal.DrawCommandReader.readLineGradientStyle","openfl/display/_internal/DrawCommandReader.hx",265,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_272_readLineStyle,"openfl.display._internal.DrawCommandReader","readLineStyle",0x010cf5c7,"openfl.display._internal.DrawCommandReader.readLineStyle","openfl/display/_internal/DrawCommandReader.hx",272,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_279_readLineTo,"openfl.display._internal.DrawCommandReader","readLineTo",0xab2a7b25,"openfl.display._internal.DrawCommandReader.readLineTo","openfl/display/_internal/DrawCommandReader.hx",279,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_286_readMoveTo,"openfl.display._internal.DrawCommandReader","readMoveTo",0x8b370782,"openfl.display._internal.DrawCommandReader.readMoveTo","openfl/display/_internal/DrawCommandReader.hx",286,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_293_readOverrideBlendMode,"openfl.display._internal.DrawCommandReader","readOverrideBlendMode",0x7c0e7f92,"openfl.display._internal.DrawCommandReader.readOverrideBlendMode","openfl/display/_internal/DrawCommandReader.hx",293,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_300_readOverrideMatrix,"openfl.display._internal.DrawCommandReader","readOverrideMatrix",0xb4fb4843,"openfl.display._internal.DrawCommandReader.readOverrideMatrix","openfl/display/_internal/DrawCommandReader.hx",300,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_307_readWindingEvenOdd,"openfl.display._internal.DrawCommandReader","readWindingEvenOdd",0x065c1751,"openfl.display._internal.DrawCommandReader.readWindingEvenOdd","openfl/display/_internal/DrawCommandReader.hx",307,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_314_readWindingNonZero,"openfl.display._internal.DrawCommandReader","readWindingNonZero",0xd1916f71,"openfl.display._internal.DrawCommandReader.readWindingNonZero","openfl/display/_internal/DrawCommandReader.hx",314,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_322_reset,"openfl.display._internal.DrawCommandReader","reset",0x719bbd2f,"openfl.display._internal.DrawCommandReader.reset","openfl/display/_internal/DrawCommandReader.hx",322,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_326_skip,"openfl.display._internal.DrawCommandReader","skip",0xe3572f1f,"openfl.display._internal.DrawCommandReader.skip","openfl/display/_internal/DrawCommandReader.hx",326,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_23_boot,"openfl.display._internal.DrawCommandReader","boot",0xd81d9cd2,"openfl.display._internal.DrawCommandReader.boot","openfl/display/_internal/DrawCommandReader.hx",23,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{

void DrawCommandReader_obj::__construct( ::openfl::display::_internal::DrawCommandBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_37_new)
HXLINE(  38)		this->buffer = buffer;
HXLINE(  40)		this->bPos = (this->iPos = (this->fPos = (this->oPos = (this->ffPos = (this->iiPos = (this->tsPos = 0))))));
HXLINE(  41)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::UNKNOWN_dyn();
            	}

Dynamic DrawCommandReader_obj::__CreateEmpty() { return new DrawCommandReader_obj; }

void *DrawCommandReader_obj::_hx_vtable = 0;

Dynamic DrawCommandReader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DrawCommandReader_obj > _hx_result = new DrawCommandReader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DrawCommandReader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x30a4d7c0;
}

void DrawCommandReader_obj::advance(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_46_advance)
HXDLIN(  46)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE(  49)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  49)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXLINE(  50)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  50)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE(  53)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  53)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXLINE(  54)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  54)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE(  57)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  57)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXLINE(  58)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  58)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXLINE(  59)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  59)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXLINE(  60)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  60)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE(  63)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  63)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE(  66)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  66)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE(  69)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  69)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE(  72)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  72)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE(  75)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  75)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE(  78)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  78)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE(  81)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  81)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE(  84)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  84)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXLINE(  85)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  85)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE(  88)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  88)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE(  94)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  94)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXLINE(  95)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  95)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE(  98)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  98)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXLINE(  99)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  99)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXLINE( 100)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 100)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXLINE( 101)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 101)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 104)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 104)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXLINE( 105)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 105)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXLINE( 106)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 106)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXLINE( 107)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 107)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 110)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 110)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 113)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 113)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 116)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 116)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 119)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 119)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,advance,(void))

bool DrawCommandReader_obj::_hx_bool(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_130_bool)
HXDLIN( 130)		return this->buffer->b->__get((this->bPos + index));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_hx_bool,return )

void DrawCommandReader_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_134_destroy)
HXLINE( 135)		this->buffer = null();
HXLINE( 136)		this->reset();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,destroy,(void))

::Array< Float > DrawCommandReader_obj::fArr(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_141_fArr)
HXDLIN( 141)		return this->buffer->ff->__get((this->ffPos + index)).StaticCast< ::Array< Float > >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,fArr,return )

Float DrawCommandReader_obj::_hx_float(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_146_float)
HXDLIN( 146)		return this->buffer->f->__get((this->fPos + index));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_hx_float,return )

::Array< int > DrawCommandReader_obj::iArr(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_151_iArr)
HXDLIN( 151)		return this->buffer->ii->__get((this->iiPos + index)).StaticCast< ::Array< int > >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,iArr,return )

int DrawCommandReader_obj::_hx_int(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_156_int)
HXDLIN( 156)		return this->buffer->i->__get((this->iPos + index));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_hx_int,return )

 ::Dynamic DrawCommandReader_obj::obj(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_163_obj)
HXDLIN( 163)		return this->buffer->o->__get((this->oPos + index));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,obj,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readBeginBitmapFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_167_readBeginBitmapFill)
HXLINE( 168)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 168)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 169)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXLINE( 170)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginBitmapFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readBeginFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_174_readBeginFill)
HXLINE( 175)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 175)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 176)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXLINE( 177)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readBeginGradientFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_181_readBeginGradientFill)
HXLINE( 182)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 182)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 183)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXLINE( 184)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginGradientFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readBeginShaderFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_188_readBeginShaderFill)
HXLINE( 189)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 189)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 190)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXLINE( 191)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginShaderFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readCubicCurveTo(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_195_readCubicCurveTo)
HXLINE( 196)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 196)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 197)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXLINE( 198)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readCubicCurveTo,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readCurveTo(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_202_readCurveTo)
HXLINE( 203)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 203)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 204)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXLINE( 205)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readCurveTo,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawCircle(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_209_readDrawCircle)
HXLINE( 210)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 210)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 211)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXLINE( 212)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawCircle,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawEllipse(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_216_readDrawEllipse)
HXLINE( 217)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 217)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 218)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXLINE( 219)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawEllipse,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawQuads(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_223_readDrawQuads)
HXLINE( 224)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 224)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 225)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXLINE( 226)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawQuads,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawRect(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_230_readDrawRect)
HXLINE( 231)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 231)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 232)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXLINE( 233)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawRect,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawRoundRect(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_237_readDrawRoundRect)
HXLINE( 238)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 238)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 239)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXLINE( 240)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawRoundRect,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawTriangles(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_244_readDrawTriangles)
HXLINE( 245)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 245)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 245)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 246)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXLINE( 247)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawTriangles,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readEndFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_251_readEndFill)
HXLINE( 252)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 252)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 253)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXLINE( 254)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readEndFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readLineBitmapStyle(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_258_readLineBitmapStyle)
HXLINE( 259)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 259)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 260)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXLINE( 261)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineBitmapStyle,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readLineGradientStyle(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_265_readLineGradientStyle)
HXLINE( 266)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 266)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 267)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXLINE( 268)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineGradientStyle,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readLineStyle(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_272_readLineStyle)
HXLINE( 273)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 273)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 274)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXLINE( 275)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineStyle,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readLineTo(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_279_readLineTo)
HXLINE( 280)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 280)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 281)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXLINE( 282)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineTo,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readMoveTo(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_286_readMoveTo)
HXLINE( 287)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 287)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 287)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXLINE( 289)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readMoveTo,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readOverrideBlendMode(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_293_readOverrideBlendMode)
HXLINE( 294)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 294)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 295)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_BLEND_MODE_dyn();
HXLINE( 296)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readOverrideBlendMode,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readOverrideMatrix(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_300_readOverrideMatrix)
HXLINE( 301)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 301)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 302)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_MATRIX_dyn();
HXLINE( 303)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readOverrideMatrix,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readWindingEvenOdd(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_307_readWindingEvenOdd)
HXLINE( 308)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 308)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 309)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXLINE( 310)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readWindingEvenOdd,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readWindingNonZero(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_314_readWindingNonZero)
HXLINE( 315)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 315)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 316)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXLINE( 317)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readWindingNonZero,return )

void DrawCommandReader_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_322_reset)
HXDLIN( 322)		this->bPos = (this->iPos = (this->fPos = (this->oPos = (this->ffPos = (this->iiPos = (this->tsPos = 0))))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,reset,(void))

void DrawCommandReader_obj::skip( ::openfl::display::_internal::DrawCommandType type){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_326_skip)
HXLINE( 327)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 327)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 327)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 328)		this->prev = type;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,skip,(void))


::hx::ObjectPtr< DrawCommandReader_obj > DrawCommandReader_obj::__new( ::openfl::display::_internal::DrawCommandBuffer buffer) {
	::hx::ObjectPtr< DrawCommandReader_obj > __this = new DrawCommandReader_obj();
	__this->__construct(buffer);
	return __this;
}

::hx::ObjectPtr< DrawCommandReader_obj > DrawCommandReader_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::_internal::DrawCommandBuffer buffer) {
	DrawCommandReader_obj *__this = (DrawCommandReader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DrawCommandReader_obj), true, "openfl.display._internal.DrawCommandReader"));
	*(void **)__this = DrawCommandReader_obj::_hx_vtable;
	__this->__construct(buffer);
	return __this;
}

DrawCommandReader_obj::DrawCommandReader_obj()
{
}

void DrawCommandReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawCommandReader);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(bPos,"bPos");
	HX_MARK_MEMBER_NAME(iiPos,"iiPos");
	HX_MARK_MEMBER_NAME(iPos,"iPos");
	HX_MARK_MEMBER_NAME(ffPos,"ffPos");
	HX_MARK_MEMBER_NAME(fPos,"fPos");
	HX_MARK_MEMBER_NAME(oPos,"oPos");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(tsPos,"tsPos");
	HX_MARK_END_CLASS();
}

void DrawCommandReader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(bPos,"bPos");
	HX_VISIT_MEMBER_NAME(iiPos,"iiPos");
	HX_VISIT_MEMBER_NAME(iPos,"iPos");
	HX_VISIT_MEMBER_NAME(ffPos,"ffPos");
	HX_VISIT_MEMBER_NAME(fPos,"fPos");
	HX_VISIT_MEMBER_NAME(oPos,"oPos");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(tsPos,"tsPos");
}

::hx::Val DrawCommandReader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { return ::hx::Val( _hx_int_dyn() ); }
		if (HX_FIELD_EQ(inName,"obj") ) { return ::hx::Val( obj_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bPos") ) { return ::hx::Val( bPos ); }
		if (HX_FIELD_EQ(inName,"iPos") ) { return ::hx::Val( iPos ); }
		if (HX_FIELD_EQ(inName,"fPos") ) { return ::hx::Val( fPos ); }
		if (HX_FIELD_EQ(inName,"oPos") ) { return ::hx::Val( oPos ); }
		if (HX_FIELD_EQ(inName,"prev") ) { return ::hx::Val( prev ); }
		if (HX_FIELD_EQ(inName,"bool") ) { return ::hx::Val( _hx_bool_dyn() ); }
		if (HX_FIELD_EQ(inName,"fArr") ) { return ::hx::Val( fArr_dyn() ); }
		if (HX_FIELD_EQ(inName,"iArr") ) { return ::hx::Val( iArr_dyn() ); }
		if (HX_FIELD_EQ(inName,"skip") ) { return ::hx::Val( skip_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"iiPos") ) { return ::hx::Val( iiPos ); }
		if (HX_FIELD_EQ(inName,"ffPos") ) { return ::hx::Val( ffPos ); }
		if (HX_FIELD_EQ(inName,"tsPos") ) { return ::hx::Val( tsPos ); }
		if (HX_FIELD_EQ(inName,"float") ) { return ::hx::Val( _hx_float_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { return ::hx::Val( advance_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readLineTo") ) { return ::hx::Val( readLineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"readMoveTo") ) { return ::hx::Val( readMoveTo_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readCurveTo") ) { return ::hx::Val( readCurveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"readEndFill") ) { return ::hx::Val( readEndFill_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readDrawRect") ) { return ::hx::Val( readDrawRect_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readBeginFill") ) { return ::hx::Val( readBeginFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"readDrawQuads") ) { return ::hx::Val( readDrawQuads_dyn() ); }
		if (HX_FIELD_EQ(inName,"readLineStyle") ) { return ::hx::Val( readLineStyle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readDrawCircle") ) { return ::hx::Val( readDrawCircle_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readDrawEllipse") ) { return ::hx::Val( readDrawEllipse_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readCubicCurveTo") ) { return ::hx::Val( readCubicCurveTo_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readDrawRoundRect") ) { return ::hx::Val( readDrawRoundRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"readDrawTriangles") ) { return ::hx::Val( readDrawTriangles_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"readOverrideMatrix") ) { return ::hx::Val( readOverrideMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"readWindingEvenOdd") ) { return ::hx::Val( readWindingEvenOdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"readWindingNonZero") ) { return ::hx::Val( readWindingNonZero_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"readBeginBitmapFill") ) { return ::hx::Val( readBeginBitmapFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"readBeginShaderFill") ) { return ::hx::Val( readBeginShaderFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"readLineBitmapStyle") ) { return ::hx::Val( readLineBitmapStyle_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"readBeginGradientFill") ) { return ::hx::Val( readBeginGradientFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"readLineGradientStyle") ) { return ::hx::Val( readLineGradientStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"readOverrideBlendMode") ) { return ::hx::Val( readOverrideBlendMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DrawCommandReader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bPos") ) { bPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iPos") ) { iPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fPos") ) { fPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oPos") ) { oPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast<  ::openfl::display::_internal::DrawCommandType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"iiPos") ) { iiPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ffPos") ) { ffPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tsPos") ) { tsPos=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawCommandReader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("bPos",52,fe,03,41));
	outFields->push(HX_("iiPos",94,65,b7,ba));
	outFields->push(HX_("iPos",ab,7c,a4,45));
	outFields->push(HX_("ffPos",34,04,88,fe));
	outFields->push(HX_("fPos",ce,d8,a8,43));
	outFields->push(HX_("oPos",65,c4,9b,49));
	outFields->push(HX_("prev",f3,be,5e,4a));
	outFields->push(HX_("tsPos",55,e9,bb,16));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DrawCommandReader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(int)offsetof(DrawCommandReader_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,bPos),HX_("bPos",52,fe,03,41)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,iiPos),HX_("iiPos",94,65,b7,ba)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,iPos),HX_("iPos",ab,7c,a4,45)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,ffPos),HX_("ffPos",34,04,88,fe)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,fPos),HX_("fPos",ce,d8,a8,43)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,oPos),HX_("oPos",65,c4,9b,49)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandType */ ,(int)offsetof(DrawCommandReader_obj,prev),HX_("prev",f3,be,5e,4a)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,tsPos),HX_("tsPos",55,e9,bb,16)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DrawCommandReader_obj_sStaticStorageInfo = 0;
#endif

static ::String DrawCommandReader_obj_sMemberFields[] = {
	HX_("buffer",00,bd,94,d0),
	HX_("bPos",52,fe,03,41),
	HX_("iiPos",94,65,b7,ba),
	HX_("iPos",ab,7c,a4,45),
	HX_("ffPos",34,04,88,fe),
	HX_("fPos",ce,d8,a8,43),
	HX_("oPos",65,c4,9b,49),
	HX_("prev",f3,be,5e,4a),
	HX_("tsPos",55,e9,bb,16),
	HX_("advance",82,08,0c,ef),
	HX_("bool",2a,84,1b,41),
	HX_("destroy",fa,2c,86,24),
	HX_("fArr",9b,79,9d,43),
	HX_("float",9c,c5,96,02),
	HX_("iArr",78,1d,99,45),
	HX_("int",ef,0c,50,00),
	HX_("obj",f7,8f,54,00),
	HX_("readBeginBitmapFill",e5,b6,06,b9),
	HX_("readBeginFill",16,27,04,20),
	HX_("readBeginGradientFill",26,90,8f,6c),
	HX_("readBeginShaderFill",1b,39,42,b6),
	HX_("readCubicCurveTo",56,48,38,74),
	HX_("readCurveTo",54,f3,73,21),
	HX_("readDrawCircle",2a,04,0d,05),
	HX_("readDrawEllipse",84,85,26,7c),
	HX_("readDrawQuads",f2,24,61,b9),
	HX_("readDrawRect",be,44,46,9b),
	HX_("readDrawRoundRect",b8,ea,3a,90),
	HX_("readDrawTriangles",d1,6a,f8,8b),
	HX_("readEndFill",48,1b,cc,78),
	HX_("readLineBitmapStyle",78,2c,20,94),
	HX_("readLineGradientStyle",57,78,7e,00),
	HX_("readLineStyle",67,22,87,5e),
	HX_("readLineTo",85,2a,1c,e6),
	HX_("readMoveTo",e2,b6,28,c6),
	HX_("readOverrideBlendMode",32,4c,76,38),
	HX_("readOverrideMatrix",a3,57,3b,ea),
	HX_("readWindingEvenOdd",b1,26,9c,3b),
	HX_("readWindingNonZero",d1,7e,d1,06),
	HX_("reset",cf,49,c8,e6),
	HX_("skip",7f,16,55,4c),
	::String(null()) };

::hx::Class DrawCommandReader_obj::__mClass;

void DrawCommandReader_obj::__register()
{
	DrawCommandReader_obj _hx_dummy;
	DrawCommandReader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DrawCommandReader",ce,0b,49,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DrawCommandReader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DrawCommandReader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawCommandReader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawCommandReader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DrawCommandReader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_23_boot)
HXDLIN(  23)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
