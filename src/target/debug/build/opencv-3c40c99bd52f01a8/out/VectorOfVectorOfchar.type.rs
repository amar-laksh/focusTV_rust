
extern "C" {
    fn cv_new_VectorOfVectorOfchar() -> *mut c_void;
    fn cv_delete_VectorOfVectorOfchar(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfVectorOfchar(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfVectorOfchar_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfVectorOfchar_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfVectorOfchar {
    pub ptr: *mut c_void
}
impl ::types::VectorOfVectorOfchar {
    pub fn new() -> VectorOfVectorOfchar {
        unsafe { return VectorOfVectorOfchar { ptr: cv_new_VectorOfVectorOfchar() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfVectorOfchar_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfVectorOfchar(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfVectorOfchar {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfVectorOfchar(self.ptr) };
    }
}

impl ::types::VectorOfVectorOfchar {
    pub fn push(&mut self, val: ::types::VectorOfchar) {
        unsafe { cv_push_VectorOfVectorOfchar(self.ptr, val.ptr) }
    }
}
