#ifndef INCLUDED_haxe_ui_filters_Filter
#define INCLUDED_haxe_ui_filters_Filter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,filters,Filter)

namespace haxe{
namespace ui{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES Filter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Filter_obj OBJ_;
		Filter_obj();

	public:
		enum { _hx_ClassId = 0x2b166675 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.filters.Filter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.filters.Filter"); }
		static ::hx::ObjectPtr< Filter_obj > __new();
		static ::hx::ObjectPtr< Filter_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Filter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Filter",d8,93,c9,b9); }

		static ::cpp::VirtualArray applyDefaults(::cpp::VirtualArray params,::cpp::VirtualArray defaults);
		static ::Dynamic applyDefaults_dyn();

		virtual void parse(::cpp::VirtualArray filterDetails);
		::Dynamic parse_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace filters

#endif /* INCLUDED_haxe_ui_filters_Filter */ 
