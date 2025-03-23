#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
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
#ifndef INCLUDED_haxe_ui_tooltips_ToolTip
#include <haxe/ui/tooltips/ToolTip.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ba343bccac091878_7_new,"haxe.ui.tooltips.ToolTip","new",0x61b173e9,"haxe.ui.tooltips.ToolTip.new","haxe/ui/tooltips/ToolTip.hx",7,0x981d1448)
HX_LOCAL_STACK_FRAME(_hx_pos_e9aa94cb32746db5_551_registerBehaviours,"haxe.ui.tooltips.ToolTip","registerBehaviours",0x269f6670,"haxe.ui.tooltips.ToolTip.registerBehaviours","haxe/ui/macros/Macros.hx",551,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_766e39e3e38d89c6_700_cloneComponent,"haxe.ui.tooltips.ToolTip","cloneComponent",0x4a57d0b7,"haxe.ui.tooltips.ToolTip.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_e9aa94cb32746db5_521_self,"haxe.ui.tooltips.ToolTip","self",0x1ce1ffe3,"haxe.ui.tooltips.ToolTip.self","haxe/ui/macros/Macros.hx",521,0x27866361)
namespace haxe{
namespace ui{
namespace tooltips{

void ToolTip_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ba343bccac091878_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic ToolTip_obj::__CreateEmpty() { return new ToolTip_obj; }

void *ToolTip_obj::_hx_vtable = 0;

Dynamic ToolTip_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ToolTip_obj > _hx_result = new ToolTip_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ToolTip_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1cc91ce9) {
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
			return inClassId==(int)0x13d76ae7 || inClassId==(int)0x1cc91ce9;
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

void ToolTip_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_e9aa94cb32746db5_551_registerBehaviours)
HXDLIN( 551)		this->super::registerBehaviours();
            	}


 ::haxe::ui::backend::ComponentBase ToolTip_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_766e39e3e38d89c6_700_cloneComponent)
HXLINE( 469)		 ::haxe::ui::tooltips::ToolTip c = ( ( ::haxe::ui::tooltips::ToolTip)(this->super::cloneComponent()) );
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


 ::haxe::ui::backend::ComponentBase ToolTip_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_e9aa94cb32746db5_521_self)
HXDLIN( 521)		return  ::haxe::ui::tooltips::ToolTip_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< ToolTip_obj > ToolTip_obj::__new() {
	::hx::ObjectPtr< ToolTip_obj > __this = new ToolTip_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ToolTip_obj > ToolTip_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ToolTip_obj *__this = (ToolTip_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ToolTip_obj), true, "haxe.ui.tooltips.ToolTip"));
	*(void **)__this = ToolTip_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ToolTip_obj::ToolTip_obj()
{
}

::hx::Val ToolTip_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ToolTip_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ToolTip_obj_sStaticStorageInfo = 0;
#endif

static ::String ToolTip_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class ToolTip_obj::__mClass;

void ToolTip_obj::__register()
{
	ToolTip_obj _hx_dummy;
	ToolTip_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.tooltips.ToolTip",77,4b,45,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ToolTip_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ToolTip_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ToolTip_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ToolTip_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace tooltips
