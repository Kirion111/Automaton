#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_HaxeUIApp
#include <haxe/ui/HaxeUIApp.h>
#endif
#ifndef INCLUDED_haxe_ui_Preloader
#include <haxe/ui/Preloader.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AppBase
#include <haxe/ui/backend/AppBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AppImpl
#include <haxe/ui/backend/AppImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <haxe/ui/backend/AssetsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Properties
#include <haxe/ui/util/Properties.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0c75ee732cc4286c_11_new,"haxe.ui.HaxeUIApp","new",0x59e0c2c7,"haxe.ui.HaxeUIApp.new","haxe/ui/HaxeUIApp.hx",11,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_24_ready,"haxe.ui.HaxeUIApp","ready",0x73363a8a,"haxe.ui.HaxeUIApp.ready","haxe/ui/HaxeUIApp.hx",24,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_38_init,"haxe.ui.HaxeUIApp","init",0x478262c9,"haxe.ui.HaxeUIApp.init","haxe/ui/HaxeUIApp.hx",38,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_60_onPreloadComplete,"haxe.ui.HaxeUIApp","onPreloadComplete",0xa12aefea,"haxe.ui.HaxeUIApp.onPreloadComplete","haxe/ui/HaxeUIApp.hx",60,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_63_startPreload,"haxe.ui.HaxeUIApp","startPreload",0x7f2a3440,"haxe.ui.HaxeUIApp.startPreload","haxe/ui/HaxeUIApp.hx",63,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_85_handlePreload,"haxe.ui.HaxeUIApp","handlePreload",0xa924ca28,"haxe.ui.HaxeUIApp.handlePreload","haxe/ui/HaxeUIApp.hx",85,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_97_handlePreload,"haxe.ui.HaxeUIApp","handlePreload",0xa924ca28,"haxe.ui.HaxeUIApp.handlePreload","haxe/ui/HaxeUIApp.hx",97,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_104_handlePreload,"haxe.ui.HaxeUIApp","handlePreload",0xa924ca28,"haxe.ui.HaxeUIApp.handlePreload","haxe/ui/HaxeUIApp.hx",104,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_121_get_title,"haxe.ui.HaxeUIApp","get_title",0x63d5ab96,"haxe.ui.HaxeUIApp.get_title","haxe/ui/HaxeUIApp.hx",121,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_123_set_title,"haxe.ui.HaxeUIApp","set_title",0x472697a2,"haxe.ui.HaxeUIApp.set_title","haxe/ui/HaxeUIApp.hx",123,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_129_addComponent,"haxe.ui.HaxeUIApp","addComponent",0xe6e31b15,"haxe.ui.HaxeUIApp.addComponent","haxe/ui/HaxeUIApp.hx",129,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_133_removeComponent,"haxe.ui.HaxeUIApp","removeComponent",0xd314fcc0,"haxe.ui.HaxeUIApp.removeComponent","haxe/ui/HaxeUIApp.hx",133,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_137_setComponentIndex,"haxe.ui.HaxeUIApp","setComponentIndex",0xe7ca8cfe,"haxe.ui.HaxeUIApp.setComponentIndex","haxe/ui/HaxeUIApp.hx",137,0x68089929)
HX_LOCAL_STACK_FRAME(_hx_pos_0c75ee732cc4286c_140_buildPreloadList,"haxe.ui.HaxeUIApp","buildPreloadList",0xf03f5172,"haxe.ui.HaxeUIApp.buildPreloadList","haxe/ui/HaxeUIApp.hx",140,0x68089929)
namespace haxe{
namespace ui{

void HaxeUIApp_obj::__construct( ::Dynamic options){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_11_new)
HXLINE(  35)		this->preloader = null();
HXLINE(  34)		this->preloaderClass = null();
HXLINE(  23)		this->_readyCalled = false;
HXLINE(  16)		super::__construct();
HXLINE(  17)		::haxe::ui::HaxeUIApp_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  18)		this->_options = options;
HXLINE(  19)		::haxe::ui::Toolkit_obj::build();
HXLINE(  20)		this->build();
            	}

Dynamic HaxeUIApp_obj::__CreateEmpty() { return new HaxeUIApp_obj; }

void *HaxeUIApp_obj::_hx_vtable = 0;

Dynamic HaxeUIApp_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HaxeUIApp_obj > _hx_result = new HaxeUIApp_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HaxeUIApp_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0e9feee7) {
		if (inClassId<=(int)0x09f65818) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x09f65818;
		} else {
			return inClassId==(int)0x0e9feee7;
		}
	} else {
		return inClassId==(int)0x47ec5b65;
	}
}

void HaxeUIApp_obj::ready( ::Dynamic onReady, ::Dynamic onEnd){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_24_ready)
HXLINE(  25)		if (this->_readyCalled) {
HXLINE(  26)			::haxe::Log_obj::trace(HX_("WARNING: multiple calls to HaxeUIApp:ready detected, only one needed, skipping additional calls",06,b1,04,b4),::hx::SourceInfo(HX_("haxe/ui/HaxeUIApp.hx",29,99,08,68),26,HX_("haxe.ui.HaxeUIApp",55,53,f0,4f),HX_("ready",63,a0,ba,e6)));
HXLINE(  27)			onReady();
HXLINE(  28)			return;
            		}
HXLINE(  30)		this->_readyCalled = true;
HXLINE(  31)		this->init(onReady,onEnd);
            	}


HX_DEFINE_DYNAMIC_FUNC2(HaxeUIApp_obj,ready,(void))

void HaxeUIApp_obj::init( ::Dynamic onReady, ::Dynamic onEnd){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_38_init)
HXLINE(  39)		this->_onReady = onReady;
HXLINE(  40)		this->_onEnd = onEnd;
HXLINE(  42)		bool _hx_tmp;
HXDLIN(  42)		if (::hx::IsNotNull( ::haxe::ui::Toolkit_obj::get_backendProperties()->getProp(HX_("haxe.ui.theme",b7,e9,0c,13),null()) )) {
HXLINE(  42)			_hx_tmp = (::haxe::ui::Toolkit_obj::get_theme() == HX_("default",c1,d8,c3,9b));
            		}
            		else {
HXLINE(  42)			_hx_tmp = false;
            		}
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  43)			::haxe::ui::Toolkit_obj::set_theme(::haxe::ui::Toolkit_obj::get_backendProperties()->getProp(HX_("haxe.ui.theme",b7,e9,0c,13),null()));
            		}
HXLINE(  46)		if (::hx::IsNull( this->_options )) {
HXLINE(  47)			::haxe::ui::Toolkit_obj::init(this->getToolkitInit());
            		}
            		else {
HXLINE(  49)			::haxe::ui::Toolkit_obj::init(this->_options);
            		}
HXLINE(  52)		if (this->_autoHandlePreload) {
HXLINE(  53)			this->startPreload(this->onPreloadComplete_dyn());
            		}
            		else {
HXLINE(  55)			this->super::init(this->_onReady,this->_onEnd);
            		}
            	}


void HaxeUIApp_obj::onPreloadComplete(){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_60_onPreloadComplete)
HXDLIN(  60)		this->super::init(this->_onReady,this->_onEnd);
            	}


HX_DEFINE_DYNAMIC_FUNC0(HaxeUIApp_obj,onPreloadComplete,(void))

void HaxeUIApp_obj::startPreload( ::Dynamic onComplete){
            	HX_GC_STACKFRAME(&_hx_pos_0c75ee732cc4286c_63_startPreload)
HXLINE(  64)		::Array< ::Dynamic> preloadList = null();
HXLINE(  68)		preloadList = this->buildPreloadList();
HXLINE(  69)		bool _hx_tmp;
HXDLIN(  69)		if (::hx::IsNotNull( preloadList )) {
HXLINE(  69)			_hx_tmp = (preloadList->length > 0);
            		}
            		else {
HXLINE(  69)			_hx_tmp = false;
            		}
HXDLIN(  69)		if (_hx_tmp) {
HXLINE(  70)			if (::hx::IsNull( this->preloaderClass )) {
HXLINE(  71)				this->preloader =  ::haxe::ui::Preloader_obj::__alloc( HX_CTX );
            			}
            			else {
HXLINE(  73)				this->preloader = ( ( ::haxe::ui::Preloader)(::Type_obj::createInstance(this->preloaderClass,::cpp::VirtualArray_obj::__new(0))) );
            			}
HXLINE(  75)			this->preloader->progress(0,preloadList->length);
HXLINE(  76)			this->addComponent(this->preloader);
HXLINE(  77)			this->preloader->validateComponent(null());
            		}
HXLINE(  82)		this->handlePreload(preloadList,onComplete,this->preloader);
            	}


void HaxeUIApp_obj::handlePreload(::Array< ::Dynamic> list, ::Dynamic onComplete, ::haxe::ui::Preloader preloader){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_85_handlePreload)
HXDLIN(  85)		 ::haxe::ui::HaxeUIApp _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  86)		bool _hx_tmp;
HXDLIN(  86)		if (::hx::IsNotNull( list )) {
HXLINE(  86)			_hx_tmp = (list->length == 0);
            		}
            		else {
HXLINE(  86)			_hx_tmp = true;
            		}
HXDLIN(  86)		if (_hx_tmp) {
HXLINE(  87)			if (::hx::IsNotNull( preloader )) {
HXLINE(  88)				preloader->complete();
            			}
HXLINE(  90)			onComplete();
HXLINE(  91)			return;
            		}
HXLINE(  94)		 ::Dynamic item = list->shift();
HXLINE(  95)		::String _hx_switch_0 = ( (::String)(item->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) );
            		if (  (_hx_switch_0==HX_("font",cf,5d,c0,43)) ){
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::HaxeUIApp,_gthis, ::Dynamic,onComplete,::Array< ::Dynamic>,list, ::haxe::ui::Preloader,preloader) HXARGC(1)
            			void _hx_run( ::Dynamic f){
            				HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_97_handlePreload)
HXLINE(  98)				if (::hx::IsNotNull( preloader )) {
HXLINE(  99)					preloader->increment();
            				}
HXLINE( 101)				_gthis->handlePreload(list,onComplete,preloader);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  97)			::haxe::ui::ToolkitAssets_obj::get_instance()->getFont(( (::String)(item->__Field(HX_("resourceId",49,ec,0b,41),::hx::paccDynamic)) ), ::Dynamic(new _hx_Closure_0(_gthis,onComplete,list,preloader)),null());
HXDLIN(  97)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("image",5b,1f,69,bd)) ){
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_1, ::haxe::ui::HaxeUIApp,_gthis, ::Dynamic,onComplete,::Array< ::Dynamic>,list, ::haxe::ui::Preloader,preloader) HXARGC(1)
            			void _hx_run( ::Dynamic i){
            				HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_104_handlePreload)
HXLINE( 105)				if (::hx::IsNotNull( preloader )) {
HXLINE( 106)					preloader->increment();
            				}
HXLINE( 108)				_gthis->handlePreload(list,onComplete,preloader);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 104)			::haxe::ui::ToolkitAssets_obj::get_instance()->getImage(( (::String)(item->__Field(HX_("resourceId",49,ec,0b,41),::hx::paccDynamic)) ), ::Dynamic(new _hx_Closure_1(_gthis,onComplete,list,preloader)),null());
HXDLIN( 104)			goto _hx_goto_5;
            		}
            		/* default */{
HXLINE( 111)			::haxe::Log_obj::trace( ::Dynamic(((HX_("WARNING: unknown type to preload \"",14,b4,93,f2) + item->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) + HX_("\", continuing",fa,5b,57,8a))),::hx::SourceInfo(HX_("haxe/ui/HaxeUIApp.hx",29,99,08,68),111,HX_("haxe.ui.HaxeUIApp",55,53,f0,4f),HX_("handlePreload",01,31,b8,4d)));
HXLINE( 112)			if (::hx::IsNotNull( preloader )) {
HXLINE( 113)				preloader->increment();
            			}
HXLINE( 115)			this->handlePreload(list,onComplete,preloader);
            		}
            		_hx_goto_5:;
            	}


HX_DEFINE_DYNAMIC_FUNC3(HaxeUIApp_obj,handlePreload,(void))

::String HaxeUIApp_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_121_get_title)
HXDLIN( 121)		return ::haxe::ui::core::Screen_obj::get_instance()->get_title();
            	}


HX_DEFINE_DYNAMIC_FUNC0(HaxeUIApp_obj,get_title,return )

::String HaxeUIApp_obj::set_title(::String value){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_123_set_title)
HXLINE( 124)		::haxe::ui::core::Screen_obj::get_instance()->set_title(value);
HXLINE( 125)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HaxeUIApp_obj,set_title,return )

 ::haxe::ui::core::Component HaxeUIApp_obj::addComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_129_addComponent)
HXDLIN( 129)		return ::haxe::ui::core::Screen_obj::get_instance()->addComponent(component);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HaxeUIApp_obj,addComponent,return )

 ::haxe::ui::core::Component HaxeUIApp_obj::removeComponent( ::haxe::ui::core::Component component,::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_133_removeComponent)
HXDLIN( 133)		return ::haxe::ui::core::Screen_obj::get_instance()->removeComponent(component,dispose,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(HaxeUIApp_obj,removeComponent,return )

 ::haxe::ui::core::Component HaxeUIApp_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_137_setComponentIndex)
HXDLIN( 137)		return ::haxe::ui::core::Screen_obj::get_instance()->setComponentIndex(child,index);
            	}


HX_DEFINE_DYNAMIC_FUNC2(HaxeUIApp_obj,setComponentIndex,return )

::Array< ::Dynamic> HaxeUIApp_obj::buildPreloadList(){
            	HX_STACKFRAME(&_hx_pos_0c75ee732cc4286c_140_buildPreloadList)
HXLINE( 141)		::Array< ::Dynamic> list = this->super::buildPreloadList();
HXLINE( 143)		if (::hx::IsNull( list )) {
HXLINE( 144)			list = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 147)		list = list->concat(::haxe::ui::ToolkitAssets_obj::get_instance()->preloadList);
HXLINE( 149)		return list;
            	}


 ::haxe::ui::HaxeUIApp HaxeUIApp_obj::instance;


::hx::ObjectPtr< HaxeUIApp_obj > HaxeUIApp_obj::__new( ::Dynamic options) {
	::hx::ObjectPtr< HaxeUIApp_obj > __this = new HaxeUIApp_obj();
	__this->__construct(options);
	return __this;
}

::hx::ObjectPtr< HaxeUIApp_obj > HaxeUIApp_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic options) {
	HaxeUIApp_obj *__this = (HaxeUIApp_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HaxeUIApp_obj), true, "haxe.ui.HaxeUIApp"));
	*(void **)__this = HaxeUIApp_obj::_hx_vtable;
	__this->__construct(options);
	return __this;
}

HaxeUIApp_obj::HaxeUIApp_obj()
{
}

void HaxeUIApp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HaxeUIApp);
	HX_MARK_MEMBER_NAME(_options,"_options");
	HX_MARK_MEMBER_NAME(_readyCalled,"_readyCalled");
	HX_MARK_MEMBER_NAME(preloaderClass,"preloaderClass");
	HX_MARK_MEMBER_NAME(preloader,"preloader");
	HX_MARK_MEMBER_NAME(_onReady,"_onReady");
	HX_MARK_MEMBER_NAME(_onEnd,"_onEnd");
	 ::haxe::ui::backend::AppBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HaxeUIApp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_options,"_options");
	HX_VISIT_MEMBER_NAME(_readyCalled,"_readyCalled");
	HX_VISIT_MEMBER_NAME(preloaderClass,"preloaderClass");
	HX_VISIT_MEMBER_NAME(preloader,"preloader");
	HX_VISIT_MEMBER_NAME(_onReady,"_onReady");
	HX_VISIT_MEMBER_NAME(_onEnd,"_onEnd");
	 ::haxe::ui::backend::AppBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HaxeUIApp_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ::hx::Val( ready_dyn() ); }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_title() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_onEnd") ) { return ::hx::Val( _onEnd ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_options") ) { return ::hx::Val( _options ); }
		if (HX_FIELD_EQ(inName,"_onReady") ) { return ::hx::Val( _onReady ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preloader") ) { return ::hx::Val( preloader ); }
		if (HX_FIELD_EQ(inName,"get_title") ) { return ::hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return ::hx::Val( set_title_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_readyCalled") ) { return ::hx::Val( _readyCalled ); }
		if (HX_FIELD_EQ(inName,"startPreload") ) { return ::hx::Val( startPreload_dyn() ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handlePreload") ) { return ::hx::Val( handlePreload_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preloaderClass") ) { return ::hx::Val( preloaderClass ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"buildPreloadList") ) { return ::hx::Val( buildPreloadList_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onPreloadComplete") ) { return ::hx::Val( onPreloadComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return ::hx::Val( setComponentIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HaxeUIApp_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
	}
	return false;
}

::hx::Val HaxeUIApp_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_title(inValue.Cast< ::String >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_onEnd") ) { _onEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_options") ) { _options=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onReady") ) { _onReady=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preloader") ) { preloader=inValue.Cast<  ::haxe::ui::Preloader >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_readyCalled") ) { _readyCalled=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preloaderClass") ) { preloaderClass=inValue.Cast< ::hx::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HaxeUIApp_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::HaxeUIApp >(); return true; }
	}
	return false;
}

void HaxeUIApp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_options",df,8c,b6,19));
	outFields->push(HX_("_readyCalled",41,03,c6,7e));
	outFields->push(HX_("preloaderClass",e2,17,8c,07));
	outFields->push(HX_("preloader",76,e4,7b,82));
	outFields->push(HX_("title",98,15,3b,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HaxeUIApp_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HaxeUIApp_obj,_options),HX_("_options",df,8c,b6,19)},
	{::hx::fsBool,(int)offsetof(HaxeUIApp_obj,_readyCalled),HX_("_readyCalled",41,03,c6,7e)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(HaxeUIApp_obj,preloaderClass),HX_("preloaderClass",e2,17,8c,07)},
	{::hx::fsObject /*  ::haxe::ui::Preloader */ ,(int)offsetof(HaxeUIApp_obj,preloader),HX_("preloader",76,e4,7b,82)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HaxeUIApp_obj,_onReady),HX_("_onReady",45,98,b0,b6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HaxeUIApp_obj,_onEnd),HX_("_onEnd",3d,df,4b,2e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo HaxeUIApp_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::HaxeUIApp */ ,(void *) &HaxeUIApp_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String HaxeUIApp_obj_sMemberFields[] = {
	HX_("_options",df,8c,b6,19),
	HX_("_readyCalled",41,03,c6,7e),
	HX_("ready",63,a0,ba,e6),
	HX_("preloaderClass",e2,17,8c,07),
	HX_("preloader",76,e4,7b,82),
	HX_("_onReady",45,98,b0,b6),
	HX_("_onEnd",3d,df,4b,2e),
	HX_("init",10,3b,bb,45),
	HX_("onPreloadComplete",43,37,5d,5c),
	HX_("startPreload",87,2b,ef,a6),
	HX_("handlePreload",01,31,b8,4d),
	HX_("get_title",ef,71,e4,53),
	HX_("set_title",fb,5d,35,37),
	HX_("addComponent",5c,12,a8,0e),
	HX_("removeComponent",d9,8b,72,50),
	HX_("setComponentIndex",57,d4,fc,a2),
	HX_("buildPreloadList",39,f8,be,24),
	::String(null()) };

static void HaxeUIApp_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxeUIApp_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HaxeUIApp_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxeUIApp_obj::instance,"instance");
};

#endif

::hx::Class HaxeUIApp_obj::__mClass;

static ::String HaxeUIApp_obj_sStaticFields[] = {
	HX_("instance",95,1f,e1,59),
	::String(null())
};

void HaxeUIApp_obj::__register()
{
	HaxeUIApp_obj _hx_dummy;
	HaxeUIApp_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.HaxeUIApp",55,53,f0,4f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HaxeUIApp_obj::__GetStatic;
	__mClass->mSetStaticField = &HaxeUIApp_obj::__SetStatic;
	__mClass->mMarkFunc = HaxeUIApp_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HaxeUIApp_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HaxeUIApp_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HaxeUIApp_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HaxeUIApp_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HaxeUIApp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HaxeUIApp_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
