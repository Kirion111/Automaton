#ifndef INCLUDED_openfl_filesystem_File
#define INCLUDED_openfl_filesystem_File

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_net_FileReference
#include <openfl/net/FileReference.h>
#endif
HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS2(lime,_hx_system,BackgroundWorker)
HX_DECLARE_CLASS2(lime,ui,FileDialog)
HX_DECLARE_CLASS2(openfl,desktop,Icon)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IOErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,filesystem,File)
HX_DECLARE_CLASS2(openfl,net,FileFilter)
HX_DECLARE_CLASS2(openfl,net,FileReference)

namespace openfl{
namespace filesystem{


class HXCPP_CLASS_ATTRIBUTES File_obj : public  ::openfl::net::FileReference_obj
{
	public:
		typedef  ::openfl::net::FileReference_obj super;
		typedef File_obj OBJ_;
		File_obj();

	public:
		enum { _hx_ClassId = 0x14028f43 };

		void __construct(::String path);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filesystem.File")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.filesystem.File"); }
		static ::hx::ObjectPtr< File_obj > __new(::String path);
		static ::hx::ObjectPtr< File_obj > __alloc(::hx::Ctx *_hx_ctx,::String path);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~File_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("File",9c,fa,94,2e); }

		static void __boot();
		static ::Array< ::String > _hx___driveLetters;
		static  ::openfl::filesystem::File createTempDirectory();
		static ::Dynamic createTempDirectory_dyn();

		static  ::openfl::filesystem::File createTempFile();
		static ::Dynamic createTempFile_dyn();

		static ::Array< ::Dynamic> getRootDirectories();
		static ::Dynamic getRootDirectories_dyn();

		static ::String _hx___getTempPath(bool dir);
		static ::Dynamic _hx___getTempPath_dyn();

		static  ::openfl::filesystem::File get_applicationDirectory();
		static ::Dynamic get_applicationDirectory_dyn();

		static  ::openfl::filesystem::File get_applicationStorageDirectory();
		static ::Dynamic get_applicationStorageDirectory_dyn();

		static  ::openfl::filesystem::File get_documentsDirectory();
		static ::Dynamic get_documentsDirectory_dyn();

		static  ::openfl::filesystem::File get_desktopDirectory();
		static ::Dynamic get_desktopDirectory_dyn();

		static  ::openfl::filesystem::File get_userDirectory();
		static ::Dynamic get_userDirectory_dyn();

		static  ::openfl::filesystem::File get_workingDirectory();
		static ::Dynamic get_workingDirectory_dyn();

		static ::String get_lineEnding();
		static ::Dynamic get_lineEnding_dyn();

		static ::String get_separator();
		static ::Dynamic get_separator_dyn();

		 ::openfl::desktop::Icon icon;
		 ::lime::ui::FileDialog _hx___fileDialog;
		 ::lime::_hx_system::BackgroundWorker _hx___fileWorker;
		::String _hx___sep;
		bool _hx___fileStatsDirty;
		bool browse(::Array< ::Dynamic> typeFilter);

		void browseForDirectory(::String title);
		::Dynamic browseForDirectory_dyn();

		void browseForOpen(::String title,::Array< ::Dynamic> typeFilter);
		::Dynamic browseForOpen_dyn();

		void browseForOpenMultiple(::String title,::Array< ::Dynamic> typeFilter);
		::Dynamic browseForOpenMultiple_dyn();

		void browseForSave(::String title);
		::Dynamic browseForSave_dyn();

		void cancel();

		void canonicalize();
		::Dynamic canonicalize_dyn();

		 ::openfl::filesystem::File clone();
		::Dynamic clone_dyn();

		void copyTo( ::openfl::net::FileReference newLocation,::hx::Null< bool >  overwrite);
		::Dynamic copyTo_dyn();

		void copyToAsync( ::openfl::net::FileReference newLocation,::hx::Null< bool >  overwrite);
		::Dynamic copyToAsync_dyn();

		void createDirectory();
		::Dynamic createDirectory_dyn();

		void deleteDirectory(::hx::Null< bool >  deleteDirectoryContents);
		::Dynamic deleteDirectory_dyn();

		void deleteDirectoryAsync(::hx::Null< bool >  deleteDirectoryContents);
		::Dynamic deleteDirectoryAsync_dyn();

		void deleteFile();
		::Dynamic deleteFile_dyn();

		void deleteFileAsync();
		::Dynamic deleteFileAsync_dyn();

		::Array< ::Dynamic> getDirectoryListing();
		::Dynamic getDirectoryListing_dyn();

		void getDirectoryListingAsync();
		::Dynamic getDirectoryListingAsync_dyn();

		::String getRelativePath( ::openfl::net::FileReference ref,::hx::Null< bool >  useDotDot);
		::Dynamic getRelativePath_dyn();

		void moveTo( ::openfl::net::FileReference newLocation,::hx::Null< bool >  overwrite);
		::Dynamic moveTo_dyn();

		void moveToAsync( ::openfl::net::FileReference newLocation,::hx::Null< bool >  overwrite);
		::Dynamic moveToAsync_dyn();

		void openWithDefaultApplication();
		::Dynamic openWithDefaultApplication_dyn();

		 ::openfl::filesystem::File resolvePath(::String path);
		::Dynamic resolvePath_dyn();

		::String _hx___canonicalize(::String cpath,::String seg);
		::Dynamic _hx___canonicalize_dyn();

		void _hx___dispatchCancel();
		::Dynamic _hx___dispatchCancel_dyn();

		void _hx___dispatchSelect(::String filepath);
		::Dynamic _hx___dispatchSelect_dyn();

		void _hx___dispatchSelectMultiple(::Array< ::String > filepaths);
		::Dynamic _hx___dispatchSelectMultiple_dyn();

		 ::openfl::events::IOErrorEvent _hx___createIoErrorEvent( ::Dynamic e);
		::Dynamic _hx___createIoErrorEvent_dyn();

		::String _hx___formatPath(::String path);
		::Dynamic _hx___formatPath_dyn();

		::String _hx___getFilterTypes(::Array< ::Dynamic> typeFilter);
		::Dynamic _hx___getFilterTypes_dyn();

		::String _hx___replaceWindowsEnvVars(::String path);
		::Dynamic _hx___replaceWindowsEnvVars_dyn();

		bool _hx___winGetHiddenAttr();
		::Dynamic _hx___winGetHiddenAttr_dyn();

		void _hx___updateFileStats(::String path);
		::Dynamic _hx___updateFileStats_dyn();

		 ::Date get_creationDate();

		 ::Date get_modificationDate();

		::String get_name();

		Float get_size();

		::String get_type();

		::String get_nativePath();
		::Dynamic get_nativePath_dyn();

		::String set_nativePath(::String path);
		::Dynamic set_nativePath_dyn();

		::String get_url();
		::Dynamic get_url_dyn();

		bool get_exists();
		::Dynamic get_exists_dyn();

		bool get_isHidden();
		::Dynamic get_isHidden_dyn();

		bool get_isDirectory();
		::Dynamic get_isDirectory_dyn();

		 ::openfl::filesystem::File get_parent();
		::Dynamic get_parent_dyn();

};

} // end namespace openfl
} // end namespace filesystem

#endif /* INCLUDED_openfl_filesystem_File */ 
