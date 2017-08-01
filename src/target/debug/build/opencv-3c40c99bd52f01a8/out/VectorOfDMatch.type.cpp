
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


void* cv_new_VectorOfDMatch() { return new std::vector<cv::DMatch >(); }
void cv_delete_VectorOfDMatch(void* ptr) { delete ((vector<cv::DMatch >*) ptr); }
void cv_push_VectorOfDMatch(void* ptr, void* ptr2) {
    cv::DMatch* val = (cv::DMatch*)ptr2;
    ((vector<cv::DMatch >*) ptr)->push_back(*val);
}
int cv_VectorOfDMatch_len(void* ptr) { return ((vector<cv::DMatch >*) ptr)->size(); }
void** cv_VectorOfDMatch_data(void* ptr) {
    return (void**) (((vector<cv::DMatch >*) ptr)->data());
}


} // extern "C"

