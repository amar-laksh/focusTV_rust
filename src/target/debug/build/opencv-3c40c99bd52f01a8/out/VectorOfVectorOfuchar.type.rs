
extern "C" {
    fn cv_new_VectorOfVectorOfuchar() -> *mut c_void;
    fn cv_delete_VectorOfVectorOfuchar(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfVectorOfuchar(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfVectorOfuchar_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfVectorOfuchar_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfVectorOfuchar {
    pub ptr: *mut c_void
}
impl ::types::VectorOfVectorOfuchar {
    pub fn new() -> VectorOfVectorOfuchar {
        unsafe { return VectorOfVectorOfuchar { ptr: cv_new_VectorOfVectorOfuchar() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfVectorOfuchar_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfVectorOfuchar(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfVectorOfuchar {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfVectorOfuchar(self.ptr) };
    }
}

impl ::types::VectorOfVectorOfuchar {
    pub fn push(&mut self, val: ::types::VectorOfuchar) {
        unsafe { cv_push_VectorOfVectorOfuchar(self.ptr, val.ptr) }
    }
}
