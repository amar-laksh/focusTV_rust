pub mod core;
pub mod imgproc;
pub mod highgui;
pub mod features2d;
pub mod photo;
pub mod video;
pub mod objdetect;
pub mod calib3d;
pub mod types {
  use libc::{ c_void, c_char, size_t };
  include!(concat!(env!("OUT_DIR"), "/PtrOfDetector.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/PtrOfFeatureDetector.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/PtrOfFeatureEvaluator.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/PtrOfFilterEngine.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/PtrOfGeneralizedHough.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/PtrOfGenericDescriptorMatcher.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfDMatch.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfKeyPoint.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfMat.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfObjectDetection.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfPoint.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfPoint2f.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfRect.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfString.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfVec4f.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfVec6f.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfVectorOfDMatch.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfVectorOfKeyPoint.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfVectorOfPoint.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfVectorOfPoint2f.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfVectorOfchar.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfVectorOfint.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfVectorOfuchar.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfchar.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfdouble.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOffloat.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfint.type.rs"));
  include!(concat!(env!("OUT_DIR"), "/VectorOfuchar.type.rs"));
}
#[doc(hidden)] pub mod sys {
  use libc::{ c_void, c_char, size_t };
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_c_CvRNG.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_c_DMatch.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_c_KeyPoint.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_c_Moments.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_c_Point.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_c_Point2d.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_c_Rect.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_c_Scalar.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_c_SimpleBlobDetector_Params.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_c_Size.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_c_Vec3d.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_char.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_char_X.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_double.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_float.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_int.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_int64.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_std_size_t.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_unsigned_charX.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_void.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/cv_return_value_void_X.rv.rs"));
  include!(concat!(env!("OUT_DIR"), "/core.externs.rs"));
  include!(concat!(env!("OUT_DIR"), "/imgproc.externs.rs"));
  include!(concat!(env!("OUT_DIR"), "/highgui.externs.rs"));
  include!(concat!(env!("OUT_DIR"), "/features2d.externs.rs"));
  include!(concat!(env!("OUT_DIR"), "/photo.externs.rs"));
  include!(concat!(env!("OUT_DIR"), "/video.externs.rs"));
  include!(concat!(env!("OUT_DIR"), "/objdetect.externs.rs"));
  include!(concat!(env!("OUT_DIR"), "/calib3d.externs.rs"));
}
