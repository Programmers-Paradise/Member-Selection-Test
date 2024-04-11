package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    k := n * 2
    arr := make([]int, k)
    for i := 0; i < k; i++ {
        fmt.Scan(&arr[i])
    }

    sum := 1
    j := 1
    for j < k {
        for m := 0; m < k; m += 2 {
            if m != j {
                if arr[j] == arr[m] {
                    sum++
                }
            }
        }
        j = j + 2
    }
    fmt.Printf("%d", sum)
}
