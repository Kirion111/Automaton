#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__Box_Builder
#include <haxe/ui/containers/_Box/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__Box_DataSourceBehaviour
#include <haxe/ui/containers/_Box/DataSourceBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentContainer
#include <haxe/ui/core/IComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_data_ArrayDataSource
#include <haxe/ui/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_270c1e4620267da5_183_new,"haxe.ui.containers._Box.DataSourceBehaviour","new",0x0da70132,"haxe.ui.containers._Box.DataSourceBehaviour.new","haxe/ui/containers/Box.hx",183,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_270c1e4620267da5_188_set,"haxe.ui.containers._Box.DataSourceBehaviour","set",0x0daacc74,"haxe.ui.containers._Box.DataSourceBehaviour.set","haxe/ui/containers/Box.hx",188,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_270c1e4620267da5_195_set,"haxe.ui.containers._Box.DataSourceBehaviour","set",0x0daacc74,"haxe.ui.containers._Box.DataSourceBehaviour.set","haxe/ui/containers/Box.hx",195,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_270c1e4620267da5_204_get,"haxe.ui.containers._Box.DataSourceBehaviour","get",0x0da1b168,"haxe.ui.containers._Box.DataSourceBehaviour.get","haxe/ui/containers/Box.hx",204,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_270c1e4620267da5_211_get,"haxe.ui.containers._Box.DataSourceBehaviour","get",0x0da1b168,"haxe.ui.containers._Box.DataSourceBehaviour.get","haxe/ui/containers/Box.hx",211,0x1532cf5e)
namespace haxe{
namespace ui{
namespace containers{
namespace _Box{

void DataSourceBehaviour_obj::__construct( ::haxe::ui::containers::Box box){
            	HX_STACKFRAME(&_hx_pos_270c1e4620267da5_183_new)
HXLINE( 184)		super::__construct(box);
HXLINE( 185)		this->_box = box;
            	}

Dynamic DataSourceBehaviour_obj::__CreateEmpty() { return new DataSourceBehaviour_obj; }

void *DataSourceBehaviour_obj::_hx_vtable = 0;

Dynamic DataSourceBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataSourceBehaviour_obj > _hx_result = new DataSourceBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DataSourceBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x5b979980 || inClassId==(int)0x7e17fa9f;
	}
}

void DataSourceBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_270c1e4620267da5_188_set)
HXDLIN( 188)		 ::haxe::ui::containers::_Box::DataSourceBehaviour _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 189)		this->super::set(value);
HXLINE( 190)		 ::haxe::ui::data::DataSource dataSource = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->_value);
HXLINE( 191)		 ::haxe::ui::containers::_Box::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_Box::Builder >::cast(this->_box->_compositeBuilder);
HXLINE( 192)		if (::hx::IsNotNull( dataSource )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::containers::_Box::DataSourceBehaviour,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_270c1e4620267da5_195_set)
HXLINE( 195)				_gthis->_box->invalidateComponent(HX_("data",2a,56,63,42),false);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 193)			builder->hasDataSource = true;
HXLINE( 194)			dataSource->onDataSourceChange =  ::Dynamic(new _hx_Closure_0(_gthis));
            		}
            		else {
HXLINE( 198)			builder->hasDataSource = false;
HXLINE( 199)			this->_box->removeAllComponents(null());
            		}
HXLINE( 201)		this->_box->invalidateComponent(HX_("data",2a,56,63,42),false);
            	}


 ::haxe::ui::util::VariantType DataSourceBehaviour_obj::get(){
            	HX_GC_STACKFRAME(&_hx_pos_270c1e4620267da5_204_get)
HXDLIN( 204)		 ::haxe::ui::containers::_Box::DataSourceBehaviour _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 205)		bool _hx_tmp;
HXDLIN( 205)		if (::hx::IsNotNull( this->_value )) {
HXLINE( 205)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXLINE( 205)			_hx_tmp = true;
            		}
HXDLIN( 205)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::containers::_Box::DataSourceBehaviour,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_270c1e4620267da5_211_get)
HXLINE( 211)				_gthis->_box->invalidateComponent(HX_("data",2a,56,63,42),false);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 206)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource( ::haxe::ui::data::ArrayDataSource_obj::__alloc( HX_CTX ,null()));
HXLINE( 207)			 ::haxe::ui::data::DataSource dataSource = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->_value);
HXLINE( 208)			 ::haxe::ui::containers::_Box::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_Box::Builder >::cast(this->_box->_compositeBuilder);
HXLINE( 209)			builder->hasDataSource = true;
HXLINE( 210)			dataSource->onDataSourceChange =  ::Dynamic(new _hx_Closure_0(_gthis));
            		}
HXLINE( 214)		return this->_value;
            	}



::hx::ObjectPtr< DataSourceBehaviour_obj > DataSourceBehaviour_obj::__new( ::haxe::ui::containers::Box box) {
	::hx::ObjectPtr< DataSourceBehaviour_obj > __this = new DataSourceBehaviour_obj();
	__this->__construct(box);
	return __this;
}

::hx::ObjectPtr< DataSourceBehaviour_obj > DataSourceBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::Box box) {
	DataSourceBehaviour_obj *__this = (DataSourceBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataSourceBehaviour_obj), true, "haxe.ui.containers._Box.DataSourceBehaviour"));
	*(void **)__this = DataSourceBehaviour_obj::_hx_vtable;
	__this->__construct(box);
	return __this;
}

DataSourceBehaviour_obj::DataSourceBehaviour_obj()
{
}

void DataSourceBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataSourceBehaviour);
	HX_MARK_MEMBER_NAME(_box,"_box");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataSourceBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_box,"_box");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DataSourceBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_box") ) { return ::hx::Val( _box ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataSourceBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_box") ) { _box=inValue.Cast<  ::haxe::ui::containers::Box >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataSourceBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_box",0c,03,16,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataSourceBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::Box */ ,(int)offsetof(DataSourceBehaviour_obj,_box),HX_("_box",0c,03,16,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataSourceBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DataSourceBehaviour_obj_sMemberFields[] = {
	HX_("_box",0c,03,16,3f),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class DataSourceBehaviour_obj::__mClass;

void DataSourceBehaviour_obj::__register()
{
	DataSourceBehaviour_obj _hx_dummy;
	DataSourceBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._Box.DataSourceBehaviour",40,40,26,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataSourceBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataSourceBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataSourceBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataSourceBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _Box
