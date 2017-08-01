
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


void* cv_new_VectorOfObjectDetection() { return new std::vector<cv::LatentSvmDetector::ObjectDetection >(); }
void cv_delete_VectorOfObjectDetection(void* ptr) { delete ((vector<cv::LatentSvmDetector::ObjectDetection >*) ptr); }
void cv_push_VectorOfObjectDetection(void* ptr, void* ptr2) {
    cv::LatentSvmDetector::ObjectDetection* val = (cv::LatentSvmDetector::ObjectDetection*)ptr2;
    ((vector<cv::LatentSvmDetector::ObjectDetection >*) ptr)->push_back(*val);
}
int cv_VectorOfObjectDetection_len(void* ptr) { return ((vector<cv::LatentSvmDetector::ObjectDetection >*) ptr)->size(); }
void** cv_VectorOfObjectDetection_data(void* ptr) {
    return (void**) (((vector<cv::LatentSvmDetector::ObjectDetection >*) ptr)->data());
}


} // extern "C"

