
extern "C" {
    fn cv_new_VectorOfString() -> *mut c_void;
    fn cv_delete_VectorOfString(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfString(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfString_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfString_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfString {
    pub ptr: *mut c_void
}
impl ::types::VectorOfString {
    pub fn new() -> VectorOfString {
        unsafe { return VectorOfString { ptr: cv_new_VectorOfString() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfString_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfString(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfString {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfString(self.ptr) };
    }
}

impl ::types::VectorOfString {
    pub fn push(&mut self, val: String) {
        unsafe { cv_push_VectorOfString(self.ptr, &val as *const _ as *const _) }
    }
}
impl ::std::ops::Deref for VectorOfString {
    type Target = [String];
    fn deref(&self) -> &[String] {
        unsafe {
            let length = cv_VectorOfString_len(self.ptr) as usize;
            let data = cv_VectorOfString_data(self.ptr);
            ::std::slice::from_raw_parts(::std::mem::transmute(data), length)
        }
    }
}
