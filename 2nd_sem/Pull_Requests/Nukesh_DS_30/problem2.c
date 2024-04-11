#include <stdio.h>

int main() {
   int N, sum = 0;
   printf("Enter the upper limit N: ");
   scanf("%d", &N);
   for (int i = 1; i < N; i++) {
       if (i % 3 == 0 || i % 5 == 0) {
           sum += i;
       }
   }
   printf("%d\n",sum);
   return 0;
}
