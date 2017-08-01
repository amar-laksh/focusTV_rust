
use libc::{ c_void, c_char, size_t };
use std::ffi::{ CStr, CString };
pub const CASCADE_DO_CANNY_PRUNING:i32 = 1;
pub const CASCADE_DO_ROUGH_SEARCH:i32 = 8;
pub const CASCADE_FIND_BIGGEST_OBJECT:i32 = 4;
pub const CASCADE_SCALE_IMAGE:i32 = 2;
pub const CV_HAAR_DO_CANNY_PRUNING:i32 = 1;
pub const CV_HAAR_DO_ROUGH_SEARCH:i32 = 8;
pub const CV_HAAR_FEATURE_MAX:i32 = 3;
pub const CV_HAAR_FIND_BIGGEST_OBJECT:i32 = 4;
pub const CV_HAAR_MAGIC_VAL:i32 = 0x42500000;
pub const CV_HAAR_SCALE_IMAGE:i32 = 2;
pub const CV_TYPE_NAME_HAAR:&'static str = "opencv-haar-classifier";
pub const CascadeClassifier_BOOST:i32 = 0;
pub const CascadeClassifier_DO_CANNY_PRUNING:i32 = 1;
pub const CascadeClassifier_DO_ROUGH_SEARCH:i32 = 8;
pub const CascadeClassifier_FIND_BIGGEST_OBJECT:i32 = 4;
pub const CascadeClassifier_SCALE_IMAGE:i32 = 2;
pub const FeatureEvaluator_HAAR:i32 = 0;
pub const FeatureEvaluator_HOG:i32 = 2;
pub const FeatureEvaluator_LBP:i32 = 1;
pub const HOGDescriptor_DEFAULT_NLEVELS:i32 = 64;
pub const HOGDescriptor_L2Hys:i32 = 0;

include!(concat!(env!("OUT_DIR"), "/objdetect.consts.rs"));

// identifier: cv_groupRectangles_VectorOfRect_rectList_VectorOfint_rejectLevels_VectorOfdouble_levelWeights_int_groupThreshold_double_eps
///
/// default value for arguments:
///   - eps: default 0.2
pub fn group_rectangles_weights_rejects(rectList:& ::types::VectorOfRect, rejectLevels:& ::types::VectorOfint, levelWeights:& ::types::VectorOfdouble, groupThreshold: i32, eps: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_objdetect_cv_groupRectangles_VectorOfRect_rectList_VectorOfint_rejectLevels_VectorOfdouble_levelWeights_int_groupThreshold_double_eps(rectList.as_raw_VectorOfRect(), rejectLevels.as_raw_VectorOfint(), levelWeights.as_raw_VectorOfdouble(), groupThreshold, eps);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_groupRectangles_VectorOfRect_rectList_VectorOfint_weights_int_groupThreshold_double_eps
///
/// default value for arguments:
///   - eps: default 0.2
pub fn group_rectangle_weights(rectList:& ::types::VectorOfRect, weights:& ::types::VectorOfint, groupThreshold: i32, eps: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_objdetect_cv_groupRectangles_VectorOfRect_rectList_VectorOfint_weights_int_groupThreshold_double_eps(rectList.as_raw_VectorOfRect(), weights.as_raw_VectorOfint(), groupThreshold, eps);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_groupRectangles_VectorOfRect_rectList_int_groupThreshold_double_eps
///
/// default value for arguments:
///   - eps: default 0.2
pub fn group_rectangle(rectList:& ::types::VectorOfRect, groupThreshold: i32, eps: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_objdetect_cv_groupRectangles_VectorOfRect_rectList_int_groupThreshold_double_eps(rectList.as_raw_VectorOfRect(), groupThreshold, eps);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_groupRectangles_VectorOfRect_rectList_int_groupThreshold_double_eps_VectorOfint_weights_VectorOfdouble_levelWeights
pub fn group_rectangle_levelweights(rectList:& ::types::VectorOfRect, groupThreshold: i32, eps: f64, weights:& ::types::VectorOfint, levelWeights:& ::types::VectorOfdouble) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_objdetect_cv_groupRectangles_VectorOfRect_rectList_int_groupThreshold_double_eps_VectorOfint_weights_VectorOfdouble_levelWeights(rectList.as_raw_VectorOfRect(), groupThreshold, eps, weights.as_raw_VectorOfint(), levelWeights.as_raw_VectorOfdouble());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_groupRectangles_meanshift_VectorOfRect_rectList_VectorOfdouble_foundWeights_VectorOfdouble_foundScales_double_detectThreshold_Size_winDetSize
///
/// default value for arguments:
///   - detectThreshold: default 0.0
///   - winDetSize: default Size(64, 128)
pub fn group_rectangles_meanshift(rectList:& ::types::VectorOfRect, foundWeights:& ::types::VectorOfdouble, foundScales:& ::types::VectorOfdouble, detectThreshold: f64, winDetSize: ::core::Size) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_objdetect_cv_groupRectangles_meanshift_VectorOfRect_rectList_VectorOfdouble_foundWeights_VectorOfdouble_foundScales_double_detectThreshold_Size_winDetSize(rectList.as_raw_VectorOfRect(), foundWeights.as_raw_VectorOfdouble(), foundScales.as_raw_VectorOfdouble(), detectThreshold, winDetSize);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_linemod_colormap_Mat_quantized_Mat_dst
pub fn colormap(quantized:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_objdetect_cv_linemod_colormap_Mat_quantized_Mat_dst(quantized.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_linemod_getDefaultLINE
pub fn get_default_line() -> Result<::types::PtrOfDetector,String> {
  unsafe {
    let rv = ::sys::cv_objdetect_cv_linemod_getDefaultLINE();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::types::PtrOfDetector{ ptr: rv.result })
  }
}

// identifier: cv_linemod_getDefaultLINEMOD
pub fn get_default_linemod() -> Result<::types::PtrOfDetector,String> {
  unsafe {
    let rv = ::sys::cv_objdetect_cv_linemod_getDefaultLINEMOD();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::types::PtrOfDetector{ ptr: rv.result })
  }
}


// boxed class cv::CascadeClassifier
#[allow(dead_code)]
pub struct CascadeClassifier {
    pub ptr: *mut c_void
}
impl Drop for ::objdetect::CascadeClassifier {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_CascadeClassifier(self.ptr) };
    }
}
impl ::objdetect::CascadeClassifier {
    pub fn as_raw_CascadeClassifier(&self) -> *mut c_void { self.ptr }
}
impl CascadeClassifier {

  // identifier: cv_CascadeClassifier_CascadeClassifier
  pub fn default() -> Result<::objdetect::CascadeClassifier,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_CascadeClassifier_CascadeClassifier();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::CascadeClassifier{ ptr: rv.result })
    }
  }

  // identifier: cv_CascadeClassifier_CascadeClassifier_String_filename
  pub fn new(filename:&str) -> Result<::objdetect::CascadeClassifier,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_CascadeClassifier_CascadeClassifier_String_filename(CString::new(filename).unwrap().as_ptr());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::CascadeClassifier{ ptr: rv.result })
    }
  }

  // identifier: cv_CascadeClassifier_empty
  pub fn empty(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_CascadeClassifier_empty(self.as_raw_CascadeClassifier());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_CascadeClassifier_load_String_filename
  pub fn load(&mut self, filename:&str) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_CascadeClassifier_load_String_filename(self.as_raw_CascadeClassifier(), CString::new(filename).unwrap().as_ptr());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_CascadeClassifier_detectMultiScale_Mat_image_VectorOfRect_objects_double_scaleFactor_int_minNeighbors_int_flags_Size_minSize_Size_maxSize
  ///
  /// default value for arguments:
  ///   - scaleFactor: default 1.1
  ///   - minNeighbors: default 3
  ///   - flags: default 0
  ///   - minSize: default Size()
  ///   - maxSize: default Size()
  pub fn detect_multi_scale(&mut self, image:& ::core::Mat, objects:& ::types::VectorOfRect, scaleFactor: f64, minNeighbors: i32, flags: i32, minSize: ::core::Size, maxSize: ::core::Size) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_CascadeClassifier_detectMultiScale_Mat_image_VectorOfRect_objects_double_scaleFactor_int_minNeighbors_int_flags_Size_minSize_Size_maxSize(self.as_raw_CascadeClassifier(), image.as_raw_Mat(), objects.as_raw_VectorOfRect(), scaleFactor, minNeighbors, flags, minSize, maxSize);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_CascadeClassifier_detectMultiScale_Mat_image_VectorOfRect_objects_VectorOfint_rejectLevels_VectorOfdouble_levelWeights_double_scaleFactor_int_minNeighbors_int_flags_Size_minSize_Size_maxSize_bool_outputRejectLevels
  ///
  /// default value for arguments:
  ///   - scaleFactor: default 1.1
  ///   - minNeighbors: default 3
  ///   - flags: default 0
  ///   - minSize: default Size()
  ///   - maxSize: default Size()
  ///   - outputRejectLevels: default false
  pub fn detect_multi_scale_levels(&mut self, image:& ::core::Mat, objects:& ::types::VectorOfRect, rejectLevels:& ::types::VectorOfint, levelWeights:& ::types::VectorOfdouble, scaleFactor: f64, minNeighbors: i32, flags: i32, minSize: ::core::Size, maxSize: ::core::Size, outputRejectLevels: bool) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_CascadeClassifier_detectMultiScale_Mat_image_VectorOfRect_objects_VectorOfint_rejectLevels_VectorOfdouble_levelWeights_double_scaleFactor_int_minNeighbors_int_flags_Size_minSize_Size_maxSize_bool_outputRejectLevels(self.as_raw_CascadeClassifier(), image.as_raw_Mat(), objects.as_raw_VectorOfRect(), rejectLevels.as_raw_VectorOfint(), levelWeights.as_raw_VectorOfdouble(), scaleFactor, minNeighbors, flags, minSize, maxSize, outputRejectLevels);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_CascadeClassifier_isOldFormatCascade
  pub fn is_old_format_cascade(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_CascadeClassifier_isOldFormatCascade(self.as_raw_CascadeClassifier());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_CascadeClassifier_getOriginalWindowSize
  pub fn get_original_window_size(&self) -> Result<::core::Size,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_CascadeClassifier_getOriginalWindowSize(self.as_raw_CascadeClassifier());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_CascadeClassifier_getFeatureType
  pub fn get_feature_type(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_CascadeClassifier_getFeatureType(self.as_raw_CascadeClassifier());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_CascadeClassifier_setImage_Mat_unamed_arg
  pub fn set_image(&mut self, unamed_arg:& ::core::Mat) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_CascadeClassifier_setImage_Mat_unamed_arg(self.as_raw_CascadeClassifier(), unamed_arg.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_CascadeClassifier_setFaceDetectionMaskGenerator
  pub fn set_face_detection_mask_generator(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_CascadeClassifier_setFaceDetectionMaskGenerator(self.as_raw_CascadeClassifier());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

}
// Generating impl for trait cv::CascadeClassifier::MaskGenerator
pub trait CascadeClassifier_MaskGenerator {
  fn as_raw_CascadeClassifier_MaskGenerator(&self) -> *mut c_void;
  // identifier: cv_CascadeClassifier_MaskGenerator_initializeMask_Mat_unamed_arg
  fn initialize_mask(&mut self, unamed_arg:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_CascadeClassifier_MaskGenerator_initializeMask_Mat_unamed_arg(self.as_raw_CascadeClassifier_MaskGenerator(), unamed_arg.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

}


// boxed class cv::DetectionROI
#[allow(dead_code)]
pub struct DetectionROI {
    pub ptr: *mut c_void
}
impl Drop for ::objdetect::DetectionROI {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_DetectionROI(self.ptr) };
    }
}
impl ::objdetect::DetectionROI {
    pub fn as_raw_DetectionROI(&self) -> *mut c_void { self.ptr }
}
impl DetectionROI {

}

// boxed class cv::FeatureEvaluator
#[allow(dead_code)]
pub struct FeatureEvaluator {
    pub ptr: *mut c_void
}
impl Drop for ::objdetect::FeatureEvaluator {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_FeatureEvaluator(self.ptr) };
    }
}
impl ::objdetect::FeatureEvaluator {
    pub fn as_raw_FeatureEvaluator(&self) -> *mut c_void { self.ptr }
}
impl FeatureEvaluator {

  // identifier: cv_FeatureEvaluator_clone
  pub fn clone(&self) -> Result<::types::PtrOfFeatureEvaluator,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_FeatureEvaluator_clone(self.as_raw_FeatureEvaluator());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::types::PtrOfFeatureEvaluator{ ptr: rv.result })
    }
  }

  // identifier: cv_FeatureEvaluator_getFeatureType
  pub fn get_feature_type(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_FeatureEvaluator_getFeatureType(self.as_raw_FeatureEvaluator());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_FeatureEvaluator_setImage_Mat_img_Size_origWinSize
  pub fn set_image(&mut self, img:& ::core::Mat, origWinSize: ::core::Size) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_FeatureEvaluator_setImage_Mat_img_Size_origWinSize(self.as_raw_FeatureEvaluator(), img.as_raw_Mat(), origWinSize);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_FeatureEvaluator_setWindow_Point_p
  pub fn set_window(&mut self, p: ::core::Point) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_FeatureEvaluator_setWindow_Point_p(self.as_raw_FeatureEvaluator(), p);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_FeatureEvaluator_calcOrd_int_featureIdx
  pub fn calc_ord(&self, featureIdx: i32) -> Result<f64,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_FeatureEvaluator_calcOrd_int_featureIdx(self.as_raw_FeatureEvaluator(), featureIdx);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_FeatureEvaluator_calcCat_int_featureIdx
  pub fn calc_cat(&self, featureIdx: i32) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_FeatureEvaluator_calcCat_int_featureIdx(self.as_raw_FeatureEvaluator(), featureIdx);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_FeatureEvaluator_create_int_type
  pub fn create(&mut self, _type: i32) -> Result<::types::PtrOfFeatureEvaluator,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_FeatureEvaluator_create_int_type(self.as_raw_FeatureEvaluator(), _type);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::types::PtrOfFeatureEvaluator{ ptr: rv.result })
    }
  }

}

// boxed class cv::HOGDescriptor
#[allow(dead_code)]
pub struct HOGDescriptor {
    pub ptr: *mut c_void
}
impl Drop for ::objdetect::HOGDescriptor {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_HOGDescriptor(self.ptr) };
    }
}
impl ::objdetect::HOGDescriptor {
    pub fn as_raw_HOGDescriptor(&self) -> *mut c_void { self.ptr }
}
impl HOGDescriptor {

  // identifier: cv_HOGDescriptor_HOGDescriptor
  pub fn default() -> Result<::objdetect::HOGDescriptor,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_HOGDescriptor();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::HOGDescriptor{ ptr: rv.result })
    }
  }

  // identifier: cv_HOGDescriptor_HOGDescriptor_Size__winSize_Size__blockSize_Size__blockStride_Size__cellSize_int__nbins_int__derivAperture_double__winSigma_int__histogramNormType_double__L2HysThreshold_bool__gammaCorrection_int__nlevels
  ///
  /// default value for arguments:
  ///   - _derivAperture: default 1
  ///   - _winSigma: default -1
  ///   - _histogramNormType: default HOGDescriptor::L2Hys
  ///   - _L2HysThreshold: default 0.2
  ///   - _gammaCorrection: default false
  ///   - _nlevels: default HOGDescriptor::DEFAULT_NLEVELS
  pub fn new(_winSize: ::core::Size, _blockSize: ::core::Size, _blockStride: ::core::Size, _cellSize: ::core::Size, _nbins: i32, _derivAperture: i32, _winSigma: f64, _histogramNormType: i32, _L2HysThreshold: f64, _gammaCorrection: bool, _nlevels: i32) -> Result<::objdetect::HOGDescriptor,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_HOGDescriptor_Size__winSize_Size__blockSize_Size__blockStride_Size__cellSize_int__nbins_int__derivAperture_double__winSigma_int__histogramNormType_double__L2HysThreshold_bool__gammaCorrection_int__nlevels(_winSize, _blockSize, _blockStride, _cellSize, _nbins, _derivAperture, _winSigma, _histogramNormType, _L2HysThreshold, _gammaCorrection, _nlevels);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::HOGDescriptor{ ptr: rv.result })
    }
  }

  // identifier: cv_HOGDescriptor_HOGDescriptor_HOGDescriptor_d
  pub fn copy(d:& ::objdetect::HOGDescriptor) -> Result<::objdetect::HOGDescriptor,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_HOGDescriptor_HOGDescriptor_d(d.as_raw_HOGDescriptor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::HOGDescriptor{ ptr: rv.result })
    }
  }

  // identifier: cv_HOGDescriptor_getDescriptorSize
  pub fn get_descriptor_size(&self) -> Result<size_t,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_getDescriptorSize(self.as_raw_HOGDescriptor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_HOGDescriptor_checkDetectorSize
  pub fn check_detector_size(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_checkDetectorSize(self.as_raw_HOGDescriptor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_HOGDescriptor_getWinSigma
  pub fn get_win_sigma(&self) -> Result<f64,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_getWinSigma(self.as_raw_HOGDescriptor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_HOGDescriptor_setSVMDetector_InputArray__svmdetector
  pub fn set_svm_detector(&mut self, _svmdetector:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_setSVMDetector_InputArray__svmdetector(self.as_raw_HOGDescriptor(), _svmdetector.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_HOGDescriptor_copyTo_HOGDescriptor_c
  pub fn copy_to(&self, c:& ::objdetect::HOGDescriptor) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_copyTo_HOGDescriptor_c(self.as_raw_HOGDescriptor(), c.as_raw_HOGDescriptor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_HOGDescriptor_compute_Mat_img_VectorOffloat_descriptors_Size_winStride_Size_padding_VectorOfPoint_locations
  ///
  /// default value for arguments:
  ///   - winStride: default Size()
  ///   - padding: default Size()
  ///   - locations: default vector<Point>()
  pub fn compute(&self, img:& ::core::Mat, descriptors:& ::types::VectorOffloat, winStride: ::core::Size, padding: ::core::Size, locations:& ::types::VectorOfPoint) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_compute_Mat_img_VectorOffloat_descriptors_Size_winStride_Size_padding_VectorOfPoint_locations(self.as_raw_HOGDescriptor(), img.as_raw_Mat(), descriptors.as_raw_VectorOffloat(), winStride, padding, locations.as_raw_VectorOfPoint());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_HOGDescriptor_detect_Mat_img_VectorOfPoint_foundLocations_VectorOfdouble_weights_double_hitThreshold_Size_winStride_Size_padding_VectorOfPoint_searchLocations
  ///
  /// default value for arguments:
  ///   - hitThreshold: default 0
  ///   - winStride: default Size()
  ///   - padding: default Size()
  ///   - searchLocations: default vector<Point>()
  pub fn detect_weights(&self, img:& ::core::Mat, foundLocations:& ::types::VectorOfPoint, weights:& ::types::VectorOfdouble, hitThreshold: f64, winStride: ::core::Size, padding: ::core::Size, searchLocations:& ::types::VectorOfPoint) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_detect_Mat_img_VectorOfPoint_foundLocations_VectorOfdouble_weights_double_hitThreshold_Size_winStride_Size_padding_VectorOfPoint_searchLocations(self.as_raw_HOGDescriptor(), img.as_raw_Mat(), foundLocations.as_raw_VectorOfPoint(), weights.as_raw_VectorOfdouble(), hitThreshold, winStride, padding, searchLocations.as_raw_VectorOfPoint());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_HOGDescriptor_detect_Mat_img_VectorOfPoint_foundLocations_double_hitThreshold_Size_winStride_Size_padding_VectorOfPoint_searchLocations
  ///
  /// default value for arguments:
  ///   - hitThreshold: default 0
  ///   - winStride: default Size()
  ///   - padding: default Size()
  ///   - searchLocations: default vector<Point>()
  pub fn detect(&self, img:& ::core::Mat, foundLocations:& ::types::VectorOfPoint, hitThreshold: f64, winStride: ::core::Size, padding: ::core::Size, searchLocations:& ::types::VectorOfPoint) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_detect_Mat_img_VectorOfPoint_foundLocations_double_hitThreshold_Size_winStride_Size_padding_VectorOfPoint_searchLocations(self.as_raw_HOGDescriptor(), img.as_raw_Mat(), foundLocations.as_raw_VectorOfPoint(), hitThreshold, winStride, padding, searchLocations.as_raw_VectorOfPoint());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_HOGDescriptor_detectMultiScale_Mat_img_VectorOfRect_foundLocations_VectorOfdouble_foundWeights_double_hitThreshold_Size_winStride_Size_padding_double_scale_double_finalThreshold_bool_useMeanshiftGrouping
  ///
  /// default value for arguments:
  ///   - hitThreshold: default 0
  ///   - winStride: default Size()
  ///   - padding: default Size()
  ///   - scale: default 1.05
  ///   - finalThreshold: default 2.0
  ///   - useMeanshiftGrouping: default false
  pub fn detect_multi_scale(&self, img:& ::core::Mat, foundLocations:& ::types::VectorOfRect, foundWeights:& ::types::VectorOfdouble, hitThreshold: f64, winStride: ::core::Size, padding: ::core::Size, scale: f64, finalThreshold: f64, useMeanshiftGrouping: bool) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_detectMultiScale_Mat_img_VectorOfRect_foundLocations_VectorOfdouble_foundWeights_double_hitThreshold_Size_winStride_Size_padding_double_scale_double_finalThreshold_bool_useMeanshiftGrouping(self.as_raw_HOGDescriptor(), img.as_raw_Mat(), foundLocations.as_raw_VectorOfRect(), foundWeights.as_raw_VectorOfdouble(), hitThreshold, winStride, padding, scale, finalThreshold, useMeanshiftGrouping);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_HOGDescriptor_detectMultiScale_Mat_img_VectorOfRect_foundLocations_double_hitThreshold_Size_winStride_Size_padding_double_scale_double_finalThreshold_bool_useMeanshiftGrouping
  ///
  /// default value for arguments:
  ///   - hitThreshold: default 0
  ///   - winStride: default Size()
  ///   - padding: default Size()
  ///   - scale: default 1.05
  ///   - finalThreshold: default 2.0
  ///   - useMeanshiftGrouping: default false
  pub fn detect_multi_scale_weights(&self, img:& ::core::Mat, foundLocations:& ::types::VectorOfRect, hitThreshold: f64, winStride: ::core::Size, padding: ::core::Size, scale: f64, finalThreshold: f64, useMeanshiftGrouping: bool) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_detectMultiScale_Mat_img_VectorOfRect_foundLocations_double_hitThreshold_Size_winStride_Size_padding_double_scale_double_finalThreshold_bool_useMeanshiftGrouping(self.as_raw_HOGDescriptor(), img.as_raw_Mat(), foundLocations.as_raw_VectorOfRect(), hitThreshold, winStride, padding, scale, finalThreshold, useMeanshiftGrouping);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_HOGDescriptor_computeGradient_Mat_img_Mat_grad_Mat_angleOfs_Size_paddingTL_Size_paddingBR
  ///
  /// default value for arguments:
  ///   - paddingTL: default Size()
  ///   - paddingBR: default Size()
  pub fn compute_gradient(&self, img:& ::core::Mat, grad:& ::core::Mat, angleOfs:& ::core::Mat, paddingTL: ::core::Size, paddingBR: ::core::Size) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_computeGradient_Mat_img_Mat_grad_Mat_angleOfs_Size_paddingTL_Size_paddingBR(self.as_raw_HOGDescriptor(), img.as_raw_Mat(), grad.as_raw_Mat(), angleOfs.as_raw_Mat(), paddingTL, paddingBR);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_HOGDescriptor_getDefaultPeopleDetector
  pub fn get_default_people_detector(&mut self) -> Result<::types::VectorOffloat,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_getDefaultPeopleDetector(self.as_raw_HOGDescriptor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::types::VectorOffloat{ ptr: rv.result })
    }
  }

  // identifier: cv_HOGDescriptor_getDaimlerPeopleDetector
  pub fn get_daimler_people_detector(&mut self) -> Result<::types::VectorOffloat,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_HOGDescriptor_getDaimlerPeopleDetector(self.as_raw_HOGDescriptor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::types::VectorOffloat{ ptr: rv.result })
    }
  }

}

// boxed class cv::LatentSvmDetector
#[allow(dead_code)]
pub struct LatentSvmDetector {
    pub ptr: *mut c_void
}
impl Drop for ::objdetect::LatentSvmDetector {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_LatentSvmDetector(self.ptr) };
    }
}
impl ::objdetect::LatentSvmDetector {
    pub fn as_raw_LatentSvmDetector(&self) -> *mut c_void { self.ptr }
}
impl LatentSvmDetector {

  // identifier: cv_LatentSvmDetector_LatentSvmDetector
  pub fn default() -> Result<::objdetect::LatentSvmDetector,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_LatentSvmDetector_LatentSvmDetector();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::LatentSvmDetector{ ptr: rv.result })
    }
  }

  // identifier: cv_LatentSvmDetector_LatentSvmDetector_VectorOfString_filenames_VectorOfString_classNames
  ///
  /// default value for arguments:
  ///   - classNames: default vector<string>()
  pub fn new(filenames:& ::types::VectorOfString, classNames:& ::types::VectorOfString) -> Result<::objdetect::LatentSvmDetector,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_LatentSvmDetector_LatentSvmDetector_VectorOfString_filenames_VectorOfString_classNames(filenames.as_raw_VectorOfString(), classNames.as_raw_VectorOfString());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::LatentSvmDetector{ ptr: rv.result })
    }
  }

  // identifier: cv_LatentSvmDetector_clear
  pub fn clear(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_LatentSvmDetector_clear(self.as_raw_LatentSvmDetector());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_LatentSvmDetector_empty
  pub fn empty(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_LatentSvmDetector_empty(self.as_raw_LatentSvmDetector());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_LatentSvmDetector_load_VectorOfString_filenames_VectorOfString_classNames
  ///
  /// default value for arguments:
  ///   - classNames: default vector<string>()
  pub fn load(&mut self, filenames:& ::types::VectorOfString, classNames:& ::types::VectorOfString) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_LatentSvmDetector_load_VectorOfString_filenames_VectorOfString_classNames(self.as_raw_LatentSvmDetector(), filenames.as_raw_VectorOfString(), classNames.as_raw_VectorOfString());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_LatentSvmDetector_detect_Mat_image_VectorOfObjectDetection_objectDetections_float_overlapThreshold_int_numThreads
  ///
  /// default value for arguments:
  ///   - overlapThreshold: default 0.5f
  ///   - numThreads: default -1
  pub fn detect(&mut self, image:& ::core::Mat, objectDetections:& ::types::VectorOfObjectDetection, overlapThreshold: f32, numThreads: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_LatentSvmDetector_detect_Mat_image_VectorOfObjectDetection_objectDetections_float_overlapThreshold_int_numThreads(self.as_raw_LatentSvmDetector(), image.as_raw_Mat(), objectDetections.as_raw_VectorOfObjectDetection(), overlapThreshold, numThreads);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_LatentSvmDetector_getClassNames
  pub fn get_class_names(&self) -> Result<::types::VectorOfString,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_LatentSvmDetector_getClassNames(self.as_raw_LatentSvmDetector());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::types::VectorOfString{ ptr: rv.result })
    }
  }

  // identifier: cv_LatentSvmDetector_getClassCount
  pub fn get_class_count(&self) -> Result<size_t,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_LatentSvmDetector_getClassCount(self.as_raw_LatentSvmDetector());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::LatentSvmDetector::ObjectDetection
#[allow(dead_code)]
pub struct LatentSvmDetector_ObjectDetection {
    pub ptr: *mut c_void
}
impl Drop for ::objdetect::LatentSvmDetector_ObjectDetection {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_ObjectDetection(self.ptr) };
    }
}
impl ::objdetect::LatentSvmDetector_ObjectDetection {
    pub fn as_raw_LatentSvmDetector_ObjectDetection(&self) -> *mut c_void { self.ptr }
}
impl LatentSvmDetector_ObjectDetection {

  // identifier: cv_LatentSvmDetector_ObjectDetection_ObjectDetection
  pub fn default() -> Result<::objdetect::LatentSvmDetector_ObjectDetection,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_LatentSvmDetector_ObjectDetection_ObjectDetection();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::LatentSvmDetector_ObjectDetection{ ptr: rv.result })
    }
  }

  // identifier: cv_LatentSvmDetector_ObjectDetection_ObjectDetection_Rect_rect_float_score_int_classID
  ///
  /// default value for arguments:
  ///   - classID: default -1
  pub fn new(rect: ::core::Rect, score: f32, classID: i32) -> Result<::objdetect::LatentSvmDetector_ObjectDetection,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_LatentSvmDetector_ObjectDetection_ObjectDetection_Rect_rect_float_score_int_classID(rect, score, classID);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::LatentSvmDetector_ObjectDetection{ ptr: rv.result })
    }
  }

}

// boxed class cv::SimilarRects
#[allow(dead_code)]
pub struct SimilarRects {
    pub ptr: *mut c_void
}
impl Drop for ::objdetect::SimilarRects {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_SimilarRects(self.ptr) };
    }
}
impl ::objdetect::SimilarRects {
    pub fn as_raw_SimilarRects(&self) -> *mut c_void { self.ptr }
}
impl SimilarRects {

  // identifier: cv_SimilarRects_SimilarRects_double__eps
  pub fn new(_eps: f64) -> Result<::objdetect::SimilarRects,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_SimilarRects_SimilarRects_double__eps(_eps);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::SimilarRects{ ptr: rv.result })
    }
  }

}

// boxed class cv::linemod::ColorGradient
#[allow(dead_code)]
pub struct linemod_ColorGradient {
    pub ptr: *mut c_void
}
impl Drop for ::objdetect::linemod_ColorGradient {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_ColorGradient(self.ptr) };
    }
}
impl ::objdetect::linemod_ColorGradient {
    pub fn as_raw_linemod_ColorGradient(&self) -> *mut c_void { self.ptr }
}

impl ::objdetect::linemod_Modality for linemod_ColorGradient {
    fn as_raw_linemod_Modality(&self) -> *mut c_void { self.ptr }
}
impl linemod_ColorGradient {

  // identifier: cv_linemod_ColorGradient_ColorGradient
  pub fn default() -> Result<::objdetect::linemod_ColorGradient,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_linemod_ColorGradient_ColorGradient();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::linemod_ColorGradient{ ptr: rv.result })
    }
  }

  // identifier: cv_linemod_ColorGradient_ColorGradient_float_weak_threshold_size_t_num_features_float_strong_threshold
  pub fn new(weak_threshold: f32, num_features: size_t, strong_threshold: f32) -> Result<::objdetect::linemod_ColorGradient,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_linemod_ColorGradient_ColorGradient_float_weak_threshold_size_t_num_features_float_strong_threshold(weak_threshold, num_features, strong_threshold);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::linemod_ColorGradient{ ptr: rv.result })
    }
  }

}

// boxed class cv::linemod::DepthNormal
#[allow(dead_code)]
pub struct linemod_DepthNormal {
    pub ptr: *mut c_void
}
impl Drop for ::objdetect::linemod_DepthNormal {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_DepthNormal(self.ptr) };
    }
}
impl ::objdetect::linemod_DepthNormal {
    pub fn as_raw_linemod_DepthNormal(&self) -> *mut c_void { self.ptr }
}

impl ::objdetect::linemod_Modality for linemod_DepthNormal {
    fn as_raw_linemod_Modality(&self) -> *mut c_void { self.ptr }
}
impl linemod_DepthNormal {

  // identifier: cv_linemod_DepthNormal_DepthNormal
  pub fn default() -> Result<::objdetect::linemod_DepthNormal,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_linemod_DepthNormal_DepthNormal();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::linemod_DepthNormal{ ptr: rv.result })
    }
  }

  // identifier: cv_linemod_DepthNormal_DepthNormal_int_distance_threshold_int_difference_threshold_size_t_num_features_int_extract_threshold
  pub fn new(distance_threshold: i32, difference_threshold: i32, num_features: size_t, extract_threshold: i32) -> Result<::objdetect::linemod_DepthNormal,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_linemod_DepthNormal_DepthNormal_int_distance_threshold_int_difference_threshold_size_t_num_features_int_extract_threshold(distance_threshold, difference_threshold, num_features, extract_threshold);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::linemod_DepthNormal{ ptr: rv.result })
    }
  }

}

// boxed class cv::linemod::Detector
#[allow(dead_code)]
pub struct linemod_Detector {
    pub ptr: *mut c_void
}
impl Drop for ::objdetect::linemod_Detector {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_Detector(self.ptr) };
    }
}
impl ::objdetect::linemod_Detector {
    pub fn as_raw_linemod_Detector(&self) -> *mut c_void { self.ptr }
}
impl linemod_Detector {

  // identifier: cv_linemod_Detector_Detector
  pub fn new() -> Result<::objdetect::linemod_Detector,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_linemod_Detector_Detector();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::linemod_Detector{ ptr: rv.result })
    }
  }

  // identifier: cv_linemod_Detector_getT_int_pyramid_level
  pub fn get_t(&self, pyramid_level: i32) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_linemod_Detector_getT_int_pyramid_level(self.as_raw_linemod_Detector(), pyramid_level);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_linemod_Detector_pyramidLevels
  pub fn pyramid_levels(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_linemod_Detector_pyramidLevels(self.as_raw_linemod_Detector());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_linemod_Detector_numTemplates
  pub fn num_templates(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_linemod_Detector_numTemplates(self.as_raw_linemod_Detector());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_linemod_Detector_numClasses
  pub fn num_classes(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_linemod_Detector_numClasses(self.as_raw_linemod_Detector());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::linemod::Feature
#[allow(dead_code)]
pub struct linemod_Feature {
    pub ptr: *mut c_void
}
impl Drop for ::objdetect::linemod_Feature {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_Feature(self.ptr) };
    }
}
impl ::objdetect::linemod_Feature {
    pub fn as_raw_linemod_Feature(&self) -> *mut c_void { self.ptr }
}
impl linemod_Feature {

  // identifier: cv_linemod_Feature_Feature
  pub fn default() -> Result<::objdetect::linemod_Feature,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_linemod_Feature_Feature();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::linemod_Feature{ ptr: rv.result })
    }
  }

  // identifier: cv_linemod_Feature_Feature_int_x_int_y_int_label
  pub fn new(x: i32, y: i32, label: i32) -> Result<::objdetect::linemod_Feature,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_linemod_Feature_Feature_int_x_int_y_int_label(x, y, label);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::linemod_Feature{ ptr: rv.result })
    }
  }

}

// boxed class cv::linemod::Match
#[allow(dead_code)]
pub struct linemod_Match {
    pub ptr: *mut c_void
}
impl Drop for ::objdetect::linemod_Match {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_Match(self.ptr) };
    }
}
impl ::objdetect::linemod_Match {
    pub fn as_raw_linemod_Match(&self) -> *mut c_void { self.ptr }
}
impl linemod_Match {

  // identifier: cv_linemod_Match_Match
  pub fn new() -> Result<::objdetect::linemod_Match,String> {
    unsafe {
      let rv = ::sys::cv_objdetect_cv_linemod_Match_Match();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::objdetect::linemod_Match{ ptr: rv.result })
    }
  }

}
// Generating impl for trait cv::linemod::Modality
pub trait linemod_Modality {
  fn as_raw_linemod_Modality(&self) -> *mut c_void;
}

// Generating impl for trait cv::linemod::QuantizedPyramid
pub trait linemod_QuantizedPyramid {
  fn as_raw_linemod_QuantizedPyramid(&self) -> *mut c_void;
}


// boxed class cv::linemod::Template
#[allow(dead_code)]
pub struct linemod_Template {
    pub ptr: *mut c_void
}
impl Drop for ::objdetect::linemod_Template {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_Template(self.ptr) };
    }
}
impl ::objdetect::linemod_Template {
    pub fn as_raw_linemod_Template(&self) -> *mut c_void { self.ptr }
}
impl linemod_Template {

}
