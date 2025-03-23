#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
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
#ifndef INCLUDED_lime_system_BackgroundWorker
#include <lime/system/BackgroundWorker.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_FileDialog
#include <lime/ui/FileDialog.h>
#endif
#ifndef INCLUDED_lime_ui_FileDialogType
#include <lime/ui/FileDialogType.h>
#endif
#ifndef INCLUDED_openfl_desktop_Icon
#include <openfl/desktop/Icon.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
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
#ifndef INCLUDED_openfl_events_FileListEvent
#include <openfl/events/FileListEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_filesystem_File
#include <openfl/filesystem/File.h>
#endif
#ifndef INCLUDED_openfl_net_FileFilter
#include <openfl/net/FileFilter.h>
#endif
#ifndef INCLUDED_openfl_net_FileReference
#include <openfl/net/FileReference.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_19861550b6f626f4_97_new,"openfl.filesystem.File","new",0xbca08813,"openfl.filesystem.File.new","openfl/filesystem/File.hx",97,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_495_browse,"openfl.filesystem.File","browse",0x83f1b7b7,"openfl.filesystem.File.browse","openfl/filesystem/File.hx",495,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_546_browseForDirectory,"openfl.filesystem.File","browseForDirectory",0xcdcb9c7b,"openfl.filesystem.File.browseForDirectory","openfl/filesystem/File.hx",546,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_608_browseForOpen,"openfl.filesystem.File","browseForOpen",0xd789947c,"openfl.filesystem.File.browseForOpen","openfl/filesystem/File.hx",608,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_669_browseForOpenMultiple,"openfl.filesystem.File","browseForOpenMultiple",0x3a6b0eac,"openfl.filesystem.File.browseForOpenMultiple","openfl/filesystem/File.hx",669,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_733_browseForSave,"openfl.filesystem.File","browseForSave",0xda231bef,"openfl.filesystem.File.browseForSave","openfl/filesystem/File.hx",733,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_749_cancel,"openfl.filesystem.File","cancel",0x1fc4c7a7,"openfl.filesystem.File.cancel","openfl/filesystem/File.hx",749,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_777_canonicalize,"openfl.filesystem.File","canonicalize",0xbad129cd,"openfl.filesystem.File.canonicalize","openfl/filesystem/File.hx",777,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_804_clone,"openfl.filesystem.File","clone",0x3b135dd0,"openfl.filesystem.File.clone","openfl/filesystem/File.hx",804,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_879_copyTo,"openfl.filesystem.File","copyTo",0x30c3f6bd,"openfl.filesystem.File.copyTo","openfl/filesystem/File.hx",879,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_983_copyToAsync,"openfl.filesystem.File","copyToAsync",0x41feeb3f,"openfl.filesystem.File.copyToAsync","openfl/filesystem/File.hx",983,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_988_copyToAsync,"openfl.filesystem.File","copyToAsync",0x41feeb3f,"openfl.filesystem.File.copyToAsync","openfl/filesystem/File.hx",988,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_993_copyToAsync,"openfl.filesystem.File","copyToAsync",0x41feeb3f,"openfl.filesystem.File.copyToAsync","openfl/filesystem/File.hx",993,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_980_copyToAsync,"openfl.filesystem.File","copyToAsync",0x41feeb3f,"openfl.filesystem.File.copyToAsync","openfl/filesystem/File.hx",980,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1044_createDirectory,"openfl.filesystem.File","createDirectory",0x0ed4a404,"openfl.filesystem.File.createDirectory","openfl/filesystem/File.hx",1044,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1072_deleteDirectory,"openfl.filesystem.File","deleteDirectory",0xb0442cf5,"openfl.filesystem.File.deleteDirectory","openfl/filesystem/File.hx",1072,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1117_deleteDirectoryAsync,"openfl.filesystem.File","deleteDirectoryAsync",0x3bf72a07,"openfl.filesystem.File.deleteDirectoryAsync","openfl/filesystem/File.hx",1117,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1122_deleteDirectoryAsync,"openfl.filesystem.File","deleteDirectoryAsync",0x3bf72a07,"openfl.filesystem.File.deleteDirectoryAsync","openfl/filesystem/File.hx",1122,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1127_deleteDirectoryAsync,"openfl.filesystem.File","deleteDirectoryAsync",0x3bf72a07,"openfl.filesystem.File.deleteDirectoryAsync","openfl/filesystem/File.hx",1127,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1114_deleteDirectoryAsync,"openfl.filesystem.File","deleteDirectoryAsync",0x3bf72a07,"openfl.filesystem.File.deleteDirectoryAsync","openfl/filesystem/File.hx",1114,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1175_deleteFile,"openfl.filesystem.File","deleteFile",0x4a16a0f4,"openfl.filesystem.File.deleteFile","openfl/filesystem/File.hx",1175,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1192_deleteFileAsync,"openfl.filesystem.File","deleteFileAsync",0xc864d9a8,"openfl.filesystem.File.deleteFileAsync","openfl/filesystem/File.hx",1192,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1197_deleteFileAsync,"openfl.filesystem.File","deleteFileAsync",0xc864d9a8,"openfl.filesystem.File.deleteFileAsync","openfl/filesystem/File.hx",1197,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1202_deleteFileAsync,"openfl.filesystem.File","deleteFileAsync",0xc864d9a8,"openfl.filesystem.File.deleteFileAsync","openfl/filesystem/File.hx",1202,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1189_deleteFileAsync,"openfl.filesystem.File","deleteFileAsync",0xc864d9a8,"openfl.filesystem.File.deleteFileAsync","openfl/filesystem/File.hx",1189,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1250_getDirectoryListing,"openfl.filesystem.File","getDirectoryListing",0xcc8e82c0,"openfl.filesystem.File.getDirectoryListing","openfl/filesystem/File.hx",1250,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1306_getDirectoryListingAsync,"openfl.filesystem.File","getDirectoryListingAsync",0xd38af45c,"openfl.filesystem.File.getDirectoryListingAsync","openfl/filesystem/File.hx",1306,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1311_getDirectoryListingAsync,"openfl.filesystem.File","getDirectoryListingAsync",0xd38af45c,"openfl.filesystem.File.getDirectoryListingAsync","openfl/filesystem/File.hx",1311,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1316_getDirectoryListingAsync,"openfl.filesystem.File","getDirectoryListingAsync",0xd38af45c,"openfl.filesystem.File.getDirectoryListingAsync","openfl/filesystem/File.hx",1316,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1298_getDirectoryListingAsync,"openfl.filesystem.File","getDirectoryListingAsync",0xd38af45c,"openfl.filesystem.File.getDirectoryListingAsync","openfl/filesystem/File.hx",1298,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1369_getRelativePath,"openfl.filesystem.File","getRelativePath",0x3051727a,"openfl.filesystem.File.getRelativePath","openfl/filesystem/File.hx",1369,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1365_getRelativePath,"openfl.filesystem.File","getRelativePath",0x3051727a,"openfl.filesystem.File.getRelativePath","openfl/filesystem/File.hx",1365,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1514_moveTo,"openfl.filesystem.File","moveTo",0x343dad19,"openfl.filesystem.File.moveTo","openfl/filesystem/File.hx",1514,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1581_moveToAsync,"openfl.filesystem.File","moveToAsync",0xc466a763,"openfl.filesystem.File.moveToAsync","openfl/filesystem/File.hx",1581,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1586_moveToAsync,"openfl.filesystem.File","moveToAsync",0xc466a763,"openfl.filesystem.File.moveToAsync","openfl/filesystem/File.hx",1586,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1591_moveToAsync,"openfl.filesystem.File","moveToAsync",0xc466a763,"openfl.filesystem.File.moveToAsync","openfl/filesystem/File.hx",1591,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1578_moveToAsync,"openfl.filesystem.File","moveToAsync",0xc466a763,"openfl.filesystem.File.moveToAsync","openfl/filesystem/File.hx",1578,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1622_openWithDefaultApplication,"openfl.filesystem.File","openWithDefaultApplication",0xd6cee1cc,"openfl.filesystem.File.openWithDefaultApplication","openfl/filesystem/File.hx",1622,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1657_resolvePath,"openfl.filesystem.File","resolvePath",0xdeb52d64,"openfl.filesystem.File.resolvePath","openfl/filesystem/File.hx",1657,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1759___canonicalize,"openfl.filesystem.File","__canonicalize",0xf105c22d,"openfl.filesystem.File.__canonicalize","openfl/filesystem/File.hx",1759,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1779___dispatchCancel,"openfl.filesystem.File","__dispatchCancel",0xb1d0b761,"openfl.filesystem.File.__dispatchCancel","openfl/filesystem/File.hx",1779,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1788___dispatchSelect,"openfl.filesystem.File","__dispatchSelect",0x63cfe4e3,"openfl.filesystem.File.__dispatchSelect","openfl/filesystem/File.hx",1788,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1800___dispatchSelectMultiple,"openfl.filesystem.File","__dispatchSelectMultiple",0xcca29e13,"openfl.filesystem.File.__dispatchSelectMultiple","openfl/filesystem/File.hx",1800,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1817___createIoErrorEvent,"openfl.filesystem.File","__createIoErrorEvent",0x8c9579e1,"openfl.filesystem.File.__createIoErrorEvent","openfl/filesystem/File.hx",1817,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1834___formatPath,"openfl.filesystem.File","__formatPath",0x4c40bd89,"openfl.filesystem.File.__formatPath","openfl/filesystem/File.hx",1834,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1868___getFilterTypes,"openfl.filesystem.File","__getFilterTypes",0x1059d838,"openfl.filesystem.File.__getFilterTypes","openfl/filesystem/File.hx",1868,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1929___replaceWindowsEnvVars,"openfl.filesystem.File","__replaceWindowsEnvVars",0x17a2115d,"openfl.filesystem.File.__replaceWindowsEnvVars","openfl/filesystem/File.hx",1929,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1959___winGetHiddenAttr,"openfl.filesystem.File","__winGetHiddenAttr",0x3314e502,"openfl.filesystem.File.__winGetHiddenAttr","openfl/filesystem/File.hx",1959,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1974___updateFileStats,"openfl.filesystem.File","__updateFileStats",0x8d87c28d,"openfl.filesystem.File.__updateFileStats","openfl/filesystem/File.hx",1974,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2029_get_creationDate,"openfl.filesystem.File","get_creationDate",0x07a126e3,"openfl.filesystem.File.get_creationDate","openfl/filesystem/File.hx",2029,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2047_get_modificationDate,"openfl.filesystem.File","get_modificationDate",0x5e5f3fa0,"openfl.filesystem.File.get_modificationDate","openfl/filesystem/File.hx",2047,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2056_get_name,"openfl.filesystem.File","get_name",0xd9d7ad41,"openfl.filesystem.File.get_name","openfl/filesystem/File.hx",2056,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2074_get_size,"openfl.filesystem.File","get_size",0xdd2bdbb7,"openfl.filesystem.File.get_size","openfl/filesystem/File.hx",2074,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2083_get_type,"openfl.filesystem.File","get_type",0xdde12db0,"openfl.filesystem.File.get_type","openfl/filesystem/File.hx",2083,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2093_get_nativePath,"openfl.filesystem.File","get_nativePath",0xa6c1ca52,"openfl.filesystem.File.get_nativePath","openfl/filesystem/File.hx",2093,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2097_set_nativePath,"openfl.filesystem.File","set_nativePath",0xc6e1b2c6,"openfl.filesystem.File.set_nativePath","openfl/filesystem/File.hx",2097,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2142_get_url,"openfl.filesystem.File","get_url",0x5dfc0139,"openfl.filesystem.File.get_url","openfl/filesystem/File.hx",2142,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2147_get_exists,"openfl.filesystem.File","get_exists",0x63758252,"openfl.filesystem.File.get_exists","openfl/filesystem/File.hx",2147,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2153_get_isHidden,"openfl.filesystem.File","get_isHidden",0x640f88ea,"openfl.filesystem.File.get_isHidden","openfl/filesystem/File.hx",2153,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2162_get_isDirectory,"openfl.filesystem.File","get_isDirectory",0x0d4258ed,"openfl.filesystem.File.get_isDirectory","openfl/filesystem/File.hx",2162,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2166_get_parent,"openfl.filesystem.File","get_parent",0x911369a0,"openfl.filesystem.File.get_parent","openfl/filesystem/File.hx",2166,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1690_createTempDirectory,"openfl.filesystem.File","createTempDirectory",0x0d5cd5d0,"openfl.filesystem.File.createTempDirectory","openfl/filesystem/File.hx",1690,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1718_createTempFile,"openfl.filesystem.File","createTempFile",0x04d4a5f9,"openfl.filesystem.File.createTempFile","openfl/filesystem/File.hx",1718,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1746_getRootDirectories,"openfl.filesystem.File","getRootDirectories",0x6fd2dec0,"openfl.filesystem.File.getRootDirectories","openfl/filesystem/File.hx",1746,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_1895___getTempPath,"openfl.filesystem.File","__getTempPath",0xb5ae67e2,"openfl.filesystem.File.__getTempPath","openfl/filesystem/File.hx",1895,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2000_get_applicationDirectory,"openfl.filesystem.File","get_applicationDirectory",0xfa2943f3,"openfl.filesystem.File.get_applicationDirectory","openfl/filesystem/File.hx",2000,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2005_get_applicationStorageDirectory,"openfl.filesystem.File","get_applicationStorageDirectory",0x89243eec,"openfl.filesystem.File.get_applicationStorageDirectory","openfl/filesystem/File.hx",2005,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2010_get_documentsDirectory,"openfl.filesystem.File","get_documentsDirectory",0xbd89e7cb,"openfl.filesystem.File.get_documentsDirectory","openfl/filesystem/File.hx",2010,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2015_get_desktopDirectory,"openfl.filesystem.File","get_desktopDirectory",0xc78144e7,"openfl.filesystem.File.get_desktopDirectory","openfl/filesystem/File.hx",2015,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2020_get_userDirectory,"openfl.filesystem.File","get_userDirectory",0xcfd8d4ec,"openfl.filesystem.File.get_userDirectory","openfl/filesystem/File.hx",2020,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2025_get_workingDirectory,"openfl.filesystem.File","get_workingDirectory",0x8884e472,"openfl.filesystem.File.get_workingDirectory","openfl/filesystem/File.hx",2025,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2040_get_lineEnding,"openfl.filesystem.File","get_lineEnding",0x64907671,"openfl.filesystem.File.get_lineEnding","openfl/filesystem/File.hx",2040,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_2067_get_separator,"openfl.filesystem.File","get_separator",0xa05fa9af,"openfl.filesystem.File.get_separator","openfl/filesystem/File.hx",2067,0x4a92e11d)
HX_LOCAL_STACK_FRAME(_hx_pos_19861550b6f626f4_429_boot,"openfl.filesystem.File","boot",0x47ef891f,"openfl.filesystem.File.boot","openfl/filesystem/File.hx",429,0x4a92e11d)
static const ::String _hx_array_data_f6f882a1_92[] = {
	HX_("A:\\",63,85,31,00),HX_("B:\\",a4,47,32,00),HX_("C:\\",e5,09,33,00),HX_("D:\\",26,cc,33,00),HX_("E:\\",67,8e,34,00),HX_("F:\\",a8,50,35,00),HX_("G:\\",e9,12,36,00),HX_("H:\\",2a,d5,36,00),HX_("I:\\",6b,97,37,00),HX_("J:\\",ac,59,38,00),HX_("K:\\",ed,1b,39,00),HX_("L:\\",2e,de,39,00),HX_("M:\\",6f,a0,3a,00),HX_("N:\\",b0,62,3b,00),HX_("O:\\",f1,24,3c,00),HX_("P:\\",32,e7,3c,00),HX_("Q:\\",73,a9,3d,00),HX_("R:\\",b4,6b,3e,00),HX_("S:\\",f5,2d,3f,00),HX_("T:\\",36,f0,3f,00),HX_("U:\\",77,b2,40,00),HX_("V:\\",b8,74,41,00),HX_("W:\\",f9,36,42,00),HX_("X:\\",3a,f9,42,00),HX_("Y:\\",7b,bb,43,00),HX_("Z:\\",bc,7d,44,00),
};
namespace openfl{
namespace filesystem{

void File_obj::__construct(::String path){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_97_new)
HXLINE( 443)		this->_hx___fileStatsDirty = false;
HXLINE( 442)		this->_hx___sep = HX_("\\",5c,00,00,00);
HXLINE( 255)		this->icon = null();
HXLINE( 475)		super::__construct();
HXLINE( 477)		if (::hx::IsNull( path )) {
HXLINE( 479)			return;
            		}
HXLINE( 482)		this->set_nativePath(path);
HXLINE( 484)		if ((this->get_name().length == 0)) {
HXLINE( 486)			::Array< ::String > dirs = ::haxe::io::Path_obj::directory(this->_hx___path).split(this->_hx___sep);
HXLINE( 487)			this->name = dirs->__get((dirs->length - 1));
            		}
            	}

Dynamic File_obj::__CreateEmpty() { return new File_obj; }

void *File_obj::_hx_vtable = 0;

Dynamic File_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< File_obj > _hx_result = new File_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool File_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0c1b0022) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c1b0022;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x14028f43;
	}
}

bool File_obj::browse(::Array< ::Dynamic> typeFilter){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_495_browse)
HXLINE( 496)		this->browseForOpen(HX_("Open",ea,2f,8d,34),typeFilter);
HXLINE( 497)		return false;
            	}


void File_obj::browseForDirectory(::String title){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_546_browseForDirectory)
HXLINE( 547)		if (::hx::IsNotNull( this->_hx___fileDialog )) {
HXLINE( 549)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("File Dialog is already open.",9a,74,33,ba)));
            		}
HXLINE( 552)		this->_hx___fileDialog =  ::lime::ui::FileDialog_obj::__alloc( HX_CTX );
HXLINE( 553)		this->_hx___fileDialog->onSelect->add(this->_hx___dispatchSelect_dyn(),true,null());
HXLINE( 554)		this->_hx___fileDialog->onCancel->add(this->_hx___dispatchCancel_dyn(),null(),null());
HXLINE( 555)		this->_hx___fileDialog->browse(::lime::ui::FileDialogType_obj::OPEN_DIRECTORY_dyn(),null(),this->_hx___path,title);
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,browseForDirectory,(void))

void File_obj::browseForOpen(::String title,::Array< ::Dynamic> typeFilter){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_608_browseForOpen)
HXLINE( 609)		if (::hx::IsNotNull( this->_hx___fileDialog )) {
HXLINE( 611)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("File Dialog is already open.",9a,74,33,ba)));
            		}
HXLINE( 614)		this->_hx___fileDialog =  ::lime::ui::FileDialog_obj::__alloc( HX_CTX );
HXLINE( 615)		this->_hx___fileDialog->onSelect->add(this->_hx___dispatchSelect_dyn(),true,null());
HXLINE( 616)		this->_hx___fileDialog->onCancel->add(this->_hx___dispatchCancel_dyn(),null(),null());
HXLINE( 617)		 ::lime::ui::FileDialog _hx_tmp = this->_hx___fileDialog;
HXDLIN( 617)		::String _hx_tmp1 = this->_hx___getFilterTypes(typeFilter);
HXDLIN( 617)		_hx_tmp->browse(::lime::ui::FileDialogType_obj::OPEN_dyn(),_hx_tmp1,this->_hx___path,title);
            	}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,browseForOpen,(void))

void File_obj::browseForOpenMultiple(::String title,::Array< ::Dynamic> typeFilter){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_669_browseForOpenMultiple)
HXLINE( 670)		if (::hx::IsNotNull( this->_hx___fileDialog )) {
HXLINE( 672)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("File Dialog is already open.",9a,74,33,ba)));
            		}
HXLINE( 675)		this->_hx___fileDialog =  ::lime::ui::FileDialog_obj::__alloc( HX_CTX );
HXLINE( 676)		this->_hx___fileDialog->onSelectMultiple->add(this->_hx___dispatchSelectMultiple_dyn(),true,null());
HXLINE( 677)		this->_hx___fileDialog->onCancel->add(this->_hx___dispatchCancel_dyn(),null(),null());
HXLINE( 678)		 ::lime::ui::FileDialog _hx_tmp = this->_hx___fileDialog;
HXDLIN( 678)		::String _hx_tmp1 = this->_hx___getFilterTypes(typeFilter);
HXDLIN( 678)		_hx_tmp->browse(::lime::ui::FileDialogType_obj::OPEN_MULTIPLE_dyn(),_hx_tmp1,this->_hx___path,title);
            	}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,browseForOpenMultiple,(void))

void File_obj::browseForSave(::String title){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_733_browseForSave)
HXLINE( 734)		if (::hx::IsNotNull( this->_hx___fileDialog )) {
HXLINE( 736)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("File Dialog is already open.",9a,74,33,ba)));
            		}
HXLINE( 739)		this->_hx___fileDialog =  ::lime::ui::FileDialog_obj::__alloc( HX_CTX );
HXLINE( 740)		this->_hx___fileDialog->onSelect->add(this->_hx___dispatchSelect_dyn(),true,null());
HXLINE( 741)		this->_hx___fileDialog->browse(::lime::ui::FileDialogType_obj::SAVE_dyn(),null(),this->_hx___path,title);
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,browseForSave,(void))

void File_obj::cancel(){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_749_cancel)
HXLINE( 750)		this->_hx___fileWorker->cancel();
HXLINE( 751)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("cancel",7a,ed,33,b8),null(),null()));
            	}


void File_obj::canonicalize(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_777_canonicalize)
HXLINE( 778)		::Array< ::String > segs = this->_hx___path.split(this->_hx___sep);
HXLINE( 780)		::Array< ::String > cPath = ::openfl::filesystem::File_obj::_hx___driveLetters;
HXDLIN( 780)		::Array< ::String > cPath1 = ::openfl::filesystem::File_obj::_hx___driveLetters;
HXDLIN( 780)		::String cPath2 = segs->__get(0).toUpperCase();
HXDLIN( 780)		::String cPath3 = cPath->__get(cPath1->indexOf((cPath2 + this->_hx___sep),null()));
HXLINE( 781)		int start = 1;
HXLINE( 782)		if (::hx::IsNull( cPath3 )) {
HXLINE( 785)			cPath3 = ((this->_hx___sep + segs->__get(1)) + this->_hx___sep);
HXLINE( 786)			start = 2;
            		}
HXLINE( 789)		{
HXLINE( 789)			int _g = start;
HXDLIN( 789)			int _g1 = segs->length;
HXDLIN( 789)			while((_g < _g1)){
HXLINE( 789)				_g = (_g + 1);
HXDLIN( 789)				int i = (_g - 1);
HXLINE( 791)				::String cPath = this->_hx___canonicalize(cPath3,segs->__get(i));
HXDLIN( 791)				cPath3 = (cPath3 + (cPath + this->_hx___sep));
            			}
            		}
HXLINE( 794)		this->_hx___path = ::haxe::io::Path_obj::removeTrailingSlashes(cPath3);
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,canonicalize,(void))

 ::openfl::filesystem::File File_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_804_clone)
HXLINE( 805)		::hx::Class fileClass = ::hx::ClassOf< ::openfl::filesystem::File >();
HXLINE( 807)		 ::Dynamic fileClone = ::Type_obj::createEmptyInstance(fileClass);
HXLINE( 809)		::Array< ::String > fields = ::Type_obj::getInstanceFields(fileClass);
HXLINE( 810)		{
HXLINE( 810)			int _g = 0;
HXDLIN( 810)			while((_g < fields->length)){
HXLINE( 810)				::String field = fields->__get(_g);
HXDLIN( 810)				_g = (_g + 1);
HXLINE( 812)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 814)					::Reflect_obj::setProperty(fileClone,field,::Reflect_obj::getProperty(::hx::ObjectPtr<OBJ_>(this),field));
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 816)						{
HXLINE( 816)							null();
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
HXLINE( 818)		return ( ( ::openfl::filesystem::File)(fileClone) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,clone,return )

void File_obj::copyTo( ::openfl::net::FileReference newLocation,::hx::Null< bool >  __o_overwrite){
            		bool overwrite = __o_overwrite.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_879_copyTo)
HXLINE( 880)		bool _hx_tmp;
HXDLIN( 880)		if (!(overwrite)) {
HXLINE( 880)			_hx_tmp = ::sys::FileSystem_obj::exists(newLocation->_hx___path);
            		}
            		else {
HXLINE( 880)			_hx_tmp = false;
            		}
HXDLIN( 880)		if (_hx_tmp) {
HXLINE( 882)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Overwrite is false.",2c,41,00,f4),null()));
            		}
HXLINE( 884)		::String newPath = newLocation->_hx___path;
HXLINE( 908)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 910)			if (this->get_isDirectory()) {
HXLINE( 912)				::sys::FileSystem_obj::createDirectory(newPath);
HXLINE( 913)				::Array< ::Dynamic> files = this->getDirectoryListing();
HXLINE( 914)				{
HXLINE( 914)					int _g = 0;
HXDLIN( 914)					while((_g < files->length)){
HXLINE( 914)						 ::openfl::filesystem::File file = files->__get(_g).StaticCast<  ::openfl::filesystem::File >();
HXDLIN( 914)						_g = (_g + 1);
HXLINE( 916)						 ::openfl::filesystem::File newFile =  ::openfl::filesystem::File_obj::__alloc( HX_CTX ,::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,newPath)->init(1,file->get_name())));
HXLINE( 917)						file->copyTo(newFile,null());
            					}
            				}
            			}
            			else {
HXLINE( 922)				::String newDirectory = ::haxe::io::Path_obj::directory(newPath);
HXLINE( 923)				if (!(::sys::FileSystem_obj::exists(newDirectory))) {
HXLINE( 925)					::sys::FileSystem_obj::createDirectory(newDirectory);
            				}
HXLINE( 927)				::sys::io::File_obj::copy(this->_hx___path,newPath);
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 930)				{
HXLINE( 930)					null();
            				}
HXLINE( 932)				HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("File or directory does not exist.",1f,b6,00,81),3003));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,copyTo,(void))

void File_obj::copyToAsync( ::openfl::net::FileReference newLocation,::hx::Null< bool >  __o_overwrite){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::openfl::filesystem::File,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_983_copyToAsync)
HXLINE( 984)			_gthis->_hx___fileWorker = null();
HXLINE( 985)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::openfl::filesystem::File,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::Event event){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_988_copyToAsync)
HXLINE( 989)			_gthis->_hx___fileWorker = null();
HXLINE( 990)			_gthis->dispatchEvent(event);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_2, ::openfl::filesystem::File,_gthis,bool,overwrite, ::openfl::net::FileReference,newLocation) HXARGC(1)
            		void _hx_run( ::Dynamic m){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_993_copyToAsync)
HXLINE( 994)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 996)				_gthis->copyTo(newLocation,overwrite);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 998)					{
HXLINE( 998)						null();
            					}
HXDLIN( 998)					 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(1000)					 ::openfl::events::IOErrorEvent ioErrorEvent = _gthis->_hx___createIoErrorEvent(e);
HXLINE(1001)					if (::hx::IsNotNull( ioErrorEvent )) {
HXLINE(1003)						_gthis->_hx___fileWorker->sendComplete(ioErrorEvent);
            					}
            					else {
HXLINE(1007)						_gthis->_hx___fileWorker->sendError(e);
            					}
HXLINE(1009)					return;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE(1013)			 ::lime::_hx_system::BackgroundWorker _gthis1 = _gthis->_hx___fileWorker;
HXDLIN(1013)			_gthis1->sendComplete( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		bool overwrite = __o_overwrite.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_980_copyToAsync)
HXDLIN( 980)		 ::openfl::filesystem::File _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 981)		this->_hx___fileWorker =  ::lime::_hx_system::BackgroundWorker_obj::__alloc( HX_CTX );
HXLINE( 982)		this->_hx___fileWorker->onError->add( ::Dynamic(new _hx_Closure_0(_gthis)),null(),null());
HXLINE( 987)		this->_hx___fileWorker->onComplete->add( ::Dynamic(new _hx_Closure_1(_gthis)),null(),null());
HXLINE( 992)		this->_hx___fileWorker->doWork->add( ::Dynamic(new _hx_Closure_2(_gthis,overwrite,newLocation)),null(),null());
HXLINE(1016)		this->_hx___fileWorker->run(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,copyToAsync,(void))

void File_obj::createDirectory(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_1044_createDirectory)
HXDLIN(1044)		::sys::FileSystem_obj::createDirectory(this->_hx___path);
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,createDirectory,(void))

void File_obj::deleteDirectory(::hx::Null< bool >  __o_deleteDirectoryContents){
            		bool deleteDirectoryContents = __o_deleteDirectoryContents.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1072_deleteDirectory)
HXLINE(1073)		if (deleteDirectoryContents) {
HXLINE(1075)			::Array< ::Dynamic> files = this->getDirectoryListing();
HXLINE(1077)			{
HXLINE(1077)				int _g = 0;
HXDLIN(1077)				while((_g < files->length)){
HXLINE(1077)					 ::openfl::filesystem::File file = files->__get(_g).StaticCast<  ::openfl::filesystem::File >();
HXDLIN(1077)					_g = (_g + 1);
HXLINE(1079)					if (file->get_isDirectory()) {
HXLINE(1081)						file->deleteDirectory(deleteDirectoryContents);
            					}
            					else {
HXLINE(1085)						file->deleteFile();
            					}
            				}
            			}
            		}
HXLINE(1090)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1092)			::sys::FileSystem_obj::deleteDirectory(this->_hx___path);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(1094)				{
HXLINE(1094)					null();
            				}
HXLINE(1096)				HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Folder is not empty.",12,1c,5e,41),3010));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,deleteDirectory,(void))

void File_obj::deleteDirectoryAsync(::hx::Null< bool >  __o_deleteDirectoryContents){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::openfl::filesystem::File,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1117_deleteDirectoryAsync)
HXLINE(1118)			_gthis->_hx___fileWorker = null();
HXLINE(1119)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::openfl::filesystem::File,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::Event event){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1122_deleteDirectoryAsync)
HXLINE(1123)			_gthis->_hx___fileWorker = null();
HXLINE(1124)			_gthis->dispatchEvent(event);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::openfl::filesystem::File,_gthis,bool,deleteDirectoryContents) HXARGC(1)
            		void _hx_run( ::Dynamic m){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1127_deleteDirectoryAsync)
HXLINE(1128)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1130)				_gthis->deleteDirectory(deleteDirectoryContents);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(1132)					{
HXLINE(1132)						null();
            					}
HXDLIN(1132)					 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(1134)					 ::openfl::events::IOErrorEvent ioErrorEvent = _gthis->_hx___createIoErrorEvent(e);
HXLINE(1135)					if (::hx::IsNotNull( ioErrorEvent )) {
HXLINE(1137)						_gthis->_hx___fileWorker->sendComplete(ioErrorEvent);
            					}
            					else {
HXLINE(1141)						_gthis->_hx___fileWorker->sendError(e);
            					}
HXLINE(1143)					return;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE(1147)			 ::lime::_hx_system::BackgroundWorker _gthis1 = _gthis->_hx___fileWorker;
HXDLIN(1147)			_gthis1->sendComplete( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		bool deleteDirectoryContents = __o_deleteDirectoryContents.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1114_deleteDirectoryAsync)
HXDLIN(1114)		 ::openfl::filesystem::File _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1115)		this->_hx___fileWorker =  ::lime::_hx_system::BackgroundWorker_obj::__alloc( HX_CTX );
HXLINE(1116)		this->_hx___fileWorker->onError->add( ::Dynamic(new _hx_Closure_0(_gthis)),null(),null());
HXLINE(1121)		this->_hx___fileWorker->onComplete->add( ::Dynamic(new _hx_Closure_1(_gthis)),null(),null());
HXLINE(1126)		this->_hx___fileWorker->doWork->add( ::Dynamic(new _hx_Closure_2(_gthis,deleteDirectoryContents)),null(),null());
HXLINE(1150)		this->_hx___fileWorker->run(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,deleteDirectoryAsync,(void))

void File_obj::deleteFile(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_1175_deleteFile)
HXDLIN(1175)		::sys::FileSystem_obj::deleteFile(this->_hx___path);
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,deleteFile,(void))

void File_obj::deleteFileAsync(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::openfl::filesystem::File,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1192_deleteFileAsync)
HXLINE(1193)			_gthis->_hx___fileWorker = null();
HXLINE(1194)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::openfl::filesystem::File,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::Event event){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1197_deleteFileAsync)
HXLINE(1198)			_gthis->_hx___fileWorker = null();
HXLINE(1199)			_gthis->dispatchEvent(event);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::openfl::filesystem::File,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic m){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1202_deleteFileAsync)
HXLINE(1203)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1205)				_gthis->deleteFile();
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(1207)					{
HXLINE(1207)						null();
            					}
HXDLIN(1207)					 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(1209)					 ::openfl::events::IOErrorEvent ioErrorEvent = _gthis->_hx___createIoErrorEvent(e);
HXLINE(1210)					if (::hx::IsNotNull( ioErrorEvent )) {
HXLINE(1212)						_gthis->_hx___fileWorker->sendComplete(ioErrorEvent);
            					}
            					else {
HXLINE(1216)						_gthis->_hx___fileWorker->sendError(e);
            					}
HXLINE(1218)					return;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE(1222)			 ::lime::_hx_system::BackgroundWorker _gthis1 = _gthis->_hx___fileWorker;
HXDLIN(1222)			_gthis1->sendComplete( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1189_deleteFileAsync)
HXDLIN(1189)		 ::openfl::filesystem::File _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1190)		this->_hx___fileWorker =  ::lime::_hx_system::BackgroundWorker_obj::__alloc( HX_CTX );
HXLINE(1191)		this->_hx___fileWorker->onError->add( ::Dynamic(new _hx_Closure_0(_gthis)),null(),null());
HXLINE(1196)		this->_hx___fileWorker->onComplete->add( ::Dynamic(new _hx_Closure_1(_gthis)),null(),null());
HXLINE(1201)		this->_hx___fileWorker->doWork->add( ::Dynamic(new _hx_Closure_2(_gthis)),null(),null());
HXLINE(1225)		this->_hx___fileWorker->run(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,deleteFileAsync,(void))

::Array< ::Dynamic> File_obj::getDirectoryListing(){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1250_getDirectoryListing)
HXLINE(1251)		if (!(this->get_isDirectory())) {
HXLINE(1253)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Not a directory.",cd,61,c5,69),3007));
            		}
HXLINE(1256)		::Array< ::String > directories = ::sys::FileSystem_obj::readDirectory(this->_hx___path);
HXLINE(1257)		::Array< ::Dynamic> files = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1259)		{
HXLINE(1259)			int _g = 0;
HXDLIN(1259)			while((_g < directories->length)){
HXLINE(1259)				::String directory = directories->__get(_g);
HXDLIN(1259)				_g = (_g + 1);
HXLINE(1261)				files->push( ::openfl::filesystem::File_obj::__alloc( HX_CTX ,((this->_hx___path + this->_hx___sep) + directory)));
            			}
            		}
HXLINE(1264)		return files;
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,getDirectoryListing,return )

void File_obj::getDirectoryListingAsync(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::openfl::filesystem::File,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1306_getDirectoryListingAsync)
HXLINE(1307)			_gthis->_hx___fileWorker = null();
HXLINE(1308)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::openfl::filesystem::File,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::FileListEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1311_getDirectoryListingAsync)
HXLINE(1312)			_gthis->_hx___fileWorker = null();
HXLINE(1313)			_gthis->dispatchEvent(event);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::openfl::filesystem::File,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic m){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1316_getDirectoryListingAsync)
HXLINE(1317)			::Array< ::String > directories = null();
HXLINE(1318)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1320)				directories = ::sys::FileSystem_obj::readDirectory(_gthis->_hx___path);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(1322)					{
HXLINE(1322)						null();
            					}
HXDLIN(1322)					 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(1324)					 ::openfl::events::IOErrorEvent ioErrorEvent = _gthis->_hx___createIoErrorEvent(e);
HXLINE(1325)					if (::hx::IsNotNull( ioErrorEvent )) {
HXLINE(1327)						_gthis->_hx___fileWorker->sendComplete(ioErrorEvent);
            					}
            					else {
HXLINE(1331)						_gthis->_hx___fileWorker->sendError(e);
            					}
HXLINE(1333)					return;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE(1335)			::Array< ::Dynamic> files = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1336)			{
HXLINE(1336)				int _g = 0;
HXDLIN(1336)				while((_g < directories->length)){
HXLINE(1336)					::String directory = directories->__get(_g);
HXDLIN(1336)					_g = (_g + 1);
HXLINE(1338)					files->push( ::openfl::filesystem::File_obj::__alloc( HX_CTX ,((_gthis->_hx___path + _gthis->_hx___sep) + directory)));
            				}
            			}
HXLINE(1342)			 ::lime::_hx_system::BackgroundWorker _gthis1 = _gthis->_hx___fileWorker;
HXDLIN(1342)			_gthis1->sendComplete( ::openfl::events::FileListEvent_obj::__alloc( HX_CTX ,HX_("directoryListing",57,8c,81,22),files,null(),null()));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1298_getDirectoryListingAsync)
HXDLIN(1298)		 ::openfl::filesystem::File _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1299)		if (!(this->get_isDirectory())) {
HXLINE(1301)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Not a directory.",cd,61,c5,69),3007));
            		}
HXLINE(1304)		this->_hx___fileWorker =  ::lime::_hx_system::BackgroundWorker_obj::__alloc( HX_CTX );
HXLINE(1305)		this->_hx___fileWorker->onError->add( ::Dynamic(new _hx_Closure_0(_gthis)),null(),null());
HXLINE(1310)		this->_hx___fileWorker->onComplete->add( ::Dynamic(new _hx_Closure_1(_gthis)),null(),null());
HXLINE(1315)		this->_hx___fileWorker->doWork->add( ::Dynamic(new _hx_Closure_2(_gthis)),null(),null());
HXLINE(1345)		this->_hx___fileWorker->run(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,getDirectoryListingAsync,(void))

::String File_obj::getRelativePath( ::openfl::net::FileReference ref,::hx::Null< bool >  __o_useDotDot){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::Array< ::String > _hx_run(::String path){
            			HX_STACKFRAME(&_hx_pos_19861550b6f626f4_1369_getRelativePath)
HXLINE(1370)			::Array< ::String > dirs = ::Array_obj< ::String >::__new(0);
HXLINE(1371)			int lastBreak = 0;
HXLINE(1373)			{
HXLINE(1373)				int _g = 0;
HXDLIN(1373)				int _g1 = path.length;
HXDLIN(1373)				while((_g < _g1)){
HXLINE(1373)					_g = (_g + 1);
HXDLIN(1373)					int i = (_g - 1);
HXLINE(1375)					::String _hx_char = path.charAt(i);
HXLINE(1377)					bool breakPath;
HXDLIN(1377)					if ((path.charAt(i) != HX_("\\",5c,00,00,00))) {
HXLINE(1377)						breakPath = (_hx_char == HX_("/",2f,00,00,00));
            					}
            					else {
HXLINE(1377)						breakPath = true;
            					}
HXDLIN(1377)					if (breakPath) {
HXLINE(1379)						dirs->push(path.substring(lastBreak,i));
HXLINE(1380)						lastBreak = (i + 1);
            					}
            				}
            			}
HXLINE(1384)			if ((path.length != lastBreak)) {
HXLINE(1386)				dirs->push(path.substring(lastBreak,path.length));
            			}
HXLINE(1388)			return dirs;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		bool useDotDot = __o_useDotDot.Default(false);
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_1365_getRelativePath)
HXLINE(1368)		 ::Dynamic breakPath =  ::Dynamic(new _hx_Closure_0());
HXLINE(1391)		::Array< ::String > thisPath = ( (::Array< ::String >)(breakPath(this->_hx___path)) );
HXLINE(1392)		::Array< ::String > refPath = ( (::Array< ::String >)(breakPath(ref->_hx___path)) );
HXLINE(1394)		::Array< ::String > relatives = ::Array_obj< ::String >::__new(0);
HXLINE(1396)		if ((thisPath->length >= refPath->length)) {
HXLINE(1398)			int _g = 0;
HXDLIN(1398)			int _g1 = thisPath->length;
HXDLIN(1398)			while((_g < _g1)){
HXLINE(1398)				_g = (_g + 1);
HXDLIN(1398)				int j = (_g - 1);
HXLINE(1400)				if (useDotDot) {
HXLINE(1402)					::String thisSeg = thisPath->__get(j);
HXLINE(1403)					::String refSeg = refPath->__get(j);
HXLINE(1405)					if ((thisSeg == refSeg)) {
HXLINE(1407)						continue;
            					}
HXLINE(1409)					if ((j == 0)) {
HXLINE(1411)						goto _hx_goto_37;
            					}
HXLINE(1414)					relatives->unshift(HX_("..",40,28,00,00));
HXLINE(1416)					if (::hx::IsNotNull( refSeg )) {
HXLINE(1418)						relatives->push(refSeg);
            					}
            				}
            			}
            			_hx_goto_37:;
            		}
            		else {
HXLINE(1425)			int _g = 0;
HXDLIN(1425)			int _g1 = refPath->length;
HXDLIN(1425)			while((_g < _g1)){
HXLINE(1425)				_g = (_g + 1);
HXDLIN(1425)				int j = (_g - 1);
HXLINE(1427)				::String thisSeg = thisPath->__get(j);
HXLINE(1428)				::String refSeg = refPath->__get(j);
HXLINE(1430)				if ((thisSeg == refSeg)) {
HXLINE(1432)					if ((thisPath->length == 1)) {
HXLINE(1434)						if (useDotDot) {
HXLINE(1436)							relatives->push(HX_("..",40,28,00,00));
            						}
            						else {
HXLINE(1440)							goto _hx_goto_38;
            						}
            					}
HXLINE(1443)					continue;
            				}
HXLINE(1446)				if ((j == 0)) {
HXLINE(1448)					goto _hx_goto_38;
            				}
HXLINE(1451)				relatives->push(refSeg);
            			}
            			_hx_goto_38:;
            		}
HXLINE(1455)		::String relativePath = HX_("",00,00,00,00);
HXLINE(1457)		{
HXLINE(1457)			int _g = 0;
HXDLIN(1457)			int _g1 = relatives->length;
HXDLIN(1457)			while((_g < _g1)){
HXLINE(1457)				_g = (_g + 1);
HXDLIN(1457)				int k = (_g - 1);
HXLINE(1459)				::String relativePath1;
HXDLIN(1459)				bool relativePath2;
HXDLIN(1459)				if ((k == (relatives->length - 1))) {
HXLINE(1459)					relativePath2 = (refPath->length == 1);
            				}
            				else {
HXLINE(1459)					relativePath2 = true;
            				}
HXDLIN(1459)				if (relativePath2) {
HXLINE(1459)					relativePath1 = this->_hx___sep;
            				}
            				else {
HXLINE(1459)					relativePath1 = HX_("",00,00,00,00);
            				}
HXDLIN(1459)				relativePath = (relativePath + (relatives->__get(k) + relativePath1));
            			}
            		}
HXLINE(1462)		bool _hx_tmp;
HXDLIN(1462)		if ((relativePath == HX_("",00,00,00,00))) {
HXLINE(1462)			_hx_tmp = (ref->_hx___path != this->_hx___path);
            		}
            		else {
HXLINE(1462)			_hx_tmp = false;
            		}
HXDLIN(1462)		if (_hx_tmp) {
HXLINE(1462)			return null();
            		}
            		else {
HXLINE(1462)			return relativePath;
            		}
HXDLIN(1462)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,getRelativePath,return )

void File_obj::moveTo( ::openfl::net::FileReference newLocation,::hx::Null< bool >  __o_overwrite){
            		bool overwrite = __o_overwrite.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1514_moveTo)
HXLINE(1515)		bool _hx_tmp;
HXDLIN(1515)		if (!(overwrite)) {
HXLINE(1515)			_hx_tmp = ::sys::FileSystem_obj::exists(newLocation->_hx___path);
            		}
            		else {
HXLINE(1515)			_hx_tmp = false;
            		}
HXDLIN(1515)		if (_hx_tmp) {
HXLINE(1517)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Overwrite is set to false",3d,f4,ba,b4),null()));
            		}
HXLINE(1519)		this->copyTo(newLocation,overwrite);
HXLINE(1520)		if (this->get_isDirectory()) {
HXLINE(1522)			this->deleteDirectory(true);
            		}
            		else {
HXLINE(1526)			this->deleteFile();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,moveTo,(void))

void File_obj::moveToAsync( ::openfl::net::FileReference newLocation,::hx::Null< bool >  __o_overwrite){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::openfl::filesystem::File,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1581_moveToAsync)
HXLINE(1582)			_gthis->_hx___fileWorker = null();
HXLINE(1583)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::openfl::filesystem::File,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::Event event){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1586_moveToAsync)
HXLINE(1587)			_gthis->_hx___fileWorker = null();
HXLINE(1588)			_gthis->dispatchEvent(event);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_2, ::openfl::filesystem::File,_gthis,bool,overwrite, ::openfl::net::FileReference,newLocation) HXARGC(1)
            		void _hx_run( ::Dynamic m){
            			HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1591_moveToAsync)
HXLINE(1592)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1594)				_gthis->moveTo(newLocation,overwrite);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(1596)					{
HXLINE(1596)						null();
            					}
HXDLIN(1596)					 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(1598)					 ::openfl::events::IOErrorEvent ioErrorEvent = _gthis->_hx___createIoErrorEvent(e);
HXLINE(1599)					if (::hx::IsNotNull( ioErrorEvent )) {
HXLINE(1601)						_gthis->_hx___fileWorker->sendComplete(ioErrorEvent);
            					}
            					else {
HXLINE(1605)						_gthis->_hx___fileWorker->sendError(e);
            					}
HXLINE(1607)					return;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE(1611)			 ::lime::_hx_system::BackgroundWorker _gthis1 = _gthis->_hx___fileWorker;
HXDLIN(1611)			_gthis1->sendComplete( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		bool overwrite = __o_overwrite.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1578_moveToAsync)
HXDLIN(1578)		 ::openfl::filesystem::File _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1579)		this->_hx___fileWorker =  ::lime::_hx_system::BackgroundWorker_obj::__alloc( HX_CTX );
HXLINE(1580)		this->_hx___fileWorker->onError->add( ::Dynamic(new _hx_Closure_0(_gthis)),null(),null());
HXLINE(1585)		this->_hx___fileWorker->onComplete->add( ::Dynamic(new _hx_Closure_1(_gthis)),null(),null());
HXLINE(1590)		this->_hx___fileWorker->doWork->add( ::Dynamic(new _hx_Closure_2(_gthis,overwrite,newLocation)),null(),null());
HXLINE(1614)		this->_hx___fileWorker->run(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,moveToAsync,(void))

void File_obj::openWithDefaultApplication(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_1622_openWithDefaultApplication)
HXDLIN(1622)		::lime::_hx_system::System_obj::openFile(this->_hx___path);
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,openWithDefaultApplication,(void))

 ::openfl::filesystem::File File_obj::resolvePath(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1657_resolvePath)
HXLINE(1658)		::String directoryPath = ::haxe::io::Path_obj::removeTrailingSlashes(this->_hx___path);
HXLINE(1659)		return  ::openfl::filesystem::File_obj::__alloc( HX_CTX ,(((HX_("",00,00,00,00) + directoryPath) + this->_hx___sep) + path));
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,resolvePath,return )

::String File_obj::_hx___canonicalize(::String cpath,::String seg){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_1759___canonicalize)
HXLINE(1760)		seg = seg.toLowerCase();
HXLINE(1761)		::Array< ::String > items = ::sys::FileSystem_obj::readDirectory(::haxe::io::Path_obj::directory(cpath));
HXLINE(1762)		if (::hx::IsNull( items )) {
HXLINE(1764)			return HX_("",00,00,00,00);
            		}
HXLINE(1766)		{
HXLINE(1766)			int _g = 0;
HXDLIN(1766)			while((_g < items->length)){
HXLINE(1766)				::String item = items->__get(_g);
HXDLIN(1766)				_g = (_g + 1);
HXLINE(1768)				if ((item.toLowerCase() == seg)) {
HXLINE(1770)					seg = item;
HXLINE(1771)					goto _hx_goto_49;
            				}
            			}
            			_hx_goto_49:;
            		}
HXLINE(1775)		return seg;
            	}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,_hx___canonicalize,return )

void File_obj::_hx___dispatchCancel(){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1779___dispatchCancel)
HXLINE(1780)		if (::hx::IsNotNull( this->_hx___fileDialog )) {
HXLINE(1782)			this->_hx___fileDialog = null();
            		}
HXLINE(1784)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("cancel",7a,ed,33,b8),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,_hx___dispatchCancel,(void))

void File_obj::_hx___dispatchSelect(::String filepath){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1788___dispatchSelect)
HXLINE(1789)		if (::hx::IsNotNull( this->_hx___fileDialog )) {
HXLINE(1791)			this->_hx___fileDialog = null();
            		}
HXLINE(1794)		this->set_nativePath(filepath);
HXLINE(1796)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("select",fc,1a,33,6a),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,_hx___dispatchSelect,(void))

void File_obj::_hx___dispatchSelectMultiple(::Array< ::String > filepaths){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1800___dispatchSelectMultiple)
HXLINE(1801)		if (::hx::IsNotNull( this->_hx___fileDialog )) {
HXLINE(1803)			this->_hx___fileDialog = null();
            		}
HXLINE(1806)		::Array< ::Dynamic> files = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1808)		{
HXLINE(1808)			int _g = 0;
HXDLIN(1808)			while((_g < filepaths->length)){
HXLINE(1808)				::String filepath = filepaths->__get(_g);
HXDLIN(1808)				_g = (_g + 1);
HXLINE(1810)				files->push( ::openfl::filesystem::File_obj::__alloc( HX_CTX ,filepath));
            			}
            		}
HXLINE(1813)		this->dispatchEvent( ::openfl::events::FileListEvent_obj::__alloc( HX_CTX ,HX_("selectMultiple",2c,15,bf,f3),files,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,_hx___dispatchSelectMultiple,(void))

 ::openfl::events::IOErrorEvent File_obj::_hx___createIoErrorEvent( ::Dynamic e){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1817___createIoErrorEvent)
HXLINE(1818)		if (this->hasEventListener(HX_("ioError",02,fe,41,76))) {
HXLINE(1820)			if (::Std_obj::isOfType(e,::hx::ClassOf< ::openfl::errors::Error >())) {
HXLINE(1822)				 ::openfl::errors::Error error = ( ( ::openfl::errors::Error)(e) );
HXLINE(1823)				::String _hx_tmp = error->get_message();
HXDLIN(1823)				return  ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),false,false,_hx_tmp,error->errorID);
            			}
            			else {
HXLINE(1827)				return  ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null());
            			}
            		}
HXLINE(1830)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,_hx___createIoErrorEvent,return )

::String File_obj::_hx___formatPath(::String path){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_1834___formatPath)
HXLINE(1835)		::Array< ::String > dirs = ::Array_obj< ::String >::__new(0);
HXLINE(1836)		int lastBreak = 0;
HXLINE(1838)		{
HXLINE(1838)			int _g = 0;
HXDLIN(1838)			int _g1 = path.length;
HXDLIN(1838)			while((_g < _g1)){
HXLINE(1838)				_g = (_g + 1);
HXDLIN(1838)				int i = (_g - 1);
HXLINE(1840)				::String _hx_char = path.charAt(i);
HXLINE(1842)				bool _hx_tmp;
HXDLIN(1842)				if ((path.charAt(i) != HX_("\\",5c,00,00,00))) {
HXLINE(1842)					_hx_tmp = (_hx_char == HX_("/",2f,00,00,00));
            				}
            				else {
HXLINE(1842)					_hx_tmp = true;
            				}
HXDLIN(1842)				if (_hx_tmp) {
HXLINE(1844)					if ((lastBreak != i)) {
HXLINE(1846)						dirs->push(path.substring(lastBreak,i));
            					}
HXLINE(1848)					lastBreak = (i + 1);
            				}
            			}
            		}
HXLINE(1852)		if ((path.length != lastBreak)) {
HXLINE(1854)			dirs->push(path.substring(lastBreak,path.length));
            		}
HXLINE(1857)		path = HX_("",00,00,00,00);
HXLINE(1859)		{
HXLINE(1859)			int _g2 = 0;
HXDLIN(1859)			while((_g2 < dirs->length)){
HXLINE(1859)				::String dir = dirs->__get(_g2);
HXDLIN(1859)				_g2 = (_g2 + 1);
HXLINE(1861)				path = (path + ((HX_("",00,00,00,00) + dir) + this->_hx___sep));
            			}
            		}
HXLINE(1864)		return ::haxe::io::Path_obj::removeTrailingSlashes(path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,_hx___formatPath,return )

::String File_obj::_hx___getFilterTypes(::Array< ::Dynamic> typeFilter){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_1868___getFilterTypes)
HXLINE(1869)		::String filterString = null();
HXLINE(1870)		::Array< ::String > filters = ::Array_obj< ::String >::__new(0);
HXLINE(1872)		if (::hx::IsNotNull( typeFilter )) {
HXLINE(1874)			{
HXLINE(1874)				int _g = 0;
HXDLIN(1874)				while((_g < typeFilter->length)){
HXLINE(1874)					 ::openfl::net::FileFilter filter = typeFilter->__get(_g).StaticCast<  ::openfl::net::FileFilter >();
HXDLIN(1874)					_g = (_g + 1);
HXLINE(1876)					::Array< ::String > types = filter->extension.split(HX_(";",3b,00,00,00));
HXLINE(1878)					{
HXLINE(1878)						int _g1 = 0;
HXDLIN(1878)						while((_g1 < types->length)){
HXLINE(1878)							::String type = types->__get(_g1);
HXDLIN(1878)							_g1 = (_g1 + 1);
HXLINE(1880)							filters->push(::StringTools_obj::replace(type,HX_("*.",c4,24,00,00),HX_("",00,00,00,00)));
            						}
            					}
            				}
            			}
HXLINE(1884)			filterString = filters->join(HX_(",",2c,00,00,00));
            		}
HXLINE(1888)		return filterString;
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,_hx___getFilterTypes,return )

::String File_obj::_hx___replaceWindowsEnvVars(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1929___replaceWindowsEnvVars)
HXLINE(1931)		 ::EReg pattern =  ::EReg_obj::__alloc( HX_CTX ,HX_("%(.+?)%",7b,66,eb,99),HX_("",00,00,00,00));
HXLINE(1934)		bool match = pattern->match(path);
HXLINE(1936)		if (match) {
HXLINE(1939)			::String matchedPath = pattern->matched(0);
HXLINE(1942)			::String envVar = matchedPath.substring(1,(matchedPath.length - 1));
HXLINE(1945)			::String envVarValue = ::Sys_obj::getEnv(envVar);
HXLINE(1947)			if (::hx::IsNull( envVarValue )) {
HXLINE(1949)				return path;
            			}
HXLINE(1952)			return ::StringTools_obj::replace(path,matchedPath,envVarValue);
            		}
HXLINE(1954)		return path;
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,_hx___replaceWindowsEnvVars,return )

bool File_obj::_hx___winGetHiddenAttr(){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1959___winGetHiddenAttr)
HXLINE(1962)		 ::sys::io::Process process =  ::sys::io::Process_obj::__alloc( HX_CTX ,((HX_("attrib \"",cc,e9,9c,ce) + this->get_nativePath()) + HX_("\"",22,00,00,00)),null(),null());
HXLINE(1963)		::String r = process->_hx_stdout->readLine();
HXLINE(1965)		process->close();
HXLINE(1967)		::String s = r.split(this->get_nativePath())->__get(0);
HXLINE(1968)		bool flag = (s.indexOf(HX_(" H ",f8,86,18,00),null()) > -1);
HXLINE(1970)		return flag;
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,_hx___winGetHiddenAttr,return )

void File_obj::_hx___updateFileStats(::String path){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_1974___updateFileStats)
HXLINE(1975)		if (::hx::IsNull( path )) {
HXLINE(1977)			path = this->_hx___path;
            		}
HXLINE(1980)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE(1982)			 ::Dynamic fileInfo = ::sys::FileSystem_obj::stat(path);
HXLINE(1983)			this->creationDate = ( ( ::Date)(fileInfo->__Field(HX_("ctime",f0,39,a8,4d),::hx::paccDynamic)) );
HXLINE(1984)			this->modificationDate = ( ( ::Date)(fileInfo->__Field(HX_("mtime",fa,06,aa,0f),::hx::paccDynamic)) );
HXLINE(1985)			this->size = ( (Float)(fileInfo->__Field(HX_("size",c1,a0,53,4c),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(1989)			this->creationDate = null();
HXLINE(1990)			this->modificationDate = null();
HXLINE(1991)			this->size = ( (Float)(0) );
            		}
HXLINE(1993)		this->extension = ::haxe::io::Path_obj::extension(path);
HXLINE(1994)		this->type = this->get_extension();
HXLINE(1995)		this->name = ::haxe::io::Path_obj::withoutDirectory(path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,_hx___updateFileStats,(void))

 ::Date File_obj::get_creationDate(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_2029_get_creationDate)
HXLINE(2030)		if (this->_hx___fileStatsDirty) {
HXLINE(2032)			this->_hx___updateFileStats(null());
            		}
HXLINE(2034)		return this->creationDate;
            	}


 ::Date File_obj::get_modificationDate(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_2047_get_modificationDate)
HXLINE(2048)		if (this->_hx___fileStatsDirty) {
HXLINE(2050)			this->_hx___updateFileStats(null());
            		}
HXLINE(2052)		return this->modificationDate;
            	}


::String File_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_2056_get_name)
HXLINE(2057)		if (this->_hx___fileStatsDirty) {
HXLINE(2059)			this->_hx___updateFileStats(null());
            		}
HXLINE(2061)		return this->name;
            	}


Float File_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_2074_get_size)
HXLINE(2075)		if (this->_hx___fileStatsDirty) {
HXLINE(2077)			this->_hx___updateFileStats(null());
            		}
HXLINE(2079)		return this->size;
            	}


::String File_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_2083_get_type)
HXLINE(2084)		if (this->_hx___fileStatsDirty) {
HXLINE(2086)			this->_hx___updateFileStats(null());
            		}
HXLINE(2088)		return this->type;
            	}


::String File_obj::get_nativePath(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_2093_get_nativePath)
HXDLIN(2093)		return this->_hx___path;
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_nativePath,return )

::String File_obj::set_nativePath(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_2097_set_nativePath)
HXLINE(2098)		if (::hx::IsNotNull( path )) {
HXLINE(2100)			if (::StringTools_obj::startsWith(path,HX_("app:",79,10,73,40))) {
HXLINE(2103)				path = ::StringTools_obj::replace(path,HX_("app:",79,10,73,40),::openfl::filesystem::File_obj::get_applicationDirectory()->get_nativePath());
            			}
            			else {
HXLINE(2105)				if (::StringTools_obj::startsWith(path,HX_("app-storage:",0b,d1,f5,4e))) {
HXLINE(2107)					path = ::StringTools_obj::replace(path,HX_("app-storage:",0b,d1,f5,4e),::openfl::filesystem::File_obj::get_applicationStorageDirectory()->get_nativePath());
            				}
            			}
HXLINE(2111)			if ((path.indexOf(HX_("%",25,00,00,00),null()) > -1)) {
HXLINE(2113)				path = this->_hx___replaceWindowsEnvVars(path);
            			}
HXLINE(2117)			if ((path.charAt((path.length - 1)) == HX_(":",3a,00,00,00))) {
HXLINE(2119)				path = ::haxe::io::Path_obj::addTrailingSlash(path);
            			}
HXLINE(2122)			if ((::haxe::io::Path_obj::directory(path).length == 0)) {
HXLINE(2124)				HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("One of the parameters is invalid.",b5,de,df,6f)));
            			}
HXLINE(2127)			this->_hx___updateFileStats(path);
HXLINE(2129)			if ((path.indexOf(HX_("/",2f,00,00,00),null()) > 0)) {
HXLINE(2131)				path = this->_hx___formatPath(path);
            			}
            		}
HXLINE(2135)		return (this->_hx___path = path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,set_nativePath,return )

::String File_obj::get_url(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_2142_get_url)
HXDLIN(2142)		return (HX_("file:///",91,ef,e4,54) + this->get_nativePath());
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_url,return )

bool File_obj::get_exists(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_2147_get_exists)
HXDLIN(2147)		return ::sys::FileSystem_obj::exists(this->_hx___path);
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_exists,return )

bool File_obj::get_isHidden(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_2153_get_isHidden)
HXDLIN(2153)		return this->_hx___winGetHiddenAttr();
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_isHidden,return )

bool File_obj::get_isDirectory(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_2162_get_isDirectory)
HXDLIN(2162)		if (::sys::FileSystem_obj::exists(this->_hx___path)) {
HXDLIN(2162)			return ::sys::FileSystem_obj::isDirectory(this->_hx___path);
            		}
            		else {
HXDLIN(2162)			return false;
            		}
HXDLIN(2162)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_isDirectory,return )

 ::openfl::filesystem::File File_obj::get_parent(){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_2166_get_parent)
HXLINE(2168)		::String path = ::haxe::io::Path_obj::removeTrailingSlashes(this->_hx___path);
HXLINE(2170)		int lastIndex = path.lastIndexOf(this->_hx___sep,null());
HXLINE(2171)		if ((lastIndex == path.indexOf(this->_hx___sep,null()))) {
HXLINE(2173)			lastIndex = (lastIndex + 1);
            		}
HXLINE(2175)		if ((lastIndex != -1)) {
HXLINE(2175)			return  ::openfl::filesystem::File_obj::__alloc( HX_CTX ,this->_hx___path.substring(0,((lastIndex - path.length) + path.length)));
            		}
            		else {
HXLINE(2175)			return null();
            		}
HXDLIN(2175)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_parent,return )

::Array< ::String > File_obj::_hx___driveLetters;

 ::openfl::filesystem::File File_obj::createTempDirectory(){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1690_createTempDirectory)
HXDLIN(1690)		return  ::openfl::filesystem::File_obj::__alloc( HX_CTX ,::openfl::filesystem::File_obj::_hx___getTempPath(true));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,createTempDirectory,return )

 ::openfl::filesystem::File File_obj::createTempFile(){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1718_createTempFile)
HXDLIN(1718)		return  ::openfl::filesystem::File_obj::__alloc( HX_CTX ,::openfl::filesystem::File_obj::_hx___getTempPath(false));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,createTempFile,return )

::Array< ::Dynamic> File_obj::getRootDirectories(){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_1746_getRootDirectories)
HXLINE(1747)		::Array< ::Dynamic> rootDirs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1748)		{
HXLINE(1748)			int _g = 0;
HXDLIN(1748)			::Array< ::String > _g1 = ::openfl::filesystem::File_obj::_hx___driveLetters;
HXDLIN(1748)			while((_g < _g1->length)){
HXLINE(1748)				::String letter = _g1->__get(_g);
HXDLIN(1748)				_g = (_g + 1);
HXLINE(1750)				if (::sys::FileSystem_obj::exists(letter)) {
HXLINE(1752)					rootDirs->push( ::openfl::filesystem::File_obj::__alloc( HX_CTX ,letter));
            				}
            			}
            		}
HXLINE(1755)		return rootDirs;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,getRootDirectories,return )

::String File_obj::_hx___getTempPath(bool dir){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_1895___getTempPath)
HXLINE(1896)		::String path = HX_("",00,00,00,00);
HXLINE(1898)		if ((::lime::_hx_system::System_obj::get_platformName() == HX_("Windows",63,06,c6,b5))) {
HXLINE(1900)			path = ::Sys_obj::getEnv(HX_("TEMP",14,8b,ba,37));
            		}
            		else {
HXLINE(1904)			path = ::Sys_obj::getEnv(HX_("TMPDIR",d6,e4,e9,20));
HXLINE(1906)			if (::hx::IsNull( path )) {
HXLINE(1908)				path = HX_("/tmp",08,6c,69,1f);
            			}
            		}
HXLINE(1912)		::String tempPath = HX_("",00,00,00,00);
HXLINE(1914)		while(true){
HXLINE(1914)			tempPath = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,path)->init(1,(HX_("ofl",75,93,54,00) + ::Math_obj::round((( (Float)(16777215) ) * ::Math_obj::random())))));
HXDLIN(1914)			if (!(::sys::FileSystem_obj::exists(tempPath))) {
HXLINE(1914)				goto _hx_goto_81;
            			}
            		}
            		_hx_goto_81:;
HXLINE(1919)		if (dir) {
HXLINE(1921)			return ::haxe::io::Path_obj::addTrailingSlash(tempPath);
            		}
HXLINE(1924)		return (tempPath + HX_(".tmp",69,35,c0,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(File_obj,_hx___getTempPath,return )

 ::openfl::filesystem::File File_obj::get_applicationDirectory(){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_2000_get_applicationDirectory)
HXDLIN(2000)		return  ::openfl::filesystem::File_obj::__alloc( HX_CTX ,::haxe::io::Path_obj::removeTrailingSlashes(::lime::_hx_system::System_obj::get_applicationDirectory()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_applicationDirectory,return )

 ::openfl::filesystem::File File_obj::get_applicationStorageDirectory(){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_2005_get_applicationStorageDirectory)
HXDLIN(2005)		return  ::openfl::filesystem::File_obj::__alloc( HX_CTX ,::haxe::io::Path_obj::removeTrailingSlashes(::lime::_hx_system::System_obj::get_applicationStorageDirectory()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_applicationStorageDirectory,return )

 ::openfl::filesystem::File File_obj::get_documentsDirectory(){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_2010_get_documentsDirectory)
HXDLIN(2010)		return  ::openfl::filesystem::File_obj::__alloc( HX_CTX ,::haxe::io::Path_obj::removeTrailingSlashes(::lime::_hx_system::System_obj::get_documentsDirectory()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_documentsDirectory,return )

 ::openfl::filesystem::File File_obj::get_desktopDirectory(){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_2015_get_desktopDirectory)
HXDLIN(2015)		return  ::openfl::filesystem::File_obj::__alloc( HX_CTX ,::haxe::io::Path_obj::removeTrailingSlashes(::lime::_hx_system::System_obj::get_desktopDirectory()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_desktopDirectory,return )

 ::openfl::filesystem::File File_obj::get_userDirectory(){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_2020_get_userDirectory)
HXDLIN(2020)		return  ::openfl::filesystem::File_obj::__alloc( HX_CTX ,::haxe::io::Path_obj::removeTrailingSlashes(::lime::_hx_system::System_obj::get_userDirectory()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_userDirectory,return )

 ::openfl::filesystem::File File_obj::get_workingDirectory(){
            	HX_GC_STACKFRAME(&_hx_pos_19861550b6f626f4_2025_get_workingDirectory)
HXDLIN(2025)		return  ::openfl::filesystem::File_obj::__alloc( HX_CTX ,::haxe::io::Path_obj::removeTrailingSlashes(::Sys_obj::getCwd()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_workingDirectory,return )

::String File_obj::get_lineEnding(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_2040_get_lineEnding)
HXDLIN(2040)		return HX_("\r\n",5d,0b,00,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_lineEnding,return )

::String File_obj::get_separator(){
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_2067_get_separator)
HXDLIN(2067)		return HX_("\\",5c,00,00,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_separator,return )


::hx::ObjectPtr< File_obj > File_obj::__new(::String path) {
	::hx::ObjectPtr< File_obj > __this = new File_obj();
	__this->__construct(path);
	return __this;
}

::hx::ObjectPtr< File_obj > File_obj::__alloc(::hx::Ctx *_hx_ctx,::String path) {
	File_obj *__this = (File_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(File_obj), true, "openfl.filesystem.File"));
	*(void **)__this = File_obj::_hx_vtable;
	__this->__construct(path);
	return __this;
}

File_obj::File_obj()
{
}

void File_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(File);
	HX_MARK_MEMBER_NAME(icon,"icon");
	HX_MARK_MEMBER_NAME(_hx___fileDialog,"__fileDialog");
	HX_MARK_MEMBER_NAME(_hx___fileWorker,"__fileWorker");
	HX_MARK_MEMBER_NAME(_hx___sep,"__sep");
	HX_MARK_MEMBER_NAME(_hx___fileStatsDirty,"__fileStatsDirty");
	 ::openfl::net::FileReference_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void File_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(icon,"icon");
	HX_VISIT_MEMBER_NAME(_hx___fileDialog,"__fileDialog");
	HX_VISIT_MEMBER_NAME(_hx___fileWorker,"__fileWorker");
	HX_VISIT_MEMBER_NAME(_hx___sep,"__sep");
	HX_VISIT_MEMBER_NAME(_hx___fileStatsDirty,"__fileStatsDirty");
	 ::openfl::net::FileReference_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val File_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_url() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { return ::hx::Val( icon ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__sep") ) { return ::hx::Val( _hx___sep ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_exists() ); }
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_parent() ); }
		if (HX_FIELD_EQ(inName,"browse") ) { return ::hx::Val( browse_dyn() ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_url") ) { return ::hx::Val( get_url_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isHidden") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isHidden() ); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return ::hx::Val( get_type_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nativePath") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_nativePath() ); }
		if (HX_FIELD_EQ(inName,"deleteFile") ) { return ::hx::Val( deleteFile_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_exists") ) { return ::hx::Val( get_exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return ::hx::Val( get_parent_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isDirectory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isDirectory() ); }
		if (HX_FIELD_EQ(inName,"copyToAsync") ) { return ::hx::Val( copyToAsync_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveToAsync") ) { return ::hx::Val( moveToAsync_dyn() ); }
		if (HX_FIELD_EQ(inName,"resolvePath") ) { return ::hx::Val( resolvePath_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fileDialog") ) { return ::hx::Val( _hx___fileDialog ); }
		if (HX_FIELD_EQ(inName,"__fileWorker") ) { return ::hx::Val( _hx___fileWorker ); }
		if (HX_FIELD_EQ(inName,"canonicalize") ) { return ::hx::Val( canonicalize_dyn() ); }
		if (HX_FIELD_EQ(inName,"__formatPath") ) { return ::hx::Val( _hx___formatPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isHidden") ) { return ::hx::Val( get_isHidden_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"browseForOpen") ) { return ::hx::Val( browseForOpen_dyn() ); }
		if (HX_FIELD_EQ(inName,"browseForSave") ) { return ::hx::Val( browseForSave_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__canonicalize") ) { return ::hx::Val( _hx___canonicalize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_nativePath") ) { return ::hx::Val( get_nativePath_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_nativePath") ) { return ::hx::Val( set_nativePath_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createDirectory") ) { return ::hx::Val( createDirectory_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteDirectory") ) { return ::hx::Val( deleteDirectory_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteFileAsync") ) { return ::hx::Val( deleteFileAsync_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRelativePath") ) { return ::hx::Val( getRelativePath_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isDirectory") ) { return ::hx::Val( get_isDirectory_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__fileStatsDirty") ) { return ::hx::Val( _hx___fileStatsDirty ); }
		if (HX_FIELD_EQ(inName,"__dispatchCancel") ) { return ::hx::Val( _hx___dispatchCancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"__dispatchSelect") ) { return ::hx::Val( _hx___dispatchSelect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getFilterTypes") ) { return ::hx::Val( _hx___getFilterTypes_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_creationDate") ) { return ::hx::Val( get_creationDate_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__updateFileStats") ) { return ::hx::Val( _hx___updateFileStats_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"browseForDirectory") ) { return ::hx::Val( browseForDirectory_dyn() ); }
		if (HX_FIELD_EQ(inName,"__winGetHiddenAttr") ) { return ::hx::Val( _hx___winGetHiddenAttr_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getDirectoryListing") ) { return ::hx::Val( getDirectoryListing_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deleteDirectoryAsync") ) { return ::hx::Val( deleteDirectoryAsync_dyn() ); }
		if (HX_FIELD_EQ(inName,"__createIoErrorEvent") ) { return ::hx::Val( _hx___createIoErrorEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_modificationDate") ) { return ::hx::Val( get_modificationDate_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"browseForOpenMultiple") ) { return ::hx::Val( browseForOpenMultiple_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__replaceWindowsEnvVars") ) { return ::hx::Val( _hx___replaceWindowsEnvVars_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDirectoryListingAsync") ) { return ::hx::Val( getDirectoryListingAsync_dyn() ); }
		if (HX_FIELD_EQ(inName,"__dispatchSelectMultiple") ) { return ::hx::Val( _hx___dispatchSelectMultiple_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"openWithDefaultApplication") ) { return ::hx::Val( openWithDefaultApplication_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool File_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"separator") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_separator() ); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineEnding") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_lineEnding() ); return true; } }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_userDirectory() ); return true; } }
		if (HX_FIELD_EQ(inName,"__getTempPath") ) { outValue = _hx___getTempPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_separator") ) { outValue = get_separator_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__driveLetters") ) { outValue = ( _hx___driveLetters ); return true; }
		if (HX_FIELD_EQ(inName,"createTempFile") ) { outValue = createTempFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_lineEnding") ) { outValue = get_lineEnding_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_desktopDirectory() ); return true; } }
		if (HX_FIELD_EQ(inName,"workingDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_workingDirectory() ); return true; } }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { outValue = get_userDirectory_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_documentsDirectory() ); return true; } }
		if (HX_FIELD_EQ(inName,"getRootDirectories") ) { outValue = getRootDirectories_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createTempDirectory") ) { outValue = createTempDirectory_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_applicationDirectory() ); return true; } }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { outValue = get_desktopDirectory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_workingDirectory") ) { outValue = get_workingDirectory_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { outValue = get_documentsDirectory_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { outValue = get_applicationDirectory_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_applicationStorageDirectory() ); return true; } }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { outValue = get_applicationStorageDirectory_dyn(); return true; }
	}
	return false;
}

::hx::Val File_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { icon=inValue.Cast<  ::openfl::desktop::Icon >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__sep") ) { _hx___sep=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nativePath") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_nativePath(inValue.Cast< ::String >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fileDialog") ) { _hx___fileDialog=inValue.Cast<  ::lime::ui::FileDialog >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fileWorker") ) { _hx___fileWorker=inValue.Cast<  ::lime::_hx_system::BackgroundWorker >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__fileStatsDirty") ) { _hx___fileStatsDirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool File_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__driveLetters") ) { _hx___driveLetters=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void File_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("exists",dc,1d,e0,bf));
	outFields->push(HX_("icon",79,e7,b2,45));
	outFields->push(HX_("isDirectory",23,a9,c5,ee));
	outFields->push(HX_("isHidden",f4,9a,ff,a4));
	outFields->push(HX_("nativePath",dc,f2,61,11));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("url",6f,2b,59,00));
	outFields->push(HX_("__fileDialog",84,c7,4a,ca));
	outFields->push(HX_("__fileWorker",3a,f3,b5,e2));
	outFields->push(HX_("__sep",7e,fc,33,f2));
	outFields->push(HX_("__fileStatsDirty",2f,8a,2c,cf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo File_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::desktop::Icon */ ,(int)offsetof(File_obj,icon),HX_("icon",79,e7,b2,45)},
	{::hx::fsObject /*  ::lime::ui::FileDialog */ ,(int)offsetof(File_obj,_hx___fileDialog),HX_("__fileDialog",84,c7,4a,ca)},
	{::hx::fsObject /*  ::lime::_hx_system::BackgroundWorker */ ,(int)offsetof(File_obj,_hx___fileWorker),HX_("__fileWorker",3a,f3,b5,e2)},
	{::hx::fsString,(int)offsetof(File_obj,_hx___sep),HX_("__sep",7e,fc,33,f2)},
	{::hx::fsBool,(int)offsetof(File_obj,_hx___fileStatsDirty),HX_("__fileStatsDirty",2f,8a,2c,cf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo File_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &File_obj::_hx___driveLetters,HX_("__driveLetters",03,74,2b,af)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String File_obj_sMemberFields[] = {
	HX_("icon",79,e7,b2,45),
	HX_("__fileDialog",84,c7,4a,ca),
	HX_("__fileWorker",3a,f3,b5,e2),
	HX_("__sep",7e,fc,33,f2),
	HX_("__fileStatsDirty",2f,8a,2c,cf),
	HX_("browse",8a,dd,60,1c),
	HX_("browseForDirectory",ce,b2,85,20),
	HX_("browseForOpen",09,1f,0d,2a),
	HX_("browseForOpenMultiple",39,6e,7f,99),
	HX_("browseForSave",7c,a6,a6,2c),
	HX_("cancel",7a,ed,33,b8),
	HX_("canonicalize",e0,ef,da,b0),
	HX_("clone",5d,13,63,48),
	HX_("copyTo",90,1c,33,c9),
	HX_("copyToAsync",8c,c8,d6,48),
	HX_("createDirectory",d1,ab,39,b1),
	HX_("deleteDirectory",c2,34,a9,52),
	HX_("deleteDirectoryAsync",1a,bb,21,42),
	HX_("deleteFile",47,ac,08,97),
	HX_("deleteFileAsync",75,e1,c9,6a),
	HX_("getDirectoryListing",0d,f5,a7,dc),
	HX_("getDirectoryListingAsync",ef,0a,6f,41),
	HX_("getRelativePath",47,7a,b6,d2),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("moveToAsync",b0,84,3e,cb),
	HX_("openWithDefaultApplication",1f,03,d4,96),
	HX_("resolvePath",b1,0a,8d,e5),
	HX_("__canonicalize",00,73,9b,d1),
	HX_("__dispatchCancel",f4,82,d2,27),
	HX_("__dispatchSelect",76,b0,d1,d9),
	HX_("__dispatchSelectMultiple",a6,b4,86,3a),
	HX_("__createIoErrorEvent",f4,0a,c0,92),
	HX_("__formatPath",9c,83,4a,42),
	HX_("__getFilterTypes",cb,a3,5b,86),
	HX_("__replaceWindowsEnvVars",2a,2e,37,ac),
	HX_("__winGetHiddenAttr",55,fb,ce,85),
	HX_("__updateFileStats",9a,17,18,59),
	HX_("get_creationDate",76,f2,a2,7d),
	HX_("get_modificationDate",b3,d0,89,64),
	HX_("get_name",d4,2d,ba,c8),
	HX_("get_size",4a,5c,0e,cc),
	HX_("get_type",43,ae,c3,cc),
	HX_("get_nativePath",25,7b,57,87),
	HX_("set_nativePath",99,63,77,a7),
	HX_("get_url",06,f4,cd,26),
	HX_("get_exists",a5,8d,67,b0),
	HX_("get_isHidden",fd,4e,19,5a),
	HX_("get_isDirectory",ba,60,a7,af),
	HX_("get_parent",f3,74,05,de),
	::String(null()) };

static void File_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(File_obj::_hx___driveLetters,"__driveLetters");
};

#ifdef HXCPP_VISIT_ALLOCS
static void File_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(File_obj::_hx___driveLetters,"__driveLetters");
};

#endif

::hx::Class File_obj::__mClass;

static ::String File_obj_sStaticFields[] = {
	HX_("__driveLetters",03,74,2b,af),
	HX_("createTempDirectory",1d,48,76,1d),
	HX_("createTempFile",cc,56,6a,e5),
	HX_("getRootDirectories",13,f5,8c,c2),
	HX_("__getTempPath",6f,f2,31,08),
	HX_("get_applicationDirectory",86,5a,0d,68),
	HX_("get_applicationStorageDirectory",b9,70,86,8d),
	HX_("get_documentsDirectory",9e,23,49,90),
	HX_("get_desktopDirectory",fa,d5,ab,cd),
	HX_("get_userDirectory",f9,29,69,9b),
	HX_("get_workingDirectory",85,75,af,8e),
	HX_("get_lineEnding",44,27,26,45),
	HX_("get_separator",3c,34,e3,f2),
	::String(null())
};

void File_obj::__register()
{
	File_obj _hx_dummy;
	File_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.filesystem.File",a1,82,f8,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &File_obj::__GetStatic;
	__mClass->mSetStaticField = &File_obj::__SetStatic;
	__mClass->mMarkFunc = File_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(File_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(File_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< File_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = File_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = File_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = File_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void File_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_19861550b6f626f4_429_boot)
HXDLIN( 429)		_hx___driveLetters = ::Array_obj< ::String >::fromData( _hx_array_data_f6f882a1_92,26);
            	}
}

} // end namespace openfl
} // end namespace filesystem
