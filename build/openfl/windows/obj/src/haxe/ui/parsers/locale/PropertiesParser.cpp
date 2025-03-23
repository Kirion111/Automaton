#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_locale_LocaleParser
#include <haxe/ui/parsers/locale/LocaleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_locale_PropertiesParser
#include <haxe/ui/parsers/locale/PropertiesParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4cfdadb2b79f4822_5_new,"haxe.ui.parsers.locale.PropertiesParser","new",0x1f54c70c,"haxe.ui.parsers.locale.PropertiesParser.new","haxe/ui/parsers/locale/PropertiesParser.hx",5,0xa31dde64)
HX_LOCAL_STACK_FRAME(_hx_pos_4cfdadb2b79f4822_6_parse,"haxe.ui.parsers.locale.PropertiesParser","parse",0x578289df,"haxe.ui.parsers.locale.PropertiesParser.parse","haxe/ui/parsers/locale/PropertiesParser.hx",6,0xa31dde64)
namespace haxe{
namespace ui{
namespace parsers{
namespace locale{

void PropertiesParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4cfdadb2b79f4822_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic PropertiesParser_obj::__CreateEmpty() { return new PropertiesParser_obj; }

void *PropertiesParser_obj::_hx_vtable = 0;

Dynamic PropertiesParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PropertiesParser_obj > _hx_result = new PropertiesParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PropertiesParser_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x44048c26) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x44048c26;
	} else {
		return inClassId==(int)0x55ebf20d;
	}
}

 ::haxe::ds::StringMap PropertiesParser_obj::parse(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_4cfdadb2b79f4822_6_parse)
HXLINE(   7)		 ::haxe::ds::StringMap result =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(   8)		::Array< ::String > lines = data.split(HX_("\n",0a,00,00,00));
HXLINE(   9)		::Array< ::String > newLines = ::Array_obj< ::String >::__new(0);
HXLINE(  12)		{
HXLINE(  12)			int _g = 0;
HXDLIN(  12)			while((_g < lines->length)){
HXLINE(  12)				::String line = lines->__get(_g);
HXDLIN(  12)				_g = (_g + 1);
HXLINE(  13)				bool _hx_tmp;
HXDLIN(  13)				if ((::StringTools_obj::trim(line).length != 0)) {
HXLINE(  13)					_hx_tmp = ::StringTools_obj::startsWith(::StringTools_obj::trim(line),HX_("#",23,00,00,00));
            				}
            				else {
HXLINE(  13)					_hx_tmp = true;
            				}
HXDLIN(  13)				if (_hx_tmp) {
HXLINE(  14)					continue;
            				}
HXLINE(  17)				newLines->push(line);
            			}
            		}
HXLINE(  20)		data = newLines->join(HX_("\n",0a,00,00,00));
HXLINE(  22)		bool inValue = false;
HXLINE(  23)		::String propName = HX_("",00,00,00,00);
HXLINE(  24)		::String propValue = HX_("",00,00,00,00);
HXLINE(  25)		{
HXLINE(  25)			int _g1 = 0;
HXDLIN(  25)			int _g2 = data.length;
HXDLIN(  25)			while((_g1 < _g2)){
HXLINE(  25)				_g1 = (_g1 + 1);
HXDLIN(  25)				int i = (_g1 - 1);
HXLINE(  26)				::String ch = data.charAt(i);
HXLINE(  27)				::String _hx_switch_0 = ch;
            				if (  (_hx_switch_0==HX_("\n",0a,00,00,00)) ){
HXLINE(  34)					bool hasSpace = false;
HXLINE(  35)					bool hasEquals = false;
HXLINE(  36)					{
HXLINE(  36)						int _g = (i + 1);
HXDLIN(  36)						int _g1 = data.length;
HXDLIN(  36)						while((_g < _g1)){
HXLINE(  36)							_g = (_g + 1);
HXDLIN(  36)							int j = (_g - 1);
HXLINE(  37)							::String ch2 = data.charAt(j);
HXLINE(  38)							if ((ch2 == HX_("=",3d,00,00,00))) {
HXLINE(  39)								hasEquals = true;
HXLINE(  40)								goto _hx_goto_4;
            							}
            							else {
HXLINE(  41)								if ((ch2 == HX_(" ",20,00,00,00))) {
HXLINE(  42)									hasSpace = true;
            								}
            								else {
HXLINE(  43)									if ((ch2 == HX_("\n",0a,00,00,00))) {
HXLINE(  44)										goto _hx_goto_4;
            									}
            								}
            							}
            						}
            						_hx_goto_4:;
            					}
HXLINE(  48)					bool _hx_tmp;
HXDLIN(  48)					if ((hasEquals == true)) {
HXLINE(  48)						_hx_tmp = (hasSpace == false);
            					}
            					else {
HXLINE(  48)						_hx_tmp = false;
            					}
HXDLIN(  48)					if (_hx_tmp) {
HXLINE(  49)						inValue = false;
HXLINE(  50)						result->set(propName,propValue);
HXLINE(  52)						propName = HX_("",00,00,00,00);
HXLINE(  53)						propValue = HX_("",00,00,00,00);
            					}
            					else {
HXLINE(  55)						propValue = (propValue + ch);
            					}
HXLINE(  33)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("=",3d,00,00,00)) ){
HXLINE(  29)					if ((inValue == true)) {
HXLINE(  30)						propValue = (propValue + ch);
            					}
HXLINE(  32)					inValue = true;
HXLINE(  28)					goto _hx_goto_3;
            				}
            				/* default */{
HXLINE(  58)					if (inValue) {
HXLINE(  59)						propValue = (propValue + ch);
            					}
            					else {
HXLINE(  61)						propName = (propName + ch);
            					}
            				}
            				_hx_goto_3:;
            			}
            		}
HXLINE(  66)		bool _hx_tmp;
HXDLIN(  66)		if ((propName.length > 0)) {
HXLINE(  66)			_hx_tmp = (propValue.length > 0);
            		}
            		else {
HXLINE(  66)			_hx_tmp = false;
            		}
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  67)			result->set(propName,propValue);
            		}
HXLINE(  70)		return result;
            	}



::hx::ObjectPtr< PropertiesParser_obj > PropertiesParser_obj::__new() {
	::hx::ObjectPtr< PropertiesParser_obj > __this = new PropertiesParser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PropertiesParser_obj > PropertiesParser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PropertiesParser_obj *__this = (PropertiesParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertiesParser_obj), false, "haxe.ui.parsers.locale.PropertiesParser"));
	*(void **)__this = PropertiesParser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PropertiesParser_obj::PropertiesParser_obj()
{
}

::hx::Val PropertiesParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PropertiesParser_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PropertiesParser_obj_sStaticStorageInfo = 0;
#endif

static ::String PropertiesParser_obj_sMemberFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null()) };

::hx::Class PropertiesParser_obj::__mClass;

void PropertiesParser_obj::__register()
{
	PropertiesParser_obj _hx_dummy;
	PropertiesParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.parsers.locale.PropertiesParser",1a,91,91,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PropertiesParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PropertiesParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertiesParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertiesParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace locale
