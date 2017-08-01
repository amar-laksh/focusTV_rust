
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


void* cv_new_VectorOfKeyPoint() { return new std::vector<cv::KeyPoint >(); }
void cv_delete_VectorOfKeyPoint(void* ptr) { delete ((vector<cv::KeyPoint >*) ptr); }
void cv_push_VectorOfKeyPoint(void* ptr, void* ptr2) {
    cv::KeyPoint* val = (cv::KeyPoint*)ptr2;
    ((vector<cv::KeyPoint >*) ptr)->push_back(*val);
}
int cv_VectorOfKeyPoint_len(void* ptr) { return ((vector<cv::KeyPoint >*) ptr)->size(); }
void** cv_VectorOfKeyPoint_data(void* ptr) {
    return (void**) (((vector<cv::KeyPoint >*) ptr)->data());
}


} // extern "C"

