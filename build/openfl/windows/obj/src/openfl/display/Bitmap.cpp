#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f5857023424199a6_123_new,"openfl.display.Bitmap","new",0x8bc0314b,"openfl.display.Bitmap.new","openfl/display/Bitmap.hx",123,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_139___enterFrame,"openfl.display.Bitmap","__enterFrame",0x534728ca,"openfl.display.Bitmap.__enterFrame","openfl/display/Bitmap.hx",139,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_146___getBounds,"openfl.display.Bitmap","__getBounds",0x13081c76,"openfl.display.Bitmap.__getBounds","openfl/display/Bitmap.hx",146,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_164___hitTest,"openfl.display.Bitmap","__hitTest",0x80f61450,"openfl.display.Bitmap.__hitTest","openfl/display/Bitmap.hx",164,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_192___hitTestMask,"openfl.display.Bitmap","__hitTestMask",0x7acde95c,"openfl.display.Bitmap.__hitTestMask","openfl/display/Bitmap.hx",192,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_211_get_bitmapData,"openfl.display.Bitmap","get_bitmapData",0x619f7ef7,"openfl.display.Bitmap.get_bitmapData","openfl/display/Bitmap.hx",211,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_215_set_bitmapData,"openfl.display.Bitmap","set_bitmapData",0x81bf676b,"openfl.display.Bitmap.set_bitmapData","openfl/display/Bitmap.hx",215,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_232_set_height,"openfl.display.Bitmap","set_height",0x5c7f7899,"openfl.display.Bitmap.set_height","openfl/display/Bitmap.hx",232,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_245_set_width,"openfl.display.Bitmap","set_width",0x0e856194,"openfl.display.Bitmap.set_width","openfl/display/Bitmap.hx",245,0x461b2743)
namespace openfl{
namespace display{

void Bitmap_obj::__construct( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,::hx::Null< bool >  __o_smoothing){
            		bool smoothing = __o_smoothing.Default(false);
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_123_new)
HXLINE( 124)		super::__construct();
HXLINE( 126)		this->_hx___drawableType = 2;
HXLINE( 127)		this->_hx___bitmapData = bitmapData;
HXLINE( 128)		this->pixelSnapping = pixelSnapping;
HXLINE( 129)		this->smoothing = smoothing;
HXLINE( 131)		if (::hx::IsNull( pixelSnapping )) {
HXLINE( 133)			this->pixelSnapping = 1;
            		}
            	}

Dynamic Bitmap_obj::__CreateEmpty() { return new Bitmap_obj; }

void *Bitmap_obj::_hx_vtable = 0;

Dynamic Bitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Bitmap_obj > _hx_result = new Bitmap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Bitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4cc42801) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x4cc42801;
		}
	} else {
		return inClassId==(int)0x6b353933;
	}
}

void Bitmap_obj::_hx___enterFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_139___enterFrame)
HXDLIN( 139)		bool _hx_tmp;
HXDLIN( 139)		bool _hx_tmp1;
HXDLIN( 139)		if (::hx::IsNotNull( this->_hx___bitmapData )) {
HXDLIN( 139)			_hx_tmp1 = ::hx::IsNotNull( this->_hx___bitmapData->image );
            		}
            		else {
HXDLIN( 139)			_hx_tmp1 = false;
            		}
HXDLIN( 139)		if (_hx_tmp1) {
HXDLIN( 139)			_hx_tmp = (this->_hx___bitmapData->image->version != this->_hx___imageVersion);
            		}
            		else {
HXDLIN( 139)			_hx_tmp = false;
            		}
HXDLIN( 139)		if (_hx_tmp) {
HXLINE( 141)			if (!(this->_hx___renderDirty)) {
HXLINE( 141)				this->_hx___renderDirty = true;
HXDLIN( 141)				this->_hx___setParentRenderDirty();
            			}
            		}
            	}


void Bitmap_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_146___getBounds)
HXLINE( 147)		 ::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 148)		if (::hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 150)			bounds->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(this->_hx___bitmapData->width) ),( (Float)(this->_hx___bitmapData->height) ));
            		}
            		else {
HXLINE( 154)			bounds->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
            		}
HXLINE( 157)		bounds->_hx___transform(bounds,matrix);
HXLINE( 158)		rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE( 159)		::openfl::geom::Rectangle_obj::_hx___pool->release(bounds);
            	}


bool Bitmap_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_164___hitTest)
HXLINE( 165)		bool _hx_tmp;
HXDLIN( 165)		bool _hx_tmp1;
HXDLIN( 165)		if (hitObject->get_visible()) {
HXLINE( 165)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE( 165)			_hx_tmp1 = true;
            		}
HXDLIN( 165)		if (!(_hx_tmp1)) {
HXLINE( 165)			_hx_tmp = ::hx::IsNull( this->_hx___bitmapData );
            		}
            		else {
HXLINE( 165)			_hx_tmp = true;
            		}
HXDLIN( 165)		if (_hx_tmp) {
HXLINE( 165)			return false;
            		}
HXLINE( 166)		bool _hx_tmp2;
HXDLIN( 166)		if (::hx::IsNotNull( this->get_mask() )) {
HXLINE( 166)			_hx_tmp2 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE( 166)			_hx_tmp2 = false;
            		}
HXDLIN( 166)		if (_hx_tmp2) {
HXLINE( 166)			return false;
            		}
HXLINE( 168)		this->_hx___getRenderTransform();
HXLINE( 170)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN( 170)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN( 170)		Float px;
HXDLIN( 170)		if ((norm == 0)) {
HXLINE( 170)			px = -(_this->tx);
            		}
            		else {
HXLINE( 170)			px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - y)) + (_this->d * (x - _this->tx))));
            		}
HXLINE( 171)		 ::openfl::geom::Matrix _this1 = this->_hx___renderTransform;
HXDLIN( 171)		Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN( 171)		Float py;
HXDLIN( 171)		if ((norm1 == 0)) {
HXLINE( 171)			py = -(_this1->ty);
            		}
            		else {
HXLINE( 171)			py = ((((Float)1.0) / norm1) * ((_this1->a * (y - _this1->ty)) + (_this1->b * (_this1->tx - x))));
            		}
HXLINE( 173)		bool _hx_tmp3;
HXDLIN( 173)		bool _hx_tmp4;
HXDLIN( 173)		bool _hx_tmp5;
HXDLIN( 173)		if ((px > 0)) {
HXLINE( 173)			_hx_tmp5 = (py > 0);
            		}
            		else {
HXLINE( 173)			_hx_tmp5 = false;
            		}
HXDLIN( 173)		if (_hx_tmp5) {
HXLINE( 173)			_hx_tmp4 = (px <= this->_hx___bitmapData->width);
            		}
            		else {
HXLINE( 173)			_hx_tmp4 = false;
            		}
HXDLIN( 173)		if (_hx_tmp4) {
HXLINE( 173)			_hx_tmp3 = (py <= this->_hx___bitmapData->height);
            		}
            		else {
HXLINE( 173)			_hx_tmp3 = false;
            		}
HXDLIN( 173)		if (_hx_tmp3) {
HXLINE( 175)			bool _hx_tmp;
HXDLIN( 175)			if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 175)				_hx_tmp = !(this->_hx___scrollRect->contains(px,py));
            			}
            			else {
HXLINE( 175)				_hx_tmp = false;
            			}
HXDLIN( 175)			if (_hx_tmp) {
HXLINE( 177)				return false;
            			}
HXLINE( 180)			bool _hx_tmp1;
HXDLIN( 180)			if (::hx::IsNotNull( stack )) {
HXLINE( 180)				_hx_tmp1 = !(interactiveOnly);
            			}
            			else {
HXLINE( 180)				_hx_tmp1 = false;
            			}
HXDLIN( 180)			if (_hx_tmp1) {
HXLINE( 182)				stack->push(hitObject);
            			}
HXLINE( 185)			return true;
            		}
HXLINE( 188)		return false;
            	}


bool Bitmap_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_192___hitTestMask)
HXLINE( 193)		if (::hx::IsNull( this->_hx___bitmapData )) {
HXLINE( 193)			return false;
            		}
HXLINE( 195)		this->_hx___getRenderTransform();
HXLINE( 197)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN( 197)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN( 197)		Float px;
HXDLIN( 197)		if ((norm == 0)) {
HXLINE( 197)			px = -(_this->tx);
            		}
            		else {
HXLINE( 197)			px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - y)) + (_this->d * (x - _this->tx))));
            		}
HXLINE( 198)		 ::openfl::geom::Matrix _this1 = this->_hx___renderTransform;
HXDLIN( 198)		Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN( 198)		Float py;
HXDLIN( 198)		if ((norm1 == 0)) {
HXLINE( 198)			py = -(_this1->ty);
            		}
            		else {
HXLINE( 198)			py = ((((Float)1.0) / norm1) * ((_this1->a * (y - _this1->ty)) + (_this1->b * (_this1->tx - x))));
            		}
HXLINE( 200)		bool _hx_tmp;
HXDLIN( 200)		bool _hx_tmp1;
HXDLIN( 200)		bool _hx_tmp2;
HXDLIN( 200)		if ((px > 0)) {
HXLINE( 200)			_hx_tmp2 = (py > 0);
            		}
            		else {
HXLINE( 200)			_hx_tmp2 = false;
            		}
HXDLIN( 200)		if (_hx_tmp2) {
HXLINE( 200)			_hx_tmp1 = (px <= this->_hx___bitmapData->width);
            		}
            		else {
HXLINE( 200)			_hx_tmp1 = false;
            		}
HXDLIN( 200)		if (_hx_tmp1) {
HXLINE( 200)			_hx_tmp = (py <= this->_hx___bitmapData->height);
            		}
            		else {
HXLINE( 200)			_hx_tmp = false;
            		}
HXDLIN( 200)		if (_hx_tmp) {
HXLINE( 202)			return true;
            		}
HXLINE( 205)		return false;
            	}


 ::openfl::display::BitmapData Bitmap_obj::get_bitmapData(){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_211_get_bitmapData)
HXDLIN( 211)		return this->_hx___bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_bitmapData,return )

 ::openfl::display::BitmapData Bitmap_obj::set_bitmapData( ::openfl::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_215_set_bitmapData)
HXLINE( 216)		this->_hx___bitmapData = value;
HXLINE( 217)		this->smoothing = false;
HXLINE( 219)		if (!(this->_hx___renderDirty)) {
HXLINE( 219)			this->_hx___renderDirty = true;
HXDLIN( 219)			this->_hx___setParentRenderDirty();
            		}
HXLINE( 221)		bool _hx_tmp = ::hx::IsNotNull( this->_hx___filters );
HXLINE( 226)		this->_hx___imageVersion = -1;
HXLINE( 228)		return this->_hx___bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_bitmapData,return )

Float Bitmap_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_232_set_height)
HXLINE( 233)		if (::hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 235)			this->set_scaleY((value / ( (Float)(this->_hx___bitmapData->height) )));
            		}
            		else {
HXLINE( 239)			this->set_scaleY(( (Float)(0) ));
            		}
HXLINE( 241)		return value;
            	}


Float Bitmap_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_245_set_width)
HXLINE( 246)		if (::hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 248)			this->set_scaleX((value / ( (Float)(this->_hx___bitmapData->width) )));
            		}
            		else {
HXLINE( 252)			this->set_scaleX(( (Float)(0) ));
            		}
HXLINE( 254)		return value;
            	}



::hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,::hx::Null< bool >  __o_smoothing) {
	::hx::ObjectPtr< Bitmap_obj > __this = new Bitmap_obj();
	__this->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return __this;
}

::hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,::hx::Null< bool >  __o_smoothing) {
	Bitmap_obj *__this = (Bitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Bitmap_obj), true, "openfl.display.Bitmap"));
	*(void **)__this = Bitmap_obj::_hx_vtable;
	__this->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return __this;
}

Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(_hx___bitmapData,"__bitmapData");
	HX_MARK_MEMBER_NAME(_hx___imageVersion,"__imageVersion");
	 ::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(_hx___bitmapData,"__bitmapData");
	HX_VISIT_MEMBER_NAME(_hx___imageVersion,"__imageVersion");
	 ::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Bitmap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return ::hx::Val( smoothing ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bitmapData() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { return ::hx::Val( _hx___bitmapData ); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return ::hx::Val( pixelSnapping ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return ::hx::Val( _hx___hitTestMask_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__imageVersion") ) { return ::hx::Val( _hx___imageVersion ); }
		if (HX_FIELD_EQ(inName,"get_bitmapData") ) { return ::hx::Val( get_bitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return ::hx::Val( set_bitmapData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Bitmap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bitmapData(inValue.Cast<  ::openfl::display::BitmapData >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { _hx___bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { pixelSnapping=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__imageVersion") ) { _hx___imageVersion=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bitmapData",b9,b5,c0,33));
	outFields->push(HX_("pixelSnapping",62,ae,a1,b8));
	outFields->push(HX_("smoothing",74,d5,e1,95));
	outFields->push(HX_("__bitmapData",d9,30,54,6c));
	outFields->push(HX_("__imageVersion",1d,e4,7a,8d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Bitmap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Bitmap_obj,pixelSnapping),HX_("pixelSnapping",62,ae,a1,b8)},
	{::hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_("smoothing",74,d5,e1,95)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(Bitmap_obj,_hx___bitmapData),HX_("__bitmapData",d9,30,54,6c)},
	{::hx::fsInt,(int)offsetof(Bitmap_obj,_hx___imageVersion),HX_("__imageVersion",1d,e4,7a,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Bitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String Bitmap_obj_sMemberFields[] = {
	HX_("pixelSnapping",62,ae,a1,b8),
	HX_("smoothing",74,d5,e1,95),
	HX_("__bitmapData",d9,30,54,6c),
	HX_("__imageVersion",1d,e4,7a,8d),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("get_bitmapData",02,3e,b6,a9),
	HX_("set_bitmapData",76,26,d6,c9),
	HX_("set_height",24,16,51,f6),
	HX_("set_width",69,fe,5c,f1),
	::String(null()) };

::hx::Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	Bitmap_obj _hx_dummy;
	Bitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Bitmap",d9,2f,4d,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Bitmap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Bitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
