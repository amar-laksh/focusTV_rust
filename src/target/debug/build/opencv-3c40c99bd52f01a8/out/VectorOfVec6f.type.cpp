
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


void* cv_new_VectorOfVec6f() { return new std::vector<Vec6f >(); }
void cv_delete_VectorOfVec6f(void* ptr) { delete ((vector<Vec6f >*) ptr); }
void cv_push_VectorOfVec6f(void* ptr, void* ptr2) {
    Vec6f* val = (Vec6f*)ptr2;
    ((vector<Vec6f >*) ptr)->push_back(*val);
}
int cv_VectorOfVec6f_len(void* ptr) { return ((vector<Vec6f >*) ptr)->size(); }
void** cv_VectorOfVec6f_data(void* ptr) {
    return (void**) (((vector<Vec6f >*) ptr)->data());
}


} // extern "C"

