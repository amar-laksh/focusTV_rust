
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


void* cv_new_VectorOffloat() { return new std::vector<float >(); }
void cv_delete_VectorOffloat(void* ptr) { delete ((vector<float >*) ptr); }
void cv_push_VectorOffloat(void* ptr, void* ptr2) {
    float* val = (float*)ptr2;
    ((vector<float >*) ptr)->push_back(*val);
}
int cv_VectorOffloat_len(void* ptr) { return ((vector<float >*) ptr)->size(); }
void** cv_VectorOffloat_data(void* ptr) {
    return (void**) (((vector<float >*) ptr)->data());
}


} // extern "C"

