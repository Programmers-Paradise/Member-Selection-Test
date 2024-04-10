package main

import "fmt"

func main() {
    var result int
    var n int
    fmt.Scan(&n)

    for i := 1; i < n; i++ {
        if i%3 == 0 || i%5 == 0 {
            result += i
        }
    }
    fmt.Println(result)
}
