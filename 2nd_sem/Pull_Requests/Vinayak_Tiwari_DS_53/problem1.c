#include <stdio.h>

int main()
{
    int n, seq;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n > 1)
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
    printf("%d\n", n);
    return 0;
}