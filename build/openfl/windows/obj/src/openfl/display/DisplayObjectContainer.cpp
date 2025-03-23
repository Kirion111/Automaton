#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d11618aadd936e00_124_new,"openfl.display.DisplayObjectContainer","new",0x4362e03c,"openfl.display.DisplayObjectContainer.new","openfl/display/DisplayObjectContainer.hx",124,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_168_addChild,"openfl.display.DisplayObjectContainer","addChild",0x5694c25f,"openfl.display.DisplayObjectContainer.addChild","openfl/display/DisplayObjectContainer.hx",168,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_205_addChildAt,"openfl.display.DisplayObjectContainer","addChildAt",0xb7119132,"openfl.display.DisplayObjectContainer.addChildAt","openfl/display/DisplayObjectContainer.hx",205,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_322_areInaccessibleObjectsUnderPoint,"openfl.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0x2380e0e1,"openfl.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",322,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_338_contains,"openfl.display.DisplayObjectContainer","contains",0xc3f94cc3,"openfl.display.DisplayObjectContainer.contains","openfl/display/DisplayObjectContainer.hx",338,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_363_getChildAt,"openfl.display.DisplayObjectContainer","getChildAt",0x9ee8eb5d,"openfl.display.DisplayObjectContainer.getChildAt","openfl/display/DisplayObjectContainer.hx",363,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_394_getChildByName,"openfl.display.DisplayObjectContainer","getChildByName",0x64b33f2c,"openfl.display.DisplayObjectContainer.getChildByName","openfl/display/DisplayObjectContainer.hx",394,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_412_getChildIndex,"openfl.display.DisplayObjectContainer","getChildIndex",0xcc3e62e8,"openfl.display.DisplayObjectContainer.getChildIndex","openfl/display/DisplayObjectContainer.hx",412,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_441_getObjectsUnderPoint,"openfl.display.DisplayObjectContainer","getObjectsUnderPoint",0x85c6693a,"openfl.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",441,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_468_removeChild,"openfl.display.DisplayObjectContainer","removeChild",0x1a99d294,"openfl.display.DisplayObjectContainer.removeChild","openfl/display/DisplayObjectContainer.hx",468,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_523_removeChildAt,"openfl.display.DisplayObjectContainer","removeChildAt",0x52a2d8a7,"openfl.display.DisplayObjectContainer.removeChildAt","openfl/display/DisplayObjectContainer.hx",523,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_544_removeChildren,"openfl.display.DisplayObjectContainer","removeChildren",0xfbffdb47,"openfl.display.DisplayObjectContainer.removeChildren","openfl/display/DisplayObjectContainer.hx",544,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_573_resolve,"openfl.display.DisplayObjectContainer","resolve",0x8cca40c8,"openfl.display.DisplayObjectContainer.resolve","openfl/display/DisplayObjectContainer.hx",573,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_625_setChildIndex,"openfl.display.DisplayObjectContainer","setChildIndex",0x114444f4,"openfl.display.DisplayObjectContainer.setChildIndex","openfl/display/DisplayObjectContainer.hx",625,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_643_stopAllMovieClips,"openfl.display.DisplayObjectContainer","stopAllMovieClips",0x46e0f9ce,"openfl.display.DisplayObjectContainer.stopAllMovieClips","openfl/display/DisplayObjectContainer.hx",643,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_658_swapChildren,"openfl.display.DisplayObjectContainer","swapChildren",0xe0695f96,"openfl.display.DisplayObjectContainer.swapChildren","openfl/display/DisplayObjectContainer.hx",658,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_680_swapChildrenAt,"openfl.display.DisplayObjectContainer","swapChildrenAt",0xd5312a29,"openfl.display.DisplayObjectContainer.swapChildrenAt","openfl/display/DisplayObjectContainer.hx",680,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_689___cleanup,"openfl.display.DisplayObjectContainer","__cleanup",0x2346b9e0,"openfl.display.DisplayObjectContainer.__cleanup","openfl/display/DisplayObjectContainer.hx",689,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_701___cleanupRemovedChildren,"openfl.display.DisplayObjectContainer","__cleanupRemovedChildren",0x4395feff,"openfl.display.DisplayObjectContainer.__cleanupRemovedChildren","openfl/display/DisplayObjectContainer.hx",701,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_715___dispatchChildren,"openfl.display.DisplayObjectContainer","__dispatchChildren",0x7a91a8dd,"openfl.display.DisplayObjectContainer.__dispatchChildren","openfl/display/DisplayObjectContainer.hx",715,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_733___enterFrame,"openfl.display.DisplayObjectContainer","__enterFrame",0x3af993b9,"openfl.display.DisplayObjectContainer.__enterFrame","openfl/display/DisplayObjectContainer.hx",733,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_740___getBounds,"openfl.display.DisplayObjectContainer","__getBounds",0xe74ca467,"openfl.display.DisplayObjectContainer.__getBounds","openfl/display/DisplayObjectContainer.hx",740,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_760___getFilterBounds,"openfl.display.DisplayObjectContainer","__getFilterBounds",0xbea2d3bf,"openfl.display.DisplayObjectContainer.__getFilterBounds","openfl/display/DisplayObjectContainer.hx",760,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_786___getRenderBounds,"openfl.display.DisplayObjectContainer","__getRenderBounds",0x21a0a9dd,"openfl.display.DisplayObjectContainer.__getRenderBounds","openfl/display/DisplayObjectContainer.hx",786,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_815___hitTest,"openfl.display.DisplayObjectContainer","__hitTest",0x5a840e01,"openfl.display.DisplayObjectContainer.__hitTest","openfl/display/DisplayObjectContainer.hx",815,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_904___hitTestMask,"openfl.display.DisplayObjectContainer","__hitTestMask",0x4f390f8d,"openfl.display.DisplayObjectContainer.__hitTestMask","openfl/display/DisplayObjectContainer.hx",904,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_919___readGraphicsData,"openfl.display.DisplayObjectContainer","__readGraphicsData",0x782e37cf,"openfl.display.DisplayObjectContainer.__readGraphicsData","openfl/display/DisplayObjectContainer.hx",919,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_932___setStageReference,"openfl.display.DisplayObjectContainer","__setStageReference",0x58cb6d2b,"openfl.display.DisplayObjectContainer.__setStageReference","openfl/display/DisplayObjectContainer.hx",932,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_946___setWorldTransformInvalid,"openfl.display.DisplayObjectContainer","__setWorldTransformInvalid",0xa8fd351f,"openfl.display.DisplayObjectContainer.__setWorldTransformInvalid","openfl/display/DisplayObjectContainer.hx",946,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_962___stopAllMovieClips,"openfl.display.DisplayObjectContainer","__stopAllMovieClips",0xb7ce11ae,"openfl.display.DisplayObjectContainer.__stopAllMovieClips","openfl/display/DisplayObjectContainer.hx",962,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_969___tabTest,"openfl.display.DisplayObjectContainer","__tabTest",0xbd744b03,"openfl.display.DisplayObjectContainer.__tabTest","openfl/display/DisplayObjectContainer.hx",969,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_990___update,"openfl.display.DisplayObjectContainer","__update",0xc6b2e3cd,"openfl.display.DisplayObjectContainer.__update","openfl/display/DisplayObjectContainer.hx",990,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_1006_get_numChildren,"openfl.display.DisplayObjectContainer","get_numChildren",0x73b78b18,"openfl.display.DisplayObjectContainer.get_numChildren","openfl/display/DisplayObjectContainer.hx",1006,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_1011_get_tabChildren,"openfl.display.DisplayObjectContainer","get_tabChildren",0x62bd2e27,"openfl.display.DisplayObjectContainer.get_tabChildren","openfl/display/DisplayObjectContainer.hx",1011,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_1015_set_tabChildren,"openfl.display.DisplayObjectContainer","set_tabChildren",0x5e88ab33,"openfl.display.DisplayObjectContainer.set_tabChildren","openfl/display/DisplayObjectContainer.hx",1015,0x5f4d3d72)
namespace openfl{
namespace display{

void DisplayObjectContainer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_124_new)
HXLINE( 125)		super::__construct();
HXLINE( 127)		this->mouseChildren = true;
HXLINE( 128)		this->_hx___tabChildren = true;
HXLINE( 130)		this->_hx___children = ::Array_obj< ::Dynamic>::__new();
HXLINE( 131)		int length = null();
HXDLIN( 131)		bool fixed = null();
HXDLIN( 131)		::Array< ::Dynamic> array = null();
HXDLIN( 131)		this->_hx___removedChildren =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            	}

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return new DisplayObjectContainer_obj; }

void *DisplayObjectContainer_obj::_hx_vtable = 0;

Dynamic DisplayObjectContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DisplayObjectContainer_obj > _hx_result = new DisplayObjectContainer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DisplayObjectContainer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0330636f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
	}
}

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_168_addChild)
HXDLIN( 168)		return this->addChildAt(child,this->get_numChildren());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_205_addChildAt)
HXLINE( 206)		if (::hx::IsNull( child )) {
HXLINE( 208)			 ::openfl::errors::TypeError error =  ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,HX_("Error #2007: Parameter child must be non-null.",30,5a,a7,aa));
HXLINE( 209)			error->errorID = 2007;
HXLINE( 210)			HX_STACK_DO_THROW(error);
            		}
            		else {
HXLINE( 212)			if (::hx::IsInstanceEq( child,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 214)				 ::openfl::errors::ArgumentError error =  ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Error #2024: An object cannot be added as a child of itself.",00,78,82,92));
HXLINE( 215)				error->errorID = 2024;
HXLINE( 216)				HX_STACK_DO_THROW(error);
            			}
            			else {
HXLINE( 219)				if (::hx::IsInstanceEq( child->stage,child )) {
HXLINE( 221)					 ::openfl::errors::ArgumentError error =  ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Error #3783: A Stage object cannot be added as the child of another object.",fa,51,93,42));
HXLINE( 222)					error->errorID = 3783;
HXLINE( 223)					HX_STACK_DO_THROW(error);
            				}
            			}
            		}
HXLINE( 227)		bool _hx_tmp;
HXDLIN( 227)		if ((index <= this->_hx___children->length)) {
HXLINE( 227)			_hx_tmp = (index < 0);
            		}
            		else {
HXLINE( 227)			_hx_tmp = true;
            		}
HXDLIN( 227)		if (_hx_tmp) {
HXLINE( 229)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid index position ",80,59,50,86) + index)));
            		}
HXLINE( 232)		if (::hx::IsInstanceEq( child->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 234)			if (::hx::IsInstanceNotEq( this->_hx___children->__get(index).StaticCast<  ::openfl::display::DisplayObject >(),child )) {
HXLINE( 236)				this->_hx___children->remove(child);
HXLINE( 237)				this->_hx___children->insert(index,child);
HXLINE( 239)				if (!(this->_hx___renderDirty)) {
HXLINE( 239)					this->_hx___renderDirty = true;
HXDLIN( 239)					this->_hx___setParentRenderDirty();
            				}
            			}
            		}
            		else {
HXLINE( 244)			if (::hx::IsNotNull( child->parent )) {
HXLINE( 246)				child->parent->removeChild(child);
            			}
HXLINE( 249)			this->_hx___children->insert(index,child);
HXLINE( 250)			child->parent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 252)			bool addedToStage;
HXDLIN( 252)			if (::hx::IsNotNull( this->stage )) {
HXLINE( 252)				addedToStage = ::hx::IsNull( child->stage );
            			}
            			else {
HXLINE( 252)				addedToStage = false;
            			}
HXLINE( 254)			if (addedToStage) {
HXLINE( 256)				child->_hx___setStageReference(this->stage);
            			}
HXLINE( 259)			child->_hx___setTransformDirty();
HXLINE( 260)			if (!(child->_hx___renderDirty)) {
HXLINE( 260)				child->_hx___renderDirty = true;
HXDLIN( 260)				child->_hx___setParentRenderDirty();
            			}
HXLINE( 261)			if (!(this->_hx___renderDirty)) {
HXLINE( 261)				this->_hx___renderDirty = true;
HXDLIN( 261)				this->_hx___setParentRenderDirty();
            			}
HXLINE( 267)			 ::openfl::events::Event event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("added",c0,d4,43,1c),null(),null());
HXLINE( 269)			event->bubbles = true;
HXLINE( 271)			event->target = child;
HXLINE( 273)			child->_hx___dispatchWithCapture(event);
HXLINE( 279)			if (addedToStage) {
HXLINE( 285)				event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("addedToStage",63,22,55,0c),false,false);
HXLINE( 288)				child->_hx___dispatchWithCapture(event);
HXLINE( 289)				child->_hx___dispatchChildren(event);
            			}
            		}
HXLINE( 297)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_322_areInaccessibleObjectsUnderPoint)
HXDLIN( 322)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_338_contains)
HXLINE( 339)		while(true){
HXLINE( 339)			bool _hx_tmp;
HXDLIN( 339)			if (::hx::IsInstanceNotEq( child,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 339)				_hx_tmp = ::hx::IsNotNull( child );
            			}
            			else {
HXLINE( 339)				_hx_tmp = false;
            			}
HXDLIN( 339)			if (!(_hx_tmp)) {
HXLINE( 339)				goto _hx_goto_4;
            			}
HXLINE( 341)			child = child->parent;
            		}
            		_hx_goto_4:;
HXLINE( 344)		return ::hx::IsInstanceEq( child,::hx::ObjectPtr<OBJ_>(this) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_363_getChildAt)
HXLINE( 364)		bool _hx_tmp;
HXDLIN( 364)		if ((index >= 0)) {
HXLINE( 364)			_hx_tmp = (index < this->_hx___children->length);
            		}
            		else {
HXLINE( 364)			_hx_tmp = false;
            		}
HXDLIN( 364)		if (_hx_tmp) {
HXLINE( 366)			return this->_hx___children->__get(index).StaticCast<  ::openfl::display::DisplayObject >();
            		}
HXLINE( 369)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName(::String name){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_394_getChildByName)
HXLINE( 395)		{
HXLINE( 395)			int _g = 0;
HXDLIN( 395)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 395)			while((_g < _g1->length)){
HXLINE( 395)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 395)				_g = (_g + 1);
HXLINE( 397)				if ((child->get_name() == name)) {
HXLINE( 397)					return child;
            				}
            			}
            		}
HXLINE( 400)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_412_getChildIndex)
HXLINE( 413)		{
HXLINE( 413)			int _g = 0;
HXDLIN( 413)			int _g1 = this->_hx___children->length;
HXDLIN( 413)			while((_g < _g1)){
HXLINE( 413)				_g = (_g + 1);
HXDLIN( 413)				int i = (_g - 1);
HXLINE( 415)				if (::hx::IsInstanceEq( this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >(),child )) {
HXLINE( 415)					return i;
            				}
            			}
            		}
HXLINE( 418)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

::Array< ::Dynamic> DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_441_getObjectsUnderPoint)
HXLINE( 442)		::Array< ::Dynamic> stack = ::Array_obj< ::Dynamic>::__new();
HXLINE( 443)		this->_hx___hitTest(point->x,point->y,false,stack,false,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 444)		stack->reverse();
HXLINE( 445)		return stack;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_468_removeChild)
HXLINE( 469)		bool _hx_tmp;
HXDLIN( 469)		if (::hx::IsNotNull( child )) {
HXLINE( 469)			_hx_tmp = ::hx::IsInstanceEq( child->parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 469)			_hx_tmp = false;
            		}
HXDLIN( 469)		if (_hx_tmp) {
HXLINE( 471)			child->_hx___setTransformDirty();
HXLINE( 472)			if (!(child->_hx___renderDirty)) {
HXLINE( 472)				child->_hx___renderDirty = true;
HXDLIN( 472)				child->_hx___setParentRenderDirty();
            			}
HXLINE( 473)			if (!(this->_hx___renderDirty)) {
HXLINE( 473)				this->_hx___renderDirty = true;
HXDLIN( 473)				this->_hx___setParentRenderDirty();
            			}
HXLINE( 475)			 ::openfl::events::Event event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("removed",a0,1f,00,f3),true,null());
HXLINE( 476)			child->_hx___dispatchWithCapture(event);
HXLINE( 478)			if (::hx::IsNotNull( this->stage )) {
HXLINE( 480)				bool _hx_tmp;
HXDLIN( 480)				if (::hx::IsNotNull( child->stage )) {
HXLINE( 480)					_hx_tmp = ::hx::IsInstanceEq( this->stage->get_focus(),child );
            				}
            				else {
HXLINE( 480)					_hx_tmp = false;
            				}
HXDLIN( 480)				if (_hx_tmp) {
HXLINE( 482)					this->stage->set_focus(null());
            				}
HXLINE( 485)				 ::openfl::events::Event event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("removedFromStage",34,21,76,ba),false,false);
HXLINE( 486)				child->_hx___dispatchWithCapture(event);
HXLINE( 487)				child->_hx___dispatchChildren(event);
HXLINE( 488)				child->_hx___setStageReference(null());
            			}
HXLINE( 491)			child->parent = null();
HXLINE( 492)			this->_hx___children->remove(child);
HXLINE( 493)			this->_hx___removedChildren->push(child);
HXLINE( 494)			child->_hx___setTransformDirty();
            		}
HXLINE( 497)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_523_removeChildAt)
HXLINE( 524)		bool _hx_tmp;
HXDLIN( 524)		if ((index >= 0)) {
HXLINE( 524)			_hx_tmp = (index < this->_hx___children->length);
            		}
            		else {
HXLINE( 524)			_hx_tmp = false;
            		}
HXDLIN( 524)		if (_hx_tmp) {
HXLINE( 526)			return this->removeChild(this->_hx___children->__get(index).StaticCast<  ::openfl::display::DisplayObject >());
            		}
HXLINE( 529)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

void DisplayObjectContainer_obj::removeChildren(::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(0);
            		int endIndex = __o_endIndex.Default(2147483647);
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_544_removeChildren)
HXLINE( 545)		if ((endIndex == (int)2147483647)) {
HXLINE( 547)			endIndex = (this->_hx___children->length - 1);
HXLINE( 549)			if ((endIndex < 0)) {
HXLINE( 551)				return;
            			}
            		}
HXLINE( 555)		if ((beginIndex > (this->_hx___children->length - 1))) {
HXLINE( 557)			return;
            		}
            		else {
HXLINE( 559)			bool _hx_tmp;
HXDLIN( 559)			bool _hx_tmp1;
HXDLIN( 559)			if ((endIndex >= beginIndex)) {
HXLINE( 559)				_hx_tmp1 = (beginIndex < 0);
            			}
            			else {
HXLINE( 559)				_hx_tmp1 = true;
            			}
HXDLIN( 559)			if (!(_hx_tmp1)) {
HXLINE( 559)				_hx_tmp = (endIndex > this->_hx___children->length);
            			}
            			else {
HXLINE( 559)				_hx_tmp = true;
            			}
HXDLIN( 559)			if (_hx_tmp) {
HXLINE( 561)				HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("The supplied index is out of bounds.",17,96,1b,51)));
            			}
            		}
HXLINE( 564)		int numRemovals = (endIndex - beginIndex);
HXLINE( 565)		while((numRemovals >= 0)){
HXLINE( 567)			this->removeChildAt(beginIndex);
HXLINE( 568)			numRemovals = (numRemovals - 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::resolve(::String fieldName){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_573_resolve)
HXLINE( 574)		if (::hx::IsNull( this->_hx___children )) {
HXLINE( 574)			return null();
            		}
HXLINE( 576)		{
HXLINE( 576)			int _g = 0;
HXDLIN( 576)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 576)			while((_g < _g1->length)){
HXLINE( 576)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 576)				_g = (_g + 1);
HXLINE( 578)				if ((child->get_name() == fieldName)) {
HXLINE( 580)					return child;
            				}
            			}
            		}
HXLINE( 584)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,resolve,return )

void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_625_setChildIndex)
HXDLIN( 625)		bool _hx_tmp;
HXDLIN( 625)		bool _hx_tmp1;
HXDLIN( 625)		if ((index >= 0)) {
HXDLIN( 625)			_hx_tmp1 = (index <= this->_hx___children->length);
            		}
            		else {
HXDLIN( 625)			_hx_tmp1 = false;
            		}
HXDLIN( 625)		if (_hx_tmp1) {
HXDLIN( 625)			_hx_tmp = ::hx::IsInstanceEq( child->parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN( 625)			_hx_tmp = false;
            		}
HXDLIN( 625)		if (_hx_tmp) {
HXLINE( 627)			this->_hx___children->remove(child);
HXLINE( 628)			this->_hx___children->insert(index,child);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

void DisplayObjectContainer_obj::stopAllMovieClips(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_643_stopAllMovieClips)
HXDLIN( 643)		this->_hx___stopAllMovieClips();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,stopAllMovieClips,(void))

void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1, ::openfl::display::DisplayObject child2){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_658_swapChildren)
HXDLIN( 658)		bool _hx_tmp;
HXDLIN( 658)		if (::hx::IsInstanceEq( child1->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXDLIN( 658)			_hx_tmp = ::hx::IsInstanceEq( child2->parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN( 658)			_hx_tmp = false;
            		}
HXDLIN( 658)		if (_hx_tmp) {
HXLINE( 660)			int index1 = this->_hx___children->indexOf(child1,null());
HXLINE( 661)			int index2 = this->_hx___children->indexOf(child2,null());
HXLINE( 663)			this->_hx___children[index1] = child2;
HXLINE( 664)			this->_hx___children[index2] = child1;
HXLINE( 666)			if (!(this->_hx___renderDirty)) {
HXLINE( 666)				this->_hx___renderDirty = true;
HXDLIN( 666)				this->_hx___setParentRenderDirty();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

void DisplayObjectContainer_obj::swapChildrenAt(int index1,int index2){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_680_swapChildrenAt)
HXLINE( 681)		 ::openfl::display::DisplayObject swap = this->_hx___children->__get(index1).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 682)		this->_hx___children[index1] = this->_hx___children->__get(index2).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 683)		this->_hx___children[index2] = swap;
HXLINE( 684)		swap = null();
HXLINE( 685)		if (!(this->_hx___renderDirty)) {
HXLINE( 685)			this->_hx___renderDirty = true;
HXDLIN( 685)			this->_hx___setParentRenderDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

void DisplayObjectContainer_obj::_hx___cleanup(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_689___cleanup)
HXLINE( 690)		this->super::_hx___cleanup();
HXLINE( 692)		{
HXLINE( 692)			int _g = 0;
HXDLIN( 692)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 692)			while((_g < _g1->length)){
HXLINE( 692)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 692)				_g = (_g + 1);
HXLINE( 694)				child->_hx___cleanup();
            			}
            		}
HXLINE( 697)		{
HXLINE( 697)			{
HXLINE( 697)				 ::Dynamic orphan = this->_hx___removedChildren->iterator();
HXDLIN( 697)				while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 697)					 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 697)					if (::hx::IsNull( orphan1->stage )) {
HXLINE( 697)						orphan1->_hx___cleanup();
            					}
            				}
            			}
HXDLIN( 697)			this->_hx___removedChildren->set_length(0);
            		}
            	}


void DisplayObjectContainer_obj::_hx___cleanupRemovedChildren(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_701___cleanupRemovedChildren)
HXLINE( 702)		{
HXLINE( 702)			 ::Dynamic orphan = this->_hx___removedChildren->iterator();
HXDLIN( 702)			while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 702)				 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 704)				if (::hx::IsNull( orphan1->stage )) {
HXLINE( 706)					orphan1->_hx___cleanup();
            				}
            			}
            		}
HXLINE( 710)		this->_hx___removedChildren->set_length(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,_hx___cleanupRemovedChildren,(void))

void DisplayObjectContainer_obj::_hx___dispatchChildren( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_715___dispatchChildren)
HXDLIN( 715)		if (::hx::IsNotNull( this->_hx___children )) {
HXLINE( 717)			int _g = 0;
HXDLIN( 717)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 717)			while((_g < _g1->length)){
HXLINE( 717)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 717)				_g = (_g + 1);
HXLINE( 719)				event->target = child;
HXLINE( 721)				if (!(child->_hx___dispatchWithCapture(event))) {
HXLINE( 723)					goto _hx_goto_27;
            				}
HXLINE( 726)				child->_hx___dispatchChildren(event);
            			}
            			_hx_goto_27:;
            		}
            	}


void DisplayObjectContainer_obj::_hx___enterFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_733___enterFrame)
HXDLIN( 733)		int _g = 0;
HXDLIN( 733)		::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 733)		while((_g < _g1->length)){
HXDLIN( 733)			 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 733)			_g = (_g + 1);
HXLINE( 735)			child->_hx___enterFrame(deltaTime);
            		}
            	}


void DisplayObjectContainer_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_740___getBounds)
HXLINE( 741)		this->super::_hx___getBounds(rect,matrix);
HXLINE( 743)		if ((this->_hx___children->length == 0)) {
HXLINE( 743)			return;
            		}
HXLINE( 745)		 ::openfl::geom::Matrix childWorldTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 747)		{
HXLINE( 747)			int _g = 0;
HXDLIN( 747)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 747)			while((_g < _g1->length)){
HXLINE( 747)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 747)				_g = (_g + 1);
HXLINE( 749)				bool _hx_tmp;
HXDLIN( 749)				if ((child->_hx___scaleX != 0)) {
HXLINE( 749)					_hx_tmp = (child->_hx___scaleY == 0);
            				}
            				else {
HXLINE( 749)					_hx_tmp = true;
            				}
HXDLIN( 749)				if (_hx_tmp) {
HXLINE( 749)					continue;
            				}
HXLINE( 751)				{
HXLINE( 751)					 ::openfl::geom::Matrix local = child->_hx___transform;
HXDLIN( 751)					childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 751)					childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 751)					childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 751)					childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 751)					childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 751)					childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            				}
HXLINE( 753)				child->_hx___getBounds(rect,childWorldTransform);
            			}
            		}
HXLINE( 756)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


void DisplayObjectContainer_obj::_hx___getFilterBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_760___getFilterBounds)
HXLINE( 761)		this->super::_hx___getFilterBounds(rect,matrix);
HXLINE( 762)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 762)			return;
            		}
HXLINE( 764)		if ((this->_hx___children->length == 0)) {
HXLINE( 764)			return;
            		}
HXLINE( 766)		 ::openfl::geom::Matrix childWorldTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 768)		{
HXLINE( 768)			int _g = 0;
HXDLIN( 768)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 768)			while((_g < _g1->length)){
HXLINE( 768)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 768)				_g = (_g + 1);
HXLINE( 770)				bool _hx_tmp;
HXDLIN( 770)				bool _hx_tmp1;
HXDLIN( 770)				if ((child->_hx___scaleX != 0)) {
HXLINE( 770)					_hx_tmp1 = (child->_hx___scaleY == 0);
            				}
            				else {
HXLINE( 770)					_hx_tmp1 = true;
            				}
HXDLIN( 770)				if (!(_hx_tmp1)) {
HXLINE( 770)					_hx_tmp = child->_hx___isMask;
            				}
            				else {
HXLINE( 770)					_hx_tmp = true;
            				}
HXDLIN( 770)				if (_hx_tmp) {
HXLINE( 770)					continue;
            				}
HXLINE( 772)				{
HXLINE( 772)					 ::openfl::geom::Matrix local = child->_hx___transform;
HXDLIN( 772)					childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 772)					childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 772)					childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 772)					childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 772)					childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 772)					childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            				}
HXLINE( 774)				 ::openfl::geom::Rectangle childRect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 776)				child->_hx___getFilterBounds(childRect,childWorldTransform);
HXLINE( 777)				rect->_hx___expand(childRect->x,childRect->y,childRect->width,childRect->height);
HXLINE( 779)				::openfl::geom::Rectangle_obj::_hx___pool->release(childRect);
            			}
            		}
HXLINE( 782)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


void DisplayObjectContainer_obj::_hx___getRenderBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_786___getRenderBounds)
HXLINE( 787)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 789)			this->super::_hx___getRenderBounds(rect,matrix);
HXLINE( 790)			return;
            		}
            		else {
HXLINE( 794)			this->super::_hx___getBounds(rect,matrix);
            		}
HXLINE( 797)		if ((this->_hx___children->length == 0)) {
HXLINE( 797)			return;
            		}
HXLINE( 799)		 ::openfl::geom::Matrix childWorldTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 801)		{
HXLINE( 801)			int _g = 0;
HXDLIN( 801)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 801)			while((_g < _g1->length)){
HXLINE( 801)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 801)				_g = (_g + 1);
HXLINE( 803)				bool _hx_tmp;
HXDLIN( 803)				bool _hx_tmp1;
HXDLIN( 803)				if ((child->_hx___scaleX != 0)) {
HXLINE( 803)					_hx_tmp1 = (child->_hx___scaleY == 0);
            				}
            				else {
HXLINE( 803)					_hx_tmp1 = true;
            				}
HXDLIN( 803)				if (!(_hx_tmp1)) {
HXLINE( 803)					_hx_tmp = child->_hx___isMask;
            				}
            				else {
HXLINE( 803)					_hx_tmp = true;
            				}
HXDLIN( 803)				if (_hx_tmp) {
HXLINE( 803)					continue;
            				}
HXLINE( 805)				{
HXLINE( 805)					 ::openfl::geom::Matrix local = child->_hx___transform;
HXDLIN( 805)					childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 805)					childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 805)					childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 805)					childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 805)					childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 805)					childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            				}
HXLINE( 807)				child->_hx___getRenderBounds(rect,childWorldTransform);
            			}
            		}
HXLINE( 810)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


bool DisplayObjectContainer_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_815___hitTest)
HXLINE( 816)		bool _hx_tmp;
HXDLIN( 816)		bool _hx_tmp1;
HXDLIN( 816)		if (hitObject->get_visible()) {
HXLINE( 816)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE( 816)			_hx_tmp1 = true;
            		}
HXDLIN( 816)		if (!(_hx_tmp1)) {
HXLINE( 816)			bool _hx_tmp1;
HXDLIN( 816)			if (interactiveOnly) {
HXLINE( 816)				_hx_tmp1 = !(this->mouseEnabled);
            			}
            			else {
HXLINE( 816)				_hx_tmp1 = false;
            			}
HXDLIN( 816)			if (_hx_tmp1) {
HXLINE( 816)				_hx_tmp = !(this->mouseChildren);
            			}
            			else {
HXLINE( 816)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 816)			_hx_tmp = true;
            		}
HXDLIN( 816)		if (_hx_tmp) {
HXLINE( 816)			return false;
            		}
HXLINE( 817)		bool _hx_tmp2;
HXDLIN( 817)		if (::hx::IsNotNull( this->get_mask() )) {
HXLINE( 817)			_hx_tmp2 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE( 817)			_hx_tmp2 = false;
            		}
HXDLIN( 817)		if (_hx_tmp2) {
HXLINE( 817)			return false;
            		}
HXLINE( 819)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 821)			 ::openfl::geom::Point point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 822)			point->setTo(x,y);
HXLINE( 823)			{
HXLINE( 823)				 ::openfl::geom::Matrix _this = this->_hx___getRenderTransform();
HXDLIN( 823)				Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN( 823)				if ((norm == 0)) {
HXLINE( 823)					point->x = -(_this->tx);
HXDLIN( 823)					point->y = -(_this->ty);
            				}
            				else {
HXLINE( 823)					Float px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - point->y)) + (_this->d * (point->x - _this->tx))));
HXDLIN( 823)					point->y = ((((Float)1.0) / norm) * ((_this->a * (point->y - _this->ty)) + (_this->b * (_this->tx - point->x))));
HXDLIN( 823)					point->x = px;
            				}
            			}
HXLINE( 825)			if (!(this->_hx___scrollRect->containsPoint(point))) {
HXLINE( 827)				::openfl::geom::Point_obj::_hx___pool->release(point);
HXLINE( 828)				return false;
            			}
HXLINE( 831)			::openfl::geom::Point_obj::_hx___pool->release(point);
            		}
HXLINE( 834)		int i = this->_hx___children->length;
HXLINE( 835)		if (interactiveOnly) {
HXLINE( 837)			bool _hx_tmp;
HXDLIN( 837)			if (::hx::IsNotNull( stack )) {
HXLINE( 837)				_hx_tmp = !(this->mouseChildren);
            			}
            			else {
HXLINE( 837)				_hx_tmp = true;
            			}
HXDLIN( 837)			if (_hx_tmp) {
HXLINE( 839)				while(true){
HXLINE( 839)					i = (i - 1);
HXDLIN( 839)					if (!((i >= 0))) {
HXLINE( 839)						goto _hx_goto_37;
            					}
HXLINE( 841)					if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTest(x,y,shapeFlag,null(),true,this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >())) {
HXLINE( 843)						if (::hx::IsNotNull( stack )) {
HXLINE( 845)							stack->push(hitObject);
            						}
HXLINE( 848)						return true;
            					}
            				}
            				_hx_goto_37:;
            			}
            			else {
HXLINE( 852)				if (::hx::IsNotNull( stack )) {
HXLINE( 854)					int length = stack->length;
HXLINE( 856)					bool interactive = false;
HXLINE( 857)					bool hitTest = false;
HXLINE( 859)					while(true){
HXLINE( 859)						i = (i - 1);
HXDLIN( 859)						if (!((i >= 0))) {
HXLINE( 859)							goto _hx_goto_38;
            						}
HXLINE( 861)						interactive = this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___getInteractive(null());
HXLINE( 863)						bool _hx_tmp;
HXDLIN( 863)						if (!(interactive)) {
HXLINE( 863)							if (this->mouseEnabled) {
HXLINE( 863)								_hx_tmp = !(hitTest);
            							}
            							else {
HXLINE( 863)								_hx_tmp = false;
            							}
            						}
            						else {
HXLINE( 863)							_hx_tmp = true;
            						}
HXDLIN( 863)						if (_hx_tmp) {
HXLINE( 865)							if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTest(x,y,shapeFlag,stack,true,this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >())) {
HXLINE( 867)								hitTest = true;
HXLINE( 869)								bool _hx_tmp;
HXDLIN( 869)								if (interactive) {
HXLINE( 869)									_hx_tmp = (stack->length > length);
            								}
            								else {
HXLINE( 869)									_hx_tmp = false;
            								}
HXDLIN( 869)								if (_hx_tmp) {
HXLINE( 871)									goto _hx_goto_38;
            								}
            							}
            						}
            					}
            					_hx_goto_38:;
HXLINE( 877)					if (hitTest) {
HXLINE( 879)						stack->insert(length,hitObject);
HXLINE( 880)						return true;
            					}
            				}
            			}
            		}
            		else {
HXLINE( 886)			bool hitTest = false;
HXLINE( 888)			while(true){
HXLINE( 888)				i = (i - 1);
HXDLIN( 888)				if (!((i >= 0))) {
HXLINE( 888)					goto _hx_goto_39;
            				}
HXLINE( 890)				if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTest(x,y,shapeFlag,stack,false,this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >())) {
HXLINE( 892)					hitTest = true;
HXLINE( 893)					if (::hx::IsNull( stack )) {
HXLINE( 893)						goto _hx_goto_39;
            					}
            				}
            			}
            			_hx_goto_39:;
HXLINE( 897)			return hitTest;
            		}
HXLINE( 900)		return false;
            	}


bool DisplayObjectContainer_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_904___hitTestMask)
HXLINE( 905)		int i = this->_hx___children->length;
HXLINE( 907)		while(true){
HXLINE( 907)			i = (i - 1);
HXDLIN( 907)			if (!((i >= 0))) {
HXLINE( 907)				goto _hx_goto_41;
            			}
HXLINE( 909)			if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTestMask(x,y)) {
HXLINE( 911)				return true;
            			}
            		}
            		_hx_goto_41:;
HXLINE( 915)		return false;
            	}


void DisplayObjectContainer_obj::_hx___readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData,bool recurse){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_919___readGraphicsData)
HXLINE( 920)		this->super::_hx___readGraphicsData(graphicsData,recurse);
HXLINE( 922)		if (recurse) {
HXLINE( 924)			int _g = 0;
HXDLIN( 924)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 924)			while((_g < _g1->length)){
HXLINE( 924)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 924)				_g = (_g + 1);
HXLINE( 926)				child->_hx___readGraphicsData(graphicsData,recurse);
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___setStageReference( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_932___setStageReference)
HXLINE( 933)		this->super::_hx___setStageReference(stage);
HXLINE( 935)		if (::hx::IsNotNull( this->_hx___children )) {
HXLINE( 937)			int _g = 0;
HXDLIN( 937)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 937)			while((_g < _g1->length)){
HXLINE( 937)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 937)				_g = (_g + 1);
HXLINE( 939)				child->_hx___setStageReference(stage);
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___setWorldTransformInvalid(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_946___setWorldTransformInvalid)
HXDLIN( 946)		if (!(this->_hx___worldTransformInvalid)) {
HXLINE( 948)			this->_hx___worldTransformInvalid = true;
HXLINE( 950)			if (::hx::IsNotNull( this->_hx___children )) {
HXLINE( 952)				int _g = 0;
HXDLIN( 952)				::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 952)				while((_g < _g1->length)){
HXLINE( 952)					 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 952)					_g = (_g + 1);
HXLINE( 954)					child->_hx___setWorldTransformInvalid();
            				}
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___stopAllMovieClips(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_962___stopAllMovieClips)
HXDLIN( 962)		int _g = 0;
HXDLIN( 962)		::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 962)		while((_g < _g1->length)){
HXDLIN( 962)			 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 962)			_g = (_g + 1);
HXLINE( 964)			child->_hx___stopAllMovieClips();
            		}
            	}


void DisplayObjectContainer_obj::_hx___tabTest(::Array< ::Dynamic> stack){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_969___tabTest)
HXLINE( 970)		this->super::_hx___tabTest(stack);
HXLINE( 972)		if (!(this->get_tabChildren())) {
HXLINE( 972)			return;
            		}
HXLINE( 974)		bool interactive = false;
HXLINE( 975)		 ::openfl::display::InteractiveObject interactiveObject = null();
HXLINE( 977)		{
HXLINE( 977)			int _g = 0;
HXDLIN( 977)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 977)			while((_g < _g1->length)){
HXLINE( 977)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 977)				_g = (_g + 1);
HXLINE( 979)				interactive = child->_hx___getInteractive(null());
HXLINE( 981)				if (interactive) {
HXLINE( 983)					interactiveObject = ( ( ::openfl::display::InteractiveObject)(child) );
HXLINE( 984)					interactiveObject->_hx___tabTest(stack);
            				}
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___update(bool transformOnly,bool updateChildren){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_990___update)
HXLINE( 991)		this->super::_hx___update(transformOnly,updateChildren);
HXLINE( 993)		if (updateChildren) {
HXLINE( 995)			int _g = 0;
HXDLIN( 995)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 995)			while((_g < _g1->length)){
HXLINE( 995)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 995)				_g = (_g + 1);
HXLINE( 997)				child->_hx___update(transformOnly,true);
            			}
            		}
            	}


int DisplayObjectContainer_obj::get_numChildren(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_1006_get_numChildren)
HXDLIN(1006)		return this->_hx___children->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )

bool DisplayObjectContainer_obj::get_tabChildren(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_1011_get_tabChildren)
HXDLIN(1011)		return this->_hx___tabChildren;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_tabChildren,return )

bool DisplayObjectContainer_obj::set_tabChildren(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_1015_set_tabChildren)
HXLINE(1016)		if ((this->_hx___tabChildren != value)) {
HXLINE(1018)			this->_hx___tabChildren = value;
HXLINE(1020)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("tabChildrenChange",44,91,b5,de),true,false));
            		}
HXLINE(1023)		return this->_hx___tabChildren;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_tabChildren,return )


::hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new() {
	::hx::ObjectPtr< DisplayObjectContainer_obj > __this = new DisplayObjectContainer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DisplayObjectContainer_obj *__this = (DisplayObjectContainer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplayObjectContainer_obj), true, "openfl.display.DisplayObjectContainer"));
	*(void **)__this = DisplayObjectContainer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(_hx___removedChildren,"__removedChildren");
	HX_MARK_MEMBER_NAME(_hx___tabChildren,"__tabChildren");
	 ::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(_hx___removedChildren,"__removedChildren");
	HX_VISIT_MEMBER_NAME(_hx___tabChildren,"__tabChildren");
	 ::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DisplayObjectContainer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return ::hx::Val( resolve_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return ::hx::Val( addChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return ::hx::Val( _hx___cleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"__tabTest") ) { return ::hx::Val( _hx___tabTest_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return ::hx::Val( addChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return ::hx::Val( getChildAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numChildren() ); }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tabChildren() ); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return ::hx::Val( removeChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return ::hx::Val( swapChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return ::hx::Val( mouseChildren ); }
		if (HX_FIELD_EQ(inName,"__tabChildren") ) { return ::hx::Val( _hx___tabChildren ); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return ::hx::Val( getChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return ::hx::Val( removeChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return ::hx::Val( setChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return ::hx::Val( _hx___hitTestMask_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return ::hx::Val( getChildByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return ::hx::Val( removeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return ::hx::Val( swapChildrenAt_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return ::hx::Val( get_numChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tabChildren") ) { return ::hx::Val( get_tabChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabChildren") ) { return ::hx::Val( set_tabChildren_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return ::hx::Val( _hx___removedChildren ); }
		if (HX_FIELD_EQ(inName,"stopAllMovieClips") ) { return ::hx::Val( stopAllMovieClips_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getFilterBounds") ) { return ::hx::Val( _hx___getFilterBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return ::hx::Val( _hx___getRenderBounds_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__dispatchChildren") ) { return ::hx::Val( _hx___dispatchChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return ::hx::Val( _hx___readGraphicsData_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return ::hx::Val( _hx___setStageReference_dyn() ); }
		if (HX_FIELD_EQ(inName,"__stopAllMovieClips") ) { return ::hx::Val( _hx___stopAllMovieClips_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return ::hx::Val( getObjectsUnderPoint_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__cleanupRemovedChildren") ) { return ::hx::Val( _hx___cleanupRemovedChildren_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__setWorldTransformInvalid") ) { return ::hx::Val( _hx___setWorldTransformInvalid_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return ::hx::Val( areInaccessibleObjectsUnderPoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DisplayObjectContainer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"tabChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tabChildren(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tabChildren") ) { _hx___tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { _hx___removedChildren=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mouseChildren",84,18,6b,ff));
	outFields->push(HX_("numChildren",a5,69,80,5c));
	outFields->push(HX_("tabChildren",b4,0c,86,4b));
	outFields->push(HX_("__removedChildren",df,c5,0e,d3));
	outFields->push(HX_("__tabChildren",94,4d,fe,93));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DisplayObjectContainer_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_("mouseChildren",84,18,6b,ff)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(DisplayObjectContainer_obj,_hx___removedChildren),HX_("__removedChildren",df,c5,0e,d3)},
	{::hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,_hx___tabChildren),HX_("__tabChildren",94,4d,fe,93)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DisplayObjectContainer_obj_sStaticStorageInfo = 0;
#endif

static ::String DisplayObjectContainer_obj_sMemberFields[] = {
	HX_("mouseChildren",84,18,6b,ff),
	HX_("__removedChildren",df,c5,0e,d3),
	HX_("__tabChildren",94,4d,fe,93),
	HX_("addChild",bb,cf,16,bf),
	HX_("addChildAt",8e,ad,36,ce),
	HX_("areInaccessibleObjectsUnderPoint",3d,22,9b,1e),
	HX_("contains",1f,5a,7b,2c),
	HX_("getChildAt",b9,07,0e,b6),
	HX_("getChildByName",88,b9,73,a3),
	HX_("getChildIndex",0c,68,02,b9),
	HX_("getObjectsUnderPoint",96,10,d5,80),
	HX_("removeChild",b8,86,ed,43),
	HX_("removeChildAt",cb,dd,66,3f),
	HX_("removeChildren",a3,55,c0,3a),
	HX_("resolve",ec,12,60,67),
	HX_("setChildIndex",18,4a,08,fe),
	HX_("stopAllMovieClips",f2,60,f8,a0),
	HX_("swapChildren",f2,4a,53,e0),
	HX_("swapChildrenAt",85,a4,f1,13),
	HX_("__cleanup",04,5d,90,2c),
	HX_("__cleanupRemovedChildren",5b,84,61,c1),
	HX_("__dispatchChildren",39,81,f4,f4),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__getFilterBounds",e3,3a,ba,18),
	HX_("__getRenderBounds",01,11,b8,7b),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("__readGraphicsData",2b,10,91,f2),
	HX_("__setStageReference",4f,e5,e5,f4),
	HX_("__setWorldTransformInvalid",7b,c9,b9,d4),
	HX_("__stopAllMovieClips",d2,89,e8,53),
	HX_("__tabTest",27,ee,bd,c6),
	HX_("__update",29,f1,34,2f),
	HX_("get_numChildren",3c,21,62,1d),
	HX_("get_tabChildren",4b,c4,67,0c),
	HX_("set_tabChildren",57,41,33,08),
	::String(null()) };

::hx::Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	DisplayObjectContainer_obj _hx_dummy;
	DisplayObjectContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.DisplayObjectContainer",4a,52,ef,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DisplayObjectContainer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DisplayObjectContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayObjectContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayObjectContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
