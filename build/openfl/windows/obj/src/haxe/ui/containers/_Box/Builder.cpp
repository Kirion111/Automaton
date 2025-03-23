#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__Box_Builder
#include <haxe/ui/containers/_Box/Builder.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f9ea19f429751287_99_new,"haxe.ui.containers._Box.Builder","new",0xbdf85ef5,"haxe.ui.containers._Box.Builder.new","haxe/ui/containers/Box.hx",99,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_f9ea19f429751287_105_addComponent,"haxe.ui.containers._Box.Builder","addComponent",0xb6598927,"haxe.ui.containers._Box.Builder.addComponent","haxe/ui/containers/Box.hx",105,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_f9ea19f429751287_120_validateComponentData,"haxe.ui.containers._Box.Builder","validateComponentData",0x9efa46e6,"haxe.ui.containers._Box.Builder.validateComponentData","haxe/ui/containers/Box.hx",120,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_f9ea19f429751287_124_syncChildren,"haxe.ui.containers._Box.Builder","syncChildren",0x97475985,"haxe.ui.containers._Box.Builder.syncChildren","haxe/ui/containers/Box.hx",124,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_f9ea19f429751287_165_findRenderer,"haxe.ui.containers._Box.Builder","findRenderer",0x480b2967,"haxe.ui.containers._Box.Builder.findRenderer","haxe/ui/containers/Box.hx",165,0x1532cf5e)
namespace haxe{
namespace ui{
namespace containers{
namespace _Box{

void Builder_obj::__construct( ::haxe::ui::containers::Box box){
            	HX_STACKFRAME(&_hx_pos_f9ea19f429751287_99_new)
HXLINE( 100)		super::__construct(box);
HXLINE( 101)		this->_box = box;
            	}

Dynamic Builder_obj::__CreateEmpty() { return new Builder_obj; }

void *Builder_obj::_hx_vtable = 0;

Dynamic Builder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Builder_obj > _hx_result = new Builder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Builder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x63493edf;
	}
}

 ::haxe::ui::core::Component Builder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_f9ea19f429751287_105_addComponent)
HXLINE( 106)		bool _hx_tmp;
HXDLIN( 106)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE( 106)			_hx_tmp = ::hx::IsNull( this->_box->get_itemRenderer() );
            		}
            		else {
HXLINE( 106)			_hx_tmp = false;
            		}
HXDLIN( 106)		if (_hx_tmp) {
HXLINE( 107)			 ::haxe::ui::containers::_Box::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_Box::Builder >::cast(this->_box->_compositeBuilder);
HXLINE( 108)			if (builder->hasDataSource) {
HXLINE( 109)				this->_box->set_itemRenderer(::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(child));
HXLINE( 110)				this->_box->get_itemRenderer()->ready();
HXLINE( 111)				this->_box->get_itemRenderer()->handleVisibility(false);
HXLINE( 112)				this->_box->invalidateComponent(HX_("data",2a,56,63,42),false);
HXLINE( 113)				return child;
            			}
            		}
HXLINE( 116)		return this->super::addComponent(child);
            	}


void Builder_obj::validateComponentData(){
            	HX_STACKFRAME(&_hx_pos_f9ea19f429751287_120_validateComponentData)
HXDLIN( 120)		this->syncChildren();
            	}


void Builder_obj::syncChildren(){
            	HX_STACKFRAME(&_hx_pos_f9ea19f429751287_124_syncChildren)
HXLINE( 125)		if (!(this->hasDataSource)) {
HXLINE( 126)			return;
            		}
HXLINE( 129)		 ::haxe::ui::data::DataSource dataSource = this->_box->get_dataSource();
HXLINE( 130)		 ::haxe::ui::core::ItemRenderer itemRenderer = this->_box->get_itemRenderer();
HXLINE( 131)		if (::hx::IsNull( itemRenderer )) {
HXLINE( 132)			itemRenderer = this->_box->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 133)			if (::hx::IsNull( itemRenderer )) {
HXLINE( 134)				return;
            			}
HXLINE( 137)			this->_box->set_itemRenderer(itemRenderer);
HXLINE( 138)			this->_box->get_itemRenderer()->set_includeInLayout(false);
HXLINE( 139)			this->_box->get_itemRenderer()->ready();
HXLINE( 140)			this->_box->get_itemRenderer()->handleVisibility(false);
            		}
HXLINE( 143)		{
HXLINE( 143)			int _g = 0;
HXDLIN( 143)			int _g1 = dataSource->get_size();
HXDLIN( 143)			while((_g < _g1)){
HXLINE( 143)				_g = (_g + 1);
HXDLIN( 143)				int i = (_g - 1);
HXLINE( 144)				 ::Dynamic item = dataSource->get(i);
HXLINE( 145)				 ::haxe::ui::core::ItemRenderer renderer = this->findRenderer(item);
HXLINE( 146)				if (::hx::IsNull( renderer )) {
HXLINE( 147)					renderer = Dynamic( itemRenderer->cloneComponent()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 148)					this->_box->addComponent(renderer);
            				}
HXLINE( 150)				renderer->itemIndex = i;
HXLINE( 151)				this->_box->setComponentIndex(renderer,i);
HXLINE( 152)				renderer->set_data(item);
            			}
            		}
HXLINE( 155)		{
HXLINE( 155)			int _g2 = 0;
HXDLIN( 155)			::Array< ::Dynamic> _g3 = this->_component->findComponents(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null());
HXDLIN( 155)			while((_g2 < _g3->length)){
HXLINE( 155)				 ::haxe::ui::core::ItemRenderer child = _g3->__get(_g2).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXDLIN( 155)				_g2 = (_g2 + 1);
HXLINE( 156)				if (::hx::IsInstanceEq( child,this->_box->get_itemRenderer() )) {
HXLINE( 157)					continue;
            				}
HXLINE( 159)				if ((dataSource->indexOf(child->get_data()) == -1)) {
HXLINE( 160)					this->_box->removeComponent(child,null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Builder_obj,syncChildren,(void))

 ::haxe::ui::core::ItemRenderer Builder_obj::findRenderer( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_f9ea19f429751287_165_findRenderer)
HXLINE( 166)		{
HXLINE( 166)			int _g = 0;
HXDLIN( 166)			::Array< ::Dynamic> _g1 = this->_component->findComponents(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null());
HXDLIN( 166)			while((_g < _g1->length)){
HXLINE( 166)				 ::haxe::ui::core::ItemRenderer child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXDLIN( 166)				_g = (_g + 1);
HXLINE( 167)				if (::hx::IsEq( child->get_data(),data )) {
HXLINE( 168)					return child;
            				}
            			}
            		}
HXLINE( 171)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,findRenderer,return )


::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::containers::Box box) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(box);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::Box box) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.containers._Box.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(box);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_box,"_box");
	HX_MARK_MEMBER_NAME(hasDataSource,"hasDataSource");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_box,"_box");
	HX_VISIT_MEMBER_NAME(hasDataSource,"hasDataSource");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_box") ) { return ::hx::Val( _box ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"syncChildren") ) { return ::hx::Val( syncChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"findRenderer") ) { return ::hx::Val( findRenderer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hasDataSource") ) { return ::hx::Val( hasDataSource ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"validateComponentData") ) { return ::hx::Val( validateComponentData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_box") ) { _box=inValue.Cast<  ::haxe::ui::containers::Box >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hasDataSource") ) { hasDataSource=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_box",0c,03,16,3f));
	outFields->push(HX_("hasDataSource",9f,2e,2a,38));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::Box */ ,(int)offsetof(Builder_obj,_box),HX_("_box",0c,03,16,3f)},
	{::hx::fsBool,(int)offsetof(Builder_obj,hasDataSource),HX_("hasDataSource",9f,2e,2a,38)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_box",0c,03,16,3f),
	HX_("hasDataSource",9f,2e,2a,38),
	HX_("addComponent",5c,12,a8,0e),
	HX_("validateComponentData",11,6f,7d,76),
	HX_("syncChildren",ba,e2,95,ef),
	HX_("findRenderer",9c,b2,59,a0),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._Box.Builder",83,c0,5e,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Builder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Builder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Builder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Builder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _Box
