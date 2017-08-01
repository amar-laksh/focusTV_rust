extern "C" {
#[doc(hidden)] pub fn cv_video_cv_calcGlobalOrientation_InputArray_orientation_InputArray_mask_InputArray_mhi_double_timestamp_double_duration(orientation: *mut c_void, mask: *mut c_void, mhi: *mut c_void, timestamp: f64, duration: f64) -> cv_return_value_double;
#[doc(hidden)] pub fn cv_video_cv_calcMotionGradient_InputArray_mhi_OutputArray_mask_OutputArray_orientation_double_delta1_double_delta2_int_apertureSize(mhi: *mut c_void, mask: *mut c_void, orientation: *mut c_void, delta1: f64, delta2: f64, apertureSize: i32) -> cv_return_value_void;
#[doc(hidden)] pub fn cv_video_cv_calcOpticalFlowSF_Mat_from_Mat_to_Mat_flow_int_layers_int_averaging_block_size_int_max_flow(from: *mut c_void, to: *mut c_void, flow: *mut c_void, layers: i32, averaging_block_size: i32, max_flow: i32) -> cv_return_value_void;
#[doc(hidden)] pub fn cv_video_cv_calcOpticalFlowSF_Mat_from_Mat_to_Mat_flow_int_layers_int_averaging_block_size_int_max_flow_double_sigma_dist_double_sigma_color_int_postprocess_window_double_sigma_dist_fix_double_sigma_color_fix_double_occ_thr_int_upscale_averaging_radius_double_upscale_sigma_dist_double_upscale_sigma_color_double_speed_up_thr(from: *mut c_void, to: *mut c_void, flow: *mut c_void, layers: i32, averaging_block_size: i32, max_flow: i32, sigma_dist: f64, sigma_color: f64, postprocess_window: i32, sigma_dist_fix: f64, sigma_color_fix: f64, occ_thr: f64, upscale_averaging_radius: i32, upscale_sigma_dist: f64, upscale_sigma_color: f64, speed_up_thr: f64) -> cv_return_value_void;
#[doc(hidden)] pub fn cv_video_cv_estimateRigidTransform_InputArray_src_InputArray_dst_bool_fullAffine(src: *mut c_void, dst: *mut c_void, fullAffine: bool) -> cv_return_value_void_X;
#[doc(hidden)] pub fn cv_video_cv_initModule_video() -> cv_return_value_char;
#[doc(hidden)] pub fn cv_video_cv_segmentMotion_InputArray_mhi_OutputArray_segmask_VectorOfRect_boundingRects_double_timestamp_double_segThresh(mhi: *mut c_void, segmask: *mut c_void, boundingRects: *mut c_void, timestamp: f64, segThresh: f64) -> cv_return_value_void;
#[doc(hidden)] pub fn cv_video_cv_BackgroundSubtractor_getBackgroundImage_OutputArray_backgroundImage(instance: *const c_void, backgroundImage: *mut c_void) -> cv_return_value_void;
pub fn cv_delete_BackgroundSubtractorGMG(ptr : *mut c_void);
#[doc(hidden)] pub fn cv_video_cv_BackgroundSubtractorGMG_BackgroundSubtractorGMG() -> cv_return_value_void_X;
#[doc(hidden)] pub fn cv_video_cv_BackgroundSubtractorGMG_release(instance: *mut c_void) -> cv_return_value_void;
pub fn cv_delete_BackgroundSubtractorMOG(ptr : *mut c_void);
#[doc(hidden)] pub fn cv_video_cv_BackgroundSubtractorMOG_BackgroundSubtractorMOG() -> cv_return_value_void_X;
#[doc(hidden)] pub fn cv_video_cv_BackgroundSubtractorMOG_BackgroundSubtractorMOG_int_history_int_nmixtures_double_backgroundRatio_double_noiseSigma(history: i32, nmixtures: i32, backgroundRatio: f64, noiseSigma: f64) -> cv_return_value_void_X;
#[doc(hidden)] pub fn cv_video_cv_BackgroundSubtractorMOG_initialize_Size_frameSize_int_frameType(instance: *mut c_void, frameSize: ::core::Size, frameType: i32) -> cv_return_value_void;
pub fn cv_delete_BackgroundSubtractorMOG2(ptr : *mut c_void);
#[doc(hidden)] pub fn cv_video_cv_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2() -> cv_return_value_void_X;
#[doc(hidden)] pub fn cv_video_cv_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2_int_history_float_varThreshold_bool_bShadowDetection(history: i32, varThreshold: f32, bShadowDetection: bool) -> cv_return_value_void_X;
#[doc(hidden)] pub fn cv_video_cv_BackgroundSubtractorMOG2_getBackgroundImage_OutputArray_backgroundImage(instance: *const c_void, backgroundImage: *mut c_void) -> cv_return_value_void;
#[doc(hidden)] pub fn cv_video_cv_BackgroundSubtractorMOG2_initialize_Size_frameSize_int_frameType(instance: *mut c_void, frameSize: ::core::Size, frameType: i32) -> cv_return_value_void;
pub fn cv_delete_KalmanFilter(ptr : *mut c_void);
#[doc(hidden)] pub fn cv_video_cv_KalmanFilter_KalmanFilter() -> cv_return_value_void_X;
#[doc(hidden)] pub fn cv_video_cv_KalmanFilter_KalmanFilter_int_dynamParams_int_measureParams_int_controlParams_int_type(dynamParams: i32, measureParams: i32, controlParams: i32, _type: i32) -> cv_return_value_void_X;
#[doc(hidden)] pub fn cv_video_cv_KalmanFilter_init_int_dynamParams_int_measureParams_int_controlParams_int_type(instance: *mut c_void, dynamParams: i32, measureParams: i32, controlParams: i32, _type: i32) -> cv_return_value_void;
#[doc(hidden)] pub fn cv_video_cv_KalmanFilter_predict_Mat_control(instance: *mut c_void, control: *mut c_void) -> cv_return_value_void_X;
#[doc(hidden)] pub fn cv_video_cv_KalmanFilter_correct_Mat_measurement(instance: *mut c_void, measurement: *mut c_void) -> cv_return_value_void_X;
}
