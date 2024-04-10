#include<stdio.h>
void print (int n)
{
    int x;
    for(x=0;n!=1;x++){
        printf("\t%d",n);
        if(n%2==0){
            n=n/2;
        }
        else{
            n=(n*3)+1;
        }
    }
    printf("\t%d",n);
}
int main(){
    int n;
    printf("Enter the element : ");
    scanf("%d",&n);
    print(n);
    return 0;
}