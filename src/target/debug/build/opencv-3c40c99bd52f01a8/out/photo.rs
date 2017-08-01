
use libc::{ c_void, c_char, size_t };
use std::ffi::{ CStr, CString };
pub const CV_INPAINT_NS:i32 = 0;
pub const CV_INPAINT_TELEA:i32 = 1;

include!(concat!(env!("OUT_DIR"), "/photo.consts.rs"));

// identifier: cv_fastNlMeansDenoisingColored_InputArray_src_OutputArray_dst_float_h_float_hColor_int_templateWindowSize_int_searchWindowSize
///
/// default value for arguments:
///   - h: default 3
///   - hColor: default 3
///   - templateWindowSize: default 7
///   - searchWindowSize: default 21
pub fn fast_nl_means_denoising_colored(src:& ::core::Mat, dst:& ::core::Mat, h: f32, hColor: f32, templateWindowSize: i32, searchWindowSize: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_photo_cv_fastNlMeansDenoisingColored_InputArray_src_OutputArray_dst_float_h_float_hColor_int_templateWindowSize_int_searchWindowSize(src.as_raw_Mat(), dst.as_raw_Mat(), h, hColor, templateWindowSize, searchWindowSize);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_fastNlMeansDenoising_InputArray_src_OutputArray_dst_float_h_int_templateWindowSize_int_searchWindowSize
///
/// default value for arguments:
///   - h: default 3
///   - templateWindowSize: default 7
///   - searchWindowSize: default 21
pub fn fast_nl_means_denoising(src:& ::core::Mat, dst:& ::core::Mat, h: f32, templateWindowSize: i32, searchWindowSize: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_photo_cv_fastNlMeansDenoising_InputArray_src_OutputArray_dst_float_h_int_templateWindowSize_int_searchWindowSize(src.as_raw_Mat(), dst.as_raw_Mat(), h, templateWindowSize, searchWindowSize);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_inpaint_InputArray_src_InputArray_inpaintMask_OutputArray_dst_double_inpaintRadius_int_flags
/// restores the damaged image areas using one of the available intpainting algorithms
pub fn inpaint(src:& ::core::Mat, inpaintMask:& ::core::Mat, dst:& ::core::Mat, inpaintRadius: f64, flags: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_photo_cv_inpaint_InputArray_src_InputArray_inpaintMask_OutputArray_dst_double_inpaintRadius_int_flags(src.as_raw_Mat(), inpaintMask.as_raw_Mat(), dst.as_raw_Mat(), inpaintRadius, flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

