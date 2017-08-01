
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


void* cv_new_VectorOfVectorOfuchar() { return new std::vector<vector<uchar > >(); }
void cv_delete_VectorOfVectorOfuchar(void* ptr) { delete ((vector<vector<uchar > >*) ptr); }
void cv_push_VectorOfVectorOfuchar(void* ptr, void* ptr2) {
    vector<uchar >* val = (vector<uchar >*)ptr2;
    ((vector<vector<uchar > >*) ptr)->push_back(*val);
}
int cv_VectorOfVectorOfuchar_len(void* ptr) { return ((vector<vector<uchar > >*) ptr)->size(); }
void** cv_VectorOfVectorOfuchar_data(void* ptr) {
    return (void**) (((vector<vector<uchar > >*) ptr)->data());
}


} // extern "C"

