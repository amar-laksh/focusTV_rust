
// double
#[repr(C)]
pub struct cv_return_value_double {
    pub error_msg: *const c_char,
    pub result: f64
}
