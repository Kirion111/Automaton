#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPath
#include <openfl/display/GraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d2387a0b056a42f_61_new,"openfl.display.GraphicsPath","new",0x778d9d6c,"openfl.display.GraphicsPath.new","openfl/display/GraphicsPath.hx",61,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_86_cubicCurveTo,"openfl.display.GraphicsPath","cubicCurveTo",0x2db23954,"openfl.display.GraphicsPath.cubicCurveTo","openfl/display/GraphicsPath.hx",86,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_117_curveTo,"openfl.display.GraphicsPath","curveTo",0xe3fba316,"openfl.display.GraphicsPath.curveTo","openfl/display/GraphicsPath.hx",117,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_136_lineTo,"openfl.display.GraphicsPath","lineTo",0x87b32903,"openfl.display.GraphicsPath.lineTo","openfl/display/GraphicsPath.hx",136,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_153_moveTo,"openfl.display.GraphicsPath","moveTo",0x67bfb560,"openfl.display.GraphicsPath.moveTo","openfl/display/GraphicsPath.hx",153,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_170_wideLineTo,"openfl.display.GraphicsPath","wideLineTo",0xae2a1f76,"openfl.display.GraphicsPath.wideLineTo","openfl/display/GraphicsPath.hx",170,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_187_wideMoveTo,"openfl.display.GraphicsPath","wideMoveTo",0x8e36abd3,"openfl.display.GraphicsPath.wideMoveTo","openfl/display/GraphicsPath.hx",187,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_198___drawCircle,"openfl.display.GraphicsPath","__drawCircle",0xcf8699c8,"openfl.display.GraphicsPath.__drawCircle","openfl/display/GraphicsPath.hx",198,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_203___drawEllipse,"openfl.display.GraphicsPath","__drawEllipse",0xdc0fda26,"openfl.display.GraphicsPath.__drawEllipse","openfl/display/GraphicsPath.hx",203,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_207___drawRect,"openfl.display.GraphicsPath","__drawRect",0xe8f096dc,"openfl.display.GraphicsPath.__drawRect","openfl/display/GraphicsPath.hx",207,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_216___drawRoundRect,"openfl.display.GraphicsPath","__drawRoundRect",0xbc9c2bda,"openfl.display.GraphicsPath.__drawRoundRect","openfl/display/GraphicsPath.hx",216,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_31_boot,"openfl.display.GraphicsPath","boot",0x1c7521a6,"openfl.display.GraphicsPath.boot","openfl/display/GraphicsPath.hx",31,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_32_boot,"openfl.display.GraphicsPath","boot",0x1c7521a6,"openfl.display.GraphicsPath.boot","openfl/display/GraphicsPath.hx",32,0x0a58fcc2)
namespace openfl{
namespace display{

void GraphicsPath_obj::__construct( ::openfl::_Vector::IntVector commands, ::openfl::_Vector::FloatVector data, ::Dynamic __o_winding){
            		 ::Dynamic winding = __o_winding;
            		if (::hx::IsNull(__o_winding)) winding = 0;
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_61_new)
HXLINE(  62)		this->commands = commands;
HXLINE(  63)		this->data = data;
HXLINE(  64)		this->winding = winding;
HXLINE(  65)		this->_hx___graphicsDataType = 3;
            	}

Dynamic GraphicsPath_obj::__CreateEmpty() { return new GraphicsPath_obj; }

void *GraphicsPath_obj::_hx_vtable = 0;

Dynamic GraphicsPath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicsPath_obj > _hx_result = new GraphicsPath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool GraphicsPath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ea33da2;
}

static ::openfl::display::IGraphicsData_obj _hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsData= {
};

static ::openfl::display::IGraphicsPath_obj _hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsPath= {
};

void *GraphicsPath_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc177ee0c: return &_hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsData;
		case (int)0xc9667d87: return &_hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsPath;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void GraphicsPath_obj::cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_86_cubicCurveTo)
HXLINE(  87)		if (::hx::IsNull( this->commands )) {
HXLINE(  87)			int length = null();
HXDLIN(  87)			bool fixed = null();
HXDLIN(  87)			::Array< int > array = null();
HXDLIN(  87)			this->commands =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array);
            		}
HXLINE(  88)		if (::hx::IsNull( this->data )) {
HXLINE(  88)			int length = null();
HXDLIN(  88)			bool fixed = null();
HXDLIN(  88)			::Array< Float > array = null();
HXDLIN(  88)			this->data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            		}
HXLINE(  90)		this->commands->push(6);
HXLINE(  91)		this->data->push(controlX1);
HXLINE(  92)		this->data->push(controlY1);
HXLINE(  93)		this->data->push(controlX2);
HXLINE(  94)		this->data->push(controlY2);
HXLINE(  95)		this->data->push(anchorX);
HXLINE(  96)		this->data->push(anchorY);
            	}


HX_DEFINE_DYNAMIC_FUNC6(GraphicsPath_obj,cubicCurveTo,(void))

void GraphicsPath_obj::curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_117_curveTo)
HXLINE( 118)		if (::hx::IsNull( this->commands )) {
HXLINE( 118)			int length = null();
HXDLIN( 118)			bool fixed = null();
HXDLIN( 118)			::Array< int > array = null();
HXDLIN( 118)			this->commands =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array);
            		}
HXLINE( 119)		if (::hx::IsNull( this->data )) {
HXLINE( 119)			int length = null();
HXDLIN( 119)			bool fixed = null();
HXDLIN( 119)			::Array< Float > array = null();
HXDLIN( 119)			this->data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            		}
HXLINE( 121)		this->commands->push(3);
HXLINE( 122)		this->data->push(controlX);
HXLINE( 123)		this->data->push(controlY);
HXLINE( 124)		this->data->push(anchorX);
HXLINE( 125)		this->data->push(anchorY);
            	}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsPath_obj,curveTo,(void))

void GraphicsPath_obj::lineTo(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_136_lineTo)
HXLINE( 137)		if (::hx::IsNull( this->commands )) {
HXLINE( 137)			int length = null();
HXDLIN( 137)			bool fixed = null();
HXDLIN( 137)			::Array< int > array = null();
HXDLIN( 137)			this->commands =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array);
            		}
HXLINE( 138)		if (::hx::IsNull( this->data )) {
HXLINE( 138)			int length = null();
HXDLIN( 138)			bool fixed = null();
HXDLIN( 138)			::Array< Float > array = null();
HXDLIN( 138)			this->data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            		}
HXLINE( 140)		this->commands->push(2);
HXLINE( 141)		this->data->push(x);
HXLINE( 142)		this->data->push(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,lineTo,(void))

void GraphicsPath_obj::moveTo(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_153_moveTo)
HXLINE( 154)		if (::hx::IsNull( this->commands )) {
HXLINE( 154)			int length = null();
HXDLIN( 154)			bool fixed = null();
HXDLIN( 154)			::Array< int > array = null();
HXDLIN( 154)			this->commands =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array);
            		}
HXLINE( 155)		if (::hx::IsNull( this->data )) {
HXLINE( 155)			int length = null();
HXDLIN( 155)			bool fixed = null();
HXDLIN( 155)			::Array< Float > array = null();
HXDLIN( 155)			this->data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            		}
HXLINE( 157)		this->commands->push(1);
HXLINE( 158)		this->data->push(x);
HXLINE( 159)		this->data->push(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,moveTo,(void))

void GraphicsPath_obj::wideLineTo(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_170_wideLineTo)
HXLINE( 171)		if (::hx::IsNull( this->commands )) {
HXLINE( 171)			int length = null();
HXDLIN( 171)			bool fixed = null();
HXDLIN( 171)			::Array< int > array = null();
HXDLIN( 171)			this->commands =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array);
            		}
HXLINE( 172)		if (::hx::IsNull( this->data )) {
HXLINE( 172)			int length = null();
HXDLIN( 172)			bool fixed = null();
HXDLIN( 172)			::Array< Float > array = null();
HXDLIN( 172)			this->data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            		}
HXLINE( 174)		this->commands->push(2);
HXLINE( 175)		this->data->push(x);
HXLINE( 176)		this->data->push(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,wideLineTo,(void))

void GraphicsPath_obj::wideMoveTo(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_187_wideMoveTo)
HXLINE( 188)		if (::hx::IsNull( this->commands )) {
HXLINE( 188)			int length = null();
HXDLIN( 188)			bool fixed = null();
HXDLIN( 188)			::Array< int > array = null();
HXDLIN( 188)			this->commands =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array);
            		}
HXLINE( 189)		if (::hx::IsNull( this->data )) {
HXLINE( 189)			int length = null();
HXDLIN( 189)			bool fixed = null();
HXDLIN( 189)			::Array< Float > array = null();
HXDLIN( 189)			this->data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            		}
HXLINE( 191)		this->commands->push(1);
HXLINE( 192)		this->data->push(x);
HXLINE( 193)		this->data->push(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,wideMoveTo,(void))

void GraphicsPath_obj::_hx___drawCircle(Float x,Float y,Float radius){
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_198___drawCircle)
HXDLIN( 198)		this->_hx___drawRoundRect((x - radius),(y - radius),(radius * ( (Float)(2) )),(radius * ( (Float)(2) )),(radius * ( (Float)(2) )),(radius * ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC3(GraphicsPath_obj,_hx___drawCircle,(void))

void GraphicsPath_obj::_hx___drawEllipse(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_203___drawEllipse)
HXDLIN( 203)		this->_hx___drawRoundRect(x,y,width,height,width,height);
            	}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsPath_obj,_hx___drawEllipse,(void))

void GraphicsPath_obj::_hx___drawRect(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_207___drawRect)
HXLINE( 208)		this->moveTo(x,y);
HXLINE( 209)		this->lineTo((x + width),y);
HXLINE( 210)		this->lineTo((x + width),(y + height));
HXLINE( 211)		this->lineTo(x,(y + height));
HXLINE( 212)		this->lineTo(x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsPath_obj,_hx___drawRect,(void))

void GraphicsPath_obj::_hx___drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth,Float ellipseHeight){
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_216___drawRoundRect)
HXLINE( 217)		ellipseWidth = (ellipseWidth * ((Float)0.5));
HXLINE( 218)		ellipseHeight = (ellipseHeight * ((Float)0.5));
HXLINE( 220)		if ((ellipseWidth > (width / ( (Float)(2) )))) {
HXLINE( 220)			ellipseWidth = (width / ( (Float)(2) ));
            		}
HXLINE( 221)		if ((ellipseHeight > (height / ( (Float)(2) )))) {
HXLINE( 221)			ellipseHeight = (height / ( (Float)(2) ));
            		}
HXLINE( 223)		Float xe = (x + width);
HXDLIN( 223)		Float ye = (y + height);
HXDLIN( 223)		Float cx1 = (-(ellipseWidth) + (ellipseWidth * ((Float)0.70710678118654752440084436210485)));
HXDLIN( 223)		Float cx2 = (-(ellipseWidth) + (ellipseWidth * ((Float)0.4142135623730950488016887242097)));
HXDLIN( 223)		Float cy1 = (-(ellipseHeight) + (ellipseHeight * ((Float)0.70710678118654752440084436210485)));
HXDLIN( 223)		Float cy2 = (-(ellipseHeight) + (ellipseHeight * ((Float)0.4142135623730950488016887242097)));
HXLINE( 230)		this->moveTo(xe,(ye - ellipseHeight));
HXLINE( 231)		this->curveTo(xe,(ye + cy2),(xe + cx1),(ye + cy1));
HXLINE( 232)		this->curveTo((xe + cx2),ye,(xe - ellipseWidth),ye);
HXLINE( 233)		this->lineTo((x + ellipseWidth),ye);
HXLINE( 234)		this->curveTo((x - cx2),ye,(x - cx1),(ye + cy1));
HXLINE( 235)		this->curveTo(x,(ye + cy2),x,(ye - ellipseHeight));
HXLINE( 236)		this->lineTo(x,(y + ellipseHeight));
HXLINE( 237)		this->curveTo(x,(y - cy2),(x - cx1),(y - cy1));
HXLINE( 238)		this->curveTo((x - cx2),y,(x + ellipseWidth),y);
HXLINE( 239)		this->lineTo((xe - ellipseWidth),y);
HXLINE( 240)		this->curveTo((xe + cx2),y,(xe + cx1),(y - cy1));
HXLINE( 241)		this->curveTo(xe,(y - cy2),xe,(y + ellipseHeight));
HXLINE( 242)		this->lineTo(xe,(ye - ellipseHeight));
            	}


HX_DEFINE_DYNAMIC_FUNC6(GraphicsPath_obj,_hx___drawRoundRect,(void))

Float GraphicsPath_obj::SIN45;

Float GraphicsPath_obj::TAN22;


::hx::ObjectPtr< GraphicsPath_obj > GraphicsPath_obj::__new( ::openfl::_Vector::IntVector commands, ::openfl::_Vector::FloatVector data, ::Dynamic __o_winding) {
	::hx::ObjectPtr< GraphicsPath_obj > __this = new GraphicsPath_obj();
	__this->__construct(commands,data,__o_winding);
	return __this;
}

::hx::ObjectPtr< GraphicsPath_obj > GraphicsPath_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::_Vector::IntVector commands, ::openfl::_Vector::FloatVector data, ::Dynamic __o_winding) {
	GraphicsPath_obj *__this = (GraphicsPath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsPath_obj), true, "openfl.display.GraphicsPath"));
	*(void **)__this = GraphicsPath_obj::_hx_vtable;
	__this->__construct(commands,data,__o_winding);
	return __this;
}

GraphicsPath_obj::GraphicsPath_obj()
{
}

void GraphicsPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsPath);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(winding,"winding");
	HX_MARK_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_MARK_END_CLASS();
}

void GraphicsPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(winding,"winding");
	HX_VISIT_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
}

::hx::Val GraphicsPath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return ::hx::Val( lineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { return ::hx::Val( winding ); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return ::hx::Val( curveTo_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return ::hx::Val( commands ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wideLineTo") ) { return ::hx::Val( wideLineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"wideMoveTo") ) { return ::hx::Val( wideMoveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"__drawRect") ) { return ::hx::Val( _hx___drawRect_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return ::hx::Val( cubicCurveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"__drawCircle") ) { return ::hx::Val( _hx___drawCircle_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__drawEllipse") ) { return ::hx::Val( _hx___drawEllipse_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__drawRoundRect") ) { return ::hx::Val( _hx___drawRoundRect_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return ::hx::Val( _hx___graphicsDataType ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GraphicsPath_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { winding=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { _hx___graphicsDataType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("commands",c8,b0,55,be));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("winding",1a,49,70,e8));
	outFields->push(HX_("__graphicsDataType",0f,5d,4d,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GraphicsPath_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(GraphicsPath_obj,commands),HX_("commands",c8,b0,55,be)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(GraphicsPath_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GraphicsPath_obj,winding),HX_("winding",1a,49,70,e8)},
	{::hx::fsInt,(int)offsetof(GraphicsPath_obj,_hx___graphicsDataType),HX_("__graphicsDataType",0f,5d,4d,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GraphicsPath_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &GraphicsPath_obj::SIN45,HX_("SIN45",79,16,be,fa)},
	{::hx::fsFloat,(void *) &GraphicsPath_obj::TAN22,HX_("TAN22",41,f4,da,88)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GraphicsPath_obj_sMemberFields[] = {
	HX_("commands",c8,b0,55,be),
	HX_("data",2a,56,63,42),
	HX_("winding",1a,49,70,e8),
	HX_("__graphicsDataType",0f,5d,4d,46),
	HX_("cubicCurveTo",e0,07,90,2e),
	HX_("curveTo",0a,60,88,ce),
	HX_("lineTo",8f,46,a0,ec),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("wideLineTo",02,f3,82,c8),
	HX_("wideMoveTo",5f,7f,8f,a8),
	HX_("__drawCircle",54,68,64,d0),
	HX_("__drawEllipse",1a,c6,46,9d),
	HX_("__drawRect",68,6a,49,03),
	HX_("__drawRoundRect",ce,fc,5c,6a),
	::String(null()) };

static void GraphicsPath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsPath_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(GraphicsPath_obj::TAN22,"TAN22");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicsPath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsPath_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(GraphicsPath_obj::TAN22,"TAN22");
};

#endif

::hx::Class GraphicsPath_obj::__mClass;

static ::String GraphicsPath_obj_sStaticFields[] = {
	HX_("SIN45",79,16,be,fa),
	HX_("TAN22",41,f4,da,88),
	::String(null())
};

void GraphicsPath_obj::__register()
{
	GraphicsPath_obj _hx_dummy;
	GraphicsPath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.GraphicsPath",7a,b7,47,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GraphicsPath_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicsPath_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GraphicsPath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GraphicsPath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicsPath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsPath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicsPath_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_31_boot)
HXDLIN(  31)		SIN45 = ((Float)0.70710678118654752440084436210485);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_32_boot)
HXDLIN(  32)		TAN22 = ((Float)0.4142135623730950488016887242097);
            	}
}

} // end namespace openfl
} // end namespace display
