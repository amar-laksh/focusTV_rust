
extern "C" {
    fn cv_new_VectorOfPoint() -> *mut c_void;
    fn cv_delete_VectorOfPoint(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfPoint(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfPoint_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfPoint_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfPoint {
    pub ptr: *mut c_void
}
impl ::types::VectorOfPoint {
    pub fn new() -> VectorOfPoint {
        unsafe { return VectorOfPoint { ptr: cv_new_VectorOfPoint() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfPoint_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfPoint(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfPoint {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfPoint(self.ptr) };
    }
}

impl ::types::VectorOfPoint {
    pub fn push(&mut self, val: ::core::Point) {
        unsafe { cv_push_VectorOfPoint(self.ptr, &val as *const _ as *const _) }
    }
}
impl ::std::ops::Deref for VectorOfPoint {
    type Target = [::core::Point];
    fn deref(&self) -> &[::core::Point] {
        unsafe {
            let length = cv_VectorOfPoint_len(self.ptr) as usize;
            let data = cv_VectorOfPoint_data(self.ptr);
            ::std::slice::from_raw_parts(::std::mem::transmute(data), length)
        }
    }
}
