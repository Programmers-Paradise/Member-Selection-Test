#include<stdio.h>
int main(){
    int n;
    printf("Enter the limit n : ");
    scanf("%d",&n);
    int g;
    int sum=0;
    while(g<n){
        if(g%3==0 || g%5==0 ){
        sum= sum + g;
    }
    g++;}
printf("The sum of factors of 3 & 5 is : %d",sum);
return 0;

}
