#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app__Event_Array_String__Void
#include <lime/app/_Event_Array_String__Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_utils_Resource_Void
#include <lime/app/_Event_lime_utils_Resource_Void.h>
#endif
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif
#ifndef INCLUDED_lime_system_WorkOutput
#include <lime/system/WorkOutput.h>
#endif
#ifndef INCLUDED_lime_ui_FileDialog
#include <lime/ui/FileDialog.h>
#endif
#ifndef INCLUDED_lime_ui_FileDialogType
#include <lime/ui/FileDialogType.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9e2e2667a273619d_51_new,"lime.ui.FileDialog","new",0x71237cb7,"lime.ui.FileDialog.new","lime/ui/FileDialog.hx",51,0x296febf9)
HX_LOCAL_STACK_FRAME(_hx_pos_9e2e2667a273619d_106_browse,"lime.ui.FileDialog","browse",0xc1264193,"lime.ui.FileDialog.browse","lime/ui/FileDialog.hx",106,0x296febf9)
HX_LOCAL_STACK_FRAME(_hx_pos_9e2e2667a273619d_142_browse,"lime.ui.FileDialog","browse",0xc1264193,"lime.ui.FileDialog.browse","lime/ui/FileDialog.hx",142,0x296febf9)
HX_LOCAL_STACK_FRAME(_hx_pos_9e2e2667a273619d_98_browse,"lime.ui.FileDialog","browse",0xc1264193,"lime.ui.FileDialog.browse","lime/ui/FileDialog.hx",98,0x296febf9)
HX_LOCAL_STACK_FRAME(_hx_pos_9e2e2667a273619d_230_open,"lime.ui.FileDialog","open",0x8e9b2393,"lime.ui.FileDialog.open","lime/ui/FileDialog.hx",230,0x296febf9)
HX_LOCAL_STACK_FRAME(_hx_pos_9e2e2667a273619d_246_open,"lime.ui.FileDialog","open",0x8e9b2393,"lime.ui.FileDialog.open","lime/ui/FileDialog.hx",246,0x296febf9)
HX_LOCAL_STACK_FRAME(_hx_pos_9e2e2667a273619d_225_open,"lime.ui.FileDialog","open",0x8e9b2393,"lime.ui.FileDialog.open","lime/ui/FileDialog.hx",225,0x296febf9)
HX_LOCAL_STACK_FRAME(_hx_pos_9e2e2667a273619d_293_save,"lime.ui.FileDialog","save",0x9134ab06,"lime.ui.FileDialog.save","lime/ui/FileDialog.hx",293,0x296febf9)
HX_LOCAL_STACK_FRAME(_hx_pos_9e2e2667a273619d_309_save,"lime.ui.FileDialog","save",0x9134ab06,"lime.ui.FileDialog.save","lime/ui/FileDialog.hx",309,0x296febf9)
HX_LOCAL_STACK_FRAME(_hx_pos_9e2e2667a273619d_282_save,"lime.ui.FileDialog","save",0x9134ab06,"lime.ui.FileDialog.save","lime/ui/FileDialog.hx",282,0x296febf9)
namespace lime{
namespace ui{

void FileDialog_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_9e2e2667a273619d_51_new)
HXLINE(  80)		this->onSelectMultiple =  ::lime::app::_Event_Array_String__Void_obj::__alloc( HX_CTX );
HXLINE(  74)		this->onSelect =  ::lime::app::_Event_String_Void_obj::__alloc( HX_CTX );
HXLINE(  68)		this->onSave =  ::lime::app::_Event_String_Void_obj::__alloc( HX_CTX );
HXLINE(  63)		this->onOpen =  ::lime::app::_Event_lime_utils_Resource_Void_obj::__alloc( HX_CTX );
HXLINE(  57)		this->onCancel =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
            	}

Dynamic FileDialog_obj::__CreateEmpty() { return new FileDialog_obj; }

void *FileDialog_obj::_hx_vtable = 0;

Dynamic FileDialog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FileDialog_obj > _hx_result = new FileDialog_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FileDialog_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c6b7285;
}

bool FileDialog_obj::browse( ::lime::ui::FileDialogType type,::String filter,::String defaultPath,::String title){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::lime::ui::FileDialog,_gthis,::Array< ::Dynamic>,type1,::String,filter) HXARGC(1)
            		void _hx_run( ::Dynamic result){
            			HX_GC_STACKFRAME(&_hx_pos_9e2e2667a273619d_106_browse)
HXLINE( 106)			switch((int)(type1->__get(0).StaticCast<  ::lime::ui::FileDialogType >()->_hx_getIndex())){
            				case (int)0: case (int)2: case (int)3: {
HXLINE( 109)					::String path = ( (::String)(result) );
HXLINE( 111)					if (::hx::IsNotNull( path )) {
HXLINE( 114)						bool _hx_tmp;
HXDLIN( 114)						bool _hx_tmp1;
HXDLIN( 114)						if (::hx::IsPointerEq( type1->__get(0).StaticCast<  ::lime::ui::FileDialogType >(),::lime::ui::FileDialogType_obj::SAVE_dyn() )) {
HXLINE( 114)							_hx_tmp1 = ::hx::IsNotNull( filter );
            						}
            						else {
HXLINE( 114)							_hx_tmp1 = false;
            						}
HXDLIN( 114)						if (_hx_tmp1) {
HXLINE( 114)							_hx_tmp = (path.indexOf(HX_(".",2e,00,00,00),null()) == -1);
            						}
            						else {
HXLINE( 114)							_hx_tmp = false;
            						}
HXDLIN( 114)						if (_hx_tmp) {
HXLINE( 116)							path = (path + (HX_(".",2e,00,00,00) + filter));
            						}
HXLINE( 119)						_gthis->onSelect->dispatch(path);
            					}
            					else {
HXLINE( 123)						_gthis->onCancel->dispatch();
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 127)					::Array< ::String > paths = ( (::Array< ::String >)(result) );
HXLINE( 129)					bool _hx_tmp;
HXDLIN( 129)					if (::hx::IsNotNull( paths )) {
HXLINE( 129)						_hx_tmp = (paths->length > 0);
            					}
            					else {
HXLINE( 129)						_hx_tmp = false;
            					}
HXDLIN( 129)					if (_hx_tmp) {
HXLINE( 131)						_gthis->onSelectMultiple->dispatch(paths);
            					}
            					else {
HXLINE( 135)						_gthis->onCancel->dispatch();
            					}
            				}
            				break;
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_1,::String,title, ::lime::_hx_system::ThreadPool,worker,::Array< ::Dynamic>,type1,::String,filter,::String,defaultPath) HXARGC(2)
            		void _hx_run( ::Dynamic _, ::lime::_hx_system::WorkOutput _hx___){
            			HX_GC_STACKFRAME(&_hx_pos_9e2e2667a273619d_142_browse)
HXLINE( 142)			switch((int)(type1->__get(0).StaticCast<  ::lime::ui::FileDialogType >()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 149)					::String path = null();
HXLINE( 151)					path = ( (::String)(( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_file_dialog_open_file(title,filter,defaultPath)) )) );
HXLINE( 154)					worker->sendComplete(path,null());
            				}
            				break;
            				case (int)1: {
HXLINE( 161)					 ::hx::Object * paths = ::hx::DynamicPtr(null());
HXLINE( 174)					paths = ::lime::_internal::backend::native::NativeCFFI_obj::lime_file_dialog_open_files(title,filter,defaultPath);
HXLINE( 178)					worker->sendComplete(( ( ::Dynamic)(paths) ),null());
            				}
            				break;
            				case (int)2: {
HXLINE( 197)					::String path = null();
HXLINE( 199)					path = ( (::String)(( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_file_dialog_save_file(title,filter,defaultPath)) )) );
HXLINE( 202)					worker->sendComplete(path,null());
            				}
            				break;
            				case (int)3: {
HXLINE( 185)					::String path = null();
HXLINE( 187)					path = ( (::String)(( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_file_dialog_open_directory(title,filter,defaultPath)) )) );
HXLINE( 190)					worker->sendComplete(path,null());
            				}
            				break;
            			}
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_9e2e2667a273619d_98_browse)
HXDLIN(  98)		::Array< ::Dynamic> type1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,type);
HXDLIN(  98)		 ::lime::ui::FileDialog _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  99)		if (::hx::IsNull( type1->__get(0).StaticCast<  ::lime::ui::FileDialogType >() )) {
HXLINE(  99)			type1[0] = ::lime::ui::FileDialogType_obj::OPEN_dyn();
            		}
HXLINE( 102)		 ::lime::_hx_system::ThreadPool worker =  ::lime::_hx_system::ThreadPool_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 104)		worker->onComplete->add( ::Dynamic(new _hx_Closure_0(_gthis,type1,filter)),null(),null());
HXLINE( 140)		worker->run( ::Dynamic(new _hx_Closure_1(title,worker,type1,filter,defaultPath)),null());
HXLINE( 206)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FileDialog_obj,browse,return )

bool FileDialog_obj::open(::String filter,::String defaultPath,::String title){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::lime::ui::FileDialog,_gthis) HXARGC(1)
            		void _hx_run(::String path){
            			HX_GC_STACKFRAME(&_hx_pos_9e2e2667a273619d_230_open)
HXLINE( 231)			if (::hx::IsNotNull( path )) {
HXLINE( 233)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 235)					 ::haxe::io::Bytes data = ::sys::io::File_obj::getBytes(path);
HXLINE( 236)					_gthis->onOpen->dispatch(data);
HXLINE( 237)					return;
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 239)						{
HXLINE( 239)							null();
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
HXLINE( 242)			_gthis->onCancel->dispatch();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_1,::String,title, ::lime::_hx_system::ThreadPool,worker,::String,filter,::String,defaultPath) HXARGC(2)
            		void _hx_run( ::Dynamic _, ::lime::_hx_system::WorkOutput _hx___){
            			HX_GC_STACKFRAME(&_hx_pos_9e2e2667a273619d_246_open)
HXLINE( 251)			::String path = null();
HXLINE( 253)			path = ( (::String)(( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_file_dialog_open_file(title,filter,defaultPath)) )) );
HXLINE( 256)			worker->sendComplete(path,null());
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_9e2e2667a273619d_225_open)
HXDLIN( 225)		 ::lime::ui::FileDialog _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 227)		 ::lime::_hx_system::ThreadPool worker =  ::lime::_hx_system::ThreadPool_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 229)		worker->onComplete->add( ::Dynamic(new _hx_Closure_0(_gthis)),null(),null());
HXLINE( 245)		worker->run( ::Dynamic(new _hx_Closure_1(title,worker,filter,defaultPath)),null());
HXLINE( 259)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FileDialog_obj,open,return )

bool FileDialog_obj::save( ::haxe::io::Bytes data,::String filter,::String defaultPath,::String title,::String __o_type){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::lime::ui::FileDialog,_gthis, ::haxe::io::Bytes,data) HXARGC(1)
            		void _hx_run(::String path){
            			HX_GC_STACKFRAME(&_hx_pos_9e2e2667a273619d_293_save)
HXLINE( 294)			if (::hx::IsNotNull( path )) {
HXLINE( 296)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 298)					::sys::io::File_obj::saveBytes(path,data);
HXLINE( 299)					_gthis->onSave->dispatch(path);
HXLINE( 300)					return;
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 302)						{
HXLINE( 302)							null();
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
HXLINE( 305)			_gthis->onCancel->dispatch();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_1,::String,title, ::lime::_hx_system::ThreadPool,worker,::String,filter,::String,defaultPath) HXARGC(2)
            		void _hx_run( ::Dynamic _, ::lime::_hx_system::WorkOutput _hx___){
            			HX_GC_STACKFRAME(&_hx_pos_9e2e2667a273619d_309_save)
HXLINE( 314)			::String path = null();
HXLINE( 316)			path = ( (::String)(( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_file_dialog_save_file(title,filter,defaultPath)) )) );
HXLINE( 319)			worker->sendComplete(path,null());
            		}
            		HX_END_LOCAL_FUNC2((void))

            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("application/octet-stream",5d,f8,82,30);
            	HX_GC_STACKFRAME(&_hx_pos_9e2e2667a273619d_282_save)
HXDLIN( 282)		 ::lime::ui::FileDialog _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 283)		if (::hx::IsNull( data )) {
HXLINE( 285)			this->onCancel->dispatch();
HXLINE( 286)			return false;
            		}
HXLINE( 290)		 ::lime::_hx_system::ThreadPool worker =  ::lime::_hx_system::ThreadPool_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 292)		worker->onComplete->add( ::Dynamic(new _hx_Closure_0(_gthis,data)),null(),null());
HXLINE( 308)		worker->run( ::Dynamic(new _hx_Closure_1(title,worker,filter,defaultPath)),null());
HXLINE( 322)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FileDialog_obj,save,return )


::hx::ObjectPtr< FileDialog_obj > FileDialog_obj::__new() {
	::hx::ObjectPtr< FileDialog_obj > __this = new FileDialog_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FileDialog_obj > FileDialog_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FileDialog_obj *__this = (FileDialog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FileDialog_obj), true, "lime.ui.FileDialog"));
	*(void **)__this = FileDialog_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FileDialog_obj::FileDialog_obj()
{
}

void FileDialog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileDialog);
	HX_MARK_MEMBER_NAME(onCancel,"onCancel");
	HX_MARK_MEMBER_NAME(onOpen,"onOpen");
	HX_MARK_MEMBER_NAME(onSave,"onSave");
	HX_MARK_MEMBER_NAME(onSelect,"onSelect");
	HX_MARK_MEMBER_NAME(onSelectMultiple,"onSelectMultiple");
	HX_MARK_END_CLASS();
}

void FileDialog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onCancel,"onCancel");
	HX_VISIT_MEMBER_NAME(onOpen,"onOpen");
	HX_VISIT_MEMBER_NAME(onSave,"onSave");
	HX_VISIT_MEMBER_NAME(onSelect,"onSelect");
	HX_VISIT_MEMBER_NAME(onSelectMultiple,"onSelectMultiple");
}

::hx::Val FileDialog_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { return ::hx::Val( open_dyn() ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onOpen") ) { return ::hx::Val( onOpen ); }
		if (HX_FIELD_EQ(inName,"onSave") ) { return ::hx::Val( onSave ); }
		if (HX_FIELD_EQ(inName,"browse") ) { return ::hx::Val( browse_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onCancel") ) { return ::hx::Val( onCancel ); }
		if (HX_FIELD_EQ(inName,"onSelect") ) { return ::hx::Val( onSelect ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onSelectMultiple") ) { return ::hx::Val( onSelectMultiple ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FileDialog_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onOpen") ) { onOpen=inValue.Cast<  ::lime::app::_Event_lime_utils_Resource_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onSave") ) { onSave=inValue.Cast<  ::lime::app::_Event_String_Void >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onCancel") ) { onCancel=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onSelect") ) { onSelect=inValue.Cast<  ::lime::app::_Event_String_Void >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onSelectMultiple") ) { onSelectMultiple=inValue.Cast<  ::lime::app::_Event_Array_String__Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileDialog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("onCancel",f9,e3,e0,97));
	outFields->push(HX_("onOpen",89,0c,3e,ec));
	outFields->push(HX_("onSave",fc,93,d7,ee));
	outFields->push(HX_("onSelect",7b,11,e0,49));
	outFields->push(HX_("onSelectMultiple",ab,22,15,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FileDialog_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(FileDialog_obj,onCancel),HX_("onCancel",f9,e3,e0,97)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_utils_Resource_Void */ ,(int)offsetof(FileDialog_obj,onOpen),HX_("onOpen",89,0c,3e,ec)},
	{::hx::fsObject /*  ::lime::app::_Event_String_Void */ ,(int)offsetof(FileDialog_obj,onSave),HX_("onSave",fc,93,d7,ee)},
	{::hx::fsObject /*  ::lime::app::_Event_String_Void */ ,(int)offsetof(FileDialog_obj,onSelect),HX_("onSelect",7b,11,e0,49)},
	{::hx::fsObject /*  ::lime::app::_Event_Array_String__Void */ ,(int)offsetof(FileDialog_obj,onSelectMultiple),HX_("onSelectMultiple",ab,22,15,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FileDialog_obj_sStaticStorageInfo = 0;
#endif

static ::String FileDialog_obj_sMemberFields[] = {
	HX_("onCancel",f9,e3,e0,97),
	HX_("onOpen",89,0c,3e,ec),
	HX_("onSave",fc,93,d7,ee),
	HX_("onSelect",7b,11,e0,49),
	HX_("onSelectMultiple",ab,22,15,00),
	HX_("browse",8a,dd,60,1c),
	HX_("open",ca,03,b4,49),
	HX_("save",3d,8b,4d,4c),
	::String(null()) };

::hx::Class FileDialog_obj::__mClass;

void FileDialog_obj::__register()
{
	FileDialog_obj _hx_dummy;
	FileDialog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.ui.FileDialog",45,55,f3,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FileDialog_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FileDialog_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileDialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileDialog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace ui
