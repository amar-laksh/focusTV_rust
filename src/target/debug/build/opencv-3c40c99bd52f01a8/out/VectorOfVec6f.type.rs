
extern "C" {
    fn cv_new_VectorOfVec6f() -> *mut c_void;
    fn cv_delete_VectorOfVec6f(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfVec6f(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfVec6f_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfVec6f_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfVec6f {
    pub ptr: *mut c_void
}
impl ::types::VectorOfVec6f {
    pub fn new() -> VectorOfVec6f {
        unsafe { return VectorOfVec6f { ptr: cv_new_VectorOfVec6f() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfVec6f_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfVec6f(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfVec6f {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfVec6f(self.ptr) };
    }
}

impl ::types::VectorOfVec6f {
    pub fn push(&mut self, val: ::core::Vec6f) {
        unsafe { cv_push_VectorOfVec6f(self.ptr, &val as *const _ as *const _) }
    }
}
impl ::std::ops::Deref for VectorOfVec6f {
    type Target = [::core::Vec6f];
    fn deref(&self) -> &[::core::Vec6f] {
        unsafe {
            let length = cv_VectorOfVec6f_len(self.ptr) as usize;
            let data = cv_VectorOfVec6f_data(self.ptr);
            ::std::slice::from_raw_parts(::std::mem::transmute(data), length)
        }
    }
}
