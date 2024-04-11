#include <stdio.h>

int main() {
    int n;
    printf("Enter any positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("%d\t", n); // Print the initial value

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        printf("%d\t", n); // Print the next value
    }

    return 0;
}
