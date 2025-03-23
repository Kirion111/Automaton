#ifndef INCLUDED_lime__internal_graphics__ImageDataUtil_ImageDataView
#define INCLUDED_lime__internal_graphics__ImageDataUtil_ImageDataView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_internal,graphics,_ImageDataUtil,ImageDataView)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,math,Rectangle)

namespace lime{
namespace _internal{
namespace graphics{
namespace _ImageDataUtil{


class HXCPP_CLASS_ATTRIBUTES ImageDataView_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ImageDataView_obj OBJ_;
		ImageDataView_obj();

	public:
		enum { _hx_ClassId = 0x178fc370 };

		void __construct( ::lime::graphics::Image image, ::lime::math::Rectangle rect);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._internal.graphics._ImageDataUtil.ImageDataView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime._internal.graphics._ImageDataUtil.ImageDataView"); }
		static ::hx::ObjectPtr< ImageDataView_obj > __new( ::lime::graphics::Image image, ::lime::math::Rectangle rect);
		static ::hx::ObjectPtr< ImageDataView_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::graphics::Image image, ::lime::math::Rectangle rect);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageDataView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageDataView",0a,90,55,b5); }

		int x;
		int y;
		int height;
		int width;
		int byteOffset;
		 ::lime::graphics::Image image;
		 ::lime::math::Rectangle rect;
		int stride;
		 ::lime::math::Rectangle tempRect;
		void clip(int x,int y,int width,int height);
		::Dynamic clip_dyn();

		bool hasRow(int y);
		::Dynamic hasRow_dyn();

		void offset(int x,int y);
		::Dynamic offset_dyn();

		int row(int y);
		::Dynamic row_dyn();

		void _hx___update();
		::Dynamic _hx___update_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace graphics
} // end namespace _ImageDataUtil

#endif /* INCLUDED_lime__internal_graphics__ImageDataUtil_ImageDataView */ 
