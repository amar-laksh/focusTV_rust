
extern "C" {
    fn cv_new_VectorOfVectorOfint() -> *mut c_void;
    fn cv_delete_VectorOfVectorOfint(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfVectorOfint(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfVectorOfint_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfVectorOfint_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfVectorOfint {
    pub ptr: *mut c_void
}
impl ::types::VectorOfVectorOfint {
    pub fn new() -> VectorOfVectorOfint {
        unsafe { return VectorOfVectorOfint { ptr: cv_new_VectorOfVectorOfint() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfVectorOfint_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfVectorOfint(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfVectorOfint {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfVectorOfint(self.ptr) };
    }
}

impl ::types::VectorOfVectorOfint {
    pub fn push(&mut self, val: ::types::VectorOfint) {
        unsafe { cv_push_VectorOfVectorOfint(self.ptr, val.ptr) }
    }
}
