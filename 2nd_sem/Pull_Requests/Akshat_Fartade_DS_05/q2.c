#include<stdio.h>

int main()
{
    int N, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &N);

    for (int i = 3; i < N; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("The sum is %d", sum);

    return 0;
}