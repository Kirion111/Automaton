#ifndef INCLUDED_haxe_ui_validators__Validators_Validators_Impl_
#define INCLUDED_haxe_ui_validators__Validators_Validators_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,validators,IValidator)
HX_DECLARE_CLASS4(haxe,ui,validators,_Validators,ValidatorsImpl)
HX_DECLARE_CLASS4(haxe,ui,validators,_Validators,Validators_Impl_)

namespace haxe{
namespace ui{
namespace validators{
namespace _Validators{


class HXCPP_CLASS_ATTRIBUTES Validators_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Validators_Impl__obj OBJ_;
		Validators_Impl__obj();

	public:
		enum { _hx_ClassId = 0x5a7618c6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.validators._Validators.Validators_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.validators._Validators.Validators_Impl_"); }

		inline static ::hx::ObjectPtr< Validators_Impl__obj > __new() {
			::hx::ObjectPtr< Validators_Impl__obj > __this = new Validators_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Validators_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Validators_Impl__obj *__this = (Validators_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Validators_Impl__obj), false, "haxe.ui.validators._Validators.Validators_Impl_"));
			*(void **)__this = Validators_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Validators_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Validators_Impl_",e1,b3,34,a9); }

		static ::Dynamic get( ::haxe::ui::validators::_Validators::ValidatorsImpl this1,int index);
		static ::Dynamic get_dyn();

		static  ::haxe::ui::validators::_Validators::ValidatorsImpl fromArray(::Array< ::Dynamic> list);
		static ::Dynamic fromArray_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace validators
} // end namespace _Validators

#endif /* INCLUDED_haxe_ui_validators__Validators_Validators_Impl_ */ 
