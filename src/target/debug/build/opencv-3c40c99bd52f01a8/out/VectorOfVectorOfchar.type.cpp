
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


void* cv_new_VectorOfVectorOfchar() { return new std::vector<vector<char > >(); }
void cv_delete_VectorOfVectorOfchar(void* ptr) { delete ((vector<vector<char > >*) ptr); }
void cv_push_VectorOfVectorOfchar(void* ptr, void* ptr2) {
    vector<char >* val = (vector<char >*)ptr2;
    ((vector<vector<char > >*) ptr)->push_back(*val);
}
int cv_VectorOfVectorOfchar_len(void* ptr) { return ((vector<vector<char > >*) ptr)->size(); }
void** cv_VectorOfVectorOfchar_data(void* ptr) {
    return (void**) (((vector<vector<char > >*) ptr)->data());
}


} // extern "C"

