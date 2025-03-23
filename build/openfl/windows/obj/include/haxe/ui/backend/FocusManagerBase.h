#ifndef INCLUDED_haxe_ui_backend_FocusManagerBase
#define INCLUDED_haxe_ui_backend_FocusManagerBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,FocusManagerBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES FocusManagerBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FocusManagerBase_obj OBJ_;
		FocusManagerBase_obj();

	public:
		enum { _hx_ClassId = 0x4fcb91bc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.FocusManagerBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.FocusManagerBase"); }
		static ::hx::ObjectPtr< FocusManagerBase_obj > __new();
		static ::hx::ObjectPtr< FocusManagerBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FocusManagerBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FocusManagerBase",46,d4,00,9f); }

		virtual void applyFocus( ::haxe::ui::core::Component c);
		::Dynamic applyFocus_dyn();

		virtual void unapplyFocus( ::haxe::ui::core::Component c);
		::Dynamic unapplyFocus_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_FocusManagerBase */ 
