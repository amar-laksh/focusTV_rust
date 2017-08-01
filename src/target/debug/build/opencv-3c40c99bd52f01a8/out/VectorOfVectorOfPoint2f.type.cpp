
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


void* cv_new_VectorOfVectorOfPoint2f() { return new std::vector<vector<Point2f > >(); }
void cv_delete_VectorOfVectorOfPoint2f(void* ptr) { delete ((vector<vector<Point2f > >*) ptr); }
void cv_push_VectorOfVectorOfPoint2f(void* ptr, void* ptr2) {
    vector<Point2f >* val = (vector<Point2f >*)ptr2;
    ((vector<vector<Point2f > >*) ptr)->push_back(*val);
}
int cv_VectorOfVectorOfPoint2f_len(void* ptr) { return ((vector<vector<Point2f > >*) ptr)->size(); }
void** cv_VectorOfVectorOfPoint2f_data(void* ptr) {
    return (void**) (((vector<vector<Point2f > >*) ptr)->data());
}


} // extern "C"

