#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#define INCLUDED_haxe_ui_backend_ImageSurface

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e0f9c8ebff9ca9a6_4_new)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageSurface)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ImageSurface_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ImageSurface_obj OBJ_;
		ImageSurface_obj();

	public:
		enum { _hx_ClassId = 0x20bbbdc4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.ImageSurface")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.ImageSurface"); }

		inline static ::hx::ObjectPtr< ImageSurface_obj > __new() {
			::hx::ObjectPtr< ImageSurface_obj > __this = new ImageSurface_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ImageSurface_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ImageSurface_obj *__this = (ImageSurface_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageSurface_obj), false, "haxe.ui.backend.ImageSurface"));
			*(void **)__this = ImageSurface_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e0f9c8ebff9ca9a6_4_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageSurface_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageSurface",32,2c,24,15); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ImageSurface */ 
