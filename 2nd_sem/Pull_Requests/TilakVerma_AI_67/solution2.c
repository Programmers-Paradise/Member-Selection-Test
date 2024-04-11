#include <stdio.h>

int main() {
    int N;
    int sum = 0;

    printf("Enter the limit N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

   
    for (int i = 3; i < N; i += 3) {
        sum += i;
    }

    
    for (int i = 5; i < N; i += 5) {
    
        if (i % 3 != 0) {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}