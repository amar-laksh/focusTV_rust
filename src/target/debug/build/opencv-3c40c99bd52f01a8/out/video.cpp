
//
// This file is auto-generated, please don't edit!
//

#include "stdint.h"
#include "common.h"

typedef int64_t int64;

#include <iostream>


#include "opencv2/opencv_modules.hpp"


#include <string>

#include "common_opencv.h"

using namespace cv;
#include "types.h"


extern "C" {

#include "return_types.h"

// cv_calcGlobalOrientation_InputArray_orientation_InputArray_mask_InputArray_mhi_double_timestamp_double_duration
// parsed: cv::calcGlobalOrientation
// as:     cv::calcGlobalOrientation (function)
// Arg ARG cv::Mat (boxed) orientation=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mhi=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) timestamp=  Primitive(double) = 
// Arg ARG Primitive(double) duration=  Primitive(double) = 
// Return value: Primitive(double)
struct cv_return_value_double cv_video_cv_calcGlobalOrientation_InputArray_orientation_InputArray_mask_InputArray_mhi_double_timestamp_double_duration(
        void* orientation,
        void* mask,
        void* mhi,
        double timestamp,
        double duration) {
  try {
  double cpp_return_value = cv::calcGlobalOrientation(*((cv::Mat*)orientation), *((cv::Mat*)mask), *((cv::Mat*)mhi), *reinterpret_cast<double*>(&timestamp), *reinterpret_cast<double*>(&duration));
  return { NULL, *reinterpret_cast<double*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_double ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_double ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_calcMotionGradient_InputArray_mhi_OutputArray_mask_OutputArray_orientation_double_delta1_double_delta2_int_apertureSize
// parsed: cv::calcMotionGradient
// as:     cv::calcMotionGradient (function)
// Arg ARG cv::Mat (boxed) mhi=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) orientation=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) delta1=  Primitive(double) = 
// Arg ARG Primitive(double) delta2=  Primitive(double) = 
// Arg ARG Primitive(int) apertureSize=  Primitive(int) =3 
// Return value: Primitive(void)
struct cv_return_value_void cv_video_cv_calcMotionGradient_InputArray_mhi_OutputArray_mask_OutputArray_orientation_double_delta1_double_delta2_int_apertureSize(
        void* mhi,
        void* mask,
        void* orientation,
        double delta1,
        double delta2,
        int apertureSize) {
  try {
  cv::calcMotionGradient(*((cv::Mat*)mhi), *((cv::Mat*)mask), *((cv::Mat*)orientation), *reinterpret_cast<double*>(&delta1), *reinterpret_cast<double*>(&delta2), *reinterpret_cast<int*>(&apertureSize));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_calcOpticalFlowSF_Mat_from_Mat_to_Mat_flow_int_layers_int_averaging_block_size_int_max_flow
// parsed: cv::calcOpticalFlowSF
// as:     cv::calcOpticalFlowSF (function)
// Arg ARG cv::Mat (boxed) from=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) to=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) flow=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) layers=  Primitive(int) = 
// Arg ARG Primitive(int) averaging_block_size=  Primitive(int) = 
// Arg ARG Primitive(int) max_flow=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_video_cv_calcOpticalFlowSF_Mat_from_Mat_to_Mat_flow_int_layers_int_averaging_block_size_int_max_flow(
        void* from,
        void* to,
        void* flow,
        int layers,
        int averaging_block_size,
        int max_flow) {
  try {
  cv::calcOpticalFlowSF(*((cv::Mat*)from), *((cv::Mat*)to), *((cv::Mat*)flow), *reinterpret_cast<int*>(&layers), *reinterpret_cast<int*>(&averaging_block_size), *reinterpret_cast<int*>(&max_flow));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_calcOpticalFlowSF_Mat_from_Mat_to_Mat_flow_int_layers_int_averaging_block_size_int_max_flow_double_sigma_dist_double_sigma_color_int_postprocess_window_double_sigma_dist_fix_double_sigma_color_fix_double_occ_thr_int_upscale_averaging_radius_double_upscale_sigma_dist_double_upscale_sigma_color_double_speed_up_thr
// parsed: cv::calcOpticalFlowSF
// as:     cv::calcOpticalFlowSF (function)
// Arg ARG cv::Mat (boxed) from=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) to=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) flow=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) layers=  Primitive(int) = 
// Arg ARG Primitive(int) averaging_block_size=  Primitive(int) = 
// Arg ARG Primitive(int) max_flow=  Primitive(int) = 
// Arg ARG Primitive(double) sigma_dist=  Primitive(double) = 
// Arg ARG Primitive(double) sigma_color=  Primitive(double) = 
// Arg ARG Primitive(int) postprocess_window=  Primitive(int) = 
// Arg ARG Primitive(double) sigma_dist_fix=  Primitive(double) = 
// Arg ARG Primitive(double) sigma_color_fix=  Primitive(double) = 
// Arg ARG Primitive(double) occ_thr=  Primitive(double) = 
// Arg ARG Primitive(int) upscale_averaging_radius=  Primitive(int) = 
// Arg ARG Primitive(double) upscale_sigma_dist=  Primitive(double) = 
// Arg ARG Primitive(double) upscale_sigma_color=  Primitive(double) = 
// Arg ARG Primitive(double) speed_up_thr=  Primitive(double) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_video_cv_calcOpticalFlowSF_Mat_from_Mat_to_Mat_flow_int_layers_int_averaging_block_size_int_max_flow_double_sigma_dist_double_sigma_color_int_postprocess_window_double_sigma_dist_fix_double_sigma_color_fix_double_occ_thr_int_upscale_averaging_radius_double_upscale_sigma_dist_double_upscale_sigma_color_double_speed_up_thr(
        void* from,
        void* to,
        void* flow,
        int layers,
        int averaging_block_size,
        int max_flow,
        double sigma_dist,
        double sigma_color,
        int postprocess_window,
        double sigma_dist_fix,
        double sigma_color_fix,
        double occ_thr,
        int upscale_averaging_radius,
        double upscale_sigma_dist,
        double upscale_sigma_color,
        double speed_up_thr) {
  try {
  cv::calcOpticalFlowSF(*((cv::Mat*)from), *((cv::Mat*)to), *((cv::Mat*)flow), *reinterpret_cast<int*>(&layers), *reinterpret_cast<int*>(&averaging_block_size), *reinterpret_cast<int*>(&max_flow), *reinterpret_cast<double*>(&sigma_dist), *reinterpret_cast<double*>(&sigma_color), *reinterpret_cast<int*>(&postprocess_window), *reinterpret_cast<double*>(&sigma_dist_fix), *reinterpret_cast<double*>(&sigma_color_fix), *reinterpret_cast<double*>(&occ_thr), *reinterpret_cast<int*>(&upscale_averaging_radius), *reinterpret_cast<double*>(&upscale_sigma_dist), *reinterpret_cast<double*>(&upscale_sigma_color), *reinterpret_cast<double*>(&speed_up_thr));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_estimateRigidTransform_InputArray_src_InputArray_dst_bool_fullAffine
// parsed: cv::estimateRigidTransform
// as:     cv::estimateRigidTransform (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(bool) fullAffine=  Primitive(bool) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_video_cv_estimateRigidTransform_InputArray_src_InputArray_dst_bool_fullAffine(
        void* src,
        void* dst,
        char fullAffine) {
  try {
  cv::Mat cpp_return_value = cv::estimateRigidTransform(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<bool*>(&fullAffine));
  return { NULL, new cv::Mat(cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_initModule_video
// parsed: cv::initModule_video
// as:     cv::initModule_video (function)
// Return value: Primitive(bool)
struct cv_return_value_char cv_video_cv_initModule_video(
        ) {
  try {
  bool cpp_return_value = cv::initModule_video();
  return { NULL, *reinterpret_cast<char*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_segmentMotion_InputArray_mhi_OutputArray_segmask_VectorOfRect_boundingRects_double_timestamp_double_segThresh
// parsed: cv::segmentMotion
// as:     cv::segmentMotion (function)
// Arg ARG cv::Mat (boxed) mhi=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) segmask=  cv::Mat (boxed) = 
// Arg ARG Vector[Rect (struct)] boundingRects=  Vector[Rect (struct)] = 
// Arg ARG Primitive(double) timestamp=  Primitive(double) = 
// Arg ARG Primitive(double) segThresh=  Primitive(double) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_video_cv_segmentMotion_InputArray_mhi_OutputArray_segmask_VectorOfRect_boundingRects_double_timestamp_double_segThresh(
        void* mhi,
        void* segmask,
        void* boundingRects,
        double timestamp,
        double segThresh) {
  try {
  cv::segmentMotion(*((cv::Mat*)mhi), *((cv::Mat*)segmask), *((vector<Rect >*)boundingRects), *reinterpret_cast<double*>(&timestamp), *reinterpret_cast<double*>(&segThresh));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_BackgroundSubtractor_getBackgroundImage_OutputArray_backgroundImage
// parsed: cv::BackgroundSubtractor::getBackgroundImage
// as:     cv::BackgroundSubtractor::getBackgroundImage (method) cv::BackgroundSubtractor . getBackgroundImage
// Arg ARG cv::Mat (boxed) backgroundImage=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_video_cv_BackgroundSubtractor_getBackgroundImage_OutputArray_backgroundImage(
        void* instance,
        void* backgroundImage) {
  try {
  ((cv::BackgroundSubtractor*) instance)->getBackgroundImage(*((cv::Mat*)backgroundImage));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}


// boxed class: cv::BackgroundSubtractorGMG
void cv_delete_BackgroundSubtractorGMG(void* instance) {
    delete (cv::BackgroundSubtractorGMG*) instance;
}
// cv_BackgroundSubtractorGMG_BackgroundSubtractorGMG
// parsed: cv::BackgroundSubtractorGMG::BackgroundSubtractorGMG
// as:     cv::BackgroundSubtractorGMG::BackgroundSubtractorGMG (constructor) cv::BackgroundSubtractorGMG . new
// Return value: cv::BackgroundSubtractorGMG (boxed)
struct cv_return_value_void_X cv_video_cv_BackgroundSubtractorGMG_BackgroundSubtractorGMG(
        ) {
  try {
  cv::BackgroundSubtractorGMG* cpp_return_value = new cv::BackgroundSubtractorGMG();
  return { NULL, cpp_return_value };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_BackgroundSubtractorGMG_release
// parsed: cv::BackgroundSubtractorGMG::release
// as:     cv::BackgroundSubtractorGMG::release (method) cv::BackgroundSubtractorGMG . release
// Return value: Primitive(void)
struct cv_return_value_void cv_video_cv_BackgroundSubtractorGMG_release(
        void* instance) {
  try {
  ((cv::BackgroundSubtractorGMG*) instance)->release();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}


// boxed class: cv::BackgroundSubtractorMOG
void cv_delete_BackgroundSubtractorMOG(void* instance) {
    delete (cv::BackgroundSubtractorMOG*) instance;
}
// cv_BackgroundSubtractorMOG_BackgroundSubtractorMOG
// parsed: cv::BackgroundSubtractorMOG::BackgroundSubtractorMOG
// as:     cv::BackgroundSubtractorMOG::BackgroundSubtractorMOG (constructor) cv::BackgroundSubtractorMOG . new
// Return value: cv::BackgroundSubtractorMOG (boxed)
struct cv_return_value_void_X cv_video_cv_BackgroundSubtractorMOG_BackgroundSubtractorMOG(
        ) {
  try {
  cv::BackgroundSubtractorMOG* cpp_return_value = new cv::BackgroundSubtractorMOG();
  return { NULL, cpp_return_value };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_BackgroundSubtractorMOG_BackgroundSubtractorMOG_int_history_int_nmixtures_double_backgroundRatio_double_noiseSigma
// parsed: cv::BackgroundSubtractorMOG::BackgroundSubtractorMOG
// as:     cv::BackgroundSubtractorMOG::BackgroundSubtractorMOG (constructor) cv::BackgroundSubtractorMOG . new
// Arg ARG Primitive(int) history=  Primitive(int) = 
// Arg ARG Primitive(int) nmixtures=  Primitive(int) = 
// Arg ARG Primitive(double) backgroundRatio=  Primitive(double) = 
// Arg ARG Primitive(double) noiseSigma=  Primitive(double) =0 
// Return value: cv::BackgroundSubtractorMOG (boxed)
struct cv_return_value_void_X cv_video_cv_BackgroundSubtractorMOG_BackgroundSubtractorMOG_int_history_int_nmixtures_double_backgroundRatio_double_noiseSigma(
        int history,
        int nmixtures,
        double backgroundRatio,
        double noiseSigma) {
  try {
  cv::BackgroundSubtractorMOG* cpp_return_value = new cv::BackgroundSubtractorMOG(*reinterpret_cast<int*>(&history), *reinterpret_cast<int*>(&nmixtures), *reinterpret_cast<double*>(&backgroundRatio), *reinterpret_cast<double*>(&noiseSigma));
  return { NULL, cpp_return_value };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_BackgroundSubtractorMOG_initialize_Size_frameSize_int_frameType
// parsed: cv::BackgroundSubtractorMOG::initialize
// as:     cv::BackgroundSubtractorMOG::initialize (method) cv::BackgroundSubtractorMOG . initialize
// Arg ARG Size (struct) frameSize=  Size (struct) = 
// Arg ARG Primitive(int) frameType=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_video_cv_BackgroundSubtractorMOG_initialize_Size_frameSize_int_frameType(
        void* instance,
        c_Size frameSize,
        int frameType) {
  try {
  ((cv::BackgroundSubtractorMOG*) instance)->initialize(*reinterpret_cast<Size*>(&frameSize), *reinterpret_cast<int*>(&frameType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}


// boxed class: cv::BackgroundSubtractorMOG2
void cv_delete_BackgroundSubtractorMOG2(void* instance) {
    delete (cv::BackgroundSubtractorMOG2*) instance;
}
// cv_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2
// parsed: cv::BackgroundSubtractorMOG2::BackgroundSubtractorMOG2
// as:     cv::BackgroundSubtractorMOG2::BackgroundSubtractorMOG2 (constructor) cv::BackgroundSubtractorMOG2 . new
// Return value: cv::BackgroundSubtractorMOG2 (boxed)
struct cv_return_value_void_X cv_video_cv_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2(
        ) {
  try {
  cv::BackgroundSubtractorMOG2* cpp_return_value = new cv::BackgroundSubtractorMOG2();
  return { NULL, cpp_return_value };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2_int_history_float_varThreshold_bool_bShadowDetection
// parsed: cv::BackgroundSubtractorMOG2::BackgroundSubtractorMOG2
// as:     cv::BackgroundSubtractorMOG2::BackgroundSubtractorMOG2 (constructor) cv::BackgroundSubtractorMOG2 . new
// Arg ARG Primitive(int) history=  Primitive(int) = 
// Arg ARG Primitive(float) varThreshold=  Primitive(float) = 
// Arg ARG Primitive(bool) bShadowDetection=  Primitive(bool) =true 
// Return value: cv::BackgroundSubtractorMOG2 (boxed)
struct cv_return_value_void_X cv_video_cv_BackgroundSubtractorMOG2_BackgroundSubtractorMOG2_int_history_float_varThreshold_bool_bShadowDetection(
        int history,
        float varThreshold,
        char bShadowDetection) {
  try {
  cv::BackgroundSubtractorMOG2* cpp_return_value = new cv::BackgroundSubtractorMOG2(*reinterpret_cast<int*>(&history), *reinterpret_cast<float*>(&varThreshold), *reinterpret_cast<bool*>(&bShadowDetection));
  return { NULL, cpp_return_value };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_BackgroundSubtractorMOG2_getBackgroundImage_OutputArray_backgroundImage
// parsed: cv::BackgroundSubtractorMOG2::getBackgroundImage
// as:     cv::BackgroundSubtractorMOG2::getBackgroundImage (method) cv::BackgroundSubtractorMOG2 . getBackgroundImage
// Arg ARG cv::Mat (boxed) backgroundImage=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_video_cv_BackgroundSubtractorMOG2_getBackgroundImage_OutputArray_backgroundImage(
        void* instance,
        void* backgroundImage) {
  try {
  ((cv::BackgroundSubtractorMOG2*) instance)->getBackgroundImage(*((cv::Mat*)backgroundImage));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_BackgroundSubtractorMOG2_initialize_Size_frameSize_int_frameType
// parsed: cv::BackgroundSubtractorMOG2::initialize
// as:     cv::BackgroundSubtractorMOG2::initialize (method) cv::BackgroundSubtractorMOG2 . initialize
// Arg ARG Size (struct) frameSize=  Size (struct) = 
// Arg ARG Primitive(int) frameType=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_video_cv_BackgroundSubtractorMOG2_initialize_Size_frameSize_int_frameType(
        void* instance,
        c_Size frameSize,
        int frameType) {
  try {
  ((cv::BackgroundSubtractorMOG2*) instance)->initialize(*reinterpret_cast<Size*>(&frameSize), *reinterpret_cast<int*>(&frameType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}


// boxed class: cv::KalmanFilter
void cv_delete_KalmanFilter(void* instance) {
    delete (cv::KalmanFilter*) instance;
}
// cv_KalmanFilter_KalmanFilter
// parsed: cv::KalmanFilter::KalmanFilter
// as:     cv::KalmanFilter::KalmanFilter (constructor) cv::KalmanFilter . new
// Return value: cv::KalmanFilter (boxed)
struct cv_return_value_void_X cv_video_cv_KalmanFilter_KalmanFilter(
        ) {
  try {
  cv::KalmanFilter* cpp_return_value = new cv::KalmanFilter();
  return { NULL, cpp_return_value };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_KalmanFilter_KalmanFilter_int_dynamParams_int_measureParams_int_controlParams_int_type
// parsed: cv::KalmanFilter::KalmanFilter
// as:     cv::KalmanFilter::KalmanFilter (constructor) cv::KalmanFilter . new
// Arg ARG Primitive(int) dynamParams=  Primitive(int) = 
// Arg ARG Primitive(int) measureParams=  Primitive(int) = 
// Arg ARG Primitive(int) controlParams=  Primitive(int) =0 
// Arg ARG Primitive(int) type=  Primitive(int) =CV_32F 
// Return value: cv::KalmanFilter (boxed)
struct cv_return_value_void_X cv_video_cv_KalmanFilter_KalmanFilter_int_dynamParams_int_measureParams_int_controlParams_int_type(
        int dynamParams,
        int measureParams,
        int controlParams,
        int type) {
  try {
  cv::KalmanFilter* cpp_return_value = new cv::KalmanFilter(*reinterpret_cast<int*>(&dynamParams), *reinterpret_cast<int*>(&measureParams), *reinterpret_cast<int*>(&controlParams), *reinterpret_cast<int*>(&type));
  return { NULL, cpp_return_value };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_KalmanFilter_init_int_dynamParams_int_measureParams_int_controlParams_int_type
// parsed: cv::KalmanFilter::init
// as:     cv::KalmanFilter::init (method) cv::KalmanFilter . init
// Arg ARG Primitive(int) dynamParams=  Primitive(int) = 
// Arg ARG Primitive(int) measureParams=  Primitive(int) = 
// Arg ARG Primitive(int) controlParams=  Primitive(int) =0 
// Arg ARG Primitive(int) type=  Primitive(int) =CV_32F 
// Return value: Primitive(void)
struct cv_return_value_void cv_video_cv_KalmanFilter_init_int_dynamParams_int_measureParams_int_controlParams_int_type(
        void* instance,
        int dynamParams,
        int measureParams,
        int controlParams,
        int type) {
  try {
  ((cv::KalmanFilter*) instance)->init(*reinterpret_cast<int*>(&dynamParams), *reinterpret_cast<int*>(&measureParams), *reinterpret_cast<int*>(&controlParams), *reinterpret_cast<int*>(&type));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_KalmanFilter_predict_Mat_control
// parsed: cv::KalmanFilter::predict
// as:     cv::KalmanFilter::predict (method) cv::KalmanFilter . predict
// Arg ARG cv::Mat (boxed) control=  cv::Mat (boxed) =Mat() 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_video_cv_KalmanFilter_predict_Mat_control(
        void* instance,
        void* control) {
  try {
  cv::Mat cpp_return_value = ((cv::KalmanFilter*) instance)->predict(*((cv::Mat*)control));
  return { NULL, new cv::Mat(cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_KalmanFilter_correct_Mat_measurement
// parsed: cv::KalmanFilter::correct
// as:     cv::KalmanFilter::correct (method) cv::KalmanFilter . correct
// Arg ARG cv::Mat (boxed) measurement=  cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_video_cv_KalmanFilter_correct_Mat_measurement(
        void* instance,
        void* measurement) {
  try {
  cv::Mat cpp_return_value = ((cv::KalmanFilter*) instance)->correct(*((cv::Mat*)measurement));
  return { NULL, new cv::Mat(cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}



} // extern "C"

