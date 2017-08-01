
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


void* cv_new_VectorOfVectorOfKeyPoint() { return new std::vector<vector<cv::KeyPoint > >(); }
void cv_delete_VectorOfVectorOfKeyPoint(void* ptr) { delete ((vector<vector<cv::KeyPoint > >*) ptr); }
void cv_push_VectorOfVectorOfKeyPoint(void* ptr, void* ptr2) {
    vector<cv::KeyPoint >* val = (vector<cv::KeyPoint >*)ptr2;
    ((vector<vector<cv::KeyPoint > >*) ptr)->push_back(*val);
}
int cv_VectorOfVectorOfKeyPoint_len(void* ptr) { return ((vector<vector<cv::KeyPoint > >*) ptr)->size(); }
void** cv_VectorOfVectorOfKeyPoint_data(void* ptr) {
    return (void**) (((vector<vector<cv::KeyPoint > >*) ptr)->data());
}


} // extern "C"

