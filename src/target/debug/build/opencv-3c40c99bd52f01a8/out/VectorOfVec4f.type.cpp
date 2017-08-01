
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


void* cv_new_VectorOfVec4f() { return new std::vector<Vec4f >(); }
void cv_delete_VectorOfVec4f(void* ptr) { delete ((vector<Vec4f >*) ptr); }
void cv_push_VectorOfVec4f(void* ptr, void* ptr2) {
    Vec4f* val = (Vec4f*)ptr2;
    ((vector<Vec4f >*) ptr)->push_back(*val);
}
int cv_VectorOfVec4f_len(void* ptr) { return ((vector<Vec4f >*) ptr)->size(); }
void** cv_VectorOfVec4f_data(void* ptr) {
    return (void**) (((vector<Vec4f >*) ptr)->data());
}


} // extern "C"

