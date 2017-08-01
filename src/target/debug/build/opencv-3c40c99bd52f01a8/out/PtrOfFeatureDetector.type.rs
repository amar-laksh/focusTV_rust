/// 

// safe rust wrapper for PtrOfFeatureDetector
#[allow(dead_code)]
pub struct PtrOfFeatureDetector {
    pub ptr: *mut c_void
}
impl ::types::PtrOfFeatureDetector {
    pub unsafe fn as_raw_PtrOfFeatureDetector(&self) -> *mut c_void {
        self.ptr
    }
}
