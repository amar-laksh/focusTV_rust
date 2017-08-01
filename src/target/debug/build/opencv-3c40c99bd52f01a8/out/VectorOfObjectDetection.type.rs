
extern "C" {
    fn cv_new_VectorOfObjectDetection() -> *mut c_void;
    fn cv_delete_VectorOfObjectDetection(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfObjectDetection(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfObjectDetection_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfObjectDetection_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfObjectDetection {
    pub ptr: *mut c_void
}
impl ::types::VectorOfObjectDetection {
    pub fn new() -> VectorOfObjectDetection {
        unsafe { return VectorOfObjectDetection { ptr: cv_new_VectorOfObjectDetection() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfObjectDetection_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfObjectDetection(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfObjectDetection {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfObjectDetection(self.ptr) };
    }
}

impl ::types::VectorOfObjectDetection {
    pub fn push(&mut self, val: ::objdetect::LatentSvmDetector_ObjectDetection) {
        unsafe { cv_push_VectorOfObjectDetection(self.ptr, val.ptr) }
    }
}
