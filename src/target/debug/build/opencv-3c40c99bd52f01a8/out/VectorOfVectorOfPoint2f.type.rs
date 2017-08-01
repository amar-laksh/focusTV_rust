
extern "C" {
    fn cv_new_VectorOfVectorOfPoint2f() -> *mut c_void;
    fn cv_delete_VectorOfVectorOfPoint2f(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfVectorOfPoint2f(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfVectorOfPoint2f_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfVectorOfPoint2f_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfVectorOfPoint2f {
    pub ptr: *mut c_void
}
impl ::types::VectorOfVectorOfPoint2f {
    pub fn new() -> VectorOfVectorOfPoint2f {
        unsafe { return VectorOfVectorOfPoint2f { ptr: cv_new_VectorOfVectorOfPoint2f() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfVectorOfPoint2f_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfVectorOfPoint2f(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfVectorOfPoint2f {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfVectorOfPoint2f(self.ptr) };
    }
}

impl ::types::VectorOfVectorOfPoint2f {
    pub fn push(&mut self, val: ::types::VectorOfPoint2f) {
        unsafe { cv_push_VectorOfVectorOfPoint2f(self.ptr, val.ptr) }
    }
}
