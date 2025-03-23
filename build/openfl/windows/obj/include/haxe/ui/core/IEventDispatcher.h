#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#define INCLUDED_haxe_ui_core_IEventDispatcher

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


class HXCPP_CLASS_ATTRIBUTES IEventDispatcher_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_registerEvent)(::String type, ::Dynamic listener,::hx::Null< int >  priority); 
		static inline void registerEvent( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< int >  priority) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IEventDispatcher_obj *>(_hx_.mPtr->_hx_getInterface(0x3e4a18f1)))->_hx_registerEvent)(type,listener,priority);
		}
		bool (::hx::Object :: *_hx_hasEvent)(::String type, ::Dynamic listener); 
		static inline bool hasEvent( ::Dynamic _hx_,::String type, ::Dynamic listener) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IEventDispatcher_obj *>(_hx_.mPtr->_hx_getInterface(0x3e4a18f1)))->_hx_hasEvent)(type,listener);
		}
		void (::hx::Object :: *_hx_unregisterEvent)(::String type, ::Dynamic listener); 
		static inline void unregisterEvent( ::Dynamic _hx_,::String type, ::Dynamic listener) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IEventDispatcher_obj *>(_hx_.mPtr->_hx_getInterface(0x3e4a18f1)))->_hx_unregisterEvent)(type,listener);
		}
		void (::hx::Object :: *_hx_dispatch)( ::Dynamic event, ::haxe::ui::core::Component target); 
		static inline void dispatch( ::Dynamic _hx_, ::Dynamic event, ::haxe::ui::core::Component target) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IEventDispatcher_obj *>(_hx_.mPtr->_hx_getInterface(0x3e4a18f1)))->_hx_dispatch)(event,target);
		}
		void (::hx::Object :: *_hx_removeAllListeners)(); 
		static inline void removeAllListeners( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IEventDispatcher_obj *>(_hx_.mPtr->_hx_getInterface(0x3e4a18f1)))->_hx_removeAllListeners)();
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_IEventDispatcher */ 
