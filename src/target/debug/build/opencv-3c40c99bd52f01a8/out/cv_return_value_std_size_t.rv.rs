
// size_t
#[repr(C)]
pub struct cv_return_value_std_size_t {
    pub error_msg: *const c_char,
    pub result: size_t
}
