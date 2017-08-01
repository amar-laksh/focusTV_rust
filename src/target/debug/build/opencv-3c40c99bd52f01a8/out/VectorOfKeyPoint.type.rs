
extern "C" {
    fn cv_new_VectorOfKeyPoint() -> *mut c_void;
    fn cv_delete_VectorOfKeyPoint(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfKeyPoint(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfKeyPoint_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfKeyPoint_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfKeyPoint {
    pub ptr: *mut c_void
}
impl ::types::VectorOfKeyPoint {
    pub fn new() -> VectorOfKeyPoint {
        unsafe { return VectorOfKeyPoint { ptr: cv_new_VectorOfKeyPoint() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfKeyPoint_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfKeyPoint(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfKeyPoint {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfKeyPoint(self.ptr) };
    }
}

impl ::types::VectorOfKeyPoint {
    pub fn push(&mut self, val: ::features2d::KeyPoint) {
        unsafe { cv_push_VectorOfKeyPoint(self.ptr, &val as *const _ as *const _) }
    }
}
impl ::std::ops::Deref for VectorOfKeyPoint {
    type Target = [::features2d::KeyPoint];
    fn deref(&self) -> &[::features2d::KeyPoint] {
        unsafe {
            let length = cv_VectorOfKeyPoint_len(self.ptr) as usize;
            let data = cv_VectorOfKeyPoint_data(self.ptr);
            ::std::slice::from_raw_parts(::std::mem::transmute(data), length)
        }
    }
}
