use std::io;

fn main() {
    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    let n: usize = input.trim().parse().expect("Please enter a number");
    let k = n * 2;
    let mut arr = vec![0; k];

    for i in 0..k {
        input.clear();
        io::stdin()
            .read_line(&mut input)
            .expect("Failed to read line");

        arr[i] = input.trim().parse().expect("Please enter a number");
    }

    let mut sum = 1;
    let mut j = 1;

    while j < k {
        let mut m = 0;
        while m < k {
            if m != j {
                if arr[j] == arr[m] {
                    sum += 1;
                }
            }
            m += 2;
        }
        j += 2;
    }
    println!("{}", sum);
}
