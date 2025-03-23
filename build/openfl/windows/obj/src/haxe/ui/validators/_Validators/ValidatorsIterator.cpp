#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_validators_IValidator
#include <haxe/ui/validators/IValidator.h>
#endif
#ifndef INCLUDED_haxe_ui_validators__Validators_ValidatorsIterator
#include <haxe/ui/validators/_Validators/ValidatorsIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f0565b140a5ae4ec_76_new,"haxe.ui.validators._Validators.ValidatorsIterator","new",0x49bd90aa,"haxe.ui.validators._Validators.ValidatorsIterator.new","haxe/ui/validators/Validators.hx",76,0x2c6e0b21)
HX_LOCAL_STACK_FRAME(_hx_pos_f0565b140a5ae4ec_81_hasNext,"haxe.ui.validators._Validators.ValidatorsIterator","hasNext",0x553752b7,"haxe.ui.validators._Validators.ValidatorsIterator.hasNext","haxe/ui/validators/Validators.hx",81,0x2c6e0b21)
HX_LOCAL_STACK_FRAME(_hx_pos_f0565b140a5ae4ec_89_next,"haxe.ui.validators._Validators.ValidatorsIterator","next",0x3c210569,"haxe.ui.validators._Validators.ValidatorsIterator.next","haxe/ui/validators/Validators.hx",89,0x2c6e0b21)
namespace haxe{
namespace ui{
namespace validators{
namespace _Validators{

void ValidatorsIterator_obj::__construct(::Array< ::Dynamic> list){
            	HX_STACKFRAME(&_hx_pos_f0565b140a5ae4ec_76_new)
HXLINE(  77)		this->list = list;
HXLINE(  78)		this->i = 0;
            	}

Dynamic ValidatorsIterator_obj::__CreateEmpty() { return new ValidatorsIterator_obj; }

void *ValidatorsIterator_obj::_hx_vtable = 0;

Dynamic ValidatorsIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ValidatorsIterator_obj > _hx_result = new ValidatorsIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ValidatorsIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7544b7b4;
}

bool ValidatorsIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_f0565b140a5ae4ec_81_hasNext)
HXLINE(  82)		if (::hx::IsNull( this->list )) {
HXLINE(  83)			return false;
            		}
HXLINE(  85)		return (this->i < this->list->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidatorsIterator_obj,hasNext,return )

::Dynamic ValidatorsIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_f0565b140a5ae4ec_89_next)
HXDLIN(  89)		return this->list->__get(this->i++);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidatorsIterator_obj,next,return )


::hx::ObjectPtr< ValidatorsIterator_obj > ValidatorsIterator_obj::__new(::Array< ::Dynamic> list) {
	::hx::ObjectPtr< ValidatorsIterator_obj > __this = new ValidatorsIterator_obj();
	__this->__construct(list);
	return __this;
}

::hx::ObjectPtr< ValidatorsIterator_obj > ValidatorsIterator_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> list) {
	ValidatorsIterator_obj *__this = (ValidatorsIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ValidatorsIterator_obj), true, "haxe.ui.validators._Validators.ValidatorsIterator"));
	*(void **)__this = ValidatorsIterator_obj::_hx_vtable;
	__this->__construct(list);
	return __this;
}

ValidatorsIterator_obj::ValidatorsIterator_obj()
{
}

void ValidatorsIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ValidatorsIterator);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void ValidatorsIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(list,"list");
}

::hx::Val ValidatorsIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ValidatorsIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ValidatorsIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("i",69,00,00,00));
	outFields->push(HX_("list",5e,1c,b3,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ValidatorsIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ValidatorsIterator_obj,i),HX_("i",69,00,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ValidatorsIterator_obj,list),HX_("list",5e,1c,b3,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ValidatorsIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String ValidatorsIterator_obj_sMemberFields[] = {
	HX_("i",69,00,00,00),
	HX_("list",5e,1c,b3,47),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class ValidatorsIterator_obj::__mClass;

void ValidatorsIterator_obj::__register()
{
	ValidatorsIterator_obj _hx_dummy;
	ValidatorsIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.validators._Validators.ValidatorsIterator",b8,b3,f1,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ValidatorsIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ValidatorsIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValidatorsIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValidatorsIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace validators
} // end namespace _Validators
