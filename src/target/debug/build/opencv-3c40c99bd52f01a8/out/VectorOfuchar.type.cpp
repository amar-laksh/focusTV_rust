
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


void* cv_new_VectorOfuchar() { return new std::vector<uchar >(); }
void cv_delete_VectorOfuchar(void* ptr) { delete ((vector<uchar >*) ptr); }
void cv_push_VectorOfuchar(void* ptr, void* ptr2) {
    uchar* val = (uchar*)ptr2;
    ((vector<uchar >*) ptr)->push_back(*val);
}
int cv_VectorOfuchar_len(void* ptr) { return ((vector<uchar >*) ptr)->size(); }
void** cv_VectorOfuchar_data(void* ptr) {
    return (void**) (((vector<uchar >*) ptr)->data());
}


} // extern "C"

