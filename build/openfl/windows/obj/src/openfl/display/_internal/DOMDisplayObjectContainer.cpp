#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMDisplayObject
#include <openfl/display/_internal/DOMDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMDisplayObjectContainer
#include <openfl/display/_internal/DOMDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMShape
#include <openfl/display/_internal/DOMShape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8d5a21e4727bbbb1_9_renderDrawable,"openfl.display._internal.DOMDisplayObjectContainer","renderDrawable",0x78f8d07c,"openfl.display._internal.DOMDisplayObjectContainer.renderDrawable","openfl/display/_internal/DOMDisplayObjectContainer.hx",9,0x52e3047b)
HX_LOCAL_STACK_FRAME(_hx_pos_8d5a21e4727bbbb1_58_renderDrawableClear,"openfl.display._internal.DOMDisplayObjectContainer","renderDrawableClear",0xaedecf71,"openfl.display._internal.DOMDisplayObjectContainer.renderDrawableClear","openfl/display/_internal/DOMDisplayObjectContainer.hx",58,0x52e3047b)
namespace openfl{
namespace display{
namespace _internal{

void DOMDisplayObjectContainer_obj::__construct() { }

Dynamic DOMDisplayObjectContainer_obj::__CreateEmpty() { return new DOMDisplayObjectContainer_obj; }

void *DOMDisplayObjectContainer_obj::_hx_vtable = 0;

Dynamic DOMDisplayObjectContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DOMDisplayObjectContainer_obj > _hx_result = new DOMDisplayObjectContainer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMDisplayObjectContainer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d0dc1f8;
}

void DOMDisplayObjectContainer_obj::renderDrawable( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_8d5a21e4727bbbb1_9_renderDrawable)
HXLINE(  10)		{
HXLINE(  10)			 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  10)			while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  10)				 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  12)				if (::hx::IsNull( orphan1->stage )) {
HXLINE(  14)					renderer->_hx___renderDrawable(orphan1);
            				}
            			}
            		}
HXLINE(  18)		{
HXLINE(  18)			{
HXLINE(  18)				 ::Dynamic orphan1 = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  18)				while(( (bool)(orphan1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  18)					 ::openfl::display::DisplayObject orphan = ( ( ::openfl::display::DisplayObject)(orphan1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  18)					if (::hx::IsNull( orphan->stage )) {
HXLINE(  18)						orphan->_hx___cleanup();
            					}
            				}
            			}
HXDLIN(  18)			displayObjectContainer->_hx___removedChildren->set_length(0);
            		}
HXLINE(  20)		::openfl::display::_internal::DOMDisplayObject_obj::renderDrawable(displayObjectContainer,renderer);
HXLINE(  22)		bool _hx_tmp;
HXDLIN(  22)		if (::hx::IsNotNull( displayObjectContainer->_hx___cacheBitmap )) {
HXLINE(  22)			_hx_tmp = !(displayObjectContainer->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  22)			_hx_tmp = false;
            		}
HXDLIN(  22)		if (_hx_tmp) {
HXLINE(  24)			{
HXLINE(  24)				int _g = 0;
HXDLIN(  24)				::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  24)				while((_g < _g1->length)){
HXLINE(  24)					 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  24)					_g = (_g + 1);
HXLINE(  26)					renderer->_hx___renderDrawableClear(child);
            				}
            			}
HXLINE(  29)			::openfl::display::_internal::DOMShape_obj::clear(displayObjectContainer,renderer);
HXLINE(  30)			displayObjectContainer->_hx___cacheBitmap->stage = displayObjectContainer->stage;
HXLINE(  31)			return;
            		}
HXLINE(  34)		renderer->_hx___pushMaskObject(displayObjectContainer,null());
HXLINE(  36)		if (::hx::IsNotNull( renderer->_hx___stage )) {
HXLINE(  38)			{
HXLINE(  38)				int _g = 0;
HXDLIN(  38)				::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  38)				while((_g < _g1->length)){
HXLINE(  38)					 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  38)					_g = (_g + 1);
HXLINE(  40)					renderer->_hx___renderDrawable(child);
HXLINE(  41)					child->_hx___renderDirty = false;
            				}
            			}
HXLINE(  44)			displayObjectContainer->_hx___renderDirty = false;
            		}
            		else {
HXLINE(  48)			int _g = 0;
HXDLIN(  48)			::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  48)			while((_g < _g1->length)){
HXLINE(  48)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  48)				_g = (_g + 1);
HXLINE(  50)				renderer->_hx___renderDrawable(child);
            			}
            		}
HXLINE(  54)		renderer->_hx___popMaskObject(displayObjectContainer,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMDisplayObjectContainer_obj,renderDrawable,(void))

void DOMDisplayObjectContainer_obj::renderDrawableClear( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_8d5a21e4727bbbb1_58_renderDrawableClear)
HXLINE(  59)		{
HXLINE(  59)			 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  59)			while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  59)				 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  61)				if (::hx::IsNull( orphan1->stage )) {
HXLINE(  63)					renderer->_hx___renderDrawableClear(orphan1);
            				}
            			}
            		}
HXLINE(  67)		{
HXLINE(  67)			{
HXLINE(  67)				 ::Dynamic orphan1 = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  67)				while(( (bool)(orphan1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  67)					 ::openfl::display::DisplayObject orphan = ( ( ::openfl::display::DisplayObject)(orphan1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  67)					if (::hx::IsNull( orphan->stage )) {
HXLINE(  67)						orphan->_hx___cleanup();
            					}
            				}
            			}
HXDLIN(  67)			displayObjectContainer->_hx___removedChildren->set_length(0);
            		}
HXLINE(  69)		{
HXLINE(  69)			int _g = 0;
HXDLIN(  69)			::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  69)			while((_g < _g1->length)){
HXLINE(  69)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  69)				_g = (_g + 1);
HXLINE(  71)				renderer->_hx___renderDrawableClear(child);
            			}
            		}
HXLINE(  74)		::openfl::display::_internal::DOMDisplayObject_obj::clear(displayObjectContainer,renderer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMDisplayObjectContainer_obj,renderDrawableClear,(void))


DOMDisplayObjectContainer_obj::DOMDisplayObjectContainer_obj()
{
}

bool DOMDisplayObjectContainer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDrawableClear") ) { outValue = renderDrawableClear_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DOMDisplayObjectContainer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DOMDisplayObjectContainer_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DOMDisplayObjectContainer_obj::__mClass;

static ::String DOMDisplayObjectContainer_obj_sStaticFields[] = {
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableClear",d9,1f,f9,ad),
	::String(null())
};

void DOMDisplayObjectContainer_obj::__register()
{
	DOMDisplayObjectContainer_obj _hx_dummy;
	DOMDisplayObjectContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DOMDisplayObjectContainer",06,b4,39,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMDisplayObjectContainer_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DOMDisplayObjectContainer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DOMDisplayObjectContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMDisplayObjectContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMDisplayObjectContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
