
extern "C" {
    fn cv_new_VectorOffloat() -> *mut c_void;
    fn cv_delete_VectorOffloat(ptr:*mut c_void) -> ();
    fn cv_push_VectorOffloat(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOffloat_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOffloat_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOffloat {
    pub ptr: *mut c_void
}
impl ::types::VectorOffloat {
    pub fn new() -> VectorOffloat {
        unsafe { return VectorOffloat { ptr: cv_new_VectorOffloat() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOffloat_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOffloat(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOffloat {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOffloat(self.ptr) };
    }
}

impl ::types::VectorOffloat {
    pub fn push(&mut self, val: f32) {
        unsafe { cv_push_VectorOffloat(self.ptr, &val as *const _ as *const _) }
    }
}
impl ::std::ops::Deref for VectorOffloat {
    type Target = [f32];
    fn deref(&self) -> &[f32] {
        unsafe {
            let length = cv_VectorOffloat_len(self.ptr) as usize;
            let data = cv_VectorOffloat_data(self.ptr);
            ::std::slice::from_raw_parts(::std::mem::transmute(data), length)
        }
    }
}
