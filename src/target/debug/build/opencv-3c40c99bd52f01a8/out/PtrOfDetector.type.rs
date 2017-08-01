/// 

// safe rust wrapper for PtrOfDetector
#[allow(dead_code)]
pub struct PtrOfDetector {
    pub ptr: *mut c_void
}
impl ::types::PtrOfDetector {
    pub unsafe fn as_raw_PtrOfDetector(&self) -> *mut c_void {
        self.ptr
    }
}
