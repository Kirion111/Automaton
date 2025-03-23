#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <haxe/ui/backend/AssetsImpl.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
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
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_22d568b119f3373b_14_new,"haxe.ui.backend.AssetsImpl","new",0xd46da341,"haxe.ui.backend.AssetsImpl.new","haxe/ui/backend/AssetsImpl.hx",14,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_15_getTextDelegate,"haxe.ui.backend.AssetsImpl","getTextDelegate",0xfc2feb29,"haxe.ui.backend.AssetsImpl.getTextDelegate","haxe/ui/backend/AssetsImpl.hx",15,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_25_getImageInternal,"haxe.ui.backend.AssetsImpl","getImageInternal",0x8b3a73c1,"haxe.ui.backend.AssetsImpl.getImageInternal","haxe/ui/backend/AssetsImpl.hx",25,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_40_getImageInternal,"haxe.ui.backend.AssetsImpl","getImageInternal",0x8b3a73c1,"haxe.ui.backend.AssetsImpl.getImageInternal","haxe/ui/backend/AssetsImpl.hx",40,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_75_getImageFromHaxeResource,"haxe.ui.backend.AssetsImpl","getImageFromHaxeResource",0x481a7c22,"haxe.ui.backend.AssetsImpl.getImageFromHaxeResource","haxe/ui/backend/AssetsImpl.hx",75,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_54_getImageFromHaxeResource,"haxe.ui.backend.AssetsImpl","getImageFromHaxeResource",0x481a7c22,"haxe.ui.backend.AssetsImpl.getImageFromHaxeResource","haxe/ui/backend/AssetsImpl.hx",54,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_83_imageFromBytes,"haxe.ui.backend.AssetsImpl","imageFromBytes",0x721a3685,"haxe.ui.backend.AssetsImpl.imageFromBytes","haxe/ui/backend/AssetsImpl.hx",83,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_97_imageFromBytes,"haxe.ui.backend.AssetsImpl","imageFromBytes",0x721a3685,"haxe.ui.backend.AssetsImpl.imageFromBytes","haxe/ui/backend/AssetsImpl.hx",97,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_79_imageFromBytes,"haxe.ui.backend.AssetsImpl","imageFromBytes",0x721a3685,"haxe.ui.backend.AssetsImpl.imageFromBytes","haxe/ui/backend/AssetsImpl.hx",79,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_105_getFontInternal,"haxe.ui.backend.AssetsImpl","getFontInternal",0xb7e6de43,"haxe.ui.backend.AssetsImpl.getFontInternal","haxe/ui/backend/AssetsImpl.hx",105,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_114_getFontInternal,"haxe.ui.backend.AssetsImpl","getFontInternal",0xb7e6de43,"haxe.ui.backend.AssetsImpl.getFontInternal","haxe/ui/backend/AssetsImpl.hx",114,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_129_getFontFromHaxeResource,"haxe.ui.backend.AssetsImpl","getFontFromHaxeResource",0x14d838a4,"haxe.ui.backend.AssetsImpl.getFontFromHaxeResource","haxe/ui/backend/AssetsImpl.hx",129,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_183_imageInfoFromImageData,"haxe.ui.backend.AssetsImpl","imageInfoFromImageData",0x2102daf1,"haxe.ui.backend.AssetsImpl.imageInfoFromImageData","haxe/ui/backend/AssetsImpl.hx",183,0x4811180e)
HX_LOCAL_STACK_FRAME(_hx_pos_22d568b119f3373b_195_isEmbeddedFont,"haxe.ui.backend.AssetsImpl","isEmbeddedFont",0x881cd642,"haxe.ui.backend.AssetsImpl.isEmbeddedFont","haxe/ui/backend/AssetsImpl.hx",195,0x4811180e)
namespace haxe{
namespace ui{
namespace backend{

void AssetsImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_14_new)
HXDLIN(  14)		super::__construct();
            	}

Dynamic AssetsImpl_obj::__CreateEmpty() { return new AssetsImpl_obj; }

void *AssetsImpl_obj::_hx_vtable = 0;

Dynamic AssetsImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetsImpl_obj > _hx_result = new AssetsImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetsImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7f0c8145) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7f0c8145;
	} else {
		return inClassId==(int)0x7ff6ca06;
	}
}

::String AssetsImpl_obj::getTextDelegate(::String resourceId){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_15_getTextDelegate)
HXLINE(  16)		if ((::openfl::utils::Assets_obj::exists(resourceId,null()) == true)) {
HXLINE(  17)			return ::openfl::utils::Assets_obj::getText(resourceId);
            		}
            		else {
HXLINE(  18)			if ((::haxe::Resource_obj::listNames()->indexOf(resourceId,null()) != -1)) {
HXLINE(  19)				return ::haxe::Resource_obj::getString(resourceId);
            			}
            		}
HXLINE(  21)		return null();
            	}


void AssetsImpl_obj::getImageInternal(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_25_getImageInternal)
HXDLIN(  25)		if ((::openfl::utils::Assets_obj::exists(resourceId,null()) == true)) {
HXLINE(  26)			if ((::haxe::io::Path_obj::extension(resourceId).toLowerCase() == HX_("svg",64,aa,57,00))) {
HXLINE(  37)				::haxe::Log_obj::trace(HX_("WARNING: SVG not supported",e3,8b,36,33),::hx::SourceInfo(HX_("haxe/ui/backend/AssetsImpl.hx",0e,18,11,48),37,HX_("haxe.ui.backend.AssetsImpl",cf,ee,b0,8f),HX_("getImageInternal",42,3f,39,72)));
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            				void _hx_run( ::openfl::display::BitmapData bmpData){
            					HX_STACKFRAME(&_hx_pos_22d568b119f3373b_40_getImageInternal)
HXLINE(  41)					 ::Dynamic imageInfo =  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("width",06,b6,62,ca),bmpData->width)
            						->setFixed(1,HX_("height",e7,07,4c,02),bmpData->height)
            						->setFixed(2,HX_("data",2a,56,63,42),bmpData));
HXLINE(  46)					callback(imageInfo);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  40)				::openfl::utils::Assets_obj::loadBitmapData(resourceId,null())->onComplete( ::Dynamic(new _hx_Closure_0(callback)));
            			}
            		}
            		else {
HXLINE(  50)			callback(null());
            		}
            	}


void AssetsImpl_obj::getImageFromHaxeResource(::String resourceId, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,resourceId, ::Dynamic,callback) HXARGC(1)
            		void _hx_run( ::Dynamic imageInfo){
            			HX_STACKFRAME(&_hx_pos_22d568b119f3373b_75_getImageFromHaxeResource)
HXLINE(  75)			callback(resourceId,imageInfo);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_54_getImageFromHaxeResource)
HXLINE(  55)		 ::Dynamic imageInfo = null();
HXLINE(  56)		if ((::haxe::io::Path_obj::extension(resourceId).toLowerCase() == HX_("svg",64,aa,57,00))) {
HXLINE(  66)			::haxe::Log_obj::trace(HX_("WARNING: SVG not supported",e3,8b,36,33),::hx::SourceInfo(HX_("haxe/ui/backend/AssetsImpl.hx",0e,18,11,48),66,HX_("haxe.ui.backend.AssetsImpl",cf,ee,b0,8f),HX_("getImageFromHaxeResource",a3,30,02,17)));
HXLINE(  69)			callback(resourceId,imageInfo);
HXLINE(  70)			return;
            		}
HXLINE(  73)		 ::haxe::io::Bytes bytes = ::haxe::Resource_obj::getBytes(resourceId);
HXLINE(  74)		this->imageFromBytes(bytes, ::Dynamic(new _hx_Closure_0(resourceId,callback)));
            	}


void AssetsImpl_obj::imageFromBytes( ::haxe::io::Bytes bytes, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::openfl::display::Loader,loader,::Array< ::Dynamic>,onCompleteEvent, ::Dynamic,callback) HXARGC(1)
            		void _hx_run( ::openfl::events::Event e){
            			HX_GC_STACKFRAME(&_hx_pos_22d568b119f3373b_83_imageFromBytes)
HXLINE(  84)			if (::hx::IsNotNull( loader->content )) {
HXLINE(  85)				 ::openfl::display::BitmapData bmpData = ::hx::TCast<  ::openfl::display::Bitmap >::cast(loader->content)->get_bitmapData();
HXLINE(  86)				 ::Dynamic imageInfo =  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("width",06,b6,62,ca),bmpData->width)
            					->setFixed(1,HX_("height",e7,07,4c,02),bmpData->height)
            					->setFixed(2,HX_("data",2a,56,63,42),bmpData));
HXLINE(  92)				callback(imageInfo);
            			}
HXLINE(  94)			loader->contentLoaderInfo->removeEventListener(HX_("complete",b9,00,c8,7f),onCompleteEvent->__get(0),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::openfl::display::Loader,loader,::Array< ::Dynamic>,onCompleteEvent, ::Dynamic,callback) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_22d568b119f3373b_97_imageFromBytes)
HXLINE(  98)			::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("haxe/ui/backend/AssetsImpl.hx",0e,18,11,48),98,HX_("haxe.ui.backend.AssetsImpl",cf,ee,b0,8f),HX_("imageFromBytes",c6,6f,67,40)));
HXLINE(  99)			callback(null());
HXLINE( 100)			loader->contentLoaderInfo->removeEventListener(HX_("complete",b9,00,c8,7f),onCompleteEvent->__get(0),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_22d568b119f3373b_79_imageFromBytes)
HXLINE(  80)		 ::openfl::utils::ByteArrayData ba = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(bytes);
HXLINE(  81)		 ::openfl::display::Loader loader =  ::openfl::display::Loader_obj::__alloc( HX_CTX );
HXLINE(  82)		::Array< ::Dynamic> onCompleteEvent = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE(  83)		onCompleteEvent[0] =  ::Dynamic(new _hx_Closure_0(loader,onCompleteEvent,callback));
HXLINE(  96)		loader->contentLoaderInfo->addEventListener(HX_("complete",b9,00,c8,7f),onCompleteEvent->__get(0),false,0,false);
HXLINE(  97)		loader->contentLoaderInfo->addEventListener(HX_("ioError",02,fe,41,76), ::Dynamic(new _hx_Closure_1(loader,onCompleteEvent,callback)),false,0,true);
HXLINE( 102)		loader->loadBytes(ba,null());
            	}


void AssetsImpl_obj::getFontInternal(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_105_getFontInternal)
HXLINE( 106)		 ::Dynamic fontInfo = null();
HXLINE( 107)		bool _hx_tmp;
HXDLIN( 107)		bool _hx_tmp1;
HXDLIN( 107)		if ((resourceId != HX_("_sans",32,a0,5e,ff))) {
HXLINE( 107)			_hx_tmp1 = (resourceId != HX_("_serif",be,66,15,76));
            		}
            		else {
HXLINE( 107)			_hx_tmp1 = false;
            		}
HXDLIN( 107)		if (_hx_tmp1) {
HXLINE( 107)			_hx_tmp = (resourceId != HX_("_typewriter",0c,5e,52,94));
            		}
            		else {
HXLINE( 107)			_hx_tmp = false;
            		}
HXDLIN( 107)		if ((_hx_tmp == true)) {
HXLINE( 108)			if (::openfl::utils::Assets_obj::exists(resourceId,null())) {
HXLINE( 109)				fontInfo =  ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("data",2a,56,63,42),::openfl::utils::Assets_obj::getFont(resourceId,null())->name));
            			}
            			else {
HXLINE( 112)				if ((::haxe::Resource_obj::listNames()->indexOf(resourceId,null()) != -1)) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(2)
            					void _hx_run(::String r, ::Dynamic info){
            						HX_STACKFRAME(&_hx_pos_22d568b119f3373b_114_getFontInternal)
HXLINE( 114)						callback(info);
            					}
            					HX_END_LOCAL_FUNC2((void))

HXLINE( 113)					this->getFontFromHaxeResource(resourceId, ::Dynamic(new _hx_Closure_0(callback)));
            				}
            				else {
HXLINE( 117)					fontInfo =  ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("data",2a,56,63,42),resourceId));
            				}
            			}
            		}
            		else {
HXLINE( 122)			fontInfo =  ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("data",2a,56,63,42),resourceId));
            		}
HXLINE( 126)		callback(fontInfo);
            	}


void AssetsImpl_obj::getFontFromHaxeResource(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_129_getFontFromHaxeResource)
HXLINE( 130)		 ::haxe::io::Bytes bytes = ::haxe::Resource_obj::getBytes(resourceId);
HXLINE( 131)		if (::hx::IsNull( bytes )) {
HXLINE( 132)			callback(resourceId,null());
HXLINE( 133)			return;
            		}
HXLINE( 142)		 ::openfl::text::Font font = ::openfl::text::Font_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(bytes));
HXLINE( 143)		::openfl::text::Font_obj::registerFont(font);
HXLINE( 144)		 ::Dynamic fontInfo =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("data",2a,56,63,42),font->name));
HXLINE( 147)		callback(resourceId,fontInfo);
            	}


 ::Dynamic AssetsImpl_obj::imageInfoFromImageData( ::openfl::display::BitmapData imageData){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_183_imageInfoFromImageData)
HXDLIN( 183)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("width",06,b6,62,ca),imageData->width)
            			->setFixed(1,HX_("height",e7,07,4c,02),imageData->height)
            			->setFixed(2,HX_("data",2a,56,63,42),imageData));
            	}


bool AssetsImpl_obj::isEmbeddedFont(::String name){
            	HX_STACKFRAME(&_hx_pos_22d568b119f3373b_195_isEmbeddedFont)
HXDLIN( 195)		bool _hx_tmp;
HXDLIN( 195)		if ((name != HX_("_sans",32,a0,5e,ff))) {
HXDLIN( 195)			_hx_tmp = (name != HX_("_serif",be,66,15,76));
            		}
            		else {
HXDLIN( 195)			_hx_tmp = false;
            		}
HXDLIN( 195)		if (_hx_tmp) {
HXDLIN( 195)			return (name != HX_("_typewriter",0c,5e,52,94));
            		}
            		else {
HXDLIN( 195)			return false;
            		}
HXDLIN( 195)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetsImpl_obj,isEmbeddedFont,return )


::hx::ObjectPtr< AssetsImpl_obj > AssetsImpl_obj::__new() {
	::hx::ObjectPtr< AssetsImpl_obj > __this = new AssetsImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AssetsImpl_obj > AssetsImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AssetsImpl_obj *__this = (AssetsImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetsImpl_obj), false, "haxe.ui.backend.AssetsImpl"));
	*(void **)__this = AssetsImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetsImpl_obj::AssetsImpl_obj()
{
}

::hx::Val AssetsImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"imageFromBytes") ) { return ::hx::Val( imageFromBytes_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextDelegate") ) { return ::hx::Val( getTextDelegate_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFontInternal") ) { return ::hx::Val( getFontInternal_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getImageInternal") ) { return ::hx::Val( getImageInternal_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"imageInfoFromImageData") ) { return ::hx::Val( imageInfoFromImageData_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFontFromHaxeResource") ) { return ::hx::Val( getFontFromHaxeResource_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getImageFromHaxeResource") ) { return ::hx::Val( getImageFromHaxeResource_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetsImpl_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"isEmbeddedFont") ) { outValue = isEmbeddedFont_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AssetsImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AssetsImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetsImpl_obj_sMemberFields[] = {
	HX_("getTextDelegate",c8,ca,74,b1),
	HX_("getImageInternal",42,3f,39,72),
	HX_("getImageFromHaxeResource",a3,30,02,17),
	HX_("imageFromBytes",c6,6f,67,40),
	HX_("getFontInternal",e2,bd,2b,6d),
	HX_("getFontFromHaxeResource",43,4f,84,fc),
	HX_("imageInfoFromImageData",32,bd,fc,d3),
	::String(null()) };

::hx::Class AssetsImpl_obj::__mClass;

static ::String AssetsImpl_obj_sStaticFields[] = {
	HX_("isEmbeddedFont",83,0f,6a,56),
	::String(null())
};

void AssetsImpl_obj::__register()
{
	AssetsImpl_obj _hx_dummy;
	AssetsImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.AssetsImpl",cf,ee,b0,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetsImpl_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AssetsImpl_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AssetsImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AssetsImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetsImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetsImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
