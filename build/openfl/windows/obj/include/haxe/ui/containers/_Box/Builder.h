#ifndef INCLUDED_haxe_ui_containers__Box_Builder
#define INCLUDED_haxe_ui_containers__Box_Builder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS4(haxe,ui,containers,_Box,Builder)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
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
namespace containers{
namespace _Box{


class HXCPP_CLASS_ATTRIBUTES Builder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef Builder_obj OBJ_;
		Builder_obj();

	public:
		enum { _hx_ClassId = 0x63493edf };

		void __construct( ::haxe::ui::containers::Box box);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._Box.Builder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._Box.Builder"); }
		static ::hx::ObjectPtr< Builder_obj > __new( ::haxe::ui::containers::Box box);
		static ::hx::ObjectPtr< Builder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::Box box);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Builder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Builder",fb,02,0c,3d); }

		 ::haxe::ui::containers::Box _box;
		bool hasDataSource;
		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		void validateComponentData();

		void syncChildren();
		::Dynamic syncChildren_dyn();

		 ::haxe::ui::core::ItemRenderer findRenderer( ::Dynamic data);
		::Dynamic findRenderer_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _Box

#endif /* INCLUDED_haxe_ui_containers__Box_Builder */ 
