
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


void* cv_new_VectorOfString() { return new std::vector<string >(); }
void cv_delete_VectorOfString(void* ptr) { delete ((vector<string >*) ptr); }
void cv_push_VectorOfString(void* ptr, void* ptr2) {
    string* val = (string*)ptr2;
    ((vector<string >*) ptr)->push_back(*val);
}
int cv_VectorOfString_len(void* ptr) { return ((vector<string >*) ptr)->size(); }
void** cv_VectorOfString_data(void* ptr) {
    return (void**) (((vector<string >*) ptr)->data());
}


} // extern "C"

