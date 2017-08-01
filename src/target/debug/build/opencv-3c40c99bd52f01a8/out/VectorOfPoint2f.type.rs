
extern "C" {
    fn cv_new_VectorOfPoint2f() -> *mut c_void;
    fn cv_delete_VectorOfPoint2f(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfPoint2f(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfPoint2f_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfPoint2f_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfPoint2f {
    pub ptr: *mut c_void
}
impl ::types::VectorOfPoint2f {
    pub fn new() -> VectorOfPoint2f {
        unsafe { return VectorOfPoint2f { ptr: cv_new_VectorOfPoint2f() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfPoint2f_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfPoint2f(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfPoint2f {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfPoint2f(self.ptr) };
    }
}

impl ::types::VectorOfPoint2f {
    pub fn push(&mut self, val: ::core::Point2f) {
        unsafe { cv_push_VectorOfPoint2f(self.ptr, &val as *const _ as *const _) }
    }
}
impl ::std::ops::Deref for VectorOfPoint2f {
    type Target = [::core::Point2f];
    fn deref(&self) -> &[::core::Point2f] {
        unsafe {
            let length = cv_VectorOfPoint2f_len(self.ptr) as usize;
            let data = cv_VectorOfPoint2f_data(self.ptr);
            ::std::slice::from_raw_parts(::std::mem::transmute(data), length)
        }
    }
}
