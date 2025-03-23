#ifndef INCLUDED_haxe_ui_focus_IFocusApplicator
#define INCLUDED_haxe_ui_focus_IFocusApplicator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusApplicator)
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
namespace focus{


class HXCPP_CLASS_ATTRIBUTES IFocusApplicator_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_get_enabled)(); 
		static inline bool get_enabled( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::focus::IFocusApplicator_obj *>(_hx_.mPtr->_hx_getInterface(0x421e4aa8)))->_hx_get_enabled)();
		}
		bool (::hx::Object :: *_hx_set_enabled)(bool value); 
		static inline bool set_enabled( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::focus::IFocusApplicator_obj *>(_hx_.mPtr->_hx_getInterface(0x421e4aa8)))->_hx_set_enabled)(value);
		}
		void (::hx::Object :: *_hx_apply)( ::haxe::ui::core::Component target); 
		static inline void apply( ::Dynamic _hx_, ::haxe::ui::core::Component target) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::focus::IFocusApplicator_obj *>(_hx_.mPtr->_hx_getInterface(0x421e4aa8)))->_hx_apply)(target);
		}
		void (::hx::Object :: *_hx_unapply)( ::haxe::ui::core::Component target); 
		static inline void unapply( ::Dynamic _hx_, ::haxe::ui::core::Component target) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::focus::IFocusApplicator_obj *>(_hx_.mPtr->_hx_getInterface(0x421e4aa8)))->_hx_unapply)(target);
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace focus

#endif /* INCLUDED_haxe_ui_focus_IFocusApplicator */ 
