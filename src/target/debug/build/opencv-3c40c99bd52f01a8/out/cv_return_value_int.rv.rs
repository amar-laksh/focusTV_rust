
// int
#[repr(C)]
pub struct cv_return_value_int {
    pub error_msg: *const c_char,
    pub result: i32
}
