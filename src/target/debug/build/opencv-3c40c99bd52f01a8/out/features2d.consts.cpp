#include <cstdio>
#include "opencv2/opencv_modules.hpp"
#include "opencv2/features2d/features2d.hpp"
using namespace cv;
int main(int argc, char**argv) {
    printf("pub const Hamming_normType:i32 = 0x%x;\n", cv::Hamming::normType);
}
