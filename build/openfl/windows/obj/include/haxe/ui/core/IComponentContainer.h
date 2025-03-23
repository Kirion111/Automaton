#ifndef INCLUDED_haxe_ui_core_IComponentContainer
#define INCLUDED_haxe_ui_core_IComponentContainer

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


class HXCPP_CLASS_ATTRIBUTES IComponentContainer_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::haxe::ui::core::Component (::hx::Object :: *_hx_addComponent)( ::haxe::ui::core::Component child); 
		static inline  ::haxe::ui::core::Component addComponent( ::Dynamic _hx_, ::haxe::ui::core::Component child) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IComponentContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xf8a1c034)))->_hx_addComponent)(child);
		}
		 ::haxe::ui::core::Component (::hx::Object :: *_hx_removeComponent)( ::haxe::ui::core::Component child,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate); 
		static inline  ::haxe::ui::core::Component removeComponent( ::Dynamic _hx_, ::haxe::ui::core::Component child,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IComponentContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xf8a1c034)))->_hx_removeComponent)(child,dispose,invalidate);
		}
		bool (::hx::Object :: *_hx_containsComponent)( ::haxe::ui::core::Component child); 
		static inline bool containsComponent( ::Dynamic _hx_, ::haxe::ui::core::Component child) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IComponentContainer_obj *>(_hx_.mPtr->_hx_getInterface(0xf8a1c034)))->_hx_containsComponent)(child);
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_IComponentContainer */ 
