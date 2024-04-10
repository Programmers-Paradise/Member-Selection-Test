#include<stdio.h>
int main(){
int N=20,sum=0;
for(int i=1;i<N;i++){
    if(i%3==0 || i%5==0){
        sum+=i;
        printf("%d %d ",sum,i);
        printf("\n");
    }
}
printf("sum is %d ", sum);

return 0;
}
