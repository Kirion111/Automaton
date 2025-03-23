#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_utils_AssetLibrary
#include <lime/app/Promise_lime_utils_AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetBundle
#include <lime/utils/AssetBundle.h>
#endif
#ifndef INCLUDED_lime_utils_AssetCache
#include <lime/utils/AssetCache.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_Preloader
#include <lime/utils/Preloader.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_47_exists,"lime.utils.Assets","exists",0x1d422f71,"lime.utils.Assets.exists","lime/utils/Assets.hx",47,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_72_getAsset,"lime.utils.Assets","getAsset",0x8d49da4f,"lime.utils.Assets.getAsset","lime/utils/Assets.hx",72,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_158_getAudioBuffer,"lime.utils.Assets","getAudioBuffer",0x84c07015,"lime.utils.Assets.getAudioBuffer","lime/utils/Assets.hx",158,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_169_getBytes,"lime.utils.Assets","getBytes",0x24a878ca,"lime.utils.Assets.getBytes","lime/utils/Assets.hx",169,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_180_getFont,"lime.utils.Assets","getFont",0x6eb05e50,"lime.utils.Assets.getFont","lime/utils/Assets.hx",180,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_192_getImage,"lime.utils.Assets","getImage",0x24798fba,"lime.utils.Assets.getImage","lime/utils/Assets.hx",192,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_196_getLibrary,"lime.utils.Assets","getLibrary",0xdfc4ad1a,"lime.utils.Assets.getLibrary","lime/utils/Assets.hx",196,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_212_getPath,"lime.utils.Assets","getPath",0x7541e626,"lime.utils.Assets.getPath","lime/utils/Assets.hx",212,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_244_getText,"lime.utils.Assets","getText",0x77e9cd2e,"lime.utils.Assets.getText","lime/utils/Assets.hx",244,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_248_hasLibrary,"lime.utils.Assets","hasLibrary",0x1b170ed6,"lime.utils.Assets.hasLibrary","lime/utils/Assets.hx",248,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_258_isLocal,"lime.utils.Assets","isLocal",0x6de3bdec,"lime.utils.Assets.isLocal","lime/utils/Assets.hx",258,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_276_isValidAudio,"lime.utils.Assets","isValidAudio",0xfba1fa19,"lime.utils.Assets.isValidAudio","lime/utils/Assets.hx",276,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_283_isValidImage,"lime.utils.Assets","isValidImage",0x918aa09e,"lime.utils.Assets.isValidImage","lime/utils/Assets.hx",283,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_287_list,"lime.utils.Assets","list",0x96ec2eb3,"lime.utils.Assets.list","lime/utils/Assets.hx",287,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_304_loadAsset,"lime.utils.Assets","loadAsset",0x8c6c0f75,"lime.utils.Assets.loadAsset","lime/utils/Assets.hx",304,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_356_loadAsset,"lime.utils.Assets","loadAsset",0x8c6c0f75,"lime.utils.Assets.loadAsset","lime/utils/Assets.hx",356,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_377_loadAudioBuffer,"lime.utils.Assets","loadAudioBuffer",0xa72805bb,"lime.utils.Assets.loadAudioBuffer","lime/utils/Assets.hx",377,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_382_loadBytes,"lime.utils.Assets","loadBytes",0x23caadf0,"lime.utils.Assets.loadBytes","lime/utils/Assets.hx",382,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_387_loadFont,"lime.utils.Assets","loadFont",0xbb998fea,"lime.utils.Assets.loadFont","lime/utils/Assets.hx",387,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_392_loadImage,"lime.utils.Assets","loadImage",0x239bc4e0,"lime.utils.Assets.loadImage","lime/utils/Assets.hx",392,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_396_loadLibrary,"lime.utils.Assets","loadLibrary",0x93baf7c0,"lime.utils.Assets.loadLibrary","lime/utils/Assets.hx",396,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_413_loadLibrary,"lime.utils.Assets","loadLibrary",0x93baf7c0,"lime.utils.Assets.loadLibrary","lime/utils/Assets.hx",413,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_434_loadLibrary,"lime.utils.Assets","loadLibrary",0x93baf7c0,"lime.utils.Assets.loadLibrary","lime/utils/Assets.hx",434,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_459_loadLibrary,"lime.utils.Assets","loadLibrary",0x93baf7c0,"lime.utils.Assets.loadLibrary","lime/utils/Assets.hx",459,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_480_loadLibrary,"lime.utils.Assets","loadLibrary",0x93baf7c0,"lime.utils.Assets.loadLibrary","lime/utils/Assets.hx",480,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_490_loadText,"lime.utils.Assets","loadText",0xc4d2fec8,"lime.utils.Assets.loadText","lime/utils/Assets.hx",490,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_494_registerLibrary,"lime.utils.Assets","registerLibrary",0xb6301ea3,"lime.utils.Assets.registerLibrary","lime/utils/Assets.hx",494,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_522_unloadLibrary,"lime.utils.Assets","unloadLibrary",0xc816d6c7,"lime.utils.Assets.unloadLibrary","lime/utils/Assets.hx",522,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_526_removeLibrary,"lime.utils.Assets","removeLibrary",0xaef8fe22,"lime.utils.Assets.removeLibrary","lime/utils/Assets.hx",526,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_565___cacheBreak,"lime.utils.Assets","__cacheBreak",0xe7faf592,"lime.utils.Assets.__cacheBreak","lime/utils/Assets.hx",565,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_569___libraryNotFound,"lime.utils.Assets","__libraryNotFound",0x7dfa37b5,"lime.utils.Assets.__libraryNotFound","lime/utils/Assets.hx",569,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_587_library_onChange,"lime.utils.Assets","library_onChange",0x3a89dec8,"lime.utils.Assets.library_onChange","lime/utils/Assets.hx",587,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_39_boot,"lime.utils.Assets","boot",0x90549687,"lime.utils.Assets.boot","lime/utils/Assets.hx",39,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_40_boot,"lime.utils.Assets","boot",0x90549687,"lime.utils.Assets.boot","lime/utils/Assets.hx",40,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_42_boot,"lime.utils.Assets","boot",0x90549687,"lime.utils.Assets.boot","lime/utils/Assets.hx",42,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_43_boot,"lime.utils.Assets","boot",0x90549687,"lime.utils.Assets.boot","lime/utils/Assets.hx",43,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_df5754140b017d9f_44_boot,"lime.utils.Assets","boot",0x90549687,"lime.utils.Assets.boot","lime/utils/Assets.hx",44,0x95055f23)
namespace lime{
namespace utils{

void Assets_obj::__construct() { }

Dynamic Assets_obj::__CreateEmpty() { return new Assets_obj; }

void *Assets_obj::_hx_vtable = 0;

Dynamic Assets_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Assets_obj > _hx_result = new Assets_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Assets_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d8112bb;
}

 ::lime::utils::AssetCache Assets_obj::cache;

 ::lime::app::_Event_Void_Void Assets_obj::onChange;

 ::haxe::ds::StringMap Assets_obj::bundlePaths;

 ::haxe::ds::StringMap Assets_obj::libraries;

 ::haxe::ds::StringMap Assets_obj::libraryPaths;

bool Assets_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_47_exists)
HXLINE(  49)		if (::hx::IsNull( type )) {
HXLINE(  51)			type = HX_("BINARY",01,68,8e,9f);
            		}
HXLINE(  54)		::String id1 = id;
HXDLIN(  54)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN(  54)		::String symbol_libraryName = id1.substring(0,colonIndex);
HXDLIN(  54)		::String symbol_symbolName = id1.substring((colonIndex + 1),null());
HXDLIN(  54)		 ::lime::utils::AssetLibrary symbol_library = ::lime::utils::Assets_obj::getLibrary(symbol_libraryName);
HXLINE(  56)		if (::hx::IsNotNull( symbol_library )) {
HXLINE(  58)			return symbol_library->exists(symbol_symbolName,type);
            		}
HXLINE(  62)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

 ::Dynamic Assets_obj::getAsset(::String id,::String type,bool useCache){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_72_getAsset)
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		if (useCache) {
HXLINE(  74)			_hx_tmp = ::lime::utils::Assets_obj::cache->enabled;
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  76)			::String _hx_switch_0 = type;
            			if (  (_hx_switch_0==HX_("BINARY",01,68,8e,9f)) ||  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE(  80)				useCache = false;
HXDLIN(  80)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE(  83)				 ::Dynamic font = ::lime::utils::Assets_obj::cache->font->get(id);
HXLINE(  85)				if (::hx::IsNotNull( font )) {
HXLINE(  87)					return font;
            				}
HXLINE(  82)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE(  91)				 ::lime::graphics::Image image = ( ( ::lime::graphics::Image)(::lime::utils::Assets_obj::cache->image->get(id)) );
HXLINE(  93)				if (::lime::utils::Assets_obj::isValidImage(image)) {
HXLINE(  95)					return image;
            				}
HXLINE(  90)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("MUSIC",85,08,49,8e)) ||  (_hx_switch_0==HX_("SOUND",af,c4,ba,fe)) ){
HXLINE(  99)				 ::lime::media::AudioBuffer audio = ( ( ::lime::media::AudioBuffer)(::lime::utils::Assets_obj::cache->audio->get(id)) );
HXLINE( 101)				if (::lime::utils::Assets_obj::isValidAudio(audio)) {
HXLINE( 103)					return audio;
            				}
HXLINE(  98)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("TEMPLATE",3a,78,cd,05)) ){
HXLINE( 107)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Not sure how to get template: ",a1,19,8c,ad) + id)));
HXDLIN( 107)				goto _hx_goto_1;
            			}
            			/* default */{
HXLINE( 110)				return null();
            			}
            			_hx_goto_1:;
            		}
HXLINE( 114)		::String id1 = id;
HXDLIN( 114)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 114)		::String symbol_libraryName = id1.substring(0,colonIndex);
HXDLIN( 114)		::String symbol_symbolName = id1.substring((colonIndex + 1),null());
HXDLIN( 114)		 ::lime::utils::AssetLibrary symbol_library = ::lime::utils::Assets_obj::getLibrary(symbol_libraryName);
HXLINE( 116)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 118)			if (symbol_library->exists(symbol_symbolName,type)) {
HXLINE( 120)				if (symbol_library->isLocal(symbol_symbolName,type)) {
HXLINE( 122)					 ::Dynamic asset = symbol_library->getAsset(symbol_symbolName,type);
HXLINE( 124)					bool _hx_tmp;
HXDLIN( 124)					if (useCache) {
HXLINE( 124)						_hx_tmp = ::lime::utils::Assets_obj::cache->enabled;
            					}
            					else {
HXLINE( 124)						_hx_tmp = false;
            					}
HXDLIN( 124)					if (_hx_tmp) {
HXLINE( 126)						::lime::utils::Assets_obj::cache->set(id,type,asset);
            					}
HXLINE( 129)					return asset;
            				}
            				else {
HXLINE( 133)					::lime::utils::Log_obj::error((((type + HX_(" asset \"",d2,25,2a,5d)) + id) + HX_("\" exists, but only asynchronously",dc,ca,f2,dd)),::hx::SourceInfo(HX_("lime/utils/Assets.hx",23,5f,05,95),133,HX_("lime.utils.Assets",39,6e,7e,b0),HX_("getAsset",7a,79,10,86)));
            				}
            			}
            			else {
HXLINE( 138)				::lime::utils::Log_obj::error(((((HX_("There is no ",e5,bb,ab,c5) + type) + HX_(" asset with an ID of \"",95,f2,3a,0d)) + id) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("lime/utils/Assets.hx",23,5f,05,95),138,HX_("lime.utils.Assets",39,6e,7e,b0),HX_("getAsset",7a,79,10,86)));
            			}
            		}
            		else {
HXLINE( 143)			::String _hx_tmp = ::lime::utils::Assets_obj::_hx___libraryNotFound(symbol_libraryName);
HXDLIN( 143)			::lime::utils::Log_obj::error(_hx_tmp,::hx::SourceInfo(HX_("lime/utils/Assets.hx",23,5f,05,95),143,HX_("lime.utils.Assets",39,6e,7e,b0),HX_("getAsset",7a,79,10,86)));
            		}
HXLINE( 147)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,getAsset,return )

 ::lime::media::AudioBuffer Assets_obj::getAudioBuffer(::String id,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_158_getAudioBuffer)
HXDLIN( 158)		return ( ( ::lime::media::AudioBuffer)(::lime::utils::Assets_obj::getAsset(id,HX_("SOUND",af,c4,ba,fe),useCache)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getAudioBuffer,return )

 ::haxe::io::Bytes Assets_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_169_getBytes)
HXDLIN( 169)		return ( ( ::haxe::io::Bytes)(::lime::utils::Assets_obj::getAsset(id,HX_("BINARY",01,68,8e,9f),false)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

 ::lime::text::Font Assets_obj::getFont(::String id,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_180_getFont)
HXDLIN( 180)		return ( ( ::lime::text::Font)(::lime::utils::Assets_obj::getAsset(id,HX_("FONT",cf,25,81,2e),useCache)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

 ::lime::graphics::Image Assets_obj::getImage(::String id,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_192_getImage)
HXDLIN( 192)		return ( ( ::lime::graphics::Image)(::lime::utils::Assets_obj::getAsset(id,HX_("IMAGE",3b,57,57,3b),useCache)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getImage,return )

 ::lime::utils::AssetLibrary Assets_obj::getLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_196_getLibrary)
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( name )) {
HXLINE( 197)			_hx_tmp = (name == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 199)			name = HX_("default",c1,d8,c3,9b);
            		}
HXLINE( 202)		return ( ( ::lime::utils::AssetLibrary)(::lime::utils::Assets_obj::libraries->get(name)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::String Assets_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_212_getPath)
HXLINE( 214)		::String id1 = id;
HXDLIN( 214)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 214)		::String symbol_libraryName = id1.substring(0,colonIndex);
HXDLIN( 214)		::String symbol_symbolName = id1.substring((colonIndex + 1),null());
HXDLIN( 214)		 ::lime::utils::AssetLibrary symbol_library = ::lime::utils::Assets_obj::getLibrary(symbol_libraryName);
HXLINE( 216)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 218)			::String type = null();
HXDLIN( 218)			if (symbol_library->exists(symbol_symbolName,type)) {
HXLINE( 220)				return symbol_library->getPath(symbol_symbolName);
            			}
            			else {
HXLINE( 224)				::lime::utils::Log_obj::error(((HX_("There is no asset with an ID of \"",b0,92,42,96) + id) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("lime/utils/Assets.hx",23,5f,05,95),224,HX_("lime.utils.Assets",39,6e,7e,b0),HX_("getPath",5b,95,d4,1c)));
            			}
            		}
            		else {
HXLINE( 229)			::String _hx_tmp = ::lime::utils::Assets_obj::_hx___libraryNotFound(symbol_libraryName);
HXDLIN( 229)			::lime::utils::Log_obj::error(_hx_tmp,::hx::SourceInfo(HX_("lime/utils/Assets.hx",23,5f,05,95),229,HX_("lime.utils.Assets",39,6e,7e,b0),HX_("getPath",5b,95,d4,1c)));
            		}
HXLINE( 233)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::String Assets_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_244_getText)
HXDLIN( 244)		return ( (::String)(::lime::utils::Assets_obj::getAsset(id,HX_("TEXT",ad,94,ba,37),false)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

bool Assets_obj::hasLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_248_hasLibrary)
HXLINE( 249)		bool _hx_tmp;
HXDLIN( 249)		if (::hx::IsNotNull( name )) {
HXLINE( 249)			_hx_tmp = (name == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 249)			_hx_tmp = true;
            		}
HXDLIN( 249)		if (_hx_tmp) {
HXLINE( 251)			name = HX_("default",c1,d8,c3,9b);
            		}
HXLINE( 254)		return ::lime::utils::Assets_obj::libraries->exists(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasLibrary,return )

bool Assets_obj::isLocal(::String id,::String type,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_258_isLocal)
HXLINE( 260)		bool _hx_tmp;
HXDLIN( 260)		if (useCache) {
HXLINE( 260)			_hx_tmp = ::lime::utils::Assets_obj::cache->enabled;
            		}
            		else {
HXLINE( 260)			_hx_tmp = false;
            		}
HXDLIN( 260)		if (_hx_tmp) {
HXLINE( 262)			if (::lime::utils::Assets_obj::cache->exists(id,type)) {
HXLINE( 262)				return true;
            			}
            		}
HXLINE( 265)		::String id1 = id;
HXDLIN( 265)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 265)		::String symbol_libraryName = id1.substring(0,colonIndex);
HXDLIN( 265)		::String symbol_symbolName = id1.substring((colonIndex + 1),null());
HXDLIN( 265)		 ::lime::utils::AssetLibrary symbol_library = ::lime::utils::Assets_obj::getLibrary(symbol_libraryName);
HXLINE( 266)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 266)			return symbol_library->isLocal(symbol_symbolName,type);
            		}
            		else {
HXLINE( 266)			return false;
            		}
HXDLIN( 266)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidAudio( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_276_isValidAudio)
HXDLIN( 276)		return ::hx::IsNotNull( buffer );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidAudio,return )

bool Assets_obj::isValidImage( ::lime::graphics::Image image){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_283_isValidImage)
HXDLIN( 283)		if (::hx::IsNotNull( image )) {
HXDLIN( 283)			return ::hx::IsNotNull( image->buffer );
            		}
            		else {
HXDLIN( 283)			return false;
            		}
HXDLIN( 283)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidImage,return )

::Array< ::String > Assets_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_287_list)
HXLINE( 288)		::Array< ::String > items = ::Array_obj< ::String >::__new(0);
HXLINE( 290)		{
HXLINE( 290)			 ::Dynamic library = ::lime::utils::Assets_obj::libraries->iterator();
HXDLIN( 290)			while(( (bool)(library->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 290)				 ::lime::utils::AssetLibrary library1 = ( ( ::lime::utils::AssetLibrary)(library->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 292)				::Array< ::String > libraryItems = library1->list(type);
HXLINE( 294)				if (::hx::IsNotNull( libraryItems )) {
HXLINE( 296)					items = items->concat(libraryItems);
            				}
            			}
            		}
HXLINE( 300)		return items;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

 ::lime::app::Future Assets_obj::loadAsset(::String id,::String type,bool useCache){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_304_loadAsset)
HXLINE( 306)		bool _hx_tmp;
HXDLIN( 306)		if (useCache) {
HXLINE( 306)			_hx_tmp = ::lime::utils::Assets_obj::cache->enabled;
            		}
            		else {
HXLINE( 306)			_hx_tmp = false;
            		}
HXDLIN( 306)		if (_hx_tmp) {
HXLINE( 308)			::String _hx_switch_0 = type;
            			if (  (_hx_switch_0==HX_("BINARY",01,68,8e,9f)) ||  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE( 312)				useCache = false;
HXDLIN( 312)				goto _hx_goto_16;
            			}
            			if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE( 315)				 ::Dynamic font = ::lime::utils::Assets_obj::cache->font->get(id);
HXLINE( 317)				if (::hx::IsNotNull( font )) {
HXLINE( 319)					return ::lime::app::Future_obj::withValue(font);
            				}
HXLINE( 314)				goto _hx_goto_16;
            			}
            			if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE( 323)				 ::lime::graphics::Image image = ( ( ::lime::graphics::Image)(::lime::utils::Assets_obj::cache->image->get(id)) );
HXLINE( 325)				if (::lime::utils::Assets_obj::isValidImage(image)) {
HXLINE( 327)					return ::lime::app::Future_obj::withValue(image);
            				}
HXLINE( 322)				goto _hx_goto_16;
            			}
            			if (  (_hx_switch_0==HX_("MUSIC",85,08,49,8e)) ||  (_hx_switch_0==HX_("SOUND",af,c4,ba,fe)) ){
HXLINE( 331)				 ::lime::media::AudioBuffer audio = ( ( ::lime::media::AudioBuffer)(::lime::utils::Assets_obj::cache->audio->get(id)) );
HXLINE( 333)				if (::lime::utils::Assets_obj::isValidAudio(audio)) {
HXLINE( 335)					return ::lime::app::Future_obj::withValue(audio);
            				}
HXLINE( 330)				goto _hx_goto_16;
            			}
            			if (  (_hx_switch_0==HX_("TEMPLATE",3a,78,cd,05)) ){
HXLINE( 339)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Not sure how to get template: ",a1,19,8c,ad) + id)));
HXDLIN( 339)				goto _hx_goto_16;
            			}
            			/* default */{
HXLINE( 342)				return null();
            			}
            			_hx_goto_16:;
            		}
HXLINE( 346)		::String id1 = id;
HXDLIN( 346)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 346)		::String symbol_libraryName = id1.substring(0,colonIndex);
HXDLIN( 346)		::String symbol_symbolName = id1.substring((colonIndex + 1),null());
HXDLIN( 346)		 ::lime::utils::AssetLibrary symbol_library = ::lime::utils::Assets_obj::getLibrary(symbol_libraryName);
HXLINE( 348)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 350)			if (symbol_library->exists(symbol_symbolName,type)) {
HXLINE( 352)				 ::lime::app::Future future = symbol_library->loadAsset(symbol_symbolName,type);
HXLINE( 354)				bool _hx_tmp;
HXDLIN( 354)				if (useCache) {
HXLINE( 354)					_hx_tmp = ::lime::utils::Assets_obj::cache->enabled;
            				}
            				else {
HXLINE( 354)					_hx_tmp = false;
            				}
HXDLIN( 354)				if (_hx_tmp) {
            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,id,::String,type) HXARGC(1)
            					void _hx_run( ::Dynamic asset){
            						HX_STACKFRAME(&_hx_pos_df5754140b017d9f_356_loadAsset)
HXLINE( 356)						::lime::utils::Assets_obj::cache->set(id,type,asset);
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 356)					future->onComplete( ::Dynamic(new _hx_Closure_0(id,type)));
            				}
HXLINE( 359)				return future;
            			}
            			else {
HXLINE( 363)				return ::lime::app::Future_obj::withError(((((HX_("There is no ",e5,bb,ab,c5) + type) + HX_(" asset with an ID of \"",95,f2,3a,0d)) + id) + HX_("\"",22,00,00,00)));
            			}
            		}
            		else {
HXLINE( 368)			return ::lime::app::Future_obj::withError(::lime::utils::Assets_obj::_hx___libraryNotFound(symbol_libraryName));
            		}
HXLINE( 348)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadAsset,return )

 ::lime::app::Future Assets_obj::loadAudioBuffer(::String id,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_377_loadAudioBuffer)
HXDLIN( 377)		return ::lime::utils::Assets_obj::loadAsset(id,HX_("SOUND",af,c4,ba,fe),useCache);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadAudioBuffer,return )

 ::lime::app::Future Assets_obj::loadBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_382_loadBytes)
HXDLIN( 382)		return ::lime::utils::Assets_obj::loadAsset(id,HX_("BINARY",01,68,8e,9f),false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadBytes,return )

 ::lime::app::Future Assets_obj::loadFont(::String id,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_387_loadFont)
HXDLIN( 387)		return ::lime::utils::Assets_obj::loadAsset(id,HX_("FONT",cf,25,81,2e),useCache);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadFont,return )

 ::lime::app::Future Assets_obj::loadImage(::String id,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_392_loadImage)
HXDLIN( 392)		return ::lime::utils::Assets_obj::loadAsset(id,HX_("IMAGE",3b,57,57,3b),useCache);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadImage,return )

 ::lime::app::Future Assets_obj::loadLibrary(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_396_loadLibrary)
HXLINE( 397)		 ::lime::app::Promise_lime_utils_AssetLibrary promise =  ::lime::app::Promise_lime_utils_AssetLibrary_obj::__alloc( HX_CTX );
HXLINE( 400)		 ::lime::utils::AssetLibrary library = ::lime::utils::Assets_obj::getLibrary(id);
HXLINE( 402)		if (::hx::IsNotNull( library )) {
HXLINE( 404)			return library->load();
            		}
HXLINE( 407)		::String path = id;
HXLINE( 408)		::String rootPath = null();
HXLINE( 410)		if (::lime::utils::Assets_obj::bundlePaths->exists(id)) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            			void _hx_run( ::lime::utils::AssetBundle bundle){
            				HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_413_loadLibrary)
HXLINE( 414)				if (::hx::IsNull( bundle )) {
HXLINE( 416)					promise->error(((HX_("Cannot load bundle for library \"",c5,5d,78,0c) + id) + HX_("\"",22,00,00,00)));
HXLINE( 417)					return;
            				}
HXLINE( 420)				 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromBundle(bundle);
HXLINE( 422)				if (::hx::IsNull( library )) {
HXLINE( 424)					promise->error(((HX_("Cannot open library \"",44,cc,55,e7) + id) + HX_("\"",22,00,00,00)));
            				}
            				else {
HXLINE( 428)					::lime::utils::Assets_obj::libraries->set(id,library);
HXLINE( 429)					library->onChange->add(::lime::utils::Assets_obj::onChange->dispatch_dyn(),null(),null());
HXLINE( 430)					 ::lime::app::Promise_lime_utils_AssetLibrary promise1 = promise;
HXDLIN( 430)					promise1->completeWith(library->load());
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_434_loadLibrary)
HXLINE( 434)				promise->error(((HX_("There is no asset library with an ID of \"",8b,06,e2,9a) + id) + HX_("\"",22,00,00,00)));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 412)			::lime::utils::AssetBundle_obj::loadFromFile(::lime::utils::Assets_obj::bundlePaths->get_string(id))->onComplete( ::Dynamic(new _hx_Closure_0(id,promise)))->onError( ::Dynamic(new _hx_Closure_1(id,promise)));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            			void _hx_run( ::lime::utils::AssetManifest manifest){
            				HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_459_loadLibrary)
HXLINE( 460)				if (::hx::IsNull( manifest )) {
HXLINE( 462)					promise->error(((HX_("Cannot parse asset manifest for library \"",cf,1e,cc,48) + id) + HX_("\"",22,00,00,00)));
HXLINE( 463)					return;
            				}
HXLINE( 466)				 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE( 468)				if (::hx::IsNull( library )) {
HXLINE( 470)					promise->error(((HX_("Cannot open library \"",44,cc,55,e7) + id) + HX_("\"",22,00,00,00)));
            				}
            				else {
HXLINE( 474)					::lime::utils::Assets_obj::libraries->set(id,library);
HXLINE( 475)					library->onChange->add(::lime::utils::Assets_obj::onChange->dispatch_dyn(),null(),null());
HXLINE( 476)					 ::lime::app::Promise_lime_utils_AssetLibrary promise1 = promise;
HXDLIN( 476)					promise1->completeWith(library->load());
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_480_loadLibrary)
HXLINE( 480)				promise->error(((HX_("There is no asset library with an ID of \"",8b,06,e2,9a) + id) + HX_("\"",22,00,00,00)));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 439)			if (::lime::utils::Assets_obj::libraryPaths->exists(id)) {
HXLINE( 441)				path = ::lime::utils::Assets_obj::libraryPaths->get_string(id);
HXLINE( 442)				rootPath = ::haxe::io::Path_obj::directory(path);
            			}
            			else {
HXLINE( 446)				if (::StringTools_obj::endsWith(path,HX_(".bundle",30,4a,b8,4e))) {
HXLINE( 448)					rootPath = path;
HXLINE( 449)					path = (path + HX_("/library.json",2a,a7,07,47));
            				}
            				else {
HXLINE( 453)					rootPath = ::haxe::io::Path_obj::directory(path);
            				}
HXLINE( 455)				path = ::lime::utils::Assets_obj::_hx___cacheBreak(path);
            			}
HXLINE( 458)			::lime::utils::AssetManifest_obj::loadFromFile(path,rootPath)->onComplete( ::Dynamic(new _hx_Closure_2(id,promise)))->onError( ::Dynamic(new _hx_Closure_3(id,promise)));
            		}
HXLINE( 485)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadLibrary,return )

 ::lime::app::Future Assets_obj::loadText(::String id){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_490_loadText)
HXDLIN( 490)		return ::lime::utils::Assets_obj::loadAsset(id,HX_("TEXT",ad,94,ba,37),false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadText,return )

void Assets_obj::registerLibrary(::String name, ::lime::utils::AssetLibrary library){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_494_registerLibrary)
HXLINE( 495)		bool _hx_tmp;
HXDLIN( 495)		if (::hx::IsNotNull( name )) {
HXLINE( 495)			_hx_tmp = (name == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 495)			_hx_tmp = true;
            		}
HXDLIN( 495)		if (_hx_tmp) {
HXLINE( 497)			name = HX_("default",c1,d8,c3,9b);
            		}
HXLINE( 500)		if (::lime::utils::Assets_obj::libraries->exists(name)) {
HXLINE( 502)			if (::hx::IsInstanceEq( ::lime::utils::Assets_obj::libraries->get(name),library )) {
HXLINE( 504)				return;
            			}
            			else {
HXLINE( 508)				::lime::utils::Assets_obj::unloadLibrary(name);
            			}
            		}
HXLINE( 512)		if (::hx::IsNotNull( library )) {
HXLINE( 514)			library->onChange->add(::lime::utils::Assets_obj::library_onChange_dyn(),null(),null());
            		}
HXLINE( 517)		::lime::utils::Assets_obj::libraries->set(name,library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

void Assets_obj::unloadLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_522_unloadLibrary)
HXDLIN( 522)		::lime::utils::Assets_obj::removeLibrary(name,true);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

void Assets_obj::removeLibrary(::String name,::hx::Null< bool >  __o_unload){
            		bool unload = __o_unload.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_526_removeLibrary)
HXLINE( 528)		bool _hx_tmp;
HXDLIN( 528)		if (::hx::IsNotNull( name )) {
HXLINE( 528)			_hx_tmp = (name == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 528)			_hx_tmp = true;
            		}
HXDLIN( 528)		if (_hx_tmp) {
HXLINE( 530)			name = HX_("default",c1,d8,c3,9b);
            		}
HXLINE( 533)		 ::lime::utils::AssetLibrary library = ( ( ::lime::utils::AssetLibrary)(::lime::utils::Assets_obj::libraries->get(name)) );
HXLINE( 535)		if (::hx::IsNotNull( library )) {
HXLINE( 537)			::lime::utils::Assets_obj::cache->clear((name + HX_(":",3a,00,00,00)));
HXLINE( 538)			library->onChange->remove(::lime::utils::Assets_obj::library_onChange_dyn());
HXLINE( 539)			if (unload) {
HXLINE( 541)				library->unload();
            			}
            		}
HXLINE( 545)		::lime::utils::Assets_obj::libraries->remove(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,removeLibrary,(void))

::String Assets_obj::_hx___cacheBreak(::String path){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_565___cacheBreak)
HXDLIN( 565)		return path;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,_hx___cacheBreak,return )

::String Assets_obj::_hx___libraryNotFound(::String name){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_569___libraryNotFound)
HXLINE( 570)		bool _hx_tmp;
HXDLIN( 570)		if (::hx::IsNotNull( name )) {
HXLINE( 570)			_hx_tmp = (name == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 570)			_hx_tmp = true;
            		}
HXDLIN( 570)		if (_hx_tmp) {
HXLINE( 572)			name = HX_("default",c1,d8,c3,9b);
            		}
HXLINE( 575)		bool _hx_tmp1;
HXDLIN( 575)		bool _hx_tmp2;
HXDLIN( 575)		if (::hx::IsNotNull( ::lime::app::Application_obj::current )) {
HXLINE( 575)			_hx_tmp2 = ::hx::IsNotNull( ::lime::app::Application_obj::current->_hx___preloader );
            		}
            		else {
HXLINE( 575)			_hx_tmp2 = false;
            		}
HXDLIN( 575)		if (_hx_tmp2) {
HXLINE( 575)			_hx_tmp1 = !(::lime::app::Application_obj::current->_hx___preloader->complete);
            		}
            		else {
HXLINE( 575)			_hx_tmp1 = false;
            		}
HXDLIN( 575)		if (_hx_tmp1) {
HXLINE( 577)			return ((HX_("There is no asset library named \"",a1,83,5f,51) + name) + HX_("\", or it is not yet preloaded",db,ac,d4,2f));
            		}
            		else {
HXLINE( 581)			return ((HX_("There is no asset library named \"",a1,83,5f,51) + name) + HX_("\"",22,00,00,00));
            		}
HXLINE( 575)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,_hx___libraryNotFound,return )

void Assets_obj::library_onChange(){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_587_library_onChange)
HXLINE( 588)		::lime::utils::Assets_obj::cache->clear(null());
HXLINE( 589)		::lime::utils::Assets_obj::onChange->dispatch();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,library_onChange,(void))


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = ( cache ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isLocal") ) { outValue = isLocal_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { outValue = ( onChange ); return true; }
		if (HX_FIELD_EQ(inName,"getAsset") ) { outValue = getAsset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getImage") ) { outValue = getImage_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { outValue = ( libraries ); return true; }
		if (HX_FIELD_EQ(inName,"loadAsset") ) { outValue = loadAsset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadImage") ) { outValue = loadImage_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasLibrary") ) { outValue = hasLibrary_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bundlePaths") ) { outValue = ( bundlePaths ); return true; }
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryPaths") ) { outValue = ( libraryPaths ); return true; }
		if (HX_FIELD_EQ(inName,"isValidAudio") ) { outValue = isValidAudio_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isValidImage") ) { outValue = isValidImage_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__cacheBreak") ) { outValue = _hx___cacheBreak_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeLibrary") ) { outValue = removeLibrary_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { outValue = getAudioBuffer_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { outValue = loadAudioBuffer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"library_onChange") ) { outValue = library_onChange_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__libraryNotFound") ) { outValue = _hx___libraryNotFound_dyn(); return true; }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast<  ::lime::utils::AssetCache >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=ioValue.Cast<  ::lime::app::_Event_Void_Void >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bundlePaths") ) { bundlePaths=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryPaths") ) { libraryPaths=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Assets_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Assets_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::utils::AssetCache */ ,(void *) &Assets_obj::cache,HX_("cache",42,9a,14,41)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(void *) &Assets_obj::onChange,HX_("onChange",ef,87,1f,97)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Assets_obj::bundlePaths,HX_("bundlePaths",4c,90,3b,70)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Assets_obj::libraries,HX_("libraries",19,50,f8,18)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Assets_obj::libraryPaths,HX_("libraryPaths",33,26,5e,06)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Assets_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::onChange,"onChange");
	HX_MARK_MEMBER_NAME(Assets_obj::bundlePaths,"bundlePaths");
	HX_MARK_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_MARK_MEMBER_NAME(Assets_obj::libraryPaths,"libraryPaths");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Assets_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::onChange,"onChange");
	HX_VISIT_MEMBER_NAME(Assets_obj::bundlePaths,"bundlePaths");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraryPaths,"libraryPaths");
};

#endif

::hx::Class Assets_obj::__mClass;

static ::String Assets_obj_sStaticFields[] = {
	HX_("cache",42,9a,14,41),
	HX_("onChange",ef,87,1f,97),
	HX_("bundlePaths",4c,90,3b,70),
	HX_("libraries",19,50,f8,18),
	HX_("libraryPaths",33,26,5e,06),
	HX_("exists",dc,1d,e0,bf),
	HX_("getAsset",7a,79,10,86),
	HX_("getAudioBuffer",80,41,e3,26),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getFont",85,0d,43,16),
	HX_("getImage",e5,2e,40,1d),
	HX_("getLibrary",05,ad,d1,8e),
	HX_("getPath",5b,95,d4,1c),
	HX_("getText",63,7c,7c,1f),
	HX_("hasLibrary",c1,0e,24,ca),
	HX_("isLocal",21,6d,76,15),
	HX_("isValidAudio",c4,0a,df,47),
	HX_("isValidImage",49,b1,c7,dd),
	HX_("list",5e,1c,b3,47),
	HX_("loadAsset",ea,b5,70,41),
	HX_("loadAudioBuffer",f0,71,7c,e3),
	HX_("loadBytes",65,54,cf,d8),
	HX_("loadFont",15,2f,60,b4),
	HX_("loadImage",55,6b,a0,d8),
	HX_("loadLibrary",75,e5,0d,10),
	HX_("loadText",f3,9d,99,bd),
	HX_("registerLibrary",d8,8a,84,f2),
	HX_("unloadLibrary",bc,5b,48,31),
	HX_("removeLibrary",17,83,2a,18),
	HX_("__cacheBreak",3d,06,38,34),
	HX_("__libraryNotFound",2a,db,69,c9),
	HX_("library_onChange",f3,20,14,c8),
	::String(null())
};

void Assets_obj::__register()
{
	Assets_obj _hx_dummy;
	Assets_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils.Assets",39,6e,7e,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = Assets_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Assets_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Assets_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Assets_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Assets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Assets_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Assets_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_39_boot)
HXDLIN(  39)		cache =  ::lime::utils::AssetCache_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_40_boot)
HXDLIN(  40)		onChange =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_42_boot)
HXDLIN(  42)		bundlePaths =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_43_boot)
HXDLIN(  43)		libraries =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_44_boot)
HXDLIN(  44)		libraryPaths =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace lime
} // end namespace utils
