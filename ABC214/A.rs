use std::io;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let n: i32 = input.trim().parse().unwrap();

    if 0 < n && n <= 125 {
        println!("4");
    } else if 125 < n && n <= 211 {
        println!("6");
    } else if 211 < n && n <= 214 {
        println!("8")
    }
}