#include <stdio.h>

void function(int i);
int main() {
    int i;
    printf("Enter  integer: ");
    scanf("%d", &i);
    if (i <= 0) {
        printf(" enter a integer.\n");
        return 1;
    }
    printf("Sequence for i = %d:\n", i);
    function(i);
    return 0;
}
void function(int i) {
    while (i != 1) {
        printf("%d -> ", i);
        if (i % 2 == 0) {
            
            i /= 2;
        } else {
            
            i = 3 * i + 1;
        }
    }
    printf("thank you\n"); 
}
