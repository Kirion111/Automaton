#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
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
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvent
#include <openfl/events/UncaughtErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_DispatchIterator
#include <openfl/events/_EventDispatcher/DispatchIterator.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_Listener
#include <openfl/events/_EventDispatcher/Listener.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e38539b7b6ad7309_85_new,"openfl.events.EventDispatcher","new",0xd41245fc,"openfl.events.EventDispatcher.new","openfl/events/EventDispatcher.hx",85,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_190_addEventListener,"openfl.events.EventDispatcher","addEventListener",0xf79f44b1,"openfl.events.EventDispatcher.addEventListener","openfl/events/EventDispatcher.hx",190,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_248_dispatchEvent,"openfl.events.EventDispatcher","dispatchEvent",0x2230d79c,"openfl.events.EventDispatcher.dispatchEvent","openfl/events/EventDispatcher.hx",248,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_282_hasEventListener,"openfl.events.EventDispatcher","hasEventListener",0x132567d8,"openfl.events.EventDispatcher.hasEventListener","openfl/events/EventDispatcher.hx",282,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_304_removeEventListener,"openfl.events.EventDispatcher","removeEventListener",0x40c1f566,"openfl.events.EventDispatcher.removeEventListener","openfl/events/EventDispatcher.hx",304,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_340_toString,"openfl.events.EventDispatcher","toString",0x34d48590,"openfl.events.EventDispatcher.toString","openfl/events/EventDispatcher.hx",340,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_368_willTrigger,"openfl.events.EventDispatcher","willTrigger",0x7a1765e2,"openfl.events.EventDispatcher.willTrigger","openfl/events/EventDispatcher.hx",368,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_372___dispatchEvent,"openfl.events.EventDispatcher","__dispatchEvent",0x417d6f7c,"openfl.events.EventDispatcher.__dispatchEvent","openfl/events/EventDispatcher.hx",372,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_504___removeAllListeners,"openfl.events.EventDispatcher","__removeAllListeners",0x1f26f486,"openfl.events.EventDispatcher.__removeAllListeners","openfl/events/EventDispatcher.hx",504,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_510___addListenerByPriority,"openfl.events.EventDispatcher","__addListenerByPriority",0xd68810ec,"openfl.events.EventDispatcher.__addListenerByPriority","openfl/events/EventDispatcher.hx",510,0xe2270714)
namespace openfl{
namespace events{

void EventDispatcher_obj::__construct(::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_85_new)
HXDLIN(  85)		if (::hx::IsNotNull( target )) {
HXLINE(  87)			this->_hx___targetDispatcher = target;
            		}
            	}

Dynamic EventDispatcher_obj::__CreateEmpty() { return new EventDispatcher_obj; }

void *EventDispatcher_obj::_hx_vtable = 0;

Dynamic EventDispatcher_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventDispatcher_obj > _hx_result = new EventDispatcher_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EventDispatcher_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
}

static ::openfl::events::IEventDispatcher_obj _hx_openfl_events_EventDispatcher__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::openfl::events::EventDispatcher_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::openfl::events::EventDispatcher_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::openfl::events::EventDispatcher_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::openfl::events::EventDispatcher_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::openfl::events::EventDispatcher_obj::willTrigger,
};

void *EventDispatcher_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_openfl_events_EventDispatcher__hx_openfl_events_IEventDispatcher;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void EventDispatcher_obj::addEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  __o_useCapture,::hx::Null< int >  __o_priority,::hx::Null< bool >  __o_useWeakReference){
            		bool useCapture = __o_useCapture.Default(false);
            		int priority = __o_priority.Default(0);
            		bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_e38539b7b6ad7309_190_addEventListener)
HXLINE( 191)		if (::hx::IsNull( listener )) {
HXLINE( 191)			return;
            		}
HXLINE( 193)		if (::hx::IsNull( this->_hx___eventMap )) {
HXLINE( 195)			this->_hx___eventMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 196)			this->_hx___iterators =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 199)		if (!(this->_hx___eventMap->exists(type))) {
HXLINE( 201)			::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new();
HXLINE( 202)			list->push( ::openfl::events::_EventDispatcher::Listener_obj::__alloc( HX_CTX ,listener,useCapture,priority,useWeakReference));
HXLINE( 204)			 ::openfl::events::_EventDispatcher::DispatchIterator iterator =  ::openfl::events::_EventDispatcher::DispatchIterator_obj::__alloc( HX_CTX ,list);
HXLINE( 206)			this->_hx___eventMap->set(type,list);
HXLINE( 207)			this->_hx___iterators->set(type,::Array_obj< ::Dynamic>::__new(1)->init(0,iterator));
            		}
            		else {
HXLINE( 211)			::Array< ::Dynamic> list = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) );
HXLINE( 213)			{
HXLINE( 213)				int _g = 0;
HXDLIN( 213)				int _g1 = list->length;
HXDLIN( 213)				while((_g < _g1)){
HXLINE( 213)					_g = (_g + 1);
HXDLIN( 213)					int i = (_g - 1);
HXLINE( 215)					if (list->__get(i).StaticCast<  ::openfl::events::_EventDispatcher::Listener >()->match(listener,useCapture)) {
HXLINE( 215)						return;
            					}
            				}
            			}
HXLINE( 218)			::Array< ::Dynamic> iterators = ( (::Array< ::Dynamic>)(this->_hx___iterators->get(type)) );
HXLINE( 220)			{
HXLINE( 220)				int _g2 = 0;
HXDLIN( 220)				while((_g2 < iterators->length)){
HXLINE( 220)					 ::openfl::events::_EventDispatcher::DispatchIterator iterator = iterators->__get(_g2).StaticCast<  ::openfl::events::_EventDispatcher::DispatchIterator >();
HXDLIN( 220)					_g2 = (_g2 + 1);
HXLINE( 222)					if (iterator->active) {
HXLINE( 224)						iterator->copy();
            					}
            				}
            			}
HXLINE( 228)			this->_hx___addListenerByPriority(list, ::openfl::events::_EventDispatcher::Listener_obj::__alloc( HX_CTX ,listener,useCapture,priority,useWeakReference));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(EventDispatcher_obj,addEventListener,(void))

bool EventDispatcher_obj::dispatchEvent( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_248_dispatchEvent)
HXLINE( 249)		if (::hx::IsNotNull( this->_hx___targetDispatcher )) {
HXLINE( 251)			event->target = this->_hx___targetDispatcher;
            		}
            		else {
HXLINE( 255)			event->target = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 258)		return this->_hx___dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,dispatchEvent,return )

bool EventDispatcher_obj::hasEventListener(::String type){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_282_hasEventListener)
HXLINE( 283)		if (::hx::IsNull( this->_hx___eventMap )) {
HXLINE( 283)			return false;
            		}
HXLINE( 285)		return this->_hx___eventMap->exists(type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,hasEventListener,return )

void EventDispatcher_obj::removeEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  __o_useCapture){
            		bool useCapture = __o_useCapture.Default(false);
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_304_removeEventListener)
HXLINE( 305)		bool _hx_tmp;
HXDLIN( 305)		if (::hx::IsNotNull( this->_hx___eventMap )) {
HXLINE( 305)			_hx_tmp = ::hx::IsNull( listener );
            		}
            		else {
HXLINE( 305)			_hx_tmp = true;
            		}
HXDLIN( 305)		if (_hx_tmp) {
HXLINE( 305)			return;
            		}
HXLINE( 307)		::Array< ::Dynamic> list = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) );
HXLINE( 308)		if (::hx::IsNull( list )) {
HXLINE( 308)			return;
            		}
HXLINE( 310)		::Array< ::Dynamic> iterators = ( (::Array< ::Dynamic>)(this->_hx___iterators->get(type)) );
HXLINE( 312)		{
HXLINE( 312)			int _g = 0;
HXDLIN( 312)			int _g1 = list->length;
HXDLIN( 312)			while((_g < _g1)){
HXLINE( 312)				_g = (_g + 1);
HXDLIN( 312)				int i = (_g - 1);
HXLINE( 314)				if (list->__get(i).StaticCast<  ::openfl::events::_EventDispatcher::Listener >()->match(listener,useCapture)) {
HXLINE( 316)					{
HXLINE( 316)						int _g = 0;
HXDLIN( 316)						while((_g < iterators->length)){
HXLINE( 316)							 ::openfl::events::_EventDispatcher::DispatchIterator iterator = iterators->__get(_g).StaticCast<  ::openfl::events::_EventDispatcher::DispatchIterator >();
HXDLIN( 316)							_g = (_g + 1);
HXLINE( 318)							iterator->remove(list->__get(i).StaticCast<  ::openfl::events::_EventDispatcher::Listener >(),i);
            						}
            					}
HXLINE( 321)					list->removeRange(i,1);
HXLINE( 322)					goto _hx_goto_6;
            				}
            			}
            			_hx_goto_6:;
            		}
HXLINE( 326)		if ((list->length == 0)) {
HXLINE( 328)			this->_hx___eventMap->remove(type);
HXLINE( 329)			this->_hx___iterators->remove(type);
            		}
HXLINE( 332)		if (!(( (bool)(this->_hx___eventMap->iterator()->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) ))) {
HXLINE( 334)			this->_hx___eventMap = null();
HXLINE( 335)			this->_hx___iterators = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(EventDispatcher_obj,removeEventListener,(void))

::String EventDispatcher_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_340_toString)
HXLINE( 341)		::String full = ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)));
HXLINE( 342)		::String _hx_short = ( (::String)(full.split(HX_(".",2e,00,00,00))->pop()) );
HXLINE( 343)		return ((HX_("[object ",86,f9,3d,d7) + _hx_short) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,toString,return )

bool EventDispatcher_obj::willTrigger(::String type){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_368_willTrigger)
HXDLIN( 368)		return this->hasEventListener(type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,willTrigger,return )

bool EventDispatcher_obj::_hx___dispatchEvent( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_e38539b7b6ad7309_372___dispatchEvent)
HXLINE( 373)		bool _hx_tmp;
HXDLIN( 373)		if (::hx::IsNotNull( this->_hx___eventMap )) {
HXLINE( 373)			_hx_tmp = ::hx::IsNull( event );
            		}
            		else {
HXLINE( 373)			_hx_tmp = true;
            		}
HXDLIN( 373)		if (_hx_tmp) {
HXLINE( 373)			return true;
            		}
HXLINE( 375)		::String type = event->type;
HXLINE( 377)		::Array< ::Dynamic> list = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) );
HXLINE( 378)		if (::hx::IsNull( list )) {
HXLINE( 378)			return true;
            		}
HXLINE( 380)		if (::hx::IsNull( event->target )) {
HXLINE( 382)			if (::hx::IsNotNull( this->_hx___targetDispatcher )) {
HXLINE( 384)				event->target = this->_hx___targetDispatcher;
            			}
            			else {
HXLINE( 388)				event->target = ::hx::ObjectPtr<OBJ_>(this);
            			}
            		}
HXLINE( 392)		event->currentTarget = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 394)		bool capture = (event->eventPhase == 1);
HXLINE( 396)		::Array< ::Dynamic> iterators = ( (::Array< ::Dynamic>)(this->_hx___iterators->get(type)) );
HXLINE( 397)		 ::openfl::events::_EventDispatcher::DispatchIterator iterator = iterators->__get(0).StaticCast<  ::openfl::events::_EventDispatcher::DispatchIterator >();
HXLINE( 399)		if (iterator->active) {
HXLINE( 401)			iterator =  ::openfl::events::_EventDispatcher::DispatchIterator_obj::__alloc( HX_CTX ,list);
HXLINE( 402)			iterators->push(iterator);
            		}
HXLINE( 405)		iterator->start();
HXLINE( 407)		{
HXLINE( 407)			 ::openfl::events::_EventDispatcher::DispatchIterator listener = iterator;
HXDLIN( 407)			while(listener->hasNext()){
HXLINE( 407)				 ::openfl::events::_EventDispatcher::Listener listener1 = listener->next();
HXLINE( 409)				if (::hx::IsNull( listener1 )) {
HXLINE( 409)					continue;
            				}
HXLINE( 411)				if ((listener1->useCapture == capture)) {
HXLINE( 462)					bool _hx_tmp;
HXDLIN( 462)					bool _hx_tmp1;
HXDLIN( 462)					if (::hx::IsNotNull( ::openfl::Lib_obj::get_current() )) {
HXLINE( 462)						_hx_tmp1 = ::hx::IsNotNull( ::openfl::Lib_obj::get_current()->stage );
            					}
            					else {
HXLINE( 462)						_hx_tmp1 = false;
            					}
HXDLIN( 462)					if (_hx_tmp1) {
HXLINE( 462)						_hx_tmp = ::openfl::Lib_obj::get_current()->stage->_hx___uncaughtErrorEvents->_hx___enabled;
            					}
            					else {
HXLINE( 462)						_hx_tmp = false;
            					}
HXDLIN( 462)					if (_hx_tmp) {
HXLINE( 464)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 466)							listener1->callback(event);
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE( 468)								{
HXLINE( 468)									null();
            								}
HXDLIN( 468)								 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 470)								if (!(::Std_obj::isOfType(event,::hx::ClassOf< ::openfl::events::UncaughtErrorEvent >()))) {
HXLINE( 472)									::openfl::Lib_obj::get_current()->stage->_hx___handleError(e);
            								}
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
            					}
            					else {
HXLINE( 478)						listener1->callback(event);
            					}
HXLINE( 482)					if (event->_hx___isCanceledNow) {
HXLINE( 484)						goto _hx_goto_11;
            					}
            				}
            			}
            			_hx_goto_11:;
            		}
HXLINE( 489)		iterator->stop();
HXLINE( 491)		if (::hx::IsInstanceNotEq( iterator,iterators->__get(0).StaticCast<  ::openfl::events::_EventDispatcher::DispatchIterator >() )) {
HXLINE( 493)			iterators->remove(iterator);
            		}
            		else {
HXLINE( 497)			iterator->reset(list);
            		}
HXLINE( 500)		return !(event->isDefaultPrevented());
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,_hx___dispatchEvent,return )

void EventDispatcher_obj::_hx___removeAllListeners(){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_504___removeAllListeners)
HXLINE( 505)		this->_hx___eventMap = null();
HXLINE( 506)		this->_hx___iterators = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,_hx___removeAllListeners,(void))

void EventDispatcher_obj::_hx___addListenerByPriority(::Array< ::Dynamic> list, ::openfl::events::_EventDispatcher::Listener listener){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_510___addListenerByPriority)
HXLINE( 511)		int numElements = list->length;
HXLINE( 512)		int addAtPosition = numElements;
HXLINE( 514)		{
HXLINE( 514)			int _g = 0;
HXDLIN( 514)			int _g1 = numElements;
HXDLIN( 514)			while((_g < _g1)){
HXLINE( 514)				_g = (_g + 1);
HXDLIN( 514)				int i = (_g - 1);
HXLINE( 516)				if ((list->__get(i).StaticCast<  ::openfl::events::_EventDispatcher::Listener >()->priority < listener->priority)) {
HXLINE( 518)					addAtPosition = i;
HXLINE( 520)					goto _hx_goto_14;
            				}
            			}
            			_hx_goto_14:;
            		}
HXLINE( 524)		list->insert(addAtPosition,listener);
            	}


HX_DEFINE_DYNAMIC_FUNC2(EventDispatcher_obj,_hx___addListenerByPriority,(void))


::hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__new(::Dynamic target) {
	::hx::ObjectPtr< EventDispatcher_obj > __this = new EventDispatcher_obj();
	__this->__construct(target);
	return __this;
}

::hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic target) {
	EventDispatcher_obj *__this = (EventDispatcher_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventDispatcher_obj), true, "openfl.events.EventDispatcher"));
	*(void **)__this = EventDispatcher_obj::_hx_vtable;
	__this->__construct(target);
	return __this;
}

EventDispatcher_obj::EventDispatcher_obj()
{
}

void EventDispatcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventDispatcher);
	HX_MARK_MEMBER_NAME(_hx___eventMap,"__eventMap");
	HX_MARK_MEMBER_NAME(_hx___iterators,"__iterators");
	HX_MARK_MEMBER_NAME(_hx___targetDispatcher,"__targetDispatcher");
	HX_MARK_END_CLASS();
}

void EventDispatcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___eventMap,"__eventMap");
	HX_VISIT_MEMBER_NAME(_hx___iterators,"__iterators");
	HX_VISIT_MEMBER_NAME(_hx___targetDispatcher,"__targetDispatcher");
}

::hx::Val EventDispatcher_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { return ::hx::Val( _hx___eventMap ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__iterators") ) { return ::hx::Val( _hx___iterators ); }
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return ::hx::Val( willTrigger_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return ::hx::Val( dispatchEvent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__dispatchEvent") ) { return ::hx::Val( _hx___dispatchEvent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return ::hx::Val( addEventListener_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return ::hx::Val( hasEventListener_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { return ::hx::Val( _hx___targetDispatcher ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return ::hx::Val( removeEventListener_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__removeAllListeners") ) { return ::hx::Val( _hx___removeAllListeners_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__addListenerByPriority") ) { return ::hx::Val( _hx___addListenerByPriority_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EventDispatcher_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { _hx___eventMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__iterators") ) { _hx___iterators=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { _hx___targetDispatcher=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventDispatcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__eventMap",c2,f9,0a,64));
	outFields->push(HX_("__iterators",a5,af,92,c1));
	outFields->push(HX_("__targetDispatcher",78,03,5d,88));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EventDispatcher_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(EventDispatcher_obj,_hx___eventMap),HX_("__eventMap",c2,f9,0a,64)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(EventDispatcher_obj,_hx___iterators),HX_("__iterators",a5,af,92,c1)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(EventDispatcher_obj,_hx___targetDispatcher),HX_("__targetDispatcher",78,03,5d,88)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EventDispatcher_obj_sStaticStorageInfo = 0;
#endif

static ::String EventDispatcher_obj_sMemberFields[] = {
	HX_("__eventMap",c2,f9,0a,64),
	HX_("__iterators",a5,af,92,c1),
	HX_("__targetDispatcher",78,03,5d,88),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("dispatchEvent",00,c7,64,c6),
	HX_("hasEventListener",f4,2e,ea,0c),
	HX_("removeEventListener",ca,87,75,55),
	HX_("toString",ac,d0,6e,38),
	HX_("willTrigger",46,f4,3f,d8),
	HX_("__dispatchEvent",e0,ff,16,4e),
	HX_("__removeAllListeners",a2,79,93,27),
	HX_("__addListenerByPriority",50,a5,7e,d5),
	::String(null()) };

::hx::Class EventDispatcher_obj::__mClass;

void EventDispatcher_obj::__register()
{
	EventDispatcher_obj _hx_dummy;
	EventDispatcher_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.EventDispatcher",0a,d8,08,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EventDispatcher_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EventDispatcher_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventDispatcher_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventDispatcher_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace events
