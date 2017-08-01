
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


void* cv_new_VectorOfVectorOfPoint() { return new std::vector<vector<Point > >(); }
void cv_delete_VectorOfVectorOfPoint(void* ptr) { delete ((vector<vector<Point > >*) ptr); }
void cv_push_VectorOfVectorOfPoint(void* ptr, void* ptr2) {
    vector<Point >* val = (vector<Point >*)ptr2;
    ((vector<vector<Point > >*) ptr)->push_back(*val);
}
int cv_VectorOfVectorOfPoint_len(void* ptr) { return ((vector<vector<Point > >*) ptr)->size(); }
void** cv_VectorOfVectorOfPoint_data(void* ptr) {
    return (void**) (((vector<vector<Point > >*) ptr)->data());
}


} // extern "C"

