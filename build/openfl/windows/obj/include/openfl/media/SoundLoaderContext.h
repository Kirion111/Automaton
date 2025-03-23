#ifndef INCLUDED_openfl_media_SoundLoaderContext
#define INCLUDED_openfl_media_SoundLoaderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_baeaab40d0a56ac0_146_new)
HX_DECLARE_CLASS2(openfl,media,SoundLoaderContext)

namespace openfl{
namespace media{


class HXCPP_CLASS_ATTRIBUTES SoundLoaderContext_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SoundLoaderContext_obj OBJ_;
		SoundLoaderContext_obj();

	public:
		enum { _hx_ClassId = 0x08c82281 };

		void __construct(::hx::Null< Float >  __o_bufferTime,::hx::Null< bool >  __o_checkPolicyFile);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.media.SoundLoaderContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.media.SoundLoaderContext"); }

		inline static ::hx::ObjectPtr< SoundLoaderContext_obj > __new(::hx::Null< Float >  __o_bufferTime,::hx::Null< bool >  __o_checkPolicyFile) {
			::hx::ObjectPtr< SoundLoaderContext_obj > __this = new SoundLoaderContext_obj();
			__this->__construct(__o_bufferTime,__o_checkPolicyFile);
			return __this;
		}

		inline static ::hx::ObjectPtr< SoundLoaderContext_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_bufferTime,::hx::Null< bool >  __o_checkPolicyFile) {
			SoundLoaderContext_obj *__this = (SoundLoaderContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SoundLoaderContext_obj), false, "openfl.media.SoundLoaderContext"));
			*(void **)__this = SoundLoaderContext_obj::_hx_vtable;
{
            		Float bufferTime = __o_bufferTime.Default(1000);
            		bool checkPolicyFile = __o_checkPolicyFile.Default(false);
            	HX_STACKFRAME(&_hx_pos_baeaab40d0a56ac0_146_new)
HXLINE( 147)		( ( ::openfl::media::SoundLoaderContext)(__this) )->bufferTime = bufferTime;
HXLINE( 148)		( ( ::openfl::media::SoundLoaderContext)(__this) )->checkPolicyFile = checkPolicyFile;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SoundLoaderContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SoundLoaderContext",ed,bf,f5,97); }

		Float bufferTime;
		bool checkPolicyFile;
};

} // end namespace openfl
} // end namespace media

#endif /* INCLUDED_openfl_media_SoundLoaderContext */ 
