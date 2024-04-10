#include<stdio.h>
int main(){
    int n;
    printf("Enter any positive interger : ");
    scanf("%d",&n);

    while(n!=1){
        if (n%2==0){
            n=n/2;
            printf("%d\t",n);
        }
        else{
            n=(n*3)+1;
            printf("%d\t",n);
        }
    }
        return 0;
}