/// 

// safe rust wrapper for PtrOfFeatureEvaluator
#[allow(dead_code)]
pub struct PtrOfFeatureEvaluator {
    pub ptr: *mut c_void
}
impl ::types::PtrOfFeatureEvaluator {
    pub unsafe fn as_raw_PtrOfFeatureEvaluator(&self) -> *mut c_void {
        self.ptr
    }
}
