
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


void* cv_new_VectorOfPoint2f() { return new std::vector<Point2f >(); }
void cv_delete_VectorOfPoint2f(void* ptr) { delete ((vector<Point2f >*) ptr); }
void cv_push_VectorOfPoint2f(void* ptr, void* ptr2) {
    Point2f* val = (Point2f*)ptr2;
    ((vector<Point2f >*) ptr)->push_back(*val);
}
int cv_VectorOfPoint2f_len(void* ptr) { return ((vector<Point2f >*) ptr)->size(); }
void** cv_VectorOfPoint2f_data(void* ptr) {
    return (void**) (((vector<Point2f >*) ptr)->data());
}


} // extern "C"

