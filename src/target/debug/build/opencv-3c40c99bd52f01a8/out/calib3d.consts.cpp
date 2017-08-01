#include <cstdio>
#include "opencv2/opencv_modules.hpp"
#include "opencv2/calib3d/calib3d.hpp"
using namespace cv;
int main(int argc, char**argv) {
    printf("pub const CALIB_FIX_ASPECT_RATIO:i32 = 0x%x;\n", cv::CALIB_FIX_ASPECT_RATIO);
    printf("pub const CALIB_FIX_FOCAL_LENGTH:i32 = 0x%x;\n", cv::CALIB_FIX_FOCAL_LENGTH);
    printf("pub const CALIB_FIX_INTRINSIC:i32 = 0x%x;\n", cv::CALIB_FIX_INTRINSIC);
    printf("pub const CALIB_FIX_K1:i32 = 0x%x;\n", cv::CALIB_FIX_K1);
    printf("pub const CALIB_FIX_K2:i32 = 0x%x;\n", cv::CALIB_FIX_K2);
    printf("pub const CALIB_FIX_K3:i32 = 0x%x;\n", cv::CALIB_FIX_K3);
    printf("pub const CALIB_FIX_K4:i32 = 0x%x;\n", cv::CALIB_FIX_K4);
    printf("pub const CALIB_FIX_K5:i32 = 0x%x;\n", cv::CALIB_FIX_K5);
    printf("pub const CALIB_FIX_K6:i32 = 0x%x;\n", cv::CALIB_FIX_K6);
    printf("pub const CALIB_FIX_PRINCIPAL_POINT:i32 = 0x%x;\n", cv::CALIB_FIX_PRINCIPAL_POINT);
    printf("pub const CALIB_RATIONAL_MODEL:i32 = 0x%x;\n", cv::CALIB_RATIONAL_MODEL);
    printf("pub const CALIB_SAME_FOCAL_LENGTH:i32 = 0x%x;\n", cv::CALIB_SAME_FOCAL_LENGTH);
    printf("pub const CALIB_USE_INTRINSIC_GUESS:i32 = 0x%x;\n", cv::CALIB_USE_INTRINSIC_GUESS);
    printf("pub const CALIB_ZERO_DISPARITY:i32 = 0x%x;\n", cv::CALIB_ZERO_DISPARITY);
    printf("pub const CALIB_ZERO_TANGENT_DIST:i32 = 0x%x;\n", cv::CALIB_ZERO_TANGENT_DIST);
    printf("pub const CV_FM_LMEDS:i32 = 0x%x;\n", CV_FM_LMEDS);
    printf("pub const CV_FM_LMEDS_ONLY:i32 = 0x%x;\n", CV_FM_LMEDS_ONLY);
    printf("pub const CV_FM_RANSAC:i32 = 0x%x;\n", CV_FM_RANSAC);
    printf("pub const CV_FM_RANSAC_ONLY:i32 = 0x%x;\n", CV_FM_RANSAC_ONLY);
    printf("pub const EPNP:i32 = 0x%x;\n", cv::EPNP);
    printf("pub const FM_7POINT:i32 = 0x%x;\n", cv::FM_7POINT);
    printf("pub const FM_8POINT:i32 = 0x%x;\n", cv::FM_8POINT);
    printf("pub const FM_LMEDS:i32 = 0x%x;\n", cv::FM_LMEDS);
    printf("pub const FM_RANSAC:i32 = 0x%x;\n", cv::FM_RANSAC);
    printf("pub const ITERATIVE:i32 = 0x%x;\n", cv::ITERATIVE);
    printf("pub const LMEDS:i32 = 0x%x;\n", cv::LMEDS);
    printf("pub const P3P:i32 = 0x%x;\n", cv::P3P);
    printf("pub const RANSAC:i32 = 0x%x;\n", cv::RANSAC);
    printf("pub const StereoSGBM_DISP_SCALE:i32 = 0x%x;\n", cv::StereoSGBM::DISP_SCALE);
}
