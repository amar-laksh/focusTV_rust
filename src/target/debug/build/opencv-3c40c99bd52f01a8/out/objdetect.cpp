
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

// cv_groupRectangles_VectorOfRect_rectList_VectorOfint_rejectLevels_VectorOfdouble_levelWeights_int_groupThreshold_double_eps
// parsed: cv::groupRectangles
// as:     cv::groupRectangles (function)
// Arg ARG Vector[Rect (struct)] rectList=  Vector[Rect (struct)] = 
// Arg ARG Vector[Primitive(int)] rejectLevels=  Vector[Primitive(int)] = 
// Arg ARG Vector[Primitive(double)] levelWeights=  Vector[Primitive(double)] = 
// Arg ARG Primitive(int) groupThreshold=  Primitive(int) = 
// Arg ARG Primitive(double) eps=  Primitive(double) =0.2 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_groupRectangles_VectorOfRect_rectList_VectorOfint_rejectLevels_VectorOfdouble_levelWeights_int_groupThreshold_double_eps(
        void* rectList,
        void* rejectLevels,
        void* levelWeights,
        int groupThreshold,
        double eps) {
  try {
  cv::groupRectangles(*((vector<Rect >*)rectList), *((vector<int >*)rejectLevels), *((vector<double >*)levelWeights), *reinterpret_cast<int*>(&groupThreshold), *reinterpret_cast<double*>(&eps));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_groupRectangles_VectorOfRect_rectList_VectorOfint_weights_int_groupThreshold_double_eps
// parsed: cv::groupRectangles
// as:     cv::groupRectangles (function)
// Arg ARG Vector[Rect (struct)] rectList=  Vector[Rect (struct)] = 
// Arg ARG Vector[Primitive(int)] weights=  Vector[Primitive(int)] = 
// Arg ARG Primitive(int) groupThreshold=  Primitive(int) = 
// Arg ARG Primitive(double) eps=  Primitive(double) =0.2 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_groupRectangles_VectorOfRect_rectList_VectorOfint_weights_int_groupThreshold_double_eps(
        void* rectList,
        void* weights,
        int groupThreshold,
        double eps) {
  try {
  cv::groupRectangles(*((vector<Rect >*)rectList), *((vector<int >*)weights), *reinterpret_cast<int*>(&groupThreshold), *reinterpret_cast<double*>(&eps));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_groupRectangles_VectorOfRect_rectList_int_groupThreshold_double_eps
// parsed: cv::groupRectangles
// as:     cv::groupRectangles (function)
// Arg ARG Vector[Rect (struct)] rectList=  Vector[Rect (struct)] = 
// Arg ARG Primitive(int) groupThreshold=  Primitive(int) = 
// Arg ARG Primitive(double) eps=  Primitive(double) =0.2 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_groupRectangles_VectorOfRect_rectList_int_groupThreshold_double_eps(
        void* rectList,
        int groupThreshold,
        double eps) {
  try {
  cv::groupRectangles(*((vector<Rect >*)rectList), *reinterpret_cast<int*>(&groupThreshold), *reinterpret_cast<double*>(&eps));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_groupRectangles_VectorOfRect_rectList_int_groupThreshold_double_eps_VectorOfint_weights_VectorOfdouble_levelWeights
// parsed: cv::groupRectangles
// as:     cv::groupRectangles (function)
// Arg ARG Vector[Rect (struct)] rectList=  Vector[Rect (struct)] = 
// Arg ARG Primitive(int) groupThreshold=  Primitive(int) = 
// Arg ARG Primitive(double) eps=  Primitive(double) = 
// Arg ARG Vector[Primitive(int)] * weights= (ptr) Vector[Primitive(int)] = 
// Arg ARG Vector[Primitive(double)] * levelWeights= (ptr) Vector[Primitive(double)] = 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_groupRectangles_VectorOfRect_rectList_int_groupThreshold_double_eps_VectorOfint_weights_VectorOfdouble_levelWeights(
        void* rectList,
        int groupThreshold,
        double eps,
        void* weights,
        void* levelWeights) {
  try {
  cv::groupRectangles(*((vector<Rect >*)rectList), *reinterpret_cast<int*>(&groupThreshold), *reinterpret_cast<double*>(&eps), ((vector<int >*)weights), ((vector<double >*)levelWeights));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_groupRectangles_meanshift_VectorOfRect_rectList_VectorOfdouble_foundWeights_VectorOfdouble_foundScales_double_detectThreshold_Size_winDetSize
// parsed: cv::groupRectangles_meanshift
// as:     cv::groupRectangles_meanshift (function)
// Arg ARG Vector[Rect (struct)] rectList=  Vector[Rect (struct)] = 
// Arg ARG Vector[Primitive(double)] foundWeights=  Vector[Primitive(double)] = 
// Arg ARG Vector[Primitive(double)] foundScales=  Vector[Primitive(double)] = 
// Arg ARG Primitive(double) detectThreshold=  Primitive(double) =0.0 
// Arg ARG Size (struct) winDetSize=  Size (struct) =Size(64, 128) 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_groupRectangles_meanshift_VectorOfRect_rectList_VectorOfdouble_foundWeights_VectorOfdouble_foundScales_double_detectThreshold_Size_winDetSize(
        void* rectList,
        void* foundWeights,
        void* foundScales,
        double detectThreshold,
        c_Size winDetSize) {
  try {
  cv::groupRectangles_meanshift(*((vector<Rect >*)rectList), *((vector<double >*)foundWeights), *((vector<double >*)foundScales), *reinterpret_cast<double*>(&detectThreshold), *reinterpret_cast<Size*>(&winDetSize));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_linemod_colormap_Mat_quantized_Mat_dst
// parsed: cv::linemod::colormap
// as:     cv::linemod::colormap (function)
// Arg ARG cv::Mat (boxed) quantized=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_linemod_colormap_Mat_quantized_Mat_dst(
        void* quantized,
        void* dst) {
  try {
  cv::linemod::colormap(*((cv::Mat*)quantized), *((cv::Mat*)dst));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_linemod_getDefaultLINE
// parsed: cv::linemod::getDefaultLINE
// as:     cv::linemod::getDefaultLINE (function)
// Return value: SmartPtr[cv::linemod::Detector (boxed)]
struct cv_return_value_void_X cv_objdetect_cv_linemod_getDefaultLINE(
        ) {
  try {
  cv::linemod::Detector* cpp_return_value = cv::linemod::getDefaultLINE();
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

// cv_linemod_getDefaultLINEMOD
// parsed: cv::linemod::getDefaultLINEMOD
// as:     cv::linemod::getDefaultLINEMOD (function)
// Return value: SmartPtr[cv::linemod::Detector (boxed)]
struct cv_return_value_void_X cv_objdetect_cv_linemod_getDefaultLINEMOD(
        ) {
  try {
  cv::linemod::Detector* cpp_return_value = cv::linemod::getDefaultLINEMOD();
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


// boxed class: cv::CascadeClassifier
void cv_delete_CascadeClassifier(void* instance) {
    delete (cv::CascadeClassifier*) instance;
}
// cv_CascadeClassifier_CascadeClassifier
// parsed: cv::CascadeClassifier::CascadeClassifier
// as:     cv::CascadeClassifier::CascadeClassifier (constructor) cv::CascadeClassifier . new
// Return value: cv::CascadeClassifier (boxed)
struct cv_return_value_void_X cv_objdetect_cv_CascadeClassifier_CascadeClassifier(
        ) {
  try {
  cv::CascadeClassifier* cpp_return_value = new cv::CascadeClassifier();
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

// cv_CascadeClassifier_CascadeClassifier_String_filename
// parsed: cv::CascadeClassifier::CascadeClassifier
// as:     cv::CascadeClassifier::CascadeClassifier (constructor) cv::CascadeClassifier . new
// Arg ARG string filename=  string = 
// Return value: cv::CascadeClassifier (boxed)
struct cv_return_value_void_X cv_objdetect_cv_CascadeClassifier_CascadeClassifier_String_filename(
        const char *filename) {
  try {
  cv::CascadeClassifier* cpp_return_value = new cv::CascadeClassifier(filename);
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

// cv_CascadeClassifier_empty
// parsed: cv::CascadeClassifier::empty
// as:     cv::CascadeClassifier::empty (method) cv::CascadeClassifier . empty
// Return value: Primitive(bool)
struct cv_return_value_char cv_objdetect_cv_CascadeClassifier_empty(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::CascadeClassifier*) instance)->empty();
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

// cv_CascadeClassifier_load_String_filename
// parsed: cv::CascadeClassifier::load
// as:     cv::CascadeClassifier::load (method) cv::CascadeClassifier . load
// Arg ARG string filename=  string = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_objdetect_cv_CascadeClassifier_load_String_filename(
        void* instance,
        const char *filename) {
  try {
  bool cpp_return_value = ((cv::CascadeClassifier*) instance)->load(filename);
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

// cv_CascadeClassifier_detectMultiScale_Mat_image_VectorOfRect_objects_double_scaleFactor_int_minNeighbors_int_flags_Size_minSize_Size_maxSize
// parsed: cv::CascadeClassifier::detectMultiScale
// as:     cv::CascadeClassifier::detectMultiScale (method) cv::CascadeClassifier . detectMultiScale
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG Vector[Rect (struct)] objects=  Vector[Rect (struct)] = 
// Arg ARG Primitive(double) scaleFactor=  Primitive(double) =1.1 
// Arg ARG Primitive(int) minNeighbors=  Primitive(int) =3 
// Arg ARG Primitive(int) flags=  Primitive(int) =0 
// Arg ARG Size (struct) minSize=  Size (struct) =Size() 
// Arg ARG Size (struct) maxSize=  Size (struct) =Size() 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_CascadeClassifier_detectMultiScale_Mat_image_VectorOfRect_objects_double_scaleFactor_int_minNeighbors_int_flags_Size_minSize_Size_maxSize(
        void* instance,
        void* image,
        void* objects,
        double scaleFactor,
        int minNeighbors,
        int flags,
        c_Size minSize,
        c_Size maxSize) {
  try {
  ((cv::CascadeClassifier*) instance)->detectMultiScale(*((cv::Mat*)image), *((vector<Rect >*)objects), *reinterpret_cast<double*>(&scaleFactor), *reinterpret_cast<int*>(&minNeighbors), *reinterpret_cast<int*>(&flags), *reinterpret_cast<Size*>(&minSize), *reinterpret_cast<Size*>(&maxSize));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_CascadeClassifier_detectMultiScale_Mat_image_VectorOfRect_objects_VectorOfint_rejectLevels_VectorOfdouble_levelWeights_double_scaleFactor_int_minNeighbors_int_flags_Size_minSize_Size_maxSize_bool_outputRejectLevels
// parsed: cv::CascadeClassifier::detectMultiScale
// as:     cv::CascadeClassifier::detectMultiScale (method) cv::CascadeClassifier . detectMultiScale
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG Vector[Rect (struct)] objects=  Vector[Rect (struct)] = 
// Arg ARG Vector[Primitive(int)] rejectLevels=  Vector[Primitive(int)] = 
// Arg ARG Vector[Primitive(double)] levelWeights=  Vector[Primitive(double)] = 
// Arg ARG Primitive(double) scaleFactor=  Primitive(double) =1.1 
// Arg ARG Primitive(int) minNeighbors=  Primitive(int) =3 
// Arg ARG Primitive(int) flags=  Primitive(int) =0 
// Arg ARG Size (struct) minSize=  Size (struct) =Size() 
// Arg ARG Size (struct) maxSize=  Size (struct) =Size() 
// Arg ARG Primitive(bool) outputRejectLevels=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_CascadeClassifier_detectMultiScale_Mat_image_VectorOfRect_objects_VectorOfint_rejectLevels_VectorOfdouble_levelWeights_double_scaleFactor_int_minNeighbors_int_flags_Size_minSize_Size_maxSize_bool_outputRejectLevels(
        void* instance,
        void* image,
        void* objects,
        void* rejectLevels,
        void* levelWeights,
        double scaleFactor,
        int minNeighbors,
        int flags,
        c_Size minSize,
        c_Size maxSize,
        char outputRejectLevels) {
  try {
  ((cv::CascadeClassifier*) instance)->detectMultiScale(*((cv::Mat*)image), *((vector<Rect >*)objects), *((vector<int >*)rejectLevels), *((vector<double >*)levelWeights), *reinterpret_cast<double*>(&scaleFactor), *reinterpret_cast<int*>(&minNeighbors), *reinterpret_cast<int*>(&flags), *reinterpret_cast<Size*>(&minSize), *reinterpret_cast<Size*>(&maxSize), *reinterpret_cast<bool*>(&outputRejectLevels));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_CascadeClassifier_isOldFormatCascade
// parsed: cv::CascadeClassifier::isOldFormatCascade
// as:     cv::CascadeClassifier::isOldFormatCascade (method) cv::CascadeClassifier . isOldFormatCascade
// Return value: Primitive(bool)
struct cv_return_value_char cv_objdetect_cv_CascadeClassifier_isOldFormatCascade(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::CascadeClassifier*) instance)->isOldFormatCascade();
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

// cv_CascadeClassifier_getOriginalWindowSize
// parsed: cv::CascadeClassifier::getOriginalWindowSize
// as:     cv::CascadeClassifier::getOriginalWindowSize (method) cv::CascadeClassifier . getOriginalWindowSize
// Return value: Size (struct)
struct cv_return_value_c_Size cv_objdetect_cv_CascadeClassifier_getOriginalWindowSize(
        void* instance) {
  try {
  Size cpp_return_value = ((cv::CascadeClassifier*) instance)->getOriginalWindowSize();
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

// cv_CascadeClassifier_getFeatureType
// parsed: cv::CascadeClassifier::getFeatureType
// as:     cv::CascadeClassifier::getFeatureType (method) cv::CascadeClassifier . getFeatureType
// Return value: Primitive(int)
struct cv_return_value_int cv_objdetect_cv_CascadeClassifier_getFeatureType(
        void* instance) {
  try {
  int cpp_return_value = ((cv::CascadeClassifier*) instance)->getFeatureType();
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

// cv_CascadeClassifier_setImage_Mat_unamed_arg
// parsed: cv::CascadeClassifier::setImage
// as:     cv::CascadeClassifier::setImage (method) cv::CascadeClassifier . setImage
// Arg ARG cv::Mat (boxed) unamed_arg=  cv::Mat (boxed) = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_objdetect_cv_CascadeClassifier_setImage_Mat_unamed_arg(
        void* instance,
        void* unamed_arg) {
  try {
  bool cpp_return_value = ((cv::CascadeClassifier*) instance)->setImage(*((cv::Mat*)unamed_arg));
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

// cv_CascadeClassifier_setFaceDetectionMaskGenerator
// parsed: cv::CascadeClassifier::setFaceDetectionMaskGenerator
// as:     cv::CascadeClassifier::setFaceDetectionMaskGenerator (method) cv::CascadeClassifier . setFaceDetectionMaskGenerator
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_CascadeClassifier_setFaceDetectionMaskGenerator(
        void* instance) {
  try {
  ((cv::CascadeClassifier*) instance)->setFaceDetectionMaskGenerator();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_CascadeClassifier_MaskGenerator_initializeMask_Mat_unamed_arg
// parsed: cv::CascadeClassifier::MaskGenerator::initializeMask
// as:     cv::CascadeClassifier::MaskGenerator::initializeMask (method) cv::CascadeClassifier::MaskGenerator . initializeMask
// Arg ARG cv::Mat (boxed) unamed_arg=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_CascadeClassifier_MaskGenerator_initializeMask_Mat_unamed_arg(
        void* instance,
        void* unamed_arg) {
  try {
  ((cv::CascadeClassifier::MaskGenerator*) instance)->initializeMask(*((cv::Mat*)unamed_arg));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}


// boxed class: cv::DetectionROI
void cv_delete_DetectionROI(void* instance) {
    delete (cv::DetectionROI*) instance;
}

// boxed class: cv::FeatureEvaluator
void cv_delete_FeatureEvaluator(void* instance) {
    delete (cv::FeatureEvaluator*) instance;
}
// cv_FeatureEvaluator_clone
// parsed: cv::FeatureEvaluator::clone
// as:     cv::FeatureEvaluator::clone (method) cv::FeatureEvaluator . clone
// Return value: SmartPtr[cv::FeatureEvaluator (boxed)]
struct cv_return_value_void_X cv_objdetect_cv_FeatureEvaluator_clone(
        void* instance) {
  try {
  cv::FeatureEvaluator* cpp_return_value = ((cv::FeatureEvaluator*) instance)->clone();
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

// cv_FeatureEvaluator_getFeatureType
// parsed: cv::FeatureEvaluator::getFeatureType
// as:     cv::FeatureEvaluator::getFeatureType (method) cv::FeatureEvaluator . getFeatureType
// Return value: Primitive(int)
struct cv_return_value_int cv_objdetect_cv_FeatureEvaluator_getFeatureType(
        void* instance) {
  try {
  int cpp_return_value = ((cv::FeatureEvaluator*) instance)->getFeatureType();
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

// cv_FeatureEvaluator_setImage_Mat_img_Size_origWinSize
// parsed: cv::FeatureEvaluator::setImage
// as:     cv::FeatureEvaluator::setImage (method) cv::FeatureEvaluator . setImage
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Size (struct) origWinSize=  Size (struct) = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_objdetect_cv_FeatureEvaluator_setImage_Mat_img_Size_origWinSize(
        void* instance,
        void* img,
        c_Size origWinSize) {
  try {
  bool cpp_return_value = ((cv::FeatureEvaluator*) instance)->setImage(*((cv::Mat*)img), *reinterpret_cast<Size*>(&origWinSize));
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

// cv_FeatureEvaluator_setWindow_Point_p
// parsed: cv::FeatureEvaluator::setWindow
// as:     cv::FeatureEvaluator::setWindow (method) cv::FeatureEvaluator . setWindow
// Arg ARG Point (struct) p=  Point (struct) = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_objdetect_cv_FeatureEvaluator_setWindow_Point_p(
        void* instance,
        c_Point p) {
  try {
  bool cpp_return_value = ((cv::FeatureEvaluator*) instance)->setWindow(*reinterpret_cast<Point*>(&p));
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

// cv_FeatureEvaluator_calcOrd_int_featureIdx
// parsed: cv::FeatureEvaluator::calcOrd
// as:     cv::FeatureEvaluator::calcOrd (method) cv::FeatureEvaluator . calcOrd
// Arg ARG Primitive(int) featureIdx=  Primitive(int) = 
// Return value: Primitive(double)
struct cv_return_value_double cv_objdetect_cv_FeatureEvaluator_calcOrd_int_featureIdx(
        void* instance,
        int featureIdx) {
  try {
  double cpp_return_value = ((cv::FeatureEvaluator*) instance)->calcOrd(*reinterpret_cast<int*>(&featureIdx));
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

// cv_FeatureEvaluator_calcCat_int_featureIdx
// parsed: cv::FeatureEvaluator::calcCat
// as:     cv::FeatureEvaluator::calcCat (method) cv::FeatureEvaluator . calcCat
// Arg ARG Primitive(int) featureIdx=  Primitive(int) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_objdetect_cv_FeatureEvaluator_calcCat_int_featureIdx(
        void* instance,
        int featureIdx) {
  try {
  int cpp_return_value = ((cv::FeatureEvaluator*) instance)->calcCat(*reinterpret_cast<int*>(&featureIdx));
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

// cv_FeatureEvaluator_create_int_type
// parsed: cv::FeatureEvaluator::create
// as:     cv::FeatureEvaluator::create (method) cv::FeatureEvaluator . create
// Arg ARG Primitive(int) type=  Primitive(int) = 
// Return value: SmartPtr[cv::FeatureEvaluator (boxed)]
struct cv_return_value_void_X cv_objdetect_cv_FeatureEvaluator_create_int_type(
        void* instance,
        int type) {
  try {
  cv::FeatureEvaluator* cpp_return_value = ((cv::FeatureEvaluator*) instance)->create(*reinterpret_cast<int*>(&type));
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


// boxed class: cv::HOGDescriptor
void cv_delete_HOGDescriptor(void* instance) {
    delete (cv::HOGDescriptor*) instance;
}
// cv_HOGDescriptor_HOGDescriptor
// parsed: cv::HOGDescriptor::HOGDescriptor
// as:     cv::HOGDescriptor::HOGDescriptor (constructor) cv::HOGDescriptor . new
// Return value: cv::HOGDescriptor (boxed)
struct cv_return_value_void_X cv_objdetect_cv_HOGDescriptor_HOGDescriptor(
        ) {
  try {
  cv::HOGDescriptor* cpp_return_value = new cv::HOGDescriptor();
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

// cv_HOGDescriptor_HOGDescriptor_Size__winSize_Size__blockSize_Size__blockStride_Size__cellSize_int__nbins_int__derivAperture_double__winSigma_int__histogramNormType_double__L2HysThreshold_bool__gammaCorrection_int__nlevels
// parsed: cv::HOGDescriptor::HOGDescriptor
// as:     cv::HOGDescriptor::HOGDescriptor (constructor) cv::HOGDescriptor . new
// Arg ARG Size (struct) _winSize=  Size (struct) = 
// Arg ARG Size (struct) _blockSize=  Size (struct) = 
// Arg ARG Size (struct) _blockStride=  Size (struct) = 
// Arg ARG Size (struct) _cellSize=  Size (struct) = 
// Arg ARG Primitive(int) _nbins=  Primitive(int) = 
// Arg ARG Primitive(int) _derivAperture=  Primitive(int) =1 
// Arg ARG Primitive(double) _winSigma=  Primitive(double) =-1 
// Arg ARG Primitive(int) _histogramNormType=  Primitive(int) =HOGDescriptor::L2Hys 
// Arg ARG Primitive(double) _L2HysThreshold=  Primitive(double) =0.2 
// Arg ARG Primitive(bool) _gammaCorrection=  Primitive(bool) =false 
// Arg ARG Primitive(int) _nlevels=  Primitive(int) =HOGDescriptor::DEFAULT_NLEVELS 
// Return value: cv::HOGDescriptor (boxed)
struct cv_return_value_void_X cv_objdetect_cv_HOGDescriptor_HOGDescriptor_Size__winSize_Size__blockSize_Size__blockStride_Size__cellSize_int__nbins_int__derivAperture_double__winSigma_int__histogramNormType_double__L2HysThreshold_bool__gammaCorrection_int__nlevels(
        c_Size _winSize,
        c_Size _blockSize,
        c_Size _blockStride,
        c_Size _cellSize,
        int _nbins,
        int _derivAperture,
        double _winSigma,
        int _histogramNormType,
        double _L2HysThreshold,
        char _gammaCorrection,
        int _nlevels) {
  try {
  cv::HOGDescriptor* cpp_return_value = new cv::HOGDescriptor(*reinterpret_cast<Size*>(&_winSize), *reinterpret_cast<Size*>(&_blockSize), *reinterpret_cast<Size*>(&_blockStride), *reinterpret_cast<Size*>(&_cellSize), *reinterpret_cast<int*>(&_nbins), *reinterpret_cast<int*>(&_derivAperture), *reinterpret_cast<double*>(&_winSigma), *reinterpret_cast<int*>(&_histogramNormType), *reinterpret_cast<double*>(&_L2HysThreshold), *reinterpret_cast<bool*>(&_gammaCorrection), *reinterpret_cast<int*>(&_nlevels));
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

// cv_HOGDescriptor_HOGDescriptor_HOGDescriptor_d
// parsed: cv::HOGDescriptor::HOGDescriptor
// as:     cv::HOGDescriptor::HOGDescriptor (constructor) cv::HOGDescriptor . new
// Arg ARG cv::HOGDescriptor (boxed) d=  cv::HOGDescriptor (boxed) = 
// Return value: cv::HOGDescriptor (boxed)
struct cv_return_value_void_X cv_objdetect_cv_HOGDescriptor_HOGDescriptor_HOGDescriptor_d(
        void* d) {
  try {
  cv::HOGDescriptor* cpp_return_value = new cv::HOGDescriptor(*((cv::HOGDescriptor*)d));
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

// cv_HOGDescriptor_getDescriptorSize
// parsed: cv::HOGDescriptor::getDescriptorSize
// as:     cv::HOGDescriptor::getDescriptorSize (method) cv::HOGDescriptor . getDescriptorSize
// Return value: Primitive(size_t)
struct cv_return_value_std_size_t cv_objdetect_cv_HOGDescriptor_getDescriptorSize(
        void* instance) {
  try {
  size_t cpp_return_value = ((cv::HOGDescriptor*) instance)->getDescriptorSize();
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

// cv_HOGDescriptor_checkDetectorSize
// parsed: cv::HOGDescriptor::checkDetectorSize
// as:     cv::HOGDescriptor::checkDetectorSize (method) cv::HOGDescriptor . checkDetectorSize
// Return value: Primitive(bool)
struct cv_return_value_char cv_objdetect_cv_HOGDescriptor_checkDetectorSize(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::HOGDescriptor*) instance)->checkDetectorSize();
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

// cv_HOGDescriptor_getWinSigma
// parsed: cv::HOGDescriptor::getWinSigma
// as:     cv::HOGDescriptor::getWinSigma (method) cv::HOGDescriptor . getWinSigma
// Return value: Primitive(double)
struct cv_return_value_double cv_objdetect_cv_HOGDescriptor_getWinSigma(
        void* instance) {
  try {
  double cpp_return_value = ((cv::HOGDescriptor*) instance)->getWinSigma();
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

// cv_HOGDescriptor_setSVMDetector_InputArray__svmdetector
// parsed: cv::HOGDescriptor::setSVMDetector
// as:     cv::HOGDescriptor::setSVMDetector (method) cv::HOGDescriptor . setSVMDetector
// Arg ARG cv::Mat (boxed) _svmdetector=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_HOGDescriptor_setSVMDetector_InputArray__svmdetector(
        void* instance,
        void* _svmdetector) {
  try {
  ((cv::HOGDescriptor*) instance)->setSVMDetector(*((cv::Mat*)_svmdetector));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_HOGDescriptor_copyTo_HOGDescriptor_c
// parsed: cv::HOGDescriptor::copyTo
// as:     cv::HOGDescriptor::copyTo (method) cv::HOGDescriptor . copyTo
// Arg ARG cv::HOGDescriptor (boxed) c=  cv::HOGDescriptor (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_HOGDescriptor_copyTo_HOGDescriptor_c(
        void* instance,
        void* c) {
  try {
  ((cv::HOGDescriptor*) instance)->copyTo(*((cv::HOGDescriptor*)c));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_HOGDescriptor_compute_Mat_img_VectorOffloat_descriptors_Size_winStride_Size_padding_VectorOfPoint_locations
// parsed: cv::HOGDescriptor::compute
// as:     cv::HOGDescriptor::compute (method) cv::HOGDescriptor . compute
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Vector[Primitive(float)] descriptors=  Vector[Primitive(float)] = 
// Arg ARG Size (struct) winStride=  Size (struct) =Size() 
// Arg ARG Size (struct) padding=  Size (struct) =Size() 
// Arg ARG Vector[Point (struct)] locations=  Vector[Point (struct)] =vector<Point>() 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_HOGDescriptor_compute_Mat_img_VectorOffloat_descriptors_Size_winStride_Size_padding_VectorOfPoint_locations(
        void* instance,
        void* img,
        void* descriptors,
        c_Size winStride,
        c_Size padding,
        void* locations) {
  try {
  ((cv::HOGDescriptor*) instance)->compute(*((cv::Mat*)img), *((vector<float >*)descriptors), *reinterpret_cast<Size*>(&winStride), *reinterpret_cast<Size*>(&padding), *((vector<Point >*)locations));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_HOGDescriptor_detect_Mat_img_VectorOfPoint_foundLocations_VectorOfdouble_weights_double_hitThreshold_Size_winStride_Size_padding_VectorOfPoint_searchLocations
// parsed: cv::HOGDescriptor::detect
// as:     cv::HOGDescriptor::detect (method) cv::HOGDescriptor . detect
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Vector[Point (struct)] foundLocations=  Vector[Point (struct)] = 
// Arg ARG Vector[Primitive(double)] weights=  Vector[Primitive(double)] = 
// Arg ARG Primitive(double) hitThreshold=  Primitive(double) =0 
// Arg ARG Size (struct) winStride=  Size (struct) =Size() 
// Arg ARG Size (struct) padding=  Size (struct) =Size() 
// Arg ARG Vector[Point (struct)] searchLocations=  Vector[Point (struct)] =vector<Point>() 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_HOGDescriptor_detect_Mat_img_VectorOfPoint_foundLocations_VectorOfdouble_weights_double_hitThreshold_Size_winStride_Size_padding_VectorOfPoint_searchLocations(
        void* instance,
        void* img,
        void* foundLocations,
        void* weights,
        double hitThreshold,
        c_Size winStride,
        c_Size padding,
        void* searchLocations) {
  try {
  ((cv::HOGDescriptor*) instance)->detect(*((cv::Mat*)img), *((vector<Point >*)foundLocations), *((vector<double >*)weights), *reinterpret_cast<double*>(&hitThreshold), *reinterpret_cast<Size*>(&winStride), *reinterpret_cast<Size*>(&padding), *((vector<Point >*)searchLocations));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_HOGDescriptor_detect_Mat_img_VectorOfPoint_foundLocations_double_hitThreshold_Size_winStride_Size_padding_VectorOfPoint_searchLocations
// parsed: cv::HOGDescriptor::detect
// as:     cv::HOGDescriptor::detect (method) cv::HOGDescriptor . detect
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Vector[Point (struct)] foundLocations=  Vector[Point (struct)] = 
// Arg ARG Primitive(double) hitThreshold=  Primitive(double) =0 
// Arg ARG Size (struct) winStride=  Size (struct) =Size() 
// Arg ARG Size (struct) padding=  Size (struct) =Size() 
// Arg ARG Vector[Point (struct)] searchLocations=  Vector[Point (struct)] =vector<Point>() 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_HOGDescriptor_detect_Mat_img_VectorOfPoint_foundLocations_double_hitThreshold_Size_winStride_Size_padding_VectorOfPoint_searchLocations(
        void* instance,
        void* img,
        void* foundLocations,
        double hitThreshold,
        c_Size winStride,
        c_Size padding,
        void* searchLocations) {
  try {
  ((cv::HOGDescriptor*) instance)->detect(*((cv::Mat*)img), *((vector<Point >*)foundLocations), *reinterpret_cast<double*>(&hitThreshold), *reinterpret_cast<Size*>(&winStride), *reinterpret_cast<Size*>(&padding), *((vector<Point >*)searchLocations));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_HOGDescriptor_detectMultiScale_Mat_img_VectorOfRect_foundLocations_VectorOfdouble_foundWeights_double_hitThreshold_Size_winStride_Size_padding_double_scale_double_finalThreshold_bool_useMeanshiftGrouping
// parsed: cv::HOGDescriptor::detectMultiScale
// as:     cv::HOGDescriptor::detectMultiScale (method) cv::HOGDescriptor . detectMultiScale
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Vector[Rect (struct)] foundLocations=  Vector[Rect (struct)] = 
// Arg ARG Vector[Primitive(double)] foundWeights=  Vector[Primitive(double)] = 
// Arg ARG Primitive(double) hitThreshold=  Primitive(double) =0 
// Arg ARG Size (struct) winStride=  Size (struct) =Size() 
// Arg ARG Size (struct) padding=  Size (struct) =Size() 
// Arg ARG Primitive(double) scale=  Primitive(double) =1.05 
// Arg ARG Primitive(double) finalThreshold=  Primitive(double) =2.0 
// Arg ARG Primitive(bool) useMeanshiftGrouping=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_HOGDescriptor_detectMultiScale_Mat_img_VectorOfRect_foundLocations_VectorOfdouble_foundWeights_double_hitThreshold_Size_winStride_Size_padding_double_scale_double_finalThreshold_bool_useMeanshiftGrouping(
        void* instance,
        void* img,
        void* foundLocations,
        void* foundWeights,
        double hitThreshold,
        c_Size winStride,
        c_Size padding,
        double scale,
        double finalThreshold,
        char useMeanshiftGrouping) {
  try {
  ((cv::HOGDescriptor*) instance)->detectMultiScale(*((cv::Mat*)img), *((vector<Rect >*)foundLocations), *((vector<double >*)foundWeights), *reinterpret_cast<double*>(&hitThreshold), *reinterpret_cast<Size*>(&winStride), *reinterpret_cast<Size*>(&padding), *reinterpret_cast<double*>(&scale), *reinterpret_cast<double*>(&finalThreshold), *reinterpret_cast<bool*>(&useMeanshiftGrouping));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_HOGDescriptor_detectMultiScale_Mat_img_VectorOfRect_foundLocations_double_hitThreshold_Size_winStride_Size_padding_double_scale_double_finalThreshold_bool_useMeanshiftGrouping
// parsed: cv::HOGDescriptor::detectMultiScale
// as:     cv::HOGDescriptor::detectMultiScale (method) cv::HOGDescriptor . detectMultiScale
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Vector[Rect (struct)] foundLocations=  Vector[Rect (struct)] = 
// Arg ARG Primitive(double) hitThreshold=  Primitive(double) =0 
// Arg ARG Size (struct) winStride=  Size (struct) =Size() 
// Arg ARG Size (struct) padding=  Size (struct) =Size() 
// Arg ARG Primitive(double) scale=  Primitive(double) =1.05 
// Arg ARG Primitive(double) finalThreshold=  Primitive(double) =2.0 
// Arg ARG Primitive(bool) useMeanshiftGrouping=  Primitive(bool) =false 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_HOGDescriptor_detectMultiScale_Mat_img_VectorOfRect_foundLocations_double_hitThreshold_Size_winStride_Size_padding_double_scale_double_finalThreshold_bool_useMeanshiftGrouping(
        void* instance,
        void* img,
        void* foundLocations,
        double hitThreshold,
        c_Size winStride,
        c_Size padding,
        double scale,
        double finalThreshold,
        char useMeanshiftGrouping) {
  try {
  ((cv::HOGDescriptor*) instance)->detectMultiScale(*((cv::Mat*)img), *((vector<Rect >*)foundLocations), *reinterpret_cast<double*>(&hitThreshold), *reinterpret_cast<Size*>(&winStride), *reinterpret_cast<Size*>(&padding), *reinterpret_cast<double*>(&scale), *reinterpret_cast<double*>(&finalThreshold), *reinterpret_cast<bool*>(&useMeanshiftGrouping));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_HOGDescriptor_computeGradient_Mat_img_Mat_grad_Mat_angleOfs_Size_paddingTL_Size_paddingBR
// parsed: cv::HOGDescriptor::computeGradient
// as:     cv::HOGDescriptor::computeGradient (method) cv::HOGDescriptor . computeGradient
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) grad=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) angleOfs=  cv::Mat (boxed) = 
// Arg ARG Size (struct) paddingTL=  Size (struct) =Size() 
// Arg ARG Size (struct) paddingBR=  Size (struct) =Size() 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_HOGDescriptor_computeGradient_Mat_img_Mat_grad_Mat_angleOfs_Size_paddingTL_Size_paddingBR(
        void* instance,
        void* img,
        void* grad,
        void* angleOfs,
        c_Size paddingTL,
        c_Size paddingBR) {
  try {
  ((cv::HOGDescriptor*) instance)->computeGradient(*((cv::Mat*)img), *((cv::Mat*)grad), *((cv::Mat*)angleOfs), *reinterpret_cast<Size*>(&paddingTL), *reinterpret_cast<Size*>(&paddingBR));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_HOGDescriptor_getDefaultPeopleDetector
// parsed: cv::HOGDescriptor::getDefaultPeopleDetector
// as:     cv::HOGDescriptor::getDefaultPeopleDetector (method) cv::HOGDescriptor . getDefaultPeopleDetector
// Return value: Vector[Primitive(float)]
struct cv_return_value_void_X cv_objdetect_cv_HOGDescriptor_getDefaultPeopleDetector(
        void* instance) {
  try {
  vector<float > cpp_return_value = ((cv::HOGDescriptor*) instance)->getDefaultPeopleDetector();
  return { NULL, (void*) new vector<float >(cpp_return_value) };
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

// cv_HOGDescriptor_getDaimlerPeopleDetector
// parsed: cv::HOGDescriptor::getDaimlerPeopleDetector
// as:     cv::HOGDescriptor::getDaimlerPeopleDetector (method) cv::HOGDescriptor . getDaimlerPeopleDetector
// Return value: Vector[Primitive(float)]
struct cv_return_value_void_X cv_objdetect_cv_HOGDescriptor_getDaimlerPeopleDetector(
        void* instance) {
  try {
  vector<float > cpp_return_value = ((cv::HOGDescriptor*) instance)->getDaimlerPeopleDetector();
  return { NULL, (void*) new vector<float >(cpp_return_value) };
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


// boxed class: cv::LatentSvmDetector
void cv_delete_LatentSvmDetector(void* instance) {
    delete (cv::LatentSvmDetector*) instance;
}
// cv_LatentSvmDetector_LatentSvmDetector
// parsed: cv::LatentSvmDetector::LatentSvmDetector
// as:     cv::LatentSvmDetector::LatentSvmDetector (constructor) cv::LatentSvmDetector . new
// Return value: cv::LatentSvmDetector (boxed)
struct cv_return_value_void_X cv_objdetect_cv_LatentSvmDetector_LatentSvmDetector(
        ) {
  try {
  cv::LatentSvmDetector* cpp_return_value = new cv::LatentSvmDetector();
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

// cv_LatentSvmDetector_LatentSvmDetector_VectorOfString_filenames_VectorOfString_classNames
// parsed: cv::LatentSvmDetector::LatentSvmDetector
// as:     cv::LatentSvmDetector::LatentSvmDetector (constructor) cv::LatentSvmDetector . new
// Arg ARG Vector[string] filenames=  Vector[string] = 
// Arg ARG Vector[string] classNames=  Vector[string] =vector<string>() 
// Return value: cv::LatentSvmDetector (boxed)
struct cv_return_value_void_X cv_objdetect_cv_LatentSvmDetector_LatentSvmDetector_VectorOfString_filenames_VectorOfString_classNames(
        void* filenames,
        void* classNames) {
  try {
  cv::LatentSvmDetector* cpp_return_value = new cv::LatentSvmDetector(*((vector<string >*)filenames), *((vector<string >*)classNames));
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

// cv_LatentSvmDetector_clear
// parsed: cv::LatentSvmDetector::clear
// as:     cv::LatentSvmDetector::clear (method) cv::LatentSvmDetector . clear
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_LatentSvmDetector_clear(
        void* instance) {
  try {
  ((cv::LatentSvmDetector*) instance)->clear();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_LatentSvmDetector_empty
// parsed: cv::LatentSvmDetector::empty
// as:     cv::LatentSvmDetector::empty (method) cv::LatentSvmDetector . empty
// Return value: Primitive(bool)
struct cv_return_value_char cv_objdetect_cv_LatentSvmDetector_empty(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::LatentSvmDetector*) instance)->empty();
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

// cv_LatentSvmDetector_load_VectorOfString_filenames_VectorOfString_classNames
// parsed: cv::LatentSvmDetector::load
// as:     cv::LatentSvmDetector::load (method) cv::LatentSvmDetector . load
// Arg ARG Vector[string] filenames=  Vector[string] = 
// Arg ARG Vector[string] classNames=  Vector[string] =vector<string>() 
// Return value: Primitive(bool)
struct cv_return_value_char cv_objdetect_cv_LatentSvmDetector_load_VectorOfString_filenames_VectorOfString_classNames(
        void* instance,
        void* filenames,
        void* classNames) {
  try {
  bool cpp_return_value = ((cv::LatentSvmDetector*) instance)->load(*((vector<string >*)filenames), *((vector<string >*)classNames));
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

// cv_LatentSvmDetector_detect_Mat_image_VectorOfObjectDetection_objectDetections_float_overlapThreshold_int_numThreads
// parsed: cv::LatentSvmDetector::detect
// as:     cv::LatentSvmDetector::detect (method) cv::LatentSvmDetector . detect
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG Vector[cv::LatentSvmDetector::ObjectDetection (boxed)] objectDetections=  Vector[cv::LatentSvmDetector::ObjectDetection (boxed)] = 
// Arg ARG Primitive(float) overlapThreshold=  Primitive(float) =0.5f 
// Arg ARG Primitive(int) numThreads=  Primitive(int) =-1 
// Return value: Primitive(void)
struct cv_return_value_void cv_objdetect_cv_LatentSvmDetector_detect_Mat_image_VectorOfObjectDetection_objectDetections_float_overlapThreshold_int_numThreads(
        void* instance,
        void* image,
        void* objectDetections,
        float overlapThreshold,
        int numThreads) {
  try {
  ((cv::LatentSvmDetector*) instance)->detect(*((cv::Mat*)image), *((vector<cv::LatentSvmDetector::ObjectDetection >*)objectDetections), *reinterpret_cast<float*>(&overlapThreshold), *reinterpret_cast<int*>(&numThreads));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_LatentSvmDetector_getClassNames
// parsed: cv::LatentSvmDetector::getClassNames
// as:     cv::LatentSvmDetector::getClassNames (method) cv::LatentSvmDetector . getClassNames
// Return value: Vector[string]
struct cv_return_value_void_X cv_objdetect_cv_LatentSvmDetector_getClassNames(
        void* instance) {
  try {
  vector<string > cpp_return_value = ((cv::LatentSvmDetector*) instance)->getClassNames();
  return { NULL, (void*) new vector<string >(cpp_return_value) };
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

// cv_LatentSvmDetector_getClassCount
// parsed: cv::LatentSvmDetector::getClassCount
// as:     cv::LatentSvmDetector::getClassCount (method) cv::LatentSvmDetector . getClassCount
// Return value: Primitive(size_t)
struct cv_return_value_std_size_t cv_objdetect_cv_LatentSvmDetector_getClassCount(
        void* instance) {
  try {
  size_t cpp_return_value = ((cv::LatentSvmDetector*) instance)->getClassCount();
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


// boxed class: cv::LatentSvmDetector::ObjectDetection
void cv_delete_LatentSvmDetector_ObjectDetection(void* instance) {
    delete (cv::LatentSvmDetector::ObjectDetection*) instance;
}
// cv_LatentSvmDetector_ObjectDetection_ObjectDetection
// parsed: cv::LatentSvmDetector::ObjectDetection::ObjectDetection
// as:     cv::LatentSvmDetector::ObjectDetection::ObjectDetection (constructor) cv::LatentSvmDetector::ObjectDetection . new
// Return value: cv::LatentSvmDetector::ObjectDetection (boxed)
struct cv_return_value_void_X cv_objdetect_cv_LatentSvmDetector_ObjectDetection_ObjectDetection(
        ) {
  try {
  cv::LatentSvmDetector::ObjectDetection* cpp_return_value = new cv::LatentSvmDetector::ObjectDetection();
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

// cv_LatentSvmDetector_ObjectDetection_ObjectDetection_Rect_rect_float_score_int_classID
// parsed: cv::LatentSvmDetector::ObjectDetection::ObjectDetection
// as:     cv::LatentSvmDetector::ObjectDetection::ObjectDetection (constructor) cv::LatentSvmDetector::ObjectDetection . new
// Arg ARG Rect (struct) rect=  Rect (struct) = 
// Arg ARG Primitive(float) score=  Primitive(float) = 
// Arg ARG Primitive(int) classID=  Primitive(int) =-1 
// Return value: cv::LatentSvmDetector::ObjectDetection (boxed)
struct cv_return_value_void_X cv_objdetect_cv_LatentSvmDetector_ObjectDetection_ObjectDetection_Rect_rect_float_score_int_classID(
        c_Rect rect,
        float score,
        int classID) {
  try {
  cv::LatentSvmDetector::ObjectDetection* cpp_return_value = new cv::LatentSvmDetector::ObjectDetection(*reinterpret_cast<Rect*>(&rect), *reinterpret_cast<float*>(&score), *reinterpret_cast<int*>(&classID));
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


// boxed class: cv::SimilarRects
void cv_delete_SimilarRects(void* instance) {
    delete (cv::SimilarRects*) instance;
}
// cv_SimilarRects_SimilarRects_double__eps
// parsed: cv::SimilarRects::SimilarRects
// as:     cv::SimilarRects::SimilarRects (constructor) cv::SimilarRects . new
// Arg ARG Primitive(double) _eps=  Primitive(double) = 
// Return value: cv::SimilarRects (boxed)
struct cv_return_value_void_X cv_objdetect_cv_SimilarRects_SimilarRects_double__eps(
        double _eps) {
  try {
  cv::SimilarRects* cpp_return_value = new cv::SimilarRects(*reinterpret_cast<double*>(&_eps));
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


// boxed class: cv::linemod::ColorGradient
void cv_delete_linemod_ColorGradient(void* instance) {
    delete (cv::linemod::ColorGradient*) instance;
}
// cv_linemod_ColorGradient_ColorGradient
// parsed: cv::linemod::ColorGradient::ColorGradient
// as:     cv::linemod::ColorGradient::ColorGradient (constructor) cv::linemod::ColorGradient . new
// Return value: cv::linemod::ColorGradient (boxed)
struct cv_return_value_void_X cv_objdetect_cv_linemod_ColorGradient_ColorGradient(
        ) {
  try {
  cv::linemod::ColorGradient* cpp_return_value = new cv::linemod::ColorGradient();
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

// cv_linemod_ColorGradient_ColorGradient_float_weak_threshold_size_t_num_features_float_strong_threshold
// parsed: cv::linemod::ColorGradient::ColorGradient
// as:     cv::linemod::ColorGradient::ColorGradient (constructor) cv::linemod::ColorGradient . new
// Arg ARG Primitive(float) weak_threshold=  Primitive(float) = 
// Arg ARG Primitive(size_t) num_features=  Primitive(size_t) = 
// Arg ARG Primitive(float) strong_threshold=  Primitive(float) = 
// Return value: cv::linemod::ColorGradient (boxed)
struct cv_return_value_void_X cv_objdetect_cv_linemod_ColorGradient_ColorGradient_float_weak_threshold_size_t_num_features_float_strong_threshold(
        float weak_threshold,
        std::size_t num_features,
        float strong_threshold) {
  try {
  cv::linemod::ColorGradient* cpp_return_value = new cv::linemod::ColorGradient(*reinterpret_cast<float*>(&weak_threshold), *reinterpret_cast<size_t*>(&num_features), *reinterpret_cast<float*>(&strong_threshold));
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


// boxed class: cv::linemod::DepthNormal
void cv_delete_linemod_DepthNormal(void* instance) {
    delete (cv::linemod::DepthNormal*) instance;
}
// cv_linemod_DepthNormal_DepthNormal
// parsed: cv::linemod::DepthNormal::DepthNormal
// as:     cv::linemod::DepthNormal::DepthNormal (constructor) cv::linemod::DepthNormal . new
// Return value: cv::linemod::DepthNormal (boxed)
struct cv_return_value_void_X cv_objdetect_cv_linemod_DepthNormal_DepthNormal(
        ) {
  try {
  cv::linemod::DepthNormal* cpp_return_value = new cv::linemod::DepthNormal();
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

// cv_linemod_DepthNormal_DepthNormal_int_distance_threshold_int_difference_threshold_size_t_num_features_int_extract_threshold
// parsed: cv::linemod::DepthNormal::DepthNormal
// as:     cv::linemod::DepthNormal::DepthNormal (constructor) cv::linemod::DepthNormal . new
// Arg ARG Primitive(int) distance_threshold=  Primitive(int) = 
// Arg ARG Primitive(int) difference_threshold=  Primitive(int) = 
// Arg ARG Primitive(size_t) num_features=  Primitive(size_t) = 
// Arg ARG Primitive(int) extract_threshold=  Primitive(int) = 
// Return value: cv::linemod::DepthNormal (boxed)
struct cv_return_value_void_X cv_objdetect_cv_linemod_DepthNormal_DepthNormal_int_distance_threshold_int_difference_threshold_size_t_num_features_int_extract_threshold(
        int distance_threshold,
        int difference_threshold,
        std::size_t num_features,
        int extract_threshold) {
  try {
  cv::linemod::DepthNormal* cpp_return_value = new cv::linemod::DepthNormal(*reinterpret_cast<int*>(&distance_threshold), *reinterpret_cast<int*>(&difference_threshold), *reinterpret_cast<size_t*>(&num_features), *reinterpret_cast<int*>(&extract_threshold));
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


// boxed class: cv::linemod::Detector
void cv_delete_linemod_Detector(void* instance) {
    delete (cv::linemod::Detector*) instance;
}
// cv_linemod_Detector_Detector
// parsed: cv::linemod::Detector::Detector
// as:     cv::linemod::Detector::Detector (constructor) cv::linemod::Detector . new
// Return value: cv::linemod::Detector (boxed)
struct cv_return_value_void_X cv_objdetect_cv_linemod_Detector_Detector(
        ) {
  try {
  cv::linemod::Detector* cpp_return_value = new cv::linemod::Detector();
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

// cv_linemod_Detector_getT_int_pyramid_level
// parsed: cv::linemod::Detector::getT
// as:     cv::linemod::Detector::getT (method) cv::linemod::Detector . getT
// Arg ARG Primitive(int) pyramid_level=  Primitive(int) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_objdetect_cv_linemod_Detector_getT_int_pyramid_level(
        void* instance,
        int pyramid_level) {
  try {
  int cpp_return_value = ((cv::linemod::Detector*) instance)->getT(*reinterpret_cast<int*>(&pyramid_level));
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

// cv_linemod_Detector_pyramidLevels
// parsed: cv::linemod::Detector::pyramidLevels
// as:     cv::linemod::Detector::pyramidLevels (method) cv::linemod::Detector . pyramidLevels
// Return value: Primitive(int)
struct cv_return_value_int cv_objdetect_cv_linemod_Detector_pyramidLevels(
        void* instance) {
  try {
  int cpp_return_value = ((cv::linemod::Detector*) instance)->pyramidLevels();
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

// cv_linemod_Detector_numTemplates
// parsed: cv::linemod::Detector::numTemplates
// as:     cv::linemod::Detector::numTemplates (method) cv::linemod::Detector . numTemplates
// Return value: Primitive(int)
struct cv_return_value_int cv_objdetect_cv_linemod_Detector_numTemplates(
        void* instance) {
  try {
  int cpp_return_value = ((cv::linemod::Detector*) instance)->numTemplates();
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

// cv_linemod_Detector_numClasses
// parsed: cv::linemod::Detector::numClasses
// as:     cv::linemod::Detector::numClasses (method) cv::linemod::Detector . numClasses
// Return value: Primitive(int)
struct cv_return_value_int cv_objdetect_cv_linemod_Detector_numClasses(
        void* instance) {
  try {
  int cpp_return_value = ((cv::linemod::Detector*) instance)->numClasses();
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


// boxed class: cv::linemod::Feature
void cv_delete_linemod_Feature(void* instance) {
    delete (cv::linemod::Feature*) instance;
}
// cv_linemod_Feature_Feature
// parsed: cv::linemod::Feature::Feature
// as:     cv::linemod::Feature::Feature (constructor) cv::linemod::Feature . new
// Return value: cv::linemod::Feature (boxed)
struct cv_return_value_void_X cv_objdetect_cv_linemod_Feature_Feature(
        ) {
  try {
  cv::linemod::Feature* cpp_return_value = new cv::linemod::Feature();
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

// cv_linemod_Feature_Feature_int_x_int_y_int_label
// parsed: cv::linemod::Feature::Feature
// as:     cv::linemod::Feature::Feature (constructor) cv::linemod::Feature . new
// Arg ARG Primitive(int) x=  Primitive(int) = 
// Arg ARG Primitive(int) y=  Primitive(int) = 
// Arg ARG Primitive(int) label=  Primitive(int) = 
// Return value: cv::linemod::Feature (boxed)
struct cv_return_value_void_X cv_objdetect_cv_linemod_Feature_Feature_int_x_int_y_int_label(
        int x,
        int y,
        int label) {
  try {
  cv::linemod::Feature* cpp_return_value = new cv::linemod::Feature(*reinterpret_cast<int*>(&x), *reinterpret_cast<int*>(&y), *reinterpret_cast<int*>(&label));
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


// boxed class: cv::linemod::Match
void cv_delete_linemod_Match(void* instance) {
    delete (cv::linemod::Match*) instance;
}
// cv_linemod_Match_Match
// parsed: cv::linemod::Match::Match
// as:     cv::linemod::Match::Match (constructor) cv::linemod::Match . new
// Return value: cv::linemod::Match (boxed)
struct cv_return_value_void_X cv_objdetect_cv_linemod_Match_Match(
        ) {
  try {
  cv::linemod::Match* cpp_return_value = new cv::linemod::Match();
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


// boxed class: cv::linemod::Template
void cv_delete_linemod_Template(void* instance) {
    delete (cv::linemod::Template*) instance;
}


} // extern "C"

