#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_data_ArrayDataSource
#include <haxe/ui/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d9449cccdc2aada1_9_new,"haxe.ui.data.ArrayDataSource","new",0x7b80963e,"haxe.ui.data.ArrayDataSource.new","haxe/ui/data/ArrayDataSource.hx",9,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_19_handleClearFilter,"haxe.ui.data.ArrayDataSource","handleClearFilter",0x1b8020bb,"haxe.ui.data.ArrayDataSource.handleClearFilter","haxe/ui/data/ArrayDataSource.hx",19,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_27_handleFilter,"haxe.ui.data.ArrayDataSource","handleFilter",0xa187d3e2,"haxe.ui.data.ArrayDataSource.handleFilter","haxe/ui/data/ArrayDataSource.hx",27,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_40_sortCustom,"haxe.ui.data.ArrayDataSource","sortCustom",0x8a5ccf91,"haxe.ui.data.ArrayDataSource.sortCustom","haxe/ui/data/ArrayDataSource.hx",40,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_39_sortCustom,"haxe.ui.data.ArrayDataSource","sortCustom",0x8a5ccf91,"haxe.ui.data.ArrayDataSource.sortCustom","haxe/ui/data/ArrayDataSource.hx",39,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_42_sortCustom,"haxe.ui.data.ArrayDataSource","sortCustom",0x8a5ccf91,"haxe.ui.data.ArrayDataSource.sortCustom","haxe/ui/data/ArrayDataSource.hx",42,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_47_handleGetSize,"haxe.ui.data.ArrayDataSource","handleGetSize",0xcae1410d,"haxe.ui.data.ArrayDataSource.handleGetSize","haxe/ui/data/ArrayDataSource.hx",47,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_54_handleGetItem,"haxe.ui.data.ArrayDataSource","handleGetItem",0xc44d655f,"haxe.ui.data.ArrayDataSource.handleGetItem","haxe/ui/data/ArrayDataSource.hx",54,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_61_handleIndexOf,"haxe.ui.data.ArrayDataSource","handleIndexOf",0x8cca395f,"haxe.ui.data.ArrayDataSource.handleIndexOf","haxe/ui/data/ArrayDataSource.hx",61,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_68_handleAddItem,"haxe.ui.data.ArrayDataSource","handleAddItem",0x2e07f86a,"haxe.ui.data.ArrayDataSource.handleAddItem","haxe/ui/data/ArrayDataSource.hx",68,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_79_handleInsert,"haxe.ui.data.ArrayDataSource","handleInsert",0xba2ff763,"haxe.ui.data.ArrayDataSource.handleInsert","haxe/ui/data/ArrayDataSource.hx",79,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_89_handleRemoveItem,"haxe.ui.data.ArrayDataSource","handleRemoveItem",0xbf7010a1,"haxe.ui.data.ArrayDataSource.handleRemoveItem","haxe/ui/data/ArrayDataSource.hx",89,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_97_handleClear,"haxe.ui.data.ArrayDataSource","handleClear",0x34f7f0a3,"haxe.ui.data.ArrayDataSource.handleClear","haxe/ui/data/ArrayDataSource.hx",97,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_108_handleGetData,"haxe.ui.data.ArrayDataSource","handleGetData",0xc0f0f676,"haxe.ui.data.ArrayDataSource.handleGetData","haxe/ui/data/ArrayDataSource.hx",108,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_115_handleSetData,"haxe.ui.data.ArrayDataSource","handleSetData",0xb3f28782,"haxe.ui.data.ArrayDataSource.handleSetData","haxe/ui/data/ArrayDataSource.hx",115,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_122_handleUpdateItem,"haxe.ui.data.ArrayDataSource","handleUpdateItem",0xfb05c0e6,"haxe.ui.data.ArrayDataSource.handleUpdateItem","haxe/ui/data/ArrayDataSource.hx",122,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_129_clone,"haxe.ui.data.ArrayDataSource","clone",0x7cb38cbb,"haxe.ui.data.ArrayDataSource.clone","haxe/ui/data/ArrayDataSource.hx",129,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_141_fromArray,"haxe.ui.data.ArrayDataSource","fromArray",0x1243d82d,"haxe.ui.data.ArrayDataSource.fromArray","haxe/ui/data/ArrayDataSource.hx",141,0xc8e62c93)
namespace haxe{
namespace ui{
namespace data{

void ArrayDataSource_obj::__construct(::Dynamic transformer){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_9_new)
HXLINE(  18)		this->_filteredArray = null();
HXLINE(  13)		super::__construct(transformer);
HXLINE(  14)		this->_array = ::cpp::VirtualArray_obj::__new(0);
            	}

Dynamic ArrayDataSource_obj::__CreateEmpty() { return new ArrayDataSource_obj; }

void *ArrayDataSource_obj::_hx_vtable = 0;

Dynamic ArrayDataSource_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayDataSource_obj > _hx_result = new ArrayDataSource_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ArrayDataSource_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1a77982e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1a77982e;
	} else {
		return inClassId==(int)0x1af18d4d;
	}
}

void ArrayDataSource_obj::handleClearFilter(){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_19_handleClearFilter)
HXLINE(  20)		if (::hx::IsNull( this->_filteredArray )) {
HXLINE(  21)			return;
            		}
HXLINE(  23)		this->_filteredArray = null();
HXLINE(  24)		this->handleChanged();
            	}


void ArrayDataSource_obj::handleFilter( ::Dynamic fn){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_27_handleFilter)
HXLINE(  28)		this->_filteredArray = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  29)		int index = 0;
HXLINE(  30)		{
HXLINE(  30)			int _g = 0;
HXDLIN(  30)			::cpp::VirtualArray _g1 = this->_array;
HXDLIN(  30)			while((_g < _g1->get_length())){
HXLINE(  30)				 ::Dynamic item = _g1->__get(_g);
HXDLIN(  30)				_g = (_g + 1);
HXLINE(  31)				if (::hx::IsEq( fn(index,item),true )) {
HXLINE(  32)					this->_filteredArray->push(item);
            				}
HXLINE(  34)				index = (index + 1);
            			}
            		}
HXLINE(  36)		this->handleChanged();
            	}


void ArrayDataSource_obj::sortCustom( ::Dynamic fn,::String direction){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,_g,::String,a3) HXARGC(2)
            		int _hx_run( ::Dynamic a1, ::Dynamic a2){
            			HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_40_sortCustom)
HXLINE(  40)			return ( (int)(_g(a1,a2,a3)) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_39_sortCustom)
HXLINE(  40)		 ::Dynamic _g = fn;
HXDLIN(  40)		::String a3 = direction;
HXDLIN(  40)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(_g,a3));
HXDLIN(  40)		this->_array->sort(_hx_tmp);
HXLINE(  41)		if (::hx::IsNotNull( this->_filteredArray )) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,_g,::String,a3) HXARGC(2)
            			int _hx_run( ::Dynamic a1, ::Dynamic a2){
            				HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_42_sortCustom)
HXLINE(  42)				return ( (int)(_g(a1,a2,a3)) );
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  42)			 ::Dynamic _g = fn;
HXDLIN(  42)			::String a3 = direction;
HXDLIN(  42)			 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_1(_g,a3));
HXDLIN(  42)			this->_filteredArray->sort(_hx_tmp);
            		}
HXLINE(  44)		this->handleChanged();
            	}


int ArrayDataSource_obj::handleGetSize(){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_47_handleGetSize)
HXLINE(  48)		if (::hx::IsNotNull( this->_filteredArray )) {
HXLINE(  49)			return this->_filteredArray->get_length();
            		}
HXLINE(  51)		return this->_array->get_length();
            	}


 ::Dynamic ArrayDataSource_obj::handleGetItem(int index){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_54_handleGetItem)
HXLINE(  55)		if (::hx::IsNotNull( this->_filteredArray )) {
HXLINE(  56)			return this->_filteredArray->__get(index);
            		}
HXLINE(  58)		return this->_array->__get(index);
            	}


int ArrayDataSource_obj::handleIndexOf( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_61_handleIndexOf)
HXLINE(  62)		if (::hx::IsNotNull( this->_filteredArray )) {
HXLINE(  63)			return this->_filteredArray->indexOf(item,null());
            		}
HXLINE(  65)		return this->_array->indexOf(item,null());
            	}


int ArrayDataSource_obj::handleAddItem( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_68_handleAddItem)
HXLINE(  69)		int index = (this->_array->push(item) - 1);
HXLINE(  70)		bool _hx_tmp;
HXDLIN(  70)		if (::hx::IsNotNull( this->_filteredArray )) {
HXLINE(  70)			_hx_tmp = ::hx::IsNotNull( this->_filterFn );
            		}
            		else {
HXLINE(  70)			_hx_tmp = false;
            		}
HXDLIN(  70)		if (_hx_tmp) {
HXLINE(  71)			if (::hx::IsEq( this->_filterFn((this->_array->get_length() - 1),item),true )) {
HXLINE(  72)				this->_filteredArray->push(item);
            			}
            		}
HXLINE(  75)		return index;
            	}


 ::Dynamic ArrayDataSource_obj::handleInsert(int index, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_79_handleInsert)
HXLINE(  80)		this->_array->insert(index,item);
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		if (::hx::IsNotNull( this->_filteredArray )) {
HXLINE(  81)			_hx_tmp = ::hx::IsNotNull( this->_filterFn );
            		}
            		else {
HXLINE(  81)			_hx_tmp = false;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  82)			if (::hx::IsEq( this->_filterFn(index,item),true )) {
HXLINE(  83)				this->_filteredArray->push(item);
            			}
            		}
HXLINE(  86)		return item;
            	}


 ::Dynamic ArrayDataSource_obj::handleRemoveItem( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_89_handleRemoveItem)
HXLINE(  90)		this->_array->remove(item);
HXLINE(  91)		if (::hx::IsNotNull( this->_filteredArray )) {
HXLINE(  92)			this->_filteredArray->remove(item);
            		}
HXLINE(  94)		return item;
            	}


void ArrayDataSource_obj::handleClear(){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_97_handleClear)
HXLINE(  98)		while((this->_array->get_length() > 0)){
HXLINE(  99)			this->_array->pop();
            		}
HXLINE( 101)		if (::hx::IsNotNull( this->_filteredArray )) {
HXLINE( 102)			while((this->_filteredArray->get_length() > 0)){
HXLINE( 103)				this->_filteredArray->pop();
            			}
            		}
            	}


 ::Dynamic ArrayDataSource_obj::handleGetData(){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_108_handleGetData)
HXLINE( 109)		if (::hx::IsNotNull( this->_filteredArray )) {
HXLINE( 110)			return this->_filteredArray;
            		}
HXLINE( 112)		return this->_array;
            	}


void ArrayDataSource_obj::handleSetData( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_115_handleSetData)
HXLINE( 116)		this->_array = ( (::cpp::VirtualArray)(v) );
HXLINE( 117)		if (::hx::IsNotNull( this->_filterFn )) {
HXLINE( 118)			this->filter(this->_filterFn);
            		}
            	}


 ::Dynamic ArrayDataSource_obj::handleUpdateItem(int index, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_122_handleUpdateItem)
HXLINE( 123)		if (::hx::IsNotNull( this->_filteredArray )) {
HXLINE( 124)			return (this->_filteredArray->set(index,item));
            		}
HXLINE( 126)		return (this->_array->set(index,item));
            	}


 ::haxe::ui::data::DataSource ArrayDataSource_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_d9449cccdc2aada1_129_clone)
HXLINE( 130)		 ::haxe::ui::data::ArrayDataSource c =  ::haxe::ui::data::ArrayDataSource_obj::__alloc( HX_CTX ,this->transformer);
HXLINE( 131)		c->_array = this->_array->copy();
HXLINE( 132)		if (::hx::IsNotNull( this->_filteredArray )) {
HXLINE( 133)			c->_filteredArray = this->_filteredArray->copy();
            		}
HXLINE( 135)		if (::hx::IsNotNull( this->_filterFn )) {
HXLINE( 136)			c->_filterFn = this->_filterFn;
            		}
HXLINE( 138)		return c;
            	}


 ::haxe::ui::data::ArrayDataSource ArrayDataSource_obj::fromArray(::cpp::VirtualArray source,::Dynamic transformer){
            	HX_GC_STACKFRAME(&_hx_pos_d9449cccdc2aada1_141_fromArray)
HXLINE( 142)		 ::haxe::ui::data::ArrayDataSource ds =  ::haxe::ui::data::ArrayDataSource_obj::__alloc( HX_CTX ,transformer);
HXLINE( 143)		ds->_array = source;
HXLINE( 144)		return ds;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayDataSource_obj,fromArray,return )


::hx::ObjectPtr< ArrayDataSource_obj > ArrayDataSource_obj::__new(::Dynamic transformer) {
	::hx::ObjectPtr< ArrayDataSource_obj > __this = new ArrayDataSource_obj();
	__this->__construct(transformer);
	return __this;
}

::hx::ObjectPtr< ArrayDataSource_obj > ArrayDataSource_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic transformer) {
	ArrayDataSource_obj *__this = (ArrayDataSource_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayDataSource_obj), true, "haxe.ui.data.ArrayDataSource"));
	*(void **)__this = ArrayDataSource_obj::_hx_vtable;
	__this->__construct(transformer);
	return __this;
}

ArrayDataSource_obj::ArrayDataSource_obj()
{
}

void ArrayDataSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayDataSource);
	HX_MARK_MEMBER_NAME(_array,"_array");
	HX_MARK_MEMBER_NAME(_filteredArray,"_filteredArray");
	 ::haxe::ui::data::DataSource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ArrayDataSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_array,"_array");
	HX_VISIT_MEMBER_NAME(_filteredArray,"_filteredArray");
	 ::haxe::ui::data::DataSource_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ArrayDataSource_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { return ::hx::Val( _array ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortCustom") ) { return ::hx::Val( sortCustom_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"handleClear") ) { return ::hx::Val( handleClear_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"handleFilter") ) { return ::hx::Val( handleFilter_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleInsert") ) { return ::hx::Val( handleInsert_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleGetSize") ) { return ::hx::Val( handleGetSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleGetItem") ) { return ::hx::Val( handleGetItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleIndexOf") ) { return ::hx::Val( handleIndexOf_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleAddItem") ) { return ::hx::Val( handleAddItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleGetData") ) { return ::hx::Val( handleGetData_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleSetData") ) { return ::hx::Val( handleSetData_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_filteredArray") ) { return ::hx::Val( _filteredArray ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleRemoveItem") ) { return ::hx::Val( handleRemoveItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleUpdateItem") ) { return ::hx::Val( handleUpdateItem_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handleClearFilter") ) { return ::hx::Val( handleClearFilter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ArrayDataSource_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true; }
	}
	return false;
}

::hx::Val ArrayDataSource_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { _array=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_filteredArray") ) { _filteredArray=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayDataSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_array",da,b4,76,21));
	outFields->push(HX_("_filteredArray",43,84,35,4e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ArrayDataSource_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ArrayDataSource_obj,_array),HX_("_array",da,b4,76,21)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ArrayDataSource_obj,_filteredArray),HX_("_filteredArray",43,84,35,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ArrayDataSource_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayDataSource_obj_sMemberFields[] = {
	HX_("_array",da,b4,76,21),
	HX_("_filteredArray",43,84,35,4e),
	HX_("handleClearFilter",5d,12,30,17),
	HX_("handleFilter",80,45,61,d3),
	HX_("sortCustom",af,fd,77,9c),
	HX_("handleGetSize",af,39,4b,37),
	HX_("handleGetItem",01,5e,b7,30),
	HX_("handleIndexOf",01,32,34,f9),
	HX_("handleAddItem",0c,f1,71,9a),
	HX_("handleInsert",01,69,09,ec),
	HX_("handleRemoveItem",3f,a9,a5,92),
	HX_("handleClear",c5,1c,a5,fa),
	HX_("handleGetData",18,ef,5a,2d),
	HX_("handleSetData",24,80,5c,20),
	HX_("handleUpdateItem",84,59,3b,ce),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class ArrayDataSource_obj::__mClass;

static ::String ArrayDataSource_obj_sStaticFields[] = {
	HX_("fromArray",cf,57,18,da),
	::String(null())
};

void ArrayDataSource_obj::__register()
{
	ArrayDataSource_obj _hx_dummy;
	ArrayDataSource_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.data.ArrayDataSource",4c,5f,b5,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayDataSource_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ArrayDataSource_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArrayDataSource_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ArrayDataSource_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayDataSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayDataSource_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace data
