
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

// cv_FASTX_InputArray_image_VectorOfKeyPoint_keypoints_int_threshold_bool_nonmaxSuppression_int_type
// parsed: cv::FASTX
// as:     cv::FASTX (function)
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Primitive(int) threshold=  Primitive(int) = 
// Arg ARG Primitive(bool) nonmaxSuppression=  Primitive(bool) = 
// Arg ARG Primitive(int) type=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_FASTX_InputArray_image_VectorOfKeyPoint_keypoints_int_threshold_bool_nonmaxSuppression_int_type(
        void* image,
        void* keypoints,
        int threshold,
        char nonmaxSuppression,
        int type) {
  try {
  cv::FASTX(*((cv::Mat*)image), *((vector<cv::KeyPoint >*)keypoints), *reinterpret_cast<int*>(&threshold), *reinterpret_cast<bool*>(&nonmaxSuppression), *reinterpret_cast<int*>(&type));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_FAST_InputArray_image_VectorOfKeyPoint_keypoints_int_threshold_bool_nonmaxSuppression
// parsed: cv::FAST
// as:     cv::FAST (function)
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Primitive(int) threshold=  Primitive(int) = 
// Arg ARG Primitive(bool) nonmaxSuppression=  Primitive(bool) =true 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_FAST_InputArray_image_VectorOfKeyPoint_keypoints_int_threshold_bool_nonmaxSuppression(
        void* image,
        void* keypoints,
        int threshold,
        char nonmaxSuppression) {
  try {
  cv::FAST(*((cv::Mat*)image), *((vector<cv::KeyPoint >*)keypoints), *reinterpret_cast<int*>(&threshold), *reinterpret_cast<bool*>(&nonmaxSuppression));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_computeRecallPrecisionCurve_VectorOfVectorOfDMatch_matches1to2_VectorOfVectorOfuchar_correctMatches1to2Mask_VectorOfPoint2f_recallPrecisionCurve
// parsed: cv::computeRecallPrecisionCurve
// as:     cv::computeRecallPrecisionCurve (function)
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches1to2=  Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Vector[Vector[Primitive(uchar)]] correctMatches1to2Mask=  Vector[Vector[Primitive(uchar)]] = 
// Arg ARG Vector[Point2f (struct)] recallPrecisionCurve=  Vector[Point2f (struct)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_computeRecallPrecisionCurve_VectorOfVectorOfDMatch_matches1to2_VectorOfVectorOfuchar_correctMatches1to2Mask_VectorOfPoint2f_recallPrecisionCurve(
        void* matches1to2,
        void* correctMatches1to2Mask,
        void* recallPrecisionCurve) {
  try {
  cv::computeRecallPrecisionCurve(*((vector<vector<cv::DMatch > >*)matches1to2), *((vector<vector<uchar > >*)correctMatches1to2Mask), *((vector<Point2f >*)recallPrecisionCurve));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_drawKeypoints_Mat_image_VectorOfKeyPoint_keypoints_Mat_outImage_Scalar_color_int_flags
// parsed: cv::drawKeypoints
// as:     cv::drawKeypoints (function)
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) outImage=  cv::Mat (boxed) = 
// Arg ARG Scalar (struct) color=  Scalar (struct) =Scalar::all(-1) 
// Arg ARG Primitive(int) flags=  Primitive(int) =DrawMatchesFlags::DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_drawKeypoints_Mat_image_VectorOfKeyPoint_keypoints_Mat_outImage_Scalar_color_int_flags(
        void* image,
        void* keypoints,
        void* outImage,
        c_Scalar color,
        int flags) {
  try {
  cv::drawKeypoints(*((cv::Mat*)image), *((vector<cv::KeyPoint >*)keypoints), *((cv::Mat*)outImage), *reinterpret_cast<Scalar*>(&color), *reinterpret_cast<int*>(&flags));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_drawMatches_Mat_img1_VectorOfKeyPoint_keypoints1_Mat_img2_VectorOfKeyPoint_keypoints2_VectorOfDMatch_matches1to2_Mat_outImg_Scalar_matchColor_Scalar_singlePointColor_VectorOfchar_matchesMask_int_flags
// parsed: cv::drawMatches
// as:     cv::drawMatches (function)
// Arg ARG cv::Mat (boxed) img1=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints1=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) img2=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints2=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[cv::DMatch (simple)] matches1to2=  Vector[cv::DMatch (simple)] = 
// Arg ARG cv::Mat (boxed) outImg=  cv::Mat (boxed) = 
// Arg ARG Scalar (struct) matchColor=  Scalar (struct) =Scalar::all(-1) 
// Arg ARG Scalar (struct) singlePointColor=  Scalar (struct) =Scalar::all(-1) 
// Arg ARG Vector[Primitive(char)] matchesMask=  Vector[Primitive(char)] =vector<char>() 
// Arg ARG Primitive(int) flags=  Primitive(int) =DrawMatchesFlags::DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_drawMatches_Mat_img1_VectorOfKeyPoint_keypoints1_Mat_img2_VectorOfKeyPoint_keypoints2_VectorOfDMatch_matches1to2_Mat_outImg_Scalar_matchColor_Scalar_singlePointColor_VectorOfchar_matchesMask_int_flags(
        void* img1,
        void* keypoints1,
        void* img2,
        void* keypoints2,
        void* matches1to2,
        void* outImg,
        c_Scalar matchColor,
        c_Scalar singlePointColor,
        void* matchesMask,
        int flags) {
  try {
  cv::drawMatches(*((cv::Mat*)img1), *((vector<cv::KeyPoint >*)keypoints1), *((cv::Mat*)img2), *((vector<cv::KeyPoint >*)keypoints2), *((vector<cv::DMatch >*)matches1to2), *((cv::Mat*)outImg), *reinterpret_cast<Scalar*>(&matchColor), *reinterpret_cast<Scalar*>(&singlePointColor), *((vector<char >*)matchesMask), *reinterpret_cast<int*>(&flags));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_drawMatches_Mat_img1_VectorOfKeyPoint_keypoints1_Mat_img2_VectorOfKeyPoint_keypoints2_VectorOfVectorOfDMatch_matches1to2_Mat_outImg_Scalar_matchColor_Scalar_singlePointColor_VectorOfVectorOfchar_matchesMask_int_flags
// parsed: cv::drawMatches
// as:     cv::drawMatches (function)
// Arg ARG cv::Mat (boxed) img1=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints1=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) img2=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints2=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches1to2=  Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG cv::Mat (boxed) outImg=  cv::Mat (boxed) = 
// Arg ARG Scalar (struct) matchColor=  Scalar (struct) =Scalar::all(-1) 
// Arg ARG Scalar (struct) singlePointColor=  Scalar (struct) =Scalar::all(-1) 
// Arg ARG Vector[Vector[Primitive(char)]] matchesMask=  Vector[Vector[Primitive(char)]] =vector<vector<char> >() 
// Arg ARG Primitive(int) flags=  Primitive(int) =DrawMatchesFlags::DEFAULT 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_drawMatches_Mat_img1_VectorOfKeyPoint_keypoints1_Mat_img2_VectorOfKeyPoint_keypoints2_VectorOfVectorOfDMatch_matches1to2_Mat_outImg_Scalar_matchColor_Scalar_singlePointColor_VectorOfVectorOfchar_matchesMask_int_flags(
        void* img1,
        void* keypoints1,
        void* img2,
        void* keypoints2,
        void* matches1to2,
        void* outImg,
        c_Scalar matchColor,
        c_Scalar singlePointColor,
        void* matchesMask,
        int flags) {
  try {
  cv::drawMatches(*((cv::Mat*)img1), *((vector<cv::KeyPoint >*)keypoints1), *((cv::Mat*)img2), *((vector<cv::KeyPoint >*)keypoints2), *((vector<vector<cv::DMatch > >*)matches1to2), *((cv::Mat*)outImg), *reinterpret_cast<Scalar*>(&matchColor), *reinterpret_cast<Scalar*>(&singlePointColor), *((vector<vector<char > >*)matchesMask), *reinterpret_cast<int*>(&flags));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_evaluateFeatureDetector_Mat_img1_Mat_img2_Mat_H1to2_VectorOfKeyPoint_keypoints1_VectorOfKeyPoint_keypoints2_float_repeatability_int_correspCount_PtrOfFeatureDetector_fdetector
// parsed: cv::evaluateFeatureDetector
// as:     cv::evaluateFeatureDetector (function)
// Arg ARG cv::Mat (boxed) img1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) img2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) H1to2=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] * keypoints1= (ptr) Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[cv::KeyPoint (simple)] * keypoints2= (ptr) Vector[cv::KeyPoint (simple)] = 
// Arg ARG Primitive(float) repeatability=  Primitive(float) = 
// Arg ARG Primitive(int) correspCount=  Primitive(int) = 
// Arg ARG SmartPtr[cv::FeatureDetector (boxed)] fdetector=  SmartPtr[cv::FeatureDetector (boxed)] =Ptr<FeatureDetector>() 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_evaluateFeatureDetector_Mat_img1_Mat_img2_Mat_H1to2_VectorOfKeyPoint_keypoints1_VectorOfKeyPoint_keypoints2_float_repeatability_int_correspCount_PtrOfFeatureDetector_fdetector(
        void* img1,
        void* img2,
        void* H1to2,
        void* keypoints1,
        void* keypoints2,
        float repeatability,
        int correspCount,
        void* fdetector) {
  try {
  cv::evaluateFeatureDetector(*((cv::Mat*)img1), *((cv::Mat*)img2), *((cv::Mat*)H1to2), ((vector<cv::KeyPoint >*)keypoints1), ((vector<cv::KeyPoint >*)keypoints2), *reinterpret_cast<float*>(&repeatability), *reinterpret_cast<int*>(&correspCount), reinterpret_cast<cv::FeatureDetector *>(fdetector));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_evaluateGenericDescriptorMatcher_Mat_img1_Mat_img2_Mat_H1to2_VectorOfKeyPoint_keypoints1_VectorOfKeyPoint_keypoints2_VectorOfVectorOfDMatch_matches1to2_VectorOfVectorOfuchar_correctMatches1to2Mask_VectorOfPoint2f_recallPrecisionCurve_PtrOfGenericDescriptorMatcher_dmatch
// parsed: cv::evaluateGenericDescriptorMatcher
// as:     cv::evaluateGenericDescriptorMatcher (function)
// Arg ARG cv::Mat (boxed) img1=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) img2=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) H1to2=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints1=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints2=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] * matches1to2= (ptr) Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Vector[Vector[Primitive(uchar)]] * correctMatches1to2Mask= (ptr) Vector[Vector[Primitive(uchar)]] = 
// Arg ARG Vector[Point2f (struct)] recallPrecisionCurve=  Vector[Point2f (struct)] = 
// Arg ARG SmartPtr[cv::GenericDescriptorMatcher (boxed)] dmatch=  SmartPtr[cv::GenericDescriptorMatcher (boxed)] =Ptr<GenericDescriptorMatcher>() 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_evaluateGenericDescriptorMatcher_Mat_img1_Mat_img2_Mat_H1to2_VectorOfKeyPoint_keypoints1_VectorOfKeyPoint_keypoints2_VectorOfVectorOfDMatch_matches1to2_VectorOfVectorOfuchar_correctMatches1to2Mask_VectorOfPoint2f_recallPrecisionCurve_PtrOfGenericDescriptorMatcher_dmatch(
        void* img1,
        void* img2,
        void* H1to2,
        void* keypoints1,
        void* keypoints2,
        void* matches1to2,
        void* correctMatches1to2Mask,
        void* recallPrecisionCurve,
        void* dmatch) {
  try {
  cv::evaluateGenericDescriptorMatcher(*((cv::Mat*)img1), *((cv::Mat*)img2), *((cv::Mat*)H1to2), *((vector<cv::KeyPoint >*)keypoints1), *((vector<cv::KeyPoint >*)keypoints2), ((vector<vector<cv::DMatch > >*)matches1to2), ((vector<vector<uchar > >*)correctMatches1to2Mask), *((vector<Point2f >*)recallPrecisionCurve), reinterpret_cast<cv::GenericDescriptorMatcher *>(dmatch));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_getNearestPoint_VectorOfPoint2f_recallPrecisionCurve_float_l_precision
// parsed: cv::getNearestPoint
// as:     cv::getNearestPoint (function)
// Arg ARG Vector[Point2f (struct)] recallPrecisionCurve=  Vector[Point2f (struct)] = 
// Arg ARG Primitive(float) l_precision=  Primitive(float) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_features2d_cv_getNearestPoint_VectorOfPoint2f_recallPrecisionCurve_float_l_precision(
        void* recallPrecisionCurve,
        float l_precision) {
  try {
  int cpp_return_value = cv::getNearestPoint(*((vector<Point2f >*)recallPrecisionCurve), *reinterpret_cast<float*>(&l_precision));
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

// cv_getRecall_VectorOfPoint2f_recallPrecisionCurve_float_l_precision
// parsed: cv::getRecall
// as:     cv::getRecall (function)
// Arg ARG Vector[Point2f (struct)] recallPrecisionCurve=  Vector[Point2f (struct)] = 
// Arg ARG Primitive(float) l_precision=  Primitive(float) = 
// Return value: Primitive(float)
struct cv_return_value_float cv_features2d_cv_getRecall_VectorOfPoint2f_recallPrecisionCurve_float_l_precision(
        void* recallPrecisionCurve,
        float l_precision) {
  try {
  float cpp_return_value = cv::getRecall(*((vector<Point2f >*)recallPrecisionCurve), *reinterpret_cast<float*>(&l_precision));
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

// cv_initModule_features2d
// parsed: cv::initModule_features2d
// as:     cv::initModule_features2d (function)
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_initModule_features2d(
        ) {
  try {
  bool cpp_return_value = cv::initModule_features2d();
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

// cv_windowedMatchingMask_VectorOfKeyPoint_keypoints1_VectorOfKeyPoint_keypoints2_float_maxDeltaX_float_maxDeltaY
// parsed: cv::windowedMatchingMask
// as:     cv::windowedMatchingMask (function)
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints1=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints2=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Primitive(float) maxDeltaX=  Primitive(float) = 
// Arg ARG Primitive(float) maxDeltaY=  Primitive(float) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_features2d_cv_windowedMatchingMask_VectorOfKeyPoint_keypoints1_VectorOfKeyPoint_keypoints2_float_maxDeltaX_float_maxDeltaY(
        void* keypoints1,
        void* keypoints2,
        float maxDeltaX,
        float maxDeltaY) {
  try {
  cv::Mat cpp_return_value = cv::windowedMatchingMask(*((vector<cv::KeyPoint >*)keypoints1), *((vector<cv::KeyPoint >*)keypoints2), *reinterpret_cast<float*>(&maxDeltaX), *reinterpret_cast<float*>(&maxDeltaY));
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


// boxed class: cv::BFMatcher
void cv_delete_BFMatcher(void* instance) {
    delete (cv::BFMatcher*) instance;
}
// cv_BFMatcher_BFMatcher_int_normType_bool_crossCheck
// parsed: cv::BFMatcher::BFMatcher
// as:     cv::BFMatcher::BFMatcher (constructor) cv::BFMatcher . new
// Arg ARG Primitive(int) normType=  Primitive(int) =NORM_L2 
// Arg ARG Primitive(bool) crossCheck=  Primitive(bool) =false 
// Return value: cv::BFMatcher (boxed)
struct cv_return_value_void_X cv_features2d_cv_BFMatcher_BFMatcher_int_normType_bool_crossCheck(
        int normType,
        char crossCheck) {
  try {
  cv::BFMatcher* cpp_return_value = new cv::BFMatcher(*reinterpret_cast<int*>(&normType), *reinterpret_cast<bool*>(&crossCheck));
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

// cv_BFMatcher_isMaskSupported
// parsed: cv::BFMatcher::isMaskSupported
// as:     cv::BFMatcher::isMaskSupported (method) cv::BFMatcher . isMaskSupported
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_BFMatcher_isMaskSupported(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::BFMatcher*) instance)->isMaskSupported();
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


// boxed class: cv::BOWImgDescriptorExtractor
void cv_delete_BOWImgDescriptorExtractor(void* instance) {
    delete (cv::BOWImgDescriptorExtractor*) instance;
}
// cv_BOWImgDescriptorExtractor_setVocabulary_Mat_vocabulary
// parsed: cv::BOWImgDescriptorExtractor::setVocabulary
// as:     cv::BOWImgDescriptorExtractor::setVocabulary (method) cv::BOWImgDescriptorExtractor . setVocabulary
// Arg ARG cv::Mat (boxed) vocabulary=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_BOWImgDescriptorExtractor_setVocabulary_Mat_vocabulary(
        void* instance,
        void* vocabulary) {
  try {
  ((cv::BOWImgDescriptorExtractor*) instance)->setVocabulary(*((cv::Mat*)vocabulary));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_BOWImgDescriptorExtractor_getVocabulary
// parsed: cv::BOWImgDescriptorExtractor::getVocabulary
// as:     cv::BOWImgDescriptorExtractor::getVocabulary (method) cv::BOWImgDescriptorExtractor . getVocabulary
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_features2d_cv_BOWImgDescriptorExtractor_getVocabulary(
        void* instance) {
  try {
  cv::Mat cpp_return_value = ((cv::BOWImgDescriptorExtractor*) instance)->getVocabulary();
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

// cv_BOWImgDescriptorExtractor_compute_Mat_image_VectorOfKeyPoint_keypoints_Mat_imgDescriptor_VectorOfVectorOfint_pointIdxsOfClusters_Mat_descriptors
// parsed: cv::BOWImgDescriptorExtractor::compute
// as:     cv::BOWImgDescriptorExtractor::compute (method) cv::BOWImgDescriptorExtractor . compute
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) imgDescriptor=  cv::Mat (boxed) = 
// Arg ARG Vector[Vector[Primitive(int)]] * pointIdxsOfClusters= (ptr) Vector[Vector[Primitive(int)]] =0 
// Arg ARG cv::Mat (boxed) * descriptors= (ptr) cv::Mat (boxed) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_BOWImgDescriptorExtractor_compute_Mat_image_VectorOfKeyPoint_keypoints_Mat_imgDescriptor_VectorOfVectorOfint_pointIdxsOfClusters_Mat_descriptors(
        void* instance,
        void* image,
        void* keypoints,
        void* imgDescriptor,
        void* pointIdxsOfClusters,
        void* descriptors) {
  try {
  ((cv::BOWImgDescriptorExtractor*) instance)->compute(*((cv::Mat*)image), *((vector<cv::KeyPoint >*)keypoints), *((cv::Mat*)imgDescriptor), ((vector<vector<int > >*)pointIdxsOfClusters), ((cv::Mat*)descriptors));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_BOWImgDescriptorExtractor_compute2_Mat_image_VectorOfKeyPoint_keypoints_Mat_imgDescriptor
// parsed: cv::BOWImgDescriptorExtractor::compute2
// as:     cv::BOWImgDescriptorExtractor::compute2 (method) cv::BOWImgDescriptorExtractor . compute2
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) imgDescriptor=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_BOWImgDescriptorExtractor_compute2_Mat_image_VectorOfKeyPoint_keypoints_Mat_imgDescriptor(
        void* instance,
        void* image,
        void* keypoints,
        void* imgDescriptor) {
  try {
  ((cv::BOWImgDescriptorExtractor*) instance)->compute2(*((cv::Mat*)image), *((vector<cv::KeyPoint >*)keypoints), *((cv::Mat*)imgDescriptor));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_BOWImgDescriptorExtractor_descriptorSize
// parsed: cv::BOWImgDescriptorExtractor::descriptorSize
// as:     cv::BOWImgDescriptorExtractor::descriptorSize (method) cv::BOWImgDescriptorExtractor . descriptorSize
// Return value: Primitive(int)
struct cv_return_value_int cv_features2d_cv_BOWImgDescriptorExtractor_descriptorSize(
        void* instance) {
  try {
  int cpp_return_value = ((cv::BOWImgDescriptorExtractor*) instance)->descriptorSize();
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

// cv_BOWImgDescriptorExtractor_descriptorType
// parsed: cv::BOWImgDescriptorExtractor::descriptorType
// as:     cv::BOWImgDescriptorExtractor::descriptorType (method) cv::BOWImgDescriptorExtractor . descriptorType
// Return value: Primitive(int)
struct cv_return_value_int cv_features2d_cv_BOWImgDescriptorExtractor_descriptorType(
        void* instance) {
  try {
  int cpp_return_value = ((cv::BOWImgDescriptorExtractor*) instance)->descriptorType();
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


// boxed class: cv::BOWKMeansTrainer
void cv_delete_BOWKMeansTrainer(void* instance) {
    delete (cv::BOWKMeansTrainer*) instance;
}
// cv_BOWKMeansTrainer_cluster
// parsed: cv::BOWKMeansTrainer::cluster
// as:     cv::BOWKMeansTrainer::cluster (method) cv::BOWKMeansTrainer . cluster
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_features2d_cv_BOWKMeansTrainer_cluster(
        void* instance) {
  try {
  cv::Mat cpp_return_value = ((cv::BOWKMeansTrainer*) instance)->cluster();
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

// cv_BOWKMeansTrainer_cluster_Mat_descriptors
// parsed: cv::BOWKMeansTrainer::cluster
// as:     cv::BOWKMeansTrainer::cluster (method) cv::BOWKMeansTrainer . cluster
// Arg ARG cv::Mat (boxed) descriptors=  cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_features2d_cv_BOWKMeansTrainer_cluster_Mat_descriptors(
        void* instance,
        void* descriptors) {
  try {
  cv::Mat cpp_return_value = ((cv::BOWKMeansTrainer*) instance)->cluster(*((cv::Mat*)descriptors));
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

// cv_BOWTrainer_add_Mat_descriptors
// parsed: cv::BOWTrainer::add
// as:     cv::BOWTrainer::add (method) cv::BOWTrainer . add
// Arg ARG cv::Mat (boxed) descriptors=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_BOWTrainer_add_Mat_descriptors(
        void* instance,
        void* descriptors) {
  try {
  ((cv::BOWTrainer*) instance)->add(*((cv::Mat*)descriptors));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_BOWTrainer_getDescriptors
// parsed: cv::BOWTrainer::getDescriptors
// as:     cv::BOWTrainer::getDescriptors (method) cv::BOWTrainer . getDescriptors
// Return value: Vector[cv::Mat (boxed)]
struct cv_return_value_void_X cv_features2d_cv_BOWTrainer_getDescriptors(
        void* instance) {
  try {
  vector<cv::Mat > cpp_return_value = ((cv::BOWTrainer*) instance)->getDescriptors();
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

// cv_BOWTrainer_descripotorsCount
// parsed: cv::BOWTrainer::descripotorsCount
// as:     cv::BOWTrainer::descripotorsCount (method) cv::BOWTrainer . descripotorsCount
// Return value: Primitive(int)
struct cv_return_value_int cv_features2d_cv_BOWTrainer_descripotorsCount(
        void* instance) {
  try {
  int cpp_return_value = ((cv::BOWTrainer*) instance)->descripotorsCount();
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

// cv_BOWTrainer_clear
// parsed: cv::BOWTrainer::clear
// as:     cv::BOWTrainer::clear (method) cv::BOWTrainer . clear
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_BOWTrainer_clear(
        void* instance) {
  try {
  ((cv::BOWTrainer*) instance)->clear();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}


// boxed class: cv::BRISK
void cv_delete_BRISK(void* instance) {
    delete (cv::BRISK*) instance;
}
// cv_BRISK_BRISK_int_thresh_int_octaves_float_patternScale
// parsed: cv::BRISK::BRISK
// as:     cv::BRISK::BRISK (constructor) cv::BRISK . new
// Arg ARG Primitive(int) thresh=  Primitive(int) =30 
// Arg ARG Primitive(int) octaves=  Primitive(int) =3 
// Arg ARG Primitive(float) patternScale=  Primitive(float) =1.0f 
// Return value: cv::BRISK (boxed)
struct cv_return_value_void_X cv_features2d_cv_BRISK_BRISK_int_thresh_int_octaves_float_patternScale(
        int thresh,
        int octaves,
        float patternScale) {
  try {
  cv::BRISK* cpp_return_value = new cv::BRISK(*reinterpret_cast<int*>(&thresh), *reinterpret_cast<int*>(&octaves), *reinterpret_cast<float*>(&patternScale));
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

// cv_BRISK_descriptorSize
// parsed: cv::BRISK::descriptorSize
// as:     cv::BRISK::descriptorSize (method) cv::BRISK . descriptorSize
// Return value: Primitive(int)
struct cv_return_value_int cv_features2d_cv_BRISK_descriptorSize(
        void* instance) {
  try {
  int cpp_return_value = ((cv::BRISK*) instance)->descriptorSize();
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

// cv_BRISK_descriptorType
// parsed: cv::BRISK::descriptorType
// as:     cv::BRISK::descriptorType (method) cv::BRISK . descriptorType
// Return value: Primitive(int)
struct cv_return_value_int cv_features2d_cv_BRISK_descriptorType(
        void* instance) {
  try {
  int cpp_return_value = ((cv::BRISK*) instance)->descriptorType();
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


// boxed class: cv::BriefDescriptorExtractor
void cv_delete_BriefDescriptorExtractor(void* instance) {
    delete (cv::BriefDescriptorExtractor*) instance;
}
// cv_BriefDescriptorExtractor_BriefDescriptorExtractor_int_bytes
// parsed: cv::BriefDescriptorExtractor::BriefDescriptorExtractor
// as:     cv::BriefDescriptorExtractor::BriefDescriptorExtractor (constructor) cv::BriefDescriptorExtractor . new
// Arg ARG Primitive(int) bytes=  Primitive(int) =32 
// Return value: cv::BriefDescriptorExtractor (boxed)
struct cv_return_value_void_X cv_features2d_cv_BriefDescriptorExtractor_BriefDescriptorExtractor_int_bytes(
        int bytes) {
  try {
  cv::BriefDescriptorExtractor* cpp_return_value = new cv::BriefDescriptorExtractor(*reinterpret_cast<int*>(&bytes));
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

// cv_BriefDescriptorExtractor_descriptorSize
// parsed: cv::BriefDescriptorExtractor::descriptorSize
// as:     cv::BriefDescriptorExtractor::descriptorSize (method) cv::BriefDescriptorExtractor . descriptorSize
// Return value: Primitive(int)
struct cv_return_value_int cv_features2d_cv_BriefDescriptorExtractor_descriptorSize(
        void* instance) {
  try {
  int cpp_return_value = ((cv::BriefDescriptorExtractor*) instance)->descriptorSize();
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

// cv_BriefDescriptorExtractor_descriptorType
// parsed: cv::BriefDescriptorExtractor::descriptorType
// as:     cv::BriefDescriptorExtractor::descriptorType (method) cv::BriefDescriptorExtractor . descriptorType
// Return value: Primitive(int)
struct cv_return_value_int cv_features2d_cv_BriefDescriptorExtractor_descriptorType(
        void* instance) {
  try {
  int cpp_return_value = ((cv::BriefDescriptorExtractor*) instance)->descriptorType();
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

// cv_DMatch_DMatch
// parsed: cv::DMatch::DMatch
// as:     cv::DMatch::DMatch (constructor) cv::DMatch (simple) . new
// Return value: cv::DMatch (simple)
struct cv_return_value_c_DMatch cv_features2d_cv_DMatch_DMatch(
        ) {
  try {
  cv::DMatch cpp_return_value;
  return { NULL, *reinterpret_cast<c_DMatch*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_DMatch ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_DMatch ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_DMatch_DMatch_int__queryIdx_int__trainIdx_float__distance
// parsed: cv::DMatch::DMatch
// as:     cv::DMatch::DMatch (constructor) cv::DMatch (simple) . new
// Arg ARG Primitive(int) _queryIdx=  Primitive(int) = 
// Arg ARG Primitive(int) _trainIdx=  Primitive(int) = 
// Arg ARG Primitive(float) _distance=  Primitive(float) = 
// Return value: cv::DMatch (simple)
struct cv_return_value_c_DMatch cv_features2d_cv_DMatch_DMatch_int__queryIdx_int__trainIdx_float__distance(
        int _queryIdx,
        int _trainIdx,
        float _distance) {
  try {
  cv::DMatch cpp_return_value(*reinterpret_cast<int*>(&_queryIdx), *reinterpret_cast<int*>(&_trainIdx), *reinterpret_cast<float*>(&_distance));
  return { NULL, *reinterpret_cast<c_DMatch*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_DMatch ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_DMatch ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_DMatch_DMatch_int__queryIdx_int__trainIdx_int__imgIdx_float__distance
// parsed: cv::DMatch::DMatch
// as:     cv::DMatch::DMatch (constructor) cv::DMatch (simple) . new
// Arg ARG Primitive(int) _queryIdx=  Primitive(int) = 
// Arg ARG Primitive(int) _trainIdx=  Primitive(int) = 
// Arg ARG Primitive(int) _imgIdx=  Primitive(int) = 
// Arg ARG Primitive(float) _distance=  Primitive(float) = 
// Return value: cv::DMatch (simple)
struct cv_return_value_c_DMatch cv_features2d_cv_DMatch_DMatch_int__queryIdx_int__trainIdx_int__imgIdx_float__distance(
        int _queryIdx,
        int _trainIdx,
        int _imgIdx,
        float _distance) {
  try {
  cv::DMatch cpp_return_value(*reinterpret_cast<int*>(&_queryIdx), *reinterpret_cast<int*>(&_trainIdx), *reinterpret_cast<int*>(&_imgIdx), *reinterpret_cast<float*>(&_distance));
  return { NULL, *reinterpret_cast<c_DMatch*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_DMatch ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_DMatch ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}


// boxed class: cv::DenseFeatureDetector
void cv_delete_DenseFeatureDetector(void* instance) {
    delete (cv::DenseFeatureDetector*) instance;
}
// cv_DenseFeatureDetector_DenseFeatureDetector_float_initFeatureScale_int_featureScaleLevels_float_featureScaleMul_int_initXyStep_int_initImgBound_bool_varyXyStepWithScale_bool_varyImgBoundWithScale
// parsed: cv::DenseFeatureDetector::DenseFeatureDetector
// as:     cv::DenseFeatureDetector::DenseFeatureDetector (constructor) cv::DenseFeatureDetector . new
// Arg ARG Primitive(float) initFeatureScale=  Primitive(float) =1.f 
// Arg ARG Primitive(int) featureScaleLevels=  Primitive(int) =1 
// Arg ARG Primitive(float) featureScaleMul=  Primitive(float) =0.1f 
// Arg ARG Primitive(int) initXyStep=  Primitive(int) =6 
// Arg ARG Primitive(int) initImgBound=  Primitive(int) =0 
// Arg ARG Primitive(bool) varyXyStepWithScale=  Primitive(bool) =true 
// Arg ARG Primitive(bool) varyImgBoundWithScale=  Primitive(bool) =false 
// Return value: cv::DenseFeatureDetector (boxed)
struct cv_return_value_void_X cv_features2d_cv_DenseFeatureDetector_DenseFeatureDetector_float_initFeatureScale_int_featureScaleLevels_float_featureScaleMul_int_initXyStep_int_initImgBound_bool_varyXyStepWithScale_bool_varyImgBoundWithScale(
        float initFeatureScale,
        int featureScaleLevels,
        float featureScaleMul,
        int initXyStep,
        int initImgBound,
        char varyXyStepWithScale,
        char varyImgBoundWithScale) {
  try {
  cv::DenseFeatureDetector* cpp_return_value = new cv::DenseFeatureDetector(*reinterpret_cast<float*>(&initFeatureScale), *reinterpret_cast<int*>(&featureScaleLevels), *reinterpret_cast<float*>(&featureScaleMul), *reinterpret_cast<int*>(&initXyStep), *reinterpret_cast<int*>(&initImgBound), *reinterpret_cast<bool*>(&varyXyStepWithScale), *reinterpret_cast<bool*>(&varyImgBoundWithScale));
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

// cv_DescriptorExtractor_compute_Mat_image_VectorOfKeyPoint_keypoints_Mat_descriptors
// parsed: cv::DescriptorExtractor::compute
// as:     cv::DescriptorExtractor::compute (method) cv::DescriptorExtractor . compute
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) descriptors=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_DescriptorExtractor_compute_Mat_image_VectorOfKeyPoint_keypoints_Mat_descriptors(
        void* instance,
        void* image,
        void* keypoints,
        void* descriptors) {
  try {
  ((cv::DescriptorExtractor*) instance)->compute(*((cv::Mat*)image), *((vector<cv::KeyPoint >*)keypoints), *((cv::Mat*)descriptors));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_DescriptorExtractor_compute_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints_VectorOfMat_descriptors
// parsed: cv::DescriptorExtractor::compute
// as:     cv::DescriptorExtractor::compute (method) cv::DescriptorExtractor . compute
// Arg ARG Vector[cv::Mat (boxed)] images=  Vector[cv::Mat (boxed)] = 
// Arg ARG Vector[Vector[cv::KeyPoint (simple)]] keypoints=  Vector[Vector[cv::KeyPoint (simple)]] = 
// Arg ARG Vector[cv::Mat (boxed)] descriptors=  Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_DescriptorExtractor_compute_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints_VectorOfMat_descriptors(
        void* instance,
        void* images,
        void* keypoints,
        void* descriptors) {
  try {
  ((cv::DescriptorExtractor*) instance)->compute(*((vector<cv::Mat >*)images), *((vector<vector<cv::KeyPoint > >*)keypoints), *((vector<cv::Mat >*)descriptors));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_DescriptorExtractor_empty
// parsed: cv::DescriptorExtractor::empty
// as:     cv::DescriptorExtractor::empty (method) cv::DescriptorExtractor . empty
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_DescriptorExtractor_empty(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::DescriptorExtractor*) instance)->empty();
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

// cv_DescriptorMatcher_add_VectorOfMat_descriptors
// parsed: cv::DescriptorMatcher::add
// as:     cv::DescriptorMatcher::add (method) cv::DescriptorMatcher . add
// Arg ARG Vector[cv::Mat (boxed)] descriptors=  Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_DescriptorMatcher_add_VectorOfMat_descriptors(
        void* instance,
        void* descriptors) {
  try {
  ((cv::DescriptorMatcher*) instance)->add(*((vector<cv::Mat >*)descriptors));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_DescriptorMatcher_getTrainDescriptors
// parsed: cv::DescriptorMatcher::getTrainDescriptors
// as:     cv::DescriptorMatcher::getTrainDescriptors (method) cv::DescriptorMatcher . getTrainDescriptors
// Return value: Vector[cv::Mat (boxed)]
struct cv_return_value_void_X cv_features2d_cv_DescriptorMatcher_getTrainDescriptors(
        void* instance) {
  try {
  vector<cv::Mat > cpp_return_value = ((cv::DescriptorMatcher*) instance)->getTrainDescriptors();
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

// cv_DescriptorMatcher_clear
// parsed: cv::DescriptorMatcher::clear
// as:     cv::DescriptorMatcher::clear (method) cv::DescriptorMatcher . clear
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_DescriptorMatcher_clear(
        void* instance) {
  try {
  ((cv::DescriptorMatcher*) instance)->clear();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_DescriptorMatcher_empty
// parsed: cv::DescriptorMatcher::empty
// as:     cv::DescriptorMatcher::empty (method) cv::DescriptorMatcher . empty
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_DescriptorMatcher_empty(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::DescriptorMatcher*) instance)->empty();
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

// cv_DescriptorMatcher_train
// parsed: cv::DescriptorMatcher::train
// as:     cv::DescriptorMatcher::train (method) cv::DescriptorMatcher . train
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_DescriptorMatcher_train(
        void* instance) {
  try {
  ((cv::DescriptorMatcher*) instance)->train();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_DescriptorMatcher_match_Mat_queryDescriptors_Mat_trainDescriptors_VectorOfDMatch_matches_Mat_mask
// parsed: cv::DescriptorMatcher::match
// as:     cv::DescriptorMatcher::match (method) cv::DescriptorMatcher . match
// Arg ARG cv::Mat (boxed) queryDescriptors=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) trainDescriptors=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::DMatch (simple)] matches=  Vector[cv::DMatch (simple)] = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =Mat() 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_DescriptorMatcher_match_Mat_queryDescriptors_Mat_trainDescriptors_VectorOfDMatch_matches_Mat_mask(
        void* instance,
        void* queryDescriptors,
        void* trainDescriptors,
        void* matches,
        void* mask) {
  try {
  ((cv::DescriptorMatcher*) instance)->match(*((cv::Mat*)queryDescriptors), *((cv::Mat*)trainDescriptors), *((vector<cv::DMatch >*)matches), *((cv::Mat*)mask));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_DescriptorMatcher_knnMatch_Mat_queryDescriptors_Mat_trainDescriptors_VectorOfVectorOfDMatch_matches_int_k_Mat_mask_bool_compactResult
// parsed: cv::DescriptorMatcher::knnMatch
// as:     cv::DescriptorMatcher::knnMatch (method) cv::DescriptorMatcher . knnMatch
// Arg ARG cv::Mat (boxed) queryDescriptors=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) trainDescriptors=  cv::Mat (boxed) = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches=  Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(int) k=  Primitive(int) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =Mat() 
// Arg ARG Primitive(bool) compactResult=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_DescriptorMatcher_knnMatch_Mat_queryDescriptors_Mat_trainDescriptors_VectorOfVectorOfDMatch_matches_int_k_Mat_mask_bool_compactResult(
        void* instance,
        void* queryDescriptors,
        void* trainDescriptors,
        void* matches,
        int k,
        void* mask,
        char compactResult) {
  try {
  ((cv::DescriptorMatcher*) instance)->knnMatch(*((cv::Mat*)queryDescriptors), *((cv::Mat*)trainDescriptors), *((vector<vector<cv::DMatch > >*)matches), *reinterpret_cast<int*>(&k), *((cv::Mat*)mask), *reinterpret_cast<bool*>(&compactResult));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_DescriptorMatcher_radiusMatch_Mat_queryDescriptors_Mat_trainDescriptors_VectorOfVectorOfDMatch_matches_float_maxDistance_Mat_mask_bool_compactResult
// parsed: cv::DescriptorMatcher::radiusMatch
// as:     cv::DescriptorMatcher::radiusMatch (method) cv::DescriptorMatcher . radiusMatch
// Arg ARG cv::Mat (boxed) queryDescriptors=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) trainDescriptors=  cv::Mat (boxed) = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches=  Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(float) maxDistance=  Primitive(float) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =Mat() 
// Arg ARG Primitive(bool) compactResult=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_DescriptorMatcher_radiusMatch_Mat_queryDescriptors_Mat_trainDescriptors_VectorOfVectorOfDMatch_matches_float_maxDistance_Mat_mask_bool_compactResult(
        void* instance,
        void* queryDescriptors,
        void* trainDescriptors,
        void* matches,
        float maxDistance,
        void* mask,
        char compactResult) {
  try {
  ((cv::DescriptorMatcher*) instance)->radiusMatch(*((cv::Mat*)queryDescriptors), *((cv::Mat*)trainDescriptors), *((vector<vector<cv::DMatch > >*)matches), *reinterpret_cast<float*>(&maxDistance), *((cv::Mat*)mask), *reinterpret_cast<bool*>(&compactResult));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_DescriptorMatcher_match_Mat_queryDescriptors_VectorOfDMatch_matches_VectorOfMat_masks
// parsed: cv::DescriptorMatcher::match
// as:     cv::DescriptorMatcher::match (method) cv::DescriptorMatcher . match
// Arg ARG cv::Mat (boxed) queryDescriptors=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::DMatch (simple)] matches=  Vector[cv::DMatch (simple)] = 
// Arg ARG Vector[cv::Mat (boxed)] masks=  Vector[cv::Mat (boxed)] =vector<Mat>() 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_DescriptorMatcher_match_Mat_queryDescriptors_VectorOfDMatch_matches_VectorOfMat_masks(
        void* instance,
        void* queryDescriptors,
        void* matches,
        void* masks) {
  try {
  ((cv::DescriptorMatcher*) instance)->match(*((cv::Mat*)queryDescriptors), *((vector<cv::DMatch >*)matches), *((vector<cv::Mat >*)masks));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_DescriptorMatcher_knnMatch_Mat_queryDescriptors_VectorOfVectorOfDMatch_matches_int_k_VectorOfMat_masks_bool_compactResult
// parsed: cv::DescriptorMatcher::knnMatch
// as:     cv::DescriptorMatcher::knnMatch (method) cv::DescriptorMatcher . knnMatch
// Arg ARG cv::Mat (boxed) queryDescriptors=  cv::Mat (boxed) = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches=  Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(int) k=  Primitive(int) = 
// Arg ARG Vector[cv::Mat (boxed)] masks=  Vector[cv::Mat (boxed)] =vector<Mat>() 
// Arg ARG Primitive(bool) compactResult=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_DescriptorMatcher_knnMatch_Mat_queryDescriptors_VectorOfVectorOfDMatch_matches_int_k_VectorOfMat_masks_bool_compactResult(
        void* instance,
        void* queryDescriptors,
        void* matches,
        int k,
        void* masks,
        char compactResult) {
  try {
  ((cv::DescriptorMatcher*) instance)->knnMatch(*((cv::Mat*)queryDescriptors), *((vector<vector<cv::DMatch > >*)matches), *reinterpret_cast<int*>(&k), *((vector<cv::Mat >*)masks), *reinterpret_cast<bool*>(&compactResult));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_DescriptorMatcher_radiusMatch_Mat_queryDescriptors_VectorOfVectorOfDMatch_matches_float_maxDistance_VectorOfMat_masks_bool_compactResult
// parsed: cv::DescriptorMatcher::radiusMatch
// as:     cv::DescriptorMatcher::radiusMatch (method) cv::DescriptorMatcher . radiusMatch
// Arg ARG cv::Mat (boxed) queryDescriptors=  cv::Mat (boxed) = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches=  Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(float) maxDistance=  Primitive(float) = 
// Arg ARG Vector[cv::Mat (boxed)] masks=  Vector[cv::Mat (boxed)] =vector<Mat>() 
// Arg ARG Primitive(bool) compactResult=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_DescriptorMatcher_radiusMatch_Mat_queryDescriptors_VectorOfVectorOfDMatch_matches_float_maxDistance_VectorOfMat_masks_bool_compactResult(
        void* instance,
        void* queryDescriptors,
        void* matches,
        float maxDistance,
        void* masks,
        char compactResult) {
  try {
  ((cv::DescriptorMatcher*) instance)->radiusMatch(*((cv::Mat*)queryDescriptors), *((vector<vector<cv::DMatch > >*)matches), *reinterpret_cast<float*>(&maxDistance), *((vector<cv::Mat >*)masks), *reinterpret_cast<bool*>(&compactResult));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}


// boxed class: cv::DrawMatchesFlags
void cv_delete_DrawMatchesFlags(void* instance) {
    delete (cv::DrawMatchesFlags*) instance;
}

// boxed class: cv::DynamicAdaptedFeatureDetector
void cv_delete_DynamicAdaptedFeatureDetector(void* instance) {
    delete (cv::DynamicAdaptedFeatureDetector*) instance;
}
// cv_DynamicAdaptedFeatureDetector_empty
// parsed: cv::DynamicAdaptedFeatureDetector::empty
// as:     cv::DynamicAdaptedFeatureDetector::empty (method) cv::DynamicAdaptedFeatureDetector . empty
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_DynamicAdaptedFeatureDetector_empty(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::DynamicAdaptedFeatureDetector*) instance)->empty();
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


// boxed class: cv::FREAK
void cv_delete_FREAK(void* instance) {
    delete (cv::FREAK*) instance;
}
// cv_FREAK_FREAK_bool_orientationNormalized_bool_scaleNormalized_float_patternScale_int_nOctaves_VectorOfint_selectedPairs
// parsed: cv::FREAK::FREAK
// as:     cv::FREAK::FREAK (constructor) cv::FREAK . new
// Arg ARG Primitive(bool) orientationNormalized=  Primitive(bool) =true 
// Arg ARG Primitive(bool) scaleNormalized=  Primitive(bool) =true 
// Arg ARG Primitive(float) patternScale=  Primitive(float) =22.0f 
// Arg ARG Primitive(int) nOctaves=  Primitive(int) =4 
// Arg ARG Vector[Primitive(int)] selectedPairs=  Vector[Primitive(int)] =vector<int>() 
// Return value: cv::FREAK (boxed)
struct cv_return_value_void_X cv_features2d_cv_FREAK_FREAK_bool_orientationNormalized_bool_scaleNormalized_float_patternScale_int_nOctaves_VectorOfint_selectedPairs(
        char orientationNormalized,
        char scaleNormalized,
        float patternScale,
        int nOctaves,
        void* selectedPairs) {
  try {
  cv::FREAK* cpp_return_value = new cv::FREAK(*reinterpret_cast<bool*>(&orientationNormalized), *reinterpret_cast<bool*>(&scaleNormalized), *reinterpret_cast<float*>(&patternScale), *reinterpret_cast<int*>(&nOctaves), *((vector<int >*)selectedPairs));
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

// cv_FREAK_FREAK_FREAK_rhs
// parsed: cv::FREAK::FREAK
// as:     cv::FREAK::FREAK (constructor) cv::FREAK . new
// Arg ARG cv::FREAK (boxed) rhs=  cv::FREAK (boxed) = 
// Return value: cv::FREAK (boxed)
struct cv_return_value_void_X cv_features2d_cv_FREAK_FREAK_FREAK_rhs(
        void* rhs) {
  try {
  cv::FREAK* cpp_return_value = new cv::FREAK(*((cv::FREAK*)rhs));
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

// cv_FREAK_descriptorSize
// parsed: cv::FREAK::descriptorSize
// as:     cv::FREAK::descriptorSize (method) cv::FREAK . descriptorSize
// Return value: Primitive(int)
struct cv_return_value_int cv_features2d_cv_FREAK_descriptorSize(
        void* instance) {
  try {
  int cpp_return_value = ((cv::FREAK*) instance)->descriptorSize();
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

// cv_FREAK_descriptorType
// parsed: cv::FREAK::descriptorType
// as:     cv::FREAK::descriptorType (method) cv::FREAK . descriptorType
// Return value: Primitive(int)
struct cv_return_value_int cv_features2d_cv_FREAK_descriptorType(
        void* instance) {
  try {
  int cpp_return_value = ((cv::FREAK*) instance)->descriptorType();
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

// cv_FREAK_selectPairs_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints_double_corrThresh_bool_verbose
// parsed: cv::FREAK::selectPairs
// as:     cv::FREAK::selectPairs (method) cv::FREAK . selectPairs
// Arg ARG Vector[cv::Mat (boxed)] images=  Vector[cv::Mat (boxed)] = 
// Arg ARG Vector[Vector[cv::KeyPoint (simple)]] keypoints=  Vector[Vector[cv::KeyPoint (simple)]] = 
// Arg ARG Primitive(double) corrThresh=  Primitive(double) =0.7 
// Arg ARG Primitive(bool) verbose=  Primitive(bool) =true 
// Return value: Vector[Primitive(int)]
struct cv_return_value_void_X cv_features2d_cv_FREAK_selectPairs_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints_double_corrThresh_bool_verbose(
        void* instance,
        void* images,
        void* keypoints,
        double corrThresh,
        char verbose) {
  try {
  vector<int > cpp_return_value = ((cv::FREAK*) instance)->selectPairs(*((vector<cv::Mat >*)images), *((vector<vector<cv::KeyPoint > >*)keypoints), *reinterpret_cast<double*>(&corrThresh), *reinterpret_cast<bool*>(&verbose));
  return { NULL, (void*) new vector<int >(cpp_return_value) };
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


// boxed class: cv::FastAdjuster
void cv_delete_FastAdjuster(void* instance) {
    delete (cv::FastAdjuster*) instance;
}
// cv_FastAdjuster_FastAdjuster_int_init_thresh_bool_nonmax_int_min_thresh_int_max_thresh
// parsed: cv::FastAdjuster::FastAdjuster
// as:     cv::FastAdjuster::FastAdjuster (constructor) cv::FastAdjuster . new
// Arg ARG Primitive(int) init_thresh=  Primitive(int) =20 
// Arg ARG Primitive(bool) nonmax=  Primitive(bool) =true 
// Arg ARG Primitive(int) min_thresh=  Primitive(int) =1 
// Arg ARG Primitive(int) max_thresh=  Primitive(int) =200 
// Return value: cv::FastAdjuster (boxed)
struct cv_return_value_void_X cv_features2d_cv_FastAdjuster_FastAdjuster_int_init_thresh_bool_nonmax_int_min_thresh_int_max_thresh(
        int init_thresh,
        char nonmax,
        int min_thresh,
        int max_thresh) {
  try {
  cv::FastAdjuster* cpp_return_value = new cv::FastAdjuster(*reinterpret_cast<int*>(&init_thresh), *reinterpret_cast<bool*>(&nonmax), *reinterpret_cast<int*>(&min_thresh), *reinterpret_cast<int*>(&max_thresh));
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

// cv_FastAdjuster_tooFew_int_minv_int_n_detected
// parsed: cv::FastAdjuster::tooFew
// as:     cv::FastAdjuster::tooFew (method) cv::FastAdjuster . tooFew
// Arg ARG Primitive(int) minv=  Primitive(int) = 
// Arg ARG Primitive(int) n_detected=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_FastAdjuster_tooFew_int_minv_int_n_detected(
        void* instance,
        int minv,
        int n_detected) {
  try {
  ((cv::FastAdjuster*) instance)->tooFew(*reinterpret_cast<int*>(&minv), *reinterpret_cast<int*>(&n_detected));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_FastAdjuster_tooMany_int_maxv_int_n_detected
// parsed: cv::FastAdjuster::tooMany
// as:     cv::FastAdjuster::tooMany (method) cv::FastAdjuster . tooMany
// Arg ARG Primitive(int) maxv=  Primitive(int) = 
// Arg ARG Primitive(int) n_detected=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_FastAdjuster_tooMany_int_maxv_int_n_detected(
        void* instance,
        int maxv,
        int n_detected) {
  try {
  ((cv::FastAdjuster*) instance)->tooMany(*reinterpret_cast<int*>(&maxv), *reinterpret_cast<int*>(&n_detected));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_FastAdjuster_good
// parsed: cv::FastAdjuster::good
// as:     cv::FastAdjuster::good (method) cv::FastAdjuster . good
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_FastAdjuster_good(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::FastAdjuster*) instance)->good();
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


// boxed class: cv::FastFeatureDetector
void cv_delete_FastFeatureDetector(void* instance) {
    delete (cv::FastFeatureDetector*) instance;
}
// cv_FastFeatureDetector_FastFeatureDetector_int_threshold_bool_nonmaxSuppression
// parsed: cv::FastFeatureDetector::FastFeatureDetector
// as:     cv::FastFeatureDetector::FastFeatureDetector (constructor) cv::FastFeatureDetector . new
// Arg ARG Primitive(int) threshold=  Primitive(int) =10 
// Arg ARG Primitive(bool) nonmaxSuppression=  Primitive(bool) =true 
// Return value: cv::FastFeatureDetector (boxed)
struct cv_return_value_void_X cv_features2d_cv_FastFeatureDetector_FastFeatureDetector_int_threshold_bool_nonmaxSuppression(
        int threshold,
        char nonmaxSuppression) {
  try {
  cv::FastFeatureDetector* cpp_return_value = new cv::FastFeatureDetector(*reinterpret_cast<int*>(&threshold), *reinterpret_cast<bool*>(&nonmaxSuppression));
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

// cv_FeatureDetector_detect_Mat_image_VectorOfKeyPoint_keypoints_Mat_mask
// parsed: cv::FeatureDetector::detect
// as:     cv::FeatureDetector::detect (method) cv::FeatureDetector . detect
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =Mat() 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_FeatureDetector_detect_Mat_image_VectorOfKeyPoint_keypoints_Mat_mask(
        void* instance,
        void* image,
        void* keypoints,
        void* mask) {
  try {
  ((cv::FeatureDetector*) instance)->detect(*((cv::Mat*)image), *((vector<cv::KeyPoint >*)keypoints), *((cv::Mat*)mask));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_FeatureDetector_detect_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints_VectorOfMat_masks
// parsed: cv::FeatureDetector::detect
// as:     cv::FeatureDetector::detect (method) cv::FeatureDetector . detect
// Arg ARG Vector[cv::Mat (boxed)] images=  Vector[cv::Mat (boxed)] = 
// Arg ARG Vector[Vector[cv::KeyPoint (simple)]] keypoints=  Vector[Vector[cv::KeyPoint (simple)]] = 
// Arg ARG Vector[cv::Mat (boxed)] masks=  Vector[cv::Mat (boxed)] =vector<Mat>() 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_FeatureDetector_detect_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints_VectorOfMat_masks(
        void* instance,
        void* images,
        void* keypoints,
        void* masks) {
  try {
  ((cv::FeatureDetector*) instance)->detect(*((vector<cv::Mat >*)images), *((vector<vector<cv::KeyPoint > >*)keypoints), *((vector<cv::Mat >*)masks));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_FeatureDetector_empty
// parsed: cv::FeatureDetector::empty
// as:     cv::FeatureDetector::empty (method) cv::FeatureDetector . empty
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_FeatureDetector_empty(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::FeatureDetector*) instance)->empty();
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

// cv_FeatureDetector_create_String_detectorType
// parsed: cv::FeatureDetector::create
// as:     cv::FeatureDetector::create (method) cv::FeatureDetector . create
// Arg ARG string detectorType=  string = 
// Return value: SmartPtr[cv::FeatureDetector (boxed)]
struct cv_return_value_void_X cv_features2d_cv_FeatureDetector_create_String_detectorType(
        void* instance,
        const char *detectorType) {
  try {
  cv::FeatureDetector* cpp_return_value = ((cv::FeatureDetector*) instance)->create(detectorType);
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


// boxed class: cv::FlannBasedMatcher
void cv_delete_FlannBasedMatcher(void* instance) {
    delete (cv::FlannBasedMatcher*) instance;
}
// cv_FlannBasedMatcher_add_VectorOfMat_descriptors
// parsed: cv::FlannBasedMatcher::add
// as:     cv::FlannBasedMatcher::add (method) cv::FlannBasedMatcher . add
// Arg ARG Vector[cv::Mat (boxed)] descriptors=  Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_FlannBasedMatcher_add_VectorOfMat_descriptors(
        void* instance,
        void* descriptors) {
  try {
  ((cv::FlannBasedMatcher*) instance)->add(*((vector<cv::Mat >*)descriptors));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_FlannBasedMatcher_clear
// parsed: cv::FlannBasedMatcher::clear
// as:     cv::FlannBasedMatcher::clear (method) cv::FlannBasedMatcher . clear
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_FlannBasedMatcher_clear(
        void* instance) {
  try {
  ((cv::FlannBasedMatcher*) instance)->clear();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_FlannBasedMatcher_train
// parsed: cv::FlannBasedMatcher::train
// as:     cv::FlannBasedMatcher::train (method) cv::FlannBasedMatcher . train
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_FlannBasedMatcher_train(
        void* instance) {
  try {
  ((cv::FlannBasedMatcher*) instance)->train();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_FlannBasedMatcher_isMaskSupported
// parsed: cv::FlannBasedMatcher::isMaskSupported
// as:     cv::FlannBasedMatcher::isMaskSupported (method) cv::FlannBasedMatcher . isMaskSupported
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_FlannBasedMatcher_isMaskSupported(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::FlannBasedMatcher*) instance)->isMaskSupported();
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


// boxed class: cv::GFTTDetector
void cv_delete_GFTTDetector(void* instance) {
    delete (cv::GFTTDetector*) instance;
}
// cv_GFTTDetector_GFTTDetector_int_maxCorners_double_qualityLevel_double_minDistance_int_blockSize_bool_useHarrisDetector_double_k
// parsed: cv::GFTTDetector::GFTTDetector
// as:     cv::GFTTDetector::GFTTDetector (constructor) cv::GFTTDetector . new
// Arg ARG Primitive(int) maxCorners=  Primitive(int) =1000 
// Arg ARG Primitive(double) qualityLevel=  Primitive(double) =0.01 
// Arg ARG Primitive(double) minDistance=  Primitive(double) =1 
// Arg ARG Primitive(int) blockSize=  Primitive(int) =3 
// Arg ARG Primitive(bool) useHarrisDetector=  Primitive(bool) =false 
// Arg ARG Primitive(double) k=  Primitive(double) =0.04 
// Return value: cv::GFTTDetector (boxed)
struct cv_return_value_void_X cv_features2d_cv_GFTTDetector_GFTTDetector_int_maxCorners_double_qualityLevel_double_minDistance_int_blockSize_bool_useHarrisDetector_double_k(
        int maxCorners,
        double qualityLevel,
        double minDistance,
        int blockSize,
        char useHarrisDetector,
        double k) {
  try {
  cv::GFTTDetector* cpp_return_value = new cv::GFTTDetector(*reinterpret_cast<int*>(&maxCorners), *reinterpret_cast<double*>(&qualityLevel), *reinterpret_cast<double*>(&minDistance), *reinterpret_cast<int*>(&blockSize), *reinterpret_cast<bool*>(&useHarrisDetector), *reinterpret_cast<double*>(&k));
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

// cv_GenericDescriptorMatcher_add_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints
// parsed: cv::GenericDescriptorMatcher::add
// as:     cv::GenericDescriptorMatcher::add (method) cv::GenericDescriptorMatcher . add
// Arg ARG Vector[cv::Mat (boxed)] images=  Vector[cv::Mat (boxed)] = 
// Arg ARG Vector[Vector[cv::KeyPoint (simple)]] keypoints=  Vector[Vector[cv::KeyPoint (simple)]] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_GenericDescriptorMatcher_add_VectorOfMat_images_VectorOfVectorOfKeyPoint_keypoints(
        void* instance,
        void* images,
        void* keypoints) {
  try {
  ((cv::GenericDescriptorMatcher*) instance)->add(*((vector<cv::Mat >*)images), *((vector<vector<cv::KeyPoint > >*)keypoints));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GenericDescriptorMatcher_getTrainImages
// parsed: cv::GenericDescriptorMatcher::getTrainImages
// as:     cv::GenericDescriptorMatcher::getTrainImages (method) cv::GenericDescriptorMatcher . getTrainImages
// Return value: Vector[cv::Mat (boxed)]
struct cv_return_value_void_X cv_features2d_cv_GenericDescriptorMatcher_getTrainImages(
        void* instance) {
  try {
  vector<cv::Mat > cpp_return_value = ((cv::GenericDescriptorMatcher*) instance)->getTrainImages();
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

// cv_GenericDescriptorMatcher_getTrainKeypoints
// parsed: cv::GenericDescriptorMatcher::getTrainKeypoints
// as:     cv::GenericDescriptorMatcher::getTrainKeypoints (method) cv::GenericDescriptorMatcher . getTrainKeypoints
// Return value: Vector[Vector[cv::KeyPoint (simple)]]
struct cv_return_value_void_X cv_features2d_cv_GenericDescriptorMatcher_getTrainKeypoints(
        void* instance) {
  try {
  vector<vector<cv::KeyPoint > > cpp_return_value = ((cv::GenericDescriptorMatcher*) instance)->getTrainKeypoints();
  return { NULL, (void*) new vector<vector<cv::KeyPoint > >(cpp_return_value) };
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

// cv_GenericDescriptorMatcher_clear
// parsed: cv::GenericDescriptorMatcher::clear
// as:     cv::GenericDescriptorMatcher::clear (method) cv::GenericDescriptorMatcher . clear
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_GenericDescriptorMatcher_clear(
        void* instance) {
  try {
  ((cv::GenericDescriptorMatcher*) instance)->clear();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GenericDescriptorMatcher_train
// parsed: cv::GenericDescriptorMatcher::train
// as:     cv::GenericDescriptorMatcher::train (method) cv::GenericDescriptorMatcher . train
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_GenericDescriptorMatcher_train(
        void* instance) {
  try {
  ((cv::GenericDescriptorMatcher*) instance)->train();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GenericDescriptorMatcher_classify_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints
// parsed: cv::GenericDescriptorMatcher::classify
// as:     cv::GenericDescriptorMatcher::classify (method) cv::GenericDescriptorMatcher . classify
// Arg ARG cv::Mat (boxed) queryImage=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] queryKeypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) trainImage=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] trainKeypoints=  Vector[cv::KeyPoint (simple)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_GenericDescriptorMatcher_classify_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints(
        void* instance,
        void* queryImage,
        void* queryKeypoints,
        void* trainImage,
        void* trainKeypoints) {
  try {
  ((cv::GenericDescriptorMatcher*) instance)->classify(*((cv::Mat*)queryImage), *((vector<cv::KeyPoint >*)queryKeypoints), *((cv::Mat*)trainImage), *((vector<cv::KeyPoint >*)trainKeypoints));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GenericDescriptorMatcher_classify_Mat_queryImage_VectorOfKeyPoint_queryKeypoints
// parsed: cv::GenericDescriptorMatcher::classify
// as:     cv::GenericDescriptorMatcher::classify (method) cv::GenericDescriptorMatcher . classify
// Arg ARG cv::Mat (boxed) queryImage=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] queryKeypoints=  Vector[cv::KeyPoint (simple)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_GenericDescriptorMatcher_classify_Mat_queryImage_VectorOfKeyPoint_queryKeypoints(
        void* instance,
        void* queryImage,
        void* queryKeypoints) {
  try {
  ((cv::GenericDescriptorMatcher*) instance)->classify(*((cv::Mat*)queryImage), *((vector<cv::KeyPoint >*)queryKeypoints));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GenericDescriptorMatcher_match_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints_VectorOfDMatch_matches_Mat_mask
// parsed: cv::GenericDescriptorMatcher::match
// as:     cv::GenericDescriptorMatcher::match (method) cv::GenericDescriptorMatcher . match
// Arg ARG cv::Mat (boxed) queryImage=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] queryKeypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) trainImage=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] trainKeypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[cv::DMatch (simple)] matches=  Vector[cv::DMatch (simple)] = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =Mat() 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_GenericDescriptorMatcher_match_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints_VectorOfDMatch_matches_Mat_mask(
        void* instance,
        void* queryImage,
        void* queryKeypoints,
        void* trainImage,
        void* trainKeypoints,
        void* matches,
        void* mask) {
  try {
  ((cv::GenericDescriptorMatcher*) instance)->match(*((cv::Mat*)queryImage), *((vector<cv::KeyPoint >*)queryKeypoints), *((cv::Mat*)trainImage), *((vector<cv::KeyPoint >*)trainKeypoints), *((vector<cv::DMatch >*)matches), *((cv::Mat*)mask));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GenericDescriptorMatcher_knnMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints_VectorOfVectorOfDMatch_matches_int_k_Mat_mask_bool_compactResult
// parsed: cv::GenericDescriptorMatcher::knnMatch
// as:     cv::GenericDescriptorMatcher::knnMatch (method) cv::GenericDescriptorMatcher . knnMatch
// Arg ARG cv::Mat (boxed) queryImage=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] queryKeypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) trainImage=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] trainKeypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches=  Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(int) k=  Primitive(int) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =Mat() 
// Arg ARG Primitive(bool) compactResult=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_GenericDescriptorMatcher_knnMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints_VectorOfVectorOfDMatch_matches_int_k_Mat_mask_bool_compactResult(
        void* instance,
        void* queryImage,
        void* queryKeypoints,
        void* trainImage,
        void* trainKeypoints,
        void* matches,
        int k,
        void* mask,
        char compactResult) {
  try {
  ((cv::GenericDescriptorMatcher*) instance)->knnMatch(*((cv::Mat*)queryImage), *((vector<cv::KeyPoint >*)queryKeypoints), *((cv::Mat*)trainImage), *((vector<cv::KeyPoint >*)trainKeypoints), *((vector<vector<cv::DMatch > >*)matches), *reinterpret_cast<int*>(&k), *((cv::Mat*)mask), *reinterpret_cast<bool*>(&compactResult));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GenericDescriptorMatcher_radiusMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints_VectorOfVectorOfDMatch_matches_float_maxDistance_Mat_mask_bool_compactResult
// parsed: cv::GenericDescriptorMatcher::radiusMatch
// as:     cv::GenericDescriptorMatcher::radiusMatch (method) cv::GenericDescriptorMatcher . radiusMatch
// Arg ARG cv::Mat (boxed) queryImage=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] queryKeypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) trainImage=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] trainKeypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches=  Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(float) maxDistance=  Primitive(float) = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) =Mat() 
// Arg ARG Primitive(bool) compactResult=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_GenericDescriptorMatcher_radiusMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_Mat_trainImage_VectorOfKeyPoint_trainKeypoints_VectorOfVectorOfDMatch_matches_float_maxDistance_Mat_mask_bool_compactResult(
        void* instance,
        void* queryImage,
        void* queryKeypoints,
        void* trainImage,
        void* trainKeypoints,
        void* matches,
        float maxDistance,
        void* mask,
        char compactResult) {
  try {
  ((cv::GenericDescriptorMatcher*) instance)->radiusMatch(*((cv::Mat*)queryImage), *((vector<cv::KeyPoint >*)queryKeypoints), *((cv::Mat*)trainImage), *((vector<cv::KeyPoint >*)trainKeypoints), *((vector<vector<cv::DMatch > >*)matches), *reinterpret_cast<float*>(&maxDistance), *((cv::Mat*)mask), *reinterpret_cast<bool*>(&compactResult));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GenericDescriptorMatcher_match_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_VectorOfDMatch_matches_VectorOfMat_masks
// parsed: cv::GenericDescriptorMatcher::match
// as:     cv::GenericDescriptorMatcher::match (method) cv::GenericDescriptorMatcher . match
// Arg ARG cv::Mat (boxed) queryImage=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] queryKeypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[cv::DMatch (simple)] matches=  Vector[cv::DMatch (simple)] = 
// Arg ARG Vector[cv::Mat (boxed)] masks=  Vector[cv::Mat (boxed)] =vector<Mat>() 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_GenericDescriptorMatcher_match_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_VectorOfDMatch_matches_VectorOfMat_masks(
        void* instance,
        void* queryImage,
        void* queryKeypoints,
        void* matches,
        void* masks) {
  try {
  ((cv::GenericDescriptorMatcher*) instance)->match(*((cv::Mat*)queryImage), *((vector<cv::KeyPoint >*)queryKeypoints), *((vector<cv::DMatch >*)matches), *((vector<cv::Mat >*)masks));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GenericDescriptorMatcher_knnMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_VectorOfVectorOfDMatch_matches_int_k_VectorOfMat_masks_bool_compactResult
// parsed: cv::GenericDescriptorMatcher::knnMatch
// as:     cv::GenericDescriptorMatcher::knnMatch (method) cv::GenericDescriptorMatcher . knnMatch
// Arg ARG cv::Mat (boxed) queryImage=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] queryKeypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches=  Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(int) k=  Primitive(int) = 
// Arg ARG Vector[cv::Mat (boxed)] masks=  Vector[cv::Mat (boxed)] =vector<Mat>() 
// Arg ARG Primitive(bool) compactResult=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_GenericDescriptorMatcher_knnMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_VectorOfVectorOfDMatch_matches_int_k_VectorOfMat_masks_bool_compactResult(
        void* instance,
        void* queryImage,
        void* queryKeypoints,
        void* matches,
        int k,
        void* masks,
        char compactResult) {
  try {
  ((cv::GenericDescriptorMatcher*) instance)->knnMatch(*((cv::Mat*)queryImage), *((vector<cv::KeyPoint >*)queryKeypoints), *((vector<vector<cv::DMatch > >*)matches), *reinterpret_cast<int*>(&k), *((vector<cv::Mat >*)masks), *reinterpret_cast<bool*>(&compactResult));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GenericDescriptorMatcher_radiusMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_VectorOfVectorOfDMatch_matches_float_maxDistance_VectorOfMat_masks_bool_compactResult
// parsed: cv::GenericDescriptorMatcher::radiusMatch
// as:     cv::GenericDescriptorMatcher::radiusMatch (method) cv::GenericDescriptorMatcher . radiusMatch
// Arg ARG cv::Mat (boxed) queryImage=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] queryKeypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches=  Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(float) maxDistance=  Primitive(float) = 
// Arg ARG Vector[cv::Mat (boxed)] masks=  Vector[cv::Mat (boxed)] =vector<Mat>() 
// Arg ARG Primitive(bool) compactResult=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_GenericDescriptorMatcher_radiusMatch_Mat_queryImage_VectorOfKeyPoint_queryKeypoints_VectorOfVectorOfDMatch_matches_float_maxDistance_VectorOfMat_masks_bool_compactResult(
        void* instance,
        void* queryImage,
        void* queryKeypoints,
        void* matches,
        float maxDistance,
        void* masks,
        char compactResult) {
  try {
  ((cv::GenericDescriptorMatcher*) instance)->radiusMatch(*((cv::Mat*)queryImage), *((vector<cv::KeyPoint >*)queryKeypoints), *((vector<vector<cv::DMatch > >*)matches), *reinterpret_cast<float*>(&maxDistance), *((vector<cv::Mat >*)masks), *reinterpret_cast<bool*>(&compactResult));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_GenericDescriptorMatcher_empty
// parsed: cv::GenericDescriptorMatcher::empty
// as:     cv::GenericDescriptorMatcher::empty (method) cv::GenericDescriptorMatcher . empty
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_GenericDescriptorMatcher_empty(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::GenericDescriptorMatcher*) instance)->empty();
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


// boxed class: cv::GridAdaptedFeatureDetector
void cv_delete_GridAdaptedFeatureDetector(void* instance) {
    delete (cv::GridAdaptedFeatureDetector*) instance;
}
// cv_GridAdaptedFeatureDetector_GridAdaptedFeatureDetector_PtrOfFeatureDetector_detector_int_maxTotalKeypoints_int_gridRows_int_gridCols
// parsed: cv::GridAdaptedFeatureDetector::GridAdaptedFeatureDetector
// as:     cv::GridAdaptedFeatureDetector::GridAdaptedFeatureDetector (constructor) cv::GridAdaptedFeatureDetector . new
// Arg ARG SmartPtr[cv::FeatureDetector (boxed)] detector=  SmartPtr[cv::FeatureDetector (boxed)] =0 
// Arg ARG Primitive(int) maxTotalKeypoints=  Primitive(int) =1000 
// Arg ARG Primitive(int) gridRows=  Primitive(int) =4 
// Arg ARG Primitive(int) gridCols=  Primitive(int) =4 
// Return value: cv::GridAdaptedFeatureDetector (boxed)
struct cv_return_value_void_X cv_features2d_cv_GridAdaptedFeatureDetector_GridAdaptedFeatureDetector_PtrOfFeatureDetector_detector_int_maxTotalKeypoints_int_gridRows_int_gridCols(
        void* detector,
        int maxTotalKeypoints,
        int gridRows,
        int gridCols) {
  try {
  cv::GridAdaptedFeatureDetector* cpp_return_value = new cv::GridAdaptedFeatureDetector(reinterpret_cast<cv::FeatureDetector *>(detector), *reinterpret_cast<int*>(&maxTotalKeypoints), *reinterpret_cast<int*>(&gridRows), *reinterpret_cast<int*>(&gridCols));
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

// cv_GridAdaptedFeatureDetector_empty
// parsed: cv::GridAdaptedFeatureDetector::empty
// as:     cv::GridAdaptedFeatureDetector::empty (method) cv::GridAdaptedFeatureDetector . empty
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_GridAdaptedFeatureDetector_empty(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::GridAdaptedFeatureDetector*) instance)->empty();
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


// boxed class: cv::Hamming
void cv_delete_Hamming(void* instance) {
    delete (cv::Hamming*) instance;
}
// cv_KeyPoint_KeyPoint
// parsed: cv::KeyPoint::KeyPoint
// as:     cv::KeyPoint::KeyPoint (constructor) cv::KeyPoint (simple) . new
// Return value: cv::KeyPoint (simple)
struct cv_return_value_c_KeyPoint cv_features2d_cv_KeyPoint_KeyPoint(
        ) {
  try {
  cv::KeyPoint cpp_return_value;
  return { NULL, *reinterpret_cast<c_KeyPoint*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_KeyPoint ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_KeyPoint ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_KeyPoint_KeyPoint_Point2f__pt_float__size_float__angle_float__response_int__octave_int__class_id
// parsed: cv::KeyPoint::KeyPoint
// as:     cv::KeyPoint::KeyPoint (constructor) cv::KeyPoint (simple) . new
// Arg ARG Point2f (struct) _pt=  Point2f (struct) = 
// Arg ARG Primitive(float) _size=  Primitive(float) = 
// Arg ARG Primitive(float) _angle=  Primitive(float) =-1 
// Arg ARG Primitive(float) _response=  Primitive(float) =0 
// Arg ARG Primitive(int) _octave=  Primitive(int) =0 
// Arg ARG Primitive(int) _class_id=  Primitive(int) =-1 
// Return value: cv::KeyPoint (simple)
struct cv_return_value_c_KeyPoint cv_features2d_cv_KeyPoint_KeyPoint_Point2f__pt_float__size_float__angle_float__response_int__octave_int__class_id(
        c_Point2f _pt,
        float _size,
        float _angle,
        float _response,
        int _octave,
        int _class_id) {
  try {
  cv::KeyPoint cpp_return_value(*reinterpret_cast<Point2f*>(&_pt), *reinterpret_cast<float*>(&_size), *reinterpret_cast<float*>(&_angle), *reinterpret_cast<float*>(&_response), *reinterpret_cast<int*>(&_octave), *reinterpret_cast<int*>(&_class_id));
  return { NULL, *reinterpret_cast<c_KeyPoint*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_KeyPoint ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_KeyPoint ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_KeyPoint_KeyPoint_float_x_float_y_float__size_float__angle_float__response_int__octave_int__class_id
// parsed: cv::KeyPoint::KeyPoint
// as:     cv::KeyPoint::KeyPoint (constructor) cv::KeyPoint (simple) . new
// Arg ARG Primitive(float) x=  Primitive(float) = 
// Arg ARG Primitive(float) y=  Primitive(float) = 
// Arg ARG Primitive(float) _size=  Primitive(float) = 
// Arg ARG Primitive(float) _angle=  Primitive(float) =-1 
// Arg ARG Primitive(float) _response=  Primitive(float) =0 
// Arg ARG Primitive(int) _octave=  Primitive(int) =0 
// Arg ARG Primitive(int) _class_id=  Primitive(int) =-1 
// Return value: cv::KeyPoint (simple)
struct cv_return_value_c_KeyPoint cv_features2d_cv_KeyPoint_KeyPoint_float_x_float_y_float__size_float__angle_float__response_int__octave_int__class_id(
        float x,
        float y,
        float _size,
        float _angle,
        float _response,
        int _octave,
        int _class_id) {
  try {
  cv::KeyPoint cpp_return_value(*reinterpret_cast<float*>(&x), *reinterpret_cast<float*>(&y), *reinterpret_cast<float*>(&_size), *reinterpret_cast<float*>(&_angle), *reinterpret_cast<float*>(&_response), *reinterpret_cast<int*>(&_octave), *reinterpret_cast<int*>(&_class_id));
  return { NULL, *reinterpret_cast<c_KeyPoint*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_KeyPoint ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_KeyPoint ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_KeyPoint_hash
// parsed: cv::KeyPoint::hash
// as:     cv::KeyPoint::hash (method) cv::KeyPoint (simple) . hash
// Return value: Primitive(size_t)
struct cv_return_value_std_size_t cv_features2d_cv_KeyPoint_hash(
        c_KeyPoint instance) {
  try {
  size_t cpp_return_value = ((cv::KeyPoint*) &instance)->hash();
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

// cv_KeyPoint_convert_VectorOfKeyPoint_keypoints_VectorOfPoint2f_points2f_VectorOfint_keypointIndexes
// parsed: cv::KeyPoint::convert
// as:     cv::KeyPoint::convert (method) cv::KeyPoint (simple) . convert
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[Point2f (struct)] points2f=  Vector[Point2f (struct)] = 
// Arg ARG Vector[Primitive(int)] keypointIndexes=  Vector[Primitive(int)] =vector<int>() 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_KeyPoint_convert_VectorOfKeyPoint_keypoints_VectorOfPoint2f_points2f_VectorOfint_keypointIndexes(
        c_KeyPoint instance,
        void* keypoints,
        void* points2f,
        void* keypointIndexes) {
  try {
  ((cv::KeyPoint*) &instance)->convert(*((vector<cv::KeyPoint >*)keypoints), *((vector<Point2f >*)points2f), *((vector<int >*)keypointIndexes));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_KeyPoint_convert_VectorOfPoint2f_points2f_VectorOfKeyPoint_keypoints_float_size_float_response_int_octave_int_class_id
// parsed: cv::KeyPoint::convert
// as:     cv::KeyPoint::convert (method) cv::KeyPoint (simple) . convert
// Arg ARG Vector[Point2f (struct)] points2f=  Vector[Point2f (struct)] = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Primitive(float) size=  Primitive(float) =1 
// Arg ARG Primitive(float) response=  Primitive(float) =1 
// Arg ARG Primitive(int) octave=  Primitive(int) =0 
// Arg ARG Primitive(int) class_id=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_KeyPoint_convert_VectorOfPoint2f_points2f_VectorOfKeyPoint_keypoints_float_size_float_response_int_octave_int_class_id(
        c_KeyPoint instance,
        void* points2f,
        void* keypoints,
        float size,
        float response,
        int octave,
        int class_id) {
  try {
  ((cv::KeyPoint*) &instance)->convert(*((vector<Point2f >*)points2f), *((vector<cv::KeyPoint >*)keypoints), *reinterpret_cast<float*>(&size), *reinterpret_cast<float*>(&response), *reinterpret_cast<int*>(&octave), *reinterpret_cast<int*>(&class_id));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_KeyPoint_overlap_KeyPoint_kp1_KeyPoint_kp2
// parsed: cv::KeyPoint::overlap
// as:     cv::KeyPoint::overlap (method) cv::KeyPoint (simple) . overlap
// Arg ARG cv::KeyPoint (simple) kp1=  cv::KeyPoint (simple) = 
// Arg ARG cv::KeyPoint (simple) kp2=  cv::KeyPoint (simple) = 
// Return value: Primitive(float)
struct cv_return_value_float cv_features2d_cv_KeyPoint_overlap_KeyPoint_kp1_KeyPoint_kp2(
        c_KeyPoint instance,
        c_KeyPoint kp1,
        c_KeyPoint kp2) {
  try {
  float cpp_return_value = ((cv::KeyPoint*) &instance)->overlap(*reinterpret_cast<cv::KeyPoint*>(&kp1), *reinterpret_cast<cv::KeyPoint*>(&kp2));
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


// boxed class: cv::KeyPointsFilter
void cv_delete_KeyPointsFilter(void* instance) {
    delete (cv::KeyPointsFilter*) instance;
}
// cv_KeyPointsFilter_KeyPointsFilter
// parsed: cv::KeyPointsFilter::KeyPointsFilter
// as:     cv::KeyPointsFilter::KeyPointsFilter (constructor) cv::KeyPointsFilter . new
// Return value: cv::KeyPointsFilter (boxed)
struct cv_return_value_void_X cv_features2d_cv_KeyPointsFilter_KeyPointsFilter(
        ) {
  try {
  cv::KeyPointsFilter* cpp_return_value = new cv::KeyPointsFilter();
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

// cv_KeyPointsFilter_runByImageBorder_VectorOfKeyPoint_keypoints_Size_imageSize_int_borderSize
// parsed: cv::KeyPointsFilter::runByImageBorder
// as:     cv::KeyPointsFilter::runByImageBorder (method) cv::KeyPointsFilter . runByImageBorder
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Size (struct) imageSize=  Size (struct) = 
// Arg ARG Primitive(int) borderSize=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_KeyPointsFilter_runByImageBorder_VectorOfKeyPoint_keypoints_Size_imageSize_int_borderSize(
        void* instance,
        void* keypoints,
        c_Size imageSize,
        int borderSize) {
  try {
  ((cv::KeyPointsFilter*) instance)->runByImageBorder(*((vector<cv::KeyPoint >*)keypoints), *reinterpret_cast<Size*>(&imageSize), *reinterpret_cast<int*>(&borderSize));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_KeyPointsFilter_runByKeypointSize_VectorOfKeyPoint_keypoints_float_minSize_float_maxSize
// parsed: cv::KeyPointsFilter::runByKeypointSize
// as:     cv::KeyPointsFilter::runByKeypointSize (method) cv::KeyPointsFilter . runByKeypointSize
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Primitive(float) minSize=  Primitive(float) = 
// Arg ARG Primitive(float) maxSize=  Primitive(float) =FLT_MAX 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_KeyPointsFilter_runByKeypointSize_VectorOfKeyPoint_keypoints_float_minSize_float_maxSize(
        void* instance,
        void* keypoints,
        float minSize,
        float maxSize) {
  try {
  ((cv::KeyPointsFilter*) instance)->runByKeypointSize(*((vector<cv::KeyPoint >*)keypoints), *reinterpret_cast<float*>(&minSize), *reinterpret_cast<float*>(&maxSize));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_KeyPointsFilter_runByPixelsMask_VectorOfKeyPoint_keypoints_Mat_mask
// parsed: cv::KeyPointsFilter::runByPixelsMask
// as:     cv::KeyPointsFilter::runByPixelsMask (method) cv::KeyPointsFilter . runByPixelsMask
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) mask=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_KeyPointsFilter_runByPixelsMask_VectorOfKeyPoint_keypoints_Mat_mask(
        void* instance,
        void* keypoints,
        void* mask) {
  try {
  ((cv::KeyPointsFilter*) instance)->runByPixelsMask(*((vector<cv::KeyPoint >*)keypoints), *((cv::Mat*)mask));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_KeyPointsFilter_removeDuplicated_VectorOfKeyPoint_keypoints
// parsed: cv::KeyPointsFilter::removeDuplicated
// as:     cv::KeyPointsFilter::removeDuplicated (method) cv::KeyPointsFilter . removeDuplicated
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints=  Vector[cv::KeyPoint (simple)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_KeyPointsFilter_removeDuplicated_VectorOfKeyPoint_keypoints(
        void* instance,
        void* keypoints) {
  try {
  ((cv::KeyPointsFilter*) instance)->removeDuplicated(*((vector<cv::KeyPoint >*)keypoints));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_KeyPointsFilter_retainBest_VectorOfKeyPoint_keypoints_int_npoints
// parsed: cv::KeyPointsFilter::retainBest
// as:     cv::KeyPointsFilter::retainBest (method) cv::KeyPointsFilter . retainBest
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints=  Vector[cv::KeyPoint (simple)] = 
// Arg ARG Primitive(int) npoints=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_KeyPointsFilter_retainBest_VectorOfKeyPoint_keypoints_int_npoints(
        void* instance,
        void* keypoints,
        int npoints) {
  try {
  ((cv::KeyPointsFilter*) instance)->retainBest(*((vector<cv::KeyPoint >*)keypoints), *reinterpret_cast<int*>(&npoints));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}


// boxed class: cv::MSER
void cv_delete_MSER(void* instance) {
    delete (cv::MSER*) instance;
}
// cv_MSER_MSER_int__delta_int__min_area_int__max_area_double__max_variation_double__min_diversity_int__max_evolution_double__area_threshold_double__min_margin_int__edge_blur_size
// parsed: cv::MSER::MSER
// as:     cv::MSER::MSER (constructor) cv::MSER . new
// Arg ARG Primitive(int) _delta=  Primitive(int) =5 
// Arg ARG Primitive(int) _min_area=  Primitive(int) =60 
// Arg ARG Primitive(int) _max_area=  Primitive(int) =14400 
// Arg ARG Primitive(double) _max_variation=  Primitive(double) =0.25 
// Arg ARG Primitive(double) _min_diversity=  Primitive(double) =.2 
// Arg ARG Primitive(int) _max_evolution=  Primitive(int) =200 
// Arg ARG Primitive(double) _area_threshold=  Primitive(double) =1.01 
// Arg ARG Primitive(double) _min_margin=  Primitive(double) =0.003 
// Arg ARG Primitive(int) _edge_blur_size=  Primitive(int) =5 
// Return value: cv::MSER (boxed)
struct cv_return_value_void_X cv_features2d_cv_MSER_MSER_int__delta_int__min_area_int__max_area_double__max_variation_double__min_diversity_int__max_evolution_double__area_threshold_double__min_margin_int__edge_blur_size(
        int _delta,
        int _min_area,
        int _max_area,
        double _max_variation,
        double _min_diversity,
        int _max_evolution,
        double _area_threshold,
        double _min_margin,
        int _edge_blur_size) {
  try {
  cv::MSER* cpp_return_value = new cv::MSER(*reinterpret_cast<int*>(&_delta), *reinterpret_cast<int*>(&_min_area), *reinterpret_cast<int*>(&_max_area), *reinterpret_cast<double*>(&_max_variation), *reinterpret_cast<double*>(&_min_diversity), *reinterpret_cast<int*>(&_max_evolution), *reinterpret_cast<double*>(&_area_threshold), *reinterpret_cast<double*>(&_min_margin), *reinterpret_cast<int*>(&_edge_blur_size));
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


// boxed class: cv::ORB
void cv_delete_ORB(void* instance) {
    delete (cv::ORB*) instance;
}
// cv_ORB_ORB_int_nfeatures_float_scaleFactor_int_nlevels_int_edgeThreshold_int_firstLevel_int_WTA_K_int_scoreType_int_patchSize
// parsed: cv::ORB::ORB
// as:     cv::ORB::ORB (constructor) cv::ORB . new
// Arg ARG Primitive(int) nfeatures=  Primitive(int) =500 
// Arg ARG Primitive(float) scaleFactor=  Primitive(float) =1.2f 
// Arg ARG Primitive(int) nlevels=  Primitive(int) =8 
// Arg ARG Primitive(int) edgeThreshold=  Primitive(int) =31 
// Arg ARG Primitive(int) firstLevel=  Primitive(int) =0 
// Arg ARG Primitive(int) WTA_K=  Primitive(int) =2 
// Arg ARG Primitive(int) scoreType=  Primitive(int) =ORB::HARRIS_SCORE 
// Arg ARG Primitive(int) patchSize=  Primitive(int) =31 
// Return value: cv::ORB (boxed)
struct cv_return_value_void_X cv_features2d_cv_ORB_ORB_int_nfeatures_float_scaleFactor_int_nlevels_int_edgeThreshold_int_firstLevel_int_WTA_K_int_scoreType_int_patchSize(
        int nfeatures,
        float scaleFactor,
        int nlevels,
        int edgeThreshold,
        int firstLevel,
        int WTA_K,
        int scoreType,
        int patchSize) {
  try {
  cv::ORB* cpp_return_value = new cv::ORB(*reinterpret_cast<int*>(&nfeatures), *reinterpret_cast<float*>(&scaleFactor), *reinterpret_cast<int*>(&nlevels), *reinterpret_cast<int*>(&edgeThreshold), *reinterpret_cast<int*>(&firstLevel), *reinterpret_cast<int*>(&WTA_K), *reinterpret_cast<int*>(&scoreType), *reinterpret_cast<int*>(&patchSize));
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

// cv_ORB_descriptorSize
// parsed: cv::ORB::descriptorSize
// as:     cv::ORB::descriptorSize (method) cv::ORB . descriptorSize
// Return value: Primitive(int)
struct cv_return_value_int cv_features2d_cv_ORB_descriptorSize(
        void* instance) {
  try {
  int cpp_return_value = ((cv::ORB*) instance)->descriptorSize();
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

// cv_ORB_descriptorType
// parsed: cv::ORB::descriptorType
// as:     cv::ORB::descriptorType (method) cv::ORB . descriptorType
// Return value: Primitive(int)
struct cv_return_value_int cv_features2d_cv_ORB_descriptorType(
        void* instance) {
  try {
  int cpp_return_value = ((cv::ORB*) instance)->descriptorType();
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


// boxed class: cv::OpponentColorDescriptorExtractor
void cv_delete_OpponentColorDescriptorExtractor(void* instance) {
    delete (cv::OpponentColorDescriptorExtractor*) instance;
}
// cv_OpponentColorDescriptorExtractor_descriptorSize
// parsed: cv::OpponentColorDescriptorExtractor::descriptorSize
// as:     cv::OpponentColorDescriptorExtractor::descriptorSize (method) cv::OpponentColorDescriptorExtractor . descriptorSize
// Return value: Primitive(int)
struct cv_return_value_int cv_features2d_cv_OpponentColorDescriptorExtractor_descriptorSize(
        void* instance) {
  try {
  int cpp_return_value = ((cv::OpponentColorDescriptorExtractor*) instance)->descriptorSize();
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

// cv_OpponentColorDescriptorExtractor_descriptorType
// parsed: cv::OpponentColorDescriptorExtractor::descriptorType
// as:     cv::OpponentColorDescriptorExtractor::descriptorType (method) cv::OpponentColorDescriptorExtractor . descriptorType
// Return value: Primitive(int)
struct cv_return_value_int cv_features2d_cv_OpponentColorDescriptorExtractor_descriptorType(
        void* instance) {
  try {
  int cpp_return_value = ((cv::OpponentColorDescriptorExtractor*) instance)->descriptorType();
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

// cv_OpponentColorDescriptorExtractor_empty
// parsed: cv::OpponentColorDescriptorExtractor::empty
// as:     cv::OpponentColorDescriptorExtractor::empty (method) cv::OpponentColorDescriptorExtractor . empty
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_OpponentColorDescriptorExtractor_empty(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::OpponentColorDescriptorExtractor*) instance)->empty();
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


// boxed class: cv::PyramidAdaptedFeatureDetector
void cv_delete_PyramidAdaptedFeatureDetector(void* instance) {
    delete (cv::PyramidAdaptedFeatureDetector*) instance;
}
// cv_PyramidAdaptedFeatureDetector_PyramidAdaptedFeatureDetector_PtrOfFeatureDetector_detector_int_maxLevel
// parsed: cv::PyramidAdaptedFeatureDetector::PyramidAdaptedFeatureDetector
// as:     cv::PyramidAdaptedFeatureDetector::PyramidAdaptedFeatureDetector (constructor) cv::PyramidAdaptedFeatureDetector . new
// Arg ARG SmartPtr[cv::FeatureDetector (boxed)] detector=  SmartPtr[cv::FeatureDetector (boxed)] = 
// Arg ARG Primitive(int) maxLevel=  Primitive(int) =2 
// Return value: cv::PyramidAdaptedFeatureDetector (boxed)
struct cv_return_value_void_X cv_features2d_cv_PyramidAdaptedFeatureDetector_PyramidAdaptedFeatureDetector_PtrOfFeatureDetector_detector_int_maxLevel(
        void* detector,
        int maxLevel) {
  try {
  cv::PyramidAdaptedFeatureDetector* cpp_return_value = new cv::PyramidAdaptedFeatureDetector(reinterpret_cast<cv::FeatureDetector *>(detector), *reinterpret_cast<int*>(&maxLevel));
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

// cv_PyramidAdaptedFeatureDetector_empty
// parsed: cv::PyramidAdaptedFeatureDetector::empty
// as:     cv::PyramidAdaptedFeatureDetector::empty (method) cv::PyramidAdaptedFeatureDetector . empty
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_PyramidAdaptedFeatureDetector_empty(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::PyramidAdaptedFeatureDetector*) instance)->empty();
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


// boxed class: cv::SimpleBlobDetector
void cv_delete_SimpleBlobDetector(void* instance) {
    delete (cv::SimpleBlobDetector*) instance;
}
// cv_SimpleBlobDetector_Params_Params
// parsed: cv::SimpleBlobDetector::Params::Params
// as:     cv::SimpleBlobDetector::Params::Params (constructor) cv::SimpleBlobDetector::Params (simple) . new
// Return value: cv::SimpleBlobDetector::Params (simple)
struct cv_return_value_c_SimpleBlobDetector_Params cv_features2d_cv_SimpleBlobDetector_Params_Params(
        ) {
  try {
  cv::SimpleBlobDetector::Params cpp_return_value;
  return { NULL, *reinterpret_cast<c_SimpleBlobDetector_Params*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_c_SimpleBlobDetector_Params ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_c_SimpleBlobDetector_Params ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}


// boxed class: cv::StarAdjuster
void cv_delete_StarAdjuster(void* instance) {
    delete (cv::StarAdjuster*) instance;
}
// cv_StarAdjuster_StarAdjuster_double_initial_thresh_double_min_thresh_double_max_thresh
// parsed: cv::StarAdjuster::StarAdjuster
// as:     cv::StarAdjuster::StarAdjuster (constructor) cv::StarAdjuster . new
// Arg ARG Primitive(double) initial_thresh=  Primitive(double) =30.0 
// Arg ARG Primitive(double) min_thresh=  Primitive(double) =2. 
// Arg ARG Primitive(double) max_thresh=  Primitive(double) =200. 
// Return value: cv::StarAdjuster (boxed)
struct cv_return_value_void_X cv_features2d_cv_StarAdjuster_StarAdjuster_double_initial_thresh_double_min_thresh_double_max_thresh(
        double initial_thresh,
        double min_thresh,
        double max_thresh) {
  try {
  cv::StarAdjuster* cpp_return_value = new cv::StarAdjuster(*reinterpret_cast<double*>(&initial_thresh), *reinterpret_cast<double*>(&min_thresh), *reinterpret_cast<double*>(&max_thresh));
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

// cv_StarAdjuster_tooFew_int_minv_int_n_detected
// parsed: cv::StarAdjuster::tooFew
// as:     cv::StarAdjuster::tooFew (method) cv::StarAdjuster . tooFew
// Arg ARG Primitive(int) minv=  Primitive(int) = 
// Arg ARG Primitive(int) n_detected=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_StarAdjuster_tooFew_int_minv_int_n_detected(
        void* instance,
        int minv,
        int n_detected) {
  try {
  ((cv::StarAdjuster*) instance)->tooFew(*reinterpret_cast<int*>(&minv), *reinterpret_cast<int*>(&n_detected));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_StarAdjuster_tooMany_int_maxv_int_n_detected
// parsed: cv::StarAdjuster::tooMany
// as:     cv::StarAdjuster::tooMany (method) cv::StarAdjuster . tooMany
// Arg ARG Primitive(int) maxv=  Primitive(int) = 
// Arg ARG Primitive(int) n_detected=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_StarAdjuster_tooMany_int_maxv_int_n_detected(
        void* instance,
        int maxv,
        int n_detected) {
  try {
  ((cv::StarAdjuster*) instance)->tooMany(*reinterpret_cast<int*>(&maxv), *reinterpret_cast<int*>(&n_detected));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_StarAdjuster_good
// parsed: cv::StarAdjuster::good
// as:     cv::StarAdjuster::good (method) cv::StarAdjuster . good
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_StarAdjuster_good(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::StarAdjuster*) instance)->good();
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


// boxed class: cv::StarDetector
void cv_delete_StarDetector(void* instance) {
    delete (cv::StarDetector*) instance;
}
// cv_StarDetector_StarDetector_int__maxSize_int__responseThreshold_int__lineThresholdProjected_int__lineThresholdBinarized_int__suppressNonmaxSize
// parsed: cv::StarDetector::StarDetector
// as:     cv::StarDetector::StarDetector (constructor) cv::StarDetector . new
// Arg ARG Primitive(int) _maxSize=  Primitive(int) =45 
// Arg ARG Primitive(int) _responseThreshold=  Primitive(int) =30 
// Arg ARG Primitive(int) _lineThresholdProjected=  Primitive(int) =10 
// Arg ARG Primitive(int) _lineThresholdBinarized=  Primitive(int) =8 
// Arg ARG Primitive(int) _suppressNonmaxSize=  Primitive(int) =5 
// Return value: cv::StarDetector (boxed)
struct cv_return_value_void_X cv_features2d_cv_StarDetector_StarDetector_int__maxSize_int__responseThreshold_int__lineThresholdProjected_int__lineThresholdBinarized_int__suppressNonmaxSize(
        int _maxSize,
        int _responseThreshold,
        int _lineThresholdProjected,
        int _lineThresholdBinarized,
        int _suppressNonmaxSize) {
  try {
  cv::StarDetector* cpp_return_value = new cv::StarDetector(*reinterpret_cast<int*>(&_maxSize), *reinterpret_cast<int*>(&_responseThreshold), *reinterpret_cast<int*>(&_lineThresholdProjected), *reinterpret_cast<int*>(&_lineThresholdBinarized), *reinterpret_cast<int*>(&_suppressNonmaxSize));
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


// boxed class: cv::SurfAdjuster
void cv_delete_SurfAdjuster(void* instance) {
    delete (cv::SurfAdjuster*) instance;
}
// cv_SurfAdjuster_SurfAdjuster_double_initial_thresh_double_min_thresh_double_max_thresh
// parsed: cv::SurfAdjuster::SurfAdjuster
// as:     cv::SurfAdjuster::SurfAdjuster (constructor) cv::SurfAdjuster . new
// Arg ARG Primitive(double) initial_thresh=  Primitive(double) =400.f 
// Arg ARG Primitive(double) min_thresh=  Primitive(double) =2 
// Arg ARG Primitive(double) max_thresh=  Primitive(double) =1000 
// Return value: cv::SurfAdjuster (boxed)
struct cv_return_value_void_X cv_features2d_cv_SurfAdjuster_SurfAdjuster_double_initial_thresh_double_min_thresh_double_max_thresh(
        double initial_thresh,
        double min_thresh,
        double max_thresh) {
  try {
  cv::SurfAdjuster* cpp_return_value = new cv::SurfAdjuster(*reinterpret_cast<double*>(&initial_thresh), *reinterpret_cast<double*>(&min_thresh), *reinterpret_cast<double*>(&max_thresh));
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

// cv_SurfAdjuster_tooFew_int_minv_int_n_detected
// parsed: cv::SurfAdjuster::tooFew
// as:     cv::SurfAdjuster::tooFew (method) cv::SurfAdjuster . tooFew
// Arg ARG Primitive(int) minv=  Primitive(int) = 
// Arg ARG Primitive(int) n_detected=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_SurfAdjuster_tooFew_int_minv_int_n_detected(
        void* instance,
        int minv,
        int n_detected) {
  try {
  ((cv::SurfAdjuster*) instance)->tooFew(*reinterpret_cast<int*>(&minv), *reinterpret_cast<int*>(&n_detected));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_SurfAdjuster_tooMany_int_maxv_int_n_detected
// parsed: cv::SurfAdjuster::tooMany
// as:     cv::SurfAdjuster::tooMany (method) cv::SurfAdjuster . tooMany
// Arg ARG Primitive(int) maxv=  Primitive(int) = 
// Arg ARG Primitive(int) n_detected=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_SurfAdjuster_tooMany_int_maxv_int_n_detected(
        void* instance,
        int maxv,
        int n_detected) {
  try {
  ((cv::SurfAdjuster*) instance)->tooMany(*reinterpret_cast<int*>(&maxv), *reinterpret_cast<int*>(&n_detected));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_SurfAdjuster_good
// parsed: cv::SurfAdjuster::good
// as:     cv::SurfAdjuster::good (method) cv::SurfAdjuster . good
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_SurfAdjuster_good(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::SurfAdjuster*) instance)->good();
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


// boxed class: cv::VectorDescriptorMatcher
void cv_delete_VectorDescriptorMatcher(void* instance) {
    delete (cv::VectorDescriptorMatcher*) instance;
}
// cv_VectorDescriptorMatcher_add_VectorOfMat_imgCollection_VectorOfVectorOfKeyPoint_pointCollection
// parsed: cv::VectorDescriptorMatcher::add
// as:     cv::VectorDescriptorMatcher::add (method) cv::VectorDescriptorMatcher . add
// Arg ARG Vector[cv::Mat (boxed)] imgCollection=  Vector[cv::Mat (boxed)] = 
// Arg ARG Vector[Vector[cv::KeyPoint (simple)]] pointCollection=  Vector[Vector[cv::KeyPoint (simple)]] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_VectorDescriptorMatcher_add_VectorOfMat_imgCollection_VectorOfVectorOfKeyPoint_pointCollection(
        void* instance,
        void* imgCollection,
        void* pointCollection) {
  try {
  ((cv::VectorDescriptorMatcher*) instance)->add(*((vector<cv::Mat >*)imgCollection), *((vector<vector<cv::KeyPoint > >*)pointCollection));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_VectorDescriptorMatcher_clear
// parsed: cv::VectorDescriptorMatcher::clear
// as:     cv::VectorDescriptorMatcher::clear (method) cv::VectorDescriptorMatcher . clear
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_VectorDescriptorMatcher_clear(
        void* instance) {
  try {
  ((cv::VectorDescriptorMatcher*) instance)->clear();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_VectorDescriptorMatcher_train
// parsed: cv::VectorDescriptorMatcher::train
// as:     cv::VectorDescriptorMatcher::train (method) cv::VectorDescriptorMatcher . train
// Return value: Primitive(void)
struct cv_return_value_void cv_features2d_cv_VectorDescriptorMatcher_train(
        void* instance) {
  try {
  ((cv::VectorDescriptorMatcher*) instance)->train();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_VectorDescriptorMatcher_isMaskSupported
// parsed: cv::VectorDescriptorMatcher::isMaskSupported
// as:     cv::VectorDescriptorMatcher::isMaskSupported (method) cv::VectorDescriptorMatcher . isMaskSupported
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_VectorDescriptorMatcher_isMaskSupported(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::VectorDescriptorMatcher*) instance)->isMaskSupported();
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

// cv_VectorDescriptorMatcher_empty
// parsed: cv::VectorDescriptorMatcher::empty
// as:     cv::VectorDescriptorMatcher::empty (method) cv::VectorDescriptorMatcher . empty
// Return value: Primitive(bool)
struct cv_return_value_char cv_features2d_cv_VectorDescriptorMatcher_empty(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::VectorDescriptorMatcher*) instance)->empty();
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

// cv_VectorDescriptorMatcher_clone_bool_emptyTrainData
// parsed: cv::VectorDescriptorMatcher::clone
// as:     cv::VectorDescriptorMatcher::clone (method) cv::VectorDescriptorMatcher . clone
// Arg ARG Primitive(bool) emptyTrainData=  Primitive(bool) =false 
// Return value: SmartPtr[cv::GenericDescriptorMatcher (boxed)]
struct cv_return_value_void_X cv_features2d_cv_VectorDescriptorMatcher_clone_bool_emptyTrainData(
        void* instance,
        char emptyTrainData) {
  try {
  cv::GenericDescriptorMatcher* cpp_return_value = ((cv::VectorDescriptorMatcher*) instance)->clone(*reinterpret_cast<bool*>(&emptyTrainData));
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

