
use libc::{ c_void, c_char, size_t };
use std::ffi::{ CStr, CString };
pub const CV_LKFLOW_GET_MIN_EIGENVALS:i32 = 8;
pub const CV_LKFLOW_INITIAL_GUESSES:i32 = 4;
pub const CV_LKFLOW_PYR_A_READY:i32 = 1;
pub const CV_LKFLOW_PYR_B_READY:i32 = 2;
pub const OPTFLOW_FARNEBACK_GAUSSIAN:i32 = 256;

include!(concat!(env!("OUT_DIR"), "/video.consts.rs"));

// identifier: cv_calcGlobalOrientation_InputArray_orientation_InputArray_mask_InputArray_mhi_double_timestamp_double_duration
/// computes the global orientation of the selected motion history image part
pub fn calc_global_orientation(orientation:& ::core::Mat, mask:& ::core::Mat, mhi:& ::core::Mat, timestamp: f64, duration: f64) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_video_cv_calcGlobalOrientation_InputArray_orientation_InputArray_mask_InputArray_mhi_double_timestamp_double_duration(orientation.as_raw_Mat(), mask.as_raw_Mat(), mhi.as_raw_Mat(), timestamp, duration);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_calcMotionGradient_InputArray_mhi_OutputArray_mask_OutputArray_orientation_double_delta1_double_delta2_int_apertureSize
/// computes the motion gradient orientation image from the motion history image
///
/// default value for arguments:
///   - apertureSize: default 3
pub fn calc_motion_gradient(mhi:& ::core::Mat, mask:& ::core::Mat, orientation:& ::core::Mat, delta1: f64, delta2: f64, apertureSize: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_video_cv_calcMotionGradient_InputArray_mhi_OutputArray_mask_OutputArray_orientation_double_delta1_double_delta2_int_apertureSize(mhi.as_raw_Mat(), mask.as_raw_Mat(), orientation.as_raw_Mat(), delta1, delta2, apertureSize);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_calcOpticalFlowSF_Mat_from_Mat_to_Mat_flow_int_layers_int_averaging_block_size_int_max_flow
/// computes dense optical flow using Simple Flow algorithm
pub fn new(from:& ::core::Mat, to:& ::core::Mat, flow:& ::core::Mat, layers: i32, averaging_block_size: i32, max_flow: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_video_cv_calcOpticalFlowSF_Mat_from_Mat_to_Mat_flow_int_layers_int_averaging_block_size_int_max_flow(from.as_raw_Mat(), to.as_raw_Mat(), flow.as_raw_Mat(), layers, averaging_block_size, max_flow);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_calcOpticalFlowSF_Mat_from_Mat_to_Mat_flow_int_layers_int_averaging_block_size_int_max_flow_double_sigma_dist_double_sigma_color_int_postprocess_window_double_sigma_dist_fix_double_sigma_color_fix_double_occ_thr_int_upscale_averaging_radius_double_upscale_sigma_dist_double_upscale_sigma_color_double_speed_up_thr
pub fn new_sigmas(from:& ::core::Mat, to:& ::core::Mat, flow:& ::core::Mat, layers: i32, averaging_block_size: i32, max_flow: i32, sigma_dist: f64, sigma_color: f64, postprocess_window: i32, sigma_dist_fix: f64, sigma_color_fix: f64, occ_thr: f64, upscale_averaging_radius: i32, upscale_sigma_dist: f64, upscale_sigma_color: f64, speed_up_thr: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_video_cv_calcOpticalFlowSF_Mat_from_Mat_to_Mat_flow_int_layers_int_averaging_block_size_int_max_flow_double_sigma_dist_double_sigma_color_int_postprocess_window_double_sigma_dist_fix_double_sigma_color_fix_double_occ_thr_int_upscale_averaging_radius_double_upscale_sigma_dist_double_upscale_sigma_color_double_speed_up_thr(from.as_raw_Mat(), to.as_raw_Mat(), flow.as_raw_Mat(), layers, averaging_block_size, max_flow, sigma_dist, sigma_color, postprocess_window, sigma_dist_fix, sigma_color_fix, occ_thr, upscale_averaging_radius, upscale_sigma_dist, upscale_sigma_color, speed_up_thr);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_estimateRigidTransform_InputArray_src_InputArray_dst_bool_fullAffine
/// estimates the best-fit Euqcidean, similarity, affine or perspective transformation
pub fn estimate_rigid_transform(src:& ::core::Mat, dst:& ::core::Mat, fullAffine: bool) -> Result<::core::Mat,String> {
  unsafe {
    let rv = ::sys::cv_video_cv_estimateRigidTransform_InputArray_src_InputArray_dst_bool_fullAffine(src.as_raw_Mat(), dst.as_raw_Mat(), fullAffine);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::core::Mat{ ptr: rv.result })
  }
}

// identifier: cv_initModule_video
pub fn init_module_video() -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_video_cv_initModule_video();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_segmentMotion_InputArray_mhi_OutputArray_segmask_VectorOfRect_boundingRects_double_timestamp_double_segThresh
pub fn segment_motion(mhi:& ::core::Mat, segmask:& ::core::Mat, boundingRects:& ::types::VectorOfRect, timestamp: f64, segThresh: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_video_cv_segmentMotion_InputArray_mhi_OutputArray_segmask_VectorOfRect_boundingRects_double_timestamp_double_segThresh(mhi.as_raw_Mat(), segmask.as_raw_Mat(), boundingRects.as_raw_VectorOfRect(), timestamp, segThresh);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// Generating impl for trait cv::BackgroundSubtractor
pub trait BackgroundSubtractor : ::core::Algorithm {
  fn as_raw_BackgroundSubtractor(&self) -> *mut c_void;
  // identifier: cv_BackgroundSubtractor_getBackgroundImage_OutputArray_backgroundImage
  /// computes a background image
  fn get_background_image(&self, backgroundImage:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_video_cv_BackgroundSubtractor_getBackgroundImage_OutputArray_backgroundImage(self.as_raw_BackgroundSubtractor(), backgroundImage.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

}


// boxed class cv::BackgroundSubtractorGMG
#[allow(dead_code)]
pub struct BackgroundSubtractorGMG {
    pub ptr: *mut c_void
}
impl Drop for ::video::BackgroundSubtractorGMG {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_BackgroundSubtractorGMG(self.ptr) };
    }
}
impl ::video::BackgroundSubtractorGMG {
    pub fn as_raw_BackgroundSubtractorGMG(&self) -> *mut c_void { self.ptr }
}

impl ::video::BackgroundSubtractor for BackgroundSubtractorGMG {
    fn as_raw_BackgroundSubtractor(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for BackgroundSubtractorGMG {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}
impl BackgroundSubtractorGMG {

  // identifier: cv_BackgroundSubtractorGMG_BackgroundSubtractorGMG
  pub fn new() -> Result<::video::BackgroundSubtractorGMG,String> {
    unsafe {
      let rv = ::sys::cv_video_cv_BackgroundSubtractorGMG_BackgroundSubtractorGMG();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::video::BackgroundSubtractorGMG{ ptr: rv.result })
    }
  }

  // identifier: cv_BackgroundSubtractorGMG_release
  pub fn release(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_video_cv_BackgroundSubtractorGMG_release(self.as_raw_BackgroundSubtractorGMG());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

}

// boxed class cv::BackgroundSubtractorMOG
#[allow(dead_code)]
pub struct BackgroundSubtractorMOG {
    pub ptr: *mut c_void
}
impl Drop for ::video::BackgroundSubtractorMOG {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_BackgroundSubtractorMOG(self.ptr) };
    }
}
impl ::video::BackgroundSubtractorMOG {
    pub fn as_raw_BackgroundSubtractorMOG(&self) -> *mut c_void { self.ptr }
}

impl ::video::BackgroundSubtractor for BackgroundSubtractorMOG {
    fn as_raw_BackgroundSubtractor(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for BackgroundSubtractorMOG {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}
impl BackgroundSubtractorMOG {

  // identifier: cv_BackgroundSubtractorMOG_BackgroundSubtractorMOG
  /// the default constructor
  pub fn default() -> Result<::video::BackgroundSubtractorMOG,String> {
    unsafe {
      let rv = ::sys::cv_video_cv_BackgroundSubtractorMOG_BackgroundSubtractorMOG();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::video::BackgroundSubtractorMOG{ ptr: rv.result })
    }
  }

  // identifier: cv_BackgroundSubtractorMOG_BackgroundSubtractorMOG_int_history_int_nmixtures_double_backgroundRatio_double_noiseSigma
  /// the full constructor that takes the length of the history, the number of gaussian mixtures, the background ratio parameter and the noise strength
  ///
  /// default value for arguments:
  ///   - noiseSigma: default 0
  pub fn new(history: i32, nmixtures: i32, backgroundRatio: f64, noiseSigma: f64) -> Result<::video::BackgroundSubtractorMOG,String> {
    unsafe {
      let rv = ::sys::cv_video_cv_BackgroundSubtractorMOG_BackgroundSubtractorMOG_int_history_int_nmixtures_double_backgroundRatio_double_noiseSigma(history, nmixtures, backgroundRatio, noiseSigma);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::video::BackgroundSubtractorMOG{ ptr: rv.result })
    }
  }

  // identifier: cv_BackgroundSubtractorMOG_initialize_Size_frameSize_int_frameType
  /// re-initiaization method
  pub fn initialize(&mut self, frameSize: ::core::Size, frameType: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_video_cv_BackgroundSubtractorMOG_initialize_Size_frameSize_int_frameType(self.as_raw_BackgroundSubtractorMOG(), frameSize, frameType);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

}

// boxed class cv::BackgroundSubtractorMOG2
#[allow(dead_code)]
pub struct BackgroundSubtractorMOG2 {
    pub ptr: *mut c_void
}
impl Drop for ::video::BackgroundSubtractorMOG2 {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_BackgroundSubtractorMOG2(self.ptr) };
    }
}
impl ::video::BackgroundSubtractorMOG2 {
    pub fn as_raw_BackgroundSubtractorMOG2(&self) -> *mut c_void { self.ptr }
}

impl ::video::BackgroundSubtractor for BackgroundSubtractorMOG2 {
    fn as_raw_BackgroundSubtractor(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for BackgroundSubtractorMOG2 {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}
impl BackgroundSubtractorMOG2 {

  // identifier: cv_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2
  /// the default constructor
  pub fn default() -> Result<::video::BackgroundSubtractorMOG2,String> {
    unsafe {
      let rv = ::sys::cv_video_cv_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::video::BackgroundSubtractorMOG2{ ptr: rv.result })
    }
  }

  // identifier: cv_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2_int_history_float_varThreshold_bool_bShadowDetection
  /// the full constructor that takes the length of the history, the number of gaussian mixtures, the background ratio parameter and the noise strength
  ///
  /// default value for arguments:
  ///   - bShadowDetection: default true
  pub fn new(history: i32, varThreshold: f32, bShadowDetection: bool) -> Result<::video::BackgroundSubtractorMOG2,String> {
    unsafe {
      let rv = ::sys::cv_video_cv_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2_int_history_float_varThreshold_bool_bShadowDetection(history, varThreshold, bShadowDetection);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::video::BackgroundSubtractorMOG2{ ptr: rv.result })
    }
  }

  // identifier: cv_BackgroundSubtractorMOG2_getBackgroundImage_OutputArray_backgroundImage
  /// computes a background image which are the mean of all background gaussians
  pub fn get_background_image(&self, backgroundImage:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_video_cv_BackgroundSubtractorMOG2_getBackgroundImage_OutputArray_backgroundImage(self.as_raw_BackgroundSubtractorMOG2(), backgroundImage.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_BackgroundSubtractorMOG2_initialize_Size_frameSize_int_frameType
  /// re-initiaization method
  pub fn initialize(&mut self, frameSize: ::core::Size, frameType: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_video_cv_BackgroundSubtractorMOG2_initialize_Size_frameSize_int_frameType(self.as_raw_BackgroundSubtractorMOG2(), frameSize, frameType);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

}
// Generating impl for trait cv::DenseOpticalFlow
pub trait DenseOpticalFlow : ::core::Algorithm {
  fn as_raw_DenseOpticalFlow(&self) -> *mut c_void;
}


// boxed class cv::KalmanFilter
#[allow(dead_code)]
pub struct KalmanFilter {
    pub ptr: *mut c_void
}
impl Drop for ::video::KalmanFilter {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_KalmanFilter(self.ptr) };
    }
}
impl ::video::KalmanFilter {
    pub fn as_raw_KalmanFilter(&self) -> *mut c_void { self.ptr }
}
impl KalmanFilter {

  // identifier: cv_KalmanFilter_KalmanFilter
  /// the default constructor
  pub fn default() -> Result<::video::KalmanFilter,String> {
    unsafe {
      let rv = ::sys::cv_video_cv_KalmanFilter_KalmanFilter();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::video::KalmanFilter{ ptr: rv.result })
    }
  }

  // identifier: cv_KalmanFilter_KalmanFilter_int_dynamParams_int_measureParams_int_controlParams_int_type
  /// the full constructor taking the dimensionality of the state, of the measurement and of the control vector
  ///
  /// default value for arguments:
  ///   - controlParams: default 0
  ///   - _type: default CV_32F
  pub fn new(dynamParams: i32, measureParams: i32, controlParams: i32, _type: i32) -> Result<::video::KalmanFilter,String> {
    unsafe {
      let rv = ::sys::cv_video_cv_KalmanFilter_KalmanFilter_int_dynamParams_int_measureParams_int_controlParams_int_type(dynamParams, measureParams, controlParams, _type);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::video::KalmanFilter{ ptr: rv.result })
    }
  }

  // identifier: cv_KalmanFilter_init_int_dynamParams_int_measureParams_int_controlParams_int_type
  /// re-initializes Kalman filter. The previous content is destroyed.
  ///
  /// default value for arguments:
  ///   - controlParams: default 0
  ///   - _type: default CV_32F
  pub fn init(&mut self, dynamParams: i32, measureParams: i32, controlParams: i32, _type: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_video_cv_KalmanFilter_init_int_dynamParams_int_measureParams_int_controlParams_int_type(self.as_raw_KalmanFilter(), dynamParams, measureParams, controlParams, _type);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_KalmanFilter_predict_Mat_control
  /// computes predicted state
  ///
  /// default value for arguments:
  ///   - control: default Mat()
  pub fn predict(&mut self, control:& ::core::Mat) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_video_cv_KalmanFilter_predict_Mat_control(self.as_raw_KalmanFilter(), control.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_KalmanFilter_correct_Mat_measurement
  /// updates the predicted state from the measurement
  pub fn correct(&mut self, measurement:& ::core::Mat) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_video_cv_KalmanFilter_correct_Mat_measurement(self.as_raw_KalmanFilter(), measurement.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

}
