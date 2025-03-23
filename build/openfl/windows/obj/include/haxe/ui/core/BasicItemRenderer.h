#ifndef INCLUDED_haxe_ui_core_BasicItemRenderer
#define INCLUDED_haxe_ui_core_BasicItemRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,components,Image)
HX_DECLARE_CLASS3(haxe,ui,components,Label)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,core,BasicItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
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


class HXCPP_CLASS_ATTRIBUTES BasicItemRenderer_obj : public  ::haxe::ui::core::ItemRenderer_obj
{
	public:
		typedef  ::haxe::ui::core::ItemRenderer_obj super;
		typedef BasicItemRenderer_obj OBJ_;
		BasicItemRenderer_obj();

	public:
		enum { _hx_ClassId = 0x0d1a7187 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.BasicItemRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.core.BasicItemRenderer"); }
		static ::hx::ObjectPtr< BasicItemRenderer_obj > __new();
		static ::hx::ObjectPtr< BasicItemRenderer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BasicItemRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BasicItemRenderer",24,95,c3,5a); }

		 ::haxe::ui::components::Image _icon;
		 ::haxe::ui::components::Label _label;
		void updateValues( ::Dynamic value,::Array< ::String > fieldList);

		void registerBehaviours();

		 ::haxe::ui::backend::ComponentBase cloneComponent();

		 ::haxe::ui::backend::ComponentBase self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_BasicItemRenderer */ 
