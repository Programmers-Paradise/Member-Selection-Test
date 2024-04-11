#include<stdio.h>

int main(){  

int number;
printf("Enter the value of number : ");
scanf("%d",&number);

while(number!=1){
    if(number%2==0){
        number = number/2;
    }
    else{
        number = number*3 +1;
    }
    if(number != 1){
    printf("%d -> ",number);
    }
}
  printf("%d",number);
  return 0;
}