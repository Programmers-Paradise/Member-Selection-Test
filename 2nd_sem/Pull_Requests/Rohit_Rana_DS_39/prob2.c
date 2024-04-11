#include<stdio.h>

int main(){
int range;
int sum=0;
printf("Enter the upper limit : ");
scanf("%d",&range);

printf("All the multiples of 3 or 5 below the given limit are : ");
for(int i=1;i<range;i++){
    if(i%3==0 || i%5==0){
        sum+=i;
        printf("%d ",i);
    }
}
  printf("\nSum is all these numbers is %d ",sum);
  return 0;
}