#include <stdio.h>

int main() {
    int N=20;
    int sum=0;
    for(int i=3;i<N;i++){
        if(i%3==0)
        sum+=i;
        else if(i%5==0)
        sum+=i;
        else
        sum;
    }
    printf("%d",sum);
   return 0;
   }
