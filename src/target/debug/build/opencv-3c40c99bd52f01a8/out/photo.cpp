
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

// cv_fastNlMeansDenoisingColored_InputArray_src_OutputArray_dst_float_h_float_hColor_int_templateWindowSize_int_searchWindowSize
// parsed: cv::fastNlMeansDenoisingColored
// as:     cv::fastNlMeansDenoisingColored (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(float) h=  Primitive(float) =3 
// Arg ARG Primitive(float) hColor=  Primitive(float) =3 
// Arg ARG Primitive(int) templateWindowSize=  Primitive(int) =7 
// Arg ARG Primitive(int) searchWindowSize=  Primitive(int) =21 
// Return value: Primitive(void)
struct cv_return_value_void cv_photo_cv_fastNlMeansDenoisingColored_InputArray_src_OutputArray_dst_float_h_float_hColor_int_templateWindowSize_int_searchWindowSize(
        void* src,
        void* dst,
        float h,
        float hColor,
        int templateWindowSize,
        int searchWindowSize) {
  try {
  cv::fastNlMeansDenoisingColored(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<float*>(&h), *reinterpret_cast<float*>(&hColor), *reinterpret_cast<int*>(&templateWindowSize), *reinterpret_cast<int*>(&searchWindowSize));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_fastNlMeansDenoising_InputArray_src_OutputArray_dst_float_h_int_templateWindowSize_int_searchWindowSize
// parsed: cv::fastNlMeansDenoising
// as:     cv::fastNlMeansDenoising (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(float) h=  Primitive(float) =3 
// Arg ARG Primitive(int) templateWindowSize=  Primitive(int) =7 
// Arg ARG Primitive(int) searchWindowSize=  Primitive(int) =21 
// Return value: Primitive(void)
struct cv_return_value_void cv_photo_cv_fastNlMeansDenoising_InputArray_src_OutputArray_dst_float_h_int_templateWindowSize_int_searchWindowSize(
        void* src,
        void* dst,
        float h,
        int templateWindowSize,
        int searchWindowSize) {
  try {
  cv::fastNlMeansDenoising(*((cv::Mat*)src), *((cv::Mat*)dst), *reinterpret_cast<float*>(&h), *reinterpret_cast<int*>(&templateWindowSize), *reinterpret_cast<int*>(&searchWindowSize));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_inpaint_InputArray_src_InputArray_inpaintMask_OutputArray_dst_double_inpaintRadius_int_flags
// parsed: cv::inpaint
// as:     cv::inpaint (function)
// Arg ARG cv::Mat (boxed) src=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) inpaintMask=  cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst=  cv::Mat (boxed) = 
// Arg ARG Primitive(double) inpaintRadius=  Primitive(double) = 
// Arg ARG Primitive(int) flags=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_photo_cv_inpaint_InputArray_src_InputArray_inpaintMask_OutputArray_dst_double_inpaintRadius_int_flags(
        void* src,
        void* inpaintMask,
        void* dst,
        double inpaintRadius,
        int flags) {
  try {
  cv::inpaint(*((cv::Mat*)src), *((cv::Mat*)inpaintMask), *((cv::Mat*)dst), *reinterpret_cast<double*>(&inpaintRadius), *reinterpret_cast<int*>(&flags));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}



} // extern "C"

