
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

// CV_FOURCC_char_c1_char_c2_char_c3_char_c4
// parsed: CV_FOURCC
// as:     CV_FOURCC (function)
// Arg ARG Primitive(char) c1=  Primitive(char) = 
// Arg ARG Primitive(char) c2=  Primitive(char) = 
// Arg ARG Primitive(char) c3=  Primitive(char) = 
// Arg ARG Primitive(char) c4=  Primitive(char) = 
// Return value: Primitive(int)
struct cv_return_value_int cv_highgui_CV_FOURCC_char_c1_char_c2_char_c3_char_c4(
        char c1,
        char c2,
        char c3,
        char c4) {
  try {
  int cpp_return_value = CV_FOURCC(*reinterpret_cast<char*>(&c1), *reinterpret_cast<char*>(&c2), *reinterpret_cast<char*>(&c3), *reinterpret_cast<char*>(&c4));
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cvDestroyAllWindows
// parsed: cvDestroyAllWindows
// as:     cvDestroyAllWindows (function)
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cvDestroyAllWindows(
        ) {
  try {
  cvDestroyAllWindows();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cvStartWindowThread
// parsed: cvStartWindowThread
// as:     cvStartWindowThread (function)
// Return value: Primitive(int)
struct cv_return_value_int cv_highgui_cvStartWindowThread(
        ) {
  try {
  int cpp_return_value = cvStartWindowThread();
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cvStopLoop
// parsed: cvStopLoop
// as:     cvStopLoop (function)
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cvStopLoop(
        ) {
  try {
  cvStopLoop();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cvWaitKey_int_delay
// parsed: cvWaitKey
// as:     cvWaitKey (function)
// Arg ARG Primitive(int) delay=  Primitive(int) =0 
// Return value: Primitive(int)
struct cv_return_value_int cv_highgui_cvWaitKey_int_delay(
        int delay) {
  try {
  int cpp_return_value = cvWaitKey(*reinterpret_cast<int*>(&delay));
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_destroyAllWindows
// parsed: cv::destroyAllWindows
// as:     cv::destroyAllWindows (function)
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_destroyAllWindows(
        ) {
  try {
  cv::destroyAllWindows();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_destroyWindow_String_winname
// parsed: cv::destroyWindow
// as:     cv::destroyWindow (function)
// Arg ARG string winname=  string = 
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_destroyWindow_String_winname(
        const char *winname) {
  try {
  cv::destroyWindow(winname);
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_displayOverlay_String_winname_String_text_int_delayms
// parsed: cv::displayOverlay
// as:     cv::displayOverlay (function)
// Arg ARG string winname=  string = 
// Arg ARG string text=  string = 
// Arg ARG Primitive(int) delayms=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_displayOverlay_String_winname_String_text_int_delayms(
        const char *winname,
        const char *text,
        int delayms) {
  try {
  cv::displayOverlay(winname, text, *reinterpret_cast<int*>(&delayms));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_displayStatusBar_String_winname_String_text_int_delayms
// parsed: cv::displayStatusBar
// as:     cv::displayStatusBar (function)
// Arg ARG string winname=  string = 
// Arg ARG string text=  string = 
// Arg ARG Primitive(int) delayms=  Primitive(int) =0 
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_displayStatusBar_String_winname_String_text_int_delayms(
        const char *winname,
        const char *text,
        int delayms) {
  try {
  cv::displayStatusBar(winname, text, *reinterpret_cast<int*>(&delayms));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_getTrackbarPos_String_trackbarname_String_winname
// parsed: cv::getTrackbarPos
// as:     cv::getTrackbarPos (function)
// Arg ARG string trackbarname=  string = 
// Arg ARG string winname=  string = 
// Return value: Primitive(int)
struct cv_return_value_int cv_highgui_cv_getTrackbarPos_String_trackbarname_String_winname(
        const char *trackbarname,
        const char *winname) {
  try {
  int cpp_return_value = cv::getTrackbarPos(trackbarname, winname);
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_getWindowProperty_String_winname_int_prop_id
// parsed: cv::getWindowProperty
// as:     cv::getWindowProperty (function)
// Arg ARG string winname=  string = 
// Arg ARG Primitive(int) prop_id=  Primitive(int) = 
// Return value: Primitive(double)
struct cv_return_value_double cv_highgui_cv_getWindowProperty_String_winname_int_prop_id(
        const char *winname,
        int prop_id) {
  try {
  double cpp_return_value = cv::getWindowProperty(winname, *reinterpret_cast<int*>(&prop_id));
  return { NULL, *reinterpret_cast<double*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_double ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_double ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_imencode_String_ext_InputArray_img_VectorOfuchar_buf_VectorOfint_params
// parsed: cv::imencode
// as:     cv::imencode (function)
// Arg ARG string ext=  string = 
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Vector[Primitive(uchar)] buf=  Vector[Primitive(uchar)] = 
// Arg ARG Vector[Primitive(int)] params=  Vector[Primitive(int)] =vector<int>() 
// Return value: Primitive(bool)
struct cv_return_value_char cv_highgui_cv_imencode_String_ext_InputArray_img_VectorOfuchar_buf_VectorOfint_params(
        const char *ext,
        void* img,
        void* buf,
        void* params) {
  try {
  bool cpp_return_value = cv::imencode(ext, *((cv::Mat*)img), *((vector<uchar >*)buf), *((vector<int >*)params));
  return { NULL, *reinterpret_cast<char*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_imread_String_filename_int_flags
// parsed: cv::imread
// as:     cv::imread (function)
// Arg ARG string filename=  string = 
// Arg ARG Primitive(int) flags=  Primitive(int) =1 
// Return value: cv::Mat (boxed)
struct cv_return_value_void_X cv_highgui_cv_imread_String_filename_int_flags(
        const char *filename,
        int flags) {
  try {
  cv::Mat cpp_return_value = cv::imread(filename, *reinterpret_cast<int*>(&flags));
  return { NULL, new cv::Mat(cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_imshow_String_winname_InputArray_mat
// parsed: cv::imshow
// as:     cv::imshow (function)
// Arg ARG string winname=  string = 
// Arg ARG cv::Mat (boxed) mat=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_imshow_String_winname_InputArray_mat(
        const char *winname,
        void* mat) {
  try {
  cv::imshow(winname, *((cv::Mat*)mat));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_imwrite_String_filename_InputArray_img_VectorOfint_params
// parsed: cv::imwrite
// as:     cv::imwrite (function)
// Arg ARG string filename=  string = 
// Arg ARG cv::Mat (boxed) img=  cv::Mat (boxed) = 
// Arg ARG Vector[Primitive(int)] params=  Vector[Primitive(int)] =vector<int>() 
// Return value: Primitive(bool)
struct cv_return_value_char cv_highgui_cv_imwrite_String_filename_InputArray_img_VectorOfint_params(
        const char *filename,
        void* img,
        void* params) {
  try {
  bool cpp_return_value = cv::imwrite(filename, *((cv::Mat*)img), *((vector<int >*)params));
  return { NULL, *reinterpret_cast<char*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_loadWindowParameters_String_windowName
// parsed: cv::loadWindowParameters
// as:     cv::loadWindowParameters (function)
// Arg ARG string windowName=  string = 
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_loadWindowParameters_String_windowName(
        const char *windowName) {
  try {
  cv::loadWindowParameters(windowName);
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_moveWindow_String_winname_int_x_int_y
// parsed: cv::moveWindow
// as:     cv::moveWindow (function)
// Arg ARG string winname=  string = 
// Arg ARG Primitive(int) x=  Primitive(int) = 
// Arg ARG Primitive(int) y=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_moveWindow_String_winname_int_x_int_y(
        const char *winname,
        int x,
        int y) {
  try {
  cv::moveWindow(winname, *reinterpret_cast<int*>(&x), *reinterpret_cast<int*>(&y));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_namedWindow_String_winname_int_flags
// parsed: cv::namedWindow
// as:     cv::namedWindow (function)
// Arg ARG string winname=  string = 
// Arg ARG Primitive(int) flags=  Primitive(int) =WINDOW_AUTOSIZE 
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_namedWindow_String_winname_int_flags(
        const char *winname,
        int flags) {
  try {
  cv::namedWindow(winname, *reinterpret_cast<int*>(&flags));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_resizeWindow_String_winname_int_width_int_height
// parsed: cv::resizeWindow
// as:     cv::resizeWindow (function)
// Arg ARG string winname=  string = 
// Arg ARG Primitive(int) width=  Primitive(int) = 
// Arg ARG Primitive(int) height=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_resizeWindow_String_winname_int_width_int_height(
        const char *winname,
        int width,
        int height) {
  try {
  cv::resizeWindow(winname, *reinterpret_cast<int*>(&width), *reinterpret_cast<int*>(&height));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_saveWindowParameters_String_windowName
// parsed: cv::saveWindowParameters
// as:     cv::saveWindowParameters (function)
// Arg ARG string windowName=  string = 
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_saveWindowParameters_String_windowName(
        const char *windowName) {
  try {
  cv::saveWindowParameters(windowName);
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_setOpenGlContext_String_winname
// parsed: cv::setOpenGlContext
// as:     cv::setOpenGlContext (function)
// Arg ARG string winname=  string = 
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_setOpenGlContext_String_winname(
        const char *winname) {
  try {
  cv::setOpenGlContext(winname);
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_setTrackbarPos_String_trackbarname_String_winname_int_pos
// parsed: cv::setTrackbarPos
// as:     cv::setTrackbarPos (function)
// Arg ARG string trackbarname=  string = 
// Arg ARG string winname=  string = 
// Arg ARG Primitive(int) pos=  Primitive(int) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_setTrackbarPos_String_trackbarname_String_winname_int_pos(
        const char *trackbarname,
        const char *winname,
        int pos) {
  try {
  cv::setTrackbarPos(trackbarname, winname, *reinterpret_cast<int*>(&pos));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_setWindowProperty_String_winname_int_prop_id_double_prop_value
// parsed: cv::setWindowProperty
// as:     cv::setWindowProperty (function)
// Arg ARG string winname=  string = 
// Arg ARG Primitive(int) prop_id=  Primitive(int) = 
// Arg ARG Primitive(double) prop_value=  Primitive(double) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_setWindowProperty_String_winname_int_prop_id_double_prop_value(
        const char *winname,
        int prop_id,
        double prop_value) {
  try {
  cv::setWindowProperty(winname, *reinterpret_cast<int*>(&prop_id), *reinterpret_cast<double*>(&prop_value));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_startWindowThread
// parsed: cv::startWindowThread
// as:     cv::startWindowThread (function)
// Return value: Primitive(int)
struct cv_return_value_int cv_highgui_cv_startWindowThread(
        ) {
  try {
  int cpp_return_value = cv::startWindowThread();
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_stopLoop
// parsed: cv::stopLoop
// as:     cv::stopLoop (function)
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_stopLoop(
        ) {
  try {
  cv::stopLoop();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_updateWindow_String_winname
// parsed: cv::updateWindow
// as:     cv::updateWindow (function)
// Arg ARG string winname=  string = 
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_updateWindow_String_winname(
        const char *winname) {
  try {
  cv::updateWindow(winname);
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_waitKey_int_delay
// parsed: cv::waitKey
// as:     cv::waitKey (function)
// Arg ARG Primitive(int) delay=  Primitive(int) =0 
// Return value: Primitive(int)
struct cv_return_value_int cv_highgui_cv_waitKey_int_delay(
        int delay) {
  try {
  int cpp_return_value = cv::waitKey(*reinterpret_cast<int*>(&delay));
  return { NULL, *reinterpret_cast<int*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_int ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}


// boxed class: cv::VideoCapture
void cv_delete_VideoCapture(void* instance) {
    delete (cv::VideoCapture*) instance;
}
// cv_VideoCapture_VideoCapture
// parsed: cv::VideoCapture::VideoCapture
// as:     cv::VideoCapture::VideoCapture (constructor) cv::VideoCapture . new
// Return value: cv::VideoCapture (boxed)
struct cv_return_value_void_X cv_highgui_cv_VideoCapture_VideoCapture(
        ) {
  try {
  cv::VideoCapture* cpp_return_value = new cv::VideoCapture();
  return { NULL, cpp_return_value };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_VideoCapture_VideoCapture_String_filename
// parsed: cv::VideoCapture::VideoCapture
// as:     cv::VideoCapture::VideoCapture (constructor) cv::VideoCapture . new
// Arg ARG string filename=  string = 
// Return value: cv::VideoCapture (boxed)
struct cv_return_value_void_X cv_highgui_cv_VideoCapture_VideoCapture_String_filename(
        const char *filename) {
  try {
  cv::VideoCapture* cpp_return_value = new cv::VideoCapture(filename);
  return { NULL, cpp_return_value };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_VideoCapture_VideoCapture_int_device
// parsed: cv::VideoCapture::VideoCapture
// as:     cv::VideoCapture::VideoCapture (constructor) cv::VideoCapture . new
// Arg ARG Primitive(int) device=  Primitive(int) = 
// Return value: cv::VideoCapture (boxed)
struct cv_return_value_void_X cv_highgui_cv_VideoCapture_VideoCapture_int_device(
        int device) {
  try {
  cv::VideoCapture* cpp_return_value = new cv::VideoCapture(*reinterpret_cast<int*>(&device));
  return { NULL, cpp_return_value };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_VideoCapture_open_String_filename
// parsed: cv::VideoCapture::open
// as:     cv::VideoCapture::open (method) cv::VideoCapture . open
// Arg ARG string filename=  string = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_highgui_cv_VideoCapture_open_String_filename(
        void* instance,
        const char *filename) {
  try {
  bool cpp_return_value = ((cv::VideoCapture*) instance)->open(filename);
  return { NULL, *reinterpret_cast<char*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_VideoCapture_open_int_device
// parsed: cv::VideoCapture::open
// as:     cv::VideoCapture::open (method) cv::VideoCapture . open
// Arg ARG Primitive(int) device=  Primitive(int) = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_highgui_cv_VideoCapture_open_int_device(
        void* instance,
        int device) {
  try {
  bool cpp_return_value = ((cv::VideoCapture*) instance)->open(*reinterpret_cast<int*>(&device));
  return { NULL, *reinterpret_cast<char*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_VideoCapture_isOpened
// parsed: cv::VideoCapture::isOpened
// as:     cv::VideoCapture::isOpened (method) cv::VideoCapture . isOpened
// Return value: Primitive(bool)
struct cv_return_value_char cv_highgui_cv_VideoCapture_isOpened(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::VideoCapture*) instance)->isOpened();
  return { NULL, *reinterpret_cast<char*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_VideoCapture_release
// parsed: cv::VideoCapture::release
// as:     cv::VideoCapture::release (method) cv::VideoCapture . release
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_VideoCapture_release(
        void* instance) {
  try {
  ((cv::VideoCapture*) instance)->release();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_VideoCapture_grab
// parsed: cv::VideoCapture::grab
// as:     cv::VideoCapture::grab (method) cv::VideoCapture . grab
// Return value: Primitive(bool)
struct cv_return_value_char cv_highgui_cv_VideoCapture_grab(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::VideoCapture*) instance)->grab();
  return { NULL, *reinterpret_cast<char*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_VideoCapture_retrieve_Mat_image_int_channel
// parsed: cv::VideoCapture::retrieve
// as:     cv::VideoCapture::retrieve (method) cv::VideoCapture . retrieve
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Arg ARG Primitive(int) channel=  Primitive(int) =0 
// Return value: Primitive(bool)
struct cv_return_value_char cv_highgui_cv_VideoCapture_retrieve_Mat_image_int_channel(
        void* instance,
        void* image,
        int channel) {
  try {
  bool cpp_return_value = ((cv::VideoCapture*) instance)->retrieve(*((cv::Mat*)image), *reinterpret_cast<int*>(&channel));
  return { NULL, *reinterpret_cast<char*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_VideoCapture_read_Mat_image
// parsed: cv::VideoCapture::read
// as:     cv::VideoCapture::read (method) cv::VideoCapture . read
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_highgui_cv_VideoCapture_read_Mat_image(
        void* instance,
        void* image) {
  try {
  bool cpp_return_value = ((cv::VideoCapture*) instance)->read(*((cv::Mat*)image));
  return { NULL, *reinterpret_cast<char*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_VideoCapture_set_int_propId_double_value
// parsed: cv::VideoCapture::set
// as:     cv::VideoCapture::set (method) cv::VideoCapture . set
// Arg ARG Primitive(int) propId=  Primitive(int) = 
// Arg ARG Primitive(double) value=  Primitive(double) = 
// Return value: Primitive(bool)
struct cv_return_value_char cv_highgui_cv_VideoCapture_set_int_propId_double_value(
        void* instance,
        int propId,
        double value) {
  try {
  bool cpp_return_value = ((cv::VideoCapture*) instance)->set(*reinterpret_cast<int*>(&propId), *reinterpret_cast<double*>(&value));
  return { NULL, *reinterpret_cast<char*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_VideoCapture_get_int_propId
// parsed: cv::VideoCapture::get
// as:     cv::VideoCapture::get (method) cv::VideoCapture . get
// Arg ARG Primitive(int) propId=  Primitive(int) = 
// Return value: Primitive(double)
struct cv_return_value_double cv_highgui_cv_VideoCapture_get_int_propId(
        void* instance,
        int propId) {
  try {
  double cpp_return_value = ((cv::VideoCapture*) instance)->get(*reinterpret_cast<int*>(&propId));
  return { NULL, *reinterpret_cast<double*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_double ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_double ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}


// boxed class: cv::VideoWriter
void cv_delete_VideoWriter(void* instance) {
    delete (cv::VideoWriter*) instance;
}
// cv_VideoWriter_VideoWriter
// parsed: cv::VideoWriter::VideoWriter
// as:     cv::VideoWriter::VideoWriter (constructor) cv::VideoWriter . new
// Return value: cv::VideoWriter (boxed)
struct cv_return_value_void_X cv_highgui_cv_VideoWriter_VideoWriter(
        ) {
  try {
  cv::VideoWriter* cpp_return_value = new cv::VideoWriter();
  return { NULL, cpp_return_value };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_VideoWriter_VideoWriter_String_filename_int_fourcc_double_fps_Size_frameSize_bool_isColor
// parsed: cv::VideoWriter::VideoWriter
// as:     cv::VideoWriter::VideoWriter (constructor) cv::VideoWriter . new
// Arg ARG string filename=  string = 
// Arg ARG Primitive(int) fourcc=  Primitive(int) = 
// Arg ARG Primitive(double) fps=  Primitive(double) = 
// Arg ARG Size (struct) frameSize=  Size (struct) = 
// Arg ARG Primitive(bool) isColor=  Primitive(bool) =true 
// Return value: cv::VideoWriter (boxed)
struct cv_return_value_void_X cv_highgui_cv_VideoWriter_VideoWriter_String_filename_int_fourcc_double_fps_Size_frameSize_bool_isColor(
        const char *filename,
        int fourcc,
        double fps,
        c_Size frameSize,
        char isColor) {
  try {
  cv::VideoWriter* cpp_return_value = new cv::VideoWriter(filename, *reinterpret_cast<int*>(&fourcc), *reinterpret_cast<double*>(&fps), *reinterpret_cast<Size*>(&frameSize), *reinterpret_cast<bool*>(&isColor));
  return { NULL, cpp_return_value };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_void_X ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_VideoWriter_open_String_filename_int_fourcc_double_fps_Size_frameSize_bool_isColor
// parsed: cv::VideoWriter::open
// as:     cv::VideoWriter::open (method) cv::VideoWriter . open
// Arg ARG string filename=  string = 
// Arg ARG Primitive(int) fourcc=  Primitive(int) = 
// Arg ARG Primitive(double) fps=  Primitive(double) = 
// Arg ARG Size (struct) frameSize=  Size (struct) = 
// Arg ARG Primitive(bool) isColor=  Primitive(bool) =true 
// Return value: Primitive(bool)
struct cv_return_value_char cv_highgui_cv_VideoWriter_open_String_filename_int_fourcc_double_fps_Size_frameSize_bool_isColor(
        void* instance,
        const char *filename,
        int fourcc,
        double fps,
        c_Size frameSize,
        char isColor) {
  try {
  bool cpp_return_value = ((cv::VideoWriter*) instance)->open(filename, *reinterpret_cast<int*>(&fourcc), *reinterpret_cast<double*>(&fps), *reinterpret_cast<Size*>(&frameSize), *reinterpret_cast<bool*>(&isColor));
  return { NULL, *reinterpret_cast<char*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_VideoWriter_isOpened
// parsed: cv::VideoWriter::isOpened
// as:     cv::VideoWriter::isOpened (method) cv::VideoWriter . isOpened
// Return value: Primitive(bool)
struct cv_return_value_char cv_highgui_cv_VideoWriter_isOpened(
        void* instance) {
  try {
  bool cpp_return_value = ((cv::VideoWriter*) instance)->isOpened();
  return { NULL, *reinterpret_cast<char*>(&cpp_return_value) };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    struct cv_return_value_char ret;
    memset(&ret, 0x00, sizeof(ret));
    ret.error_msg = msg;
    return ret;
}
}

// cv_VideoWriter_release
// parsed: cv::VideoWriter::release
// as:     cv::VideoWriter::release (method) cv::VideoWriter . release
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_VideoWriter_release(
        void* instance) {
  try {
  ((cv::VideoWriter*) instance)->release();
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}

// cv_VideoWriter_write_Mat_image
// parsed: cv::VideoWriter::write
// as:     cv::VideoWriter::write (method) cv::VideoWriter . write
// Arg ARG cv::Mat (boxed) image=  cv::Mat (boxed) = 
// Return value: Primitive(void)
struct cv_return_value_void cv_highgui_cv_VideoWriter_write_Mat_image(
        void* instance,
        void* image) {
  try {
  ((cv::VideoWriter*) instance)->write(*((cv::Mat*)image));
  return { NULL };
} catch (cv::Exception& e) {
    char* msg = strdup(e.what());
    return { msg };
} catch (...) {
    char* msg = strdup("unspecified error in OpenCV guts");
    return { msg };
}
}



} // extern "C"

