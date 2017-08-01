/// 

// safe rust wrapper for PtrOfGenericDescriptorMatcher
#[allow(dead_code)]
pub struct PtrOfGenericDescriptorMatcher {
    pub ptr: *mut c_void
}
impl ::types::PtrOfGenericDescriptorMatcher {
    pub unsafe fn as_raw_PtrOfGenericDescriptorMatcher(&self) -> *mut c_void {
        self.ptr
    }
}
