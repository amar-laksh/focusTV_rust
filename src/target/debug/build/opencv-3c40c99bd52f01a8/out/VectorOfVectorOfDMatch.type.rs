
extern "C" {
    fn cv_new_VectorOfVectorOfDMatch() -> *mut c_void;
    fn cv_delete_VectorOfVectorOfDMatch(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfVectorOfDMatch(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfVectorOfDMatch_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfVectorOfDMatch_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfVectorOfDMatch {
    pub ptr: *mut c_void
}
impl ::types::VectorOfVectorOfDMatch {
    pub fn new() -> VectorOfVectorOfDMatch {
        unsafe { return VectorOfVectorOfDMatch { ptr: cv_new_VectorOfVectorOfDMatch() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfVectorOfDMatch_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfVectorOfDMatch(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfVectorOfDMatch {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfVectorOfDMatch(self.ptr) };
    }
}

impl ::types::VectorOfVectorOfDMatch {
    pub fn push(&mut self, val: ::types::VectorOfDMatch) {
        unsafe { cv_push_VectorOfVectorOfDMatch(self.ptr, val.ptr) }
    }
}
