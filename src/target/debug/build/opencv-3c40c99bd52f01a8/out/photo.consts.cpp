#include <cstdio>
#include "opencv2/opencv_modules.hpp"
#include "opencv2/photo/photo.hpp"
using namespace cv;
int main(int argc, char**argv) {
    printf("pub const INPAINT_NS:i32 = 0x%x;\n", cv::INPAINT_NS);
    printf("pub const INPAINT_TELEA:i32 = 0x%x;\n", cv::INPAINT_TELEA);
}
