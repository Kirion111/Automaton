#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsBase
#include <haxe/ui/backend/ComponentGraphicsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsImpl
#include <haxe/ui/backend/ComponentGraphicsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentContainer
#include <haxe/ui/core/IComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_loaders_image_ImageLoader
#include <haxe/ui/loaders/image/ImageLoader.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <haxe/ui/util/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_401f586f6ef1a56f_14_new,"haxe.ui.backend.ComponentGraphicsImpl","new",0x0f4d464e,"haxe.ui.backend.ComponentGraphicsImpl.new","haxe/ui/backend/ComponentGraphicsImpl.hx",14,0xde336e83)
HX_LOCAL_STACK_FRAME(_hx_pos_401f586f6ef1a56f_24_clear,"haxe.ui.backend.ComponentGraphicsImpl","clear",0x2110befb,"haxe.ui.backend.ComponentGraphicsImpl.clear","haxe/ui/backend/ComponentGraphicsImpl.hx",24,0xde336e83)
HX_LOCAL_STACK_FRAME(_hx_pos_401f586f6ef1a56f_31_moveTo,"haxe.ui.backend.ComponentGraphicsImpl","moveTo",0x929b45be,"haxe.ui.backend.ComponentGraphicsImpl.moveTo","haxe/ui/backend/ComponentGraphicsImpl.hx",31,0xde336e83)
HX_LOCAL_STACK_FRAME(_hx_pos_401f586f6ef1a56f_38_lineTo,"haxe.ui.backend.ComponentGraphicsImpl","lineTo",0xb28eb961,"haxe.ui.backend.ComponentGraphicsImpl.lineTo","haxe/ui/backend/ComponentGraphicsImpl.hx",38,0xde336e83)
HX_LOCAL_STACK_FRAME(_hx_pos_401f586f6ef1a56f_45_strokeStyle,"haxe.ui.backend.ComponentGraphicsImpl","strokeStyle",0x3e3dfa47,"haxe.ui.backend.ComponentGraphicsImpl.strokeStyle","haxe/ui/backend/ComponentGraphicsImpl.hx",45,0xde336e83)
HX_LOCAL_STACK_FRAME(_hx_pos_401f586f6ef1a56f_52_fillStyle,"haxe.ui.backend.ComponentGraphicsImpl","fillStyle",0x5ab8681c,"haxe.ui.backend.ComponentGraphicsImpl.fillStyle","haxe/ui/backend/ComponentGraphicsImpl.hx",52,0xde336e83)
HX_LOCAL_STACK_FRAME(_hx_pos_401f586f6ef1a56f_60_circle,"haxe.ui.backend.ComponentGraphicsImpl","circle",0x1bfbe4e2,"haxe.ui.backend.ComponentGraphicsImpl.circle","haxe/ui/backend/ComponentGraphicsImpl.hx",60,0xde336e83)
HX_LOCAL_STACK_FRAME(_hx_pos_401f586f6ef1a56f_73_curveTo,"haxe.ui.backend.ComponentGraphicsImpl","curveTo",0x393e64f8,"haxe.ui.backend.ComponentGraphicsImpl.curveTo","haxe/ui/backend/ComponentGraphicsImpl.hx",73,0xde336e83)
HX_LOCAL_STACK_FRAME(_hx_pos_401f586f6ef1a56f_86_cubicCurveTo,"haxe.ui.backend.ComponentGraphicsImpl","cubicCurveTo",0xc67b6432,"haxe.ui.backend.ComponentGraphicsImpl.cubicCurveTo","haxe/ui/backend/ComponentGraphicsImpl.hx",86,0xde336e83)
HX_LOCAL_STACK_FRAME(_hx_pos_401f586f6ef1a56f_99_rectangle,"haxe.ui.backend.ComponentGraphicsImpl","rectangle",0x2170709d,"haxe.ui.backend.ComponentGraphicsImpl.rectangle","haxe/ui/backend/ComponentGraphicsImpl.hx",99,0xde336e83)
HX_LOCAL_STACK_FRAME(_hx_pos_401f586f6ef1a56f_117_image,"haxe.ui.backend.ComponentGraphicsImpl","image",0x961e6cc9,"haxe.ui.backend.ComponentGraphicsImpl.image","haxe/ui/backend/ComponentGraphicsImpl.hx",117,0xde336e83)
HX_LOCAL_STACK_FRAME(_hx_pos_401f586f6ef1a56f_112_image,"haxe.ui.backend.ComponentGraphicsImpl","image",0x961e6cc9,"haxe.ui.backend.ComponentGraphicsImpl.image","haxe/ui/backend/ComponentGraphicsImpl.hx",112,0xde336e83)
HX_LOCAL_STACK_FRAME(_hx_pos_401f586f6ef1a56f_136_setPixel,"haxe.ui.backend.ComponentGraphicsImpl","setPixel",0xc5667ad6,"haxe.ui.backend.ComponentGraphicsImpl.setPixel","haxe/ui/backend/ComponentGraphicsImpl.hx",136,0xde336e83)
HX_LOCAL_STACK_FRAME(_hx_pos_401f586f6ef1a56f_147_setPixels,"haxe.ui.backend.ComponentGraphicsImpl","setPixels",0xf44500dd,"haxe.ui.backend.ComponentGraphicsImpl.setPixels","haxe/ui/backend/ComponentGraphicsImpl.hx",147,0xde336e83)
HX_LOCAL_STACK_FRAME(_hx_pos_401f586f6ef1a56f_180_resize,"haxe.ui.backend.ComponentGraphicsImpl","resize",0xce69ccc6,"haxe.ui.backend.ComponentGraphicsImpl.resize","haxe/ui/backend/ComponentGraphicsImpl.hx",180,0xde336e83)
namespace haxe{
namespace ui{
namespace backend{

void ComponentGraphicsImpl_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_401f586f6ef1a56f_14_new)
HXLINE( 146)		this->_bitmapData = null();
HXLINE( 145)		this->_bitmap = null();
HXLINE(  17)		this->_hasSize = false;
HXLINE(  16)		this->_currentFillAlpha = null();
HXLINE(  15)		this->_currentFillColor = null();
HXLINE(  20)		super::__construct(component);
HXLINE(  21)		component->styleable = false;
            	}

Dynamic ComponentGraphicsImpl_obj::__CreateEmpty() { return new ComponentGraphicsImpl_obj; }

void *ComponentGraphicsImpl_obj::_hx_vtable = 0;

Dynamic ComponentGraphicsImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentGraphicsImpl_obj > _hx_result = new ComponentGraphicsImpl_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ComponentGraphicsImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x292a8ee7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x292a8ee7;
	} else {
		return inClassId==(int)0x2dd425b6;
	}
}

void ComponentGraphicsImpl_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_401f586f6ef1a56f_24_clear)
HXLINE(  25)		if ((this->_hasSize == false)) {
HXLINE(  26)			this->super::clear();
HXDLIN(  26)			return;
            		}
HXLINE(  28)		this->_component->get_graphics()->clear();
            	}


void ComponentGraphicsImpl_obj::moveTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_401f586f6ef1a56f_31_moveTo)
HXLINE(  32)		if ((this->_hasSize == false)) {
HXLINE(  33)			this->super::moveTo(x,y);
HXDLIN(  33)			return;
            		}
HXLINE(  35)		this->_component->get_graphics()->moveTo(x,y);
            	}


void ComponentGraphicsImpl_obj::lineTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_401f586f6ef1a56f_38_lineTo)
HXLINE(  39)		if ((this->_hasSize == false)) {
HXLINE(  40)			this->super::lineTo(x,y);
HXDLIN(  40)			return;
            		}
HXLINE(  42)		this->_component->get_graphics()->lineTo(x,y);
            	}


void ComponentGraphicsImpl_obj::strokeStyle( ::Dynamic color, ::Dynamic __o_thickness, ::Dynamic __o_alpha){
            		 ::Dynamic thickness = __o_thickness;
            		if (::hx::IsNull(__o_thickness)) thickness = 1;
            		 ::Dynamic alpha = __o_alpha;
            		if (::hx::IsNull(__o_alpha)) alpha = 1;
            	HX_STACKFRAME(&_hx_pos_401f586f6ef1a56f_45_strokeStyle)
HXLINE(  46)		if ((this->_hasSize == false)) {
HXLINE(  47)			this->super::strokeStyle(color,thickness,alpha);
HXDLIN(  47)			return;
            		}
HXLINE(  49)		 ::openfl::display::Graphics _hx_tmp = this->_component->get_graphics();
HXDLIN(  49)		_hx_tmp->lineStyle(thickness,::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(color) )),alpha,null(),null(),null(),null(),null());
            	}


void ComponentGraphicsImpl_obj::fillStyle( ::Dynamic color, ::Dynamic __o_alpha){
            		 ::Dynamic alpha = __o_alpha;
            		if (::hx::IsNull(__o_alpha)) alpha = 1;
            	HX_STACKFRAME(&_hx_pos_401f586f6ef1a56f_52_fillStyle)
HXLINE(  53)		if ((this->_hasSize == false)) {
HXLINE(  54)			this->super::fillStyle(color,alpha);
HXDLIN(  54)			return;
            		}
HXLINE(  56)		this->_currentFillColor = color;
HXLINE(  57)		this->_currentFillAlpha = alpha;
            	}


void ComponentGraphicsImpl_obj::circle(Float x,Float y,Float radius){
            	HX_STACKFRAME(&_hx_pos_401f586f6ef1a56f_60_circle)
HXLINE(  61)		if ((this->_hasSize == false)) {
HXLINE(  62)			this->super::circle(x,y,radius);
HXDLIN(  62)			return;
            		}
HXLINE(  64)		if (::hx::IsNotNull( this->_currentFillColor )) {
HXLINE(  65)			 ::openfl::display::Graphics _hx_tmp = this->_component->get_graphics();
HXDLIN(  65)			_hx_tmp->beginFill(::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(this->_currentFillColor) )),this->_currentFillAlpha);
            		}
HXLINE(  67)		this->_component->get_graphics()->drawCircle(x,y,radius);
HXLINE(  68)		if (::hx::IsNotNull( this->_currentFillColor )) {
HXLINE(  69)			this->_component->get_graphics()->endFill();
            		}
            	}


void ComponentGraphicsImpl_obj::curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY){
            	HX_STACKFRAME(&_hx_pos_401f586f6ef1a56f_73_curveTo)
HXLINE(  74)		if ((this->_hasSize == false)) {
HXLINE(  75)			this->super::curveTo(controlX,controlY,anchorX,anchorY);
HXDLIN(  75)			return;
            		}
HXLINE(  77)		if (::hx::IsNotNull( this->_currentFillColor )) {
HXLINE(  78)			 ::openfl::display::Graphics _hx_tmp = this->_component->get_graphics();
HXDLIN(  78)			_hx_tmp->beginFill(::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(this->_currentFillColor) )),this->_currentFillAlpha);
            		}
HXLINE(  80)		this->_component->get_graphics()->curveTo(controlX,controlY,anchorX,anchorY);
HXLINE(  81)		if (::hx::IsNotNull( this->_currentFillColor )) {
HXLINE(  82)			this->_component->get_graphics()->endFill();
            		}
            	}


void ComponentGraphicsImpl_obj::cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
            	HX_STACKFRAME(&_hx_pos_401f586f6ef1a56f_86_cubicCurveTo)
HXLINE(  87)		if ((this->_hasSize == false)) {
HXLINE(  88)			this->super::cubicCurveTo(controlX1,controlY1,controlX2,controlY2,anchorX,anchorY);
HXDLIN(  88)			return;
            		}
HXLINE(  90)		if (::hx::IsNotNull( this->_currentFillColor )) {
HXLINE(  91)			 ::openfl::display::Graphics _hx_tmp = this->_component->get_graphics();
HXDLIN(  91)			_hx_tmp->beginFill(::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(this->_currentFillColor) )),this->_currentFillAlpha);
            		}
HXLINE(  93)		this->_component->get_graphics()->cubicCurveTo(controlX1,controlY1,controlX2,controlY2,anchorX,anchorY);
HXLINE(  94)		if (::hx::IsNotNull( this->_currentFillColor )) {
HXLINE(  95)			this->_component->get_graphics()->endFill();
            		}
            	}


void ComponentGraphicsImpl_obj::rectangle(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_401f586f6ef1a56f_99_rectangle)
HXLINE( 100)		if ((this->_hasSize == false)) {
HXLINE( 101)			this->super::rectangle(x,y,width,height);
HXDLIN( 101)			return;
            		}
HXLINE( 103)		if (::hx::IsNotNull( this->_currentFillColor )) {
HXLINE( 104)			 ::openfl::display::Graphics _hx_tmp = this->_component->get_graphics();
HXDLIN( 104)			_hx_tmp->beginFill(::haxe::ui::util::_Color::Color_Impl__obj::toInt(( (int)(this->_currentFillColor) )),this->_currentFillAlpha);
            		}
HXLINE( 106)		this->_component->get_graphics()->drawRect(x,y,width,height);
HXLINE( 107)		if (::hx::IsNotNull( this->_currentFillColor )) {
HXLINE( 108)			this->_component->get_graphics()->endFill();
            		}
            	}


void ComponentGraphicsImpl_obj::image( ::haxe::ui::util::VariantType resource, ::Dynamic x, ::Dynamic y, ::Dynamic width, ::Dynamic height){
            		HX_BEGIN_LOCAL_FUNC_S6(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::backend::ComponentGraphicsImpl,_gthis,::Array< ::Dynamic>,y1,::Array< ::Dynamic>,height1,::Array< ::Dynamic>,x1,::Array< ::Dynamic>,width1, ::haxe::ui::util::VariantType,resource) HXARGC(1)
            		void _hx_run( ::Dynamic imageInfo){
            			HX_GC_STACKFRAME(&_hx_pos_401f586f6ef1a56f_117_image)
HXLINE( 117)			if (::hx::IsNotNull( imageInfo )) {
HXLINE( 118)				if (::hx::IsNull( x1->__get(0) )) {
HXLINE( 118)					x1[0] = 0;
            				}
HXLINE( 119)				if (::hx::IsNull( y1->__get(0) )) {
HXLINE( 119)					y1[0] = 0;
            				}
HXLINE( 120)				if (::hx::IsNull( width1->__get(0) )) {
HXLINE( 120)					width1[0] = imageInfo->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic);
            				}
HXLINE( 121)				if (::hx::IsNull( height1->__get(0) )) {
HXLINE( 121)					height1[0] = imageInfo->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic);
            				}
HXLINE( 123)				 ::openfl::geom::Matrix mat =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 124)				mat->scale((( (Float)(width1->__get(0)) ) / ( (Float)(imageInfo->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) )),(( (Float)(height1->__get(0)) ) / ( (Float)(imageInfo->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) )));
HXLINE( 125)				mat->translate(( (Float)(x1->__get(0)) ),( (Float)(y1->__get(0)) ));
HXLINE( 127)				_gthis->_component->get_graphics()->beginBitmapFill(( ( ::openfl::display::BitmapData)(imageInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) ),mat,null(),null());
HXLINE( 128)				 ::openfl::display::Graphics _hx_tmp = _gthis->_component->get_graphics();
HXDLIN( 128)				_hx_tmp->drawRect(( (Float)(x1->__get(0)) ),( (Float)(y1->__get(0)) ),( (Float)(width1->__get(0)) ),( (Float)(height1->__get(0)) ));
HXLINE( 129)				_gthis->_component->get_graphics()->endFill();
            			}
            			else {
HXLINE( 131)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 131)				::String _hx_tmp1;
HXDLIN( 131)				if (::hx::IsNull( resource )) {
HXLINE( 131)					_hx_tmp1 = HX_("null",87,9e,0e,49);
            				}
            				else {
HXLINE( 131)					_hx_tmp1 = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(resource);
            				}
HXDLIN( 131)				_hx_tmp((HX_("could not load: ",78,2c,60,5e) + _hx_tmp1),::hx::SourceInfo(HX_("haxe/ui/backend/ComponentGraphicsImpl.hx",83,6e,33,de),131,HX_("haxe.ui.backend.ComponentGraphicsImpl",5c,c7,44,c8),HX_("image",5b,1f,69,bd)));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_401f586f6ef1a56f_112_image)
HXDLIN( 112)		::Array< ::Dynamic> height1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,height);
HXDLIN( 112)		::Array< ::Dynamic> width1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,width);
HXDLIN( 112)		::Array< ::Dynamic> y1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,y);
HXDLIN( 112)		::Array< ::Dynamic> x1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,x);
HXDLIN( 112)		 ::haxe::ui::backend::ComponentGraphicsImpl _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 113)		if ((this->_hasSize == false)) {
HXLINE( 114)			this->super::image(resource,x1->__get(0),y1->__get(0),width1->__get(0),height1->__get(0));
HXDLIN( 114)			return;
            		}
HXLINE( 116)		::haxe::ui::loaders::image::ImageLoader_obj::get_instance()->load(resource, ::Dynamic(new _hx_Closure_0(_gthis,y1,height1,x1,width1,resource)),null());
            	}


void ComponentGraphicsImpl_obj::setPixel(Float x,Float y,int color){
            	HX_STACKFRAME(&_hx_pos_401f586f6ef1a56f_136_setPixel)
HXLINE( 137)		if ((this->_hasSize == false)) {
HXLINE( 138)			this->super::setPixel(x,y,color);
HXDLIN( 138)			return;
            		}
HXLINE( 140)		 ::openfl::display::Graphics _hx_tmp = this->_component->get_graphics();
HXDLIN( 140)		_hx_tmp->beginFill(::haxe::ui::util::_Color::Color_Impl__obj::toInt(color),null());
HXLINE( 141)		this->_component->get_graphics()->drawRect(x,y,( (Float)(1) ),( (Float)(1) ));
HXLINE( 142)		this->_component->get_graphics()->endFill();
            	}


void ComponentGraphicsImpl_obj::setPixels( ::haxe::io::Bytes pixels){
            	HX_GC_STACKFRAME(&_hx_pos_401f586f6ef1a56f_147_setPixels)
HXLINE( 148)		if ((this->_hasSize == false)) {
HXLINE( 149)			this->super::setPixels(pixels);
HXDLIN( 149)			return;
            		}
HXLINE( 152)		if (::hx::IsNull( this->_bitmap )) {
HXLINE( 153)			int _hx_tmp = ::Std_obj::_hx_int(this->_component->get_width());
HXDLIN( 153)			this->_bitmapData =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,_hx_tmp,::Std_obj::_hx_int(this->_component->get_height()),true,0);
HXLINE( 154)			this->_bitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,this->_bitmapData,null(),null());
HXLINE( 155)			this->_component->addChild(this->_bitmap);
            		}
HXLINE( 159)		::Array< unsigned char > bytesData = pixels->b;
HXLINE( 160)		int length = pixels->length;
HXLINE( 161)		 ::haxe::io::Bytes newPixels = ::haxe::io::Bytes_obj::alloc(length);
HXLINE( 162)		int i = 0;
HXLINE( 163)		while((i < length)){
HXLINE( 164)			int r = ( (int)(_hx_array_unsafe_get(bytesData,i)) );
HXLINE( 165)			int g = ( (int)(_hx_array_unsafe_get(bytesData,(i + 1))) );
HXLINE( 166)			int b = ( (int)(_hx_array_unsafe_get(bytesData,(i + 2))) );
HXLINE( 167)			int a = ( (int)(_hx_array_unsafe_get(bytesData,(i + 3))) );
HXLINE( 168)			newPixels->b[i] = ( (unsigned char)(b) );
HXLINE( 169)			newPixels->b[(i + 1)] = ( (unsigned char)(g) );
HXLINE( 170)			newPixels->b[(i + 2)] = ( (unsigned char)(r) );
HXLINE( 171)			newPixels->b[(i + 3)] = ( (unsigned char)(a) );
HXLINE( 172)			i = (i + 4);
            		}
HXLINE( 175)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(newPixels);
HXLINE( 176)		 ::openfl::display::BitmapData _hx_tmp = this->_bitmapData;
HXDLIN( 176)		_hx_tmp->setPixels( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,this->_bitmapData->width,this->_bitmapData->height),byteArray);
            	}


void ComponentGraphicsImpl_obj::resize( ::Dynamic width, ::Dynamic height){
            	HX_STACKFRAME(&_hx_pos_401f586f6ef1a56f_180_resize)
HXDLIN( 180)		bool _hx_tmp;
HXDLIN( 180)		if (::hx::IsGreater( width,0 )) {
HXDLIN( 180)			_hx_tmp = ::hx::IsGreater( height,0 );
            		}
            		else {
HXDLIN( 180)			_hx_tmp = false;
            		}
HXDLIN( 180)		if (_hx_tmp) {
HXLINE( 181)			if ((this->_hasSize == false)) {
HXLINE( 182)				this->_hasSize = true;
HXLINE( 183)				this->replayDrawCommands();
            			}
            		}
            	}



::hx::ObjectPtr< ComponentGraphicsImpl_obj > ComponentGraphicsImpl_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ComponentGraphicsImpl_obj > __this = new ComponentGraphicsImpl_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ComponentGraphicsImpl_obj > ComponentGraphicsImpl_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ComponentGraphicsImpl_obj *__this = (ComponentGraphicsImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentGraphicsImpl_obj), true, "haxe.ui.backend.ComponentGraphicsImpl"));
	*(void **)__this = ComponentGraphicsImpl_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ComponentGraphicsImpl_obj::ComponentGraphicsImpl_obj()
{
}

void ComponentGraphicsImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentGraphicsImpl);
	HX_MARK_MEMBER_NAME(_currentFillColor,"_currentFillColor");
	HX_MARK_MEMBER_NAME(_currentFillAlpha,"_currentFillAlpha");
	HX_MARK_MEMBER_NAME(_hasSize,"_hasSize");
	HX_MARK_MEMBER_NAME(_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(_bitmapData,"_bitmapData");
	 ::haxe::ui::backend::ComponentGraphicsBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComponentGraphicsImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_currentFillColor,"_currentFillColor");
	HX_VISIT_MEMBER_NAME(_currentFillAlpha,"_currentFillAlpha");
	HX_VISIT_MEMBER_NAME(_hasSize,"_hasSize");
	HX_VISIT_MEMBER_NAME(_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(_bitmapData,"_bitmapData");
	 ::haxe::ui::backend::ComponentGraphicsBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ComponentGraphicsImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"image") ) { return ::hx::Val( image_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return ::hx::Val( lineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"circle") ) { return ::hx::Val( circle_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return ::hx::Val( curveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return ::hx::Val( _bitmap ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hasSize") ) { return ::hx::Val( _hasSize ); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return ::hx::Val( setPixel_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillStyle") ) { return ::hx::Val( fillStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"rectangle") ) { return ::hx::Val( rectangle_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return ::hx::Val( setPixels_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"strokeStyle") ) { return ::hx::Val( strokeStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { return ::hx::Val( _bitmapData ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return ::hx::Val( cubicCurveTo_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentFillColor") ) { return ::hx::Val( _currentFillColor ); }
		if (HX_FIELD_EQ(inName,"_currentFillAlpha") ) { return ::hx::Val( _currentFillAlpha ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ComponentGraphicsImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hasSize") ) { _hasSize=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { _bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentFillColor") ) { _currentFillColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentFillAlpha") ) { _currentFillAlpha=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentGraphicsImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_currentFillColor",c6,fa,ae,a4));
	outFields->push(HX_("_currentFillAlpha",c1,30,e9,7b));
	outFields->push(HX_("_hasSize",bc,1a,50,55));
	outFields->push(HX_("_bitmap",8e,21,83,5f));
	outFields->push(HX_("_bitmapData",d8,82,4a,06));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComponentGraphicsImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentGraphicsImpl_obj,_currentFillColor),HX_("_currentFillColor",c6,fa,ae,a4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentGraphicsImpl_obj,_currentFillAlpha),HX_("_currentFillAlpha",c1,30,e9,7b)},
	{::hx::fsBool,(int)offsetof(ComponentGraphicsImpl_obj,_hasSize),HX_("_hasSize",bc,1a,50,55)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(ComponentGraphicsImpl_obj,_bitmap),HX_("_bitmap",8e,21,83,5f)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(ComponentGraphicsImpl_obj,_bitmapData),HX_("_bitmapData",d8,82,4a,06)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ComponentGraphicsImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentGraphicsImpl_obj_sMemberFields[] = {
	HX_("_currentFillColor",c6,fa,ae,a4),
	HX_("_currentFillAlpha",c1,30,e9,7b),
	HX_("_hasSize",bc,1a,50,55),
	HX_("clear",8d,71,5b,48),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("lineTo",8f,46,a0,ec),
	HX_("strokeStyle",59,e6,d7,9c),
	HX_("fillStyle",ae,cb,c4,52),
	HX_("circle",10,72,0d,56),
	HX_("curveTo",0a,60,88,ce),
	HX_("cubicCurveTo",e0,07,90,2e),
	HX_("rectangle",2f,d4,7c,19),
	HX_("image",5b,1f,69,bd),
	HX_("setPixel",84,2f,d8,d0),
	HX_("_bitmap",8e,21,83,5f),
	HX_("_bitmapData",d8,82,4a,06),
	HX_("setPixels",6f,64,51,ec),
	HX_("resize",f4,59,7b,08),
	::String(null()) };

::hx::Class ComponentGraphicsImpl_obj::__mClass;

void ComponentGraphicsImpl_obj::__register()
{
	ComponentGraphicsImpl_obj _hx_dummy;
	ComponentGraphicsImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ComponentGraphicsImpl",5c,c7,44,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentGraphicsImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentGraphicsImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentGraphicsImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentGraphicsImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
