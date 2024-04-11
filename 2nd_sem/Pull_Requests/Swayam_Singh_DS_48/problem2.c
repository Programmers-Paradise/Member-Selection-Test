#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("enter the limit :");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            sum += i;
        }
    }
    printf("the sum multiples of 3 and 5 is %d :%d\n", n, sum);
    return 0;
}