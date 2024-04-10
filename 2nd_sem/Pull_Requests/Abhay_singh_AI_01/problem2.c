/*  
    Name - Abhay singh sisoodiya 
    branch - 2nd sem (AI)
    roll no. - 01
    discribtion - The following code is written in c-programming language.
*/
#include<stdio.h>

int main(){
    int n , result = 0 , i = 0;
    scanf("%d",&n);
    
    while (i < n){
        if (i % 3 == 0 || i % 5 == 0){
            result += i;
        }
        i += 1;
    }
    printf("%d",result);
    return 0;
}