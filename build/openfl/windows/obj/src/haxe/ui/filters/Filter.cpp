#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_573f8742f0e2fb65_4_new,"haxe.ui.filters.Filter","new",0xde70b82f,"haxe.ui.filters.Filter.new","haxe/ui/filters/Filter.hx",4,0xc75b6f60)
HX_LOCAL_STACK_FRAME(_hx_pos_573f8742f0e2fb65_8_parse,"haxe.ui.filters.Filter","parse",0x0a5749c2,"haxe.ui.filters.Filter.parse","haxe/ui/filters/Filter.hx",8,0xc75b6f60)
HX_LOCAL_STACK_FRAME(_hx_pos_573f8742f0e2fb65_11_applyDefaults,"haxe.ui.filters.Filter","applyDefaults",0xef8b90af,"haxe.ui.filters.Filter.applyDefaults","haxe/ui/filters/Filter.hx",11,0xc75b6f60)
namespace haxe{
namespace ui{
namespace filters{

void Filter_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_573f8742f0e2fb65_4_new)
            	}

Dynamic Filter_obj::__CreateEmpty() { return new Filter_obj; }

void *Filter_obj::_hx_vtable = 0;

Dynamic Filter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Filter_obj > _hx_result = new Filter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Filter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2b166675;
}

void Filter_obj::parse(::cpp::VirtualArray filterDetails){
            	HX_STACKFRAME(&_hx_pos_573f8742f0e2fb65_8_parse)
HXDLIN(   8)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(   8)		::String _hx_tmp1 = ((HX_("WARNING: css filter '",9e,58,db,6b) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)))) + HX_("' has not implemented parse function",8f,da,d5,9b));
HXDLIN(   8)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("haxe/ui/filters/Filter.hx",60,6f,5b,c7),8,HX_("haxe.ui.filters.Filter",bd,74,2f,2e),HX_("parse",33,90,55,bd)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,parse,(void))

::cpp::VirtualArray Filter_obj::applyDefaults(::cpp::VirtualArray params,::cpp::VirtualArray defaults){
            	HX_STACKFRAME(&_hx_pos_573f8742f0e2fb65_11_applyDefaults)
HXLINE(  12)		::cpp::VirtualArray copy = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  14)		if (::hx::IsNotNull( defaults )) {
HXLINE(  15)			int _g = 0;
HXDLIN(  15)			while((_g < defaults->get_length())){
HXLINE(  15)				 ::Dynamic p = defaults->__get(_g);
HXDLIN(  15)				_g = (_g + 1);
HXLINE(  16)				copy->push(p);
            			}
            		}
HXLINE(  19)		if (::hx::IsNotNull( params )) {
HXLINE(  20)			int n = 0;
HXLINE(  21)			{
HXLINE(  21)				int _g = 0;
HXDLIN(  21)				while((_g < params->get_length())){
HXLINE(  21)					 ::Dynamic p = params->__get(_g);
HXDLIN(  21)					_g = (_g + 1);
HXLINE(  22)					copy->set(n,p);
HXLINE(  23)					n = (n + 1);
            				}
            			}
            		}
HXLINE(  27)		return copy;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Filter_obj,applyDefaults,return )


::hx::ObjectPtr< Filter_obj > Filter_obj::__new() {
	::hx::ObjectPtr< Filter_obj > __this = new Filter_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Filter_obj > Filter_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Filter_obj *__this = (Filter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Filter_obj), false, "haxe.ui.filters.Filter"));
	*(void **)__this = Filter_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Filter_obj::Filter_obj()
{
}

::hx::Val Filter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Filter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"applyDefaults") ) { outValue = applyDefaults_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Filter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Filter_obj_sStaticStorageInfo = 0;
#endif

static ::String Filter_obj_sMemberFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null()) };

::hx::Class Filter_obj::__mClass;

static ::String Filter_obj_sStaticFields[] = {
	HX_("applyDefaults",20,30,cf,ef),
	::String(null())
};

void Filter_obj::__register()
{
	Filter_obj _hx_dummy;
	Filter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.filters.Filter",bd,74,2f,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Filter_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Filter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Filter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Filter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Filter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Filter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace filters
