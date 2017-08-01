
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


void* cv_new_VectorOfVectorOfint() { return new std::vector<vector<int > >(); }
void cv_delete_VectorOfVectorOfint(void* ptr) { delete ((vector<vector<int > >*) ptr); }
void cv_push_VectorOfVectorOfint(void* ptr, void* ptr2) {
    vector<int >* val = (vector<int >*)ptr2;
    ((vector<vector<int > >*) ptr)->push_back(*val);
}
int cv_VectorOfVectorOfint_len(void* ptr) { return ((vector<vector<int > >*) ptr)->size(); }
void** cv_VectorOfVectorOfint_data(void* ptr) {
    return (void**) (((vector<vector<int > >*) ptr)->data());
}


} // extern "C"

