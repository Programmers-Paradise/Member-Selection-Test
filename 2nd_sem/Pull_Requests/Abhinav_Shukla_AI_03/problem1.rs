use std::io;

fn main() {
    let mut result = 0;
    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    let n: i32 = input.trim().parse().expect("Please enter a number");

    for i in 1..n {
        if i % 3 == 0 || i % 5 == 0 {
            result += i;
        }
    }
    println!("{}", result);
}
