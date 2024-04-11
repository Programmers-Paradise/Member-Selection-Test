#include <stdio.h>

int main() {
  int n=3;
  while(n!=1){
      printf("%d\t",n);
      if(n%2==0){
          n/=2;
      }
      else{
          n=3*n+1;
      }
  }
  printf("%d",n);

    return 0;
}
