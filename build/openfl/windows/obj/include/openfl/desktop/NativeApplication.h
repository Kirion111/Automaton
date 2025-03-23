#ifndef INCLUDED_openfl_desktop_NativeApplication
#define INCLUDED_openfl_desktop_NativeApplication

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(openfl,desktop,Icon)
HX_DECLARE_CLASS2(openfl,desktop,InteractiveIcon)
HX_DECLARE_CLASS2(openfl,desktop,NativeApplication)
HX_DECLARE_CLASS2(openfl,display,NativeWindow)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace desktop{


class HXCPP_CLASS_ATTRIBUTES NativeApplication_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef NativeApplication_obj OBJ_;
		NativeApplication_obj();

	public:
		enum { _hx_ClassId = 0x33ced195 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.desktop.NativeApplication")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.desktop.NativeApplication"); }
		static ::hx::ObjectPtr< NativeApplication_obj > __new();
		static ::hx::ObjectPtr< NativeApplication_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeApplication_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NativeApplication",d9,82,56,e0); }

		static  ::openfl::desktop::NativeApplication _hx___nativeApplication;
		static  ::openfl::desktop::NativeApplication get_nativeApplication();
		static ::Dynamic get_nativeApplication_dyn();

		static bool get_supportsDefaultApplication();
		static ::Dynamic get_supportsDefaultApplication_dyn();

		static bool get_supportsDockIcon();
		static ::Dynamic get_supportsDockIcon_dyn();

		static bool get_supportsMenu();
		static ::Dynamic get_supportsMenu_dyn();

		static bool get_supportsStartAtLogin();
		static ::Dynamic get_supportsStartAtLogin_dyn();

		static bool get_supportsSystemTrayIcon();
		static ::Dynamic get_supportsSystemTrayIcon_dyn();

		 ::openfl::display::NativeWindow _hx___activeWindow;
		 ::openfl::display::NativeWindow get_activeWindow();
		::Dynamic get_activeWindow_dyn();

		::String get_applicationID();
		::Dynamic get_applicationID_dyn();

		bool autoExit;
		 ::openfl::desktop::InteractiveIcon icon;
		bool get_isCompiledAOT();
		::Dynamic get_isCompiledAOT_dyn();

		::Array< ::Dynamic> _hx___openedWindows;
		::Array< ::Dynamic> get_openedWindows();
		::Dynamic get_openedWindows_dyn();

		bool startAtLogin;
		void exit(::hx::Null< int >  code);
		::Dynamic exit_dyn();

		bool isSetAsDefaultApplication(::String extension);
		::Dynamic isSetAsDefaultApplication_dyn();

		void removeAsDefaultApplication(::String extension);
		::Dynamic removeAsDefaultApplication_dyn();

		void setAsDefaultApplication(::String extension);
		::Dynamic setAsDefaultApplication_dyn();

};

} // end namespace openfl
} // end namespace desktop

#endif /* INCLUDED_openfl_desktop_NativeApplication */ 
