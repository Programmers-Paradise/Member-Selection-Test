#include<stdio.h>
int main(){
    // printf("cool\n");
    int n;
    printf("enter n :- ");
    scanf("%d",&n);

    // int t=n;

    while (n>1)
    {
        int t;
        if(n%2==0){
            t=n/2;
            printf("%d ",t);
            n=t;
        }
        else{
            t=(n*3)+1;
            printf("%d ",t);
            n=t;
        }
    }
return 0;
}