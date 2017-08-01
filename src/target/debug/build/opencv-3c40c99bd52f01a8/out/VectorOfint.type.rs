
extern "C" {
    fn cv_new_VectorOfint() -> *mut c_void;
    fn cv_delete_VectorOfint(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfint(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfint_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfint_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfint {
    pub ptr: *mut c_void
}
impl ::types::VectorOfint {
    pub fn new() -> VectorOfint {
        unsafe { return VectorOfint { ptr: cv_new_VectorOfint() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfint_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfint(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfint {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfint(self.ptr) };
    }
}

impl ::types::VectorOfint {
    pub fn push(&mut self, val: i32) {
        unsafe { cv_push_VectorOfint(self.ptr, &val as *const _ as *const _) }
    }
}
impl ::std::ops::Deref for VectorOfint {
    type Target = [i32];
    fn deref(&self) -> &[i32] {
        unsafe {
            let length = cv_VectorOfint_len(self.ptr) as usize;
            let data = cv_VectorOfint_data(self.ptr);
            ::std::slice::from_raw_parts(::std::mem::transmute(data), length)
        }
    }
}
