
extern "C" {
    fn cv_new_VectorOfdouble() -> *mut c_void;
    fn cv_delete_VectorOfdouble(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfdouble(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfdouble_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfdouble_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfdouble {
    pub ptr: *mut c_void
}
impl ::types::VectorOfdouble {
    pub fn new() -> VectorOfdouble {
        unsafe { return VectorOfdouble { ptr: cv_new_VectorOfdouble() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfdouble_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfdouble(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfdouble {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfdouble(self.ptr) };
    }
}

impl ::types::VectorOfdouble {
    pub fn push(&mut self, val: f64) {
        unsafe { cv_push_VectorOfdouble(self.ptr, &val as *const _ as *const _) }
    }
}
impl ::std::ops::Deref for VectorOfdouble {
    type Target = [f64];
    fn deref(&self) -> &[f64] {
        unsafe {
            let length = cv_VectorOfdouble_len(self.ptr) as usize;
            let data = cv_VectorOfdouble_data(self.ptr);
            ::std::slice::from_raw_parts(::std::mem::transmute(data), length)
        }
    }
}
