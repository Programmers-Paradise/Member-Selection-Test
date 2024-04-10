/*  
    Name - Abhay singh sisoodiya 
    branch - 2nd sem (AI)
    roll no. - 01
    description - The following code is written in c-programming language.
*/
#include<stdio.h>

int main(){
    int n ;
    scanf("%d",&n);
    printf("%d",n);
    if (n==1){
        printf("4 2 1");
    }
    else{
        while(n!=1){
            if (n % 2 == 0){
                n/=2;
                printf(" %d",n);
            }
            else{
                n = 3*n+1;
                printf(" %d",n);
            }
        }
    }
    return 0;
}
