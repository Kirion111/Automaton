#ifndef INCLUDED_haxe_ui_validators__Validators_ValidatorsIterator
#define INCLUDED_haxe_ui_validators__Validators_ValidatorsIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,validators,IValidator)
HX_DECLARE_CLASS4(haxe,ui,validators,_Validators,ValidatorsIterator)

namespace haxe{
namespace ui{
namespace validators{
namespace _Validators{


class HXCPP_CLASS_ATTRIBUTES ValidatorsIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ValidatorsIterator_obj OBJ_;
		ValidatorsIterator_obj();

	public:
		enum { _hx_ClassId = 0x7544b7b4 };

		void __construct(::Array< ::Dynamic> list);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.validators._Validators.ValidatorsIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.validators._Validators.ValidatorsIterator"); }
		static ::hx::ObjectPtr< ValidatorsIterator_obj > __new(::Array< ::Dynamic> list);
		static ::hx::ObjectPtr< ValidatorsIterator_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> list);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ValidatorsIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ValidatorsIterator",8f,8f,34,e5); }

		int i;
		::Array< ::Dynamic> list;
		bool hasNext();
		::Dynamic hasNext_dyn();

		::Dynamic next();
		::Dynamic next_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace validators
} // end namespace _Validators

#endif /* INCLUDED_haxe_ui_validators__Validators_ValidatorsIterator */ 
