
// float
#[repr(C)]
pub struct cv_return_value_float {
    pub error_msg: *const c_char,
    pub result: f32
}
