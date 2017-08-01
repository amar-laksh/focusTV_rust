
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


void* cv_new_VectorOfchar() { return new std::vector<char >(); }
void cv_delete_VectorOfchar(void* ptr) { delete ((vector<char >*) ptr); }
void cv_push_VectorOfchar(void* ptr, void* ptr2) {
    char* val = (char*)ptr2;
    ((vector<char >*) ptr)->push_back(*val);
}
int cv_VectorOfchar_len(void* ptr) { return ((vector<char >*) ptr)->size(); }
void** cv_VectorOfchar_data(void* ptr) {
    return (void**) (((vector<char >*) ptr)->data());
}


} // extern "C"

