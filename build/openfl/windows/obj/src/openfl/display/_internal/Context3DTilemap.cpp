#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectShader
#include <openfl/display/DisplayObjectShader.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
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
#ifndef INCLUDED_openfl_display__internal_Context3DBitmap
#include <openfl/display/_internal/Context3DBitmap.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBuffer
#include <openfl/display/_internal/Context3DBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DElementType
#include <openfl/display/_internal/Context3DElementType.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DShape
#include <openfl/display/_internal/Context3DShape.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DTilemap
#include <openfl/display/_internal/Context3DTilemap.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_56b3f28bdbdcb84c_54_buildBuffer,"openfl.display._internal.Context3DTilemap","buildBuffer",0x4102cb0a,"openfl.display._internal.Context3DTilemap.buildBuffer","openfl/display/_internal/Context3DTilemap.hx",54,0xffd948b1)
HX_LOCAL_STACK_FRAME(_hx_pos_56b3f28bdbdcb84c_88_buildBufferTileContainer,"openfl.display._internal.Context3DTilemap","buildBufferTileContainer",0x48c99ac9,"openfl.display._internal.Context3DTilemap.buildBufferTileContainer","openfl/display/_internal/Context3DTilemap.hx",88,0xffd948b1)
HX_LOCAL_STACK_FRAME(_hx_pos_56b3f28bdbdcb84c_304_flush,"openfl.display._internal.Context3DTilemap","flush",0x32007600,"openfl.display._internal.Context3DTilemap.flush","openfl/display/_internal/Context3DTilemap.hx",304,0xffd948b1)
HX_LOCAL_STACK_FRAME(_hx_pos_56b3f28bdbdcb84c_399_getRecursiveLength,"openfl.display._internal.Context3DTilemap","getRecursiveLength",0x94c50d46,"openfl.display._internal.Context3DTilemap.getRecursiveLength","openfl/display/_internal/Context3DTilemap.hx",399,0xffd948b1)
HX_LOCAL_STACK_FRAME(_hx_pos_56b3f28bdbdcb84c_413_render,"openfl.display._internal.Context3DTilemap","render",0x4e352c9a,"openfl.display._internal.Context3DTilemap.render","openfl/display/_internal/Context3DTilemap.hx",413,0xffd948b1)
HX_LOCAL_STACK_FRAME(_hx_pos_56b3f28bdbdcb84c_456_renderDrawable,"openfl.display._internal.Context3DTilemap","renderDrawable",0xb224fe58,"openfl.display._internal.Context3DTilemap.renderDrawable","openfl/display/_internal/Context3DTilemap.hx",456,0xffd948b1)
HX_LOCAL_STACK_FRAME(_hx_pos_56b3f28bdbdcb84c_473_renderDrawableMask,"openfl.display._internal.Context3DTilemap","renderDrawableMask",0x39ee7764,"openfl.display._internal.Context3DTilemap.renderDrawableMask","openfl/display/_internal/Context3DTilemap.hx",473,0xffd948b1)
HX_LOCAL_STACK_FRAME(_hx_pos_56b3f28bdbdcb84c_490_renderTileContainer,"openfl.display._internal.Context3DTilemap","renderTileContainer",0x926d7f39,"openfl.display._internal.Context3DTilemap.renderTileContainer","openfl/display/_internal/Context3DTilemap.hx",490,0xffd948b1)
HX_LOCAL_STACK_FRAME(_hx_pos_56b3f28bdbdcb84c_558_renderMask,"openfl.display._internal.Context3DTilemap","renderMask",0x8d1feea6,"openfl.display._internal.Context3DTilemap.renderMask","openfl/display/_internal/Context3DTilemap.hx",558,0xffd948b1)
HX_LOCAL_STACK_FRAME(_hx_pos_56b3f28bdbdcb84c_642_resizeBuffer,"openfl.display._internal.Context3DTilemap","resizeBuffer",0x92288658,"openfl.display._internal.Context3DTilemap.resizeBuffer","openfl/display/_internal/Context3DTilemap.hx",642,0xffd948b1)
HX_LOCAL_STACK_FRAME(_hx_pos_56b3f28bdbdcb84c_37_boot,"openfl.display._internal.Context3DTilemap","boot",0x3019ac76,"openfl.display._internal.Context3DTilemap.boot","openfl/display/_internal/Context3DTilemap.hx",37,0xffd948b1)
namespace openfl{
namespace display{
namespace _internal{

void Context3DTilemap_obj::__construct() { }

Dynamic Context3DTilemap_obj::__CreateEmpty() { return new Context3DTilemap_obj; }

void *Context3DTilemap_obj::_hx_vtable = 0;

Dynamic Context3DTilemap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DTilemap_obj > _hx_result = new Context3DTilemap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DTilemap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7d905218;
}

 ::openfl::geom::ColorTransform Context3DTilemap_obj::cacheColorTransform;

 ::openfl::display3D::Context3D Context3DTilemap_obj::context;

int Context3DTilemap_obj::dataPerVertex;

 ::openfl::display::BitmapData Context3DTilemap_obj::currentBitmapData;

 ::Dynamic Context3DTilemap_obj::currentBlendMode;

 ::openfl::display::Shader Context3DTilemap_obj::currentShader;

int Context3DTilemap_obj::bufferPosition;

int Context3DTilemap_obj::lastFlushedPosition;

 ::openfl::display::BitmapData Context3DTilemap_obj::lastUsedBitmapData;

 ::openfl::display::Shader Context3DTilemap_obj::lastUsedShader;

int Context3DTilemap_obj::numTiles;

 ::lime::utils::ArrayBufferView Context3DTilemap_obj::vertexBufferData;

int Context3DTilemap_obj::vertexDataPosition;

void Context3DTilemap_obj::buildBuffer( ::openfl::display::Tilemap tilemap, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_56b3f28bdbdcb84c_54_buildBuffer)
HXLINE(  55)		bool _hx_tmp;
HXDLIN(  55)		bool _hx_tmp1;
HXDLIN(  55)		if (tilemap->_hx___renderable) {
HXLINE(  55)			_hx_tmp1 = (tilemap->_hx___group->_hx___tiles->length == 0);
            		}
            		else {
HXLINE(  55)			_hx_tmp1 = true;
            		}
HXDLIN(  55)		if (!(_hx_tmp1)) {
HXLINE(  55)			_hx_tmp = (tilemap->_hx___worldAlpha <= 0);
            		}
            		else {
HXLINE(  55)			_hx_tmp = true;
            		}
HXDLIN(  55)		if (_hx_tmp) {
HXLINE(  59)			tilemap->_hx___group->_hx___dirty = false;
HXLINE(  60)			return;
            		}
HXLINE(  63)		::openfl::display::_internal::Context3DTilemap_obj::numTiles = 0;
HXLINE(  64)		 ::lime::utils::ArrayBufferView _hx_tmp2;
HXDLIN(  64)		if (::hx::IsNotNull( tilemap->_hx___buffer )) {
HXLINE(  64)			_hx_tmp2 = tilemap->_hx___buffer->vertexBufferData;
            		}
            		else {
HXLINE(  64)			_hx_tmp2 = null();
            		}
HXDLIN(  64)		::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData = _hx_tmp2;
HXLINE(  65)		::openfl::display::_internal::Context3DTilemap_obj::vertexDataPosition = 0;
HXLINE(  67)		 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(  68)		 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  69)		 ::openfl::geom::Matrix parentTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  71)		::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex = 4;
HXLINE(  72)		if (tilemap->tileAlphaEnabled) {
HXLINE(  72)			::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex++;
            		}
HXLINE(  73)		if (tilemap->tileColorTransformEnabled) {
HXLINE(  73)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::openfl::display::_internal::Context3DTilemap >();
HXDLIN(  73)			::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex = (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex + 8);
            		}
HXLINE(  75)		::openfl::display::_internal::Context3DTilemap_obj::buildBufferTileContainer(tilemap,tilemap->_hx___group,renderer,parentTransform,tilemap->_hx___tileset,tilemap->tileAlphaEnabled,tilemap->_hx___worldAlpha,tilemap->tileColorTransformEnabled,tilemap->_hx___worldColorTransform,null(),rect,matrix,null());
HXLINE(  78)		tilemap->_hx___buffer->flushVertexBufferData();
HXLINE(  80)		::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
HXLINE(  81)		::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
HXLINE(  82)		::openfl::geom::Matrix_obj::_hx___pool->release(parentTransform);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DTilemap_obj,buildBuffer,(void))

void Context3DTilemap_obj::buildBufferTileContainer( ::openfl::display::Tilemap tilemap, ::openfl::display::TileContainer group, ::openfl::display::OpenGLRenderer renderer, ::openfl::geom::Matrix parentTransform, ::openfl::display::Tileset defaultTileset,bool alphaEnabled,Float worldAlpha,bool colorTransformEnabled, ::openfl::geom::ColorTransform defaultColorTransform, ::openfl::display::BitmapData cacheBitmapData, ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix,::hx::Null< bool >  __o_isTopLevel){
            		bool isTopLevel = __o_isTopLevel.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_56b3f28bdbdcb84c_88_buildBufferTileContainer)
HXLINE(  89)		 ::openfl::geom::Matrix tileTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  90)		bool roundPixels = renderer->_hx___roundPixels;
HXLINE(  92)		::Array< ::Dynamic> tiles = group->_hx___tiles;
HXLINE(  93)		int length = group->__length;
HXLINE(  95)		if (isTopLevel) {
HXLINE(  95)			int _hx_tmp = ::openfl::display::_internal::Context3DTilemap_obj::numTiles;
HXDLIN(  95)			::openfl::display::_internal::Context3DTilemap_obj::resizeBuffer(tilemap,(_hx_tmp + ::openfl::display::_internal::Context3DTilemap_obj::getRecursiveLength(group)));
            		}
HXLINE( 100)		 ::openfl::display::Tileset tileset;
HXLINE( 101)		Float alpha;
HXLINE( 102)		bool visible;
HXLINE( 103)		 ::openfl::geom::ColorTransform colorTransform = null();
HXLINE( 104)		int id;
HXLINE( 105)		 ::openfl::display::TileData tileData;
HXLINE( 106)		 ::openfl::geom::Rectangle tileRect;
HXLINE( 107)		 ::openfl::display::BitmapData bitmapData;
HXLINE( 108)		Float tileWidth;
HXLINE( 109)		Float tileHeight;
HXLINE( 110)		Float uvX;
HXLINE( 111)		Float uvY;
HXLINE( 112)		Float uvHeight;
HXLINE( 113)		Float uvWidth;
HXLINE( 114)		int vertexOffset;
HXLINE( 115)		Float x;
HXLINE( 116)		Float y;
HXLINE( 117)		Float x2;
HXLINE( 118)		Float y2;
HXLINE( 119)		Float x3;
HXLINE( 120)		Float y3;
HXLINE( 121)		Float x4;
HXLINE( 122)		Float y4;
HXLINE( 124)		int alphaPosition = 4;
HXLINE( 125)		int ctPosition;
HXDLIN( 125)		if (alphaEnabled) {
HXLINE( 125)			ctPosition = 5;
            		}
            		else {
HXLINE( 125)			ctPosition = 4;
            		}
HXLINE( 127)		{
HXLINE( 127)			int _g = 0;
HXDLIN( 127)			while((_g < tiles->length)){
HXLINE( 127)				 ::openfl::display::Tile tile = tiles->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN( 127)				_g = (_g + 1);
HXLINE( 129)				Float _hx_tmp = -(tile->get_originX());
HXDLIN( 129)				tileTransform->setTo(( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),( (Float)(1) ),_hx_tmp,-(tile->get_originY()));
HXLINE( 130)				tileTransform->concat(tile->get_matrix());
HXLINE( 131)				tileTransform->concat(parentTransform);
HXLINE( 133)				if (roundPixels) {
HXLINE( 135)					tileTransform->tx = ( (Float)(::Math_obj::round(tileTransform->tx)) );
HXLINE( 136)					tileTransform->ty = ( (Float)(::Math_obj::round(tileTransform->ty)) );
            				}
HXLINE( 139)				if (::hx::IsNotNull( tile->get_tileset() )) {
HXLINE( 139)					tileset = tile->get_tileset();
            				}
            				else {
HXLINE( 139)					tileset = defaultTileset;
            				}
HXLINE( 141)				alpha = (tile->get_alpha() * worldAlpha);
HXLINE( 142)				visible = tile->get_visible();
HXLINE( 143)				tile->_hx___dirty = false;
HXLINE( 145)				bool _hx_tmp1;
HXDLIN( 145)				if (visible) {
HXLINE( 145)					_hx_tmp1 = (alpha <= 0);
            				}
            				else {
HXLINE( 145)					_hx_tmp1 = true;
            				}
HXDLIN( 145)				if (_hx_tmp1) {
HXLINE( 145)					continue;
            				}
HXLINE( 147)				if (colorTransformEnabled) {
HXLINE( 149)					if (::hx::IsNotNull( tile->get_colorTransform() )) {
HXLINE( 151)						if (::hx::IsNull( defaultColorTransform )) {
HXLINE( 153)							colorTransform = tile->get_colorTransform();
            						}
            						else {
HXLINE( 157)							if (::hx::IsNull( ::openfl::display::_internal::Context3DTilemap_obj::cacheColorTransform )) {
HXLINE( 159)								::openfl::display::_internal::Context3DTilemap_obj::cacheColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            							}
HXLINE( 162)							colorTransform = ::openfl::display::_internal::Context3DTilemap_obj::cacheColorTransform;
HXLINE( 163)							Float defaultColorTransform1 = defaultColorTransform->redMultiplier;
HXDLIN( 163)							colorTransform->redMultiplier = (defaultColorTransform1 * tile->get_colorTransform()->redMultiplier);
HXLINE( 164)							Float defaultColorTransform2 = defaultColorTransform->greenMultiplier;
HXDLIN( 164)							colorTransform->greenMultiplier = (defaultColorTransform2 * tile->get_colorTransform()->greenMultiplier);
HXLINE( 165)							Float defaultColorTransform3 = defaultColorTransform->blueMultiplier;
HXDLIN( 165)							colorTransform->blueMultiplier = (defaultColorTransform3 * tile->get_colorTransform()->blueMultiplier);
HXLINE( 166)							Float defaultColorTransform4 = defaultColorTransform->alphaMultiplier;
HXDLIN( 166)							colorTransform->alphaMultiplier = (defaultColorTransform4 * tile->get_colorTransform()->alphaMultiplier);
HXLINE( 167)							Float defaultColorTransform5 = defaultColorTransform->redOffset;
HXDLIN( 167)							colorTransform->redOffset = (defaultColorTransform5 + tile->get_colorTransform()->redOffset);
HXLINE( 168)							Float defaultColorTransform6 = defaultColorTransform->greenOffset;
HXDLIN( 168)							colorTransform->greenOffset = (defaultColorTransform6 + tile->get_colorTransform()->greenOffset);
HXLINE( 169)							Float defaultColorTransform7 = defaultColorTransform->blueOffset;
HXDLIN( 169)							colorTransform->blueOffset = (defaultColorTransform7 + tile->get_colorTransform()->blueOffset);
HXLINE( 170)							Float defaultColorTransform8 = defaultColorTransform->alphaOffset;
HXDLIN( 170)							colorTransform->alphaOffset = (defaultColorTransform8 + tile->get_colorTransform()->alphaOffset);
            						}
            					}
            					else {
HXLINE( 175)						colorTransform = defaultColorTransform;
            					}
            				}
HXLINE( 179)				if (!(alphaEnabled)) {
HXLINE( 179)					alpha = ( (Float)(1) );
            				}
HXLINE( 181)				if ((tile->__length > 0)) {
HXLINE( 183)					::openfl::display::_internal::Context3DTilemap_obj::buildBufferTileContainer(tilemap,( ( ::openfl::display::TileContainer)(tile) ),renderer,tileTransform,tileset,alphaEnabled,alpha,colorTransformEnabled,colorTransform,cacheBitmapData,rect,matrix,false);
            				}
            				else {
HXLINE( 188)					if (::hx::IsNull( tileset )) {
HXLINE( 188)						continue;
            					}
HXLINE( 190)					id = tile->get_id();
HXLINE( 192)					bitmapData = tileset->_hx___bitmapData;
HXLINE( 193)					if (::hx::IsNull( bitmapData )) {
HXLINE( 193)						continue;
            					}
HXLINE( 195)					if ((id == -1)) {
HXLINE( 197)						tileRect = tile->_hx___rect;
HXLINE( 198)						bool _hx_tmp;
HXDLIN( 198)						bool _hx_tmp1;
HXDLIN( 198)						if (::hx::IsNotNull( tileRect )) {
HXLINE( 198)							_hx_tmp1 = (tileRect->width <= 0);
            						}
            						else {
HXLINE( 198)							_hx_tmp1 = true;
            						}
HXDLIN( 198)						if (!(_hx_tmp1)) {
HXLINE( 198)							_hx_tmp = (tileRect->height <= 0);
            						}
            						else {
HXLINE( 198)							_hx_tmp = true;
            						}
HXDLIN( 198)						if (_hx_tmp) {
HXLINE( 198)							continue;
            						}
HXLINE( 200)						uvX = (tileRect->x / ( (Float)(bitmapData->width) ));
HXLINE( 201)						uvY = (tileRect->y / ( (Float)(bitmapData->height) ));
HXLINE( 202)						Float uvWidth1 = tileRect->get_right();
HXDLIN( 202)						uvWidth = (uvWidth1 / ( (Float)(bitmapData->width) ));
HXLINE( 203)						Float uvHeight1 = tileRect->get_bottom();
HXDLIN( 203)						uvHeight = (uvHeight1 / ( (Float)(bitmapData->height) ));
            					}
            					else {
HXLINE( 207)						tileData = tileset->_hx___data->__get(id).StaticCast<  ::openfl::display::TileData >();
HXLINE( 208)						if (::hx::IsNull( tileData )) {
HXLINE( 208)							continue;
            						}
HXLINE( 210)						rect->setTo(( (Float)(tileData->x) ),( (Float)(tileData->y) ),( (Float)(tileData->width) ),( (Float)(tileData->height) ));
HXLINE( 211)						tileRect = rect;
HXLINE( 213)						uvX = tileData->_hx___uvX;
HXLINE( 214)						uvY = tileData->_hx___uvY;
HXLINE( 215)						uvWidth = tileData->_hx___uvWidth;
HXLINE( 216)						uvHeight = tileData->_hx___uvHeight;
            					}
HXLINE( 219)					tileWidth = tileRect->width;
HXLINE( 220)					tileHeight = tileRect->height;
HXLINE( 222)					x = (((( (Float)(0) ) * tileTransform->a) + (( (Float)(0) ) * tileTransform->c)) + tileTransform->tx);
HXLINE( 223)					y = (((( (Float)(0) ) * tileTransform->b) + (( (Float)(0) ) * tileTransform->d)) + tileTransform->ty);
HXLINE( 224)					x2 = (((tileWidth * tileTransform->a) + (( (Float)(0) ) * tileTransform->c)) + tileTransform->tx);
HXLINE( 225)					y2 = (((tileWidth * tileTransform->b) + (( (Float)(0) ) * tileTransform->d)) + tileTransform->ty);
HXLINE( 226)					x3 = (((( (Float)(0) ) * tileTransform->a) + (tileHeight * tileTransform->c)) + tileTransform->tx);
HXLINE( 227)					y3 = (((( (Float)(0) ) * tileTransform->b) + (tileHeight * tileTransform->d)) + tileTransform->ty);
HXLINE( 228)					x4 = (((tileWidth * tileTransform->a) + (tileHeight * tileTransform->c)) + tileTransform->tx);
HXLINE( 229)					y4 = (((tileWidth * tileTransform->b) + (tileHeight * tileTransform->d)) + tileTransform->ty);
HXLINE( 231)					vertexOffset = ::openfl::display::_internal::Context3DTilemap_obj::vertexDataPosition;
HXLINE( 233)					{
HXLINE( 233)						 ::lime::utils::ArrayBufferView this1 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 233)						 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (vertexOffset * 4)),x);
            					}
HXLINE( 234)					{
HXLINE( 234)						 ::lime::utils::ArrayBufferView this2 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 234)						 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + ((vertexOffset + 1) * 4)),y);
            					}
HXLINE( 235)					{
HXLINE( 235)						 ::lime::utils::ArrayBufferView this3 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 235)						 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + ((vertexOffset + 2) * 4)),uvX);
            					}
HXLINE( 236)					{
HXLINE( 236)						 ::lime::utils::ArrayBufferView this4 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 236)						 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + ((vertexOffset + 3) * 4)),uvY);
            					}
HXLINE( 238)					{
HXLINE( 238)						 ::lime::utils::ArrayBufferView this5 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 238)						 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + ((vertexOffset + ::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex) * 4)),x2);
            					}
HXLINE( 239)					{
HXLINE( 239)						 ::lime::utils::ArrayBufferView this6 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 239)						 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + (((vertexOffset + ::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex) + 1) * 4)),y2);
            					}
HXLINE( 240)					{
HXLINE( 240)						 ::lime::utils::ArrayBufferView this7 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 240)						 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + (((vertexOffset + ::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex) + 2) * 4)),uvWidth);
            					}
HXLINE( 241)					{
HXLINE( 241)						 ::lime::utils::ArrayBufferView this8 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 241)						 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + (((vertexOffset + ::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex) + 3) * 4)),uvY);
            					}
HXLINE( 243)					{
HXLINE( 243)						 ::lime::utils::ArrayBufferView this9 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 243)						 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + ((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * 2)) * 4)),x3);
            					}
HXLINE( 244)					{
HXLINE( 244)						 ::lime::utils::ArrayBufferView this10 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 244)						 ::__hxcpp_memory_set_float(this10->buffer->b,(this10->byteOffset + (((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * 2)) + 1) * 4)),y3);
            					}
HXLINE( 245)					{
HXLINE( 245)						 ::lime::utils::ArrayBufferView this11 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 245)						 ::__hxcpp_memory_set_float(this11->buffer->b,(this11->byteOffset + (((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * 2)) + 2) * 4)),uvX);
            					}
HXLINE( 246)					{
HXLINE( 246)						 ::lime::utils::ArrayBufferView this12 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 246)						 ::__hxcpp_memory_set_float(this12->buffer->b,(this12->byteOffset + (((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * 2)) + 3) * 4)),uvHeight);
            					}
HXLINE( 248)					{
HXLINE( 248)						 ::lime::utils::ArrayBufferView this13 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 248)						 ::__hxcpp_memory_set_float(this13->buffer->b,(this13->byteOffset + ((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * 3)) * 4)),x4);
            					}
HXLINE( 249)					{
HXLINE( 249)						 ::lime::utils::ArrayBufferView this14 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 249)						 ::__hxcpp_memory_set_float(this14->buffer->b,(this14->byteOffset + (((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * 3)) + 1) * 4)),y4);
            					}
HXLINE( 250)					{
HXLINE( 250)						 ::lime::utils::ArrayBufferView this15 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 250)						 ::__hxcpp_memory_set_float(this15->buffer->b,(this15->byteOffset + (((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * 3)) + 2) * 4)),uvWidth);
            					}
HXLINE( 251)					{
HXLINE( 251)						 ::lime::utils::ArrayBufferView this16 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 251)						 ::__hxcpp_memory_set_float(this16->buffer->b,(this16->byteOffset + (((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * 3)) + 3) * 4)),uvHeight);
            					}
HXLINE( 253)					if (alphaEnabled) {
HXLINE( 257)						{
HXLINE( 257)							 ::lime::utils::ArrayBufferView this1 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 257)							 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * 0)) + alphaPosition) * 4)),alpha);
            						}
HXDLIN( 257)						{
HXLINE( 257)							 ::lime::utils::ArrayBufferView this2 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 257)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + (((vertexOffset + ::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex) + alphaPosition) * 4)),alpha);
            						}
HXDLIN( 257)						{
HXLINE( 257)							 ::lime::utils::ArrayBufferView this3 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 257)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + (((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * 2)) + alphaPosition) * 4)),alpha);
            						}
HXDLIN( 257)						{
HXLINE( 257)							 ::lime::utils::ArrayBufferView this4 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 257)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + (((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * 3)) + alphaPosition) * 4)),alpha);
            						}
            					}
HXLINE( 261)					if (colorTransformEnabled) {
HXLINE( 263)						if (::hx::IsNotNull( colorTransform )) {
HXLINE( 265)							int _g = 0;
HXDLIN( 265)							while((_g < 4)){
HXLINE( 265)								_g = (_g + 1);
HXDLIN( 265)								int i = (_g - 1);
HXLINE( 267)								{
HXLINE( 267)									 ::lime::utils::ArrayBufferView this1 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 267)									Float val = colorTransform->redMultiplier;
HXDLIN( 267)									 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) * 4)),val);
            								}
HXLINE( 268)								{
HXLINE( 268)									 ::lime::utils::ArrayBufferView this2 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 268)									Float val1 = colorTransform->greenMultiplier;
HXDLIN( 268)									 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + ((((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) + 1) * 4)),val1);
            								}
HXLINE( 269)								{
HXLINE( 269)									 ::lime::utils::ArrayBufferView this3 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 269)									Float val2 = colorTransform->blueMultiplier;
HXDLIN( 269)									 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + ((((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) + 2) * 4)),val2);
            								}
HXLINE( 270)								{
HXLINE( 270)									 ::lime::utils::ArrayBufferView this4 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 270)									Float val3 = colorTransform->alphaMultiplier;
HXDLIN( 270)									 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + ((((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) + 3) * 4)),val3);
            								}
HXLINE( 272)								{
HXLINE( 272)									 ::lime::utils::ArrayBufferView this5 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 272)									Float val4 = colorTransform->redOffset;
HXDLIN( 272)									 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + ((((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) + 4) * 4)),val4);
            								}
HXLINE( 273)								{
HXLINE( 273)									 ::lime::utils::ArrayBufferView this6 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 273)									Float val5 = colorTransform->greenOffset;
HXDLIN( 273)									 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + ((((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) + 5) * 4)),val5);
            								}
HXLINE( 274)								{
HXLINE( 274)									 ::lime::utils::ArrayBufferView this7 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 274)									Float val6 = colorTransform->blueOffset;
HXDLIN( 274)									 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + ((((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) + 6) * 4)),val6);
            								}
HXLINE( 275)								{
HXLINE( 275)									 ::lime::utils::ArrayBufferView this8 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 275)									Float val7 = colorTransform->alphaOffset;
HXDLIN( 275)									 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + ((((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) + 7) * 4)),val7);
            								}
            							}
            						}
            						else {
HXLINE( 280)							int _g = 0;
HXDLIN( 280)							while((_g < 4)){
HXLINE( 280)								_g = (_g + 1);
HXDLIN( 280)								int i = (_g - 1);
HXLINE( 282)								{
HXLINE( 282)									 ::lime::utils::ArrayBufferView this1 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 282)									 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) * 4)),1);
            								}
HXLINE( 283)								{
HXLINE( 283)									 ::lime::utils::ArrayBufferView this2 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 283)									 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + ((((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) + 1) * 4)),1);
            								}
HXLINE( 284)								{
HXLINE( 284)									 ::lime::utils::ArrayBufferView this3 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 284)									 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + ((((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) + 2) * 4)),1);
            								}
HXLINE( 285)								{
HXLINE( 285)									 ::lime::utils::ArrayBufferView this4 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 285)									 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + ((((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) + 3) * 4)),1);
            								}
HXLINE( 287)								{
HXLINE( 287)									 ::lime::utils::ArrayBufferView this5 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 287)									 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + ((((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) + 4) * 4)),0);
            								}
HXLINE( 288)								{
HXLINE( 288)									 ::lime::utils::ArrayBufferView this6 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 288)									 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + ((((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) + 5) * 4)),0);
            								}
HXLINE( 289)								{
HXLINE( 289)									 ::lime::utils::ArrayBufferView this7 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 289)									 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + ((((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) + 6) * 4)),0);
            								}
HXLINE( 290)								{
HXLINE( 290)									 ::lime::utils::ArrayBufferView this8 = ::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData;
HXDLIN( 290)									 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + ((((vertexOffset + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * i)) + ctPosition) + 7) * 4)),0);
            								}
            							}
            						}
            					}
HXLINE( 295)					 ::Dynamic _hx_tmp = ::hx::ClassOf< ::openfl::display::_internal::Context3DTilemap >();
HXDLIN( 295)					::openfl::display::_internal::Context3DTilemap_obj::vertexDataPosition = (::openfl::display::_internal::Context3DTilemap_obj::vertexDataPosition + (::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex * 4));
            				}
            			}
            		}
HXLINE( 299)		group->_hx___dirty = false;
HXLINE( 300)		::openfl::geom::Matrix_obj::_hx___pool->release(tileTransform);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC13(Context3DTilemap_obj,buildBufferTileContainer,(void))

void Context3DTilemap_obj::flush( ::openfl::display::Tilemap tilemap, ::openfl::display::OpenGLRenderer renderer, ::Dynamic blendMode){
            	HX_STACKFRAME(&_hx_pos_56b3f28bdbdcb84c_304_flush)
HXLINE( 305)		if (::hx::IsNull( ::openfl::display::_internal::Context3DTilemap_obj::currentShader )) {
HXLINE( 307)			::openfl::display::_internal::Context3DTilemap_obj::currentShader = renderer->_hx___defaultDisplayShader;
            		}
HXLINE( 310)		bool _hx_tmp;
HXDLIN( 310)		bool _hx_tmp1;
HXDLIN( 310)		if ((::openfl::display::_internal::Context3DTilemap_obj::bufferPosition > ::openfl::display::_internal::Context3DTilemap_obj::lastFlushedPosition)) {
HXLINE( 310)			_hx_tmp1 = ::hx::IsNotNull( ::openfl::display::_internal::Context3DTilemap_obj::currentBitmapData );
            		}
            		else {
HXLINE( 310)			_hx_tmp1 = false;
            		}
HXDLIN( 310)		if (_hx_tmp1) {
HXLINE( 310)			_hx_tmp = ::hx::IsNotNull( ::openfl::display::_internal::Context3DTilemap_obj::currentShader );
            		}
            		else {
HXLINE( 310)			_hx_tmp = false;
            		}
HXDLIN( 310)		if (_hx_tmp) {
HXLINE( 312)			 ::openfl::display::Shader shader = renderer->_hx___initDisplayShader(::openfl::display::_internal::Context3DTilemap_obj::currentShader);
HXLINE( 313)			renderer->setShader(shader);
HXLINE( 314)			renderer->applyBitmapData(::openfl::display::_internal::Context3DTilemap_obj::currentBitmapData,tilemap->smoothing,null());
HXLINE( 315)			renderer->applyMatrix(renderer->_hx___getMatrix(tilemap->_hx___renderTransform,1));
HXLINE( 317)			if (tilemap->tileAlphaEnabled) {
HXLINE( 319)				renderer->useAlphaArray();
            			}
            			else {
HXLINE( 323)				renderer->applyAlpha(tilemap->_hx___worldAlpha);
            			}
HXLINE( 326)			if (tilemap->tileBlendModeEnabled) {
HXLINE( 328)				renderer->_hx___setBlendMode(blendMode);
            			}
HXLINE( 331)			if (tilemap->tileColorTransformEnabled) {
HXLINE( 333)				renderer->applyHasColorTransform(true);
HXLINE( 334)				renderer->useColorTransformArray();
            			}
            			else {
HXLINE( 338)				renderer->applyColorTransform(tilemap->_hx___worldColorTransform);
            			}
HXLINE( 341)			renderer->updateShader();
HXLINE( 343)			 ::openfl::display3D::VertexBuffer3D vertexBuffer = tilemap->_hx___buffer->vertexBuffer;
HXLINE( 344)			int vertexBufferPosition = ((::openfl::display::_internal::Context3DTilemap_obj::lastFlushedPosition * ::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex) * 4);
HXLINE( 345)			int length = (::openfl::display::_internal::Context3DTilemap_obj::bufferPosition - ::openfl::display::_internal::Context3DTilemap_obj::lastFlushedPosition);
HXLINE( 347)			while((::openfl::display::_internal::Context3DTilemap_obj::lastFlushedPosition < ::openfl::display::_internal::Context3DTilemap_obj::bufferPosition)){
HXLINE( 349)				length = ::Std_obj::_hx_int(::Math_obj::min(( (Float)((::openfl::display::_internal::Context3DTilemap_obj::bufferPosition - ::openfl::display::_internal::Context3DTilemap_obj::lastFlushedPosition)) ),( (Float)(::openfl::display::_internal::Context3DTilemap_obj::context->_hx___quadIndexBufferElements) )));
HXLINE( 350)				if ((length <= 0)) {
HXLINE( 350)					goto _hx_goto_5;
            				}
HXLINE( 352)				if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 354)					::openfl::display::_internal::Context3DTilemap_obj::context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,vertexBufferPosition,2);
            				}
HXLINE( 357)				if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 359)					::openfl::display::_internal::Context3DTilemap_obj::context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,(vertexBufferPosition + 2),2);
            				}
HXLINE( 362)				if (tilemap->tileAlphaEnabled) {
HXLINE( 364)					if (::hx::IsNotNull( shader->_hx___alpha )) {
HXLINE( 366)						::openfl::display::_internal::Context3DTilemap_obj::context->setVertexBufferAt(( (int)(shader->_hx___alpha->index) ),vertexBuffer,(vertexBufferPosition + 4),1);
            					}
            				}
HXLINE( 370)				if (tilemap->tileColorTransformEnabled) {
HXLINE( 372)					int position;
HXDLIN( 372)					if (tilemap->tileAlphaEnabled) {
HXLINE( 372)						position = 5;
            					}
            					else {
HXLINE( 372)						position = 4;
            					}
HXLINE( 373)					if (::hx::IsNotNull( shader->_hx___colorMultiplier )) {
HXLINE( 375)						::openfl::display::_internal::Context3DTilemap_obj::context->setVertexBufferAt(( (int)(shader->_hx___colorMultiplier->index) ),vertexBuffer,(vertexBufferPosition + position),4);
            					}
HXLINE( 377)					if (::hx::IsNotNull( shader->_hx___colorOffset )) {
HXLINE( 379)						::openfl::display::_internal::Context3DTilemap_obj::context->setVertexBufferAt(( (int)(shader->_hx___colorOffset->index) ),vertexBuffer,((vertexBufferPosition + position) + 4),4);
            					}
            				}
HXLINE( 383)				::openfl::display::_internal::Context3DTilemap_obj::context->drawTriangles(::openfl::display::_internal::Context3DTilemap_obj::context->_hx___quadIndexBuffer,0,(length * 2));
HXLINE( 384)				 ::Dynamic _hx_tmp = ::hx::ClassOf< ::openfl::display::_internal::Context3DTilemap >();
HXDLIN( 384)				::openfl::display::_internal::Context3DTilemap_obj::lastFlushedPosition = (::openfl::display::_internal::Context3DTilemap_obj::lastFlushedPosition + length);
            			}
            			_hx_goto_5:;
HXLINE( 391)			renderer->_hx___clearShader();
            		}
HXLINE( 394)		::openfl::display::_internal::Context3DTilemap_obj::lastUsedBitmapData = ::openfl::display::_internal::Context3DTilemap_obj::currentBitmapData;
HXLINE( 395)		::openfl::display::_internal::Context3DTilemap_obj::lastUsedShader = ::openfl::display::_internal::Context3DTilemap_obj::currentShader;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Context3DTilemap_obj,flush,(void))

int Context3DTilemap_obj::getRecursiveLength( ::openfl::display::TileContainer tileContainer){
            	HX_STACKFRAME(&_hx_pos_56b3f28bdbdcb84c_399_getRecursiveLength)
HXLINE( 400)		::Array< ::Dynamic> tiles = tileContainer->_hx___tiles;
HXLINE( 401)		int totalLength = 0;
HXLINE( 403)		{
HXLINE( 403)			int _g = 0;
HXDLIN( 403)			while((_g < tiles->length)){
HXLINE( 403)				 ::openfl::display::Tile tile = tiles->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN( 403)				_g = (_g + 1);
HXLINE( 405)				if ((tile->__length > 0)) {
HXLINE( 405)					totalLength = (totalLength + ::openfl::display::_internal::Context3DTilemap_obj::getRecursiveLength(( ( ::openfl::display::TileContainer)(tile) )));
            				}
            				else {
HXLINE( 407)					totalLength = (totalLength + 1);
            				}
            			}
            		}
HXLINE( 409)		return totalLength;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTilemap_obj,getRecursiveLength,return )

void Context3DTilemap_obj::render( ::openfl::display::Tilemap tilemap, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_56b3f28bdbdcb84c_413_render)
HXLINE( 414)		bool _hx_tmp;
HXDLIN( 414)		if (tilemap->_hx___renderable) {
HXLINE( 414)			_hx_tmp = (tilemap->_hx___worldAlpha <= 0);
            		}
            		else {
HXLINE( 414)			_hx_tmp = true;
            		}
HXDLIN( 414)		if (_hx_tmp) {
HXLINE( 414)			return;
            		}
HXLINE( 416)		::openfl::display::_internal::Context3DTilemap_obj::context = renderer->_hx___context3D;
HXLINE( 418)		::openfl::display::_internal::Context3DTilemap_obj::buildBuffer(tilemap,renderer);
HXLINE( 420)		if ((::openfl::display::_internal::Context3DTilemap_obj::numTiles == 0)) {
HXLINE( 420)			return;
            		}
HXLINE( 422)		::openfl::display::_internal::Context3DTilemap_obj::bufferPosition = 0;
HXLINE( 424)		::openfl::display::_internal::Context3DTilemap_obj::lastFlushedPosition = 0;
HXLINE( 425)		::openfl::display::_internal::Context3DTilemap_obj::lastUsedBitmapData = null();
HXLINE( 426)		::openfl::display::_internal::Context3DTilemap_obj::lastUsedShader = null();
HXLINE( 427)		::openfl::display::_internal::Context3DTilemap_obj::currentBitmapData = null();
HXLINE( 428)		::openfl::display::_internal::Context3DTilemap_obj::currentShader = null();
HXLINE( 430)		::openfl::display::_internal::Context3DTilemap_obj::currentBlendMode = tilemap->_hx___worldBlendMode;
HXLINE( 432)		if (!(tilemap->tileBlendModeEnabled)) {
HXLINE( 434)			renderer->_hx___setBlendMode(::openfl::display::_internal::Context3DTilemap_obj::currentBlendMode);
            		}
HXLINE( 437)		renderer->_hx___pushMaskObject(tilemap,null());
HXLINE( 440)		 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 441)		rect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(tilemap->_hx___width) ),( (Float)(tilemap->_hx___height) ));
HXLINE( 442)		renderer->_hx___pushMaskRect(rect,tilemap->_hx___renderTransform);
HXLINE( 444)		::openfl::display::_internal::Context3DTilemap_obj::renderTileContainer(tilemap,renderer,tilemap->_hx___group,tilemap->_hx___worldShader,tilemap->_hx___tileset,tilemap->_hx___worldAlpha,tilemap->tileBlendModeEnabled,::openfl::display::_internal::Context3DTilemap_obj::currentBlendMode,null());
HXLINE( 446)		::openfl::display::_internal::Context3DTilemap_obj::flush(tilemap,renderer,::openfl::display::_internal::Context3DTilemap_obj::currentBlendMode);
HXLINE( 449)		renderer->_hx___popMaskRect();
HXLINE( 450)		renderer->_hx___popMaskObject(tilemap,null());
HXLINE( 452)		::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DTilemap_obj,render,(void))

void Context3DTilemap_obj::renderDrawable( ::openfl::display::Tilemap tilemap, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_56b3f28bdbdcb84c_456_renderDrawable)
HXLINE( 457)		renderer->_hx___updateCacheBitmap(tilemap,false);
HXLINE( 459)		bool _hx_tmp;
HXDLIN( 459)		if (::hx::IsNotNull( tilemap->_hx___cacheBitmap )) {
HXLINE( 459)			_hx_tmp = !(tilemap->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE( 459)			_hx_tmp = false;
            		}
HXDLIN( 459)		if (_hx_tmp) {
HXLINE( 461)			::openfl::display::_internal::Context3DBitmap_obj::render(tilemap->_hx___cacheBitmap,renderer);
            		}
            		else {
HXLINE( 465)			bool _hx_tmp;
HXDLIN( 465)			if (::hx::IsNull( tilemap->opaqueBackground )) {
HXLINE( 465)				_hx_tmp = ::hx::IsNull( tilemap->_hx___graphics );
            			}
            			else {
HXLINE( 465)				_hx_tmp = false;
            			}
HXDLIN( 465)			if (!(_hx_tmp)) {
HXLINE( 465)				bool _hx_tmp;
HXDLIN( 465)				if (tilemap->_hx___renderable) {
HXLINE( 465)					_hx_tmp = (tilemap->_hx___worldAlpha <= 0);
            				}
            				else {
HXLINE( 465)					_hx_tmp = true;
            				}
HXDLIN( 465)				if (!(_hx_tmp)) {
HXLINE( 465)					bool _hx_tmp;
HXDLIN( 465)					bool _hx_tmp1;
HXDLIN( 465)					bool _hx_tmp2;
HXDLIN( 465)					if (::hx::IsNotNull( tilemap->opaqueBackground )) {
HXLINE( 465)						_hx_tmp2 = !(tilemap->_hx___isCacheBitmapRender);
            					}
            					else {
HXLINE( 465)						_hx_tmp2 = false;
            					}
HXDLIN( 465)					if (_hx_tmp2) {
HXLINE( 465)						_hx_tmp1 = (tilemap->get_width() > 0);
            					}
            					else {
HXLINE( 465)						_hx_tmp1 = false;
            					}
HXDLIN( 465)					if (_hx_tmp1) {
HXLINE( 465)						_hx_tmp = (tilemap->get_height() > 0);
            					}
            					else {
HXLINE( 465)						_hx_tmp = false;
            					}
HXDLIN( 465)					if (_hx_tmp) {
HXLINE( 465)						renderer->_hx___setBlendMode(tilemap->_hx___worldBlendMode);
HXDLIN( 465)						renderer->_hx___pushMaskObject(tilemap,null());
HXDLIN( 465)						 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXDLIN( 465)						 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXDLIN( 465)						Float _hx_tmp = tilemap->get_width();
HXDLIN( 465)						rect->setTo(( (Float)(0) ),( (Float)(0) ),_hx_tmp,tilemap->get_height());
HXDLIN( 465)						renderer->_hx___pushMaskRect(rect,tilemap->_hx___renderTransform);
HXDLIN( 465)						int color = ( (int)(tilemap->opaqueBackground) );
HXDLIN( 465)						context->clear((( (Float)((::hx::UShr(color,16) & 255)) ) / ( (Float)(255) )),(( (Float)((::hx::UShr(color,8) & 255)) ) / ( (Float)(255) )),(( (Float)((color & 255)) ) / ( (Float)(255) )),1,0,0,1);
HXDLIN( 465)						renderer->_hx___popMaskRect();
HXDLIN( 465)						renderer->_hx___popMaskObject(tilemap,null());
HXDLIN( 465)						::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
            					}
HXDLIN( 465)					if (::hx::IsNotNull( tilemap->_hx___graphics )) {
HXLINE( 465)						::openfl::display::_internal::Context3DShape_obj::render(tilemap,renderer);
            					}
            				}
            			}
HXLINE( 466)			::openfl::display::_internal::Context3DTilemap_obj::render(tilemap,renderer);
            		}
HXLINE( 469)		renderer->_hx___renderEvent(tilemap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DTilemap_obj,renderDrawable,(void))

void Context3DTilemap_obj::renderDrawableMask( ::openfl::display::Tilemap tilemap, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_56b3f28bdbdcb84c_473_renderDrawableMask)
HXLINE( 482)		bool _hx_tmp;
HXDLIN( 482)		if (::hx::IsNull( tilemap->opaqueBackground )) {
HXLINE( 482)			_hx_tmp = ::hx::IsNull( tilemap->_hx___graphics );
            		}
            		else {
HXLINE( 482)			_hx_tmp = false;
            		}
HXDLIN( 482)		if (!(_hx_tmp)) {
HXLINE( 482)			bool _hx_tmp;
HXDLIN( 482)			bool _hx_tmp1;
HXDLIN( 482)			bool _hx_tmp2;
HXDLIN( 482)			if (::hx::IsNotNull( tilemap->opaqueBackground )) {
HXLINE( 482)				_hx_tmp2 = !(tilemap->_hx___isCacheBitmapRender);
            			}
            			else {
HXLINE( 482)				_hx_tmp2 = false;
            			}
HXDLIN( 482)			if (_hx_tmp2) {
HXLINE( 482)				_hx_tmp1 = (tilemap->get_width() > 0);
            			}
            			else {
HXLINE( 482)				_hx_tmp1 = false;
            			}
HXDLIN( 482)			if (_hx_tmp1) {
HXLINE( 482)				_hx_tmp = (tilemap->get_height() > 0);
            			}
            			else {
HXLINE( 482)				_hx_tmp = false;
            			}
HXDLIN( 482)			if (::hx::IsNotNull( tilemap->_hx___graphics )) {
HXLINE( 482)				::openfl::display::_internal::Context3DShape_obj::renderMask(tilemap,renderer);
            			}
            		}
HXLINE( 483)		::openfl::display::_internal::Context3DTilemap_obj::renderMask(tilemap,renderer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DTilemap_obj,renderDrawableMask,(void))

void Context3DTilemap_obj::renderTileContainer( ::openfl::display::Tilemap tilemap, ::openfl::display::OpenGLRenderer renderer, ::openfl::display::TileContainer group, ::openfl::display::Shader defaultShader, ::openfl::display::Tileset defaultTileset,Float worldAlpha,bool blendModeEnabled, ::Dynamic defaultBlendMode, ::openfl::display::BitmapData cacheBitmapData){
            	HX_STACKFRAME(&_hx_pos_56b3f28bdbdcb84c_490_renderTileContainer)
HXLINE( 491)		::Array< ::Dynamic> tiles = group->_hx___tiles;
HXLINE( 493)		 ::openfl::display::Tileset tileset;
HXLINE( 494)		Float alpha;
HXLINE( 495)		bool visible;
HXLINE( 496)		 ::Dynamic blendMode = null();
HXLINE( 497)		int id;
HXLINE( 498)		 ::openfl::display::TileData tileData;
HXLINE( 499)		 ::openfl::geom::Rectangle tileRect;
HXLINE( 500)		 ::openfl::display::Shader shader;
HXLINE( 501)		 ::openfl::display::BitmapData bitmapData;
HXLINE( 503)		{
HXLINE( 503)			int _g = 0;
HXDLIN( 503)			while((_g < tiles->length)){
HXLINE( 503)				 ::openfl::display::Tile tile = tiles->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN( 503)				_g = (_g + 1);
HXLINE( 505)				if (::hx::IsNotNull( tile->get_tileset() )) {
HXLINE( 505)					tileset = tile->get_tileset();
            				}
            				else {
HXLINE( 505)					tileset = defaultTileset;
            				}
HXLINE( 507)				alpha = (tile->get_alpha() * worldAlpha);
HXLINE( 508)				visible = tile->get_visible();
HXLINE( 509)				bool _hx_tmp;
HXDLIN( 509)				if (visible) {
HXLINE( 509)					_hx_tmp = (alpha <= 0);
            				}
            				else {
HXLINE( 509)					_hx_tmp = true;
            				}
HXDLIN( 509)				if (_hx_tmp) {
HXLINE( 509)					continue;
            				}
HXLINE( 511)				if (::hx::IsNotNull( tile->get_shader() )) {
HXLINE( 511)					shader = tile->get_shader();
            				}
            				else {
HXLINE( 511)					shader = defaultShader;
            				}
HXLINE( 513)				if (blendModeEnabled) {
HXLINE( 515)					if (::hx::IsNotNull( tile->_hx___blendMode )) {
HXLINE( 515)						blendMode = tile->_hx___blendMode;
            					}
            					else {
HXLINE( 515)						blendMode = defaultBlendMode;
            					}
            				}
HXLINE( 518)				if ((tile->__length > 0)) {
HXLINE( 520)					::openfl::display::_internal::Context3DTilemap_obj::renderTileContainer(tilemap,renderer,( ( ::openfl::display::TileContainer)(tile) ),shader,tileset,alpha,blendModeEnabled,blendMode,cacheBitmapData);
            				}
            				else {
HXLINE( 524)					if (::hx::IsNull( tileset )) {
HXLINE( 524)						continue;
            					}
HXLINE( 526)					id = tile->get_id();
HXLINE( 528)					bitmapData = tileset->_hx___bitmapData;
HXLINE( 529)					if (::hx::IsNull( bitmapData )) {
HXLINE( 529)						continue;
            					}
HXLINE( 531)					if ((id == -1)) {
HXLINE( 533)						tileRect = tile->_hx___rect;
HXLINE( 534)						bool _hx_tmp;
HXDLIN( 534)						bool _hx_tmp1;
HXDLIN( 534)						if (::hx::IsNotNull( tileRect )) {
HXLINE( 534)							_hx_tmp1 = (tileRect->width <= 0);
            						}
            						else {
HXLINE( 534)							_hx_tmp1 = true;
            						}
HXDLIN( 534)						if (!(_hx_tmp1)) {
HXLINE( 534)							_hx_tmp = (tileRect->height <= 0);
            						}
            						else {
HXLINE( 534)							_hx_tmp = true;
            						}
HXDLIN( 534)						if (_hx_tmp) {
HXLINE( 534)							continue;
            						}
            					}
            					else {
HXLINE( 538)						tileData = tileset->_hx___data->__get(id).StaticCast<  ::openfl::display::TileData >();
HXLINE( 539)						if (::hx::IsNull( tileData )) {
HXLINE( 539)							continue;
            						}
            					}
HXLINE( 542)					bool _hx_tmp;
HXDLIN( 542)					bool _hx_tmp1;
HXDLIN( 542)					if (::hx::IsInstanceEq( shader,::openfl::display::_internal::Context3DTilemap_obj::currentShader )) {
HXLINE( 543)						if (::hx::IsInstanceNotEq( bitmapData,::openfl::display::_internal::Context3DTilemap_obj::currentBitmapData )) {
HXLINE( 542)							_hx_tmp1 = ::hx::IsNotNull( ::openfl::display::_internal::Context3DTilemap_obj::currentBitmapData );
            						}
            						else {
HXLINE( 542)							_hx_tmp1 = false;
            						}
            					}
            					else {
HXLINE( 542)						_hx_tmp1 = true;
            					}
HXDLIN( 542)					if (!(_hx_tmp1)) {
HXLINE( 542)						_hx_tmp = ::hx::IsNotEq( ::openfl::display::_internal::Context3DTilemap_obj::currentBlendMode,blendMode );
            					}
            					else {
HXLINE( 542)						_hx_tmp = true;
            					}
HXDLIN( 542)					if (_hx_tmp) {
HXLINE( 546)						::openfl::display::_internal::Context3DTilemap_obj::flush(tilemap,renderer,::openfl::display::_internal::Context3DTilemap_obj::currentBlendMode);
            					}
HXLINE( 549)					::openfl::display::_internal::Context3DTilemap_obj::currentBitmapData = bitmapData;
HXLINE( 550)					::openfl::display::_internal::Context3DTilemap_obj::currentShader = shader;
HXLINE( 551)					::openfl::display::_internal::Context3DTilemap_obj::currentBlendMode = blendMode;
HXLINE( 552)					::openfl::display::_internal::Context3DTilemap_obj::bufferPosition++;
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Context3DTilemap_obj,renderTileContainer,(void))

void Context3DTilemap_obj::renderMask( ::openfl::display::Tilemap tilemap, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_56b3f28bdbdcb84c_558_renderMask)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DTilemap_obj,renderMask,(void))

void Context3DTilemap_obj::resizeBuffer( ::openfl::display::Tilemap tilemap,int count){
            	HX_GC_STACKFRAME(&_hx_pos_56b3f28bdbdcb84c_642_resizeBuffer)
HXLINE( 643)		::openfl::display::_internal::Context3DTilemap_obj::numTiles = count;
HXLINE( 645)		if (::hx::IsNull( tilemap->_hx___buffer )) {
HXLINE( 647)			tilemap->_hx___buffer =  ::openfl::display::_internal::Context3DBuffer_obj::__alloc( HX_CTX ,::openfl::display::_internal::Context3DTilemap_obj::context,::openfl::display::_internal::Context3DElementType_obj::QUADS_dyn(),::openfl::display::_internal::Context3DTilemap_obj::numTiles,::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex);
            		}
            		else {
HXLINE( 651)			tilemap->_hx___buffer->resize(::openfl::display::_internal::Context3DTilemap_obj::numTiles,::openfl::display::_internal::Context3DTilemap_obj::dataPerVertex);
            		}
HXLINE( 654)		::openfl::display::_internal::Context3DTilemap_obj::vertexBufferData = tilemap->_hx___buffer->vertexBufferData;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DTilemap_obj,resizeBuffer,(void))


Context3DTilemap_obj::Context3DTilemap_obj()
{
}

bool Context3DTilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { outValue = flush_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { outValue = ( context ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numTiles") ) { outValue = ( numTiles ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buildBuffer") ) { outValue = buildBuffer_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resizeBuffer") ) { outValue = resizeBuffer_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dataPerVertex") ) { outValue = ( dataPerVertex ); return true; }
		if (HX_FIELD_EQ(inName,"currentShader") ) { outValue = ( currentShader ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bufferPosition") ) { outValue = ( bufferPosition ); return true; }
		if (HX_FIELD_EQ(inName,"lastUsedShader") ) { outValue = ( lastUsedShader ); return true; }
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { outValue = ( currentBlendMode ); return true; }
		if (HX_FIELD_EQ(inName,"vertexBufferData") ) { outValue = ( vertexBufferData ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentBitmapData") ) { outValue = ( currentBitmapData ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lastUsedBitmapData") ) { outValue = ( lastUsedBitmapData ); return true; }
		if (HX_FIELD_EQ(inName,"vertexDataPosition") ) { outValue = ( vertexDataPosition ); return true; }
		if (HX_FIELD_EQ(inName,"getRecursiveLength") ) { outValue = getRecursiveLength_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cacheColorTransform") ) { outValue = ( cacheColorTransform ); return true; }
		if (HX_FIELD_EQ(inName,"lastFlushedPosition") ) { outValue = ( lastFlushedPosition ); return true; }
		if (HX_FIELD_EQ(inName,"renderTileContainer") ) { outValue = renderTileContainer_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"buildBufferTileContainer") ) { outValue = buildBufferTileContainer_dyn(); return true; }
	}
	return false;
}

bool Context3DTilemap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=ioValue.Cast<  ::openfl::display3D::Context3D >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numTiles") ) { numTiles=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dataPerVertex") ) { dataPerVertex=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"currentShader") ) { currentShader=ioValue.Cast<  ::openfl::display::Shader >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bufferPosition") ) { bufferPosition=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"lastUsedShader") ) { lastUsedShader=ioValue.Cast<  ::openfl::display::Shader >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { currentBlendMode=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"vertexBufferData") ) { vertexBufferData=ioValue.Cast<  ::lime::utils::ArrayBufferView >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentBitmapData") ) { currentBitmapData=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lastUsedBitmapData") ) { lastUsedBitmapData=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"vertexDataPosition") ) { vertexDataPosition=ioValue.Cast< int >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cacheColorTransform") ) { cacheColorTransform=ioValue.Cast<  ::openfl::geom::ColorTransform >(); return true; }
		if (HX_FIELD_EQ(inName,"lastFlushedPosition") ) { lastFlushedPosition=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DTilemap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DTilemap_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(void *) &Context3DTilemap_obj::cacheColorTransform,HX_("cacheColorTransform",6b,b5,a2,9a)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(void *) &Context3DTilemap_obj::context,HX_("context",ef,95,77,19)},
	{::hx::fsInt,(void *) &Context3DTilemap_obj::dataPerVertex,HX_("dataPerVertex",97,9c,7c,40)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(void *) &Context3DTilemap_obj::currentBitmapData,HX_("currentBitmapData",52,37,f6,0a)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DTilemap_obj::currentBlendMode,HX_("currentBlendMode",db,58,68,ff)},
	{::hx::fsObject /*  ::openfl::display::Shader */ ,(void *) &Context3DTilemap_obj::currentShader,HX_("currentShader",3e,40,7d,00)},
	{::hx::fsInt,(void *) &Context3DTilemap_obj::bufferPosition,HX_("bufferPosition",c9,19,c6,63)},
	{::hx::fsInt,(void *) &Context3DTilemap_obj::lastFlushedPosition,HX_("lastFlushedPosition",36,ba,56,b9)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(void *) &Context3DTilemap_obj::lastUsedBitmapData,HX_("lastUsedBitmapData",4c,23,11,c8)},
	{::hx::fsObject /*  ::openfl::display::Shader */ ,(void *) &Context3DTilemap_obj::lastUsedShader,HX_("lastUsedShader",38,27,00,39)},
	{::hx::fsInt,(void *) &Context3DTilemap_obj::numTiles,HX_("numTiles",5f,11,45,cd)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(void *) &Context3DTilemap_obj::vertexBufferData,HX_("vertexBufferData",ce,43,ce,c6)},
	{::hx::fsInt,(void *) &Context3DTilemap_obj::vertexDataPosition,HX_("vertexDataPosition",77,9a,58,d9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DTilemap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DTilemap_obj::cacheColorTransform,"cacheColorTransform");
	HX_MARK_MEMBER_NAME(Context3DTilemap_obj::context,"context");
	HX_MARK_MEMBER_NAME(Context3DTilemap_obj::dataPerVertex,"dataPerVertex");
	HX_MARK_MEMBER_NAME(Context3DTilemap_obj::currentBitmapData,"currentBitmapData");
	HX_MARK_MEMBER_NAME(Context3DTilemap_obj::currentBlendMode,"currentBlendMode");
	HX_MARK_MEMBER_NAME(Context3DTilemap_obj::currentShader,"currentShader");
	HX_MARK_MEMBER_NAME(Context3DTilemap_obj::bufferPosition,"bufferPosition");
	HX_MARK_MEMBER_NAME(Context3DTilemap_obj::lastFlushedPosition,"lastFlushedPosition");
	HX_MARK_MEMBER_NAME(Context3DTilemap_obj::lastUsedBitmapData,"lastUsedBitmapData");
	HX_MARK_MEMBER_NAME(Context3DTilemap_obj::lastUsedShader,"lastUsedShader");
	HX_MARK_MEMBER_NAME(Context3DTilemap_obj::numTiles,"numTiles");
	HX_MARK_MEMBER_NAME(Context3DTilemap_obj::vertexBufferData,"vertexBufferData");
	HX_MARK_MEMBER_NAME(Context3DTilemap_obj::vertexDataPosition,"vertexDataPosition");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DTilemap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DTilemap_obj::cacheColorTransform,"cacheColorTransform");
	HX_VISIT_MEMBER_NAME(Context3DTilemap_obj::context,"context");
	HX_VISIT_MEMBER_NAME(Context3DTilemap_obj::dataPerVertex,"dataPerVertex");
	HX_VISIT_MEMBER_NAME(Context3DTilemap_obj::currentBitmapData,"currentBitmapData");
	HX_VISIT_MEMBER_NAME(Context3DTilemap_obj::currentBlendMode,"currentBlendMode");
	HX_VISIT_MEMBER_NAME(Context3DTilemap_obj::currentShader,"currentShader");
	HX_VISIT_MEMBER_NAME(Context3DTilemap_obj::bufferPosition,"bufferPosition");
	HX_VISIT_MEMBER_NAME(Context3DTilemap_obj::lastFlushedPosition,"lastFlushedPosition");
	HX_VISIT_MEMBER_NAME(Context3DTilemap_obj::lastUsedBitmapData,"lastUsedBitmapData");
	HX_VISIT_MEMBER_NAME(Context3DTilemap_obj::lastUsedShader,"lastUsedShader");
	HX_VISIT_MEMBER_NAME(Context3DTilemap_obj::numTiles,"numTiles");
	HX_VISIT_MEMBER_NAME(Context3DTilemap_obj::vertexBufferData,"vertexBufferData");
	HX_VISIT_MEMBER_NAME(Context3DTilemap_obj::vertexDataPosition,"vertexDataPosition");
};

#endif

::hx::Class Context3DTilemap_obj::__mClass;

static ::String Context3DTilemap_obj_sStaticFields[] = {
	HX_("cacheColorTransform",6b,b5,a2,9a),
	HX_("context",ef,95,77,19),
	HX_("dataPerVertex",97,9c,7c,40),
	HX_("currentBitmapData",52,37,f6,0a),
	HX_("currentBlendMode",db,58,68,ff),
	HX_("currentShader",3e,40,7d,00),
	HX_("bufferPosition",c9,19,c6,63),
	HX_("lastFlushedPosition",36,ba,56,b9),
	HX_("lastUsedBitmapData",4c,23,11,c8),
	HX_("lastUsedShader",38,27,00,39),
	HX_("numTiles",5f,11,45,cd),
	HX_("vertexBufferData",ce,43,ce,c6),
	HX_("vertexDataPosition",77,9a,58,d9),
	HX_("buildBuffer",ce,a2,05,21),
	HX_("buildBufferTileContainer",85,38,40,ad),
	HX_("flush",c4,62,9b,02),
	HX_("getRecursiveLength",02,76,7a,c1),
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	HX_("renderTileContainer",fd,ba,73,84),
	HX_("renderMask",62,3b,60,e5),
	HX_("resizeBuffer",14,7a,a2,b4),
	::String(null())
};

void Context3DTilemap_obj::__register()
{
	Context3DTilemap_obj _hx_dummy;
	Context3DTilemap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DTilemap",aa,1e,8f,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DTilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &Context3DTilemap_obj::__SetStatic;
	__mClass->mMarkFunc = Context3DTilemap_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DTilemap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DTilemap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DTilemap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DTilemap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DTilemap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DTilemap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_56b3f28bdbdcb84c_37_boot)
HXDLIN(  37)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
