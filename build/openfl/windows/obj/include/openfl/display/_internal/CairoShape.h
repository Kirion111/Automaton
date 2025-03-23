#ifndef INCLUDED_openfl_display__internal_CairoShape
#define INCLUDED_openfl_display__internal_CairoShape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,display,CairoRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS3(openfl,display,_internal,CairoShape)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES CairoShape_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CairoShape_obj OBJ_;
		CairoShape_obj();

	public:
		enum { _hx_ClassId = 0x28fc0e6f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.CairoShape")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.CairoShape"); }

		inline static ::hx::ObjectPtr< CairoShape_obj > __new() {
			::hx::ObjectPtr< CairoShape_obj > __this = new CairoShape_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CairoShape_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CairoShape_obj *__this = (CairoShape_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CairoShape_obj), false, "openfl.display._internal.CairoShape"));
			*(void **)__this = CairoShape_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CairoShape_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CairoShape",99,39,1d,ac); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::lime::utils::ArrayBufferView sourceTransform;
		static void render( ::openfl::display::DisplayObject shape, ::openfl::display::CairoRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderDrawable( ::openfl::display::Shape shape, ::openfl::display::CairoRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::display::Shape shape, ::openfl::display::CairoRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_CairoShape */ 
