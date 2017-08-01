#include <cstdio>
#include "opencv2/opencv_modules.hpp"
#include "opencv2/video/video.hpp"
using namespace cv;
int main(int argc, char**argv) {
    printf("pub const OPTFLOW_LK_GET_MIN_EIGENVALS:i32 = 0x%x;\n", cv::OPTFLOW_LK_GET_MIN_EIGENVALS);
    printf("pub const OPTFLOW_USE_INITIAL_FLOW:i32 = 0x%x;\n", cv::OPTFLOW_USE_INITIAL_FLOW);
}
