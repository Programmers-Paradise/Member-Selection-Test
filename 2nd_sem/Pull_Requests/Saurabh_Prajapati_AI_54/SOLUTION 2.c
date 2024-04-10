#include<stdio.h>
int main(){
    int N;
    printf("Enter the limit N : ");
    scanf("%d",&N);
    int p;
    int sum=0;
    while(p<N){
        if(p%3==0 || p%5==0 ){
        sum= sum + p;
    }
    p++;}
printf("The sum of factors of 3 & 5 is : %d",sum);
return 0;

}

