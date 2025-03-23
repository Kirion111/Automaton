#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_Lib
#include <openfl/utils/_internal/Lib.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1226_new,"openfl.display.InteractiveObject","new",0x042d7309,"openfl.display.InteractiveObject.new","openfl/display/InteractiveObject.hx",1226,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1254_requestSoftKeyboard,"openfl.display.InteractiveObject","requestSoftKeyboard",0x985d3a49,"openfl.display.InteractiveObject.requestSoftKeyboard","openfl/display/InteractiveObject.hx",1254,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1262___allowMouseFocus,"openfl.display.InteractiveObject","__allowMouseFocus",0x4a3f2aa5,"openfl.display.InteractiveObject.__allowMouseFocus","openfl/display/InteractiveObject.hx",1262,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1266___getInteractive,"openfl.display.InteractiveObject","__getInteractive",0xf3ec43c3,"openfl.display.InteractiveObject.__getInteractive","openfl/display/InteractiveObject.hx",1266,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1282___hitTest,"openfl.display.InteractiveObject","__hitTest",0x5938388e,"openfl.display.InteractiveObject.__hitTest","openfl/display/InteractiveObject.hx",1282,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1289___tabTest,"openfl.display.InteractiveObject","__tabTest",0xbc287590,"openfl.display.InteractiveObject.__tabTest","openfl/display/InteractiveObject.hx",1289,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1298_get_tabEnabled,"openfl.display.InteractiveObject","get_tabEnabled",0x09837aec,"openfl.display.InteractiveObject.get_tabEnabled","openfl/display/InteractiveObject.hx",1298,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1302_set_tabEnabled,"openfl.display.InteractiveObject","set_tabEnabled",0x29a36360,"openfl.display.InteractiveObject.set_tabEnabled","openfl/display/InteractiveObject.hx",1302,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1315_get_tabIndex,"openfl.display.InteractiveObject","get_tabIndex",0x2bde10bd,"openfl.display.InteractiveObject.get_tabIndex","openfl/display/InteractiveObject.hx",1315,0x983a3689)
HX_LOCAL_STACK_FRAME(_hx_pos_762cd2e6f13bb015_1319_set_tabIndex,"openfl.display.InteractiveObject","set_tabIndex",0x40d73431,"openfl.display.InteractiveObject.set_tabIndex","openfl/display/InteractiveObject.hx",1319,0x983a3689)
namespace openfl{
namespace display{

void InteractiveObject_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1226_new)
HXLINE(1227)		super::__construct();
HXLINE(1229)		this->doubleClickEnabled = false;
HXLINE(1230)		this->mouseEnabled = true;
HXLINE(1231)		this->needsSoftKeyboard = false;
HXLINE(1232)		this->_hx___tabEnabled = null();
HXLINE(1233)		this->_hx___tabIndex = -1;
            	}

Dynamic InteractiveObject_obj::__CreateEmpty() { return new InteractiveObject_obj; }

void *InteractiveObject_obj::_hx_vtable = 0;

Dynamic InteractiveObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InteractiveObject_obj > _hx_result = new InteractiveObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InteractiveObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0330636f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x6b353933;
	}
}

bool InteractiveObject_obj::requestSoftKeyboard(){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1254_requestSoftKeyboard)
HXLINE(1255)		::openfl::utils::_internal::Lib_obj::notImplemented(::hx::SourceInfo(HX_("openfl/display/InteractiveObject.hx",89,36,3a,98),1255,HX_("openfl.display.InteractiveObject",97,3a,cb,f4),HX_("requestSoftKeyboard",a0,f5,a9,d4)));
HXLINE(1256)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,requestSoftKeyboard,return )

bool InteractiveObject_obj::_hx___allowMouseFocus(){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1262___allowMouseFocus)
HXDLIN(1262)		if (this->mouseEnabled) {
HXDLIN(1262)			return this->get_tabEnabled();
            		}
            		else {
HXDLIN(1262)			return false;
            		}
HXDLIN(1262)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,_hx___allowMouseFocus,return )

bool InteractiveObject_obj::_hx___getInteractive(::Array< ::Dynamic> stack){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1266___getInteractive)
HXLINE(1267)		if (::hx::IsNotNull( stack )) {
HXLINE(1269)			stack->push(::hx::ObjectPtr<OBJ_>(this));
HXLINE(1271)			if (::hx::IsNotNull( this->parent )) {
HXLINE(1273)				this->parent->_hx___getInteractive(stack);
            			}
            		}
HXLINE(1277)		return true;
            	}


bool InteractiveObject_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1282___hitTest)
HXLINE(1283)		bool _hx_tmp;
HXDLIN(1283)		bool _hx_tmp1;
HXDLIN(1283)		if (hitObject->get_visible()) {
HXLINE(1283)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE(1283)			_hx_tmp1 = true;
            		}
HXDLIN(1283)		if (!(_hx_tmp1)) {
HXLINE(1283)			if (interactiveOnly) {
HXLINE(1283)				_hx_tmp = !(this->mouseEnabled);
            			}
            			else {
HXLINE(1283)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(1283)			_hx_tmp = true;
            		}
HXDLIN(1283)		if (_hx_tmp) {
HXLINE(1283)			return false;
            		}
HXLINE(1284)		return this->super::_hx___hitTest(x,y,shapeFlag,stack,interactiveOnly,hitObject);
            	}


void InteractiveObject_obj::_hx___tabTest(::Array< ::Dynamic> stack){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1289___tabTest)
HXDLIN(1289)		if (this->get_tabEnabled()) {
HXLINE(1291)			stack->push(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,_hx___tabTest,(void))

bool InteractiveObject_obj::get_tabEnabled(){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1298_get_tabEnabled)
HXDLIN(1298)		if (::hx::IsEq( this->_hx___tabEnabled,true )) {
HXDLIN(1298)			return true;
            		}
            		else {
HXDLIN(1298)			return false;
            		}
HXDLIN(1298)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_tabEnabled,return )

bool InteractiveObject_obj::set_tabEnabled(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1302_set_tabEnabled)
HXLINE(1303)		if (::hx::IsNotEq( this->_hx___tabEnabled,value )) {
HXLINE(1305)			this->_hx___tabEnabled = value;
HXLINE(1307)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("tabEnabledChange",3c,45,98,72),true,false));
            		}
HXLINE(1310)		return ( (bool)(this->_hx___tabEnabled) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_tabEnabled,return )

int InteractiveObject_obj::get_tabIndex(){
            	HX_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1315_get_tabIndex)
HXDLIN(1315)		return this->_hx___tabIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_tabIndex,return )

int InteractiveObject_obj::set_tabIndex(int value){
            	HX_GC_STACKFRAME(&_hx_pos_762cd2e6f13bb015_1319_set_tabIndex)
HXLINE(1320)		if ((this->_hx___tabIndex != value)) {
HXLINE(1322)			if ((value < -1)) {
HXLINE(1322)				HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,(HX_("Parameter tabIndex must be a non-negative number; got ",9c,f8,24,a4) + value)));
            			}
HXLINE(1324)			this->_hx___tabIndex = value;
HXLINE(1326)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("tabIndexChange",cd,1d,78,90),true,false));
            		}
HXLINE(1329)		return this->_hx___tabIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_tabIndex,return )


::hx::ObjectPtr< InteractiveObject_obj > InteractiveObject_obj::__new() {
	::hx::ObjectPtr< InteractiveObject_obj > __this = new InteractiveObject_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< InteractiveObject_obj > InteractiveObject_obj::__alloc(::hx::Ctx *_hx_ctx) {
	InteractiveObject_obj *__this = (InteractiveObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InteractiveObject_obj), true, "openfl.display.InteractiveObject"));
	*(void **)__this = InteractiveObject_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InteractiveObject_obj::InteractiveObject_obj()
{
}

void InteractiveObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractiveObject);
	HX_MARK_MEMBER_NAME(doubleClickEnabled,"doubleClickEnabled");
	HX_MARK_MEMBER_NAME(focusRect,"focusRect");
	HX_MARK_MEMBER_NAME(mouseEnabled,"mouseEnabled");
	HX_MARK_MEMBER_NAME(needsSoftKeyboard,"needsSoftKeyboard");
	HX_MARK_MEMBER_NAME(softKeyboardInputAreaOfInterest,"softKeyboardInputAreaOfInterest");
	HX_MARK_MEMBER_NAME(_hx___tabEnabled,"__tabEnabled");
	HX_MARK_MEMBER_NAME(_hx___tabIndex,"__tabIndex");
	 ::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InteractiveObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(doubleClickEnabled,"doubleClickEnabled");
	HX_VISIT_MEMBER_NAME(focusRect,"focusRect");
	HX_VISIT_MEMBER_NAME(mouseEnabled,"mouseEnabled");
	HX_VISIT_MEMBER_NAME(needsSoftKeyboard,"needsSoftKeyboard");
	HX_VISIT_MEMBER_NAME(softKeyboardInputAreaOfInterest,"softKeyboardInputAreaOfInterest");
	HX_VISIT_MEMBER_NAME(_hx___tabEnabled,"__tabEnabled");
	HX_VISIT_MEMBER_NAME(_hx___tabIndex,"__tabIndex");
	 ::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val InteractiveObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tabIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tabIndex() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusRect") ) { return ::hx::Val( focusRect ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"__tabTest") ) { return ::hx::Val( _hx___tabTest_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tabEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tabEnabled() ); }
		if (HX_FIELD_EQ(inName,"__tabIndex") ) { return ::hx::Val( _hx___tabIndex ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { return ::hx::Val( mouseEnabled ); }
		if (HX_FIELD_EQ(inName,"__tabEnabled") ) { return ::hx::Val( _hx___tabEnabled ); }
		if (HX_FIELD_EQ(inName,"get_tabIndex") ) { return ::hx::Val( get_tabIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabIndex") ) { return ::hx::Val( set_tabIndex_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tabEnabled") ) { return ::hx::Val( get_tabEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabEnabled") ) { return ::hx::Val( set_tabEnabled_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return ::hx::Val( _hx___getInteractive_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { return ::hx::Val( needsSoftKeyboard ); }
		if (HX_FIELD_EQ(inName,"__allowMouseFocus") ) { return ::hx::Val( _hx___allowMouseFocus_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { return ::hx::Val( doubleClickEnabled ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"requestSoftKeyboard") ) { return ::hx::Val( requestSoftKeyboard_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"softKeyboardInputAreaOfInterest") ) { return ::hx::Val( softKeyboardInputAreaOfInterest ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val InteractiveObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tabIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tabIndex(inValue.Cast< int >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusRect") ) { focusRect=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tabEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tabEnabled(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__tabIndex") ) { _hx___tabIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { mouseEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tabEnabled") ) { _hx___tabEnabled=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { needsSoftKeyboard=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { doubleClickEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"softKeyboardInputAreaOfInterest") ) { softKeyboardInputAreaOfInterest=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractiveObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("doubleClickEnabled",ca,95,95,e6));
	outFields->push(HX_("focusRect",1c,a5,32,23));
	outFields->push(HX_("mouseEnabled",dc,54,d6,5f));
	outFields->push(HX_("needsSoftKeyboard",ae,4a,a3,a9));
	outFields->push(HX_("softKeyboardInputAreaOfInterest",47,41,03,f6));
	outFields->push(HX_("tabEnabled",ac,f6,08,40));
	outFields->push(HX_("tabIndex",7d,1c,b9,2c));
	outFields->push(HX_("__tabEnabled",cc,71,9c,78));
	outFields->push(HX_("__tabIndex",9d,8f,f1,cf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InteractiveObject_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(InteractiveObject_obj,doubleClickEnabled),HX_("doubleClickEnabled",ca,95,95,e6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(InteractiveObject_obj,focusRect),HX_("focusRect",1c,a5,32,23)},
	{::hx::fsBool,(int)offsetof(InteractiveObject_obj,mouseEnabled),HX_("mouseEnabled",dc,54,d6,5f)},
	{::hx::fsBool,(int)offsetof(InteractiveObject_obj,needsSoftKeyboard),HX_("needsSoftKeyboard",ae,4a,a3,a9)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(InteractiveObject_obj,softKeyboardInputAreaOfInterest),HX_("softKeyboardInputAreaOfInterest",47,41,03,f6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(InteractiveObject_obj,_hx___tabEnabled),HX_("__tabEnabled",cc,71,9c,78)},
	{::hx::fsInt,(int)offsetof(InteractiveObject_obj,_hx___tabIndex),HX_("__tabIndex",9d,8f,f1,cf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *InteractiveObject_obj_sStaticStorageInfo = 0;
#endif

static ::String InteractiveObject_obj_sMemberFields[] = {
	HX_("doubleClickEnabled",ca,95,95,e6),
	HX_("focusRect",1c,a5,32,23),
	HX_("mouseEnabled",dc,54,d6,5f),
	HX_("needsSoftKeyboard",ae,4a,a3,a9),
	HX_("softKeyboardInputAreaOfInterest",47,41,03,f6),
	HX_("__tabEnabled",cc,71,9c,78),
	HX_("__tabIndex",9d,8f,f1,cf),
	HX_("requestSoftKeyboard",a0,f5,a9,d4),
	HX_("__allowMouseFocus",3c,92,71,07),
	HX_("__getInteractive",0c,1c,37,f8),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__tabTest",27,ee,bd,c6),
	HX_("get_tabEnabled",f5,7e,fe,b5),
	HX_("set_tabEnabled",69,67,1e,d6),
	HX_("get_tabIndex",86,d0,d2,e1),
	HX_("set_tabIndex",fa,f3,cb,f6),
	::String(null()) };

::hx::Class InteractiveObject_obj::__mClass;

void InteractiveObject_obj::__register()
{
	InteractiveObject_obj _hx_dummy;
	InteractiveObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.InteractiveObject",97,3a,cb,f4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InteractiveObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InteractiveObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InteractiveObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InteractiveObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
