//If the number is divisible by 3 or divisible by 5 then add them

#include <stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter your number\n");
    scanf("%d",&n);

    for (int i = 1; i < n; i++)
    {
        if ((i%3==0)||(i%5==0))
        {
            sum = sum +i;
        }
        
    }
        printf(" Your sum is :%d", sum);
    return 0;
}