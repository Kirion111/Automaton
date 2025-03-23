#ifndef INCLUDED_openfl_geom_Matrix
#define INCLUDED_openfl_geom_Matrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Matrix_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Matrix_obj OBJ_;
		Matrix_obj();

	public:
		enum { _hx_ClassId = 0x065caf19 };

		void __construct(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.geom.Matrix")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.geom.Matrix"); }
		static ::hx::ObjectPtr< Matrix_obj > __new(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty);
		static ::hx::ObjectPtr< Matrix_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Matrix_obj();

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
		::String __ToString() const { return HX_("Matrix",61,aa,5c,f0); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::openfl::geom::Matrix _hx___identity;
		static  ::lime::utils::ObjectPool _hx___pool;
		static  ::lime::utils::ArrayBufferView _hx___matrix3;
		Float a;
		Float b;
		Float c;
		Float d;
		Float tx;
		Float ty;
		 ::lime::utils::ArrayBufferView _hx___array;
		 ::openfl::geom::Matrix clone();
		::Dynamic clone_dyn();

		void concat( ::openfl::geom::Matrix m);
		::Dynamic concat_dyn();

		void copyColumnFrom(int column, ::openfl::geom::Vector3D vector3D);
		::Dynamic copyColumnFrom_dyn();

		void copyColumnTo(int column, ::openfl::geom::Vector3D vector3D);
		::Dynamic copyColumnTo_dyn();

		void copyFrom( ::openfl::geom::Matrix sourceMatrix);
		::Dynamic copyFrom_dyn();

		void copyRowFrom(int row, ::openfl::geom::Vector3D vector3D);
		::Dynamic copyRowFrom_dyn();

		void copyRowTo(int row, ::openfl::geom::Vector3D vector3D);
		::Dynamic copyRowTo_dyn();

		void createBox(Float scaleX,Float scaleY,::hx::Null< Float >  rotation,::hx::Null< Float >  tx,::hx::Null< Float >  ty);
		::Dynamic createBox_dyn();

		void createGradientBox(Float width,Float height,::hx::Null< Float >  rotation,::hx::Null< Float >  tx,::hx::Null< Float >  ty);
		::Dynamic createGradientBox_dyn();

		 ::openfl::geom::Point deltaTransformPoint( ::openfl::geom::Point point);
		::Dynamic deltaTransformPoint_dyn();

		 ::openfl::geom::Point deltaTransformPointToOutput( ::openfl::geom::Point point, ::openfl::geom::Point output);
		::Dynamic deltaTransformPointToOutput_dyn();

		bool equals( ::openfl::geom::Matrix matrix);
		::Dynamic equals_dyn();

		void identity();
		::Dynamic identity_dyn();

		 ::openfl::geom::Matrix invert();
		::Dynamic invert_dyn();

		void rotate(Float theta);
		::Dynamic rotate_dyn();

		void scale(Float sx,Float sy);
		::Dynamic scale_dyn();

		void setRotation(Float theta,::hx::Null< Float >  scale);
		::Dynamic setRotation_dyn();

		void setTo(Float a,Float b,Float c,Float d,Float tx,Float ty);
		::Dynamic setTo_dyn();

		::String to3DString(::hx::Null< bool >  roundPixels);
		::Dynamic to3DString_dyn();

		::String toMozString();
		::Dynamic toMozString_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::openfl::geom::Point transformPoint( ::openfl::geom::Point pos);
		::Dynamic transformPoint_dyn();

		 ::openfl::geom::Point transformPointToOutput( ::openfl::geom::Point pos, ::openfl::geom::Point output);
		::Dynamic transformPointToOutput_dyn();

		void translate(Float dx,Float dy);
		::Dynamic translate_dyn();

		 ::lime::utils::ArrayBufferView toArray(::hx::Null< bool >  transpose);
		::Dynamic toArray_dyn();

		void _hx___cleanValues();
		::Dynamic _hx___cleanValues_dyn();

		 ::lime::utils::ArrayBufferView _hx___toMatrix3();
		::Dynamic _hx___toMatrix3_dyn();

		void _hx___transformInversePoint( ::openfl::geom::Point point);
		::Dynamic _hx___transformInversePoint_dyn();

		Float _hx___transformInverseX(Float px,Float py);
		::Dynamic _hx___transformInverseX_dyn();

		Float _hx___transformInverseY(Float px,Float py);
		::Dynamic _hx___transformInverseY_dyn();

		void _hx___transformPoint( ::openfl::geom::Point point);
		::Dynamic _hx___transformPoint_dyn();

		Float _hx___transformX(Float px,Float py);
		::Dynamic _hx___transformX_dyn();

		Float _hx___transformY(Float px,Float py);
		::Dynamic _hx___transformY_dyn();

		void _hx___translateTransformed(Float px,Float py);
		::Dynamic _hx___translateTransformed_dyn();

};

} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_openfl_geom_Matrix */ 
