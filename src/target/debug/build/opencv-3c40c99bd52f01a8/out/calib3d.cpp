
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

// cvRANSACUpdateNumIters_double_p_double_err_prob_int_model_points_int_max_iters
// parsed: cvRANSACUpdateNumIters
// as:     cvRANSACUpdateNumIters (function)
// Arg ARG Primitive(double) p=  Primitive(double) = 
// Arg ARG Primitive(double) err_prob=  Primitive(double) = 
// Arg ARG Primitive(int) model_points=  Primitive(int) = 
// Arg ARG Primitive(int) max_iters=  Primitive(int) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_calib3d_cvRANSACUpdateNumIters_double_p_double_err_prob_int_model_points_int_max_iters(
        double p,
        double err_prob,
        int model_points,
        int max_iters) {
  try {
  int cpp_return_value = cvRANSACUpdateNumIters(*reinterpret_cast<double*>(&p), *reinterpret_cast<double*>(&err_prob), *reinterpret_cast<int*>(&model_points), *reinterpret_cast<int*>(&max_iters));
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

// cv_RQDecomp3x3_InputArray_src_OutputArray_mtxR_OutputArray_mtxQ_OutputArray_Qx_OutputArray_Qy_OutputArray_Qz
// parsed: cv::RQDecomp3x3
// as:     cv::RQDecomp3x3 (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mtxR=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mtxQ=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) Qx=  cv::Mat (boxed) =noArray() 
// Arg ARG cv::Mat (boxed) Qy=  cv::Mat (boxed) =noArray() 
// Arg ARG cv::Mat (boxed) Qz=  cv::Mat (boxed) =noArray() 
// Return value: Vec3d (struct)
struct cv_return_value_c_Vec3d cv_calib3d_cv_RQDecomp3x3_InputArray_src_OutputArray_mtxR_OutputArray_mtxQ_OutputArray_Qx_OutputArray_Qy_OutputArray_Qz(
        void* src,
        void* mtxR,
        void* mtxQ,
        void* Qx,
        void* Qy,
        void* Qz) {
  try {
  Vec3d cpp_return_value = cv::RQDecomp3x3(*((cv::Mat*)src), *((cv::Mat*)mtxR), *((cv::Mat*)mtxQ), *((cv::Mat*)Qx), *((cv::Mat*)Qy), *((cv::Mat*)Qz));
  return { NULL, *reinterpret_cast<c_Vec3d*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_Vec3d ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_Vec3d ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_Rodrigues_InputArray_src_OutputArray_dst_OutputArray_jacobian
// parsed: cv::Rodrigues
// as:     cv::Rodrigues (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) jacobian=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_Rodrigues_InputArray_src_OutputArray_dst_OutputArray_jacobian(
        void* src,
        void* dst,
        void* jacobian) {
  try {
  cv::Rodrigues(*((cv::Mat*)src), *((cv::Mat*)dst), *((cv::Mat*)jacobian));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_calibrationMatrixValues_InputArray_cameraMatrix_Size_imageSize_double_apertureWidth_double_apertureHeight_double_fovx_double_fovy_double_focalLength_Point2d_principalPoint_double_aspectRatio
// parsed: cv::calibrationMatrixValues
// as:     cv::calibrationMatrixValues (function)
// Arg ARG cv::Mat (boxed) cameraMatrix=  cv::Mat (boxed) = 
// Arg ARG Size (struct) imageSize=  Size (struct) = 
// Arg ARG Primitive(double) apertureWidth=  Primitive(double) = 
// Arg ARG Primitive(double) apertureHeight=  Primitive(double) = 
// Arg ARG Primitive(double) fovx=  Primitive(double) = 
// Arg ARG Primitive(double) fovy=  Primitive(double) = 
// Arg ARG Primitive(double) focalLength=  Primitive(double) = 
// Arg ARG Point2d (struct) principalPoint=  Point2d (struct) = 
// Arg ARG Primitive(double) aspectRatio=  Primitive(double) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_calibrationMatrixValues_InputArray_cameraMatrix_Size_imageSize_double_apertureWidth_double_apertureHeight_double_fovx_double_fovy_double_focalLength_Point2d_principalPoint_double_aspectRatio(
        void* cameraMatrix,
        c_Size imageSize,
        double apertureWidth,
        double apertureHeight,
        double fovx,
        double fovy,
        double focalLength,
        c_Point2d principalPoint,
        double aspectRatio) {
  try {
  cv::calibrationMatrixValues(*((cv::Mat*)cameraMatrix), *reinterpret_cast<Size*>(&imageSize), *reinterpret_cast<double*>(&apertureWidth), *reinterpret_cast<double*>(&apertureHeight), *reinterpret_cast<double*>(&fovx), *reinterpret_cast<double*>(&fovy), *reinterpret_cast<double*>(&focalLength), *reinterpret_cast<Point2d*>(&principalPoint), *reinterpret_cast<double*>(&aspectRatio));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_composeRT_InputArray_rvec1_InputArray_tvec1_InputArray_rvec2_InputArray_tvec2_OutputArray_rvec3_OutputArray_tvec3_OutputArray_dr3dr1_OutputArray_dr3dt1_OutputArray_dr3dr2_OutputArray_dr3dt2_OutputArray_dt3dr1_OutputArray_dt3dt1_OutputArray_dt3dr2_OutputArray_dt3dt2
// parsed: cv::composeRT
// as:     cv::composeRT (function)
// Arg ARG cv::Mat (boxed) rvec1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) tvec1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) rvec2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) tvec2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) rvec3=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) tvec3=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dr3dr1=  cv::Mat (boxed) =noArray() 
// Arg ARG cv::Mat (boxed) dr3dt1=  cv::Mat (boxed) =noArray() 
// Arg ARG cv::Mat (boxed) dr3dr2=  cv::Mat (boxed) =noArray() 
// Arg ARG cv::Mat (boxed) dr3dt2=  cv::Mat (boxed) =noArray() 
// Arg ARG cv::Mat (boxed) dt3dr1=  cv::Mat (boxed) =noArray() 
// Arg ARG cv::Mat (boxed) dt3dt1=  cv::Mat (boxed) =noArray() 
// Arg ARG cv::Mat (boxed) dt3dr2=  cv::Mat (boxed) =noArray() 
// Arg ARG cv::Mat (boxed) dt3dt2=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_composeRT_InputArray_rvec1_InputArray_tvec1_InputArray_rvec2_InputArray_tvec2_OutputArray_rvec3_OutputArray_tvec3_OutputArray_dr3dr1_OutputArray_dr3dt1_OutputArray_dr3dr2_OutputArray_dr3dt2_OutputArray_dt3dr1_OutputArray_dt3dt1_OutputArray_dt3dr2_OutputArray_dt3dt2(
        void* rvec1,
        void* tvec1,
        void* rvec2,
        void* tvec2,
        void* rvec3,
        void* tvec3,
        void* dr3dr1,
        void* dr3dt1,
        void* dr3dr2,
        void* dr3dt2,
        void* dt3dr1,
        void* dt3dt1,
        void* dt3dr2,
        void* dt3dt2) {
  try {
  cv::composeRT(*((cv::Mat*)rvec1), *((cv::Mat*)tvec1), *((cv::Mat*)rvec2), *((cv::Mat*)tvec2), *((cv::Mat*)rvec3), *((cv::Mat*)tvec3), *((cv::Mat*)dr3dr1), *((cv::Mat*)dr3dt1), *((cv::Mat*)dr3dr2), *((cv::Mat*)dr3dt2), *((cv::Mat*)dt3dr1), *((cv::Mat*)dt3dt1), *((cv::Mat*)dt3dr2), *((cv::Mat*)dt3dt2));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_computeCorrespondEpilines_InputArray_points_int_whichImage_InputArray_F_OutputArray_lines
// parsed: cv::computeCorrespondEpilines
// as:     cv::computeCorrespondEpilines (function)
// Arg ARG cv::Mat (boxed) points=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) whichImage=  Primitive(int) = 
// Arg ARG cv::Mat (boxed) F=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) lines=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_computeCorrespondEpilines_InputArray_points_int_whichImage_InputArray_F_OutputArray_lines(
        void* points,
        int whichImage,
        void* F,
        void* lines) {
  try {
  cv::computeCorrespondEpilines(*((cv::Mat*)points), *reinterpret_cast<int*>(&whichImage), *((cv::Mat*)F), *((cv::Mat*)lines));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_convertPointsFromHomogeneous_InputArray_src_OutputArray_dst
// parsed: cv::convertPointsFromHomogeneous
// as:     cv::convertPointsFromHomogeneous (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_convertPointsFromHomogeneous_InputArray_src_OutputArray_dst(
        void* src,
        void* dst) {
  try {
  cv::convertPointsFromHomogeneous(*((cv::Mat*)src), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_convertPointsHomogeneous_InputArray_src_OutputArray_dst
// parsed: cv::convertPointsHomogeneous
// as:     cv::convertPointsHomogeneous (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_convertPointsHomogeneous_InputArray_src_OutputArray_dst(
        void* src,
        void* dst) {
  try {
  cv::convertPointsHomogeneous(*((cv::Mat*)src), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_convertPointsToHomogeneous_InputArray_src_OutputArray_dst
// parsed: cv::convertPointsToHomogeneous
// as:     cv::convertPointsToHomogeneous (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_convertPointsToHomogeneous_InputArray_src_OutputArray_dst(
        void* src,
        void* dst) {
  try {
  cv::convertPointsToHomogeneous(*((cv::Mat*)src), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_correctMatches_InputArray_F_InputArray_points1_InputArray_points2_OutputArray_newPoints1_OutputArray_newPoints2
// parsed: cv::correctMatches
// as:     cv::correctMatches (function)
// Arg ARG cv::Mat (boxed) F=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) points1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) points2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) newPoints1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) newPoints2=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_correctMatches_InputArray_F_InputArray_points1_InputArray_points2_OutputArray_newPoints1_OutputArray_newPoints2(
        void* F,
        void* points1,
        void* points2,
        void* newPoints1,
        void* newPoints2) {
  try {
  cv::correctMatches(*((cv::Mat*)F), *((cv::Mat*)points1), *((cv::Mat*)points2), *((cv::Mat*)newPoints1), *((cv::Mat*)newPoints2));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_decomposeProjectionMatrix_InputArray_projMatrix_OutputArray_cameraMatrix_OutputArray_rotMatrix_OutputArray_transVect_OutputArray_rotMatrixX_OutputArray_rotMatrixY_OutputArray_rotMatrixZ_OutputArray_eulerAngles
// parsed: cv::decomposeProjectionMatrix
// as:     cv::decomposeProjectionMatrix (function)
// Arg ARG cv::Mat (boxed) projMatrix=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) cameraMatrix=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) rotMatrix=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) transVect=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) rotMatrixX=  cv::Mat (boxed) =noArray() 
// Arg ARG cv::Mat (boxed) rotMatrixY=  cv::Mat (boxed) =noArray() 
// Arg ARG cv::Mat (boxed) rotMatrixZ=  cv::Mat (boxed) =noArray() 
// Arg ARG cv::Mat (boxed) eulerAngles=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_decomposeProjectionMatrix_InputArray_projMatrix_OutputArray_cameraMatrix_OutputArray_rotMatrix_OutputArray_transVect_OutputArray_rotMatrixX_OutputArray_rotMatrixY_OutputArray_rotMatrixZ_OutputArray_eulerAngles(
        void* projMatrix,
        void* cameraMatrix,
        void* rotMatrix,
        void* transVect,
        void* rotMatrixX,
        void* rotMatrixY,
        void* rotMatrixZ,
        void* eulerAngles) {
  try {
  cv::decomposeProjectionMatrix(*((cv::Mat*)projMatrix), *((cv::Mat*)cameraMatrix), *((cv::Mat*)rotMatrix), *((cv::Mat*)transVect), *((cv::Mat*)rotMatrixX), *((cv::Mat*)rotMatrixY), *((cv::Mat*)rotMatrixZ), *((cv::Mat*)eulerAngles));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_estimateAffine3D_InputArray_src_InputArray_dst_OutputArray_out_OutputArray_inliers_double_ransacThreshold_double_confidence
// parsed: cv::estimateAffine3D
// as:     cv::estimateAffine3D (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) out=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) inliers=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) ransacThreshold=  Primitive(double) =3 
// Arg ARG Primitive(double) confidence=  Primitive(double) =0.99 
// Return value: Primitive(int)
struct cv_return_value_int cv_calib3d_cv_estimateAffine3D_InputArray_src_InputArray_dst_OutputArray_out_OutputArray_inliers_double_ransacThreshold_double_confidence(
        void* src,
        void* dst,
        void* out,
        void* inliers,
        double ransacThreshold,
        double confidence) {
  try {
  int cpp_return_value = cv::estimateAffine3D(*((cv::Mat*)src), *((cv::Mat*)dst), *((cv::Mat*)out), *((cv::Mat*)inliers), *reinterpret_cast<double*>(&ransacThreshold), *reinterpret_cast<double*>(&confidence));
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

// cv_findChessboardCorners_InputArray_image_Size_patternSize_OutputArray_corners_int_flags
// parsed: cv::findChessboardCorners
// as:     cv::findChessboardCorners (function)
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG Size (struct) patternSize=  Size (struct) = 
// Arg ARG cv::Mat (boxed) corners=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) =CALIB_CB_ADAPTIVE_THRESH+CALIB_CB_NORMALIZE_IMAGE 
// Return value: Primitive(bool)
struct cv_return_value_char cv_calib3d_cv_findChessboardCorners_InputArray_image_Size_patternSize_OutputArray_corners_int_flags(
        void* image,
        c_Size patternSize,
        void* corners,
        int flags) {
  try {
  bool cpp_return_value = cv::findChessboardCorners(*((cv::Mat*)image), *reinterpret_cast<Size*>(&patternSize), *((cv::Mat*)corners), *reinterpret_cast<int*>(&flags));
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

// cv_findCirclesGridDefault_InputArray_image_Size_patternSize_OutputArray_centers_int_flags
// parsed: cv::findCirclesGridDefault
// as:     cv::findCirclesGridDefault (function)
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG Size (struct) patternSize=  Size (struct) = 
// Arg ARG cv::Mat (boxed) centers=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags=  Primitive(int) =CALIB_CB_SYMMETRIC_GRID 
// Return value: Primitive(bool)
struct cv_return_value_char cv_calib3d_cv_findCirclesGridDefault_InputArray_image_Size_patternSize_OutputArray_centers_int_flags(
        void* image,
        c_Size patternSize,
        void* centers,
        int flags) {
  try {
  bool cpp_return_value = cv::findCirclesGridDefault(*((cv::Mat*)image), *reinterpret_cast<Size*>(&patternSize), *((cv::Mat*)centers), *reinterpret_cast<int*>(&flags));
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

// cv_findFundamentalMat_InputArray_points1_InputArray_points2_OutputArray_mask_int_method_double_param1_double_param2
// parsed: cv::findFundamentalMat
// as:     cv::findFundamentalMat (function)
// Arg ARG cv::Mat (boxed) points1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) points2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) method=  Primitive(int) =FM_RANSAC 
// Arg ARG Primitive(double) param1=  Primitive(double) =3. 
// Arg ARG Primitive(double) param2=  Primitive(double) =0.99 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_calib3d_cv_findFundamentalMat_InputArray_points1_InputArray_points2_OutputArray_mask_int_method_double_param1_double_param2(
        void* points1,
        void* points2,
        void* mask,
        int method,
        double param1,
        double param2) {
  try {
  cv::Mat cpp_return_value = cv::findFundamentalMat(*((cv::Mat*)points1), *((cv::Mat*)points2), *((cv::Mat*)mask), *reinterpret_cast<int*>(&method), *reinterpret_cast<double*>(&param1), *reinterpret_cast<double*>(&param2));
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

// cv_findHomography_InputArray_srcPoints_InputArray_dstPoints_OutputArray_mask_int_method_double_ransacReprojThreshold
// parsed: cv::findHomography
// as:     cv::findHomography (function)
// Arg ARG cv::Mat (boxed) srcPoints=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dstPoints=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) method=  Primitive(int) =0 
// Arg ARG Primitive(double) ransacReprojThreshold=  Primitive(double) =3 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_calib3d_cv_findHomography_InputArray_srcPoints_InputArray_dstPoints_OutputArray_mask_int_method_double_ransacReprojThreshold(
        void* srcPoints,
        void* dstPoints,
        void* mask,
        int method,
        double ransacReprojThreshold) {
  try {
  cv::Mat cpp_return_value = cv::findHomography(*((cv::Mat*)srcPoints), *((cv::Mat*)dstPoints), *((cv::Mat*)mask), *reinterpret_cast<int*>(&method), *reinterpret_cast<double*>(&ransacReprojThreshold));
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

// cv_findHomography_InputArray_srcPoints_InputArray_dstPoints_int_method_double_ransacReprojThreshold_OutputArray_mask
// parsed: cv::findHomography
// as:     cv::findHomography (function)
// Arg ARG cv::Mat (boxed) srcPoints=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dstPoints=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) method=  Primitive(int) =0 
// Arg ARG Primitive(double) ransacReprojThreshold=  Primitive(double) =3 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =noArray() 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_calib3d_cv_findHomography_InputArray_srcPoints_InputArray_dstPoints_int_method_double_ransacReprojThreshold_OutputArray_mask(
        void* srcPoints,
        void* dstPoints,
        int method,
        double ransacReprojThreshold,
        void* mask) {
  try {
  cv::Mat cpp_return_value = cv::findHomography(*((cv::Mat*)srcPoints), *((cv::Mat*)dstPoints), *reinterpret_cast<int*>(&method), *reinterpret_cast<double*>(&ransacReprojThreshold), *((cv::Mat*)mask));
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

// cv_fisheye_distortPoints_InputArray_undistorted_OutputArray_distorted_InputArray_K_InputArray_D_double_alpha
// parsed: cv::fisheye::distortPoints
// as:     cv::fisheye::distortPoints (function)
// Arg ARG cv::Mat (boxed) undistorted=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) distorted=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) K=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) D=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) alpha=  Primitive(double) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_fisheye_distortPoints_InputArray_undistorted_OutputArray_distorted_InputArray_K_InputArray_D_double_alpha(
        void* undistorted,
        void* distorted,
        void* K,
        void* D,
        double alpha) {
  try {
  cv::fisheye::distortPoints(*((cv::Mat*)undistorted), *((cv::Mat*)distorted), *((cv::Mat*)K), *((cv::Mat*)D), *reinterpret_cast<double*>(&alpha));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_fisheye_projectPoints_InputArray_objectPoints_OutputArray_imagePoints_InputArray_rvec_InputArray_tvec_InputArray_K_InputArray_D_double_alpha_OutputArray_jacobian
// parsed: cv::fisheye::projectPoints
// as:     cv::fisheye::projectPoints (function)
// Arg ARG cv::Mat (boxed) objectPoints=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) imagePoints=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) rvec=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) tvec=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) K=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) D=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) alpha=  Primitive(double) =0 
// Arg ARG cv::Mat (boxed) jacobian=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_fisheye_projectPoints_InputArray_objectPoints_OutputArray_imagePoints_InputArray_rvec_InputArray_tvec_InputArray_K_InputArray_D_double_alpha_OutputArray_jacobian(
        void* objectPoints,
        void* imagePoints,
        void* rvec,
        void* tvec,
        void* K,
        void* D,
        double alpha,
        void* jacobian) {
  try {
  cv::fisheye::projectPoints(*((cv::Mat*)objectPoints), *((cv::Mat*)imagePoints), *((cv::Mat*)rvec), *((cv::Mat*)tvec), *((cv::Mat*)K), *((cv::Mat*)D), *reinterpret_cast<double*>(&alpha), *((cv::Mat*)jacobian));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_fisheye_undistortImage_InputArray_distorted_OutputArray_undistorted_InputArray_K_InputArray_D_InputArray_Knew_Size_new_size
// parsed: cv::fisheye::undistortImage
// as:     cv::fisheye::undistortImage (function)
// Arg ARG cv::Mat (boxed) distorted=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) undistorted=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) K=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) D=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) Knew=  cv::Mat (boxed) =cv::noArray() 
// Arg ARG Size (struct) new_size=  Size (struct) =Size() 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_fisheye_undistortImage_InputArray_distorted_OutputArray_undistorted_InputArray_K_InputArray_D_InputArray_Knew_Size_new_size(
        void* distorted,
        void* undistorted,
        void* K,
        void* D,
        void* Knew,
        c_Size new_size) {
  try {
  cv::fisheye::undistortImage(*((cv::Mat*)distorted), *((cv::Mat*)undistorted), *((cv::Mat*)K), *((cv::Mat*)D), *((cv::Mat*)Knew), *reinterpret_cast<Size*>(&new_size));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_fisheye_undistortPoints_InputArray_distorted_OutputArray_undistorted_InputArray_K_InputArray_D_InputArray_R_InputArray_P
// parsed: cv::fisheye::undistortPoints
// as:     cv::fisheye::undistortPoints (function)
// Arg ARG cv::Mat (boxed) distorted=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) undistorted=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) K=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) D=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) R=  cv::Mat (boxed) =noArray() 
// Arg ARG cv::Mat (boxed) P=  cv::Mat (boxed) =noArray() 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_fisheye_undistortPoints_InputArray_distorted_OutputArray_undistorted_InputArray_K_InputArray_D_InputArray_R_InputArray_P(
        void* distorted,
        void* undistorted,
        void* K,
        void* D,
        void* R,
        void* P) {
  try {
  cv::fisheye::undistortPoints(*((cv::Mat*)distorted), *((cv::Mat*)undistorted), *((cv::Mat*)K), *((cv::Mat*)D), *((cv::Mat*)R), *((cv::Mat*)P));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_getValidDisparityROI_Rect_roi1_Rect_roi2_int_minDisparity_int_numberOfDisparities_int_SADWindowSize
// parsed: cv::getValidDisparityROI
// as:     cv::getValidDisparityROI (function)
// Arg ARG Rect (struct) roi1=  Rect (struct) = 
// Arg ARG Rect (struct) roi2=  Rect (struct) = 
// Arg ARG Primitive(int) minDisparity=  Primitive(int) = 
// Arg ARG Primitive(int) numberOfDisparities=  Primitive(int) = 
// Arg ARG Primitive(int) SADWindowSize=  Primitive(int) = 
// Return value: Rect (struct)
struct cv_return_value_c_Rect cv_calib3d_cv_getValidDisparityROI_Rect_roi1_Rect_roi2_int_minDisparity_int_numberOfDisparities_int_SADWindowSize(
        c_Rect roi1,
        c_Rect roi2,
        int minDisparity,
        int numberOfDisparities,
        int SADWindowSize) {
  try {
  Rect cpp_return_value = cv::getValidDisparityROI(*reinterpret_cast<Rect*>(&roi1), *reinterpret_cast<Rect*>(&roi2), *reinterpret_cast<int*>(&minDisparity), *reinterpret_cast<int*>(&numberOfDisparities), *reinterpret_cast<int*>(&SADWindowSize));
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

// cv_matMulDeriv_InputArray_A_InputArray_B_OutputArray_dABdA_OutputArray_dABdB
// parsed: cv::matMulDeriv
// as:     cv::matMulDeriv (function)
// Arg ARG cv::Mat (boxed) A=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) B=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dABdA=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dABdB=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_matMulDeriv_InputArray_A_InputArray_B_OutputArray_dABdA_OutputArray_dABdB(
        void* A,
        void* B,
        void* dABdA,
        void* dABdB) {
  try {
  cv::matMulDeriv(*((cv::Mat*)A), *((cv::Mat*)B), *((cv::Mat*)dABdA), *((cv::Mat*)dABdB));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_projectPoints_InputArray_objectPoints_InputArray_rvec_InputArray_tvec_InputArray_cameraMatrix_InputArray_distCoeffs_OutputArray_imagePoints_OutputArray_jacobian_double_aspectRatio
// parsed: cv::projectPoints
// as:     cv::projectPoints (function)
// Arg ARG cv::Mat (boxed) objectPoints=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) rvec=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) tvec=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) cameraMatrix=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) distCoeffs=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) imagePoints=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) jacobian=  cv::Mat (boxed) =noArray() 
// Arg ARG Primitive(double) aspectRatio=  Primitive(double) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_projectPoints_InputArray_objectPoints_InputArray_rvec_InputArray_tvec_InputArray_cameraMatrix_InputArray_distCoeffs_OutputArray_imagePoints_OutputArray_jacobian_double_aspectRatio(
        void* objectPoints,
        void* rvec,
        void* tvec,
        void* cameraMatrix,
        void* distCoeffs,
        void* imagePoints,
        void* jacobian,
        double aspectRatio) {
  try {
  cv::projectPoints(*((cv::Mat*)objectPoints), *((cv::Mat*)rvec), *((cv::Mat*)tvec), *((cv::Mat*)cameraMatrix), *((cv::Mat*)distCoeffs), *((cv::Mat*)imagePoints), *((cv::Mat*)jacobian), *reinterpret_cast<double*>(&aspectRatio));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_reprojectImageTo3D_InputArray_disparity_OutputArray__3dImage_InputArray_Q_bool_handleMissingValues_int_ddepth
// parsed: cv::reprojectImageTo3D
// as:     cv::reprojectImageTo3D (function)
// Arg ARG cv::Mat (boxed) disparity=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) _3dImage=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) Q=  cv::Mat (boxed) = 
// Arg ARG Primitive(bool) handleMissingValues=  Primitive(bool) =false 
// Arg ARG Primitive(int) ddepth=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_reprojectImageTo3D_InputArray_disparity_OutputArray__3dImage_InputArray_Q_bool_handleMissingValues_int_ddepth(
        void* disparity,
        void* _3dImage,
        void* Q,
        char handleMissingValues,
        int ddepth) {
  try {
  cv::reprojectImageTo3D(*((cv::Mat*)disparity), *((cv::Mat*)_3dImage), *((cv::Mat*)Q), *reinterpret_cast<bool*>(&handleMissingValues), *reinterpret_cast<int*>(&ddepth));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_solvePnPRansac_InputArray_objectPoints_InputArray_imagePoints_InputArray_cameraMatrix_InputArray_distCoeffs_OutputArray_rvec_OutputArray_tvec_bool_useExtrinsicGuess_int_iterationsCount_float_reprojectionError_int_minInliersCount_OutputArray_inliers_int_flags
// parsed: cv::solvePnPRansac
// as:     cv::solvePnPRansac (function)
// Arg ARG cv::Mat (boxed) objectPoints=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) imagePoints=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) cameraMatrix=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) distCoeffs=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) rvec=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) tvec=  cv::Mat (boxed) = 
// Arg ARG Primitive(bool) useExtrinsicGuess=  Primitive(bool) =false 
// Arg ARG Primitive(int) iterationsCount=  Primitive(int) =100 
// Arg ARG Primitive(float) reprojectionError=  Primitive(float) =8.0 
// Arg ARG Primitive(int) minInliersCount=  Primitive(int) =100 
// Arg ARG cv::Mat (boxed) inliers=  cv::Mat (boxed) =noArray() 
// Arg ARG Primitive(int) flags=  Primitive(int) =ITERATIVE 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_solvePnPRansac_InputArray_objectPoints_InputArray_imagePoints_InputArray_cameraMatrix_InputArray_distCoeffs_OutputArray_rvec_OutputArray_tvec_bool_useExtrinsicGuess_int_iterationsCount_float_reprojectionError_int_minInliersCount_OutputArray_inliers_int_flags(
        void* objectPoints,
        void* imagePoints,
        void* cameraMatrix,
        void* distCoeffs,
        void* rvec,
        void* tvec,
        char useExtrinsicGuess,
        int iterationsCount,
        float reprojectionError,
        int minInliersCount,
        void* inliers,
        int flags) {
  try {
  cv::solvePnPRansac(*((cv::Mat*)objectPoints), *((cv::Mat*)imagePoints), *((cv::Mat*)cameraMatrix), *((cv::Mat*)distCoeffs), *((cv::Mat*)rvec), *((cv::Mat*)tvec), *reinterpret_cast<bool*>(&useExtrinsicGuess), *reinterpret_cast<int*>(&iterationsCount), *reinterpret_cast<float*>(&reprojectionError), *reinterpret_cast<int*>(&minInliersCount), *((cv::Mat*)inliers), *reinterpret_cast<int*>(&flags));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_solvePnP_InputArray_objectPoints_InputArray_imagePoints_InputArray_cameraMatrix_InputArray_distCoeffs_OutputArray_rvec_OutputArray_tvec_bool_useExtrinsicGuess_int_flags
// parsed: cv::solvePnP
// as:     cv::solvePnP (function)
// Arg ARG cv::Mat (boxed) objectPoints=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) imagePoints=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) cameraMatrix=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) distCoeffs=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) rvec=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) tvec=  cv::Mat (boxed) = 
// Arg ARG Primitive(bool) useExtrinsicGuess=  Primitive(bool) =false 
// Arg ARG Primitive(int) flags=  Primitive(int) =ITERATIVE 
// Return value: Primitive(bool)
struct cv_return_value_char cv_calib3d_cv_solvePnP_InputArray_objectPoints_InputArray_imagePoints_InputArray_cameraMatrix_InputArray_distCoeffs_OutputArray_rvec_OutputArray_tvec_bool_useExtrinsicGuess_int_flags(
        void* objectPoints,
        void* imagePoints,
        void* cameraMatrix,
        void* distCoeffs,
        void* rvec,
        void* tvec,
        char useExtrinsicGuess,
        int flags) {
  try {
  bool cpp_return_value = cv::solvePnP(*((cv::Mat*)objectPoints), *((cv::Mat*)imagePoints), *((cv::Mat*)cameraMatrix), *((cv::Mat*)distCoeffs), *((cv::Mat*)rvec), *((cv::Mat*)tvec), *reinterpret_cast<bool*>(&useExtrinsicGuess), *reinterpret_cast<int*>(&flags));
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

// cv_stereoRectifyUncalibrated_InputArray_points1_InputArray_points2_InputArray_F_Size_imgSize_OutputArray_H1_OutputArray_H2_double_threshold
// parsed: cv::stereoRectifyUncalibrated
// as:     cv::stereoRectifyUncalibrated (function)
// Arg ARG cv::Mat (boxed) points1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) points2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) F=  cv::Mat (boxed) = 
// Arg ARG Size (struct) imgSize=  Size (struct) = 
// Arg ARG cv::Mat (boxed) H1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) H2=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) threshold=  Primitive(double) =5 
// Return value: Primitive(bool)
struct cv_return_value_char cv_calib3d_cv_stereoRectifyUncalibrated_InputArray_points1_InputArray_points2_InputArray_F_Size_imgSize_OutputArray_H1_OutputArray_H2_double_threshold(
        void* points1,
        void* points2,
        void* F,
        c_Size imgSize,
        void* H1,
        void* H2,
        double threshold) {
  try {
  bool cpp_return_value = cv::stereoRectifyUncalibrated(*((cv::Mat*)points1), *((cv::Mat*)points2), *((cv::Mat*)F), *reinterpret_cast<Size*>(&imgSize), *((cv::Mat*)H1), *((cv::Mat*)H2), *reinterpret_cast<double*>(&threshold));
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

// cv_triangulatePoints_InputArray_projMatr1_InputArray_projMatr2_InputArray_projPoints1_InputArray_projPoints2_OutputArray_points4D
// parsed: cv::triangulatePoints
// as:     cv::triangulatePoints (function)
// Arg ARG cv::Mat (boxed) projMatr1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) projMatr2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) projPoints1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) projPoints2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) points4D=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_triangulatePoints_InputArray_projMatr1_InputArray_projMatr2_InputArray_projPoints1_InputArray_projPoints2_OutputArray_points4D(
        void* projMatr1,
        void* projMatr2,
        void* projPoints1,
        void* projPoints2,
        void* points4D) {
  try {
  cv::triangulatePoints(*((cv::Mat*)projMatr1), *((cv::Mat*)projMatr2), *((cv::Mat*)projPoints1), *((cv::Mat*)projPoints2), *((cv::Mat*)points4D));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}


// boxed class: cv::StereoBM
void cv_delete_StereoBM(void* instance) {
    delete (cv::StereoBM*) instance;
}
// cv_StereoBM_StereoBM
// parsed: cv::StereoBM::StereoBM
// as:     cv::StereoBM::StereoBM (constructor) cv::StereoBM . new
// Return value: cv::StereoBM (boxed)
struct cv_return_value_void_X cv_calib3d_cv_StereoBM_StereoBM(
        ) {
  try {
  cv::StereoBM* cpp_return_value = new cv::StereoBM();
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

// cv_StereoBM_StereoBM_int_preset_int_ndisparities_int_SADWindowSize
// parsed: cv::StereoBM::StereoBM
// as:     cv::StereoBM::StereoBM (constructor) cv::StereoBM . new
// Arg ARG Primitive(int) preset=  Primitive(int) = 
// Arg ARG Primitive(int) ndisparities=  Primitive(int) =0 
// Arg ARG Primitive(int) SADWindowSize=  Primitive(int) =21 
// Return value: cv::StereoBM (boxed)
struct cv_return_value_void_X cv_calib3d_cv_StereoBM_StereoBM_int_preset_int_ndisparities_int_SADWindowSize(
        int preset,
        int ndisparities,
        int SADWindowSize) {
  try {
  cv::StereoBM* cpp_return_value = new cv::StereoBM(*reinterpret_cast<int*>(&preset), *reinterpret_cast<int*>(&ndisparities), *reinterpret_cast<int*>(&SADWindowSize));
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

// cv_StereoBM_init_int_preset_int_ndisparities_int_SADWindowSize
// parsed: cv::StereoBM::init
// as:     cv::StereoBM::init (method) cv::StereoBM . init
// Arg ARG Primitive(int) preset=  Primitive(int) = 
// Arg ARG Primitive(int) ndisparities=  Primitive(int) =0 
// Arg ARG Primitive(int) SADWindowSize=  Primitive(int) =21 
// Return value: Primitive(void)
struct cv_return_value_void cv_calib3d_cv_StereoBM_init_int_preset_int_ndisparities_int_SADWindowSize(
        void* instance,
        int preset,
        int ndisparities,
        int SADWindowSize) {
  try {
  ((cv::StereoBM*) instance)->init(*reinterpret_cast<int*>(&preset), *reinterpret_cast<int*>(&ndisparities), *reinterpret_cast<int*>(&SADWindowSize));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}


// boxed class: cv::StereoSGBM
void cv_delete_StereoSGBM(void* instance) {
    delete (cv::StereoSGBM*) instance;
}
// cv_StereoSGBM_StereoSGBM
// parsed: cv::StereoSGBM::StereoSGBM
// as:     cv::StereoSGBM::StereoSGBM (constructor) cv::StereoSGBM . new
// Return value: cv::StereoSGBM (boxed)
struct cv_return_value_void_X cv_calib3d_cv_StereoSGBM_StereoSGBM(
        ) {
  try {
  cv::StereoSGBM* cpp_return_value = new cv::StereoSGBM();
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

// cv_StereoSGBM_StereoSGBM_int_minDisparity_int_numDisparities_int_SADWindowSize_int_P1_int_P2_int_disp12MaxDiff_int_preFilterCap_int_uniquenessRatio_int_speckleWindowSize_int_speckleRange_bool_fullDP
// parsed: cv::StereoSGBM::StereoSGBM
// as:     cv::StereoSGBM::StereoSGBM (constructor) cv::StereoSGBM . new
// Arg ARG Primitive(int) minDisparity=  Primitive(int) = 
// Arg ARG Primitive(int) numDisparities=  Primitive(int) = 
// Arg ARG Primitive(int) SADWindowSize=  Primitive(int) = 
// Arg ARG Primitive(int) P1=  Primitive(int) =0 
// Arg ARG Primitive(int) P2=  Primitive(int) =0 
// Arg ARG Primitive(int) disp12MaxDiff=  Primitive(int) =0 
// Arg ARG Primitive(int) preFilterCap=  Primitive(int) =0 
// Arg ARG Primitive(int) uniquenessRatio=  Primitive(int) =0 
// Arg ARG Primitive(int) speckleWindowSize=  Primitive(int) =0 
// Arg ARG Primitive(int) speckleRange=  Primitive(int) =0 
// Arg ARG Primitive(bool) fullDP=  Primitive(bool) =false 
// Return value: cv::StereoSGBM (boxed)
struct cv_return_value_void_X cv_calib3d_cv_StereoSGBM_StereoSGBM_int_minDisparity_int_numDisparities_int_SADWindowSize_int_P1_int_P2_int_disp12MaxDiff_int_preFilterCap_int_uniquenessRatio_int_speckleWindowSize_int_speckleRange_bool_fullDP(
        int minDisparity,
        int numDisparities,
        int SADWindowSize,
        int P1,
        int P2,
        int disp12MaxDiff,
        int preFilterCap,
        int uniquenessRatio,
        int speckleWindowSize,
        int speckleRange,
        char fullDP) {
  try {
  cv::StereoSGBM* cpp_return_value = new cv::StereoSGBM(*reinterpret_cast<int*>(&minDisparity), *reinterpret_cast<int*>(&numDisparities), *reinterpret_cast<int*>(&SADWindowSize), *reinterpret_cast<int*>(&P1), *reinterpret_cast<int*>(&P2), *reinterpret_cast<int*>(&disp12MaxDiff), *reinterpret_cast<int*>(&preFilterCap), *reinterpret_cast<int*>(&uniquenessRatio), *reinterpret_cast<int*>(&speckleWindowSize), *reinterpret_cast<int*>(&speckleRange), *reinterpret_cast<bool*>(&fullDP));
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

