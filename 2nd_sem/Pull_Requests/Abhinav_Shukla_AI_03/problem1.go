package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    fmt.Printf("%d ", n)

    for n > 1 {
        if n%2 == 0 {
            n /= 2
            fmt.Printf("%d ", n)
        } else {
            n = 3*n + 1
            fmt.Printf("%d ", n)
        }
    }
}
