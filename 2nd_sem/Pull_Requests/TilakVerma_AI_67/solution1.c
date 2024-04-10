#include <stdio.h>

void algorithm(int n) {
    printf("%d ", n);

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        printf("-> %d ", n);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    algorithm(n);

    return 0;
}