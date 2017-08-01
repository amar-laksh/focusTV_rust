
extern "C" {
    fn cv_new_VectorOfVec4f() -> *mut c_void;
    fn cv_delete_VectorOfVec4f(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfVec4f(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfVec4f_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfVec4f_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfVec4f {
    pub ptr: *mut c_void
}
impl ::types::VectorOfVec4f {
    pub fn new() -> VectorOfVec4f {
        unsafe { return VectorOfVec4f { ptr: cv_new_VectorOfVec4f() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfVec4f_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfVec4f(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfVec4f {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfVec4f(self.ptr) };
    }
}

impl ::types::VectorOfVec4f {
    pub fn push(&mut self, val: ::core::Vec4f) {
        unsafe { cv_push_VectorOfVec4f(self.ptr, &val as *const _ as *const _) }
    }
}
impl ::std::ops::Deref for VectorOfVec4f {
    type Target = [::core::Vec4f];
    fn deref(&self) -> &[::core::Vec4f] {
        unsafe {
            let length = cv_VectorOfVec4f_len(self.ptr) as usize;
            let data = cv_VectorOfVec4f_data(self.ptr);
            ::std::slice::from_raw_parts(::std::mem::transmute(data), length)
        }
    }
}
