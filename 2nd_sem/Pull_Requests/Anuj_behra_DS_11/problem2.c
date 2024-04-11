#include<stdio.h>

int main(){
    int sum=0;
    int n;
    printf("enter the value of N");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(i%3==0||i%5==0){
         sum +=i;}
    }
     printf("the sum of multiple is %d",sum);
    return 0;
}
