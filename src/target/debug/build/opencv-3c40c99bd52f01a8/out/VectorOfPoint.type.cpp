
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


void* cv_new_VectorOfPoint() { return new std::vector<Point >(); }
void cv_delete_VectorOfPoint(void* ptr) { delete ((vector<Point >*) ptr); }
void cv_push_VectorOfPoint(void* ptr, void* ptr2) {
    Point* val = (Point*)ptr2;
    ((vector<Point >*) ptr)->push_back(*val);
}
int cv_VectorOfPoint_len(void* ptr) { return ((vector<Point >*) ptr)->size(); }
void** cv_VectorOfPoint_data(void* ptr) {
    return (void**) (((vector<Point >*) ptr)->data());
}


} // extern "C"

