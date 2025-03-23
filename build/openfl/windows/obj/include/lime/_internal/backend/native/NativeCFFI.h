#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#define INCLUDED_lime__internal_backend_native_NativeCFFI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeCFFI)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeCFFI_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NativeCFFI_obj OBJ_;
		NativeCFFI_obj();

	public:
		enum { _hx_ClassId = 0x7e459dfd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.backend.native.NativeCFFI")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.backend.native.NativeCFFI"); }

		inline static ::hx::ObjectPtr< NativeCFFI_obj > __new() {
			::hx::ObjectPtr< NativeCFFI_obj > __this = new NativeCFFI_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NativeCFFI_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NativeCFFI_obj *__this = (NativeCFFI_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeCFFI_obj), false, "lime._internal.backend.native.NativeCFFI"));
			*(void **)__this = NativeCFFI_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeCFFI_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NativeCFFI",dd,8b,66,ff); }

		static void __boot();
		static ::cpp::Function<  ::hx::Object *  () > lime_application_create;
		static Dynamic lime_application_create_dyn() { return lime_application_create;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_application_event_manager_register;
		static Dynamic lime_application_event_manager_register_dyn() { return lime_application_event_manager_register;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_application_exec;
		static Dynamic lime_application_exec_dyn() { return lime_application_exec;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_application_init;
		static Dynamic lime_application_init_dyn() { return lime_application_init;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_application_quit;
		static Dynamic lime_application_quit_dyn() { return lime_application_quit;}
		static ::cpp::Function< void  ( ::hx::Object *,Float) > lime_application_set_frame_rate;
		static Dynamic lime_application_set_frame_rate_dyn() { return lime_application_set_frame_rate;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_application_update;
		static Dynamic lime_application_update_dyn() { return lime_application_update;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_audio_load;
		static Dynamic lime_audio_load_dyn() { return lime_audio_load;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_audio_load_bytes;
		static Dynamic lime_audio_load_bytes_dyn() { return lime_audio_load_bytes;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_audio_load_file;
		static Dynamic lime_audio_load_file_dyn() { return lime_audio_load_file;}
		static ::cpp::Function<  ::hx::Object *  (Float,int, ::hx::Object *) > lime_bytes_from_data_pointer;
		static Dynamic lime_bytes_from_data_pointer_dyn() { return lime_bytes_from_data_pointer;}
		static ::cpp::Function< Float  ( ::hx::Object *) > lime_bytes_get_data_pointer;
		static Dynamic lime_bytes_get_data_pointer_dyn() { return lime_bytes_get_data_pointer;}
		static ::cpp::Function< Float  ( ::hx::Object *,int) > lime_bytes_get_data_pointer_offset;
		static Dynamic lime_bytes_get_data_pointer_offset_dyn() { return lime_bytes_get_data_pointer_offset;}
		static ::cpp::Function<  ::hx::Object *  (::String, ::hx::Object *) > lime_bytes_read_file;
		static Dynamic lime_bytes_read_file_dyn() { return lime_bytes_read_file;}
		static ::cpp::Function< Float  ( ::hx::Object *) > lime_cffi_get_native_pointer;
		static Dynamic lime_cffi_get_native_pointer_dyn() { return lime_cffi_get_native_pointer;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_clipboard_event_manager_register;
		static Dynamic lime_clipboard_event_manager_register_dyn() { return lime_clipboard_event_manager_register;}
		static ::cpp::Function<  ::hx::Object *  () > lime_clipboard_get_text;
		static Dynamic lime_clipboard_get_text_dyn() { return lime_clipboard_get_text;}
		static ::cpp::Function< void  (::String) > lime_clipboard_set_text;
		static Dynamic lime_clipboard_set_text_dyn() { return lime_clipboard_set_text;}
		static ::cpp::Function< Float  (Float,int) > lime_data_pointer_offset;
		static Dynamic lime_data_pointer_offset_dyn() { return lime_data_pointer_offset;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_deflate_compress;
		static Dynamic lime_deflate_compress_dyn() { return lime_deflate_compress;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_deflate_decompress;
		static Dynamic lime_deflate_decompress_dyn() { return lime_deflate_decompress;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_drop_event_manager_register;
		static Dynamic lime_drop_event_manager_register_dyn() { return lime_drop_event_manager_register;}
		static ::cpp::Function<  ::hx::Object *  (::String,::String,::String) > lime_file_dialog_open_directory;
		static Dynamic lime_file_dialog_open_directory_dyn() { return lime_file_dialog_open_directory;}
		static ::cpp::Function<  ::hx::Object *  (::String,::String,::String) > lime_file_dialog_open_file;
		static Dynamic lime_file_dialog_open_file_dyn() { return lime_file_dialog_open_file;}
		static ::cpp::Function<  ::hx::Object *  (::String,::String,::String) > lime_file_dialog_open_files;
		static Dynamic lime_file_dialog_open_files_dyn() { return lime_file_dialog_open_files;}
		static ::cpp::Function<  ::hx::Object *  (::String,::String,::String) > lime_file_dialog_save_file;
		static Dynamic lime_file_dialog_save_file_dyn() { return lime_file_dialog_save_file;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_file_watcher_create;
		static Dynamic lime_file_watcher_create_dyn() { return lime_file_watcher_create;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *,bool) > lime_file_watcher_add_directory;
		static Dynamic lime_file_watcher_add_directory_dyn() { return lime_file_watcher_add_directory;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_file_watcher_remove_directory;
		static Dynamic lime_file_watcher_remove_directory_dyn() { return lime_file_watcher_remove_directory;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_file_watcher_update;
		static Dynamic lime_file_watcher_update_dyn() { return lime_file_watcher_update;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_font_get_ascender;
		static Dynamic lime_font_get_ascender_dyn() { return lime_font_get_ascender;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_font_get_descender;
		static Dynamic lime_font_get_descender_dyn() { return lime_font_get_descender;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_font_get_family_name;
		static Dynamic lime_font_get_family_name_dyn() { return lime_font_get_family_name;}
		static ::cpp::Function< int  ( ::hx::Object *,::String) > lime_font_get_glyph_index;
		static Dynamic lime_font_get_glyph_index_dyn() { return lime_font_get_glyph_index;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,::String) > lime_font_get_glyph_indices;
		static Dynamic lime_font_get_glyph_indices_dyn() { return lime_font_get_glyph_indices;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_font_get_glyph_metrics;
		static Dynamic lime_font_get_glyph_metrics_dyn() { return lime_font_get_glyph_metrics;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_font_get_height;
		static Dynamic lime_font_get_height_dyn() { return lime_font_get_height;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_font_get_num_glyphs;
		static Dynamic lime_font_get_num_glyphs_dyn() { return lime_font_get_num_glyphs;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_font_get_underline_position;
		static Dynamic lime_font_get_underline_position_dyn() { return lime_font_get_underline_position;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_font_get_underline_thickness;
		static Dynamic lime_font_get_underline_thickness_dyn() { return lime_font_get_underline_thickness;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_font_get_units_per_em;
		static Dynamic lime_font_get_units_per_em_dyn() { return lime_font_get_units_per_em;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_font_load;
		static Dynamic lime_font_load_dyn() { return lime_font_load;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_font_load_bytes;
		static Dynamic lime_font_load_bytes_dyn() { return lime_font_load_bytes;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_font_load_file;
		static Dynamic lime_font_load_file_dyn() { return lime_font_load_file;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_font_outline_decompose;
		static Dynamic lime_font_outline_decompose_dyn() { return lime_font_outline_decompose;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int, ::hx::Object *) > lime_font_render_glyph;
		static Dynamic lime_font_render_glyph_dyn() { return lime_font_render_glyph;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *, ::hx::Object *) > lime_font_render_glyphs;
		static Dynamic lime_font_render_glyphs_dyn() { return lime_font_render_glyphs;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int) > lime_font_set_size;
		static Dynamic lime_font_set_size_dyn() { return lime_font_set_size;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_gamepad_add_mappings;
		static Dynamic lime_gamepad_add_mappings_dyn() { return lime_gamepad_add_mappings;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_gamepad_get_device_guid;
		static Dynamic lime_gamepad_get_device_guid_dyn() { return lime_gamepad_get_device_guid;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_gamepad_get_device_name;
		static Dynamic lime_gamepad_get_device_name_dyn() { return lime_gamepad_get_device_name;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_gamepad_event_manager_register;
		static Dynamic lime_gamepad_event_manager_register_dyn() { return lime_gamepad_event_manager_register;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_gzip_compress;
		static Dynamic lime_gzip_compress_dyn() { return lime_gzip_compress;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_gzip_decompress;
		static Dynamic lime_gzip_decompress_dyn() { return lime_gzip_decompress;}
		static ::cpp::Function< void  (int,int) > lime_haptic_vibrate;
		static Dynamic lime_haptic_vibrate_dyn() { return lime_haptic_vibrate;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int,int, ::hx::Object *) > lime_image_encode;
		static Dynamic lime_image_encode_dyn() { return lime_image_encode;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_image_load;
		static Dynamic lime_image_load_dyn() { return lime_image_load;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_image_load_bytes;
		static Dynamic lime_image_load_bytes_dyn() { return lime_image_load_bytes;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_image_load_file;
		static Dynamic lime_image_load_file_dyn() { return lime_image_load_file;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *, ::hx::Object *) > lime_image_data_util_color_transform;
		static Dynamic lime_image_data_util_color_transform_dyn() { return lime_image_data_util_color_transform;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *, ::hx::Object *, ::hx::Object *,int,int) > lime_image_data_util_copy_channel;
		static Dynamic lime_image_data_util_copy_channel_dyn() { return lime_image_data_util_copy_channel;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *, ::hx::Object *, ::hx::Object *, ::hx::Object *, ::hx::Object *,bool) > lime_image_data_util_copy_pixels;
		static Dynamic lime_image_data_util_copy_pixels_dyn() { return lime_image_data_util_copy_pixels;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *,int,int) > lime_image_data_util_fill_rect;
		static Dynamic lime_image_data_util_fill_rect_dyn() { return lime_image_data_util_fill_rect;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int,int,int) > lime_image_data_util_flood_fill;
		static Dynamic lime_image_data_util_flood_fill_dyn() { return lime_image_data_util_flood_fill;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *,int, ::hx::Object *) > lime_image_data_util_get_pixels;
		static Dynamic lime_image_data_util_get_pixels_dyn() { return lime_image_data_util_get_pixels;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *, ::hx::Object *, ::hx::Object *,int,int,int,int) > lime_image_data_util_merge;
		static Dynamic lime_image_data_util_merge_dyn() { return lime_image_data_util_merge;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_image_data_util_multiply_alpha;
		static Dynamic lime_image_data_util_multiply_alpha_dyn() { return lime_image_data_util_multiply_alpha;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *,int,int) > lime_image_data_util_resize;
		static Dynamic lime_image_data_util_resize_dyn() { return lime_image_data_util_resize;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_image_data_util_set_format;
		static Dynamic lime_image_data_util_set_format_dyn() { return lime_image_data_util_set_format;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *, ::hx::Object *,int,int,int) > lime_image_data_util_set_pixels;
		static Dynamic lime_image_data_util_set_pixels_dyn() { return lime_image_data_util_set_pixels;}
		static ::cpp::Function< int  ( ::hx::Object *, ::hx::Object *, ::hx::Object *, ::hx::Object *,int,int,int,int,int,int,int,bool) > lime_image_data_util_threshold;
		static Dynamic lime_image_data_util_threshold_dyn() { return lime_image_data_util_threshold;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_image_data_util_unmultiply_alpha;
		static Dynamic lime_image_data_util_unmultiply_alpha_dyn() { return lime_image_data_util_unmultiply_alpha;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_joystick_get_device_guid;
		static Dynamic lime_joystick_get_device_guid_dyn() { return lime_joystick_get_device_guid;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_joystick_get_device_name;
		static Dynamic lime_joystick_get_device_name_dyn() { return lime_joystick_get_device_name;}
		static ::cpp::Function< int  (int) > lime_joystick_get_num_axes;
		static Dynamic lime_joystick_get_num_axes_dyn() { return lime_joystick_get_num_axes;}
		static ::cpp::Function< int  (int) > lime_joystick_get_num_buttons;
		static Dynamic lime_joystick_get_num_buttons_dyn() { return lime_joystick_get_num_buttons;}
		static ::cpp::Function< int  (int) > lime_joystick_get_num_hats;
		static Dynamic lime_joystick_get_num_hats_dyn() { return lime_joystick_get_num_hats;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_joystick_event_manager_register;
		static Dynamic lime_joystick_event_manager_register_dyn() { return lime_joystick_event_manager_register;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,bool, ::hx::Object *) > lime_jpeg_decode_bytes;
		static Dynamic lime_jpeg_decode_bytes_dyn() { return lime_jpeg_decode_bytes;}
		static ::cpp::Function<  ::hx::Object *  (::String,bool, ::hx::Object *) > lime_jpeg_decode_file;
		static Dynamic lime_jpeg_decode_file_dyn() { return lime_jpeg_decode_file;}
		static ::cpp::Function< float  (float) > lime_key_code_from_scan_code;
		static Dynamic lime_key_code_from_scan_code_dyn() { return lime_key_code_from_scan_code;}
		static ::cpp::Function< float  (float) > lime_key_code_to_scan_code;
		static Dynamic lime_key_code_to_scan_code_dyn() { return lime_key_code_to_scan_code;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_key_event_manager_register;
		static Dynamic lime_key_event_manager_register_dyn() { return lime_key_event_manager_register;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_lzma_compress;
		static Dynamic lime_lzma_compress_dyn() { return lime_lzma_compress;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_lzma_decompress;
		static Dynamic lime_lzma_decompress_dyn() { return lime_lzma_decompress;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_mouse_event_manager_register;
		static Dynamic lime_mouse_event_manager_register_dyn() { return lime_mouse_event_manager_register;}
		static ::cpp::Function< void  (::String) > lime_neko_execute;
		static Dynamic lime_neko_execute_dyn() { return lime_neko_execute;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,bool, ::hx::Object *) > lime_png_decode_bytes;
		static Dynamic lime_png_decode_bytes_dyn() { return lime_png_decode_bytes;}
		static ::cpp::Function<  ::hx::Object *  (::String,bool, ::hx::Object *) > lime_png_decode_file;
		static Dynamic lime_png_decode_file_dyn() { return lime_png_decode_file;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_render_event_manager_register;
		static Dynamic lime_render_event_manager_register_dyn() { return lime_render_event_manager_register;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_sensor_event_manager_register;
		static Dynamic lime_sensor_event_manager_register_dyn() { return lime_sensor_event_manager_register;}
		static ::cpp::Function< bool  () > lime_system_get_allow_screen_timeout;
		static Dynamic lime_system_get_allow_screen_timeout_dyn() { return lime_system_get_allow_screen_timeout;}
		static ::cpp::Function< bool  (bool) > lime_system_set_allow_screen_timeout;
		static Dynamic lime_system_set_allow_screen_timeout_dyn() { return lime_system_set_allow_screen_timeout;}
		static ::cpp::Function<  ::hx::Object *  () > lime_system_get_device_model;
		static Dynamic lime_system_get_device_model_dyn() { return lime_system_get_device_model;}
		static ::cpp::Function<  ::hx::Object *  () > lime_system_get_device_vendor;
		static Dynamic lime_system_get_device_vendor_dyn() { return lime_system_get_device_vendor;}
		static ::cpp::Function<  ::hx::Object *  (int,::String,::String) > lime_system_get_directory;
		static Dynamic lime_system_get_directory_dyn() { return lime_system_get_directory;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_system_get_display;
		static Dynamic lime_system_get_display_dyn() { return lime_system_get_display;}
		static ::cpp::Function< bool  () > lime_system_get_ios_tablet;
		static Dynamic lime_system_get_ios_tablet_dyn() { return lime_system_get_ios_tablet;}
		static ::cpp::Function< int  () > lime_system_get_num_displays;
		static Dynamic lime_system_get_num_displays_dyn() { return lime_system_get_num_displays;}
		static ::cpp::Function<  ::hx::Object *  () > lime_system_get_platform_label;
		static Dynamic lime_system_get_platform_label_dyn() { return lime_system_get_platform_label;}
		static ::cpp::Function<  ::hx::Object *  () > lime_system_get_platform_name;
		static Dynamic lime_system_get_platform_name_dyn() { return lime_system_get_platform_name;}
		static ::cpp::Function<  ::hx::Object *  () > lime_system_get_platform_version;
		static Dynamic lime_system_get_platform_version_dyn() { return lime_system_get_platform_version;}
		static ::cpp::Function< Float  () > lime_system_get_timer;
		static Dynamic lime_system_get_timer_dyn() { return lime_system_get_timer;}
		static ::cpp::Function< void  (::String) > lime_system_open_file;
		static Dynamic lime_system_open_file_dyn() { return lime_system_open_file;}
		static ::cpp::Function< void  (::String,::String) > lime_system_open_url;
		static Dynamic lime_system_open_url_dyn() { return lime_system_open_url;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_text_event_manager_register;
		static Dynamic lime_text_event_manager_register_dyn() { return lime_text_event_manager_register;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_touch_event_manager_register;
		static Dynamic lime_touch_event_manager_register_dyn() { return lime_touch_event_manager_register;}
		static ::cpp::Function< void  ( ::hx::Object *,::String,::String) > lime_window_alert;
		static Dynamic lime_window_alert_dyn() { return lime_window_alert;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_window_close;
		static Dynamic lime_window_close_dyn() { return lime_window_close;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_window_context_flip;
		static Dynamic lime_window_context_flip_dyn() { return lime_window_context_flip;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_window_context_lock;
		static Dynamic lime_window_context_lock_dyn() { return lime_window_context_lock;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_window_context_make_current;
		static Dynamic lime_window_context_make_current_dyn() { return lime_window_context_make_current;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_window_context_unlock;
		static Dynamic lime_window_context_unlock_dyn() { return lime_window_context_unlock;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int,int,int,::String) > lime_window_create;
		static Dynamic lime_window_create_dyn() { return lime_window_create;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_window_focus;
		static Dynamic lime_window_focus_dyn() { return lime_window_focus;}
		static ::cpp::Function< Float  ( ::hx::Object *) > lime_window_get_context;
		static Dynamic lime_window_get_context_dyn() { return lime_window_get_context;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_window_get_context_type;
		static Dynamic lime_window_get_context_type_dyn() { return lime_window_get_context_type;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_window_get_display;
		static Dynamic lime_window_get_display_dyn() { return lime_window_get_display;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_window_get_display_mode;
		static Dynamic lime_window_get_display_mode_dyn() { return lime_window_get_display_mode;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_window_get_height;
		static Dynamic lime_window_get_height_dyn() { return lime_window_get_height;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_window_get_id;
		static Dynamic lime_window_get_id_dyn() { return lime_window_get_id;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_window_get_mouse_lock;
		static Dynamic lime_window_get_mouse_lock_dyn() { return lime_window_get_mouse_lock;}
		static ::cpp::Function< Float  ( ::hx::Object *) > lime_window_get_opacity;
		static Dynamic lime_window_get_opacity_dyn() { return lime_window_get_opacity;}
		static ::cpp::Function< Float  ( ::hx::Object *) > lime_window_get_scale;
		static Dynamic lime_window_get_scale_dyn() { return lime_window_get_scale;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_window_get_text_input_enabled;
		static Dynamic lime_window_get_text_input_enabled_dyn() { return lime_window_get_text_input_enabled;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_window_get_width;
		static Dynamic lime_window_get_width_dyn() { return lime_window_get_width;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_window_get_x;
		static Dynamic lime_window_get_x_dyn() { return lime_window_get_x;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_window_get_y;
		static Dynamic lime_window_get_y_dyn() { return lime_window_get_y;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int) > lime_window_move;
		static Dynamic lime_window_move_dyn() { return lime_window_move;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *, ::hx::Object *) > lime_window_read_pixels;
		static Dynamic lime_window_read_pixels_dyn() { return lime_window_read_pixels;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int) > lime_window_resize;
		static Dynamic lime_window_resize_dyn() { return lime_window_resize;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int) > lime_window_set_minimum_size;
		static Dynamic lime_window_set_minimum_size_dyn() { return lime_window_set_minimum_size;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int) > lime_window_set_maximum_size;
		static Dynamic lime_window_set_maximum_size_dyn() { return lime_window_set_maximum_size;}
		static ::cpp::Function< bool  ( ::hx::Object *,bool) > lime_window_set_borderless;
		static Dynamic lime_window_set_borderless_dyn() { return lime_window_set_borderless;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_window_set_cursor;
		static Dynamic lime_window_set_cursor_dyn() { return lime_window_set_cursor;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_window_set_display_mode;
		static Dynamic lime_window_set_display_mode_dyn() { return lime_window_set_display_mode;}
		static ::cpp::Function< bool  ( ::hx::Object *,bool) > lime_window_set_fullscreen;
		static Dynamic lime_window_set_fullscreen_dyn() { return lime_window_set_fullscreen;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_window_set_icon;
		static Dynamic lime_window_set_icon_dyn() { return lime_window_set_icon;}
		static ::cpp::Function< bool  ( ::hx::Object *,bool) > lime_window_set_maximized;
		static Dynamic lime_window_set_maximized_dyn() { return lime_window_set_maximized;}
		static ::cpp::Function< bool  ( ::hx::Object *,bool) > lime_window_set_minimized;
		static Dynamic lime_window_set_minimized_dyn() { return lime_window_set_minimized;}
		static ::cpp::Function< void  ( ::hx::Object *,bool) > lime_window_set_mouse_lock;
		static Dynamic lime_window_set_mouse_lock_dyn() { return lime_window_set_mouse_lock;}
		static ::cpp::Function< void  ( ::hx::Object *,Float) > lime_window_set_opacity;
		static Dynamic lime_window_set_opacity_dyn() { return lime_window_set_opacity;}
		static ::cpp::Function< bool  ( ::hx::Object *,bool) > lime_window_set_resizable;
		static Dynamic lime_window_set_resizable_dyn() { return lime_window_set_resizable;}
		static ::cpp::Function< void  ( ::hx::Object *,bool) > lime_window_set_text_input_enabled;
		static Dynamic lime_window_set_text_input_enabled_dyn() { return lime_window_set_text_input_enabled;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_window_set_text_input_rect;
		static Dynamic lime_window_set_text_input_rect_dyn() { return lime_window_set_text_input_rect;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,::String) > lime_window_set_title;
		static Dynamic lime_window_set_title_dyn() { return lime_window_set_title;}
		static ::cpp::Function< bool  ( ::hx::Object *,bool) > lime_window_set_visible;
		static Dynamic lime_window_set_visible_dyn() { return lime_window_set_visible;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int,int) > lime_window_warp_mouse;
		static Dynamic lime_window_warp_mouse_dyn() { return lime_window_warp_mouse;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_window_event_manager_register;
		static Dynamic lime_window_event_manager_register_dyn() { return lime_window_event_manager_register;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_zlib_compress;
		static Dynamic lime_zlib_compress_dyn() { return lime_zlib_compress;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_zlib_decompress;
		static Dynamic lime_zlib_decompress_dyn() { return lime_zlib_decompress;}
		static ::cpp::Function< void  ( ::hx::Object *,int, ::hx::Object *,int,int) > lime_al_buffer_data;
		static Dynamic lime_al_buffer_data_dyn() { return lime_al_buffer_data;}
		static ::cpp::Function< void  ( ::hx::Object *,int,float,float,float) > lime_al_buffer3f;
		static Dynamic lime_al_buffer3f_dyn() { return lime_al_buffer3f;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int,int,int) > lime_al_buffer3i;
		static Dynamic lime_al_buffer3i_dyn() { return lime_al_buffer3i;}
		static ::cpp::Function< void  ( ::hx::Object *,int,float) > lime_al_bufferf;
		static Dynamic lime_al_bufferf_dyn() { return lime_al_bufferf;}
		static ::cpp::Function< void  ( ::hx::Object *,int, ::hx::Object *) > lime_al_bufferfv;
		static Dynamic lime_al_bufferfv_dyn() { return lime_al_bufferfv;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int) > lime_al_bufferi;
		static Dynamic lime_al_bufferi_dyn() { return lime_al_bufferi;}
		static ::cpp::Function< void  ( ::hx::Object *,int, ::hx::Object *) > lime_al_bufferiv;
		static Dynamic lime_al_bufferiv_dyn() { return lime_al_bufferiv;}
		static ::cpp::Function< void  () > lime_al_cleanup;
		static Dynamic lime_al_cleanup_dyn() { return lime_al_cleanup;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_al_delete_buffer;
		static Dynamic lime_al_delete_buffer_dyn() { return lime_al_delete_buffer;}
		static ::cpp::Function< void  (int, ::hx::Object *) > lime_al_delete_buffers;
		static Dynamic lime_al_delete_buffers_dyn() { return lime_al_delete_buffers;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_al_delete_source;
		static Dynamic lime_al_delete_source_dyn() { return lime_al_delete_source;}
		static ::cpp::Function< void  (int, ::hx::Object *) > lime_al_delete_sources;
		static Dynamic lime_al_delete_sources_dyn() { return lime_al_delete_sources;}
		static ::cpp::Function< void  (int) > lime_al_disable;
		static Dynamic lime_al_disable_dyn() { return lime_al_disable;}
		static ::cpp::Function< void  (int) > lime_al_distance_model;
		static Dynamic lime_al_distance_model_dyn() { return lime_al_distance_model;}
		static ::cpp::Function< void  (float) > lime_al_doppler_factor;
		static Dynamic lime_al_doppler_factor_dyn() { return lime_al_doppler_factor;}
		static ::cpp::Function< void  (float) > lime_al_doppler_velocity;
		static Dynamic lime_al_doppler_velocity_dyn() { return lime_al_doppler_velocity;}
		static ::cpp::Function< void  (int) > lime_al_enable;
		static Dynamic lime_al_enable_dyn() { return lime_al_enable;}
		static ::cpp::Function<  ::hx::Object *  () > lime_al_gen_source;
		static Dynamic lime_al_gen_source_dyn() { return lime_al_gen_source;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_al_gen_sources;
		static Dynamic lime_al_gen_sources_dyn() { return lime_al_gen_sources;}
		static ::cpp::Function< bool  (int) > lime_al_get_boolean;
		static Dynamic lime_al_get_boolean_dyn() { return lime_al_get_boolean;}
		static ::cpp::Function<  ::hx::Object *  (int,int) > lime_al_get_booleanv;
		static Dynamic lime_al_get_booleanv_dyn() { return lime_al_get_booleanv;}
		static ::cpp::Function<  ::hx::Object *  () > lime_al_gen_buffer;
		static Dynamic lime_al_gen_buffer_dyn() { return lime_al_gen_buffer;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_al_gen_buffers;
		static Dynamic lime_al_gen_buffers_dyn() { return lime_al_gen_buffers;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_al_get_buffer3f;
		static Dynamic lime_al_get_buffer3f_dyn() { return lime_al_get_buffer3f;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_al_get_buffer3i;
		static Dynamic lime_al_get_buffer3i_dyn() { return lime_al_get_buffer3i;}
		static ::cpp::Function< float  ( ::hx::Object *,int) > lime_al_get_bufferf;
		static Dynamic lime_al_get_bufferf_dyn() { return lime_al_get_bufferf;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int,int) > lime_al_get_bufferfv;
		static Dynamic lime_al_get_bufferfv_dyn() { return lime_al_get_bufferfv;}
		static ::cpp::Function< int  ( ::hx::Object *,int) > lime_al_get_bufferi;
		static Dynamic lime_al_get_bufferi_dyn() { return lime_al_get_bufferi;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int,int) > lime_al_get_bufferiv;
		static Dynamic lime_al_get_bufferiv_dyn() { return lime_al_get_bufferiv;}
		static ::cpp::Function< Float  (int) > lime_al_get_double;
		static Dynamic lime_al_get_double_dyn() { return lime_al_get_double;}
		static ::cpp::Function<  ::hx::Object *  (int,int) > lime_al_get_doublev;
		static Dynamic lime_al_get_doublev_dyn() { return lime_al_get_doublev;}
		static ::cpp::Function< int  (::String) > lime_al_get_enum_value;
		static Dynamic lime_al_get_enum_value_dyn() { return lime_al_get_enum_value;}
		static ::cpp::Function< int  () > lime_al_get_error;
		static Dynamic lime_al_get_error_dyn() { return lime_al_get_error;}
		static ::cpp::Function< float  (int) > lime_al_get_float;
		static Dynamic lime_al_get_float_dyn() { return lime_al_get_float;}
		static ::cpp::Function<  ::hx::Object *  (int,int) > lime_al_get_floatv;
		static Dynamic lime_al_get_floatv_dyn() { return lime_al_get_floatv;}
		static ::cpp::Function< int  (int) > lime_al_get_integer;
		static Dynamic lime_al_get_integer_dyn() { return lime_al_get_integer;}
		static ::cpp::Function<  ::hx::Object *  (int,int) > lime_al_get_integerv;
		static Dynamic lime_al_get_integerv_dyn() { return lime_al_get_integerv;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_al_get_listener3f;
		static Dynamic lime_al_get_listener3f_dyn() { return lime_al_get_listener3f;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_al_get_listener3i;
		static Dynamic lime_al_get_listener3i_dyn() { return lime_al_get_listener3i;}
		static ::cpp::Function< float  (int) > lime_al_get_listenerf;
		static Dynamic lime_al_get_listenerf_dyn() { return lime_al_get_listenerf;}
		static ::cpp::Function<  ::hx::Object *  (int,int) > lime_al_get_listenerfv;
		static Dynamic lime_al_get_listenerfv_dyn() { return lime_al_get_listenerfv;}
		static ::cpp::Function< int  (int) > lime_al_get_listeneri;
		static Dynamic lime_al_get_listeneri_dyn() { return lime_al_get_listeneri;}
		static ::cpp::Function<  ::hx::Object *  (int,int) > lime_al_get_listeneriv;
		static Dynamic lime_al_get_listeneriv_dyn() { return lime_al_get_listeneriv;}
		static ::cpp::Function< Float  (::String) > lime_al_get_proc_address;
		static Dynamic lime_al_get_proc_address_dyn() { return lime_al_get_proc_address;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_al_get_source3f;
		static Dynamic lime_al_get_source3f_dyn() { return lime_al_get_source3f;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_al_get_source3i;
		static Dynamic lime_al_get_source3i_dyn() { return lime_al_get_source3i;}
		static ::cpp::Function< float  ( ::hx::Object *,int) > lime_al_get_sourcef;
		static Dynamic lime_al_get_sourcef_dyn() { return lime_al_get_sourcef;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int,int) > lime_al_get_sourcefv;
		static Dynamic lime_al_get_sourcefv_dyn() { return lime_al_get_sourcefv;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_al_get_sourcei;
		static Dynamic lime_al_get_sourcei_dyn() { return lime_al_get_sourcei;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int,int) > lime_al_get_sourceiv;
		static Dynamic lime_al_get_sourceiv_dyn() { return lime_al_get_sourceiv;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_al_get_string;
		static Dynamic lime_al_get_string_dyn() { return lime_al_get_string;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_al_is_buffer;
		static Dynamic lime_al_is_buffer_dyn() { return lime_al_is_buffer;}
		static ::cpp::Function< bool  (int) > lime_al_is_enabled;
		static Dynamic lime_al_is_enabled_dyn() { return lime_al_is_enabled;}
		static ::cpp::Function< bool  (::String) > lime_al_is_extension_present;
		static Dynamic lime_al_is_extension_present_dyn() { return lime_al_is_extension_present;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_al_is_source;
		static Dynamic lime_al_is_source_dyn() { return lime_al_is_source;}
		static ::cpp::Function< void  (int,float,float,float) > lime_al_listener3f;
		static Dynamic lime_al_listener3f_dyn() { return lime_al_listener3f;}
		static ::cpp::Function< void  (int,int,int,int) > lime_al_listener3i;
		static Dynamic lime_al_listener3i_dyn() { return lime_al_listener3i;}
		static ::cpp::Function< void  (int,float) > lime_al_listenerf;
		static Dynamic lime_al_listenerf_dyn() { return lime_al_listenerf;}
		static ::cpp::Function< void  (int, ::hx::Object *) > lime_al_listenerfv;
		static Dynamic lime_al_listenerfv_dyn() { return lime_al_listenerfv;}
		static ::cpp::Function< void  (int,int) > lime_al_listeneri;
		static Dynamic lime_al_listeneri_dyn() { return lime_al_listeneri;}
		static ::cpp::Function< void  (int, ::hx::Object *) > lime_al_listeneriv;
		static Dynamic lime_al_listeneriv_dyn() { return lime_al_listeneriv;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_al_source_pause;
		static Dynamic lime_al_source_pause_dyn() { return lime_al_source_pause;}
		static ::cpp::Function< void  (int, ::hx::Object *) > lime_al_source_pausev;
		static Dynamic lime_al_source_pausev_dyn() { return lime_al_source_pausev;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_al_source_play;
		static Dynamic lime_al_source_play_dyn() { return lime_al_source_play;}
		static ::cpp::Function< void  (int, ::hx::Object *) > lime_al_source_playv;
		static Dynamic lime_al_source_playv_dyn() { return lime_al_source_playv;}
		static ::cpp::Function< void  ( ::hx::Object *,int, ::hx::Object *) > lime_al_source_queue_buffers;
		static Dynamic lime_al_source_queue_buffers_dyn() { return lime_al_source_queue_buffers;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_al_source_rewind;
		static Dynamic lime_al_source_rewind_dyn() { return lime_al_source_rewind;}
		static ::cpp::Function< void  (int, ::hx::Object *) > lime_al_source_rewindv;
		static Dynamic lime_al_source_rewindv_dyn() { return lime_al_source_rewindv;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_al_source_stop;
		static Dynamic lime_al_source_stop_dyn() { return lime_al_source_stop;}
		static ::cpp::Function< void  (int, ::hx::Object *) > lime_al_source_stopv;
		static Dynamic lime_al_source_stopv_dyn() { return lime_al_source_stopv;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_al_source_unqueue_buffers;
		static Dynamic lime_al_source_unqueue_buffers_dyn() { return lime_al_source_unqueue_buffers;}
		static ::cpp::Function< void  ( ::hx::Object *,int,float,float,float) > lime_al_source3f;
		static Dynamic lime_al_source3f_dyn() { return lime_al_source3f;}
		static ::cpp::Function< void  ( ::hx::Object *,int, ::hx::Object *,int,int) > lime_al_source3i;
		static Dynamic lime_al_source3i_dyn() { return lime_al_source3i;}
		static ::cpp::Function< void  ( ::hx::Object *,int,float) > lime_al_sourcef;
		static Dynamic lime_al_sourcef_dyn() { return lime_al_sourcef;}
		static ::cpp::Function< void  ( ::hx::Object *,int, ::hx::Object *) > lime_al_sourcefv;
		static Dynamic lime_al_sourcefv_dyn() { return lime_al_sourcefv;}
		static ::cpp::Function< void  ( ::hx::Object *,int, ::hx::Object *) > lime_al_sourcei;
		static Dynamic lime_al_sourcei_dyn() { return lime_al_sourcei;}
		static ::cpp::Function< void  ( ::hx::Object *,int, ::hx::Object *) > lime_al_sourceiv;
		static Dynamic lime_al_sourceiv_dyn() { return lime_al_sourceiv;}
		static ::cpp::Function< void  (float) > lime_al_speed_of_sound;
		static Dynamic lime_al_speed_of_sound_dyn() { return lime_al_speed_of_sound;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_alc_close_device;
		static Dynamic lime_alc_close_device_dyn() { return lime_alc_close_device;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_alc_create_context;
		static Dynamic lime_alc_create_context_dyn() { return lime_alc_create_context;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_alc_destroy_context;
		static Dynamic lime_alc_destroy_context_dyn() { return lime_alc_destroy_context;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_alc_get_contexts_device;
		static Dynamic lime_alc_get_contexts_device_dyn() { return lime_alc_get_contexts_device;}
		static ::cpp::Function<  ::hx::Object *  () > lime_alc_get_current_context;
		static Dynamic lime_alc_get_current_context_dyn() { return lime_alc_get_current_context;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_alc_get_error;
		static Dynamic lime_alc_get_error_dyn() { return lime_alc_get_error;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int,int) > lime_alc_get_integerv;
		static Dynamic lime_alc_get_integerv_dyn() { return lime_alc_get_integerv;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_alc_get_string;
		static Dynamic lime_alc_get_string_dyn() { return lime_alc_get_string;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_alc_make_context_current;
		static Dynamic lime_alc_make_context_current_dyn() { return lime_alc_make_context_current;}
		static ::cpp::Function<  ::hx::Object *  (::String) > lime_alc_open_device;
		static Dynamic lime_alc_open_device_dyn() { return lime_alc_open_device;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_alc_pause_device;
		static Dynamic lime_alc_pause_device_dyn() { return lime_alc_pause_device;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_alc_process_context;
		static Dynamic lime_alc_process_context_dyn() { return lime_alc_process_context;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_alc_resume_device;
		static Dynamic lime_alc_resume_device_dyn() { return lime_alc_resume_device;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_alc_suspend_context;
		static Dynamic lime_alc_suspend_context_dyn() { return lime_alc_suspend_context;}
		static ::cpp::Function<  ::hx::Object *  () > lime_al_gen_filter;
		static Dynamic lime_al_gen_filter_dyn() { return lime_al_gen_filter;}
		static ::cpp::Function< void  ( ::hx::Object *,int, ::hx::Object *) > lime_al_filteri;
		static Dynamic lime_al_filteri_dyn() { return lime_al_filteri;}
		static ::cpp::Function< void  ( ::hx::Object *,int,float) > lime_al_filterf;
		static Dynamic lime_al_filterf_dyn() { return lime_al_filterf;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_al_remove_direct_filter;
		static Dynamic lime_al_remove_direct_filter_dyn() { return lime_al_remove_direct_filter;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_al_is_filter;
		static Dynamic lime_al_is_filter_dyn() { return lime_al_is_filter;}
		static ::cpp::Function< int  ( ::hx::Object *,int) > lime_al_get_filteri;
		static Dynamic lime_al_get_filteri_dyn() { return lime_al_get_filteri;}
		static ::cpp::Function<  ::hx::Object *  () > lime_al_gen_effect;
		static Dynamic lime_al_gen_effect_dyn() { return lime_al_gen_effect;}
		static ::cpp::Function< void  ( ::hx::Object *,int,float) > lime_al_effectf;
		static Dynamic lime_al_effectf_dyn() { return lime_al_effectf;}
		static ::cpp::Function< void  ( ::hx::Object *,int, ::hx::Object *) > lime_al_effectfv;
		static Dynamic lime_al_effectfv_dyn() { return lime_al_effectfv;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int) > lime_al_effecti;
		static Dynamic lime_al_effecti_dyn() { return lime_al_effecti;}
		static ::cpp::Function< void  ( ::hx::Object *,int, ::hx::Object *) > lime_al_effectiv;
		static Dynamic lime_al_effectiv_dyn() { return lime_al_effectiv;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_al_is_effect;
		static Dynamic lime_al_is_effect_dyn() { return lime_al_is_effect;}
		static ::cpp::Function<  ::hx::Object *  () > lime_al_gen_aux;
		static Dynamic lime_al_gen_aux_dyn() { return lime_al_gen_aux;}
		static ::cpp::Function< void  ( ::hx::Object *,int,float) > lime_al_auxf;
		static Dynamic lime_al_auxf_dyn() { return lime_al_auxf;}
		static ::cpp::Function< void  ( ::hx::Object *,int, ::hx::Object *) > lime_al_auxfv;
		static Dynamic lime_al_auxfv_dyn() { return lime_al_auxfv;}
		static ::cpp::Function< void  ( ::hx::Object *,int, ::hx::Object *) > lime_al_auxi;
		static Dynamic lime_al_auxi_dyn() { return lime_al_auxi;}
		static ::cpp::Function< void  ( ::hx::Object *,int, ::hx::Object *) > lime_al_auxiv;
		static Dynamic lime_al_auxiv_dyn() { return lime_al_auxiv;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_al_is_aux;
		static Dynamic lime_al_is_aux_dyn() { return lime_al_is_aux;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_al_remove_send;
		static Dynamic lime_al_remove_send_dyn() { return lime_al_remove_send;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float,Float,Float,Float) > lime_cairo_arc;
		static Dynamic lime_cairo_arc_dyn() { return lime_cairo_arc;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float,Float,Float,Float) > lime_cairo_arc_negative;
		static Dynamic lime_cairo_arc_negative_dyn() { return lime_cairo_arc_negative;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_clip;
		static Dynamic lime_cairo_clip_dyn() { return lime_cairo_clip;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_clip_preserve;
		static Dynamic lime_cairo_clip_preserve_dyn() { return lime_cairo_clip_preserve;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float,Float,Float) > lime_cairo_clip_extents;
		static Dynamic lime_cairo_clip_extents_dyn() { return lime_cairo_clip_extents;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_close_path;
		static Dynamic lime_cairo_close_path_dyn() { return lime_cairo_close_path;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_copy_page;
		static Dynamic lime_cairo_copy_page_dyn() { return lime_cairo_copy_page;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_cairo_create;
		static Dynamic lime_cairo_create_dyn() { return lime_cairo_create;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float,Float,Float,Float,Float) > lime_cairo_curve_to;
		static Dynamic lime_cairo_curve_to_dyn() { return lime_cairo_curve_to;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_fill;
		static Dynamic lime_cairo_fill_dyn() { return lime_cairo_fill;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float,Float,Float) > lime_cairo_fill_extents;
		static Dynamic lime_cairo_fill_extents_dyn() { return lime_cairo_fill_extents;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_fill_preserve;
		static Dynamic lime_cairo_fill_preserve_dyn() { return lime_cairo_fill_preserve;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_get_antialias;
		static Dynamic lime_cairo_get_antialias_dyn() { return lime_cairo_get_antialias;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_cairo_get_current_point;
		static Dynamic lime_cairo_get_current_point_dyn() { return lime_cairo_get_current_point;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_cairo_get_dash;
		static Dynamic lime_cairo_get_dash_dyn() { return lime_cairo_get_dash;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_get_dash_count;
		static Dynamic lime_cairo_get_dash_count_dyn() { return lime_cairo_get_dash_count;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_get_fill_rule;
		static Dynamic lime_cairo_get_fill_rule_dyn() { return lime_cairo_get_fill_rule;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_cairo_get_font_face;
		static Dynamic lime_cairo_get_font_face_dyn() { return lime_cairo_get_font_face;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_cairo_get_font_options;
		static Dynamic lime_cairo_get_font_options_dyn() { return lime_cairo_get_font_options;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_cairo_get_group_target;
		static Dynamic lime_cairo_get_group_target_dyn() { return lime_cairo_get_group_target;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_get_line_cap;
		static Dynamic lime_cairo_get_line_cap_dyn() { return lime_cairo_get_line_cap;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_get_line_join;
		static Dynamic lime_cairo_get_line_join_dyn() { return lime_cairo_get_line_join;}
		static ::cpp::Function< Float  ( ::hx::Object *) > lime_cairo_get_line_width;
		static Dynamic lime_cairo_get_line_width_dyn() { return lime_cairo_get_line_width;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_cairo_get_matrix;
		static Dynamic lime_cairo_get_matrix_dyn() { return lime_cairo_get_matrix;}
		static ::cpp::Function< Float  ( ::hx::Object *) > lime_cairo_get_miter_limit;
		static Dynamic lime_cairo_get_miter_limit_dyn() { return lime_cairo_get_miter_limit;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_get_operator;
		static Dynamic lime_cairo_get_operator_dyn() { return lime_cairo_get_operator;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_cairo_get_source;
		static Dynamic lime_cairo_get_source_dyn() { return lime_cairo_get_source;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_cairo_get_target;
		static Dynamic lime_cairo_get_target_dyn() { return lime_cairo_get_target;}
		static ::cpp::Function< Float  ( ::hx::Object *) > lime_cairo_get_tolerance;
		static Dynamic lime_cairo_get_tolerance_dyn() { return lime_cairo_get_tolerance;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_cairo_has_current_point;
		static Dynamic lime_cairo_has_current_point_dyn() { return lime_cairo_has_current_point;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_identity_matrix;
		static Dynamic lime_cairo_identity_matrix_dyn() { return lime_cairo_identity_matrix;}
		static ::cpp::Function< bool  ( ::hx::Object *,Float,Float) > lime_cairo_in_clip;
		static Dynamic lime_cairo_in_clip_dyn() { return lime_cairo_in_clip;}
		static ::cpp::Function< bool  ( ::hx::Object *,Float,Float) > lime_cairo_in_fill;
		static Dynamic lime_cairo_in_fill_dyn() { return lime_cairo_in_fill;}
		static ::cpp::Function< bool  ( ::hx::Object *,Float,Float) > lime_cairo_in_stroke;
		static Dynamic lime_cairo_in_stroke_dyn() { return lime_cairo_in_stroke;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float) > lime_cairo_line_to;
		static Dynamic lime_cairo_line_to_dyn() { return lime_cairo_line_to;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_cairo_mask;
		static Dynamic lime_cairo_mask_dyn() { return lime_cairo_mask;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *,Float,Float) > lime_cairo_mask_surface;
		static Dynamic lime_cairo_mask_surface_dyn() { return lime_cairo_mask_surface;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float) > lime_cairo_move_to;
		static Dynamic lime_cairo_move_to_dyn() { return lime_cairo_move_to;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_new_path;
		static Dynamic lime_cairo_new_path_dyn() { return lime_cairo_new_path;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_paint;
		static Dynamic lime_cairo_paint_dyn() { return lime_cairo_paint;}
		static ::cpp::Function< void  ( ::hx::Object *,Float) > lime_cairo_paint_with_alpha;
		static Dynamic lime_cairo_paint_with_alpha_dyn() { return lime_cairo_paint_with_alpha;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_cairo_pop_group;
		static Dynamic lime_cairo_pop_group_dyn() { return lime_cairo_pop_group;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_pop_group_to_source;
		static Dynamic lime_cairo_pop_group_to_source_dyn() { return lime_cairo_pop_group_to_source;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_push_group;
		static Dynamic lime_cairo_push_group_dyn() { return lime_cairo_push_group;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_cairo_push_group_with_content;
		static Dynamic lime_cairo_push_group_with_content_dyn() { return lime_cairo_push_group_with_content;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float,Float,Float) > lime_cairo_rectangle;
		static Dynamic lime_cairo_rectangle_dyn() { return lime_cairo_rectangle;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float,Float,Float,Float,Float) > lime_cairo_rel_curve_to;
		static Dynamic lime_cairo_rel_curve_to_dyn() { return lime_cairo_rel_curve_to;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float) > lime_cairo_rel_line_to;
		static Dynamic lime_cairo_rel_line_to_dyn() { return lime_cairo_rel_line_to;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float) > lime_cairo_rel_move_to;
		static Dynamic lime_cairo_rel_move_to_dyn() { return lime_cairo_rel_move_to;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_reset_clip;
		static Dynamic lime_cairo_reset_clip_dyn() { return lime_cairo_reset_clip;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_restore;
		static Dynamic lime_cairo_restore_dyn() { return lime_cairo_restore;}
		static ::cpp::Function< void  ( ::hx::Object *,Float) > lime_cairo_rotate;
		static Dynamic lime_cairo_rotate_dyn() { return lime_cairo_rotate;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_save;
		static Dynamic lime_cairo_save_dyn() { return lime_cairo_save;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float) > lime_cairo_scale;
		static Dynamic lime_cairo_scale_dyn() { return lime_cairo_scale;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_cairo_set_antialias;
		static Dynamic lime_cairo_set_antialias_dyn() { return lime_cairo_set_antialias;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_cairo_set_dash;
		static Dynamic lime_cairo_set_dash_dyn() { return lime_cairo_set_dash;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_cairo_set_fill_rule;
		static Dynamic lime_cairo_set_fill_rule_dyn() { return lime_cairo_set_fill_rule;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_cairo_set_font_face;
		static Dynamic lime_cairo_set_font_face_dyn() { return lime_cairo_set_font_face;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_cairo_set_font_options;
		static Dynamic lime_cairo_set_font_options_dyn() { return lime_cairo_set_font_options;}
		static ::cpp::Function< void  ( ::hx::Object *,Float) > lime_cairo_set_font_size;
		static Dynamic lime_cairo_set_font_size_dyn() { return lime_cairo_set_font_size;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_cairo_set_line_cap;
		static Dynamic lime_cairo_set_line_cap_dyn() { return lime_cairo_set_line_cap;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_cairo_set_line_join;
		static Dynamic lime_cairo_set_line_join_dyn() { return lime_cairo_set_line_join;}
		static ::cpp::Function< void  ( ::hx::Object *,Float) > lime_cairo_set_line_width;
		static Dynamic lime_cairo_set_line_width_dyn() { return lime_cairo_set_line_width;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float,Float,Float,Float,Float) > lime_cairo_set_matrix;
		static Dynamic lime_cairo_set_matrix_dyn() { return lime_cairo_set_matrix;}
		static ::cpp::Function< void  ( ::hx::Object *,Float) > lime_cairo_set_miter_limit;
		static Dynamic lime_cairo_set_miter_limit_dyn() { return lime_cairo_set_miter_limit;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_cairo_set_operator;
		static Dynamic lime_cairo_set_operator_dyn() { return lime_cairo_set_operator;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_cairo_set_source;
		static Dynamic lime_cairo_set_source_dyn() { return lime_cairo_set_source;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float,Float) > lime_cairo_set_source_rgb;
		static Dynamic lime_cairo_set_source_rgb_dyn() { return lime_cairo_set_source_rgb;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float,Float,Float) > lime_cairo_set_source_rgba;
		static Dynamic lime_cairo_set_source_rgba_dyn() { return lime_cairo_set_source_rgba;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *,Float,Float) > lime_cairo_set_source_surface;
		static Dynamic lime_cairo_set_source_surface_dyn() { return lime_cairo_set_source_surface;}
		static ::cpp::Function< void  ( ::hx::Object *,Float) > lime_cairo_set_tolerance;
		static Dynamic lime_cairo_set_tolerance_dyn() { return lime_cairo_set_tolerance;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_cairo_show_glyphs;
		static Dynamic lime_cairo_show_glyphs_dyn() { return lime_cairo_show_glyphs;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_show_page;
		static Dynamic lime_cairo_show_page_dyn() { return lime_cairo_show_page;}
		static ::cpp::Function< void  ( ::hx::Object *,::String) > lime_cairo_show_text;
		static Dynamic lime_cairo_show_text_dyn() { return lime_cairo_show_text;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_status;
		static Dynamic lime_cairo_status_dyn() { return lime_cairo_status;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_stroke;
		static Dynamic lime_cairo_stroke_dyn() { return lime_cairo_stroke;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float,Float,Float) > lime_cairo_stroke_extents;
		static Dynamic lime_cairo_stroke_extents_dyn() { return lime_cairo_stroke_extents;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_stroke_preserve;
		static Dynamic lime_cairo_stroke_preserve_dyn() { return lime_cairo_stroke_preserve;}
		static ::cpp::Function< void  ( ::hx::Object *,::String) > lime_cairo_text_path;
		static Dynamic lime_cairo_text_path_dyn() { return lime_cairo_text_path;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_cairo_transform;
		static Dynamic lime_cairo_transform_dyn() { return lime_cairo_transform;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float) > lime_cairo_translate;
		static Dynamic lime_cairo_translate_dyn() { return lime_cairo_translate;}
		static ::cpp::Function< int  () > lime_cairo_version;
		static Dynamic lime_cairo_version_dyn() { return lime_cairo_version;}
		static ::cpp::Function< ::String  () > lime_cairo_version_string;
		static Dynamic lime_cairo_version_string_dyn() { return lime_cairo_version_string;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_font_face_status;
		static Dynamic lime_cairo_font_face_status_dyn() { return lime_cairo_font_face_status;}
		static ::cpp::Function<  ::hx::Object *  () > lime_cairo_font_options_create;
		static Dynamic lime_cairo_font_options_create_dyn() { return lime_cairo_font_options_create;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_font_options_get_antialias;
		static Dynamic lime_cairo_font_options_get_antialias_dyn() { return lime_cairo_font_options_get_antialias;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_font_options_get_hint_metrics;
		static Dynamic lime_cairo_font_options_get_hint_metrics_dyn() { return lime_cairo_font_options_get_hint_metrics;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_font_options_get_hint_style;
		static Dynamic lime_cairo_font_options_get_hint_style_dyn() { return lime_cairo_font_options_get_hint_style;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_font_options_get_subpixel_order;
		static Dynamic lime_cairo_font_options_get_subpixel_order_dyn() { return lime_cairo_font_options_get_subpixel_order;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_cairo_font_options_set_antialias;
		static Dynamic lime_cairo_font_options_set_antialias_dyn() { return lime_cairo_font_options_set_antialias;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_cairo_font_options_set_hint_metrics;
		static Dynamic lime_cairo_font_options_set_hint_metrics_dyn() { return lime_cairo_font_options_set_hint_metrics;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_cairo_font_options_set_hint_style;
		static Dynamic lime_cairo_font_options_set_hint_style_dyn() { return lime_cairo_font_options_set_hint_style;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_cairo_font_options_set_subpixel_order;
		static Dynamic lime_cairo_font_options_set_subpixel_order_dyn() { return lime_cairo_font_options_set_subpixel_order;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_cairo_ft_font_face_create;
		static Dynamic lime_cairo_ft_font_face_create_dyn() { return lime_cairo_ft_font_face_create;}
		static ::cpp::Function<  ::hx::Object *  (int,int,int) > lime_cairo_image_surface_create;
		static Dynamic lime_cairo_image_surface_create_dyn() { return lime_cairo_image_surface_create;}
		static ::cpp::Function<  ::hx::Object *  (Float,int,int,int,int) > lime_cairo_image_surface_create_for_data;
		static Dynamic lime_cairo_image_surface_create_for_data_dyn() { return lime_cairo_image_surface_create_for_data;}
		static ::cpp::Function< Float  ( ::hx::Object *) > lime_cairo_image_surface_get_data;
		static Dynamic lime_cairo_image_surface_get_data_dyn() { return lime_cairo_image_surface_get_data;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_image_surface_get_format;
		static Dynamic lime_cairo_image_surface_get_format_dyn() { return lime_cairo_image_surface_get_format;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_image_surface_get_height;
		static Dynamic lime_cairo_image_surface_get_height_dyn() { return lime_cairo_image_surface_get_height;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_image_surface_get_stride;
		static Dynamic lime_cairo_image_surface_get_stride_dyn() { return lime_cairo_image_surface_get_stride;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_image_surface_get_width;
		static Dynamic lime_cairo_image_surface_get_width_dyn() { return lime_cairo_image_surface_get_width;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float,Float,Float) > lime_cairo_pattern_add_color_stop_rgb;
		static Dynamic lime_cairo_pattern_add_color_stop_rgb_dyn() { return lime_cairo_pattern_add_color_stop_rgb;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,Float,Float,Float,Float) > lime_cairo_pattern_add_color_stop_rgba;
		static Dynamic lime_cairo_pattern_add_color_stop_rgba_dyn() { return lime_cairo_pattern_add_color_stop_rgba;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_cairo_pattern_create_for_surface;
		static Dynamic lime_cairo_pattern_create_for_surface_dyn() { return lime_cairo_pattern_create_for_surface;}
		static ::cpp::Function<  ::hx::Object *  (Float,Float,Float,Float) > lime_cairo_pattern_create_linear;
		static Dynamic lime_cairo_pattern_create_linear_dyn() { return lime_cairo_pattern_create_linear;}
		static ::cpp::Function<  ::hx::Object *  (Float,Float,Float,Float,Float,Float) > lime_cairo_pattern_create_radial;
		static Dynamic lime_cairo_pattern_create_radial_dyn() { return lime_cairo_pattern_create_radial;}
		static ::cpp::Function<  ::hx::Object *  (Float,Float,Float) > lime_cairo_pattern_create_rgb;
		static Dynamic lime_cairo_pattern_create_rgb_dyn() { return lime_cairo_pattern_create_rgb;}
		static ::cpp::Function<  ::hx::Object *  (Float,Float,Float,Float) > lime_cairo_pattern_create_rgba;
		static Dynamic lime_cairo_pattern_create_rgba_dyn() { return lime_cairo_pattern_create_rgba;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_pattern_get_color_stop_count;
		static Dynamic lime_cairo_pattern_get_color_stop_count_dyn() { return lime_cairo_pattern_get_color_stop_count;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_pattern_get_extend;
		static Dynamic lime_cairo_pattern_get_extend_dyn() { return lime_cairo_pattern_get_extend;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_cairo_pattern_get_filter;
		static Dynamic lime_cairo_pattern_get_filter_dyn() { return lime_cairo_pattern_get_filter;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_cairo_pattern_get_matrix;
		static Dynamic lime_cairo_pattern_get_matrix_dyn() { return lime_cairo_pattern_get_matrix;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_cairo_pattern_set_extend;
		static Dynamic lime_cairo_pattern_set_extend_dyn() { return lime_cairo_pattern_set_extend;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_cairo_pattern_set_filter;
		static Dynamic lime_cairo_pattern_set_filter_dyn() { return lime_cairo_pattern_set_filter;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_cairo_pattern_set_matrix;
		static Dynamic lime_cairo_pattern_set_matrix_dyn() { return lime_cairo_pattern_set_matrix;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_cairo_surface_flush;
		static Dynamic lime_cairo_surface_flush_dyn() { return lime_cairo_surface_flush;}
		static ::cpp::Function< Float  (::String,Float) > lime_curl_getdate;
		static Dynamic lime_curl_getdate_dyn() { return lime_curl_getdate;}
		static ::cpp::Function< void  () > lime_curl_global_cleanup;
		static Dynamic lime_curl_global_cleanup_dyn() { return lime_curl_global_cleanup;}
		static ::cpp::Function< int  (int) > lime_curl_global_init;
		static Dynamic lime_curl_global_init_dyn() { return lime_curl_global_init;}
		static ::cpp::Function<  ::hx::Object *  () > lime_curl_version;
		static Dynamic lime_curl_version_dyn() { return lime_curl_version;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_curl_version_info;
		static Dynamic lime_curl_version_info_dyn() { return lime_curl_version_info;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_curl_easy_cleanup;
		static Dynamic lime_curl_easy_cleanup_dyn() { return lime_curl_easy_cleanup;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_curl_easy_duphandle;
		static Dynamic lime_curl_easy_duphandle_dyn() { return lime_curl_easy_duphandle;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,::String,int) > lime_curl_easy_escape;
		static Dynamic lime_curl_easy_escape_dyn() { return lime_curl_easy_escape;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_curl_easy_flush;
		static Dynamic lime_curl_easy_flush_dyn() { return lime_curl_easy_flush;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_curl_easy_getinfo;
		static Dynamic lime_curl_easy_getinfo_dyn() { return lime_curl_easy_getinfo;}
		static ::cpp::Function<  ::hx::Object *  () > lime_curl_easy_init;
		static Dynamic lime_curl_easy_init_dyn() { return lime_curl_easy_init;}
		static ::cpp::Function< int  ( ::hx::Object *,int) > lime_curl_easy_pause;
		static Dynamic lime_curl_easy_pause_dyn() { return lime_curl_easy_pause;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_curl_easy_perform;
		static Dynamic lime_curl_easy_perform_dyn() { return lime_curl_easy_perform;}
		static ::cpp::Function< int  ( ::hx::Object *, ::hx::Object *,int,int) > lime_curl_easy_recv;
		static Dynamic lime_curl_easy_recv_dyn() { return lime_curl_easy_recv;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_curl_easy_reset;
		static Dynamic lime_curl_easy_reset_dyn() { return lime_curl_easy_reset;}
		static ::cpp::Function< int  ( ::hx::Object *, ::hx::Object *,int,int) > lime_curl_easy_send;
		static Dynamic lime_curl_easy_send_dyn() { return lime_curl_easy_send;}
		static ::cpp::Function< int  ( ::hx::Object *,int, ::hx::Object *, ::hx::Object *) > lime_curl_easy_setopt;
		static Dynamic lime_curl_easy_setopt_dyn() { return lime_curl_easy_setopt;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_curl_easy_strerror;
		static Dynamic lime_curl_easy_strerror_dyn() { return lime_curl_easy_strerror;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,::String,int,int) > lime_curl_easy_unescape;
		static Dynamic lime_curl_easy_unescape_dyn() { return lime_curl_easy_unescape;}
		static ::cpp::Function<  ::hx::Object *  () > lime_curl_multi_init;
		static Dynamic lime_curl_multi_init_dyn() { return lime_curl_multi_init;}
		static ::cpp::Function< int  ( ::hx::Object *, ::hx::Object *, ::hx::Object *) > lime_curl_multi_add_handle;
		static Dynamic lime_curl_multi_add_handle_dyn() { return lime_curl_multi_add_handle;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_curl_multi_get_running_handles;
		static Dynamic lime_curl_multi_get_running_handles_dyn() { return lime_curl_multi_get_running_handles;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_curl_multi_info_read;
		static Dynamic lime_curl_multi_info_read_dyn() { return lime_curl_multi_info_read;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_curl_multi_perform;
		static Dynamic lime_curl_multi_perform_dyn() { return lime_curl_multi_perform;}
		static ::cpp::Function< int  ( ::hx::Object *, ::hx::Object *) > lime_curl_multi_remove_handle;
		static Dynamic lime_curl_multi_remove_handle_dyn() { return lime_curl_multi_remove_handle;}
		static ::cpp::Function< int  ( ::hx::Object *,int, ::hx::Object *) > lime_curl_multi_setopt;
		static Dynamic lime_curl_multi_setopt_dyn() { return lime_curl_multi_setopt;}
		static ::cpp::Function< int  ( ::hx::Object *,int) > lime_curl_multi_wait;
		static Dynamic lime_curl_multi_wait_dyn() { return lime_curl_multi_wait;}
		static ::cpp::Function< void  (int) > lime_gl_active_texture;
		static Dynamic lime_gl_active_texture_dyn() { return lime_gl_active_texture;}
		static ::cpp::Function< void  (int,int) > lime_gl_attach_shader;
		static Dynamic lime_gl_attach_shader_dyn() { return lime_gl_attach_shader;}
		static ::cpp::Function< void  (int,int) > lime_gl_begin_query;
		static Dynamic lime_gl_begin_query_dyn() { return lime_gl_begin_query;}
		static ::cpp::Function< void  (int) > lime_gl_begin_transform_feedback;
		static Dynamic lime_gl_begin_transform_feedback_dyn() { return lime_gl_begin_transform_feedback;}
		static ::cpp::Function< void  (int,int,::String) > lime_gl_bind_attrib_location;
		static Dynamic lime_gl_bind_attrib_location_dyn() { return lime_gl_bind_attrib_location;}
		static ::cpp::Function< void  (int,int) > lime_gl_bind_buffer;
		static Dynamic lime_gl_bind_buffer_dyn() { return lime_gl_bind_buffer;}
		static ::cpp::Function< void  (int,int,int) > lime_gl_bind_buffer_base;
		static Dynamic lime_gl_bind_buffer_base_dyn() { return lime_gl_bind_buffer_base;}
		static ::cpp::Function< void  (int,int,int,Float,int) > lime_gl_bind_buffer_range;
		static Dynamic lime_gl_bind_buffer_range_dyn() { return lime_gl_bind_buffer_range;}
		static ::cpp::Function< void  (int,int) > lime_gl_bind_framebuffer;
		static Dynamic lime_gl_bind_framebuffer_dyn() { return lime_gl_bind_framebuffer;}
		static ::cpp::Function< void  (int,int) > lime_gl_bind_renderbuffer;
		static Dynamic lime_gl_bind_renderbuffer_dyn() { return lime_gl_bind_renderbuffer;}
		static ::cpp::Function< void  (int,int) > lime_gl_bind_sampler;
		static Dynamic lime_gl_bind_sampler_dyn() { return lime_gl_bind_sampler;}
		static ::cpp::Function< void  (int,int) > lime_gl_bind_texture;
		static Dynamic lime_gl_bind_texture_dyn() { return lime_gl_bind_texture;}
		static ::cpp::Function< void  (int,int) > lime_gl_bind_transform_feedback;
		static Dynamic lime_gl_bind_transform_feedback_dyn() { return lime_gl_bind_transform_feedback;}
		static ::cpp::Function< void  (int) > lime_gl_bind_vertex_array;
		static Dynamic lime_gl_bind_vertex_array_dyn() { return lime_gl_bind_vertex_array;}
		static ::cpp::Function< void  (float,float,float,float) > lime_gl_blend_color;
		static Dynamic lime_gl_blend_color_dyn() { return lime_gl_blend_color;}
		static ::cpp::Function< void  (int) > lime_gl_blend_equation;
		static Dynamic lime_gl_blend_equation_dyn() { return lime_gl_blend_equation;}
		static ::cpp::Function< void  (int,int) > lime_gl_blend_equation_separate;
		static Dynamic lime_gl_blend_equation_separate_dyn() { return lime_gl_blend_equation_separate;}
		static ::cpp::Function< void  (int,int) > lime_gl_blend_func;
		static Dynamic lime_gl_blend_func_dyn() { return lime_gl_blend_func;}
		static ::cpp::Function< void  (int,int,int,int) > lime_gl_blend_func_separate;
		static Dynamic lime_gl_blend_func_separate_dyn() { return lime_gl_blend_func_separate;}
		static ::cpp::Function< void  (int,int,int,int,int,int,int,int,int,int) > lime_gl_blit_framebuffer;
		static Dynamic lime_gl_blit_framebuffer_dyn() { return lime_gl_blit_framebuffer;}
		static ::cpp::Function< void  (int,int,Float,int) > lime_gl_buffer_data;
		static Dynamic lime_gl_buffer_data_dyn() { return lime_gl_buffer_data;}
		static ::cpp::Function< void  (int,int,int,Float) > lime_gl_buffer_sub_data;
		static Dynamic lime_gl_buffer_sub_data_dyn() { return lime_gl_buffer_sub_data;}
		static ::cpp::Function< int  (int) > lime_gl_check_framebuffer_status;
		static Dynamic lime_gl_check_framebuffer_status_dyn() { return lime_gl_check_framebuffer_status;}
		static ::cpp::Function< void  (int) > lime_gl_clear;
		static Dynamic lime_gl_clear_dyn() { return lime_gl_clear;}
		static ::cpp::Function< void  (int,int,float,int) > lime_gl_clear_bufferfi;
		static Dynamic lime_gl_clear_bufferfi_dyn() { return lime_gl_clear_bufferfi;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_clear_bufferfv;
		static Dynamic lime_gl_clear_bufferfv_dyn() { return lime_gl_clear_bufferfv;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_clear_bufferiv;
		static Dynamic lime_gl_clear_bufferiv_dyn() { return lime_gl_clear_bufferiv;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_clear_bufferuiv;
		static Dynamic lime_gl_clear_bufferuiv_dyn() { return lime_gl_clear_bufferuiv;}
		static ::cpp::Function< int  ( ::hx::Object *,int,int,int) > lime_gl_client_wait_sync;
		static Dynamic lime_gl_client_wait_sync_dyn() { return lime_gl_client_wait_sync;}
		static ::cpp::Function< void  (float,float,float,float) > lime_gl_clear_color;
		static Dynamic lime_gl_clear_color_dyn() { return lime_gl_clear_color;}
		static ::cpp::Function< void  (float) > lime_gl_clear_depthf;
		static Dynamic lime_gl_clear_depthf_dyn() { return lime_gl_clear_depthf;}
		static ::cpp::Function< void  (int) > lime_gl_clear_stencil;
		static Dynamic lime_gl_clear_stencil_dyn() { return lime_gl_clear_stencil;}
		static ::cpp::Function< void  (bool,bool,bool,bool) > lime_gl_color_mask;
		static Dynamic lime_gl_color_mask_dyn() { return lime_gl_color_mask;}
		static ::cpp::Function< void  (int) > lime_gl_compile_shader;
		static Dynamic lime_gl_compile_shader_dyn() { return lime_gl_compile_shader;}
		static ::cpp::Function< void  (int,int,int,int,int,int,int,Float) > lime_gl_compressed_tex_image_2d;
		static Dynamic lime_gl_compressed_tex_image_2d_dyn() { return lime_gl_compressed_tex_image_2d;}
		static ::cpp::Function< void  (int,int,int,int,int,int,int,int,Float) > lime_gl_compressed_tex_image_3d;
		static Dynamic lime_gl_compressed_tex_image_3d_dyn() { return lime_gl_compressed_tex_image_3d;}
		static ::cpp::Function< void  (int,int,int,int,int,int,int,int,Float) > lime_gl_compressed_tex_sub_image_2d;
		static Dynamic lime_gl_compressed_tex_sub_image_2d_dyn() { return lime_gl_compressed_tex_sub_image_2d;}
		static ::cpp::Function< void  (int,int,int,int,int,int,int,int,int,int,Float) > lime_gl_compressed_tex_sub_image_3d;
		static Dynamic lime_gl_compressed_tex_sub_image_3d_dyn() { return lime_gl_compressed_tex_sub_image_3d;}
		static ::cpp::Function< void  (int,int,Float,Float,int) > lime_gl_copy_buffer_sub_data;
		static Dynamic lime_gl_copy_buffer_sub_data_dyn() { return lime_gl_copy_buffer_sub_data;}
		static ::cpp::Function< void  (int,int,int,int,int,int,int,int) > lime_gl_copy_tex_image_2d;
		static Dynamic lime_gl_copy_tex_image_2d_dyn() { return lime_gl_copy_tex_image_2d;}
		static ::cpp::Function< void  (int,int,int,int,int,int,int,int) > lime_gl_copy_tex_sub_image_2d;
		static Dynamic lime_gl_copy_tex_sub_image_2d_dyn() { return lime_gl_copy_tex_sub_image_2d;}
		static ::cpp::Function< void  (int,int,int,int,int,int,int,int,int) > lime_gl_copy_tex_sub_image_3d;
		static Dynamic lime_gl_copy_tex_sub_image_3d_dyn() { return lime_gl_copy_tex_sub_image_3d;}
		static ::cpp::Function< int  () > lime_gl_create_buffer;
		static Dynamic lime_gl_create_buffer_dyn() { return lime_gl_create_buffer;}
		static ::cpp::Function< int  () > lime_gl_create_framebuffer;
		static Dynamic lime_gl_create_framebuffer_dyn() { return lime_gl_create_framebuffer;}
		static ::cpp::Function< int  () > lime_gl_create_program;
		static Dynamic lime_gl_create_program_dyn() { return lime_gl_create_program;}
		static ::cpp::Function< int  () > lime_gl_create_query;
		static Dynamic lime_gl_create_query_dyn() { return lime_gl_create_query;}
		static ::cpp::Function< int  () > lime_gl_create_renderbuffer;
		static Dynamic lime_gl_create_renderbuffer_dyn() { return lime_gl_create_renderbuffer;}
		static ::cpp::Function< int  () > lime_gl_create_sampler;
		static Dynamic lime_gl_create_sampler_dyn() { return lime_gl_create_sampler;}
		static ::cpp::Function< int  (int) > lime_gl_create_shader;
		static Dynamic lime_gl_create_shader_dyn() { return lime_gl_create_shader;}
		static ::cpp::Function< int  () > lime_gl_create_texture;
		static Dynamic lime_gl_create_texture_dyn() { return lime_gl_create_texture;}
		static ::cpp::Function< int  () > lime_gl_create_transform_feedback;
		static Dynamic lime_gl_create_transform_feedback_dyn() { return lime_gl_create_transform_feedback;}
		static ::cpp::Function< int  () > lime_gl_create_vertex_array;
		static Dynamic lime_gl_create_vertex_array_dyn() { return lime_gl_create_vertex_array;}
		static ::cpp::Function< void  (int) > lime_gl_cull_face;
		static Dynamic lime_gl_cull_face_dyn() { return lime_gl_cull_face;}
		static ::cpp::Function< void  (int) > lime_gl_delete_buffer;
		static Dynamic lime_gl_delete_buffer_dyn() { return lime_gl_delete_buffer;}
		static ::cpp::Function< void  (int) > lime_gl_delete_framebuffer;
		static Dynamic lime_gl_delete_framebuffer_dyn() { return lime_gl_delete_framebuffer;}
		static ::cpp::Function< void  (int) > lime_gl_delete_program;
		static Dynamic lime_gl_delete_program_dyn() { return lime_gl_delete_program;}
		static ::cpp::Function< void  (int) > lime_gl_delete_query;
		static Dynamic lime_gl_delete_query_dyn() { return lime_gl_delete_query;}
		static ::cpp::Function< void  (int) > lime_gl_delete_renderbuffer;
		static Dynamic lime_gl_delete_renderbuffer_dyn() { return lime_gl_delete_renderbuffer;}
		static ::cpp::Function< void  (int) > lime_gl_delete_sampler;
		static Dynamic lime_gl_delete_sampler_dyn() { return lime_gl_delete_sampler;}
		static ::cpp::Function< void  (int) > lime_gl_delete_shader;
		static Dynamic lime_gl_delete_shader_dyn() { return lime_gl_delete_shader;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_gl_delete_sync;
		static Dynamic lime_gl_delete_sync_dyn() { return lime_gl_delete_sync;}
		static ::cpp::Function< void  (int) > lime_gl_delete_texture;
		static Dynamic lime_gl_delete_texture_dyn() { return lime_gl_delete_texture;}
		static ::cpp::Function< void  (int) > lime_gl_delete_transform_feedback;
		static Dynamic lime_gl_delete_transform_feedback_dyn() { return lime_gl_delete_transform_feedback;}
		static ::cpp::Function< void  (int) > lime_gl_delete_vertex_array;
		static Dynamic lime_gl_delete_vertex_array_dyn() { return lime_gl_delete_vertex_array;}
		static ::cpp::Function< void  (int) > lime_gl_depth_func;
		static Dynamic lime_gl_depth_func_dyn() { return lime_gl_depth_func;}
		static ::cpp::Function< void  (bool) > lime_gl_depth_mask;
		static Dynamic lime_gl_depth_mask_dyn() { return lime_gl_depth_mask;}
		static ::cpp::Function< void  (float,float) > lime_gl_depth_rangef;
		static Dynamic lime_gl_depth_rangef_dyn() { return lime_gl_depth_rangef;}
		static ::cpp::Function< void  (int,int) > lime_gl_detach_shader;
		static Dynamic lime_gl_detach_shader_dyn() { return lime_gl_detach_shader;}
		static ::cpp::Function< void  (int) > lime_gl_disable;
		static Dynamic lime_gl_disable_dyn() { return lime_gl_disable;}
		static ::cpp::Function< void  (int) > lime_gl_disable_vertex_attrib_array;
		static Dynamic lime_gl_disable_vertex_attrib_array_dyn() { return lime_gl_disable_vertex_attrib_array;}
		static ::cpp::Function< void  (int,int,int) > lime_gl_draw_arrays;
		static Dynamic lime_gl_draw_arrays_dyn() { return lime_gl_draw_arrays;}
		static ::cpp::Function< void  (int,int,int,int) > lime_gl_draw_arrays_instanced;
		static Dynamic lime_gl_draw_arrays_instanced_dyn() { return lime_gl_draw_arrays_instanced;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_gl_draw_buffers;
		static Dynamic lime_gl_draw_buffers_dyn() { return lime_gl_draw_buffers;}
		static ::cpp::Function< void  (int,int,int,Float) > lime_gl_draw_elements;
		static Dynamic lime_gl_draw_elements_dyn() { return lime_gl_draw_elements;}
		static ::cpp::Function< void  (int,int,int,Float,int) > lime_gl_draw_elements_instanced;
		static Dynamic lime_gl_draw_elements_instanced_dyn() { return lime_gl_draw_elements_instanced;}
		static ::cpp::Function< void  (int,int,int,int,int,Float) > lime_gl_draw_range_elements;
		static Dynamic lime_gl_draw_range_elements_dyn() { return lime_gl_draw_range_elements;}
		static ::cpp::Function< void  (int) > lime_gl_enable;
		static Dynamic lime_gl_enable_dyn() { return lime_gl_enable;}
		static ::cpp::Function< void  (int) > lime_gl_enable_vertex_attrib_array;
		static Dynamic lime_gl_enable_vertex_attrib_array_dyn() { return lime_gl_enable_vertex_attrib_array;}
		static ::cpp::Function< void  (int) > lime_gl_end_query;
		static Dynamic lime_gl_end_query_dyn() { return lime_gl_end_query;}
		static ::cpp::Function< void  () > lime_gl_end_transform_feedback;
		static Dynamic lime_gl_end_transform_feedback_dyn() { return lime_gl_end_transform_feedback;}
		static ::cpp::Function<  ::hx::Object *  (int,int) > lime_gl_fence_sync;
		static Dynamic lime_gl_fence_sync_dyn() { return lime_gl_fence_sync;}
		static ::cpp::Function< void  () > lime_gl_finish;
		static Dynamic lime_gl_finish_dyn() { return lime_gl_finish;}
		static ::cpp::Function< void  () > lime_gl_flush;
		static Dynamic lime_gl_flush_dyn() { return lime_gl_flush;}
		static ::cpp::Function< void  (int,int,int,int) > lime_gl_framebuffer_renderbuffer;
		static Dynamic lime_gl_framebuffer_renderbuffer_dyn() { return lime_gl_framebuffer_renderbuffer;}
		static ::cpp::Function< void  (int,int,int,int,int) > lime_gl_framebuffer_texture2D;
		static Dynamic lime_gl_framebuffer_texture2D_dyn() { return lime_gl_framebuffer_texture2D;}
		static ::cpp::Function< void  (int,int,int,int,int) > lime_gl_framebuffer_texture_layer;
		static Dynamic lime_gl_framebuffer_texture_layer_dyn() { return lime_gl_framebuffer_texture_layer;}
		static ::cpp::Function< void  (int) > lime_gl_front_face;
		static Dynamic lime_gl_front_face_dyn() { return lime_gl_front_face;}
		static ::cpp::Function< void  (int) > lime_gl_generate_mipmap;
		static Dynamic lime_gl_generate_mipmap_dyn() { return lime_gl_generate_mipmap;}
		static ::cpp::Function<  ::hx::Object *  (int,int) > lime_gl_get_active_attrib;
		static Dynamic lime_gl_get_active_attrib_dyn() { return lime_gl_get_active_attrib;}
		static ::cpp::Function<  ::hx::Object *  (int,int) > lime_gl_get_active_uniform;
		static Dynamic lime_gl_get_active_uniform_dyn() { return lime_gl_get_active_uniform;}
		static ::cpp::Function< int  (int,int,int) > lime_gl_get_active_uniform_blocki;
		static Dynamic lime_gl_get_active_uniform_blocki_dyn() { return lime_gl_get_active_uniform_blocki;}
		static ::cpp::Function< void  (int,int,int,Float) > lime_gl_get_active_uniform_blockiv;
		static Dynamic lime_gl_get_active_uniform_blockiv_dyn() { return lime_gl_get_active_uniform_blockiv;}
		static ::cpp::Function<  ::hx::Object *  (int,int) > lime_gl_get_active_uniform_block_name;
		static Dynamic lime_gl_get_active_uniform_block_name_dyn() { return lime_gl_get_active_uniform_block_name;}
		static ::cpp::Function< void  (int, ::hx::Object *,int,Float) > lime_gl_get_active_uniformsiv;
		static Dynamic lime_gl_get_active_uniformsiv_dyn() { return lime_gl_get_active_uniformsiv;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_gl_get_attached_shaders;
		static Dynamic lime_gl_get_attached_shaders_dyn() { return lime_gl_get_attached_shaders;}
		static ::cpp::Function< int  (int,::String) > lime_gl_get_attrib_location;
		static Dynamic lime_gl_get_attrib_location_dyn() { return lime_gl_get_attrib_location;}
		static ::cpp::Function< bool  (int) > lime_gl_get_boolean;
		static Dynamic lime_gl_get_boolean_dyn() { return lime_gl_get_boolean;}
		static ::cpp::Function< void  (int,Float) > lime_gl_get_booleanv;
		static Dynamic lime_gl_get_booleanv_dyn() { return lime_gl_get_booleanv;}
		static ::cpp::Function< int  (int,int) > lime_gl_get_buffer_parameteri;
		static Dynamic lime_gl_get_buffer_parameteri_dyn() { return lime_gl_get_buffer_parameteri;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_buffer_parameteri64v;
		static Dynamic lime_gl_get_buffer_parameteri64v_dyn() { return lime_gl_get_buffer_parameteri64v;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_buffer_parameteriv;
		static Dynamic lime_gl_get_buffer_parameteriv_dyn() { return lime_gl_get_buffer_parameteriv;}
		static ::cpp::Function< Float  (int,int) > lime_gl_get_buffer_pointerv;
		static Dynamic lime_gl_get_buffer_pointerv_dyn() { return lime_gl_get_buffer_pointerv;}
		static ::cpp::Function< void  (int,Float,int,Float) > lime_gl_get_buffer_sub_data;
		static Dynamic lime_gl_get_buffer_sub_data_dyn() { return lime_gl_get_buffer_sub_data;}
		static ::cpp::Function<  ::hx::Object *  () > lime_gl_get_context_attributes;
		static Dynamic lime_gl_get_context_attributes_dyn() { return lime_gl_get_context_attributes;}
		static ::cpp::Function< int  () > lime_gl_get_error;
		static Dynamic lime_gl_get_error_dyn() { return lime_gl_get_error;}
		static ::cpp::Function<  ::hx::Object *  (::String) > lime_gl_get_extension;
		static Dynamic lime_gl_get_extension_dyn() { return lime_gl_get_extension;}
		static ::cpp::Function< float  (int) > lime_gl_get_float;
		static Dynamic lime_gl_get_float_dyn() { return lime_gl_get_float;}
		static ::cpp::Function< void  (int,Float) > lime_gl_get_floatv;
		static Dynamic lime_gl_get_floatv_dyn() { return lime_gl_get_floatv;}
		static ::cpp::Function< int  (int,::String) > lime_gl_get_frag_data_location;
		static Dynamic lime_gl_get_frag_data_location_dyn() { return lime_gl_get_frag_data_location;}
		static ::cpp::Function< int  (int,int,int) > lime_gl_get_framebuffer_attachment_parameteri;
		static Dynamic lime_gl_get_framebuffer_attachment_parameteri_dyn() { return lime_gl_get_framebuffer_attachment_parameteri;}
		static ::cpp::Function< void  (int,int,int,Float) > lime_gl_get_framebuffer_attachment_parameteriv;
		static Dynamic lime_gl_get_framebuffer_attachment_parameteriv_dyn() { return lime_gl_get_framebuffer_attachment_parameteriv;}
		static ::cpp::Function< int  (int) > lime_gl_get_integer;
		static Dynamic lime_gl_get_integer_dyn() { return lime_gl_get_integer;}
		static ::cpp::Function< void  (int,Float) > lime_gl_get_integer64v;
		static Dynamic lime_gl_get_integer64v_dyn() { return lime_gl_get_integer64v;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_integer64i_v;
		static Dynamic lime_gl_get_integer64i_v_dyn() { return lime_gl_get_integer64i_v;}
		static ::cpp::Function< void  (int,Float) > lime_gl_get_integerv;
		static Dynamic lime_gl_get_integerv_dyn() { return lime_gl_get_integerv;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_integeri_v;
		static Dynamic lime_gl_get_integeri_v_dyn() { return lime_gl_get_integeri_v;}
		static ::cpp::Function< void  (int,int,int,int,Float) > lime_gl_get_internalformativ;
		static Dynamic lime_gl_get_internalformativ_dyn() { return lime_gl_get_internalformativ;}
		static ::cpp::Function< void  (int,int, ::hx::Object *) > lime_gl_get_program_binary;
		static Dynamic lime_gl_get_program_binary_dyn() { return lime_gl_get_program_binary;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_gl_get_program_info_log;
		static Dynamic lime_gl_get_program_info_log_dyn() { return lime_gl_get_program_info_log;}
		static ::cpp::Function< int  (int,int) > lime_gl_get_programi;
		static Dynamic lime_gl_get_programi_dyn() { return lime_gl_get_programi;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_programiv;
		static Dynamic lime_gl_get_programiv_dyn() { return lime_gl_get_programiv;}
		static ::cpp::Function< int  (int,int) > lime_gl_get_queryi;
		static Dynamic lime_gl_get_queryi_dyn() { return lime_gl_get_queryi;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_queryiv;
		static Dynamic lime_gl_get_queryiv_dyn() { return lime_gl_get_queryiv;}
		static ::cpp::Function< int  (int,int) > lime_gl_get_query_objectui;
		static Dynamic lime_gl_get_query_objectui_dyn() { return lime_gl_get_query_objectui;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_query_objectuiv;
		static Dynamic lime_gl_get_query_objectuiv_dyn() { return lime_gl_get_query_objectuiv;}
		static ::cpp::Function< int  (int,int) > lime_gl_get_renderbuffer_parameteri;
		static Dynamic lime_gl_get_renderbuffer_parameteri_dyn() { return lime_gl_get_renderbuffer_parameteri;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_renderbuffer_parameteriv;
		static Dynamic lime_gl_get_renderbuffer_parameteriv_dyn() { return lime_gl_get_renderbuffer_parameteriv;}
		static ::cpp::Function< float  (int,int) > lime_gl_get_sampler_parameterf;
		static Dynamic lime_gl_get_sampler_parameterf_dyn() { return lime_gl_get_sampler_parameterf;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_sampler_parameterfv;
		static Dynamic lime_gl_get_sampler_parameterfv_dyn() { return lime_gl_get_sampler_parameterfv;}
		static ::cpp::Function< int  (int,int) > lime_gl_get_sampler_parameteri;
		static Dynamic lime_gl_get_sampler_parameteri_dyn() { return lime_gl_get_sampler_parameteri;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_sampler_parameteriv;
		static Dynamic lime_gl_get_sampler_parameteriv_dyn() { return lime_gl_get_sampler_parameteriv;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_gl_get_shader_info_log;
		static Dynamic lime_gl_get_shader_info_log_dyn() { return lime_gl_get_shader_info_log;}
		static ::cpp::Function< int  (int,int) > lime_gl_get_shaderi;
		static Dynamic lime_gl_get_shaderi_dyn() { return lime_gl_get_shaderi;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_shaderiv;
		static Dynamic lime_gl_get_shaderiv_dyn() { return lime_gl_get_shaderiv;}
		static ::cpp::Function<  ::hx::Object *  (int,int) > lime_gl_get_shader_precision_format;
		static Dynamic lime_gl_get_shader_precision_format_dyn() { return lime_gl_get_shader_precision_format;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_gl_get_shader_source;
		static Dynamic lime_gl_get_shader_source_dyn() { return lime_gl_get_shader_source;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_gl_get_string;
		static Dynamic lime_gl_get_string_dyn() { return lime_gl_get_string;}
		static ::cpp::Function<  ::hx::Object *  (int,int) > lime_gl_get_stringi;
		static Dynamic lime_gl_get_stringi_dyn() { return lime_gl_get_stringi;}
		static ::cpp::Function< int  ( ::hx::Object *,int) > lime_gl_get_sync_parameteri;
		static Dynamic lime_gl_get_sync_parameteri_dyn() { return lime_gl_get_sync_parameteri;}
		static ::cpp::Function< void  ( ::hx::Object *,int,Float) > lime_gl_get_sync_parameteriv;
		static Dynamic lime_gl_get_sync_parameteriv_dyn() { return lime_gl_get_sync_parameteriv;}
		static ::cpp::Function< float  (int,int) > lime_gl_get_tex_parameterf;
		static Dynamic lime_gl_get_tex_parameterf_dyn() { return lime_gl_get_tex_parameterf;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_tex_parameterfv;
		static Dynamic lime_gl_get_tex_parameterfv_dyn() { return lime_gl_get_tex_parameterfv;}
		static ::cpp::Function< int  (int,int) > lime_gl_get_tex_parameteri;
		static Dynamic lime_gl_get_tex_parameteri_dyn() { return lime_gl_get_tex_parameteri;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_tex_parameteriv;
		static Dynamic lime_gl_get_tex_parameteriv_dyn() { return lime_gl_get_tex_parameteriv;}
		static ::cpp::Function<  ::hx::Object *  (int,int) > lime_gl_get_transform_feedback_varying;
		static Dynamic lime_gl_get_transform_feedback_varying_dyn() { return lime_gl_get_transform_feedback_varying;}
		static ::cpp::Function< float  (int,int) > lime_gl_get_uniformf;
		static Dynamic lime_gl_get_uniformf_dyn() { return lime_gl_get_uniformf;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_uniformfv;
		static Dynamic lime_gl_get_uniformfv_dyn() { return lime_gl_get_uniformfv;}
		static ::cpp::Function< int  (int,int) > lime_gl_get_uniformi;
		static Dynamic lime_gl_get_uniformi_dyn() { return lime_gl_get_uniformi;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_uniformiv;
		static Dynamic lime_gl_get_uniformiv_dyn() { return lime_gl_get_uniformiv;}
		static ::cpp::Function< int  (int,int) > lime_gl_get_uniformui;
		static Dynamic lime_gl_get_uniformui_dyn() { return lime_gl_get_uniformui;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_uniformuiv;
		static Dynamic lime_gl_get_uniformuiv_dyn() { return lime_gl_get_uniformuiv;}
		static ::cpp::Function< int  (int,::String) > lime_gl_get_uniform_block_index;
		static Dynamic lime_gl_get_uniform_block_index_dyn() { return lime_gl_get_uniform_block_index;}
		static ::cpp::Function< int  (int,::String) > lime_gl_get_uniform_location;
		static Dynamic lime_gl_get_uniform_location_dyn() { return lime_gl_get_uniform_location;}
		static ::cpp::Function< float  (int,int) > lime_gl_get_vertex_attribf;
		static Dynamic lime_gl_get_vertex_attribf_dyn() { return lime_gl_get_vertex_attribf;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_vertex_attribfv;
		static Dynamic lime_gl_get_vertex_attribfv_dyn() { return lime_gl_get_vertex_attribfv;}
		static ::cpp::Function< int  (int,int) > lime_gl_get_vertex_attribi;
		static Dynamic lime_gl_get_vertex_attribi_dyn() { return lime_gl_get_vertex_attribi;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_vertex_attribiv;
		static Dynamic lime_gl_get_vertex_attribiv_dyn() { return lime_gl_get_vertex_attribiv;}
		static ::cpp::Function< int  (int,int) > lime_gl_get_vertex_attribii;
		static Dynamic lime_gl_get_vertex_attribii_dyn() { return lime_gl_get_vertex_attribii;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_vertex_attribiiv;
		static Dynamic lime_gl_get_vertex_attribiiv_dyn() { return lime_gl_get_vertex_attribiiv;}
		static ::cpp::Function< int  (int,int) > lime_gl_get_vertex_attribiui;
		static Dynamic lime_gl_get_vertex_attribiui_dyn() { return lime_gl_get_vertex_attribiui;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_get_vertex_attribiuiv;
		static Dynamic lime_gl_get_vertex_attribiuiv_dyn() { return lime_gl_get_vertex_attribiuiv;}
		static ::cpp::Function< Float  (int,int) > lime_gl_get_vertex_attrib_pointerv;
		static Dynamic lime_gl_get_vertex_attrib_pointerv_dyn() { return lime_gl_get_vertex_attrib_pointerv;}
		static ::cpp::Function< void  (int,int) > lime_gl_hint;
		static Dynamic lime_gl_hint_dyn() { return lime_gl_hint;}
		static ::cpp::Function< void  (int, ::hx::Object *) > lime_gl_invalidate_framebuffer;
		static Dynamic lime_gl_invalidate_framebuffer_dyn() { return lime_gl_invalidate_framebuffer;}
		static ::cpp::Function< void  (int, ::hx::Object *,int,int,int,int) > lime_gl_invalidate_sub_framebuffer;
		static Dynamic lime_gl_invalidate_sub_framebuffer_dyn() { return lime_gl_invalidate_sub_framebuffer;}
		static ::cpp::Function< bool  (int) > lime_gl_is_buffer;
		static Dynamic lime_gl_is_buffer_dyn() { return lime_gl_is_buffer;}
		static ::cpp::Function< bool  (int) > lime_gl_is_enabled;
		static Dynamic lime_gl_is_enabled_dyn() { return lime_gl_is_enabled;}
		static ::cpp::Function< bool  (int) > lime_gl_is_framebuffer;
		static Dynamic lime_gl_is_framebuffer_dyn() { return lime_gl_is_framebuffer;}
		static ::cpp::Function< bool  (int) > lime_gl_is_program;
		static Dynamic lime_gl_is_program_dyn() { return lime_gl_is_program;}
		static ::cpp::Function< bool  (int) > lime_gl_is_query;
		static Dynamic lime_gl_is_query_dyn() { return lime_gl_is_query;}
		static ::cpp::Function< bool  (int) > lime_gl_is_renderbuffer;
		static Dynamic lime_gl_is_renderbuffer_dyn() { return lime_gl_is_renderbuffer;}
		static ::cpp::Function< bool  (int) > lime_gl_is_sampler;
		static Dynamic lime_gl_is_sampler_dyn() { return lime_gl_is_sampler;}
		static ::cpp::Function< bool  (int) > lime_gl_is_shader;
		static Dynamic lime_gl_is_shader_dyn() { return lime_gl_is_shader;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_gl_is_sync;
		static Dynamic lime_gl_is_sync_dyn() { return lime_gl_is_sync;}
		static ::cpp::Function< bool  (int) > lime_gl_is_texture;
		static Dynamic lime_gl_is_texture_dyn() { return lime_gl_is_texture;}
		static ::cpp::Function< bool  (int) > lime_gl_is_transform_feedback;
		static Dynamic lime_gl_is_transform_feedback_dyn() { return lime_gl_is_transform_feedback;}
		static ::cpp::Function< bool  (int) > lime_gl_is_vertex_array;
		static Dynamic lime_gl_is_vertex_array_dyn() { return lime_gl_is_vertex_array;}
		static ::cpp::Function< void  (float) > lime_gl_line_width;
		static Dynamic lime_gl_line_width_dyn() { return lime_gl_line_width;}
		static ::cpp::Function< void  (int) > lime_gl_link_program;
		static Dynamic lime_gl_link_program_dyn() { return lime_gl_link_program;}
		static ::cpp::Function< Float  (int,Float,int,int) > lime_gl_map_buffer_range;
		static Dynamic lime_gl_map_buffer_range_dyn() { return lime_gl_map_buffer_range;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_gl_object_deregister;
		static Dynamic lime_gl_object_deregister_dyn() { return lime_gl_object_deregister;}
		static ::cpp::Function<  ::hx::Object *  (int,int) > lime_gl_object_from_id;
		static Dynamic lime_gl_object_from_id_dyn() { return lime_gl_object_from_id;}
		static ::cpp::Function<  ::hx::Object *  (int,int, ::hx::Object *) > lime_gl_object_register;
		static Dynamic lime_gl_object_register_dyn() { return lime_gl_object_register;}
		static ::cpp::Function< void  () > lime_gl_pause_transform_feedback;
		static Dynamic lime_gl_pause_transform_feedback_dyn() { return lime_gl_pause_transform_feedback;}
		static ::cpp::Function< void  (int,int) > lime_gl_pixel_storei;
		static Dynamic lime_gl_pixel_storei_dyn() { return lime_gl_pixel_storei;}
		static ::cpp::Function< void  (float,float) > lime_gl_polygon_offset;
		static Dynamic lime_gl_polygon_offset_dyn() { return lime_gl_polygon_offset;}
		static ::cpp::Function< void  (int,int,Float,int) > lime_gl_program_binary;
		static Dynamic lime_gl_program_binary_dyn() { return lime_gl_program_binary;}
		static ::cpp::Function< void  (int,int,int) > lime_gl_program_parameteri;
		static Dynamic lime_gl_program_parameteri_dyn() { return lime_gl_program_parameteri;}
		static ::cpp::Function< void  (int) > lime_gl_read_buffer;
		static Dynamic lime_gl_read_buffer_dyn() { return lime_gl_read_buffer;}
		static ::cpp::Function< void  (int,int,int,int,int,int,Float) > lime_gl_read_pixels;
		static Dynamic lime_gl_read_pixels_dyn() { return lime_gl_read_pixels;}
		static ::cpp::Function< void  () > lime_gl_release_shader_compiler;
		static Dynamic lime_gl_release_shader_compiler_dyn() { return lime_gl_release_shader_compiler;}
		static ::cpp::Function< void  (int,int,int,int) > lime_gl_renderbuffer_storage;
		static Dynamic lime_gl_renderbuffer_storage_dyn() { return lime_gl_renderbuffer_storage;}
		static ::cpp::Function< void  (int,int,int,int,int) > lime_gl_renderbuffer_storage_multisample;
		static Dynamic lime_gl_renderbuffer_storage_multisample_dyn() { return lime_gl_renderbuffer_storage_multisample;}
		static ::cpp::Function< void  () > lime_gl_resume_transform_feedback;
		static Dynamic lime_gl_resume_transform_feedback_dyn() { return lime_gl_resume_transform_feedback;}
		static ::cpp::Function< void  (float,bool) > lime_gl_sample_coverage;
		static Dynamic lime_gl_sample_coverage_dyn() { return lime_gl_sample_coverage;}
		static ::cpp::Function< void  (int,int,float) > lime_gl_sampler_parameterf;
		static Dynamic lime_gl_sampler_parameterf_dyn() { return lime_gl_sampler_parameterf;}
		static ::cpp::Function< void  (int,int,int) > lime_gl_sampler_parameteri;
		static Dynamic lime_gl_sampler_parameteri_dyn() { return lime_gl_sampler_parameteri;}
		static ::cpp::Function< void  (int,int,int,int) > lime_gl_scissor;
		static Dynamic lime_gl_scissor_dyn() { return lime_gl_scissor;}
		static ::cpp::Function< void  ( ::hx::Object *,int,Float,int) > lime_gl_shader_binary;
		static Dynamic lime_gl_shader_binary_dyn() { return lime_gl_shader_binary;}
		static ::cpp::Function< void  (int,::String) > lime_gl_shader_source;
		static Dynamic lime_gl_shader_source_dyn() { return lime_gl_shader_source;}
		static ::cpp::Function< void  (int,int,int) > lime_gl_stencil_func;
		static Dynamic lime_gl_stencil_func_dyn() { return lime_gl_stencil_func;}
		static ::cpp::Function< void  (int,int,int,int) > lime_gl_stencil_func_separate;
		static Dynamic lime_gl_stencil_func_separate_dyn() { return lime_gl_stencil_func_separate;}
		static ::cpp::Function< void  (int) > lime_gl_stencil_mask;
		static Dynamic lime_gl_stencil_mask_dyn() { return lime_gl_stencil_mask;}
		static ::cpp::Function< void  (int,int) > lime_gl_stencil_mask_separate;
		static Dynamic lime_gl_stencil_mask_separate_dyn() { return lime_gl_stencil_mask_separate;}
		static ::cpp::Function< void  (int,int,int) > lime_gl_stencil_op;
		static Dynamic lime_gl_stencil_op_dyn() { return lime_gl_stencil_op;}
		static ::cpp::Function< void  (int,int,int,int) > lime_gl_stencil_op_separate;
		static Dynamic lime_gl_stencil_op_separate_dyn() { return lime_gl_stencil_op_separate;}
		static ::cpp::Function< void  (int,int,int,int,int,int,int,int,Float) > lime_gl_tex_image_2d;
		static Dynamic lime_gl_tex_image_2d_dyn() { return lime_gl_tex_image_2d;}
		static ::cpp::Function< void  (int,int,int,int,int,int,int,int,int,Float) > lime_gl_tex_image_3d;
		static Dynamic lime_gl_tex_image_3d_dyn() { return lime_gl_tex_image_3d;}
		static ::cpp::Function< void  (int,int,float) > lime_gl_tex_parameterf;
		static Dynamic lime_gl_tex_parameterf_dyn() { return lime_gl_tex_parameterf;}
		static ::cpp::Function< void  (int,int,int) > lime_gl_tex_parameteri;
		static Dynamic lime_gl_tex_parameteri_dyn() { return lime_gl_tex_parameteri;}
		static ::cpp::Function< void  (int,int,int,int,int) > lime_gl_tex_storage_2d;
		static Dynamic lime_gl_tex_storage_2d_dyn() { return lime_gl_tex_storage_2d;}
		static ::cpp::Function< void  (int,int,int,int,int,int) > lime_gl_tex_storage_3d;
		static Dynamic lime_gl_tex_storage_3d_dyn() { return lime_gl_tex_storage_3d;}
		static ::cpp::Function< void  (int,int,int,int,int,int,int,int,Float) > lime_gl_tex_sub_image_2d;
		static Dynamic lime_gl_tex_sub_image_2d_dyn() { return lime_gl_tex_sub_image_2d;}
		static ::cpp::Function< void  (int,int,int,int,int,int,int,int,int,int,Float) > lime_gl_tex_sub_image_3d;
		static Dynamic lime_gl_tex_sub_image_3d_dyn() { return lime_gl_tex_sub_image_3d;}
		static ::cpp::Function< void  (int, ::hx::Object *,int) > lime_gl_transform_feedback_varyings;
		static Dynamic lime_gl_transform_feedback_varyings_dyn() { return lime_gl_transform_feedback_varyings;}
		static ::cpp::Function< void  (int,float) > lime_gl_uniform1f;
		static Dynamic lime_gl_uniform1f_dyn() { return lime_gl_uniform1f;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_uniform1fv;
		static Dynamic lime_gl_uniform1fv_dyn() { return lime_gl_uniform1fv;}
		static ::cpp::Function< void  (int,int) > lime_gl_uniform1i;
		static Dynamic lime_gl_uniform1i_dyn() { return lime_gl_uniform1i;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_uniform1iv;
		static Dynamic lime_gl_uniform1iv_dyn() { return lime_gl_uniform1iv;}
		static ::cpp::Function< void  (int,int) > lime_gl_uniform1ui;
		static Dynamic lime_gl_uniform1ui_dyn() { return lime_gl_uniform1ui;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_uniform1uiv;
		static Dynamic lime_gl_uniform1uiv_dyn() { return lime_gl_uniform1uiv;}
		static ::cpp::Function< void  (int,float,float) > lime_gl_uniform2f;
		static Dynamic lime_gl_uniform2f_dyn() { return lime_gl_uniform2f;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_uniform2fv;
		static Dynamic lime_gl_uniform2fv_dyn() { return lime_gl_uniform2fv;}
		static ::cpp::Function< void  (int,int,int) > lime_gl_uniform2i;
		static Dynamic lime_gl_uniform2i_dyn() { return lime_gl_uniform2i;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_uniform2iv;
		static Dynamic lime_gl_uniform2iv_dyn() { return lime_gl_uniform2iv;}
		static ::cpp::Function< void  (int,int,int) > lime_gl_uniform2ui;
		static Dynamic lime_gl_uniform2ui_dyn() { return lime_gl_uniform2ui;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_uniform2uiv;
		static Dynamic lime_gl_uniform2uiv_dyn() { return lime_gl_uniform2uiv;}
		static ::cpp::Function< void  (int,float,float,float) > lime_gl_uniform3f;
		static Dynamic lime_gl_uniform3f_dyn() { return lime_gl_uniform3f;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_uniform3fv;
		static Dynamic lime_gl_uniform3fv_dyn() { return lime_gl_uniform3fv;}
		static ::cpp::Function< void  (int,int,int,int) > lime_gl_uniform3i;
		static Dynamic lime_gl_uniform3i_dyn() { return lime_gl_uniform3i;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_uniform3iv;
		static Dynamic lime_gl_uniform3iv_dyn() { return lime_gl_uniform3iv;}
		static ::cpp::Function< void  (int,int,int,int) > lime_gl_uniform3ui;
		static Dynamic lime_gl_uniform3ui_dyn() { return lime_gl_uniform3ui;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_uniform3uiv;
		static Dynamic lime_gl_uniform3uiv_dyn() { return lime_gl_uniform3uiv;}
		static ::cpp::Function< void  (int,float,float,float,float) > lime_gl_uniform4f;
		static Dynamic lime_gl_uniform4f_dyn() { return lime_gl_uniform4f;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_uniform4fv;
		static Dynamic lime_gl_uniform4fv_dyn() { return lime_gl_uniform4fv;}
		static ::cpp::Function< void  (int,int,int,int,int) > lime_gl_uniform4i;
		static Dynamic lime_gl_uniform4i_dyn() { return lime_gl_uniform4i;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_uniform4iv;
		static Dynamic lime_gl_uniform4iv_dyn() { return lime_gl_uniform4iv;}
		static ::cpp::Function< void  (int,int,int,int,int) > lime_gl_uniform4ui;
		static Dynamic lime_gl_uniform4ui_dyn() { return lime_gl_uniform4ui;}
		static ::cpp::Function< void  (int,int,Float) > lime_gl_uniform4uiv;
		static Dynamic lime_gl_uniform4uiv_dyn() { return lime_gl_uniform4uiv;}
		static ::cpp::Function< void  (int,int,int) > lime_gl_uniform_block_binding;
		static Dynamic lime_gl_uniform_block_binding_dyn() { return lime_gl_uniform_block_binding;}
		static ::cpp::Function< void  (int,int,bool,Float) > lime_gl_uniform_matrix2fv;
		static Dynamic lime_gl_uniform_matrix2fv_dyn() { return lime_gl_uniform_matrix2fv;}
		static ::cpp::Function< void  (int,int,bool,Float) > lime_gl_uniform_matrix2x3fv;
		static Dynamic lime_gl_uniform_matrix2x3fv_dyn() { return lime_gl_uniform_matrix2x3fv;}
		static ::cpp::Function< void  (int,int,bool,Float) > lime_gl_uniform_matrix2x4fv;
		static Dynamic lime_gl_uniform_matrix2x4fv_dyn() { return lime_gl_uniform_matrix2x4fv;}
		static ::cpp::Function< void  (int,int,bool,Float) > lime_gl_uniform_matrix3fv;
		static Dynamic lime_gl_uniform_matrix3fv_dyn() { return lime_gl_uniform_matrix3fv;}
		static ::cpp::Function< void  (int,int,bool,Float) > lime_gl_uniform_matrix3x2fv;
		static Dynamic lime_gl_uniform_matrix3x2fv_dyn() { return lime_gl_uniform_matrix3x2fv;}
		static ::cpp::Function< void  (int,int,bool,Float) > lime_gl_uniform_matrix3x4fv;
		static Dynamic lime_gl_uniform_matrix3x4fv_dyn() { return lime_gl_uniform_matrix3x4fv;}
		static ::cpp::Function< void  (int,int,bool,Float) > lime_gl_uniform_matrix4fv;
		static Dynamic lime_gl_uniform_matrix4fv_dyn() { return lime_gl_uniform_matrix4fv;}
		static ::cpp::Function< void  (int,int,bool,Float) > lime_gl_uniform_matrix4x2fv;
		static Dynamic lime_gl_uniform_matrix4x2fv_dyn() { return lime_gl_uniform_matrix4x2fv;}
		static ::cpp::Function< void  (int,int,bool,Float) > lime_gl_uniform_matrix4x3fv;
		static Dynamic lime_gl_uniform_matrix4x3fv_dyn() { return lime_gl_uniform_matrix4x3fv;}
		static ::cpp::Function< bool  (int) > lime_gl_unmap_buffer;
		static Dynamic lime_gl_unmap_buffer_dyn() { return lime_gl_unmap_buffer;}
		static ::cpp::Function< void  (int) > lime_gl_use_program;
		static Dynamic lime_gl_use_program_dyn() { return lime_gl_use_program;}
		static ::cpp::Function< void  (int) > lime_gl_validate_program;
		static Dynamic lime_gl_validate_program_dyn() { return lime_gl_validate_program;}
		static ::cpp::Function< void  (int,float) > lime_gl_vertex_attrib1f;
		static Dynamic lime_gl_vertex_attrib1f_dyn() { return lime_gl_vertex_attrib1f;}
		static ::cpp::Function< void  (int,Float) > lime_gl_vertex_attrib1fv;
		static Dynamic lime_gl_vertex_attrib1fv_dyn() { return lime_gl_vertex_attrib1fv;}
		static ::cpp::Function< void  (int,float,float) > lime_gl_vertex_attrib2f;
		static Dynamic lime_gl_vertex_attrib2f_dyn() { return lime_gl_vertex_attrib2f;}
		static ::cpp::Function< void  (int,Float) > lime_gl_vertex_attrib2fv;
		static Dynamic lime_gl_vertex_attrib2fv_dyn() { return lime_gl_vertex_attrib2fv;}
		static ::cpp::Function< void  (int,float,float,float) > lime_gl_vertex_attrib3f;
		static Dynamic lime_gl_vertex_attrib3f_dyn() { return lime_gl_vertex_attrib3f;}
		static ::cpp::Function< void  (int,Float) > lime_gl_vertex_attrib3fv;
		static Dynamic lime_gl_vertex_attrib3fv_dyn() { return lime_gl_vertex_attrib3fv;}
		static ::cpp::Function< void  (int,float,float,float,float) > lime_gl_vertex_attrib4f;
		static Dynamic lime_gl_vertex_attrib4f_dyn() { return lime_gl_vertex_attrib4f;}
		static ::cpp::Function< void  (int,Float) > lime_gl_vertex_attrib4fv;
		static Dynamic lime_gl_vertex_attrib4fv_dyn() { return lime_gl_vertex_attrib4fv;}
		static ::cpp::Function< void  (int,int,int,int,int) > lime_gl_vertex_attribi4i;
		static Dynamic lime_gl_vertex_attribi4i_dyn() { return lime_gl_vertex_attribi4i;}
		static ::cpp::Function< void  (int,Float) > lime_gl_vertex_attribi4iv;
		static Dynamic lime_gl_vertex_attribi4iv_dyn() { return lime_gl_vertex_attribi4iv;}
		static ::cpp::Function< void  (int,int,int,int,int) > lime_gl_vertex_attribi4ui;
		static Dynamic lime_gl_vertex_attribi4ui_dyn() { return lime_gl_vertex_attribi4ui;}
		static ::cpp::Function< void  (int,Float) > lime_gl_vertex_attribi4uiv;
		static Dynamic lime_gl_vertex_attribi4uiv_dyn() { return lime_gl_vertex_attribi4uiv;}
		static ::cpp::Function< void  (int,int) > lime_gl_vertex_attrib_divisor;
		static Dynamic lime_gl_vertex_attrib_divisor_dyn() { return lime_gl_vertex_attrib_divisor;}
		static ::cpp::Function< void  (int,int,int,int,Float) > lime_gl_vertex_attrib_ipointer;
		static Dynamic lime_gl_vertex_attrib_ipointer_dyn() { return lime_gl_vertex_attrib_ipointer;}
		static ::cpp::Function< void  (int,int,int,bool,int,Float) > lime_gl_vertex_attrib_pointer;
		static Dynamic lime_gl_vertex_attrib_pointer_dyn() { return lime_gl_vertex_attrib_pointer;}
		static ::cpp::Function< void  (int,int,int,int) > lime_gl_viewport;
		static Dynamic lime_gl_viewport_dyn() { return lime_gl_viewport;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int,int) > lime_gl_wait_sync;
		static Dynamic lime_gl_wait_sync_dyn() { return lime_gl_wait_sync;}
		static ::cpp::Function<  ::hx::Object *  (Float,int,int) > lime_hb_blob_create;
		static Dynamic lime_hb_blob_create_dyn() { return lime_hb_blob_create;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int,int) > lime_hb_blob_create_sub_blob;
		static Dynamic lime_hb_blob_create_sub_blob_dyn() { return lime_hb_blob_create_sub_blob;}
		static ::cpp::Function< Float  ( ::hx::Object *) > lime_hb_blob_get_data;
		static Dynamic lime_hb_blob_get_data_dyn() { return lime_hb_blob_get_data;}
		static ::cpp::Function< Float  ( ::hx::Object *) > lime_hb_blob_get_data_writable;
		static Dynamic lime_hb_blob_get_data_writable_dyn() { return lime_hb_blob_get_data_writable;}
		static ::cpp::Function<  ::hx::Object *  () > lime_hb_blob_get_empty;
		static Dynamic lime_hb_blob_get_empty_dyn() { return lime_hb_blob_get_empty;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_blob_get_length;
		static Dynamic lime_hb_blob_get_length_dyn() { return lime_hb_blob_get_length;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_hb_blob_is_immutable;
		static Dynamic lime_hb_blob_is_immutable_dyn() { return lime_hb_blob_is_immutable;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_hb_blob_make_immutable;
		static Dynamic lime_hb_blob_make_immutable_dyn() { return lime_hb_blob_make_immutable;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int) > lime_hb_buffer_add;
		static Dynamic lime_hb_buffer_add_dyn() { return lime_hb_buffer_add;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,int,int,int) > lime_hb_buffer_add_codepoints;
		static Dynamic lime_hb_buffer_add_codepoints_dyn() { return lime_hb_buffer_add_codepoints;}
		static ::cpp::Function< void  ( ::hx::Object *,::String,int,int) > lime_hb_buffer_add_utf8;
		static Dynamic lime_hb_buffer_add_utf8_dyn() { return lime_hb_buffer_add_utf8;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,int,int,int) > lime_hb_buffer_add_utf16;
		static Dynamic lime_hb_buffer_add_utf16_dyn() { return lime_hb_buffer_add_utf16;}
		static ::cpp::Function< void  ( ::hx::Object *,Float,int,int,int) > lime_hb_buffer_add_utf32;
		static Dynamic lime_hb_buffer_add_utf32_dyn() { return lime_hb_buffer_add_utf32;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_hb_buffer_allocation_successful;
		static Dynamic lime_hb_buffer_allocation_successful_dyn() { return lime_hb_buffer_allocation_successful;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_hb_buffer_clear_contents;
		static Dynamic lime_hb_buffer_clear_contents_dyn() { return lime_hb_buffer_clear_contents;}
		static ::cpp::Function<  ::hx::Object *  () > lime_hb_buffer_create;
		static Dynamic lime_hb_buffer_create_dyn() { return lime_hb_buffer_create;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_buffer_get_cluster_level;
		static Dynamic lime_hb_buffer_get_cluster_level_dyn() { return lime_hb_buffer_get_cluster_level;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_buffer_get_content_type;
		static Dynamic lime_hb_buffer_get_content_type_dyn() { return lime_hb_buffer_get_content_type;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_buffer_get_direction;
		static Dynamic lime_hb_buffer_get_direction_dyn() { return lime_hb_buffer_get_direction;}
		static ::cpp::Function<  ::hx::Object *  () > lime_hb_buffer_get_empty;
		static Dynamic lime_hb_buffer_get_empty_dyn() { return lime_hb_buffer_get_empty;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_buffer_get_flags;
		static Dynamic lime_hb_buffer_get_flags_dyn() { return lime_hb_buffer_get_flags;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_hb_buffer_get_glyph_infos;
		static Dynamic lime_hb_buffer_get_glyph_infos_dyn() { return lime_hb_buffer_get_glyph_infos;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_hb_buffer_get_glyph_positions;
		static Dynamic lime_hb_buffer_get_glyph_positions_dyn() { return lime_hb_buffer_get_glyph_positions;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_hb_buffer_get_language;
		static Dynamic lime_hb_buffer_get_language_dyn() { return lime_hb_buffer_get_language;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_buffer_get_length;
		static Dynamic lime_hb_buffer_get_length_dyn() { return lime_hb_buffer_get_length;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_buffer_get_replacement_codepoint;
		static Dynamic lime_hb_buffer_get_replacement_codepoint_dyn() { return lime_hb_buffer_get_replacement_codepoint;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_buffer_get_script;
		static Dynamic lime_hb_buffer_get_script_dyn() { return lime_hb_buffer_get_script;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_hb_buffer_get_segment_properties;
		static Dynamic lime_hb_buffer_get_segment_properties_dyn() { return lime_hb_buffer_get_segment_properties;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_hb_buffer_guess_segment_properties;
		static Dynamic lime_hb_buffer_guess_segment_properties_dyn() { return lime_hb_buffer_guess_segment_properties;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_hb_buffer_normalize_glyphs;
		static Dynamic lime_hb_buffer_normalize_glyphs_dyn() { return lime_hb_buffer_normalize_glyphs;}
		static ::cpp::Function< bool  ( ::hx::Object *,int) > lime_hb_buffer_preallocate;
		static Dynamic lime_hb_buffer_preallocate_dyn() { return lime_hb_buffer_preallocate;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_hb_buffer_reset;
		static Dynamic lime_hb_buffer_reset_dyn() { return lime_hb_buffer_reset;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_hb_buffer_reverse;
		static Dynamic lime_hb_buffer_reverse_dyn() { return lime_hb_buffer_reverse;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_hb_buffer_reverse_clusters;
		static Dynamic lime_hb_buffer_reverse_clusters_dyn() { return lime_hb_buffer_reverse_clusters;}
		static ::cpp::Function< int  (::String) > lime_hb_buffer_serialize_format_from_string;
		static Dynamic lime_hb_buffer_serialize_format_from_string_dyn() { return lime_hb_buffer_serialize_format_from_string;}
		static ::cpp::Function<  ::hx::Object *  (int) > lime_hb_buffer_serialize_format_to_string;
		static Dynamic lime_hb_buffer_serialize_format_to_string_dyn() { return lime_hb_buffer_serialize_format_to_string;}
		static ::cpp::Function<  ::hx::Object *  () > lime_hb_buffer_serialize_list_formats;
		static Dynamic lime_hb_buffer_serialize_list_formats_dyn() { return lime_hb_buffer_serialize_list_formats;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_hb_buffer_set_cluster_level;
		static Dynamic lime_hb_buffer_set_cluster_level_dyn() { return lime_hb_buffer_set_cluster_level;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_hb_buffer_set_content_type;
		static Dynamic lime_hb_buffer_set_content_type_dyn() { return lime_hb_buffer_set_content_type;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_hb_buffer_set_direction;
		static Dynamic lime_hb_buffer_set_direction_dyn() { return lime_hb_buffer_set_direction;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_hb_buffer_set_flags;
		static Dynamic lime_hb_buffer_set_flags_dyn() { return lime_hb_buffer_set_flags;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_hb_buffer_set_language;
		static Dynamic lime_hb_buffer_set_language_dyn() { return lime_hb_buffer_set_language;}
		static ::cpp::Function< bool  ( ::hx::Object *,int) > lime_hb_buffer_set_length;
		static Dynamic lime_hb_buffer_set_length_dyn() { return lime_hb_buffer_set_length;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_hb_buffer_set_replacement_codepoint;
		static Dynamic lime_hb_buffer_set_replacement_codepoint_dyn() { return lime_hb_buffer_set_replacement_codepoint;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_hb_buffer_set_script;
		static Dynamic lime_hb_buffer_set_script_dyn() { return lime_hb_buffer_set_script;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_hb_buffer_set_segment_properties;
		static Dynamic lime_hb_buffer_set_segment_properties_dyn() { return lime_hb_buffer_set_segment_properties;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_hb_face_create;
		static Dynamic lime_hb_face_create_dyn() { return lime_hb_face_create;}
		static ::cpp::Function<  ::hx::Object *  () > lime_hb_face_get_empty;
		static Dynamic lime_hb_face_get_empty_dyn() { return lime_hb_face_get_empty;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_face_get_glyph_count;
		static Dynamic lime_hb_face_get_glyph_count_dyn() { return lime_hb_face_get_glyph_count;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_face_get_index;
		static Dynamic lime_hb_face_get_index_dyn() { return lime_hb_face_get_index;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_face_get_upem;
		static Dynamic lime_hb_face_get_upem_dyn() { return lime_hb_face_get_upem;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_hb_face_is_immutable;
		static Dynamic lime_hb_face_is_immutable_dyn() { return lime_hb_face_is_immutable;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_hb_face_make_immutable;
		static Dynamic lime_hb_face_make_immutable_dyn() { return lime_hb_face_make_immutable;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_hb_face_reference_blob;
		static Dynamic lime_hb_face_reference_blob_dyn() { return lime_hb_face_reference_blob;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_hb_face_reference_table;
		static Dynamic lime_hb_face_reference_table_dyn() { return lime_hb_face_reference_table;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_hb_face_set_glyph_count;
		static Dynamic lime_hb_face_set_glyph_count_dyn() { return lime_hb_face_set_glyph_count;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_hb_face_set_index;
		static Dynamic lime_hb_face_set_index_dyn() { return lime_hb_face_set_index;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_hb_face_set_upem;
		static Dynamic lime_hb_face_set_upem_dyn() { return lime_hb_face_set_upem;}
		static ::cpp::Function<  ::hx::Object *  (::String) > lime_hb_feature_from_string;
		static Dynamic lime_hb_feature_from_string_dyn() { return lime_hb_feature_from_string;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_hb_feature_to_string;
		static Dynamic lime_hb_feature_to_string_dyn() { return lime_hb_feature_to_string;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int,int,int) > lime_hb_font_add_glyph_origin_for_direction;
		static Dynamic lime_hb_font_add_glyph_origin_for_direction_dyn() { return lime_hb_font_add_glyph_origin_for_direction;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_hb_font_create;
		static Dynamic lime_hb_font_create_dyn() { return lime_hb_font_create;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_hb_font_create_sub_font;
		static Dynamic lime_hb_font_create_sub_font_dyn() { return lime_hb_font_create_sub_font;}
		static ::cpp::Function<  ::hx::Object *  () > lime_hb_font_get_empty;
		static Dynamic lime_hb_font_get_empty_dyn() { return lime_hb_font_get_empty;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_hb_font_get_face;
		static Dynamic lime_hb_font_get_face_dyn() { return lime_hb_font_get_face;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int,int) > lime_hb_font_get_glyph_advance_for_direction;
		static Dynamic lime_hb_font_get_glyph_advance_for_direction_dyn() { return lime_hb_font_get_glyph_advance_for_direction;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int,int,int) > lime_hb_font_get_glyph_kerning_for_direction;
		static Dynamic lime_hb_font_get_glyph_kerning_for_direction_dyn() { return lime_hb_font_get_glyph_kerning_for_direction;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int,int) > lime_hb_font_get_glyph_origin_for_direction;
		static Dynamic lime_hb_font_get_glyph_origin_for_direction_dyn() { return lime_hb_font_get_glyph_origin_for_direction;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_hb_font_get_parent;
		static Dynamic lime_hb_font_get_parent_dyn() { return lime_hb_font_get_parent;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_hb_font_get_ppem;
		static Dynamic lime_hb_font_get_ppem_dyn() { return lime_hb_font_get_ppem;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_hb_font_get_scale;
		static Dynamic lime_hb_font_get_scale_dyn() { return lime_hb_font_get_scale;}
		static ::cpp::Function< int  ( ::hx::Object *,::String) > lime_hb_font_glyph_from_string;
		static Dynamic lime_hb_font_glyph_from_string_dyn() { return lime_hb_font_glyph_from_string;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_hb_font_glyph_to_string;
		static Dynamic lime_hb_font_glyph_to_string_dyn() { return lime_hb_font_glyph_to_string;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_hb_font_is_immutable;
		static Dynamic lime_hb_font_is_immutable_dyn() { return lime_hb_font_is_immutable;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_hb_font_make_immutable;
		static Dynamic lime_hb_font_make_immutable_dyn() { return lime_hb_font_make_immutable;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int) > lime_hb_font_set_ppem;
		static Dynamic lime_hb_font_set_ppem_dyn() { return lime_hb_font_set_ppem;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int) > lime_hb_font_set_scale;
		static Dynamic lime_hb_font_set_scale_dyn() { return lime_hb_font_set_scale;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int,int,int) > lime_hb_font_subtract_glyph_origin_for_direction;
		static Dynamic lime_hb_font_subtract_glyph_origin_for_direction_dyn() { return lime_hb_font_subtract_glyph_origin_for_direction;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_hb_ft_font_create;
		static Dynamic lime_hb_ft_font_create_dyn() { return lime_hb_ft_font_create;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_hb_ft_font_create_referenced;
		static Dynamic lime_hb_ft_font_create_referenced_dyn() { return lime_hb_ft_font_create_referenced;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_ft_font_get_load_flags;
		static Dynamic lime_hb_ft_font_get_load_flags_dyn() { return lime_hb_ft_font_get_load_flags;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_hb_ft_font_set_load_flags;
		static Dynamic lime_hb_ft_font_set_load_flags_dyn() { return lime_hb_ft_font_set_load_flags;}
		static ::cpp::Function<  ::hx::Object *  (::String) > lime_hb_language_from_string;
		static Dynamic lime_hb_language_from_string_dyn() { return lime_hb_language_from_string;}
		static ::cpp::Function<  ::hx::Object *  () > lime_hb_language_get_default;
		static Dynamic lime_hb_language_get_default_dyn() { return lime_hb_language_get_default;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_hb_language_to_string;
		static Dynamic lime_hb_language_to_string_dyn() { return lime_hb_language_to_string;}
		static ::cpp::Function< bool  ( ::hx::Object *, ::hx::Object *) > lime_hb_segment_properties_equal;
		static Dynamic lime_hb_segment_properties_equal_dyn() { return lime_hb_segment_properties_equal;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_segment_properties_hash;
		static Dynamic lime_hb_segment_properties_hash_dyn() { return lime_hb_segment_properties_hash;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_hb_set_add;
		static Dynamic lime_hb_set_add_dyn() { return lime_hb_set_add;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int) > lime_hb_set_add_range;
		static Dynamic lime_hb_set_add_range_dyn() { return lime_hb_set_add_range;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_hb_set_allocation_successful;
		static Dynamic lime_hb_set_allocation_successful_dyn() { return lime_hb_set_allocation_successful;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_hb_set_clear;
		static Dynamic lime_hb_set_clear_dyn() { return lime_hb_set_clear;}
		static ::cpp::Function<  ::hx::Object *  () > lime_hb_set_create;
		static Dynamic lime_hb_set_create_dyn() { return lime_hb_set_create;}
		static ::cpp::Function< void  ( ::hx::Object *,int) > lime_hb_set_del;
		static Dynamic lime_hb_set_del_dyn() { return lime_hb_set_del;}
		static ::cpp::Function< void  ( ::hx::Object *,int,int) > lime_hb_set_del_range;
		static Dynamic lime_hb_set_del_range_dyn() { return lime_hb_set_del_range;}
		static ::cpp::Function<  ::hx::Object *  () > lime_hb_set_get_empty;
		static Dynamic lime_hb_set_get_empty_dyn() { return lime_hb_set_get_empty;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_set_get_max;
		static Dynamic lime_hb_set_get_max_dyn() { return lime_hb_set_get_max;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_set_get_min;
		static Dynamic lime_hb_set_get_min_dyn() { return lime_hb_set_get_min;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_set_get_population;
		static Dynamic lime_hb_set_get_population_dyn() { return lime_hb_set_get_population;}
		static ::cpp::Function< bool  ( ::hx::Object *,int) > lime_hb_set_has;
		static Dynamic lime_hb_set_has_dyn() { return lime_hb_set_has;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_hb_set_intersect;
		static Dynamic lime_hb_set_intersect_dyn() { return lime_hb_set_intersect;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_hb_set_invert;
		static Dynamic lime_hb_set_invert_dyn() { return lime_hb_set_invert;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_hb_set_is_empty;
		static Dynamic lime_hb_set_is_empty_dyn() { return lime_hb_set_is_empty;}
		static ::cpp::Function< bool  ( ::hx::Object *, ::hx::Object *) > lime_hb_set_is_equal;
		static Dynamic lime_hb_set_is_equal_dyn() { return lime_hb_set_is_equal;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_hb_set_next;
		static Dynamic lime_hb_set_next_dyn() { return lime_hb_set_next;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_hb_set_next_range;
		static Dynamic lime_hb_set_next_range_dyn() { return lime_hb_set_next_range;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_hb_set_set;
		static Dynamic lime_hb_set_set_dyn() { return lime_hb_set_set;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_hb_set_subtract;
		static Dynamic lime_hb_set_subtract_dyn() { return lime_hb_set_subtract;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_hb_set_symmetric_difference;
		static Dynamic lime_hb_set_symmetric_difference_dyn() { return lime_hb_set_symmetric_difference;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *) > lime_hb_set_union;
		static Dynamic lime_hb_set_union_dyn() { return lime_hb_set_union;}
		static ::cpp::Function< void  ( ::hx::Object *, ::hx::Object *, ::hx::Object *) > lime_hb_shape;
		static Dynamic lime_hb_shape_dyn() { return lime_hb_shape;}
		static ::cpp::Function< int  ( ::hx::Object *,int) > lime_vorbis_file_bitrate;
		static Dynamic lime_vorbis_file_bitrate_dyn() { return lime_vorbis_file_bitrate;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_vorbis_file_bitrate_instant;
		static Dynamic lime_vorbis_file_bitrate_instant_dyn() { return lime_vorbis_file_bitrate_instant;}
		static ::cpp::Function< void  ( ::hx::Object *) > lime_vorbis_file_clear;
		static Dynamic lime_vorbis_file_clear_dyn() { return lime_vorbis_file_clear;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_vorbis_file_comment;
		static Dynamic lime_vorbis_file_comment_dyn() { return lime_vorbis_file_comment;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > lime_vorbis_file_crosslap;
		static Dynamic lime_vorbis_file_crosslap_dyn() { return lime_vorbis_file_crosslap;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_vorbis_file_from_bytes;
		static Dynamic lime_vorbis_file_from_bytes_dyn() { return lime_vorbis_file_from_bytes;}
		static ::cpp::Function<  ::hx::Object *  (::String) > lime_vorbis_file_from_file;
		static Dynamic lime_vorbis_file_from_file_dyn() { return lime_vorbis_file_from_file;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_vorbis_file_info;
		static Dynamic lime_vorbis_file_info_dyn() { return lime_vorbis_file_info;}
		static ::cpp::Function< int  ( ::hx::Object *, ::hx::Object *, ::hx::Object *) > lime_vorbis_file_pcm_seek;
		static Dynamic lime_vorbis_file_pcm_seek_dyn() { return lime_vorbis_file_pcm_seek;}
		static ::cpp::Function< int  ( ::hx::Object *, ::hx::Object *, ::hx::Object *) > lime_vorbis_file_pcm_seek_lap;
		static Dynamic lime_vorbis_file_pcm_seek_lap_dyn() { return lime_vorbis_file_pcm_seek_lap;}
		static ::cpp::Function< int  ( ::hx::Object *, ::hx::Object *, ::hx::Object *) > lime_vorbis_file_pcm_seek_page;
		static Dynamic lime_vorbis_file_pcm_seek_page_dyn() { return lime_vorbis_file_pcm_seek_page;}
		static ::cpp::Function< int  ( ::hx::Object *, ::hx::Object *, ::hx::Object *) > lime_vorbis_file_pcm_seek_page_lap;
		static Dynamic lime_vorbis_file_pcm_seek_page_lap_dyn() { return lime_vorbis_file_pcm_seek_page_lap;}
		static ::cpp::Function< int  ( ::hx::Object *, ::hx::Object *, ::hx::Object *) > lime_vorbis_file_raw_seek;
		static Dynamic lime_vorbis_file_raw_seek_dyn() { return lime_vorbis_file_raw_seek;}
		static ::cpp::Function< int  ( ::hx::Object *, ::hx::Object *, ::hx::Object *) > lime_vorbis_file_raw_seek_lap;
		static Dynamic lime_vorbis_file_raw_seek_lap_dyn() { return lime_vorbis_file_raw_seek_lap;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_vorbis_file_pcm_tell;
		static Dynamic lime_vorbis_file_pcm_tell_dyn() { return lime_vorbis_file_pcm_tell;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_vorbis_file_pcm_total;
		static Dynamic lime_vorbis_file_pcm_total_dyn() { return lime_vorbis_file_pcm_total;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *) > lime_vorbis_file_raw_tell;
		static Dynamic lime_vorbis_file_raw_tell_dyn() { return lime_vorbis_file_raw_tell;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *,int) > lime_vorbis_file_raw_total;
		static Dynamic lime_vorbis_file_raw_total_dyn() { return lime_vorbis_file_raw_total;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *,int,int,bool,int,bool) > lime_vorbis_file_read;
		static Dynamic lime_vorbis_file_read_dyn() { return lime_vorbis_file_read;}
		static ::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *,int) > lime_vorbis_file_read_float;
		static Dynamic lime_vorbis_file_read_float_dyn() { return lime_vorbis_file_read_float;}
		static ::cpp::Function< bool  ( ::hx::Object *) > lime_vorbis_file_seekable;
		static Dynamic lime_vorbis_file_seekable_dyn() { return lime_vorbis_file_seekable;}
		static ::cpp::Function< int  ( ::hx::Object *,int) > lime_vorbis_file_serial_number;
		static Dynamic lime_vorbis_file_serial_number_dyn() { return lime_vorbis_file_serial_number;}
		static ::cpp::Function< int  ( ::hx::Object *) > lime_vorbis_file_streams;
		static Dynamic lime_vorbis_file_streams_dyn() { return lime_vorbis_file_streams;}
		static ::cpp::Function< int  ( ::hx::Object *,Float) > lime_vorbis_file_time_seek;
		static Dynamic lime_vorbis_file_time_seek_dyn() { return lime_vorbis_file_time_seek;}
		static ::cpp::Function< int  ( ::hx::Object *,Float) > lime_vorbis_file_time_seek_lap;
		static Dynamic lime_vorbis_file_time_seek_lap_dyn() { return lime_vorbis_file_time_seek_lap;}
		static ::cpp::Function< int  ( ::hx::Object *,Float) > lime_vorbis_file_time_seek_page;
		static Dynamic lime_vorbis_file_time_seek_page_dyn() { return lime_vorbis_file_time_seek_page;}
		static ::cpp::Function< int  ( ::hx::Object *,Float) > lime_vorbis_file_time_seek_page_lap;
		static Dynamic lime_vorbis_file_time_seek_page_lap_dyn() { return lime_vorbis_file_time_seek_page_lap;}
		static ::cpp::Function< Float  ( ::hx::Object *) > lime_vorbis_file_time_tell;
		static Dynamic lime_vorbis_file_time_tell_dyn() { return lime_vorbis_file_time_tell;}
		static ::cpp::Function< Float  ( ::hx::Object *,int) > lime_vorbis_file_time_total;
		static Dynamic lime_vorbis_file_time_total_dyn() { return lime_vorbis_file_time_total;}
};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_NativeCFFI */ 
