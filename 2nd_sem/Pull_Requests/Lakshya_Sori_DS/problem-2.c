
#include <stdio.h>

int main() {
    int N = 20; 
    int sum = 0;
    int i = 1;
    while (i < 20) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
        i++;
    }
    printf("Sum of multiples of 3 and 5 below %d = %d\n", N, sum);
    return 0;
}




 









