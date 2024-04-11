#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d ",n);
    if(n==1){
        printf("4 2 1");
    }
    while(n !=1){
        if(n%2==0){
        n=n/2;
    }
    else{
        n=n*3+1;
    }
    printf("%d ",n);
    }
    return 0;
}