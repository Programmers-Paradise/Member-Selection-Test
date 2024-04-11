#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
printf("%d ",n);
do{
    if (n % 2 == 0){
        n/=2;
        printf("%d ",n);
    }
    else{
        n=3*n +1;
        printf("%d ",n);
    }
}
while(n>1);

    return 0;
}
