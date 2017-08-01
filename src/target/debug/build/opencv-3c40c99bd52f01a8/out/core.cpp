
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

// cvCeil_double_value
// parsed: cvCeil
// as:     cvCeil (function)
// Arg ARG Primitive(double) value=  Primitive(double) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cvCeil_double_value(
        double value) {
  try {
  int cpp_return_value = cvCeil(*reinterpret_cast<double*>(&value));
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

// cvFloor_double_value
// parsed: cvFloor
// as:     cvFloor (function)
// Arg ARG Primitive(double) value=  Primitive(double) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cvFloor_double_value(
        double value) {
  try {
  int cpp_return_value = cvFloor(*reinterpret_cast<double*>(&value));
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

// cvIplDepth_int_type
// parsed: cvIplDepth
// as:     cvIplDepth (function)
// Arg ARG Primitive(int) type=  Primitive(int) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cvIplDepth_int_type(
        int type) {
  try {
  int cpp_return_value = cvIplDepth(*reinterpret_cast<int*>(&type));
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

// cvIsInf_double_value
// parsed: cvIsInf
// as:     cvIsInf (function)
// Arg ARG Primitive(double) value=  Primitive(double) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cvIsInf_double_value(
        double value) {
  try {
  int cpp_return_value = cvIsInf(*reinterpret_cast<double*>(&value));
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

// cvIsNaN_double_value
// parsed: cvIsNaN
// as:     cvIsNaN (function)
// Arg ARG Primitive(double) value=  Primitive(double) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cvIsNaN_double_value(
        double value) {
  try {
  int cpp_return_value = cvIsNaN(*reinterpret_cast<double*>(&value));
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

// cvRNG_int64_seed
// parsed: cvRNG
// as:     cvRNG (function)
// Arg ARG Primitive(int64) seed=  Primitive(int64) =-1 
// Return value: CvRNG (struct)
struct cv_return_value_c_CvRNG cv_core_cvRNG_int64_seed(
        int64 seed) {
  try {
  CvRNG cpp_return_value = cvRNG(*reinterpret_cast<int64*>(&seed));
  return { NULL, *reinterpret_cast<c_CvRNG*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_CvRNG ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_CvRNG ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cvRound_double_value
// parsed: cvRound
// as:     cvRound (function)
// Arg ARG Primitive(double) value=  Primitive(double) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cvRound_double_value(
        double value) {
  try {
  int cpp_return_value = cvRound(*reinterpret_cast<double*>(&value));
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

// cv_LUT_InputArray_src_InputArray_lut_OutputArray_dst_int_interpolation
// parsed: cv::LUT
// as:     cv::LUT (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) lut=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) interpolation=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_LUT_InputArray_src_InputArray_lut_OutputArray_dst_int_interpolation(
        void* src,
        void* lut,
        void* dst,
        int interpolation) {
  try {
  cv::LUT(*((cv::Mat*)src), *((cv::Mat*)lut), *((cv::Mat*)dst), *reinterpret_cast<int*>(&interpolation));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mahalanobis_InputArray_v1_InputArray_v2_InputArray_icovar
// parsed: cv::Mahalanobis
// as:     cv::Mahalanobis (function)
// Arg ARG cv::Mat (boxed) v1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) v2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) icovar=  cv::Mat (boxed) = 
// Return value: Primitive(double)
struct cv_return_value_double cv_core_cv_Mahalanobis_InputArray_v1_InputArray_v2_InputArray_icovar(
        void* v1,
        void* v2,
        void* icovar) {
  try {
  double cpp_return_value = cv::Mahalanobis(*((cv::Mat*)v1), *((cv::Mat*)v2), *((cv::Mat*)icovar));
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

// cv_Mahalonobis_InputArray_v1_InputArray_v2_InputArray_icovar
// parsed: cv::Mahalonobis
// as:     cv::Mahalonobis (function)
// Arg ARG cv::Mat (boxed) v1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) v2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) icovar=  cv::Mat (boxed) = 
// Return value: Primitive(double)
struct cv_return_value_double cv_core_cv_Mahalonobis_InputArray_v1_InputArray_v2_InputArray_icovar(
        void* v1,
        void* v2,
        void* icovar) {
  try {
  double cpp_return_value = cv::Mahalonobis(*((cv::Mat*)v1), *((cv::Mat*)v2), *((cv::Mat*)icovar));
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

// cv_PCABackProject_InputArray_data_InputArray_mean_InputArray_eigenvectors_OutputArray_result
// parsed: cv::PCABackProject
// as:     cv::PCABackProject (function)
// Arg ARG cv::Mat (boxed) data=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mean=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) eigenvectors=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) result=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_PCABackProject_InputArray_data_InputArray_mean_InputArray_eigenvectors_OutputArray_result(
        void* data,
        void* mean,
        void* eigenvectors,
        void* result) {
  try {
  cv::PCABackProject(*((cv::Mat*)data), *((cv::Mat*)mean), *((cv::Mat*)eigenvectors), *((cv::Mat*)result));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_PCAProject_InputArray_data_InputArray_mean_InputArray_eigenvectors_OutputArray_result
// parsed: cv::PCAProject
// as:     cv::PCAProject (function)
// Arg ARG cv::Mat (boxed) data=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mean=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) eigenvectors=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) result=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_PCAProject_InputArray_data_InputArray_mean_InputArray_eigenvectors_OutputArray_result(
        void* data,
        void* mean,
        void* eigenvectors,
        void* result) {
  try {
  cv::PCAProject(*((cv::Mat*)data), *((cv::Mat*)mean), *((cv::Mat*)eigenvectors), *((cv::Mat*)result));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_SVBackSubst_InputArray_w_InputArray_u_InputArray_vt_InputArray_rhs_OutputArray_dst
// parsed: cv::SVBackSubst
// as:     cv::SVBackSubst (function)
// Arg ARG cv::Mat (boxed) w=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) u=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) vt=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) rhs=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_SVBackSubst_InputArray_w_InputArray_u_InputArray_vt_InputArray_rhs_OutputArray_dst(
        void* w,
        void* u,
        void* vt,
        void* rhs,
        void* dst) {
  try {
  cv::SVBackSubst(*((cv::Mat*)w), *((cv::Mat*)u), *((cv::Mat*)vt), *((cv::Mat*)rhs), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_SVDecomp_InputArray_src_OutputArray_w_OutputArray_u_OutputArray_vt_int_flags
// parsed: cv::SVDecomp
// as:     cv::SVDecomp (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) w=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) u=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) vt=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_SVDecomp_InputArray_src_OutputArray_w_OutputArray_u_OutputArray_vt_int_flags(
        void* src,
        void* w,
        void* u,
        void* vt,
        int flags) {
  try {
  cv::SVDecomp(*((cv::Mat*)src), *((cv::Mat*)w), *((cv::Mat*)u), *((cv::Mat*)vt), *reinterpret_cast<int*>(&flags));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_absdiff_InputArray_src1_InputArray_src2_OutputArray_dst
// parsed: cv::absdiff
// as:     cv::absdiff (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_absdiff_InputArray_src1_InputArray_src2_OutputArray_dst(
        void* src1,
        void* src2,
        void* dst) {
  try {
  cv::absdiff(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_addWeighted_InputArray_src1_double_alpha_InputArray_src2_double_beta_double_gamma_OutputArray_dst_int_dtype
// parsed: cv::addWeighted
// as:     cv::addWeighted (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) alpha=  Primitive(double) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) beta=  Primitive(double) = 
// Arg ARG Primitive(double) gamma=  Primitive(double) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) dtype=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_addWeighted_InputArray_src1_double_alpha_InputArray_src2_double_beta_double_gamma_OutputArray_dst_int_dtype(
        void* src1,
        double alpha,
        void* src2,
        double beta,
        double gamma,
        void* dst,
        int dtype) {
  try {
  cv::addWeighted(*((cv::Mat*)src1), *reinterpret_cast<double*>(&alpha), *((cv::Mat*)src2), *reinterpret_cast<double*>(&beta), *reinterpret_cast<double*>(&gamma), *((cv::Mat*)dst), *reinterpret_cast<int*>(&dtype));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_add_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask_int_dtype
// parsed: cv::add
// as:     cv::add (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Arg ARG Primitive(int) dtype=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_add_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask_int_dtype(
        void* src1,
        void* src2,
        void* dst,
        void* mask,
        int dtype) {
  try {
  cv::add(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst), *((cv::Mat*)mask), *reinterpret_cast<int*>(&dtype));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_alignSize_size_t_sz_int_n
// parsed: cv::alignSize
// as:     cv::alignSize (function)
// Arg ARG Primitive(size_t) sz=  Primitive(size_t) = 
// Arg ARG Primitive(int) n=  Primitive(int) = 
// Return value: Primitive(size_t)
struct cv_return_value_std_size_t cv_core_cv_alignSize_size_t_sz_int_n(
        std::size_t sz,
        int n) {
  try {
  size_t cpp_return_value = cv::alignSize(*reinterpret_cast<size_t*>(&sz), *reinterpret_cast<int*>(&n));
  return { NULL, *reinterpret_cast<std::size_t*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_std_size_t ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_std_size_t ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_arrowedLine_Mat_img_Point_pt1_Point_pt2_Scalar_color_int_thickness_int_line_type_int_shift_double_tipLength
// parsed: cv::arrowedLine
// as:     cv::arrowedLine (function)
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Point (struct) pt1=  Point (struct) = 
// Arg ARG Point (struct) pt2=  Point (struct) = 
// Arg ARG Scalar (struct) color=  Scalar (struct) = 
// Arg ARG Primitive(int) thickness=  Primitive(int) =1 
// Arg ARG Primitive(int) line_type=  Primitive(int) =8 
// Arg ARG Primitive(int) shift=  Primitive(int) =0 
// Arg ARG Primitive(double) tipLength=  Primitive(double) =0.1 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_arrowedLine_Mat_img_Point_pt1_Point_pt2_Scalar_color_int_thickness_int_line_type_int_shift_double_tipLength(
        void* img,
        c_Point pt1,
        c_Point pt2,
        c_Scalar color,
        int thickness,
        int line_type,
        int shift,
        double tipLength) {
  try {
  cv::arrowedLine(*((cv::Mat*)img), *reinterpret_cast<Point*>(&pt1), *reinterpret_cast<Point*>(&pt2), *reinterpret_cast<Scalar*>(&color), *reinterpret_cast<int*>(&thickness), *reinterpret_cast<int*>(&line_type), *reinterpret_cast<int*>(&shift), *reinterpret_cast<double*>(&tipLength));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_batchDistance_InputArray_src1_InputArray_src2_OutputArray_dist_int_dtype_OutputArray_nidx_int_normType_int_K_InputArray_mask_int_update_bool_crosscheck
// parsed: cv::batchDistance
// as:     cv::batchDistance (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dist=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) dtype=  Primitive(int) = 
// Arg ARG cv::Mat (boxed) nidx=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) normType=  Primitive(int) =NORM_L2 
// Arg ARG Primitive(int) K=  Primitive(int) =0 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Arg ARG Primitive(int) update=  Primitive(int) =0 
// Arg ARG Primitive(bool) crosscheck=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_batchDistance_InputArray_src1_InputArray_src2_OutputArray_dist_int_dtype_OutputArray_nidx_int_normType_int_K_InputArray_mask_int_update_bool_crosscheck(
        void* src1,
        void* src2,
        void* dist,
        int dtype,
        void* nidx,
        int normType,
        int K,
        void* mask,
        int update,
        char crosscheck) {
  try {
  cv::batchDistance(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dist), *reinterpret_cast<int*>(&dtype), *((cv::Mat*)nidx), *reinterpret_cast<int*>(&normType), *reinterpret_cast<int*>(&K), *((cv::Mat*)mask), *reinterpret_cast<int*>(&update), *reinterpret_cast<bool*>(&crosscheck));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_bitwise_and_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask
// parsed: cv::bitwise_and
// as:     cv::bitwise_and (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_bitwise_and_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask(
        void* src1,
        void* src2,
        void* dst,
        void* mask) {
  try {
  cv::bitwise_and(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst), *((cv::Mat*)mask));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_bitwise_not_InputArray_src_OutputArray_dst_InputArray_mask
// parsed: cv::bitwise_not
// as:     cv::bitwise_not (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_bitwise_not_InputArray_src_OutputArray_dst_InputArray_mask(
        void* src,
        void* dst,
        void* mask) {
  try {
  cv::bitwise_not(*((cv::Mat*)src), *((cv::Mat*)dst), *((cv::Mat*)mask));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_bitwise_or_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask
// parsed: cv::bitwise_or
// as:     cv::bitwise_or (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_bitwise_or_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask(
        void* src1,
        void* src2,
        void* dst,
        void* mask) {
  try {
  cv::bitwise_or(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst), *((cv::Mat*)mask));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_bitwise_xor_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask
// parsed: cv::bitwise_xor
// as:     cv::bitwise_xor (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_bitwise_xor_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask(
        void* src1,
        void* src2,
        void* dst,
        void* mask) {
  try {
  cv::bitwise_xor(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst), *((cv::Mat*)mask));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_calcCovarMatrix_Mat_samples_int_nsamples_Mat_covar_Mat_mean_int_flags_int_ctype
// parsed: cv::calcCovarMatrix
// as:     cv::calcCovarMatrix (function)
// Arg ARG cv::Mat (boxed) * samples= (ptr) cv::Mat (boxed) = 
// Arg ARG Primitive(int) nsamples=  Primitive(int) = 
// Arg ARG cv::Mat (boxed) covar=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mean=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) = 
// Arg ARG Primitive(int) ctype=  Primitive(int) =CV_64F 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_calcCovarMatrix_Mat_samples_int_nsamples_Mat_covar_Mat_mean_int_flags_int_ctype(
        void* samples,
        int nsamples,
        void* covar,
        void* mean,
        int flags,
        int ctype) {
  try {
  cv::calcCovarMatrix(((cv::Mat*)samples), *reinterpret_cast<int*>(&nsamples), *((cv::Mat*)covar), *((cv::Mat*)mean), *reinterpret_cast<int*>(&flags), *reinterpret_cast<int*>(&ctype));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_cartToPolar_InputArray_x_InputArray_y_OutputArray_magnitude_OutputArray_angle_bool_angleInDegrees
// parsed: cv::cartToPolar
// as:     cv::cartToPolar (function)
// Arg ARG cv::Mat (boxed) x=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) y=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) magnitude=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) angle=  cv::Mat (boxed) = 
// Arg ARG Primitive(bool) angleInDegrees=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_cartToPolar_InputArray_x_InputArray_y_OutputArray_magnitude_OutputArray_angle_bool_angleInDegrees(
        void* x,
        void* y,
        void* magnitude,
        void* angle,
        char angleInDegrees) {
  try {
  cv::cartToPolar(*((cv::Mat*)x), *((cv::Mat*)y), *((cv::Mat*)magnitude), *((cv::Mat*)angle), *reinterpret_cast<bool*>(&angleInDegrees));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_checkHardwareSupport_int_feature
// parsed: cv::checkHardwareSupport
// as:     cv::checkHardwareSupport (function)
// Arg ARG Primitive(int) feature=  Primitive(int) = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_core_cv_checkHardwareSupport_int_feature(
        int feature) {
  try {
  bool cpp_return_value = cv::checkHardwareSupport(*reinterpret_cast<int*>(&feature));
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

// cv_circle_Mat_img_Point_center_int_radius_Scalar_color_int_thickness_int_lineType_int_shift
// parsed: cv::circle
// as:     cv::circle (function)
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Point (struct) center=  Point (struct) = 
// Arg ARG Primitive(int) radius=  Primitive(int) = 
// Arg ARG Scalar (struct) color=  Scalar (struct) = 
// Arg ARG Primitive(int) thickness=  Primitive(int) =1 
// Arg ARG Primitive(int) lineType=  Primitive(int) =8 
// Arg ARG Primitive(int) shift=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_circle_Mat_img_Point_center_int_radius_Scalar_color_int_thickness_int_lineType_int_shift(
        void* img,
        c_Point center,
        int radius,
        c_Scalar color,
        int thickness,
        int lineType,
        int shift) {
  try {
  cv::circle(*((cv::Mat*)img), *reinterpret_cast<Point*>(&center), *reinterpret_cast<int*>(&radius), *reinterpret_cast<Scalar*>(&color), *reinterpret_cast<int*>(&thickness), *reinterpret_cast<int*>(&lineType), *reinterpret_cast<int*>(&shift));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_clipLine_Rect_imgRect_Point_pt1_Point_pt2
// parsed: cv::clipLine
// as:     cv::clipLine (function)
// Arg ARG Rect (struct) imgRect=  Rect (struct) = 
// Arg ARG Point (struct) pt1=  Point (struct) = 
// Arg ARG Point (struct) pt2=  Point (struct) = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_core_cv_clipLine_Rect_imgRect_Point_pt1_Point_pt2(
        c_Rect imgRect,
        c_Point pt1,
        c_Point pt2) {
  try {
  bool cpp_return_value = cv::clipLine(*reinterpret_cast<Rect*>(&imgRect), *reinterpret_cast<Point*>(&pt1), *reinterpret_cast<Point*>(&pt2));
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

// cv_clipLine_Size_imgSize_Point_pt1_Point_pt2
// parsed: cv::clipLine
// as:     cv::clipLine (function)
// Arg ARG Size (struct) imgSize=  Size (struct) = 
// Arg ARG Point (struct) pt1=  Point (struct) = 
// Arg ARG Point (struct) pt2=  Point (struct) = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_core_cv_clipLine_Size_imgSize_Point_pt1_Point_pt2(
        c_Size imgSize,
        c_Point pt1,
        c_Point pt2) {
  try {
  bool cpp_return_value = cv::clipLine(*reinterpret_cast<Size*>(&imgSize), *reinterpret_cast<Point*>(&pt1), *reinterpret_cast<Point*>(&pt2));
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

// cv_compare_InputArray_src1_InputArray_src2_OutputArray_dst_int_cmpop
// parsed: cv::compare
// as:     cv::compare (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) cmpop=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_compare_InputArray_src1_InputArray_src2_OutputArray_dst_int_cmpop(
        void* src1,
        void* src2,
        void* dst,
        int cmpop) {
  try {
  cv::compare(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst), *reinterpret_cast<int*>(&cmpop));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_convertScaleAbs_InputArray_src_OutputArray_dst_double_alpha_double_beta
// parsed: cv::convertScaleAbs
// as:     cv::convertScaleAbs (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) alpha=  Primitive(double) =1 
// Arg ARG Primitive(double) beta=  Primitive(double) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_convertScaleAbs_InputArray_src_OutputArray_dst_double_alpha_double_beta(
        void* src,
        void* dst,
        double alpha,
        double beta) {
  try {
  cv::convertScaleAbs(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<double*>(&alpha), *reinterpret_cast<double*>(&beta));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_countNonZero_InputArray_src
// parsed: cv::countNonZero
// as:     cv::countNonZero (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cv_countNonZero_InputArray_src(
        void* src) {
  try {
  int cpp_return_value = cv::countNonZero(*((cv::Mat*)src));
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

// cv_cubeRoot_float_val
// parsed: cv::cubeRoot
// as:     cv::cubeRoot (function)
// Arg ARG Primitive(float) val=  Primitive(float) = 
// Return value: Primitive(float)
struct cv_return_value_float cv_core_cv_cubeRoot_float_val(
        float val) {
  try {
  float cpp_return_value = cv::cubeRoot(*reinterpret_cast<float*>(&val));
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

// cv_dct_InputArray_src_OutputArray_dst_int_flags
// parsed: cv::dct
// as:     cv::dct (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_dct_InputArray_src_OutputArray_dst_int_flags(
        void* src,
        void* dst,
        int flags) {
  try {
  cv::dct(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&flags));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_determinant_InputArray_mtx
// parsed: cv::determinant
// as:     cv::determinant (function)
// Arg ARG cv::Mat (boxed) mtx=  cv::Mat (boxed) = 
// Return value: Primitive(double)
struct cv_return_value_double cv_core_cv_determinant_InputArray_mtx(
        void* mtx) {
  try {
  double cpp_return_value = cv::determinant(*((cv::Mat*)mtx));
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

// cv_dft_InputArray_src_OutputArray_dst_int_flags_int_nonzeroRows
// parsed: cv::dft
// as:     cv::dft (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) =0 
// Arg ARG Primitive(int) nonzeroRows=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_dft_InputArray_src_OutputArray_dst_int_flags_int_nonzeroRows(
        void* src,
        void* dst,
        int flags,
        int nonzeroRows) {
  try {
  cv::dft(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&flags), *reinterpret_cast<int*>(&nonzeroRows));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_divide_InputArray_src1_InputArray_src2_OutputArray_dst_double_scale_int_dtype
// parsed: cv::divide
// as:     cv::divide (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) scale=  Primitive(double) =1 
// Arg ARG Primitive(int) dtype=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_divide_InputArray_src1_InputArray_src2_OutputArray_dst_double_scale_int_dtype(
        void* src1,
        void* src2,
        void* dst,
        double scale,
        int dtype) {
  try {
  cv::divide(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst), *reinterpret_cast<double*>(&scale), *reinterpret_cast<int*>(&dtype));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_divide_double_scale_InputArray_src2_OutputArray_dst_int_dtype
// parsed: cv::divide
// as:     cv::divide (function)
// Arg ARG Primitive(double) scale=  Primitive(double) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) dtype=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_divide_double_scale_InputArray_src2_OutputArray_dst_int_dtype(
        double scale,
        void* src2,
        void* dst,
        int dtype) {
  try {
  cv::divide(*reinterpret_cast<double*>(&scale), *((cv::Mat*)src2), *((cv::Mat*)dst), *reinterpret_cast<int*>(&dtype));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_drawMarker_Mat_img_Point_position_Scalar_color_int_markerType_int_markerSize_int_thickness_int_line_type
// parsed: cv::drawMarker
// as:     cv::drawMarker (function)
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Point (struct) position=  Point (struct) = 
// Arg ARG Scalar (struct) color=  Scalar (struct) = 
// Arg ARG Primitive(int) markerType=  Primitive(int) =MARKER_CROSS 
// Arg ARG Primitive(int) markerSize=  Primitive(int) =20 
// Arg ARG Primitive(int) thickness=  Primitive(int) =1 
// Arg ARG Primitive(int) line_type=  Primitive(int) =8 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_drawMarker_Mat_img_Point_position_Scalar_color_int_markerType_int_markerSize_int_thickness_int_line_type(
        void* img,
        c_Point position,
        c_Scalar color,
        int markerType,
        int markerSize,
        int thickness,
        int line_type) {
  try {
  cv::drawMarker(*((cv::Mat*)img), *reinterpret_cast<Point*>(&position), *reinterpret_cast<Scalar*>(&color), *reinterpret_cast<int*>(&markerType), *reinterpret_cast<int*>(&markerSize), *reinterpret_cast<int*>(&thickness), *reinterpret_cast<int*>(&line_type));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_eigen_InputArray_src_OutputArray_eigenvalues_OutputArray_eigenvectors_int_lowindex_int_highindex
// parsed: cv::eigen
// as:     cv::eigen (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) eigenvalues=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) eigenvectors=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) lowindex=  Primitive(int) =-1 
// Arg ARG Primitive(int) highindex=  Primitive(int) =-1 
// Return value: Primitive(bool)
struct cv_return_value_char cv_core_cv_eigen_InputArray_src_OutputArray_eigenvalues_OutputArray_eigenvectors_int_lowindex_int_highindex(
        void* src,
        void* eigenvalues,
        void* eigenvectors,
        int lowindex,
        int highindex) {
  try {
  bool cpp_return_value = cv::eigen(*((cv::Mat*)src), *((cv::Mat*)eigenvalues), *((cv::Mat*)eigenvectors), *reinterpret_cast<int*>(&lowindex), *reinterpret_cast<int*>(&highindex));
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

// cv_eigen_InputArray_src_OutputArray_eigenvalues_int_lowindex_int_highindex
// parsed: cv::eigen
// as:     cv::eigen (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) eigenvalues=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) lowindex=  Primitive(int) =-1 
// Arg ARG Primitive(int) highindex=  Primitive(int) =-1 
// Return value: Primitive(bool)
struct cv_return_value_char cv_core_cv_eigen_InputArray_src_OutputArray_eigenvalues_int_lowindex_int_highindex(
        void* src,
        void* eigenvalues,
        int lowindex,
        int highindex) {
  try {
  bool cpp_return_value = cv::eigen(*((cv::Mat*)src), *((cv::Mat*)eigenvalues), *reinterpret_cast<int*>(&lowindex), *reinterpret_cast<int*>(&highindex));
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

// cv_eigen_InputArray_src_bool_computeEigenvectors_OutputArray_eigenvalues_OutputArray_eigenvectors
// parsed: cv::eigen
// as:     cv::eigen (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG Primitive(bool) computeEigenvectors=  Primitive(bool) = 
// Arg ARG cv::Mat (boxed) eigenvalues=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) eigenvectors=  cv::Mat (boxed) = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_core_cv_eigen_InputArray_src_bool_computeEigenvectors_OutputArray_eigenvalues_OutputArray_eigenvectors(
        void* src,
        char computeEigenvectors,
        void* eigenvalues,
        void* eigenvectors) {
  try {
  bool cpp_return_value = cv::eigen(*((cv::Mat*)src), *reinterpret_cast<bool*>(&computeEigenvectors), *((cv::Mat*)eigenvalues), *((cv::Mat*)eigenvectors));
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

// cv_ellipse2Poly_Point_center_Size_axes_int_angle_int_arcStart_int_arcEnd_int_delta_VectorOfPoint_pts
// parsed: cv::ellipse2Poly
// as:     cv::ellipse2Poly (function)
// Arg ARG Point (struct) center=  Point (struct) = 
// Arg ARG Size (struct) axes=  Size (struct) = 
// Arg ARG Primitive(int) angle=  Primitive(int) = 
// Arg ARG Primitive(int) arcStart=  Primitive(int) = 
// Arg ARG Primitive(int) arcEnd=  Primitive(int) = 
// Arg ARG Primitive(int) delta=  Primitive(int) = 
// Arg ARG Vector[Point (struct)] pts=  Vector[Point (struct)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_ellipse2Poly_Point_center_Size_axes_int_angle_int_arcStart_int_arcEnd_int_delta_VectorOfPoint_pts(
        c_Point center,
        c_Size axes,
        int angle,
        int arcStart,
        int arcEnd,
        int delta,
        void* pts) {
  try {
  cv::ellipse2Poly(*reinterpret_cast<Point*>(&center), *reinterpret_cast<Size*>(&axes), *reinterpret_cast<int*>(&angle), *reinterpret_cast<int*>(&arcStart), *reinterpret_cast<int*>(&arcEnd), *reinterpret_cast<int*>(&delta), *((vector<Point >*)pts));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_ellipse_Mat_img_Point_center_Size_axes_double_angle_double_startAngle_double_endAngle_Scalar_color_int_thickness_int_lineType_int_shift
// parsed: cv::ellipse
// as:     cv::ellipse (function)
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Point (struct) center=  Point (struct) = 
// Arg ARG Size (struct) axes=  Size (struct) = 
// Arg ARG Primitive(double) angle=  Primitive(double) = 
// Arg ARG Primitive(double) startAngle=  Primitive(double) = 
// Arg ARG Primitive(double) endAngle=  Primitive(double) = 
// Arg ARG Scalar (struct) color=  Scalar (struct) = 
// Arg ARG Primitive(int) thickness=  Primitive(int) =1 
// Arg ARG Primitive(int) lineType=  Primitive(int) =8 
// Arg ARG Primitive(int) shift=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_ellipse_Mat_img_Point_center_Size_axes_double_angle_double_startAngle_double_endAngle_Scalar_color_int_thickness_int_lineType_int_shift(
        void* img,
        c_Point center,
        c_Size axes,
        double angle,
        double startAngle,
        double endAngle,
        c_Scalar color,
        int thickness,
        int lineType,
        int shift) {
  try {
  cv::ellipse(*((cv::Mat*)img), *reinterpret_cast<Point*>(&center), *reinterpret_cast<Size*>(&axes), *reinterpret_cast<double*>(&angle), *reinterpret_cast<double*>(&startAngle), *reinterpret_cast<double*>(&endAngle), *reinterpret_cast<Scalar*>(&color), *reinterpret_cast<int*>(&thickness), *reinterpret_cast<int*>(&lineType), *reinterpret_cast<int*>(&shift));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_ellipse_Mat_img_RotatedRect_box_Scalar_color_int_thickness_int_lineType
// parsed: cv::ellipse
// as:     cv::ellipse (function)
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG cv::RotatedRect (boxed) box=  cv::RotatedRect (boxed) = 
// Arg ARG Scalar (struct) color=  Scalar (struct) = 
// Arg ARG Primitive(int) thickness=  Primitive(int) =1 
// Arg ARG Primitive(int) lineType=  Primitive(int) =8 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_ellipse_Mat_img_RotatedRect_box_Scalar_color_int_thickness_int_lineType(
        void* img,
        void* box,
        c_Scalar color,
        int thickness,
        int lineType) {
  try {
  cv::ellipse(*((cv::Mat*)img), *((cv::RotatedRect*)box), *reinterpret_cast<Scalar*>(&color), *reinterpret_cast<int*>(&thickness), *reinterpret_cast<int*>(&lineType));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_exp_InputArray_src_OutputArray_dst
// parsed: cv::exp
// as:     cv::exp (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_exp_InputArray_src_OutputArray_dst(
        void* src,
        void* dst) {
  try {
  cv::exp(*((cv::Mat*)src), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_extractChannel_InputArray_src_OutputArray_dst_int_coi
// parsed: cv::extractChannel
// as:     cv::extractChannel (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) coi=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_extractChannel_InputArray_src_OutputArray_dst_int_coi(
        void* src,
        void* dst,
        int coi) {
  try {
  cv::extractChannel(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&coi));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_fastAtan2_float_y_float_x
// parsed: cv::fastAtan2
// as:     cv::fastAtan2 (function)
// Arg ARG Primitive(float) y=  Primitive(float) = 
// Arg ARG Primitive(float) x=  Primitive(float) = 
// Return value: Primitive(float)
struct cv_return_value_float cv_core_cv_fastAtan2_float_y_float_x(
        float y,
        float x) {
  try {
  float cpp_return_value = cv::fastAtan2(*reinterpret_cast<float*>(&y), *reinterpret_cast<float*>(&x));
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

// cv_findNonZero_InputArray_src_OutputArray_idx
// parsed: cv::findNonZero
// as:     cv::findNonZero (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) idx=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_findNonZero_InputArray_src_OutputArray_idx(
        void* src,
        void* idx) {
  try {
  cv::findNonZero(*((cv::Mat*)src), *((cv::Mat*)idx));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_flip_InputArray_src_OutputArray_dst_int_flipCode
// parsed: cv::flip
// as:     cv::flip (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flipCode=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_flip_InputArray_src_OutputArray_dst_int_flipCode(
        void* src,
        void* dst,
        int flipCode) {
  try {
  cv::flip(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&flipCode));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_gemm_InputArray_src1_InputArray_src2_double_alpha_InputArray_src3_double_beta_OutputArray_dst_int_flags
// parsed: cv::gemm
// as:     cv::gemm (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) alpha=  Primitive(double) = 
// Arg ARG cv::Mat (boxed) src3=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) beta=  Primitive(double) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_gemm_InputArray_src1_InputArray_src2_double_alpha_InputArray_src3_double_beta_OutputArray_dst_int_flags(
        void* src1,
        void* src2,
        double alpha,
        void* src3,
        double beta,
        void* dst,
        int flags) {
  try {
  cv::gemm(*((cv::Mat*)src1), *((cv::Mat*)src2), *reinterpret_cast<double*>(&alpha), *((cv::Mat*)src3), *reinterpret_cast<double*>(&beta), *((cv::Mat*)dst), *reinterpret_cast<int*>(&flags));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_getBuildInformation
// parsed: cv::getBuildInformation
// as:     cv::getBuildInformation (function)
// Return value: string
struct cv_return_value_char_X cv_core_cv_getBuildInformation(
        ) {
  try {
  string cpp_return_value = cv::getBuildInformation();
  return { NULL, strdup(cpp_return_value.c_str()) };} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_getCPUTickCount
// parsed: cv::getCPUTickCount
// as:     cv::getCPUTickCount (function)
// Return value: Primitive(int64)
struct cv_return_value_int64 cv_core_cv_getCPUTickCount(
        ) {
  try {
  int64 cpp_return_value = cv::getCPUTickCount();
  return { NULL, *reinterpret_cast<int64*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int64 ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int64 ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_getElemSize_int_type
// parsed: cv::getElemSize
// as:     cv::getElemSize (function)
// Arg ARG Primitive(int) type=  Primitive(int) = 
// Return value: Primitive(size_t)
struct cv_return_value_std_size_t cv_core_cv_getElemSize_int_type(
        int type) {
  try {
  size_t cpp_return_value = cv::getElemSize(*reinterpret_cast<int*>(&type));
  return { NULL, *reinterpret_cast<std::size_t*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_std_size_t ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_std_size_t ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_getNumThreads
// parsed: cv::getNumThreads
// as:     cv::getNumThreads (function)
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cv_getNumThreads(
        ) {
  try {
  int cpp_return_value = cv::getNumThreads();
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

// cv_getNumberOfCPUs
// parsed: cv::getNumberOfCPUs
// as:     cv::getNumberOfCPUs (function)
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cv_getNumberOfCPUs(
        ) {
  try {
  int cpp_return_value = cv::getNumberOfCPUs();
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

// cv_getOptimalDFTSize_int_vecsize
// parsed: cv::getOptimalDFTSize
// as:     cv::getOptimalDFTSize (function)
// Arg ARG Primitive(int) vecsize=  Primitive(int) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cv_getOptimalDFTSize_int_vecsize(
        int vecsize) {
  try {
  int cpp_return_value = cv::getOptimalDFTSize(*reinterpret_cast<int*>(&vecsize));
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

// cv_getThreadNum
// parsed: cv::getThreadNum
// as:     cv::getThreadNum (function)
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cv_getThreadNum(
        ) {
  try {
  int cpp_return_value = cv::getThreadNum();
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

// cv_getTickCount
// parsed: cv::getTickCount
// as:     cv::getTickCount (function)
// Return value: Primitive(int64)
struct cv_return_value_int64 cv_core_cv_getTickCount(
        ) {
  try {
  int64 cpp_return_value = cv::getTickCount();
  return { NULL, *reinterpret_cast<int64*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int64 ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int64 ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_getTickFrequency
// parsed: cv::getTickFrequency
// as:     cv::getTickFrequency (function)
// Return value: Primitive(double)
struct cv_return_value_double cv_core_cv_getTickFrequency(
        ) {
  try {
  double cpp_return_value = cv::getTickFrequency();
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

// cv_hconcat_InputArray_src1_InputArray_src2_OutputArray_dst
// parsed: cv::hconcat
// as:     cv::hconcat (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_hconcat_InputArray_src1_InputArray_src2_OutputArray_dst(
        void* src1,
        void* src2,
        void* dst) {
  try {
  cv::hconcat(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_idct_InputArray_src_OutputArray_dst_int_flags
// parsed: cv::idct
// as:     cv::idct (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_idct_InputArray_src_OutputArray_dst_int_flags(
        void* src,
        void* dst,
        int flags) {
  try {
  cv::idct(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&flags));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_idft_InputArray_src_OutputArray_dst_int_flags_int_nonzeroRows
// parsed: cv::idft
// as:     cv::idft (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) =0 
// Arg ARG Primitive(int) nonzeroRows=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_idft_InputArray_src_OutputArray_dst_int_flags_int_nonzeroRows(
        void* src,
        void* dst,
        int flags,
        int nonzeroRows) {
  try {
  cv::idft(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&flags), *reinterpret_cast<int*>(&nonzeroRows));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_inRange_InputArray_src_InputArray_lowerb_InputArray_upperb_OutputArray_dst
// parsed: cv::inRange
// as:     cv::inRange (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) lowerb=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) upperb=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_inRange_InputArray_src_InputArray_lowerb_InputArray_upperb_OutputArray_dst(
        void* src,
        void* lowerb,
        void* upperb,
        void* dst) {
  try {
  cv::inRange(*((cv::Mat*)src), *((cv::Mat*)lowerb), *((cv::Mat*)upperb), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_invert_InputArray_src_OutputArray_dst_int_flags
// parsed: cv::invert
// as:     cv::invert (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) =DECOMP_LU 
// Return value: Primitive(double)
struct cv_return_value_double cv_core_cv_invert_InputArray_src_OutputArray_dst_int_flags(
        void* src,
        void* dst,
        int flags) {
  try {
  double cpp_return_value = cv::invert(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&flags));
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

// cv_line_Mat_img_Point_pt1_Point_pt2_Scalar_color_int_thickness_int_lineType_int_shift
// parsed: cv::line
// as:     cv::line (function)
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Point (struct) pt1=  Point (struct) = 
// Arg ARG Point (struct) pt2=  Point (struct) = 
// Arg ARG Scalar (struct) color=  Scalar (struct) = 
// Arg ARG Primitive(int) thickness=  Primitive(int) =1 
// Arg ARG Primitive(int) lineType=  Primitive(int) =8 
// Arg ARG Primitive(int) shift=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_line_Mat_img_Point_pt1_Point_pt2_Scalar_color_int_thickness_int_lineType_int_shift(
        void* img,
        c_Point pt1,
        c_Point pt2,
        c_Scalar color,
        int thickness,
        int lineType,
        int shift) {
  try {
  cv::line(*((cv::Mat*)img), *reinterpret_cast<Point*>(&pt1), *reinterpret_cast<Point*>(&pt2), *reinterpret_cast<Scalar*>(&color), *reinterpret_cast<int*>(&thickness), *reinterpret_cast<int*>(&lineType), *reinterpret_cast<int*>(&shift));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_log_InputArray_src_OutputArray_dst
// parsed: cv::log
// as:     cv::log (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_log_InputArray_src_OutputArray_dst(
        void* src,
        void* dst) {
  try {
  cv::log(*((cv::Mat*)src), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_magnitude_InputArray_x_InputArray_y_OutputArray_magnitude
// parsed: cv::magnitude
// as:     cv::magnitude (function)
// Arg ARG cv::Mat (boxed) x=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) y=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) magnitude=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_magnitude_InputArray_x_InputArray_y_OutputArray_magnitude(
        void* x,
        void* y,
        void* magnitude) {
  try {
  cv::magnitude(*((cv::Mat*)x), *((cv::Mat*)y), *((cv::Mat*)magnitude));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_max_InputArray_src1_InputArray_src2_OutputArray_dst
// parsed: cv::max
// as:     cv::max (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_max_InputArray_src1_InputArray_src2_OutputArray_dst(
        void* src1,
        void* src2,
        void* dst) {
  try {
  cv::max(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_max_Mat_src1_Mat_src2_Mat_dst
// parsed: cv::max
// as:     cv::max (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_max_Mat_src1_Mat_src2_Mat_dst(
        void* src1,
        void* src2,
        void* dst) {
  try {
  cv::max(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_max_Mat_src1_double_src2_Mat_dst
// parsed: cv::max
// as:     cv::max (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) src2=  Primitive(double) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_max_Mat_src1_double_src2_Mat_dst(
        void* src1,
        double src2,
        void* dst) {
  try {
  cv::max(*((cv::Mat*)src1), *reinterpret_cast<double*>(&src2), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_meanStdDev_InputArray_src_OutputArray_mean_OutputArray_stddev_InputArray_mask
// parsed: cv::meanStdDev
// as:     cv::meanStdDev (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mean=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) stddev=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_meanStdDev_InputArray_src_OutputArray_mean_OutputArray_stddev_InputArray_mask(
        void* src,
        void* mean,
        void* stddev,
        void* mask) {
  try {
  cv::meanStdDev(*((cv::Mat*)src), *((cv::Mat*)mean), *((cv::Mat*)stddev), *((cv::Mat*)mask));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_mean_InputArray_src_InputArray_mask
// parsed: cv::mean
// as:     cv::mean (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Return value: Scalar (struct)
struct cv_return_value_c_Scalar cv_core_cv_mean_InputArray_src_InputArray_mask(
        void* src,
        void* mask) {
  try {
  Scalar cpp_return_value = cv::mean(*((cv::Mat*)src), *((cv::Mat*)mask));
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

// cv_merge_VectorOfMat_mv_OutputArray_dst
// parsed: cv::merge
// as:     cv::merge (function)
// Arg ARG Vector[cv::Mat (boxed)] mv=  Vector[cv::Mat (boxed)] = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_merge_VectorOfMat_mv_OutputArray_dst(
        void* mv,
        void* dst) {
  try {
  cv::merge(*((vector<cv::Mat >*)mv), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_min_InputArray_src1_InputArray_src2_OutputArray_dst
// parsed: cv::min
// as:     cv::min (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_min_InputArray_src1_InputArray_src2_OutputArray_dst(
        void* src1,
        void* src2,
        void* dst) {
  try {
  cv::min(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_min_Mat_src1_Mat_src2_Mat_dst
// parsed: cv::min
// as:     cv::min (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_min_Mat_src1_Mat_src2_Mat_dst(
        void* src1,
        void* src2,
        void* dst) {
  try {
  cv::min(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_min_Mat_src1_double_src2_Mat_dst
// parsed: cv::min
// as:     cv::min (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) src2=  Primitive(double) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_min_Mat_src1_double_src2_Mat_dst(
        void* src1,
        double src2,
        void* dst) {
  try {
  cv::min(*((cv::Mat*)src1), *reinterpret_cast<double*>(&src2), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_mulSpectrums_InputArray_a_InputArray_b_OutputArray_c_int_flags_bool_conjB
// parsed: cv::mulSpectrums
// as:     cv::mulSpectrums (function)
// Arg ARG cv::Mat (boxed) a=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) b=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) c=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) = 
// Arg ARG Primitive(bool) conjB=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_mulSpectrums_InputArray_a_InputArray_b_OutputArray_c_int_flags_bool_conjB(
        void* a,
        void* b,
        void* c,
        int flags,
        char conjB) {
  try {
  cv::mulSpectrums(*((cv::Mat*)a), *((cv::Mat*)b), *((cv::Mat*)c), *reinterpret_cast<int*>(&flags), *reinterpret_cast<bool*>(&conjB));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_mulTransposed_InputArray_src_OutputArray_dst_bool_aTa_InputArray_delta_double_scale_int_dtype
// parsed: cv::mulTransposed
// as:     cv::mulTransposed (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(bool) aTa=  Primitive(bool) = 
// Arg ARG cv::Mat (boxed) delta=  cv::Mat (boxed) =noArray() 
// Arg ARG Primitive(double) scale=  Primitive(double) =1 
// Arg ARG Primitive(int) dtype=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_mulTransposed_InputArray_src_OutputArray_dst_bool_aTa_InputArray_delta_double_scale_int_dtype(
        void* src,
        void* dst,
        char aTa,
        void* delta,
        double scale,
        int dtype) {
  try {
  cv::mulTransposed(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<bool*>(&aTa), *((cv::Mat*)delta), *reinterpret_cast<double*>(&scale), *reinterpret_cast<int*>(&dtype));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_multiply_InputArray_src1_InputArray_src2_OutputArray_dst_double_scale_int_dtype
// parsed: cv::multiply
// as:     cv::multiply (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) scale=  Primitive(double) =1 
// Arg ARG Primitive(int) dtype=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_multiply_InputArray_src1_InputArray_src2_OutputArray_dst_double_scale_int_dtype(
        void* src1,
        void* src2,
        void* dst,
        double scale,
        int dtype) {
  try {
  cv::multiply(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst), *reinterpret_cast<double*>(&scale), *reinterpret_cast<int*>(&dtype));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_norm_InputArray_src1_InputArray_src2_int_normType_InputArray_mask
// parsed: cv::norm
// as:     cv::norm (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) normType=  Primitive(int) =NORM_L2 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(double)
struct cv_return_value_double cv_core_cv_norm_InputArray_src1_InputArray_src2_int_normType_InputArray_mask(
        void* src1,
        void* src2,
        int normType,
        void* mask) {
  try {
  double cpp_return_value = cv::norm(*((cv::Mat*)src1), *((cv::Mat*)src2), *reinterpret_cast<int*>(&normType), *((cv::Mat*)mask));
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

// cv_norm_InputArray_src1_int_normType_InputArray_mask
// parsed: cv::norm
// as:     cv::norm (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) normType=  Primitive(int) =NORM_L2 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(double)
struct cv_return_value_double cv_core_cv_norm_InputArray_src1_int_normType_InputArray_mask(
        void* src1,
        int normType,
        void* mask) {
  try {
  double cpp_return_value = cv::norm(*((cv::Mat*)src1), *reinterpret_cast<int*>(&normType), *((cv::Mat*)mask));
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

// cv_normalize_InputArray_src_OutputArray_dst_double_alpha_double_beta_int_norm_type_int_dtype_InputArray_mask
// parsed: cv::normalize
// as:     cv::normalize (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) alpha=  Primitive(double) =1 
// Arg ARG Primitive(double) beta=  Primitive(double) =0 
// Arg ARG Primitive(int) norm_type=  Primitive(int) =NORM_L2 
// Arg ARG Primitive(int) dtype=  Primitive(int) =-1 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_normalize_InputArray_src_OutputArray_dst_double_alpha_double_beta_int_norm_type_int_dtype_InputArray_mask(
        void* src,
        void* dst,
        double alpha,
        double beta,
        int norm_type,
        int dtype,
        void* mask) {
  try {
  cv::normalize(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<double*>(&alpha), *reinterpret_cast<double*>(&beta), *reinterpret_cast<int*>(&norm_type), *reinterpret_cast<int*>(&dtype), *((cv::Mat*)mask));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_parallel_for__Range_range_ParallelLoopBody_body_double_nstripes
// parsed: cv::parallel_for_
// as:     cv::parallel_for_ (function)
// Arg ARG cv::Range (boxed) range=  cv::Range (boxed) = 
// Arg ARG cv::ParallelLoopBody (boxed) body=  cv::ParallelLoopBody (boxed) = 
// Arg ARG Primitive(double) nstripes=  Primitive(double) =-1. 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_parallel_for__Range_range_ParallelLoopBody_body_double_nstripes(
        void* range,
        void* body,
        double nstripes) {
  try {
  cv::parallel_for_(*((cv::Range*)range), *((cv::ParallelLoopBody*)body), *reinterpret_cast<double*>(&nstripes));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_perspectiveTransform_InputArray_src_OutputArray_dst_InputArray_m
// parsed: cv::perspectiveTransform
// as:     cv::perspectiveTransform (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_perspectiveTransform_InputArray_src_OutputArray_dst_InputArray_m(
        void* src,
        void* dst,
        void* m) {
  try {
  cv::perspectiveTransform(*((cv::Mat*)src), *((cv::Mat*)dst), *((cv::Mat*)m));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_phase_InputArray_x_InputArray_y_OutputArray_angle_bool_angleInDegrees
// parsed: cv::phase
// as:     cv::phase (function)
// Arg ARG cv::Mat (boxed) x=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) y=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) angle=  cv::Mat (boxed) = 
// Arg ARG Primitive(bool) angleInDegrees=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_phase_InputArray_x_InputArray_y_OutputArray_angle_bool_angleInDegrees(
        void* x,
        void* y,
        void* angle,
        char angleInDegrees) {
  try {
  cv::phase(*((cv::Mat*)x), *((cv::Mat*)y), *((cv::Mat*)angle), *reinterpret_cast<bool*>(&angleInDegrees));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_polarToCart_InputArray_magnitude_InputArray_angle_OutputArray_x_OutputArray_y_bool_angleInDegrees
// parsed: cv::polarToCart
// as:     cv::polarToCart (function)
// Arg ARG cv::Mat (boxed) magnitude=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) angle=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) x=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) y=  cv::Mat (boxed) = 
// Arg ARG Primitive(bool) angleInDegrees=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_polarToCart_InputArray_magnitude_InputArray_angle_OutputArray_x_OutputArray_y_bool_angleInDegrees(
        void* magnitude,
        void* angle,
        void* x,
        void* y,
        char angleInDegrees) {
  try {
  cv::polarToCart(*((cv::Mat*)magnitude), *((cv::Mat*)angle), *((cv::Mat*)x), *((cv::Mat*)y), *reinterpret_cast<bool*>(&angleInDegrees));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_pow_InputArray_src_double_power_OutputArray_dst
// parsed: cv::pow
// as:     cv::pow (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) power=  Primitive(double) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_pow_InputArray_src_double_power_OutputArray_dst(
        void* src,
        double power,
        void* dst) {
  try {
  cv::pow(*((cv::Mat*)src), *reinterpret_cast<double*>(&power), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_putText_Mat_img_String_text_Point_org_int_fontFace_double_fontScale_Scalar_color_int_thickness_int_lineType_bool_bottomLeftOrigin
// parsed: cv::putText
// as:     cv::putText (function)
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG string text=  string = 
// Arg ARG Point (struct) org=  Point (struct) = 
// Arg ARG Primitive(int) fontFace=  Primitive(int) = 
// Arg ARG Primitive(double) fontScale=  Primitive(double) = 
// Arg ARG Scalar (struct) color=  Scalar (struct) = 
// Arg ARG Primitive(int) thickness=  Primitive(int) =1 
// Arg ARG Primitive(int) lineType=  Primitive(int) =8 
// Arg ARG Primitive(bool) bottomLeftOrigin=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_putText_Mat_img_String_text_Point_org_int_fontFace_double_fontScale_Scalar_color_int_thickness_int_lineType_bool_bottomLeftOrigin(
        void* img,
        const char *text,
        c_Point org,
        int fontFace,
        double fontScale,
        c_Scalar color,
        int thickness,
        int lineType,
        char bottomLeftOrigin) {
  try {
  cv::putText(*((cv::Mat*)img), text, *reinterpret_cast<Point*>(&org), *reinterpret_cast<int*>(&fontFace), *reinterpret_cast<double*>(&fontScale), *reinterpret_cast<Scalar*>(&color), *reinterpret_cast<int*>(&thickness), *reinterpret_cast<int*>(&lineType), *reinterpret_cast<bool*>(&bottomLeftOrigin));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_rectangle_Mat_img_Point_pt1_Point_pt2_Scalar_color_int_thickness_int_lineType_int_shift
// parsed: cv::rectangle
// as:     cv::rectangle (function)
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Point (struct) pt1=  Point (struct) = 
// Arg ARG Point (struct) pt2=  Point (struct) = 
// Arg ARG Scalar (struct) color=  Scalar (struct) = 
// Arg ARG Primitive(int) thickness=  Primitive(int) =1 
// Arg ARG Primitive(int) lineType=  Primitive(int) =8 
// Arg ARG Primitive(int) shift=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_rectangle_Mat_img_Point_pt1_Point_pt2_Scalar_color_int_thickness_int_lineType_int_shift(
        void* img,
        c_Point pt1,
        c_Point pt2,
        c_Scalar color,
        int thickness,
        int lineType,
        int shift) {
  try {
  cv::rectangle(*((cv::Mat*)img), *reinterpret_cast<Point*>(&pt1), *reinterpret_cast<Point*>(&pt2), *reinterpret_cast<Scalar*>(&color), *reinterpret_cast<int*>(&thickness), *reinterpret_cast<int*>(&lineType), *reinterpret_cast<int*>(&shift));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_rectangle_Mat_img_Rect_rec_Scalar_color_int_thickness_int_lineType_int_shift
// parsed: cv::rectangle
// as:     cv::rectangle (function)
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Rect (struct) rec=  Rect (struct) = 
// Arg ARG Scalar (struct) color=  Scalar (struct) = 
// Arg ARG Primitive(int) thickness=  Primitive(int) =1 
// Arg ARG Primitive(int) lineType=  Primitive(int) =8 
// Arg ARG Primitive(int) shift=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_rectangle_Mat_img_Rect_rec_Scalar_color_int_thickness_int_lineType_int_shift(
        void* img,
        c_Rect rec,
        c_Scalar color,
        int thickness,
        int lineType,
        int shift) {
  try {
  cv::rectangle(*((cv::Mat*)img), *reinterpret_cast<Rect*>(&rec), *reinterpret_cast<Scalar*>(&color), *reinterpret_cast<int*>(&thickness), *reinterpret_cast<int*>(&lineType), *reinterpret_cast<int*>(&shift));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_reduce_InputArray_src_OutputArray_dst_int_dim_int_rtype_int_dtype
// parsed: cv::reduce
// as:     cv::reduce (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) dim=  Primitive(int) = 
// Arg ARG Primitive(int) rtype=  Primitive(int) = 
// Arg ARG Primitive(int) dtype=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_reduce_InputArray_src_OutputArray_dst_int_dim_int_rtype_int_dtype(
        void* src,
        void* dst,
        int dim,
        int rtype,
        int dtype) {
  try {
  cv::reduce(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&dim), *reinterpret_cast<int*>(&rtype), *reinterpret_cast<int*>(&dtype));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_repeat_InputArray_src_int_ny_int_nx_OutputArray_dst
// parsed: cv::repeat
// as:     cv::repeat (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) ny=  Primitive(int) = 
// Arg ARG Primitive(int) nx=  Primitive(int) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_repeat_InputArray_src_int_ny_int_nx_OutputArray_dst(
        void* src,
        int ny,
        int nx,
        void* dst) {
  try {
  cv::repeat(*((cv::Mat*)src), *reinterpret_cast<int*>(&ny), *reinterpret_cast<int*>(&nx), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_repeat_Mat_src_int_ny_int_nx
// parsed: cv::repeat
// as:     cv::repeat (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) ny=  Primitive(int) = 
// Arg ARG Primitive(int) nx=  Primitive(int) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_repeat_Mat_src_int_ny_int_nx(
        void* src,
        int ny,
        int nx) {
  try {
  cv::Mat cpp_return_value = cv::repeat(*((cv::Mat*)src), *reinterpret_cast<int*>(&ny), *reinterpret_cast<int*>(&nx));
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

// cv_scaleAdd_InputArray_src1_double_alpha_InputArray_src2_OutputArray_dst
// parsed: cv::scaleAdd
// as:     cv::scaleAdd (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) alpha=  Primitive(double) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_scaleAdd_InputArray_src1_double_alpha_InputArray_src2_OutputArray_dst(
        void* src1,
        double alpha,
        void* src2,
        void* dst) {
  try {
  cv::scaleAdd(*((cv::Mat*)src1), *reinterpret_cast<double*>(&alpha), *((cv::Mat*)src2), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_setBreakOnError_bool_flag
// parsed: cv::setBreakOnError
// as:     cv::setBreakOnError (function)
// Arg ARG Primitive(bool) flag=  Primitive(bool) = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_core_cv_setBreakOnError_bool_flag(
        char flag) {
  try {
  bool cpp_return_value = cv::setBreakOnError(*reinterpret_cast<bool*>(&flag));
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

// cv_setNumThreads_int_nthreads
// parsed: cv::setNumThreads
// as:     cv::setNumThreads (function)
// Arg ARG Primitive(int) nthreads=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_setNumThreads_int_nthreads(
        int nthreads) {
  try {
  cv::setNumThreads(*reinterpret_cast<int*>(&nthreads));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_setRNGSeed_int_seed
// parsed: cv::setRNGSeed
// as:     cv::setRNGSeed (function)
// Arg ARG Primitive(int) seed=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_setRNGSeed_int_seed(
        int seed) {
  try {
  cv::setRNGSeed(*reinterpret_cast<int*>(&seed));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_setUseOptimized_bool_onoff
// parsed: cv::setUseOptimized
// as:     cv::setUseOptimized (function)
// Arg ARG Primitive(bool) onoff=  Primitive(bool) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_setUseOptimized_bool_onoff(
        char onoff) {
  try {
  cv::setUseOptimized(*reinterpret_cast<bool*>(&onoff));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_solveCubic_InputArray_coeffs_OutputArray_roots
// parsed: cv::solveCubic
// as:     cv::solveCubic (function)
// Arg ARG cv::Mat (boxed) coeffs=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) roots=  cv::Mat (boxed) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cv_solveCubic_InputArray_coeffs_OutputArray_roots(
        void* coeffs,
        void* roots) {
  try {
  int cpp_return_value = cv::solveCubic(*((cv::Mat*)coeffs), *((cv::Mat*)roots));
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

// cv_solvePoly_InputArray_coeffs_OutputArray_roots_int_maxIters
// parsed: cv::solvePoly
// as:     cv::solvePoly (function)
// Arg ARG cv::Mat (boxed) coeffs=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) roots=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) maxIters=  Primitive(int) =300 
// Return value: Primitive(double)
struct cv_return_value_double cv_core_cv_solvePoly_InputArray_coeffs_OutputArray_roots_int_maxIters(
        void* coeffs,
        void* roots,
        int maxIters) {
  try {
  double cpp_return_value = cv::solvePoly(*((cv::Mat*)coeffs), *((cv::Mat*)roots), *reinterpret_cast<int*>(&maxIters));
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

// cv_solve_InputArray_src1_InputArray_src2_OutputArray_dst_int_flags
// parsed: cv::solve
// as:     cv::solve (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) =DECOMP_LU 
// Return value: Primitive(bool)
struct cv_return_value_char cv_core_cv_solve_InputArray_src1_InputArray_src2_OutputArray_dst_int_flags(
        void* src1,
        void* src2,
        void* dst,
        int flags) {
  try {
  bool cpp_return_value = cv::solve(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst), *reinterpret_cast<int*>(&flags));
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

// cv_sortIdx_InputArray_src_OutputArray_dst_int_flags
// parsed: cv::sortIdx
// as:     cv::sortIdx (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_sortIdx_InputArray_src_OutputArray_dst_int_flags(
        void* src,
        void* dst,
        int flags) {
  try {
  cv::sortIdx(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&flags));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_sort_InputArray_src_OutputArray_dst_int_flags
// parsed: cv::sort
// as:     cv::sort (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_sort_InputArray_src_OutputArray_dst_int_flags(
        void* src,
        void* dst,
        int flags) {
  try {
  cv::sort(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<int*>(&flags));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_split_Mat_m_VectorOfMat_mv
// parsed: cv::split
// as:     cv::split (function)
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::Mat (boxed)] mv=  Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_split_Mat_m_VectorOfMat_mv(
        void* m,
        void* mv) {
  try {
  cv::split(*((cv::Mat*)m), *((vector<cv::Mat >*)mv));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_split_Mat_src_Mat_mvbegin
// parsed: cv::split
// as:     cv::split (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) * mvbegin= (ptr) cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_split_Mat_src_Mat_mvbegin(
        void* src,
        void* mvbegin) {
  try {
  cv::split(*((cv::Mat*)src), ((cv::Mat*)mvbegin));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_sqrt_InputArray_src_OutputArray_dst
// parsed: cv::sqrt
// as:     cv::sqrt (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_sqrt_InputArray_src_OutputArray_dst(
        void* src,
        void* dst) {
  try {
  cv::sqrt(*((cv::Mat*)src), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_subtract_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask_int_dtype
// parsed: cv::subtract
// as:     cv::subtract (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Arg ARG Primitive(int) dtype=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_subtract_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask_int_dtype(
        void* src1,
        void* src2,
        void* dst,
        void* mask,
        int dtype) {
  try {
  cv::subtract(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst), *((cv::Mat*)mask), *reinterpret_cast<int*>(&dtype));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_sum_InputArray_src
// parsed: cv::sum
// as:     cv::sum (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Return value: Scalar (struct)
struct cv_return_value_c_Scalar cv_core_cv_sum_InputArray_src(
        void* src) {
  try {
  Scalar cpp_return_value = cv::sum(*((cv::Mat*)src));
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

// cv_swap_Mat_a_Mat_b
// parsed: cv::swap
// as:     cv::swap (function)
// Arg ARG cv::Mat (boxed) a=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) b=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_swap_Mat_a_Mat_b(
        void* a,
        void* b) {
  try {
  cv::swap(*((cv::Mat*)a), *((cv::Mat*)b));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_trace_InputArray_mtx
// parsed: cv::trace
// as:     cv::trace (function)
// Arg ARG cv::Mat (boxed) mtx=  cv::Mat (boxed) = 
// Return value: Scalar (struct)
struct cv_return_value_c_Scalar cv_core_cv_trace_InputArray_mtx(
        void* mtx) {
  try {
  Scalar cpp_return_value = cv::trace(*((cv::Mat*)mtx));
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

// cv_transform_InputArray_src_OutputArray_dst_InputArray_m
// parsed: cv::transform
// as:     cv::transform (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_transform_InputArray_src_OutputArray_dst_InputArray_m(
        void* src,
        void* dst,
        void* m) {
  try {
  cv::transform(*((cv::Mat*)src), *((cv::Mat*)dst), *((cv::Mat*)m));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_transpose_InputArray_src_OutputArray_dst
// parsed: cv::transpose
// as:     cv::transpose (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_transpose_InputArray_src_OutputArray_dst(
        void* src,
        void* dst) {
  try {
  cv::transpose(*((cv::Mat*)src), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_useOptimized
// parsed: cv::useOptimized
// as:     cv::useOptimized (function)
// Return value: Primitive(bool)
struct cv_return_value_char cv_core_cv_useOptimized(
        ) {
  try {
  bool cpp_return_value = cv::useOptimized();
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

// cv_vconcat_InputArray_src1_InputArray_src2_OutputArray_dst
// parsed: cv::vconcat
// as:     cv::vconcat (function)
// Arg ARG cv::Mat (boxed) src1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_vconcat_InputArray_src1_InputArray_src2_OutputArray_dst(
        void* src1,
        void* src2,
        void* dst) {
  try {
  cv::vconcat(*((cv::Mat*)src1), *((cv::Mat*)src2), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Algorithm_name
// parsed: cv::Algorithm::name
// as:     cv::Algorithm::name (method) cv::Algorithm . name
// Return value: string
struct cv_return_value_char_X cv_core_cv_Algorithm_name(
        void* instance) {
  try {
  string cpp_return_value = ((cv::Algorithm*) instance)->name();
  return { NULL, strdup(cpp_return_value.c_str()) };} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Algorithm_getInt_String_name
// parsed: cv::Algorithm::getInt
// as:     cv::Algorithm::getInt (method) cv::Algorithm . getInt
// Arg ARG string name=  string = 
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cv_Algorithm_getInt_String_name(
        void* instance,
        const char *name) {
  try {
  int cpp_return_value = ((cv::Algorithm*) instance)->getInt(name);
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

// cv_Algorithm_getDouble_String_name
// parsed: cv::Algorithm::getDouble
// as:     cv::Algorithm::getDouble (method) cv::Algorithm . getDouble
// Arg ARG string name=  string = 
// Return value: Primitive(double)
struct cv_return_value_double cv_core_cv_Algorithm_getDouble_String_name(
        void* instance,
        const char *name) {
  try {
  double cpp_return_value = ((cv::Algorithm*) instance)->getDouble(name);
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

// cv_Algorithm_getBool_String_name
// parsed: cv::Algorithm::getBool
// as:     cv::Algorithm::getBool (method) cv::Algorithm . getBool
// Arg ARG string name=  string = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_core_cv_Algorithm_getBool_String_name(
        void* instance,
        const char *name) {
  try {
  bool cpp_return_value = ((cv::Algorithm*) instance)->getBool(name);
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

// cv_Algorithm_getString_String_name
// parsed: cv::Algorithm::getString
// as:     cv::Algorithm::getString (method) cv::Algorithm . getString
// Arg ARG string name=  string = 
// Return value: string
struct cv_return_value_char_X cv_core_cv_Algorithm_getString_String_name(
        void* instance,
        const char *name) {
  try {
  string cpp_return_value = ((cv::Algorithm*) instance)->getString(name);
  return { NULL, strdup(cpp_return_value.c_str()) };} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Algorithm_getMat_String_name
// parsed: cv::Algorithm::getMat
// as:     cv::Algorithm::getMat (method) cv::Algorithm . getMat
// Arg ARG string name=  string = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Algorithm_getMat_String_name(
        void* instance,
        const char *name) {
  try {
  cv::Mat cpp_return_value = ((cv::Algorithm*) instance)->getMat(name);
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

// cv_Algorithm_getMatVector_String_name
// parsed: cv::Algorithm::getMatVector
// as:     cv::Algorithm::getMatVector (method) cv::Algorithm . getMatVector
// Arg ARG string name=  string = 
// Return value: Vector[cv::Mat (boxed)]
struct cv_return_value_void_X cv_core_cv_Algorithm_getMatVector_String_name(
        void* instance,
        const char *name) {
  try {
  vector<cv::Mat > cpp_return_value = ((cv::Algorithm*) instance)->getMatVector(name);
  return { NULL, (void*) new vector<cv::Mat >(cpp_return_value) };
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

// cv_Algorithm_set_String_name_int_value
// parsed: cv::Algorithm::set
// as:     cv::Algorithm::set (method) cv::Algorithm . set
// Arg ARG string name=  string = 
// Arg ARG Primitive(int) value=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Algorithm_set_String_name_int_value(
        void* instance,
        const char *name,
        int value) {
  try {
  ((cv::Algorithm*) instance)->set(name, *reinterpret_cast<int*>(&value));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Algorithm_set_String_name_double_value
// parsed: cv::Algorithm::set
// as:     cv::Algorithm::set (method) cv::Algorithm . set
// Arg ARG string name=  string = 
// Arg ARG Primitive(double) value=  Primitive(double) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Algorithm_set_String_name_double_value(
        void* instance,
        const char *name,
        double value) {
  try {
  ((cv::Algorithm*) instance)->set(name, *reinterpret_cast<double*>(&value));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Algorithm_set_String_name_bool_value
// parsed: cv::Algorithm::set
// as:     cv::Algorithm::set (method) cv::Algorithm . set
// Arg ARG string name=  string = 
// Arg ARG Primitive(bool) value=  Primitive(bool) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Algorithm_set_String_name_bool_value(
        void* instance,
        const char *name,
        char value) {
  try {
  ((cv::Algorithm*) instance)->set(name, *reinterpret_cast<bool*>(&value));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Algorithm_set_String_name_String_value
// parsed: cv::Algorithm::set
// as:     cv::Algorithm::set (method) cv::Algorithm . set
// Arg ARG string name=  string = 
// Arg ARG string value=  string = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Algorithm_set_String_name_String_value(
        void* instance,
        const char *name,
        const char *value) {
  try {
  ((cv::Algorithm*) instance)->set(name, value);
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Algorithm_set_String_name_Mat_value
// parsed: cv::Algorithm::set
// as:     cv::Algorithm::set (method) cv::Algorithm . set
// Arg ARG string name=  string = 
// Arg ARG cv::Mat (boxed) value=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Algorithm_set_String_name_Mat_value(
        void* instance,
        const char *name,
        void* value) {
  try {
  ((cv::Algorithm*) instance)->set(name, *((cv::Mat*)value));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Algorithm_set_String_name_VectorOfMat_value
// parsed: cv::Algorithm::set
// as:     cv::Algorithm::set (method) cv::Algorithm . set
// Arg ARG string name=  string = 
// Arg ARG Vector[cv::Mat (boxed)] value=  Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Algorithm_set_String_name_VectorOfMat_value(
        void* instance,
        const char *name,
        void* value) {
  try {
  ((cv::Algorithm*) instance)->set(name, *((vector<cv::Mat >*)value));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Algorithm_paramHelp_String_name
// parsed: cv::Algorithm::paramHelp
// as:     cv::Algorithm::paramHelp (method) cv::Algorithm . paramHelp
// Arg ARG string name=  string = 
// Return value: string
struct cv_return_value_char_X cv_core_cv_Algorithm_paramHelp_String_name(
        void* instance,
        const char *name) {
  try {
  string cpp_return_value = ((cv::Algorithm*) instance)->paramHelp(name);
  return { NULL, strdup(cpp_return_value.c_str()) };} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Algorithm_paramType_String_name
// parsed: cv::Algorithm::paramType
// as:     cv::Algorithm::paramType (method) cv::Algorithm . paramType
// Arg ARG string name=  string = 
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cv_Algorithm_paramType_String_name(
        void* instance,
        const char *name) {
  try {
  int cpp_return_value = ((cv::Algorithm*) instance)->paramType(name);
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

// cv_Algorithm_getParams_VectorOfString_names
// parsed: cv::Algorithm::getParams
// as:     cv::Algorithm::getParams (method) cv::Algorithm . getParams
// Arg ARG Vector[string] names=  Vector[string] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Algorithm_getParams_VectorOfString_names(
        void* instance,
        void* names) {
  try {
  ((cv::Algorithm*) instance)->getParams(*((vector<string >*)names));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Algorithm_getList_VectorOfString_algorithms
// parsed: cv::Algorithm::getList
// as:     cv::Algorithm::getList (method) cv::Algorithm . getList
// Arg ARG Vector[string] algorithms=  Vector[string] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Algorithm_getList_VectorOfString_algorithms(
        void* instance,
        void* algorithms) {
  try {
  ((cv::Algorithm*) instance)->getList(*((vector<string >*)algorithms));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}


// boxed class: cv::AutoLock
void cv_delete_AutoLock(void* instance) {
    delete (cv::AutoLock*) instance;
}

// boxed class: cv::LineIterator
void cv_delete_LineIterator(void* instance) {
    delete (cv::LineIterator*) instance;
}
// cv_LineIterator_LineIterator_Mat_img_Point_pt1_Point_pt2_int_connectivity_bool_leftToRight
// parsed: cv::LineIterator::LineIterator
// as:     cv::LineIterator::LineIterator (constructor) cv::LineIterator . new
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Point (struct) pt1=  Point (struct) = 
// Arg ARG Point (struct) pt2=  Point (struct) = 
// Arg ARG Primitive(int) connectivity=  Primitive(int) =8 
// Arg ARG Primitive(bool) leftToRight=  Primitive(bool) =false 
// Return value: cv::LineIterator (boxed)
struct cv_return_value_void_X cv_core_cv_LineIterator_LineIterator_Mat_img_Point_pt1_Point_pt2_int_connectivity_bool_leftToRight(
        void* img,
        c_Point pt1,
        c_Point pt2,
        int connectivity,
        char leftToRight) {
  try {
  cv::LineIterator* cpp_return_value = new cv::LineIterator(*((cv::Mat*)img), *reinterpret_cast<Point*>(&pt1), *reinterpret_cast<Point*>(&pt2), *reinterpret_cast<int*>(&connectivity), *reinterpret_cast<bool*>(&leftToRight));
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

// cv_LineIterator_pos
// parsed: cv::LineIterator::pos
// as:     cv::LineIterator::pos (method) cv::LineIterator . pos
// Return value: Point (struct)
struct cv_return_value_c_Point cv_core_cv_LineIterator_pos(
        void* instance) {
  try {
  Point cpp_return_value = ((cv::LineIterator*) instance)->pos();
  return { NULL, *reinterpret_cast<c_Point*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_Point ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_Point ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}


// boxed class: cv::Mat
void cv_delete_Mat(void* instance) {
    delete (cv::Mat*) instance;
}
// cv_Mat_Mat
// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_Mat(
        ) {
  try {
  cv::Mat* cpp_return_value = new cv::Mat();
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

// cv_Mat_Mat_int_rows_int_cols_int_type
// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG Primitive(int) rows=  Primitive(int) = 
// Arg ARG Primitive(int) cols=  Primitive(int) = 
// Arg ARG Primitive(int) type=  Primitive(int) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_Mat_int_rows_int_cols_int_type(
        int rows,
        int cols,
        int type) {
  try {
  cv::Mat* cpp_return_value = new cv::Mat(*reinterpret_cast<int*>(&rows), *reinterpret_cast<int*>(&cols), *reinterpret_cast<int*>(&type));
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

// cv_Mat_Mat_Size_size_int_type
// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG Size (struct) size=  Size (struct) = 
// Arg ARG Primitive(int) type=  Primitive(int) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_Mat_Size_size_int_type(
        c_Size size,
        int type) {
  try {
  cv::Mat* cpp_return_value = new cv::Mat(*reinterpret_cast<Size*>(&size), *reinterpret_cast<int*>(&type));
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

// cv_Mat_Mat_int_rows_int_cols_int_type_Scalar_s
// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG Primitive(int) rows=  Primitive(int) = 
// Arg ARG Primitive(int) cols=  Primitive(int) = 
// Arg ARG Primitive(int) type=  Primitive(int) = 
// Arg ARG Scalar (struct) s=  Scalar (struct) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_Mat_int_rows_int_cols_int_type_Scalar_s(
        int rows,
        int cols,
        int type,
        c_Scalar s) {
  try {
  cv::Mat* cpp_return_value = new cv::Mat(*reinterpret_cast<int*>(&rows), *reinterpret_cast<int*>(&cols), *reinterpret_cast<int*>(&type), *reinterpret_cast<Scalar*>(&s));
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

// cv_Mat_Mat_Size_size_int_type_Scalar_s
// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG Size (struct) size=  Size (struct) = 
// Arg ARG Primitive(int) type=  Primitive(int) = 
// Arg ARG Scalar (struct) s=  Scalar (struct) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_Mat_Size_size_int_type_Scalar_s(
        c_Size size,
        int type,
        c_Scalar s) {
  try {
  cv::Mat* cpp_return_value = new cv::Mat(*reinterpret_cast<Size*>(&size), *reinterpret_cast<int*>(&type), *reinterpret_cast<Scalar*>(&s));
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

// cv_Mat_Mat_Mat_m
// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_Mat_Mat_m(
        void* m) {
  try {
  cv::Mat* cpp_return_value = new cv::Mat(*((cv::Mat*)m));
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

// cv_Mat_Mat_Mat_m_Range_rowRange_Range_colRange
// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Arg ARG cv::Range (boxed) rowRange=  cv::Range (boxed) = 
// Arg ARG cv::Range (boxed) colRange=  cv::Range (boxed) =Range::all() 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_Mat_Mat_m_Range_rowRange_Range_colRange(
        void* m,
        void* rowRange,
        void* colRange) {
  try {
  cv::Mat* cpp_return_value = new cv::Mat(*((cv::Mat*)m), *((cv::Range*)rowRange), *((cv::Range*)colRange));
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

// cv_Mat_Mat_Mat_m_Rect_roi
// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Arg ARG Rect (struct) roi=  Rect (struct) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_Mat_Mat_m_Rect_roi(
        void* m,
        c_Rect roi) {
  try {
  cv::Mat* cpp_return_value = new cv::Mat(*((cv::Mat*)m), *reinterpret_cast<Rect*>(&roi));
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

// cv_Mat_Mat_Mat_m_Range_ranges
// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Arg ARG cv::Range (boxed) * ranges= (ptr) cv::Range (boxed) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_Mat_Mat_m_Range_ranges(
        void* m,
        void* ranges) {
  try {
  cv::Mat* cpp_return_value = new cv::Mat(*((cv::Mat*)m), ((cv::Range*)ranges));
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

// cv_Mat_row_int_y
// parsed: cv::Mat::row
// as:     cv::Mat::row (method) cv::Mat . row
// Arg ARG Primitive(int) y=  Primitive(int) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_row_int_y(
        void* instance,
        int y) {
  try {
  cv::Mat cpp_return_value = ((cv::Mat*) instance)->row(*reinterpret_cast<int*>(&y));
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

// cv_Mat_col_int_x
// parsed: cv::Mat::col
// as:     cv::Mat::col (method) cv::Mat . col
// Arg ARG Primitive(int) x=  Primitive(int) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_col_int_x(
        void* instance,
        int x) {
  try {
  cv::Mat cpp_return_value = ((cv::Mat*) instance)->col(*reinterpret_cast<int*>(&x));
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

// cv_Mat_rowRange_int_startrow_int_endrow
// parsed: cv::Mat::rowRange
// as:     cv::Mat::rowRange (method) cv::Mat . rowRange
// Arg ARG Primitive(int) startrow=  Primitive(int) = 
// Arg ARG Primitive(int) endrow=  Primitive(int) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_rowRange_int_startrow_int_endrow(
        void* instance,
        int startrow,
        int endrow) {
  try {
  cv::Mat cpp_return_value = ((cv::Mat*) instance)->rowRange(*reinterpret_cast<int*>(&startrow), *reinterpret_cast<int*>(&endrow));
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

// cv_Mat_rowRange_Range_r
// parsed: cv::Mat::rowRange
// as:     cv::Mat::rowRange (method) cv::Mat . rowRange
// Arg ARG cv::Range (boxed) r=  cv::Range (boxed) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_rowRange_Range_r(
        void* instance,
        void* r) {
  try {
  cv::Mat cpp_return_value = ((cv::Mat*) instance)->rowRange(*((cv::Range*)r));
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

// cv_Mat_colRange_int_startcol_int_endcol
// parsed: cv::Mat::colRange
// as:     cv::Mat::colRange (method) cv::Mat . colRange
// Arg ARG Primitive(int) startcol=  Primitive(int) = 
// Arg ARG Primitive(int) endcol=  Primitive(int) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_colRange_int_startcol_int_endcol(
        void* instance,
        int startcol,
        int endcol) {
  try {
  cv::Mat cpp_return_value = ((cv::Mat*) instance)->colRange(*reinterpret_cast<int*>(&startcol), *reinterpret_cast<int*>(&endcol));
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

// cv_Mat_colRange_Range_r
// parsed: cv::Mat::colRange
// as:     cv::Mat::colRange (method) cv::Mat . colRange
// Arg ARG cv::Range (boxed) r=  cv::Range (boxed) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_colRange_Range_r(
        void* instance,
        void* r) {
  try {
  cv::Mat cpp_return_value = ((cv::Mat*) instance)->colRange(*((cv::Range*)r));
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

// cv_Mat_diag_int_d
// parsed: cv::Mat::diag
// as:     cv::Mat::diag (method) cv::Mat . diag
// Arg ARG Primitive(int) d=  Primitive(int) =0 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_diag_int_d(
        void* instance,
        int d) {
  try {
  cv::Mat cpp_return_value = ((cv::Mat*) instance)->diag(*reinterpret_cast<int*>(&d));
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

// cv_Mat_diag_Mat_d
// parsed: cv::Mat::diag
// as:     cv::Mat::diag (method) cv::Mat . diag
// Arg ARG cv::Mat (boxed) d=  cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_diag_Mat_d(
        void* instance,
        void* d) {
  try {
  cv::Mat cpp_return_value = ((cv::Mat*) instance)->diag(*((cv::Mat*)d));
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

// cv_Mat_clone
// parsed: cv::Mat::clone
// as:     cv::Mat::clone (method) cv::Mat . clone
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_clone(
        void* instance) {
  try {
  cv::Mat cpp_return_value = ((cv::Mat*) instance)->clone();
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

// cv_Mat_copyTo_OutputArray_m
// parsed: cv::Mat::copyTo
// as:     cv::Mat::copyTo (method) cv::Mat . copyTo
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Mat_copyTo_OutputArray_m(
        void* instance,
        void* m) {
  try {
  ((cv::Mat*) instance)->copyTo(*((cv::Mat*)m));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mat_copyTo_OutputArray_m_InputArray_mask
// parsed: cv::Mat::copyTo
// as:     cv::Mat::copyTo (method) cv::Mat . copyTo
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Mat_copyTo_OutputArray_m_InputArray_mask(
        void* instance,
        void* m,
        void* mask) {
  try {
  ((cv::Mat*) instance)->copyTo(*((cv::Mat*)m), *((cv::Mat*)mask));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mat_convertTo_OutputArray_m_int_rtype_double_alpha_double_beta
// parsed: cv::Mat::convertTo
// as:     cv::Mat::convertTo (method) cv::Mat . convertTo
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) rtype=  Primitive(int) = 
// Arg ARG Primitive(double) alpha=  Primitive(double) =1 
// Arg ARG Primitive(double) beta=  Primitive(double) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Mat_convertTo_OutputArray_m_int_rtype_double_alpha_double_beta(
        void* instance,
        void* m,
        int rtype,
        double alpha,
        double beta) {
  try {
  ((cv::Mat*) instance)->convertTo(*((cv::Mat*)m), *reinterpret_cast<int*>(&rtype), *reinterpret_cast<double*>(&alpha), *reinterpret_cast<double*>(&beta));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mat_assignTo_Mat_m_int_type
// parsed: cv::Mat::assignTo
// as:     cv::Mat::assignTo (method) cv::Mat . assignTo
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) type=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Mat_assignTo_Mat_m_int_type(
        void* instance,
        void* m,
        int type) {
  try {
  ((cv::Mat*) instance)->assignTo(*((cv::Mat*)m), *reinterpret_cast<int*>(&type));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mat_setTo_InputArray_value_InputArray_mask
// parsed: cv::Mat::setTo
// as:     cv::Mat::setTo (method) cv::Mat . setTo
// Arg ARG cv::Mat (boxed) value=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_setTo_InputArray_value_InputArray_mask(
        void* instance,
        void* value,
        void* mask) {
  try {
  cv::Mat cpp_return_value = ((cv::Mat*) instance)->setTo(*((cv::Mat*)value), *((cv::Mat*)mask));
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

// cv_Mat_reshape_int_cn_int_rows
// parsed: cv::Mat::reshape
// as:     cv::Mat::reshape (method) cv::Mat . reshape
// Arg ARG Primitive(int) cn=  Primitive(int) = 
// Arg ARG Primitive(int) rows=  Primitive(int) =0 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_reshape_int_cn_int_rows(
        void* instance,
        int cn,
        int rows) {
  try {
  cv::Mat cpp_return_value = ((cv::Mat*) instance)->reshape(*reinterpret_cast<int*>(&cn), *reinterpret_cast<int*>(&rows));
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

// cv_Mat_cross_InputArray_m
// parsed: cv::Mat::cross
// as:     cv::Mat::cross (method) cv::Mat . cross
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_cross_InputArray_m(
        void* instance,
        void* m) {
  try {
  cv::Mat cpp_return_value = ((cv::Mat*) instance)->cross(*((cv::Mat*)m));
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

// cv_Mat_dot_InputArray_m
// parsed: cv::Mat::dot
// as:     cv::Mat::dot (method) cv::Mat . dot
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Return value: Primitive(double)
struct cv_return_value_double cv_core_cv_Mat_dot_InputArray_m(
        void* instance,
        void* m) {
  try {
  double cpp_return_value = ((cv::Mat*) instance)->dot(*((cv::Mat*)m));
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

// cv_Mat_addref
// parsed: cv::Mat::addref
// as:     cv::Mat::addref (method) cv::Mat . addref
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Mat_addref(
        void* instance) {
  try {
  ((cv::Mat*) instance)->addref();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mat_release
// parsed: cv::Mat::release
// as:     cv::Mat::release (method) cv::Mat . release
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Mat_release(
        void* instance) {
  try {
  ((cv::Mat*) instance)->release();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mat_deallocate
// parsed: cv::Mat::deallocate
// as:     cv::Mat::deallocate (method) cv::Mat . deallocate
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Mat_deallocate(
        void* instance) {
  try {
  ((cv::Mat*) instance)->deallocate();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mat_copySize_Mat_m
// parsed: cv::Mat::copySize
// as:     cv::Mat::copySize (method) cv::Mat . copySize
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Mat_copySize_Mat_m(
        void* instance,
        void* m) {
  try {
  ((cv::Mat*) instance)->copySize(*((cv::Mat*)m));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mat_reserve_size_t_sz
// parsed: cv::Mat::reserve
// as:     cv::Mat::reserve (method) cv::Mat . reserve
// Arg ARG Primitive(size_t) sz=  Primitive(size_t) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Mat_reserve_size_t_sz(
        void* instance,
        std::size_t sz) {
  try {
  ((cv::Mat*) instance)->reserve(*reinterpret_cast<size_t*>(&sz));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mat_resize_size_t_sz
// parsed: cv::Mat::resize
// as:     cv::Mat::resize (method) cv::Mat . resize
// Arg ARG Primitive(size_t) sz=  Primitive(size_t) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Mat_resize_size_t_sz(
        void* instance,
        std::size_t sz) {
  try {
  ((cv::Mat*) instance)->resize(*reinterpret_cast<size_t*>(&sz));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mat_resize_size_t_sz_Scalar_s
// parsed: cv::Mat::resize
// as:     cv::Mat::resize (method) cv::Mat . resize
// Arg ARG Primitive(size_t) sz=  Primitive(size_t) = 
// Arg ARG Scalar (struct) s=  Scalar (struct) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Mat_resize_size_t_sz_Scalar_s(
        void* instance,
        std::size_t sz,
        c_Scalar s) {
  try {
  ((cv::Mat*) instance)->resize(*reinterpret_cast<size_t*>(&sz), *reinterpret_cast<Scalar*>(&s));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mat_push_back_Mat_m
// parsed: cv::Mat::push_back
// as:     cv::Mat::push_back (method) cv::Mat . push_back
// Arg ARG cv::Mat (boxed) m=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Mat_push_back_Mat_m(
        void* instance,
        void* m) {
  try {
  ((cv::Mat*) instance)->push_back(*((cv::Mat*)m));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mat_pop_back_size_t_nelems
// parsed: cv::Mat::pop_back
// as:     cv::Mat::pop_back (method) cv::Mat . pop_back
// Arg ARG Primitive(size_t) nelems=  Primitive(size_t) =1 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Mat_pop_back_size_t_nelems(
        void* instance,
        std::size_t nelems) {
  try {
  ((cv::Mat*) instance)->pop_back(*reinterpret_cast<size_t*>(&nelems));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mat_locateROI_Size_wholeSize_Point_ofs
// parsed: cv::Mat::locateROI
// as:     cv::Mat::locateROI (method) cv::Mat . locateROI
// Arg ARG Size (struct) wholeSize=  Size (struct) = 
// Arg ARG Point (struct) ofs=  Point (struct) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_Mat_locateROI_Size_wholeSize_Point_ofs(
        void* instance,
        c_Size wholeSize,
        c_Point ofs) {
  try {
  ((cv::Mat*) instance)->locateROI(*reinterpret_cast<Size*>(&wholeSize), *reinterpret_cast<Point*>(&ofs));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_Mat_adjustROI_int_dtop_int_dbottom_int_dleft_int_dright
// parsed: cv::Mat::adjustROI
// as:     cv::Mat::adjustROI (method) cv::Mat . adjustROI
// Arg ARG Primitive(int) dtop=  Primitive(int) = 
// Arg ARG Primitive(int) dbottom=  Primitive(int) = 
// Arg ARG Primitive(int) dleft=  Primitive(int) = 
// Arg ARG Primitive(int) dright=  Primitive(int) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_Mat_adjustROI_int_dtop_int_dbottom_int_dleft_int_dright(
        void* instance,
        int dtop,
        int dbottom,
        int dleft,
        int dright) {
  try {
  cv::Mat cpp_return_value = ((cv::Mat*) instance)->adjustROI(*reinterpret_cast<int*>(&dtop), *reinterpret_cast<int*>(&dbottom), *reinterpret_cast<int*>(&dleft), *reinterpret_cast<int*>(&dright));
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

// cv_Mat_isContinuous
// parsed: cv::Mat::isContinuous
// as:     cv::Mat::isContinuous (method) cv::Mat . isContinuous
// Return value: Primitive(bool)
struct cv_return_value_char cv_core_cv_Mat_isContinuous(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::Mat*) instance)->isContinuous();
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

// cv_Mat_isSubmatrix
// parsed: cv::Mat::isSubmatrix
// as:     cv::Mat::isSubmatrix (method) cv::Mat . isSubmatrix
// Return value: Primitive(bool)
struct cv_return_value_char cv_core_cv_Mat_isSubmatrix(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::Mat*) instance)->isSubmatrix();
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

// cv_Mat_elemSize
// parsed: cv::Mat::elemSize
// as:     cv::Mat::elemSize (method) cv::Mat . elemSize
// Return value: Primitive(size_t)
struct cv_return_value_std_size_t cv_core_cv_Mat_elemSize(
        void* instance) {
  try {
  size_t cpp_return_value = ((cv::Mat*) instance)->elemSize();
  return { NULL, *reinterpret_cast<std::size_t*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_std_size_t ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_std_size_t ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Mat_elemSize1
// parsed: cv::Mat::elemSize1
// as:     cv::Mat::elemSize1 (method) cv::Mat . elemSize1
// Return value: Primitive(size_t)
struct cv_return_value_std_size_t cv_core_cv_Mat_elemSize1(
        void* instance) {
  try {
  size_t cpp_return_value = ((cv::Mat*) instance)->elemSize1();
  return { NULL, *reinterpret_cast<std::size_t*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_std_size_t ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_std_size_t ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Mat_type
// parsed: cv::Mat::type
// as:     cv::Mat::type (method) cv::Mat . type
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cv_Mat_type(
        void* instance) {
  try {
  int cpp_return_value = ((cv::Mat*) instance)->type();
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

// cv_Mat_depth
// parsed: cv::Mat::depth
// as:     cv::Mat::depth (method) cv::Mat . depth
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cv_Mat_depth(
        void* instance) {
  try {
  int cpp_return_value = ((cv::Mat*) instance)->depth();
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

// cv_Mat_channels
// parsed: cv::Mat::channels
// as:     cv::Mat::channels (method) cv::Mat . channels
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cv_Mat_channels(
        void* instance) {
  try {
  int cpp_return_value = ((cv::Mat*) instance)->channels();
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

// cv_Mat_step1_int_i
// parsed: cv::Mat::step1
// as:     cv::Mat::step1 (method) cv::Mat . step1
// Arg ARG Primitive(int) i=  Primitive(int) =0 
// Return value: Primitive(size_t)
struct cv_return_value_std_size_t cv_core_cv_Mat_step1_int_i(
        void* instance,
        int i) {
  try {
  size_t cpp_return_value = ((cv::Mat*) instance)->step1(*reinterpret_cast<int*>(&i));
  return { NULL, *reinterpret_cast<std::size_t*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_std_size_t ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_std_size_t ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Mat_empty
// parsed: cv::Mat::empty
// as:     cv::Mat::empty (method) cv::Mat . empty
// Return value: Primitive(bool)
struct cv_return_value_char cv_core_cv_Mat_empty(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::Mat*) instance)->empty();
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

// cv_Mat_total
// parsed: cv::Mat::total
// as:     cv::Mat::total (method) cv::Mat . total
// Return value: Primitive(size_t)
struct cv_return_value_std_size_t cv_core_cv_Mat_total(
        void* instance) {
  try {
  size_t cpp_return_value = ((cv::Mat*) instance)->total();
  return { NULL, *reinterpret_cast<std::size_t*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_std_size_t ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_std_size_t ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Mat_checkVector_int_elemChannels_int_depth_bool_requireContinuous
// parsed: cv::Mat::checkVector
// as:     cv::Mat::checkVector (method) cv::Mat . checkVector
// Arg ARG Primitive(int) elemChannels=  Primitive(int) = 
// Arg ARG Primitive(int) depth=  Primitive(int) =-1 
// Arg ARG Primitive(bool) requireContinuous=  Primitive(bool) =true 
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cv_Mat_checkVector_int_elemChannels_int_depth_bool_requireContinuous(
        void* instance,
        int elemChannels,
        int depth,
        char requireContinuous) {
  try {
  int cpp_return_value = ((cv::Mat*) instance)->checkVector(*reinterpret_cast<int*>(&elemChannels), *reinterpret_cast<int*>(&depth), *reinterpret_cast<bool*>(&requireContinuous));
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

// cv_Mat_ptr_int_i0
// parsed: cv::Mat::ptr
// as:     cv::Mat::ptr (method) cv::Mat . ptr
// Arg ARG Primitive(int) i0=  Primitive(int) =0 
// Return value: Primitive(uchar*)
struct cv_return_value_unsigned_charX cv_core_cv_Mat_ptr_int_i0(
        void* instance,
        int i0) {
  try {
  uchar* cpp_return_value = ((cv::Mat*) instance)->ptr(*reinterpret_cast<int*>(&i0));
  return { NULL, *reinterpret_cast<unsigned char**>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_unsigned_charX ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_unsigned_charX ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Mat_ptr_int_i0_int_i1
// parsed: cv::Mat::ptr
// as:     cv::Mat::ptr (method) cv::Mat . ptr
// Arg ARG Primitive(int) i0=  Primitive(int) = 
// Arg ARG Primitive(int) i1=  Primitive(int) = 
// Return value: Primitive(uchar*)
struct cv_return_value_unsigned_charX cv_core_cv_Mat_ptr_int_i0_int_i1(
        void* instance,
        int i0,
        int i1) {
  try {
  uchar* cpp_return_value = ((cv::Mat*) instance)->ptr(*reinterpret_cast<int*>(&i0), *reinterpret_cast<int*>(&i1));
  return { NULL, *reinterpret_cast<unsigned char**>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_unsigned_charX ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_unsigned_charX ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Mat_ptr_int_i0_int_i1_int_i2
// parsed: cv::Mat::ptr
// as:     cv::Mat::ptr (method) cv::Mat . ptr
// Arg ARG Primitive(int) i0=  Primitive(int) = 
// Arg ARG Primitive(int) i1=  Primitive(int) = 
// Arg ARG Primitive(int) i2=  Primitive(int) = 
// Return value: Primitive(uchar*)
struct cv_return_value_unsigned_charX cv_core_cv_Mat_ptr_int_i0_int_i1_int_i2(
        void* instance,
        int i0,
        int i1,
        int i2) {
  try {
  uchar* cpp_return_value = ((cv::Mat*) instance)->ptr(*reinterpret_cast<int*>(&i0), *reinterpret_cast<int*>(&i1), *reinterpret_cast<int*>(&i2));
  return { NULL, *reinterpret_cast<unsigned char**>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_unsigned_charX ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_unsigned_charX ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Mat_size
// parsed: cv::Mat::size
// as:     cv::Mat::size (method) cv::Mat . size
// Return value: Size (struct)
struct cv_return_value_c_Size cv_core_cv_Mat_size(
        void* instance) {
  try {
  Size cpp_return_value = ((cv::Mat*) instance)->size();
  return { NULL, *reinterpret_cast<c_Size*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_Size ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_Size ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}


// boxed class: cv::Matx_AddOp
void cv_delete_Matx_AddOp(void* instance) {
    delete (cv::Matx_AddOp*) instance;
}

// boxed class: cv::Matx_MatMulOp
void cv_delete_Matx_MatMulOp(void* instance) {
    delete (cv::Matx_MatMulOp*) instance;
}

// boxed class: cv::Matx_MulOp
void cv_delete_Matx_MulOp(void* instance) {
    delete (cv::Matx_MulOp*) instance;
}

// boxed class: cv::Matx_ScaleOp
void cv_delete_Matx_ScaleOp(void* instance) {
    delete (cv::Matx_ScaleOp*) instance;
}

// boxed class: cv::Matx_SubOp
void cv_delete_Matx_SubOp(void* instance) {
    delete (cv::Matx_SubOp*) instance;
}

// boxed class: cv::Matx_TOp
void cv_delete_Matx_TOp(void* instance) {
    delete (cv::Matx_TOp*) instance;
}

// boxed class: cv::NAryMatIterator
void cv_delete_NAryMatIterator(void* instance) {
    delete (cv::NAryMatIterator*) instance;
}
// cv_NAryMatIterator_NAryMatIterator
// parsed: cv::NAryMatIterator::NAryMatIterator
// as:     cv::NAryMatIterator::NAryMatIterator (constructor) cv::NAryMatIterator . new
// Return value: cv::NAryMatIterator (boxed)
struct cv_return_value_void_X cv_core_cv_NAryMatIterator_NAryMatIterator(
        ) {
  try {
  cv::NAryMatIterator* cpp_return_value = new cv::NAryMatIterator();
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


// boxed class: cv::PCA
void cv_delete_PCA(void* instance) {
    delete (cv::PCA*) instance;
}
// cv_PCA_PCA
// parsed: cv::PCA::PCA
// as:     cv::PCA::PCA (constructor) cv::PCA . new
// Return value: cv::PCA (boxed)
struct cv_return_value_void_X cv_core_cv_PCA_PCA(
        ) {
  try {
  cv::PCA* cpp_return_value = new cv::PCA();
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

// cv_PCA_PCA_InputArray_data_InputArray_mean_int_flags_int_maxComponents
// parsed: cv::PCA::PCA
// as:     cv::PCA::PCA (constructor) cv::PCA . new
// Arg ARG cv::Mat (boxed) data=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mean=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) = 
// Arg ARG Primitive(int) maxComponents=  Primitive(int) =0 
// Return value: cv::PCA (boxed)
struct cv_return_value_void_X cv_core_cv_PCA_PCA_InputArray_data_InputArray_mean_int_flags_int_maxComponents(
        void* data,
        void* mean,
        int flags,
        int maxComponents) {
  try {
  cv::PCA* cpp_return_value = new cv::PCA(*((cv::Mat*)data), *((cv::Mat*)mean), *reinterpret_cast<int*>(&flags), *reinterpret_cast<int*>(&maxComponents));
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

// cv_PCA_PCA_InputArray_data_InputArray_mean_int_flags_double_retainedVariance
// parsed: cv::PCA::PCA
// as:     cv::PCA::PCA (constructor) cv::PCA . new
// Arg ARG cv::Mat (boxed) data=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mean=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) = 
// Arg ARG Primitive(double) retainedVariance=  Primitive(double) = 
// Return value: cv::PCA (boxed)
struct cv_return_value_void_X cv_core_cv_PCA_PCA_InputArray_data_InputArray_mean_int_flags_double_retainedVariance(
        void* data,
        void* mean,
        int flags,
        double retainedVariance) {
  try {
  cv::PCA* cpp_return_value = new cv::PCA(*((cv::Mat*)data), *((cv::Mat*)mean), *reinterpret_cast<int*>(&flags), *reinterpret_cast<double*>(&retainedVariance));
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

// cv_PCA_computeVar_InputArray_data_InputArray_mean_int_flags_double_retainedVariance
// parsed: cv::PCA::computeVar
// as:     cv::PCA::computeVar (method) cv::PCA . computeVar
// Arg ARG cv::Mat (boxed) data=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mean=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) = 
// Arg ARG Primitive(double) retainedVariance=  Primitive(double) = 
// Return value: cv::PCA (boxed)
struct cv_return_value_void_X cv_core_cv_PCA_computeVar_InputArray_data_InputArray_mean_int_flags_double_retainedVariance(
        void* instance,
        void* data,
        void* mean,
        int flags,
        double retainedVariance) {
  try {
  cv::PCA cpp_return_value = ((cv::PCA*) instance)->computeVar(*((cv::Mat*)data), *((cv::Mat*)mean), *reinterpret_cast<int*>(&flags), *reinterpret_cast<double*>(&retainedVariance));
  return { NULL, new cv::PCA(cpp_return_value) };
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

// cv_PCA_project_InputArray_vec
// parsed: cv::PCA::project
// as:     cv::PCA::project (method) cv::PCA . project
// Arg ARG cv::Mat (boxed) vec=  cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_PCA_project_InputArray_vec(
        void* instance,
        void* vec) {
  try {
  cv::Mat cpp_return_value = ((cv::PCA*) instance)->project(*((cv::Mat*)vec));
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

// cv_PCA_project_InputArray_vec_OutputArray_result
// parsed: cv::PCA::project
// as:     cv::PCA::project (method) cv::PCA . project
// Arg ARG cv::Mat (boxed) vec=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) result=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_PCA_project_InputArray_vec_OutputArray_result(
        void* instance,
        void* vec,
        void* result) {
  try {
  ((cv::PCA*) instance)->project(*((cv::Mat*)vec), *((cv::Mat*)result));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_PCA_backProject_InputArray_vec
// parsed: cv::PCA::backProject
// as:     cv::PCA::backProject (method) cv::PCA . backProject
// Arg ARG cv::Mat (boxed) vec=  cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_core_cv_PCA_backProject_InputArray_vec(
        void* instance,
        void* vec) {
  try {
  cv::Mat cpp_return_value = ((cv::PCA*) instance)->backProject(*((cv::Mat*)vec));
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

// cv_PCA_backProject_InputArray_vec_OutputArray_result
// parsed: cv::PCA::backProject
// as:     cv::PCA::backProject (method) cv::PCA . backProject
// Arg ARG cv::Mat (boxed) vec=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) result=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_core_cv_PCA_backProject_InputArray_vec_OutputArray_result(
        void* instance,
        void* vec,
        void* result) {
  try {
  ((cv::PCA*) instance)->backProject(*((cv::Mat*)vec), *((cv::Mat*)result));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}


// boxed class: cv::Range
void cv_delete_Range(void* instance) {
    delete (cv::Range*) instance;
}
// cv_Range_Range
// parsed: cv::Range::Range
// as:     cv::Range::Range (constructor) cv::Range . new
// Return value: cv::Range (boxed)
struct cv_return_value_void_X cv_core_cv_Range_Range(
        ) {
  try {
  cv::Range* cpp_return_value = new cv::Range();
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

// cv_Range_Range_int__start_int__end
// parsed: cv::Range::Range
// as:     cv::Range::Range (constructor) cv::Range . new
// Arg ARG Primitive(int) _start=  Primitive(int) = 
// Arg ARG Primitive(int) _end=  Primitive(int) = 
// Return value: cv::Range (boxed)
struct cv_return_value_void_X cv_core_cv_Range_Range_int__start_int__end(
        int _start,
        int _end) {
  try {
  cv::Range* cpp_return_value = new cv::Range(*reinterpret_cast<int*>(&_start), *reinterpret_cast<int*>(&_end));
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

// cv_Range_size
// parsed: cv::Range::size
// as:     cv::Range::size (method) cv::Range . size
// Return value: Primitive(int)
struct cv_return_value_int cv_core_cv_Range_size(
        void* instance) {
  try {
  int cpp_return_value = ((cv::Range*) instance)->size();
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

// cv_Range_empty
// parsed: cv::Range::empty
// as:     cv::Range::empty (method) cv::Range . empty
// Return value: Primitive(bool)
struct cv_return_value_char cv_core_cv_Range_empty(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::Range*) instance)->empty();
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

// cv_Range_all
// parsed: cv::Range::all
// as:     cv::Range::all (method) cv::Range . all
// Return value: cv::Range (boxed)
struct cv_return_value_void_X cv_core_cv_Range_all(
        void* instance) {
  try {
  cv::Range cpp_return_value = ((cv::Range*) instance)->all();
  return { NULL, new cv::Range(cpp_return_value) };
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


// boxed class: cv::RotatedRect
void cv_delete_RotatedRect(void* instance) {
    delete (cv::RotatedRect*) instance;
}
// cv_RotatedRect_RotatedRect
// parsed: cv::RotatedRect::RotatedRect
// as:     cv::RotatedRect::RotatedRect (constructor) cv::RotatedRect . new
// Return value: cv::RotatedRect (boxed)
struct cv_return_value_void_X cv_core_cv_RotatedRect_RotatedRect(
        ) {
  try {
  cv::RotatedRect* cpp_return_value = new cv::RotatedRect();
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

// cv_RotatedRect_RotatedRect_Point2f_center_Size2f_size_float_angle
// parsed: cv::RotatedRect::RotatedRect
// as:     cv::RotatedRect::RotatedRect (constructor) cv::RotatedRect . new
// Arg ARG Point2f (struct) center=  Point2f (struct) = 
// Arg ARG Size2f (struct) size=  Size2f (struct) = 
// Arg ARG Primitive(float) angle=  Primitive(float) = 
// Return value: cv::RotatedRect (boxed)
struct cv_return_value_void_X cv_core_cv_RotatedRect_RotatedRect_Point2f_center_Size2f_size_float_angle(
        c_Point2f center,
        c_Size2f size,
        float angle) {
  try {
  cv::RotatedRect* cpp_return_value = new cv::RotatedRect(*reinterpret_cast<Point2f*>(&center), *reinterpret_cast<Size2f*>(&size), *reinterpret_cast<float*>(&angle));
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

// cv_RotatedRect_boundingRect
// parsed: cv::RotatedRect::boundingRect
// as:     cv::RotatedRect::boundingRect (method) cv::RotatedRect . boundingRect
// Return value: Rect (struct)
struct cv_return_value_c_Rect cv_core_cv_RotatedRect_boundingRect(
        void* instance) {
  try {
  Rect cpp_return_value = ((cv::RotatedRect*) instance)->boundingRect();
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


// boxed class: cv::TermCriteria
void cv_delete_TermCriteria(void* instance) {
    delete (cv::TermCriteria*) instance;
}
// cv_TermCriteria_TermCriteria
// parsed: cv::TermCriteria::TermCriteria
// as:     cv::TermCriteria::TermCriteria (constructor) cv::TermCriteria . new
// Return value: cv::TermCriteria (boxed)
struct cv_return_value_void_X cv_core_cv_TermCriteria_TermCriteria(
        ) {
  try {
  cv::TermCriteria* cpp_return_value = new cv::TermCriteria();
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

// cv_TermCriteria_TermCriteria_int_type_int_maxCount_double_epsilon
// parsed: cv::TermCriteria::TermCriteria
// as:     cv::TermCriteria::TermCriteria (constructor) cv::TermCriteria . new
// Arg ARG Primitive(int) type=  Primitive(int) = 
// Arg ARG Primitive(int) maxCount=  Primitive(int) = 
// Arg ARG Primitive(double) epsilon=  Primitive(double) = 
// Return value: cv::TermCriteria (boxed)
struct cv_return_value_void_X cv_core_cv_TermCriteria_TermCriteria_int_type_int_maxCount_double_epsilon(
        int type,
        int maxCount,
        double epsilon) {
  try {
  cv::TermCriteria* cpp_return_value = new cv::TermCriteria(*reinterpret_cast<int*>(&type), *reinterpret_cast<int*>(&maxCount), *reinterpret_cast<double*>(&epsilon));
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



} // extern "C"

