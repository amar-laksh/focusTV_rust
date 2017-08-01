extern crate opencv;
use opencv::highgui;
use opencv::core;
use opencv::imgproc;
use opencv::objdetect;
use std::process::Command;


fn in_focus(window: &str) -> bool {
    let current_window = r#"xprop -id
                        $(xprop -root |
                        sed -n -e \"s/^.*NET_ACTIVE_WINDOW(WINDOW): window id # //p\") | 
                        sed -n -e \"s/^.*WM_NAME(STRING) = //p\""#;
    let output = Command::new(current_window)
                .output()
                .expect("Failed to execute process");
    let current = String::from_utf8_lossy(&output.stdout);
    println!("stdout: {}", current);
    if window == &current {
        return true;
    }
    return false;
}


fn run() -> Result<(),String> {
    let window = "video capture";
    let xml = "/usr/share/opencv/haarcascades/haarcascade_frontalface_alt.xml";
    let vlc = "VLC";
    let youtube = "YouTube";
    try!(highgui::named_window(window,1));
    let mut cam = try!(highgui::VideoCapture::device(1));
    let opened = try!(highgui::VideoCapture::is_opened(&cam));
    if ! opened {
        println!("Using different camera");
        cam = try!(highgui::VideoCapture::device(0));
    }
    let mut face = try!(objdetect::CascadeClassifier::new(xml));

    loop {
        if !(in_focus(vlc) && in_focus(youtube)){
            continue;
        }
        let mut frame = try!(core::Mat::new());
        try!(cam.read(&mut frame));
        if try!(frame.size()).width == 0 {
            ::std::thread::sleep_ms(50);
            continue;
        }
        let mut gray = try!(core::Mat::new());
        try!(imgproc::cvt_color(&frame, &mut gray, imgproc::CV_BGR2GRAY, 0));
        let mut reduced = try!(core::Mat::new());
        try!(imgproc::resize(&gray, &mut reduced, core::Size{width:0,height:0},
            0.25f64, 0.25f64, imgproc::INTER_LINEAR));
        let mut faces = ::opencv::types::VectorOfRect::new();
        try!(face.detect_multi_scale(&reduced, &mut faces, 1.1, 2,
            objdetect::CV_HAAR_SCALE_IMAGE,
            core::Size{ width:30, height:30 },
            core::Size{ width:0, height:0 }));
        println!("faces: {}", faces.len());
        for face in faces.iter() {
            println!("face {:?}", face);
            let scaled_face = core::Rect{
                x: face.x*4, y:face.y*4,
                width:face.width*4, height:face.height*4
            };
            try!(core::rectangle(&frame, scaled_face,
                core::Scalar{ data:[0f64,-1f64,-1f64,-1f64] },
                1, 8, 0));
        }
        core::flip(&frame, &frame, 1);
        try!(highgui::imshow(window, &frame));
        if try!(highgui::wait_key(10)) > 0 {
            break;
       }
    }
    Ok(())
}

fn main() {
   run().unwrap();
}
