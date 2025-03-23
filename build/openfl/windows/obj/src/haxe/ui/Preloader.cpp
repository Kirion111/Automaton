#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_Preloader
#include <haxe/ui/Preloader.h>
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
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_186b1b74991ba353_13_new,"haxe.ui.Preloader","new",0xd0b111f6,"haxe.ui.Preloader.new","haxe/ui/Preloader.hx",13,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_21_createChildren,"haxe.ui.Preloader","createChildren",0xe6673285,"haxe.ui.Preloader.createChildren","haxe/ui/Preloader.hx",21,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_31_validateComponentLayout,"haxe.ui.Preloader","validateComponentLayout",0x0689dfe7,"haxe.ui.Preloader.validateComponentLayout","haxe/ui/Preloader.hx",31,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_42_progress,"haxe.ui.Preloader","progress",0x70aa3657,"haxe.ui.Preloader.progress","haxe/ui/Preloader.hx",42,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_59_increment,"haxe.ui.Preloader","increment",0x76d69c45,"haxe.ui.Preloader.increment","haxe/ui/Preloader.hx",59,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_186b1b74991ba353_63_complete,"haxe.ui.Preloader","complete",0x6a473f63,"haxe.ui.Preloader.complete","haxe/ui/Preloader.hx",63,0xe36684da)
HX_LOCAL_STACK_FRAME(_hx_pos_3272413211a8f5fe_551_registerBehaviours,"haxe.ui.Preloader","registerBehaviours",0x45539f03,"haxe.ui.Preloader.registerBehaviours","haxe/ui/macros/Macros.hx",551,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_7d3e1c8290b31e6a_700_cloneComponent,"haxe.ui.Preloader","cloneComponent",0x4a1983ca,"haxe.ui.Preloader.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_3272413211a8f5fe_521_self,"haxe.ui.Preloader","self",0xcd8cad36,"haxe.ui.Preloader.self","haxe/ui/macros/Macros.hx",521,0x27866361)
namespace haxe{
namespace ui{

void Preloader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_13_new)
HXLINE(  14)		super::__construct();
HXLINE(  15)		this->set_id(HX_("preloader",76,e4,7b,82));
HXLINE(  16)		this->set_styleString(HX_("width:100%;height:100%;",87,37,23,16));
HXLINE(  17)		this->set_percentWidth(this->set_percentHeight(100));
HXLINE(  18)		this->set_styleNames(HX_("default-background",3a,3b,23,a8));
            	}

Dynamic Preloader_obj::__CreateEmpty() { return new Preloader_obj; }

void *Preloader_obj::_hx_vtable = 0;

Dynamic Preloader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Preloader_obj > _hx_result = new Preloader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Preloader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13d76ae7) {
		if (inClassId<=(int)0x0d718cdc) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x0d718cdc;
			}
		} else {
			return inClassId==(int)0x0f2dd418 || inClassId==(int)0x13d76ae7;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x241810fb) {
				return inClassId==(int)0x1f4df417 || inClassId==(int)0x241810fb;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933 || inClassId==(int)0x72c347e4;
		}
	}
}

void Preloader_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_21_createChildren)
            	}


bool Preloader_obj::validateComponentLayout(){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_31_validateComponentLayout)
HXLINE(  32)		bool b = this->super::validateComponentLayout();
HXLINE(  33)		bool _hx_tmp;
HXDLIN(  33)		if ((this->get_actualComponentWidth() > 0)) {
HXLINE(  33)			_hx_tmp = (this->get_actualComponentHeight() > 0);
            		}
            		else {
HXLINE(  33)			_hx_tmp = false;
            		}
HXLINE(  37)		return b;
            	}


void Preloader_obj::progress(int current,int max){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_42_progress)
HXLINE(  43)		this->_current = current;
HXLINE(  44)		this->_max = max;
HXLINE(  46)		if ((current > 0)) {
HXLINE(  47)			 ::haxe::ui::components::Label label = ( ( ::haxe::ui::components::Label)(this->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),null(),null())) );
HXLINE(  48)			if (::hx::IsNotNull( label )) {
HXLINE(  49)				::String text = label->get_text();
HXLINE(  50)				if (::StringTools_obj::endsWith(text,HX_("....",80,e0,8a,1e))) {
HXLINE(  51)					text = HX_("Loading",5c,f6,43,d6);
            				}
HXLINE(  53)				label->set_text(text);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Preloader_obj,progress,(void))

void Preloader_obj::increment(){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_59_increment)
HXDLIN(  59)		this->progress((this->_current + 1),this->_max);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,increment,(void))

void Preloader_obj::complete(){
            	HX_STACKFRAME(&_hx_pos_186b1b74991ba353_63_complete)
HXDLIN(  63)		::haxe::ui::core::Screen_obj::get_instance()->removeComponent(::hx::ObjectPtr<OBJ_>(this),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,complete,(void))

void Preloader_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_3272413211a8f5fe_551_registerBehaviours)
HXDLIN( 551)		this->super::registerBehaviours();
            	}


 ::haxe::ui::backend::ComponentBase Preloader_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_7d3e1c8290b31e6a_700_cloneComponent)
HXLINE( 469)		 ::haxe::ui::Preloader c = ( ( ::haxe::ui::Preloader)(this->super::cloneComponent()) );
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


 ::haxe::ui::backend::ComponentBase Preloader_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_3272413211a8f5fe_521_self)
HXDLIN( 521)		return  ::haxe::ui::Preloader_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Preloader_obj > Preloader_obj::__new() {
	::hx::ObjectPtr< Preloader_obj > __this = new Preloader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Preloader_obj > Preloader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Preloader_obj *__this = (Preloader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Preloader_obj), true, "haxe.ui.Preloader"));
	*(void **)__this = Preloader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Preloader_obj::Preloader_obj()
{
}

::hx::Val Preloader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_max") ) { return ::hx::Val( _max ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { return ::hx::Val( _current ); }
		if (HX_FIELD_EQ(inName,"progress") ) { return ::hx::Val( progress_dyn() ); }
		if (HX_FIELD_EQ(inName,"complete") ) { return ::hx::Val( complete_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"increment") ) { return ::hx::Val( increment_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createChildren") ) { return ::hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"validateComponentLayout") ) { return ::hx::Val( validateComponentLayout_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Preloader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_max") ) { _max=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Preloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_current",ba,f5,9b,05));
	outFields->push(HX_("_max",a5,4f,1e,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Preloader_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Preloader_obj,_current),HX_("_current",ba,f5,9b,05)},
	{::hx::fsInt,(int)offsetof(Preloader_obj,_max),HX_("_max",a5,4f,1e,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Preloader_obj_sStaticStorageInfo = 0;
#endif

static ::String Preloader_obj_sMemberFields[] = {
	HX_("createChildren",5b,98,a4,c2),
	HX_("validateComponentLayout",51,0f,38,5a),
	HX_("_current",ba,f5,9b,05),
	HX_("_max",a5,4f,1e,3f),
	HX_("progress",ad,f7,2a,86),
	HX_("increment",2f,06,ff,31),
	HX_("complete",b9,00,c8,7f),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Preloader_obj::__mClass;

void Preloader_obj::__register()
{
	Preloader_obj _hx_dummy;
	Preloader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.Preloader",04,9f,9f,72);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Preloader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Preloader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Preloader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Preloader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
