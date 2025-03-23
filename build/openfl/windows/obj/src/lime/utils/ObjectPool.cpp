#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_44_new,"lime.utils.ObjectPool","new",0x6a851d63,"lime.utils.ObjectPool.new","lime/utils/ObjectPool.hx",44,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_74_add,"lime.utils.ObjectPool","add",0x6a7b3f24,"lime.utils.ObjectPool.add","lime/utils/ObjectPool.hx",74,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_89___default_clean,"lime.utils.ObjectPool","__default_clean",0xb88b96ae,"lime.utils.ObjectPool.__default_clean","lime/utils/ObjectPool.hx",89,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_95_clear,"lime.utils.ObjectPool","clear",0x9b3c4550,"lime.utils.ObjectPool.clear","lime/utils/ObjectPool.hx",95,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_113___default_create,"lime.utils.ObjectPool","__default_create",0x35ffc237,"lime.utils.ObjectPool.__default_create","lime/utils/ObjectPool.hx",113,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_122_get,"lime.utils.ObjectPool","get",0x6a7fcd99,"lime.utils.ObjectPool.get","lime/utils/ObjectPool.hx",122,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_149_release,"lime.utils.ObjectPool","release",0xc47d104a,"lime.utils.ObjectPool.release","lime/utils/ObjectPool.hx",149,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_181_remove,"lime.utils.ObjectPool","remove",0x36611321,"lime.utils.ObjectPool.remove","lime/utils/ObjectPool.hx",181,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_207___addInactive,"lime.utils.ObjectPool","__addInactive",0xbe535e4f,"lime.utils.ObjectPool.__addInactive","lime/utils/ObjectPool.hx",207,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_229___getInactive,"lime.utils.ObjectPool","__getInactive",0xb2eae9c4,"lime.utils.ObjectPool.__getInactive","lime/utils/ObjectPool.hx",229,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_268___removeInactive,"lime.utils.ObjectPool","__removeInactive",0x1e106c0c,"lime.utils.ObjectPool.__removeInactive","lime/utils/ObjectPool.hx",268,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_305_get_size,"lime.utils.ObjectPool","get_size",0x7e180467,"lime.utils.ObjectPool.get_size","lime/utils/ObjectPool.hx",305,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_309_set_size,"lime.utils.ObjectPool","set_size",0x2c755ddb,"lime.utils.ObjectPool.set_size","lime/utils/ObjectPool.hx",309,0xc114d76b)
namespace lime{
namespace utils{

void ObjectPool_obj::__construct( ::Dynamic create, ::Dynamic clean, ::Dynamic size){
            	HX_GC_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_44_new)
HXLINE(  45)		this->_hx___pool =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  47)		this->activeObjects = 0;
HXLINE(  48)		this->inactiveObjects = 0;
HXLINE(  50)		this->_hx___inactiveObject0 = null();
HXLINE(  51)		this->_hx___inactiveObject1 = null();
HXLINE(  52)		this->_hx___inactiveObjectList =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE(  54)		if (::hx::IsNotNull( create )) {
HXLINE(  56)			this->create = create;
            		}
HXLINE(  58)		if (::hx::IsNotNull( clean )) {
HXLINE(  60)			this->clean = clean;
            		}
HXLINE(  62)		if (::hx::IsNotNull( size )) {
HXLINE(  64)			this->set_size(size);
            		}
            	}

Dynamic ObjectPool_obj::__CreateEmpty() { return new ObjectPool_obj; }

void *ObjectPool_obj::_hx_vtable = 0;

Dynamic ObjectPool_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ObjectPool_obj > _hx_result = new ObjectPool_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ObjectPool_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x00303d73;
}

void ObjectPool_obj::add( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_74_add)
HXDLIN(  74)		bool _hx_tmp;
HXDLIN(  74)		if (::hx::IsNotNull( object )) {
HXDLIN(  74)			_hx_tmp = !(::haxe::IMap_obj::exists(this->_hx___pool,object));
            		}
            		else {
HXDLIN(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  76)			::haxe::IMap_obj::set(this->_hx___pool,object,false);
HXLINE(  77)			this->clean(object);
HXLINE(  78)			{
HXLINE(  78)				if (::hx::IsNull( this->_hx___inactiveObject0 )) {
HXLINE(  78)					this->_hx___inactiveObject0 = object;
            				}
            				else {
HXLINE(  78)					if (::hx::IsNull( this->_hx___inactiveObject1 )) {
HXLINE(  78)						this->_hx___inactiveObject1 = object;
            					}
            					else {
HXLINE(  78)						this->_hx___inactiveObjectList->add(object);
            					}
            				}
HXDLIN(  78)				this->inactiveObjects++;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,add,(void))

HX_BEGIN_DEFAULT_FUNC(__default_clean,ObjectPool_obj)
void _hx_run( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_89___default_clean)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

void ObjectPool_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_95_clear)
HXLINE(  96)		this->_hx___pool =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  98)		this->activeObjects = 0;
HXLINE(  99)		this->inactiveObjects = 0;
HXLINE( 101)		this->_hx___inactiveObject0 = null();
HXLINE( 102)		this->_hx___inactiveObject1 = null();
HXLINE( 103)		this->_hx___inactiveObjectList->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,clear,(void))

HX_BEGIN_DEFAULT_FUNC(__default_create,ObjectPool_obj)
 ::Dynamic _hx_run(){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_113___default_create)
HXDLIN( 113)		return null();
            	}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

 ::Dynamic ObjectPool_obj::get(){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_122_get)
HXLINE( 123)		 ::Dynamic object = null();
HXLINE( 125)		if ((this->inactiveObjects > 0)) {
HXLINE( 127)			 ::Dynamic object1 = null();
HXDLIN( 127)			if (::hx::IsNotNull( this->_hx___inactiveObject0 )) {
HXLINE( 127)				object1 = this->_hx___inactiveObject0;
HXDLIN( 127)				this->_hx___inactiveObject0 = null();
            			}
            			else {
HXLINE( 127)				if (::hx::IsNotNull( this->_hx___inactiveObject1 )) {
HXLINE( 127)					object1 = this->_hx___inactiveObject1;
HXDLIN( 127)					this->_hx___inactiveObject1 = null();
            				}
            				else {
HXLINE( 127)					object1 = this->_hx___inactiveObjectList->pop();
HXDLIN( 127)					if ((this->_hx___inactiveObjectList->length > 0)) {
HXLINE( 127)						this->_hx___inactiveObject0 = this->_hx___inactiveObjectList->pop();
            					}
HXDLIN( 127)					if ((this->_hx___inactiveObjectList->length > 0)) {
HXLINE( 127)						this->_hx___inactiveObject1 = this->_hx___inactiveObjectList->pop();
            					}
            				}
            			}
HXDLIN( 127)			this->inactiveObjects--;
HXDLIN( 127)			this->activeObjects++;
HXDLIN( 127)			object = object1;
            		}
            		else {
HXLINE( 129)			bool _hx_tmp;
HXDLIN( 129)			if (::hx::IsNotNull( this->_hx___size )) {
HXLINE( 129)				_hx_tmp = ::hx::IsLess( this->activeObjects,this->_hx___size );
            			}
            			else {
HXLINE( 129)				_hx_tmp = true;
            			}
HXDLIN( 129)			if (_hx_tmp) {
HXLINE( 131)				object = this->create();
HXLINE( 133)				if (::hx::IsNotNull( object )) {
HXLINE( 135)					::haxe::IMap_obj::set(this->_hx___pool,object,true);
HXLINE( 136)					this->activeObjects++;
            				}
            			}
            		}
HXLINE( 140)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,get,return )

void ObjectPool_obj::release( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_149_release)
HXLINE( 161)		this->activeObjects--;
HXLINE( 163)		bool _hx_tmp;
HXDLIN( 163)		if (::hx::IsNotNull( this->_hx___size )) {
HXLINE( 163)			_hx_tmp = ::hx::IsLess( (this->activeObjects + this->inactiveObjects),this->_hx___size );
            		}
            		else {
HXLINE( 163)			_hx_tmp = true;
            		}
HXDLIN( 163)		if (_hx_tmp) {
HXLINE( 165)			this->clean(object);
HXLINE( 166)			{
HXLINE( 166)				if (::hx::IsNull( this->_hx___inactiveObject0 )) {
HXLINE( 166)					this->_hx___inactiveObject0 = object;
            				}
            				else {
HXLINE( 166)					if (::hx::IsNull( this->_hx___inactiveObject1 )) {
HXLINE( 166)						this->_hx___inactiveObject1 = object;
            					}
            					else {
HXLINE( 166)						this->_hx___inactiveObjectList->add(object);
            					}
            				}
HXDLIN( 166)				this->inactiveObjects++;
            			}
            		}
            		else {
HXLINE( 170)			::haxe::IMap_obj::remove(this->_hx___pool,object);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,release,(void))

void ObjectPool_obj::remove( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_181_remove)
HXDLIN( 181)		bool _hx_tmp;
HXDLIN( 181)		if (::hx::IsNotNull( object )) {
HXDLIN( 181)			_hx_tmp = ::haxe::IMap_obj::exists(this->_hx___pool,object);
            		}
            		else {
HXDLIN( 181)			_hx_tmp = false;
            		}
HXDLIN( 181)		if (_hx_tmp) {
HXLINE( 183)			::haxe::IMap_obj::remove(this->_hx___pool,object);
HXLINE( 185)			if (::hx::IsEq( this->_hx___inactiveObject0,object )) {
HXLINE( 187)				this->_hx___inactiveObject0 = null();
HXLINE( 188)				this->inactiveObjects--;
            			}
            			else {
HXLINE( 190)				if (::hx::IsEq( this->_hx___inactiveObject1,object )) {
HXLINE( 192)					this->_hx___inactiveObject1 = null();
HXLINE( 193)					this->inactiveObjects--;
            				}
            				else {
HXLINE( 195)					if (this->_hx___inactiveObjectList->remove(object)) {
HXLINE( 197)						this->inactiveObjects--;
            					}
            					else {
HXLINE( 201)						this->activeObjects--;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,remove,(void))

void ObjectPool_obj::_hx___addInactive( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_207___addInactive)
HXLINE( 212)		if (::hx::IsNull( this->_hx___inactiveObject0 )) {
HXLINE( 214)			this->_hx___inactiveObject0 = object;
            		}
            		else {
HXLINE( 216)			if (::hx::IsNull( this->_hx___inactiveObject1 )) {
HXLINE( 218)				this->_hx___inactiveObject1 = object;
            			}
            			else {
HXLINE( 222)				this->_hx___inactiveObjectList->add(object);
            			}
            		}
HXLINE( 225)		this->inactiveObjects++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,_hx___addInactive,(void))

 ::Dynamic ObjectPool_obj::_hx___getInactive(){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_229___getInactive)
HXLINE( 230)		 ::Dynamic object = null();
HXLINE( 232)		if (::hx::IsNotNull( this->_hx___inactiveObject0 )) {
HXLINE( 234)			object = this->_hx___inactiveObject0;
HXLINE( 235)			this->_hx___inactiveObject0 = null();
            		}
            		else {
HXLINE( 237)			if (::hx::IsNotNull( this->_hx___inactiveObject1 )) {
HXLINE( 239)				object = this->_hx___inactiveObject1;
HXLINE( 240)				this->_hx___inactiveObject1 = null();
            			}
            			else {
HXLINE( 244)				object = this->_hx___inactiveObjectList->pop();
HXLINE( 246)				if ((this->_hx___inactiveObjectList->length > 0)) {
HXLINE( 248)					this->_hx___inactiveObject0 = this->_hx___inactiveObjectList->pop();
            				}
HXLINE( 251)				if ((this->_hx___inactiveObjectList->length > 0)) {
HXLINE( 253)					this->_hx___inactiveObject1 = this->_hx___inactiveObjectList->pop();
            				}
            			}
            		}
HXLINE( 261)		this->inactiveObjects--;
HXLINE( 262)		this->activeObjects++;
HXLINE( 264)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,_hx___getInactive,return )

void ObjectPool_obj::_hx___removeInactive(int count){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_268___removeInactive)
HXLINE( 269)		bool _hx_tmp;
HXDLIN( 269)		if ((count > 0)) {
HXLINE( 269)			_hx_tmp = (this->inactiveObjects == 0);
            		}
            		else {
HXLINE( 269)			_hx_tmp = true;
            		}
HXDLIN( 269)		if (_hx_tmp) {
HXLINE( 269)			return;
            		}
HXLINE( 271)		if (::hx::IsNotNull( this->_hx___inactiveObject0 )) {
HXLINE( 273)			::haxe::IMap_obj::remove(this->_hx___pool,this->_hx___inactiveObject0);
HXLINE( 274)			this->_hx___inactiveObject0 = null();
HXLINE( 275)			this->inactiveObjects--;
HXLINE( 276)			count = (count - 1);
            		}
HXLINE( 279)		bool _hx_tmp1;
HXDLIN( 279)		if ((count != 0)) {
HXLINE( 279)			_hx_tmp1 = (this->inactiveObjects == 0);
            		}
            		else {
HXLINE( 279)			_hx_tmp1 = true;
            		}
HXDLIN( 279)		if (_hx_tmp1) {
HXLINE( 279)			return;
            		}
HXLINE( 281)		if (::hx::IsNotNull( this->_hx___inactiveObject1 )) {
HXLINE( 283)			::haxe::IMap_obj::remove(this->_hx___pool,this->_hx___inactiveObject1);
HXLINE( 284)			this->_hx___inactiveObject1 = null();
HXLINE( 285)			this->inactiveObjects--;
HXLINE( 286)			count = (count - 1);
            		}
HXLINE( 289)		bool _hx_tmp2;
HXDLIN( 289)		if ((count != 0)) {
HXLINE( 289)			_hx_tmp2 = (this->inactiveObjects == 0);
            		}
            		else {
HXLINE( 289)			_hx_tmp2 = true;
            		}
HXDLIN( 289)		if (_hx_tmp2) {
HXLINE( 289)			return;
            		}
HXLINE( 291)		{
HXLINE( 291)			 ::haxe::ds::_List::ListNode _g_head = this->_hx___inactiveObjectList->h;
HXDLIN( 291)			while(::hx::IsNotNull( _g_head )){
HXLINE( 291)				 ::Dynamic val = _g_head->item;
HXDLIN( 291)				_g_head = _g_head->next;
HXDLIN( 291)				 ::Dynamic object = val;
HXLINE( 293)				::haxe::IMap_obj::remove(this->_hx___pool,object);
HXLINE( 294)				this->_hx___inactiveObjectList->remove(object);
HXLINE( 295)				this->inactiveObjects--;
HXLINE( 296)				count = (count - 1);
HXLINE( 298)				bool _hx_tmp;
HXDLIN( 298)				if ((count != 0)) {
HXLINE( 298)					_hx_tmp = (this->inactiveObjects == 0);
            				}
            				else {
HXLINE( 298)					_hx_tmp = true;
            				}
HXDLIN( 298)				if (_hx_tmp) {
HXLINE( 298)					return;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,_hx___removeInactive,(void))

 ::Dynamic ObjectPool_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_305_get_size)
HXDLIN( 305)		return this->_hx___size;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,get_size,return )

 ::Dynamic ObjectPool_obj::set_size( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_309_set_size)
HXLINE( 310)		if (::hx::IsNull( value )) {
HXLINE( 312)			this->_hx___size = null();
            		}
            		else {
HXLINE( 316)			int current = (this->inactiveObjects + this->activeObjects);
HXLINE( 317)			this->_hx___size = value;
HXLINE( 319)			if (::hx::IsGreater( current,value )) {
HXLINE( 321)				this->_hx___removeInactive((current - ( (int)(value) )));
            			}
            			else {
HXLINE( 323)				if (::hx::IsGreater( value,current )) {
HXLINE( 325)					 ::Dynamic object;
HXLINE( 327)					{
HXLINE( 327)						int _g = 0;
HXDLIN( 327)						int _g1 = (( (int)(value) ) - current);
HXDLIN( 327)						while((_g < _g1)){
HXLINE( 327)							_g = (_g + 1);
HXDLIN( 327)							int i = (_g - 1);
HXLINE( 329)							object = this->create();
HXLINE( 331)							if (::hx::IsNotNull( object )) {
HXLINE( 333)								::haxe::IMap_obj::set(this->_hx___pool,object,false);
HXLINE( 334)								this->_hx___inactiveObjectList->add(object);
HXLINE( 335)								this->inactiveObjects++;
            							}
            							else {
HXLINE( 339)								goto _hx_goto_13;
            							}
            						}
            						_hx_goto_13:;
            					}
            				}
            			}
            		}
HXLINE( 345)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,set_size,return )


void ObjectPool_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,ObjectPool_obj *_hx_obj) {
	if (!_hx_obj->create.mPtr) _hx_obj->create = new __default_create(_hx_obj);
	if (!_hx_obj->clean.mPtr) _hx_obj->clean = new __default_clean(_hx_obj);
}
::hx::ObjectPtr< ObjectPool_obj > ObjectPool_obj::__new( ::Dynamic create, ::Dynamic clean, ::Dynamic size) {
	::hx::ObjectPtr< ObjectPool_obj > __this = new ObjectPool_obj();
	__this->__construct(create,clean,size);
	return __this;
}

::hx::ObjectPtr< ObjectPool_obj > ObjectPool_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic create, ::Dynamic clean, ::Dynamic size) {
	ObjectPool_obj *__this = (ObjectPool_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ObjectPool_obj), true, "lime.utils.ObjectPool"));
	*(void **)__this = ObjectPool_obj::_hx_vtable;
	lime::utils::ObjectPool_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(create,clean,size);
	return __this;
}

ObjectPool_obj::ObjectPool_obj()
{
	create = new __default_create(this);
	clean = new __default_clean(this);
}

void ObjectPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectPool);
	HX_MARK_MEMBER_NAME(activeObjects,"activeObjects");
	HX_MARK_MEMBER_NAME(inactiveObjects,"inactiveObjects");
	HX_MARK_MEMBER_NAME(_hx___inactiveObject0,"__inactiveObject0");
	HX_MARK_MEMBER_NAME(_hx___inactiveObject1,"__inactiveObject1");
	HX_MARK_MEMBER_NAME(_hx___inactiveObjectList,"__inactiveObjectList");
	HX_MARK_MEMBER_NAME(_hx___pool,"__pool");
	HX_MARK_MEMBER_NAME(_hx___size,"__size");
	HX_MARK_MEMBER_NAME(clean,"clean");
	HX_MARK_MEMBER_NAME(create,"create");
	HX_MARK_END_CLASS();
}

void ObjectPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activeObjects,"activeObjects");
	HX_VISIT_MEMBER_NAME(inactiveObjects,"inactiveObjects");
	HX_VISIT_MEMBER_NAME(_hx___inactiveObject0,"__inactiveObject0");
	HX_VISIT_MEMBER_NAME(_hx___inactiveObject1,"__inactiveObject1");
	HX_VISIT_MEMBER_NAME(_hx___inactiveObjectList,"__inactiveObjectList");
	HX_VISIT_MEMBER_NAME(_hx___pool,"__pool");
	HX_VISIT_MEMBER_NAME(_hx___size,"__size");
	HX_VISIT_MEMBER_NAME(clean,"clean");
	HX_VISIT_MEMBER_NAME(create,"create");
}

::hx::Val ObjectPool_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clean") ) { return ::hx::Val( clean ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { return ::hx::Val( _hx___pool ); }
		if (HX_FIELD_EQ(inName,"__size") ) { return ::hx::Val( _hx___size ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"release") ) { return ::hx::Val( release_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { return ::hx::Val( activeObjects ); }
		if (HX_FIELD_EQ(inName,"__addInactive") ) { return ::hx::Val( _hx___addInactive_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getInactive") ) { return ::hx::Val( _hx___getInactive_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"inactiveObjects") ) { return ::hx::Val( inactiveObjects ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__removeInactive") ) { return ::hx::Val( _hx___removeInactive_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__inactiveObject0") ) { return ::hx::Val( _hx___inactiveObject0 ); }
		if (HX_FIELD_EQ(inName,"__inactiveObject1") ) { return ::hx::Val( _hx___inactiveObject1 ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__inactiveObjectList") ) { return ::hx::Val( _hx___inactiveObjectList ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ObjectPool_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_size(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clean") ) { clean=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__size") ) { _hx___size=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"create") ) { create=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { activeObjects=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"inactiveObjects") ) { inactiveObjects=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__inactiveObject0") ) { _hx___inactiveObject0=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__inactiveObject1") ) { _hx___inactiveObject1=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__inactiveObjectList") ) { _hx___inactiveObjectList=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("activeObjects",ae,b3,18,3a));
	outFields->push(HX_("inactiveObjects",a9,0c,c7,fb));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("__inactiveObject0",46,3d,21,7f));
	outFields->push(HX_("__inactiveObject1",47,3d,21,7f));
	outFields->push(HX_("__inactiveObjectList",28,dd,99,7e));
	outFields->push(HX_("__pool",fc,e3,54,f9));
	outFields->push(HX_("__size",e1,03,4c,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ObjectPool_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ObjectPool_obj,activeObjects),HX_("activeObjects",ae,b3,18,3a)},
	{::hx::fsInt,(int)offsetof(ObjectPool_obj,inactiveObjects),HX_("inactiveObjects",a9,0c,c7,fb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ObjectPool_obj,_hx___inactiveObject0),HX_("__inactiveObject0",46,3d,21,7f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ObjectPool_obj,_hx___inactiveObject1),HX_("__inactiveObject1",47,3d,21,7f)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(ObjectPool_obj,_hx___inactiveObjectList),HX_("__inactiveObjectList",28,dd,99,7e)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(ObjectPool_obj,_hx___pool),HX_("__pool",fc,e3,54,f9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ObjectPool_obj,_hx___size),HX_("__size",e1,03,4c,fb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ObjectPool_obj,clean),HX_("clean",89,71,5b,48)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ObjectPool_obj,create),HX_("create",fc,66,0f,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ObjectPool_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectPool_obj_sMemberFields[] = {
	HX_("activeObjects",ae,b3,18,3a),
	HX_("inactiveObjects",a9,0c,c7,fb),
	HX_("__inactiveObject0",46,3d,21,7f),
	HX_("__inactiveObject1",47,3d,21,7f),
	HX_("__inactiveObjectList",28,dd,99,7e),
	HX_("__pool",fc,e3,54,f9),
	HX_("__size",e1,03,4c,fb),
	HX_("add",21,f2,49,00),
	HX_("clean",89,71,5b,48),
	HX_("clear",8d,71,5b,48),
	HX_("create",fc,66,0f,7c),
	HX_("get",96,80,4e,00),
	HX_("release",c7,85,ed,58),
	HX_("remove",44,9c,88,04),
	HX_("__addInactive",8c,8f,04,e4),
	HX_("__getInactive",01,1b,9c,d8),
	HX_("__removeInactive",ef,de,c5,68),
	HX_("get_size",4a,5c,0e,cc),
	HX_("set_size",be,b5,6b,7a),
	::String(null()) };

::hx::Class ObjectPool_obj::__mClass;

void ObjectPool_obj::__register()
{
	ObjectPool_obj _hx_dummy;
	ObjectPool_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils.ObjectPool",f1,2f,f4,28);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ObjectPool_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ObjectPool_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectPool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectPool_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
