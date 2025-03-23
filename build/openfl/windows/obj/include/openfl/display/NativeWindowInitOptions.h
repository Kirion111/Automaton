#ifndef INCLUDED_openfl_display_NativeWindowInitOptions
#define INCLUDED_openfl_display_NativeWindowInitOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(openfl,display,NativeWindow)
HX_DECLARE_CLASS2(openfl,display,NativeWindowInitOptions)
HX_DECLARE_CLASS2(openfl,display,Window)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES NativeWindowInitOptions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NativeWindowInitOptions_obj OBJ_;
		NativeWindowInitOptions_obj();

	public:
		enum { _hx_ClassId = 0x3b14bc35 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.NativeWindowInitOptions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.NativeWindowInitOptions"); }
		static ::hx::ObjectPtr< NativeWindowInitOptions_obj > __new();
		static ::hx::ObjectPtr< NativeWindowInitOptions_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeWindowInitOptions_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NativeWindowInitOptions",67,f0,07,96); }

		bool maximizable;
		bool minimizable;
		 ::openfl::display::NativeWindow owner;
		::String renderMode;
		bool resizable;
		 ::Dynamic systemChrome;
		bool transparent;
		 ::Dynamic type;
		 ::openfl::display::Window _hx___window;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_NativeWindowInitOptions */ 
