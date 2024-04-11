#include<stdio.h>
int main(){
    int N;//Upper Limit
    printf("Enter an Upper Limit: ");
    scanf("%d",&N);
    int sum=0;
    for(int i=0;i<N;i++){
    if(i%3==0 || i%5==0){
        sum+=i;
     }
    }
    printf("%d",sum);
    return 0;
}