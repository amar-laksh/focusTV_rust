/// finds arbitrary template in the grayscale image using Generalized Hough Transform
/// Ballard, D.H. (1981). Generalizing the Hough transform to detect arbitrary shapes. Pattern Recognition 13 (2): 111-122.
/// Guil, N., Gonzlez-Linares, J.M. and Zapata, E.L. (1999). Bidimensional shape detection using an invariant approach. Pattern Recognition 32 (6): 1025-1038.

// safe rust wrapper for PtrOfGeneralizedHough
#[allow(dead_code)]
pub struct PtrOfGeneralizedHough {
    pub ptr: *mut c_void
}
impl ::types::PtrOfGeneralizedHough {
    pub unsafe fn as_raw_PtrOfGeneralizedHough(&self) -> *mut c_void {
        self.ptr
    }
}
