#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasVideo
#include <openfl/display/_internal/CanvasVideo.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Video
#include <openfl/media/Video.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_bc641a1b41c4fb26_13_render,"openfl.display._internal.CanvasVideo","render",0xf18a55dd,"openfl.display._internal.CanvasVideo.render","openfl/display/_internal/CanvasVideo.hx",13,0x917834da)
HX_LOCAL_STACK_FRAME(_hx_pos_bc641a1b41c4fb26_59_renderDrawable,"openfl.display._internal.CanvasVideo","renderDrawable",0x1179a29b,"openfl.display._internal.CanvasVideo.renderDrawable","openfl/display/_internal/CanvasVideo.hx",59,0x917834da)
HX_LOCAL_STACK_FRAME(_hx_pos_bc641a1b41c4fb26_64_renderDrawableMask,"openfl.display._internal.CanvasVideo","renderDrawableMask",0x1e3df927,"openfl.display._internal.CanvasVideo.renderDrawableMask","openfl/display/_internal/CanvasVideo.hx",64,0x917834da)
HX_LOCAL_STACK_FRAME(_hx_pos_bc641a1b41c4fb26_10_boot,"openfl.display._internal.CanvasVideo","boot",0xbfb6eef9,"openfl.display._internal.CanvasVideo.boot","openfl/display/_internal/CanvasVideo.hx",10,0x917834da)
namespace openfl{
namespace display{
namespace _internal{

void CanvasVideo_obj::__construct() { }

Dynamic CanvasVideo_obj::__CreateEmpty() { return new CanvasVideo_obj; }

void *CanvasVideo_obj::_hx_vtable = 0;

Dynamic CanvasVideo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CanvasVideo_obj > _hx_result = new CanvasVideo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasVideo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76405579;
}

void CanvasVideo_obj::render( ::openfl::media::Video video, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_bc641a1b41c4fb26_13_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasVideo_obj,render,(void))

void CanvasVideo_obj::renderDrawable( ::openfl::media::Video video, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_bc641a1b41c4fb26_59_renderDrawable)
HXLINE(  60)		::openfl::display::_internal::CanvasVideo_obj::render(video,renderer);
HXLINE(  61)		renderer->_hx___renderEvent(video);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasVideo_obj,renderDrawable,(void))

void CanvasVideo_obj::renderDrawableMask( ::openfl::media::Video video, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_bc641a1b41c4fb26_64_renderDrawableMask)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasVideo_obj,renderDrawableMask,(void))


CanvasVideo_obj::CanvasVideo_obj()
{
}

bool CanvasVideo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CanvasVideo_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CanvasVideo_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CanvasVideo_obj::__mClass;

static ::String CanvasVideo_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CanvasVideo_obj::__register()
{
	CanvasVideo_obj _hx_dummy;
	CanvasVideo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CanvasVideo",07,eb,5e,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasVideo_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CanvasVideo_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CanvasVideo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasVideo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasVideo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CanvasVideo_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bc641a1b41c4fb26_10_boot)
HXDLIN(  10)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
