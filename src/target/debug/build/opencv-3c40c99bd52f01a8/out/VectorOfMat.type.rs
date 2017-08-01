
extern "C" {
    fn cv_new_VectorOfMat() -> *mut c_void;
    fn cv_delete_VectorOfMat(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfMat(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfMat_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfMat_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfMat {
    pub ptr: *mut c_void
}
impl ::types::VectorOfMat {
    pub fn new() -> VectorOfMat {
        unsafe { return VectorOfMat { ptr: cv_new_VectorOfMat() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfMat_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfMat(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfMat {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfMat(self.ptr) };
    }
}

impl ::types::VectorOfMat {
    pub fn push(&mut self, val: ::core::Mat) {
        unsafe { cv_push_VectorOfMat(self.ptr, val.ptr) }
    }
}
