
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

// cv_Canny_InputArray_image_OutputArray_edges_double_threshold1_double_threshold2_int_apertureSize_bool_L2gradient
// parsed: cv::Canny
// as:     cv::Canny (function)
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) edges=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) threshold1=  Primitive(double) = 
// Arg ARG Primitive(double) threshold2=  Primitive(double) = 
// Arg ARG Primitive(int) apertureSize=  Primitive(int) =3 
// Arg ARG Primitive(bool) L2gradient=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_Canny_InputArray_image_OutputArray_edges_double_threshold1_double_threshold2_int_apertureSize_bool_L2gradient(
        void* image,
        void* edges,
        double threshold1,
        double threshold2,
        int apertureSize,
        char L2gradient) {
  try {
  cv::Canny(*((cv::Mat*)image), *((cv::Mat*)edges), *reinterpret_cast<double*>(&threshold1), *reinterpret_cast<double*>(&threshold2), *reinterpret_cast<int*>(&apertureSize), *reinterpret_cast<bool*>(&L2gradient));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GaussianBlur_InputArray_src_OutputArray_dst_Size_ksize_double_sigmaX_double_sigmaY_int_borderType
// parsed: cv::GaussianBlur
// as:     cv::GaussianBlur (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Size (struct) ksize=  Size (struct) = 
// Arg ARG Primitive(double) sigmaX=  Primitive(double) = 
// Arg ARG Primitive(double) sigmaY=  Primitive(double) =0 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_GaussianBlur_InputArray_src_OutputArray_dst_Size_ksize_double_sigmaX_double_sigmaY_int_borderType(
        void* src,
        void* dst,
        c_Size ksize,
        double sigmaX,
        double sigmaY,
        int borderType) {
  try {
  cv::GaussianBlur(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<Size*>(&ksize), *reinterpret_cast<double*>(&sigmaX), *reinterpret_cast<double*>(&sigmaY), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_HoughCircles_InputArray_image_OutputArray_circles_int_method_double_dp_double_minDist_double_param1_double_param2_int_minRadius_int_maxRadius
// parsed: cv::HoughCircles
// as:     cv::HoughCircles (function)
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) circles=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) method=  Primitive(int) = 
// Arg ARG Primitive(double) dp=  Primitive(double) = 
// Arg ARG Primitive(double) minDist=  Primitive(double) = 
// Arg ARG Primitive(double) param1=  Primitive(double) =100 
// Arg ARG Primitive(double) param2=  Primitive(double) =100 
// Arg ARG Primitive(int) minRadius=  Primitive(int) =0 
// Arg ARG Primitive(int) maxRadius=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_HoughCircles_InputArray_image_OutputArray_circles_int_method_double_dp_double_minDist_double_param1_double_param2_int_minRadius_int_maxRadius(
        void* image,
        void* circles,
        int method,
        double dp,
        double minDist,
        double param1,
        double param2,
        int minRadius,
        int maxRadius) {
  try {
  cv::HoughCircles(*((cv::Mat*)image), *((cv::Mat*)circles), *reinterpret_cast<int*>(&method), *reinterpret_cast<double*>(&dp), *reinterpret_cast<double*>(&minDist), *reinterpret_cast<double*>(&param1), *reinterpret_cast<double*>(&param2), *reinterpret_cast<int*>(&minRadius), *reinterpret_cast<int*>(&maxRadius));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_HoughLinesP_InputArray_image_OutputArray_lines_double_rho_double_theta_int_threshold_double_minLineLength_double_maxLineGap
// parsed: cv::HoughLinesP
// as:     cv::HoughLinesP (function)
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) lines=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) rho=  Primitive(double) = 
// Arg ARG Primitive(double) theta=  Primitive(double) = 
// Arg ARG Primitive(int) threshold=  Primitive(int) = 
// Arg ARG Primitive(double) minLineLength=  Primitive(double) =0 
// Arg ARG Primitive(double) maxLineGap=  Primitive(double) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_HoughLinesP_InputArray_image_OutputArray_lines_double_rho_double_theta_int_threshold_double_minLineLength_double_maxLineGap(
        void* image,
        void* lines,
        double rho,
        double theta,
        int threshold,
        double minLineLength,
        double maxLineGap) {
  try {
  cv::HoughLinesP(*((cv::Mat*)image), *((cv::Mat*)lines), *reinterpret_cast<double*>(&rho), *reinterpret_cast<double*>(&theta), *reinterpret_cast<int*>(&threshold), *reinterpret_cast<double*>(&minLineLength), *reinterpret_cast<double*>(&maxLineGap));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_HoughLines_InputArray_image_OutputArray_lines_double_rho_double_theta_int_threshold_double_srn_double_stn
// parsed: cv::HoughLines
// as:     cv::HoughLines (function)
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) lines=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) rho=  Primitive(double) = 
// Arg ARG Primitive(double) theta=  Primitive(double) = 
// Arg ARG Primitive(int) threshold=  Primitive(int) = 
// Arg ARG Primitive(double) srn=  Primitive(double) =0 
// Arg ARG Primitive(double) stn=  Primitive(double) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_HoughLines_InputArray_image_OutputArray_lines_double_rho_double_theta_int_threshold_double_srn_double_stn(
        void* image,
        void* lines,
        double rho,
        double theta,
        int threshold,
        double srn,
        double stn) {
  try {
  cv::HoughLines(*((cv::Mat*)image), *((cv::Mat*)lines), *reinterpret_cast<double*>(&rho), *reinterpret_cast<double*>(&theta), *reinterpret_cast<int*>(&threshold), *reinterpret_cast<double*>(&srn), *reinterpret_cast<double*>(&stn));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_HuMoments_Moments_m_OutputArray_hu
// parsed: cv::HuMoments
// as:     cv::HuMoments (function)
// Arg ARG cv::Moments (simple) m=  cv::Moments (simple) = 
// Arg ARG cv::Mat (boxed) hu=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_HuMoments_Moments_m_OutputArray_hu(
        c_Moments m,
        void* hu) {
  try {
  cv::HuMoments(*reinterpret_cast<cv::Moments*>(&m), *((cv::Mat*)hu));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Laplacian_InputArray_src_OutputArray_dst_int_ddepth_int_ksize_double_scale_double_delta_int_borderType
// parsed: cv::Laplacian
// as:     cv::Laplacian (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) ddepth=  Primitive(int) = 
// Arg ARG Primitive(int) ksize=  Primitive(int) =1 
// Arg ARG Primitive(double) scale=  Primitive(double) =1 
// Arg ARG Primitive(double) delta=  Primitive(double) =0 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_Laplacian_InputArray_src_OutputArray_dst_int_ddepth_int_ksize_double_scale_double_delta_int_borderType(
        void* src,
        void* dst,
        int ddepth,
        int ksize,
        double scale,
        double delta,
        int borderType) {
  try {
  cv::Laplacian(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&ddepth), *reinterpret_cast<int*>(&ksize), *reinterpret_cast<double*>(&scale), *reinterpret_cast<double*>(&delta), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_PSNR_InputArray_src1_InputArray_src2
// parsed: cv::PSNR
// as:     cv::PSNR (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Return value: Primitive(double)
struct cv_return_value_double cv_imgproc_cv_PSNR_InputArray_src1_InputArray_src2(
        void* src1,
        void* src2) {
  try {
  double cpp_return_value = cv::PSNR(*((cv::Mat*)src1), *((cv::Mat*)src2));
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

// cv_Scharr_InputArray_src_OutputArray_dst_int_ddepth_int_dx_int_dy_double_scale_double_delta_int_borderType
// parsed: cv::Scharr
// as:     cv::Scharr (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) ddepth=  Primitive(int) = 
// Arg ARG Primitive(int) dx=  Primitive(int) = 
// Arg ARG Primitive(int) dy=  Primitive(int) = 
// Arg ARG Primitive(double) scale=  Primitive(double) =1 
// Arg ARG Primitive(double) delta=  Primitive(double) =0 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_Scharr_InputArray_src_OutputArray_dst_int_ddepth_int_dx_int_dy_double_scale_double_delta_int_borderType(
        void* src,
        void* dst,
        int ddepth,
        int dx,
        int dy,
        double scale,
        double delta,
        int borderType) {
  try {
  cv::Scharr(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&ddepth), *reinterpret_cast<int*>(&dx), *reinterpret_cast<int*>(&dy), *reinterpret_cast<double*>(&scale), *reinterpret_cast<double*>(&delta), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Sobel_InputArray_src_OutputArray_dst_int_ddepth_int_dx_int_dy_int_ksize_double_scale_double_delta_int_borderType
// parsed: cv::Sobel
// as:     cv::Sobel (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) ddepth=  Primitive(int) = 
// Arg ARG Primitive(int) dx=  Primitive(int) = 
// Arg ARG Primitive(int) dy=  Primitive(int) = 
// Arg ARG Primitive(int) ksize=  Primitive(int) =3 
// Arg ARG Primitive(double) scale=  Primitive(double) =1 
// Arg ARG Primitive(double) delta=  Primitive(double) =0 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_Sobel_InputArray_src_OutputArray_dst_int_ddepth_int_dx_int_dy_int_ksize_double_scale_double_delta_int_borderType(
        void* src,
        void* dst,
        int ddepth,
        int dx,
        int dy,
        int ksize,
        double scale,
        double delta,
        int borderType) {
  try {
  cv::Sobel(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&ddepth), *reinterpret_cast<int*>(&dx), *reinterpret_cast<int*>(&dy), *reinterpret_cast<int*>(&ksize), *reinterpret_cast<double*>(&scale), *reinterpret_cast<double*>(&delta), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_adaptiveBilateralFilter_InputArray_src_OutputArray_dst_Size_ksize_double_sigmaSpace_double_maxSigmaColor_Point_anchor_int_borderType
// parsed: cv::adaptiveBilateralFilter
// as:     cv::adaptiveBilateralFilter (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Size (struct) ksize=  Size (struct) = 
// Arg ARG Primitive(double) sigmaSpace=  Primitive(double) = 
// Arg ARG Primitive(double) maxSigmaColor=  Primitive(double) =20.0 
// Arg ARG Point (struct) anchor=  Point (struct) =Point(-1, -1) 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_adaptiveBilateralFilter_InputArray_src_OutputArray_dst_Size_ksize_double_sigmaSpace_double_maxSigmaColor_Point_anchor_int_borderType(
        void* src,
        void* dst,
        c_Size ksize,
        double sigmaSpace,
        double maxSigmaColor,
        c_Point anchor,
        int borderType) {
  try {
  cv::adaptiveBilateralFilter(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<Size*>(&ksize), *reinterpret_cast<double*>(&sigmaSpace), *reinterpret_cast<double*>(&maxSigmaColor), *reinterpret_cast<Point*>(&anchor), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_adaptiveThreshold_InputArray_src_OutputArray_dst_double_maxValue_int_adaptiveMethod_int_thresholdType_int_blockSize_double_C
// parsed: cv::adaptiveThreshold
// as:     cv::adaptiveThreshold (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) maxValue=  Primitive(double) = 
// Arg ARG Primitive(int) adaptiveMethod=  Primitive(int) = 
// Arg ARG Primitive(int) thresholdType=  Primitive(int) = 
// Arg ARG Primitive(int) blockSize=  Primitive(int) = 
// Arg ARG Primitive(double) C=  Primitive(double) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_adaptiveThreshold_InputArray_src_OutputArray_dst_double_maxValue_int_adaptiveMethod_int_thresholdType_int_blockSize_double_C(
        void* src,
        void* dst,
        double maxValue,
        int adaptiveMethod,
        int thresholdType,
        int blockSize,
        double C) {
  try {
  cv::adaptiveThreshold(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<double*>(&maxValue), *reinterpret_cast<int*>(&adaptiveMethod), *reinterpret_cast<int*>(&thresholdType), *reinterpret_cast<int*>(&blockSize), *reinterpret_cast<double*>(&C));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_approxPolyDP_InputArray_curve_OutputArray_approxCurve_double_epsilon_bool_closed
// parsed: cv::approxPolyDP
// as:     cv::approxPolyDP (function)
// Arg ARG cv::Mat (boxed) curve=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) approxCurve=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) epsilon=  Primitive(double) = 
// Arg ARG Primitive(bool) closed=  Primitive(bool) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_approxPolyDP_InputArray_curve_OutputArray_approxCurve_double_epsilon_bool_closed(
        void* curve,
        void* approxCurve,
        double epsilon,
        char closed) {
  try {
  cv::approxPolyDP(*((cv::Mat*)curve), *((cv::Mat*)approxCurve), *reinterpret_cast<double*>(&epsilon), *reinterpret_cast<bool*>(&closed));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_arcLength_InputArray_curve_bool_closed
// parsed: cv::arcLength
// as:     cv::arcLength (function)
// Arg ARG cv::Mat (boxed) curve=  cv::Mat (boxed) = 
// Arg ARG Primitive(bool) closed=  Primitive(bool) = 
// Return value: Primitive(double)
struct cv_return_value_double cv_imgproc_cv_arcLength_InputArray_curve_bool_closed(
        void* curve,
        char closed) {
  try {
  double cpp_return_value = cv::arcLength(*((cv::Mat*)curve), *reinterpret_cast<bool*>(&closed));
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

// cv_bilateralFilter_InputArray_src_OutputArray_dst_int_d_double_sigmaColor_double_sigmaSpace_int_borderType
// parsed: cv::bilateralFilter
// as:     cv::bilateralFilter (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) d=  Primitive(int) = 
// Arg ARG Primitive(double) sigmaColor=  Primitive(double) = 
// Arg ARG Primitive(double) sigmaSpace=  Primitive(double) = 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_bilateralFilter_InputArray_src_OutputArray_dst_int_d_double_sigmaColor_double_sigmaSpace_int_borderType(
        void* src,
        void* dst,
        int d,
        double sigmaColor,
        double sigmaSpace,
        int borderType) {
  try {
  cv::bilateralFilter(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&d), *reinterpret_cast<double*>(&sigmaColor), *reinterpret_cast<double*>(&sigmaSpace), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_blur_InputArray_src_OutputArray_dst_Size_ksize_Point_anchor_int_borderType
// parsed: cv::blur
// as:     cv::blur (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Size (struct) ksize=  Size (struct) = 
// Arg ARG Point (struct) anchor=  Point (struct) =Point(-1,-1) 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_blur_InputArray_src_OutputArray_dst_Size_ksize_Point_anchor_int_borderType(
        void* src,
        void* dst,
        c_Size ksize,
        c_Point anchor,
        int borderType) {
  try {
  cv::blur(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<Size*>(&ksize), *reinterpret_cast<Point*>(&anchor), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_borderInterpolate_int_p_int_len_int_borderType
// parsed: cv::borderInterpolate
// as:     cv::borderInterpolate (function)
// Arg ARG Primitive(int) p=  Primitive(int) = 
// Arg ARG Primitive(int) len=  Primitive(int) = 
// Arg ARG Primitive(int) borderType=  Primitive(int) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_imgproc_cv_borderInterpolate_int_p_int_len_int_borderType(
        int p,
        int len,
        int borderType) {
  try {
  int cpp_return_value = cv::borderInterpolate(*reinterpret_cast<int*>(&p), *reinterpret_cast<int*>(&len), *reinterpret_cast<int*>(&borderType));
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_boundingRect_InputArray_points
// parsed: cv::boundingRect
// as:     cv::boundingRect (function)
// Arg ARG cv::Mat (boxed) points=  cv::Mat (boxed) = 
// Return value: Rect (struct)
struct cv_return_value_c_Rect cv_imgproc_cv_boundingRect_InputArray_points(
        void* points) {
  try {
  Rect cpp_return_value = cv::boundingRect(*((cv::Mat*)points));
  return { NULL, *reinterpret_cast<c_Rect*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_Rect ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_Rect ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_boxFilter_InputArray_src_OutputArray_dst_int_ddepth_Size_ksize_Point_anchor_bool_normalize_int_borderType
// parsed: cv::boxFilter
// as:     cv::boxFilter (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) ddepth=  Primitive(int) = 
// Arg ARG Size (struct) ksize=  Size (struct) = 
// Arg ARG Point (struct) anchor=  Point (struct) =Point(-1,-1) 
// Arg ARG Primitive(bool) normalize=  Primitive(bool) =true 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_boxFilter_InputArray_src_OutputArray_dst_int_ddepth_Size_ksize_Point_anchor_bool_normalize_int_borderType(
        void* src,
        void* dst,
        int ddepth,
        c_Size ksize,
        c_Point anchor,
        char normalize,
        int borderType) {
  try {
  cv::boxFilter(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&ddepth), *reinterpret_cast<Size*>(&ksize), *reinterpret_cast<Point*>(&anchor), *reinterpret_cast<bool*>(&normalize), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_compareHist_InputArray_H1_InputArray_H2_int_method
// parsed: cv::compareHist
// as:     cv::compareHist (function)
// Arg ARG cv::Mat (boxed) H1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) H2=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) method=  Primitive(int) = 
// Return value: Primitive(double)
struct cv_return_value_double cv_imgproc_cv_compareHist_InputArray_H1_InputArray_H2_int_method(
        void* H1,
        void* H2,
        int method) {
  try {
  double cpp_return_value = cv::compareHist(*((cv::Mat*)H1), *((cv::Mat*)H2), *reinterpret_cast<int*>(&method));
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

// cv_contourArea_InputArray_contour_bool_oriented
// parsed: cv::contourArea
// as:     cv::contourArea (function)
// Arg ARG cv::Mat (boxed) contour=  cv::Mat (boxed) = 
// Arg ARG Primitive(bool) oriented=  Primitive(bool) =false 
// Return value: Primitive(double)
struct cv_return_value_double cv_imgproc_cv_contourArea_InputArray_contour_bool_oriented(
        void* contour,
        char oriented) {
  try {
  double cpp_return_value = cv::contourArea(*((cv::Mat*)contour), *reinterpret_cast<bool*>(&oriented));
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

// cv_convertMaps_InputArray_map1_InputArray_map2_OutputArray_dstmap1_OutputArray_dstmap2_int_dstmap1type_bool_nninterpolation
// parsed: cv::convertMaps
// as:     cv::convertMaps (function)
// Arg ARG cv::Mat (boxed) map1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) map2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dstmap1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dstmap2=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) dstmap1type=  Primitive(int) = 
// Arg ARG Primitive(bool) nninterpolation=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_convertMaps_InputArray_map1_InputArray_map2_OutputArray_dstmap1_OutputArray_dstmap2_int_dstmap1type_bool_nninterpolation(
        void* map1,
        void* map2,
        void* dstmap1,
        void* dstmap2,
        int dstmap1type,
        char nninterpolation) {
  try {
  cv::convertMaps(*((cv::Mat*)map1), *((cv::Mat*)map2), *((cv::Mat*)dstmap1), *((cv::Mat*)dstmap2), *reinterpret_cast<int*>(&dstmap1type), *reinterpret_cast<bool*>(&nninterpolation));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_convexHull_InputArray_points_OutputArray_hull_bool_clockwise_bool_returnPoints
// parsed: cv::convexHull
// as:     cv::convexHull (function)
// Arg ARG cv::Mat (boxed) points=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) hull=  cv::Mat (boxed) = 
// Arg ARG Primitive(bool) clockwise=  Primitive(bool) =false 
// Arg ARG Primitive(bool) returnPoints=  Primitive(bool) =true 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_convexHull_InputArray_points_OutputArray_hull_bool_clockwise_bool_returnPoints(
        void* points,
        void* hull,
        char clockwise,
        char returnPoints) {
  try {
  cv::convexHull(*((cv::Mat*)points), *((cv::Mat*)hull), *reinterpret_cast<bool*>(&clockwise), *reinterpret_cast<bool*>(&returnPoints));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_convexityDefects_InputArray_contour_InputArray_convexhull_OutputArray_convexityDefects
// parsed: cv::convexityDefects
// as:     cv::convexityDefects (function)
// Arg ARG cv::Mat (boxed) contour=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) convexhull=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) convexityDefects=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_convexityDefects_InputArray_contour_InputArray_convexhull_OutputArray_convexityDefects(
        void* contour,
        void* convexhull,
        void* convexityDefects) {
  try {
  cv::convexityDefects(*((cv::Mat*)contour), *((cv::Mat*)convexhull), *((cv::Mat*)convexityDefects));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_copyMakeBorder_InputArray_src_OutputArray_dst_int_top_int_bottom_int_left_int_right_int_borderType_Scalar_value
// parsed: cv::copyMakeBorder
// as:     cv::copyMakeBorder (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) top=  Primitive(int) = 
// Arg ARG Primitive(int) bottom=  Primitive(int) = 
// Arg ARG Primitive(int) left=  Primitive(int) = 
// Arg ARG Primitive(int) right=  Primitive(int) = 
// Arg ARG Primitive(int) borderType=  Primitive(int) = 
// Arg ARG Scalar (struct) value=  Scalar (struct) =Scalar() 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_copyMakeBorder_InputArray_src_OutputArray_dst_int_top_int_bottom_int_left_int_right_int_borderType_Scalar_value(
        void* src,
        void* dst,
        int top,
        int bottom,
        int left,
        int right,
        int borderType,
        c_Scalar value) {
  try {
  cv::copyMakeBorder(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&top), *reinterpret_cast<int*>(&bottom), *reinterpret_cast<int*>(&left), *reinterpret_cast<int*>(&right), *reinterpret_cast<int*>(&borderType), *reinterpret_cast<Scalar*>(&value));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_cornerEigenValsAndVecs_InputArray_src_OutputArray_dst_int_blockSize_int_ksize_int_borderType
// parsed: cv::cornerEigenValsAndVecs
// as:     cv::cornerEigenValsAndVecs (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) blockSize=  Primitive(int) = 
// Arg ARG Primitive(int) ksize=  Primitive(int) = 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_cornerEigenValsAndVecs_InputArray_src_OutputArray_dst_int_blockSize_int_ksize_int_borderType(
        void* src,
        void* dst,
        int blockSize,
        int ksize,
        int borderType) {
  try {
  cv::cornerEigenValsAndVecs(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&blockSize), *reinterpret_cast<int*>(&ksize), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_cornerHarris_InputArray_src_OutputArray_dst_int_blockSize_int_ksize_double_k_int_borderType
// parsed: cv::cornerHarris
// as:     cv::cornerHarris (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) blockSize=  Primitive(int) = 
// Arg ARG Primitive(int) ksize=  Primitive(int) = 
// Arg ARG Primitive(double) k=  Primitive(double) = 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_cornerHarris_InputArray_src_OutputArray_dst_int_blockSize_int_ksize_double_k_int_borderType(
        void* src,
        void* dst,
        int blockSize,
        int ksize,
        double k,
        int borderType) {
  try {
  cv::cornerHarris(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&blockSize), *reinterpret_cast<int*>(&ksize), *reinterpret_cast<double*>(&k), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_cornerMinEigenVal_InputArray_src_OutputArray_dst_int_blockSize_int_ksize_int_borderType
// parsed: cv::cornerMinEigenVal
// as:     cv::cornerMinEigenVal (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) blockSize=  Primitive(int) = 
// Arg ARG Primitive(int) ksize=  Primitive(int) =3 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_cornerMinEigenVal_InputArray_src_OutputArray_dst_int_blockSize_int_ksize_int_borderType(
        void* src,
        void* dst,
        int blockSize,
        int ksize,
        int borderType) {
  try {
  cv::cornerMinEigenVal(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&blockSize), *reinterpret_cast<int*>(&ksize), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_createBoxFilter_int_srcType_int_dstType_Size_ksize_Point_anchor_bool_normalize_int_borderType
// parsed: cv::createBoxFilter
// as:     cv::createBoxFilter (function)
// Arg ARG Primitive(int) srcType=  Primitive(int) = 
// Arg ARG Primitive(int) dstType=  Primitive(int) = 
// Arg ARG Size (struct) ksize=  Size (struct) = 
// Arg ARG Point (struct) anchor=  Point (struct) =Point(-1,-1) 
// Arg ARG Primitive(bool) normalize=  Primitive(bool) =true 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: SmartPtr[cv::FilterEngine (boxed)]
struct cv_return_value_void_X cv_imgproc_cv_createBoxFilter_int_srcType_int_dstType_Size_ksize_Point_anchor_bool_normalize_int_borderType(
        int srcType,
        int dstType,
        c_Size ksize,
        c_Point anchor,
        char normalize,
        int borderType) {
  try {
  cv::FilterEngine* cpp_return_value = cv::createBoxFilter(*reinterpret_cast<int*>(&srcType), *reinterpret_cast<int*>(&dstType), *reinterpret_cast<Size*>(&ksize), *reinterpret_cast<Point*>(&anchor), *reinterpret_cast<bool*>(&normalize), *reinterpret_cast<int*>(&borderType));
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

// cv_createDerivFilter_int_srcType_int_dstType_int_dx_int_dy_int_ksize_int_borderType
// parsed: cv::createDerivFilter
// as:     cv::createDerivFilter (function)
// Arg ARG Primitive(int) srcType=  Primitive(int) = 
// Arg ARG Primitive(int) dstType=  Primitive(int) = 
// Arg ARG Primitive(int) dx=  Primitive(int) = 
// Arg ARG Primitive(int) dy=  Primitive(int) = 
// Arg ARG Primitive(int) ksize=  Primitive(int) = 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: SmartPtr[cv::FilterEngine (boxed)]
struct cv_return_value_void_X cv_imgproc_cv_createDerivFilter_int_srcType_int_dstType_int_dx_int_dy_int_ksize_int_borderType(
        int srcType,
        int dstType,
        int dx,
        int dy,
        int ksize,
        int borderType) {
  try {
  cv::FilterEngine* cpp_return_value = cv::createDerivFilter(*reinterpret_cast<int*>(&srcType), *reinterpret_cast<int*>(&dstType), *reinterpret_cast<int*>(&dx), *reinterpret_cast<int*>(&dy), *reinterpret_cast<int*>(&ksize), *reinterpret_cast<int*>(&borderType));
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

// cv_createGaussianFilter_int_type_Size_ksize_double_sigma1_double_sigma2_int_borderType
// parsed: cv::createGaussianFilter
// as:     cv::createGaussianFilter (function)
// Arg ARG Primitive(int) type=  Primitive(int) = 
// Arg ARG Size (struct) ksize=  Size (struct) = 
// Arg ARG Primitive(double) sigma1=  Primitive(double) = 
// Arg ARG Primitive(double) sigma2=  Primitive(double) =0 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: SmartPtr[cv::FilterEngine (boxed)]
struct cv_return_value_void_X cv_imgproc_cv_createGaussianFilter_int_type_Size_ksize_double_sigma1_double_sigma2_int_borderType(
        int type,
        c_Size ksize,
        double sigma1,
        double sigma2,
        int borderType) {
  try {
  cv::FilterEngine* cpp_return_value = cv::createGaussianFilter(*reinterpret_cast<int*>(&type), *reinterpret_cast<Size*>(&ksize), *reinterpret_cast<double*>(&sigma1), *reinterpret_cast<double*>(&sigma2), *reinterpret_cast<int*>(&borderType));
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

// cv_createHanningWindow_OutputArray_dst_Size_winSize_int_type
// parsed: cv::createHanningWindow
// as:     cv::createHanningWindow (function)
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Size (struct) winSize=  Size (struct) = 
// Arg ARG Primitive(int) type=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_createHanningWindow_OutputArray_dst_Size_winSize_int_type(
        void* dst,
        c_Size winSize,
        int type) {
  try {
  cv::createHanningWindow(*((cv::Mat*)dst), *reinterpret_cast<Size*>(&winSize), *reinterpret_cast<int*>(&type));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_createLinearFilter_int_srcType_int_dstType_InputArray_kernel_Point__anchor_double_delta_int_rowBorderType_int_columnBorderType_Scalar_borderValue
// parsed: cv::createLinearFilter
// as:     cv::createLinearFilter (function)
// Arg ARG Primitive(int) srcType=  Primitive(int) = 
// Arg ARG Primitive(int) dstType=  Primitive(int) = 
// Arg ARG cv::Mat (boxed) kernel=  cv::Mat (boxed) = 
// Arg ARG Point (struct) _anchor=  Point (struct) =Point(-1,-1) 
// Arg ARG Primitive(double) delta=  Primitive(double) =0 
// Arg ARG Primitive(int) rowBorderType=  Primitive(int) =BORDER_DEFAULT 
// Arg ARG Primitive(int) columnBorderType=  Primitive(int) =-1 
// Arg ARG Scalar (struct) borderValue=  Scalar (struct) =Scalar() 
// Return value: SmartPtr[cv::FilterEngine (boxed)]
struct cv_return_value_void_X cv_imgproc_cv_createLinearFilter_int_srcType_int_dstType_InputArray_kernel_Point__anchor_double_delta_int_rowBorderType_int_columnBorderType_Scalar_borderValue(
        int srcType,
        int dstType,
        void* kernel,
        c_Point _anchor,
        double delta,
        int rowBorderType,
        int columnBorderType,
        c_Scalar borderValue) {
  try {
  cv::FilterEngine* cpp_return_value = cv::createLinearFilter(*reinterpret_cast<int*>(&srcType), *reinterpret_cast<int*>(&dstType), *((cv::Mat*)kernel), *reinterpret_cast<Point*>(&_anchor), *reinterpret_cast<double*>(&delta), *reinterpret_cast<int*>(&rowBorderType), *reinterpret_cast<int*>(&columnBorderType), *reinterpret_cast<Scalar*>(&borderValue));
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

// cv_createMorphologyFilter_int_op_int_type_InputArray_kernel_Point_anchor_int_rowBorderType_int_columnBorderType_Scalar_borderValue
// parsed: cv::createMorphologyFilter
// as:     cv::createMorphologyFilter (function)
// Arg ARG Primitive(int) op=  Primitive(int) = 
// Arg ARG Primitive(int) type=  Primitive(int) = 
// Arg ARG cv::Mat (boxed) kernel=  cv::Mat (boxed) = 
// Arg ARG Point (struct) anchor=  Point (struct) =Point(-1,-1) 
// Arg ARG Primitive(int) rowBorderType=  Primitive(int) =BORDER_CONSTANT 
// Arg ARG Primitive(int) columnBorderType=  Primitive(int) =-1 
// Arg ARG Scalar (struct) borderValue=  Scalar (struct) =morphologyDefaultBorderValue() 
// Return value: SmartPtr[cv::FilterEngine (boxed)]
struct cv_return_value_void_X cv_imgproc_cv_createMorphologyFilter_int_op_int_type_InputArray_kernel_Point_anchor_int_rowBorderType_int_columnBorderType_Scalar_borderValue(
        int op,
        int type,
        void* kernel,
        c_Point anchor,
        int rowBorderType,
        int columnBorderType,
        c_Scalar borderValue) {
  try {
  cv::FilterEngine* cpp_return_value = cv::createMorphologyFilter(*reinterpret_cast<int*>(&op), *reinterpret_cast<int*>(&type), *((cv::Mat*)kernel), *reinterpret_cast<Point*>(&anchor), *reinterpret_cast<int*>(&rowBorderType), *reinterpret_cast<int*>(&columnBorderType), *reinterpret_cast<Scalar*>(&borderValue));
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

// cv_createSeparableLinearFilter_int_srcType_int_dstType_InputArray_rowKernel_InputArray_columnKernel_Point_anchor_double_delta_int_rowBorderType_int_columnBorderType_Scalar_borderValue
// parsed: cv::createSeparableLinearFilter
// as:     cv::createSeparableLinearFilter (function)
// Arg ARG Primitive(int) srcType=  Primitive(int) = 
// Arg ARG Primitive(int) dstType=  Primitive(int) = 
// Arg ARG cv::Mat (boxed) rowKernel=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) columnKernel=  cv::Mat (boxed) = 
// Arg ARG Point (struct) anchor=  Point (struct) =Point(-1,-1) 
// Arg ARG Primitive(double) delta=  Primitive(double) =0 
// Arg ARG Primitive(int) rowBorderType=  Primitive(int) =BORDER_DEFAULT 
// Arg ARG Primitive(int) columnBorderType=  Primitive(int) =-1 
// Arg ARG Scalar (struct) borderValue=  Scalar (struct) =Scalar() 
// Return value: SmartPtr[cv::FilterEngine (boxed)]
struct cv_return_value_void_X cv_imgproc_cv_createSeparableLinearFilter_int_srcType_int_dstType_InputArray_rowKernel_InputArray_columnKernel_Point_anchor_double_delta_int_rowBorderType_int_columnBorderType_Scalar_borderValue(
        int srcType,
        int dstType,
        void* rowKernel,
        void* columnKernel,
        c_Point anchor,
        double delta,
        int rowBorderType,
        int columnBorderType,
        c_Scalar borderValue) {
  try {
  cv::FilterEngine* cpp_return_value = cv::createSeparableLinearFilter(*reinterpret_cast<int*>(&srcType), *reinterpret_cast<int*>(&dstType), *((cv::Mat*)rowKernel), *((cv::Mat*)columnKernel), *reinterpret_cast<Point*>(&anchor), *reinterpret_cast<double*>(&delta), *reinterpret_cast<int*>(&rowBorderType), *reinterpret_cast<int*>(&columnBorderType), *reinterpret_cast<Scalar*>(&borderValue));
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

// cv_cvtColor_InputArray_src_OutputArray_dst_int_code_int_dstCn
// parsed: cv::cvtColor
// as:     cv::cvtColor (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) code=  Primitive(int) = 
// Arg ARG Primitive(int) dstCn=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_cvtColor_InputArray_src_OutputArray_dst_int_code_int_dstCn(
        void* src,
        void* dst,
        int code,
        int dstCn) {
  try {
  cvtColor(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&code), *reinterpret_cast<int*>(&dstCn));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_dilate_InputArray_src_OutputArray_dst_InputArray_kernel_Point_anchor_int_iterations_int_borderType_Scalar_borderValue
// parsed: cv::dilate
// as:     cv::dilate (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) kernel=  cv::Mat (boxed) = 
// Arg ARG Point (struct) anchor=  Point (struct) =Point(-1,-1) 
// Arg ARG Primitive(int) iterations=  Primitive(int) =1 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_CONSTANT 
// Arg ARG Scalar (struct) borderValue=  Scalar (struct) =morphologyDefaultBorderValue() 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_dilate_InputArray_src_OutputArray_dst_InputArray_kernel_Point_anchor_int_iterations_int_borderType_Scalar_borderValue(
        void* src,
        void* dst,
        void* kernel,
        c_Point anchor,
        int iterations,
        int borderType,
        c_Scalar borderValue) {
  try {
  cv::dilate(*((cv::Mat*)src), *((cv::Mat*)dst), *((cv::Mat*)kernel), *reinterpret_cast<Point*>(&anchor), *reinterpret_cast<int*>(&iterations), *reinterpret_cast<int*>(&borderType), *reinterpret_cast<Scalar*>(&borderValue));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_distanceTransform_InputArray_src_OutputArray_dst_OutputArray_labels_int_distanceType_int_maskSize_int_labelType
// parsed: cv::distanceTransform
// as:     cv::distanceTransform (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) labels=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) distanceType=  Primitive(int) = 
// Arg ARG Primitive(int) maskSize=  Primitive(int) = 
// Arg ARG Primitive(int) labelType=  Primitive(int) =DIST_LABEL_CCOMP 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_distanceTransform_InputArray_src_OutputArray_dst_OutputArray_labels_int_distanceType_int_maskSize_int_labelType(
        void* src,
        void* dst,
        void* labels,
        int distanceType,
        int maskSize,
        int labelType) {
  try {
  cv::distanceTransform(*((cv::Mat*)src), *((cv::Mat*)dst), *((cv::Mat*)labels), *reinterpret_cast<int*>(&distanceType), *reinterpret_cast<int*>(&maskSize), *reinterpret_cast<int*>(&labelType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_distanceTransform_InputArray_src_OutputArray_dst_int_distanceType_int_maskSize
// parsed: cv::distanceTransform
// as:     cv::distanceTransform (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) distanceType=  Primitive(int) = 
// Arg ARG Primitive(int) maskSize=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_distanceTransform_InputArray_src_OutputArray_dst_int_distanceType_int_maskSize(
        void* src,
        void* dst,
        int distanceType,
        int maskSize) {
  try {
  cv::distanceTransform(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&distanceType), *reinterpret_cast<int*>(&maskSize));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_equalizeHist_InputArray_src_OutputArray_dst
// parsed: cv::equalizeHist
// as:     cv::equalizeHist (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_equalizeHist_InputArray_src_OutputArray_dst(
        void* src,
        void* dst) {
  try {
  cv::equalizeHist(*((cv::Mat*)src), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_erode_InputArray_src_OutputArray_dst_InputArray_kernel_Point_anchor_int_iterations_int_borderType_Scalar_borderValue
// parsed: cv::erode
// as:     cv::erode (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) kernel=  cv::Mat (boxed) = 
// Arg ARG Point (struct) anchor=  Point (struct) =Point(-1,-1) 
// Arg ARG Primitive(int) iterations=  Primitive(int) =1 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_CONSTANT 
// Arg ARG Scalar (struct) borderValue=  Scalar (struct) =morphologyDefaultBorderValue() 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_erode_InputArray_src_OutputArray_dst_InputArray_kernel_Point_anchor_int_iterations_int_borderType_Scalar_borderValue(
        void* src,
        void* dst,
        void* kernel,
        c_Point anchor,
        int iterations,
        int borderType,
        c_Scalar borderValue) {
  try {
  cv::erode(*((cv::Mat*)src), *((cv::Mat*)dst), *((cv::Mat*)kernel), *reinterpret_cast<Point*>(&anchor), *reinterpret_cast<int*>(&iterations), *reinterpret_cast<int*>(&borderType), *reinterpret_cast<Scalar*>(&borderValue));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_filter2D_InputArray_src_OutputArray_dst_int_ddepth_InputArray_kernel_Point_anchor_double_delta_int_borderType
// parsed: cv::filter2D
// as:     cv::filter2D (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) ddepth=  Primitive(int) = 
// Arg ARG cv::Mat (boxed) kernel=  cv::Mat (boxed) = 
// Arg ARG Point (struct) anchor=  Point (struct) =Point(-1,-1) 
// Arg ARG Primitive(double) delta=  Primitive(double) =0 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_filter2D_InputArray_src_OutputArray_dst_int_ddepth_InputArray_kernel_Point_anchor_double_delta_int_borderType(
        void* src,
        void* dst,
        int ddepth,
        void* kernel,
        c_Point anchor,
        double delta,
        int borderType) {
  try {
  cv::filter2D(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&ddepth), *((cv::Mat*)kernel), *reinterpret_cast<Point*>(&anchor), *reinterpret_cast<double*>(&delta), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_fitLine_InputArray_points_OutputArray_line_int_distType_double_param_double_reps_double_aeps
// parsed: cv::fitLine
// as:     cv::fitLine (function)
// Arg ARG cv::Mat (boxed) points=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) line=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) distType=  Primitive(int) = 
// Arg ARG Primitive(double) param=  Primitive(double) = 
// Arg ARG Primitive(double) reps=  Primitive(double) = 
// Arg ARG Primitive(double) aeps=  Primitive(double) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_fitLine_InputArray_points_OutputArray_line_int_distType_double_param_double_reps_double_aeps(
        void* points,
        void* line,
        int distType,
        double param,
        double reps,
        double aeps) {
  try {
  cv::fitLine(*((cv::Mat*)points), *((cv::Mat*)line), *reinterpret_cast<int*>(&distType), *reinterpret_cast<double*>(&param), *reinterpret_cast<double*>(&reps), *reinterpret_cast<double*>(&aeps));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_getAffineTransform_InputArray_src_InputArray_dst
// parsed: cv::getAffineTransform
// as:     cv::getAffineTransform (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_imgproc_cv_getAffineTransform_InputArray_src_InputArray_dst(
        void* src,
        void* dst) {
  try {
  cv::Mat cpp_return_value = cv::getAffineTransform(*((cv::Mat*)src), *((cv::Mat*)dst));
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

// cv_getDefaultNewCameraMatrix_InputArray_cameraMatrix_Size_imgsize_bool_centerPrincipalPoint
// parsed: cv::getDefaultNewCameraMatrix
// as:     cv::getDefaultNewCameraMatrix (function)
// Arg ARG cv::Mat (boxed) cameraMatrix=  cv::Mat (boxed) = 
// Arg ARG Size (struct) imgsize=  Size (struct) =Size() 
// Arg ARG Primitive(bool) centerPrincipalPoint=  Primitive(bool) =false 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_imgproc_cv_getDefaultNewCameraMatrix_InputArray_cameraMatrix_Size_imgsize_bool_centerPrincipalPoint(
        void* cameraMatrix,
        c_Size imgsize,
        char centerPrincipalPoint) {
  try {
  cv::Mat cpp_return_value = cv::getDefaultNewCameraMatrix(*((cv::Mat*)cameraMatrix), *reinterpret_cast<Size*>(&imgsize), *reinterpret_cast<bool*>(&centerPrincipalPoint));
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

// cv_getDerivKernels_OutputArray_kx_OutputArray_ky_int_dx_int_dy_int_ksize_bool_normalize_int_ktype
// parsed: cv::getDerivKernels
// as:     cv::getDerivKernels (function)
// Arg ARG cv::Mat (boxed) kx=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) ky=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) dx=  Primitive(int) = 
// Arg ARG Primitive(int) dy=  Primitive(int) = 
// Arg ARG Primitive(int) ksize=  Primitive(int) = 
// Arg ARG Primitive(bool) normalize=  Primitive(bool) =false 
// Arg ARG Primitive(int) ktype=  Primitive(int) =CV_32F 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_getDerivKernels_OutputArray_kx_OutputArray_ky_int_dx_int_dy_int_ksize_bool_normalize_int_ktype(
        void* kx,
        void* ky,
        int dx,
        int dy,
        int ksize,
        char normalize,
        int ktype) {
  try {
  cv::getDerivKernels(*((cv::Mat*)kx), *((cv::Mat*)ky), *reinterpret_cast<int*>(&dx), *reinterpret_cast<int*>(&dy), *reinterpret_cast<int*>(&ksize), *reinterpret_cast<bool*>(&normalize), *reinterpret_cast<int*>(&ktype));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_getGaborKernel_Size_ksize_double_sigma_double_theta_double_lambd_double_gamma_double_psi_int_ktype
// parsed: cv::getGaborKernel
// as:     cv::getGaborKernel (function)
// Arg ARG Size (struct) ksize=  Size (struct) = 
// Arg ARG Primitive(double) sigma=  Primitive(double) = 
// Arg ARG Primitive(double) theta=  Primitive(double) = 
// Arg ARG Primitive(double) lambd=  Primitive(double) = 
// Arg ARG Primitive(double) gamma=  Primitive(double) = 
// Arg ARG Primitive(double) psi=  Primitive(double) =CV_PI*0.5 
// Arg ARG Primitive(int) ktype=  Primitive(int) =CV_64F 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_imgproc_cv_getGaborKernel_Size_ksize_double_sigma_double_theta_double_lambd_double_gamma_double_psi_int_ktype(
        c_Size ksize,
        double sigma,
        double theta,
        double lambd,
        double gamma,
        double psi,
        int ktype) {
  try {
  cv::Mat cpp_return_value = cv::getGaborKernel(*reinterpret_cast<Size*>(&ksize), *reinterpret_cast<double*>(&sigma), *reinterpret_cast<double*>(&theta), *reinterpret_cast<double*>(&lambd), *reinterpret_cast<double*>(&gamma), *reinterpret_cast<double*>(&psi), *reinterpret_cast<int*>(&ktype));
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

// cv_getGaussianKernel_int_ksize_double_sigma_int_ktype
// parsed: cv::getGaussianKernel
// as:     cv::getGaussianKernel (function)
// Arg ARG Primitive(int) ksize=  Primitive(int) = 
// Arg ARG Primitive(double) sigma=  Primitive(double) = 
// Arg ARG Primitive(int) ktype=  Primitive(int) =CV_64F 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_imgproc_cv_getGaussianKernel_int_ksize_double_sigma_int_ktype(
        int ksize,
        double sigma,
        int ktype) {
  try {
  cv::Mat cpp_return_value = cv::getGaussianKernel(*reinterpret_cast<int*>(&ksize), *reinterpret_cast<double*>(&sigma), *reinterpret_cast<int*>(&ktype));
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

// cv_getKernelType_InputArray_kernel_Point_anchor
// parsed: cv::getKernelType
// as:     cv::getKernelType (function)
// Arg ARG cv::Mat (boxed) kernel=  cv::Mat (boxed) = 
// Arg ARG Point (struct) anchor=  Point (struct) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_imgproc_cv_getKernelType_InputArray_kernel_Point_anchor(
        void* kernel,
        c_Point anchor) {
  try {
  int cpp_return_value = cv::getKernelType(*((cv::Mat*)kernel), *reinterpret_cast<Point*>(&anchor));
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_getPerspectiveTransform_InputArray_src_InputArray_dst
// parsed: cv::getPerspectiveTransform
// as:     cv::getPerspectiveTransform (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_imgproc_cv_getPerspectiveTransform_InputArray_src_InputArray_dst(
        void* src,
        void* dst) {
  try {
  cv::Mat cpp_return_value = cv::getPerspectiveTransform(*((cv::Mat*)src), *((cv::Mat*)dst));
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

// cv_getRectSubPix_InputArray_image_Size_patchSize_Point2f_center_OutputArray_patch_int_patchType
// parsed: cv::getRectSubPix
// as:     cv::getRectSubPix (function)
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG Size (struct) patchSize=  Size (struct) = 
// Arg ARG Point2f (struct) center=  Point2f (struct) = 
// Arg ARG cv::Mat (boxed) patch=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) patchType=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_getRectSubPix_InputArray_image_Size_patchSize_Point2f_center_OutputArray_patch_int_patchType(
        void* image,
        c_Size patchSize,
        c_Point2f center,
        void* patch,
        int patchType) {
  try {
  cv::getRectSubPix(*((cv::Mat*)image), *reinterpret_cast<Size*>(&patchSize), *reinterpret_cast<Point2f*>(&center), *((cv::Mat*)patch), *reinterpret_cast<int*>(&patchType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_getRotationMatrix2D_Point2f_center_double_angle_double_scale
// parsed: cv::getRotationMatrix2D
// as:     cv::getRotationMatrix2D (function)
// Arg ARG Point2f (struct) center=  Point2f (struct) = 
// Arg ARG Primitive(double) angle=  Primitive(double) = 
// Arg ARG Primitive(double) scale=  Primitive(double) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_imgproc_cv_getRotationMatrix2D_Point2f_center_double_angle_double_scale(
        c_Point2f center,
        double angle,
        double scale) {
  try {
  cv::Mat cpp_return_value = cv::getRotationMatrix2D(*reinterpret_cast<Point2f*>(&center), *reinterpret_cast<double*>(&angle), *reinterpret_cast<double*>(&scale));
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

// cv_getStructuringElement_int_shape_Size_ksize_Point_anchor
// parsed: cv::getStructuringElement
// as:     cv::getStructuringElement (function)
// Arg ARG Primitive(int) shape=  Primitive(int) = 
// Arg ARG Size (struct) ksize=  Size (struct) = 
// Arg ARG Point (struct) anchor=  Point (struct) =Point(-1,-1) 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_imgproc_cv_getStructuringElement_int_shape_Size_ksize_Point_anchor(
        int shape,
        c_Size ksize,
        c_Point anchor) {
  try {
  cv::Mat cpp_return_value = cv::getStructuringElement(*reinterpret_cast<int*>(&shape), *reinterpret_cast<Size*>(&ksize), *reinterpret_cast<Point*>(&anchor));
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

// cv_goodFeaturesToTrack_InputArray_image_OutputArray_corners_int_maxCorners_double_qualityLevel_double_minDistance_InputArray_mask_int_blockSize_bool_useHarrisDetector_double_k
// parsed: cv::goodFeaturesToTrack
// as:     cv::goodFeaturesToTrack (function)
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) corners=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) maxCorners=  Primitive(int) = 
// Arg ARG Primitive(double) qualityLevel=  Primitive(double) = 
// Arg ARG Primitive(double) minDistance=  Primitive(double) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Arg ARG Primitive(int) blockSize=  Primitive(int) =3 
// Arg ARG Primitive(bool) useHarrisDetector=  Primitive(bool) =false 
// Arg ARG Primitive(double) k=  Primitive(double) =0.04 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_goodFeaturesToTrack_InputArray_image_OutputArray_corners_int_maxCorners_double_qualityLevel_double_minDistance_InputArray_mask_int_blockSize_bool_useHarrisDetector_double_k(
        void* image,
        void* corners,
        int maxCorners,
        double qualityLevel,
        double minDistance,
        void* mask,
        int blockSize,
        char useHarrisDetector,
        double k) {
  try {
  cv::goodFeaturesToTrack(*((cv::Mat*)image), *((cv::Mat*)corners), *reinterpret_cast<int*>(&maxCorners), *reinterpret_cast<double*>(&qualityLevel), *reinterpret_cast<double*>(&minDistance), *((cv::Mat*)mask), *reinterpret_cast<int*>(&blockSize), *reinterpret_cast<bool*>(&useHarrisDetector), *reinterpret_cast<double*>(&k));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_initUndistortRectifyMap_InputArray_cameraMatrix_InputArray_distCoeffs_InputArray_R_InputArray_newCameraMatrix_Size_size_int_m1type_OutputArray_map1_OutputArray_map2
// parsed: cv::initUndistortRectifyMap
// as:     cv::initUndistortRectifyMap (function)
// Arg ARG cv::Mat (boxed) cameraMatrix=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) distCoeffs=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) R=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) newCameraMatrix=  cv::Mat (boxed) = 
// Arg ARG Size (struct) size=  Size (struct) = 
// Arg ARG Primitive(int) m1type=  Primitive(int) = 
// Arg ARG cv::Mat (boxed) map1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) map2=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_initUndistortRectifyMap_InputArray_cameraMatrix_InputArray_distCoeffs_InputArray_R_InputArray_newCameraMatrix_Size_size_int_m1type_OutputArray_map1_OutputArray_map2(
        void* cameraMatrix,
        void* distCoeffs,
        void* R,
        void* newCameraMatrix,
        c_Size size,
        int m1type,
        void* map1,
        void* map2) {
  try {
  cv::initUndistortRectifyMap(*((cv::Mat*)cameraMatrix), *((cv::Mat*)distCoeffs), *((cv::Mat*)R), *((cv::Mat*)newCameraMatrix), *reinterpret_cast<Size*>(&size), *reinterpret_cast<int*>(&m1type), *((cv::Mat*)map1), *((cv::Mat*)map2));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_initWideAngleProjMap_InputArray_cameraMatrix_InputArray_distCoeffs_Size_imageSize_int_destImageWidth_int_m1type_OutputArray_map1_OutputArray_map2_int_projType_double_alpha
// parsed: cv::initWideAngleProjMap
// as:     cv::initWideAngleProjMap (function)
// Arg ARG cv::Mat (boxed) cameraMatrix=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) distCoeffs=  cv::Mat (boxed) = 
// Arg ARG Size (struct) imageSize=  Size (struct) = 
// Arg ARG Primitive(int) destImageWidth=  Primitive(int) = 
// Arg ARG Primitive(int) m1type=  Primitive(int) = 
// Arg ARG cv::Mat (boxed) map1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) map2=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) projType=  Primitive(int) =PROJ_SPHERICAL_EQRECT 
// Arg ARG Primitive(double) alpha=  Primitive(double) =0 
// Return value: Primitive(float)
struct cv_return_value_float cv_imgproc_cv_initWideAngleProjMap_InputArray_cameraMatrix_InputArray_distCoeffs_Size_imageSize_int_destImageWidth_int_m1type_OutputArray_map1_OutputArray_map2_int_projType_double_alpha(
        void* cameraMatrix,
        void* distCoeffs,
        c_Size imageSize,
        int destImageWidth,
        int m1type,
        void* map1,
        void* map2,
        int projType,
        double alpha) {
  try {
  float cpp_return_value = cv::initWideAngleProjMap(*((cv::Mat*)cameraMatrix), *((cv::Mat*)distCoeffs), *reinterpret_cast<Size*>(&imageSize), *reinterpret_cast<int*>(&destImageWidth), *reinterpret_cast<int*>(&m1type), *((cv::Mat*)map1), *((cv::Mat*)map2), *reinterpret_cast<int*>(&projType), *reinterpret_cast<double*>(&alpha));
  return { NULL, *reinterpret_cast<float*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_float ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_float ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_integral_InputArray_src_OutputArray_sum_OutputArray_sqsum_OutputArray_tilted_int_sdepth
// parsed: cv::integral
// as:     cv::integral (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) sum=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) sqsum=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) tilted=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) sdepth=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_integral_InputArray_src_OutputArray_sum_OutputArray_sqsum_OutputArray_tilted_int_sdepth(
        void* src,
        void* sum,
        void* sqsum,
        void* tilted,
        int sdepth) {
  try {
  cv::integral(*((cv::Mat*)src), *((cv::Mat*)sum), *((cv::Mat*)sqsum), *((cv::Mat*)tilted), *reinterpret_cast<int*>(&sdepth));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_integral_InputArray_src_OutputArray_sum_OutputArray_sqsum_int_sdepth
// parsed: cv::integral
// as:     cv::integral (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) sum=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) sqsum=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) sdepth=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_integral_InputArray_src_OutputArray_sum_OutputArray_sqsum_int_sdepth(
        void* src,
        void* sum,
        void* sqsum,
        int sdepth) {
  try {
  cv::integral(*((cv::Mat*)src), *((cv::Mat*)sum), *((cv::Mat*)sqsum), *reinterpret_cast<int*>(&sdepth));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_integral_InputArray_src_OutputArray_sum_int_sdepth
// parsed: cv::integral
// as:     cv::integral (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) sum=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) sdepth=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_integral_InputArray_src_OutputArray_sum_int_sdepth(
        void* src,
        void* sum,
        int sdepth) {
  try {
  cv::integral(*((cv::Mat*)src), *((cv::Mat*)sum), *reinterpret_cast<int*>(&sdepth));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_intersectConvexConvex_InputArray__p1_InputArray__p2_OutputArray__p12_bool_handleNested
// parsed: cv::intersectConvexConvex
// as:     cv::intersectConvexConvex (function)
// Arg ARG cv::Mat (boxed) _p1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) _p2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) _p12=  cv::Mat (boxed) = 
// Arg ARG Primitive(bool) handleNested=  Primitive(bool) =true 
// Return value: Primitive(float)
struct cv_return_value_float cv_imgproc_cv_intersectConvexConvex_InputArray__p1_InputArray__p2_OutputArray__p12_bool_handleNested(
        void* _p1,
        void* _p2,
        void* _p12,
        char handleNested) {
  try {
  float cpp_return_value = cv::intersectConvexConvex(*((cv::Mat*)_p1), *((cv::Mat*)_p2), *((cv::Mat*)_p12), *reinterpret_cast<bool*>(&handleNested));
  return { NULL, *reinterpret_cast<float*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_float ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_float ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_invertAffineTransform_InputArray_M_OutputArray_iM
// parsed: cv::invertAffineTransform
// as:     cv::invertAffineTransform (function)
// Arg ARG cv::Mat (boxed) M=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) iM=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_invertAffineTransform_InputArray_M_OutputArray_iM(
        void* M,
        void* iM) {
  try {
  cv::invertAffineTransform(*((cv::Mat*)M), *((cv::Mat*)iM));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_isContourConvex_InputArray_contour
// parsed: cv::isContourConvex
// as:     cv::isContourConvex (function)
// Arg ARG cv::Mat (boxed) contour=  cv::Mat (boxed) = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_imgproc_cv_isContourConvex_InputArray_contour(
        void* contour) {
  try {
  bool cpp_return_value = cv::isContourConvex(*((cv::Mat*)contour));
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

// cv_matchShapes_InputArray_contour1_InputArray_contour2_int_method_double_parameter
// parsed: cv::matchShapes
// as:     cv::matchShapes (function)
// Arg ARG cv::Mat (boxed) contour1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) contour2=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) method=  Primitive(int) = 
// Arg ARG Primitive(double) parameter=  Primitive(double) = 
// Return value: Primitive(double)
struct cv_return_value_double cv_imgproc_cv_matchShapes_InputArray_contour1_InputArray_contour2_int_method_double_parameter(
        void* contour1,
        void* contour2,
        int method,
        double parameter) {
  try {
  double cpp_return_value = cv::matchShapes(*((cv::Mat*)contour1), *((cv::Mat*)contour2), *reinterpret_cast<int*>(&method), *reinterpret_cast<double*>(&parameter));
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

// cv_matchTemplate_InputArray_image_InputArray_templ_OutputArray_result_int_method
// parsed: cv::matchTemplate
// as:     cv::matchTemplate (function)
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) templ=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) result=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) method=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_matchTemplate_InputArray_image_InputArray_templ_OutputArray_result_int_method(
        void* image,
        void* templ,
        void* result,
        int method) {
  try {
  cv::matchTemplate(*((cv::Mat*)image), *((cv::Mat*)templ), *((cv::Mat*)result), *reinterpret_cast<int*>(&method));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_medianBlur_InputArray_src_OutputArray_dst_int_ksize
// parsed: cv::medianBlur
// as:     cv::medianBlur (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) ksize=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_medianBlur_InputArray_src_OutputArray_dst_int_ksize(
        void* src,
        void* dst,
        int ksize) {
  try {
  cv::medianBlur(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&ksize));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_minEnclosingCircle_InputArray_points_Point2f_center_float_radius
// parsed: cv::minEnclosingCircle
// as:     cv::minEnclosingCircle (function)
// Arg ARG cv::Mat (boxed) points=  cv::Mat (boxed) = 
// Arg ARG Point2f (struct) center=  Point2f (struct) = 
// Arg ARG Primitive(float) radius=  Primitive(float) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_minEnclosingCircle_InputArray_points_Point2f_center_float_radius(
        void* points,
        c_Point2f center,
        float radius) {
  try {
  cv::minEnclosingCircle(*((cv::Mat*)points), *reinterpret_cast<Point2f*>(&center), *reinterpret_cast<float*>(&radius));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_moments_InputArray_array_bool_binaryImage
// parsed: cv::moments
// as:     cv::moments (function)
// Arg ARG cv::Mat (boxed) array=  cv::Mat (boxed) = 
// Arg ARG Primitive(bool) binaryImage=  Primitive(bool) =false 
// Return value: cv::Moments (simple)
struct cv_return_value_c_Moments cv_imgproc_cv_moments_InputArray_array_bool_binaryImage(
        void* array,
        char binaryImage) {
  try {
  cv::Moments cpp_return_value = cv::moments(*((cv::Mat*)array), *reinterpret_cast<bool*>(&binaryImage));
  return { NULL, *reinterpret_cast<c_Moments*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_Moments ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_Moments ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_morphologyDefaultBorderValue
// parsed: cv::morphologyDefaultBorderValue
// as:     cv::morphologyDefaultBorderValue (function)
// Return value: Scalar (struct)
struct cv_return_value_c_Scalar cv_imgproc_cv_morphologyDefaultBorderValue(
        ) {
  try {
  Scalar cpp_return_value = cv::morphologyDefaultBorderValue();
  return { NULL, *reinterpret_cast<c_Scalar*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_Scalar ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_Scalar ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_morphologyEx_InputArray_src_OutputArray_dst_int_op_InputArray_kernel_Point_anchor_int_iterations_int_borderType_Scalar_borderValue
// parsed: cv::morphologyEx
// as:     cv::morphologyEx (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) op=  Primitive(int) = 
// Arg ARG cv::Mat (boxed) kernel=  cv::Mat (boxed) = 
// Arg ARG Point (struct) anchor=  Point (struct) =Point(-1,-1) 
// Arg ARG Primitive(int) iterations=  Primitive(int) =1 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_CONSTANT 
// Arg ARG Scalar (struct) borderValue=  Scalar (struct) =morphologyDefaultBorderValue() 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_morphologyEx_InputArray_src_OutputArray_dst_int_op_InputArray_kernel_Point_anchor_int_iterations_int_borderType_Scalar_borderValue(
        void* src,
        void* dst,
        int op,
        void* kernel,
        c_Point anchor,
        int iterations,
        int borderType,
        c_Scalar borderValue) {
  try {
  cv::morphologyEx(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&op), *((cv::Mat*)kernel), *reinterpret_cast<Point*>(&anchor), *reinterpret_cast<int*>(&iterations), *reinterpret_cast<int*>(&borderType), *reinterpret_cast<Scalar*>(&borderValue));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_phaseCorrelate_InputArray_src1_InputArray_src2_InputArray_window
// parsed: cv::phaseCorrelate
// as:     cv::phaseCorrelate (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) window=  cv::Mat (boxed) =noArray() 
// Return value: Point2d (struct)
struct cv_return_value_c_Point2d cv_imgproc_cv_phaseCorrelate_InputArray_src1_InputArray_src2_InputArray_window(
        void* src1,
        void* src2,
        void* window) {
  try {
  Point2d cpp_return_value = cv::phaseCorrelate(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)window));
  return { NULL, *reinterpret_cast<c_Point2d*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_Point2d ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_Point2d ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_pointPolygonTest_InputArray_contour_Point2f_pt_bool_measureDist
// parsed: cv::pointPolygonTest
// as:     cv::pointPolygonTest (function)
// Arg ARG cv::Mat (boxed) contour=  cv::Mat (boxed) = 
// Arg ARG Point2f (struct) pt=  Point2f (struct) = 
// Arg ARG Primitive(bool) measureDist=  Primitive(bool) = 
// Return value: Primitive(double)
struct cv_return_value_double cv_imgproc_cv_pointPolygonTest_InputArray_contour_Point2f_pt_bool_measureDist(
        void* contour,
        c_Point2f pt,
        char measureDist) {
  try {
  double cpp_return_value = cv::pointPolygonTest(*((cv::Mat*)contour), *reinterpret_cast<Point2f*>(&pt), *reinterpret_cast<bool*>(&measureDist));
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

// cv_preCornerDetect_InputArray_src_OutputArray_dst_int_ksize_int_borderType
// parsed: cv::preCornerDetect
// as:     cv::preCornerDetect (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) ksize=  Primitive(int) = 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_preCornerDetect_InputArray_src_OutputArray_dst_int_ksize_int_borderType(
        void* src,
        void* dst,
        int ksize,
        int borderType) {
  try {
  cv::preCornerDetect(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&ksize), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_pyrDown_InputArray_src_OutputArray_dst_Size_dstsize_int_borderType
// parsed: cv::pyrDown
// as:     cv::pyrDown (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Size (struct) dstsize=  Size (struct) =Size() 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_pyrDown_InputArray_src_OutputArray_dst_Size_dstsize_int_borderType(
        void* src,
        void* dst,
        c_Size dstsize,
        int borderType) {
  try {
  cv::pyrDown(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<Size*>(&dstsize), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_pyrUp_InputArray_src_OutputArray_dst_Size_dstsize_int_borderType
// parsed: cv::pyrUp
// as:     cv::pyrUp (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Size (struct) dstsize=  Size (struct) =Size() 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_pyrUp_InputArray_src_OutputArray_dst_Size_dstsize_int_borderType(
        void* src,
        void* dst,
        c_Size dstsize,
        int borderType) {
  try {
  cv::pyrUp(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<Size*>(&dstsize), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_remap_InputArray_src_OutputArray_dst_InputArray_map1_InputArray_map2_int_interpolation_int_borderMode_Scalar_borderValue
// parsed: cv::remap
// as:     cv::remap (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) map1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) map2=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) interpolation=  Primitive(int) = 
// Arg ARG Primitive(int) borderMode=  Primitive(int) =BORDER_CONSTANT 
// Arg ARG Scalar (struct) borderValue=  Scalar (struct) =Scalar() 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_remap_InputArray_src_OutputArray_dst_InputArray_map1_InputArray_map2_int_interpolation_int_borderMode_Scalar_borderValue(
        void* src,
        void* dst,
        void* map1,
        void* map2,
        int interpolation,
        int borderMode,
        c_Scalar borderValue) {
  try {
  cv::remap(*((cv::Mat*)src), *((cv::Mat*)dst), *((cv::Mat*)map1), *((cv::Mat*)map2), *reinterpret_cast<int*>(&interpolation), *reinterpret_cast<int*>(&borderMode), *reinterpret_cast<Scalar*>(&borderValue));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_resize_InputArray_src_OutputArray_dst_Size_dsize_double_fx_double_fy_int_interpolation
// parsed: cv::resize
// as:     cv::resize (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Size (struct) dsize=  Size (struct) = 
// Arg ARG Primitive(double) fx=  Primitive(double) =0 
// Arg ARG Primitive(double) fy=  Primitive(double) =0 
// Arg ARG Primitive(int) interpolation=  Primitive(int) =INTER_LINEAR 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_resize_InputArray_src_OutputArray_dst_Size_dsize_double_fx_double_fy_int_interpolation(
        void* src,
        void* dst,
        c_Size dsize,
        double fx,
        double fy,
        int interpolation) {
  try {
  cv::resize(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<Size*>(&dsize), *reinterpret_cast<double*>(&fx), *reinterpret_cast<double*>(&fy), *reinterpret_cast<int*>(&interpolation));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_sepFilter2D_InputArray_src_OutputArray_dst_int_ddepth_InputArray_kernelX_InputArray_kernelY_Point_anchor_double_delta_int_borderType
// parsed: cv::sepFilter2D
// as:     cv::sepFilter2D (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) ddepth=  Primitive(int) = 
// Arg ARG cv::Mat (boxed) kernelX=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) kernelY=  cv::Mat (boxed) = 
// Arg ARG Point (struct) anchor=  Point (struct) =Point(-1,-1) 
// Arg ARG Primitive(double) delta=  Primitive(double) =0 
// Arg ARG Primitive(int) borderType=  Primitive(int) =BORDER_DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_sepFilter2D_InputArray_src_OutputArray_dst_int_ddepth_InputArray_kernelX_InputArray_kernelY_Point_anchor_double_delta_int_borderType(
        void* src,
        void* dst,
        int ddepth,
        void* kernelX,
        void* kernelY,
        c_Point anchor,
        double delta,
        int borderType) {
  try {
  cv::sepFilter2D(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&ddepth), *((cv::Mat*)kernelX), *((cv::Mat*)kernelY), *reinterpret_cast<Point*>(&anchor), *reinterpret_cast<double*>(&delta), *reinterpret_cast<int*>(&borderType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_threshold_InputArray_src_OutputArray_dst_double_thresh_double_maxval_int_type
// parsed: cv::threshold
// as:     cv::threshold (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) thresh=  Primitive(double) = 
// Arg ARG Primitive(double) maxval=  Primitive(double) = 
// Arg ARG Primitive(int) type=  Primitive(int) = 
// Return value: Primitive(double)
struct cv_return_value_double cv_imgproc_cv_threshold_InputArray_src_OutputArray_dst_double_thresh_double_maxval_int_type(
        void* src,
        void* dst,
        double thresh,
        double maxval,
        int type) {
  try {
  double cpp_return_value = cv::threshold(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<double*>(&thresh), *reinterpret_cast<double*>(&maxval), *reinterpret_cast<int*>(&type));
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

// cv_undistortPoints_InputArray_src_OutputArray_dst_InputArray_cameraMatrix_InputArray_distCoeffs_InputArray_R_InputArray_P
// parsed: cv::undistortPoints
// as:     cv::undistortPoints (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) cameraMatrix=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) distCoeffs=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) R=  cv::Mat (boxed) =noArray() 
// Arg ARG cv::Mat (boxed) P=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_undistortPoints_InputArray_src_OutputArray_dst_InputArray_cameraMatrix_InputArray_distCoeffs_InputArray_R_InputArray_P(
        void* src,
        void* dst,
        void* cameraMatrix,
        void* distCoeffs,
        void* R,
        void* P) {
  try {
  cv::undistortPoints(*((cv::Mat*)src), *((cv::Mat*)dst), *((cv::Mat*)cameraMatrix), *((cv::Mat*)distCoeffs), *((cv::Mat*)R), *((cv::Mat*)P));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_undistort_InputArray_src_OutputArray_dst_InputArray_cameraMatrix_InputArray_distCoeffs_InputArray_newCameraMatrix
// parsed: cv::undistort
// as:     cv::undistort (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) cameraMatrix=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) distCoeffs=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) newCameraMatrix=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_undistort_InputArray_src_OutputArray_dst_InputArray_cameraMatrix_InputArray_distCoeffs_InputArray_newCameraMatrix(
        void* src,
        void* dst,
        void* cameraMatrix,
        void* distCoeffs,
        void* newCameraMatrix) {
  try {
  cv::undistort(*((cv::Mat*)src), *((cv::Mat*)dst), *((cv::Mat*)cameraMatrix), *((cv::Mat*)distCoeffs), *((cv::Mat*)newCameraMatrix));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_warpAffine_InputArray_src_OutputArray_dst_InputArray_M_Size_dsize_int_flags_int_borderMode_Scalar_borderValue
// parsed: cv::warpAffine
// as:     cv::warpAffine (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) M=  cv::Mat (boxed) = 
// Arg ARG Size (struct) dsize=  Size (struct) = 
// Arg ARG Primitive(int) flags=  Primitive(int) =INTER_LINEAR 
// Arg ARG Primitive(int) borderMode=  Primitive(int) =BORDER_CONSTANT 
// Arg ARG Scalar (struct) borderValue=  Scalar (struct) =Scalar() 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_warpAffine_InputArray_src_OutputArray_dst_InputArray_M_Size_dsize_int_flags_int_borderMode_Scalar_borderValue(
        void* src,
        void* dst,
        void* M,
        c_Size dsize,
        int flags,
        int borderMode,
        c_Scalar borderValue) {
  try {
  cv::warpAffine(*((cv::Mat*)src), *((cv::Mat*)dst), *((cv::Mat*)M), *reinterpret_cast<Size*>(&dsize), *reinterpret_cast<int*>(&flags), *reinterpret_cast<int*>(&borderMode), *reinterpret_cast<Scalar*>(&borderValue));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_warpPerspective_InputArray_src_OutputArray_dst_InputArray_M_Size_dsize_int_flags_int_borderMode_Scalar_borderValue
// parsed: cv::warpPerspective
// as:     cv::warpPerspective (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) M=  cv::Mat (boxed) = 
// Arg ARG Size (struct) dsize=  Size (struct) = 
// Arg ARG Primitive(int) flags=  Primitive(int) =INTER_LINEAR 
// Arg ARG Primitive(int) borderMode=  Primitive(int) =BORDER_CONSTANT 
// Arg ARG Scalar (struct) borderValue=  Scalar (struct) =Scalar() 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_warpPerspective_InputArray_src_OutputArray_dst_InputArray_M_Size_dsize_int_flags_int_borderMode_Scalar_borderValue(
        void* src,
        void* dst,
        void* M,
        c_Size dsize,
        int flags,
        int borderMode,
        c_Scalar borderValue) {
  try {
  cv::warpPerspective(*((cv::Mat*)src), *((cv::Mat*)dst), *((cv::Mat*)M), *reinterpret_cast<Size*>(&dsize), *reinterpret_cast<int*>(&flags), *reinterpret_cast<int*>(&borderMode), *reinterpret_cast<Scalar*>(&borderValue));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}


// boxed class: cv::FilterEngine
void cv_delete_FilterEngine(void* instance) {
    delete (cv::FilterEngine*) instance;
}
// cv_FilterEngine_FilterEngine
// parsed: cv::FilterEngine::FilterEngine
// as:     cv::FilterEngine::FilterEngine (constructor) cv::FilterEngine . new
// Return value: cv::FilterEngine (boxed)
struct cv_return_value_void_X cv_imgproc_cv_FilterEngine_FilterEngine(
        ) {
  try {
  cv::FilterEngine* cpp_return_value = new cv::FilterEngine();
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

// cv_FilterEngine_start_Size_wholeSize_Rect_roi_int_maxBufRows
// parsed: cv::FilterEngine::start
// as:     cv::FilterEngine::start (method) cv::FilterEngine . start
// Arg ARG Size (struct) wholeSize=  Size (struct) = 
// Arg ARG Rect (struct) roi=  Rect (struct) = 
// Arg ARG Primitive(int) maxBufRows=  Primitive(int) =-1 
// Return value: Primitive(int)
struct cv_return_value_int cv_imgproc_cv_FilterEngine_start_Size_wholeSize_Rect_roi_int_maxBufRows(
        void* instance,
        c_Size wholeSize,
        c_Rect roi,
        int maxBufRows) {
  try {
  int cpp_return_value = ((cv::FilterEngine*) instance)->start(*reinterpret_cast<Size*>(&wholeSize), *reinterpret_cast<Rect*>(&roi), *reinterpret_cast<int*>(&maxBufRows));
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_FilterEngine_start_Mat_src_Rect_srcRoi_bool_isolated_int_maxBufRows
// parsed: cv::FilterEngine::start
// as:     cv::FilterEngine::start (method) cv::FilterEngine . start
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG Rect (struct) srcRoi=  Rect (struct) =Rect(0,0,-1,-1) 
// Arg ARG Primitive(bool) isolated=  Primitive(bool) =false 
// Arg ARG Primitive(int) maxBufRows=  Primitive(int) =-1 
// Return value: Primitive(int)
struct cv_return_value_int cv_imgproc_cv_FilterEngine_start_Mat_src_Rect_srcRoi_bool_isolated_int_maxBufRows(
        void* instance,
        void* src,
        c_Rect srcRoi,
        char isolated,
        int maxBufRows) {
  try {
  int cpp_return_value = ((cv::FilterEngine*) instance)->start(*((cv::Mat*)src), *reinterpret_cast<Rect*>(&srcRoi), *reinterpret_cast<bool*>(&isolated), *reinterpret_cast<int*>(&maxBufRows));
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_FilterEngine_apply_Mat_src_Mat_dst_Rect_srcRoi_Point_dstOfs_bool_isolated
// parsed: cv::FilterEngine::apply
// as:     cv::FilterEngine::apply (method) cv::FilterEngine . apply
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Rect (struct) srcRoi=  Rect (struct) =Rect(0,0,-1,-1) 
// Arg ARG Point (struct) dstOfs=  Point (struct) =Point(0,0) 
// Arg ARG Primitive(bool) isolated=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_FilterEngine_apply_Mat_src_Mat_dst_Rect_srcRoi_Point_dstOfs_bool_isolated(
        void* instance,
        void* src,
        void* dst,
        c_Rect srcRoi,
        c_Point dstOfs,
        char isolated) {
  try {
  ((cv::FilterEngine*) instance)->apply(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<Rect*>(&srcRoi), *reinterpret_cast<Point*>(&dstOfs), *reinterpret_cast<bool*>(&isolated));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_FilterEngine_isSeparable
// parsed: cv::FilterEngine::isSeparable
// as:     cv::FilterEngine::isSeparable (method) cv::FilterEngine . isSeparable
// Return value: Primitive(bool)
struct cv_return_value_char cv_imgproc_cv_FilterEngine_isSeparable(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::FilterEngine*) instance)->isSeparable();
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

// cv_FilterEngine_remainingInputRows
// parsed: cv::FilterEngine::remainingInputRows
// as:     cv::FilterEngine::remainingInputRows (method) cv::FilterEngine . remainingInputRows
// Return value: Primitive(int)
struct cv_return_value_int cv_imgproc_cv_FilterEngine_remainingInputRows(
        void* instance) {
  try {
  int cpp_return_value = ((cv::FilterEngine*) instance)->remainingInputRows();
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_FilterEngine_remainingOutputRows
// parsed: cv::FilterEngine::remainingOutputRows
// as:     cv::FilterEngine::remainingOutputRows (method) cv::FilterEngine . remainingOutputRows
// Return value: Primitive(int)
struct cv_return_value_int cv_imgproc_cv_FilterEngine_remainingOutputRows(
        void* instance) {
  try {
  int cpp_return_value = ((cv::FilterEngine*) instance)->remainingOutputRows();
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_GeneralizedHough_create_int_method
// parsed: cv::GeneralizedHough::create
// as:     cv::GeneralizedHough::create (method) cv::GeneralizedHough . create
// Arg ARG Primitive(int) method=  Primitive(int) = 
// Return value: SmartPtr[cv::GeneralizedHough (boxed)]
struct cv_return_value_void_X cv_imgproc_cv_GeneralizedHough_create_int_method(
        void* instance,
        int method) {
  try {
  cv::GeneralizedHough* cpp_return_value = ((cv::GeneralizedHough*) instance)->create(*reinterpret_cast<int*>(&method));
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

// cv_GeneralizedHough_setTemplate_InputArray_edges_InputArray_dx_InputArray_dy_Point_templCenter
// parsed: cv::GeneralizedHough::setTemplate
// as:     cv::GeneralizedHough::setTemplate (method) cv::GeneralizedHough . setTemplate
// Arg ARG cv::Mat (boxed) edges=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dx=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dy=  cv::Mat (boxed) = 
// Arg ARG Point (struct) templCenter=  Point (struct) =Point(-1, -1) 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_GeneralizedHough_setTemplate_InputArray_edges_InputArray_dx_InputArray_dy_Point_templCenter(
        void* instance,
        void* edges,
        void* dx,
        void* dy,
        c_Point templCenter) {
  try {
  ((cv::GeneralizedHough*) instance)->setTemplate(*((cv::Mat*)edges), *((cv::Mat*)dx), *((cv::Mat*)dy), *reinterpret_cast<Point*>(&templCenter));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GeneralizedHough_detect_InputArray_image_OutputArray_positions_OutputArray_votes_int_cannyThreshold
// parsed: cv::GeneralizedHough::detect
// as:     cv::GeneralizedHough::detect (method) cv::GeneralizedHough . detect
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) positions=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) votes=  cv::Mat (boxed) =cv::noArray() 
// Arg ARG Primitive(int) cannyThreshold=  Primitive(int) =100 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_GeneralizedHough_detect_InputArray_image_OutputArray_positions_OutputArray_votes_int_cannyThreshold(
        void* instance,
        void* image,
        void* positions,
        void* votes,
        int cannyThreshold) {
  try {
  ((cv::GeneralizedHough*) instance)->detect(*((cv::Mat*)image), *((cv::Mat*)positions), *((cv::Mat*)votes), *reinterpret_cast<int*>(&cannyThreshold));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GeneralizedHough_detect_InputArray_edges_InputArray_dx_InputArray_dy_OutputArray_positions_OutputArray_votes
// parsed: cv::GeneralizedHough::detect
// as:     cv::GeneralizedHough::detect (method) cv::GeneralizedHough . detect
// Arg ARG cv::Mat (boxed) edges=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dx=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dy=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) positions=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) votes=  cv::Mat (boxed) =cv::noArray() 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_GeneralizedHough_detect_InputArray_edges_InputArray_dx_InputArray_dy_OutputArray_positions_OutputArray_votes(
        void* instance,
        void* edges,
        void* dx,
        void* dy,
        void* positions,
        void* votes) {
  try {
  ((cv::GeneralizedHough*) instance)->detect(*((cv::Mat*)edges), *((cv::Mat*)dx), *((cv::Mat*)dy), *((cv::Mat*)positions), *((cv::Mat*)votes));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GeneralizedHough_release
// parsed: cv::GeneralizedHough::release
// as:     cv::GeneralizedHough::release (method) cv::GeneralizedHough . release
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_GeneralizedHough_release(
        void* instance) {
  try {
  ((cv::GeneralizedHough*) instance)->release();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Moments_Moments
// parsed: cv::Moments::Moments
// as:     cv::Moments::Moments (constructor) cv::Moments (simple) . new
// Return value: cv::Moments (simple)
struct cv_return_value_c_Moments cv_imgproc_cv_Moments_Moments(
        ) {
  try {
  cv::Moments cpp_return_value;
  return { NULL, *reinterpret_cast<c_Moments*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_Moments ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_Moments ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Moments_Moments_double_m00_double_m10_double_m01_double_m20_double_m11_double_m02_double_m30_double_m21_double_m12_double_m03
// parsed: cv::Moments::Moments
// as:     cv::Moments::Moments (constructor) cv::Moments (simple) . new
// Arg ARG Primitive(double) m00=  Primitive(double) = 
// Arg ARG Primitive(double) m10=  Primitive(double) = 
// Arg ARG Primitive(double) m01=  Primitive(double) = 
// Arg ARG Primitive(double) m20=  Primitive(double) = 
// Arg ARG Primitive(double) m11=  Primitive(double) = 
// Arg ARG Primitive(double) m02=  Primitive(double) = 
// Arg ARG Primitive(double) m30=  Primitive(double) = 
// Arg ARG Primitive(double) m21=  Primitive(double) = 
// Arg ARG Primitive(double) m12=  Primitive(double) = 
// Arg ARG Primitive(double) m03=  Primitive(double) = 
// Return value: cv::Moments (simple)
struct cv_return_value_c_Moments cv_imgproc_cv_Moments_Moments_double_m00_double_m10_double_m01_double_m20_double_m11_double_m02_double_m30_double_m21_double_m12_double_m03(
        double m00,
        double m10,
        double m01,
        double m20,
        double m11,
        double m02,
        double m30,
        double m21,
        double m12,
        double m03) {
  try {
  cv::Moments cpp_return_value(*reinterpret_cast<double*>(&m00), *reinterpret_cast<double*>(&m10), *reinterpret_cast<double*>(&m01), *reinterpret_cast<double*>(&m20), *reinterpret_cast<double*>(&m11), *reinterpret_cast<double*>(&m02), *reinterpret_cast<double*>(&m30), *reinterpret_cast<double*>(&m21), *reinterpret_cast<double*>(&m12), *reinterpret_cast<double*>(&m03));
  return { NULL, *reinterpret_cast<c_Moments*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_Moments ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_Moments ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}


// boxed class: cv::Subdiv2D
void cv_delete_Subdiv2D(void* instance) {
    delete (cv::Subdiv2D*) instance;
}
// cv_Subdiv2D_Subdiv2D
// parsed: cv::Subdiv2D::Subdiv2D
// as:     cv::Subdiv2D::Subdiv2D (constructor) cv::Subdiv2D . new
// Return value: cv::Subdiv2D (boxed)
struct cv_return_value_void_X cv_imgproc_cv_Subdiv2D_Subdiv2D(
        ) {
  try {
  cv::Subdiv2D* cpp_return_value = new cv::Subdiv2D();
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

// cv_Subdiv2D_Subdiv2D_Rect_rect
// parsed: cv::Subdiv2D::Subdiv2D
// as:     cv::Subdiv2D::Subdiv2D (constructor) cv::Subdiv2D . new
// Arg ARG Rect (struct) rect=  Rect (struct) = 
// Return value: cv::Subdiv2D (boxed)
struct cv_return_value_void_X cv_imgproc_cv_Subdiv2D_Subdiv2D_Rect_rect(
        c_Rect rect) {
  try {
  cv::Subdiv2D* cpp_return_value = new cv::Subdiv2D(*reinterpret_cast<Rect*>(&rect));
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

// cv_Subdiv2D_initDelaunay_Rect_rect
// parsed: cv::Subdiv2D::initDelaunay
// as:     cv::Subdiv2D::initDelaunay (method) cv::Subdiv2D . initDelaunay
// Arg ARG Rect (struct) rect=  Rect (struct) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_Subdiv2D_initDelaunay_Rect_rect(
        void* instance,
        c_Rect rect) {
  try {
  ((cv::Subdiv2D*) instance)->initDelaunay(*reinterpret_cast<Rect*>(&rect));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Subdiv2D_insert_Point2f_pt
// parsed: cv::Subdiv2D::insert
// as:     cv::Subdiv2D::insert (method) cv::Subdiv2D . insert
// Arg ARG Point2f (struct) pt=  Point2f (struct) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_imgproc_cv_Subdiv2D_insert_Point2f_pt(
        void* instance,
        c_Point2f pt) {
  try {
  int cpp_return_value = ((cv::Subdiv2D*) instance)->insert(*reinterpret_cast<Point2f*>(&pt));
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Subdiv2D_insert_VectorOfPoint2f_ptvec
// parsed: cv::Subdiv2D::insert
// as:     cv::Subdiv2D::insert (method) cv::Subdiv2D . insert
// Arg ARG Vector[Point2f (struct)] ptvec=  Vector[Point2f (struct)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_Subdiv2D_insert_VectorOfPoint2f_ptvec(
        void* instance,
        void* ptvec) {
  try {
  ((cv::Subdiv2D*) instance)->insert(*((vector<Point2f >*)ptvec));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Subdiv2D_locate_Point2f_pt_int_edge_int_vertex
// parsed: cv::Subdiv2D::locate
// as:     cv::Subdiv2D::locate (method) cv::Subdiv2D . locate
// Arg ARG Point2f (struct) pt=  Point2f (struct) = 
// Arg ARG Primitive(int) edge=  Primitive(int) = 
// Arg ARG Primitive(int) vertex=  Primitive(int) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_imgproc_cv_Subdiv2D_locate_Point2f_pt_int_edge_int_vertex(
        void* instance,
        c_Point2f pt,
        int edge,
        int vertex) {
  try {
  int cpp_return_value = ((cv::Subdiv2D*) instance)->locate(*reinterpret_cast<Point2f*>(&pt), *reinterpret_cast<int*>(&edge), *reinterpret_cast<int*>(&vertex));
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Subdiv2D_getEdgeList_VectorOfVec4f_edgeList
// parsed: cv::Subdiv2D::getEdgeList
// as:     cv::Subdiv2D::getEdgeList (method) cv::Subdiv2D . getEdgeList
// Arg ARG Vector[Vec4f (struct)] edgeList=  Vector[Vec4f (struct)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_Subdiv2D_getEdgeList_VectorOfVec4f_edgeList(
        void* instance,
        void* edgeList) {
  try {
  ((cv::Subdiv2D*) instance)->getEdgeList(*((vector<Vec4f >*)edgeList));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Subdiv2D_getTriangleList_VectorOfVec6f_triangleList
// parsed: cv::Subdiv2D::getTriangleList
// as:     cv::Subdiv2D::getTriangleList (method) cv::Subdiv2D . getTriangleList
// Arg ARG Vector[Vec6f (struct)] triangleList=  Vector[Vec6f (struct)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_Subdiv2D_getTriangleList_VectorOfVec6f_triangleList(
        void* instance,
        void* triangleList) {
  try {
  ((cv::Subdiv2D*) instance)->getTriangleList(*((vector<Vec6f >*)triangleList));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Subdiv2D_getVoronoiFacetList_VectorOfint_idx_VectorOfVectorOfPoint2f_facetList_VectorOfPoint2f_facetCenters
// parsed: cv::Subdiv2D::getVoronoiFacetList
// as:     cv::Subdiv2D::getVoronoiFacetList (method) cv::Subdiv2D . getVoronoiFacetList
// Arg ARG Vector[Primitive(int)] idx=  Vector[Primitive(int)] = 
// Arg ARG Vector[Vector[Point2f (struct)]] facetList=  Vector[Vector[Point2f (struct)]] = 
// Arg ARG Vector[Point2f (struct)] facetCenters=  Vector[Point2f (struct)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_imgproc_cv_Subdiv2D_getVoronoiFacetList_VectorOfint_idx_VectorOfVectorOfPoint2f_facetList_VectorOfPoint2f_facetCenters(
        void* instance,
        void* idx,
        void* facetList,
        void* facetCenters) {
  try {
  ((cv::Subdiv2D*) instance)->getVoronoiFacetList(*((vector<int >*)idx), *((vector<vector<Point2f > >*)facetList), *((vector<Point2f >*)facetCenters));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Subdiv2D_getEdge_int_edge_int_nextEdgeType
// parsed: cv::Subdiv2D::getEdge
// as:     cv::Subdiv2D::getEdge (method) cv::Subdiv2D . getEdge
// Arg ARG Primitive(int) edge=  Primitive(int) = 
// Arg ARG Primitive(int) nextEdgeType=  Primitive(int) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_imgproc_cv_Subdiv2D_getEdge_int_edge_int_nextEdgeType(
        void* instance,
        int edge,
        int nextEdgeType) {
  try {
  int cpp_return_value = ((cv::Subdiv2D*) instance)->getEdge(*reinterpret_cast<int*>(&edge), *reinterpret_cast<int*>(&nextEdgeType));
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Subdiv2D_nextEdge_int_edge
// parsed: cv::Subdiv2D::nextEdge
// as:     cv::Subdiv2D::nextEdge (method) cv::Subdiv2D . nextEdge
// Arg ARG Primitive(int) edge=  Primitive(int) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_imgproc_cv_Subdiv2D_nextEdge_int_edge(
        void* instance,
        int edge) {
  try {
  int cpp_return_value = ((cv::Subdiv2D*) instance)->nextEdge(*reinterpret_cast<int*>(&edge));
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Subdiv2D_rotateEdge_int_edge_int_rotate
// parsed: cv::Subdiv2D::rotateEdge
// as:     cv::Subdiv2D::rotateEdge (method) cv::Subdiv2D . rotateEdge
// Arg ARG Primitive(int) edge=  Primitive(int) = 
// Arg ARG Primitive(int) rotate=  Primitive(int) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_imgproc_cv_Subdiv2D_rotateEdge_int_edge_int_rotate(
        void* instance,
        int edge,
        int rotate) {
  try {
  int cpp_return_value = ((cv::Subdiv2D*) instance)->rotateEdge(*reinterpret_cast<int*>(&edge), *reinterpret_cast<int*>(&rotate));
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Subdiv2D_symEdge_int_edge
// parsed: cv::Subdiv2D::symEdge
// as:     cv::Subdiv2D::symEdge (method) cv::Subdiv2D . symEdge
// Arg ARG Primitive(int) edge=  Primitive(int) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_imgproc_cv_Subdiv2D_symEdge_int_edge(
        void* instance,
        int edge) {
  try {
  int cpp_return_value = ((cv::Subdiv2D*) instance)->symEdge(*reinterpret_cast<int*>(&edge));
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}



} // extern "C"

