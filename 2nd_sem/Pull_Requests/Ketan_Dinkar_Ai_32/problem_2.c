#include<stdio.h>
int main(){
    int t=0,n,s;
    printf("enter the limit : ");
    scanf("%d",&n);
    for(int x=0;x<n;x++){
        if(x%3==0|| x%5==0){
            t+=x;
        }
        
    }
    s=t;
    printf("\nsum of all numbers that are \nmultiples of both 3 and 5 under %d : %d",n,s);
    return 0;
}