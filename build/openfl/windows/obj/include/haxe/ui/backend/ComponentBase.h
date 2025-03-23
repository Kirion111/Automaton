#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#define INCLUDED_haxe_ui_backend_ComponentBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentContainer
#include <haxe/ui/core/IComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageDisplayImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,TextBase)
HX_DECLARE_CLASS3(haxe,ui,backend,TextDisplayImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,TextInputImpl)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviours)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,core,IScroller)
HX_DECLARE_CLASS3(haxe,ui,core,ImageDisplay)
HX_DECLARE_CLASS3(haxe,ui,core,TextDisplay)
HX_DECLARE_CLASS3(haxe,ui,core,TextInput)
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,geom,Point)
HX_DECLARE_CLASS3(haxe,ui,geom,Rectangle)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,util,EventMap)
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


class HXCPP_CLASS_ATTRIBUTES ComponentBase_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef ComponentBase_obj OBJ_;
		ComponentBase_obj();

	public:
		enum { _hx_ClassId = 0x0f2dd418 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ComponentBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ComponentBase"); }
		static ::hx::ObjectPtr< ComponentBase_obj > __new();
		static ::hx::ObjectPtr< ComponentBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentBase_obj();

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
		void *_hx_getInterface(int inHash);
		 ::Dynamic self_2aa2127b();

		 ::Dynamic cloneComponent_2aa2127b();
		::String __ToString() const { return HX_("ComponentBase",4e,f7,a1,26); }

		static void __boot();
		static  ::Dynamic __meta__;
		static ::Array< ::String > INTERACTIVE_EVENTS;
		 ::haxe::ui::behaviours::Behaviours behaviours;
		virtual void registerBehaviours();
		::Dynamic registerBehaviours_dyn();

		bool _componentReady;
		bool isReady;
		bool get_isReady();
		::Dynamic get_isReady_dyn();

		::String _id;
		::String get_id();
		::Dynamic get_id_dyn();

		::String set_id(::String value);
		::Dynamic set_id_dyn();

		 ::haxe::ui::core::Component _parentComponent;
		 ::haxe::ui::core::Component get_parentComponent();
		::Dynamic get_parentComponent_dyn();

		 ::haxe::ui::core::Component set_parentComponent( ::haxe::ui::core::Component value);
		::Dynamic set_parentComponent_dyn();

		void onParentComponentSet();
		::Dynamic onParentComponentSet_dyn();

		bool isInScroller;
		bool get_isInScroller();
		::Dynamic get_isInScroller_dyn();

		::Dynamic findScroller();
		::Dynamic findScroller_dyn();

		bool containsChildComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  recursive);
		::Dynamic containsChildComponent_dyn();

		::Array< ::Dynamic> _children;
		::Array< ::Dynamic> childComponents;
		::Array< ::Dynamic> get_childComponents();
		::Dynamic get_childComponents_dyn();

		virtual  ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);
		::Dynamic addComponent_dyn();

		virtual  ::haxe::ui::core::Component addComponentAt( ::haxe::ui::core::Component child,int index);
		::Dynamic addComponentAt_dyn();

		virtual  ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);
		::Dynamic removeComponent_dyn();

		virtual bool containsComponent( ::haxe::ui::core::Component child);
		::Dynamic containsComponent_dyn();

		virtual  ::haxe::ui::core::Component removeComponentAt(int index,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);
		::Dynamic removeComponentAt_dyn();

		void moveComponentToBack();
		::Dynamic moveComponentToBack_dyn();

		void moveComponentBackward();
		::Dynamic moveComponentBackward_dyn();

		void moveComponentToFront();
		::Dynamic moveComponentToFront_dyn();

		void moveComponentFrontward();
		::Dynamic moveComponentFrontward_dyn();

		 ::haxe::ui::core::Component bottomComponent;
		 ::haxe::ui::core::Component get_bottomComponent();
		::Dynamic get_bottomComponent_dyn();

		 ::haxe::ui::core::Component topComponent;
		 ::haxe::ui::core::Component get_topComponent();
		::Dynamic get_topComponent_dyn();

		void postCloneComponent( ::haxe::ui::core::Component c);
		::Dynamic postCloneComponent_dyn();

		 ::haxe::ui::events::Events _internalEvents;
		::hx::Class _internalEventsClass;
		void registerInternalEvents(::hx::Class eventsClass,::hx::Null< bool >  reregister);
		::Dynamic registerInternalEvents_dyn();

		void unregisterInternalEvents();
		::Dynamic unregisterInternalEvents_dyn();

		 ::haxe::ui::util::EventMap _hx___events;
		void registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  priority);
		::Dynamic registerEvent_dyn();

		bool hasEvent(::String type, ::Dynamic listener);
		::Dynamic hasEvent_dyn();

		void unregisterEvent(::String type, ::Dynamic listener);
		::Dynamic unregisterEvent_dyn();

		void unregisterEvents(::String type);
		::Dynamic unregisterEvents_dyn();

		void dispatch( ::Dynamic event, ::haxe::ui::core::Component target);
		::Dynamic dispatch_dyn();

		void dispatchRecursively( ::Dynamic event);
		::Dynamic dispatchRecursively_dyn();

		void removeAllListeners();
		::Dynamic removeAllListeners_dyn();

		void dispatchRecursivelyWhen( ::Dynamic event, ::Dynamic condition);
		::Dynamic dispatchRecursivelyWhen_dyn();

		void checkWatchForMoveEvents();
		::Dynamic checkWatchForMoveEvents_dyn();

		void _onMoveInternal( ::haxe::ui::events::UIEvent _);
		::Dynamic _onMoveInternal_dyn();

		void checkComponentBounds(::hx::Null< bool >  checkNextFrame);
		::Dynamic checkComponentBounds_dyn();

		void _onMappedEvent( ::Dynamic event);
		::Dynamic _onMappedEvent_dyn();

		 ::haxe::ui::util::EventMap _disabledEvents;
		bool isInteractiveEvent(::String type);
		::Dynamic isInteractiveEvent_dyn();

		void disableInteractiveEvents(bool disable);
		::Dynamic disableInteractiveEvents_dyn();

		bool _interactivityDisabled;
		int _interactivityDisabledCounter;
		void disableInteractivity(bool disable,::hx::Null< bool >  recursive,::hx::Null< bool >  updateStyle,::hx::Null< bool >  force);
		::Dynamic disableInteractivity_dyn();

		void unregisterEventsInternal();
		::Dynamic unregisterEventsInternal_dyn();

		::Array< ::String > _pausedEvents;
		void pauseEvent(::String type,::hx::Null< bool >  recursive);
		::Dynamic pauseEvent_dyn();

		void resumeEvent(::String type,::hx::Null< bool >  nextFrame,::hx::Null< bool >  recursive);
		::Dynamic resumeEvent_dyn();

		 ::haxe::ui::layouts::Layout _layout;
		bool _layoutLocked;
		bool autoWidth;
		bool get_autoWidth();
		::Dynamic get_autoWidth_dyn();

		bool autoHeight;
		bool get_autoHeight();
		::Dynamic get_autoHeight_dyn();

		void resizeComponent( ::Dynamic w, ::Dynamic h);
		::Dynamic resizeComponent_dyn();

		Float actualComponentWidth;
		Float get_actualComponentWidth();
		::Dynamic get_actualComponentWidth_dyn();

		Float actualComponentHeight;
		Float get_actualComponentHeight();
		::Dynamic get_actualComponentHeight_dyn();

		 ::Dynamic _componentWidth;
		 ::Dynamic get_componentWidth();
		::Dynamic get_componentWidth_dyn();

		 ::Dynamic set_componentWidth( ::Dynamic value);
		::Dynamic set_componentWidth_dyn();

		 ::Dynamic _componentHeight;
		 ::Dynamic get_componentHeight();
		::Dynamic get_componentHeight_dyn();

		 ::Dynamic set_componentHeight( ::Dynamic value);
		::Dynamic set_componentHeight_dyn();

		 ::Dynamic _percentWidth;
		 ::Dynamic get_percentWidth();
		::Dynamic get_percentWidth_dyn();

		 ::Dynamic set_percentWidth( ::Dynamic value);
		::Dynamic set_percentWidth_dyn();

		 ::Dynamic _percentHeight;
		 ::Dynamic get_percentHeight();
		::Dynamic get_percentHeight_dyn();

		 ::Dynamic set_percentHeight( ::Dynamic value);
		::Dynamic set_percentHeight_dyn();

		 ::Dynamic _cachedPercentWidth;
		 ::Dynamic _cachedPercentHeight;
		void cachePercentSizes(::hx::Null< bool >  clearExisting);
		::Dynamic cachePercentSizes_dyn();

		void restorePercentSizes();
		::Dynamic restorePercentSizes_dyn();

		Float set_x(Float value);

		Float set_y(Float value);

		 ::Dynamic _width;
		Float set_width(Float value);

		Float get_width();

		 ::Dynamic _height;
		Float set_height(Float value);

		Float get_height();

		 ::Dynamic _actualWidth;
		 ::Dynamic _actualHeight;
		 ::Dynamic _hasScreen;
		bool hasScreen;
		bool get_hasScreen();
		::Dynamic get_hasScreen_dyn();

		virtual bool hitTest( ::Dynamic left, ::Dynamic top,::hx::Null< bool >  allowZeroSized);
		::Dynamic hitTest_dyn();

		bool autoSize();
		::Dynamic autoSize_dyn();

		void moveComponent( ::Dynamic left, ::Dynamic top);
		::Dynamic moveComponent_dyn();

		 ::Dynamic _left;
		 ::Dynamic get_left();
		::Dynamic get_left_dyn();

		 ::Dynamic set_left( ::Dynamic value);
		::Dynamic set_left_dyn();

		 ::Dynamic _top;
		 ::Dynamic get_top();
		::Dynamic get_top_dyn();

		 ::Dynamic set_top( ::Dynamic value);
		::Dynamic set_top_dyn();

		Float screenLeft;
		Float get_screenLeft();
		::Dynamic get_screenLeft_dyn();

		Float screenRight;
		Float get_screenRight();
		::Dynamic get_screenRight_dyn();

		Float screenTop;
		Float get_screenTop();
		::Dynamic get_screenTop_dyn();

		Float screenBottom;
		Float get_screenBottom();
		::Dynamic get_screenBottom_dyn();

		 ::haxe::ui::geom::Rectangle _screenBounds;
		 ::haxe::ui::geom::Rectangle screenBounds;
		 ::haxe::ui::geom::Rectangle get_screenBounds();
		::Dynamic get_screenBounds_dyn();

		 ::haxe::ui::geom::Rectangle _componentClipRect;
		 ::haxe::ui::geom::Rectangle get_componentClipRect();
		::Dynamic get_componentClipRect_dyn();

		 ::haxe::ui::geom::Rectangle set_componentClipRect( ::haxe::ui::geom::Rectangle value);
		::Dynamic set_componentClipRect_dyn();

		bool isComponentClipped;
		virtual bool get_isComponentClipped();
		::Dynamic get_isComponentClipped_dyn();

		bool isComponentOffscreen;
		bool get_isComponentOffscreen();
		::Dynamic get_isComponentOffscreen_dyn();

		 ::haxe::ui::styles::Style _style;
		 ::haxe::ui::styles::Style get_style();
		::Dynamic get_style_dyn();

		 ::haxe::ui::styles::Style set_style( ::haxe::ui::styles::Style value);
		::Dynamic set_style_dyn();

		 ::haxe::ds::StringMap _invalidationFlags;
		 ::haxe::ds::StringMap _delayedInvalidationFlags;
		bool _isAllInvalid;
		bool _isValidating;
		bool _isInitialized;
		bool _isDisposed;
		int _invalidateCount;
		int _depth;
		int get_depth();
		::Dynamic get_depth_dyn();

		int set_depth(int value);
		::Dynamic set_depth_dyn();

		bool isComponentInvalid(::String flag);
		::Dynamic isComponentInvalid_dyn();

		void invalidateComponent(::String flag,::hx::Null< bool >  recursive);
		::Dynamic invalidateComponent_dyn();

		void invalidateComponentData(::hx::Null< bool >  recursive);
		::Dynamic invalidateComponentData_dyn();

		void invalidateComponentLayout(::hx::Null< bool >  recursive);
		::Dynamic invalidateComponentLayout_dyn();

		void invalidateComponentPosition(::hx::Null< bool >  recursive);
		::Dynamic invalidateComponentPosition_dyn();

		void invalidateComponentDisplay(::hx::Null< bool >  recursive);
		::Dynamic invalidateComponentDisplay_dyn();

		void invalidateComponentStyle(::hx::Null< bool >  force,::hx::Null< bool >  recursive);
		::Dynamic invalidateComponentStyle_dyn();

		void validateComponent(::hx::Null< bool >  nextFrame);
		::Dynamic validateComponent_dyn();

		void validateNow();
		::Dynamic validateNow_dyn();

		void syncComponentValidation(::hx::Null< bool >  nextFrame);
		::Dynamic syncComponentValidation_dyn();

		virtual void validateComponentInternal(::hx::Null< bool >  nextFrame);
		::Dynamic validateComponentInternal_dyn();

		virtual void initializeComponent();
		::Dynamic initializeComponent_dyn();

		virtual void validateInitialSize(bool isInitialized);
		::Dynamic validateInitialSize_dyn();

		virtual void validateComponentData();
		::Dynamic validateComponentData_dyn();

		virtual bool validateComponentLayout();
		::Dynamic validateComponentLayout_dyn();

		virtual void validateComponentStyle();
		::Dynamic validateComponentStyle_dyn();

		virtual void validateComponentPosition();
		::Dynamic validateComponentPosition_dyn();

		void handleCreate(bool native);
		::Dynamic handleCreate_dyn();

		void handleDestroy();
		::Dynamic handleDestroy_dyn();

		virtual void handlePosition( ::Dynamic left, ::Dynamic top, ::haxe::ui::styles::Style style);
		::Dynamic handlePosition_dyn();

		void handlePreReposition();
		::Dynamic handlePreReposition_dyn();

		void handlePostReposition();
		::Dynamic handlePostReposition_dyn();

		virtual void handleSize( ::Dynamic width, ::Dynamic height, ::haxe::ui::styles::Style style);
		::Dynamic handleSize_dyn();

		void handleReady();
		::Dynamic handleReady_dyn();

		virtual void handleClipRect( ::haxe::ui::geom::Rectangle value);
		::Dynamic handleClipRect_dyn();

		virtual void handleVisibility(bool show);
		::Dynamic handleVisibility_dyn();

		void handleDisabled(bool show);
		::Dynamic handleDisabled_dyn();

		virtual void handleSetComponentIndex( ::haxe::ui::core::Component child,int index);
		::Dynamic handleSetComponentIndex_dyn();

		virtual  ::haxe::ui::core::Component handleAddComponent( ::haxe::ui::core::Component child);
		::Dynamic handleAddComponent_dyn();

		virtual  ::haxe::ui::core::Component handleAddComponentAt( ::haxe::ui::core::Component child,int index);
		::Dynamic handleAddComponentAt_dyn();

		virtual  ::haxe::ui::core::Component handleRemoveComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  dispose);
		::Dynamic handleRemoveComponent_dyn();

		virtual  ::haxe::ui::core::Component handleRemoveComponentAt(int index,::hx::Null< bool >  dispose);
		::Dynamic handleRemoveComponentAt_dyn();

		virtual void applyStyle( ::haxe::ui::styles::Style style);
		::Dynamic applyStyle_dyn();

		virtual void mapEvent(::String type, ::Dynamic listener);
		::Dynamic mapEvent_dyn();

		virtual void unmapEvent(::String type, ::Dynamic listener);
		::Dynamic unmapEvent_dyn();

		virtual  ::haxe::ui::geom::Point getComponentOffset();
		::Dynamic getComponentOffset_dyn();

		bool isNativeScroller;
		bool get_isNativeScroller();
		::Dynamic get_isNativeScroller_dyn();

		virtual void handleFrameworkProperty(::String id, ::Dynamic value);
		::Dynamic handleFrameworkProperty_dyn();

		 ::haxe::ui::core::TextDisplay _textDisplay;
		virtual  ::haxe::ui::core::TextDisplay createTextDisplay(::String text);
		::Dynamic createTextDisplay_dyn();

		 ::haxe::ui::core::TextDisplay getTextDisplay();
		::Dynamic getTextDisplay_dyn();

		bool hasTextDisplay();
		::Dynamic hasTextDisplay_dyn();

		 ::haxe::ui::core::TextInput _textInput;
		virtual  ::haxe::ui::core::TextInput createTextInput(::String text);
		::Dynamic createTextInput_dyn();

		 ::haxe::ui::core::TextInput getTextInput();
		::Dynamic getTextInput_dyn();

		bool hasTextInput();
		::Dynamic hasTextInput_dyn();

		 ::haxe::ui::core::ImageDisplay _imageDisplay;
		virtual  ::haxe::ui::core::ImageDisplay createImageDisplay();
		::Dynamic createImageDisplay_dyn();

		 ::haxe::ui::core::ImageDisplay getImageDisplay();
		::Dynamic getImageDisplay_dyn();

		bool hasImageDisplay();
		::Dynamic hasImageDisplay_dyn();

		virtual void removeImageDisplay();
		::Dynamic removeImageDisplay_dyn();

		::String getClassProperty(::String name);
		::Dynamic getClassProperty_dyn();

		 ::haxe::ds::StringMap _classProperties;
		void setClassProperty(::String name,::String value);
		::Dynamic setClassProperty_dyn();

		 ::Dynamic _hasNativeEntry;
		bool hasNativeEntry;
		bool get_hasNativeEntry();
		::Dynamic get_hasNativeEntry_dyn();

		::String getNativeConfigProperty(::String query,::String defaultValue);
		::Dynamic getNativeConfigProperty_dyn();

		bool getNativeConfigPropertyBool(::String query,::hx::Null< bool >  defaultValue);
		::Dynamic getNativeConfigPropertyBool_dyn();

		 ::haxe::ds::StringMap getNativeConfigProperties(::String query);
		::Dynamic getNativeConfigProperties_dyn();

		::String _className;
		::String className;
		::String get_className();
		::Dynamic get_className_dyn();

		::String _nodeName;
		::String nodeName;
		::String get_nodeName();
		::Dynamic get_nodeName_dyn();

		::String _nativeClassName;
		::String nativeClassName;
		::String get_nativeClassName();
		::Dynamic get_nativeClassName_dyn();

		::String get_text();
		::Dynamic get_text_dyn();

		::String set_text(::String value);
		::Dynamic set_text_dyn();

		virtual  ::Dynamic get_value();
		::Dynamic get_value_dyn();

		virtual  ::Dynamic set_value( ::Dynamic value);
		::Dynamic set_value_dyn();

		bool get_disabled();
		::Dynamic get_disabled_dyn();

		bool set_disabled(bool value);
		::Dynamic set_disabled_dyn();

		 ::Dynamic get_tooltip();
		::Dynamic get_tooltip_dyn();

		 ::Dynamic set_tooltip( ::Dynamic value);
		::Dynamic set_tooltip_dyn();

		 ::haxe::ui::core::Component get_tooltipRenderer();
		::Dynamic get_tooltipRenderer_dyn();

		 ::haxe::ui::core::Component set_tooltipRenderer( ::haxe::ui::core::Component value);
		::Dynamic set_tooltipRenderer_dyn();

		virtual  ::haxe::ui::backend::ComponentBase cloneComponent();
		::Dynamic cloneComponent_dyn();

		virtual  ::haxe::ui::backend::ComponentBase self();
		::Dynamic self_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ComponentBase */ 
