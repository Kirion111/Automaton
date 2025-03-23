#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_TileData
#include <openfl/display/TileData.h>
#endif
#ifndef INCLUDED_openfl_display_Tileset
#include <openfl/display/Tileset.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b61decb5082045e_66_new,"openfl.display.Tileset","new",0x154abbfc,"openfl.display.Tileset.new","openfl/display/Tileset.hx",66,0x8bc15676)
HX_LOCAL_STACK_FRAME(_hx_pos_7b61decb5082045e_90_addRect,"openfl.display.Tileset","addRect",0x4caf7981,"openfl.display.Tileset.addRect","openfl/display/Tileset.hx",90,0x8bc15676)
HX_LOCAL_STACK_FRAME(_hx_pos_7b61decb5082045e_111_clone,"openfl.display.Tileset","clone",0xb9a11df9,"openfl.display.Tileset.clone","openfl/display/Tileset.hx",111,0x8bc15676)
HX_LOCAL_STACK_FRAME(_hx_pos_7b61decb5082045e_137_hasRect,"openfl.display.Tileset","hasRect",0xdfb6573a,"openfl.display.Tileset.hasRect","openfl/display/Tileset.hx",137,0x8bc15676)
HX_LOCAL_STACK_FRAME(_hx_pos_7b61decb5082045e_159_getRect,"openfl.display.Tileset","getRect",0xe2f4e676,"openfl.display.Tileset.getRect","openfl/display/Tileset.hx",159,0x8bc15676)
HX_LOCAL_STACK_FRAME(_hx_pos_7b61decb5082045e_178_getRectID,"openfl.display.Tileset","getRectID",0x36d42fd1,"openfl.display.Tileset.getRectID","openfl/display/Tileset.hx",178,0x8bc15676)
HX_LOCAL_STACK_FRAME(_hx_pos_7b61decb5082045e_197_get_bitmapData,"openfl.display.Tileset","get_bitmapData",0x36c7ffe6,"openfl.display.Tileset.get_bitmapData","openfl/display/Tileset.hx",197,0x8bc15676)
HX_LOCAL_STACK_FRAME(_hx_pos_7b61decb5082045e_201_set_bitmapData,"openfl.display.Tileset","set_bitmapData",0x56e7e85a,"openfl.display.Tileset.set_bitmapData","openfl/display/Tileset.hx",201,0x8bc15676)
HX_LOCAL_STACK_FRAME(_hx_pos_7b61decb5082045e_214_get_numRects,"openfl.display.Tileset","get_numRects",0x7e9abb96,"openfl.display.Tileset.get_numRects","openfl/display/Tileset.hx",214,0x8bc15676)
namespace openfl{
namespace display{

void Tileset_obj::__construct( ::openfl::display::BitmapData bitmapData,::Array< ::Dynamic> rects){
            	HX_GC_STACKFRAME(&_hx_pos_7b61decb5082045e_66_new)
HXLINE(  69)		this->_hx___bitmapData = bitmapData;
HXLINE(  70)		int length = null();
HXDLIN(  70)		bool fixed = null();
HXDLIN(  70)		::Array< Float > array = null();
HXDLIN(  70)		this->rectData =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  72)		this->_hx___data = ::Array_obj< ::Dynamic>::__new();
HXLINE(  74)		if (::hx::IsNotNull( rects )) {
HXLINE(  76)			int _g = 0;
HXDLIN(  76)			while((_g < rects->length)){
HXLINE(  76)				 ::openfl::geom::Rectangle rect = rects->__get(_g).StaticCast<  ::openfl::geom::Rectangle >();
HXDLIN(  76)				_g = (_g + 1);
HXLINE(  78)				this->addRect(rect);
            			}
            		}
            	}

Dynamic Tileset_obj::__CreateEmpty() { return new Tileset_obj; }

void *Tileset_obj::_hx_vtable = 0;

Dynamic Tileset_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tileset_obj > _hx_result = new Tileset_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Tileset_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2af078e2;
}

int Tileset_obj::addRect( ::openfl::geom::Rectangle rect){
            	HX_GC_STACKFRAME(&_hx_pos_7b61decb5082045e_90_addRect)
HXLINE(  91)		if (::hx::IsNull( rect )) {
HXLINE(  91)			return -1;
            		}
HXLINE(  93)		this->rectData->push(rect->x);
HXLINE(  94)		this->rectData->push(rect->y);
HXLINE(  95)		this->rectData->push(rect->width);
HXLINE(  96)		this->rectData->push(rect->height);
HXLINE(  98)		 ::openfl::display::TileData tileData =  ::openfl::display::TileData_obj::__alloc( HX_CTX ,rect);
HXLINE(  99)		tileData->_hx___update(this->_hx___bitmapData);
HXLINE( 100)		this->_hx___data->push(tileData);
HXLINE( 102)		return (this->_hx___data->length - 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,addRect,return )

 ::openfl::display::Tileset Tileset_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_7b61decb5082045e_111_clone)
HXLINE( 112)		 ::openfl::display::Tileset tileset =  ::openfl::display::Tileset_obj::__alloc( HX_CTX ,this->_hx___bitmapData,null());
HXLINE( 113)		 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 115)		{
HXLINE( 115)			int _g = 0;
HXDLIN( 115)			::Array< ::Dynamic> _g1 = this->_hx___data;
HXDLIN( 115)			while((_g < _g1->length)){
HXLINE( 115)				 ::openfl::display::TileData tileData = _g1->__get(_g).StaticCast<  ::openfl::display::TileData >();
HXDLIN( 115)				_g = (_g + 1);
HXLINE( 117)				rect->setTo(( (Float)(tileData->x) ),( (Float)(tileData->y) ),( (Float)(tileData->width) ),( (Float)(tileData->height) ));
HXLINE( 118)				tileset->addRect(rect);
            			}
            		}
HXLINE( 122)		::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
HXLINE( 125)		return tileset;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tileset_obj,clone,return )

bool Tileset_obj::hasRect( ::openfl::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_7b61decb5082045e_137_hasRect)
HXLINE( 138)		{
HXLINE( 138)			int _g = 0;
HXDLIN( 138)			::Array< ::Dynamic> _g1 = this->_hx___data;
HXDLIN( 138)			while((_g < _g1->length)){
HXLINE( 138)				 ::openfl::display::TileData tileData = _g1->__get(_g).StaticCast<  ::openfl::display::TileData >();
HXDLIN( 138)				_g = (_g + 1);
HXLINE( 140)				bool _hx_tmp;
HXDLIN( 140)				bool _hx_tmp1;
HXDLIN( 140)				bool _hx_tmp2;
HXDLIN( 140)				if ((rect->x == tileData->x)) {
HXLINE( 140)					_hx_tmp2 = (rect->y == tileData->y);
            				}
            				else {
HXLINE( 140)					_hx_tmp2 = false;
            				}
HXDLIN( 140)				if (_hx_tmp2) {
HXLINE( 140)					_hx_tmp1 = (rect->width == tileData->width);
            				}
            				else {
HXLINE( 140)					_hx_tmp1 = false;
            				}
HXDLIN( 140)				if (_hx_tmp1) {
HXLINE( 140)					_hx_tmp = (rect->height == tileData->height);
            				}
            				else {
HXLINE( 140)					_hx_tmp = false;
            				}
HXDLIN( 140)				if (_hx_tmp) {
HXLINE( 142)					return true;
            				}
            			}
            		}
HXLINE( 146)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,hasRect,return )

 ::openfl::geom::Rectangle Tileset_obj::getRect(int id){
            	HX_GC_STACKFRAME(&_hx_pos_7b61decb5082045e_159_getRect)
HXLINE( 160)		bool _hx_tmp;
HXDLIN( 160)		if ((id < this->_hx___data->length)) {
HXLINE( 160)			_hx_tmp = (id >= 0);
            		}
            		else {
HXLINE( 160)			_hx_tmp = false;
            		}
HXDLIN( 160)		if (_hx_tmp) {
HXLINE( 162)			return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,this->_hx___data->__get(id).StaticCast<  ::openfl::display::TileData >()->x,this->_hx___data->__get(id).StaticCast<  ::openfl::display::TileData >()->y,this->_hx___data->__get(id).StaticCast<  ::openfl::display::TileData >()->width,this->_hx___data->__get(id).StaticCast<  ::openfl::display::TileData >()->height);
            		}
HXLINE( 165)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,getRect,return )

 ::Dynamic Tileset_obj::getRectID( ::openfl::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_7b61decb5082045e_178_getRectID)
HXLINE( 179)		 ::openfl::display::TileData tileData;
HXLINE( 181)		{
HXLINE( 181)			int _g = 0;
HXDLIN( 181)			int _g1 = this->_hx___data->length;
HXDLIN( 181)			while((_g < _g1)){
HXLINE( 181)				_g = (_g + 1);
HXDLIN( 181)				int i = (_g - 1);
HXLINE( 183)				tileData = this->_hx___data->__get(i).StaticCast<  ::openfl::display::TileData >();
HXLINE( 185)				bool _hx_tmp;
HXDLIN( 185)				bool _hx_tmp1;
HXDLIN( 185)				bool _hx_tmp2;
HXDLIN( 185)				if ((rect->x == tileData->x)) {
HXLINE( 185)					_hx_tmp2 = (rect->y == tileData->y);
            				}
            				else {
HXLINE( 185)					_hx_tmp2 = false;
            				}
HXDLIN( 185)				if (_hx_tmp2) {
HXLINE( 185)					_hx_tmp1 = (rect->width == tileData->width);
            				}
            				else {
HXLINE( 185)					_hx_tmp1 = false;
            				}
HXDLIN( 185)				if (_hx_tmp1) {
HXLINE( 185)					_hx_tmp = (rect->height == tileData->height);
            				}
            				else {
HXLINE( 185)					_hx_tmp = false;
            				}
HXDLIN( 185)				if (_hx_tmp) {
HXLINE( 187)					return i;
            				}
            			}
            		}
HXLINE( 191)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,getRectID,return )

 ::openfl::display::BitmapData Tileset_obj::get_bitmapData(){
            	HX_STACKFRAME(&_hx_pos_7b61decb5082045e_197_get_bitmapData)
HXDLIN( 197)		return this->_hx___bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tileset_obj,get_bitmapData,return )

 ::openfl::display::BitmapData Tileset_obj::set_bitmapData( ::openfl::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_7b61decb5082045e_201_set_bitmapData)
HXLINE( 202)		this->_hx___bitmapData = value;
HXLINE( 204)		{
HXLINE( 204)			int _g = 0;
HXDLIN( 204)			::Array< ::Dynamic> _g1 = this->_hx___data;
HXDLIN( 204)			while((_g < _g1->length)){
HXLINE( 204)				 ::openfl::display::TileData data = _g1->__get(_g).StaticCast<  ::openfl::display::TileData >();
HXDLIN( 204)				_g = (_g + 1);
HXLINE( 206)				data->_hx___update(this->_hx___bitmapData);
            			}
            		}
HXLINE( 209)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,set_bitmapData,return )

int Tileset_obj::get_numRects(){
            	HX_STACKFRAME(&_hx_pos_7b61decb5082045e_214_get_numRects)
HXDLIN( 214)		return this->_hx___data->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tileset_obj,get_numRects,return )


::hx::ObjectPtr< Tileset_obj > Tileset_obj::__new( ::openfl::display::BitmapData bitmapData,::Array< ::Dynamic> rects) {
	::hx::ObjectPtr< Tileset_obj > __this = new Tileset_obj();
	__this->__construct(bitmapData,rects);
	return __this;
}

::hx::ObjectPtr< Tileset_obj > Tileset_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bitmapData,::Array< ::Dynamic> rects) {
	Tileset_obj *__this = (Tileset_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tileset_obj), true, "openfl.display.Tileset"));
	*(void **)__this = Tileset_obj::_hx_vtable;
	__this->__construct(bitmapData,rects);
	return __this;
}

Tileset_obj::Tileset_obj()
{
}

void Tileset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tileset);
	HX_MARK_MEMBER_NAME(rectData,"rectData");
	HX_MARK_MEMBER_NAME(_hx___bitmapData,"__bitmapData");
	HX_MARK_MEMBER_NAME(_hx___data,"__data");
	HX_MARK_END_CLASS();
}

void Tileset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rectData,"rectData");
	HX_VISIT_MEMBER_NAME(_hx___bitmapData,"__bitmapData");
	HX_VISIT_MEMBER_NAME(_hx___data,"__data");
}

::hx::Val Tileset_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return ::hx::Val( _hx___data ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addRect") ) { return ::hx::Val( addRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasRect") ) { return ::hx::Val( hasRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRect") ) { return ::hx::Val( getRect_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rectData") ) { return ::hx::Val( rectData ); }
		if (HX_FIELD_EQ(inName,"numRects") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numRects() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getRectID") ) { return ::hx::Val( getRectID_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bitmapData() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { return ::hx::Val( _hx___bitmapData ); }
		if (HX_FIELD_EQ(inName,"get_numRects") ) { return ::hx::Val( get_numRects_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_bitmapData") ) { return ::hx::Val( get_bitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return ::hx::Val( set_bitmapData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Tileset_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { _hx___data=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rectData") ) { rectData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bitmapData(inValue.Cast<  ::openfl::display::BitmapData >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { _hx___bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tileset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bitmapData",b9,b5,c0,33));
	outFields->push(HX_("rectData",6e,31,7b,6d));
	outFields->push(HX_("numRects",a9,46,cc,a3));
	outFields->push(HX_("__bitmapData",d9,30,54,6c));
	outFields->push(HX_("__data",4a,b9,5b,f1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Tileset_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(Tileset_obj,rectData),HX_("rectData",6e,31,7b,6d)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(Tileset_obj,_hx___bitmapData),HX_("__bitmapData",d9,30,54,6c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Tileset_obj,_hx___data),HX_("__data",4a,b9,5b,f1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Tileset_obj_sStaticStorageInfo = 0;
#endif

static ::String Tileset_obj_sMemberFields[] = {
	HX_("rectData",6e,31,7b,6d),
	HX_("__bitmapData",d9,30,54,6c),
	HX_("__data",4a,b9,5b,f1),
	HX_("addRect",e5,8f,e4,87),
	HX_("clone",5d,13,63,48),
	HX_("hasRect",9e,6d,eb,1a),
	HX_("getRect",da,fc,29,1e),
	HX_("getRectID",35,a7,46,7a),
	HX_("get_bitmapData",02,3e,b6,a9),
	HX_("set_bitmapData",76,26,d6,c9),
	HX_("get_numRects",b2,fa,e5,58),
	::String(null()) };

::hx::Class Tileset_obj::__mClass;

void Tileset_obj::__register()
{
	Tileset_obj _hx_dummy;
	Tileset_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Tileset",0a,4e,4e,b4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Tileset_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Tileset_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tileset_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tileset_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
