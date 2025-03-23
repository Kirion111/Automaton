#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentContainer
#include <haxe/ui/core/IComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_25_fromString,"haxe.ui.util._Variant.Variant_Impl_","fromString",0xfb9b7992,"haxe.ui.util._Variant.Variant_Impl_.fromString","haxe/ui/util/Variant.hx",25,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_28_toString,"haxe.ui.util._Variant.Variant_Impl_","toString",0x21d4f0a3,"haxe.ui.util._Variant.Variant_Impl_.toString","haxe/ui/util/Variant.hx",28,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_48_get_isString,"haxe.ui.util._Variant.Variant_Impl_","get_isString",0x570e5fdb,"haxe.ui.util._Variant.Variant_Impl_.get_isString","haxe/ui/util/Variant.hx",48,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_55_fromFloat,"haxe.ui.util._Variant.Variant_Impl_","fromFloat",0x071587fb,"haxe.ui.util._Variant.Variant_Impl_.fromFloat","haxe/ui/util/Variant.hx",55,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_58_toFloat,"haxe.ui.util._Variant.Variant_Impl_","toFloat",0x56775e0a,"haxe.ui.util._Variant.Variant_Impl_.toFloat","haxe/ui/util/Variant.hx",58,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_71_get_isFloat,"haxe.ui.util._Variant.Variant_Impl_","get_isFloat",0xc051bdd2,"haxe.ui.util._Variant.Variant_Impl_.get_isFloat","haxe/ui/util/Variant.hx",71,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_78_fromInt,"haxe.ui.util._Variant.Variant_Impl_","fromInt",0xdf57298e,"haxe.ui.util._Variant.Variant_Impl_.fromInt","haxe/ui/util/Variant.hx",78,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_81_toInt,"haxe.ui.util._Variant.Variant_Impl_","toInt",0xf07c0ddd,"haxe.ui.util._Variant.Variant_Impl_.toInt","haxe/ui/util/Variant.hx",81,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_94_get_isInt,"haxe.ui.util._Variant.Variant_Impl_","get_isInt",0x54ed6ba5,"haxe.ui.util._Variant.Variant_Impl_.get_isInt","haxe/ui/util/Variant.hx",94,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_102_get_isNumber,"haxe.ui.util._Variant.Variant_Impl_","get_isNumber",0xe758bdd3,"haxe.ui.util._Variant.Variant_Impl_.get_isNumber","haxe/ui/util/Variant.hx",102,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_106_toNumber,"haxe.ui.util._Variant.Variant_Impl_","toNumber",0xb21f4e9b,"haxe.ui.util._Variant.Variant_Impl_.toNumber","haxe/ui/util/Variant.hx",106,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_117_fromBool,"haxe.ui.util._Variant.Variant_Impl_","fromBool",0x884d72ab,"haxe.ui.util._Variant.Variant_Impl_.fromBool","haxe/ui/util/Variant.hx",117,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_120_toBool,"haxe.ui.util._Variant.Variant_Impl_","toBool",0x7770537c,"haxe.ui.util._Variant.Variant_Impl_.toBool","haxe/ui/util/Variant.hx",120,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_132_get_isBool,"haxe.ui.util._Variant.Variant_Impl_","get_isBool",0xf63104b4,"haxe.ui.util._Variant.Variant_Impl_.get_isBool","haxe/ui/util/Variant.hx",132,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_144_fromArray,"haxe.ui.util._Variant.Variant_Impl_","fromArray",0x2a0e2ff8,"haxe.ui.util._Variant.Variant_Impl_.fromArray","haxe/ui/util/Variant.hx",144,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_147_toArray,"haxe.ui.util._Variant.Variant_Impl_","toArray",0x79700607,"haxe.ui.util._Variant.Variant_Impl_.toArray","haxe/ui/util/Variant.hx",147,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_158_get_isArray,"haxe.ui.util._Variant.Variant_Impl_","get_isArray",0xe34a65cf,"haxe.ui.util._Variant.Variant_Impl_.get_isArray","haxe/ui/util/Variant.hx",158,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_170_fromDate,"haxe.ui.util._Variant.Variant_Impl_","fromDate",0x899544af,"haxe.ui.util._Variant.Variant_Impl_.fromDate","haxe/ui/util/Variant.hx",170,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_173_toDate,"haxe.ui.util._Variant.Variant_Impl_","toDate",0x78b82580,"haxe.ui.util._Variant.Variant_Impl_.toDate","haxe/ui/util/Variant.hx",173,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_184_get_isDate,"haxe.ui.util._Variant.Variant_Impl_","get_isDate",0xf778d6b8,"haxe.ui.util._Variant.Variant_Impl_.get_isDate","haxe/ui/util/Variant.hx",184,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_196_fromComponent,"haxe.ui.util._Variant.Variant_Impl_","fromComponent",0x9a6cce9c,"haxe.ui.util._Variant.Variant_Impl_.fromComponent","haxe/ui/util/Variant.hx",196,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_199_toComponent,"haxe.ui.util._Variant.Variant_Impl_","toComponent",0x1174582b,"haxe.ui.util._Variant.Variant_Impl_.toComponent","haxe/ui/util/Variant.hx",199,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_210_get_isComponent,"haxe.ui.util._Variant.Variant_Impl_","get_isComponent",0xa98e3bf3,"haxe.ui.util._Variant.Variant_Impl_.get_isComponent","haxe/ui/util/Variant.hx",210,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_222_fromImageData,"haxe.ui.util._Variant.Variant_Impl_","fromImageData",0xafb0c904,"haxe.ui.util._Variant.Variant_Impl_.fromImageData","haxe/ui/util/Variant.hx",222,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_225_toImageData,"haxe.ui.util._Variant.Variant_Impl_","toImageData",0x26b85293,"haxe.ui.util._Variant.Variant_Impl_.toImageData","haxe/ui/util/Variant.hx",225,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_236_get_isImageData,"haxe.ui.util._Variant.Variant_Impl_","get_isImageData",0xbed2365b,"haxe.ui.util._Variant.Variant_Impl_.get_isImageData","haxe/ui/util/Variant.hx",236,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_248_fromDataSource,"haxe.ui.util._Variant.Variant_Impl_","fromDataSource",0x487cbbe6,"haxe.ui.util._Variant.Variant_Impl_.fromDataSource","haxe/ui/util/Variant.hx",248,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_251_toDataSource,"haxe.ui.util._Variant.Variant_Impl_","toDataSource",0xf80d8f77,"haxe.ui.util._Variant.Variant_Impl_.toDataSource","haxe/ui/util/Variant.hx",251,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_263_get_isDataSource,"haxe.ui.util._Variant.Variant_Impl_","get_isDataSource",0x769afaaf,"haxe.ui.util._Variant.Variant_Impl_.get_isDataSource","haxe/ui/util/Variant.hx",263,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_276_addFloat,"haxe.ui.util._Variant.Variant_Impl_","addFloat",0x655a0bb2,"haxe.ui.util._Variant.Variant_Impl_.addFloat","haxe/ui/util/Variant.hx",276,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_281_addInt,"haxe.ui.util._Variant.Variant_Impl_","addInt",0x9f9c8185,"haxe.ui.util._Variant.Variant_Impl_.addInt","haxe/ui/util/Variant.hx",281,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_286_subtractFloat,"haxe.ui.util._Variant.Variant_Impl_","subtractFloat",0x979d7891,"haxe.ui.util._Variant.Variant_Impl_.subtractFloat","haxe/ui/util/Variant.hx",286,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_291_subtractInt,"haxe.ui.util._Variant.Variant_Impl_","subtractInt",0xa730a8a4,"haxe.ui.util._Variant.Variant_Impl_.subtractInt","haxe/ui/util/Variant.hx",291,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_295_add,"haxe.ui.util._Variant.Variant_Impl_","add",0xf365d58a,"haxe.ui.util._Variant.Variant_Impl_.add","haxe/ui/util/Variant.hx",295,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_307_postInc,"haxe.ui.util._Variant.Variant_Impl_","postInc",0x9e568847,"haxe.ui.util._Variant.Variant_Impl_.postInc","haxe/ui/util/Variant.hx",307,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_318_preInc,"haxe.ui.util._Variant.Variant_Impl_","preInc",0xaf3c40b2,"haxe.ui.util._Variant.Variant_Impl_.preInc","haxe/ui/util/Variant.hx",318,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_326_subtract,"haxe.ui.util._Variant.Variant_Impl_","subtract",0xe177950b,"haxe.ui.util._Variant.Variant_Impl_.subtract","haxe/ui/util/Variant.hx",326,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_338_postDeinc,"haxe.ui.util._Variant.Variant_Impl_","postDeinc",0xe04f83a6,"haxe.ui.util._Variant.Variant_Impl_.postDeinc","haxe/ui/util/Variant.hx",338,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_349_preDeinc,"haxe.ui.util._Variant.Variant_Impl_","preDeinc",0x40646cd1,"haxe.ui.util._Variant.Variant_Impl_.preDeinc","haxe/ui/util/Variant.hx",349,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_357_multiply,"haxe.ui.util._Variant.Variant_Impl_","multiply",0x83f3021b,"haxe.ui.util._Variant.Variant_Impl_.multiply","haxe/ui/util/Variant.hx",357,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_366_divide,"haxe.ui.util._Variant.Variant_Impl_","divide",0xbfad93b0,"haxe.ui.util._Variant.Variant_Impl_.divide","haxe/ui/util/Variant.hx",366,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_375_gt,"haxe.ui.util._Variant.Variant_Impl_","gt",0x26f996e4,"haxe.ui.util._Variant.Variant_Impl_.gt","haxe/ui/util/Variant.hx",375,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_386_gte,"haxe.ui.util._Variant.Variant_Impl_","gte",0xf36a7101,"haxe.ui.util._Variant.Variant_Impl_.gte","haxe/ui/util/Variant.hx",386,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_397_lt,"haxe.ui.util._Variant.Variant_Impl_","lt",0x26f99b3f,"haxe.ui.util._Variant.Variant_Impl_.lt","haxe/ui/util/Variant.hx",397,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_408_lte,"haxe.ui.util._Variant.Variant_Impl_","lte",0xf36e3c46,"haxe.ui.util._Variant.Variant_Impl_.lte","haxe/ui/util/Variant.hx",408,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_419_negate,"haxe.ui.util._Variant.Variant_Impl_","negate",0x67b4a5f9,"haxe.ui.util._Variant.Variant_Impl_.negate","haxe/ui/util/Variant.hx",419,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_428_invert,"haxe.ui.util._Variant.Variant_Impl_","invert",0xa0744b4d,"haxe.ui.util._Variant.Variant_Impl_.invert","haxe/ui/util/Variant.hx",428,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_438_eq,"haxe.ui.util._Variant.Variant_Impl_","eq",0x26f99523,"haxe.ui.util._Variant.Variant_Impl_.eq","haxe/ui/util/Variant.hx",438,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_464_neq,"haxe.ui.util._Variant.Variant_Impl_","neq",0xf36fb3c3,"haxe.ui.util._Variant.Variant_Impl_.neq","haxe/ui/util/Variant.hx",464,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_471_get_isNull,"haxe.ui.util._Variant.Variant_Impl_","get_isNull",0xfe241f11,"haxe.ui.util._Variant.Variant_Impl_.get_isNull","haxe/ui/util/Variant.hx",471,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_478_fromDynamic,"haxe.ui.util._Variant.Variant_Impl_","fromDynamic",0x6990f79e,"haxe.ui.util._Variant.Variant_Impl_.fromDynamic","haxe/ui/util/Variant.hx",478,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_528_containsOnlyDigits,"haxe.ui.util._Variant.Variant_Impl_","containsOnlyDigits",0x58bb1268,"haxe.ui.util._Variant.Variant_Impl_.containsOnlyDigits","haxe/ui/util/Variant.hx",528,0x091cea34)
HX_LOCAL_STACK_FRAME(_hx_pos_6af1edf198e87d95_546_toDynamic,"haxe.ui.util._Variant.Variant_Impl_","toDynamic",0xb59faf6d,"haxe.ui.util._Variant.Variant_Impl_.toDynamic","haxe/ui/util/Variant.hx",546,0x091cea34)
namespace haxe{
namespace ui{
namespace util{
namespace _Variant{

void Variant_Impl__obj::__construct() { }

Dynamic Variant_Impl__obj::__CreateEmpty() { return new Variant_Impl__obj; }

void *Variant_Impl__obj::_hx_vtable = 0;

Dynamic Variant_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Variant_Impl__obj > _hx_result = new Variant_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Variant_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x63c8b07f;
}

 ::haxe::ui::util::VariantType Variant_Impl__obj::fromString(::String s){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_25_fromString)
HXDLIN(  25)		return ::haxe::ui::util::VariantType_obj::VT_String(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,fromString,return )

::String Variant_Impl__obj::toString( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_28_toString)
HXLINE(  29)		if (::hx::IsNull( this1 )) {
HXLINE(  30)			return null();
            		}
HXLINE(  32)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXLINE(  34)				int s = this1->_hx_getInt(0);
HXDLIN(  34)				return ::Std_obj::string(s);
            			}
            			break;
            			case (int)1: {
HXLINE(  35)				Float s = this1->_hx_getFloat(0);
HXDLIN(  35)				return ::Std_obj::string(s);
            			}
            			break;
            			case (int)2: {
HXLINE(  33)				::String s = this1->_hx_getString(0);
HXDLIN(  33)				return s;
            			}
            			break;
            			case (int)3: {
HXLINE(  36)				bool s = this1->_hx_getBool(0);
HXDLIN(  36)				return ::Std_obj::string(s);
            			}
            			break;
            			case (int)4: {
HXLINE(  37)				::cpp::VirtualArray s = this1->_hx_getObject(0).StaticCast< ::cpp::VirtualArray >();
HXDLIN(  37)				return ::Std_obj::string(s);
            			}
            			break;
            			case (int)5: {
HXLINE(  39)				 ::haxe::ui::data::DataSource s = this1->_hx_getObject(0).StaticCast<  ::haxe::ui::data::DataSource >();
HXDLIN(  39)				if (::hx::IsNull( s )) {
HXLINE(  39)					return null();
            				}
            				else {
HXLINE(  39)					return HX_("",00,00,00,00);
            				}
            			}
            			break;
            			case (int)6: {
HXLINE(  38)				 ::haxe::ui::core::Component s = this1->_hx_getObject(0).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  38)				if (::hx::IsNull( s )) {
HXLINE(  38)					return null();
            				}
            				else {
HXLINE(  38)					return HX_("",00,00,00,00);
            				}
            			}
            			break;
            			case (int)7: {
HXLINE(  40)				 ::Date s = this1->_hx_getObject(0).StaticCast<  ::Date >();
HXDLIN(  40)				return ::Std_obj::string(s);
            			}
            			break;
            			case (int)8: {
HXLINE(  41)				 ::openfl::display::BitmapData s = this1->_hx_getObject(0).StaticCast<  ::openfl::display::BitmapData >();
HXDLIN(  41)				if (::hx::IsNull( s )) {
HXLINE(  41)					return null();
            				}
            				else {
HXLINE(  41)					return HX_("",00,00,00,00);
            				}
            			}
            			break;
            		}
HXLINE(  32)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,toString,return )

bool Variant_Impl__obj::get_isString( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_48_get_isString)
HXDLIN(  48)		if ((this1->_hx_getIndex() == 2)) {
HXDLIN(  48)			::String _g = this1->_hx_getString(0);
HXDLIN(  48)			return true;
            		}
            		else {
HXDLIN(  48)			return false;
            		}
HXDLIN(  48)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,get_isString,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::fromFloat(Float s){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_55_fromFloat)
HXDLIN(  55)		return ::haxe::ui::util::VariantType_obj::VT_Float(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,fromFloat,return )

 ::Dynamic Variant_Impl__obj::toFloat( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_58_toFloat)
HXLINE(  59)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this1)) {
HXLINE(  60)			return null();
            		}
HXLINE(  62)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXLINE(  63)				int s = this1->_hx_getInt(0);
HXDLIN(  63)				return s;
            			}
            			break;
            			case (int)1: {
HXLINE(  64)				Float s = this1->_hx_getFloat(0);
HXDLIN(  64)				return s;
            			}
            			break;
            			default:{
HXLINE(  65)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Variant Type Error (",05,8b,aa,55) + ::Std_obj::string(this1)) + HX_(")",29,00,00,00))));
            			}
            		}
HXLINE(  62)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,toFloat,return )

bool Variant_Impl__obj::get_isFloat( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_71_get_isFloat)
HXDLIN(  71)		if ((this1->_hx_getIndex() == 1)) {
HXDLIN(  71)			Float _g = this1->_hx_getFloat(0);
HXDLIN(  71)			return true;
            		}
            		else {
HXDLIN(  71)			return false;
            		}
HXDLIN(  71)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,get_isFloat,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::fromInt(int s){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_78_fromInt)
HXDLIN(  78)		return ::haxe::ui::util::VariantType_obj::VT_Int(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,fromInt,return )

 ::Dynamic Variant_Impl__obj::toInt( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_81_toInt)
HXLINE(  82)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this1)) {
HXLINE(  83)			return null();
            		}
HXLINE(  85)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXLINE(  86)				int s = this1->_hx_getInt(0);
HXDLIN(  86)				return s;
            			}
            			break;
            			case (int)1: {
HXLINE(  87)				Float s = this1->_hx_getFloat(0);
HXDLIN(  87)				return ::Std_obj::_hx_int(s);
            			}
            			break;
            			default:{
HXLINE(  88)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Variant Type Error (",05,8b,aa,55) + ::Std_obj::string(this1)) + HX_(")",29,00,00,00))));
            			}
            		}
HXLINE(  85)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,toInt,return )

bool Variant_Impl__obj::get_isInt( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_94_get_isInt)
HXDLIN(  94)		if ((this1->_hx_getIndex() == 0)) {
HXDLIN(  94)			int _g = this1->_hx_getInt(0);
HXDLIN(  94)			return true;
            		}
            		else {
HXDLIN(  94)			return false;
            		}
HXDLIN(  94)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,get_isInt,return )

bool Variant_Impl__obj::get_isNumber( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_102_get_isNumber)
HXDLIN( 102)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 102)				int _g = this1->_hx_getInt(0);
HXDLIN( 102)				return true;
            			}
            			break;
            			case (int)1: {
HXDLIN( 102)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 102)				return true;
            			}
            			break;
            			default:{
HXDLIN( 102)				return false;
            			}
            		}
HXDLIN( 102)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,get_isNumber,return )

Float Variant_Impl__obj::toNumber( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_106_toNumber)
HXDLIN( 106)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXLINE( 107)				int s = this1->_hx_getInt(0);
HXDLIN( 107)				return ( (Float)(s) );
            			}
            			break;
            			case (int)1: {
HXLINE( 108)				Float s = this1->_hx_getFloat(0);
HXDLIN( 108)				return s;
            			}
            			break;
            			default:{
HXLINE( 109)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Variant Type Error (",05,8b,aa,55) + ::Std_obj::string(this1)) + HX_(")",29,00,00,00))));
            			}
            		}
HXLINE( 106)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,toNumber,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::fromBool(bool s){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_117_fromBool)
HXDLIN( 117)		return ::haxe::ui::util::VariantType_obj::VT_Bool(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,fromBool,return )

bool Variant_Impl__obj::toBool( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_120_toBool)
HXLINE( 121)		if (::hx::IsNull( this1 )) {
HXLINE( 122)			return false;
            		}
HXLINE( 124)		switch((int)(this1->_hx_getIndex())){
            			case (int)2: {
HXLINE( 126)				::String s = this1->_hx_getString(0);
HXDLIN( 126)				return (s == HX_("true",4e,a7,03,4d));
            			}
            			break;
            			case (int)3: {
HXLINE( 125)				bool s = this1->_hx_getBool(0);
HXDLIN( 125)				return s;
            			}
            			break;
            			default:{
HXLINE( 127)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Variant Type Error (",05,8b,aa,55) + ::Std_obj::string(this1)) + HX_(")",29,00,00,00))));
            			}
            		}
HXLINE( 124)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,toBool,return )

bool Variant_Impl__obj::get_isBool( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_132_get_isBool)
HXLINE( 133)		if ((this1->_hx_getIndex() == 3)) {
HXLINE( 134)			bool _g = this1->_hx_getBool(0);
HXDLIN( 134)			return true;
            		}
HXLINE( 137)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,get_isBool,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::fromArray(::cpp::VirtualArray s){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_144_fromArray)
HXDLIN( 144)		if (::hx::IsNull( s )) {
HXDLIN( 144)			return null();
            		}
            		else {
HXDLIN( 144)			return ::haxe::ui::util::VariantType_obj::VT_Array(s);
            		}
HXDLIN( 144)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,fromArray,return )

::cpp::VirtualArray Variant_Impl__obj::toArray( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_147_toArray)
HXLINE( 148)		if (::hx::IsNull( this1 )) {
HXLINE( 149)			return null();
            		}
HXLINE( 151)		if ((this1->_hx_getIndex() == 4)) {
HXLINE( 152)			::cpp::VirtualArray s = this1->_hx_getObject(0).StaticCast< ::cpp::VirtualArray >();
HXDLIN( 152)			return s;
            		}
            		else {
HXLINE( 153)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Variant Type Error (",05,8b,aa,55) + ::Std_obj::string(this1)) + HX_(")",29,00,00,00))));
            		}
HXLINE( 151)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,toArray,return )

bool Variant_Impl__obj::get_isArray( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_158_get_isArray)
HXLINE( 159)		if ((this1->_hx_getIndex() == 4)) {
HXLINE( 160)			::cpp::VirtualArray _g = this1->_hx_getObject(0).StaticCast< ::cpp::VirtualArray >();
HXDLIN( 160)			return true;
            		}
HXLINE( 163)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,get_isArray,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::fromDate( ::Date s){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_170_fromDate)
HXDLIN( 170)		return ::haxe::ui::util::VariantType_obj::VT_Date(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,fromDate,return )

 ::Date Variant_Impl__obj::toDate( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_173_toDate)
HXLINE( 174)		if (::hx::IsNull( this1 )) {
HXLINE( 175)			return null();
            		}
HXLINE( 177)		if ((this1->_hx_getIndex() == 7)) {
HXLINE( 178)			 ::Date s = this1->_hx_getObject(0).StaticCast<  ::Date >();
HXDLIN( 178)			return s;
            		}
            		else {
HXLINE( 179)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Variant Type Error (",05,8b,aa,55) + ::Std_obj::string(this1)) + HX_(")",29,00,00,00))));
            		}
HXLINE( 177)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,toDate,return )

bool Variant_Impl__obj::get_isDate( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_184_get_isDate)
HXLINE( 185)		if ((this1->_hx_getIndex() == 7)) {
HXLINE( 186)			 ::Date _g = this1->_hx_getObject(0).StaticCast<  ::Date >();
HXDLIN( 186)			return true;
            		}
HXLINE( 189)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,get_isDate,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::fromComponent( ::haxe::ui::core::Component s){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_196_fromComponent)
HXDLIN( 196)		return ::haxe::ui::util::VariantType_obj::VT_Component(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,fromComponent,return )

 ::haxe::ui::core::Component Variant_Impl__obj::toComponent( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_199_toComponent)
HXLINE( 200)		if (::hx::IsNull( this1 )) {
HXLINE( 201)			return null();
            		}
HXLINE( 203)		if ((this1->_hx_getIndex() == 6)) {
HXLINE( 204)			 ::haxe::ui::core::Component s = this1->_hx_getObject(0).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 204)			return s;
            		}
            		else {
HXLINE( 205)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Variant Type Error (",05,8b,aa,55) + ::Std_obj::string(this1)) + HX_(")",29,00,00,00))));
            		}
HXLINE( 203)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,toComponent,return )

bool Variant_Impl__obj::get_isComponent( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_210_get_isComponent)
HXLINE( 211)		if ((this1->_hx_getIndex() == 6)) {
HXLINE( 212)			 ::haxe::ui::core::Component _g = this1->_hx_getObject(0).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 212)			return true;
            		}
HXLINE( 215)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,get_isComponent,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::fromImageData( ::openfl::display::BitmapData s){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_222_fromImageData)
HXDLIN( 222)		return ::haxe::ui::util::VariantType_obj::VT_ImageData(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,fromImageData,return )

 ::openfl::display::BitmapData Variant_Impl__obj::toImageData( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_225_toImageData)
HXLINE( 226)		if (::hx::IsNull( this1 )) {
HXLINE( 227)			return null();
            		}
HXLINE( 229)		if ((this1->_hx_getIndex() == 8)) {
HXLINE( 230)			 ::openfl::display::BitmapData s = this1->_hx_getObject(0).StaticCast<  ::openfl::display::BitmapData >();
HXDLIN( 230)			return s;
            		}
            		else {
HXLINE( 231)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Variant Type Error (",05,8b,aa,55) + ::Std_obj::string(this1)) + HX_(")",29,00,00,00))));
            		}
HXLINE( 229)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,toImageData,return )

bool Variant_Impl__obj::get_isImageData( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_236_get_isImageData)
HXLINE( 237)		if ((this1->_hx_getIndex() == 8)) {
HXLINE( 238)			 ::openfl::display::BitmapData _g = this1->_hx_getObject(0).StaticCast<  ::openfl::display::BitmapData >();
HXDLIN( 238)			return true;
            		}
HXLINE( 241)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,get_isImageData,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::fromDataSource( ::haxe::ui::data::DataSource s){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_248_fromDataSource)
HXDLIN( 248)		return ::haxe::ui::util::VariantType_obj::VT_DataSource(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,fromDataSource,return )

 ::haxe::ui::data::DataSource Variant_Impl__obj::toDataSource( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_251_toDataSource)
HXLINE( 252)		if (::hx::IsNull( this1 )) {
HXLINE( 253)			return null();
            		}
HXLINE( 256)		if ((this1->_hx_getIndex() == 5)) {
HXLINE( 257)			 ::haxe::ui::data::DataSource s = this1->_hx_getObject(0).StaticCast<  ::haxe::ui::data::DataSource >();
HXDLIN( 257)			return s;
            		}
            		else {
HXLINE( 258)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Variant Type Error (",05,8b,aa,55) + ::Std_obj::string(this1)) + HX_(")",29,00,00,00))));
            		}
HXLINE( 256)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,toDataSource,return )

bool Variant_Impl__obj::get_isDataSource( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_263_get_isDataSource)
HXLINE( 264)		if ((this1->_hx_getIndex() == 5)) {
HXLINE( 265)			 ::haxe::ui::data::DataSource _g = this1->_hx_getObject(0).StaticCast<  ::haxe::ui::data::DataSource >();
HXDLIN( 265)			return true;
            		}
HXLINE( 268)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,get_isDataSource,return )

Float Variant_Impl__obj::addFloat(Float lhs, ::haxe::ui::util::VariantType rhs){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_276_addFloat)
HXDLIN( 276)		return (lhs + ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(rhs));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Variant_Impl__obj,addFloat,return )

int Variant_Impl__obj::addInt(int lhs, ::haxe::ui::util::VariantType rhs){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_281_addInt)
HXDLIN( 281)		return (lhs + ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(rhs));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Variant_Impl__obj,addInt,return )

Float Variant_Impl__obj::subtractFloat(Float lhs, ::haxe::ui::util::VariantType rhs){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_286_subtractFloat)
HXDLIN( 286)		return (lhs - ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(rhs));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Variant_Impl__obj,subtractFloat,return )

int Variant_Impl__obj::subtractInt(int lhs, ::haxe::ui::util::VariantType rhs){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_291_subtractInt)
HXDLIN( 291)		return (lhs - ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(rhs)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Variant_Impl__obj,subtractInt,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::add( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_295_add)
HXLINE( 296)		bool _hx_tmp;
HXDLIN( 296)		bool _hx_tmp1;
HXDLIN( 296)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXLINE( 296)				int _g = this1->_hx_getInt(0);
HXDLIN( 296)				_hx_tmp1 = true;
            			}
            			break;
            			case (int)1: {
HXLINE( 296)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 296)				_hx_tmp1 = true;
            			}
            			break;
            			default:{
HXLINE( 296)				_hx_tmp1 = false;
            			}
            		}
HXDLIN( 296)		if (_hx_tmp1) {
HXLINE( 296)			switch((int)(rhs->_hx_getIndex())){
            				case (int)0: {
HXLINE( 296)					int _g = rhs->_hx_getInt(0);
HXDLIN( 296)					_hx_tmp = true;
            				}
            				break;
            				case (int)1: {
HXLINE( 296)					Float _g = rhs->_hx_getFloat(0);
HXDLIN( 296)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE( 296)					_hx_tmp = false;
            				}
            			}
            		}
            		else {
HXLINE( 296)			_hx_tmp = false;
            		}
HXDLIN( 296)		if (_hx_tmp) {
HXLINE( 297)			Float _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(this1);
HXDLIN( 297)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat((_hx_tmp + ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(rhs)));
            		}
            		else {
HXLINE( 298)			bool _hx_tmp;
HXDLIN( 298)			if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isString(this1)) {
HXLINE( 298)				_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isString(rhs);
            			}
            			else {
HXLINE( 298)				_hx_tmp = false;
            			}
HXDLIN( 298)			if (_hx_tmp) {
HXLINE( 299)				::String _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this1);
HXDLIN( 299)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString((_hx_tmp + ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(rhs)));
            			}
            		}
HXLINE( 302)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Variant operation error",54,59,90,13)));
HXDLIN( 302)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Variant_Impl__obj,add,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::postInc( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_307_postInc)
HXDLIN( 307)		bool _hx_tmp;
HXDLIN( 307)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 307)				int _g = this1->_hx_getInt(0);
HXDLIN( 307)				_hx_tmp = true;
            			}
            			break;
            			case (int)1: {
HXDLIN( 307)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 307)				_hx_tmp = true;
            			}
            			break;
            			default:{
HXDLIN( 307)				_hx_tmp = false;
            			}
            		}
HXDLIN( 307)		if (_hx_tmp) {
HXLINE( 308)			 ::haxe::ui::util::VariantType old = this1;
HXLINE( 309)			this1 = ::haxe::ui::util::VariantType_obj::VT_Float((::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(this1) + 1));
HXLINE( 310)			return old;
            		}
            		else {
HXLINE( 312)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Variant operation error",54,59,90,13)));
            		}
HXLINE( 307)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,postInc,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::preInc( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_318_preInc)
HXDLIN( 318)		bool _hx_tmp;
HXDLIN( 318)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 318)				int _g = this1->_hx_getInt(0);
HXDLIN( 318)				_hx_tmp = true;
            			}
            			break;
            			case (int)1: {
HXDLIN( 318)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 318)				_hx_tmp = true;
            			}
            			break;
            			default:{
HXDLIN( 318)				_hx_tmp = false;
            			}
            		}
HXDLIN( 318)		if (_hx_tmp) {
HXLINE( 319)			this1 = ::haxe::ui::util::VariantType_obj::VT_Float((::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(this1) + 1));
HXDLIN( 319)			return this1;
            		}
            		else {
HXLINE( 321)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Variant operation error",54,59,90,13)));
            		}
HXLINE( 318)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,preInc,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::subtract( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_326_subtract)
HXLINE( 327)		bool _hx_tmp;
HXDLIN( 327)		bool _hx_tmp1;
HXDLIN( 327)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXLINE( 327)				int _g = this1->_hx_getInt(0);
HXDLIN( 327)				_hx_tmp1 = true;
            			}
            			break;
            			case (int)1: {
HXLINE( 327)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 327)				_hx_tmp1 = true;
            			}
            			break;
            			default:{
HXLINE( 327)				_hx_tmp1 = false;
            			}
            		}
HXDLIN( 327)		if (_hx_tmp1) {
HXLINE( 327)			switch((int)(rhs->_hx_getIndex())){
            				case (int)0: {
HXLINE( 327)					int _g = rhs->_hx_getInt(0);
HXDLIN( 327)					_hx_tmp = true;
            				}
            				break;
            				case (int)1: {
HXLINE( 327)					Float _g = rhs->_hx_getFloat(0);
HXDLIN( 327)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE( 327)					_hx_tmp = false;
            				}
            			}
            		}
            		else {
HXLINE( 327)			_hx_tmp = false;
            		}
HXDLIN( 327)		if (_hx_tmp) {
HXLINE( 328)			Float _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(this1);
HXDLIN( 328)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat((_hx_tmp - ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(rhs)));
            		}
            		else {
HXLINE( 329)			bool _hx_tmp;
HXDLIN( 329)			if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isString(this1)) {
HXLINE( 329)				_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isString(rhs);
            			}
            			else {
HXLINE( 329)				_hx_tmp = false;
            			}
HXDLIN( 329)			if (_hx_tmp) {
HXLINE( 330)				::String _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this1);
HXDLIN( 330)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(::StringTools_obj::replace(_hx_tmp,::haxe::ui::util::_Variant::Variant_Impl__obj::toString(rhs),HX_("",00,00,00,00)));
            			}
            		}
HXLINE( 333)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Variant operation error",54,59,90,13)));
HXDLIN( 333)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Variant_Impl__obj,subtract,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::postDeinc( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_338_postDeinc)
HXDLIN( 338)		bool _hx_tmp;
HXDLIN( 338)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 338)				int _g = this1->_hx_getInt(0);
HXDLIN( 338)				_hx_tmp = true;
            			}
            			break;
            			case (int)1: {
HXDLIN( 338)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 338)				_hx_tmp = true;
            			}
            			break;
            			default:{
HXDLIN( 338)				_hx_tmp = false;
            			}
            		}
HXDLIN( 338)		if (_hx_tmp) {
HXLINE( 339)			 ::haxe::ui::util::VariantType old = this1;
HXLINE( 340)			this1 = ::haxe::ui::util::VariantType_obj::VT_Float((::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(this1) - ( (Float)(1) )));
HXLINE( 341)			return old;
            		}
            		else {
HXLINE( 343)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Variant operation error",54,59,90,13)));
            		}
HXLINE( 338)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,postDeinc,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::preDeinc( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_349_preDeinc)
HXDLIN( 349)		bool _hx_tmp;
HXDLIN( 349)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 349)				int _g = this1->_hx_getInt(0);
HXDLIN( 349)				_hx_tmp = true;
            			}
            			break;
            			case (int)1: {
HXDLIN( 349)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 349)				_hx_tmp = true;
            			}
            			break;
            			default:{
HXDLIN( 349)				_hx_tmp = false;
            			}
            		}
HXDLIN( 349)		if (_hx_tmp) {
HXLINE( 350)			this1 = ::haxe::ui::util::VariantType_obj::VT_Float((::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(this1) - ( (Float)(1) )));
HXDLIN( 350)			return this1;
            		}
            		else {
HXLINE( 352)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Variant operation error",54,59,90,13)));
            		}
HXLINE( 349)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,preDeinc,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::multiply( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_357_multiply)
HXLINE( 358)		bool _hx_tmp;
HXDLIN( 358)		bool _hx_tmp1;
HXDLIN( 358)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXLINE( 358)				int _g = this1->_hx_getInt(0);
HXDLIN( 358)				_hx_tmp1 = true;
            			}
            			break;
            			case (int)1: {
HXLINE( 358)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 358)				_hx_tmp1 = true;
            			}
            			break;
            			default:{
HXLINE( 358)				_hx_tmp1 = false;
            			}
            		}
HXDLIN( 358)		if (_hx_tmp1) {
HXLINE( 358)			switch((int)(rhs->_hx_getIndex())){
            				case (int)0: {
HXLINE( 358)					int _g = rhs->_hx_getInt(0);
HXDLIN( 358)					_hx_tmp = true;
            				}
            				break;
            				case (int)1: {
HXLINE( 358)					Float _g = rhs->_hx_getFloat(0);
HXDLIN( 358)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE( 358)					_hx_tmp = false;
            				}
            			}
            		}
            		else {
HXLINE( 358)			_hx_tmp = false;
            		}
HXDLIN( 358)		if (_hx_tmp) {
HXLINE( 359)			Float _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(this1);
HXDLIN( 359)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat((_hx_tmp * ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(rhs)));
            		}
HXLINE( 362)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Variant operation error",54,59,90,13)));
HXDLIN( 362)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Variant_Impl__obj,multiply,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::divide( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_366_divide)
HXLINE( 367)		bool _hx_tmp;
HXDLIN( 367)		bool _hx_tmp1;
HXDLIN( 367)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXLINE( 367)				int _g = this1->_hx_getInt(0);
HXDLIN( 367)				_hx_tmp1 = true;
            			}
            			break;
            			case (int)1: {
HXLINE( 367)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 367)				_hx_tmp1 = true;
            			}
            			break;
            			default:{
HXLINE( 367)				_hx_tmp1 = false;
            			}
            		}
HXDLIN( 367)		if (_hx_tmp1) {
HXLINE( 367)			switch((int)(rhs->_hx_getIndex())){
            				case (int)0: {
HXLINE( 367)					int _g = rhs->_hx_getInt(0);
HXDLIN( 367)					_hx_tmp = true;
            				}
            				break;
            				case (int)1: {
HXLINE( 367)					Float _g = rhs->_hx_getFloat(0);
HXDLIN( 367)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE( 367)					_hx_tmp = false;
            				}
            			}
            		}
            		else {
HXLINE( 367)			_hx_tmp = false;
            		}
HXDLIN( 367)		if (_hx_tmp) {
HXLINE( 368)			Float _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(this1);
HXDLIN( 368)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat((_hx_tmp / ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(rhs)));
            		}
HXLINE( 371)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Variant operation error",54,59,90,13)));
HXDLIN( 371)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Variant_Impl__obj,divide,return )

bool Variant_Impl__obj::gt( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_375_gt)
HXLINE( 376)		bool _hx_tmp;
HXDLIN( 376)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXLINE( 376)				int _g = this1->_hx_getInt(0);
HXDLIN( 376)				_hx_tmp = true;
            			}
            			break;
            			case (int)1: {
HXLINE( 376)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 376)				_hx_tmp = true;
            			}
            			break;
            			default:{
HXLINE( 376)				_hx_tmp = false;
            			}
            		}
HXDLIN( 376)		if (_hx_tmp) {
HXLINE( 377)			Float _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(this1);
HXDLIN( 377)			return (_hx_tmp > ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(rhs));
            		}
            		else {
HXLINE( 378)			if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isString(this1)) {
HXLINE( 379)				::String _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this1);
HXDLIN( 379)				return (_hx_tmp > ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(rhs));
            			}
            		}
HXLINE( 382)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Variant operation error",54,59,90,13)));
HXDLIN( 382)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Variant_Impl__obj,gt,return )

bool Variant_Impl__obj::gte( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_386_gte)
HXLINE( 387)		bool _hx_tmp;
HXDLIN( 387)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXLINE( 387)				int _g = this1->_hx_getInt(0);
HXDLIN( 387)				_hx_tmp = true;
            			}
            			break;
            			case (int)1: {
HXLINE( 387)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 387)				_hx_tmp = true;
            			}
            			break;
            			default:{
HXLINE( 387)				_hx_tmp = false;
            			}
            		}
HXDLIN( 387)		if (_hx_tmp) {
HXLINE( 388)			Float _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(this1);
HXDLIN( 388)			return (_hx_tmp >= ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(rhs));
            		}
            		else {
HXLINE( 389)			if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isString(this1)) {
HXLINE( 390)				::String _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this1);
HXDLIN( 390)				return (_hx_tmp >= ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(rhs));
            			}
            		}
HXLINE( 393)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Variant operation error",54,59,90,13)));
HXDLIN( 393)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Variant_Impl__obj,gte,return )

bool Variant_Impl__obj::lt( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_397_lt)
HXLINE( 398)		bool _hx_tmp;
HXDLIN( 398)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXLINE( 398)				int _g = this1->_hx_getInt(0);
HXDLIN( 398)				_hx_tmp = true;
            			}
            			break;
            			case (int)1: {
HXLINE( 398)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 398)				_hx_tmp = true;
            			}
            			break;
            			default:{
HXLINE( 398)				_hx_tmp = false;
            			}
            		}
HXDLIN( 398)		if (_hx_tmp) {
HXLINE( 399)			Float _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(this1);
HXDLIN( 399)			return (_hx_tmp < ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(rhs));
            		}
            		else {
HXLINE( 400)			if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isString(this1)) {
HXLINE( 401)				::String _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this1);
HXDLIN( 401)				return (_hx_tmp < ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(rhs));
            			}
            		}
HXLINE( 404)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Variant operation error",54,59,90,13)));
HXDLIN( 404)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Variant_Impl__obj,lt,return )

bool Variant_Impl__obj::lte( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_408_lte)
HXLINE( 409)		bool _hx_tmp;
HXDLIN( 409)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXLINE( 409)				int _g = this1->_hx_getInt(0);
HXDLIN( 409)				_hx_tmp = true;
            			}
            			break;
            			case (int)1: {
HXLINE( 409)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 409)				_hx_tmp = true;
            			}
            			break;
            			default:{
HXLINE( 409)				_hx_tmp = false;
            			}
            		}
HXDLIN( 409)		if (_hx_tmp) {
HXLINE( 410)			Float _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(this1);
HXDLIN( 410)			return (_hx_tmp <= ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(rhs));
            		}
            		else {
HXLINE( 411)			if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isString(this1)) {
HXLINE( 412)				::String _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this1);
HXDLIN( 412)				return (_hx_tmp <= ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(rhs));
            			}
            		}
HXLINE( 415)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Variant operation error",54,59,90,13)));
HXDLIN( 415)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Variant_Impl__obj,lte,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::negate( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_419_negate)
HXLINE( 420)		bool _hx_tmp;
HXDLIN( 420)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXLINE( 420)				int _g = this1->_hx_getInt(0);
HXDLIN( 420)				_hx_tmp = true;
            			}
            			break;
            			case (int)1: {
HXLINE( 420)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 420)				_hx_tmp = true;
            			}
            			break;
            			default:{
HXLINE( 420)				_hx_tmp = false;
            			}
            		}
HXDLIN( 420)		if (_hx_tmp) {
HXLINE( 421)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(-(::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(this1)));
            		}
HXLINE( 424)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Variant operation error",54,59,90,13)));
HXDLIN( 424)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,negate,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::invert( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_428_invert)
HXLINE( 429)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isBool(this1)) {
HXLINE( 430)			bool v = ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this1);
HXLINE( 431)			v = !(v);
HXLINE( 432)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(v);
            		}
HXLINE( 434)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Variant operation error",54,59,90,13)));
HXDLIN( 434)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,invert,return )

bool Variant_Impl__obj::eq( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_438_eq)
HXLINE( 439)		bool _hx_tmp;
HXDLIN( 439)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this1)) {
HXLINE( 439)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(rhs);
            		}
            		else {
HXLINE( 439)			_hx_tmp = false;
            		}
HXDLIN( 439)		if (_hx_tmp) {
HXLINE( 440)			return true;
            		}
HXLINE( 443)		bool _hx_tmp1;
HXDLIN( 443)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this1)) {
HXLINE( 443)			_hx_tmp1 = !(::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(rhs));
            		}
            		else {
HXLINE( 443)			_hx_tmp1 = false;
            		}
HXDLIN( 443)		if (_hx_tmp1) {
HXLINE( 444)			return false;
            		}
HXLINE( 447)		bool _hx_tmp2;
HXDLIN( 447)		if (!(::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this1))) {
HXLINE( 447)			_hx_tmp2 = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(rhs);
            		}
            		else {
HXLINE( 447)			_hx_tmp2 = false;
            		}
HXDLIN( 447)		if (_hx_tmp2) {
HXLINE( 448)			return false;
            		}
HXLINE( 451)		bool _hx_tmp3;
HXDLIN( 451)		bool _hx_tmp4;
HXDLIN( 451)		switch((int)(this1->_hx_getIndex())){
            			case (int)0: {
HXLINE( 451)				int _g = this1->_hx_getInt(0);
HXDLIN( 451)				_hx_tmp4 = true;
            			}
            			break;
            			case (int)1: {
HXLINE( 451)				Float _g = this1->_hx_getFloat(0);
HXDLIN( 451)				_hx_tmp4 = true;
            			}
            			break;
            			default:{
HXLINE( 451)				_hx_tmp4 = false;
            			}
            		}
HXDLIN( 451)		if (_hx_tmp4) {
HXLINE( 451)			switch((int)(rhs->_hx_getIndex())){
            				case (int)0: {
HXLINE( 451)					int _g = rhs->_hx_getInt(0);
HXDLIN( 451)					_hx_tmp3 = true;
            				}
            				break;
            				case (int)1: {
HXLINE( 451)					Float _g = rhs->_hx_getFloat(0);
HXDLIN( 451)					_hx_tmp3 = true;
            				}
            				break;
            				default:{
HXLINE( 451)					_hx_tmp3 = false;
            				}
            			}
            		}
            		else {
HXLINE( 451)			_hx_tmp3 = false;
            		}
HXDLIN( 451)		if (_hx_tmp3) {
HXLINE( 452)			Float _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(this1);
HXDLIN( 452)			return (_hx_tmp == ::haxe::ui::util::_Variant::Variant_Impl__obj::toNumber(rhs));
            		}
            		else {
HXLINE( 453)			bool _hx_tmp;
HXDLIN( 453)			if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isBool(this1)) {
HXLINE( 453)				_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isBool(rhs);
            			}
            			else {
HXLINE( 453)				_hx_tmp = false;
            			}
HXDLIN( 453)			if (_hx_tmp) {
HXLINE( 454)				bool _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this1);
HXDLIN( 454)				return (_hx_tmp == ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(rhs));
            			}
            			else {
HXLINE( 455)				bool _hx_tmp;
HXDLIN( 455)				if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isString(this1)) {
HXLINE( 455)					_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isString(rhs);
            				}
            				else {
HXLINE( 455)					_hx_tmp = false;
            				}
HXDLIN( 455)				if (_hx_tmp) {
HXLINE( 456)					::String _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this1);
HXDLIN( 456)					return (_hx_tmp == ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(rhs));
            				}
            			}
            		}
HXLINE( 459)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Variant_Impl__obj,eq,return )

bool Variant_Impl__obj::neq( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_464_neq)
HXDLIN( 464)		return !(::haxe::ui::util::_Variant::Variant_Impl__obj::eq(this1,rhs));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Variant_Impl__obj,neq,return )

bool Variant_Impl__obj::get_isNull( ::haxe::ui::util::VariantType this1){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_471_get_isNull)
HXLINE( 472)		if (::hx::IsNull( this1 )) {
HXLINE( 473)			return true;
            		}
HXLINE( 475)		return ::hx::IsNull( ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this1) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,get_isNull,return )

 ::haxe::ui::util::VariantType Variant_Impl__obj::fromDynamic( ::Dynamic r){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_478_fromDynamic)
HXLINE( 479)		 ::haxe::ui::util::VariantType v = null();
HXLINE( 480)		if (::hx::IsNotNull( r )) {
HXLINE( 481)			bool unstringable;
HXDLIN( 481)			bool unstringable1;
HXDLIN( 481)			bool unstringable2;
HXDLIN( 481)			if (!(::Std_obj::isOfType(r,::hx::ClassOf< ::haxe::ui::core::Component >()))) {
HXLINE( 481)				unstringable2 = ::Std_obj::isOfType(r,::hx::ClassOf< ::openfl::display::BitmapData >());
            			}
            			else {
HXLINE( 481)				unstringable2 = true;
            			}
HXDLIN( 481)			if (!(unstringable2)) {
HXLINE( 481)				unstringable1 = ::Std_obj::isOfType(r,::hx::ArrayBase::__mClass);
            			}
            			else {
HXLINE( 481)				unstringable1 = true;
            			}
HXDLIN( 481)			if (!(unstringable1)) {
HXLINE( 481)				unstringable = ::Std_obj::isOfType(r,::hx::ClassOf< ::haxe::ui::data::DataSource >());
            			}
            			else {
HXLINE( 481)				unstringable = true;
            			}
HXLINE( 482)			if ((unstringable == false)) {
HXLINE( 483)				bool _hx_tmp;
HXDLIN( 483)				if (::haxe::ui::util::_Variant::Variant_Impl__obj::containsOnlyDigits(r)) {
HXLINE( 483)					_hx_tmp = (::Math_obj::isNaN(::Std_obj::parseFloat((HX_("",00,00,00,00) + ::Std_obj::string(r)))) == false);
            				}
            				else {
HXLINE( 483)					_hx_tmp = false;
            				}
HXDLIN( 483)				if (_hx_tmp) {
HXLINE( 484)					if ((::Std_obj::string(r).indexOf(HX_(".",2e,00,00,00),null()) != -1)) {
HXLINE( 485)						v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(::Std_obj::parseFloat((HX_("",00,00,00,00) + ::Std_obj::string(r))));
            					}
            					else {
HXLINE( 487)						v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(( (int)(::Std_obj::parseInt((HX_("",00,00,00,00) + ::Std_obj::string(r)))) ));
            					}
            				}
            				else {
HXLINE( 489)					bool _hx_tmp;
HXDLIN( 489)					if (((HX_("",00,00,00,00) + ::Std_obj::string(r)) != HX_("true",4e,a7,03,4d))) {
HXLINE( 489)						_hx_tmp = ((::Std_obj::string(r) + HX_("",00,00,00,00)) == HX_("false",a3,35,4f,fb));
            					}
            					else {
HXLINE( 489)						_hx_tmp = true;
            					}
HXDLIN( 489)					if (_hx_tmp) {
HXLINE( 490)						v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(((HX_("",00,00,00,00) + ::Std_obj::string(r)) == HX_("true",4e,a7,03,4d)));
            					}
            					else {
HXLINE( 491)						if (::Std_obj::isOfType(r,::hx::ClassOf< ::String >())) {
HXLINE( 492)							v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(::hx::TCast< ::String >::cast(r));
            						}
            						else {
HXLINE( 497)							v = r;
            						}
            					}
            				}
            			}
            			else {
HXLINE( 501)				if (::Std_obj::isOfType(r,::hx::ClassOf< ::haxe::ui::core::Component >())) {
HXLINE( 502)					v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(::hx::TCast<  ::haxe::ui::core::Component >::cast(r));
            				}
            				else {
HXLINE( 503)					if (::Std_obj::isOfType(r,::hx::ClassOf< ::haxe::ui::data::DataSource >())) {
HXLINE( 504)						v = r;
            					}
            					else {
HXLINE( 505)						if (::Std_obj::isOfType(r,::hx::ArrayBase::__mClass)) {
HXLINE( 510)							v = r;
            						}
            						else {
HXLINE( 512)							if (::Std_obj::isOfType(r,::hx::ClassOf< ::Date >())) {
HXLINE( 513)								v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDate(::hx::TCast<  ::Date >::cast(r));
            							}
            							else {
HXLINE( 514)								if (::Std_obj::isOfType(r,::hx::ClassOf< ::openfl::display::BitmapData >())) {
HXLINE( 515)									v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromImageData(::hx::TCast<  ::openfl::display::BitmapData >::cast(r));
            								}
            								else {
HXLINE( 520)									v = r;
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 525)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,fromDynamic,return )

bool Variant_Impl__obj::containsOnlyDigits( ::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_528_containsOnlyDigits)
HXLINE( 529)		bool _hx_tmp;
HXDLIN( 529)		bool _hx_tmp1;
HXDLIN( 529)		bool _hx_tmp2;
HXDLIN( 529)		if (!(::Std_obj::isOfType(s,::hx::ClassOf< ::haxe::ui::core::Component >()))) {
HXLINE( 529)			_hx_tmp2 = ::Std_obj::isOfType(s,::hx::ClassOf< ::openfl::display::BitmapData >());
            		}
            		else {
HXLINE( 529)			_hx_tmp2 = true;
            		}
HXDLIN( 529)		if (!(_hx_tmp2)) {
HXLINE( 529)			_hx_tmp1 = ::Std_obj::isOfType(s,::hx::ArrayBase::__mClass);
            		}
            		else {
HXLINE( 529)			_hx_tmp1 = true;
            		}
HXDLIN( 529)		if (!(_hx_tmp1)) {
HXLINE( 529)			_hx_tmp = ::Std_obj::isOfType(s,::hx::ClassOf< ::haxe::ui::data::DataSource >());
            		}
            		else {
HXLINE( 529)			_hx_tmp = true;
            		}
HXDLIN( 529)		if (_hx_tmp) {
HXLINE( 530)			return false;
            		}
HXLINE( 532)		bool _hx_tmp3;
HXDLIN( 532)		if (!(::Std_obj::isOfType(s,::hx::ClassOf< int >()))) {
HXLINE( 532)			_hx_tmp3 = ::Std_obj::isOfType(s,::hx::ClassOf< ::Float >());
            		}
            		else {
HXLINE( 532)			_hx_tmp3 = true;
            		}
HXDLIN( 532)		if (_hx_tmp3) {
HXLINE( 533)			return true;
            		}
HXLINE( 536)		::String t = ::Std_obj::string(s);
HXLINE( 537)		{
HXLINE( 537)			int _g = 0;
HXDLIN( 537)			int _g1 = t.length;
HXDLIN( 537)			while((_g < _g1)){
HXLINE( 537)				_g = (_g + 1);
HXDLIN( 537)				int i = (_g - 1);
HXLINE( 538)				::String c = t.charAt(i);
HXLINE( 539)				bool _hx_tmp;
HXDLIN( 539)				bool _hx_tmp1;
HXDLIN( 539)				bool _hx_tmp2;
HXDLIN( 539)				bool _hx_tmp3;
HXDLIN( 539)				bool _hx_tmp4;
HXDLIN( 539)				bool _hx_tmp5;
HXDLIN( 539)				bool _hx_tmp6;
HXDLIN( 539)				bool _hx_tmp7;
HXDLIN( 539)				bool _hx_tmp8;
HXDLIN( 539)				bool _hx_tmp9;
HXDLIN( 539)				bool _hx_tmp10;
HXDLIN( 539)				if ((c != HX_("0",30,00,00,00))) {
HXLINE( 539)					_hx_tmp10 = (c != HX_("1",31,00,00,00));
            				}
            				else {
HXLINE( 539)					_hx_tmp10 = false;
            				}
HXDLIN( 539)				if (_hx_tmp10) {
HXLINE( 539)					_hx_tmp9 = (c != HX_("2",32,00,00,00));
            				}
            				else {
HXLINE( 539)					_hx_tmp9 = false;
            				}
HXDLIN( 539)				if (_hx_tmp9) {
HXLINE( 539)					_hx_tmp8 = (c != HX_("3",33,00,00,00));
            				}
            				else {
HXLINE( 539)					_hx_tmp8 = false;
            				}
HXDLIN( 539)				if (_hx_tmp8) {
HXLINE( 539)					_hx_tmp7 = (c != HX_("4",34,00,00,00));
            				}
            				else {
HXLINE( 539)					_hx_tmp7 = false;
            				}
HXDLIN( 539)				if (_hx_tmp7) {
HXLINE( 539)					_hx_tmp6 = (c != HX_("5",35,00,00,00));
            				}
            				else {
HXLINE( 539)					_hx_tmp6 = false;
            				}
HXDLIN( 539)				if (_hx_tmp6) {
HXLINE( 539)					_hx_tmp5 = (c != HX_("6",36,00,00,00));
            				}
            				else {
HXLINE( 539)					_hx_tmp5 = false;
            				}
HXDLIN( 539)				if (_hx_tmp5) {
HXLINE( 539)					_hx_tmp4 = (c != HX_("7",37,00,00,00));
            				}
            				else {
HXLINE( 539)					_hx_tmp4 = false;
            				}
HXDLIN( 539)				if (_hx_tmp4) {
HXLINE( 539)					_hx_tmp3 = (c != HX_("8",38,00,00,00));
            				}
            				else {
HXLINE( 539)					_hx_tmp3 = false;
            				}
HXDLIN( 539)				if (_hx_tmp3) {
HXLINE( 539)					_hx_tmp2 = (c != HX_("9",39,00,00,00));
            				}
            				else {
HXLINE( 539)					_hx_tmp2 = false;
            				}
HXDLIN( 539)				if (_hx_tmp2) {
HXLINE( 539)					_hx_tmp1 = (c != HX_(".",2e,00,00,00));
            				}
            				else {
HXLINE( 539)					_hx_tmp1 = false;
            				}
HXDLIN( 539)				if (_hx_tmp1) {
HXLINE( 539)					_hx_tmp = (c != HX_("-",2d,00,00,00));
            				}
            				else {
HXLINE( 539)					_hx_tmp = false;
            				}
HXDLIN( 539)				if (_hx_tmp) {
HXLINE( 540)					return false;
            				}
            			}
            		}
HXLINE( 543)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,containsOnlyDigits,return )

 ::Dynamic Variant_Impl__obj::toDynamic( ::haxe::ui::util::VariantType v){
            	HX_STACKFRAME(&_hx_pos_6af1edf198e87d95_546_toDynamic)
HXLINE( 547)		 ::Dynamic d = v;
HXLINE( 548)		if (::hx::IsNotNull( v )) {
HXLINE( 549)			switch((int)(v->_hx_getIndex())){
            				case (int)0: {
HXLINE( 550)					int y = v->_hx_getInt(0);
HXDLIN( 550)					d = y;
            				}
            				break;
            				case (int)1: {
HXLINE( 551)					Float y = v->_hx_getFloat(0);
HXDLIN( 551)					d = y;
            				}
            				break;
            				case (int)2: {
HXLINE( 552)					::String y = v->_hx_getString(0);
HXDLIN( 552)					d = y;
            				}
            				break;
            				case (int)3: {
HXLINE( 553)					bool y = v->_hx_getBool(0);
HXDLIN( 553)					d = y;
            				}
            				break;
            				case (int)4: {
HXLINE( 554)					::cpp::VirtualArray y = v->_hx_getObject(0).StaticCast< ::cpp::VirtualArray >();
HXDLIN( 554)					d = y;
            				}
            				break;
            				case (int)5: {
HXLINE( 556)					 ::haxe::ui::data::DataSource y = v->_hx_getObject(0).StaticCast<  ::haxe::ui::data::DataSource >();
HXDLIN( 556)					d = y;
            				}
            				break;
            				case (int)6: {
HXLINE( 555)					 ::haxe::ui::core::Component y = v->_hx_getObject(0).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 555)					d = y;
            				}
            				break;
            				case (int)7: {
HXLINE( 557)					 ::Date y = v->_hx_getObject(0).StaticCast<  ::Date >();
HXDLIN( 557)					d = y;
            				}
            				break;
            				case (int)8: {
HXLINE( 558)					 ::openfl::display::BitmapData y = v->_hx_getObject(0).StaticCast<  ::openfl::display::BitmapData >();
HXDLIN( 558)					d = y;
            				}
            				break;
            			}
            		}
HXLINE( 561)		return d;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Variant_Impl__obj,toDynamic,return )


Variant_Impl__obj::Variant_Impl__obj()
{
}

bool Variant_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gt") ) { outValue = gt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lt") ) { outValue = lt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"eq") ) { outValue = eq_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"gte") ) { outValue = gte_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lte") ) { outValue = lte_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"neq") ) { outValue = neq_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toBool") ) { outValue = toBool_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toDate") ) { outValue = toDate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addInt") ) { outValue = addInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"preInc") ) { outValue = preInc_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"divide") ) { outValue = divide_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"negate") ) { outValue = negate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"invert") ) { outValue = invert_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toFloat") ) { outValue = toFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toArray") ) { outValue = toArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"postInc") ) { outValue = postInc_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toNumber") ) { outValue = toNumber_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromBool") ) { outValue = fromBool_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromDate") ) { outValue = fromDate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addFloat") ) { outValue = addFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"subtract") ) { outValue = subtract_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"preDeinc") ) { outValue = preDeinc_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"multiply") ) { outValue = multiply_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromFloat") ) { outValue = fromFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_isInt") ) { outValue = get_isInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"postDeinc") ) { outValue = postDeinc_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toDynamic") ) { outValue = toDynamic_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_isBool") ) { outValue = get_isBool_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_isDate") ) { outValue = get_isDate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_isNull") ) { outValue = get_isNull_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isFloat") ) { outValue = get_isFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_isArray") ) { outValue = get_isArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toComponent") ) { outValue = toComponent_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toImageData") ) { outValue = toImageData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"subtractInt") ) { outValue = subtractInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromDynamic") ) { outValue = fromDynamic_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_isString") ) { outValue = get_isString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_isNumber") ) { outValue = get_isNumber_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toDataSource") ) { outValue = toDataSource_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromComponent") ) { outValue = fromComponent_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromImageData") ) { outValue = fromImageData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"subtractFloat") ) { outValue = subtractFloat_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromDataSource") ) { outValue = fromDataSource_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isComponent") ) { outValue = get_isComponent_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_isImageData") ) { outValue = get_isImageData_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_isDataSource") ) { outValue = get_isDataSource_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"containsOnlyDigits") ) { outValue = containsOnlyDigits_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Variant_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Variant_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Variant_Impl__obj::__mClass;

static ::String Variant_Impl__obj_sStaticFields[] = {
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	HX_("get_isString",64,78,b3,1e),
	HX_("fromFloat",d2,af,1f,b7),
	HX_("toFloat",21,12,1b,cf),
	HX_("get_isFloat",69,c9,16,25),
	HX_("fromInt",a5,dd,fa,57),
	HX_("toInt",34,be,11,14),
	HX_("get_isInt",7c,93,f7,04),
	HX_("get_isNumber",5c,d6,fd,ae),
	HX_("toNumber",a4,2e,b9,c8),
	HX_("fromBool",b4,52,e7,9e),
	HX_("toBool",45,ef,d4,76),
	HX_("get_isBool",fd,b8,09,4f),
	HX_("fromArray",cf,57,18,da),
	HX_("toArray",1e,ba,13,f2),
	HX_("get_isArray",66,71,0f,48),
	HX_("fromDate",b8,24,2f,a0),
	HX_("toDate",49,c1,1c,78),
	HX_("get_isDate",01,8b,51,50),
	HX_("fromComponent",f3,2d,3d,83),
	HX_("toComponent",c2,63,39,76),
	HX_("get_isComponent",0a,5f,b6,ae),
	HX_("fromImageData",5b,28,81,98),
	HX_("toImageData",2a,5e,7d,8b),
	HX_("get_isImageData",72,59,fa,c3),
	HX_("fromDataSource",af,c8,ff,15),
	HX_("toDataSource",00,a8,b2,bf),
	HX_("get_isDataSource",b8,8b,91,f4),
	HX_("addFloat",bb,eb,f3,7b),
	HX_("addInt",4e,1d,01,9f),
	HX_("subtractFloat",e8,d7,6d,80),
	HX_("subtractInt",3b,b4,f5,0b),
	HX_("add",21,f2,49,00),
	HX_("postInc",5e,3c,fa,16),
	HX_("preInc",7b,dc,a0,ae),
	HX_("subtract",14,75,11,f8),
	HX_("postDeinc",7d,ab,59,90),
	HX_("preDeinc",da,4c,fe,56),
	HX_("multiply",24,e2,8c,9a),
	HX_("divide",79,2f,12,bf),
	HX_("gt",2d,5a,00,00),
	HX_("gte",98,8d,4e,00),
	HX_("lt",88,5e,00,00),
	HX_("lte",dd,58,52,00),
	HX_("negate",c2,41,19,67),
	HX_("invert",16,e7,d8,9f),
	HX_("eq",6c,58,00,00),
	HX_("neq",5a,d0,53,00),
	HX_("get_isNull",5a,d3,fc,56),
	HX_("fromDynamic",35,03,56,ce),
	HX_("containsOnlyDigits",b1,b7,3e,2e),
	HX_("toDynamic",44,d7,a9,65),
	::String(null())
};

void Variant_Impl__obj::__register()
{
	Variant_Impl__obj _hx_dummy;
	Variant_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util._Variant.Variant_Impl_",57,1b,2e,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Variant_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Variant_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Variant_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Variant_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Variant_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
} // end namespace _Variant
