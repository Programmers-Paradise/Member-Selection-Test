#include <stdio.h>

void algorithm(int i);
int main() {
    int i;
    printf("Enter positive integer: ");
    scanf("%d", &i);
    if (i <= 0) {
        printf(" enter a positive integer.\n");
        return 1;
    }
    printf("Sequence for i = %d:\n", i);
    simulateAlgorithm(i);
    return 0;
}
void algorithm(int i) {
    while (i != 1) {
        printf("%d -> ", i);
        if (i % 2 == 0) {
            
            i /= 2;
        } else {
            
            i = 3 * i + 1;
        }
    }
    printf("1\n"); 
}
