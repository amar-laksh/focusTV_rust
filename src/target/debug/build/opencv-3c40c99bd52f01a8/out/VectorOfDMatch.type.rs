
extern "C" {
    fn cv_new_VectorOfDMatch() -> *mut c_void;
    fn cv_delete_VectorOfDMatch(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfDMatch(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfDMatch_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfDMatch_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfDMatch {
    pub ptr: *mut c_void
}
impl ::types::VectorOfDMatch {
    pub fn new() -> VectorOfDMatch {
        unsafe { return VectorOfDMatch { ptr: cv_new_VectorOfDMatch() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfDMatch_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfDMatch(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfDMatch {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfDMatch(self.ptr) };
    }
}

impl ::types::VectorOfDMatch {
    pub fn push(&mut self, val: ::features2d::DMatch) {
        unsafe { cv_push_VectorOfDMatch(self.ptr, &val as *const _ as *const _) }
    }
}
impl ::std::ops::Deref for VectorOfDMatch {
    type Target = [::features2d::DMatch];
    fn deref(&self) -> &[::features2d::DMatch] {
        unsafe {
            let length = cv_VectorOfDMatch_len(self.ptr) as usize;
            let data = cv_VectorOfDMatch_data(self.ptr);
            ::std::slice::from_raw_parts(::std::mem::transmute(data), length)
        }
    }
}
