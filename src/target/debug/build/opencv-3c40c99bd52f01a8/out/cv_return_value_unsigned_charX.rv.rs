
// uchar*
#[repr(C)]
pub struct cv_return_value_unsigned_charX {
    pub error_msg: *const c_char,
    pub result: *mut u8
}
