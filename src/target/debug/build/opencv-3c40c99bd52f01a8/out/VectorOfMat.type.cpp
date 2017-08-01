
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


void* cv_new_VectorOfMat() { return new std::vector<cv::Mat >(); }
void cv_delete_VectorOfMat(void* ptr) { delete ((vector<cv::Mat >*) ptr); }
void cv_push_VectorOfMat(void* ptr, void* ptr2) {
    cv::Mat* val = (cv::Mat*)ptr2;
    ((vector<cv::Mat >*) ptr)->push_back(*val);
}
int cv_VectorOfMat_len(void* ptr) { return ((vector<cv::Mat >*) ptr)->size(); }
void** cv_VectorOfMat_data(void* ptr) {
    return (void**) (((vector<cv::Mat >*) ptr)->data());
}


} // extern "C"

