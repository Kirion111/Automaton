#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#define INCLUDED_haxe_ui_core_ItemRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
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


class HXCPP_CLASS_ATTRIBUTES ItemRenderer_obj : public  ::haxe::ui::containers::Box_obj
{
	public:
		typedef  ::haxe::ui::containers::Box_obj super;
		typedef ItemRenderer_obj OBJ_;
		ItemRenderer_obj();

	public:
		enum { _hx_ClassId = 0x5e4d6caf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.ItemRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.core.ItemRenderer"); }
		static ::hx::ObjectPtr< ItemRenderer_obj > __new();
		static ::hx::ObjectPtr< ItemRenderer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ItemRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ItemRenderer",96,5d,17,5f); }

		static void __boot();
		static  ::Dynamic __meta__;
		bool autoRegisterInteractiveEvents;
		bool recursiveStyling;
		void _onItemMouseOver( ::haxe::ui::events::MouseEvent event);
		::Dynamic _onItemMouseOver_dyn();

		void _onItemMouseOut( ::haxe::ui::events::MouseEvent event);
		::Dynamic _onItemMouseOut_dyn();

		void _onItemMouseDown( ::haxe::ui::events::MouseEvent event);
		::Dynamic _onItemMouseDown_dyn();

		void _onItemMouseUp( ::haxe::ui::events::MouseEvent event);
		::Dynamic _onItemMouseUp_dyn();

		bool _allowHover;
		bool get_allowHover();
		::Dynamic get_allowHover_dyn();

		bool set_allowHover(bool value);
		::Dynamic set_allowHover_dyn();

		 ::Dynamic _data;
		 ::Dynamic get_data();
		::Dynamic get_data_dyn();

		 ::Dynamic set_data( ::Dynamic value);
		::Dynamic set_data_dyn();

		int itemIndex;
		::Array< ::String > _fieldList;
		void validateComponentData();

		void onDataChanged( ::Dynamic data);
		::Dynamic onDataChanged_dyn();

		void onItemChange( ::haxe::ui::events::UIEvent event);
		::Dynamic onItemChange_dyn();

		void onItemClick( ::haxe::ui::events::UIEvent event);
		::Dynamic onItemClick_dyn();

		virtual void updateValues( ::Dynamic value,::Array< ::String > fieldList);
		::Dynamic updateValues_dyn();

		void setComponentProperty( ::haxe::ui::core::Component c, ::Dynamic v,::String property);
		::Dynamic setComponentProperty_dyn();

		virtual void registerBehaviours();

		virtual  ::haxe::ui::backend::ComponentBase cloneComponent();

		virtual  ::haxe::ui::backend::ComponentBase self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_ItemRenderer */ 
