#include <stdio.h>

void func(int n)
{
    printf("%d ", n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = (n * 3) + 1;
        }
        printf(" %d ", n);
    }
}

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        return 1;
    }

    printf("Collatz sequence for %d: ", n);
    func(n);

    return 0;
}