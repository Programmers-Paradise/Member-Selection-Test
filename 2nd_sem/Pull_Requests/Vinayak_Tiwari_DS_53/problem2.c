#include <stdio.h>

int main()
{
    int N, sum = 0;

    printf("Enter Your limit (N): ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Limitation Error.\n");
        return 1;
    }
    int m = 15;
    sum = m * (N - 1) / m * ((N - 1) / m + 1) / 2;
    printf("The sum of all numbers divisible by 3 or 5 below %d\n", N, sum);
    return 0;
}