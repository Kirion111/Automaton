#include <hxcpp.h>

#ifndef INCLUDED_MainView
#include <MainView.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_core_ICompositeInteractiveComponent
#include <haxe/ui/core/ICompositeInteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_CompositeStyleSheet
#include <haxe/ui/styles/CompositeStyleSheet.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ccbfe88b5f57bb1a_11_new,"MainView","new",0x67d70b50,"MainView.new","MainView.hx",11,0x21c1ce20)
HX_DEFINE_STACK_FRAME(_hx_pos_ccbfe88b5f57bb1a_8_new,"MainView","new",0x67d70b50,"MainView.new","MainView.hx",8,0x21c1ce20)
HX_DEFINE_STACK_FRAME(_hx_pos_32fa070b25cf5ef2_762_new,"MainView","new",0x67d70b50,"MainView.new","haxe/ui/macros/ComponentMacros.hx",762,0x34e6fb50)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbfe88b5f57bb1a_17_onMyButton,"MainView","onMyButton",0xda4e65cd,"MainView.onMyButton","MainView.hx",17,0x21c1ce20)
HX_LOCAL_STACK_FRAME(_hx_pos_84cb5a54243b0f84_551_registerBehaviours,"MainView","registerBehaviours",0x5ebc3ae9,"MainView.registerBehaviours","haxe/ui/macros/Macros.hx",551,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_62c4266d3adc9f12_700_cloneComponent,"MainView","cloneComponent",0x3a00b4b0,"MainView.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_84cb5a54243b0f84_521_self,"MainView","self",0x77a0e29c,"MainView.self","haxe/ui/macros/Macros.hx",521,0x27866361)

void MainView_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::MainView,_gthis) HXARGC(1)
            		void _hx_run( ::haxe::ui::events::MouseEvent e){
            			HX_GC_STACKFRAME(&_hx_pos_ccbfe88b5f57bb1a_11_new)
HXLINE(  11)			_gthis->button1->set_text(HX_("Thanks!",98,d0,0d,5d));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_ccbfe88b5f57bb1a_8_new)
HXDLIN(   8)		 ::MainView _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(   9)		super::__construct();
HXLINE(  11)		{
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::Button,c3) HXARGC(1)
            			void _hx_run( ::haxe::ui::events::MouseEvent event){
            				HX_GC_STACKFRAME(&_hx_pos_32fa070b25cf5ef2_762_new)
HXLINE( 763)				 ::haxe::ui::components::Button _hx___this__ = c3;
HXLINE(   6)				_hx___this__->set_text(HX_("Thanks!",98,d0,0d,5d));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 317)			::haxe::ui::Toolkit_obj::styleSheet->parse(HX_("\r\n        .button {\r\n            font-size: 20px;\r\n        }\r\n    ",32,ba,b6,43),HX_("user",4b,92,ad,4d),null());
HXLINE( 894)			 ::haxe::ui::containers::HBox c0 =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXDLIN( 894)			 ::haxe::ui::components::Button c1 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(1137)			c1->set_id(HX_("button1",ff,51,75,ca));
HXDLIN(1137)			c1->set_text(HX_("Click Me!",b1,b9,5a,ab));
HXDLIN(1137)			c1->set_styleString(HX_("color: red;",13,e9,c0,6e));
HXLINE( 952)			c0->addComponent(c1);
HXLINE( 894)			 ::haxe::ui::components::Button c2 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(1137)			c2->set_id(HX_("button2",00,52,75,ca));
HXDLIN(1137)			c2->set_text(HX_("Click Me!",b1,b9,5a,ab));
HXDLIN(1137)			c2->set_styleString(HX_("color: green;",a1,9b,ad,66));
HXLINE( 952)			c0->addComponent(c2);
HXLINE( 894)			 ::haxe::ui::components::Button c3 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(1137)			c3->set_text(HX_("Click Me!",b1,b9,5a,ab));
HXDLIN(1137)			c3->set_styleString(HX_("color: blue;",f8,48,4f,48));
HXLINE( 952)			c0->addComponent(c3);
HXLINE( 345)			this->addComponent(c0);
HXLINE( 790)			c3->registerEvent(HX_("click",48,7c,5e,48), ::Dynamic(new _hx_Closure_0(c3)),null());
HXLINE(1137)			this->set_styleString(HX_("padding: 5px;",55,3e,6f,76));
HXLINE( 371)			this->bindingRoot = true;
HXLINE( 262)			this->button2 = c2;
HXDLIN( 262)			this->button1 = c1;
            		}
HXLINE(  10)		this->button1->set_onClick( ::Dynamic(new _hx_Closure_1(_gthis)));
HXLINE(  15)		{
HXLINE(  15)			::Dynamic c = this->button2;
HXDLIN(  15)			if (::hx::IsNotNull( c )) {
HXLINE(  15)				::haxe::ui::core::IEventDispatcher_obj::registerEvent(c,::haxe::ui::events::MouseEvent_obj::CLICK,this->onMyButton_dyn(),null());
            			}
            			else {
HXLINE(  15)				::haxe::Log_obj::trace(((HX_("WARNING: could not find event dispatcher to register event (",70,e4,41,8d) + HX_("button2",00,52,75,ca)) + HX_(")",29,00,00,00)),::hx::SourceInfo(HX_("src/MainView.hx",35,5b,8f,cb),15,HX_("MainView",5e,63,83,80),HX_("new",60,d0,53,00)));
            			}
            		}
            	}

Dynamic MainView_obj::__CreateEmpty() { return new MainView_obj; }

void *MainView_obj::_hx_vtable = 0;

Dynamic MainView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainView_obj > _hx_result = new MainView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MainView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241810fb) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x0f2dd418;
			}
		} else {
			if (inClassId<=(int)0x1f4df417) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x1f4df417;
			} else {
				return inClassId==(int)0x241810fb;
			}
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x32f63b82) {
				return inClassId==(int)0x2eb1d3e1 || inClassId==(int)0x32f63b82;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933 || inClassId==(int)0x72c347e4;
		}
	}
}

void MainView_obj::onMyButton( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_ccbfe88b5f57bb1a_17_onMyButton)
HXDLIN(  17)		this->button2->set_text(HX_("Thanks!",98,d0,0d,5d));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainView_obj,onMyButton,(void))

void MainView_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_84cb5a54243b0f84_551_registerBehaviours)
HXDLIN( 551)		this->super::registerBehaviours();
            	}


 ::haxe::ui::backend::ComponentBase MainView_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_62c4266d3adc9f12_700_cloneComponent)
HXLINE( 469)		 ::MainView c = ( ( ::MainView)(this->super::cloneComponent()) );
HXLINE( 484)		{
HXLINE( 485)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 485)			if (::hx::IsNull( this->_children )) {
HXLINE( 485)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 485)				_hx_tmp = this->_children;
            			}
HXDLIN( 485)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 485)			if (::hx::IsNull( c->_children )) {
HXLINE( 485)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 485)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 485)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 486)				int _g = 0;
HXDLIN( 486)				::Array< ::Dynamic> _g1;
HXDLIN( 486)				if (::hx::IsNull( this->_children )) {
HXLINE( 486)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 486)					_g1 = this->_children;
            				}
HXDLIN( 486)				while((_g < _g1->length)){
HXLINE( 486)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 486)					_g = (_g + 1);
HXLINE( 487)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 491)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 493)		return c;
            	}


 ::haxe::ui::backend::ComponentBase MainView_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_84cb5a54243b0f84_521_self)
HXDLIN( 521)		return  ::MainView_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< MainView_obj > MainView_obj::__new() {
	::hx::ObjectPtr< MainView_obj > __this = new MainView_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MainView_obj > MainView_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MainView_obj *__this = (MainView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainView_obj), true, "MainView"));
	*(void **)__this = MainView_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MainView_obj::MainView_obj()
{
}

void MainView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainView);
	HX_MARK_MEMBER_NAME(button2,"button2");
	HX_MARK_MEMBER_NAME(button1,"button1");
	 ::haxe::ui::containers::Box_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(button2,"button2");
	HX_VISIT_MEMBER_NAME(button1,"button1");
	 ::haxe::ui::containers::Box_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"button2") ) { return ::hx::Val( button2 ); }
		if (HX_FIELD_EQ(inName,"button1") ) { return ::hx::Val( button1 ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onMyButton") ) { return ::hx::Val( onMyButton_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MainView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"button2") ) { button2=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"button1") ) { button1=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("button2",00,52,75,ca));
	outFields->push(HX_("button1",ff,51,75,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainView_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(MainView_obj,button2),HX_("button2",00,52,75,ca)},
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(MainView_obj,button1),HX_("button1",ff,51,75,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MainView_obj_sStaticStorageInfo = 0;
#endif

static ::String MainView_obj_sMemberFields[] = {
	HX_("onMyButton",bd,62,4b,ee),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("button2",00,52,75,ca),
	HX_("button1",ff,51,75,ca),
	::String(null()) };

::hx::Class MainView_obj::__mClass;

void MainView_obj::__register()
{
	MainView_obj _hx_dummy;
	MainView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MainView",5e,63,83,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

