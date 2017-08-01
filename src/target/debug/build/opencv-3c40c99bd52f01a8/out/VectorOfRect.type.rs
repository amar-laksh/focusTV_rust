
extern "C" {
    fn cv_new_VectorOfRect() -> *mut c_void;
    fn cv_delete_VectorOfRect(ptr:*mut c_void) -> ();
    fn cv_push_VectorOfRect(ptr:*mut c_void, ptr2: *const c_void) -> ();
    fn cv_VectorOfRect_len(ptr:*mut c_void) -> i32;
    fn cv_VectorOfRect_data(ptr:*mut c_void) -> *mut c_void;
}
#[allow(dead_code)] pub struct VectorOfRect {
    pub ptr: *mut c_void
}
impl ::types::VectorOfRect {
    pub fn new() -> VectorOfRect {
        unsafe { return VectorOfRect { ptr: cv_new_VectorOfRect() } };
    }
    pub fn len(&self) -> i32 {
        unsafe { return cv_VectorOfRect_len(self.ptr); }
    }
    pub unsafe fn as_raw_VectorOfRect(&self) -> *mut c_void {
        self.ptr
    }
}
impl Drop for VectorOfRect {
    fn drop(&mut self) {
        unsafe { cv_delete_VectorOfRect(self.ptr) };
    }
}

impl ::types::VectorOfRect {
    pub fn push(&mut self, val: ::core::Rect) {
        unsafe { cv_push_VectorOfRect(self.ptr, &val as *const _ as *const _) }
    }
}
impl ::std::ops::Deref for VectorOfRect {
    type Target = [::core::Rect];
    fn deref(&self) -> &[::core::Rect] {
        unsafe {
            let length = cv_VectorOfRect_len(self.ptr) as usize;
            let data = cv_VectorOfRect_data(self.ptr);
            ::std::slice::from_raw_parts(::std::mem::transmute(data), length)
        }
    }
}
