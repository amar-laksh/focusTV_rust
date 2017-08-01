
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


void* cv_new_VectorOfVectorOfDMatch() { return new std::vector<vector<cv::DMatch > >(); }
void cv_delete_VectorOfVectorOfDMatch(void* ptr) { delete ((vector<vector<cv::DMatch > >*) ptr); }
void cv_push_VectorOfVectorOfDMatch(void* ptr, void* ptr2) {
    vector<cv::DMatch >* val = (vector<cv::DMatch >*)ptr2;
    ((vector<vector<cv::DMatch > >*) ptr)->push_back(*val);
}
int cv_VectorOfVectorOfDMatch_len(void* ptr) { return ((vector<vector<cv::DMatch > >*) ptr)->size(); }
void** cv_VectorOfVectorOfDMatch_data(void* ptr) {
    return (void**) (((vector<vector<cv::DMatch > >*) ptr)->data());
}


} // extern "C"

