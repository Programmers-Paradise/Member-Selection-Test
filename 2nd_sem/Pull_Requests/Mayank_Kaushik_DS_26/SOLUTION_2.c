#include <stdio.h>

int main() {
    int N;
    printf("Enter the limit N: ");
    scanf("%d", &N);

    int sum = 0;
    for (int p = 1; p < N; ++p) {
        if (p % 3 == 0 || p % 5 == 0) {
            sum += p;
        }
    }

    printf("The sum of factors of 3 & 5 is: %d\n", sum);
    return 0;
}
       