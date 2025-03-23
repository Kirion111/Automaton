#ifndef INCLUDED_haxe_ui_core_IScroller
#define INCLUDED_haxe_ui_core_IScroller

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,core,IScroller)
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
namespace core{


class HXCPP_CLASS_ATTRIBUTES IScroller_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_get_isScrollableHorizontally)(); 
		static inline bool get_isScrollableHorizontally( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IScroller_obj *>(_hx_.mPtr->_hx_getInterface(0x69483d2a)))->_hx_get_isScrollableHorizontally)();
		}
		bool (::hx::Object :: *_hx_get_isScrollableVertically)(); 
		static inline bool get_isScrollableVertically( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IScroller_obj *>(_hx_.mPtr->_hx_getInterface(0x69483d2a)))->_hx_get_isScrollableVertically)();
		}
		bool (::hx::Object :: *_hx_get_isScrollable)(); 
		static inline bool get_isScrollable( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IScroller_obj *>(_hx_.mPtr->_hx_getInterface(0x69483d2a)))->_hx_get_isScrollable)();
		}
		void (::hx::Object :: *_hx_ensureVisible)( ::haxe::ui::core::Component component); 
		static inline void ensureVisible( ::Dynamic _hx_, ::haxe::ui::core::Component component) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IScroller_obj *>(_hx_.mPtr->_hx_getInterface(0x69483d2a)))->_hx_ensureVisible)(component);
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_IScroller */ 
