
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


void* cv_new_VectorOfRect() { return new std::vector<Rect >(); }
void cv_delete_VectorOfRect(void* ptr) { delete ((vector<Rect >*) ptr); }
void cv_push_VectorOfRect(void* ptr, void* ptr2) {
    Rect* val = (Rect*)ptr2;
    ((vector<Rect >*) ptr)->push_back(*val);
}
int cv_VectorOfRect_len(void* ptr) { return ((vector<Rect >*) ptr)->size(); }
void** cv_VectorOfRect_data(void* ptr) {
    return (void**) (((vector<Rect >*) ptr)->data());
}


} // extern "C"

