#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentContainer
#include <haxe/ui/core/IComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Dimension
#include <haxe/ui/styles/Dimension.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_Animation
#include <haxe/ui/styles/animation/Animation.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_AnimationOptions
#include <haxe/ui/styles/animation/AnimationOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_KeyFrame
#include <haxe/ui/styles/animation/KeyFrame.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrame
#include <haxe/ui/styles/elements/AnimationKeyFrame.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrames
#include <haxe/ui/styles/elements/AnimationKeyFrames.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Directive
#include <haxe/ui/styles/elements/Directive.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StyleUtil
#include <haxe/ui/util/StyleUtil.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_48_new,"haxe.ui.styles.animation.Animation","new",0x0e81cf32,"haxe.ui.styles.animation.Animation.new","haxe/ui/styles/animation/Animation.hx",48,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_161_run,"haxe.ui.styles.animation.Animation","run",0x0e84e61d,"haxe.ui.styles.animation.Animation.run","haxe/ui/styles/animation/Animation.hx",161,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_180_stop,"haxe.ui.styles.animation.Animation","stop",0xa66ce8f0,"haxe.ui.styles.animation.Animation.stop","haxe/ui/styles/animation/Animation.hx",180,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_208_get_keyframeCount,"haxe.ui.styles.animation.Animation","get_keyframeCount",0xb6ec756a,"haxe.ui.styles.animation.Animation.get_keyframeCount","haxe/ui/styles/animation/Animation.hx",208,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_211_get_currentKeyFrame,"haxe.ui.styles.animation.Animation","get_currentKeyFrame",0xf8d5e950,"haxe.ui.styles.animation.Animation.get_currentKeyFrame","haxe/ui/styles/animation/Animation.hx",211,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_214__initialize,"haxe.ui.styles.animation.Animation","_initialize",0xd2a91f41,"haxe.ui.styles.animation.Animation._initialize","haxe/ui/styles/animation/Animation.hx",214,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_269__runNextKeyframe,"haxe.ui.styles.animation.Animation","_runNextKeyframe",0xe343fa9b,"haxe.ui.styles.animation.Animation._runNextKeyframe","haxe/ui/styles/animation/Animation.hx",269,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_289__runNextKeyframe,"haxe.ui.styles.animation.Animation","_runNextKeyframe",0xe343fa9b,"haxe.ui.styles.animation.Animation._runNextKeyframe","haxe/ui/styles/animation/Animation.hx",289,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_293__addAlternateKeyframes,"haxe.ui.styles.animation.Animation","_addAlternateKeyframes",0x19fb721b,"haxe.ui.styles.animation.Animation._addAlternateKeyframes","haxe/ui/styles/animation/Animation.hx",293,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_305__reverseCurrentKeyframes,"haxe.ui.styles.animation.Animation","_reverseCurrentKeyframes",0x839197bd,"haxe.ui.styles.animation.Animation._reverseCurrentKeyframes","haxe/ui/styles/animation/Animation.hx",305,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_314__getReverseEasingFunction,"haxe.ui.styles.animation.Animation","_getReverseEasingFunction",0xc105f0e0,"haxe.ui.styles.animation.Animation._getReverseEasingFunction","haxe/ui/styles/animation/Animation.hx",314,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_321__saveState,"haxe.ui.styles.animation.Animation","_saveState",0x286a58c3,"haxe.ui.styles.animation.Animation._saveState","haxe/ui/styles/animation/Animation.hx",321,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_340__restoreState,"haxe.ui.styles.animation.Animation","_restoreState",0x90435014,"haxe.ui.styles.animation.Animation._restoreState","haxe/ui/styles/animation/Animation.hx",340,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_356__shouldRestoreState,"haxe.ui.styles.animation.Animation","_shouldRestoreState",0x2225ffa7,"haxe.ui.styles.animation.Animation._shouldRestoreState","haxe/ui/styles/animation/Animation.hx",356,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_9f0e0ca4bc4bda73_52_createWithKeyFrames,"haxe.ui.styles.animation.Animation","createWithKeyFrames",0xfc4b25f5,"haxe.ui.styles.animation.Animation.createWithKeyFrames","haxe/ui/styles/animation/Animation.hx",52,0x1e08c820)
namespace haxe{
namespace ui{
namespace styles{
namespace animation{

void Animation_obj::__construct( ::Dynamic target, ::haxe::ui::styles::animation::AnimationOptions options){
            	HX_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_48_new)
HXLINE( 204)		this->_initialized = false;
HXLINE( 202)		this->_currentIterationCount = -1;
HXLINE( 201)		this->_currentKeyFrameIndex = -1;
HXLINE( 123)		this->iterationCount = 1;
HXLINE( 118)		this->fillMode = HX_("forwards",0e,ab,ba,2b);
HXLINE( 111)		this->easingFunction = ::haxe::ui::styles::animation::AnimationOptions_obj::DEFAULT_EASING_FUNCTION;
HXLINE( 104)		this->duration = ((Float)0);
HXLINE(  99)		this->direction = HX_("normal",27,72,69,30);
HXLINE(  92)		this->delay = ((Float)0);
HXLINE( 146)		this->target = target;
HXLINE( 148)		if (::hx::IsNotNull( options )) {
HXLINE( 149)			if (::hx::IsNotNull( options->duration )) {
HXLINE( 149)				this->duration = ( (Float)(options->duration) );
            			}
HXLINE( 150)			if (::hx::IsNotNull( options->easingFunction )) {
HXLINE( 150)				this->easingFunction = options->easingFunction;
            			}
HXLINE( 151)			if (::hx::IsNotNull( options->delay )) {
HXLINE( 151)				this->delay = ( (Float)(options->delay) );
            			}
HXLINE( 152)			if (::hx::IsNotNull( options->iterationCount )) {
HXLINE( 152)				this->iterationCount = ( (int)(options->iterationCount) );
            			}
HXLINE( 153)			if (::hx::IsNotNull( options->direction )) {
HXLINE( 153)				this->direction = options->direction;
            			}
HXLINE( 154)			if (::hx::IsNotNull( options->fillMode )) {
HXLINE( 154)				this->fillMode = options->fillMode;
            			}
            		}
            	}

Dynamic Animation_obj::__CreateEmpty() { return new Animation_obj; }

void *Animation_obj::_hx_vtable = 0;

Dynamic Animation_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Animation_obj > _hx_result = new Animation_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Animation_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c3e05a0;
}

void Animation_obj::run( ::Dynamic onFinish){
            	HX_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_161_run)
HXLINE( 162)		bool _hx_tmp;
HXDLIN( 162)		if ((this->get_keyframeCount() != 0)) {
HXLINE( 162)			_hx_tmp = this->running;
            		}
            		else {
HXLINE( 162)			_hx_tmp = true;
            		}
HXDLIN( 162)		if (_hx_tmp) {
HXLINE( 163)			return;
            		}
HXLINE( 166)		if (!(this->_initialized)) {
HXLINE( 167)			this->_initialize();
            		}
HXLINE( 170)		this->_currentKeyFrameIndex = -1;
HXLINE( 171)		this->_currentIterationCount = 0;
HXLINE( 172)		this->running = true;
HXLINE( 173)		this->_saveState();
HXLINE( 174)		this->_runNextKeyframe(onFinish);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,run,(void))

void Animation_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_180_stop)
HXLINE( 181)		if ((this->running == false)) {
HXLINE( 182)			return;
            		}
HXLINE( 185)		this->running = false;
HXLINE( 187)		 ::haxe::ui::styles::animation::KeyFrame currentKF = this->get_currentKeyFrame();
HXLINE( 188)		if (::hx::IsNotNull( currentKF )) {
HXLINE( 189)			currentKF->stop();
HXLINE( 190)			this->_currentKeyFrameIndex = -1;
            		}
HXLINE( 193)		this->_keyframes = null();
HXLINE( 195)		this->_restoreState();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,stop,(void))

int Animation_obj::get_keyframeCount(){
            	HX_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_208_get_keyframeCount)
HXDLIN( 208)		if (::hx::IsNull( this->_keyframes )) {
HXDLIN( 208)			return 0;
            		}
            		else {
HXDLIN( 208)			return this->_keyframes->length;
            		}
HXDLIN( 208)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,get_keyframeCount,return )

 ::haxe::ui::styles::animation::KeyFrame Animation_obj::get_currentKeyFrame(){
            	HX_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_211_get_currentKeyFrame)
HXDLIN( 211)		if ((this->_currentKeyFrameIndex >= 0)) {
HXDLIN( 211)			return this->_keyframes->__get(this->_currentKeyFrameIndex).StaticCast<  ::haxe::ui::styles::animation::KeyFrame >();
            		}
            		else {
HXDLIN( 211)			return null();
            		}
HXDLIN( 211)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,get_currentKeyFrame,return )

void Animation_obj::_initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_214__initialize)
HXLINE( 215)		::String _hx_switch_0 = this->direction;
            		if (  (_hx_switch_0==HX_("alternate",3a,c9,33,35)) ){
HXLINE( 221)			this->_addAlternateKeyframes();
HXDLIN( 221)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("alternate-reverse",cf,db,30,9f)) ){
HXLINE( 223)			this->_reverseCurrentKeyframes();
HXLINE( 224)			this->_addAlternateKeyframes();
HXLINE( 222)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("normal",27,72,69,30)) ){
HXLINE( 216)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("reverse",22,39,fc,1a)) ){
HXLINE( 219)			this->_reverseCurrentKeyframes();
HXDLIN( 219)			goto _hx_goto_5;
            		}
            		_hx_goto_5:;
HXLINE( 227)		Float currentTime = ( (Float)(0) );
HXLINE( 228)		{
HXLINE( 228)			int _g = 0;
HXDLIN( 228)			::Array< ::Dynamic> _g1 = this->_keyframes;
HXDLIN( 228)			while((_g < _g1->length)){
HXLINE( 228)				 ::haxe::ui::styles::animation::KeyFrame keyframe = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::animation::KeyFrame >();
HXDLIN( 228)				_g = (_g + 1);
HXLINE( 229)				::String _hx_switch_1 = this->direction;
            				if (  (_hx_switch_1==HX_("alternate-reverse",cf,db,30,9f)) ||  (_hx_switch_1==HX_("reverse",22,39,fc,1a)) ){
HXLINE( 233)					keyframe->time = (( (Float)(1) ) - keyframe->time);
HXDLIN( 233)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_1==HX_("alternate",3a,c9,33,35)) ||  (_hx_switch_1==HX_("normal",27,72,69,30)) ){
HXLINE( 230)					goto _hx_goto_7;
            				}
            				_hx_goto_7:;
HXLINE( 236)				keyframe->time = ((this->duration * keyframe->time) - currentTime);
HXLINE( 237)				currentTime = (currentTime + keyframe->time);
            			}
            		}
HXLINE( 240)		if ((this->delay > 0)) {
HXLINE( 241)			 ::haxe::ui::styles::animation::KeyFrame keyframe =  ::haxe::ui::styles::animation::KeyFrame_obj::__alloc( HX_CTX );
HXLINE( 242)			keyframe->time = this->delay;
HXLINE( 243)			keyframe->easingFunction = this->easingFunction;
HXLINE( 244)			this->_keyframes->unshift(keyframe);
            		}
            		else {
HXLINE( 245)			if ((this->delay < 0)) {
HXLINE( 247)				currentTime = ( (Float)(0) );
HXLINE( 248)				 ::haxe::ui::styles::animation::KeyFrame lastKeyframe = null();
HXLINE( 249)				while((this->_keyframes->length > 0)){
HXLINE( 250)					 ::haxe::ui::styles::animation::KeyFrame keyframe = this->_keyframes->__get(0).StaticCast<  ::haxe::ui::styles::animation::KeyFrame >();
HXLINE( 251)					currentTime = (currentTime - keyframe->time);
HXLINE( 252)					if ((currentTime >= this->delay)) {
HXLINE( 253)						lastKeyframe = keyframe;
HXLINE( 254)						this->_keyframes->removeRange(0,1);
            					}
            					else {
HXLINE( 256)						keyframe->delay = -(((currentTime - this->delay) + keyframe->time));
HXLINE( 257)						if (::hx::IsNotNull( lastKeyframe )) {
HXLINE( 258)							lastKeyframe->time = ( (Float)(0) );
HXLINE( 259)							this->_keyframes->unshift(lastKeyframe);
            						}
HXLINE( 261)						goto _hx_goto_8;
            					}
            				}
            				_hx_goto_8:;
            			}
            		}
HXLINE( 266)		this->_initialized = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,_initialize,(void))

void Animation_obj::_runNextKeyframe( ::Dynamic onFinish){
            	HX_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_269__runNextKeyframe)
HXLINE( 270)		if ((this->running == false)) {
HXLINE( 271)			return;
            		}
HXLINE( 274)		if ((++this->_currentKeyFrameIndex >= this->_keyframes->length)) {
HXLINE( 275)			this->_currentKeyFrameIndex = -1;
HXLINE( 276)			this->_restoreState();
HXLINE( 278)			bool _hx_tmp;
HXDLIN( 278)			if ((this->iterationCount != -1)) {
HXLINE( 278)				_hx_tmp = (++this->_currentIterationCount < this->iterationCount);
            			}
            			else {
HXLINE( 278)				_hx_tmp = true;
            			}
HXDLIN( 278)			if (_hx_tmp) {
HXLINE( 279)				this->_saveState();
HXLINE( 280)				this->_runNextKeyframe(onFinish);
            			}
            			else {
HXLINE( 282)				this->running = false;
HXLINE( 283)				if (::hx::IsNotNull( onFinish )) {
HXLINE( 284)					onFinish();
            				}
            			}
HXLINE( 287)			return;
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,onFinish1, ::Dynamic,_g) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_289__runNextKeyframe)
HXLINE( 289)				_g(onFinish1);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 289)			 ::Dynamic _g = this->_runNextKeyframe_dyn();
HXDLIN( 289)			 ::Dynamic onFinish1 = onFinish;
HXDLIN( 289)			 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(onFinish1,_g));
HXDLIN( 289)			this->get_currentKeyFrame()->run(( ( ::haxe::ui::core::Component)(this->target) ),_hx_tmp);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,_runNextKeyframe,(void))

void Animation_obj::_addAlternateKeyframes(){
            	HX_GC_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_293__addAlternateKeyframes)
HXLINE( 294)		int i = this->_keyframes->length;
HXLINE( 295)		while(true){
HXLINE( 295)			i = (i - 1);
HXDLIN( 295)			if (!((i >= 0))) {
HXLINE( 295)				goto _hx_goto_12;
            			}
HXLINE( 296)			 ::haxe::ui::styles::animation::KeyFrame keyframe = this->_keyframes->__get(i).StaticCast<  ::haxe::ui::styles::animation::KeyFrame >();
HXLINE( 297)			 ::haxe::ui::styles::animation::KeyFrame newKeyframe =  ::haxe::ui::styles::animation::KeyFrame_obj::__alloc( HX_CTX );
HXLINE( 298)			newKeyframe->time = (( (Float)(1) ) - keyframe->time);
HXLINE( 299)			newKeyframe->easingFunction = this->_getReverseEasingFunction(keyframe->easingFunction);
HXLINE( 300)			newKeyframe->directives = keyframe->directives;
HXLINE( 301)			this->_keyframes->push(newKeyframe);
            		}
            		_hx_goto_12:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,_addAlternateKeyframes,(void))

void Animation_obj::_reverseCurrentKeyframes(){
            	HX_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_305__reverseCurrentKeyframes)
HXLINE( 306)		this->_keyframes->reverse();
HXLINE( 307)		::String func = this->_getReverseEasingFunction(this->easingFunction);
HXLINE( 308)		{
HXLINE( 308)			int _g = 0;
HXDLIN( 308)			::Array< ::Dynamic> _g1 = this->_keyframes;
HXDLIN( 308)			while((_g < _g1->length)){
HXLINE( 308)				 ::haxe::ui::styles::animation::KeyFrame keyframe = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::animation::KeyFrame >();
HXDLIN( 308)				_g = (_g + 1);
HXLINE( 309)				keyframe->easingFunction = func;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,_reverseCurrentKeyframes,(void))

::String Animation_obj::_getReverseEasingFunction(::String easingFunction){
            	HX_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_314__getReverseEasingFunction)
HXDLIN( 314)		::String _hx_switch_0 = easingFunction;
            		if (  (_hx_switch_0==HX_("easeIn",73,23,3a,88)) ){
HXLINE( 316)			return HX_("easeOut",40,75,a9,aa);
HXDLIN( 316)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==HX_("easeOut",40,75,a9,aa)) ){
HXLINE( 315)			return HX_("easeIn",73,23,3a,88);
HXDLIN( 315)			goto _hx_goto_16;
            		}
            		/* default */{
HXLINE( 317)			return easingFunction;
            		}
            		_hx_goto_16:;
HXLINE( 314)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,_getReverseEasingFunction,return )

void Animation_obj::_saveState(){
            	HX_GC_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_321__saveState)
HXLINE( 322)		if (!(this->_shouldRestoreState())) {
HXLINE( 323)			return;
            		}
HXLINE( 326)		if (::hx::IsNull( this->_initialState )) {
HXLINE( 327)			this->_initialState =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 330)		{
HXLINE( 330)			int _g = 0;
HXDLIN( 330)			::Array< ::Dynamic> _g1 = this->_keyframes;
HXDLIN( 330)			while((_g < _g1->length)){
HXLINE( 330)				 ::haxe::ui::styles::animation::KeyFrame keyframe = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::animation::KeyFrame >();
HXDLIN( 330)				_g = (_g + 1);
HXLINE( 331)				{
HXLINE( 331)					int _g2 = 0;
HXDLIN( 331)					::Array< ::Dynamic> _g3 = keyframe->directives;
HXDLIN( 331)					while((_g2 < _g3->length)){
HXLINE( 331)						 ::haxe::ui::styles::elements::Directive directive = _g3->__get(_g2).StaticCast<  ::haxe::ui::styles::elements::Directive >();
HXDLIN( 331)						_g2 = (_g2 + 1);
HXLINE( 332)						::String property = ::haxe::ui::util::StyleUtil_obj::styleProperty2ComponentProperty(directive->directive);
HXLINE( 333)						if (!(this->_initialState->exists(property))) {
HXLINE( 334)							::Dynamic this1 = this->_initialState;
HXDLIN( 334)							( ( ::haxe::ds::StringMap)(this1) )->set(property,::Reflect_obj::getProperty(this->target,property));
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,_saveState,(void))

void Animation_obj::_restoreState(){
            	HX_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_340__restoreState)
HXLINE( 341)		if (!(this->_shouldRestoreState())) {
HXLINE( 342)			return;
            		}
HXLINE( 345)		if (::hx::IsNotNull( this->_initialState )) {
HXLINE( 346)			{
HXLINE( 346)				 ::Dynamic property = this->_initialState->keys();
HXDLIN( 346)				while(( (bool)(property->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 346)					::String property1 = ( (::String)(property->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 347)					 ::Dynamic _hx_tmp = this->target;
HXDLIN( 347)					::Reflect_obj::setProperty(_hx_tmp,property1,this->_initialState->get(property1));
            				}
            			}
HXLINE( 350)			this->_initialState = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,_restoreState,(void))

bool Animation_obj::_shouldRestoreState(){
            	HX_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_356__shouldRestoreState)
HXDLIN( 356)		bool _hx_tmp;
HXDLIN( 356)		if ((this->fillMode != HX_("none",b8,12,0a,49))) {
HXLINE( 357)			bool _hx_tmp1;
HXDLIN( 357)			if ((this->fillMode == HX_("forwards",0e,ab,ba,2b))) {
HXLINE( 357)				_hx_tmp1 = (this->direction != HX_("normal",27,72,69,30));
            			}
            			else {
HXLINE( 357)				_hx_tmp1 = false;
            			}
HXDLIN( 357)			if (_hx_tmp1) {
HXDLIN( 356)				_hx_tmp = (this->direction != HX_("alternate",3a,c9,33,35));
            			}
            			else {
HXDLIN( 356)				_hx_tmp = false;
            			}
            		}
            		else {
HXDLIN( 356)			_hx_tmp = true;
            		}
HXDLIN( 356)		if (!(_hx_tmp)) {
HXLINE( 358)			bool _hx_tmp;
HXDLIN( 358)			if ((this->fillMode == HX_("backwards",30,8b,a7,0e))) {
HXLINE( 358)				_hx_tmp = (this->direction != HX_("reverse",22,39,fc,1a));
            			}
            			else {
HXLINE( 358)				_hx_tmp = false;
            			}
HXDLIN( 358)			if (_hx_tmp) {
HXLINE( 358)				return (this->direction != HX_("alternate-reverse",cf,db,30,9f));
            			}
            			else {
HXLINE( 358)				return false;
            			}
            		}
            		else {
HXDLIN( 356)			return true;
            		}
HXDLIN( 356)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,_shouldRestoreState,return )

 ::haxe::ui::styles::animation::Animation Animation_obj::createWithKeyFrames( ::haxe::ui::styles::elements::AnimationKeyFrames animationKeyFrames, ::Dynamic target, ::haxe::ui::styles::animation::AnimationOptions options){
            	HX_GC_STACKFRAME(&_hx_pos_9f0e0ca4bc4bda73_52_createWithKeyFrames)
HXLINE(  53)		 ::haxe::ui::styles::animation::Animation animation =  ::haxe::ui::styles::animation::Animation_obj::__alloc( HX_CTX ,target,options);
HXLINE(  54)		animation->name = animationKeyFrames->id;
HXLINE(  56)		if (::hx::IsNull( animation->_keyframes )) {
HXLINE(  57)			animation->_keyframes = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  60)		{
HXLINE(  60)			int _g = 0;
HXDLIN(  60)			::Array< ::Dynamic> _g1 = animationKeyFrames->get_keyFrames();
HXDLIN(  60)			while((_g < _g1->length)){
HXLINE(  60)				 ::haxe::ui::styles::elements::AnimationKeyFrame keyFrame = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::elements::AnimationKeyFrame >();
HXDLIN(  60)				_g = (_g + 1);
HXLINE(  61)				 ::haxe::ui::styles::animation::KeyFrame kf =  ::haxe::ui::styles::animation::KeyFrame_obj::__alloc( HX_CTX );
HXLINE(  63)				{
HXLINE(  63)					 ::haxe::ui::styles::Value _g2 = keyFrame->time;
HXDLIN(  63)					if ((_g2->_hx_getIndex() == 3)) {
HXLINE(  64)						 ::haxe::ui::styles::Dimension v = _g2->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXLINE(  65)						if ((v->_hx_getIndex() == 0)) {
HXLINE(  66)							Float p = v->_hx_getFloat(0);
HXDLIN(  66)							{
HXLINE(  67)								kf->time = (p / ( (Float)(100) ));
HXLINE(  68)								kf->easingFunction = animation->easingFunction;
HXLINE(  69)								kf->directives = keyFrame->directives;
HXLINE(  70)								animation->_keyframes->push(kf);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  77)		return animation;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Animation_obj,createWithKeyFrames,return )


::hx::ObjectPtr< Animation_obj > Animation_obj::__new( ::Dynamic target, ::haxe::ui::styles::animation::AnimationOptions options) {
	::hx::ObjectPtr< Animation_obj > __this = new Animation_obj();
	__this->__construct(target,options);
	return __this;
}

::hx::ObjectPtr< Animation_obj > Animation_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target, ::haxe::ui::styles::animation::AnimationOptions options) {
	Animation_obj *__this = (Animation_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Animation_obj), true, "haxe.ui.styles.animation.Animation"));
	*(void **)__this = Animation_obj::_hx_vtable;
	__this->__construct(target,options);
	return __this;
}

Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(easingFunction,"easingFunction");
	HX_MARK_MEMBER_NAME(fillMode,"fillMode");
	HX_MARK_MEMBER_NAME(iterationCount,"iterationCount");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(running,"running");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(_currentKeyFrameIndex,"_currentKeyFrameIndex");
	HX_MARK_MEMBER_NAME(_currentIterationCount,"_currentIterationCount");
	HX_MARK_MEMBER_NAME(_initialState,"_initialState");
	HX_MARK_MEMBER_NAME(_initialized,"_initialized");
	HX_MARK_MEMBER_NAME(_keyframes,"_keyframes");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(easingFunction,"easingFunction");
	HX_VISIT_MEMBER_NAME(fillMode,"fillMode");
	HX_VISIT_MEMBER_NAME(iterationCount,"iterationCount");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(running,"running");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(_currentKeyFrameIndex,"_currentKeyFrameIndex");
	HX_VISIT_MEMBER_NAME(_currentIterationCount,"_currentIterationCount");
	HX_VISIT_MEMBER_NAME(_initialState,"_initialState");
	HX_VISIT_MEMBER_NAME(_initialized,"_initialized");
	HX_VISIT_MEMBER_NAME(_keyframes,"_keyframes");
}

::hx::Val Animation_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { return ::hx::Val( running ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"fillMode") ) { return ::hx::Val( fillMode ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return ::hx::Val( direction ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_keyframes") ) { return ::hx::Val( _keyframes ); }
		if (HX_FIELD_EQ(inName,"_saveState") ) { return ::hx::Val( _saveState_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_initialize") ) { return ::hx::Val( _initialize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { return ::hx::Val( _initialized ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"keyframeCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_keyframeCount() ); }
		if (HX_FIELD_EQ(inName,"_initialState") ) { return ::hx::Val( _initialState ); }
		if (HX_FIELD_EQ(inName,"_restoreState") ) { return ::hx::Val( _restoreState_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"easingFunction") ) { return ::hx::Val( easingFunction ); }
		if (HX_FIELD_EQ(inName,"iterationCount") ) { return ::hx::Val( iterationCount ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentKeyFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentKeyFrame() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_runNextKeyframe") ) { return ::hx::Val( _runNextKeyframe_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_keyframeCount") ) { return ::hx::Val( get_keyframeCount_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_currentKeyFrame") ) { return ::hx::Val( get_currentKeyFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"_shouldRestoreState") ) { return ::hx::Val( _shouldRestoreState_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_currentKeyFrameIndex") ) { return ::hx::Val( _currentKeyFrameIndex ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_currentIterationCount") ) { return ::hx::Val( _currentIterationCount ); }
		if (HX_FIELD_EQ(inName,"_addAlternateKeyframes") ) { return ::hx::Val( _addAlternateKeyframes_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_reverseCurrentKeyframes") ) { return ::hx::Val( _reverseCurrentKeyframes_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_getReverseEasingFunction") ) { return ::hx::Val( _getReverseEasingFunction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Animation_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"createWithKeyFrames") ) { outValue = createWithKeyFrames_dyn(); return true; }
	}
	return false;
}

::hx::Val Animation_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { running=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillMode") ) { fillMode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_keyframes") ) { _keyframes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { _initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initialState") ) { _initialState=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"easingFunction") ) { easingFunction=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iterationCount") ) { iterationCount=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_currentKeyFrameIndex") ) { _currentKeyFrameIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_currentIterationCount") ) { _currentIterationCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentKeyFrame",67,d7,3e,1f));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("direction",3f,62,40,10));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("easingFunction",e3,d6,ae,0d));
	outFields->push(HX_("fillMode",86,cb,72,69));
	outFields->push(HX_("iterationCount",f2,c4,ce,8f));
	outFields->push(HX_("keyframeCount",c1,df,a4,2e));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("running",ff,6d,69,eb));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("_currentKeyFrameIndex",0a,08,35,89));
	outFields->push(HX_("_currentIterationCount",4c,20,b5,c7));
	outFields->push(HX_("_initialState",cc,09,8a,2a));
	outFields->push(HX_("_initialized",15,a3,19,9d));
	outFields->push(HX_("_keyframes",46,36,9b,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Animation_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Animation_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsString,(int)offsetof(Animation_obj,direction),HX_("direction",3f,62,40,10)},
	{::hx::fsFloat,(int)offsetof(Animation_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsString,(int)offsetof(Animation_obj,easingFunction),HX_("easingFunction",e3,d6,ae,0d)},
	{::hx::fsString,(int)offsetof(Animation_obj,fillMode),HX_("fillMode",86,cb,72,69)},
	{::hx::fsInt,(int)offsetof(Animation_obj,iterationCount),HX_("iterationCount",f2,c4,ce,8f)},
	{::hx::fsString,(int)offsetof(Animation_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsBool,(int)offsetof(Animation_obj,running),HX_("running",ff,6d,69,eb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Animation_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsInt,(int)offsetof(Animation_obj,_currentKeyFrameIndex),HX_("_currentKeyFrameIndex",0a,08,35,89)},
	{::hx::fsInt,(int)offsetof(Animation_obj,_currentIterationCount),HX_("_currentIterationCount",4c,20,b5,c7)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Animation_obj,_initialState),HX_("_initialState",cc,09,8a,2a)},
	{::hx::fsBool,(int)offsetof(Animation_obj,_initialized),HX_("_initialized",15,a3,19,9d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Animation_obj,_keyframes),HX_("_keyframes",46,36,9b,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Animation_obj_sStaticStorageInfo = 0;
#endif

static ::String Animation_obj_sMemberFields[] = {
	HX_("delay",83,d7,26,d7),
	HX_("direction",3f,62,40,10),
	HX_("duration",54,0f,8e,14),
	HX_("easingFunction",e3,d6,ae,0d),
	HX_("fillMode",86,cb,72,69),
	HX_("iterationCount",f2,c4,ce,8f),
	HX_("name",4b,72,ff,48),
	HX_("running",ff,6d,69,eb),
	HX_("target",51,f3,ec,86),
	HX_("run",4b,e7,56,00),
	HX_("stop",02,f0,5b,4c),
	HX_("_currentKeyFrameIndex",0a,08,35,89),
	HX_("_currentIterationCount",4c,20,b5,c7),
	HX_("_initialState",cc,09,8a,2a),
	HX_("_initialized",15,a3,19,9d),
	HX_("_keyframes",46,36,9b,6b),
	HX_("get_keyframeCount",18,eb,14,35),
	HX_("get_currentKeyFrame",7e,a6,49,aa),
	HX_("_initialize",6f,fe,44,bf),
	HX_("_runNextKeyframe",ad,54,aa,5e),
	HX_("_addAlternateKeyframes",ad,a5,23,9e),
	HX_("_reverseCurrentKeyframes",cf,53,db,88),
	HX_("_getReverseEasingFunction",8e,c4,40,5c),
	HX_("_saveState",55,f9,5a,6e),
	HX_("_restoreState",c2,d6,f7,c2),
	HX_("_shouldRestoreState",d5,bc,99,d3),
	::String(null()) };

::hx::Class Animation_obj::__mClass;

static ::String Animation_obj_sStaticFields[] = {
	HX_("createWithKeyFrames",23,e3,be,ad),
	::String(null())
};

void Animation_obj::__register()
{
	Animation_obj _hx_dummy;
	Animation_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.animation.Animation",40,0e,02,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Animation_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Animation_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Animation_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Animation_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Animation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Animation_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
