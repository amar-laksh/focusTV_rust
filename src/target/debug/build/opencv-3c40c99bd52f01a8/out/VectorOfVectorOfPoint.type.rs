
extern "C" {
    fn cv_new_VectorOfVectorOfPoint() -> *mut c_void;
    fn cv_delete_VectorOfVectorOfPoint(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfVectorOfPoint(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfVectorOfPoint_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfVectorOfPoint_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfVectorOfPoint {
    pub ptr: *mut c_void
}
impl ::types::VectorOfVectorOfPoint {
    pub fn new() -> VectorOfVectorOfPoint {
        unsafe { return VectorOfVectorOfPoint { ptr: cv_new_VectorOfVectorOfPoint() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfVectorOfPoint_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfVectorOfPoint(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfVectorOfPoint {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfVectorOfPoint(self.ptr) };
    }
}

impl ::types::VectorOfVectorOfPoint {
    pub fn push(&mut self, val: ::types::VectorOfPoint) {
        unsafe { cv_push_VectorOfVectorOfPoint(self.ptr, val.ptr) }
    }
}
