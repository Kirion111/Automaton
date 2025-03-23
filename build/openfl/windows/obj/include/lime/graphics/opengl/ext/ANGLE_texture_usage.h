#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_usage
#define INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_usage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f21a6c5ad88a2e71_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ANGLE_texture_usage)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES ANGLE_texture_usage_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ANGLE_texture_usage_obj OBJ_;
		ANGLE_texture_usage_obj();

	public:
		enum { _hx_ClassId = 0x72a96d63 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ANGLE_texture_usage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.ANGLE_texture_usage"); }

		inline static ::hx::ObjectPtr< ANGLE_texture_usage_obj > __new() {
			::hx::ObjectPtr< ANGLE_texture_usage_obj > __this = new ANGLE_texture_usage_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ANGLE_texture_usage_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ANGLE_texture_usage_obj *__this = (ANGLE_texture_usage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ANGLE_texture_usage_obj), false, "lime.graphics.opengl.ext.ANGLE_texture_usage"));
			*(void **)__this = ANGLE_texture_usage_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f21a6c5ad88a2e71_4_new)
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::ANGLE_texture_usage)(__this) )->FRAMEBUFFER_ATTACHMENT_ANGLE = 37795;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::ANGLE_texture_usage)(__this) )->TEXTURE_USAGE_ANGLE = 37794;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ANGLE_texture_usage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ANGLE_texture_usage",b1,62,6e,c1); }

		int TEXTURE_USAGE_ANGLE;
		int FRAMEBUFFER_ATTACHMENT_ANGLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_usage */ 
