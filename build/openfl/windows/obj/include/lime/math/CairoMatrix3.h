#ifndef INCLUDED_lime_math_CairoMatrix3
#define INCLUDED_lime_math_CairoMatrix3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_305c4c96db43e091_639_new)
HX_DECLARE_CLASS2(lime,math,CairoMatrix3)

namespace lime{
namespace math{


class HXCPP_CLASS_ATTRIBUTES CairoMatrix3_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CairoMatrix3_obj OBJ_;
		CairoMatrix3_obj();

	public:
		enum { _hx_ClassId = 0x1cfc6713 };

		void __construct(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.math.CairoMatrix3")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.math.CairoMatrix3"); }

		inline static ::hx::ObjectPtr< CairoMatrix3_obj > __new(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty) {
			::hx::ObjectPtr< CairoMatrix3_obj > __this = new CairoMatrix3_obj();
			__this->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
			return __this;
		}

		inline static ::hx::ObjectPtr< CairoMatrix3_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty) {
			CairoMatrix3_obj *__this = (CairoMatrix3_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CairoMatrix3_obj), false, "lime.math.CairoMatrix3"));
			*(void **)__this = CairoMatrix3_obj::_hx_vtable;
{
            		Float a = __o_a.Default(1);
            		Float b = __o_b.Default(0);
            		Float c = __o_c.Default(0);
            		Float d = __o_d.Default(1);
            		Float tx = __o_tx.Default(0);
            		Float ty = __o_ty.Default(0);
            	HX_STACKFRAME(&_hx_pos_305c4c96db43e091_639_new)
HXLINE( 640)		( ( ::lime::math::CairoMatrix3)(__this) )->a = a;
HXLINE( 641)		( ( ::lime::math::CairoMatrix3)(__this) )->b = b;
HXLINE( 642)		( ( ::lime::math::CairoMatrix3)(__this) )->c = c;
HXLINE( 643)		( ( ::lime::math::CairoMatrix3)(__this) )->d = d;
HXLINE( 644)		( ( ::lime::math::CairoMatrix3)(__this) )->tx = tx;
HXLINE( 645)		( ( ::lime::math::CairoMatrix3)(__this) )->ty = ty;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CairoMatrix3_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CairoMatrix3",4a,27,04,05); }

		Float a;
		Float b;
		Float c;
		Float d;
		Float tx;
		Float ty;
};

} // end namespace lime
} // end namespace math

#endif /* INCLUDED_lime_math_CairoMatrix3 */ 
