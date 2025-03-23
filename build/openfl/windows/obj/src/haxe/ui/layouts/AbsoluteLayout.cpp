#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_layouts_AbsoluteLayout
#include <haxe/ui/layouts/AbsoluteLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6b7fb966dacea102_5_new,"haxe.ui.layouts.AbsoluteLayout","new",0xe307d66a,"haxe.ui.layouts.AbsoluteLayout.new","haxe/ui/layouts/AbsoluteLayout.hx",5,0xd6ac0885)
HX_LOCAL_STACK_FRAME(_hx_pos_6b7fb966dacea102_8_repositionChildren,"haxe.ui.layouts.AbsoluteLayout","repositionChildren",0xcd6b55f1,"haxe.ui.layouts.AbsoluteLayout.repositionChildren","haxe/ui/layouts/AbsoluteLayout.hx",8,0xd6ac0885)
HX_LOCAL_STACK_FRAME(_hx_pos_677ba30905cd5f22_700_cloneLayout,"haxe.ui.layouts.AbsoluteLayout","cloneLayout",0x91a4b9f1,"haxe.ui.layouts.AbsoluteLayout.cloneLayout","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_da6117d31a4935cc_113_self,"haxe.ui.layouts.AbsoluteLayout","self",0xc721ce42,"haxe.ui.layouts.AbsoluteLayout.self","haxe/ui/macros/LayoutMacros.hx",113,0xe44eaad7)
namespace haxe{
namespace ui{
namespace layouts{

void AbsoluteLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6b7fb966dacea102_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic AbsoluteLayout_obj::__CreateEmpty() { return new AbsoluteLayout_obj; }

void *AbsoluteLayout_obj::_hx_vtable = 0;

Dynamic AbsoluteLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AbsoluteLayout_obj > _hx_result = new AbsoluteLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AbsoluteLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23db4184) {
		if (inClassId<=(int)0x0c893728) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c893728;
		} else {
			return inClassId==(int)0x23db4184;
		}
	} else {
		return inClassId==(int)0x3799f835;
	}
}

void AbsoluteLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_6b7fb966dacea102_8_repositionChildren)
            	}


 ::haxe::ui::layouts::Layout AbsoluteLayout_obj::cloneLayout(){
            	HX_STACKFRAME(&_hx_pos_677ba30905cd5f22_700_cloneLayout)
HXLINE(  85)		 ::haxe::ui::layouts::AbsoluteLayout c = ( ( ::haxe::ui::layouts::AbsoluteLayout)(this->super::cloneLayout()) );
HXLINE( 101)		return c;
            	}


 ::haxe::ui::layouts::Layout AbsoluteLayout_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_da6117d31a4935cc_113_self)
HXDLIN( 113)		return  ::haxe::ui::layouts::AbsoluteLayout_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< AbsoluteLayout_obj > AbsoluteLayout_obj::__new() {
	::hx::ObjectPtr< AbsoluteLayout_obj > __this = new AbsoluteLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AbsoluteLayout_obj > AbsoluteLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AbsoluteLayout_obj *__this = (AbsoluteLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AbsoluteLayout_obj), true, "haxe.ui.layouts.AbsoluteLayout"));
	*(void **)__this = AbsoluteLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AbsoluteLayout_obj::AbsoluteLayout_obj()
{
}

::hx::Val AbsoluteLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cloneLayout") ) { return ::hx::Val( cloneLayout_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AbsoluteLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AbsoluteLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String AbsoluteLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("cloneLayout",e7,99,0c,f5),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class AbsoluteLayout_obj::__mClass;

void AbsoluteLayout_obj::__register()
{
	AbsoluteLayout_obj _hx_dummy;
	AbsoluteLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.AbsoluteLayout",78,19,b6,14);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AbsoluteLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AbsoluteLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AbsoluteLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AbsoluteLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
