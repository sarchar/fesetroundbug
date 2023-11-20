extern "C" {
    fn test() -> ();
}

fn main() {
    unsafe {  test(); }
}
