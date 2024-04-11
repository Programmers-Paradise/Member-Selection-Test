#include <stdio.h>

int main()
{
    int n;
    printf("enter the value of n :\n");
    scanf("%d", &n);

    while (n > 1)
    {

        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = (n * 3) + 1;
        }
        printf("%d ", n);
    }
    return 0;
}
