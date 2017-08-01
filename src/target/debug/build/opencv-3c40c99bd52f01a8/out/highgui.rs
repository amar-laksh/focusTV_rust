
use libc::{ c_void, c_char, size_t };
use std::ffi::{ CStr, CString };
pub const CV_CAP_ANDROID:i32 = 1000;
pub const CV_CAP_ANDROID_ANTIBANDING_50HZ:i32 = 0;
pub const CV_CAP_ANDROID_COLOR_FRAME_BGR:i32 = 0;
pub const CV_CAP_ANDROID_COLOR_FRAME_BGRA:i32 = 3;
pub const CV_CAP_ANDROID_COLOR_FRAME_RGB:i32 = 2;
pub const CV_CAP_ANDROID_COLOR_FRAME_RGBA:i32 = 4;
pub const CV_CAP_ANDROID_FLASH_MODE_AUTO:i32 = 0;
pub const CV_CAP_ANDROID_FOCUS_MODE_AUTO:i32 = 0;
pub const CV_CAP_ANDROID_GREY_FRAME:i32 = 1;
pub const CV_CAP_ANDROID_WHITE_BALANCE_AUTO:i32 = 0;
pub const CV_CAP_ANY:i32 = 0;
pub const CV_CAP_AVFOUNDATION:i32 = 1200;
pub const CV_CAP_CMU1394:i32 = 300;
pub const CV_CAP_DC1394:i32 = 300;
pub const CV_CAP_DSHOW:i32 = 700;
pub const CV_CAP_FIREWARE:i32 = 300;
pub const CV_CAP_FIREWIRE:i32 = 300;
pub const CV_CAP_GIGANETIX:i32 = 1300;
pub const CV_CAP_GSTREAMER_QUEUE_LENGTH:i32 = 200;
pub const CV_CAP_IEEE1394:i32 = 300;
pub const CV_CAP_INTELPERC:i32 = 1500;
pub const CV_CAP_INTELPERC_DEPTH_MAP:i32 = 0;
pub const CV_CAP_INTELPERC_IMAGE:i32 = 3;
pub const CV_CAP_INTELPERC_IR_MAP:i32 = 2;
pub const CV_CAP_INTELPERC_UVDEPTH_MAP:i32 = 1;
pub const CV_CAP_MIL:i32 = 100;
pub const CV_CAP_MSMF:i32 = 1400;
pub const CV_CAP_OPENNI:i32 = 900;
pub const CV_CAP_OPENNI_ASUS:i32 = 910;
pub const CV_CAP_OPENNI_BGR_IMAGE:i32 = 5;
pub const CV_CAP_OPENNI_DEPTH_MAP:i32 = 0;
pub const CV_CAP_OPENNI_DISPARITY_MAP:i32 = 2;
pub const CV_CAP_OPENNI_DISPARITY_MAP_32F:i32 = 3;
pub const CV_CAP_OPENNI_GRAY_IMAGE:i32 = 6;
pub const CV_CAP_OPENNI_POINT_CLOUD_MAP:i32 = 1;
pub const CV_CAP_OPENNI_QVGA_30HZ:i32 = 3;
pub const CV_CAP_OPENNI_QVGA_60HZ:i32 = 4;
pub const CV_CAP_OPENNI_SXGA_15HZ:i32 = 1;
pub const CV_CAP_OPENNI_SXGA_30HZ:i32 = 2;
pub const CV_CAP_OPENNI_VALID_DEPTH_MASK:i32 = 4;
pub const CV_CAP_OPENNI_VGA_30HZ:i32 = 0;
pub const CV_CAP_PROP_ANDROID_ANTIBANDING:i32 = 8004;
pub const CV_CAP_PROP_ANDROID_EXPOSE_LOCK:i32 = 8009;
pub const CV_CAP_PROP_ANDROID_FLASH_MODE:i32 = 8001;
pub const CV_CAP_PROP_ANDROID_FOCAL_LENGTH:i32 = 8005;
pub const CV_CAP_PROP_ANDROID_FOCUS_DISTANCE_FAR:i32 = 8008;
pub const CV_CAP_PROP_ANDROID_FOCUS_DISTANCE_NEAR:i32 = 8006;
pub const CV_CAP_PROP_ANDROID_FOCUS_DISTANCE_OPTIMAL:i32 = 8007;
pub const CV_CAP_PROP_ANDROID_FOCUS_MODE:i32 = 8002;
pub const CV_CAP_PROP_ANDROID_WHITEBALANCE_LOCK:i32 = 8010;
pub const CV_CAP_PROP_ANDROID_WHITE_BALANCE:i32 = 8003;
pub const CV_CAP_PROP_AUTOGRAB:i32 = 1024;
pub const CV_CAP_PROP_AUTO_EXPOSURE:i32 = 21;
pub const CV_CAP_PROP_BACKLIGHT:i32 = 32;
pub const CV_CAP_PROP_BRIGHTNESS:i32 = 10;
pub const CV_CAP_PROP_BUFFERSIZE:i32 = 38;
pub const CV_CAP_PROP_CONTRAST:i32 = 11;
pub const CV_CAP_PROP_CONVERT_RGB:i32 = 16;
pub const CV_CAP_PROP_DC1394_MODE_AUTO:i32 = -2;
pub const CV_CAP_PROP_DC1394_MODE_MANUAL:i32 = -3;
pub const CV_CAP_PROP_DC1394_MODE_ONE_PUSH_AUTO:i32 = -1;
pub const CV_CAP_PROP_DC1394_OFF:i32 = -4;
pub const CV_CAP_PROP_EXPOSURE:i32 = 15;
pub const CV_CAP_PROP_FOCUS:i32 = 28;
pub const CV_CAP_PROP_FORMAT:i32 = 8;
pub const CV_CAP_PROP_FOURCC:i32 = 6;
pub const CV_CAP_PROP_FPS:i32 = 5;
pub const CV_CAP_PROP_FRAME_COUNT:i32 = 7;
pub const CV_CAP_PROP_FRAME_HEIGHT:i32 = 4;
pub const CV_CAP_PROP_FRAME_WIDTH:i32 = 3;
pub const CV_CAP_PROP_GAIN:i32 = 14;
pub const CV_CAP_PROP_GAMMA:i32 = 22;
pub const CV_CAP_PROP_GIGA_FRAME_HEIGH_MAX:i32 = 10004;
pub const CV_CAP_PROP_GIGA_FRAME_OFFSET_X:i32 = 10001;
pub const CV_CAP_PROP_GIGA_FRAME_OFFSET_Y:i32 = 10002;
pub const CV_CAP_PROP_GIGA_FRAME_SENS_HEIGH:i32 = 10006;
pub const CV_CAP_PROP_GIGA_FRAME_SENS_WIDTH:i32 = 10005;
pub const CV_CAP_PROP_GIGA_FRAME_WIDTH_MAX:i32 = 10003;
pub const CV_CAP_PROP_GUID:i32 = 29;
pub const CV_CAP_PROP_HUE:i32 = 13;
pub const CV_CAP_PROP_INTELPERC_DEPTH_CONFIDENCE_THRESHOLD:i32 = 11005;
pub const CV_CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_HORZ:i32 = 11006;
pub const CV_CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_VERT:i32 = 11007;
pub const CV_CAP_PROP_INTELPERC_DEPTH_LOW_CONFIDENCE_VALUE:i32 = 11003;
pub const CV_CAP_PROP_INTELPERC_DEPTH_SATURATION_VALUE:i32 = 11004;
pub const CV_CAP_PROP_INTELPERC_PROFILE_COUNT:i32 = 11001;
pub const CV_CAP_PROP_INTELPERC_PROFILE_IDX:i32 = 11002;
pub const CV_CAP_PROP_IOS_DEVICE_EXPOSURE:i32 = 9002;
pub const CV_CAP_PROP_IOS_DEVICE_FLASH:i32 = 9003;
pub const CV_CAP_PROP_IOS_DEVICE_FOCUS:i32 = 9001;
pub const CV_CAP_PROP_IOS_DEVICE_TORCH:i32 = 9005;
pub const CV_CAP_PROP_IOS_DEVICE_WHITEBALANCE:i32 = 9004;
pub const CV_CAP_PROP_IRIS:i32 = 36;
pub const CV_CAP_PROP_ISO_SPEED:i32 = 30;
pub const CV_CAP_PROP_MAX_DC1394:i32 = 31;
pub const CV_CAP_PROP_MODE:i32 = 9;
pub const CV_CAP_PROP_MONOCROME:i32 = 19;
pub const CV_CAP_PROP_OPENNI_APPROX_FRAME_SYNC:i32 = 105;
pub const CV_CAP_PROP_OPENNI_BASELINE:i32 = 102;
pub const CV_CAP_PROP_OPENNI_CIRCLE_BUFFER:i32 = 107;
pub const CV_CAP_PROP_OPENNI_FOCAL_LENGTH:i32 = 103;
pub const CV_CAP_PROP_OPENNI_FRAME_MAX_DEPTH:i32 = 101;
pub const CV_CAP_PROP_OPENNI_GENERATOR_PRESENT:i32 = 109;
pub const CV_CAP_PROP_OPENNI_MAX_BUFFER_SIZE:i32 = 106;
pub const CV_CAP_PROP_OPENNI_MAX_TIME_DURATION:i32 = 108;
pub const CV_CAP_PROP_OPENNI_OUTPUT_MODE:i32 = 100;
pub const CV_CAP_PROP_OPENNI_REGISTRATION:i32 = 104;
pub const CV_CAP_PROP_PAN:i32 = 33;
pub const CV_CAP_PROP_POS_AVI_RATIO:i32 = 2;
pub const CV_CAP_PROP_POS_FRAMES:i32 = 1;
pub const CV_CAP_PROP_POS_MSEC:i32 = 0;
pub const CV_CAP_PROP_PREVIEW_FORMAT:i32 = 1026;
pub const CV_CAP_PROP_PVAPI_BINNINGX:i32 = 304;
pub const CV_CAP_PROP_PVAPI_BINNINGY:i32 = 305;
pub const CV_CAP_PROP_PVAPI_DECIMATIONHORIZONTAL:i32 = 302;
pub const CV_CAP_PROP_PVAPI_DECIMATIONVERTICAL:i32 = 303;
pub const CV_CAP_PROP_PVAPI_FRAMESTARTTRIGGERMODE:i32 = 301;
pub const CV_CAP_PROP_PVAPI_MULTICASTIP:i32 = 300;
pub const CV_CAP_PROP_PVAPI_PIXELFORMAT:i32 = 306;
pub const CV_CAP_PROP_RECTIFICATION:i32 = 18;
pub const CV_CAP_PROP_ROLL:i32 = 35;
pub const CV_CAP_PROP_SATURATION:i32 = 12;
pub const CV_CAP_PROP_SETTINGS:i32 = 37;
pub const CV_CAP_PROP_SHARPNESS:i32 = 20;
pub const CV_CAP_PROP_SUPPORTED_PREVIEW_SIZES_STRING:i32 = 1025;
pub const CV_CAP_PROP_TEMPERATURE:i32 = 23;
pub const CV_CAP_PROP_TILT:i32 = 34;
pub const CV_CAP_PROP_TRIGGER:i32 = 24;
pub const CV_CAP_PROP_TRIGGER_DELAY:i32 = 25;
pub const CV_CAP_PROP_WHITE_BALANCE_U:i32 = 17;
pub const CV_CAP_PROP_WHITE_BALANCE_V:i32 = 26;
pub const CV_CAP_PROP_XI_AEAG:i32 = 415;
pub const CV_CAP_PROP_XI_AEAG_LEVEL:i32 = 419;
pub const CV_CAP_PROP_XI_AE_MAX_LIMIT:i32 = 417;
pub const CV_CAP_PROP_XI_AG_MAX_LIMIT:i32 = 418;
pub const CV_CAP_PROP_XI_AUTO_WB:i32 = 414;
pub const CV_CAP_PROP_XI_DATA_FORMAT:i32 = 401;
pub const CV_CAP_PROP_XI_DOWNSAMPLING:i32 = 400;
pub const CV_CAP_PROP_XI_EXP_PRIORITY:i32 = 416;
pub const CV_CAP_PROP_XI_GPI_LEVEL:i32 = 408;
pub const CV_CAP_PROP_XI_GPI_MODE:i32 = 407;
pub const CV_CAP_PROP_XI_GPI_SELECTOR:i32 = 406;
pub const CV_CAP_PROP_XI_GPO_MODE:i32 = 410;
pub const CV_CAP_PROP_XI_GPO_SELECTOR:i32 = 409;
pub const CV_CAP_PROP_XI_LED_MODE:i32 = 412;
pub const CV_CAP_PROP_XI_LED_SELECTOR:i32 = 411;
pub const CV_CAP_PROP_XI_MANUAL_WB:i32 = 413;
pub const CV_CAP_PROP_XI_OFFSET_X:i32 = 402;
pub const CV_CAP_PROP_XI_OFFSET_Y:i32 = 403;
pub const CV_CAP_PROP_XI_TIMEOUT:i32 = 420;
pub const CV_CAP_PROP_XI_TRG_SOFTWARE:i32 = 405;
pub const CV_CAP_PROP_XI_TRG_SOURCE:i32 = 404;
pub const CV_CAP_PROP_ZOOM:i32 = 27;
pub const CV_CAP_PVAPI:i32 = 800;
pub const CV_CAP_QT:i32 = 500;
pub const CV_CAP_STEREO:i32 = 400;
pub const CV_CAP_TYZX:i32 = 400;
pub const CV_CAP_UNICAP:i32 = 600;
pub const CV_CAP_V4L:i32 = 200;
pub const CV_CAP_V4L2:i32 = 200;
pub const CV_CAP_VFW:i32 = 200;
pub const CV_CAP_XIAPI:i32 = 1100;
pub const CV_CHECKBOX:i32 = 1;
pub const CV_CVTIMG_FLIP:i32 = 1;
pub const CV_CVTIMG_SWAP_RB:i32 = 2;
pub const CV_EVENT_FLAG_ALTKEY:i32 = 32;
pub const CV_EVENT_FLAG_CTRLKEY:i32 = 8;
pub const CV_EVENT_FLAG_LBUTTON:i32 = 1;
pub const CV_EVENT_FLAG_MBUTTON:i32 = 4;
pub const CV_EVENT_FLAG_RBUTTON:i32 = 2;
pub const CV_EVENT_FLAG_SHIFTKEY:i32 = 16;
pub const CV_EVENT_LBUTTONDBLCLK:i32 = 7;
pub const CV_EVENT_LBUTTONDOWN:i32 = 1;
pub const CV_EVENT_LBUTTONUP:i32 = 4;
pub const CV_EVENT_MBUTTONDBLCLK:i32 = 9;
pub const CV_EVENT_MBUTTONDOWN:i32 = 3;
pub const CV_EVENT_MBUTTONUP:i32 = 6;
pub const CV_EVENT_MOUSEMOVE:i32 = 0;
pub const CV_EVENT_RBUTTONDBLCLK:i32 = 8;
pub const CV_EVENT_RBUTTONDOWN:i32 = 2;
pub const CV_EVENT_RBUTTONUP:i32 = 5;
pub const CV_FONT_BLACK:i32 = 87;
pub const CV_FONT_BOLD:i32 = 75;
pub const CV_FONT_DEMIBOLD:i32 = 63;
pub const CV_FONT_LIGHT:i32 = 25;
pub const CV_FONT_NORMAL:i32 = 50;
pub const CV_GUI_EXPANDED:i32 = 0x00000000;
pub const CV_GUI_NORMAL:i32 = 0x00000010;
pub const CV_IMWRITE_JPEG_QUALITY:i32 = 1;
pub const CV_IMWRITE_PNG_BILEVEL:i32 = 18;
pub const CV_IMWRITE_PNG_COMPRESSION:i32 = 16;
pub const CV_IMWRITE_PNG_STRATEGY:i32 = 17;
pub const CV_IMWRITE_PNG_STRATEGY_DEFAULT:i32 = 0;
pub const CV_IMWRITE_PNG_STRATEGY_FILTERED:i32 = 1;
pub const CV_IMWRITE_PNG_STRATEGY_FIXED:i32 = 4;
pub const CV_IMWRITE_PNG_STRATEGY_HUFFMAN_ONLY:i32 = 2;
pub const CV_IMWRITE_PNG_STRATEGY_RLE:i32 = 3;
pub const CV_IMWRITE_PXM_BINARY:i32 = 32;
pub const CV_LOAD_IMAGE_ANYCOLOR:i32 = 4;
pub const CV_LOAD_IMAGE_ANYDEPTH:i32 = 2;
pub const CV_LOAD_IMAGE_COLOR:i32 = 1;
pub const CV_LOAD_IMAGE_GRAYSCALE:i32 = 0;
pub const CV_LOAD_IMAGE_UNCHANGED:i32 = -1;
pub const CV_PUSH_BUTTON:i32 = 0;
pub const CV_RADIOBOX:i32 = 2;
pub const CV_STYLE_ITALIC:i32 = 1;
pub const CV_STYLE_NORMAL:i32 = 0;
pub const CV_STYLE_OBLIQUE:i32 = 2;
pub const CV_TYZX_COLOR:i32 = 402;
pub const CV_TYZX_LEFT:i32 = 400;
pub const CV_TYZX_RIGHT:i32 = 401;
pub const CV_TYZX_Z:i32 = 403;
pub const CV_WINDOW_AUTOSIZE:i32 = 0x00000001;
pub const CV_WINDOW_FREERATIO:i32 = 0x00000100;
pub const CV_WINDOW_FULLSCREEN:i32 = 1;
pub const CV_WINDOW_KEEPRATIO:i32 = 0x00000000;
pub const CV_WINDOW_NORMAL:i32 = 0x00000000;
pub const CV_WINDOW_OPENGL:i32 = 0x00001000;
pub const CV_WND_PROP_ASPECTRATIO:i32 = 2;
pub const CV_WND_PROP_AUTOSIZE:i32 = 1;
pub const CV_WND_PROP_FULLSCREEN:i32 = 0;
pub const CV_WND_PROP_OPENGL:i32 = 3;
pub const EVENT_FLAG_ALTKEY:i32 = 32;
pub const EVENT_FLAG_CTRLKEY:i32 = 8;
pub const EVENT_FLAG_LBUTTON:i32 = 1;
pub const EVENT_FLAG_MBUTTON:i32 = 4;
pub const EVENT_FLAG_RBUTTON:i32 = 2;
pub const EVENT_FLAG_SHIFTKEY:i32 = 16;
pub const EVENT_LBUTTONDBLCLK:i32 = 7;
pub const EVENT_LBUTTONDOWN:i32 = 1;
pub const EVENT_LBUTTONUP:i32 = 4;
pub const EVENT_MBUTTONDBLCLK:i32 = 9;
pub const EVENT_MBUTTONDOWN:i32 = 3;
pub const EVENT_MBUTTONUP:i32 = 6;
pub const EVENT_MOUSEMOVE:i32 = 0;
pub const EVENT_RBUTTONDBLCLK:i32 = 8;
pub const EVENT_RBUTTONDOWN:i32 = 2;
pub const EVENT_RBUTTONUP:i32 = 5;
pub const IMREAD_ANYCOLOR:i32 = 4;
pub const IMREAD_ANYDEPTH:i32 = 2;
pub const IMREAD_COLOR:i32 = 1;
pub const IMREAD_GRAYSCALE:i32 = 0;
pub const IMREAD_UNCHANGED:i32 = -1;
pub const IMWRITE_JPEG_QUALITY:i32 = 1;
pub const IMWRITE_PNG_BILEVEL:i32 = 18;
pub const IMWRITE_PNG_COMPRESSION:i32 = 16;
pub const IMWRITE_PNG_STRATEGY:i32 = 17;
pub const IMWRITE_PNG_STRATEGY_DEFAULT:i32 = 0;
pub const IMWRITE_PNG_STRATEGY_FILTERED:i32 = 1;
pub const IMWRITE_PNG_STRATEGY_FIXED:i32 = 4;
pub const IMWRITE_PNG_STRATEGY_HUFFMAN_ONLY:i32 = 2;
pub const IMWRITE_PNG_STRATEGY_RLE:i32 = 3;
pub const IMWRITE_PXM_BINARY:i32 = 32;

include!(concat!(env!("OUT_DIR"), "/highgui.consts.rs"));

// identifier: CV_FOURCC_char_c1_char_c2_char_c3_char_c4
pub fn cv_fourcc(c1: i8, c2: i8, c3: i8, c4: i8) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_highgui_CV_FOURCC_char_c1_char_c2_char_c3_char_c4(c1, c2, c3, c4);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cvDestroyAllWindows
pub fn cv_destroy_all_windows() -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cvDestroyAllWindows();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cvStartWindowThread
pub fn cv_start_window_thread() -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_highgui_cvStartWindowThread();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cvStopLoop
pub fn cv_stop_loop() -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cvStopLoop();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cvWaitKey_int_delay
///
/// default value for arguments:
///   - delay: default 0
pub fn cv_wait_key(delay: i32) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_highgui_cvWaitKey_int_delay(delay);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_destroyAllWindows
pub fn destroy_all_windows() -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_destroyAllWindows();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_destroyWindow_String_winname
pub fn destroy_window(winname:&str) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_destroyWindow_String_winname(CString::new(winname).unwrap().as_ptr());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_displayOverlay_String_winname_String_text_int_delayms
///
/// default value for arguments:
///   - delayms: default 0
pub fn display_overlay(winname:&str, text:&str, delayms: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_displayOverlay_String_winname_String_text_int_delayms(CString::new(winname).unwrap().as_ptr(), CString::new(text).unwrap().as_ptr(), delayms);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_displayStatusBar_String_winname_String_text_int_delayms
///
/// default value for arguments:
///   - delayms: default 0
pub fn display_status_bar(winname:&str, text:&str, delayms: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_displayStatusBar_String_winname_String_text_int_delayms(CString::new(winname).unwrap().as_ptr(), CString::new(text).unwrap().as_ptr(), delayms);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_getTrackbarPos_String_trackbarname_String_winname
pub fn get_trackbar_pos(trackbarname:&str, winname:&str) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_getTrackbarPos_String_trackbarname_String_winname(CString::new(trackbarname).unwrap().as_ptr(), CString::new(winname).unwrap().as_ptr());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_getWindowProperty_String_winname_int_prop_id
pub fn get_window_property(winname:&str, prop_id: i32) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_getWindowProperty_String_winname_int_prop_id(CString::new(winname).unwrap().as_ptr(), prop_id);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_imencode_String_ext_InputArray_img_VectorOfuchar_buf_VectorOfint_params
///
/// default value for arguments:
///   - params: default vector<int>()
pub fn imencode(ext:&str, img:& ::core::Mat, buf:& ::types::VectorOfuchar, params:& ::types::VectorOfint) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_imencode_String_ext_InputArray_img_VectorOfuchar_buf_VectorOfint_params(CString::new(ext).unwrap().as_ptr(), img.as_raw_Mat(), buf.as_raw_VectorOfuchar(), params.as_raw_VectorOfint());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_imread_String_filename_int_flags
///
/// default value for arguments:
///   - flags: default 1
pub fn imread(filename:&str, flags: i32) -> Result<::core::Mat,String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_imread_String_filename_int_flags(CString::new(filename).unwrap().as_ptr(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::core::Mat{ ptr: rv.result })
  }
}

// identifier: cv_imshow_String_winname_InputArray_mat
pub fn imshow(winname:&str, mat:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_imshow_String_winname_InputArray_mat(CString::new(winname).unwrap().as_ptr(), mat.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_imwrite_String_filename_InputArray_img_VectorOfint_params
///
/// default value for arguments:
///   - params: default vector<int>()
pub fn imwrite(filename:&str, img:& ::core::Mat, params:& ::types::VectorOfint) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_imwrite_String_filename_InputArray_img_VectorOfint_params(CString::new(filename).unwrap().as_ptr(), img.as_raw_Mat(), params.as_raw_VectorOfint());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_loadWindowParameters_String_windowName
pub fn load_window_parameters(windowName:&str) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_loadWindowParameters_String_windowName(CString::new(windowName).unwrap().as_ptr());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_moveWindow_String_winname_int_x_int_y
pub fn move_window(winname:&str, x: i32, y: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_moveWindow_String_winname_int_x_int_y(CString::new(winname).unwrap().as_ptr(), x, y);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_namedWindow_String_winname_int_flags
///
/// default value for arguments:
///   - flags: default WINDOW_AUTOSIZE
pub fn named_window(winname:&str, flags: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_namedWindow_String_winname_int_flags(CString::new(winname).unwrap().as_ptr(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_resizeWindow_String_winname_int_width_int_height
pub fn resize_window(winname:&str, width: i32, height: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_resizeWindow_String_winname_int_width_int_height(CString::new(winname).unwrap().as_ptr(), width, height);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_saveWindowParameters_String_windowName
pub fn save_window_parameters(windowName:&str) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_saveWindowParameters_String_windowName(CString::new(windowName).unwrap().as_ptr());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_setOpenGlContext_String_winname
pub fn set_open_gl_context(winname:&str) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_setOpenGlContext_String_winname(CString::new(winname).unwrap().as_ptr());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_setTrackbarPos_String_trackbarname_String_winname_int_pos
pub fn set_trackbar_pos(trackbarname:&str, winname:&str, pos: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_setTrackbarPos_String_trackbarname_String_winname_int_pos(CString::new(trackbarname).unwrap().as_ptr(), CString::new(winname).unwrap().as_ptr(), pos);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_setWindowProperty_String_winname_int_prop_id_double_prop_value
pub fn set_window_property(winname:&str, prop_id: i32, prop_value: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_setWindowProperty_String_winname_int_prop_id_double_prop_value(CString::new(winname).unwrap().as_ptr(), prop_id, prop_value);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_startWindowThread
pub fn start_window_thread() -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_startWindowThread();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_stopLoop
pub fn stop_loop() -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_stopLoop();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_updateWindow_String_winname
pub fn update_window(winname:&str) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_updateWindow_String_winname(CString::new(winname).unwrap().as_ptr());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_waitKey_int_delay
///
/// default value for arguments:
///   - delay: default 0
pub fn wait_key(delay: i32) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_highgui_cv_waitKey_int_delay(delay);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}


// boxed class cv::VideoCapture
#[allow(dead_code)]
pub struct VideoCapture {
    pub ptr: *mut c_void
}
impl Drop for ::highgui::VideoCapture {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_VideoCapture(self.ptr) };
    }
}
impl ::highgui::VideoCapture {
    pub fn as_raw_VideoCapture(&self) -> *mut c_void { self.ptr }
}
impl VideoCapture {

  // identifier: cv_VideoCapture_VideoCapture
  pub fn default() -> Result<::highgui::VideoCapture,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoCapture_VideoCapture();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::highgui::VideoCapture{ ptr: rv.result })
    }
  }

  // identifier: cv_VideoCapture_VideoCapture_String_filename
  pub fn new(filename:&str) -> Result<::highgui::VideoCapture,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoCapture_VideoCapture_String_filename(CString::new(filename).unwrap().as_ptr());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::highgui::VideoCapture{ ptr: rv.result })
    }
  }

  // identifier: cv_VideoCapture_VideoCapture_int_device
  pub fn device(device: i32) -> Result<::highgui::VideoCapture,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoCapture_VideoCapture_int_device(device);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::highgui::VideoCapture{ ptr: rv.result })
    }
  }

  // identifier: cv_VideoCapture_open_String_filename
  pub fn open(&mut self, filename:&str) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoCapture_open_String_filename(self.as_raw_VideoCapture(), CString::new(filename).unwrap().as_ptr());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_VideoCapture_open_int_device
  pub fn open_device(&mut self, device: i32) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoCapture_open_int_device(self.as_raw_VideoCapture(), device);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_VideoCapture_isOpened
  pub fn is_opened(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoCapture_isOpened(self.as_raw_VideoCapture());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_VideoCapture_release
  pub fn release(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoCapture_release(self.as_raw_VideoCapture());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_VideoCapture_grab
  pub fn grab(&mut self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoCapture_grab(self.as_raw_VideoCapture());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_VideoCapture_retrieve_Mat_image_int_channel
  ///
  /// default value for arguments:
  ///   - channel: default 0
  pub fn retrieve(&mut self, image:& ::core::Mat, channel: i32) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoCapture_retrieve_Mat_image_int_channel(self.as_raw_VideoCapture(), image.as_raw_Mat(), channel);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_VideoCapture_read_Mat_image
  pub fn read(&mut self, image:& ::core::Mat) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoCapture_read_Mat_image(self.as_raw_VideoCapture(), image.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_VideoCapture_set_int_propId_double_value
  pub fn set(&mut self, propId: i32, value: f64) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoCapture_set_int_propId_double_value(self.as_raw_VideoCapture(), propId, value);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_VideoCapture_get_int_propId
  pub fn get(&mut self, propId: i32) -> Result<f64,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoCapture_get_int_propId(self.as_raw_VideoCapture(), propId);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::VideoWriter
#[allow(dead_code)]
pub struct VideoWriter {
    pub ptr: *mut c_void
}
impl Drop for ::highgui::VideoWriter {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_VideoWriter(self.ptr) };
    }
}
impl ::highgui::VideoWriter {
    pub fn as_raw_VideoWriter(&self) -> *mut c_void { self.ptr }
}
impl VideoWriter {

  // identifier: cv_VideoWriter_VideoWriter
  pub fn default() -> Result<::highgui::VideoWriter,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoWriter_VideoWriter();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::highgui::VideoWriter{ ptr: rv.result })
    }
  }

  // identifier: cv_VideoWriter_VideoWriter_String_filename_int_fourcc_double_fps_Size_frameSize_bool_isColor
  ///
  /// default value for arguments:
  ///   - isColor: default true
  pub fn new(filename:&str, fourcc: i32, fps: f64, frameSize: ::core::Size, isColor: bool) -> Result<::highgui::VideoWriter,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoWriter_VideoWriter_String_filename_int_fourcc_double_fps_Size_frameSize_bool_isColor(CString::new(filename).unwrap().as_ptr(), fourcc, fps, frameSize, isColor);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::highgui::VideoWriter{ ptr: rv.result })
    }
  }

  // identifier: cv_VideoWriter_open_String_filename_int_fourcc_double_fps_Size_frameSize_bool_isColor
  ///
  /// default value for arguments:
  ///   - isColor: default true
  pub fn open(&mut self, filename:&str, fourcc: i32, fps: f64, frameSize: ::core::Size, isColor: bool) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoWriter_open_String_filename_int_fourcc_double_fps_Size_frameSize_bool_isColor(self.as_raw_VideoWriter(), CString::new(filename).unwrap().as_ptr(), fourcc, fps, frameSize, isColor);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_VideoWriter_isOpened
  pub fn is_opened(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoWriter_isOpened(self.as_raw_VideoWriter());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_VideoWriter_release
  pub fn release(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoWriter_release(self.as_raw_VideoWriter());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_VideoWriter_write_Mat_image
  pub fn write(&mut self, image:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_highgui_cv_VideoWriter_write_Mat_image(self.as_raw_VideoWriter(), image.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

}
