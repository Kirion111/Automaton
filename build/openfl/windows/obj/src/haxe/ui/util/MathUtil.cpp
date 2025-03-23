#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_util_MathUtil
#include <haxe/ui/util/MathUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_9_distance,"haxe.ui.util.MathUtil","distance",0xc95b573f,"haxe.ui.util.MathUtil.distance","haxe/ui/util/MathUtil.hx",9,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_16_precision,"haxe.ui.util.MathUtil","precision",0xd8f199f4,"haxe.ui.util.MathUtil.precision","haxe/ui/util/MathUtil.hx",16,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_26_fmodulo,"haxe.ui.util.MathUtil","fmodulo",0xe80890d2,"haxe.ui.util.MathUtil.fmodulo","haxe/ui/util/MathUtil.hx",26,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_41_round,"haxe.ui.util.MathUtil","round",0x5a75aa04,"haxe.ui.util.MathUtil.round","haxe/ui/util/MathUtil.hx",41,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_44_roundToNearest,"haxe.ui.util.MathUtil","roundToNearest",0xdae0257f,"haxe.ui.util.MathUtil.roundToNearest","haxe/ui/util/MathUtil.hx",44,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_53_clamp,"haxe.ui.util.MathUtil","clamp",0xb56824b1,"haxe.ui.util.MathUtil.clamp","haxe/ui/util/MathUtil.hx",53,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_67_min,"haxe.ui.util.MathUtil","min",0x7f9bc9c8,"haxe.ui.util.MathUtil.min","haxe/ui/util/MathUtil.hx",67,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_77_max,"haxe.ui.util.MathUtil","max",0x7f9bc2da,"haxe.ui.util.MathUtil.max","haxe/ui/util/MathUtil.hx",77,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_87_wrapCircular,"haxe.ui.util.MathUtil","wrapCircular",0x6ff70753,"haxe.ui.util.MathUtil.wrapCircular","haxe/ui/util/MathUtil.hx",87,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_4_boot,"haxe.ui.util.MathUtil","boot",0x2173fb3c,"haxe.ui.util.MathUtil.boot","haxe/ui/util/MathUtil.hx",4,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_5_boot,"haxe.ui.util.MathUtil","boot",0x2173fb3c,"haxe.ui.util.MathUtil.boot","haxe/ui/util/MathUtil.hx",5,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_6_boot,"haxe.ui.util.MathUtil","boot",0x2173fb3c,"haxe.ui.util.MathUtil.boot","haxe/ui/util/MathUtil.hx",6,0x1b97ffd9)
namespace haxe{
namespace ui{
namespace util{

void MathUtil_obj::__construct() { }

Dynamic MathUtil_obj::__CreateEmpty() { return new MathUtil_obj; }

void *MathUtil_obj::_hx_vtable = 0;

Dynamic MathUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MathUtil_obj > _hx_result = new MathUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MathUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x665cb906;
}

int MathUtil_obj::MAX_INT;

int MathUtil_obj::MIN_INT;

Float MathUtil_obj::MAX_FLOAT_DIFFERENCE;

Float MathUtil_obj::distance(Float x1,Float y1,Float x2,Float y2){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_9_distance)
HXDLIN(   9)		return ::Math_obj::sqrt((((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(MathUtil_obj,distance,return )

int MathUtil_obj::precision(Float v){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_16_precision)
HXLINE(  17)		int e = 1;
HXLINE(  18)		int p = 0;
HXLINE(  19)		while((::Math_obj::abs(((( (Float)(::Math_obj::round((v * ( (Float)(e) )))) ) / ( (Float)(e) )) - v)) > ((Float)0.0000001))){
HXLINE(  20)			e = (e * 10);
HXLINE(  21)			p = (p + 1);
            		}
HXLINE(  23)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathUtil_obj,precision,return )

Float MathUtil_obj::fmodulo(Float v1,Float v2){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_26_fmodulo)
HXLINE(  27)		bool _hx_tmp;
HXDLIN(  27)		if (::Math_obj::isFinite(v1)) {
HXLINE(  27)			_hx_tmp = !(::Math_obj::isFinite(v2));
            		}
            		else {
HXLINE(  27)			_hx_tmp = true;
            		}
HXDLIN(  27)		if (_hx_tmp) {
HXLINE(  28)			return ::Math_obj::NaN;
            		}
HXLINE(  30)		int e = 1;
HXDLIN(  30)		int p = 0;
HXDLIN(  30)		while((::Math_obj::abs(((( (Float)(::Math_obj::round((v1 * ( (Float)(e) )))) ) / ( (Float)(e) )) - v1)) > ((Float)0.0000001))){
HXLINE(  30)			e = (e * 10);
HXDLIN(  30)			p = (p + 1);
            		}
HXDLIN(  30)		int p1 = p;
HXDLIN(  30)		int e1 = 1;
HXDLIN(  30)		int p2 = 0;
HXDLIN(  30)		while((::Math_obj::abs(((( (Float)(::Math_obj::round((v2 * ( (Float)(e1) )))) ) / ( (Float)(e1) )) - v2)) > ((Float)0.0000001))){
HXLINE(  30)			e1 = (e1 * 10);
HXDLIN(  30)			p2 = (p2 + 1);
            		}
HXDLIN(  30)		int p3 = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(p1) ),( (Float)(p2) )));
HXLINE(  31)		int e2 = 1;
HXLINE(  32)		{
HXLINE(  32)			int _g = 0;
HXDLIN(  32)			int _g1 = p3;
HXDLIN(  32)			while((_g < _g1)){
HXLINE(  32)				_g = (_g + 1);
HXDLIN(  32)				int i = (_g - 1);
HXLINE(  33)				e2 = (e2 * 10);
            			}
            		}
HXLINE(  35)		int i1 = ::Math_obj::round((v1 * ( (Float)(e2) )));
HXLINE(  36)		int i2 = ::Math_obj::round((v2 * ( (Float)(e2) )));
HXLINE(  37)		return (::Math_obj::fround(((( (Float)(::hx::Mod(i1,i2)) ) / ( (Float)(e2) )) * ::Math_obj::pow(( (Float)(10) ),( (Float)(p3) )))) / ::Math_obj::pow(( (Float)(10) ),( (Float)(p3) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,fmodulo,return )

Float MathUtil_obj::round(Float v,::hx::Null< int >  __o_precision){
            		int precision = __o_precision.Default(0);
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_41_round)
HXDLIN(  41)		return (::Math_obj::fround((v * ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) )))) / ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,round,return )

Float MathUtil_obj::roundToNearest(Float v,Float n){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_44_roundToNearest)
HXLINE(  45)		bool _hx_tmp;
HXDLIN(  45)		if (::Math_obj::isFinite(v)) {
HXLINE(  45)			_hx_tmp = !(::Math_obj::isFinite(n));
            		}
            		else {
HXLINE(  45)			_hx_tmp = true;
            		}
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  46)			return ::Math_obj::NaN;
            		}
HXLINE(  48)		int e = 1;
HXDLIN(  48)		int p = 0;
HXDLIN(  48)		while((::Math_obj::abs(((( (Float)(::Math_obj::round((v * ( (Float)(e) )))) ) / ( (Float)(e) )) - v)) > ((Float)0.0000001))){
HXLINE(  48)			e = (e * 10);
HXDLIN(  48)			p = (p + 1);
            		}
HXDLIN(  48)		int p1 = p;
HXDLIN(  48)		int e1 = 1;
HXDLIN(  48)		int p2 = 0;
HXDLIN(  48)		while((::Math_obj::abs(((( (Float)(::Math_obj::round((n * ( (Float)(e1) )))) ) / ( (Float)(e1) )) - n)) > ((Float)0.0000001))){
HXLINE(  48)			e1 = (e1 * 10);
HXDLIN(  48)			p2 = (p2 + 1);
            		}
HXDLIN(  48)		int p3 = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(p1) ),( (Float)(p2) )));
HXLINE(  49)		Float inv = (((Float)1.0) / n);
HXLINE(  50)		return (::Math_obj::fround(((::Math_obj::fround((v * inv)) / inv) * ::Math_obj::pow(( (Float)(10) ),( (Float)(p3) )))) / ::Math_obj::pow(( (Float)(10) ),( (Float)(p3) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,roundToNearest,return )

Float MathUtil_obj::clamp( ::Dynamic v, ::Dynamic min, ::Dynamic max){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_53_clamp)
HXLINE(  54)		bool _hx_tmp;
HXDLIN(  54)		if (::hx::IsNotNull( v )) {
HXLINE(  54)			_hx_tmp = ::Math_obj::isNaN(( (Float)(v) ));
            		}
            		else {
HXLINE(  54)			_hx_tmp = true;
            		}
HXDLIN(  54)		if (_hx_tmp) {
HXLINE(  55)			return ( (Float)(min) );
            		}
HXLINE(  58)		bool _hx_tmp1;
HXDLIN(  58)		if (::hx::IsNotNull( min )) {
HXLINE(  58)			_hx_tmp1 = ::hx::IsLess( v,min );
            		}
            		else {
HXLINE(  58)			_hx_tmp1 = false;
            		}
HXDLIN(  58)		if (_hx_tmp1) {
HXLINE(  59)			v = min;
            		}
            		else {
HXLINE(  60)			bool _hx_tmp;
HXDLIN(  60)			if (::hx::IsNotNull( max )) {
HXLINE(  60)				_hx_tmp = ::hx::IsGreater( v,max );
            			}
            			else {
HXLINE(  60)				_hx_tmp = false;
            			}
HXDLIN(  60)			if (_hx_tmp) {
HXLINE(  61)				v = max;
            			}
            		}
HXLINE(  64)		return ( (Float)(v) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(MathUtil_obj,clamp,return )

Float MathUtil_obj::min(::Array< Float > numbers){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_67_min)
HXLINE(  68)		Float r = numbers->__get(0);
HXLINE(  69)		{
HXLINE(  69)			int _g = 0;
HXDLIN(  69)			while((_g < numbers->length)){
HXLINE(  69)				Float n = numbers->__get(_g);
HXDLIN(  69)				_g = (_g + 1);
HXLINE(  70)				if ((n < r)) {
HXLINE(  71)					r = n;
            				}
            			}
            		}
HXLINE(  74)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathUtil_obj,min,return )

Float MathUtil_obj::max(::Array< Float > numbers){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_77_max)
HXLINE(  78)		Float r = numbers->__get(0);
HXLINE(  79)		{
HXLINE(  79)			int _g = 0;
HXDLIN(  79)			while((_g < numbers->length)){
HXLINE(  79)				Float n = numbers->__get(_g);
HXDLIN(  79)				_g = (_g + 1);
HXLINE(  80)				if ((n > r)) {
HXLINE(  81)					r = n;
            				}
            			}
            		}
HXLINE(  84)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathUtil_obj,max,return )

Float MathUtil_obj::wrapCircular(Float v,Float max){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_87_wrapCircular)
HXLINE(  88)		v = ::hx::Mod(v,max);
HXLINE(  89)		if ((v < 0)) {
HXLINE(  90)			v = (v + max);
            		}
HXLINE(  92)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,wrapCircular,return )


MathUtil_obj::MathUtil_obj()
{
}

bool MathUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { outValue = min_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"max") ) { outValue = max_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"round") ) { outValue = round_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clamp") ) { outValue = clamp_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fmodulo") ) { outValue = fmodulo_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { outValue = precision_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrapCircular") ) { outValue = wrapCircular_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"roundToNearest") ) { outValue = roundToNearest_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MathUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MathUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &MathUtil_obj::MAX_INT,HX_("MAX_INT",54,26,6d,69)},
	{::hx::fsInt,(void *) &MathUtil_obj::MIN_INT,HX_("MIN_INT",42,3c,46,da)},
	{::hx::fsFloat,(void *) &MathUtil_obj::MAX_FLOAT_DIFFERENCE,HX_("MAX_FLOAT_DIFFERENCE",7b,cc,9c,18)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void MathUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MathUtil_obj::MAX_INT,"MAX_INT");
	HX_MARK_MEMBER_NAME(MathUtil_obj::MIN_INT,"MIN_INT");
	HX_MARK_MEMBER_NAME(MathUtil_obj::MAX_FLOAT_DIFFERENCE,"MAX_FLOAT_DIFFERENCE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MathUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MathUtil_obj::MAX_INT,"MAX_INT");
	HX_VISIT_MEMBER_NAME(MathUtil_obj::MIN_INT,"MIN_INT");
	HX_VISIT_MEMBER_NAME(MathUtil_obj::MAX_FLOAT_DIFFERENCE,"MAX_FLOAT_DIFFERENCE");
};

#endif

::hx::Class MathUtil_obj::__mClass;

static ::String MathUtil_obj_sStaticFields[] = {
	HX_("MAX_INT",54,26,6d,69),
	HX_("MIN_INT",42,3c,46,da),
	HX_("MAX_FLOAT_DIFFERENCE",7b,cc,9c,18),
	HX_("distance",35,93,f9,6b),
	HX_("precision",3e,d5,c7,80),
	HX_("fmodulo",9c,85,60,52),
	HX_("round",4e,f8,65,ed),
	HX_("roundToNearest",f5,bd,fc,af),
	HX_("clamp",fb,72,58,48),
	HX_("min",92,11,53,00),
	HX_("max",a4,0a,53,00),
	HX_("wrapCircular",49,76,61,02),
	::String(null())
};

void MathUtil_obj::__register()
{
	MathUtil_obj _hx_dummy;
	MathUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.MathUtil",a4,45,a3,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MathUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MathUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MathUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MathUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MathUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MathUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MathUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MathUtil_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_4_boot)
HXDLIN(   4)		MAX_INT = (int)2147483647;
            	}
{
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_5_boot)
HXDLIN(   5)		MIN_INT = (int)-2147483648;
            	}
{
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_6_boot)
HXDLIN(   6)		MAX_FLOAT_DIFFERENCE = ((Float)0.0000001);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
