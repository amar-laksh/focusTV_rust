
// CvRNG
#[repr(C)]
pub struct cv_return_value_c_CvRNG {
    pub error_msg: *const c_char,
    pub result: ::core::CvRNG
}
