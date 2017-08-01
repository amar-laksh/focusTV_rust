#include <cstdio>
#include "opencv2/opencv_modules.hpp"
#include "opencv2/highgui/highgui.hpp"
using namespace cv;
int main(int argc, char**argv) {
    printf("pub const CV_CAP_ANDROID_ANTIBANDING_60HZ:i32 = 0x%x;\n", CV_CAP_ANDROID_ANTIBANDING_60HZ);
    printf("pub const CV_CAP_ANDROID_ANTIBANDING_AUTO:i32 = 0x%x;\n", CV_CAP_ANDROID_ANTIBANDING_AUTO);
    printf("pub const CV_CAP_ANDROID_ANTIBANDING_OFF:i32 = 0x%x;\n", CV_CAP_ANDROID_ANTIBANDING_OFF);
    printf("pub const CV_CAP_ANDROID_BACK:i32 = 0x%x;\n", CV_CAP_ANDROID_BACK);
    printf("pub const CV_CAP_ANDROID_COLOR_FRAME:i32 = 0x%x;\n", CV_CAP_ANDROID_COLOR_FRAME);
    printf("pub const CV_CAP_ANDROID_FLASH_MODE_OFF:i32 = 0x%x;\n", CV_CAP_ANDROID_FLASH_MODE_OFF);
    printf("pub const CV_CAP_ANDROID_FLASH_MODE_ON:i32 = 0x%x;\n", CV_CAP_ANDROID_FLASH_MODE_ON);
    printf("pub const CV_CAP_ANDROID_FLASH_MODE_RED_EYE:i32 = 0x%x;\n", CV_CAP_ANDROID_FLASH_MODE_RED_EYE);
    printf("pub const CV_CAP_ANDROID_FLASH_MODE_TORCH:i32 = 0x%x;\n", CV_CAP_ANDROID_FLASH_MODE_TORCH);
    printf("pub const CV_CAP_ANDROID_FOCUS_MODE_CONTINUOUS_PICTURE:i32 = 0x%x;\n", CV_CAP_ANDROID_FOCUS_MODE_CONTINUOUS_PICTURE);
    printf("pub const CV_CAP_ANDROID_FOCUS_MODE_CONTINUOUS_VIDEO:i32 = 0x%x;\n", CV_CAP_ANDROID_FOCUS_MODE_CONTINUOUS_VIDEO);
    printf("pub const CV_CAP_ANDROID_FOCUS_MODE_EDOF:i32 = 0x%x;\n", CV_CAP_ANDROID_FOCUS_MODE_EDOF);
    printf("pub const CV_CAP_ANDROID_FOCUS_MODE_FIXED:i32 = 0x%x;\n", CV_CAP_ANDROID_FOCUS_MODE_FIXED);
    printf("pub const CV_CAP_ANDROID_FOCUS_MODE_INFINITY:i32 = 0x%x;\n", CV_CAP_ANDROID_FOCUS_MODE_INFINITY);
    printf("pub const CV_CAP_ANDROID_FOCUS_MODE_MACRO:i32 = 0x%x;\n", CV_CAP_ANDROID_FOCUS_MODE_MACRO);
    printf("pub const CV_CAP_ANDROID_FRONT:i32 = 0x%x;\n", CV_CAP_ANDROID_FRONT);
    printf("pub const CV_CAP_ANDROID_WHITE_BALANCE_CLOUDY_DAYLIGHT:i32 = 0x%x;\n", CV_CAP_ANDROID_WHITE_BALANCE_CLOUDY_DAYLIGHT);
    printf("pub const CV_CAP_ANDROID_WHITE_BALANCE_DAYLIGHT:i32 = 0x%x;\n", CV_CAP_ANDROID_WHITE_BALANCE_DAYLIGHT);
    printf("pub const CV_CAP_ANDROID_WHITE_BALANCE_FLUORESCENT:i32 = 0x%x;\n", CV_CAP_ANDROID_WHITE_BALANCE_FLUORESCENT);
    printf("pub const CV_CAP_ANDROID_WHITE_BALANCE_INCANDESCENT:i32 = 0x%x;\n", CV_CAP_ANDROID_WHITE_BALANCE_INCANDESCENT);
    printf("pub const CV_CAP_ANDROID_WHITE_BALANCE_SHADE:i32 = 0x%x;\n", CV_CAP_ANDROID_WHITE_BALANCE_SHADE);
    printf("pub const CV_CAP_ANDROID_WHITE_BALANCE_TWILIGHT:i32 = 0x%x;\n", CV_CAP_ANDROID_WHITE_BALANCE_TWILIGHT);
    printf("pub const CV_CAP_ANDROID_WHITE_BALANCE_WARM_FLUORESCENT:i32 = 0x%x;\n", CV_CAP_ANDROID_WHITE_BALANCE_WARM_FLUORESCENT);
    printf("pub const CV_CAP_INTELPERC_DEPTH_GENERATOR:i32 = 0x%x;\n", CV_CAP_INTELPERC_DEPTH_GENERATOR);
    printf("pub const CV_CAP_INTELPERC_GENERATORS_MASK:i32 = 0x%x;\n", CV_CAP_INTELPERC_GENERATORS_MASK);
    printf("pub const CV_CAP_INTELPERC_IMAGE_GENERATOR:i32 = 0x%x;\n", CV_CAP_INTELPERC_IMAGE_GENERATOR);
    printf("pub const CV_CAP_OPENNI_DEPTH_GENERATOR:i32 = 0x%x;\n", CV_CAP_OPENNI_DEPTH_GENERATOR);
    printf("pub const CV_CAP_OPENNI_DEPTH_GENERATOR_BASELINE:i32 = 0x%x;\n", CV_CAP_OPENNI_DEPTH_GENERATOR_BASELINE);
    printf("pub const CV_CAP_OPENNI_DEPTH_GENERATOR_FOCAL_LENGTH:i32 = 0x%x;\n", CV_CAP_OPENNI_DEPTH_GENERATOR_FOCAL_LENGTH);
    printf("pub const CV_CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION:i32 = 0x%x;\n", CV_CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION);
    printf("pub const CV_CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION_ON:i32 = 0x%x;\n", CV_CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION_ON);
    printf("pub const CV_CAP_OPENNI_GENERATORS_MASK:i32 = 0x%x;\n", CV_CAP_OPENNI_GENERATORS_MASK);
    printf("pub const CV_CAP_OPENNI_IMAGE_GENERATOR:i32 = 0x%x;\n", CV_CAP_OPENNI_IMAGE_GENERATOR);
    printf("pub const CV_CAP_OPENNI_IMAGE_GENERATOR_OUTPUT_MODE:i32 = 0x%x;\n", CV_CAP_OPENNI_IMAGE_GENERATOR_OUTPUT_MODE);
    printf("pub const CV_CAP_OPENNI_IMAGE_GENERATOR_PRESENT:i32 = 0x%x;\n", CV_CAP_OPENNI_IMAGE_GENERATOR_PRESENT);
    printf("pub const CV_CAP_PROP_OPENNI_REGISTRATION_ON:i32 = 0x%x;\n", CV_CAP_PROP_OPENNI_REGISTRATION_ON);
    printf("pub const CV_FOURCC_PROMPT:i32 = 0x%x;\n", CV_FOURCC_PROMPT);
    printf("pub const HG_AUTOSIZE:i32 = 0x%x;\n", HG_AUTOSIZE);
    printf("pub const WINDOW_AUTOSIZE:i32 = 0x%x;\n", cv::WINDOW_AUTOSIZE);
    printf("pub const WINDOW_NORMAL:i32 = 0x%x;\n", cv::WINDOW_NORMAL);
    printf("pub const WINDOW_OPENGL:i32 = 0x%x;\n", cv::WINDOW_OPENGL);
    printf("pub const WND_PROP_ASPECT_RATIO:i32 = 0x%x;\n", cv::WND_PROP_ASPECT_RATIO);
    printf("pub const WND_PROP_AUTOSIZE:i32 = 0x%x;\n", cv::WND_PROP_AUTOSIZE);
    printf("pub const WND_PROP_FULLSCREEN:i32 = 0x%x;\n", cv::WND_PROP_FULLSCREEN);
    printf("pub const WND_PROP_OPENGL:i32 = 0x%x;\n", cv::WND_PROP_OPENGL);
}