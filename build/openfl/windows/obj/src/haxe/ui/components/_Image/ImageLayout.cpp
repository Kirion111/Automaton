#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <haxe/ui/backend/ImageBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#include <haxe/ui/backend/ImageDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#include <haxe/ui/backend/ImageSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Image_ImageLayout
#include <haxe/ui/components/_Image/ImageLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#include <haxe/ui/core/ImageDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5a7c5d462e41551f_86_new,"haxe.ui.components._Image.ImageLayout","new",0xd32c1ecb,"haxe.ui.components._Image.ImageLayout.new","haxe/ui/components/Image.hx",86,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_89_get_imageScaleMode,"haxe.ui.components._Image.ImageLayout","get_imageScaleMode",0xa384daf0,"haxe.ui.components._Image.ImageLayout.get_imageScaleMode","haxe/ui/components/Image.hx",89,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_94_get_imageHorizontalAlign,"haxe.ui.components._Image.ImageLayout","get_imageHorizontalAlign",0x10ea1b64,"haxe.ui.components._Image.ImageLayout.get_imageHorizontalAlign","haxe/ui/components/Image.hx",94,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_99_get_imageVerticalAlign,"haxe.ui.components._Image.ImageLayout","get_imageVerticalAlign",0xd60e4bd2,"haxe.ui.components._Image.ImageLayout.get_imageVerticalAlign","haxe/ui/components/Image.hx",99,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_103_resizeChildren,"haxe.ui.components._Image.ImageLayout","resizeChildren",0x7bc186c8,"haxe.ui.components._Image.ImageLayout.resizeChildren","haxe/ui/components/Image.hx",103,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_147_repositionChildren,"haxe.ui.components._Image.ImageLayout","repositionChildren",0xaa97a2b0,"haxe.ui.components._Image.ImageLayout.repositionChildren","haxe/ui/components/Image.hx",147,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_175_calcAutoSize,"haxe.ui.components._Image.ImageLayout","calcAutoSize",0x1f0d8dba,"haxe.ui.components._Image.ImageLayout.calcAutoSize","haxe/ui/components/Image.hx",175,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_184_refresh,"haxe.ui.components._Image.ImageLayout","refresh",0xe91839c6,"haxe.ui.components._Image.ImageLayout.refresh","haxe/ui/components/Image.hx",184,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_5a7c5d462e41551f_191_updateClipRect,"haxe.ui.components._Image.ImageLayout","updateClipRect",0x4825c6b2,"haxe.ui.components._Image.ImageLayout.updateClipRect","haxe/ui/components/Image.hx",191,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_bbd29f1d7a22d262_700_cloneLayout,"haxe.ui.components._Image.ImageLayout","cloneLayout",0x18c9cb52,"haxe.ui.components._Image.ImageLayout.cloneLayout","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_b2d43f731ca37d91_113_self,"haxe.ui.components._Image.ImageLayout","self",0xf6bcdac1,"haxe.ui.components._Image.ImageLayout.self","haxe/ui/macros/LayoutMacros.hx",113,0xe44eaad7)
namespace haxe{
namespace ui{
namespace components{
namespace _Image{

void ImageLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_86_new)
HXDLIN(  86)		super::__construct();
            	}

Dynamic ImageLayout_obj::__CreateEmpty() { return new ImageLayout_obj; }

void *ImageLayout_obj::_hx_vtable = 0;

Dynamic ImageLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageLayout_obj > _hx_result = new ImageLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x355152f9) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x355152f9;
		}
	} else {
		return inClassId==(int)0x3799f835;
	}
}

::String ImageLayout_obj::get_imageScaleMode(){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_89_get_imageScaleMode)
HXDLIN(  89)		return ::hx::TCast<  ::haxe::ui::components::Image >::cast(this->_component)->get_scaleMode();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageLayout_obj,get_imageScaleMode,return )

::String ImageLayout_obj::get_imageHorizontalAlign(){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_94_get_imageHorizontalAlign)
HXDLIN(  94)		return ::hx::TCast<  ::haxe::ui::components::Image >::cast(this->_component)->get_imageHorizontalAlign();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageLayout_obj,get_imageHorizontalAlign,return )

::String ImageLayout_obj::get_imageVerticalAlign(){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_99_get_imageVerticalAlign)
HXDLIN(  99)		return ::hx::TCast<  ::haxe::ui::components::Image >::cast(this->_component)->get_imageVerticalAlign();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageLayout_obj,get_imageVerticalAlign,return )

void ImageLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_103_resizeChildren)
HXDLIN( 103)		if (this->get_component()->hasImageDisplay()) {
HXLINE( 104)			 ::haxe::ui::components::Image image = ::hx::TCast<  ::haxe::ui::components::Image >::cast(this->_component);
HXLINE( 105)			 ::haxe::ui::core::ImageDisplay imageDisplay = image->getImageDisplay();
HXLINE( 106)			Float maxWidth = this->get_usableSize()->width;
HXLINE( 107)			Float maxHeight = this->get_usableSize()->height;
HXLINE( 108)			if ((this->get_component()->get_autoWidth() == true)) {
HXLINE( 109)				maxWidth = ( (Float)(-1) );
            			}
HXLINE( 112)			if ((this->_component->get_autoHeight() == true)) {
HXLINE( 113)				maxHeight = ( (Float)(-1) );
            			}
HXLINE( 116)			Float scaleW;
HXDLIN( 116)			if ((maxWidth != -1)) {
HXLINE( 116)				scaleW = (maxWidth / image->get_originalWidth());
            			}
            			else {
HXLINE( 116)				scaleW = ( (Float)(1) );
            			}
HXLINE( 117)			Float scaleH;
HXDLIN( 117)			if ((maxHeight != -1)) {
HXLINE( 117)				scaleH = (maxHeight / image->get_originalHeight());
            			}
            			else {
HXLINE( 117)				scaleH = ( (Float)(1) );
            			}
HXLINE( 119)			scaleW = (scaleW * image->get_imageScale());
HXLINE( 120)			scaleH = (scaleH * image->get_imageScale());
HXLINE( 122)			if ((this->get_imageScaleMode() != HX_("fill",83,ce,bb,43))) {
HXLINE( 123)				Float scale;
HXLINE( 124)				::String _hx_switch_0 = this->get_imageScaleMode();
            				if (  (_hx_switch_0==HX_("fitheight",78,7c,e6,5b)) ){
HXLINE( 132)					scale = scaleH;
HXDLIN( 132)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("fitinside",8d,b4,7a,f7)) ){
HXLINE( 126)					if ((scaleW < scaleH)) {
HXLINE( 126)						scale = scaleW;
            					}
            					else {
HXLINE( 126)						scale = scaleH;
            					}
HXDLIN( 126)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("fitoutside",74,17,ea,f3)) ){
HXLINE( 128)					if ((scaleW > scaleH)) {
HXLINE( 128)						scale = scaleW;
            					}
            					else {
HXLINE( 128)						scale = scaleH;
            					}
HXDLIN( 128)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("fitwidth",95,be,2f,04)) ){
HXLINE( 130)					scale = scaleW;
HXDLIN( 130)					goto _hx_goto_4;
            				}
            				/* default */{
HXLINE( 134)					scale = ( (Float)(1) );
            				}
            				_hx_goto_4:;
HXLINE( 137)				imageDisplay->set_imageWidth((image->get_originalWidth() * scale));
HXLINE( 138)				imageDisplay->set_imageHeight((image->get_originalHeight() * scale));
            			}
            			else {
HXLINE( 140)				imageDisplay->set_imageWidth((image->get_originalWidth() * scaleW));
HXLINE( 141)				imageDisplay->set_imageHeight((image->get_originalHeight() * scaleH));
            			}
            		}
            	}


void ImageLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_147_repositionChildren)
HXDLIN( 147)		if (this->get_component()->hasImageDisplay()) {
HXLINE( 148)			 ::haxe::ui::components::Image image = ::hx::TCast<  ::haxe::ui::components::Image >::cast(this->_component);
HXLINE( 149)			 ::haxe::ui::core::ImageDisplay imageDisplay = this->_component->getImageDisplay();
HXLINE( 151)			::String _hx_switch_0 = image->get_imageHorizontalAlign();
            			if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 153)				 ::Dynamic _hx_tmp = this->_component->get_componentWidth();
HXDLIN( 153)				imageDisplay->set_left(((( (Float)(_hx_tmp) ) - imageDisplay->get_imageWidth()) / ( (Float)(2) )));
HXDLIN( 153)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 159)				imageDisplay->set_left(this->get_paddingLeft());
HXDLIN( 159)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 156)				 ::Dynamic _hx_tmp = this->_component->get_componentWidth();
HXDLIN( 156)				Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - imageDisplay->get_imageWidth());
HXDLIN( 156)				imageDisplay->set_left((_hx_tmp1 - this->get_paddingRight()));
HXDLIN( 156)				goto _hx_goto_6;
            			}
            			_hx_goto_6:;
HXLINE( 162)			::String _hx_switch_1 = image->get_imageVerticalAlign();
            			if (  (_hx_switch_1==HX_("bottom",eb,e6,78,65)) ){
HXLINE( 167)				 ::Dynamic _hx_tmp = this->_component->get_componentHeight();
HXDLIN( 167)				Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - imageDisplay->get_imageHeight());
HXDLIN( 167)				imageDisplay->set_top((_hx_tmp1 - this->get_paddingBottom()));
HXDLIN( 167)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE( 164)				 ::Dynamic _hx_tmp = this->_component->get_componentHeight();
HXDLIN( 164)				imageDisplay->set_top(((( (Float)(_hx_tmp) ) - imageDisplay->get_imageHeight()) / ( (Float)(2) )));
HXDLIN( 164)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_1==HX_("top",95,66,58,00)) ){
HXLINE( 170)				imageDisplay->set_top(this->get_paddingTop());
HXDLIN( 170)				goto _hx_goto_7;
            			}
            			_hx_goto_7:;
            		}
            	}


 ::haxe::ui::geom::Size ImageLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_175_calcAutoSize)
HXLINE( 176)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(exclusions);
HXLINE( 177)		if (this->get_component()->hasImageDisplay()) {
HXLINE( 178)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 178)			Float size2 = size1->width;
HXDLIN( 178)			size1->width = (size2 + this->get_component()->getImageDisplay()->get_imageWidth());
HXLINE( 179)			 ::haxe::ui::geom::Size size3 = size;
HXDLIN( 179)			Float size4 = size3->height;
HXDLIN( 179)			size3->height = (size4 + this->get_component()->getImageDisplay()->get_imageHeight());
            		}
HXLINE( 181)		return size;
            	}


void ImageLayout_obj::refresh(){
            	HX_STACKFRAME(&_hx_pos_5a7c5d462e41551f_184_refresh)
HXLINE( 185)		this->super::refresh();
HXLINE( 187)		this->updateClipRect();
            	}


void ImageLayout_obj::updateClipRect(){
            	HX_GC_STACKFRAME(&_hx_pos_5a7c5d462e41551f_191_updateClipRect)
HXDLIN( 191)		if (this->get_component()->hasImageDisplay()) {
HXLINE( 192)			 ::haxe::ui::geom::Size usz = this->get_usableSize();
HXLINE( 193)			 ::haxe::ui::core::ImageDisplay imageDisplay = this->get_component()->getImageDisplay();
HXLINE( 194)			 ::haxe::ui::geom::Rectangle rc = imageDisplay->get_imageClipRect();
HXLINE( 196)			bool _hx_tmp;
HXDLIN( 196)			Float _hx_tmp1 = imageDisplay->get_imageWidth();
HXDLIN( 196)			if (!((_hx_tmp1 > usz->width))) {
HXLINE( 197)				Float _hx_tmp1 = imageDisplay->get_imageHeight();
HXLINE( 196)				_hx_tmp = (_hx_tmp1 > usz->height);
            			}
            			else {
HXLINE( 196)				_hx_tmp = true;
            			}
HXDLIN( 196)			if (_hx_tmp) {
HXLINE( 198)				if (::hx::IsNull( rc )) {
HXLINE( 199)					rc =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            				}
HXLINE( 202)				rc->top = this->get_paddingLeft();
HXLINE( 203)				rc->left = this->get_paddingTop();
HXLINE( 204)				rc->width = usz->width;
HXLINE( 205)				rc->height = usz->height;
            			}
            			else {
HXLINE( 207)				rc = null();
            			}
HXLINE( 210)			imageDisplay->set_imageClipRect(rc);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageLayout_obj,updateClipRect,(void))

 ::haxe::ui::layouts::Layout ImageLayout_obj::cloneLayout(){
            	HX_STACKFRAME(&_hx_pos_bbd29f1d7a22d262_700_cloneLayout)
HXLINE(  85)		 ::haxe::ui::components::_Image::ImageLayout c = ( ( ::haxe::ui::components::_Image::ImageLayout)(this->super::cloneLayout()) );
HXLINE( 101)		return c;
            	}


 ::haxe::ui::layouts::Layout ImageLayout_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_b2d43f731ca37d91_113_self)
HXDLIN( 113)		return  ::haxe::ui::components::_Image::ImageLayout_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< ImageLayout_obj > ImageLayout_obj::__new() {
	::hx::ObjectPtr< ImageLayout_obj > __this = new ImageLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ImageLayout_obj > ImageLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ImageLayout_obj *__this = (ImageLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageLayout_obj), true, "haxe.ui.components._Image.ImageLayout"));
	*(void **)__this = ImageLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ImageLayout_obj::ImageLayout_obj()
{
}

::hx::Val ImageLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return ::hx::Val( refresh_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cloneLayout") ) { return ::hx::Val( cloneLayout_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"imageScaleMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageScaleMode() ); }
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateClipRect") ) { return ::hx::Val( updateClipRect_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_imageScaleMode") ) { return ::hx::Val( get_imageScaleMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"imageVerticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageVerticalAlign() ); }
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"imageHorizontalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageHorizontalAlign() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_imageVerticalAlign") ) { return ::hx::Val( get_imageVerticalAlign_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_imageHorizontalAlign") ) { return ::hx::Val( get_imageHorizontalAlign_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

void ImageLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("imageScaleMode",32,58,1a,fa));
	outFields->push(HX_("imageHorizontalAlign",26,f6,c3,b8));
	outFields->push(HX_("imageVerticalAlign",14,92,18,b2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ImageLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ImageLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageLayout_obj_sMemberFields[] = {
	HX_("get_imageScaleMode",fb,38,b4,95),
	HX_("get_imageHorizontalAlign",af,13,60,fb),
	HX_("get_imageVerticalAlign",5d,0b,ad,0b),
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("calcAutoSize",85,81,3f,fd),
	HX_("refresh",db,d9,20,ed),
	HX_("updateClipRect",3d,83,94,8d),
	HX_("cloneLayout",e7,99,0c,f5),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class ImageLayout_obj::__mClass;

void ImageLayout_obj::__register()
{
	ImageLayout_obj _hx_dummy;
	ImageLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Image.ImageLayout",59,5d,d4,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Image
