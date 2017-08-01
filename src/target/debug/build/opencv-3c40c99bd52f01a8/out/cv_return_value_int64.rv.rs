
// int64
#[repr(C)]
pub struct cv_return_value_int64 {
    pub error_msg: *const c_char,
    pub result: i64
}
