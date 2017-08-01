
// string
#[repr(C)]
pub struct cv_return_value_char_X {
    pub error_msg: *const c_char,
    pub result: *const c_char
}
