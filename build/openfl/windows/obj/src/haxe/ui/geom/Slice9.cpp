#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Slice9
#include <haxe/ui/geom/Slice9.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a8c2bbae08e039b3_9_buildRects,"haxe.ui.geom.Slice9","buildRects",0x8618c068,"haxe.ui.geom.Slice9.buildRects","haxe/ui/geom/Slice9.hx",9,0xd3582236)
HX_LOCAL_STACK_FRAME(_hx_pos_a8c2bbae08e039b3_18_buildSrcRects,"haxe.ui.geom.Slice9","buildSrcRects",0x3fd1b952,"haxe.ui.geom.Slice9.buildSrcRects","haxe/ui/geom/Slice9.hx",18,0xd3582236)
HX_LOCAL_STACK_FRAME(_hx_pos_a8c2bbae08e039b3_40_buildDstRects,"haxe.ui.geom.Slice9","buildDstRects",0xdb83a291,"haxe.ui.geom.Slice9.buildDstRects","haxe/ui/geom/Slice9.hx",40,0xd3582236)
namespace haxe{
namespace ui{
namespace geom{

void Slice9_obj::__construct() { }

Dynamic Slice9_obj::__CreateEmpty() { return new Slice9_obj; }

void *Slice9_obj::_hx_vtable = 0;

Dynamic Slice9_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Slice9_obj > _hx_result = new Slice9_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Slice9_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0619247d;
}

 ::Dynamic Slice9_obj::buildRects(Float w,Float h,Float bitmapWidth,Float bitmapHeight, ::haxe::ui::geom::Rectangle slice){
            	HX_STACKFRAME(&_hx_pos_a8c2bbae08e039b3_9_buildRects)
HXLINE(  10)		::Array< ::Dynamic> srcRects = ::haxe::ui::geom::Slice9_obj::buildSrcRects(bitmapWidth,bitmapHeight,slice);
HXLINE(  11)		::Array< ::Dynamic> dstRects = ::haxe::ui::geom::Slice9_obj::buildDstRects(w,h,srcRects);
HXLINE(  12)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("dst",05,46,4c,00),dstRects)
            			->setFixed(1,HX_("src",e4,a6,57,00),srcRects));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Slice9_obj,buildRects,return )

::Array< ::Dynamic> Slice9_obj::buildSrcRects(Float bitmapWidth,Float bitmapHeight, ::haxe::ui::geom::Rectangle slice){
            	HX_GC_STACKFRAME(&_hx_pos_a8c2bbae08e039b3_18_buildSrcRects)
HXLINE(  19)		Float x1 = slice->left;
HXLINE(  20)		Float y1 = slice->top;
HXLINE(  21)		Float x2 = slice->get_right();
HXLINE(  22)		Float y2 = slice->get_bottom();
HXLINE(  24)		::Array< ::Dynamic> srcRects = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  25)		srcRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,x1,y1));
HXLINE(  26)		srcRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,x1,0,(x2 - x1),y1));
HXLINE(  27)		srcRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,x2,0,(bitmapWidth - x2),y1));
HXLINE(  29)		srcRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,y1,x1,(y2 - y1)));
HXLINE(  30)		srcRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,x1,y1,(x2 - x1),(y2 - y1)));
HXLINE(  31)		srcRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,x2,y1,(bitmapWidth - x2),(y2 - y1)));
HXLINE(  33)		srcRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,y2,x1,(bitmapHeight - y2)));
HXLINE(  34)		srcRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,x1,y2,(x2 - x1),(bitmapHeight - y2)));
HXLINE(  35)		srcRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,x2,y2,(bitmapWidth - x2),(bitmapHeight - y2)));
HXLINE(  37)		return srcRects;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Slice9_obj,buildSrcRects,return )

::Array< ::Dynamic> Slice9_obj::buildDstRects(Float w,Float h,::Array< ::Dynamic> srcRects){
            	HX_GC_STACKFRAME(&_hx_pos_a8c2bbae08e039b3_40_buildDstRects)
HXLINE(  41)		::Array< ::Dynamic> dstRects = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  43)		dstRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,srcRects->__get(0).StaticCast<  ::haxe::ui::geom::Rectangle >()->width,srcRects->__get(0).StaticCast<  ::haxe::ui::geom::Rectangle >()->height));
HXLINE(  44)		dstRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,srcRects->__get(0).StaticCast<  ::haxe::ui::geom::Rectangle >()->width,0,((w - srcRects->__get(0).StaticCast<  ::haxe::ui::geom::Rectangle >()->width) - srcRects->__get(2).StaticCast<  ::haxe::ui::geom::Rectangle >()->width),srcRects->__get(1).StaticCast<  ::haxe::ui::geom::Rectangle >()->height));
HXLINE(  45)		dstRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,(w - srcRects->__get(2).StaticCast<  ::haxe::ui::geom::Rectangle >()->width),0,srcRects->__get(2).StaticCast<  ::haxe::ui::geom::Rectangle >()->width,srcRects->__get(2).StaticCast<  ::haxe::ui::geom::Rectangle >()->height));
HXLINE(  47)		dstRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,srcRects->__get(0).StaticCast<  ::haxe::ui::geom::Rectangle >()->height,srcRects->__get(3).StaticCast<  ::haxe::ui::geom::Rectangle >()->width,((h - srcRects->__get(0).StaticCast<  ::haxe::ui::geom::Rectangle >()->height) - srcRects->__get(6).StaticCast<  ::haxe::ui::geom::Rectangle >()->height)));
HXLINE(  48)		dstRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,srcRects->__get(3).StaticCast<  ::haxe::ui::geom::Rectangle >()->width,srcRects->__get(0).StaticCast<  ::haxe::ui::geom::Rectangle >()->height,((w - srcRects->__get(3).StaticCast<  ::haxe::ui::geom::Rectangle >()->width) - srcRects->__get(5).StaticCast<  ::haxe::ui::geom::Rectangle >()->width),((h - srcRects->__get(1).StaticCast<  ::haxe::ui::geom::Rectangle >()->height) - srcRects->__get(7).StaticCast<  ::haxe::ui::geom::Rectangle >()->height)));
HXLINE(  49)		dstRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,(w - srcRects->__get(5).StaticCast<  ::haxe::ui::geom::Rectangle >()->width),srcRects->__get(2).StaticCast<  ::haxe::ui::geom::Rectangle >()->height,srcRects->__get(5).StaticCast<  ::haxe::ui::geom::Rectangle >()->width,((h - srcRects->__get(2).StaticCast<  ::haxe::ui::geom::Rectangle >()->height) - srcRects->__get(8).StaticCast<  ::haxe::ui::geom::Rectangle >()->height)));
HXLINE(  51)		dstRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,(h - srcRects->__get(6).StaticCast<  ::haxe::ui::geom::Rectangle >()->height),srcRects->__get(6).StaticCast<  ::haxe::ui::geom::Rectangle >()->width,srcRects->__get(6).StaticCast<  ::haxe::ui::geom::Rectangle >()->height));
HXLINE(  52)		dstRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,srcRects->__get(6).StaticCast<  ::haxe::ui::geom::Rectangle >()->width,(h - srcRects->__get(7).StaticCast<  ::haxe::ui::geom::Rectangle >()->height),((w - srcRects->__get(6).StaticCast<  ::haxe::ui::geom::Rectangle >()->width) - srcRects->__get(8).StaticCast<  ::haxe::ui::geom::Rectangle >()->width),srcRects->__get(7).StaticCast<  ::haxe::ui::geom::Rectangle >()->height));
HXLINE(  53)		dstRects->push( ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,(w - srcRects->__get(8).StaticCast<  ::haxe::ui::geom::Rectangle >()->width),(h - srcRects->__get(8).StaticCast<  ::haxe::ui::geom::Rectangle >()->height),srcRects->__get(8).StaticCast<  ::haxe::ui::geom::Rectangle >()->width,srcRects->__get(8).StaticCast<  ::haxe::ui::geom::Rectangle >()->height));
HXLINE(  55)		return dstRects;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Slice9_obj,buildDstRects,return )


Slice9_obj::Slice9_obj()
{
}

bool Slice9_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"buildRects") ) { outValue = buildRects_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buildSrcRects") ) { outValue = buildSrcRects_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"buildDstRects") ) { outValue = buildDstRects_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Slice9_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Slice9_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Slice9_obj::__mClass;

static ::String Slice9_obj_sStaticFields[] = {
	HX_("buildRects",c1,80,2f,7b),
	HX_("buildSrcRects",99,f6,46,40),
	HX_("buildDstRects",d8,df,f8,db),
	::String(null())
};

void Slice9_obj::__register()
{
	Slice9_obj _hx_dummy;
	Slice9_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.geom.Slice9",67,c1,b8,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Slice9_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Slice9_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Slice9_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Slice9_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Slice9_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace geom
