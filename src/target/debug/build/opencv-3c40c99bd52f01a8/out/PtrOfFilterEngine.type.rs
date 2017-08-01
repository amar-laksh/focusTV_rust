/// The Main Class for Image Filtering.
/// 
/// The class can be used to apply an arbitrary filtering operation to an image.
/// It contains all the necessary intermediate buffers, it computes extrapolated values
/// of the "virtual" pixels outside of the image etc.
/// Pointers to the initialized cv::FilterEngine instances
/// are returned by various OpenCV functions, such as cv::createSeparableLinearFilter(),
/// cv::createLinearFilter(), cv::createGaussianFilter(), cv::createDerivFilter(),
/// cv::createBoxFilter() and cv::createMorphologyFilter().
/// 
/// Using the class you can process large images by parts and build complex pipelines
/// that include filtering as some of the stages. If all you need is to apply some pre-defined
/// filtering operation, you may use cv::filter2D(), cv::erode(), cv::dilate() etc.
/// functions that create FilterEngine internally.
/// 
/// Here is the example on how to use the class to implement Laplacian operator, which is the sum of
/// second-order derivatives. More complex variant for different types is implemented in cv::Laplacian().
/// 
/// \code
/// void laplace_f(const Mat& src, Mat& dst)
/// {
/// CV_Assert( src.type() == CV_32F );
/// // make sure the destination array has the proper size and type
/// dst.create(src.size(), src.type());
/// 
/// // get the derivative and smooth kernels for d2I/dx2.
/// // for d2I/dy2 we could use the same kernels, just swapped
/// Mat kd, ks;
/// getSobelKernels( kd, ks, 2, 0, ksize, false, ktype );
/// 
/// // let's process 10 source rows at once
/// int DELTA = std::min(10, src.rows);
/// Ptr<FilterEngine> Fxx = createSeparableLinearFilter(src.type(),
/// dst.type(), kd, ks, Point(-1,-1), 0, borderType, borderType, Scalar() );
/// Ptr<FilterEngine> Fyy = createSeparableLinearFilter(src.type(),
/// dst.type(), ks, kd, Point(-1,-1), 0, borderType, borderType, Scalar() );
/// 
/// int y = Fxx->start(src), dsty = 0, dy = 0;
/// Fyy->start(src);
/// const uchar* sptr = src.data + y*src.step;
/// 
/// // allocate the buffers for the spatial image derivatives;
/// // the buffers need to have more than DELTA rows, because at the
/// // last iteration the output may take max(kd.rows-1,ks.rows-1)
/// // rows more than the input.
/// Mat Ixx( DELTA + kd.rows - 1, src.cols, dst.type() );
/// Mat Iyy( DELTA + kd.rows - 1, src.cols, dst.type() );
/// 
/// // inside the loop we always pass DELTA rows to the filter
/// // (note that the "proceed" method takes care of possibe overflow, since
/// // it was given the actual image height in the "start" method)
/// // on output we can get:
/// //  * < DELTA rows (the initial buffer accumulation stage)
/// //  * = DELTA rows (settled state in the middle)
/// //  * > DELTA rows (then the input image is over, but we generate
/// //                  "virtual" rows using the border mode and filter them)
/// // this variable number of output rows is dy.
/// // dsty is the current output row.
/// // sptr is the pointer to the first input row in the portion to process
/// for( ; dsty < dst.rows; sptr += DELTA*src.step, dsty += dy )
/// {
/// Fxx->proceed( sptr, (int)src.step, DELTA, Ixx.data, (int)Ixx.step );
/// dy = Fyy->proceed( sptr, (int)src.step, DELTA, d2y.data, (int)Iyy.step );
/// if( dy > 0 )
/// {
/// Mat dstripe = dst.rowRange(dsty, dsty + dy);
/// add(Ixx.rowRange(0, dy), Iyy.rowRange(0, dy), dstripe);
/// }
/// }
/// }
/// \endcode

// safe rust wrapper for PtrOfFilterEngine
#[allow(dead_code)]
pub struct PtrOfFilterEngine {
    pub ptr: *mut c_void
}
impl ::types::PtrOfFilterEngine {
    pub unsafe fn as_raw_PtrOfFilterEngine(&self) -> *mut c_void {
        self.ptr
    }
}
