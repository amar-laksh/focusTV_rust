
// bool
#[repr(C)]
pub struct cv_return_value_char {
    pub error_msg: *const c_char,
    pub result: bool
}
