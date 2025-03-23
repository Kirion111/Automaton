#ifndef INCLUDED_haxe_ui_validators__Validators_ValidatorsImpl
#define INCLUDED_haxe_ui_validators__Validators_ValidatorsImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS3(haxe,ui,validators,IValidator)
HX_DECLARE_CLASS4(haxe,ui,validators,_Validators,ValidatorsImpl)
HX_DECLARE_CLASS4(haxe,ui,validators,_Validators,ValidatorsIterator)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace validators{
namespace _Validators{


class HXCPP_CLASS_ATTRIBUTES ValidatorsImpl_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ValidatorsImpl_obj OBJ_;
		ValidatorsImpl_obj();

	public:
		enum { _hx_ClassId = 0x5c798dde };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.validators._Validators.ValidatorsImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.validators._Validators.ValidatorsImpl"); }
		static ::hx::ObjectPtr< ValidatorsImpl_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< ValidatorsImpl_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ValidatorsImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ValidatorsImpl",01,20,b7,65); }

		::Array< ::Dynamic> list;
		 ::haxe::ui::core::Component component;
		int length;
		int get_length();
		::Dynamic get_length_dyn();

		void setup();
		::Dynamic setup_dyn();

		bool _areValid;
		bool areValid;
		bool get_areValid();
		::Dynamic get_areValid_dyn();

		bool validate();
		::Dynamic validate_dyn();

		 ::haxe::ui::validators::_Validators::ValidatorsIterator iterator();
		::Dynamic iterator_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace validators
} // end namespace _Validators

#endif /* INCLUDED_haxe_ui_validators__Validators_ValidatorsImpl */ 
