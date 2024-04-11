#include<stdio.h>
int main()
{
    int sum=0;
    int n;
    printf("enter the limit ");
    scanf("%d",&n);
    
  for(int i=0;i<n;i++)
    {
        if(i%3==0 || i%5==0)
        {
           sum = sum + i;
        }

    }
    printf("%d",sum);
    return 0;
}
