#include <stdio.h>
int main()
{
    int n, seq;
    printf("Enter the positive integer");
    scanf("%d", &n);
    for (n > 0)
    {
        printf("%d", n);
        if (n % 2 == 0)
        {
            seq = n / 2;
        }
        else
        {
            seq = (3 * n) + 1;
    }
    n = seq;
    }
    printf("%d", n);

    return 0;
}