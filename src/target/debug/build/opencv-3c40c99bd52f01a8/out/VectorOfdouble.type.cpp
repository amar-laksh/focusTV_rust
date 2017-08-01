
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


void* cv_new_VectorOfdouble() { return new std::vector<double >(); }
void cv_delete_VectorOfdouble(void* ptr) { delete ((vector<double >*) ptr); }
void cv_push_VectorOfdouble(void* ptr, void* ptr2) {
    double* val = (double*)ptr2;
    ((vector<double >*) ptr)->push_back(*val);
}
int cv_VectorOfdouble_len(void* ptr) { return ((vector<double >*) ptr)->size(); }
void** cv_VectorOfdouble_data(void* ptr) {
    return (void**) (((vector<double >*) ptr)->data());
}


} // extern "C"

