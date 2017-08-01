
extern "C" {
    fn cv_new_VectorOfchar() -> *mut c_void;
    fn cv_delete_VectorOfchar(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfchar(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfchar_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfchar_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfchar {
    pub ptr: *mut c_void
}
impl ::types::VectorOfchar {
    pub fn new() -> VectorOfchar {
        unsafe { return VectorOfchar { ptr: cv_new_VectorOfchar() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfchar_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfchar(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfchar {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfchar(self.ptr) };
    }
}

impl ::types::VectorOfchar {
    pub fn push(&mut self, val: i8) {
        unsafe { cv_push_VectorOfchar(self.ptr, &val as *const _ as *const _) }
    }
}
impl ::std::ops::Deref for VectorOfchar {
    type Target = [i8];
    fn deref(&self) -> &[i8] {
        unsafe {
            let length = cv_VectorOfchar_len(self.ptr) as usize;
            let data = cv_VectorOfchar_data(self.ptr);
            ::std::slice::from_raw_parts(::std::mem::transmute(data), length)
        }
    }
}
