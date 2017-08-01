
use libc::{ c_void, c_char, size_t };
use std::ffi::{ CStr, CString };
pub const ADAPTIVE_THRESH_GAUSSIAN_C:i32 = 1;
pub const ADAPTIVE_THRESH_MEAN_C:i32 = 0;
pub const BORDER_ISOLATED:i32 = 16;
pub const COLOR_BGR2BGR555:i32 = 22;
pub const COLOR_BGR2BGR565:i32 = 12;
pub const COLOR_BGR2BGRA:i32 = 0;
pub const COLOR_BGR2GRAY:i32 = 6;
pub const COLOR_BGR2HLS:i32 = 52;
pub const COLOR_BGR2HLS_FULL:i32 = 68;
pub const COLOR_BGR2HSV:i32 = 40;
pub const COLOR_BGR2HSV_FULL:i32 = 66;
pub const COLOR_BGR2Lab:i32 = 44;
pub const COLOR_BGR2Luv:i32 = 50;
pub const COLOR_BGR2RGB:i32 = 4;
pub const COLOR_BGR2RGBA:i32 = 2;
pub const COLOR_BGR2XYZ:i32 = 32;
pub const COLOR_BGR2YCrCb:i32 = 36;
pub const COLOR_BGR2YUV:i32 = 82;
pub const COLOR_BGR2YUV_I420:i32 = 128;
pub const COLOR_BGR2YUV_YV12:i32 = 132;
pub const COLOR_BGR5552BGR:i32 = 24;
pub const COLOR_BGR5552BGRA:i32 = 28;
pub const COLOR_BGR5552GRAY:i32 = 31;
pub const COLOR_BGR5552RGB:i32 = 25;
pub const COLOR_BGR5552RGBA:i32 = 29;
pub const COLOR_BGR5652BGR:i32 = 14;
pub const COLOR_BGR5652BGRA:i32 = 18;
pub const COLOR_BGR5652GRAY:i32 = 21;
pub const COLOR_BGR5652RGB:i32 = 15;
pub const COLOR_BGR5652RGBA:i32 = 19;
pub const COLOR_BGRA2BGR:i32 = 1;
pub const COLOR_BGRA2BGR555:i32 = 26;
pub const COLOR_BGRA2BGR565:i32 = 16;
pub const COLOR_BGRA2GRAY:i32 = 10;
pub const COLOR_BGRA2RGBA:i32 = 5;
pub const COLOR_BGRA2YUV_I420:i32 = 130;
pub const COLOR_BGRA2YUV_YV12:i32 = 134;
pub const COLOR_BayerBG2BGR:i32 = 46;
pub const COLOR_BayerBG2BGR_VNG:i32 = 62;
pub const COLOR_BayerBG2GRAY:i32 = 86;
pub const COLOR_BayerGB2BGR:i32 = 47;
pub const COLOR_BayerGB2BGR_VNG:i32 = 63;
pub const COLOR_BayerGB2GRAY:i32 = 87;
pub const COLOR_BayerGR2BGR:i32 = 49;
pub const COLOR_BayerGR2BGR_VNG:i32 = 65;
pub const COLOR_BayerGR2GRAY:i32 = 89;
pub const COLOR_BayerRG2BGR:i32 = 48;
pub const COLOR_BayerRG2BGR_VNG:i32 = 64;
pub const COLOR_BayerRG2GRAY:i32 = 88;
pub const COLOR_COLORCVT_MAX:i32 = 135;
pub const COLOR_GRAY2BGR:i32 = 8;
pub const COLOR_GRAY2BGR555:i32 = 30;
pub const COLOR_GRAY2BGR565:i32 = 20;
pub const COLOR_GRAY2BGRA:i32 = 9;
pub const COLOR_HLS2BGR:i32 = 60;
pub const COLOR_HLS2BGR_FULL:i32 = 72;
pub const COLOR_HLS2RGB:i32 = 61;
pub const COLOR_HLS2RGB_FULL:i32 = 73;
pub const COLOR_HSV2BGR:i32 = 54;
pub const COLOR_HSV2BGR_FULL:i32 = 70;
pub const COLOR_HSV2RGB:i32 = 55;
pub const COLOR_HSV2RGB_FULL:i32 = 71;
pub const COLOR_LBGR2Lab:i32 = 74;
pub const COLOR_LBGR2Luv:i32 = 76;
pub const COLOR_LRGB2Lab:i32 = 75;
pub const COLOR_LRGB2Luv:i32 = 77;
pub const COLOR_Lab2BGR:i32 = 56;
pub const COLOR_Lab2LBGR:i32 = 78;
pub const COLOR_Lab2LRGB:i32 = 79;
pub const COLOR_Lab2RGB:i32 = 57;
pub const COLOR_Luv2BGR:i32 = 58;
pub const COLOR_Luv2LBGR:i32 = 80;
pub const COLOR_Luv2LRGB:i32 = 81;
pub const COLOR_Luv2RGB:i32 = 59;
pub const COLOR_RGB2BGR555:i32 = 23;
pub const COLOR_RGB2BGR565:i32 = 13;
pub const COLOR_RGB2GRAY:i32 = 7;
pub const COLOR_RGB2HLS:i32 = 53;
pub const COLOR_RGB2HLS_FULL:i32 = 69;
pub const COLOR_RGB2HSV:i32 = 41;
pub const COLOR_RGB2HSV_FULL:i32 = 67;
pub const COLOR_RGB2Lab:i32 = 45;
pub const COLOR_RGB2Luv:i32 = 51;
pub const COLOR_RGB2XYZ:i32 = 33;
pub const COLOR_RGB2YCrCb:i32 = 37;
pub const COLOR_RGB2YUV:i32 = 83;
pub const COLOR_RGB2YUV_I420:i32 = 127;
pub const COLOR_RGB2YUV_YV12:i32 = 131;
pub const COLOR_RGBA2BGR:i32 = 3;
pub const COLOR_RGBA2BGR555:i32 = 27;
pub const COLOR_RGBA2BGR565:i32 = 17;
pub const COLOR_RGBA2GRAY:i32 = 11;
pub const COLOR_RGBA2YUV_I420:i32 = 129;
pub const COLOR_RGBA2YUV_YV12:i32 = 133;
pub const COLOR_RGBA2mRGBA:i32 = 125;
pub const COLOR_XYZ2BGR:i32 = 34;
pub const COLOR_XYZ2RGB:i32 = 35;
pub const COLOR_YCrCb2BGR:i32 = 38;
pub const COLOR_YCrCb2RGB:i32 = 39;
pub const COLOR_YUV2BGR:i32 = 84;
pub const COLOR_YUV2BGRA_IYUV:i32 = 105;
pub const COLOR_YUV2BGRA_NV12:i32 = 95;
pub const COLOR_YUV2BGRA_NV21:i32 = 97;
pub const COLOR_YUV2BGRA_UYVY:i32 = 112;
pub const COLOR_YUV2BGRA_YUY2:i32 = 120;
pub const COLOR_YUV2BGRA_YV12:i32 = 103;
pub const COLOR_YUV2BGRA_YVYU:i32 = 122;
pub const COLOR_YUV2BGR_IYUV:i32 = 101;
pub const COLOR_YUV2BGR_NV12:i32 = 91;
pub const COLOR_YUV2BGR_NV21:i32 = 93;
pub const COLOR_YUV2BGR_UYVY:i32 = 108;
pub const COLOR_YUV2BGR_YUY2:i32 = 116;
pub const COLOR_YUV2BGR_YV12:i32 = 99;
pub const COLOR_YUV2BGR_YVYU:i32 = 118;
pub const COLOR_YUV2GRAY_420:i32 = 106;
pub const COLOR_YUV2GRAY_UYVY:i32 = 123;
pub const COLOR_YUV2GRAY_YUY2:i32 = 124;
pub const COLOR_YUV2RGB:i32 = 85;
pub const COLOR_YUV2RGBA_IYUV:i32 = 104;
pub const COLOR_YUV2RGBA_NV12:i32 = 94;
pub const COLOR_YUV2RGBA_NV21:i32 = 96;
pub const COLOR_YUV2RGBA_UYVY:i32 = 111;
pub const COLOR_YUV2RGBA_YUY2:i32 = 119;
pub const COLOR_YUV2RGBA_YV12:i32 = 102;
pub const COLOR_YUV2RGBA_YVYU:i32 = 121;
pub const COLOR_YUV2RGB_IYUV:i32 = 100;
pub const COLOR_YUV2RGB_NV12:i32 = 90;
pub const COLOR_YUV2RGB_NV21:i32 = 92;
pub const COLOR_YUV2RGB_UYVY:i32 = 107;
pub const COLOR_YUV2RGB_YUY2:i32 = 115;
pub const COLOR_YUV2RGB_YV12:i32 = 98;
pub const COLOR_YUV2RGB_YVYU:i32 = 117;
pub const COLOR_mRGBA2RGBA:i32 = 126;
pub const CV_ADAPTIVE_THRESH_GAUSSIAN_C:i32 = 1;
pub const CV_ADAPTIVE_THRESH_MEAN_C:i32 = 0;
pub const CV_BGR2BGR555:i32 = 22;
pub const CV_BGR2BGR565:i32 = 12;
pub const CV_BGR2BGRA:i32 = 0;
pub const CV_BGR2GRAY:i32 = 6;
pub const CV_BGR2HLS:i32 = 52;
pub const CV_BGR2HLS_FULL:i32 = 68;
pub const CV_BGR2HSV:i32 = 40;
pub const CV_BGR2HSV_FULL:i32 = 66;
pub const CV_BGR2Lab:i32 = 44;
pub const CV_BGR2Luv:i32 = 50;
pub const CV_BGR2RGB:i32 = 4;
pub const CV_BGR2RGBA:i32 = 2;
pub const CV_BGR2XYZ:i32 = 32;
pub const CV_BGR2YCrCb:i32 = 36;
pub const CV_BGR2YUV:i32 = 82;
pub const CV_BGR2YUV_I420:i32 = 128;
pub const CV_BGR2YUV_YV12:i32 = 132;
pub const CV_BGR5552BGR:i32 = 24;
pub const CV_BGR5552BGRA:i32 = 28;
pub const CV_BGR5552GRAY:i32 = 31;
pub const CV_BGR5552RGB:i32 = 25;
pub const CV_BGR5552RGBA:i32 = 29;
pub const CV_BGR5652BGR:i32 = 14;
pub const CV_BGR5652BGRA:i32 = 18;
pub const CV_BGR5652GRAY:i32 = 21;
pub const CV_BGR5652RGB:i32 = 15;
pub const CV_BGR5652RGBA:i32 = 19;
pub const CV_BGRA2BGR:i32 = 1;
pub const CV_BGRA2BGR555:i32 = 26;
pub const CV_BGRA2BGR565:i32 = 16;
pub const CV_BGRA2GRAY:i32 = 10;
pub const CV_BGRA2RGBA:i32 = 5;
pub const CV_BGRA2YUV_I420:i32 = 130;
pub const CV_BGRA2YUV_YV12:i32 = 134;
pub const CV_BILATERAL:i32 = 4;
pub const CV_BLUR:i32 = 1;
pub const CV_BLUR_NO_SCALE:i32 = 0;
pub const CV_BayerBG2BGR:i32 = 46;
pub const CV_BayerBG2BGR_VNG:i32 = 62;
pub const CV_BayerBG2GRAY:i32 = 86;
pub const CV_BayerGB2BGR:i32 = 47;
pub const CV_BayerGB2BGR_VNG:i32 = 63;
pub const CV_BayerGB2GRAY:i32 = 87;
pub const CV_BayerGR2BGR:i32 = 49;
pub const CV_BayerGR2BGR_VNG:i32 = 65;
pub const CV_BayerGR2GRAY:i32 = 89;
pub const CV_BayerRG2BGR:i32 = 48;
pub const CV_BayerRG2BGR_VNG:i32 = 64;
pub const CV_BayerRG2GRAY:i32 = 88;
pub const CV_CHAIN_APPROX_NONE:i32 = 1;
pub const CV_CHAIN_APPROX_SIMPLE:i32 = 2;
pub const CV_CHAIN_APPROX_TC89_KCOS:i32 = 4;
pub const CV_CHAIN_APPROX_TC89_L1:i32 = 3;
pub const CV_CHAIN_CODE:i32 = 0;
pub const CV_CLOCKWISE:i32 = 1;
pub const CV_COLORCVT_MAX:i32 = 135;
pub const CV_COMP_BHATTACHARYYA:i32 = 3;
pub const CV_COMP_CHISQR:i32 = 1;
pub const CV_COMP_CORREL:i32 = 0;
pub const CV_COMP_INTERSECT:i32 = 2;
pub const CV_CONTOURS_MATCH_I1:i32 = 1;
pub const CV_CONTOURS_MATCH_I2:i32 = 2;
pub const CV_CONTOURS_MATCH_I3:i32 = 3;
pub const CV_COUNTER_CLOCKWISE:i32 = 2;
pub const CV_DIST_C:i32 = 3;
pub const CV_DIST_FAIR:i32 = 5;
pub const CV_DIST_HUBER:i32 = 7;
pub const CV_DIST_L1:i32 = 1;
pub const CV_DIST_L12:i32 = 4;
pub const CV_DIST_L2:i32 = 2;
pub const CV_DIST_LABEL_CCOMP:i32 = 0;
pub const CV_DIST_LABEL_PIXEL:i32 = 1;
pub const CV_DIST_MASK_3:i32 = 3;
pub const CV_DIST_MASK_5:i32 = 5;
pub const CV_DIST_MASK_PRECISE:i32 = 0;
pub const CV_DIST_USER:i32 = -1;
pub const CV_DIST_WELSCH:i32 = 6;
pub const CV_GAUSSIAN:i32 = 2;
pub const CV_GAUSSIAN_5x5:i32 = 7;
pub const CV_GRAY2BGR:i32 = 8;
pub const CV_GRAY2BGR555:i32 = 30;
pub const CV_GRAY2BGR565:i32 = 20;
pub const CV_GRAY2BGRA:i32 = 9;
pub const CV_HLS2BGR:i32 = 60;
pub const CV_HLS2BGR_FULL:i32 = 72;
pub const CV_HLS2RGB:i32 = 61;
pub const CV_HLS2RGB_FULL:i32 = 73;
pub const CV_HOUGH_GRADIENT:i32 = 3;
pub const CV_HOUGH_MULTI_SCALE:i32 = 2;
pub const CV_HOUGH_PROBABILISTIC:i32 = 1;
pub const CV_HOUGH_STANDARD:i32 = 0;
pub const CV_HSV2BGR:i32 = 54;
pub const CV_HSV2BGR_FULL:i32 = 70;
pub const CV_HSV2RGB:i32 = 55;
pub const CV_HSV2RGB_FULL:i32 = 71;
pub const CV_INTER_AREA:i32 = 3;
pub const CV_INTER_CUBIC:i32 = 2;
pub const CV_INTER_LANCZOS4:i32 = 4;
pub const CV_INTER_LINEAR:i32 = 1;
pub const CV_INTER_NN:i32 = 0;
pub const CV_LBGR2Lab:i32 = 74;
pub const CV_LBGR2Luv:i32 = 76;
pub const CV_LINK_RUNS:i32 = 5;
pub const CV_LRGB2Lab:i32 = 75;
pub const CV_LRGB2Luv:i32 = 77;
pub const CV_Lab2BGR:i32 = 56;
pub const CV_Lab2LBGR:i32 = 78;
pub const CV_Lab2LRGB:i32 = 79;
pub const CV_Lab2RGB:i32 = 57;
pub const CV_Luv2BGR:i32 = 58;
pub const CV_Luv2LBGR:i32 = 80;
pub const CV_Luv2LRGB:i32 = 81;
pub const CV_Luv2RGB:i32 = 59;
pub const CV_MAX_SOBEL_KSIZE:i32 = 7;
pub const CV_MEDIAN:i32 = 3;
pub const CV_MOP_BLACKHAT:i32 = 6;
pub const CV_MOP_CLOSE:i32 = 3;
pub const CV_MOP_DILATE:i32 = 1;
pub const CV_MOP_ERODE:i32 = 0;
pub const CV_MOP_GRADIENT:i32 = 4;
pub const CV_MOP_OPEN:i32 = 2;
pub const CV_MOP_TOPHAT:i32 = 5;
pub const CV_POLY_APPROX_DP:i32 = 0;
pub const CV_RETR_CCOMP:i32 = 2;
pub const CV_RETR_EXTERNAL:i32 = 0;
pub const CV_RETR_FLOODFILL:i32 = 4;
pub const CV_RETR_LIST:i32 = 1;
pub const CV_RETR_TREE:i32 = 3;
pub const CV_RGB2BGR555:i32 = 23;
pub const CV_RGB2BGR565:i32 = 13;
pub const CV_RGB2GRAY:i32 = 7;
pub const CV_RGB2HLS:i32 = 53;
pub const CV_RGB2HLS_FULL:i32 = 69;
pub const CV_RGB2HSV:i32 = 41;
pub const CV_RGB2HSV_FULL:i32 = 67;
pub const CV_RGB2Lab:i32 = 45;
pub const CV_RGB2Luv:i32 = 51;
pub const CV_RGB2XYZ:i32 = 33;
pub const CV_RGB2YCrCb:i32 = 37;
pub const CV_RGB2YUV:i32 = 83;
pub const CV_RGB2YUV_I420:i32 = 127;
pub const CV_RGB2YUV_YV12:i32 = 131;
pub const CV_RGBA2BGR:i32 = 3;
pub const CV_RGBA2BGR555:i32 = 27;
pub const CV_RGBA2BGR565:i32 = 17;
pub const CV_RGBA2GRAY:i32 = 11;
pub const CV_RGBA2YUV_I420:i32 = 129;
pub const CV_RGBA2YUV_YV12:i32 = 133;
pub const CV_RGBA2mRGBA:i32 = 125;
pub const CV_SCHARR:i32 = -1;
pub const CV_SHAPE_CROSS:i32 = 1;
pub const CV_SHAPE_CUSTOM:i32 = 100;
pub const CV_SHAPE_ELLIPSE:i32 = 2;
pub const CV_SHAPE_RECT:i32 = 0;
pub const CV_THRESH_BINARY:i32 = 0;
pub const CV_THRESH_BINARY_INV:i32 = 1;
pub const CV_THRESH_MASK:i32 = 7;
pub const CV_THRESH_OTSU:i32 = 8;
pub const CV_THRESH_TOZERO:i32 = 3;
pub const CV_THRESH_TOZERO_INV:i32 = 4;
pub const CV_THRESH_TRUNC:i32 = 2;
pub const CV_TM_CCOEFF:i32 = 4;
pub const CV_TM_CCOEFF_NORMED:i32 = 5;
pub const CV_TM_CCORR:i32 = 2;
pub const CV_TM_CCORR_NORMED:i32 = 3;
pub const CV_TM_SQDIFF:i32 = 0;
pub const CV_TM_SQDIFF_NORMED:i32 = 1;
pub const CV_WARP_FILL_OUTLIERS:i32 = 8;
pub const CV_WARP_INVERSE_MAP:i32 = 16;
pub const CV_XYZ2BGR:i32 = 34;
pub const CV_XYZ2RGB:i32 = 35;
pub const CV_YCrCb2BGR:i32 = 38;
pub const CV_YCrCb2RGB:i32 = 39;
pub const CV_YUV2BGR:i32 = 84;
pub const CV_YUV2BGRA_IYUV:i32 = 105;
pub const CV_YUV2BGRA_NV12:i32 = 95;
pub const CV_YUV2BGRA_NV21:i32 = 97;
pub const CV_YUV2BGRA_UYVY:i32 = 112;
pub const CV_YUV2BGRA_YUY2:i32 = 120;
pub const CV_YUV2BGRA_YV12:i32 = 103;
pub const CV_YUV2BGRA_YVYU:i32 = 122;
pub const CV_YUV2BGR_IYUV:i32 = 101;
pub const CV_YUV2BGR_NV12:i32 = 91;
pub const CV_YUV2BGR_NV21:i32 = 93;
pub const CV_YUV2BGR_UYVY:i32 = 108;
pub const CV_YUV2BGR_YUY2:i32 = 116;
pub const CV_YUV2BGR_YV12:i32 = 99;
pub const CV_YUV2BGR_YVYU:i32 = 118;
pub const CV_YUV2GRAY_420:i32 = 106;
pub const CV_YUV2GRAY_UYVY:i32 = 123;
pub const CV_YUV2GRAY_YUY2:i32 = 124;
pub const CV_YUV2RGB:i32 = 85;
pub const CV_YUV2RGBA_IYUV:i32 = 104;
pub const CV_YUV2RGBA_NV12:i32 = 94;
pub const CV_YUV2RGBA_NV21:i32 = 96;
pub const CV_YUV2RGBA_UYVY:i32 = 111;
pub const CV_YUV2RGBA_YUY2:i32 = 119;
pub const CV_YUV2RGBA_YV12:i32 = 102;
pub const CV_YUV2RGBA_YVYU:i32 = 121;
pub const CV_YUV2RGB_IYUV:i32 = 100;
pub const CV_YUV2RGB_NV12:i32 = 90;
pub const CV_YUV2RGB_NV21:i32 = 92;
pub const CV_YUV2RGB_UYVY:i32 = 107;
pub const CV_YUV2RGB_YUY2:i32 = 115;
pub const CV_YUV2RGB_YV12:i32 = 98;
pub const CV_YUV2RGB_YVYU:i32 = 117;
pub const CV_mRGBA2RGBA:i32 = 126;
pub const DIST_LABEL_CCOMP:i32 = 0;
pub const DIST_LABEL_PIXEL:i32 = 1;
pub const GC_BGD:i32 = 0;
pub const GC_EVAL:i32 = 2;
pub const GC_FGD:i32 = 1;
pub const GC_INIT_WITH_MASK:i32 = 1;
pub const GC_INIT_WITH_RECT:i32 = 0;
pub const GC_PR_BGD:i32 = 2;
pub const GC_PR_FGD:i32 = 3;
pub const GHT_POSITION:i32 = 0;
pub const GHT_ROTATION:i32 = 2;
pub const GHT_SCALE:i32 = 1;
pub const INTER_BITS:i32 = 5;
pub const INTER_MAX:i32 = 7;
pub const KERNEL_ASYMMETRICAL:i32 = 2;
pub const KERNEL_GENERAL:i32 = 0;
pub const KERNEL_INTEGER:i32 = 8;
pub const KERNEL_SMOOTH:i32 = 4;
pub const KERNEL_SYMMETRICAL:i32 = 1;
pub const MORPH_CROSS:i32 = 1;
pub const MORPH_ELLIPSE:i32 = 2;
pub const MORPH_RECT:i32 = 0;
pub const PROJ_SPHERICAL_EQRECT:i32 = 1;
pub const PROJ_SPHERICAL_ORTHO:i32 = 0;
pub const Subdiv2D_NEXT_AROUND_DST:i32 = 0x22;
pub const Subdiv2D_NEXT_AROUND_LEFT:i32 = 0x13;
pub const Subdiv2D_NEXT_AROUND_ORG:i32 = 0x00;
pub const Subdiv2D_NEXT_AROUND_RIGHT:i32 = 0x31;
pub const Subdiv2D_PREV_AROUND_DST:i32 = 0x33;
pub const Subdiv2D_PREV_AROUND_LEFT:i32 = 0x20;
pub const Subdiv2D_PREV_AROUND_ORG:i32 = 0x11;
pub const Subdiv2D_PREV_AROUND_RIGHT:i32 = 0x02;
pub const Subdiv2D_PTLOC_ERROR:i32 = -2;
pub const Subdiv2D_PTLOC_INSIDE:i32 = 0;
pub const Subdiv2D_PTLOC_ON_EDGE:i32 = 2;
pub const Subdiv2D_PTLOC_OUTSIDE_RECT:i32 = -1;
pub const Subdiv2D_PTLOC_VERTEX:i32 = 1;
pub const TM_CCOEFF:i32 = 4;
pub const TM_CCOEFF_NORMED:i32 = 5;
pub const TM_CCORR:i32 = 2;
pub const TM_CCORR_NORMED:i32 = 3;
pub const TM_SQDIFF:i32 = 0;
pub const TM_SQDIFF_NORMED:i32 = 1;

include!(concat!(env!("OUT_DIR"), "/imgproc.consts.rs"));

/// raster image moments
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Moments {
    pub m00: f64,
    pub m10: f64,
    pub m01: f64,
    pub m20: f64,
    pub m11: f64,
    pub m02: f64,
    pub m30: f64,
    pub m21: f64,
    pub m12: f64,
    pub m03: f64,
    pub mu20: f64,
    pub mu11: f64,
    pub mu02: f64,
    pub mu30: f64,
    pub mu21: f64,
    pub mu12: f64,
    pub mu03: f64,
    pub nu20: f64,
    pub nu11: f64,
    pub nu02: f64,
    pub nu30: f64,
    pub nu21: f64,
    pub nu12: f64,
    pub nu03: f64,
}

// identifier: cv_Canny_InputArray_image_OutputArray_edges_double_threshold1_double_threshold2_int_apertureSize_bool_L2gradient
/// applies Canny edge detector and produces the edge map.
///
/// default value for arguments:
///   - apertureSize: default 3
///   - L2gradient: default false
pub fn canny(image:& ::core::Mat, edges:& ::core::Mat, threshold1: f64, threshold2: f64, apertureSize: i32, L2gradient: bool) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_Canny_InputArray_image_OutputArray_edges_double_threshold1_double_threshold2_int_apertureSize_bool_L2gradient(image.as_raw_Mat(), edges.as_raw_Mat(), threshold1, threshold2, apertureSize, L2gradient);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_GaussianBlur_InputArray_src_OutputArray_dst_Size_ksize_double_sigmaX_double_sigmaY_int_borderType
/// smooths the image using Gaussian filter.
///
/// default value for arguments:
///   - sigmaY: default 0
///   - borderType: default BORDER_DEFAULT
pub fn gaussian_blur(src:& ::core::Mat, dst:& ::core::Mat, ksize: ::core::Size, sigmaX: f64, sigmaY: f64, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_GaussianBlur_InputArray_src_OutputArray_dst_Size_ksize_double_sigmaX_double_sigmaY_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), ksize, sigmaX, sigmaY, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_HoughCircles_InputArray_image_OutputArray_circles_int_method_double_dp_double_minDist_double_param1_double_param2_int_minRadius_int_maxRadius
/// finds circles in the grayscale image using 2+1 gradient Hough transform
///
/// default value for arguments:
///   - param1: default 100
///   - param2: default 100
///   - minRadius: default 0
///   - maxRadius: default 0
pub fn hough_circles(image:& ::core::Mat, circles:& ::core::Mat, method: i32, dp: f64, minDist: f64, param1: f64, param2: f64, minRadius: i32, maxRadius: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_HoughCircles_InputArray_image_OutputArray_circles_int_method_double_dp_double_minDist_double_param1_double_param2_int_minRadius_int_maxRadius(image.as_raw_Mat(), circles.as_raw_Mat(), method, dp, minDist, param1, param2, minRadius, maxRadius);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_HoughLinesP_InputArray_image_OutputArray_lines_double_rho_double_theta_int_threshold_double_minLineLength_double_maxLineGap
/// finds line segments in the black-n-white image using probabilistic Hough transform
///
/// default value for arguments:
///   - minLineLength: default 0
///   - maxLineGap: default 0
pub fn hough_lines_p(image:& ::core::Mat, lines:& ::core::Mat, rho: f64, theta: f64, threshold: i32, minLineLength: f64, maxLineGap: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_HoughLinesP_InputArray_image_OutputArray_lines_double_rho_double_theta_int_threshold_double_minLineLength_double_maxLineGap(image.as_raw_Mat(), lines.as_raw_Mat(), rho, theta, threshold, minLineLength, maxLineGap);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_HoughLines_InputArray_image_OutputArray_lines_double_rho_double_theta_int_threshold_double_srn_double_stn
/// finds lines in the black-n-white image using the standard or pyramid Hough transform
///
/// default value for arguments:
///   - srn: default 0
///   - stn: default 0
pub fn hough_lines(image:& ::core::Mat, lines:& ::core::Mat, rho: f64, theta: f64, threshold: i32, srn: f64, stn: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_HoughLines_InputArray_image_OutputArray_lines_double_rho_double_theta_int_threshold_double_srn_double_stn(image.as_raw_Mat(), lines.as_raw_Mat(), rho, theta, threshold, srn, stn);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_HuMoments_Moments_m_OutputArray_hu
pub fn hu_moments(m: ::imgproc::Moments, hu:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_HuMoments_Moments_m_OutputArray_hu(m, hu.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_Laplacian_InputArray_src_OutputArray_dst_int_ddepth_int_ksize_double_scale_double_delta_int_borderType
/// applies Laplacian operator to the image
///
/// default value for arguments:
///   - ksize: default 1
///   - scale: default 1
///   - delta: default 0
///   - borderType: default BORDER_DEFAULT
pub fn laplacian(src:& ::core::Mat, dst:& ::core::Mat, ddepth: i32, ksize: i32, scale: f64, delta: f64, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_Laplacian_InputArray_src_OutputArray_dst_int_ddepth_int_ksize_double_scale_double_delta_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), ddepth, ksize, scale, delta, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_PSNR_InputArray_src1_InputArray_src2
/// computes PSNR image/video quality metric
pub fn psnr(src1:& ::core::Mat, src2:& ::core::Mat) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_PSNR_InputArray_src1_InputArray_src2(src1.as_raw_Mat(), src2.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_Scharr_InputArray_src_OutputArray_dst_int_ddepth_int_dx_int_dy_double_scale_double_delta_int_borderType
/// applies the vertical or horizontal Scharr operator to the image
///
/// default value for arguments:
///   - scale: default 1
///   - delta: default 0
///   - borderType: default BORDER_DEFAULT
pub fn scharr(src:& ::core::Mat, dst:& ::core::Mat, ddepth: i32, dx: i32, dy: i32, scale: f64, delta: f64, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_Scharr_InputArray_src_OutputArray_dst_int_ddepth_int_dx_int_dy_double_scale_double_delta_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), ddepth, dx, dy, scale, delta, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_Sobel_InputArray_src_OutputArray_dst_int_ddepth_int_dx_int_dy_int_ksize_double_scale_double_delta_int_borderType
/// applies generalized Sobel operator to the image
///
/// default value for arguments:
///   - ksize: default 3
///   - scale: default 1
///   - delta: default 0
///   - borderType: default BORDER_DEFAULT
pub fn sobel(src:& ::core::Mat, dst:& ::core::Mat, ddepth: i32, dx: i32, dy: i32, ksize: i32, scale: f64, delta: f64, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_Sobel_InputArray_src_OutputArray_dst_int_ddepth_int_dx_int_dy_int_ksize_double_scale_double_delta_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), ddepth, dx, dy, ksize, scale, delta, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_adaptiveBilateralFilter_InputArray_src_OutputArray_dst_Size_ksize_double_sigmaSpace_double_maxSigmaColor_Point_anchor_int_borderType
/// smooths the image using adaptive bilateral filter
///
/// default value for arguments:
///   - maxSigmaColor: default 20.0
///   - anchor: default Point(-1, -1)
///   - borderType: default BORDER_DEFAULT
pub fn adaptive_bilateral_filter(src:& ::core::Mat, dst:& ::core::Mat, ksize: ::core::Size, sigmaSpace: f64, maxSigmaColor: f64, anchor: ::core::Point, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_adaptiveBilateralFilter_InputArray_src_OutputArray_dst_Size_ksize_double_sigmaSpace_double_maxSigmaColor_Point_anchor_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), ksize, sigmaSpace, maxSigmaColor, anchor, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_adaptiveThreshold_InputArray_src_OutputArray_dst_double_maxValue_int_adaptiveMethod_int_thresholdType_int_blockSize_double_C
/// applies variable (adaptive) threshold to the image
pub fn adaptive_threshold(src:& ::core::Mat, dst:& ::core::Mat, maxValue: f64, adaptiveMethod: i32, thresholdType: i32, blockSize: i32, C: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_adaptiveThreshold_InputArray_src_OutputArray_dst_double_maxValue_int_adaptiveMethod_int_thresholdType_int_blockSize_double_C(src.as_raw_Mat(), dst.as_raw_Mat(), maxValue, adaptiveMethod, thresholdType, blockSize, C);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_approxPolyDP_InputArray_curve_OutputArray_approxCurve_double_epsilon_bool_closed
/// approximates contour or a curve using Douglas-Peucker algorithm
pub fn approx_poly_dp(curve:& ::core::Mat, approxCurve:& ::core::Mat, epsilon: f64, closed: bool) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_approxPolyDP_InputArray_curve_OutputArray_approxCurve_double_epsilon_bool_closed(curve.as_raw_Mat(), approxCurve.as_raw_Mat(), epsilon, closed);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_arcLength_InputArray_curve_bool_closed
/// computes the contour perimeter (closed=true) or a curve length
pub fn arc_length(curve:& ::core::Mat, closed: bool) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_arcLength_InputArray_curve_bool_closed(curve.as_raw_Mat(), closed);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_bilateralFilter_InputArray_src_OutputArray_dst_int_d_double_sigmaColor_double_sigmaSpace_int_borderType
/// smooths the image using bilateral filter
///
/// default value for arguments:
///   - borderType: default BORDER_DEFAULT
pub fn bilateral_filter(src:& ::core::Mat, dst:& ::core::Mat, d: i32, sigmaColor: f64, sigmaSpace: f64, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_bilateralFilter_InputArray_src_OutputArray_dst_int_d_double_sigmaColor_double_sigmaSpace_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), d, sigmaColor, sigmaSpace, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_blur_InputArray_src_OutputArray_dst_Size_ksize_Point_anchor_int_borderType
/// a synonym for normalized box filter
///
/// default value for arguments:
///   - anchor: default Point(-1,-1)
///   - borderType: default BORDER_DEFAULT
pub fn blur(src:& ::core::Mat, dst:& ::core::Mat, ksize: ::core::Size, anchor: ::core::Point, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_blur_InputArray_src_OutputArray_dst_Size_ksize_Point_anchor_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), ksize, anchor, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_borderInterpolate_int_p_int_len_int_borderType
/// 1D interpolation function: returns coordinate of the "donor" pixel for the specified location p.
pub fn border_interpolate(p: i32, len: i32, borderType: i32) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_borderInterpolate_int_p_int_len_int_borderType(p, len, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_boundingRect_InputArray_points
/// computes the bounding rectangle for a contour
pub fn bounding_rect(points:& ::core::Mat) -> Result<::core::Rect,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_boundingRect_InputArray_points(points.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_boxFilter_InputArray_src_OutputArray_dst_int_ddepth_Size_ksize_Point_anchor_bool_normalize_int_borderType
/// smooths the image using the box filter. Each pixel is processed in O(1) time
///
/// default value for arguments:
///   - anchor: default Point(-1,-1)
///   - normalize: default true
///   - borderType: default BORDER_DEFAULT
pub fn box_filter(src:& ::core::Mat, dst:& ::core::Mat, ddepth: i32, ksize: ::core::Size, anchor: ::core::Point, normalize: bool, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_boxFilter_InputArray_src_OutputArray_dst_int_ddepth_Size_ksize_Point_anchor_bool_normalize_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), ddepth, ksize, anchor, normalize, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_compareHist_InputArray_H1_InputArray_H2_int_method
/// compares two histograms stored in dense arrays
pub fn compare_hist(H1:& ::core::Mat, H2:& ::core::Mat, method: i32) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_compareHist_InputArray_H1_InputArray_H2_int_method(H1.as_raw_Mat(), H2.as_raw_Mat(), method);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_contourArea_InputArray_contour_bool_oriented
/// computes the contour area
///
/// default value for arguments:
///   - oriented: default false
pub fn contour_area(contour:& ::core::Mat, oriented: bool) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_contourArea_InputArray_contour_bool_oriented(contour.as_raw_Mat(), oriented);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_convertMaps_InputArray_map1_InputArray_map2_OutputArray_dstmap1_OutputArray_dstmap2_int_dstmap1type_bool_nninterpolation
/// converts maps for remap from floating-point to fixed-point format or backwards
///
/// default value for arguments:
///   - nninterpolation: default false
pub fn convert_maps(map1:& ::core::Mat, map2:& ::core::Mat, dstmap1:& ::core::Mat, dstmap2:& ::core::Mat, dstmap1type: i32, nninterpolation: bool) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_convertMaps_InputArray_map1_InputArray_map2_OutputArray_dstmap1_OutputArray_dstmap2_int_dstmap1type_bool_nninterpolation(map1.as_raw_Mat(), map2.as_raw_Mat(), dstmap1.as_raw_Mat(), dstmap2.as_raw_Mat(), dstmap1type, nninterpolation);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_convexHull_InputArray_points_OutputArray_hull_bool_clockwise_bool_returnPoints
/// computes convex hull for a set of 2D points.
///
/// default value for arguments:
///   - clockwise: default false
///   - returnPoints: default true
pub fn convex_hull(points:& ::core::Mat, hull:& ::core::Mat, clockwise: bool, returnPoints: bool) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_convexHull_InputArray_points_OutputArray_hull_bool_clockwise_bool_returnPoints(points.as_raw_Mat(), hull.as_raw_Mat(), clockwise, returnPoints);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_convexityDefects_InputArray_contour_InputArray_convexhull_OutputArray_convexityDefects
/// computes the contour convexity defects
pub fn convexity_defects(contour:& ::core::Mat, convexhull:& ::core::Mat, convexityDefects:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_convexityDefects_InputArray_contour_InputArray_convexhull_OutputArray_convexityDefects(contour.as_raw_Mat(), convexhull.as_raw_Mat(), convexityDefects.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_copyMakeBorder_InputArray_src_OutputArray_dst_int_top_int_bottom_int_left_int_right_int_borderType_Scalar_value
/// copies 2D array to a larger destination array with extrapolation of the outer part of src using the specified border mode
///
/// default value for arguments:
///   - value: default Scalar()
pub fn copy_make_border(src:& ::core::Mat, dst:& ::core::Mat, top: i32, bottom: i32, left: i32, right: i32, borderType: i32, value: ::core::Scalar) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_copyMakeBorder_InputArray_src_OutputArray_dst_int_top_int_bottom_int_left_int_right_int_borderType_Scalar_value(src.as_raw_Mat(), dst.as_raw_Mat(), top, bottom, left, right, borderType, value);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_cornerEigenValsAndVecs_InputArray_src_OutputArray_dst_int_blockSize_int_ksize_int_borderType
/// computes both eigenvalues and the eigenvectors of 2x2 derivative covariation matrix  at each pixel. The output is stored as 6-channel matrix.
///
/// default value for arguments:
///   - borderType: default BORDER_DEFAULT
pub fn corner_eigen_vals_and_vecs(src:& ::core::Mat, dst:& ::core::Mat, blockSize: i32, ksize: i32, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_cornerEigenValsAndVecs_InputArray_src_OutputArray_dst_int_blockSize_int_ksize_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), blockSize, ksize, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_cornerHarris_InputArray_src_OutputArray_dst_int_blockSize_int_ksize_double_k_int_borderType
/// computes Harris cornerness criteria at each image pixel
///
/// default value for arguments:
///   - borderType: default BORDER_DEFAULT
pub fn corner_harris(src:& ::core::Mat, dst:& ::core::Mat, blockSize: i32, ksize: i32, k: f64, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_cornerHarris_InputArray_src_OutputArray_dst_int_blockSize_int_ksize_double_k_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), blockSize, ksize, k, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_cornerMinEigenVal_InputArray_src_OutputArray_dst_int_blockSize_int_ksize_int_borderType
/// computes minimum eigen value of 2x2 derivative covariation matrix at each pixel - the cornerness criteria
///
/// default value for arguments:
///   - ksize: default 3
///   - borderType: default BORDER_DEFAULT
pub fn corner_min_eigen_val(src:& ::core::Mat, dst:& ::core::Mat, blockSize: i32, ksize: i32, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_cornerMinEigenVal_InputArray_src_OutputArray_dst_int_blockSize_int_ksize_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), blockSize, ksize, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_createBoxFilter_int_srcType_int_dstType_Size_ksize_Point_anchor_bool_normalize_int_borderType
/// returns box filter engine
///
/// default value for arguments:
///   - anchor: default Point(-1,-1)
///   - normalize: default true
///   - borderType: default BORDER_DEFAULT
pub fn create_box_filter(srcType: i32, dstType: i32, ksize: ::core::Size, anchor: ::core::Point, normalize: bool, borderType: i32) -> Result<::types::PtrOfFilterEngine,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_createBoxFilter_int_srcType_int_dstType_Size_ksize_Point_anchor_bool_normalize_int_borderType(srcType, dstType, ksize, anchor, normalize, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::types::PtrOfFilterEngine{ ptr: rv.result })
  }
}

// identifier: cv_createDerivFilter_int_srcType_int_dstType_int_dx_int_dy_int_ksize_int_borderType
/// returns filter engine for the generalized Sobel operator
///
/// default value for arguments:
///   - borderType: default BORDER_DEFAULT
pub fn create_deriv_filter(srcType: i32, dstType: i32, dx: i32, dy: i32, ksize: i32, borderType: i32) -> Result<::types::PtrOfFilterEngine,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_createDerivFilter_int_srcType_int_dstType_int_dx_int_dy_int_ksize_int_borderType(srcType, dstType, dx, dy, ksize, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::types::PtrOfFilterEngine{ ptr: rv.result })
  }
}

// identifier: cv_createGaussianFilter_int_type_Size_ksize_double_sigma1_double_sigma2_int_borderType
/// returns the Gaussian filter engine
///
/// default value for arguments:
///   - sigma2: default 0
///   - borderType: default BORDER_DEFAULT
pub fn create_gaussian_filter(_type: i32, ksize: ::core::Size, sigma1: f64, sigma2: f64, borderType: i32) -> Result<::types::PtrOfFilterEngine,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_createGaussianFilter_int_type_Size_ksize_double_sigma1_double_sigma2_int_borderType(_type, ksize, sigma1, sigma2, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::types::PtrOfFilterEngine{ ptr: rv.result })
  }
}

// identifier: cv_createHanningWindow_OutputArray_dst_Size_winSize_int_type
pub fn create_hanning_window(dst:& ::core::Mat, winSize: ::core::Size, _type: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_createHanningWindow_OutputArray_dst_Size_winSize_int_type(dst.as_raw_Mat(), winSize, _type);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_createLinearFilter_int_srcType_int_dstType_InputArray_kernel_Point__anchor_double_delta_int_rowBorderType_int_columnBorderType_Scalar_borderValue
/// returns the non-separable linear filter engine
///
/// default value for arguments:
///   - _anchor: default Point(-1,-1)
///   - delta: default 0
///   - rowBorderType: default BORDER_DEFAULT
///   - columnBorderType: default -1
///   - borderValue: default Scalar()
pub fn create_linear_filter(srcType: i32, dstType: i32, kernel:& ::core::Mat, _anchor: ::core::Point, delta: f64, rowBorderType: i32, columnBorderType: i32, borderValue: ::core::Scalar) -> Result<::types::PtrOfFilterEngine,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_createLinearFilter_int_srcType_int_dstType_InputArray_kernel_Point__anchor_double_delta_int_rowBorderType_int_columnBorderType_Scalar_borderValue(srcType, dstType, kernel.as_raw_Mat(), _anchor, delta, rowBorderType, columnBorderType, borderValue);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::types::PtrOfFilterEngine{ ptr: rv.result })
  }
}

// identifier: cv_createMorphologyFilter_int_op_int_type_InputArray_kernel_Point_anchor_int_rowBorderType_int_columnBorderType_Scalar_borderValue
/// returns morphological filter engine. Only MORPH_ERODE and MORPH_DILATE are supported.
///
/// default value for arguments:
///   - anchor: default Point(-1,-1)
///   - rowBorderType: default BORDER_CONSTANT
///   - columnBorderType: default -1
///   - borderValue: default morphologyDefaultBorderValue()
pub fn create_morphology_filter(op: i32, _type: i32, kernel:& ::core::Mat, anchor: ::core::Point, rowBorderType: i32, columnBorderType: i32, borderValue: ::core::Scalar) -> Result<::types::PtrOfFilterEngine,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_createMorphologyFilter_int_op_int_type_InputArray_kernel_Point_anchor_int_rowBorderType_int_columnBorderType_Scalar_borderValue(op, _type, kernel.as_raw_Mat(), anchor, rowBorderType, columnBorderType, borderValue);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::types::PtrOfFilterEngine{ ptr: rv.result })
  }
}

// identifier: cv_createSeparableLinearFilter_int_srcType_int_dstType_InputArray_rowKernel_InputArray_columnKernel_Point_anchor_double_delta_int_rowBorderType_int_columnBorderType_Scalar_borderValue
/// returns the separable linear filter engine
///
/// default value for arguments:
///   - anchor: default Point(-1,-1)
///   - delta: default 0
///   - rowBorderType: default BORDER_DEFAULT
///   - columnBorderType: default -1
///   - borderValue: default Scalar()
pub fn create_separable_linear_filter(srcType: i32, dstType: i32, rowKernel:& ::core::Mat, columnKernel:& ::core::Mat, anchor: ::core::Point, delta: f64, rowBorderType: i32, columnBorderType: i32, borderValue: ::core::Scalar) -> Result<::types::PtrOfFilterEngine,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_createSeparableLinearFilter_int_srcType_int_dstType_InputArray_rowKernel_InputArray_columnKernel_Point_anchor_double_delta_int_rowBorderType_int_columnBorderType_Scalar_borderValue(srcType, dstType, rowKernel.as_raw_Mat(), columnKernel.as_raw_Mat(), anchor, delta, rowBorderType, columnBorderType, borderValue);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::types::PtrOfFilterEngine{ ptr: rv.result })
  }
}

// identifier: cv_cvtColor_InputArray_src_OutputArray_dst_int_code_int_dstCn
/// converts image from one color space to another
///
/// default value for arguments:
///   - dstCn: default 0
pub fn cvt_color(src:& ::core::Mat, dst:& ::core::Mat, code: i32, dstCn: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_cvtColor_InputArray_src_OutputArray_dst_int_code_int_dstCn(src.as_raw_Mat(), dst.as_raw_Mat(), code, dstCn);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_dilate_InputArray_src_OutputArray_dst_InputArray_kernel_Point_anchor_int_iterations_int_borderType_Scalar_borderValue
/// dilates the image (applies the local maximum operator)
///
/// default value for arguments:
///   - anchor: default Point(-1,-1)
///   - iterations: default 1
///   - borderType: default BORDER_CONSTANT
///   - borderValue: default morphologyDefaultBorderValue()
pub fn dilate(src:& ::core::Mat, dst:& ::core::Mat, kernel:& ::core::Mat, anchor: ::core::Point, iterations: i32, borderType: i32, borderValue: ::core::Scalar) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_dilate_InputArray_src_OutputArray_dst_InputArray_kernel_Point_anchor_int_iterations_int_borderType_Scalar_borderValue(src.as_raw_Mat(), dst.as_raw_Mat(), kernel.as_raw_Mat(), anchor, iterations, borderType, borderValue);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_distanceTransform_InputArray_src_OutputArray_dst_OutputArray_labels_int_distanceType_int_maskSize_int_labelType
/// builds the discrete Voronoi diagram
///
/// default value for arguments:
///   - labelType: default DIST_LABEL_CCOMP
pub fn distance_transform_labels(src:& ::core::Mat, dst:& ::core::Mat, labels:& ::core::Mat, distanceType: i32, maskSize: i32, labelType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_distanceTransform_InputArray_src_OutputArray_dst_OutputArray_labels_int_distanceType_int_maskSize_int_labelType(src.as_raw_Mat(), dst.as_raw_Mat(), labels.as_raw_Mat(), distanceType, maskSize, labelType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_distanceTransform_InputArray_src_OutputArray_dst_int_distanceType_int_maskSize
/// computes the distance transform map
pub fn distance_transform(src:& ::core::Mat, dst:& ::core::Mat, distanceType: i32, maskSize: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_distanceTransform_InputArray_src_OutputArray_dst_int_distanceType_int_maskSize(src.as_raw_Mat(), dst.as_raw_Mat(), distanceType, maskSize);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_equalizeHist_InputArray_src_OutputArray_dst
/// normalizes the grayscale image brightness and contrast by normalizing its histogram
pub fn equalize_hist(src:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_equalizeHist_InputArray_src_OutputArray_dst(src.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_erode_InputArray_src_OutputArray_dst_InputArray_kernel_Point_anchor_int_iterations_int_borderType_Scalar_borderValue
/// erodes the image (applies the local minimum operator)
///
/// default value for arguments:
///   - anchor: default Point(-1,-1)
///   - iterations: default 1
///   - borderType: default BORDER_CONSTANT
///   - borderValue: default morphologyDefaultBorderValue()
pub fn erode(src:& ::core::Mat, dst:& ::core::Mat, kernel:& ::core::Mat, anchor: ::core::Point, iterations: i32, borderType: i32, borderValue: ::core::Scalar) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_erode_InputArray_src_OutputArray_dst_InputArray_kernel_Point_anchor_int_iterations_int_borderType_Scalar_borderValue(src.as_raw_Mat(), dst.as_raw_Mat(), kernel.as_raw_Mat(), anchor, iterations, borderType, borderValue);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_filter2D_InputArray_src_OutputArray_dst_int_ddepth_InputArray_kernel_Point_anchor_double_delta_int_borderType
/// applies non-separable 2D linear filter to the image
///
/// default value for arguments:
///   - anchor: default Point(-1,-1)
///   - delta: default 0
///   - borderType: default BORDER_DEFAULT
pub fn filter2_d(src:& ::core::Mat, dst:& ::core::Mat, ddepth: i32, kernel:& ::core::Mat, anchor: ::core::Point, delta: f64, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_filter2D_InputArray_src_OutputArray_dst_int_ddepth_InputArray_kernel_Point_anchor_double_delta_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), ddepth, kernel.as_raw_Mat(), anchor, delta, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_fitLine_InputArray_points_OutputArray_line_int_distType_double_param_double_reps_double_aeps
/// fits line to the set of 2D points using M-estimator algorithm
pub fn fit_line(points:& ::core::Mat, line:& ::core::Mat, distType: i32, param: f64, reps: f64, aeps: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_fitLine_InputArray_points_OutputArray_line_int_distType_double_param_double_reps_double_aeps(points.as_raw_Mat(), line.as_raw_Mat(), distType, param, reps, aeps);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_getAffineTransform_InputArray_src_InputArray_dst
pub fn get_affine_transform(src:& ::core::Mat, dst:& ::core::Mat) -> Result<::core::Mat,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_getAffineTransform_InputArray_src_InputArray_dst(src.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::core::Mat{ ptr: rv.result })
  }
}

// identifier: cv_getDefaultNewCameraMatrix_InputArray_cameraMatrix_Size_imgsize_bool_centerPrincipalPoint
/// returns the default new camera matrix (by default it is the same as cameraMatrix unless centerPricipalPoint=true)
///
/// default value for arguments:
///   - imgsize: default Size()
///   - centerPrincipalPoint: default false
pub fn get_default_new_camera_matrix(cameraMatrix:& ::core::Mat, imgsize: ::core::Size, centerPrincipalPoint: bool) -> Result<::core::Mat,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_getDefaultNewCameraMatrix_InputArray_cameraMatrix_Size_imgsize_bool_centerPrincipalPoint(cameraMatrix.as_raw_Mat(), imgsize, centerPrincipalPoint);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::core::Mat{ ptr: rv.result })
  }
}

// identifier: cv_getDerivKernels_OutputArray_kx_OutputArray_ky_int_dx_int_dy_int_ksize_bool_normalize_int_ktype
/// initializes kernels of the generalized Sobel operator
///
/// default value for arguments:
///   - normalize: default false
///   - ktype: default CV_32F
pub fn get_deriv_kernels(kx:& ::core::Mat, ky:& ::core::Mat, dx: i32, dy: i32, ksize: i32, normalize: bool, ktype: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_getDerivKernels_OutputArray_kx_OutputArray_ky_int_dx_int_dy_int_ksize_bool_normalize_int_ktype(kx.as_raw_Mat(), ky.as_raw_Mat(), dx, dy, ksize, normalize, ktype);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_getGaborKernel_Size_ksize_double_sigma_double_theta_double_lambd_double_gamma_double_psi_int_ktype
/// returns the Gabor kernel with the specified parameters
///
/// default value for arguments:
///   - psi: default CV_PI*0.5
///   - ktype: default CV_64F
pub fn get_gabor_kernel(ksize: ::core::Size, sigma: f64, theta: f64, lambd: f64, gamma: f64, psi: f64, ktype: i32) -> Result<::core::Mat,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_getGaborKernel_Size_ksize_double_sigma_double_theta_double_lambd_double_gamma_double_psi_int_ktype(ksize, sigma, theta, lambd, gamma, psi, ktype);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::core::Mat{ ptr: rv.result })
  }
}

// identifier: cv_getGaussianKernel_int_ksize_double_sigma_int_ktype
/// returns the Gaussian kernel with the specified parameters
///
/// default value for arguments:
///   - ktype: default CV_64F
pub fn get_gaussian_kernel(ksize: i32, sigma: f64, ktype: i32) -> Result<::core::Mat,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_getGaussianKernel_int_ksize_double_sigma_int_ktype(ksize, sigma, ktype);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::core::Mat{ ptr: rv.result })
  }
}

// identifier: cv_getKernelType_InputArray_kernel_Point_anchor
/// returns type (one of KERNEL_*) of 1D or 2D kernel specified by its coefficients.
pub fn get_kernel_type(kernel:& ::core::Mat, anchor: ::core::Point) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_getKernelType_InputArray_kernel_Point_anchor(kernel.as_raw_Mat(), anchor);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_getPerspectiveTransform_InputArray_src_InputArray_dst
pub fn get_perspective_transform(src:& ::core::Mat, dst:& ::core::Mat) -> Result<::core::Mat,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_getPerspectiveTransform_InputArray_src_InputArray_dst(src.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::core::Mat{ ptr: rv.result })
  }
}

// identifier: cv_getRectSubPix_InputArray_image_Size_patchSize_Point2f_center_OutputArray_patch_int_patchType
/// extracts rectangle from the image at sub-pixel location
///
/// default value for arguments:
///   - patchType: default -1
pub fn get_rect_sub_pix(image:& ::core::Mat, patchSize: ::core::Size, center: ::core::Point2f, patch:& ::core::Mat, patchType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_getRectSubPix_InputArray_image_Size_patchSize_Point2f_center_OutputArray_patch_int_patchType(image.as_raw_Mat(), patchSize, center, patch.as_raw_Mat(), patchType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_getRotationMatrix2D_Point2f_center_double_angle_double_scale
/// returns 2x3 affine transformation matrix for the planar rotation.
pub fn get_rotation_matrix2_d(center: ::core::Point2f, angle: f64, scale: f64) -> Result<::core::Mat,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_getRotationMatrix2D_Point2f_center_double_angle_double_scale(center, angle, scale);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::core::Mat{ ptr: rv.result })
  }
}

// identifier: cv_getStructuringElement_int_shape_Size_ksize_Point_anchor
/// returns structuring element of the specified shape and size
///
/// default value for arguments:
///   - anchor: default Point(-1,-1)
pub fn get_structuring_element(shape: i32, ksize: ::core::Size, anchor: ::core::Point) -> Result<::core::Mat,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_getStructuringElement_int_shape_Size_ksize_Point_anchor(shape, ksize, anchor);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::core::Mat{ ptr: rv.result })
  }
}

// identifier: cv_goodFeaturesToTrack_InputArray_image_OutputArray_corners_int_maxCorners_double_qualityLevel_double_minDistance_InputArray_mask_int_blockSize_bool_useHarrisDetector_double_k
/// finds the strong enough corners where the cornerMinEigenVal() or cornerHarris() report the local maxima
///
/// default value for arguments:
///   - mask: default noArray()
///   - blockSize: default 3
///   - useHarrisDetector: default false
///   - k: default 0.04
pub fn good_features_to_track(image:& ::core::Mat, corners:& ::core::Mat, maxCorners: i32, qualityLevel: f64, minDistance: f64, mask:& ::core::Mat, blockSize: i32, useHarrisDetector: bool, k: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_goodFeaturesToTrack_InputArray_image_OutputArray_corners_int_maxCorners_double_qualityLevel_double_minDistance_InputArray_mask_int_blockSize_bool_useHarrisDetector_double_k(image.as_raw_Mat(), corners.as_raw_Mat(), maxCorners, qualityLevel, minDistance, mask.as_raw_Mat(), blockSize, useHarrisDetector, k);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_initUndistortRectifyMap_InputArray_cameraMatrix_InputArray_distCoeffs_InputArray_R_InputArray_newCameraMatrix_Size_size_int_m1type_OutputArray_map1_OutputArray_map2
/// initializes maps for cv::remap() to correct lens distortion and optionally rectify the image
pub fn init_undistort_rectify_map(cameraMatrix:& ::core::Mat, distCoeffs:& ::core::Mat, R:& ::core::Mat, newCameraMatrix:& ::core::Mat, size: ::core::Size, m1type: i32, map1:& ::core::Mat, map2:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_initUndistortRectifyMap_InputArray_cameraMatrix_InputArray_distCoeffs_InputArray_R_InputArray_newCameraMatrix_Size_size_int_m1type_OutputArray_map1_OutputArray_map2(cameraMatrix.as_raw_Mat(), distCoeffs.as_raw_Mat(), R.as_raw_Mat(), newCameraMatrix.as_raw_Mat(), size, m1type, map1.as_raw_Mat(), map2.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_initWideAngleProjMap_InputArray_cameraMatrix_InputArray_distCoeffs_Size_imageSize_int_destImageWidth_int_m1type_OutputArray_map1_OutputArray_map2_int_projType_double_alpha
/// initializes maps for cv::remap() for wide-angle
///
/// default value for arguments:
///   - projType: default PROJ_SPHERICAL_EQRECT
///   - alpha: default 0
pub fn init_wide_angle_proj_map(cameraMatrix:& ::core::Mat, distCoeffs:& ::core::Mat, imageSize: ::core::Size, destImageWidth: i32, m1type: i32, map1:& ::core::Mat, map2:& ::core::Mat, projType: i32, alpha: f64) -> Result<f32,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_initWideAngleProjMap_InputArray_cameraMatrix_InputArray_distCoeffs_Size_imageSize_int_destImageWidth_int_m1type_OutputArray_map1_OutputArray_map2_int_projType_double_alpha(cameraMatrix.as_raw_Mat(), distCoeffs.as_raw_Mat(), imageSize, destImageWidth, m1type, map1.as_raw_Mat(), map2.as_raw_Mat(), projType, alpha);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_integral_InputArray_src_OutputArray_sum_OutputArray_sqsum_OutputArray_tilted_int_sdepth
/// computes the integral image, integral for the squared image and the tilted integral image
///
/// default value for arguments:
///   - sdepth: default -1
pub fn integral_tilted(src:& ::core::Mat, sum:& ::core::Mat, sqsum:& ::core::Mat, tilted:& ::core::Mat, sdepth: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_integral_InputArray_src_OutputArray_sum_OutputArray_sqsum_OutputArray_tilted_int_sdepth(src.as_raw_Mat(), sum.as_raw_Mat(), sqsum.as_raw_Mat(), tilted.as_raw_Mat(), sdepth);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_integral_InputArray_src_OutputArray_sum_OutputArray_sqsum_int_sdepth
/// computes the integral image and integral for the squared image
///
/// default value for arguments:
///   - sdepth: default -1
pub fn integral_sq(src:& ::core::Mat, sum:& ::core::Mat, sqsum:& ::core::Mat, sdepth: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_integral_InputArray_src_OutputArray_sum_OutputArray_sqsum_int_sdepth(src.as_raw_Mat(), sum.as_raw_Mat(), sqsum.as_raw_Mat(), sdepth);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_integral_InputArray_src_OutputArray_sum_int_sdepth
/// computes the integral image
///
/// default value for arguments:
///   - sdepth: default -1
pub fn integral(src:& ::core::Mat, sum:& ::core::Mat, sdepth: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_integral_InputArray_src_OutputArray_sum_int_sdepth(src.as_raw_Mat(), sum.as_raw_Mat(), sdepth);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_intersectConvexConvex_InputArray__p1_InputArray__p2_OutputArray__p12_bool_handleNested
/// finds intersection of two convex polygons
///
/// default value for arguments:
///   - handleNested: default true
pub fn intersect_convex_convex(_p1:& ::core::Mat, _p2:& ::core::Mat, _p12:& ::core::Mat, handleNested: bool) -> Result<f32,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_intersectConvexConvex_InputArray__p1_InputArray__p2_OutputArray__p12_bool_handleNested(_p1.as_raw_Mat(), _p2.as_raw_Mat(), _p12.as_raw_Mat(), handleNested);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_invertAffineTransform_InputArray_M_OutputArray_iM
/// computes 2x3 affine transformation matrix that is inverse to the specified 2x3 affine transformation.
pub fn invert_affine_transform(M:& ::core::Mat, iM:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_invertAffineTransform_InputArray_M_OutputArray_iM(M.as_raw_Mat(), iM.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_isContourConvex_InputArray_contour
/// returns true if the contour is convex. Does not support contours with self-intersection
pub fn is_contour_convex(contour:& ::core::Mat) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_isContourConvex_InputArray_contour(contour.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_matchShapes_InputArray_contour1_InputArray_contour2_int_method_double_parameter
/// matches two contours using one of the available algorithms
pub fn match_shapes(contour1:& ::core::Mat, contour2:& ::core::Mat, method: i32, parameter: f64) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_matchShapes_InputArray_contour1_InputArray_contour2_int_method_double_parameter(contour1.as_raw_Mat(), contour2.as_raw_Mat(), method, parameter);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_matchTemplate_InputArray_image_InputArray_templ_OutputArray_result_int_method
/// computes the proximity map for the raster template and the image where the template is searched for
pub fn match_template(image:& ::core::Mat, templ:& ::core::Mat, result:& ::core::Mat, method: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_matchTemplate_InputArray_image_InputArray_templ_OutputArray_result_int_method(image.as_raw_Mat(), templ.as_raw_Mat(), result.as_raw_Mat(), method);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_medianBlur_InputArray_src_OutputArray_dst_int_ksize
/// smooths the image using median filter.
pub fn median_blur(src:& ::core::Mat, dst:& ::core::Mat, ksize: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_medianBlur_InputArray_src_OutputArray_dst_int_ksize(src.as_raw_Mat(), dst.as_raw_Mat(), ksize);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_minEnclosingCircle_InputArray_points_Point2f_center_float_radius
/// computes the minimal enclosing circle for a set of points
pub fn min_enclosing_circle(points:& ::core::Mat, center: ::core::Point2f, radius: f32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_minEnclosingCircle_InputArray_points_Point2f_center_float_radius(points.as_raw_Mat(), center, radius);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_moments_InputArray_array_bool_binaryImage
/// computes moments of the rasterized shape or a vector of points
///
/// default value for arguments:
///   - binaryImage: default false
pub fn moments(array:& ::core::Mat, binaryImage: bool) -> Result<::imgproc::Moments,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_moments_InputArray_array_bool_binaryImage(array.as_raw_Mat(), binaryImage);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_morphologyDefaultBorderValue
/// returns "magic" border value for erosion and dilation. It is automatically transformed to Scalar::all(-DBL_MAX) for dilation.
pub fn morphology_default_border_value() -> Result<::core::Scalar,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_morphologyDefaultBorderValue();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_morphologyEx_InputArray_src_OutputArray_dst_int_op_InputArray_kernel_Point_anchor_int_iterations_int_borderType_Scalar_borderValue
/// applies an advanced morphological operation to the image
///
/// default value for arguments:
///   - anchor: default Point(-1,-1)
///   - iterations: default 1
///   - borderType: default BORDER_CONSTANT
///   - borderValue: default morphologyDefaultBorderValue()
pub fn morphology_ex(src:& ::core::Mat, dst:& ::core::Mat, op: i32, kernel:& ::core::Mat, anchor: ::core::Point, iterations: i32, borderType: i32, borderValue: ::core::Scalar) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_morphologyEx_InputArray_src_OutputArray_dst_int_op_InputArray_kernel_Point_anchor_int_iterations_int_borderType_Scalar_borderValue(src.as_raw_Mat(), dst.as_raw_Mat(), op, kernel.as_raw_Mat(), anchor, iterations, borderType, borderValue);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_phaseCorrelate_InputArray_src1_InputArray_src2_InputArray_window
///
/// default value for arguments:
///   - window: default noArray()
pub fn phase_correlate(src1:& ::core::Mat, src2:& ::core::Mat, window:& ::core::Mat) -> Result<::core::Point2d,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_phaseCorrelate_InputArray_src1_InputArray_src2_InputArray_window(src1.as_raw_Mat(), src2.as_raw_Mat(), window.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_pointPolygonTest_InputArray_contour_Point2f_pt_bool_measureDist
/// checks if the point is inside the contour. Optionally computes the signed distance from the point to the contour boundary
pub fn point_polygon_test(contour:& ::core::Mat, pt: ::core::Point2f, measureDist: bool) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_pointPolygonTest_InputArray_contour_Point2f_pt_bool_measureDist(contour.as_raw_Mat(), pt, measureDist);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_preCornerDetect_InputArray_src_OutputArray_dst_int_ksize_int_borderType
/// computes another complex cornerness criteria at each pixel
///
/// default value for arguments:
///   - borderType: default BORDER_DEFAULT
pub fn pre_corner_detect(src:& ::core::Mat, dst:& ::core::Mat, ksize: i32, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_preCornerDetect_InputArray_src_OutputArray_dst_int_ksize_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), ksize, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_pyrDown_InputArray_src_OutputArray_dst_Size_dstsize_int_borderType
/// smooths and downsamples the image
///
/// default value for arguments:
///   - dstsize: default Size()
///   - borderType: default BORDER_DEFAULT
pub fn pyr_down(src:& ::core::Mat, dst:& ::core::Mat, dstsize: ::core::Size, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_pyrDown_InputArray_src_OutputArray_dst_Size_dstsize_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), dstsize, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_pyrUp_InputArray_src_OutputArray_dst_Size_dstsize_int_borderType
/// upsamples and smoothes the image
///
/// default value for arguments:
///   - dstsize: default Size()
///   - borderType: default BORDER_DEFAULT
pub fn pyr_up(src:& ::core::Mat, dst:& ::core::Mat, dstsize: ::core::Size, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_pyrUp_InputArray_src_OutputArray_dst_Size_dstsize_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), dstsize, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_remap_InputArray_src_OutputArray_dst_InputArray_map1_InputArray_map2_int_interpolation_int_borderMode_Scalar_borderValue
/// warps the image using the precomputed maps. The maps are stored in either floating-point or integer fixed-point format
///
/// default value for arguments:
///   - borderMode: default BORDER_CONSTANT
///   - borderValue: default Scalar()
pub fn remap(src:& ::core::Mat, dst:& ::core::Mat, map1:& ::core::Mat, map2:& ::core::Mat, interpolation: i32, borderMode: i32, borderValue: ::core::Scalar) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_remap_InputArray_src_OutputArray_dst_InputArray_map1_InputArray_map2_int_interpolation_int_borderMode_Scalar_borderValue(src.as_raw_Mat(), dst.as_raw_Mat(), map1.as_raw_Mat(), map2.as_raw_Mat(), interpolation, borderMode, borderValue);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_resize_InputArray_src_OutputArray_dst_Size_dsize_double_fx_double_fy_int_interpolation
/// resizes the image
///
/// default value for arguments:
///   - fx: default 0
///   - fy: default 0
///   - interpolation: default INTER_LINEAR
pub fn resize(src:& ::core::Mat, dst:& ::core::Mat, dsize: ::core::Size, fx: f64, fy: f64, interpolation: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_resize_InputArray_src_OutputArray_dst_Size_dsize_double_fx_double_fy_int_interpolation(src.as_raw_Mat(), dst.as_raw_Mat(), dsize, fx, fy, interpolation);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_sepFilter2D_InputArray_src_OutputArray_dst_int_ddepth_InputArray_kernelX_InputArray_kernelY_Point_anchor_double_delta_int_borderType
/// applies separable 2D linear filter to the image
///
/// default value for arguments:
///   - anchor: default Point(-1,-1)
///   - delta: default 0
///   - borderType: default BORDER_DEFAULT
pub fn sep_filter2_d(src:& ::core::Mat, dst:& ::core::Mat, ddepth: i32, kernelX:& ::core::Mat, kernelY:& ::core::Mat, anchor: ::core::Point, delta: f64, borderType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_sepFilter2D_InputArray_src_OutputArray_dst_int_ddepth_InputArray_kernelX_InputArray_kernelY_Point_anchor_double_delta_int_borderType(src.as_raw_Mat(), dst.as_raw_Mat(), ddepth, kernelX.as_raw_Mat(), kernelY.as_raw_Mat(), anchor, delta, borderType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_threshold_InputArray_src_OutputArray_dst_double_thresh_double_maxval_int_type
/// applies fixed threshold to the image
pub fn threshold(src:& ::core::Mat, dst:& ::core::Mat, thresh: f64, maxval: f64, _type: i32) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_threshold_InputArray_src_OutputArray_dst_double_thresh_double_maxval_int_type(src.as_raw_Mat(), dst.as_raw_Mat(), thresh, maxval, _type);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_undistortPoints_InputArray_src_OutputArray_dst_InputArray_cameraMatrix_InputArray_distCoeffs_InputArray_R_InputArray_P
/// returns points' coordinates after lens distortion correction
///
/// default value for arguments:
///   - R: default noArray()
///   - P: default noArray()
pub fn undistort_points(src:& ::core::Mat, dst:& ::core::Mat, cameraMatrix:& ::core::Mat, distCoeffs:& ::core::Mat, R:& ::core::Mat, P:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_undistortPoints_InputArray_src_OutputArray_dst_InputArray_cameraMatrix_InputArray_distCoeffs_InputArray_R_InputArray_P(src.as_raw_Mat(), dst.as_raw_Mat(), cameraMatrix.as_raw_Mat(), distCoeffs.as_raw_Mat(), R.as_raw_Mat(), P.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_undistort_InputArray_src_OutputArray_dst_InputArray_cameraMatrix_InputArray_distCoeffs_InputArray_newCameraMatrix
/// corrects lens distortion for the given camera matrix and distortion coefficients
///
/// default value for arguments:
///   - newCameraMatrix: default noArray()
pub fn undistort(src:& ::core::Mat, dst:& ::core::Mat, cameraMatrix:& ::core::Mat, distCoeffs:& ::core::Mat, newCameraMatrix:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_undistort_InputArray_src_OutputArray_dst_InputArray_cameraMatrix_InputArray_distCoeffs_InputArray_newCameraMatrix(src.as_raw_Mat(), dst.as_raw_Mat(), cameraMatrix.as_raw_Mat(), distCoeffs.as_raw_Mat(), newCameraMatrix.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_warpAffine_InputArray_src_OutputArray_dst_InputArray_M_Size_dsize_int_flags_int_borderMode_Scalar_borderValue
/// warps the image using affine transformation
///
/// default value for arguments:
///   - flags: default INTER_LINEAR
///   - borderMode: default BORDER_CONSTANT
///   - borderValue: default Scalar()
pub fn warp_affine(src:& ::core::Mat, dst:& ::core::Mat, M:& ::core::Mat, dsize: ::core::Size, flags: i32, borderMode: i32, borderValue: ::core::Scalar) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_warpAffine_InputArray_src_OutputArray_dst_InputArray_M_Size_dsize_int_flags_int_borderMode_Scalar_borderValue(src.as_raw_Mat(), dst.as_raw_Mat(), M.as_raw_Mat(), dsize, flags, borderMode, borderValue);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_warpPerspective_InputArray_src_OutputArray_dst_InputArray_M_Size_dsize_int_flags_int_borderMode_Scalar_borderValue
/// warps the image using perspective transformation
///
/// default value for arguments:
///   - flags: default INTER_LINEAR
///   - borderMode: default BORDER_CONSTANT
///   - borderValue: default Scalar()
pub fn warp_perspective(src:& ::core::Mat, dst:& ::core::Mat, M:& ::core::Mat, dsize: ::core::Size, flags: i32, borderMode: i32, borderValue: ::core::Scalar) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_imgproc_cv_warpPerspective_InputArray_src_OutputArray_dst_InputArray_M_Size_dsize_int_flags_int_borderMode_Scalar_borderValue(src.as_raw_Mat(), dst.as_raw_Mat(), M.as_raw_Mat(), dsize, flags, borderMode, borderValue);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// Generating impl for trait cv::CLAHE
pub trait CLAHE : ::core::Algorithm {
  fn as_raw_CLAHE(&self) -> *mut c_void;
}


// boxed class cv::FilterEngine
#[allow(dead_code)]
pub struct FilterEngine {
    pub ptr: *mut c_void
}
impl Drop for ::imgproc::FilterEngine {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_FilterEngine(self.ptr) };
    }
}
impl ::imgproc::FilterEngine {
    pub fn as_raw_FilterEngine(&self) -> *mut c_void { self.ptr }
}
impl FilterEngine {

  // identifier: cv_FilterEngine_FilterEngine
  /// the default constructor
  pub fn new() -> Result<::imgproc::FilterEngine,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_FilterEngine_FilterEngine();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::imgproc::FilterEngine{ ptr: rv.result })
    }
  }

  // identifier: cv_FilterEngine_start_Size_wholeSize_Rect_roi_int_maxBufRows
  /// starts filtering of the specified ROI of an image of size wholeSize.
  ///
  /// default value for arguments:
  ///   - maxBufRows: default -1
  pub fn start_size(&mut self, wholeSize: ::core::Size, roi: ::core::Rect, maxBufRows: i32) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_FilterEngine_start_Size_wholeSize_Rect_roi_int_maxBufRows(self.as_raw_FilterEngine(), wholeSize, roi, maxBufRows);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_FilterEngine_start_Mat_src_Rect_srcRoi_bool_isolated_int_maxBufRows
  /// starts filtering of the specified ROI of the specified image.
  ///
  /// default value for arguments:
  ///   - srcRoi: default Rect(0,0,-1,-1)
  ///   - isolated: default false
  ///   - maxBufRows: default -1
  pub fn start_mat(&mut self, src:& ::core::Mat, srcRoi: ::core::Rect, isolated: bool, maxBufRows: i32) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_FilterEngine_start_Mat_src_Rect_srcRoi_bool_isolated_int_maxBufRows(self.as_raw_FilterEngine(), src.as_raw_Mat(), srcRoi, isolated, maxBufRows);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_FilterEngine_apply_Mat_src_Mat_dst_Rect_srcRoi_Point_dstOfs_bool_isolated
  /// applies filter to the specified ROI of the image. if srcRoi=(0,0,-1,-1), the whole image is filtered.
  ///
  /// default value for arguments:
  ///   - srcRoi: default Rect(0,0,-1,-1)
  ///   - dstOfs: default Point(0,0)
  ///   - isolated: default false
  pub fn apply(&mut self, src:& ::core::Mat, dst:& ::core::Mat, srcRoi: ::core::Rect, dstOfs: ::core::Point, isolated: bool) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_FilterEngine_apply_Mat_src_Mat_dst_Rect_srcRoi_Point_dstOfs_bool_isolated(self.as_raw_FilterEngine(), src.as_raw_Mat(), dst.as_raw_Mat(), srcRoi, dstOfs, isolated);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_FilterEngine_isSeparable
  /// returns true if the filter is separable
  pub fn is_separable(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_FilterEngine_isSeparable(self.as_raw_FilterEngine());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_FilterEngine_remainingInputRows
  /// returns the number
  pub fn remaining_input_rows(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_FilterEngine_remainingInputRows(self.as_raw_FilterEngine());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_FilterEngine_remainingOutputRows
  pub fn remaining_output_rows(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_FilterEngine_remainingOutputRows(self.as_raw_FilterEngine());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}
// Generating impl for trait cv::GeneralizedHough
pub trait GeneralizedHough : ::core::Algorithm {
  fn as_raw_GeneralizedHough(&self) -> *mut c_void;
  // identifier: cv_GeneralizedHough_create_int_method
  fn create(&mut self, method: i32) -> Result<::types::PtrOfGeneralizedHough,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_GeneralizedHough_create_int_method(self.as_raw_GeneralizedHough(), method);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::types::PtrOfGeneralizedHough{ ptr: rv.result })
    }
  }

  // identifier: cv_GeneralizedHough_setTemplate_InputArray_edges_InputArray_dx_InputArray_dy_Point_templCenter
  ///
  /// default value for arguments:
  ///   - templCenter: default Point(-1, -1)
  fn set_template(&mut self, edges:& ::core::Mat, dx:& ::core::Mat, dy:& ::core::Mat, templCenter: ::core::Point) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_GeneralizedHough_setTemplate_InputArray_edges_InputArray_dx_InputArray_dy_Point_templCenter(self.as_raw_GeneralizedHough(), edges.as_raw_Mat(), dx.as_raw_Mat(), dy.as_raw_Mat(), templCenter);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_GeneralizedHough_detect_InputArray_image_OutputArray_positions_OutputArray_votes_int_cannyThreshold
  /// find template on image
  ///
  /// default value for arguments:
  ///   - votes: default cv::noArray()
  ///   - cannyThreshold: default 100
  fn detect(&mut self, image:& ::core::Mat, positions:& ::core::Mat, votes:& ::core::Mat, cannyThreshold: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_GeneralizedHough_detect_InputArray_image_OutputArray_positions_OutputArray_votes_int_cannyThreshold(self.as_raw_GeneralizedHough(), image.as_raw_Mat(), positions.as_raw_Mat(), votes.as_raw_Mat(), cannyThreshold);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_GeneralizedHough_detect_InputArray_edges_InputArray_dx_InputArray_dy_OutputArray_positions_OutputArray_votes
  ///
  /// default value for arguments:
  ///   - votes: default cv::noArray()
  fn detect_edges(&mut self, edges:& ::core::Mat, dx:& ::core::Mat, dy:& ::core::Mat, positions:& ::core::Mat, votes:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_GeneralizedHough_detect_InputArray_edges_InputArray_dx_InputArray_dy_OutputArray_positions_OutputArray_votes(self.as_raw_GeneralizedHough(), edges.as_raw_Mat(), dx.as_raw_Mat(), dy.as_raw_Mat(), positions.as_raw_Mat(), votes.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_GeneralizedHough_release
  fn release(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_GeneralizedHough_release(self.as_raw_GeneralizedHough());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

}

impl Moments {

  // identifier: cv_Moments_Moments
  /// the default constructor
  pub fn default() -> Result<::imgproc::Moments,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Moments_Moments();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Moments_Moments_double_m00_double_m10_double_m01_double_m20_double_m11_double_m02_double_m30_double_m21_double_m12_double_m03
  /// the full constructor
  pub fn new(m00: f64, m10: f64, m01: f64, m20: f64, m11: f64, m02: f64, m30: f64, m21: f64, m12: f64, m03: f64) -> Result<::imgproc::Moments,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Moments_Moments_double_m00_double_m10_double_m01_double_m20_double_m11_double_m02_double_m30_double_m21_double_m12_double_m03(m00, m10, m01, m20, m11, m02, m30, m21, m12, m03);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::Subdiv2D
#[allow(dead_code)]
pub struct Subdiv2D {
    pub ptr: *mut c_void
}
impl Drop for ::imgproc::Subdiv2D {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_Subdiv2D(self.ptr) };
    }
}
impl ::imgproc::Subdiv2D {
    pub fn as_raw_Subdiv2D(&self) -> *mut c_void { self.ptr }
}
impl Subdiv2D {

  // identifier: cv_Subdiv2D_Subdiv2D
  pub fn default() -> Result<::imgproc::Subdiv2D,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Subdiv2D_Subdiv2D();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::imgproc::Subdiv2D{ ptr: rv.result })
    }
  }

  // identifier: cv_Subdiv2D_Subdiv2D_Rect_rect
  pub fn new(rect: ::core::Rect) -> Result<::imgproc::Subdiv2D,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Subdiv2D_Subdiv2D_Rect_rect(rect);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::imgproc::Subdiv2D{ ptr: rv.result })
    }
  }

  // identifier: cv_Subdiv2D_initDelaunay_Rect_rect
  pub fn init_delaunay(&mut self, rect: ::core::Rect) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Subdiv2D_initDelaunay_Rect_rect(self.as_raw_Subdiv2D(), rect);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Subdiv2D_insert_Point2f_pt
  pub fn insert(&mut self, pt: ::core::Point2f) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Subdiv2D_insert_Point2f_pt(self.as_raw_Subdiv2D(), pt);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Subdiv2D_insert_VectorOfPoint2f_ptvec
  pub fn insert_n(&mut self, ptvec:& ::types::VectorOfPoint2f) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Subdiv2D_insert_VectorOfPoint2f_ptvec(self.as_raw_Subdiv2D(), ptvec.as_raw_VectorOfPoint2f());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Subdiv2D_locate_Point2f_pt_int_edge_int_vertex
  pub fn locate(&mut self, pt: ::core::Point2f, edge: i32, vertex: i32) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Subdiv2D_locate_Point2f_pt_int_edge_int_vertex(self.as_raw_Subdiv2D(), pt, edge, vertex);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Subdiv2D_getEdgeList_VectorOfVec4f_edgeList
  pub fn get_edge_list(&self, edgeList:& ::types::VectorOfVec4f) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Subdiv2D_getEdgeList_VectorOfVec4f_edgeList(self.as_raw_Subdiv2D(), edgeList.as_raw_VectorOfVec4f());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Subdiv2D_getTriangleList_VectorOfVec6f_triangleList
  pub fn get_triangle_list(&self, triangleList:& ::types::VectorOfVec6f) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Subdiv2D_getTriangleList_VectorOfVec6f_triangleList(self.as_raw_Subdiv2D(), triangleList.as_raw_VectorOfVec6f());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Subdiv2D_getVoronoiFacetList_VectorOfint_idx_VectorOfVectorOfPoint2f_facetList_VectorOfPoint2f_facetCenters
  pub fn get_voronoi_facet_list(&mut self, idx:& ::types::VectorOfint, facetList:& ::types::VectorOfVectorOfPoint2f, facetCenters:& ::types::VectorOfPoint2f) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Subdiv2D_getVoronoiFacetList_VectorOfint_idx_VectorOfVectorOfPoint2f_facetList_VectorOfPoint2f_facetCenters(self.as_raw_Subdiv2D(), idx.as_raw_VectorOfint(), facetList.as_raw_VectorOfVectorOfPoint2f(), facetCenters.as_raw_VectorOfPoint2f());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Subdiv2D_getEdge_int_edge_int_nextEdgeType
  pub fn get_edge(&self, edge: i32, nextEdgeType: i32) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Subdiv2D_getEdge_int_edge_int_nextEdgeType(self.as_raw_Subdiv2D(), edge, nextEdgeType);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Subdiv2D_nextEdge_int_edge
  pub fn next_edge(&self, edge: i32) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Subdiv2D_nextEdge_int_edge(self.as_raw_Subdiv2D(), edge);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Subdiv2D_rotateEdge_int_edge_int_rotate
  pub fn rotate_edge(&self, edge: i32, rotate: i32) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Subdiv2D_rotateEdge_int_edge_int_rotate(self.as_raw_Subdiv2D(), edge, rotate);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Subdiv2D_symEdge_int_edge
  pub fn sym_edge(&self, edge: i32) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_imgproc_cv_Subdiv2D_symEdge_int_edge(self.as_raw_Subdiv2D(), edge);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}
