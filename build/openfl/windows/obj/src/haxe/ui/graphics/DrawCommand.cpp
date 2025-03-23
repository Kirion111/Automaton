#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_graphics_DrawCommand
#include <haxe/ui/graphics/DrawCommand.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
namespace haxe{
namespace ui{
namespace graphics{

::haxe::ui::graphics::DrawCommand DrawCommand_obj::Circle(Float x,Float y,Float radius)
{
	return ::hx::CreateEnum< DrawCommand_obj >(HX_("Circle",30,e6,a1,8a),6,3)->_hx_init(0,x)->_hx_init(1,y)->_hx_init(2,radius);
}

::haxe::ui::graphics::DrawCommand DrawCommand_obj::Clear;

::haxe::ui::graphics::DrawCommand DrawCommand_obj::CubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY)
{
	return ::hx::CreateEnum< DrawCommand_obj >(HX_("CubicCurveTo",00,54,a2,f6),9,6)->_hx_init(0,controlX1)->_hx_init(1,controlY1)->_hx_init(2,controlX2)->_hx_init(3,controlY2)->_hx_init(4,anchorX)->_hx_init(5,anchorY);
}

::haxe::ui::graphics::DrawCommand DrawCommand_obj::CurveTo(Float controlX,Float controlY,Float anchorX,Float anchorY)
{
	return ::hx::CreateEnum< DrawCommand_obj >(HX_("CurveTo",ea,87,d9,9b),8,4)->_hx_init(0,controlX)->_hx_init(1,controlY)->_hx_init(2,anchorX)->_hx_init(3,anchorY);
}

::haxe::ui::graphics::DrawCommand DrawCommand_obj::FillStyle( ::Dynamic color, ::Dynamic alpha)
{
	return ::hx::CreateEnum< DrawCommand_obj >(HX_("FillStyle",8e,ab,97,f4),7,2)->_hx_init(0,color)->_hx_init(1,alpha);
}

::haxe::ui::graphics::DrawCommand DrawCommand_obj::Image( ::haxe::ui::util::VariantType resource,Float x,Float y,Float width,Float height)
{
	return ::hx::CreateEnum< DrawCommand_obj >(HX_("Image",3b,8f,96,50),11,5)->_hx_init(0,resource)->_hx_init(1,x)->_hx_init(2,y)->_hx_init(3,width)->_hx_init(4,height);
}

::haxe::ui::graphics::DrawCommand DrawCommand_obj::LineTo(Float x,Float y)
{
	return ::hx::CreateEnum< DrawCommand_obj >(HX_("LineTo",af,ba,34,21),4,2)->_hx_init(0,x)->_hx_init(1,y);
}

::haxe::ui::graphics::DrawCommand DrawCommand_obj::MoveTo(Float x,Float y)
{
	return ::hx::CreateEnum< DrawCommand_obj >(HX_("MoveTo",0c,47,41,01),3,2)->_hx_init(0,x)->_hx_init(1,y);
}

::haxe::ui::graphics::DrawCommand DrawCommand_obj::Rectangle(Float x,Float y,Float width,Float height)
{
	return ::hx::CreateEnum< DrawCommand_obj >(HX_("Rectangle",0f,b4,4f,bb),10,4)->_hx_init(0,x)->_hx_init(1,y)->_hx_init(2,width)->_hx_init(3,height);
}

::haxe::ui::graphics::DrawCommand DrawCommand_obj::SetPixel(Float x,Float y,int color)
{
	return ::hx::CreateEnum< DrawCommand_obj >(HX_("SetPixel",a4,eb,89,aa),1,3)->_hx_init(0,x)->_hx_init(1,y)->_hx_init(2,color);
}

::haxe::ui::graphics::DrawCommand DrawCommand_obj::SetPixels( ::haxe::io::Bytes pixels)
{
	return ::hx::CreateEnum< DrawCommand_obj >(HX_("SetPixels",4f,44,24,8e),2,1)->_hx_init(0,pixels);
}

::haxe::ui::graphics::DrawCommand DrawCommand_obj::StrokeStyle( ::Dynamic color, ::Dynamic thickness, ::Dynamic alpha)
{
	return ::hx::CreateEnum< DrawCommand_obj >(HX_("StrokeStyle",39,7e,0a,81),5,3)->_hx_init(0,color)->_hx_init(1,thickness)->_hx_init(2,alpha);
}

bool DrawCommand_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Circle",30,e6,a1,8a)) { outValue = DrawCommand_obj::Circle_dyn(); return true; }
	if (inName==HX_("Clear",6d,e1,88,db)) { outValue = DrawCommand_obj::Clear; return true; }
	if (inName==HX_("CubicCurveTo",00,54,a2,f6)) { outValue = DrawCommand_obj::CubicCurveTo_dyn(); return true; }
	if (inName==HX_("CurveTo",ea,87,d9,9b)) { outValue = DrawCommand_obj::CurveTo_dyn(); return true; }
	if (inName==HX_("FillStyle",8e,ab,97,f4)) { outValue = DrawCommand_obj::FillStyle_dyn(); return true; }
	if (inName==HX_("Image",3b,8f,96,50)) { outValue = DrawCommand_obj::Image_dyn(); return true; }
	if (inName==HX_("LineTo",af,ba,34,21)) { outValue = DrawCommand_obj::LineTo_dyn(); return true; }
	if (inName==HX_("MoveTo",0c,47,41,01)) { outValue = DrawCommand_obj::MoveTo_dyn(); return true; }
	if (inName==HX_("Rectangle",0f,b4,4f,bb)) { outValue = DrawCommand_obj::Rectangle_dyn(); return true; }
	if (inName==HX_("SetPixel",a4,eb,89,aa)) { outValue = DrawCommand_obj::SetPixel_dyn(); return true; }
	if (inName==HX_("SetPixels",4f,44,24,8e)) { outValue = DrawCommand_obj::SetPixels_dyn(); return true; }
	if (inName==HX_("StrokeStyle",39,7e,0a,81)) { outValue = DrawCommand_obj::StrokeStyle_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(DrawCommand_obj)

int DrawCommand_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Circle",30,e6,a1,8a)) return 6;
	if (inName==HX_("Clear",6d,e1,88,db)) return 0;
	if (inName==HX_("CubicCurveTo",00,54,a2,f6)) return 9;
	if (inName==HX_("CurveTo",ea,87,d9,9b)) return 8;
	if (inName==HX_("FillStyle",8e,ab,97,f4)) return 7;
	if (inName==HX_("Image",3b,8f,96,50)) return 11;
	if (inName==HX_("LineTo",af,ba,34,21)) return 4;
	if (inName==HX_("MoveTo",0c,47,41,01)) return 3;
	if (inName==HX_("Rectangle",0f,b4,4f,bb)) return 10;
	if (inName==HX_("SetPixel",a4,eb,89,aa)) return 1;
	if (inName==HX_("SetPixels",4f,44,24,8e)) return 2;
	if (inName==HX_("StrokeStyle",39,7e,0a,81)) return 5;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(DrawCommand_obj,Circle,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC6(DrawCommand_obj,CubicCurveTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(DrawCommand_obj,CurveTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawCommand_obj,FillStyle,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC5(DrawCommand_obj,Image,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawCommand_obj,LineTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawCommand_obj,MoveTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(DrawCommand_obj,Rectangle,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(DrawCommand_obj,SetPixel,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCommand_obj,SetPixels,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(DrawCommand_obj,StrokeStyle,return)

int DrawCommand_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Circle",30,e6,a1,8a)) return 3;
	if (inName==HX_("Clear",6d,e1,88,db)) return 0;
	if (inName==HX_("CubicCurveTo",00,54,a2,f6)) return 6;
	if (inName==HX_("CurveTo",ea,87,d9,9b)) return 4;
	if (inName==HX_("FillStyle",8e,ab,97,f4)) return 2;
	if (inName==HX_("Image",3b,8f,96,50)) return 5;
	if (inName==HX_("LineTo",af,ba,34,21)) return 2;
	if (inName==HX_("MoveTo",0c,47,41,01)) return 2;
	if (inName==HX_("Rectangle",0f,b4,4f,bb)) return 4;
	if (inName==HX_("SetPixel",a4,eb,89,aa)) return 3;
	if (inName==HX_("SetPixels",4f,44,24,8e)) return 1;
	if (inName==HX_("StrokeStyle",39,7e,0a,81)) return 3;
	return super::__FindArgCount(inName);
}

::hx::Val DrawCommand_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Circle",30,e6,a1,8a)) return Circle_dyn();
	if (inName==HX_("Clear",6d,e1,88,db)) return Clear;
	if (inName==HX_("CubicCurveTo",00,54,a2,f6)) return CubicCurveTo_dyn();
	if (inName==HX_("CurveTo",ea,87,d9,9b)) return CurveTo_dyn();
	if (inName==HX_("FillStyle",8e,ab,97,f4)) return FillStyle_dyn();
	if (inName==HX_("Image",3b,8f,96,50)) return Image_dyn();
	if (inName==HX_("LineTo",af,ba,34,21)) return LineTo_dyn();
	if (inName==HX_("MoveTo",0c,47,41,01)) return MoveTo_dyn();
	if (inName==HX_("Rectangle",0f,b4,4f,bb)) return Rectangle_dyn();
	if (inName==HX_("SetPixel",a4,eb,89,aa)) return SetPixel_dyn();
	if (inName==HX_("SetPixels",4f,44,24,8e)) return SetPixels_dyn();
	if (inName==HX_("StrokeStyle",39,7e,0a,81)) return StrokeStyle_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String DrawCommand_obj_sStaticFields[] = {
	HX_("Clear",6d,e1,88,db),
	HX_("SetPixel",a4,eb,89,aa),
	HX_("SetPixels",4f,44,24,8e),
	HX_("MoveTo",0c,47,41,01),
	HX_("LineTo",af,ba,34,21),
	HX_("StrokeStyle",39,7e,0a,81),
	HX_("Circle",30,e6,a1,8a),
	HX_("FillStyle",8e,ab,97,f4),
	HX_("CurveTo",ea,87,d9,9b),
	HX_("CubicCurveTo",00,54,a2,f6),
	HX_("Rectangle",0f,b4,4f,bb),
	HX_("Image",3b,8f,96,50),
	::String(null())
};

::hx::Class DrawCommand_obj::__mClass;

Dynamic __Create_DrawCommand_obj() { return new DrawCommand_obj; }

void DrawCommand_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.ui.graphics.DrawCommand",76,65,93,40), ::hx::TCanCast< DrawCommand_obj >,DrawCommand_obj_sStaticFields,0,
	&__Create_DrawCommand_obj, &__Create,
	&super::__SGetClass(), &CreateDrawCommand_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &DrawCommand_obj::__GetStatic;
}

void DrawCommand_obj::__boot()
{
Clear = ::hx::CreateConstEnum< DrawCommand_obj >(HX_("Clear",6d,e1,88,db),0);
}


} // end namespace haxe
} // end namespace ui
} // end namespace graphics
