
use libc::{ c_void, c_char, size_t };
use std::ffi::{ CStr, CString };
pub const CMP_EQ:i32 = 0;
pub const CMP_GE:i32 = 2;
pub const CMP_GT:i32 = 1;
pub const CMP_LE:i32 = 4;
pub const CMP_LT:i32 = 3;
pub const CMP_NE:i32 = 5;
pub const COVAR_COLS:i32 = 16;
pub const COVAR_NORMAL:i32 = 1;
pub const COVAR_ROWS:i32 = 8;
pub const COVAR_SCALE:i32 = 4;
pub const COVAR_SCRAMBLED:i32 = 0;
pub const COVAR_USE_AVG:i32 = 2;
pub const CV_16S:i32 = 3;
pub const CV_16U:i32 = 2;
pub const CV_32F:i32 = 5;
pub const CV_32S:i32 = 4;
pub const CV_64F:i32 = 6;
pub const CV_8S:i32 = 1;
pub const CV_8U:i32 = 0;
pub const CV_BadAlign:i32 = -21;
pub const CV_BadAlphaChannel:i32 = -18;
pub const CV_BadCOI:i32 = -24;
pub const CV_BadCallBack:i32 = -22;
pub const CV_BadDataPtr:i32 = -12;
pub const CV_BadDepth:i32 = -17;
pub const CV_BadImageSize:i32 = -10;
pub const CV_BadModelOrChSeq:i32 = -14;
pub const CV_BadNumChannel1U:i32 = -16;
pub const CV_BadNumChannels:i32 = -15;
pub const CV_BadOffset:i32 = -11;
pub const CV_BadOrder:i32 = -19;
pub const CV_BadOrigin:i32 = -20;
pub const CV_BadROISize:i32 = -25;
pub const CV_BadStep:i32 = -13;
pub const CV_BadTileSize:i32 = -23;
pub const CV_CN_MAX:i32 = 512;
pub const CV_CN_SHIFT:i32 = 3;
pub const CV_GpuApiCallError:i32 = -217;
pub const CV_GpuNotSupported:i32 = -216;
pub const CV_HIST_ARRAY:i32 = 0;
pub const CV_HIST_MAGIC_VAL:i32 = 0x42450000;
pub const CV_HIST_SPARSE:i32 = 1;
pub const CV_HIST_UNIFORM:i32 = 1;
pub const CV_HeaderIsNull:i32 = -9;
pub const CV_MAGIC_MASK:i32 = 0xFFFF0000;
pub const CV_MATND_MAGIC_VAL:i32 = 0x42430000;
pub const CV_MAT_CONT_FLAG_SHIFT:i32 = 14;
pub const CV_MAT_MAGIC_VAL:i32 = 0x42420000;
pub const CV_MAX_DIM:i32 = 32;
pub const CV_MAX_DIM_HEAP:i32 = 1024;
pub const CV_MaskIsTiled:i32 = -26;
pub const CV_NODE_EMPTY:i32 = 32;
pub const CV_NODE_INT:i32 = 1;
pub const CV_NODE_MAP:i32 = 6;
pub const CV_NODE_NAMED:i32 = 64;
pub const CV_NODE_NONE:i32 = 0;
pub const CV_NODE_REAL:i32 = 2;
pub const CV_NODE_SEQ:i32 = 5;
pub const CV_NODE_SEQ_SIMPLE:i32 = 256;
pub const CV_NODE_STR:i32 = 3;
pub const CV_NODE_TYPE_MASK:i32 = 7;
pub const CV_NODE_USER:i32 = 16;
pub const CV_OpenCLDoubleNotSupported:i32 = -220;
pub const CV_OpenCLInitError:i32 = -221;
pub const CV_OpenCLNoAMDBlasFft:i32 = -222;
pub const CV_OpenGlApiCallError:i32 = -219;
pub const CV_OpenGlNotSupported:i32 = -218;
pub const CV_SEQ_ELTYPE_BITS:i32 = 12;
pub const CV_SEQ_ELTYPE_GENERIC:i32 = 0;
pub const CV_SEQ_KIND_BITS:i32 = 2;
pub const CV_SEQ_MAGIC_VAL:i32 = 0x42990000;
pub const CV_SET_MAGIC_VAL:i32 = 0x42980000;
pub const CV_SPARSE_MAT_MAGIC_VAL:i32 = 0x42440000;
pub const CV_STORAGE_APPEND:i32 = 2;
pub const CV_STORAGE_FORMAT_AUTO:i32 = 0;
pub const CV_STORAGE_FORMAT_XML:i32 = 8;
pub const CV_STORAGE_FORMAT_YAML:i32 = 16;
pub const CV_STORAGE_MAGIC_VAL:i32 = 0x42890000;
pub const CV_STORAGE_MEMORY:i32 = 4;
pub const CV_STORAGE_READ:i32 = 0;
pub const CV_STORAGE_WRITE:i32 = 1;
pub const CV_SUBMAT_FLAG_SHIFT:i32 = 15;
pub const CV_StsAssert:i32 = -215;
pub const CV_StsAutoTrace:i32 = -8;
pub const CV_StsBackTrace:i32 = -1;
pub const CV_StsBadArg:i32 = -5;
pub const CV_StsBadFlag:i32 = -206;
pub const CV_StsBadFunc:i32 = -6;
pub const CV_StsBadMask:i32 = -208;
pub const CV_StsBadMemBlock:i32 = -214;
pub const CV_StsBadPoint:i32 = -207;
pub const CV_StsBadSize:i32 = -201;
pub const CV_StsDivByZero:i32 = -202;
pub const CV_StsError:i32 = -2;
pub const CV_StsFilterOffsetErr:i32 = -31;
pub const CV_StsFilterStructContentErr:i32 = -29;
pub const CV_StsInplaceNotSupported:i32 = -203;
pub const CV_StsInternal:i32 = -3;
pub const CV_StsKernelStructContentErr:i32 = -30;
pub const CV_StsNoConv:i32 = -7;
pub const CV_StsNoMem:i32 = -4;
pub const CV_StsNotImplemented:i32 = -213;
pub const CV_StsNullPtr:i32 = -27;
pub const CV_StsObjectNotFound:i32 = -204;
pub const CV_StsOk:i32 = 0;
pub const CV_StsOutOfRange:i32 = -211;
pub const CV_StsParseError:i32 = -212;
pub const CV_StsUnmatchedFormats:i32 = -205;
pub const CV_StsUnmatchedSizes:i32 = -209;
pub const CV_StsUnsupportedFormat:i32 = -210;
pub const CV_StsVecLengthErr:i32 = -28;
pub const CV_TERMCRIT_EPS:i32 = 2;
pub const CV_TERMCRIT_ITER:i32 = 1;
pub const CV_TYPE_NAME_GRAPH:&'static str = "opencv-graph";
pub const CV_TYPE_NAME_MAT:&'static str = "opencv-matrix";
pub const CV_TYPE_NAME_MATND:&'static str = "opencv-nd-matrix";
pub const CV_TYPE_NAME_SEQ:&'static str = "opencv-sequence";
pub const CV_TYPE_NAME_SEQ_TREE:&'static str = "opencv-sequence-tree";
pub const CV_TYPE_NAME_SPARSE_MAT:&'static str = "opencv-sparse-matrix";
pub const CV_USRTYPE1:i32 = 7;
pub const DECOMP_CHOLESKY:i32 = 3;
pub const DECOMP_EIG:i32 = 2;
pub const DECOMP_LU:i32 = 0;
pub const DECOMP_NORMAL:i32 = 16;
pub const DECOMP_QR:i32 = 4;
pub const DECOMP_SVD:i32 = 1;
pub const DEPTH_MASK:i32 = 7;
pub const DFT_COMPLEX_OUTPUT:i32 = 16;
pub const DFT_INVERSE:i32 = 1;
pub const DFT_REAL_OUTPUT:i32 = 32;
pub const DFT_ROWS:i32 = 4;
pub const DFT_SCALE:i32 = 2;
pub const FONT_HERSHEY_COMPLEX:i32 = 3;
pub const FONT_HERSHEY_COMPLEX_SMALL:i32 = 5;
pub const FONT_HERSHEY_DUPLEX:i32 = 2;
pub const FONT_HERSHEY_PLAIN:i32 = 1;
pub const FONT_HERSHEY_SCRIPT_COMPLEX:i32 = 7;
pub const FONT_HERSHEY_SCRIPT_SIMPLEX:i32 = 6;
pub const FONT_HERSHEY_SIMPLEX:i32 = 0;
pub const FONT_HERSHEY_TRIPLEX:i32 = 4;
pub const FONT_ITALIC:i32 = 16;
pub const FileNode_EMPTY:i32 = 32;
pub const FileNode_FLOW:i32 = 8;
pub const FileNode_INT:i32 = 1;
pub const FileNode_MAP:i32 = 6;
pub const FileNode_NAMED:i32 = 64;
pub const FileNode_REAL:i32 = 2;
pub const FileNode_REF:i32 = 4;
pub const FileNode_SEQ:i32 = 5;
pub const FileNode_STR:i32 = 3;
pub const FileNode_USER:i32 = 16;
pub const FileStorage_APPEND:i32 = 2;
pub const FileStorage_FORMAT_AUTO:i32 = 0;
pub const FileStorage_INSIDE_MAP:i32 = 4;
pub const FileStorage_MEMORY:i32 = 4;
pub const FileStorage_NAME_EXPECTED:i32 = 2;
pub const FileStorage_READ:i32 = 0;
pub const FileStorage_UNDEFINED:i32 = 0;
pub const FileStorage_VALUE_EXPECTED:i32 = 1;
pub const FileStorage_WRITE:i32 = 1;
pub const GEMM_1_T:i32 = 1;
pub const GEMM_2_T:i32 = 2;
pub const GEMM_3_T:i32 = 4;
pub const IPL_ALIGN_16BYTES:i32 = 16;
pub const IPL_ALIGN_32BYTES:i32 = 32;
pub const IPL_ALIGN_4BYTES:i32 = 4;
pub const IPL_ALIGN_8BYTES:i32 = 8;
pub const IPL_BORDER_CONSTANT:i32 = 0;
pub const IPL_BORDER_REFLECT:i32 = 2;
pub const IPL_BORDER_REFLECT_101:i32 = 4;
pub const IPL_BORDER_REPLICATE:i32 = 1;
pub const IPL_BORDER_TRANSPARENT:i32 = 5;
pub const IPL_BORDER_WRAP:i32 = 3;
pub const IPL_DATA_ORDER_PIXEL:i32 = 0;
pub const IPL_DATA_ORDER_PLANE:i32 = 1;
pub const IPL_DEPTH_16U:i32 = 16;
pub const IPL_DEPTH_1U:i32 = 1;
pub const IPL_DEPTH_32F:i32 = 32;
pub const IPL_DEPTH_64F:i32 = 64;
pub const IPL_DEPTH_8U:i32 = 8;
pub const IPL_DEPTH_SIGN:i32 = 0x80000000;
pub const IPL_IMAGE_DATA:i32 = 2;
pub const IPL_IMAGE_HEADER:i32 = 1;
pub const IPL_IMAGE_ROI:i32 = 4;
pub const IPL_ORIGIN_BL:i32 = 1;
pub const IPL_ORIGIN_TL:i32 = 0;
pub const KMEANS_PP_CENTERS:i32 = 2;
pub const KMEANS_RANDOM_CENTERS:i32 = 0;
pub const KMEANS_USE_INITIAL_LABELS:i32 = 1;
pub const MAGIC_MASK:i32 = 0xFFFF0000;
pub const MARKER_CROSS:i32 = 0;
pub const MARKER_DIAMOND:i32 = 3;
pub const MARKER_SQUARE:i32 = 4;
pub const MARKER_STAR:i32 = 2;
pub const MARKER_TILTED_CROSS:i32 = 1;
pub const MARKER_TRIANGLE_DOWN:i32 = 6;
pub const MARKER_TRIANGLE_UP:i32 = 5;
pub const Mat_AUTO_STEP:i32 = 0;
pub const Mat_MAGIC_VAL:i32 = 0x42FF0000;
pub const NORM_HAMMING:i32 = 6;
pub const NORM_HAMMING2:i32 = 7;
pub const NORM_INF:i32 = 1;
pub const NORM_L1:i32 = 2;
pub const NORM_L2:i32 = 4;
pub const NORM_L2SQR:i32 = 5;
pub const NORM_MINMAX:i32 = 32;
pub const NORM_RELATIVE:i32 = 8;
pub const NORM_TYPE_MASK:i32 = 7;
pub const Param_ALGORITHM:i32 = 6;
pub const Param_BOOLEAN:i32 = 1;
pub const Param_MAT_VECTOR:i32 = 5;
pub const Param_SHORT:i32 = 10;
pub const Param_UCHAR:i32 = 11;
pub const Param_UINT64:i32 = 9;
pub const Param_UNSIGNED_INT:i32 = 8;
pub const RNG_NORMAL:i32 = 1;
pub const RNG_UNIFORM:i32 = 0;
pub const SORT_ASCENDING:i32 = 0;
pub const SORT_DESCENDING:i32 = 16;
pub const SORT_EVERY_COLUMN:i32 = 1;
pub const SORT_EVERY_ROW:i32 = 0;
pub const SVD_FULL_UV:i32 = 4;
pub const SVD_MODIFY_A:i32 = 1;
pub const SVD_NO_UV:i32 = 2;
pub const SparseMat_HASH_BIT:i32 = 0x80000000;
pub const TYPE_MASK:i32 = 0x00000FFF;
pub const TermCriteria_COUNT:i32 = 1;
pub const TermCriteria_EPS:i32 = 2;
pub const _InputArray_KIND_SHIFT:i32 = 16;

include!(concat!(env!("OUT_DIR"), "/core.consts.rs"));

// manually defined value struct CvRNG
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct CvRNG {
    pub data: i64,
}

// manually defined value struct Point2f
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Point2f {
    pub x: f32,
    pub y: f32,
}

// manually defined value struct Point2d
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Point2d {
    pub x: f64,
    pub y: f64,
}

// manually defined value struct Point
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Point {
    pub x: i32,
    pub y: i32,
}

// manually defined value struct Rect
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Rect {
    pub x: i32,
    pub y: i32,
    pub width: i32,
    pub height: i32,
}

// manually defined value struct Size2f
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Size2f {
    pub width: f32,
    pub height: f32,
}

// manually defined value struct Scalar
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Scalar {
    pub data: [f64;4],
}

// manually defined value struct Size
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Size {
    pub width: i32,
    pub height: i32,
}

// manually defined value struct Vec6f
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec6f {
    pub data: [f32;6],
}

// manually defined value struct Vec4f
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec4f {
    pub data: [f32;4],
}

// manually defined value struct Vec4d
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec4d {
    pub data: [f64;4],
}

// manually defined value struct Vec4b
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec4b {
    pub data: [u8;4],
}

// manually defined value struct Vec4i
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec4i {
    pub data: [i32;4],
}

// manually defined value struct Vec4s
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec4s {
    pub data: [u16;4],
}

// manually defined value struct Vec6i
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec6i {
    pub data: [i32;6],
}

// manually defined value struct Vec6b
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec6b {
    pub data: [u8;6],
}

// manually defined value struct Vec3s
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec3s {
    pub data: [u16;3],
}

// manually defined value struct Vec2s
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec2s {
    pub data: [u16;2],
}

// manually defined value struct Vec6s
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec6s {
    pub data: [u16;6],
}

// manually defined value struct Vec3d
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec3d {
    pub data: [f64;3],
}

// manually defined value struct Vec3f
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec3f {
    pub data: [f32;3],
}

// manually defined value struct Vec2d
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec2d {
    pub data: [f64;2],
}

// manually defined value struct Vec2f
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec2f {
    pub data: [f32;2],
}

// manually defined value struct Vec3b
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec3b {
    pub data: [u8;3],
}

// manually defined value struct Vec2b
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec2b {
    pub data: [u8;2],
}

// manually defined value struct Vec3i
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec3i {
    pub data: [i32;3],
}

// manually defined value struct Vec2i
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec2i {
    pub data: [i32;2],
}

// manually defined value struct Vec6d
#[repr(C)]
#[derive(Copy,Clone,Debug,PartialEq)]
pub struct Vec6d {
    pub data: [f64;6],
}

// identifier: cvCeil_double_value
pub fn cv_ceil(value: f64) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_core_cvCeil_double_value(value);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cvFloor_double_value
pub fn cv_floor(value: f64) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_core_cvFloor_double_value(value);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cvIplDepth_int_type
pub fn cv_ipl_depth(_type: i32) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_core_cvIplDepth_int_type(_type);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cvIsInf_double_value
pub fn cv_is_inf(value: f64) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_core_cvIsInf_double_value(value);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cvIsNaN_double_value
pub fn cv_is_na_n(value: f64) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_core_cvIsNaN_double_value(value);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cvRNG_int64_seed
///
/// default value for arguments:
///   - seed: default -1
pub fn cv_rng(seed: i64) -> Result<::core::CvRNG,String> {
  unsafe {
    let rv = ::sys::cv_core_cvRNG_int64_seed(seed);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cvRound_double_value
pub fn cv_round(value: f64) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_core_cvRound_double_value(value);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_LUT_InputArray_src_InputArray_lut_OutputArray_dst_int_interpolation
/// transforms array of numbers using a lookup table: dst(i)=lut(src(i))
///
/// default value for arguments:
///   - interpolation: default 0
pub fn lut(src:& ::core::Mat, lut:& ::core::Mat, dst:& ::core::Mat, interpolation: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_LUT_InputArray_src_InputArray_lut_OutputArray_dst_int_interpolation(src.as_raw_Mat(), lut.as_raw_Mat(), dst.as_raw_Mat(), interpolation);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_Mahalanobis_InputArray_v1_InputArray_v2_InputArray_icovar
/// computes Mahalanobis distance between two vectors: sqrt((v1-v2)'*icovar*(v1-v2)), where icovar is the inverse covariation matrix
pub fn mahalanobis(v1:& ::core::Mat, v2:& ::core::Mat, icovar:& ::core::Mat) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_Mahalanobis_InputArray_v1_InputArray_v2_InputArray_icovar(v1.as_raw_Mat(), v2.as_raw_Mat(), icovar.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_Mahalonobis_InputArray_v1_InputArray_v2_InputArray_icovar
/// a synonym for Mahalanobis
pub fn mahalonobis(v1:& ::core::Mat, v2:& ::core::Mat, icovar:& ::core::Mat) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_Mahalonobis_InputArray_v1_InputArray_v2_InputArray_icovar(v1.as_raw_Mat(), v2.as_raw_Mat(), icovar.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_PCABackProject_InputArray_data_InputArray_mean_InputArray_eigenvectors_OutputArray_result
pub fn pca_back_project(data:& ::core::Mat, mean:& ::core::Mat, eigenvectors:& ::core::Mat, result:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_PCABackProject_InputArray_data_InputArray_mean_InputArray_eigenvectors_OutputArray_result(data.as_raw_Mat(), mean.as_raw_Mat(), eigenvectors.as_raw_Mat(), result.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_PCAProject_InputArray_data_InputArray_mean_InputArray_eigenvectors_OutputArray_result
pub fn pca_project(data:& ::core::Mat, mean:& ::core::Mat, eigenvectors:& ::core::Mat, result:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_PCAProject_InputArray_data_InputArray_mean_InputArray_eigenvectors_OutputArray_result(data.as_raw_Mat(), mean.as_raw_Mat(), eigenvectors.as_raw_Mat(), result.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_SVBackSubst_InputArray_w_InputArray_u_InputArray_vt_InputArray_rhs_OutputArray_dst
/// performs back substitution for the previously computed SVD
pub fn sv_back_subst(w:& ::core::Mat, u:& ::core::Mat, vt:& ::core::Mat, rhs:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_SVBackSubst_InputArray_w_InputArray_u_InputArray_vt_InputArray_rhs_OutputArray_dst(w.as_raw_Mat(), u.as_raw_Mat(), vt.as_raw_Mat(), rhs.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_SVDecomp_InputArray_src_OutputArray_w_OutputArray_u_OutputArray_vt_int_flags
/// computes SVD of src
///
/// default value for arguments:
///   - flags: default 0
pub fn sv_decomp(src:& ::core::Mat, w:& ::core::Mat, u:& ::core::Mat, vt:& ::core::Mat, flags: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_SVDecomp_InputArray_src_OutputArray_w_OutputArray_u_OutputArray_vt_int_flags(src.as_raw_Mat(), w.as_raw_Mat(), u.as_raw_Mat(), vt.as_raw_Mat(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_absdiff_InputArray_src1_InputArray_src2_OutputArray_dst
/// computes element-wise absolute difference of two arrays (dst = abs(src1 - src2))
pub fn absdiff(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_absdiff_InputArray_src1_InputArray_src2_OutputArray_dst(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_addWeighted_InputArray_src1_double_alpha_InputArray_src2_double_beta_double_gamma_OutputArray_dst_int_dtype
/// computes weighted sum of two arrays (dst = alpha*src1 + beta*src2 + gamma)
///
/// default value for arguments:
///   - dtype: default -1
pub fn add_weighted(src1:& ::core::Mat, alpha: f64, src2:& ::core::Mat, beta: f64, gamma: f64, dst:& ::core::Mat, dtype: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_addWeighted_InputArray_src1_double_alpha_InputArray_src2_double_beta_double_gamma_OutputArray_dst_int_dtype(src1.as_raw_Mat(), alpha, src2.as_raw_Mat(), beta, gamma, dst.as_raw_Mat(), dtype);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_add_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask_int_dtype
/// adds one matrix to another (dst = src1 + src2)
///
/// default value for arguments:
///   - mask: default noArray()
///   - dtype: default -1
pub fn add(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat, mask:& ::core::Mat, dtype: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_add_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask_int_dtype(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat(), mask.as_raw_Mat(), dtype);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_alignSize_size_t_sz_int_n
/// Aligns buffer size by the certain number of bytes
/// 
/// This small inline function aligns a buffer size by the certian number of bytes by enlarging it.
pub fn align_size(sz: size_t, n: i32) -> Result<size_t,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_alignSize_size_t_sz_int_n(sz, n);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_arrowedLine_Mat_img_Point_pt1_Point_pt2_Scalar_color_int_thickness_int_line_type_int_shift_double_tipLength
/// draws an arrow from pt1 to pt2 in the image
///
/// default value for arguments:
///   - thickness: default 1
///   - line_type: default 8
///   - shift: default 0
///   - tipLength: default 0.1
pub fn arrowed_line(img:& ::core::Mat, pt1: ::core::Point, pt2: ::core::Point, color: ::core::Scalar, thickness: i32, line_type: i32, shift: i32, tipLength: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_arrowedLine_Mat_img_Point_pt1_Point_pt2_Scalar_color_int_thickness_int_line_type_int_shift_double_tipLength(img.as_raw_Mat(), pt1, pt2, color, thickness, line_type, shift, tipLength);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_batchDistance_InputArray_src1_InputArray_src2_OutputArray_dist_int_dtype_OutputArray_nidx_int_normType_int_K_InputArray_mask_int_update_bool_crosscheck
/// naive nearest neighbor finder
///
/// default value for arguments:
///   - normType: default NORM_L2
///   - K: default 0
///   - mask: default noArray()
///   - update: default 0
///   - crosscheck: default false
pub fn batch_distance(src1:& ::core::Mat, src2:& ::core::Mat, dist:& ::core::Mat, dtype: i32, nidx:& ::core::Mat, normType: i32, K: i32, mask:& ::core::Mat, update: i32, crosscheck: bool) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_batchDistance_InputArray_src1_InputArray_src2_OutputArray_dist_int_dtype_OutputArray_nidx_int_normType_int_K_InputArray_mask_int_update_bool_crosscheck(src1.as_raw_Mat(), src2.as_raw_Mat(), dist.as_raw_Mat(), dtype, nidx.as_raw_Mat(), normType, K, mask.as_raw_Mat(), update, crosscheck);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_bitwise_and_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask
/// computes bitwise conjunction of the two arrays (dst = src1 & src2)
///
/// default value for arguments:
///   - mask: default noArray()
pub fn bitwise_and(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat, mask:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_bitwise_and_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat(), mask.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_bitwise_not_InputArray_src_OutputArray_dst_InputArray_mask
/// inverts each bit of array (dst = ~src)
///
/// default value for arguments:
///   - mask: default noArray()
pub fn bitwise_not(src:& ::core::Mat, dst:& ::core::Mat, mask:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_bitwise_not_InputArray_src_OutputArray_dst_InputArray_mask(src.as_raw_Mat(), dst.as_raw_Mat(), mask.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_bitwise_or_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask
/// computes bitwise disjunction of the two arrays (dst = src1 | src2)
///
/// default value for arguments:
///   - mask: default noArray()
pub fn bitwise_or(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat, mask:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_bitwise_or_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat(), mask.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_bitwise_xor_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask
/// computes bitwise exclusive-or of the two arrays (dst = src1 ^ src2)
///
/// default value for arguments:
///   - mask: default noArray()
pub fn bitwise_xor(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat, mask:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_bitwise_xor_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat(), mask.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_calcCovarMatrix_Mat_samples_int_nsamples_Mat_covar_Mat_mean_int_flags_int_ctype
/// computes covariation matrix of a set of samples
///
/// default value for arguments:
///   - ctype: default CV_64F
pub fn calc_covar_matrix(samples:& ::core::Mat, nsamples: i32, covar:& ::core::Mat, mean:& ::core::Mat, flags: i32, ctype: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_calcCovarMatrix_Mat_samples_int_nsamples_Mat_covar_Mat_mean_int_flags_int_ctype(samples.as_raw_Mat(), nsamples, covar.as_raw_Mat(), mean.as_raw_Mat(), flags, ctype);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_cartToPolar_InputArray_x_InputArray_y_OutputArray_magnitude_OutputArray_angle_bool_angleInDegrees
/// converts Cartesian coordinates to polar
///
/// default value for arguments:
///   - angleInDegrees: default false
pub fn cart_to_polar(x:& ::core::Mat, y:& ::core::Mat, magnitude:& ::core::Mat, angle:& ::core::Mat, angleInDegrees: bool) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_cartToPolar_InputArray_x_InputArray_y_OutputArray_magnitude_OutputArray_angle_bool_angleInDegrees(x.as_raw_Mat(), y.as_raw_Mat(), magnitude.as_raw_Mat(), angle.as_raw_Mat(), angleInDegrees);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_checkHardwareSupport_int_feature
/// Returns SSE etc. support status
/// 
/// The function returns true if certain hardware features are available.
/// Currently, the following features are recognized:
/// - CV_CPU_MMX - MMX
/// - CV_CPU_SSE - SSE
/// - CV_CPU_SSE2 - SSE 2
/// - CV_CPU_SSE3 - SSE 3
/// - CV_CPU_SSSE3 - SSSE 3
/// - CV_CPU_SSE4_1 - SSE 4.1
/// - CV_CPU_SSE4_2 - SSE 4.2
/// - CV_CPU_POPCNT - POPCOUNT
/// - CV_CPU_AVX - AVX
/// - CV_CPU_AVX2 - AVX2
/// 
/// \note {Note that the function output is not static. Once you called cv::useOptimized(false),
/// most of the hardware acceleration is disabled and thus the function will returns false,
/// until you call cv::useOptimized(true)}
pub fn check_hardware_support(feature: i32) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_checkHardwareSupport_int_feature(feature);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_circle_Mat_img_Point_center_int_radius_Scalar_color_int_thickness_int_lineType_int_shift
/// draws the circle outline or a solid circle in the image
///
/// default value for arguments:
///   - thickness: default 1
///   - lineType: default 8
///   - shift: default 0
pub fn circle(img:& ::core::Mat, center: ::core::Point, radius: i32, color: ::core::Scalar, thickness: i32, lineType: i32, shift: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_circle_Mat_img_Point_center_int_radius_Scalar_color_int_thickness_int_lineType_int_shift(img.as_raw_Mat(), center, radius, color, thickness, lineType, shift);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_clipLine_Rect_imgRect_Point_pt1_Point_pt2
/// clips the line segment by the rectangle imgRect
pub fn clip_line(imgRect: ::core::Rect, pt1: ::core::Point, pt2: ::core::Point) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_clipLine_Rect_imgRect_Point_pt1_Point_pt2(imgRect, pt1, pt2);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_clipLine_Size_imgSize_Point_pt1_Point_pt2
/// clips the line segment by the rectangle Rect(0, 0, imgSize.width, imgSize.height)
pub fn clip_line_size(imgSize: ::core::Size, pt1: ::core::Point, pt2: ::core::Point) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_clipLine_Size_imgSize_Point_pt1_Point_pt2(imgSize, pt1, pt2);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_compare_InputArray_src1_InputArray_src2_OutputArray_dst_int_cmpop
/// compares elements of two arrays (dst = src1 \<cmpop\> src2)
pub fn compare(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat, cmpop: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_compare_InputArray_src1_InputArray_src2_OutputArray_dst_int_cmpop(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat(), cmpop);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_convertScaleAbs_InputArray_src_OutputArray_dst_double_alpha_double_beta
/// scales array elements, computes absolute values and converts the results to 8-bit unsigned integers: dst(i)=saturate_cast<uchar>abs(src(i)*alpha+beta)
///
/// default value for arguments:
///   - alpha: default 1
///   - beta: default 0
pub fn convert_scale_abs(src:& ::core::Mat, dst:& ::core::Mat, alpha: f64, beta: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_convertScaleAbs_InputArray_src_OutputArray_dst_double_alpha_double_beta(src.as_raw_Mat(), dst.as_raw_Mat(), alpha, beta);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_countNonZero_InputArray_src
/// computes the number of nonzero array elements
pub fn count_non_zero(src:& ::core::Mat) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_countNonZero_InputArray_src(src.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_cubeRoot_float_val
/// computes cube root of the argument
pub fn cube_root(val: f32) -> Result<f32,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_cubeRoot_float_val(val);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_dct_InputArray_src_OutputArray_dst_int_flags
/// performs forward or inverse 1D or 2D Discrete Cosine Transformation
///
/// default value for arguments:
///   - flags: default 0
pub fn dct(src:& ::core::Mat, dst:& ::core::Mat, flags: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_dct_InputArray_src_OutputArray_dst_int_flags(src.as_raw_Mat(), dst.as_raw_Mat(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_determinant_InputArray_mtx
/// computes determinant of a square matrix
pub fn determinant(mtx:& ::core::Mat) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_determinant_InputArray_mtx(mtx.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_dft_InputArray_src_OutputArray_dst_int_flags_int_nonzeroRows
/// performs forward or inverse 1D or 2D Discrete Fourier Transformation
///
/// default value for arguments:
///   - flags: default 0
///   - nonzeroRows: default 0
pub fn dft(src:& ::core::Mat, dst:& ::core::Mat, flags: i32, nonzeroRows: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_dft_InputArray_src_OutputArray_dst_int_flags_int_nonzeroRows(src.as_raw_Mat(), dst.as_raw_Mat(), flags, nonzeroRows);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_divide_InputArray_src1_InputArray_src2_OutputArray_dst_double_scale_int_dtype
/// computes element-wise weighted quotient of the two arrays (dst = scale*src1/src2)
///
/// default value for arguments:
///   - scale: default 1
///   - dtype: default -1
pub fn divide_mat(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat, scale: f64, dtype: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_divide_InputArray_src1_InputArray_src2_OutputArray_dst_double_scale_int_dtype(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat(), scale, dtype);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_divide_double_scale_InputArray_src2_OutputArray_dst_int_dtype
/// computes element-wise weighted reciprocal of an array (dst = scale/src2)
///
/// default value for arguments:
///   - dtype: default -1
pub fn divide(scale: f64, src2:& ::core::Mat, dst:& ::core::Mat, dtype: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_divide_double_scale_InputArray_src2_OutputArray_dst_int_dtype(scale, src2.as_raw_Mat(), dst.as_raw_Mat(), dtype);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_drawMarker_Mat_img_Point_position_Scalar_color_int_markerType_int_markerSize_int_thickness_int_line_type
/// @brief Draws a marker on a predefined position in an image.
/// 
/// The function drawMarker draws a marker on a given position in the image. For the moment several
/// marker types are supported (`MARKER_CROSS`, `MARKER_TILTED_CROSS`, `MARKER_STAR`, `MARKER_DIAMOND`, `MARKER_SQUARE`,
/// `MARKER_TRIANGLE_UP` and `MARKER_TRIANGLE_DOWN`).
/// 
/// @param img Image.
/// @param position The point where the crosshair is positioned.
/// @param markerType The specific type of marker you want to use, see
/// @param color Line color.
/// @param thickness Line thickness.
/// @param line_type Type of the line, see cv::LineTypes
/// @param markerSize The length of the marker axis [default = 20 pixels]
///
/// default value for arguments:
///   - markerType: default MARKER_CROSS
///   - markerSize: default 20
///   - thickness: default 1
///   - line_type: default 8
pub fn draw_marker(img:& ::core::Mat, position: ::core::Point, color: ::core::Scalar, markerType: i32, markerSize: i32, thickness: i32, line_type: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_drawMarker_Mat_img_Point_position_Scalar_color_int_markerType_int_markerSize_int_thickness_int_line_type(img.as_raw_Mat(), position, color, markerType, markerSize, thickness, line_type);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_eigen_InputArray_src_OutputArray_eigenvalues_OutputArray_eigenvectors_int_lowindex_int_highindex
/// finds eigenvalues and eigenvectors of a symmetric matrix
///
/// default value for arguments:
///   - lowindex: default -1
///   - highindex: default -1
pub fn eigen_vectors(src:& ::core::Mat, eigenvalues:& ::core::Mat, eigenvectors:& ::core::Mat, lowindex: i32, highindex: i32) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_eigen_InputArray_src_OutputArray_eigenvalues_OutputArray_eigenvectors_int_lowindex_int_highindex(src.as_raw_Mat(), eigenvalues.as_raw_Mat(), eigenvectors.as_raw_Mat(), lowindex, highindex);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_eigen_InputArray_src_OutputArray_eigenvalues_int_lowindex_int_highindex
/// finds eigenvalues of a symmetric matrix
///
/// default value for arguments:
///   - lowindex: default -1
///   - highindex: default -1
pub fn eigen_indexes(src:& ::core::Mat, eigenvalues:& ::core::Mat, lowindex: i32, highindex: i32) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_eigen_InputArray_src_OutputArray_eigenvalues_int_lowindex_int_highindex(src.as_raw_Mat(), eigenvalues.as_raw_Mat(), lowindex, highindex);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_eigen_InputArray_src_bool_computeEigenvectors_OutputArray_eigenvalues_OutputArray_eigenvectors
pub fn eigen(src:& ::core::Mat, computeEigenvectors: bool, eigenvalues:& ::core::Mat, eigenvectors:& ::core::Mat) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_eigen_InputArray_src_bool_computeEigenvectors_OutputArray_eigenvalues_OutputArray_eigenvectors(src.as_raw_Mat(), computeEigenvectors, eigenvalues.as_raw_Mat(), eigenvectors.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_ellipse2Poly_Point_center_Size_axes_int_angle_int_arcStart_int_arcEnd_int_delta_VectorOfPoint_pts
/// converts elliptic arc to a polygonal curve
pub fn ellipse2_poly(center: ::core::Point, axes: ::core::Size, angle: i32, arcStart: i32, arcEnd: i32, delta: i32, pts:& ::types::VectorOfPoint) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_ellipse2Poly_Point_center_Size_axes_int_angle_int_arcStart_int_arcEnd_int_delta_VectorOfPoint_pts(center, axes, angle, arcStart, arcEnd, delta, pts.as_raw_VectorOfPoint());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_ellipse_Mat_img_Point_center_Size_axes_double_angle_double_startAngle_double_endAngle_Scalar_color_int_thickness_int_lineType_int_shift
/// draws an elliptic arc, ellipse sector or a rotated ellipse in the image
///
/// default value for arguments:
///   - thickness: default 1
///   - lineType: default 8
///   - shift: default 0
pub fn ellipse(img:& ::core::Mat, center: ::core::Point, axes: ::core::Size, angle: f64, startAngle: f64, endAngle: f64, color: ::core::Scalar, thickness: i32, lineType: i32, shift: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_ellipse_Mat_img_Point_center_Size_axes_double_angle_double_startAngle_double_endAngle_Scalar_color_int_thickness_int_lineType_int_shift(img.as_raw_Mat(), center, axes, angle, startAngle, endAngle, color, thickness, lineType, shift);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_ellipse_Mat_img_RotatedRect_box_Scalar_color_int_thickness_int_lineType
/// draws a rotated ellipse in the image
///
/// default value for arguments:
///   - thickness: default 1
///   - lineType: default 8
pub fn ellipse_new_rotated_rect(img:& ::core::Mat, _box:& ::core::RotatedRect, color: ::core::Scalar, thickness: i32, lineType: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_ellipse_Mat_img_RotatedRect_box_Scalar_color_int_thickness_int_lineType(img.as_raw_Mat(), _box.as_raw_RotatedRect(), color, thickness, lineType);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_exp_InputArray_src_OutputArray_dst
/// computes exponent of each matrix element (dst = e**src)
pub fn exp(src:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_exp_InputArray_src_OutputArray_dst(src.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_extractChannel_InputArray_src_OutputArray_dst_int_coi
/// extracts a single channel from src (coi is 0-based index)
pub fn extract_channel(src:& ::core::Mat, dst:& ::core::Mat, coi: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_extractChannel_InputArray_src_OutputArray_dst_int_coi(src.as_raw_Mat(), dst.as_raw_Mat(), coi);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_fastAtan2_float_y_float_x
/// computes the angle in degrees (0..360) of the vector (x,y)
pub fn fast_atan2(y: f32, x: f32) -> Result<f32,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_fastAtan2_float_y_float_x(y, x);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_findNonZero_InputArray_src_OutputArray_idx
/// returns the list of locations of non-zero pixels
pub fn find_non_zero(src:& ::core::Mat, idx:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_findNonZero_InputArray_src_OutputArray_idx(src.as_raw_Mat(), idx.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_flip_InputArray_src_OutputArray_dst_int_flipCode
/// reverses the order of the rows, columns or both in a matrix
pub fn flip(src:& ::core::Mat, dst:& ::core::Mat, flipCode: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_flip_InputArray_src_OutputArray_dst_int_flipCode(src.as_raw_Mat(), dst.as_raw_Mat(), flipCode);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_gemm_InputArray_src1_InputArray_src2_double_alpha_InputArray_src3_double_beta_OutputArray_dst_int_flags
/// implements generalized matrix product algorithm GEMM from BLAS
///
/// default value for arguments:
///   - flags: default 0
pub fn gemm(src1:& ::core::Mat, src2:& ::core::Mat, alpha: f64, src3:& ::core::Mat, beta: f64, dst:& ::core::Mat, flags: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_gemm_InputArray_src1_InputArray_src2_double_alpha_InputArray_src3_double_beta_OutputArray_dst_int_flags(src1.as_raw_Mat(), src2.as_raw_Mat(), alpha, src3.as_raw_Mat(), beta, dst.as_raw_Mat(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_getBuildInformation
pub fn get_build_information() -> Result<String,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_getBuildInformation();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    let v = CStr::from_ptr(rv.result).to_bytes().to_vec();
    ::libc::free(rv.result as *mut c_void);
    Ok(String::from_utf8(v).unwrap())
  }
}

// identifier: cv_getCPUTickCount
/// Returns the number of CPU ticks.
/// 
/// On platforms where the feature is available, the function returns the number of CPU ticks
/// since the certain event (normally, the system power-on moment). Using this function
/// one can accurately measure the execution time of very small code fragments,
/// for which cv::getTickCount() granularity is not enough.
pub fn get_cpu_tick_count() -> Result<i64,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_getCPUTickCount();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_getElemSize_int_type
pub fn get_elem_size(_type: i32) -> Result<size_t,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_getElemSize_int_type(_type);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_getNumThreads
pub fn get_num_threads() -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_getNumThreads();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_getNumberOfCPUs
/// returns the number of CPUs (including hyper-threading)
pub fn get_number_of_cp_us() -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_getNumberOfCPUs();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_getOptimalDFTSize_int_vecsize
/// computes the minimal vector size vecsize1 >= vecsize so that the dft() of the vector of length vecsize1 can be computed efficiently
pub fn get_optimal_dft_size(vecsize: i32) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_getOptimalDFTSize_int_vecsize(vecsize);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_getThreadNum
pub fn get_thread_num() -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_getThreadNum();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_getTickCount
/// The function returns the number of ticks since the certain event (e.g. when the machine was turned on).
/// It can be used to initialize cv::RNG or to measure a function execution time by reading the tick count
/// before and after the function call. The granularity of ticks depends on the hardware and OS used. Use
/// cv::getTickFrequency() to convert ticks to seconds.
pub fn get_tick_count() -> Result<i64,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_getTickCount();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_getTickFrequency
/// Returns the number of ticks per seconds.
/// 
/// The function returns the number of ticks (as returned by cv::getTickCount()) per second.
/// The following code computes the execution time in milliseconds:
/// 
/// \code
/// double exec_time = (double)getTickCount();
/// // do something ...
/// exec_time = ((double)getTickCount() - exec_time)*1000./getTickFrequency();
/// \endcode
pub fn get_tick_frequency() -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_getTickFrequency();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_hconcat_InputArray_src1_InputArray_src2_OutputArray_dst
pub fn hconcat(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_hconcat_InputArray_src1_InputArray_src2_OutputArray_dst(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_idct_InputArray_src_OutputArray_dst_int_flags
/// performs inverse 1D or 2D Discrete Cosine Transformation
///
/// default value for arguments:
///   - flags: default 0
pub fn idct(src:& ::core::Mat, dst:& ::core::Mat, flags: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_idct_InputArray_src_OutputArray_dst_int_flags(src.as_raw_Mat(), dst.as_raw_Mat(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_idft_InputArray_src_OutputArray_dst_int_flags_int_nonzeroRows
/// performs inverse 1D or 2D Discrete Fourier Transformation
///
/// default value for arguments:
///   - flags: default 0
///   - nonzeroRows: default 0
pub fn idft(src:& ::core::Mat, dst:& ::core::Mat, flags: i32, nonzeroRows: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_idft_InputArray_src_OutputArray_dst_int_flags_int_nonzeroRows(src.as_raw_Mat(), dst.as_raw_Mat(), flags, nonzeroRows);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_inRange_InputArray_src_InputArray_lowerb_InputArray_upperb_OutputArray_dst
/// set mask elements for those array elements which are within the element-specific bounding box (dst = lowerb <= src && src < upperb)
pub fn in_range(src:& ::core::Mat, lowerb:& ::core::Mat, upperb:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_inRange_InputArray_src_InputArray_lowerb_InputArray_upperb_OutputArray_dst(src.as_raw_Mat(), lowerb.as_raw_Mat(), upperb.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_invert_InputArray_src_OutputArray_dst_int_flags
/// computes inverse or pseudo-inverse matrix
///
/// default value for arguments:
///   - flags: default DECOMP_LU
pub fn invert(src:& ::core::Mat, dst:& ::core::Mat, flags: i32) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_invert_InputArray_src_OutputArray_dst_int_flags(src.as_raw_Mat(), dst.as_raw_Mat(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_line_Mat_img_Point_pt1_Point_pt2_Scalar_color_int_thickness_int_lineType_int_shift
/// draws the line segment (pt1, pt2) in the image
///
/// default value for arguments:
///   - thickness: default 1
///   - lineType: default 8
///   - shift: default 0
pub fn line(img:& ::core::Mat, pt1: ::core::Point, pt2: ::core::Point, color: ::core::Scalar, thickness: i32, lineType: i32, shift: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_line_Mat_img_Point_pt1_Point_pt2_Scalar_color_int_thickness_int_lineType_int_shift(img.as_raw_Mat(), pt1, pt2, color, thickness, lineType, shift);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_log_InputArray_src_OutputArray_dst
/// computes natural logarithm of absolute value of each matrix element: dst = log(abs(src))
pub fn log(src:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_log_InputArray_src_OutputArray_dst(src.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_magnitude_InputArray_x_InputArray_y_OutputArray_magnitude
/// computes magnitude (magnitude(i)) of each (x(i), y(i)) vector
pub fn magnitude(x:& ::core::Mat, y:& ::core::Mat, magnitude:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_magnitude_InputArray_x_InputArray_y_OutputArray_magnitude(x.as_raw_Mat(), y.as_raw_Mat(), magnitude.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_max_InputArray_src1_InputArray_src2_OutputArray_dst
/// computes per-element maximum of two arrays (dst = max(src1, src2))
pub fn max(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_max_InputArray_src1_InputArray_src2_OutputArray_dst(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_max_Mat_src1_Mat_src2_Mat_dst
/// computes per-element maximum of two arrays (dst = max(src1, src2))
pub fn max_mat_mat(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_max_Mat_src1_Mat_src2_Mat_dst(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_max_Mat_src1_double_src2_Mat_dst
/// computes per-element maximum of array and scalar (dst = max(src1, src2))
pub fn max_mat(src1:& ::core::Mat, src2: f64, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_max_Mat_src1_double_src2_Mat_dst(src1.as_raw_Mat(), src2, dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_meanStdDev_InputArray_src_OutputArray_mean_OutputArray_stddev_InputArray_mask
/// computes mean value and standard deviation of all or selected array elements
///
/// default value for arguments:
///   - mask: default noArray()
pub fn mean_std_dev(src:& ::core::Mat, mean:& ::core::Mat, stddev:& ::core::Mat, mask:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_meanStdDev_InputArray_src_OutputArray_mean_OutputArray_stddev_InputArray_mask(src.as_raw_Mat(), mean.as_raw_Mat(), stddev.as_raw_Mat(), mask.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_mean_InputArray_src_InputArray_mask
/// computes mean value of selected array elements
///
/// default value for arguments:
///   - mask: default noArray()
pub fn mean(src:& ::core::Mat, mask:& ::core::Mat) -> Result<::core::Scalar,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_mean_InputArray_src_InputArray_mask(src.as_raw_Mat(), mask.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_merge_VectorOfMat_mv_OutputArray_dst
pub fn merge(mv:& ::types::VectorOfMat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_merge_VectorOfMat_mv_OutputArray_dst(mv.as_raw_VectorOfMat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_min_InputArray_src1_InputArray_src2_OutputArray_dst
/// computes per-element minimum of two arrays (dst = min(src1, src2))
pub fn min(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_min_InputArray_src1_InputArray_src2_OutputArray_dst(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_min_Mat_src1_Mat_src2_Mat_dst
/// computes per-element minimum of two arrays (dst = min(src1, src2))
pub fn min_mat_mat(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_min_Mat_src1_Mat_src2_Mat_dst(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_min_Mat_src1_double_src2_Mat_dst
/// computes per-element minimum of array and scalar (dst = min(src1, src2))
pub fn min_mat(src1:& ::core::Mat, src2: f64, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_min_Mat_src1_double_src2_Mat_dst(src1.as_raw_Mat(), src2, dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_mulSpectrums_InputArray_a_InputArray_b_OutputArray_c_int_flags_bool_conjB
/// computes element-wise product of the two Fourier spectrums. The second spectrum can optionally be conjugated before the multiplication
///
/// default value for arguments:
///   - conjB: default false
pub fn mul_spectrums(a:& ::core::Mat, b:& ::core::Mat, c:& ::core::Mat, flags: i32, conjB: bool) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_mulSpectrums_InputArray_a_InputArray_b_OutputArray_c_int_flags_bool_conjB(a.as_raw_Mat(), b.as_raw_Mat(), c.as_raw_Mat(), flags, conjB);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_mulTransposed_InputArray_src_OutputArray_dst_bool_aTa_InputArray_delta_double_scale_int_dtype
/// multiplies matrix by its transposition from the left or from the right
///
/// default value for arguments:
///   - delta: default noArray()
///   - scale: default 1
///   - dtype: default -1
pub fn mul_transposed(src:& ::core::Mat, dst:& ::core::Mat, aTa: bool, delta:& ::core::Mat, scale: f64, dtype: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_mulTransposed_InputArray_src_OutputArray_dst_bool_aTa_InputArray_delta_double_scale_int_dtype(src.as_raw_Mat(), dst.as_raw_Mat(), aTa, delta.as_raw_Mat(), scale, dtype);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_multiply_InputArray_src1_InputArray_src2_OutputArray_dst_double_scale_int_dtype
/// computes element-wise weighted product of the two arrays (dst = scale*src1*src2)
///
/// default value for arguments:
///   - scale: default 1
///   - dtype: default -1
pub fn multiply(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat, scale: f64, dtype: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_multiply_InputArray_src1_InputArray_src2_OutputArray_dst_double_scale_int_dtype(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat(), scale, dtype);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_norm_InputArray_src1_InputArray_src2_int_normType_InputArray_mask
/// computes norm of selected part of the difference between two arrays
///
/// default value for arguments:
///   - normType: default NORM_L2
///   - mask: default noArray()
pub fn norm_with_type(src1:& ::core::Mat, src2:& ::core::Mat, normType: i32, mask:& ::core::Mat) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_norm_InputArray_src1_InputArray_src2_int_normType_InputArray_mask(src1.as_raw_Mat(), src2.as_raw_Mat(), normType, mask.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_norm_InputArray_src1_int_normType_InputArray_mask
/// computes norm of the selected array part
///
/// default value for arguments:
///   - normType: default NORM_L2
///   - mask: default noArray()
pub fn norm(src1:& ::core::Mat, normType: i32, mask:& ::core::Mat) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_norm_InputArray_src1_int_normType_InputArray_mask(src1.as_raw_Mat(), normType, mask.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_normalize_InputArray_src_OutputArray_dst_double_alpha_double_beta_int_norm_type_int_dtype_InputArray_mask
/// scales and shifts array elements so that either the specified norm (alpha) or the minimum (alpha) and maximum (beta) array values get the specified values
///
/// default value for arguments:
///   - alpha: default 1
///   - beta: default 0
///   - norm_type: default NORM_L2
///   - dtype: default -1
///   - mask: default noArray()
pub fn normalize(src:& ::core::Mat, dst:& ::core::Mat, alpha: f64, beta: f64, norm_type: i32, dtype: i32, mask:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_normalize_InputArray_src_OutputArray_dst_double_alpha_double_beta_int_norm_type_int_dtype_InputArray_mask(src.as_raw_Mat(), dst.as_raw_Mat(), alpha, beta, norm_type, dtype, mask.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_parallel_for__Range_range_ParallelLoopBody_body_double_nstripes
///
/// default value for arguments:
///   - nstripes: default -1.
pub fn parallel_for_(range:& ::core::Range, body:& ::core::ParallelLoopBody, nstripes: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_parallel_for__Range_range_ParallelLoopBody_body_double_nstripes(range.as_raw_Range(), body.as_raw_ParallelLoopBody(), nstripes);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_perspectiveTransform_InputArray_src_OutputArray_dst_InputArray_m
/// performs perspective transformation of each element of multi-channel input matrix
pub fn perspective_transform(src:& ::core::Mat, dst:& ::core::Mat, m:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_perspectiveTransform_InputArray_src_OutputArray_dst_InputArray_m(src.as_raw_Mat(), dst.as_raw_Mat(), m.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_phase_InputArray_x_InputArray_y_OutputArray_angle_bool_angleInDegrees
/// computes angle (angle(i)) of each (x(i), y(i)) vector
///
/// default value for arguments:
///   - angleInDegrees: default false
pub fn phase(x:& ::core::Mat, y:& ::core::Mat, angle:& ::core::Mat, angleInDegrees: bool) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_phase_InputArray_x_InputArray_y_OutputArray_angle_bool_angleInDegrees(x.as_raw_Mat(), y.as_raw_Mat(), angle.as_raw_Mat(), angleInDegrees);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_polarToCart_InputArray_magnitude_InputArray_angle_OutputArray_x_OutputArray_y_bool_angleInDegrees
/// converts polar coordinates to Cartesian
///
/// default value for arguments:
///   - angleInDegrees: default false
pub fn polar_to_cart(magnitude:& ::core::Mat, angle:& ::core::Mat, x:& ::core::Mat, y:& ::core::Mat, angleInDegrees: bool) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_polarToCart_InputArray_magnitude_InputArray_angle_OutputArray_x_OutputArray_y_bool_angleInDegrees(magnitude.as_raw_Mat(), angle.as_raw_Mat(), x.as_raw_Mat(), y.as_raw_Mat(), angleInDegrees);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_pow_InputArray_src_double_power_OutputArray_dst
/// raises the input matrix elements to the specified power (b = a**power)
pub fn pow(src:& ::core::Mat, power: f64, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_pow_InputArray_src_double_power_OutputArray_dst(src.as_raw_Mat(), power, dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_putText_Mat_img_String_text_Point_org_int_fontFace_double_fontScale_Scalar_color_int_thickness_int_lineType_bool_bottomLeftOrigin
/// renders text string in the image
///
/// default value for arguments:
///   - thickness: default 1
///   - lineType: default 8
///   - bottomLeftOrigin: default false
pub fn put_text(img:& ::core::Mat, text:&str, org: ::core::Point, fontFace: i32, fontScale: f64, color: ::core::Scalar, thickness: i32, lineType: i32, bottomLeftOrigin: bool) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_putText_Mat_img_String_text_Point_org_int_fontFace_double_fontScale_Scalar_color_int_thickness_int_lineType_bool_bottomLeftOrigin(img.as_raw_Mat(), CString::new(text).unwrap().as_ptr(), org, fontFace, fontScale, color, thickness, lineType, bottomLeftOrigin);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_rectangle_Mat_img_Point_pt1_Point_pt2_Scalar_color_int_thickness_int_lineType_int_shift
/// draws the rectangle outline or a solid rectangle with the opposite corners pt1 and pt2 in the image
///
/// default value for arguments:
///   - thickness: default 1
///   - lineType: default 8
///   - shift: default 0
pub fn rectangle_points(img:& ::core::Mat, pt1: ::core::Point, pt2: ::core::Point, color: ::core::Scalar, thickness: i32, lineType: i32, shift: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_rectangle_Mat_img_Point_pt1_Point_pt2_Scalar_color_int_thickness_int_lineType_int_shift(img.as_raw_Mat(), pt1, pt2, color, thickness, lineType, shift);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_rectangle_Mat_img_Rect_rec_Scalar_color_int_thickness_int_lineType_int_shift
/// draws the rectangle outline or a solid rectangle covering rec in the image
///
/// default value for arguments:
///   - thickness: default 1
///   - lineType: default 8
///   - shift: default 0
pub fn rectangle(img:& ::core::Mat, rec: ::core::Rect, color: ::core::Scalar, thickness: i32, lineType: i32, shift: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_rectangle_Mat_img_Rect_rec_Scalar_color_int_thickness_int_lineType_int_shift(img.as_raw_Mat(), rec, color, thickness, lineType, shift);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_reduce_InputArray_src_OutputArray_dst_int_dim_int_rtype_int_dtype
/// transforms 2D matrix to 1D row or column vector by taking sum, minimum, maximum or mean value over all the rows
///
/// default value for arguments:
///   - dtype: default -1
pub fn reduce(src:& ::core::Mat, dst:& ::core::Mat, dim: i32, rtype: i32, dtype: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_reduce_InputArray_src_OutputArray_dst_int_dim_int_rtype_int_dtype(src.as_raw_Mat(), dst.as_raw_Mat(), dim, rtype, dtype);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_repeat_InputArray_src_int_ny_int_nx_OutputArray_dst
/// replicates the input matrix the specified number of times in the horizontal and/or vertical direction
pub fn repeat_to(src:& ::core::Mat, ny: i32, nx: i32, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_repeat_InputArray_src_int_ny_int_nx_OutputArray_dst(src.as_raw_Mat(), ny, nx, dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_repeat_Mat_src_int_ny_int_nx
pub fn repeat(src:& ::core::Mat, ny: i32, nx: i32) -> Result<::core::Mat,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_repeat_Mat_src_int_ny_int_nx(src.as_raw_Mat(), ny, nx);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::core::Mat{ ptr: rv.result })
  }
}

// identifier: cv_scaleAdd_InputArray_src1_double_alpha_InputArray_src2_OutputArray_dst
/// adds scaled array to another one (dst = alpha*src1 + src2)
pub fn scale_add(src1:& ::core::Mat, alpha: f64, src2:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_scaleAdd_InputArray_src1_double_alpha_InputArray_src2_OutputArray_dst(src1.as_raw_Mat(), alpha, src2.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_setBreakOnError_bool_flag
/// When the break-on-error mode is set, the default error handler
/// issues a hardware exception, which can make debugging more convenient.
/// 
/// \return the previous state
pub fn set_break_on_error(flag: bool) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_setBreakOnError_bool_flag(flag);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_setNumThreads_int_nthreads
pub fn set_num_threads(nthreads: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_setNumThreads_int_nthreads(nthreads);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_setRNGSeed_int_seed
/// sets state of the thread-local Random number generator
pub fn set_rng_seed(seed: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_setRNGSeed_int_seed(seed);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_setUseOptimized_bool_onoff
/// Turns on/off available optimization
/// 
/// The function turns on or off the optimized code in OpenCV. Some optimization can not be enabled
/// or disabled, but, for example, most of SSE code in OpenCV can be temporarily turned on or off this way.
/// 
/// \note{Since optimization may imply using special data structures, it may be unsafe
/// to call this function anywhere in the code. Instead, call it somewhere at the top level.}
pub fn set_use_optimized(onoff: bool) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_setUseOptimized_bool_onoff(onoff);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_solveCubic_InputArray_coeffs_OutputArray_roots
/// finds real roots of a cubic polynomial
pub fn solve_cubic(coeffs:& ::core::Mat, roots:& ::core::Mat) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_solveCubic_InputArray_coeffs_OutputArray_roots(coeffs.as_raw_Mat(), roots.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_solvePoly_InputArray_coeffs_OutputArray_roots_int_maxIters
/// finds real and complex roots of a polynomial
///
/// default value for arguments:
///   - maxIters: default 300
pub fn solve_poly(coeffs:& ::core::Mat, roots:& ::core::Mat, maxIters: i32) -> Result<f64,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_solvePoly_InputArray_coeffs_OutputArray_roots_int_maxIters(coeffs.as_raw_Mat(), roots.as_raw_Mat(), maxIters);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_solve_InputArray_src1_InputArray_src2_OutputArray_dst_int_flags
/// solves linear system or a least-square problem
///
/// default value for arguments:
///   - flags: default DECOMP_LU
pub fn solve(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat, flags: i32) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_solve_InputArray_src1_InputArray_src2_OutputArray_dst_int_flags(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_sortIdx_InputArray_src_OutputArray_dst_int_flags
/// sorts independently each matrix row or each matrix column
pub fn sort_idx(src:& ::core::Mat, dst:& ::core::Mat, flags: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_sortIdx_InputArray_src_OutputArray_dst_int_flags(src.as_raw_Mat(), dst.as_raw_Mat(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_sort_InputArray_src_OutputArray_dst_int_flags
/// sorts independently each matrix row or each matrix column
pub fn sort(src:& ::core::Mat, dst:& ::core::Mat, flags: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_sort_InputArray_src_OutputArray_dst_int_flags(src.as_raw_Mat(), dst.as_raw_Mat(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_split_Mat_m_VectorOfMat_mv
pub fn split(m:& ::core::Mat, mv:& ::types::VectorOfMat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_split_Mat_m_VectorOfMat_mv(m.as_raw_Mat(), mv.as_raw_VectorOfMat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_split_Mat_src_Mat_mvbegin
/// copies each plane of a multi-channel array to a dedicated array
pub fn split_at(src:& ::core::Mat, mvbegin:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_split_Mat_src_Mat_mvbegin(src.as_raw_Mat(), mvbegin.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_sqrt_InputArray_src_OutputArray_dst
/// computes square root of each matrix element (dst = src**0.5)
pub fn sqrt(src:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_sqrt_InputArray_src_OutputArray_dst(src.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_subtract_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask_int_dtype
/// subtracts one matrix from another (dst = src1 - src2)
///
/// default value for arguments:
///   - mask: default noArray()
///   - dtype: default -1
pub fn subtract(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat, mask:& ::core::Mat, dtype: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_subtract_InputArray_src1_InputArray_src2_OutputArray_dst_InputArray_mask_int_dtype(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat(), mask.as_raw_Mat(), dtype);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_sum_InputArray_src
/// computes sum of array elements
pub fn sum(src:& ::core::Mat) -> Result<::core::Scalar,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_sum_InputArray_src(src.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_swap_Mat_a_Mat_b
/// swaps two matrices
pub fn swap(a:& ::core::Mat, b:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_swap_Mat_a_Mat_b(a.as_raw_Mat(), b.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_trace_InputArray_mtx
/// computes trace of a matrix
pub fn trace(mtx:& ::core::Mat) -> Result<::core::Scalar,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_trace_InputArray_mtx(mtx.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_transform_InputArray_src_OutputArray_dst_InputArray_m
/// performs affine transformation of each element of multi-channel input matrix
pub fn transform(src:& ::core::Mat, dst:& ::core::Mat, m:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_transform_InputArray_src_OutputArray_dst_InputArray_m(src.as_raw_Mat(), dst.as_raw_Mat(), m.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_transpose_InputArray_src_OutputArray_dst
/// transposes the matrix
pub fn transpose(src:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_transpose_InputArray_src_OutputArray_dst(src.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_useOptimized
/// Returns the current optimization status
/// 
/// The function returns the current optimization status, which is controlled by cv::setUseOptimized().
pub fn use_optimized() -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_core_cv_useOptimized();
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_vconcat_InputArray_src1_InputArray_src2_OutputArray_dst
pub fn vconcat(src1:& ::core::Mat, src2:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_core_cv_vconcat_InputArray_src1_InputArray_src2_OutputArray_dst(src1.as_raw_Mat(), src2.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// Generating impl for trait cv::Algorithm
pub trait Algorithm {
  fn as_raw_Algorithm(&self) -> *mut c_void;
  // identifier: cv_Algorithm_name
  fn name(&self) -> Result<String,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_name(self.as_raw_Algorithm());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      let v = CStr::from_ptr(rv.result).to_bytes().to_vec();
      ::libc::free(rv.result as *mut c_void);
      Ok(String::from_utf8(v).unwrap())
    }
  }

  // identifier: cv_Algorithm_getInt_String_name
  fn get_int(&self, name:&str) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_getInt_String_name(self.as_raw_Algorithm(), CString::new(name).unwrap().as_ptr());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Algorithm_getDouble_String_name
  fn get_double(&self, name:&str) -> Result<f64,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_getDouble_String_name(self.as_raw_Algorithm(), CString::new(name).unwrap().as_ptr());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Algorithm_getBool_String_name
  fn get_bool(&self, name:&str) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_getBool_String_name(self.as_raw_Algorithm(), CString::new(name).unwrap().as_ptr());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Algorithm_getString_String_name
  fn get_string(&self, name:&str) -> Result<String,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_getString_String_name(self.as_raw_Algorithm(), CString::new(name).unwrap().as_ptr());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      let v = CStr::from_ptr(rv.result).to_bytes().to_vec();
      ::libc::free(rv.result as *mut c_void);
      Ok(String::from_utf8(v).unwrap())
    }
  }

  // identifier: cv_Algorithm_getMat_String_name
  fn get_mat(&self, name:&str) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_getMat_String_name(self.as_raw_Algorithm(), CString::new(name).unwrap().as_ptr());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Algorithm_getMatVector_String_name
  fn get_mat_vector(&self, name:&str) -> Result<::types::VectorOfMat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_getMatVector_String_name(self.as_raw_Algorithm(), CString::new(name).unwrap().as_ptr());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::types::VectorOfMat{ ptr: rv.result })
    }
  }

  // identifier: cv_Algorithm_set_String_name_int_value
  fn set_int(&mut self, name:&str, value: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_set_String_name_int_value(self.as_raw_Algorithm(), CString::new(name).unwrap().as_ptr(), value);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Algorithm_set_String_name_double_value
  fn set_double(&mut self, name:&str, value: f64) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_set_String_name_double_value(self.as_raw_Algorithm(), CString::new(name).unwrap().as_ptr(), value);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Algorithm_set_String_name_bool_value
  fn set_bool(&mut self, name:&str, value: bool) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_set_String_name_bool_value(self.as_raw_Algorithm(), CString::new(name).unwrap().as_ptr(), value);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Algorithm_set_String_name_String_value
  fn set_string(&mut self, name:&str, value:&str) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_set_String_name_String_value(self.as_raw_Algorithm(), CString::new(name).unwrap().as_ptr(), CString::new(value).unwrap().as_ptr());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Algorithm_set_String_name_Mat_value
  fn set_mat(&mut self, name:&str, value:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_set_String_name_Mat_value(self.as_raw_Algorithm(), CString::new(name).unwrap().as_ptr(), value.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Algorithm_set_String_name_VectorOfMat_value
  fn set_VectorOfMat(&mut self, name:&str, value:& ::types::VectorOfMat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_set_String_name_VectorOfMat_value(self.as_raw_Algorithm(), CString::new(name).unwrap().as_ptr(), value.as_raw_VectorOfMat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Algorithm_paramHelp_String_name
  fn param_help(&self, name:&str) -> Result<String,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_paramHelp_String_name(self.as_raw_Algorithm(), CString::new(name).unwrap().as_ptr());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      let v = CStr::from_ptr(rv.result).to_bytes().to_vec();
      ::libc::free(rv.result as *mut c_void);
      Ok(String::from_utf8(v).unwrap())
    }
  }

  // identifier: cv_Algorithm_paramType_String_name
  fn param_type(&self, name:&str) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_paramType_String_name(self.as_raw_Algorithm(), CString::new(name).unwrap().as_ptr());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Algorithm_getParams_VectorOfString_names
  fn get_params(&self, names:& ::types::VectorOfString) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_getParams_VectorOfString_names(self.as_raw_Algorithm(), names.as_raw_VectorOfString());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Algorithm_getList_VectorOfString_algorithms
  fn get_list(&mut self, algorithms:& ::types::VectorOfString) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Algorithm_getList_VectorOfString_algorithms(self.as_raw_Algorithm(), algorithms.as_raw_VectorOfString());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

}


// boxed class cv::AutoLock
#[allow(dead_code)]
pub struct AutoLock {
    pub ptr: *mut c_void
}
impl Drop for ::core::AutoLock {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_AutoLock(self.ptr) };
    }
}
impl ::core::AutoLock {
    pub fn as_raw_AutoLock(&self) -> *mut c_void { self.ptr }
}
impl AutoLock {

}

// boxed class cv::LineIterator
#[allow(dead_code)]
pub struct LineIterator {
    pub ptr: *mut c_void
}
impl Drop for ::core::LineIterator {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_LineIterator(self.ptr) };
    }
}
impl ::core::LineIterator {
    pub fn as_raw_LineIterator(&self) -> *mut c_void { self.ptr }
}
impl LineIterator {

  // identifier: cv_LineIterator_LineIterator_Mat_img_Point_pt1_Point_pt2_int_connectivity_bool_leftToRight
  /// intializes the iterator
  ///
  /// default value for arguments:
  ///   - connectivity: default 8
  ///   - leftToRight: default false
  pub fn new(img:& ::core::Mat, pt1: ::core::Point, pt2: ::core::Point, connectivity: i32, leftToRight: bool) -> Result<::core::LineIterator,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_LineIterator_LineIterator_Mat_img_Point_pt1_Point_pt2_int_connectivity_bool_leftToRight(img.as_raw_Mat(), pt1, pt2, connectivity, leftToRight);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::LineIterator{ ptr: rv.result })
    }
  }

  // identifier: cv_LineIterator_pos
  /// returns coordinates of the current pixel
  pub fn pos(&self) -> Result<::core::Point,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_LineIterator_pos(self.as_raw_LineIterator());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::Mat
#[allow(dead_code)]
pub struct Mat {
    pub ptr: *mut c_void
}
impl Drop for ::core::Mat {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_Mat(self.ptr) };
    }
}
impl ::core::Mat {
    pub fn as_raw_Mat(&self) -> *mut c_void { self.ptr }
}
impl Mat {

  // identifier: cv_Mat_Mat
  /// default constructor
  pub fn new() -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_Mat();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_Mat_int_rows_int_cols_int_type
  /// constructs 2D matrix of the specified size and type
  pub fn new_rows_cols(rows: i32, cols: i32, _type: i32) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_Mat_int_rows_int_cols_int_type(rows, cols, _type);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_Mat_Size_size_int_type
  pub fn new_size(size: ::core::Size, _type: i32) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_Mat_Size_size_int_type(size, _type);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_Mat_int_rows_int_cols_int_type_Scalar_s
  /// constucts 2D matrix and fills it with the specified value _s.
  pub fn new_rows_cols_with_default(rows: i32, cols: i32, _type: i32, s: ::core::Scalar) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_Mat_int_rows_int_cols_int_type_Scalar_s(rows, cols, _type, s);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_Mat_Size_size_int_type_Scalar_s
  pub fn new_size_with_default(size: ::core::Size, _type: i32, s: ::core::Scalar) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_Mat_Size_size_int_type_Scalar_s(size, _type, s);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_Mat_Mat_m
  /// copy constructor
  pub fn copy(m:& ::core::Mat) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_Mat_Mat_m(m.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_Mat_Mat_m_Range_rowRange_Range_colRange
  /// creates a matrix header for a part of the bigger matrix
  ///
  /// default value for arguments:
  ///   - colRange: default Range::all()
  pub fn rowscols(m:& ::core::Mat, rowRange:& ::core::Range, colRange:& ::core::Range) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_Mat_Mat_m_Range_rowRange_Range_colRange(m.as_raw_Mat(), rowRange.as_raw_Range(), colRange.as_raw_Range());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_Mat_Mat_m_Rect_roi
  pub fn rect(m:& ::core::Mat, roi: ::core::Rect) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_Mat_Mat_m_Rect_roi(m.as_raw_Mat(), roi);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_Mat_Mat_m_Range_ranges
  pub fn ranges(m:& ::core::Mat, ranges:& ::core::Range) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_Mat_Mat_m_Range_ranges(m.as_raw_Mat(), ranges.as_raw_Range());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_row_int_y
  /// returns a new matrix header for the specified row
  pub fn row(&self, y: i32) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_row_int_y(self.as_raw_Mat(), y);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_col_int_x
  /// returns a new matrix header for the specified column
  pub fn col(&self, x: i32) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_col_int_x(self.as_raw_Mat(), x);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_rowRange_int_startrow_int_endrow
  /// ... for the specified row span
  pub fn rowbounds(&self, startrow: i32, endrow: i32) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_rowRange_int_startrow_int_endrow(self.as_raw_Mat(), startrow, endrow);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_rowRange_Range_r
  pub fn rowRange(&self, r:& ::core::Range) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_rowRange_Range_r(self.as_raw_Mat(), r.as_raw_Range());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_colRange_int_startcol_int_endcol
  /// ... for the specified column span
  pub fn colbounds(&self, startcol: i32, endcol: i32) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_colRange_int_startcol_int_endcol(self.as_raw_Mat(), startcol, endcol);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_colRange_Range_r
  pub fn colrange(&self, r:& ::core::Range) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_colRange_Range_r(self.as_raw_Mat(), r.as_raw_Range());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_diag_int_d
  /// ... for the specified diagonal
  ///
  /// default value for arguments:
  ///   - d: default 0
  pub fn diag(&self, d: i32) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_diag_int_d(self.as_raw_Mat(), d);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_diag_Mat_d
  /// constructs a square diagonal matrix which main diagonal is vector "d"
  pub fn diag_new_mat(&mut self, d:& ::core::Mat) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_diag_Mat_d(self.as_raw_Mat(), d.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_clone
  /// returns deep copy of the matrix, i.e. the data is copied
  pub fn clone(&self) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_clone(self.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_copyTo_OutputArray_m
  /// copies the matrix content to "m".
  pub fn copy_to(&self, m:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_copyTo_OutputArray_m(self.as_raw_Mat(), m.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Mat_copyTo_OutputArray_m_InputArray_mask
  /// copies those matrix elements to "m" that are marked with non-zero mask elements.
  pub fn copy_to_masked(&self, m:& ::core::Mat, mask:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_copyTo_OutputArray_m_InputArray_mask(self.as_raw_Mat(), m.as_raw_Mat(), mask.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Mat_convertTo_OutputArray_m_int_rtype_double_alpha_double_beta
  /// converts matrix to another datatype with optional scalng. See cvConvertScale.
  ///
  /// default value for arguments:
  ///   - alpha: default 1
  ///   - beta: default 0
  pub fn convert_to(&self, m:& ::core::Mat, rtype: i32, alpha: f64, beta: f64) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_convertTo_OutputArray_m_int_rtype_double_alpha_double_beta(self.as_raw_Mat(), m.as_raw_Mat(), rtype, alpha, beta);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Mat_assignTo_Mat_m_int_type
  ///
  /// default value for arguments:
  ///   - _type: default -1
  pub fn assign_to(&self, m:& ::core::Mat, _type: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_assignTo_Mat_m_int_type(self.as_raw_Mat(), m.as_raw_Mat(), _type);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Mat_setTo_InputArray_value_InputArray_mask
  /// sets some of the matrix elements to s, according to the mask
  ///
  /// default value for arguments:
  ///   - mask: default noArray()
  pub fn set_to(&mut self, value:& ::core::Mat, mask:& ::core::Mat) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_setTo_InputArray_value_InputArray_mask(self.as_raw_Mat(), value.as_raw_Mat(), mask.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_reshape_int_cn_int_rows
  /// creates alternative matrix header for the same data, with different
  ///
  /// default value for arguments:
  ///   - rows: default 0
  pub fn reshape(&self, cn: i32, rows: i32) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_reshape_int_cn_int_rows(self.as_raw_Mat(), cn, rows);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_cross_InputArray_m
  /// computes cross-product of 2 3D vectors
  pub fn cross(&self, m:& ::core::Mat) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_cross_InputArray_m(self.as_raw_Mat(), m.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_dot_InputArray_m
  /// computes dot-product
  pub fn dot(&self, m:& ::core::Mat) -> Result<f64,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_dot_InputArray_m(self.as_raw_Mat(), m.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_addref
  /// increases the reference counter; use with care to avoid memleaks
  pub fn addref(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_addref(self.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Mat_release
  /// decreases reference counter;
  pub fn release(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_release(self.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Mat_deallocate
  /// deallocates the matrix data
  pub fn deallocate(&mut self) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_deallocate(self.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Mat_copySize_Mat_m
  /// internal use function; properly re-allocates _size, _step arrays
  pub fn copy_size(&mut self, m:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_copySize_Mat_m(self.as_raw_Mat(), m.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Mat_reserve_size_t_sz
  /// reserves enough space to fit sz hyper-planes
  pub fn reserve(&mut self, sz: size_t) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_reserve_size_t_sz(self.as_raw_Mat(), sz);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Mat_resize_size_t_sz
  /// resizes matrix to the specified number of hyper-planes
  pub fn resize(&mut self, sz: size_t) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_resize_size_t_sz(self.as_raw_Mat(), sz);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Mat_resize_size_t_sz_Scalar_s
  /// resizes matrix to the specified number of hyper-planes; initializes the newly added elements
  pub fn resize_with_default(&mut self, sz: size_t, s: ::core::Scalar) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_resize_size_t_sz_Scalar_s(self.as_raw_Mat(), sz, s);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Mat_push_back_Mat_m
  pub fn push_back(&mut self, m:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_push_back_Mat_m(self.as_raw_Mat(), m.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Mat_pop_back_size_t_nelems
  /// removes several hyper-planes from bottom of the matrix
  ///
  /// default value for arguments:
  ///   - nelems: default 1
  pub fn pop_back(&mut self, nelems: size_t) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_pop_back_size_t_nelems(self.as_raw_Mat(), nelems);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Mat_locateROI_Size_wholeSize_Point_ofs
  /// locates matrix header within a parent matrix. See below
  pub fn locate_roi(&self, wholeSize: ::core::Size, ofs: ::core::Point) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_locateROI_Size_wholeSize_Point_ofs(self.as_raw_Mat(), wholeSize, ofs);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_Mat_adjustROI_int_dtop_int_dbottom_int_dleft_int_dright
  /// moves/resizes the current matrix ROI inside the parent matrix.
  pub fn adjust_roi(&mut self, dtop: i32, dbottom: i32, dleft: i32, dright: i32) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_adjustROI_int_dtop_int_dbottom_int_dleft_int_dright(self.as_raw_Mat(), dtop, dbottom, dleft, dright);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_Mat_isContinuous
  /// returns true iff the matrix data is continuous
  pub fn is_continuous(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_isContinuous(self.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_isSubmatrix
  /// returns true if the matrix is a submatrix of another matrix
  pub fn is_submatrix(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_isSubmatrix(self.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_elemSize
  /// returns element size in bytes,
  pub fn elem_size(&self) -> Result<size_t,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_elemSize(self.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_elemSize1
  /// returns the size of element channel in bytes.
  pub fn elem_size1(&self) -> Result<size_t,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_elemSize1(self.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_type
  /// returns element type, similar to CV_MAT_TYPE(cvmat->type)
  pub fn typ(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_type(self.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_depth
  /// returns element type, similar to CV_MAT_DEPTH(cvmat->type)
  pub fn depth(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_depth(self.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_channels
  /// returns element type, similar to CV_MAT_CN(cvmat->type)
  pub fn channels(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_channels(self.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_step1_int_i
  /// returns step/elemSize1()
  ///
  /// default value for arguments:
  ///   - i: default 0
  pub fn step1(&self, i: i32) -> Result<size_t,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_step1_int_i(self.as_raw_Mat(), i);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_empty
  /// returns true if matrix data is NULL
  pub fn empty(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_empty(self.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_total
  /// returns the total number of matrix elements
  pub fn total(&self) -> Result<size_t,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_total(self.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_checkVector_int_elemChannels_int_depth_bool_requireContinuous
  /// returns N if the matrix is 1-channel (N x ptdim) or ptdim-channel (1 x N) or (N x 1); negative number otherwise
  ///
  /// default value for arguments:
  ///   - depth: default -1
  ///   - requireContinuous: default true
  pub fn check_vector(&self, elemChannels: i32, depth: i32, requireContinuous: bool) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_checkVector_int_elemChannels_int_depth_bool_requireContinuous(self.as_raw_Mat(), elemChannels, depth, requireContinuous);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_ptr_int_i0
  /// returns pointer to i0-th submatrix along the dimension #0
  ///
  /// default value for arguments:
  ///   - i0: default 0
  pub fn ptr0(&mut self, i0: i32) -> Result<*mut u8,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_ptr_int_i0(self.as_raw_Mat(), i0);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_ptr_int_i0_int_i1
  /// returns pointer to (i0,i1) submatrix along the dimensions #0 and #1
  pub fn ptr1(&mut self, i0: i32, i1: i32) -> Result<*mut u8,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_ptr_int_i0_int_i1(self.as_raw_Mat(), i0, i1);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_ptr_int_i0_int_i1_int_i2
  /// returns pointer to (i0,i1,i3) submatrix along the dimensions #0, #1, #2
  pub fn ptr2(&mut self, i0: i32, i1: i32, i2: i32) -> Result<*mut u8,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_ptr_int_i0_int_i1_int_i2(self.as_raw_Mat(), i0, i1, i2);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Mat_size
  pub fn size(&self) -> Result<::core::Size,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Mat_size(self.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::Matx_AddOp
#[allow(dead_code)]
pub struct Matx_AddOp {
    pub ptr: *mut c_void
}
impl Drop for ::core::Matx_AddOp {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_Matx_AddOp(self.ptr) };
    }
}
impl ::core::Matx_AddOp {
    pub fn as_raw_Matx_AddOp(&self) -> *mut c_void { self.ptr }
}
impl Matx_AddOp {

}

// boxed class cv::Matx_MatMulOp
#[allow(dead_code)]
pub struct Matx_MatMulOp {
    pub ptr: *mut c_void
}
impl Drop for ::core::Matx_MatMulOp {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_Matx_MatMulOp(self.ptr) };
    }
}
impl ::core::Matx_MatMulOp {
    pub fn as_raw_Matx_MatMulOp(&self) -> *mut c_void { self.ptr }
}
impl Matx_MatMulOp {

}

// boxed class cv::Matx_MulOp
#[allow(dead_code)]
pub struct Matx_MulOp {
    pub ptr: *mut c_void
}
impl Drop for ::core::Matx_MulOp {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_Matx_MulOp(self.ptr) };
    }
}
impl ::core::Matx_MulOp {
    pub fn as_raw_Matx_MulOp(&self) -> *mut c_void { self.ptr }
}
impl Matx_MulOp {

}

// boxed class cv::Matx_ScaleOp
#[allow(dead_code)]
pub struct Matx_ScaleOp {
    pub ptr: *mut c_void
}
impl Drop for ::core::Matx_ScaleOp {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_Matx_ScaleOp(self.ptr) };
    }
}
impl ::core::Matx_ScaleOp {
    pub fn as_raw_Matx_ScaleOp(&self) -> *mut c_void { self.ptr }
}
impl Matx_ScaleOp {

}

// boxed class cv::Matx_SubOp
#[allow(dead_code)]
pub struct Matx_SubOp {
    pub ptr: *mut c_void
}
impl Drop for ::core::Matx_SubOp {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_Matx_SubOp(self.ptr) };
    }
}
impl ::core::Matx_SubOp {
    pub fn as_raw_Matx_SubOp(&self) -> *mut c_void { self.ptr }
}
impl Matx_SubOp {

}

// boxed class cv::Matx_TOp
#[allow(dead_code)]
pub struct Matx_TOp {
    pub ptr: *mut c_void
}
impl Drop for ::core::Matx_TOp {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_Matx_TOp(self.ptr) };
    }
}
impl ::core::Matx_TOp {
    pub fn as_raw_Matx_TOp(&self) -> *mut c_void { self.ptr }
}
impl Matx_TOp {

}

// boxed class cv::NAryMatIterator
#[allow(dead_code)]
pub struct NAryMatIterator {
    pub ptr: *mut c_void
}
impl Drop for ::core::NAryMatIterator {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_NAryMatIterator(self.ptr) };
    }
}
impl ::core::NAryMatIterator {
    pub fn as_raw_NAryMatIterator(&self) -> *mut c_void { self.ptr }
}
impl NAryMatIterator {

  // identifier: cv_NAryMatIterator_NAryMatIterator
  /// the default constructor
  pub fn new() -> Result<::core::NAryMatIterator,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_NAryMatIterator_NAryMatIterator();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::NAryMatIterator{ ptr: rv.result })
    }
  }

}

// boxed class cv::PCA
#[allow(dead_code)]
pub struct PCA {
    pub ptr: *mut c_void
}
impl Drop for ::core::PCA {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_PCA(self.ptr) };
    }
}
impl ::core::PCA {
    pub fn as_raw_PCA(&self) -> *mut c_void { self.ptr }
}
impl PCA {

  // identifier: cv_PCA_PCA
  /// default constructor
  pub fn default() -> Result<::core::PCA,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_PCA_PCA();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::PCA{ ptr: rv.result })
    }
  }

  // identifier: cv_PCA_PCA_InputArray_data_InputArray_mean_int_flags_int_maxComponents
  /// the constructor that performs PCA
  ///
  /// default value for arguments:
  ///   - maxComponents: default 0
  pub fn new_mat_max(data:& ::core::Mat, mean:& ::core::Mat, flags: i32, maxComponents: i32) -> Result<::core::PCA,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_PCA_PCA_InputArray_data_InputArray_mean_int_flags_int_maxComponents(data.as_raw_Mat(), mean.as_raw_Mat(), flags, maxComponents);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::PCA{ ptr: rv.result })
    }
  }

  // identifier: cv_PCA_PCA_InputArray_data_InputArray_mean_int_flags_double_retainedVariance
  pub fn new_mat_variance(data:& ::core::Mat, mean:& ::core::Mat, flags: i32, retainedVariance: f64) -> Result<::core::PCA,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_PCA_PCA_InputArray_data_InputArray_mean_int_flags_double_retainedVariance(data.as_raw_Mat(), mean.as_raw_Mat(), flags, retainedVariance);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::PCA{ ptr: rv.result })
    }
  }

  // identifier: cv_PCA_computeVar_InputArray_data_InputArray_mean_int_flags_double_retainedVariance
  pub fn compute_var(&mut self, data:& ::core::Mat, mean:& ::core::Mat, flags: i32, retainedVariance: f64) -> Result<::core::PCA,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_PCA_computeVar_InputArray_data_InputArray_mean_int_flags_double_retainedVariance(self.as_raw_PCA(), data.as_raw_Mat(), mean.as_raw_Mat(), flags, retainedVariance);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::PCA{ ptr: rv.result })
    }
  }

  // identifier: cv_PCA_project_InputArray_vec
  /// projects vector from the original space to the principal components subspace
  pub fn project(&self, vec:& ::core::Mat) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_PCA_project_InputArray_vec(self.as_raw_PCA(), vec.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_PCA_project_InputArray_vec_OutputArray_result
  /// projects vector from the original space to the principal components subspace
  pub fn project_to(&self, vec:& ::core::Mat, result:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_PCA_project_InputArray_vec_OutputArray_result(self.as_raw_PCA(), vec.as_raw_Mat(), result.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

  // identifier: cv_PCA_backProject_InputArray_vec
  /// reconstructs the original vector from the projection
  pub fn back_project(&self, vec:& ::core::Mat) -> Result<::core::Mat,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_PCA_backProject_InputArray_vec(self.as_raw_PCA(), vec.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Mat{ ptr: rv.result })
    }
  }

  // identifier: cv_PCA_backProject_InputArray_vec_OutputArray_result
  /// reconstructs the original vector from the projection
  pub fn back_project_to(&self, vec:& ::core::Mat, result:& ::core::Mat) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_core_cv_PCA_backProject_InputArray_vec_OutputArray_result(self.as_raw_PCA(), vec.as_raw_Mat(), result.as_raw_Mat());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

}
// Generating impl for trait cv::ParallelLoopBody
pub trait ParallelLoopBody {
  fn as_raw_ParallelLoopBody(&self) -> *mut c_void;
}


// boxed class cv::Range
#[allow(dead_code)]
pub struct Range {
    pub ptr: *mut c_void
}
impl Drop for ::core::Range {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_Range(self.ptr) };
    }
}
impl ::core::Range {
    pub fn as_raw_Range(&self) -> *mut c_void { self.ptr }
}
impl Range {

  // identifier: cv_Range_Range
  pub fn default() -> Result<::core::Range,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Range_Range();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Range{ ptr: rv.result })
    }
  }

  // identifier: cv_Range_Range_int__start_int__end
  pub fn new(_start: i32, _end: i32) -> Result<::core::Range,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Range_Range_int__start_int__end(_start, _end);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Range{ ptr: rv.result })
    }
  }

  // identifier: cv_Range_size
  pub fn size(&self) -> Result<i32,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Range_size(self.as_raw_Range());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Range_empty
  pub fn empty(&self) -> Result<bool,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Range_empty(self.as_raw_Range());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

  // identifier: cv_Range_all
  pub fn all(&mut self) -> Result<::core::Range,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_Range_all(self.as_raw_Range());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::Range{ ptr: rv.result })
    }
  }

}

// boxed class cv::RotatedRect
#[allow(dead_code)]
pub struct RotatedRect {
    pub ptr: *mut c_void
}
impl Drop for ::core::RotatedRect {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_RotatedRect(self.ptr) };
    }
}
impl ::core::RotatedRect {
    pub fn as_raw_RotatedRect(&self) -> *mut c_void { self.ptr }
}
impl RotatedRect {

  // identifier: cv_RotatedRect_RotatedRect
  /// various constructors
  pub fn default() -> Result<::core::RotatedRect,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_RotatedRect_RotatedRect();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::RotatedRect{ ptr: rv.result })
    }
  }

  // identifier: cv_RotatedRect_RotatedRect_Point2f_center_Size2f_size_float_angle
  pub fn new(center: ::core::Point2f, size: ::core::Size2f, angle: f32) -> Result<::core::RotatedRect,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_RotatedRect_RotatedRect_Point2f_center_Size2f_size_float_angle(center, size, angle);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::RotatedRect{ ptr: rv.result })
    }
  }

  // identifier: cv_RotatedRect_boundingRect
  /// returns the minimal up-right rectangle containing the rotated rectangle
  pub fn bounding_rect(&self) -> Result<::core::Rect,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_RotatedRect_boundingRect(self.as_raw_RotatedRect());
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(rv.result)
    }
  }

}

// boxed class cv::TermCriteria
#[allow(dead_code)]
pub struct TermCriteria {
    pub ptr: *mut c_void
}
impl Drop for ::core::TermCriteria {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_TermCriteria(self.ptr) };
    }
}
impl ::core::TermCriteria {
    pub fn as_raw_TermCriteria(&self) -> *mut c_void { self.ptr }
}
impl TermCriteria {

  // identifier: cv_TermCriteria_TermCriteria
  /// default constructor
  pub fn default() -> Result<::core::TermCriteria,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_TermCriteria_TermCriteria();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::TermCriteria{ ptr: rv.result })
    }
  }

  // identifier: cv_TermCriteria_TermCriteria_int_type_int_maxCount_double_epsilon
  /// full constructor
  pub fn new(_type: i32, maxCount: i32, epsilon: f64) -> Result<::core::TermCriteria,String> {
    unsafe {
      let rv = ::sys::cv_core_cv_TermCriteria_TermCriteria_int_type_int_maxCount_double_epsilon(_type, maxCount, epsilon);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::core::TermCriteria{ ptr: rv.result })
    }
  }

}
