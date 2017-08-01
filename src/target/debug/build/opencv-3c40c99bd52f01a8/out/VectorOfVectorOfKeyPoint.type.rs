
extern "C" {
    fn cv_new_VectorOfVectorOfKeyPoint() -> *mut c_void;
    fn cv_delete_VectorOfVectorOfKeyPoint(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfVectorOfKeyPoint(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfVectorOfKeyPoint_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfVectorOfKeyPoint_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfVectorOfKeyPoint {
    pub ptr: *mut c_void
}
impl ::types::VectorOfVectorOfKeyPoint {
    pub fn new() -> VectorOfVectorOfKeyPoint {
        unsafe { return VectorOfVectorOfKeyPoint { ptr: cv_new_VectorOfVectorOfKeyPoint() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfVectorOfKeyPoint_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfVectorOfKeyPoint(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfVectorOfKeyPoint {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfVectorOfKeyPoint(self.ptr) };
    }
}

impl ::types::VectorOfVectorOfKeyPoint {
    pub fn push(&mut self, val: ::types::VectorOfKeyPoint) {
        unsafe { cv_push_VectorOfVectorOfKeyPoint(self.ptr, val.ptr) }
    }
}
