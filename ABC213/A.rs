// Bitwise Exclusive Or

use std::io;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let nums: Vec<i32> = input
        .trim()
        .split_whitespace()
        .map(|x| x.parse::<i32>().unwrap())
        .collect();

    let a = nums[0];
    let b = nums[1];
    let c = a ^ b;
    println!("{}", c);
}