use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let mut tokens = input.split_whitespace();

    let n: usize = tokens.next().unwrap().parse().unwrap();
    let p: usize = tokens.next().unwrap().parse().unwrap();

    let mut scores = Vec::with_capacity(n);
    let mut result = 0;

    for _ in 0..n {
        if let Some(token) = tokens.next() {
            let score: usize = token.parse().unwrap();
            if score < p {
                result += 1;
            }
            scores.push(score);
        }
    }

    println!("{}", result);
}