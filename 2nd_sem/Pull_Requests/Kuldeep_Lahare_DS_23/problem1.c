 #include <stdio.h>

void algorithm(int n) {
    printf("%d", n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        printf("%d -> ", n);
    }
    printf("1\n");
}

int main() {
    int n = 3;
    algorithm(n);
    return 0;
}
