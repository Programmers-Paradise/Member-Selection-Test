#include <stdio.h>

int main() {
 int n=20;
 int sum=0;
 for(int i=0;i<n;i++){
     if (i%3==0||i%5==0){
         sum=sum+i;
     }
 }
 printf(" the sum is%d",sum);
 
 return 0;
}
