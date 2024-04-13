#include<stdio.h>
int main()
{
    int n=3;
    for(;n!=1;)
    {
    if(n%2==0){
        n/=2;
    }
    else 
    {
       n=n*3+1;
    }}
    printf("The value of n is %d",n);
    return 0;
    
}