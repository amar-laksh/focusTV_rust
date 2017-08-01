
use libc::{ c_void, c_char, size_t };
use std::ffi::{ CStr, CString };
pub const DrawMatchesFlags_DEFAULT:i32 = 0;
pub const DrawMatchesFlags_DRAW_OVER_OUTIMG:i32 = 1;
pub const DrawMatchesFlags_DRAW_RICH_KEYPOINTS:i32 = 4;
pub const DrawMatchesFlags_NOT_DRAW_SINGLE_POINTS:i32 = 2;
pub const FREAK_NB_ORIENPAIRS:i32 = 45;
pub const FREAK_NB_PAIRS:i32 = 512;
pub const FREAK_NB_SCALES:i32 = 64;
pub const FastFeatureDetector_TYPE_5_8:i32 = 0;
pub const FastFeatureDetector_TYPE_7_12:i32 = 1;
pub const FastFeatureDetector_TYPE_9_16:i32 = 2;
pub const ORB_FAST_SCORE:i32 = 1;
pub const ORB_HARRIS_SCORE:i32 = 0;
pub const ORB_kBytes:i32 = 32;

include!(concat!(env!("OUT_DIR"), "/features2d.consts.rs"));

/// The Keypoint Class
/// 
/// The class instance stores a keypoint, i.e. a point feature found by one of many available keypoint detectors, such as
/// Harris corner detector, cv::FAST, cv::StarDetector, cv::SURF, cv::SIFT, cv::LDetector etc.
/// 
/// The keypoint is characterized by the 2D position, scale
/// (proportional to the diameter of the neighborhood that needs to be taken into account),
/// orientation and some other parameters. The keypoint neighborhood is then analyzed by another algorithm that builds a descriptor
/// (usually represented as a feature vector). The keypoints representing the same object in different images can then be matched using
/// cv::KDTree or another method.
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct KeyPoint {
    pub pt: ::core::Point2f,
    pub size: f32,
    pub angle: f32,
    pub response: f32,
    pub octave: i32,
    pub class_id: i32,
}

/// DMatch
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct DMatch {
    pub queryIdx: i32,
    pub trainIdx: i32,
    pub imgIdx: i32,
    pub distance: f32,
}

/// Params
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct SimpleBlobDetector_Params {
    pub thresholdStep: f32,
    pub minThreshold: f32,
    pub maxThreshold: f32,
    pub minRepeatability: size_t,
    pub minDistBetweenBlobs: f32,
    pub filterByColor: bool,
    pub blobColor: u8,
    pub filterByArea: bool,
    pub minArea: f32,
    pub maxArea: f32,
    pub filterByCircularity: bool,
    pub minCircularity: f32,
    pub maxCircularity: f32,
    pub filterByInertia: bool,
    pub minInertiaRatio: f32,
    pub maxInertiaRatio: f32,
    pub filterByConvexity: bool,
    pub minConvexity: f32,
    pub maxConvexity: f32,
}

// identifier: cv_FASTX_InputArray_image_VectorOfKeyPoint_keypoints_int_threshold_bool_nonmaxSuppression_int_type
pub fn fastx(image:& ::core::Mat, keypoints:& ::types::VectorOfKeyPoint, threshold: i32, nonmaxSuppression: bool, _type: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_features2d_cv_FASTX_InputArray_image_VectorOfKeyPoint_keypoints_int_threshold_bool_nonmaxSuppression_int_type(image.as_raw_Mat(), keypoints.as_raw_VectorOfKeyPoint(), threshold, nonmaxSuppression, _type);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_FAST_InputArray_image_VectorOfKeyPoint_keypoints_int_threshold_bool_nonmaxSuppression
/// detects corners using FAST algorithm by E. Rosten
///
/// default value for arguments:
///   - nonmaxSuppression: default true
pub fn fast(image:& ::core::Mat, keypoints:& ::types::VectorOfKeyPoint, threshold: i32, nonmaxSuppression: bool) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_features2d_cv_FAST_InputArray_image_VectorOfKeyPoint_keypoints_int_threshold_bool_nonmaxSuppression(image.as_raw_Mat(), keypoints.as_raw_VectorOfKeyPoint(), threshold, nonmaxSuppression);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_computeRecallPrecisionCurve_VectorOfVectorOfDMatch_matches1to2_VectorOfVectorOfuchar_correctMatches1to2Mask_VectorOfPoint2f_recallPrecisionCurve
pub fn compute_recall_precision_curve(matches1to2:& ::types::VectorOfVectorOfDMatch, correctMatches1to2Mask:& ::types::VectorOfVectorOfuchar, recallPrecisionCurve:& ::types::VectorOfPoint2f) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_features2d_cv_computeRecallPrecisionCurve_VectorOfVectorOfDMatch_matches1to2_VectorOfVectorOfuchar_correctMatches1to2Mask_VectorOfPoint2f_recallPrecisionCurve(matches1to2.as_raw_VectorOfVectorOfDMatch(), correctMatches1to2Mask.as_raw_VectorOfVectorOfuchar(), recallPrecisionCurve.as_raw_VectorOfPoint2f());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_drawKeypoints_Mat_image_VectorOfKeyPoint_keypoints_Mat_outImage_Scalar_color_int_flags
///
/// default value for arguments:
///   - color: default Scalar::all(-1)
///   - flags: default DrawMatchesFlags::DEFAULT
pub fn draw_keypoints(image:& ::core::Mat, keypoints:& ::types::VectorOfKeyPoint, outImage:& ::core::Mat, color: ::core::Scalar, flags: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_features2d_cv_drawKeypoints_Mat_image_VectorOfKeyPoint_keypoints_Mat_outImage_Scalar_color_int_flags(image.as_raw_Mat(), keypoints.as_raw_VectorOfKeyPoint(), outImage.as_raw_Mat(), color, flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_drawMatches_Mat_img1_VectorOfKeyPoint_keypoints1_Mat_img2_VectorOfKeyPoint_keypoints2_VectorOfDMatch_matches1to2_Mat_outImg_Scalar_matchColor_Scalar_singlePointColor_VectorOfchar_matchesMask_int_flags
///
/// default value for arguments:
///   - matchColor: default Scalar::all(-1)
///   - singlePointColor: default Scalar::all(-1)
///   - matchesMask: default vector<char>()
///   - flags: default DrawMatchesFlags::DEFAULT
pub fn draw_matches(img1:& ::core::Mat, keypoints1:& ::types::VectorOfKeyPoint, img2:& ::core::Mat, keypoints2:& ::types::VectorOfKeyPoint, matches1to2:& ::types::VectorOfDMatch, outImg:& ::core::Mat, matchColor: ::core::Scalar, singlePointColor: ::core::Scalar, matchesMask:& ::types::VectorOfchar, flags: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_features2d_cv_drawMatches_Mat_img1_VectorOfKeyPoint_keypoints1_Mat_img2_VectorOfKeyPoint_keypoints2_VectorOfDMatch_matches1to2_Mat_outImg_Scalar_matchColor_Scalar_singlePointColor_VectorOfchar_matchesMask_int_flags(img1.as_raw_Mat(), keypoints1.as_raw_VectorOfKeyPoint(), img2.as_raw_Mat(), keypoints2.as_raw_VectorOfKeyPoint(), matches1to2.as_raw_VectorOfDMatch(), outImg.as_raw_Mat(), matchColor, singlePointColor, matchesMask.as_raw_VectorOfchar(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_drawMatches_Mat_img1_VectorOfKeyPoint_keypoints1_Mat_img2_VectorOfKeyPoint_keypoints2_VectorOfVectorOfDMatch_matches1to2_Mat_outImg_Scalar_matchColor_Scalar_singlePointColor_VectorOfVectorOfchar_matchesMask_int_flags
///
/// default value for arguments:
///   - matchColor: default Scalar::all(-1)
///   - singlePointColor: default Scalar::all(-1)
///   - matchesMask: default vector<vector<char> >()
///   - flags: default DrawMatchesFlags::DEFAULT
pub fn draw_vector_matches(img1:& ::core::Mat, keypoints1:& ::types::VectorOfKeyPoint, img2:& ::core::Mat, keypoints2:& ::types::VectorOfKeyPoint, matches1to2:& ::types::VectorOfVectorOfDMatch, outImg:& ::core::Mat, matchColor: ::core::Scalar, singlePointColor: ::core::Scalar, matchesMask:& ::types::VectorOfVectorOfchar, flags: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_features2d_cv_drawMatches_Mat_img1_VectorOfKeyPoint_keypoints1_Mat_img2_VectorOfKeyPoint_keypoints2_VectorOfVectorOfDMatch_matches1to2_Mat_outImg_Scalar_matchColor_Scalar_singlePointColor_VectorOfVectorOfchar_matchesMask_int_flags(img1.as_raw_Mat(), keypoints1.as_raw_VectorOfKeyPoint(), img2.as_raw_Mat(), keypoints2.as_raw_VectorOfKeyPoint(), matches1to2.as_raw_VectorOfVectorOfDMatch(), outImg.as_raw_Mat(), matchColor, singlePointColor, matchesMask.as_raw_VectorOfVectorOfchar(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_evaluateFeatureDetector_Mat_img1_Mat_img2_Mat_H1to2_VectorOfKeyPoint_keypoints1_VectorOfKeyPoint_keypoints2_float_repeatability_int_correspCount_PtrOfFeatureDetector_fdetector
///
/// default value for arguments:
///   - fdetector: default Ptr<FeatureDetector>()
pub fn evaluate_feature_detector(img1:& ::core::Mat, img2:& ::core::Mat, H1to2:& ::core::Mat, keypoints1:& ::types::VectorOfKeyPoint, keypoints2:& ::types::VectorOfKeyPoint, repeatability: f32, correspCount: i32, fdetector:& ::types::PtrOfFeatureDetector) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_features2d_cv_evaluateFeatureDetector_Mat_img1_Mat_img2_Mat_H1to2_VectorOfKeyPoint_keypoints1_VectorOfKeyPoint_keypoints2_float_repeatability_int_correspCount_PtrOfFeatureDetector_fdetector(img1.as_raw_Mat(), img2.as_raw_Mat(), H1to2.as_raw_Mat(), keypoints1.as_raw_VectorOfKeyPoint(), keypoints2.as_raw_VectorOfKeyPoint(), repeatability, correspCount, fdetector.as_raw_PtrOfFeatureDetector());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_evaluateGenericDescriptorMatcher_Mat_img1_Mat_img2_Mat_H1to2_VectorOfKeyPoint_keypoints1_VectorOfKeyPoint_keypoints2_VectorOfVectorOfDMatch_matches1to2_VectorOfVectorOfuchar_correctMatches1to2Mask_VectorOfPoint2f_recallPrecisionCurve_PtrOfGenericDescriptorMatcher_dmatch
///
/// default value for arguments:
///   - dmatch: default Ptr<GenericDescriptorMatcher>()
pub fn evaluate_generic_descriptor_matcher(img1:& ::core::Mat, img2:& ::core::Mat, H1to2:& ::core::Mat, keypoints1:& ::types::VectorOfKeyPoint, keypoints2:& ::types::VectorOfKeyPoint, matches1to2:& ::types::VectorOfVectorOfDMatch, correctMatches1to2Mask:& ::types::VectorOfVectorOfuchar, recallPrecisionCurve:& ::types::VectorOfPoint2f, dmatch:& ::types::PtrOfGenericDescriptorMatcher) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_features2d_cv_evaluateGenericDescriptorMatcher_Mat_img1_Mat_img2_Mat_H1to2_VectorOfKeyPoint_keypoints1_VectorOfKeyPoint_keypoints2_VectorOfVectorOfDMatch_matches1to2_VectorOfVectorOfuchar_correctMatches1to2Mask_VectorOfPoint2f_recallPrecisionCurve_PtrOfGenericDescriptorMatcher_dmatch(img1.as_raw_Mat(), img2.as_raw_Mat(), H1to2.as_raw_Mat(), keypoints1.as_raw_VectorOfKeyPoint(), keypoints2.as_raw_VectorOfKeyPoint(), matches1to2.as_raw_VectorOfVectorOfDMatch(), correctMatches1to2Mask.as_raw_VectorOfVectorOfuchar(), recallPrecisionCurve.as_raw_VectorOfPoint2f(), dmatch.as_raw_PtrOfGenericDescriptorMatcher());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_getNearestPoint_VectorOfPoint2f_recallPrecisionCurve_float_l_precision
pub fn get_nearest_point(recallPrecisionCurve:& ::types::VectorOfPoint2f, l_precision: f32) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_features2d_cv_getNearestPoint_VectorOfPoint2f_recallPrecisionCurve_float_l_precision(recallPrecisionCurve.as_raw_VectorOfPoint2f(), l_precision);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_getRecall_VectorOfPoint2f_recallPrecisionCurve_float_l_precision
pub fn get_recall(recallPrecisionCurve:& ::types::VectorOfPoint2f, l_precision: f32) -> Result<f32,String> {
  unsafe {
    let rv = ::sys::cv_features2d_cv_getRecall_VectorOfPoint2f_recallPrecisionCurve_float_l_precision(recallPrecisionCurve.as_raw_VectorOfPoint2f(), l_precision);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_initModule_features2d
pub fn init_module_features2d() -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_features2d_cv_initModule_features2d();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_windowedMatchingMask_VectorOfKeyPoint_keypoints1_VectorOfKeyPoint_keypoints2_float_maxDeltaX_float_maxDeltaY
pub fn windowed_matching_mask(keypoints1:& ::types::VectorOfKeyPoint, keypoints2:& ::types::VectorOfKeyPoint, maxDeltaX: f32, maxDeltaY: f32) -> Result<::core::Mat,String> {
  unsafe {
    let rv = ::sys::cv_features2d_cv_windowedMatchingMask_VectorOfKeyPoint_keypoints1_VectorOfKeyPoint_keypoints2_float_maxDeltaX_float_maxDeltaY(keypoints1.as_raw_VectorOfKeyPoint(), keypoints2.as_raw_VectorOfKeyPoint(), maxDeltaX, maxDeltaY);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::core::Mat{ ptr: rv.result })
  }
}

// Generating impl for trait cv::AdjusterAdapter
pub trait AdjusterAdapter : ::features2d::FeatureDetector {
  fn as_raw_AdjusterAdapter(&self) -> *mut c_void;
}


// boxed class cv::BFMatcher
#[allow(dead_code)]
pub struct BFMatcher {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::BFMatcher {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_BFMatcher(self.ptr) };
    }
}
impl ::features2d::BFMatcher {
    pub fn as_raw_BFMatcher(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::DescriptorMatcher for BFMatcher {
    fn as_raw_DescriptorMatcher(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for BFMatcher {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}
impl BFMatcher {

  // identifier: cv_BFMatcher_BFMatcher_int_normType_bool_crossCheck
  ///
  /// default value for arguments:
  ///   - normType: default NORM_L2
  ///   - crossCheck: default false
  pub fn new(normType: i32, crossCheck: bool) -> Result<::features2d::BFMatcher,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BFMatcher_BFMatcher_int_normType_bool_crossCheck(normType, crossCheck);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::BFMatcher{ ptr: rv.result })
    }
  }

  // identifier: cv_BFMatcher_isMaskSupported
  pub fn is_mask_supported(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BFMatcher_isMaskSupported(self.as_raw_BFMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::BOWImgDescriptorExtractor
#[allow(dead_code)]
pub struct BOWImgDescriptorExtractor {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::BOWImgDescriptorExtractor {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_BOWImgDescriptorExtractor(self.ptr) };
    }
}
impl ::features2d::BOWImgDescriptorExtractor {
    pub fn as_raw_BOWImgDescriptorExtractor(&self) -> *mut c_void { self.ptr }
}
impl BOWImgDescriptorExtractor {

  // identifier: cv_BOWImgDescriptorExtractor_setVocabulary_Mat_vocabulary
  pub fn set_vocabulary(&mut self, vocabulary:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BOWImgDescriptorExtractor_setVocabulary_Mat_vocabulary(self.as_raw_BOWImgDescriptorExtractor(), vocabulary.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_BOWImgDescriptorExtractor_getVocabulary
  pub fn get_vocabulary(&self) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BOWImgDescriptorExtractor_getVocabulary(self.as_raw_BOWImgDescriptorExtractor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_BOWImgDescriptorExtractor_compute_Mat_image_VectorOfKeyPoint_keypoints_Mat_imgDescriptor_VectorOfVectorOfint_pointIdxsOfClusters_Mat_descriptors
  ///
  /// default value for arguments:
  ///   - pointIdxsOfClusters: default 0
  ///   - descriptors: default 0
  pub fn compute(&mut self, image:& ::core::Mat, keypoints:& ::types::VectorOfKeyPoint, imgDescriptor:& ::core::Mat, pointIdxsOfClusters:& ::types::VectorOfVectorOfint, descriptors:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BOWImgDescriptorExtractor_compute_Mat_image_VectorOfKeyPoint_keypoints_Mat_imgDescriptor_VectorOfVectorOfint_pointIdxsOfClusters_Mat_descriptors(self.as_raw_BOWImgDescriptorExtractor(), image.as_raw_Mat(), keypoints.as_raw_VectorOfKeyPoint(), imgDescriptor.as_raw_Mat(), pointIdxsOfClusters.as_raw_VectorOfVectorOfint(), descriptors.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_BOWImgDescriptorExtractor_compute2_Mat_image_VectorOfKeyPoint_keypoints_Mat_imgDescriptor
  pub fn compute2(&mut self, image:& ::core::Mat, keypoints:& ::types::VectorOfKeyPoint, imgDescriptor:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BOWImgDescriptorExtractor_compute2_Mat_image_VectorOfKeyPoint_keypoints_Mat_imgDescriptor(self.as_raw_BOWImgDescriptorExtractor(), image.as_raw_Mat(), keypoints.as_raw_VectorOfKeyPoint(), imgDescriptor.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_BOWImgDescriptorExtractor_descriptorSize
  pub fn descriptor_size(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BOWImgDescriptorExtractor_descriptorSize(self.as_raw_BOWImgDescriptorExtractor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_BOWImgDescriptorExtractor_descriptorType
  pub fn descriptor_type(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BOWImgDescriptorExtractor_descriptorType(self.as_raw_BOWImgDescriptorExtractor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::BOWKMeansTrainer
#[allow(dead_code)]
pub struct BOWKMeansTrainer {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::BOWKMeansTrainer {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_BOWKMeansTrainer(self.ptr) };
    }
}
impl ::features2d::BOWKMeansTrainer {
    pub fn as_raw_BOWKMeansTrainer(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::BOWTrainer for BOWKMeansTrainer {
    fn as_raw_BOWTrainer(&self) -> *mut c_void { self.ptr }
}
impl BOWKMeansTrainer {

  // identifier: cv_BOWKMeansTrainer_cluster
  pub fn default(&self) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BOWKMeansTrainer_cluster(self.as_raw_BOWKMeansTrainer());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_BOWKMeansTrainer_cluster_Mat_descriptors
  pub fn new(&self, descriptors:& ::core::Mat) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BOWKMeansTrainer_cluster_Mat_descriptors(self.as_raw_BOWKMeansTrainer(), descriptors.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

}
// Generating impl for trait cv::BOWTrainer
pub trait BOWTrainer {
  fn as_raw_BOWTrainer(&self) -> *mut c_void;
  // identifier: cv_BOWTrainer_add_Mat_descriptors
  fn add(&mut self, descriptors:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BOWTrainer_add_Mat_descriptors(self.as_raw_BOWTrainer(), descriptors.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_BOWTrainer_getDescriptors
  fn get_descriptors(&self) -> Result<::types::VectorOfMat,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BOWTrainer_getDescriptors(self.as_raw_BOWTrainer());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::types::VectorOfMat{ ptr: rv.result })
    }
  }

  // identifier: cv_BOWTrainer_descripotorsCount
  fn descripotors_count(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BOWTrainer_descripotorsCount(self.as_raw_BOWTrainer());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_BOWTrainer_clear
  fn clear(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BOWTrainer_clear(self.as_raw_BOWTrainer());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

}


// boxed class cv::BRISK
#[allow(dead_code)]
pub struct BRISK {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::BRISK {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_BRISK(self.ptr) };
    }
}
impl ::features2d::BRISK {
    pub fn as_raw_BRISK(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for BRISK {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::Feature2D for BRISK {
    fn as_raw_Feature2D(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::FeatureDetector for BRISK {
    fn as_raw_FeatureDetector(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::DescriptorExtractor for BRISK {
    fn as_raw_DescriptorExtractor(&self) -> *mut c_void { self.ptr }
}
impl BRISK {

  // identifier: cv_BRISK_BRISK_int_thresh_int_octaves_float_patternScale
  ///
  /// default value for arguments:
  ///   - thresh: default 30
  ///   - octaves: default 3
  ///   - patternScale: default 1.0f
  pub fn new(thresh: i32, octaves: i32, patternScale: f32) -> Result<::features2d::BRISK,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BRISK_BRISK_int_thresh_int_octaves_float_patternScale(thresh, octaves, patternScale);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::BRISK{ ptr: rv.result })
    }
  }

  // identifier: cv_BRISK_descriptorSize
  pub fn descriptor_size(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BRISK_descriptorSize(self.as_raw_BRISK());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_BRISK_descriptorType
  pub fn descriptor_type(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BRISK_descriptorType(self.as_raw_BRISK());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::BriefDescriptorExtractor
#[allow(dead_code)]
pub struct BriefDescriptorExtractor {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::BriefDescriptorExtractor {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_BriefDescriptorExtractor(self.ptr) };
    }
}
impl ::features2d::BriefDescriptorExtractor {
    pub fn as_raw_BriefDescriptorExtractor(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for BriefDescriptorExtractor {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::DescriptorExtractor for BriefDescriptorExtractor {
    fn as_raw_DescriptorExtractor(&self) -> *mut c_void { self.ptr }
}
impl BriefDescriptorExtractor {

  // identifier: cv_BriefDescriptorExtractor_BriefDescriptorExtractor_int_bytes
  ///
  /// default value for arguments:
  ///   - bytes: default 32
  pub fn new(bytes: i32) -> Result<::features2d::BriefDescriptorExtractor,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BriefDescriptorExtractor_BriefDescriptorExtractor_int_bytes(bytes);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::BriefDescriptorExtractor{ ptr: rv.result })
    }
  }

  // identifier: cv_BriefDescriptorExtractor_descriptorSize
  pub fn descriptor_size(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BriefDescriptorExtractor_descriptorSize(self.as_raw_BriefDescriptorExtractor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_BriefDescriptorExtractor_descriptorType
  pub fn descriptor_type(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_BriefDescriptorExtractor_descriptorType(self.as_raw_BriefDescriptorExtractor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}
impl DMatch {

  // identifier: cv_DMatch_DMatch
  pub fn default() -> Result<::features2d::DMatch,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DMatch_DMatch();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_DMatch_DMatch_int__queryIdx_int__trainIdx_float__distance
  pub fn new(_queryIdx: i32, _trainIdx: i32, _distance: f32) -> Result<::features2d::DMatch,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DMatch_DMatch_int__queryIdx_int__trainIdx_float__distance(_queryIdx, _trainIdx, _distance);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_DMatch_DMatch_int__queryIdx_int__trainIdx_int__imgIdx_float__distance
  pub fn new_index(_queryIdx: i32, _trainIdx: i32, _imgIdx: i32, _distance: f32) -> Result<::features2d::DMatch,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DMatch_DMatch_int__queryIdx_int__trainIdx_int__imgIdx_float__distance(_queryIdx, _trainIdx, _imgIdx, _distance);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::DenseFeatureDetector
#[allow(dead_code)]
pub struct DenseFeatureDetector {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::DenseFeatureDetector {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_DenseFeatureDetector(self.ptr) };
    }
}
impl ::features2d::DenseFeatureDetector {
    pub fn as_raw_DenseFeatureDetector(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for DenseFeatureDetector {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::FeatureDetector for DenseFeatureDetector {
    fn as_raw_FeatureDetector(&self) -> *mut c_void { self.ptr }
}
impl DenseFeatureDetector {

  // identifier: cv_DenseFeatureDetector_DenseFeatureDetector_float_initFeatureScale_int_featureScaleLevels_float_featureScaleMul_int_initXyStep_int_initImgBound_bool_varyXyStepWithScale_bool_varyImgBoundWithScale
  ///
  /// default value for arguments:
  ///   - initFeatureScale: default 1.f
  ///   - featureScaleLevels: default 1
  ///   - featureScaleMul: default 0.1f
  ///   - initXyStep: default 6
  ///   - initImgBound: default 0
  ///   - varyXyStepWithScale: default true
  ///   - varyImgBoundWithScale: default false
  pub fn new(initFeatureScale: f32, featureScaleLevels: i32, featureScaleMul: f32, initXyStep: i32, initImgBound: i32, varyXyStepWithScale: bool, varyImgBoundWithScale: bool) -> Result<::features2d::DenseFeatureDetector,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DenseFeatureDetector_DenseFeatureDetector_float_initFeatureScale_int_featureScaleLevels_float_featureScaleMul_int_initXyStep_int_initImgBound_bool_varyXyStepWithScale_bool_varyImgBoundWithScale(initFeatureScale, featureScaleLevels, featureScaleMul, initXyStep, initImgBound, varyXyStepWithScale, varyImgBoundWithScale);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::DenseFeatureDetector{ ptr: rv.result })
    }
  }

}
// Generating impl for trait cv::DescriptorExtractor
pub trait DescriptorExtractor : ::core::Algorithm {
  fn as_raw_DescriptorExtractor(&self) -> *mut c_void;
  // identifier: cv_DescriptorExtractor_compute_Mat_image_VectorOfKeyPoint_keypoints_Mat_descriptors
  fn compute(&self, image:& ::core::Mat, keypoints:& ::types::VectorOfKeyPoint, descriptors:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DescriptorExtractor_compute_Mat_image_VectorOfKeyPoint_keypoints_Mat_descriptors(self.as_raw_DescriptorExtractor(), image.as_raw_Mat(), keypoints.as_raw_VectorOfKeyPoint(), descriptors.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_DescriptorExtractor_compute_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints_VectorOfMat_descriptors
  fn compute_n(&self, images:& ::types::VectorOfMat, keypoints:& ::types::VectorOfVectorOfKeyPoint, descriptors:& ::types::VectorOfMat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DescriptorExtractor_compute_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints_VectorOfMat_descriptors(self.as_raw_DescriptorExtractor(), images.as_raw_VectorOfMat(), keypoints.as_raw_VectorOfVectorOfKeyPoint(), descriptors.as_raw_VectorOfMat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_DescriptorExtractor_empty
  fn empty(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DescriptorExtractor_empty(self.as_raw_DescriptorExtractor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// Generating impl for trait cv::DescriptorMatcher
pub trait DescriptorMatcher : ::core::Algorithm {
  fn as_raw_DescriptorMatcher(&self) -> *mut c_void;
  // identifier: cv_DescriptorMatcher_add_VectorOfMat_descriptors
  fn add(&mut self, descriptors:& ::types::VectorOfMat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DescriptorMatcher_add_VectorOfMat_descriptors(self.as_raw_DescriptorMatcher(), descriptors.as_raw_VectorOfMat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_DescriptorMatcher_getTrainDescriptors
  fn get_train_descriptors(&self) -> Result<::types::VectorOfMat,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DescriptorMatcher_getTrainDescriptors(self.as_raw_DescriptorMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::types::VectorOfMat{ ptr: rv.result })
    }
  }

  // identifier: cv_DescriptorMatcher_clear
  fn clear(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DescriptorMatcher_clear(self.as_raw_DescriptorMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_DescriptorMatcher_empty
  fn empty(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DescriptorMatcher_empty(self.as_raw_DescriptorMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_DescriptorMatcher_train
  fn train(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DescriptorMatcher_train(self.as_raw_DescriptorMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_DescriptorMatcher_match_Mat_queryDescriptors_Mat_trainDescriptors_VectorOfDMatch_matches_Mat_mask
  ///
  /// default value for arguments:
  ///   - mask: default Mat()
  fn train_matches(&self, queryDescriptors:& ::core::Mat, trainDescriptors:& ::core::Mat, matches:& ::types::VectorOfDMatch, mask:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DescriptorMatcher_match_Mat_queryDescriptors_Mat_trainDescriptors_VectorOfDMatch_matches_Mat_mask(self.as_raw_DescriptorMatcher(), queryDescriptors.as_raw_Mat(), trainDescriptors.as_raw_Mat(), matches.as_raw_VectorOfDMatch(), mask.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_DescriptorMatcher_knnMatch_Mat_queryDescriptors_Mat_trainDescriptors_VectorOfVectorOfDMatch_matches_int_k_Mat_mask_bool_compactResult
  ///
  /// default value for arguments:
  ///   - mask: default Mat()
  ///   - compactResult: default false
  fn knn_train_matches(&self, queryDescriptors:& ::core::Mat, trainDescriptors:& ::core::Mat, matches:& ::types::VectorOfVectorOfDMatch, k: i32, mask:& ::core::Mat, compactResult: bool) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DescriptorMatcher_knnMatch_Mat_queryDescriptors_Mat_trainDescriptors_VectorOfVectorOfDMatch_matches_int_k_Mat_mask_bool_compactResult(self.as_raw_DescriptorMatcher(), queryDescriptors.as_raw_Mat(), trainDescriptors.as_raw_Mat(), matches.as_raw_VectorOfVectorOfDMatch(), k, mask.as_raw_Mat(), compactResult);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_DescriptorMatcher_radiusMatch_Mat_queryDescriptors_Mat_trainDescriptors_VectorOfVectorOfDMatch_matches_float_maxDistance_Mat_mask_bool_compactResult
  ///
  /// default value for arguments:
  ///   - mask: default Mat()
  ///   - compactResult: default false
  fn train_radius_matches(&self, queryDescriptors:& ::core::Mat, trainDescriptors:& ::core::Mat, matches:& ::types::VectorOfVectorOfDMatch, maxDistance: f32, mask:& ::core::Mat, compactResult: bool) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DescriptorMatcher_radiusMatch_Mat_queryDescriptors_Mat_trainDescriptors_VectorOfVectorOfDMatch_matches_float_maxDistance_Mat_mask_bool_compactResult(self.as_raw_DescriptorMatcher(), queryDescriptors.as_raw_Mat(), trainDescriptors.as_raw_Mat(), matches.as_raw_VectorOfVectorOfDMatch(), maxDistance, mask.as_raw_Mat(), compactResult);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_DescriptorMatcher_match_Mat_queryDescriptors_VectorOfDMatch_matches_VectorOfMat_masks
  ///
  /// default value for arguments:
  ///   - masks: default vector<Mat>()
  fn matches(&mut self, queryDescriptors:& ::core::Mat, matches:& ::types::VectorOfDMatch, masks:& ::types::VectorOfMat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DescriptorMatcher_match_Mat_queryDescriptors_VectorOfDMatch_matches_VectorOfMat_masks(self.as_raw_DescriptorMatcher(), queryDescriptors.as_raw_Mat(), matches.as_raw_VectorOfDMatch(), masks.as_raw_VectorOfMat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_DescriptorMatcher_knnMatch_Mat_queryDescriptors_VectorOfVectorOfDMatch_matches_int_k_VectorOfMat_masks_bool_compactResult
  ///
  /// default value for arguments:
  ///   - masks: default vector<Mat>()
  ///   - compactResult: default false
  fn knn_matches(&mut self, queryDescriptors:& ::core::Mat, matches:& ::types::VectorOfVectorOfDMatch, k: i32, masks:& ::types::VectorOfMat, compactResult: bool) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DescriptorMatcher_knnMatch_Mat_queryDescriptors_VectorOfVectorOfDMatch_matches_int_k_VectorOfMat_masks_bool_compactResult(self.as_raw_DescriptorMatcher(), queryDescriptors.as_raw_Mat(), matches.as_raw_VectorOfVectorOfDMatch(), k, masks.as_raw_VectorOfMat(), compactResult);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_DescriptorMatcher_radiusMatch_Mat_queryDescriptors_VectorOfVectorOfDMatch_matches_float_maxDistance_VectorOfMat_masks_bool_compactResult
  ///
  /// default value for arguments:
  ///   - masks: default vector<Mat>()
  ///   - compactResult: default false
  fn radius_matches(&mut self, queryDescriptors:& ::core::Mat, matches:& ::types::VectorOfVectorOfDMatch, maxDistance: f32, masks:& ::types::VectorOfMat, compactResult: bool) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DescriptorMatcher_radiusMatch_Mat_queryDescriptors_VectorOfVectorOfDMatch_matches_float_maxDistance_VectorOfMat_masks_bool_compactResult(self.as_raw_DescriptorMatcher(), queryDescriptors.as_raw_Mat(), matches.as_raw_VectorOfVectorOfDMatch(), maxDistance, masks.as_raw_VectorOfMat(), compactResult);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

}


// boxed class cv::DrawMatchesFlags
#[allow(dead_code)]
pub struct DrawMatchesFlags {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::DrawMatchesFlags {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_DrawMatchesFlags(self.ptr) };
    }
}
impl ::features2d::DrawMatchesFlags {
    pub fn as_raw_DrawMatchesFlags(&self) -> *mut c_void { self.ptr }
}
impl DrawMatchesFlags {

}

// boxed class cv::DynamicAdaptedFeatureDetector
#[allow(dead_code)]
pub struct DynamicAdaptedFeatureDetector {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::DynamicAdaptedFeatureDetector {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_DynamicAdaptedFeatureDetector(self.ptr) };
    }
}
impl ::features2d::DynamicAdaptedFeatureDetector {
    pub fn as_raw_DynamicAdaptedFeatureDetector(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for DynamicAdaptedFeatureDetector {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::FeatureDetector for DynamicAdaptedFeatureDetector {
    fn as_raw_FeatureDetector(&self) -> *mut c_void { self.ptr }
}
impl DynamicAdaptedFeatureDetector {

  // identifier: cv_DynamicAdaptedFeatureDetector_empty
  pub fn empty(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_DynamicAdaptedFeatureDetector_empty(self.as_raw_DynamicAdaptedFeatureDetector());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::FREAK
#[allow(dead_code)]
pub struct FREAK {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::FREAK {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_FREAK(self.ptr) };
    }
}
impl ::features2d::FREAK {
    pub fn as_raw_FREAK(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for FREAK {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::DescriptorExtractor for FREAK {
    fn as_raw_DescriptorExtractor(&self) -> *mut c_void { self.ptr }
}
impl FREAK {

  // identifier: cv_FREAK_FREAK_bool_orientationNormalized_bool_scaleNormalized_float_patternScale_int_nOctaves_VectorOfint_selectedPairs
  /// Constructor
  /// * @param orientationNormalized enable orientation normalization
  /// * @param scaleNormalized enable scale normalization
  /// * @param patternScale scaling of the description pattern
  /// * @param nOctaves number of octaves covered by the detected keypoints
  /// * @param selectedPairs (optional) user defined selected pairs
  ///
  /// default value for arguments:
  ///   - orientationNormalized: default true
  ///   - scaleNormalized: default true
  ///   - patternScale: default 22.0f
  ///   - nOctaves: default 4
  ///   - selectedPairs: default vector<int>()
  pub fn new(orientationNormalized: bool, scaleNormalized: bool, patternScale: f32, nOctaves: i32, selectedPairs:& ::types::VectorOfint) -> Result<::features2d::FREAK,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FREAK_FREAK_bool_orientationNormalized_bool_scaleNormalized_float_patternScale_int_nOctaves_VectorOfint_selectedPairs(orientationNormalized, scaleNormalized, patternScale, nOctaves, selectedPairs.as_raw_VectorOfint());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::FREAK{ ptr: rv.result })
    }
  }

  // identifier: cv_FREAK_FREAK_FREAK_rhs
  pub fn copy(rhs:& ::features2d::FREAK) -> Result<::features2d::FREAK,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FREAK_FREAK_FREAK_rhs(rhs.as_raw_FREAK());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::FREAK{ ptr: rv.result })
    }
  }

  // identifier: cv_FREAK_descriptorSize
  pub fn descriptor_size(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FREAK_descriptorSize(self.as_raw_FREAK());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_FREAK_descriptorType
  pub fn descriptor_type(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FREAK_descriptorType(self.as_raw_FREAK());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_FREAK_selectPairs_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints_double_corrThresh_bool_verbose
  /// select the 512 "best description pairs"
  /// * @param images grayscale images set
  /// * @param keypoints set of detected keypoints
  /// * @param corrThresh correlation threshold
  /// * @param verbose print construction information
  /// * @return list of best pair indexes
  ///
  /// default value for arguments:
  ///   - corrThresh: default 0.7
  ///   - verbose: default true
  pub fn select_pairs(&mut self, images:& ::types::VectorOfMat, keypoints:& ::types::VectorOfVectorOfKeyPoint, corrThresh: f64, verbose: bool) -> Result<::types::VectorOfint,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FREAK_selectPairs_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints_double_corrThresh_bool_verbose(self.as_raw_FREAK(), images.as_raw_VectorOfMat(), keypoints.as_raw_VectorOfVectorOfKeyPoint(), corrThresh, verbose);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::types::VectorOfint{ ptr: rv.result })
    }
  }

}

// boxed class cv::FastAdjuster
#[allow(dead_code)]
pub struct FastAdjuster {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::FastAdjuster {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_FastAdjuster(self.ptr) };
    }
}
impl ::features2d::FastAdjuster {
    pub fn as_raw_FastAdjuster(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::AdjusterAdapter for FastAdjuster {
    fn as_raw_AdjusterAdapter(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for FastAdjuster {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::FeatureDetector for FastAdjuster {
    fn as_raw_FeatureDetector(&self) -> *mut c_void { self.ptr }
}
impl FastAdjuster {

  // identifier: cv_FastAdjuster_FastAdjuster_int_init_thresh_bool_nonmax_int_min_thresh_int_max_thresh
  ///
  /// default value for arguments:
  ///   - init_thresh: default 20
  ///   - nonmax: default true
  ///   - min_thresh: default 1
  ///   - max_thresh: default 200
  pub fn new(init_thresh: i32, nonmax: bool, min_thresh: i32, max_thresh: i32) -> Result<::features2d::FastAdjuster,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FastAdjuster_FastAdjuster_int_init_thresh_bool_nonmax_int_min_thresh_int_max_thresh(init_thresh, nonmax, min_thresh, max_thresh);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::FastAdjuster{ ptr: rv.result })
    }
  }

  // identifier: cv_FastAdjuster_tooFew_int_minv_int_n_detected
  pub fn too_few(&mut self, minv: i32, n_detected: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FastAdjuster_tooFew_int_minv_int_n_detected(self.as_raw_FastAdjuster(), minv, n_detected);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_FastAdjuster_tooMany_int_maxv_int_n_detected
  pub fn too_many(&mut self, maxv: i32, n_detected: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FastAdjuster_tooMany_int_maxv_int_n_detected(self.as_raw_FastAdjuster(), maxv, n_detected);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_FastAdjuster_good
  pub fn good(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FastAdjuster_good(self.as_raw_FastAdjuster());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::FastFeatureDetector
#[allow(dead_code)]
pub struct FastFeatureDetector {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::FastFeatureDetector {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_FastFeatureDetector(self.ptr) };
    }
}
impl ::features2d::FastFeatureDetector {
    pub fn as_raw_FastFeatureDetector(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for FastFeatureDetector {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::FeatureDetector for FastFeatureDetector {
    fn as_raw_FeatureDetector(&self) -> *mut c_void { self.ptr }
}
impl FastFeatureDetector {

  // identifier: cv_FastFeatureDetector_FastFeatureDetector_int_threshold_bool_nonmaxSuppression
  ///
  /// default value for arguments:
  ///   - threshold: default 10
  ///   - nonmaxSuppression: default true
  pub fn new(threshold: i32, nonmaxSuppression: bool) -> Result<::features2d::FastFeatureDetector,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FastFeatureDetector_FastFeatureDetector_int_threshold_bool_nonmaxSuppression(threshold, nonmaxSuppression);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::FastFeatureDetector{ ptr: rv.result })
    }
  }

}
// Generating impl for trait cv::Feature2D
pub trait Feature2D : ::features2d::FeatureDetector + ::features2d::DescriptorExtractor {
  fn as_raw_Feature2D(&self) -> *mut c_void;
}

// Generating impl for trait cv::FeatureDetector
pub trait FeatureDetector : ::core::Algorithm {
  fn as_raw_FeatureDetector(&self) -> *mut c_void;
  // identifier: cv_FeatureDetector_detect_Mat_image_VectorOfKeyPoint_keypoints_Mat_mask
  ///
  /// default value for arguments:
  ///   - mask: default Mat()
  fn detect(&self, image:& ::core::Mat, keypoints:& ::types::VectorOfKeyPoint, mask:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FeatureDetector_detect_Mat_image_VectorOfKeyPoint_keypoints_Mat_mask(self.as_raw_FeatureDetector(), image.as_raw_Mat(), keypoints.as_raw_VectorOfKeyPoint(), mask.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_FeatureDetector_detect_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints_VectorOfMat_masks
  ///
  /// default value for arguments:
  ///   - masks: default vector<Mat>()
  fn detect_n(&self, images:& ::types::VectorOfMat, keypoints:& ::types::VectorOfVectorOfKeyPoint, masks:& ::types::VectorOfMat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FeatureDetector_detect_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints_VectorOfMat_masks(self.as_raw_FeatureDetector(), images.as_raw_VectorOfMat(), keypoints.as_raw_VectorOfVectorOfKeyPoint(), masks.as_raw_VectorOfMat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_FeatureDetector_empty
  fn empty(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FeatureDetector_empty(self.as_raw_FeatureDetector());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_FeatureDetector_create_String_detectorType
  fn create(&mut self, detectorType:&str) -> Result<::types::PtrOfFeatureDetector,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FeatureDetector_create_String_detectorType(self.as_raw_FeatureDetector(), CString::new(detectorType).unwrap().as_ptr());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::types::PtrOfFeatureDetector{ ptr: rv.result })
    }
  }

}


// boxed class cv::FlannBasedMatcher
#[allow(dead_code)]
pub struct FlannBasedMatcher {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::FlannBasedMatcher {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_FlannBasedMatcher(self.ptr) };
    }
}
impl ::features2d::FlannBasedMatcher {
    pub fn as_raw_FlannBasedMatcher(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::DescriptorMatcher for FlannBasedMatcher {
    fn as_raw_DescriptorMatcher(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for FlannBasedMatcher {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}
impl FlannBasedMatcher {

  // identifier: cv_FlannBasedMatcher_add_VectorOfMat_descriptors
  pub fn add(&mut self, descriptors:& ::types::VectorOfMat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FlannBasedMatcher_add_VectorOfMat_descriptors(self.as_raw_FlannBasedMatcher(), descriptors.as_raw_VectorOfMat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_FlannBasedMatcher_clear
  pub fn clear(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FlannBasedMatcher_clear(self.as_raw_FlannBasedMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_FlannBasedMatcher_train
  pub fn train(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FlannBasedMatcher_train(self.as_raw_FlannBasedMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_FlannBasedMatcher_isMaskSupported
  pub fn is_mask_supported(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_FlannBasedMatcher_isMaskSupported(self.as_raw_FlannBasedMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::GFTTDetector
#[allow(dead_code)]
pub struct GFTTDetector {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::GFTTDetector {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_GFTTDetector(self.ptr) };
    }
}
impl ::features2d::GFTTDetector {
    pub fn as_raw_GFTTDetector(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for GFTTDetector {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::FeatureDetector for GFTTDetector {
    fn as_raw_FeatureDetector(&self) -> *mut c_void { self.ptr }
}
impl GFTTDetector {

  // identifier: cv_GFTTDetector_GFTTDetector_int_maxCorners_double_qualityLevel_double_minDistance_int_blockSize_bool_useHarrisDetector_double_k
  ///
  /// default value for arguments:
  ///   - maxCorners: default 1000
  ///   - qualityLevel: default 0.01
  ///   - minDistance: default 1
  ///   - blockSize: default 3
  ///   - useHarrisDetector: default false
  ///   - k: default 0.04
  pub fn new(maxCorners: i32, qualityLevel: f64, minDistance: f64, blockSize: i32, useHarrisDetector: bool, k: f64) -> Result<::features2d::GFTTDetector,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GFTTDetector_GFTTDetector_int_maxCorners_double_qualityLevel_double_minDistance_int_blockSize_bool_useHarrisDetector_double_k(maxCorners, qualityLevel, minDistance, blockSize, useHarrisDetector, k);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::GFTTDetector{ ptr: rv.result })
    }
  }

}
// Generating impl for trait cv::GenericDescriptorMatcher
pub trait GenericDescriptorMatcher {
  fn as_raw_GenericDescriptorMatcher(&self) -> *mut c_void;
  // identifier: cv_GenericDescriptorMatcher_add_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints
  fn add(&mut self, images:& ::types::VectorOfMat, keypoints:& ::types::VectorOfVectorOfKeyPoint) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GenericDescriptorMatcher_add_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints(self.as_raw_GenericDescriptorMatcher(), images.as_raw_VectorOfMat(), keypoints.as_raw_VectorOfVectorOfKeyPoint());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_GenericDescriptorMatcher_getTrainImages
  fn get_train_images(&self) -> Result<::types::VectorOfMat,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GenericDescriptorMatcher_getTrainImages(self.as_raw_GenericDescriptorMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::types::VectorOfMat{ ptr: rv.result })
    }
  }

  // identifier: cv_GenericDescriptorMatcher_getTrainKeypoints
  fn get_train_keypoints(&self) -> Result<::types::VectorOfVectorOfKeyPoint,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GenericDescriptorMatcher_getTrainKeypoints(self.as_raw_GenericDescriptorMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::types::VectorOfVectorOfKeyPoint{ ptr: rv.result })
    }
  }

  // identifier: cv_GenericDescriptorMatcher_clear
  fn clear(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GenericDescriptorMatcher_clear(self.as_raw_GenericDescriptorMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_GenericDescriptorMatcher_train
  fn train(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GenericDescriptorMatcher_train(self.as_raw_GenericDescriptorMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_GenericDescriptorMatcher_classify_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints
  fn train_classify(&self, queryImage:& ::core::Mat, queryKeypoints:& ::types::VectorOfKeyPoint, trainImage:& ::core::Mat, trainKeypoints:& ::types::VectorOfKeyPoint) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GenericDescriptorMatcher_classify_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints(self.as_raw_GenericDescriptorMatcher(), queryImage.as_raw_Mat(), queryKeypoints.as_raw_VectorOfKeyPoint(), trainImage.as_raw_Mat(), trainKeypoints.as_raw_VectorOfKeyPoint());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_GenericDescriptorMatcher_classify_Mat_queryImage_VectorOfKeyPoint_queryKeypoints
  fn classify(&mut self, queryImage:& ::core::Mat, queryKeypoints:& ::types::VectorOfKeyPoint) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GenericDescriptorMatcher_classify_Mat_queryImage_VectorOfKeyPoint_queryKeypoints(self.as_raw_GenericDescriptorMatcher(), queryImage.as_raw_Mat(), queryKeypoints.as_raw_VectorOfKeyPoint());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_GenericDescriptorMatcher_match_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints_VectorOfDMatch_matches_Mat_mask
  ///
  /// default value for arguments:
  ///   - mask: default Mat()
  fn train_matches(&self, queryImage:& ::core::Mat, queryKeypoints:& ::types::VectorOfKeyPoint, trainImage:& ::core::Mat, trainKeypoints:& ::types::VectorOfKeyPoint, matches:& ::types::VectorOfDMatch, mask:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GenericDescriptorMatcher_match_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints_VectorOfDMatch_matches_Mat_mask(self.as_raw_GenericDescriptorMatcher(), queryImage.as_raw_Mat(), queryKeypoints.as_raw_VectorOfKeyPoint(), trainImage.as_raw_Mat(), trainKeypoints.as_raw_VectorOfKeyPoint(), matches.as_raw_VectorOfDMatch(), mask.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_GenericDescriptorMatcher_knnMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints_VectorOfVectorOfDMatch_matches_int_k_Mat_mask_bool_compactResult
  ///
  /// default value for arguments:
  ///   - mask: default Mat()
  ///   - compactResult: default false
  fn train_classify_matches(&self, queryImage:& ::core::Mat, queryKeypoints:& ::types::VectorOfKeyPoint, trainImage:& ::core::Mat, trainKeypoints:& ::types::VectorOfKeyPoint, matches:& ::types::VectorOfVectorOfDMatch, k: i32, mask:& ::core::Mat, compactResult: bool) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GenericDescriptorMatcher_knnMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints_VectorOfVectorOfDMatch_matches_int_k_Mat_mask_bool_compactResult(self.as_raw_GenericDescriptorMatcher(), queryImage.as_raw_Mat(), queryKeypoints.as_raw_VectorOfKeyPoint(), trainImage.as_raw_Mat(), trainKeypoints.as_raw_VectorOfKeyPoint(), matches.as_raw_VectorOfVectorOfDMatch(), k, mask.as_raw_Mat(), compactResult);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_GenericDescriptorMatcher_radiusMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints_VectorOfVectorOfDMatch_matches_float_maxDistance_Mat_mask_bool_compactResult
  ///
  /// default value for arguments:
  ///   - mask: default Mat()
  ///   - compactResult: default false
  fn train_radius_matches(&self, queryImage:& ::core::Mat, queryKeypoints:& ::types::VectorOfKeyPoint, trainImage:& ::core::Mat, trainKeypoints:& ::types::VectorOfKeyPoint, matches:& ::types::VectorOfVectorOfDMatch, maxDistance: f32, mask:& ::core::Mat, compactResult: bool) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GenericDescriptorMatcher_radiusMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints_VectorOfVectorOfDMatch_matches_float_maxDistance_Mat_mask_bool_compactResult(self.as_raw_GenericDescriptorMatcher(), queryImage.as_raw_Mat(), queryKeypoints.as_raw_VectorOfKeyPoint(), trainImage.as_raw_Mat(), trainKeypoints.as_raw_VectorOfKeyPoint(), matches.as_raw_VectorOfVectorOfDMatch(), maxDistance, mask.as_raw_Mat(), compactResult);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_GenericDescriptorMatcher_match_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_VectorOfDMatch_matches_VectorOfMat_masks
  ///
  /// default value for arguments:
  ///   - masks: default vector<Mat>()
  fn matches(&mut self, queryImage:& ::core::Mat, queryKeypoints:& ::types::VectorOfKeyPoint, matches:& ::types::VectorOfDMatch, masks:& ::types::VectorOfMat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GenericDescriptorMatcher_match_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_VectorOfDMatch_matches_VectorOfMat_masks(self.as_raw_GenericDescriptorMatcher(), queryImage.as_raw_Mat(), queryKeypoints.as_raw_VectorOfKeyPoint(), matches.as_raw_VectorOfDMatch(), masks.as_raw_VectorOfMat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_GenericDescriptorMatcher_knnMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_VectorOfVectorOfDMatch_matches_int_k_VectorOfMat_masks_bool_compactResult
  ///
  /// default value for arguments:
  ///   - masks: default vector<Mat>()
  ///   - compactResult: default false
  fn knn_matches(&mut self, queryImage:& ::core::Mat, queryKeypoints:& ::types::VectorOfKeyPoint, matches:& ::types::VectorOfVectorOfDMatch, k: i32, masks:& ::types::VectorOfMat, compactResult: bool) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GenericDescriptorMatcher_knnMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_VectorOfVectorOfDMatch_matches_int_k_VectorOfMat_masks_bool_compactResult(self.as_raw_GenericDescriptorMatcher(), queryImage.as_raw_Mat(), queryKeypoints.as_raw_VectorOfKeyPoint(), matches.as_raw_VectorOfVectorOfDMatch(), k, masks.as_raw_VectorOfMat(), compactResult);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_GenericDescriptorMatcher_radiusMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_VectorOfVectorOfDMatch_matches_float_maxDistance_VectorOfMat_masks_bool_compactResult
  ///
  /// default value for arguments:
  ///   - masks: default vector<Mat>()
  ///   - compactResult: default false
  fn radius_matches(&mut self, queryImage:& ::core::Mat, queryKeypoints:& ::types::VectorOfKeyPoint, matches:& ::types::VectorOfVectorOfDMatch, maxDistance: f32, masks:& ::types::VectorOfMat, compactResult: bool) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GenericDescriptorMatcher_radiusMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_VectorOfVectorOfDMatch_matches_float_maxDistance_VectorOfMat_masks_bool_compactResult(self.as_raw_GenericDescriptorMatcher(), queryImage.as_raw_Mat(), queryKeypoints.as_raw_VectorOfKeyPoint(), matches.as_raw_VectorOfVectorOfDMatch(), maxDistance, masks.as_raw_VectorOfMat(), compactResult);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_GenericDescriptorMatcher_empty
  fn empty(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GenericDescriptorMatcher_empty(self.as_raw_GenericDescriptorMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}


// boxed class cv::GridAdaptedFeatureDetector
#[allow(dead_code)]
pub struct GridAdaptedFeatureDetector {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::GridAdaptedFeatureDetector {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_GridAdaptedFeatureDetector(self.ptr) };
    }
}
impl ::features2d::GridAdaptedFeatureDetector {
    pub fn as_raw_GridAdaptedFeatureDetector(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for GridAdaptedFeatureDetector {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::FeatureDetector for GridAdaptedFeatureDetector {
    fn as_raw_FeatureDetector(&self) -> *mut c_void { self.ptr }
}
impl GridAdaptedFeatureDetector {

  // identifier: cv_GridAdaptedFeatureDetector_GridAdaptedFeatureDetector_PtrOfFeatureDetector_detector_int_maxTotalKeypoints_int_gridRows_int_gridCols
  ///
  /// default value for arguments:
  ///   - detector: default 0
  ///   - maxTotalKeypoints: default 1000
  ///   - gridRows: default 4
  ///   - gridCols: default 4
  pub fn new(detector:& ::types::PtrOfFeatureDetector, maxTotalKeypoints: i32, gridRows: i32, gridCols: i32) -> Result<::features2d::GridAdaptedFeatureDetector,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GridAdaptedFeatureDetector_GridAdaptedFeatureDetector_PtrOfFeatureDetector_detector_int_maxTotalKeypoints_int_gridRows_int_gridCols(detector.as_raw_PtrOfFeatureDetector(), maxTotalKeypoints, gridRows, gridCols);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::GridAdaptedFeatureDetector{ ptr: rv.result })
    }
  }

  // identifier: cv_GridAdaptedFeatureDetector_empty
  pub fn empty(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_GridAdaptedFeatureDetector_empty(self.as_raw_GridAdaptedFeatureDetector());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::Hamming
#[allow(dead_code)]
pub struct Hamming {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::Hamming {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_Hamming(self.ptr) };
    }
}
impl ::features2d::Hamming {
    pub fn as_raw_Hamming(&self) -> *mut c_void { self.ptr }
}
impl Hamming {

}
impl KeyPoint {

  // identifier: cv_KeyPoint_KeyPoint
  /// the default constructor
  pub fn default() -> Result<::features2d::KeyPoint,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_KeyPoint_KeyPoint();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_KeyPoint_KeyPoint_Point2f__pt_float__size_float__angle_float__response_int__octave_int__class_id
  /// the full constructor
  ///
  /// default value for arguments:
  ///   - _angle: default -1
  ///   - _response: default 0
  ///   - _octave: default 0
  ///   - _class_id: default -1
  pub fn new_point(_pt: ::core::Point2f, _size: f32, _angle: f32, _response: f32, _octave: i32, _class_id: i32) -> Result<::features2d::KeyPoint,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_KeyPoint_KeyPoint_Point2f__pt_float__size_float__angle_float__response_int__octave_int__class_id(_pt, _size, _angle, _response, _octave, _class_id);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_KeyPoint_KeyPoint_float_x_float_y_float__size_float__angle_float__response_int__octave_int__class_id
  /// another form of the full constructor
  ///
  /// default value for arguments:
  ///   - _angle: default -1
  ///   - _response: default 0
  ///   - _octave: default 0
  ///   - _class_id: default -1
  pub fn new_coords(x: f32, y: f32, _size: f32, _angle: f32, _response: f32, _octave: i32, _class_id: i32) -> Result<::features2d::KeyPoint,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_KeyPoint_KeyPoint_float_x_float_y_float__size_float__angle_float__response_int__octave_int__class_id(x, y, _size, _angle, _response, _octave, _class_id);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_KeyPoint_hash
  pub fn hash(self) -> Result<size_t,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_KeyPoint_hash(self);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_KeyPoint_convert_VectorOfKeyPoint_keypoints_VectorOfPoint2f_points2f_VectorOfint_keypointIndexes
  /// converts vector of keypoints to vector of points
  ///
  /// default value for arguments:
  ///   - keypointIndexes: default vector<int>()
  pub fn convert_from(self, keypoints:& ::types::VectorOfKeyPoint, points2f:& ::types::VectorOfPoint2f, keypointIndexes:& ::types::VectorOfint) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_KeyPoint_convert_VectorOfKeyPoint_keypoints_VectorOfPoint2f_points2f_VectorOfint_keypointIndexes(self, keypoints.as_raw_VectorOfKeyPoint(), points2f.as_raw_VectorOfPoint2f(), keypointIndexes.as_raw_VectorOfint());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_KeyPoint_convert_VectorOfPoint2f_points2f_VectorOfKeyPoint_keypoints_float_size_float_response_int_octave_int_class_id
  /// converts vector of points to the vector of keypoints, where each keypoint is assigned the same size and the same orientation
  ///
  /// default value for arguments:
  ///   - size: default 1
  ///   - response: default 1
  ///   - octave: default 0
  ///   - class_id: default -1
  pub fn convert_to(self, points2f:& ::types::VectorOfPoint2f, keypoints:& ::types::VectorOfKeyPoint, size: f32, response: f32, octave: i32, class_id: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_KeyPoint_convert_VectorOfPoint2f_points2f_VectorOfKeyPoint_keypoints_float_size_float_response_int_octave_int_class_id(self, points2f.as_raw_VectorOfPoint2f(), keypoints.as_raw_VectorOfKeyPoint(), size, response, octave, class_id);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_KeyPoint_overlap_KeyPoint_kp1_KeyPoint_kp2
  /// computes overlap for pair of keypoints;
  /// overlap is a ratio between area of keypoint regions intersection and
  /// area of keypoint regions union (now keypoint region is circle)
  pub fn overlap(self, kp1: ::features2d::KeyPoint, kp2: ::features2d::KeyPoint) -> Result<f32,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_KeyPoint_overlap_KeyPoint_kp1_KeyPoint_kp2(self, kp1, kp2);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::KeyPointsFilter
#[allow(dead_code)]
pub struct KeyPointsFilter {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::KeyPointsFilter {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_KeyPointsFilter(self.ptr) };
    }
}
impl ::features2d::KeyPointsFilter {
    pub fn as_raw_KeyPointsFilter(&self) -> *mut c_void { self.ptr }
}
impl KeyPointsFilter {

  // identifier: cv_KeyPointsFilter_KeyPointsFilter
  pub fn new() -> Result<::features2d::KeyPointsFilter,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_KeyPointsFilter_KeyPointsFilter();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::KeyPointsFilter{ ptr: rv.result })
    }
  }

  // identifier: cv_KeyPointsFilter_runByImageBorder_VectorOfKeyPoint_keypoints_Size_imageSize_int_borderSize
  pub fn run_by_image_border(&mut self, keypoints:& ::types::VectorOfKeyPoint, imageSize: ::core::Size, borderSize: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_KeyPointsFilter_runByImageBorder_VectorOfKeyPoint_keypoints_Size_imageSize_int_borderSize(self.as_raw_KeyPointsFilter(), keypoints.as_raw_VectorOfKeyPoint(), imageSize, borderSize);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_KeyPointsFilter_runByKeypointSize_VectorOfKeyPoint_keypoints_float_minSize_float_maxSize
  ///
  /// default value for arguments:
  ///   - maxSize: default FLT_MAX
  pub fn run_by_keypoint_size(&mut self, keypoints:& ::types::VectorOfKeyPoint, minSize: f32, maxSize: f32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_KeyPointsFilter_runByKeypointSize_VectorOfKeyPoint_keypoints_float_minSize_float_maxSize(self.as_raw_KeyPointsFilter(), keypoints.as_raw_VectorOfKeyPoint(), minSize, maxSize);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_KeyPointsFilter_runByPixelsMask_VectorOfKeyPoint_keypoints_Mat_mask
  pub fn run_by_pixels_mask(&mut self, keypoints:& ::types::VectorOfKeyPoint, mask:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_KeyPointsFilter_runByPixelsMask_VectorOfKeyPoint_keypoints_Mat_mask(self.as_raw_KeyPointsFilter(), keypoints.as_raw_VectorOfKeyPoint(), mask.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_KeyPointsFilter_removeDuplicated_VectorOfKeyPoint_keypoints
  pub fn remove_duplicated(&mut self, keypoints:& ::types::VectorOfKeyPoint) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_KeyPointsFilter_removeDuplicated_VectorOfKeyPoint_keypoints(self.as_raw_KeyPointsFilter(), keypoints.as_raw_VectorOfKeyPoint());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_KeyPointsFilter_retainBest_VectorOfKeyPoint_keypoints_int_npoints
  pub fn retain_best(&mut self, keypoints:& ::types::VectorOfKeyPoint, npoints: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_KeyPointsFilter_retainBest_VectorOfKeyPoint_keypoints_int_npoints(self.as_raw_KeyPointsFilter(), keypoints.as_raw_VectorOfKeyPoint(), npoints);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

}

// boxed class cv::MSER
#[allow(dead_code)]
pub struct MSER {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::MSER {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_MSER(self.ptr) };
    }
}
impl ::features2d::MSER {
    pub fn as_raw_MSER(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for MSER {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::FeatureDetector for MSER {
    fn as_raw_FeatureDetector(&self) -> *mut c_void { self.ptr }
}
impl MSER {

  // identifier: cv_MSER_MSER_int__delta_int__min_area_int__max_area_double__max_variation_double__min_diversity_int__max_evolution_double__area_threshold_double__min_margin_int__edge_blur_size
  /// the full constructor
  ///
  /// default value for arguments:
  ///   - _delta: default 5
  ///   - _min_area: default 60
  ///   - _max_area: default 14400
  ///   - _max_variation: default 0.25
  ///   - _min_diversity: default .2
  ///   - _max_evolution: default 200
  ///   - _area_threshold: default 1.01
  ///   - _min_margin: default 0.003
  ///   - _edge_blur_size: default 5
  pub fn new(_delta: i32, _min_area: i32, _max_area: i32, _max_variation: f64, _min_diversity: f64, _max_evolution: i32, _area_threshold: f64, _min_margin: f64, _edge_blur_size: i32) -> Result<::features2d::MSER,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_MSER_MSER_int__delta_int__min_area_int__max_area_double__max_variation_double__min_diversity_int__max_evolution_double__area_threshold_double__min_margin_int__edge_blur_size(_delta, _min_area, _max_area, _max_variation, _min_diversity, _max_evolution, _area_threshold, _min_margin, _edge_blur_size);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::MSER{ ptr: rv.result })
    }
  }

}

// boxed class cv::ORB
#[allow(dead_code)]
pub struct ORB {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::ORB {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_ORB(self.ptr) };
    }
}
impl ::features2d::ORB {
    pub fn as_raw_ORB(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for ORB {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::Feature2D for ORB {
    fn as_raw_Feature2D(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::FeatureDetector for ORB {
    fn as_raw_FeatureDetector(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::DescriptorExtractor for ORB {
    fn as_raw_DescriptorExtractor(&self) -> *mut c_void { self.ptr }
}
impl ORB {

  // identifier: cv_ORB_ORB_int_nfeatures_float_scaleFactor_int_nlevels_int_edgeThreshold_int_firstLevel_int_WTA_K_int_scoreType_int_patchSize
  ///
  /// default value for arguments:
  ///   - nfeatures: default 500
  ///   - scaleFactor: default 1.2f
  ///   - nlevels: default 8
  ///   - edgeThreshold: default 31
  ///   - firstLevel: default 0
  ///   - WTA_K: default 2
  ///   - scoreType: default ORB::HARRIS_SCORE
  ///   - patchSize: default 31
  pub fn new(nfeatures: i32, scaleFactor: f32, nlevels: i32, edgeThreshold: i32, firstLevel: i32, WTA_K: i32, scoreType: i32, patchSize: i32) -> Result<::features2d::ORB,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_ORB_ORB_int_nfeatures_float_scaleFactor_int_nlevels_int_edgeThreshold_int_firstLevel_int_WTA_K_int_scoreType_int_patchSize(nfeatures, scaleFactor, nlevels, edgeThreshold, firstLevel, WTA_K, scoreType, patchSize);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::ORB{ ptr: rv.result })
    }
  }

  // identifier: cv_ORB_descriptorSize
  pub fn descriptor_size(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_ORB_descriptorSize(self.as_raw_ORB());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_ORB_descriptorType
  pub fn descriptor_type(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_ORB_descriptorType(self.as_raw_ORB());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::OpponentColorDescriptorExtractor
#[allow(dead_code)]
pub struct OpponentColorDescriptorExtractor {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::OpponentColorDescriptorExtractor {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_OpponentColorDescriptorExtractor(self.ptr) };
    }
}
impl ::features2d::OpponentColorDescriptorExtractor {
    pub fn as_raw_OpponentColorDescriptorExtractor(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for OpponentColorDescriptorExtractor {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::DescriptorExtractor for OpponentColorDescriptorExtractor {
    fn as_raw_DescriptorExtractor(&self) -> *mut c_void { self.ptr }
}
impl OpponentColorDescriptorExtractor {

  // identifier: cv_OpponentColorDescriptorExtractor_descriptorSize
  pub fn descriptor_size(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_OpponentColorDescriptorExtractor_descriptorSize(self.as_raw_OpponentColorDescriptorExtractor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_OpponentColorDescriptorExtractor_descriptorType
  pub fn descriptor_type(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_OpponentColorDescriptorExtractor_descriptorType(self.as_raw_OpponentColorDescriptorExtractor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_OpponentColorDescriptorExtractor_empty
  pub fn empty(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_OpponentColorDescriptorExtractor_empty(self.as_raw_OpponentColorDescriptorExtractor());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::PyramidAdaptedFeatureDetector
#[allow(dead_code)]
pub struct PyramidAdaptedFeatureDetector {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::PyramidAdaptedFeatureDetector {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_PyramidAdaptedFeatureDetector(self.ptr) };
    }
}
impl ::features2d::PyramidAdaptedFeatureDetector {
    pub fn as_raw_PyramidAdaptedFeatureDetector(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for PyramidAdaptedFeatureDetector {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::FeatureDetector for PyramidAdaptedFeatureDetector {
    fn as_raw_FeatureDetector(&self) -> *mut c_void { self.ptr }
}
impl PyramidAdaptedFeatureDetector {

  // identifier: cv_PyramidAdaptedFeatureDetector_PyramidAdaptedFeatureDetector_PtrOfFeatureDetector_detector_int_maxLevel
  ///
  /// default value for arguments:
  ///   - maxLevel: default 2
  pub fn new(detector:& ::types::PtrOfFeatureDetector, maxLevel: i32) -> Result<::features2d::PyramidAdaptedFeatureDetector,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_PyramidAdaptedFeatureDetector_PyramidAdaptedFeatureDetector_PtrOfFeatureDetector_detector_int_maxLevel(detector.as_raw_PtrOfFeatureDetector(), maxLevel);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::PyramidAdaptedFeatureDetector{ ptr: rv.result })
    }
  }

  // identifier: cv_PyramidAdaptedFeatureDetector_empty
  pub fn empty(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_PyramidAdaptedFeatureDetector_empty(self.as_raw_PyramidAdaptedFeatureDetector());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::SimpleBlobDetector
#[allow(dead_code)]
pub struct SimpleBlobDetector {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::SimpleBlobDetector {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_SimpleBlobDetector(self.ptr) };
    }
}
impl ::features2d::SimpleBlobDetector {
    pub fn as_raw_SimpleBlobDetector(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for SimpleBlobDetector {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::FeatureDetector for SimpleBlobDetector {
    fn as_raw_FeatureDetector(&self) -> *mut c_void { self.ptr }
}
impl SimpleBlobDetector {

}
impl SimpleBlobDetector_Params {

  // identifier: cv_SimpleBlobDetector_Params_Params
  pub fn new() -> Result<::features2d::SimpleBlobDetector_Params,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_SimpleBlobDetector_Params_Params();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::StarAdjuster
#[allow(dead_code)]
pub struct StarAdjuster {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::StarAdjuster {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_StarAdjuster(self.ptr) };
    }
}
impl ::features2d::StarAdjuster {
    pub fn as_raw_StarAdjuster(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::AdjusterAdapter for StarAdjuster {
    fn as_raw_AdjusterAdapter(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for StarAdjuster {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::FeatureDetector for StarAdjuster {
    fn as_raw_FeatureDetector(&self) -> *mut c_void { self.ptr }
}
impl StarAdjuster {

  // identifier: cv_StarAdjuster_StarAdjuster_double_initial_thresh_double_min_thresh_double_max_thresh
  ///
  /// default value for arguments:
  ///   - initial_thresh: default 30.0
  ///   - min_thresh: default 2.
  ///   - max_thresh: default 200.
  pub fn new(initial_thresh: f64, min_thresh: f64, max_thresh: f64) -> Result<::features2d::StarAdjuster,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_StarAdjuster_StarAdjuster_double_initial_thresh_double_min_thresh_double_max_thresh(initial_thresh, min_thresh, max_thresh);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::StarAdjuster{ ptr: rv.result })
    }
  }

  // identifier: cv_StarAdjuster_tooFew_int_minv_int_n_detected
  pub fn too_few(&mut self, minv: i32, n_detected: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_StarAdjuster_tooFew_int_minv_int_n_detected(self.as_raw_StarAdjuster(), minv, n_detected);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_StarAdjuster_tooMany_int_maxv_int_n_detected
  pub fn too_many(&mut self, maxv: i32, n_detected: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_StarAdjuster_tooMany_int_maxv_int_n_detected(self.as_raw_StarAdjuster(), maxv, n_detected);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_StarAdjuster_good
  pub fn good(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_StarAdjuster_good(self.as_raw_StarAdjuster());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::StarDetector
#[allow(dead_code)]
pub struct StarDetector {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::StarDetector {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_StarDetector(self.ptr) };
    }
}
impl ::features2d::StarDetector {
    pub fn as_raw_StarDetector(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for StarDetector {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::FeatureDetector for StarDetector {
    fn as_raw_FeatureDetector(&self) -> *mut c_void { self.ptr }
}
impl StarDetector {

  // identifier: cv_StarDetector_StarDetector_int__maxSize_int__responseThreshold_int__lineThresholdProjected_int__lineThresholdBinarized_int__suppressNonmaxSize
  /// the full constructor
  ///
  /// default value for arguments:
  ///   - _maxSize: default 45
  ///   - _responseThreshold: default 30
  ///   - _lineThresholdProjected: default 10
  ///   - _lineThresholdBinarized: default 8
  ///   - _suppressNonmaxSize: default 5
  pub fn new(_maxSize: i32, _responseThreshold: i32, _lineThresholdProjected: i32, _lineThresholdBinarized: i32, _suppressNonmaxSize: i32) -> Result<::features2d::StarDetector,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_StarDetector_StarDetector_int__maxSize_int__responseThreshold_int__lineThresholdProjected_int__lineThresholdBinarized_int__suppressNonmaxSize(_maxSize, _responseThreshold, _lineThresholdProjected, _lineThresholdBinarized, _suppressNonmaxSize);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::StarDetector{ ptr: rv.result })
    }
  }

}

// boxed class cv::SurfAdjuster
#[allow(dead_code)]
pub struct SurfAdjuster {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::SurfAdjuster {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_SurfAdjuster(self.ptr) };
    }
}
impl ::features2d::SurfAdjuster {
    pub fn as_raw_SurfAdjuster(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::AdjusterAdapter for SurfAdjuster {
    fn as_raw_AdjusterAdapter(&self) -> *mut c_void { self.ptr }
}

impl ::core::Algorithm for SurfAdjuster {
    fn as_raw_Algorithm(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::FeatureDetector for SurfAdjuster {
    fn as_raw_FeatureDetector(&self) -> *mut c_void { self.ptr }
}
impl SurfAdjuster {

  // identifier: cv_SurfAdjuster_SurfAdjuster_double_initial_thresh_double_min_thresh_double_max_thresh
  ///
  /// default value for arguments:
  ///   - initial_thresh: default 400.f
  ///   - min_thresh: default 2
  ///   - max_thresh: default 1000
  pub fn new(initial_thresh: f64, min_thresh: f64, max_thresh: f64) -> Result<::features2d::SurfAdjuster,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_SurfAdjuster_SurfAdjuster_double_initial_thresh_double_min_thresh_double_max_thresh(initial_thresh, min_thresh, max_thresh);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::features2d::SurfAdjuster{ ptr: rv.result })
    }
  }

  // identifier: cv_SurfAdjuster_tooFew_int_minv_int_n_detected
  pub fn too_few(&mut self, minv: i32, n_detected: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_SurfAdjuster_tooFew_int_minv_int_n_detected(self.as_raw_SurfAdjuster(), minv, n_detected);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_SurfAdjuster_tooMany_int_maxv_int_n_detected
  pub fn too_many(&mut self, maxv: i32, n_detected: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_SurfAdjuster_tooMany_int_maxv_int_n_detected(self.as_raw_SurfAdjuster(), maxv, n_detected);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_SurfAdjuster_good
  pub fn good(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_SurfAdjuster_good(self.as_raw_SurfAdjuster());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::VectorDescriptorMatcher
#[allow(dead_code)]
pub struct VectorDescriptorMatcher {
    pub ptr: *mut c_void
}
impl Drop for ::features2d::VectorDescriptorMatcher {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_VectorDescriptorMatcher(self.ptr) };
    }
}
impl ::features2d::VectorDescriptorMatcher {
    pub fn as_raw_VectorDescriptorMatcher(&self) -> *mut c_void { self.ptr }
}

impl ::features2d::GenericDescriptorMatcher for VectorDescriptorMatcher {
    fn as_raw_GenericDescriptorMatcher(&self) -> *mut c_void { self.ptr }
}
impl VectorDescriptorMatcher {

  // identifier: cv_VectorDescriptorMatcher_add_VectorOfMat_imgCollection_VectorOfVectorOfKeyPoint_pointCollection
  pub fn add(&mut self, imgCollection:& ::types::VectorOfMat, pointCollection:& ::types::VectorOfVectorOfKeyPoint) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_VectorDescriptorMatcher_add_VectorOfMat_imgCollection_VectorOfVectorOfKeyPoint_pointCollection(self.as_raw_VectorDescriptorMatcher(), imgCollection.as_raw_VectorOfMat(), pointCollection.as_raw_VectorOfVectorOfKeyPoint());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_VectorDescriptorMatcher_clear
  pub fn clear(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_VectorDescriptorMatcher_clear(self.as_raw_VectorDescriptorMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_VectorDescriptorMatcher_train
  pub fn train(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_VectorDescriptorMatcher_train(self.as_raw_VectorDescriptorMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_VectorDescriptorMatcher_isMaskSupported
  pub fn is_mask_supported(&mut self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_VectorDescriptorMatcher_isMaskSupported(self.as_raw_VectorDescriptorMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_VectorDescriptorMatcher_empty
  pub fn empty(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_VectorDescriptorMatcher_empty(self.as_raw_VectorDescriptorMatcher());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_VectorDescriptorMatcher_clone_bool_emptyTrainData
  ///
  /// default value for arguments:
  ///   - emptyTrainData: default false
  pub fn clone(&self, emptyTrainData: bool) -> Result<::types::PtrOfGenericDescriptorMatcher,String> {
    unsafe {
      let rv = ::sys::cv_features2d_cv_VectorDescriptorMatcher_clone_bool_emptyTrainData(self.as_raw_VectorDescriptorMatcher(), emptyTrainData);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::types::PtrOfGenericDescriptorMatcher{ ptr: rv.result })
    }
  }

}
