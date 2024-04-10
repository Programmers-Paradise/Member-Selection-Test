#include <stdio.h>
int main() {
    int n,i=0,result=0;
    
    scanf("%d ",&n);
    printf("%d ",n);
    while(i<n){
        if(i%3==0||i%5==0){
            result=result+i;
            
        }
        i++;
    }
    
printf("%d ",result);
return 0;
}