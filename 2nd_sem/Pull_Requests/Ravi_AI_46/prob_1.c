// if num = odd then num = 3*num +1
// and if num = even then num = num/2

#include <stdio.h>

int main(){
    int num;
    printf("Enter the value of n\n");
    scanf("%d",&num);
    printf("%d", num);
    do
    {
       if (num%2 == 0)
    {
        num = num/2;
        printf(" %d", num);
    } else{
        num = 3*num + 1;
        printf(" %d", num);
    }
    } while (num !=1);
    
    
    
    return 0;
}