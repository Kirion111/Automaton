#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_haxe_ui_validators_IValidator
#include <haxe/ui/validators/IValidator.h>
#endif
#ifndef INCLUDED_haxe_ui_validators__Validators_ValidatorsImpl
#include <haxe/ui/validators/_Validators/ValidatorsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_validators__Validators_ValidatorsIterator
#include <haxe/ui/validators/_Validators/ValidatorsIterator.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7d5df8f7cdeb1b22_22_new,"haxe.ui.validators._Validators.ValidatorsImpl","new",0x5fa6799c,"haxe.ui.validators._Validators.ValidatorsImpl.new","haxe/ui/validators/Validators.hx",22,0x2c6e0b21)
HX_LOCAL_STACK_FRAME(_hx_pos_7d5df8f7cdeb1b22_31_get_length,"haxe.ui.validators._Validators.ValidatorsImpl","get_length",0x53a63af3,"haxe.ui.validators._Validators.ValidatorsImpl.get_length","haxe/ui/validators/Validators.hx",31,0x2c6e0b21)
HX_LOCAL_STACK_FRAME(_hx_pos_7d5df8f7cdeb1b22_39_setup,"haxe.ui.validators._Validators.ValidatorsImpl","setup",0x526c1eb9,"haxe.ui.validators._Validators.ValidatorsImpl.setup","haxe/ui/validators/Validators.hx",39,0x2c6e0b21)
HX_LOCAL_STACK_FRAME(_hx_pos_7d5df8f7cdeb1b22_50_get_areValid,"haxe.ui.validators._Validators.ValidatorsImpl","get_areValid",0x6dbb7955,"haxe.ui.validators._Validators.ValidatorsImpl.get_areValid","haxe/ui/validators/Validators.hx",50,0x2c6e0b21)
HX_LOCAL_STACK_FRAME(_hx_pos_7d5df8f7cdeb1b22_53_validate,"haxe.ui.validators._Validators.ValidatorsImpl","validate",0x29b62dda,"haxe.ui.validators._Validators.ValidatorsImpl.validate","haxe/ui/validators/Validators.hx",53,0x2c6e0b21)
HX_LOCAL_STACK_FRAME(_hx_pos_7d5df8f7cdeb1b22_68_iterator,"haxe.ui.validators._Validators.ValidatorsImpl","iterator",0xb86ca732,"haxe.ui.validators._Validators.ValidatorsImpl.iterator","haxe/ui/validators/Validators.hx",68,0x2c6e0b21)
namespace haxe{
namespace ui{
namespace validators{
namespace _Validators{

void ValidatorsImpl_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_7d5df8f7cdeb1b22_22_new)
HXLINE(  47)		this->_areValid = true;
HXLINE(  23)		this->list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  27)		this->component = component;
            	}

Dynamic ValidatorsImpl_obj::__CreateEmpty() { return new ValidatorsImpl_obj; }

void *ValidatorsImpl_obj::_hx_vtable = 0;

Dynamic ValidatorsImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ValidatorsImpl_obj > _hx_result = new ValidatorsImpl_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ValidatorsImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c798dde;
}

int ValidatorsImpl_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_7d5df8f7cdeb1b22_31_get_length)
HXLINE(  32)		if (::hx::IsNull( this->list )) {
HXLINE(  33)			return 0;
            		}
HXLINE(  35)		return this->list->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidatorsImpl_obj,get_length,return )

void ValidatorsImpl_obj::setup(){
            	HX_STACKFRAME(&_hx_pos_7d5df8f7cdeb1b22_39_setup)
HXDLIN(  39)		int _g = 0;
HXDLIN(  39)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  39)		while((_g < _g1->length)){
HXDLIN(  39)			::Dynamic item = _g1->__get(_g);
HXDLIN(  39)			_g = (_g + 1);
HXLINE(  40)			if (::hx::IsNull( item )) {
HXLINE(  41)				continue;
            			}
HXLINE(  43)			::haxe::ui::validators::IValidator_obj::setup(item,this->component);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidatorsImpl_obj,setup,(void))

bool ValidatorsImpl_obj::get_areValid(){
            	HX_STACKFRAME(&_hx_pos_7d5df8f7cdeb1b22_50_get_areValid)
HXDLIN(  50)		return this->_areValid;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidatorsImpl_obj,get_areValid,return )

bool ValidatorsImpl_obj::validate(){
            	HX_STACKFRAME(&_hx_pos_7d5df8f7cdeb1b22_53_validate)
HXLINE(  54)		this->_areValid = true;
HXLINE(  55)		{
HXLINE(  55)			int _g = 0;
HXDLIN(  55)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  55)			while((_g < _g1->length)){
HXLINE(  55)				::Dynamic item = _g1->__get(_g);
HXDLIN(  55)				_g = (_g + 1);
HXLINE(  56)				if (::hx::IsNull( item )) {
HXLINE(  57)					continue;
            				}
HXLINE(  59)				 ::Dynamic r = ::haxe::ui::validators::IValidator_obj::validate(item,this->component);
HXLINE(  60)				bool _hx_tmp;
HXDLIN(  60)				if (::hx::IsNotNull( r )) {
HXLINE(  60)					_hx_tmp = ::hx::IsEq( r,false );
            				}
            				else {
HXLINE(  60)					_hx_tmp = false;
            				}
HXDLIN(  60)				if (_hx_tmp) {
HXLINE(  61)					this->_areValid = false;
            				}
            			}
            		}
HXLINE(  64)		return this->_areValid;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidatorsImpl_obj,validate,return )

 ::haxe::ui::validators::_Validators::ValidatorsIterator ValidatorsImpl_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_7d5df8f7cdeb1b22_68_iterator)
HXDLIN(  68)		return  ::haxe::ui::validators::_Validators::ValidatorsIterator_obj::__alloc( HX_CTX ,this->list);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidatorsImpl_obj,iterator,return )


::hx::ObjectPtr< ValidatorsImpl_obj > ValidatorsImpl_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ValidatorsImpl_obj > __this = new ValidatorsImpl_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ValidatorsImpl_obj > ValidatorsImpl_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ValidatorsImpl_obj *__this = (ValidatorsImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ValidatorsImpl_obj), true, "haxe.ui.validators._Validators.ValidatorsImpl"));
	*(void **)__this = ValidatorsImpl_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ValidatorsImpl_obj::ValidatorsImpl_obj()
{
}

void ValidatorsImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ValidatorsImpl);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(component,"component");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_areValid,"_areValid");
	HX_MARK_MEMBER_NAME(areValid,"areValid");
	HX_MARK_END_CLASS();
}

void ValidatorsImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(component,"component");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_areValid,"_areValid");
	HX_VISIT_MEMBER_NAME(areValid,"areValid");
}

::hx::Val ValidatorsImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return ::hx::Val( setup_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_length() : length ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"areValid") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_areValid() : areValid ); }
		if (HX_FIELD_EQ(inName,"validate") ) { return ::hx::Val( validate_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { return ::hx::Val( component ); }
		if (HX_FIELD_EQ(inName,"_areValid") ) { return ::hx::Val( _areValid ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_areValid") ) { return ::hx::Val( get_areValid_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ValidatorsImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"areValid") ) { areValid=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_areValid") ) { _areValid=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ValidatorsImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("list",5e,1c,b3,47));
	outFields->push(HX_("component",bd,f0,53,0f));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("_areValid",67,6d,33,9f));
	outFields->push(HX_("areValid",08,76,9d,57));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ValidatorsImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ValidatorsImpl_obj,list),HX_("list",5e,1c,b3,47)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ValidatorsImpl_obj,component),HX_("component",bd,f0,53,0f)},
	{::hx::fsInt,(int)offsetof(ValidatorsImpl_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsBool,(int)offsetof(ValidatorsImpl_obj,_areValid),HX_("_areValid",67,6d,33,9f)},
	{::hx::fsBool,(int)offsetof(ValidatorsImpl_obj,areValid),HX_("areValid",08,76,9d,57)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ValidatorsImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String ValidatorsImpl_obj_sMemberFields[] = {
	HX_("list",5e,1c,b3,47),
	HX_("component",bd,f0,53,0f),
	HX_("length",e6,94,07,9f),
	HX_("get_length",af,04,8f,8f),
	HX_("setup",7d,ae,2f,7a),
	HX_("_areValid",67,6d,33,9f),
	HX_("areValid",08,76,9d,57),
	HX_("get_areValid",11,2a,b7,0c),
	HX_("validate",96,d0,e3,04),
	HX_("iterator",ee,49,9a,93),
	::String(null()) };

::hx::Class ValidatorsImpl_obj::__mClass;

void ValidatorsImpl_obj::__register()
{
	ValidatorsImpl_obj _hx_dummy;
	ValidatorsImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.validators._Validators.ValidatorsImpl",aa,bb,52,5f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ValidatorsImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ValidatorsImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValidatorsImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValidatorsImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace validators
} // end namespace _Validators
