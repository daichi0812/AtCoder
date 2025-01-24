use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut iterator = stdin.lock().lines();
    let mut n = String::new();

    if let Some(Ok(line)) = iterator.next(){
        n = line.trim().to_string();
    }

    let padded_n = match n.len() {
        1 => format!("000{}", n),
        2 => format!("00{}", n),
        3 => format!("0{}", n),
        _ => n.clone(),
    };

    // 結果を出力
    println!("{}", padded_n);
}