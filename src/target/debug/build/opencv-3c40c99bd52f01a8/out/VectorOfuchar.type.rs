
extern "C" {
    fn cv_new_VectorOfuchar() -> *mut c_void;
    fn cv_delete_VectorOfuchar(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfuchar(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfuchar_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfuchar_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfuchar {
    pub ptr: *mut c_void
}
impl ::types::VectorOfuchar {
    pub fn new() -> VectorOfuchar {
        unsafe { return VectorOfuchar { ptr: cv_new_VectorOfuchar() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfuchar_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfuchar(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfuchar {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfuchar(self.ptr) };
    }
}

impl ::types::VectorOfuchar {
    pub fn push(&mut self, val: u8) {
        unsafe { cv_push_VectorOfuchar(self.ptr, &val as *const _ as *const _) }
    }
}
impl ::std::ops::Deref for VectorOfuchar {
    type Target = [u8];
    fn deref(&self) -> &[u8] {
        unsafe {
            let length = cv_VectorOfuchar_len(self.ptr) as usize;
            let data = cv_VectorOfuchar_data(self.ptr);
            ::std::slice::from_raw_parts(::std::mem::transmute(data), length)
        }
    }
}
