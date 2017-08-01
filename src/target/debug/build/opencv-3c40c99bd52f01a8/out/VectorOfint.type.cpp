
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


void* cv_new_VectorOfint() { return new std::vector<int >(); }
void cv_delete_VectorOfint(void* ptr) { delete ((vector<int >*) ptr); }
void cv_push_VectorOfint(void* ptr, void* ptr2) {
    int* val = (int*)ptr2;
    ((vector<int >*) ptr)->push_back(*val);
}
int cv_VectorOfint_len(void* ptr) { return ((vector<int >*) ptr)->size(); }
void** cv_VectorOfint_data(void* ptr) {
    return (void**) (((vector<int >*) ptr)->data());
}


} // extern "C"

