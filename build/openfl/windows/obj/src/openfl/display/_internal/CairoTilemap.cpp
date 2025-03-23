#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math__Matrix3_Matrix3_Impl_
#include <lime/math/_Matrix3/Matrix3_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_TileContainer
#include <openfl/display/TileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_TileData
#include <openfl/display/TileData.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display_Tileset
#include <openfl/display/Tileset.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoDisplayObject
#include <openfl/display/_internal/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoTilemap
#include <openfl/display/_internal/CairoTilemap.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_577544eec98749ac_36_render,"openfl.display._internal.CairoTilemap","render",0xf93a64c2,"openfl.display._internal.CairoTilemap.render","openfl/display/_internal/CairoTilemap.hx",36,0xe2e59a59)
HX_LOCAL_STACK_FRAME(_hx_pos_577544eec98749ac_64_renderTileContainer,"openfl.display._internal.CairoTilemap","renderTileContainer",0xfd9a4e11,"openfl.display._internal.CairoTilemap.renderTileContainer","openfl/display/_internal/CairoTilemap.hx",64,0xe2e59a59)
HX_LOCAL_STACK_FRAME(_hx_pos_577544eec98749ac_174_renderDrawable,"openfl.display._internal.CairoTilemap","renderDrawable",0x2eda9e80,"openfl.display._internal.CairoTilemap.renderDrawable","openfl/display/_internal/CairoTilemap.hx",174,0xe2e59a59)
HX_LOCAL_STACK_FRAME(_hx_pos_577544eec98749ac_192_renderDrawableMask,"openfl.display._internal.CairoTilemap","renderDrawableMask",0xd9fb4b8c,"openfl.display._internal.CairoTilemap.renderDrawableMask","openfl/display/_internal/CairoTilemap.hx",192,0xe2e59a59)
HX_LOCAL_STACK_FRAME(_hx_pos_577544eec98749ac_33_boot,"openfl.display._internal.CairoTilemap","boot",0x78ed0a9e,"openfl.display._internal.CairoTilemap.boot","openfl/display/_internal/CairoTilemap.hx",33,0xe2e59a59)
namespace openfl{
namespace display{
namespace _internal{

void CairoTilemap_obj::__construct() { }

Dynamic CairoTilemap_obj::__CreateEmpty() { return new CairoTilemap_obj; }

void *CairoTilemap_obj::_hx_vtable = 0;

Dynamic CairoTilemap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoTilemap_obj > _hx_result = new CairoTilemap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoTilemap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60242ad0;
}

void CairoTilemap_obj::render( ::openfl::display::Tilemap tilemap, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_577544eec98749ac_36_render)
HXLINE(  37)		bool _hx_tmp;
HXDLIN(  37)		if (tilemap->_hx___renderable) {
HXLINE(  37)			_hx_tmp = (tilemap->_hx___group->_hx___tiles->length == 0);
            		}
            		else {
HXLINE(  37)			_hx_tmp = true;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  37)			return;
            		}
HXLINE(  39)		Float alpha = renderer->_hx___getAlpha(tilemap->_hx___worldAlpha);
HXLINE(  40)		if ((alpha <= 0)) {
HXLINE(  40)			return;
            		}
HXLINE(  42)		renderer->_hx___setBlendMode(tilemap->_hx___worldBlendMode);
HXLINE(  43)		renderer->_hx___pushMaskObject(tilemap,null());
HXLINE(  45)		 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(  46)		rect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(tilemap->_hx___width) ),( (Float)(tilemap->_hx___height) ));
HXLINE(  47)		renderer->_hx___pushMaskRect(rect,tilemap->_hx___renderTransform);
HXLINE(  49)		 ::openfl::display::TileContainer tilemap1 = tilemap->_hx___group;
HXDLIN(  49)		 ::openfl::geom::Matrix tilemap2 = tilemap->_hx___renderTransform;
HXDLIN(  49)		 ::openfl::display::Tileset tilemap3 = tilemap->_hx___tileset;
HXDLIN(  49)		bool _hx_tmp1;
HXDLIN(  49)		if (renderer->_hx___allowSmoothing) {
HXLINE(  49)			_hx_tmp1 = tilemap->smoothing;
            		}
            		else {
HXLINE(  49)			_hx_tmp1 = false;
            		}
HXLINE(  50)		bool tilemap4 = tilemap->tileAlphaEnabled;
HXDLIN(  50)		bool tilemap5 = tilemap->tileBlendModeEnabled;
HXDLIN(  50)		 ::Dynamic tilemap6 = tilemap->_hx___worldBlendMode;
HXLINE(  49)		::openfl::display::_internal::CairoTilemap_obj::renderTileContainer(tilemap1,renderer,tilemap2,tilemap3,_hx_tmp1,tilemap4,alpha,tilemap5,tilemap6,null(),null(),null(),rect,::lime::math::_Matrix3::Matrix3_Impl__obj::_new(null(),null(),null(),null(),null(),null()));
HXLINE(  53)		renderer->_hx___popMaskRect();
HXLINE(  54)		renderer->_hx___popMaskObject(tilemap,null());
HXLINE(  56)		::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTilemap_obj,render,(void))

void CairoTilemap_obj::renderTileContainer( ::openfl::display::TileContainer group, ::openfl::display::CairoRenderer renderer, ::openfl::geom::Matrix parentTransform, ::openfl::display::Tileset defaultTileset,bool smooth,bool alphaEnabled,Float worldAlpha,bool blendModeEnabled, ::Dynamic defaultBlendMode, ::openfl::display::BitmapData cacheBitmapData, ::Dynamic surface, ::Dynamic pattern, ::openfl::geom::Rectangle rect, ::lime::utils::ArrayBufferView matrix){
            	HX_STACKFRAME(&_hx_pos_577544eec98749ac_64_renderTileContainer)
HXLINE(  66)		 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXLINE(  68)		 ::openfl::geom::Matrix tileTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  70)		::Array< ::Dynamic> tiles = group->_hx___tiles;
HXLINE(  72)		 ::openfl::display::Tileset tileset;
HXLINE(  73)		Float alpha;
HXLINE(  74)		bool visible;
HXLINE(  75)		 ::Dynamic blendMode = null();
HXLINE(  76)		int id;
HXLINE(  77)		 ::openfl::display::TileData tileData;
HXLINE(  78)		 ::openfl::geom::Rectangle tileRect;
HXLINE(  79)		 ::openfl::display::BitmapData bitmapData;
HXLINE(  81)		{
HXLINE(  81)			int _g = 0;
HXDLIN(  81)			while((_g < tiles->length)){
HXLINE(  81)				 ::openfl::display::Tile tile = tiles->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN(  81)				_g = (_g + 1);
HXLINE(  83)				Float _hx_tmp = -(tile->get_originX());
HXDLIN(  83)				tileTransform->setTo(( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),( (Float)(1) ),_hx_tmp,-(tile->get_originY()));
HXLINE(  84)				tileTransform->concat(tile->get_matrix());
HXLINE(  85)				tileTransform->concat(parentTransform);
HXLINE(  87)				if (::hx::IsNotNull( tile->get_tileset() )) {
HXLINE(  87)					tileset = tile->get_tileset();
            				}
            				else {
HXLINE(  87)					tileset = defaultTileset;
            				}
HXLINE(  89)				alpha = (tile->get_alpha() * worldAlpha);
HXLINE(  90)				visible = tile->get_visible();
HXLINE(  91)				bool _hx_tmp1;
HXDLIN(  91)				if (visible) {
HXLINE(  91)					_hx_tmp1 = (alpha <= 0);
            				}
            				else {
HXLINE(  91)					_hx_tmp1 = true;
            				}
HXDLIN(  91)				if (_hx_tmp1) {
HXLINE(  91)					continue;
            				}
HXLINE(  93)				if (!(alphaEnabled)) {
HXLINE(  93)					alpha = ( (Float)(1) );
            				}
HXLINE(  95)				if (blendModeEnabled) {
HXLINE(  97)					if (::hx::IsNotNull( tile->_hx___blendMode )) {
HXLINE(  97)						blendMode = tile->_hx___blendMode;
            					}
            					else {
HXLINE(  97)						blendMode = defaultBlendMode;
            					}
            				}
HXLINE( 100)				if ((tile->__length > 0)) {
HXLINE( 102)					::openfl::display::_internal::CairoTilemap_obj::renderTileContainer(( ( ::openfl::display::TileContainer)(tile) ),renderer,tileTransform,tileset,smooth,alphaEnabled,alpha,blendModeEnabled,blendMode,cacheBitmapData,surface,pattern,rect,matrix);
            				}
            				else {
HXLINE( 107)					if (::hx::IsNull( tileset )) {
HXLINE( 107)						continue;
            					}
HXLINE( 109)					id = tile->get_id();
HXLINE( 111)					if ((id == -1)) {
HXLINE( 113)						tileRect = tile->_hx___rect;
HXLINE( 114)						bool _hx_tmp;
HXDLIN( 114)						bool _hx_tmp1;
HXDLIN( 114)						if (::hx::IsNotNull( tileRect )) {
HXLINE( 114)							_hx_tmp1 = (tileRect->width <= 0);
            						}
            						else {
HXLINE( 114)							_hx_tmp1 = true;
            						}
HXDLIN( 114)						if (!(_hx_tmp1)) {
HXLINE( 114)							_hx_tmp = (tileRect->height <= 0);
            						}
            						else {
HXLINE( 114)							_hx_tmp = true;
            						}
HXDLIN( 114)						if (_hx_tmp) {
HXLINE( 114)							continue;
            						}
            					}
            					else {
HXLINE( 118)						tileData = tileset->_hx___data->__get(id).StaticCast<  ::openfl::display::TileData >();
HXLINE( 119)						if (::hx::IsNull( tileData )) {
HXLINE( 119)							continue;
            						}
HXLINE( 121)						rect->setTo(( (Float)(tileData->x) ),( (Float)(tileData->y) ),( (Float)(tileData->width) ),( (Float)(tileData->height) ));
HXLINE( 122)						tileRect = rect;
            					}
HXLINE( 125)					bitmapData = tileset->_hx___bitmapData;
HXLINE( 126)					bool _hx_tmp;
HXDLIN( 126)					if (::hx::IsNotNull( bitmapData )) {
HXLINE( 126)						_hx_tmp = ::hx::IsNull( bitmapData->image );
            					}
            					else {
HXLINE( 126)						_hx_tmp = true;
            					}
HXDLIN( 126)					if (_hx_tmp) {
HXLINE( 126)						continue;
            					}
HXLINE( 128)					if (::hx::IsInstanceNotEq( bitmapData,cacheBitmapData )) {
HXLINE( 130)						surface = bitmapData->getSurface();
HXLINE( 131)						pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXLINE( 132)						int _hx_tmp;
HXDLIN( 132)						if (smooth) {
HXLINE( 132)							_hx_tmp = 1;
            						}
            						else {
HXLINE( 132)							_hx_tmp = 3;
            						}
HXDLIN( 132)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXLINE( 134)						cairo->set_source(pattern);
HXLINE( 135)						cacheBitmapData = bitmapData;
            					}
HXLINE( 138)					if (blendModeEnabled) {
HXLINE( 140)						renderer->_hx___setBlendMode(blendMode);
            					}
HXLINE( 143)					renderer->applyMatrix(tileTransform,cairo);
HXLINE( 145)					{
HXLINE( 145)						Float value = tileRect->x;
HXDLIN( 145)						 ::__hxcpp_memory_set_float(matrix->buffer->b,(matrix->byteOffset + 24),value);
            					}
HXLINE( 146)					{
HXLINE( 146)						Float value1 = tileRect->y;
HXDLIN( 146)						 ::__hxcpp_memory_set_float(matrix->buffer->b,(matrix->byteOffset + 28),value1);
            					}
HXLINE( 147)					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(pattern,matrix);
HXLINE( 148)					cairo->set_source(pattern);
HXLINE( 150)					cairo->save();
HXLINE( 152)					cairo->newPath();
HXLINE( 153)					cairo->rectangle(( (Float)(0) ),( (Float)(0) ),tileRect->width,tileRect->height);
HXLINE( 154)					cairo->clip();
HXLINE( 156)					if ((alpha == 1)) {
HXLINE( 158)						cairo->paint();
            					}
            					else {
HXLINE( 162)						cairo->paintWithAlpha(alpha);
            					}
HXLINE( 165)					cairo->restore();
            				}
            			}
            		}
HXLINE( 169)		::openfl::geom::Matrix_obj::_hx___pool->release(tileTransform);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC14(CairoTilemap_obj,renderTileContainer,(void))

void CairoTilemap_obj::renderDrawable( ::openfl::display::Tilemap tilemap, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_577544eec98749ac_174_renderDrawable)
HXLINE( 176)		renderer->_hx___updateCacheBitmap(tilemap,false);
HXLINE( 178)		bool _hx_tmp;
HXDLIN( 178)		if (::hx::IsNotNull( tilemap->_hx___cacheBitmap )) {
HXLINE( 178)			_hx_tmp = !(tilemap->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE( 178)			_hx_tmp = false;
            		}
HXDLIN( 178)		if (_hx_tmp) {
HXLINE( 180)			 ::openfl::display::Bitmap bitmap = tilemap->_hx___cacheBitmap;
HXDLIN( 180)			if (bitmap->_hx___renderable) {
HXLINE( 180)				Float alpha = renderer->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN( 180)				bool _hx_tmp;
HXDLIN( 180)				bool _hx_tmp1;
HXDLIN( 180)				if ((alpha > 0)) {
HXLINE( 180)					_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            				}
            				else {
HXLINE( 180)					_hx_tmp1 = false;
            				}
HXDLIN( 180)				if (_hx_tmp1) {
HXLINE( 180)					_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            				}
            				else {
HXLINE( 180)					_hx_tmp = false;
            				}
HXDLIN( 180)				if (_hx_tmp) {
HXLINE( 180)					 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXDLIN( 180)					renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN( 180)					renderer->_hx___pushMaskObject(bitmap,null());
HXDLIN( 180)					renderer->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN( 180)					 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN( 180)					if (::hx::IsNotNull( surface )) {
HXLINE( 180)						 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 180)						int _hx_tmp;
HXDLIN( 180)						bool _hx_tmp1;
HXDLIN( 180)						if (renderer->_hx___allowSmoothing) {
HXLINE( 180)							_hx_tmp1 = bitmap->smoothing;
            						}
            						else {
HXLINE( 180)							_hx_tmp1 = false;
            						}
HXDLIN( 180)						if (_hx_tmp1) {
HXLINE( 180)							_hx_tmp = 1;
            						}
            						else {
HXLINE( 180)							_hx_tmp = 3;
            						}
HXDLIN( 180)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN( 180)						cairo->set_source(pattern);
HXDLIN( 180)						if ((alpha == 1)) {
HXLINE( 180)							cairo->paint();
            						}
            						else {
HXLINE( 180)							cairo->paintWithAlpha(alpha);
            						}
            					}
HXDLIN( 180)					renderer->_hx___popMaskObject(bitmap,null());
HXDLIN( 180)					renderer->_hx___setBlendMode(10);
            				}
            			}
            		}
            		else {
HXLINE( 184)			::openfl::display::_internal::CairoDisplayObject_obj::render(tilemap,renderer);
HXLINE( 185)			::openfl::display::_internal::CairoTilemap_obj::render(tilemap,renderer);
            		}
HXLINE( 188)		renderer->_hx___renderEvent(tilemap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTilemap_obj,renderDrawable,(void))

void CairoTilemap_obj::renderDrawableMask( ::openfl::display::Tilemap tilemap, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_577544eec98749ac_192_renderDrawableMask)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTilemap_obj,renderDrawableMask,(void))


CairoTilemap_obj::CairoTilemap_obj()
{
}

bool CairoTilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderTileContainer") ) { outValue = renderTileContainer_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoTilemap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoTilemap_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoTilemap_obj::__mClass;

static ::String CairoTilemap_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderTileContainer",fd,ba,73,84),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CairoTilemap_obj::__register()
{
	CairoTilemap_obj _hx_dummy;
	CairoTilemap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoTilemap",82,71,c8,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoTilemap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoTilemap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoTilemap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoTilemap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoTilemap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_577544eec98749ac_33_boot)
HXDLIN(  33)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            			->setFixed(1,HX_("statics",05,3c,65,36), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("renderTileContainer",fd,ba,73,84), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
