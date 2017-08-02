#[macro_use]
extern crate shells;
extern crate opencv;
extern crate inputbot;
use inputbot::*;
use KeybdKey::*;
use opencv::*;
fn in_focus(window: &str) -> bool {
    let (code, current,stderr) = sh!("xprop -id $(xprop -root \
            | sed -n -e \"s/^.*NET_ACTIVE_WINDOW(WINDOW): window id # //p\") | \
            sed -n -e \"s/^.*WM_NAME(STRING) = //p\"");

    println!("stdout: {}", current);
    if current.contains(&window) {
        return true;
    }
    return false;
}

fn press_stuff() {
    SpaceKey.press();
    SpaceKey.release();
}

fn run() -> Result<(),String> {
    let xml = "/usr/share/opencv/haarcascades/haarcascade_frontalface_alt.xml";
    let vlc = "VLC";
    let youtube = "YouTube";
    let mut c = 0;
    let mut flag = 1;
    loop {
        while in_focus(vlc) || in_focus(youtube) {
            // try!(highgui::named_window(window,1));
            let mut cam = try!(highgui::VideoCapture::device(0));
            let mut face = try!(objdetect::CascadeClassifier::new(xml));
            loop {
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

                if faces.len() == 0 &&  c == 0 {
                    c = 1;
                    press_stuff();
                    flag = 0;
                }
                else if faces.len() == 1 && flag == 0 {
                    c = 0;
                    press_stuff();
                    flag = 1;
                }
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
            }
        }
    }
    Ok(())    
}

fn main() {
   run().unwrap();
}
