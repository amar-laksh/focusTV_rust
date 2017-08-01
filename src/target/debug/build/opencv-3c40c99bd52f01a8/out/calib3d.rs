
use libc::{ c_void, c_char, size_t };
use std::ffi::{ CStr, CString };
pub const CALC_J:i32 = 2;
pub const CALIB_CB_ADAPTIVE_THRESH:i32 = 1;
pub const CALIB_CB_ASYMMETRIC_GRID:i32 = 2;
pub const CALIB_CB_CLUSTERING:i32 = 4;
pub const CALIB_CB_FAST_CHECK:i32 = 8;
pub const CALIB_CB_FILTER_QUADS:i32 = 4;
pub const CALIB_CB_NORMALIZE_IMAGE:i32 = 2;
pub const CALIB_CB_SYMMETRIC_GRID:i32 = 1;
pub const CHECK_ERR:i32 = 3;
pub const CV_CALIB_CB_ADAPTIVE_THRESH:i32 = 1;
pub const CV_CALIB_CB_FAST_CHECK:i32 = 8;
pub const CV_CALIB_CB_FILTER_QUADS:i32 = 4;
pub const CV_CALIB_CB_NORMALIZE_IMAGE:i32 = 2;
pub const CV_CALIB_FIX_ASPECT_RATIO:i32 = 2;
pub const CV_CALIB_FIX_FOCAL_LENGTH:i32 = 16;
pub const CV_CALIB_FIX_INTRINSIC:i32 = 256;
pub const CV_CALIB_FIX_K1:i32 = 32;
pub const CV_CALIB_FIX_K2:i32 = 64;
pub const CV_CALIB_FIX_K3:i32 = 128;
pub const CV_CALIB_FIX_K4:i32 = 2048;
pub const CV_CALIB_FIX_K5:i32 = 4096;
pub const CV_CALIB_FIX_K6:i32 = 8192;
pub const CV_CALIB_FIX_PRINCIPAL_POINT:i32 = 4;
pub const CV_CALIB_RATIONAL_MODEL:i32 = 16384;
pub const CV_CALIB_SAME_FOCAL_LENGTH:i32 = 512;
pub const CV_CALIB_USE_INTRINSIC_GUESS:i32 = 1;
pub const CV_CALIB_ZERO_DISPARITY:i32 = 1024;
pub const CV_CALIB_ZERO_TANGENT_DIST:i32 = 8;
pub const CV_EPNP:i32 = 1;
pub const CV_FM_7POINT:i32 = 1;
pub const CV_FM_8POINT:i32 = 2;
pub const CV_ITERATIVE:i32 = 0;
pub const CV_LMEDS:i32 = 4;
pub const CV_P3P:i32 = 2;
pub const CV_RANSAC:i32 = 8;
pub const CV_STEREO_BM_BASIC:i32 = 0;
pub const CV_STEREO_BM_FISH_EYE:i32 = 1;
pub const CV_STEREO_BM_NARROW:i32 = 2;
pub const CV_STEREO_BM_NORMALIZED_RESPONSE:i32 = 0;
pub const CV_STEREO_BM_XSOBEL:i32 = 1;
pub const DONE:i32 = 0;
pub const STARTED:i32 = 1;
pub const StereoBM_BASIC_PRESET:i32 = 0;
pub const StereoBM_FISH_EYE_PRESET:i32 = 1;
pub const StereoBM_NARROW_PRESET:i32 = 2;
pub const StereoBM_PREFILTER_NORMALIZED_RESPONSE:i32 = 0;
pub const StereoBM_PREFILTER_XSOBEL:i32 = 1;
pub const StereoSGBM_DISP_SHIFT:i32 = 4;
pub const fisheye_CALIB_CHECK_COND:i32 = 4;
pub const fisheye_CALIB_FIX_SKEW:i32 = 8;
pub const fisheye_CALIB_RECOMPUTE_EXTRINSIC:i32 = 2;

include!(concat!(env!("OUT_DIR"), "/calib3d.consts.rs"));

// identifier: cvRANSACUpdateNumIters_double_p_double_err_prob_int_model_points_int_max_iters
pub fn cv_ransac_update_num_iters(p: f64, err_prob: f64, model_points: i32, max_iters: i32) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cvRANSACUpdateNumIters_double_p_double_err_prob_int_model_points_int_max_iters(p, err_prob, model_points, max_iters);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_RQDecomp3x3_InputArray_src_OutputArray_mtxR_OutputArray_mtxQ_OutputArray_Qx_OutputArray_Qy_OutputArray_Qz
/// Computes RQ decomposition of 3x3 matrix
///
/// default value for arguments:
///   - Qx: default noArray()
///   - Qy: default noArray()
///   - Qz: default noArray()
pub fn rq_decomp3x3(src:& ::core::Mat, mtxR:& ::core::Mat, mtxQ:& ::core::Mat, Qx:& ::core::Mat, Qy:& ::core::Mat, Qz:& ::core::Mat) -> Result<::core::Vec3d,String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_RQDecomp3x3_InputArray_src_OutputArray_mtxR_OutputArray_mtxQ_OutputArray_Qx_OutputArray_Qy_OutputArray_Qz(src.as_raw_Mat(), mtxR.as_raw_Mat(), mtxQ.as_raw_Mat(), Qx.as_raw_Mat(), Qy.as_raw_Mat(), Qz.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_Rodrigues_InputArray_src_OutputArray_dst_OutputArray_jacobian
/// converts rotation vector to rotation matrix or vice versa using Rodrigues transformation
///
/// default value for arguments:
///   - jacobian: default noArray()
pub fn rodrigues(src:& ::core::Mat, dst:& ::core::Mat, jacobian:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_Rodrigues_InputArray_src_OutputArray_dst_OutputArray_jacobian(src.as_raw_Mat(), dst.as_raw_Mat(), jacobian.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_calibrationMatrixValues_InputArray_cameraMatrix_Size_imageSize_double_apertureWidth_double_apertureHeight_double_fovx_double_fovy_double_focalLength_Point2d_principalPoint_double_aspectRatio
/// computes several useful camera characteristics from the camera matrix, camera frame resolution and the physical sensor size.
pub fn calibration_matrix_values(cameraMatrix:& ::core::Mat, imageSize: ::core::Size, apertureWidth: f64, apertureHeight: f64, fovx: f64, fovy: f64, focalLength: f64, principalPoint: ::core::Point2d, aspectRatio: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_calibrationMatrixValues_InputArray_cameraMatrix_Size_imageSize_double_apertureWidth_double_apertureHeight_double_fovx_double_fovy_double_focalLength_Point2d_principalPoint_double_aspectRatio(cameraMatrix.as_raw_Mat(), imageSize, apertureWidth, apertureHeight, fovx, fovy, focalLength, principalPoint, aspectRatio);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_composeRT_InputArray_rvec1_InputArray_tvec1_InputArray_rvec2_InputArray_tvec2_OutputArray_rvec3_OutputArray_tvec3_OutputArray_dr3dr1_OutputArray_dr3dt1_OutputArray_dr3dr2_OutputArray_dr3dt2_OutputArray_dt3dr1_OutputArray_dt3dt1_OutputArray_dt3dr2_OutputArray_dt3dt2
/// composes 2 [R|t] transformations together. Also computes the derivatives of the result w.r.t the arguments
///
/// default value for arguments:
///   - dr3dr1: default noArray()
///   - dr3dt1: default noArray()
///   - dr3dr2: default noArray()
///   - dr3dt2: default noArray()
///   - dt3dr1: default noArray()
///   - dt3dt1: default noArray()
///   - dt3dr2: default noArray()
///   - dt3dt2: default noArray()
pub fn compose_rt(rvec1:& ::core::Mat, tvec1:& ::core::Mat, rvec2:& ::core::Mat, tvec2:& ::core::Mat, rvec3:& ::core::Mat, tvec3:& ::core::Mat, dr3dr1:& ::core::Mat, dr3dt1:& ::core::Mat, dr3dr2:& ::core::Mat, dr3dt2:& ::core::Mat, dt3dr1:& ::core::Mat, dt3dt1:& ::core::Mat, dt3dr2:& ::core::Mat, dt3dt2:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_composeRT_InputArray_rvec1_InputArray_tvec1_InputArray_rvec2_InputArray_tvec2_OutputArray_rvec3_OutputArray_tvec3_OutputArray_dr3dr1_OutputArray_dr3dt1_OutputArray_dr3dr2_OutputArray_dr3dt2_OutputArray_dt3dr1_OutputArray_dt3dt1_OutputArray_dt3dr2_OutputArray_dt3dt2(rvec1.as_raw_Mat(), tvec1.as_raw_Mat(), rvec2.as_raw_Mat(), tvec2.as_raw_Mat(), rvec3.as_raw_Mat(), tvec3.as_raw_Mat(), dr3dr1.as_raw_Mat(), dr3dt1.as_raw_Mat(), dr3dr2.as_raw_Mat(), dr3dt2.as_raw_Mat(), dt3dr1.as_raw_Mat(), dt3dt1.as_raw_Mat(), dt3dr2.as_raw_Mat(), dt3dt2.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_computeCorrespondEpilines_InputArray_points_int_whichImage_InputArray_F_OutputArray_lines
/// finds coordinates of epipolar lines corresponding the specified points
pub fn compute_correspond_epilines(points:& ::core::Mat, whichImage: i32, F:& ::core::Mat, lines:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_computeCorrespondEpilines_InputArray_points_int_whichImage_InputArray_F_OutputArray_lines(points.as_raw_Mat(), whichImage, F.as_raw_Mat(), lines.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_convertPointsFromHomogeneous_InputArray_src_OutputArray_dst
/// converts point coordinates from homogeneous to normal pixel coordinates ((x,y,z)->(x/z, y/z))
pub fn convert_points_from_homogeneous(src:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_convertPointsFromHomogeneous_InputArray_src_OutputArray_dst(src.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_convertPointsHomogeneous_InputArray_src_OutputArray_dst
/// for backward compatibility
pub fn convert_points_homogeneous(src:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_convertPointsHomogeneous_InputArray_src_OutputArray_dst(src.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_convertPointsToHomogeneous_InputArray_src_OutputArray_dst
/// converts point coordinates from normal pixel coordinates to homogeneous coordinates ((x,y)->(x,y,1))
pub fn convert_points_to_homogeneous(src:& ::core::Mat, dst:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_convertPointsToHomogeneous_InputArray_src_OutputArray_dst(src.as_raw_Mat(), dst.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_correctMatches_InputArray_F_InputArray_points1_InputArray_points2_OutputArray_newPoints1_OutputArray_newPoints2
pub fn correct_matches(F:& ::core::Mat, points1:& ::core::Mat, points2:& ::core::Mat, newPoints1:& ::core::Mat, newPoints2:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_correctMatches_InputArray_F_InputArray_points1_InputArray_points2_OutputArray_newPoints1_OutputArray_newPoints2(F.as_raw_Mat(), points1.as_raw_Mat(), points2.as_raw_Mat(), newPoints1.as_raw_Mat(), newPoints2.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_decomposeProjectionMatrix_InputArray_projMatrix_OutputArray_cameraMatrix_OutputArray_rotMatrix_OutputArray_transVect_OutputArray_rotMatrixX_OutputArray_rotMatrixY_OutputArray_rotMatrixZ_OutputArray_eulerAngles
/// Decomposes the projection matrix into camera matrix and the rotation martix and the translation vector
///
/// default value for arguments:
///   - rotMatrixX: default noArray()
///   - rotMatrixY: default noArray()
///   - rotMatrixZ: default noArray()
///   - eulerAngles: default noArray()
pub fn decompose_projection_matrix(projMatrix:& ::core::Mat, cameraMatrix:& ::core::Mat, rotMatrix:& ::core::Mat, transVect:& ::core::Mat, rotMatrixX:& ::core::Mat, rotMatrixY:& ::core::Mat, rotMatrixZ:& ::core::Mat, eulerAngles:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_decomposeProjectionMatrix_InputArray_projMatrix_OutputArray_cameraMatrix_OutputArray_rotMatrix_OutputArray_transVect_OutputArray_rotMatrixX_OutputArray_rotMatrixY_OutputArray_rotMatrixZ_OutputArray_eulerAngles(projMatrix.as_raw_Mat(), cameraMatrix.as_raw_Mat(), rotMatrix.as_raw_Mat(), transVect.as_raw_Mat(), rotMatrixX.as_raw_Mat(), rotMatrixY.as_raw_Mat(), rotMatrixZ.as_raw_Mat(), eulerAngles.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_estimateAffine3D_InputArray_src_InputArray_dst_OutputArray_out_OutputArray_inliers_double_ransacThreshold_double_confidence
///
/// default value for arguments:
///   - ransacThreshold: default 3
///   - confidence: default 0.99
pub fn estimate_affine3_d(src:& ::core::Mat, dst:& ::core::Mat, out:& ::core::Mat, inliers:& ::core::Mat, ransacThreshold: f64, confidence: f64) -> Result<i32,String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_estimateAffine3D_InputArray_src_InputArray_dst_OutputArray_out_OutputArray_inliers_double_ransacThreshold_double_confidence(src.as_raw_Mat(), dst.as_raw_Mat(), out.as_raw_Mat(), inliers.as_raw_Mat(), ransacThreshold, confidence);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_findChessboardCorners_InputArray_image_Size_patternSize_OutputArray_corners_int_flags
/// finds checkerboard pattern of the specified size in the image
///
/// default value for arguments:
///   - flags: default CALIB_CB_ADAPTIVE_THRESH+CALIB_CB_NORMALIZE_IMAGE
pub fn find_chessboard_corners(image:& ::core::Mat, patternSize: ::core::Size, corners:& ::core::Mat, flags: i32) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_findChessboardCorners_InputArray_image_Size_patternSize_OutputArray_corners_int_flags(image.as_raw_Mat(), patternSize, corners.as_raw_Mat(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_findCirclesGridDefault_InputArray_image_Size_patternSize_OutputArray_centers_int_flags
/// the deprecated function. Use findCirclesGrid() instead of it.
///
/// default value for arguments:
///   - flags: default CALIB_CB_SYMMETRIC_GRID
pub fn find_circles_grid_default(image:& ::core::Mat, patternSize: ::core::Size, centers:& ::core::Mat, flags: i32) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_findCirclesGridDefault_InputArray_image_Size_patternSize_OutputArray_centers_int_flags(image.as_raw_Mat(), patternSize, centers.as_raw_Mat(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_findFundamentalMat_InputArray_points1_InputArray_points2_OutputArray_mask_int_method_double_param1_double_param2
/// variant of findFundamentalMat for backward compatibility
///
/// default value for arguments:
///   - method: default FM_RANSAC
///   - param1: default 3.
///   - param2: default 0.99
pub fn find_fundamental_mat(points1:& ::core::Mat, points2:& ::core::Mat, mask:& ::core::Mat, method: i32, param1: f64, param2: f64) -> Result<::core::Mat,String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_findFundamentalMat_InputArray_points1_InputArray_points2_OutputArray_mask_int_method_double_param1_double_param2(points1.as_raw_Mat(), points2.as_raw_Mat(), mask.as_raw_Mat(), method, param1, param2);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::core::Mat{ ptr: rv.result })
  }
}

// identifier: cv_findHomography_InputArray_srcPoints_InputArray_dstPoints_OutputArray_mask_int_method_double_ransacReprojThreshold
/// variant of findHomography for backward compatibility
///
/// default value for arguments:
///   - method: default 0
///   - ransacReprojThreshold: default 3
pub fn find_homography(srcPoints:& ::core::Mat, dstPoints:& ::core::Mat, mask:& ::core::Mat, method: i32, ransacReprojThreshold: f64) -> Result<::core::Mat,String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_findHomography_InputArray_srcPoints_InputArray_dstPoints_OutputArray_mask_int_method_double_ransacReprojThreshold(srcPoints.as_raw_Mat(), dstPoints.as_raw_Mat(), mask.as_raw_Mat(), method, ransacReprojThreshold);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::core::Mat{ ptr: rv.result })
  }
}

// identifier: cv_findHomography_InputArray_srcPoints_InputArray_dstPoints_int_method_double_ransacReprojThreshold_OutputArray_mask
/// computes the best-fit perspective transformation mapping srcPoints to dstPoints.
///
/// default value for arguments:
///   - method: default 0
///   - ransacReprojThreshold: default 3
///   - mask: default noArray()
pub fn find_homography_1(srcPoints:& ::core::Mat, dstPoints:& ::core::Mat, method: i32, ransacReprojThreshold: f64, mask:& ::core::Mat) -> Result<::core::Mat,String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_findHomography_InputArray_srcPoints_InputArray_dstPoints_int_method_double_ransacReprojThreshold_OutputArray_mask(srcPoints.as_raw_Mat(), dstPoints.as_raw_Mat(), method, ransacReprojThreshold, mask.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(::core::Mat{ ptr: rv.result })
  }
}

// identifier: cv_fisheye_distortPoints_InputArray_undistorted_OutputArray_distorted_InputArray_K_InputArray_D_double_alpha
/// distorts 2D points using fisheye model
///
/// default value for arguments:
///   - alpha: default 0
pub fn distort_points(undistorted:& ::core::Mat, distorted:& ::core::Mat, K:& ::core::Mat, D:& ::core::Mat, alpha: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_fisheye_distortPoints_InputArray_undistorted_OutputArray_distorted_InputArray_K_InputArray_D_double_alpha(undistorted.as_raw_Mat(), distorted.as_raw_Mat(), K.as_raw_Mat(), D.as_raw_Mat(), alpha);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_fisheye_projectPoints_InputArray_objectPoints_OutputArray_imagePoints_InputArray_rvec_InputArray_tvec_InputArray_K_InputArray_D_double_alpha_OutputArray_jacobian
/// projects points using fisheye model
///
/// default value for arguments:
///   - alpha: default 0
///   - jacobian: default noArray()
pub fn fisheye_project_points(objectPoints:& ::core::Mat, imagePoints:& ::core::Mat, rvec:& ::core::Mat, tvec:& ::core::Mat, K:& ::core::Mat, D:& ::core::Mat, alpha: f64, jacobian:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_fisheye_projectPoints_InputArray_objectPoints_OutputArray_imagePoints_InputArray_rvec_InputArray_tvec_InputArray_K_InputArray_D_double_alpha_OutputArray_jacobian(objectPoints.as_raw_Mat(), imagePoints.as_raw_Mat(), rvec.as_raw_Mat(), tvec.as_raw_Mat(), K.as_raw_Mat(), D.as_raw_Mat(), alpha, jacobian.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_fisheye_undistortImage_InputArray_distorted_OutputArray_undistorted_InputArray_K_InputArray_D_InputArray_Knew_Size_new_size
/// undistorts image, optionally changes resolution and camera matrix. If Knew zero identity matrix is used
///
/// default value for arguments:
///   - Knew: default cv::noArray()
///   - new_size: default Size()
pub fn fisheye_undistort_image(distorted:& ::core::Mat, undistorted:& ::core::Mat, K:& ::core::Mat, D:& ::core::Mat, Knew:& ::core::Mat, new_size: ::core::Size) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_fisheye_undistortImage_InputArray_distorted_OutputArray_undistorted_InputArray_K_InputArray_D_InputArray_Knew_Size_new_size(distorted.as_raw_Mat(), undistorted.as_raw_Mat(), K.as_raw_Mat(), D.as_raw_Mat(), Knew.as_raw_Mat(), new_size);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_fisheye_undistortPoints_InputArray_distorted_OutputArray_undistorted_InputArray_K_InputArray_D_InputArray_R_InputArray_P
/// undistorts 2D points using fisheye model
///
/// default value for arguments:
///   - R: default noArray()
///   - P: default noArray()
pub fn fisheye_undistort_points(distorted:& ::core::Mat, undistorted:& ::core::Mat, K:& ::core::Mat, D:& ::core::Mat, R:& ::core::Mat, P:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_fisheye_undistortPoints_InputArray_distorted_OutputArray_undistorted_InputArray_K_InputArray_D_InputArray_R_InputArray_P(distorted.as_raw_Mat(), undistorted.as_raw_Mat(), K.as_raw_Mat(), D.as_raw_Mat(), R.as_raw_Mat(), P.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_getValidDisparityROI_Rect_roi1_Rect_roi2_int_minDisparity_int_numberOfDisparities_int_SADWindowSize
/// computes valid disparity ROI from the valid ROIs of the rectified images (that are returned by cv::stereoRectify())
pub fn get_valid_disparity_roi(roi1: ::core::Rect, roi2: ::core::Rect, minDisparity: i32, numberOfDisparities: i32, SADWindowSize: i32) -> Result<::core::Rect,String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_getValidDisparityROI_Rect_roi1_Rect_roi2_int_minDisparity_int_numberOfDisparities_int_SADWindowSize(roi1, roi2, minDisparity, numberOfDisparities, SADWindowSize);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_matMulDeriv_InputArray_A_InputArray_B_OutputArray_dABdA_OutputArray_dABdB
/// computes derivatives of the matrix product w.r.t each of the multiplied matrix coefficients
pub fn mat_mul_deriv(A:& ::core::Mat, B:& ::core::Mat, dABdA:& ::core::Mat, dABdB:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_matMulDeriv_InputArray_A_InputArray_B_OutputArray_dABdA_OutputArray_dABdB(A.as_raw_Mat(), B.as_raw_Mat(), dABdA.as_raw_Mat(), dABdB.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_projectPoints_InputArray_objectPoints_InputArray_rvec_InputArray_tvec_InputArray_cameraMatrix_InputArray_distCoeffs_OutputArray_imagePoints_OutputArray_jacobian_double_aspectRatio
/// projects points from the model coordinate space to the image coordinates. Also computes derivatives of the image coordinates w.r.t the intrinsic and extrinsic camera parameters
///
/// default value for arguments:
///   - jacobian: default noArray()
///   - aspectRatio: default 0
pub fn project_points(objectPoints:& ::core::Mat, rvec:& ::core::Mat, tvec:& ::core::Mat, cameraMatrix:& ::core::Mat, distCoeffs:& ::core::Mat, imagePoints:& ::core::Mat, jacobian:& ::core::Mat, aspectRatio: f64) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_projectPoints_InputArray_objectPoints_InputArray_rvec_InputArray_tvec_InputArray_cameraMatrix_InputArray_distCoeffs_OutputArray_imagePoints_OutputArray_jacobian_double_aspectRatio(objectPoints.as_raw_Mat(), rvec.as_raw_Mat(), tvec.as_raw_Mat(), cameraMatrix.as_raw_Mat(), distCoeffs.as_raw_Mat(), imagePoints.as_raw_Mat(), jacobian.as_raw_Mat(), aspectRatio);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_reprojectImageTo3D_InputArray_disparity_OutputArray__3dImage_InputArray_Q_bool_handleMissingValues_int_ddepth
/// reprojects disparity image to 3D: (x,y,d)->(X,Y,Z) using the matrix Q returned by cv::stereoRectify
///
/// default value for arguments:
///   - handleMissingValues: default false
///   - ddepth: default -1
pub fn reproject_image_to3_d(disparity:& ::core::Mat, _3dImage:& ::core::Mat, Q:& ::core::Mat, handleMissingValues: bool, ddepth: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_reprojectImageTo3D_InputArray_disparity_OutputArray__3dImage_InputArray_Q_bool_handleMissingValues_int_ddepth(disparity.as_raw_Mat(), _3dImage.as_raw_Mat(), Q.as_raw_Mat(), handleMissingValues, ddepth);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_solvePnPRansac_InputArray_objectPoints_InputArray_imagePoints_InputArray_cameraMatrix_InputArray_distCoeffs_OutputArray_rvec_OutputArray_tvec_bool_useExtrinsicGuess_int_iterationsCount_float_reprojectionError_int_minInliersCount_OutputArray_inliers_int_flags
/// computes the camera pose from a few 3D points and the corresponding projections. The outliers are possible.
///
/// default value for arguments:
///   - useExtrinsicGuess: default false
///   - iterationsCount: default 100
///   - reprojectionError: default 8.0
///   - minInliersCount: default 100
///   - inliers: default noArray()
///   - flags: default ITERATIVE
pub fn solve_pn_p_ransac(objectPoints:& ::core::Mat, imagePoints:& ::core::Mat, cameraMatrix:& ::core::Mat, distCoeffs:& ::core::Mat, rvec:& ::core::Mat, tvec:& ::core::Mat, useExtrinsicGuess: bool, iterationsCount: i32, reprojectionError: f32, minInliersCount: i32, inliers:& ::core::Mat, flags: i32) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_solvePnPRansac_InputArray_objectPoints_InputArray_imagePoints_InputArray_cameraMatrix_InputArray_distCoeffs_OutputArray_rvec_OutputArray_tvec_bool_useExtrinsicGuess_int_iterationsCount_float_reprojectionError_int_minInliersCount_OutputArray_inliers_int_flags(objectPoints.as_raw_Mat(), imagePoints.as_raw_Mat(), cameraMatrix.as_raw_Mat(), distCoeffs.as_raw_Mat(), rvec.as_raw_Mat(), tvec.as_raw_Mat(), useExtrinsicGuess, iterationsCount, reprojectionError, minInliersCount, inliers.as_raw_Mat(), flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}

// identifier: cv_solvePnP_InputArray_objectPoints_InputArray_imagePoints_InputArray_cameraMatrix_InputArray_distCoeffs_OutputArray_rvec_OutputArray_tvec_bool_useExtrinsicGuess_int_flags
///
/// default value for arguments:
///   - useExtrinsicGuess: default false
///   - flags: default ITERATIVE
pub fn solve_pn_p(objectPoints:& ::core::Mat, imagePoints:& ::core::Mat, cameraMatrix:& ::core::Mat, distCoeffs:& ::core::Mat, rvec:& ::core::Mat, tvec:& ::core::Mat, useExtrinsicGuess: bool, flags: i32) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_solvePnP_InputArray_objectPoints_InputArray_imagePoints_InputArray_cameraMatrix_InputArray_distCoeffs_OutputArray_rvec_OutputArray_tvec_bool_useExtrinsicGuess_int_flags(objectPoints.as_raw_Mat(), imagePoints.as_raw_Mat(), cameraMatrix.as_raw_Mat(), distCoeffs.as_raw_Mat(), rvec.as_raw_Mat(), tvec.as_raw_Mat(), useExtrinsicGuess, flags);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_stereoRectifyUncalibrated_InputArray_points1_InputArray_points2_InputArray_F_Size_imgSize_OutputArray_H1_OutputArray_H2_double_threshold
/// computes the rectification transformation for an uncalibrated stereo camera (zero distortion is assumed)
///
/// default value for arguments:
///   - threshold: default 5
pub fn stereo_rectify_uncalibrated(points1:& ::core::Mat, points2:& ::core::Mat, F:& ::core::Mat, imgSize: ::core::Size, H1:& ::core::Mat, H2:& ::core::Mat, threshold: f64) -> Result<bool,String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_stereoRectifyUncalibrated_InputArray_points1_InputArray_points2_InputArray_F_Size_imgSize_OutputArray_H1_OutputArray_H2_double_threshold(points1.as_raw_Mat(), points2.as_raw_Mat(), F.as_raw_Mat(), imgSize, H1.as_raw_Mat(), H2.as_raw_Mat(), threshold);
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(rv.result)
  }
}

// identifier: cv_triangulatePoints_InputArray_projMatr1_InputArray_projMatr2_InputArray_projPoints1_InputArray_projPoints2_OutputArray_points4D
pub fn triangulate_points(projMatr1:& ::core::Mat, projMatr2:& ::core::Mat, projPoints1:& ::core::Mat, projPoints2:& ::core::Mat, points4D:& ::core::Mat) -> Result<(),String> {
  unsafe {
    let rv = ::sys::cv_calib3d_cv_triangulatePoints_InputArray_projMatr1_InputArray_projMatr2_InputArray_projPoints1_InputArray_projPoints2_OutputArray_points4D(projMatr1.as_raw_Mat(), projMatr2.as_raw_Mat(), projPoints1.as_raw_Mat(), projPoints2.as_raw_Mat(), points4D.as_raw_Mat());
    if rv.error_msg as i32 != 0i32 {
        let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
        ::libc::free(rv.error_msg as *mut c_void);
        return Err(String::from_utf8(v).unwrap())
    }
    Ok(())
  }
}


// boxed class cv::StereoBM
#[allow(dead_code)]
pub struct StereoBM {
    pub ptr: *mut c_void
}
impl Drop for ::calib3d::StereoBM {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_StereoBM(self.ptr) };
    }
}
impl ::calib3d::StereoBM {
    pub fn as_raw_StereoBM(&self) -> *mut c_void { self.ptr }
}
impl StereoBM {

  // identifier: cv_StereoBM_StereoBM
  /// the default constructor
  pub fn default() -> Result<::calib3d::StereoBM,String> {
    unsafe {
      let rv = ::sys::cv_calib3d_cv_StereoBM_StereoBM();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::calib3d::StereoBM{ ptr: rv.result })
    }
  }

  // identifier: cv_StereoBM_StereoBM_int_preset_int_ndisparities_int_SADWindowSize
  /// the full constructor taking the camera-specific preset, number of disparities and the SAD window size
  ///
  /// default value for arguments:
  ///   - ndisparities: default 0
  ///   - SADWindowSize: default 21
  pub fn new(preset: i32, ndisparities: i32, SADWindowSize: i32) -> Result<::calib3d::StereoBM,String> {
    unsafe {
      let rv = ::sys::cv_calib3d_cv_StereoBM_StereoBM_int_preset_int_ndisparities_int_SADWindowSize(preset, ndisparities, SADWindowSize);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::calib3d::StereoBM{ ptr: rv.result })
    }
  }

  // identifier: cv_StereoBM_init_int_preset_int_ndisparities_int_SADWindowSize
  /// the method that reinitializes the state. The previous content is destroyed
  ///
  /// default value for arguments:
  ///   - ndisparities: default 0
  ///   - SADWindowSize: default 21
  pub fn init(&mut self, preset: i32, ndisparities: i32, SADWindowSize: i32) -> Result<(),String> {
    unsafe {
      let rv = ::sys::cv_calib3d_cv_StereoBM_init_int_preset_int_ndisparities_int_SADWindowSize(self.as_raw_StereoBM(), preset, ndisparities, SADWindowSize);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(())
    }
  }

}

// boxed class cv::StereoSGBM
#[allow(dead_code)]
pub struct StereoSGBM {
    pub ptr: *mut c_void
}
impl Drop for ::calib3d::StereoSGBM {
    fn drop(&mut self) {
        unsafe { ::sys::cv_delete_StereoSGBM(self.ptr) };
    }
}
impl ::calib3d::StereoSGBM {
    pub fn as_raw_StereoSGBM(&self) -> *mut c_void { self.ptr }
}
impl StereoSGBM {

  // identifier: cv_StereoSGBM_StereoSGBM
  /// the default constructor
  pub fn default() -> Result<::calib3d::StereoSGBM,String> {
    unsafe {
      let rv = ::sys::cv_calib3d_cv_StereoSGBM_StereoSGBM();
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::calib3d::StereoSGBM{ ptr: rv.result })
    }
  }

  // identifier: cv_StereoSGBM_StereoSGBM_int_minDisparity_int_numDisparities_int_SADWindowSize_int_P1_int_P2_int_disp12MaxDiff_int_preFilterCap_int_uniquenessRatio_int_speckleWindowSize_int_speckleRange_bool_fullDP
  /// the full constructor taking all the necessary algorithm parameters
  ///
  /// default value for arguments:
  ///   - P1: default 0
  ///   - P2: default 0
  ///   - disp12MaxDiff: default 0
  ///   - preFilterCap: default 0
  ///   - uniquenessRatio: default 0
  ///   - speckleWindowSize: default 0
  ///   - speckleRange: default 0
  ///   - fullDP: default false
  pub fn new(minDisparity: i32, numDisparities: i32, SADWindowSize: i32, P1: i32, P2: i32, disp12MaxDiff: i32, preFilterCap: i32, uniquenessRatio: i32, speckleWindowSize: i32, speckleRange: i32, fullDP: bool) -> Result<::calib3d::StereoSGBM,String> {
    unsafe {
      let rv = ::sys::cv_calib3d_cv_StereoSGBM_StereoSGBM_int_minDisparity_int_numDisparities_int_SADWindowSize_int_P1_int_P2_int_disp12MaxDiff_int_preFilterCap_int_uniquenessRatio_int_speckleWindowSize_int_speckleRange_bool_fullDP(minDisparity, numDisparities, SADWindowSize, P1, P2, disp12MaxDiff, preFilterCap, uniquenessRatio, speckleWindowSize, speckleRange, fullDP);
      if rv.error_msg as i32 != 0i32 {
          let v = CStr::from_ptr(rv.error_msg).to_bytes().to_vec();
          ::libc::free(rv.error_msg as *mut c_void);
          return Err(String::from_utf8(v).unwrap())
      }
      Ok(::calib3d::StereoSGBM{ ptr: rv.result })
    }
  }

}
