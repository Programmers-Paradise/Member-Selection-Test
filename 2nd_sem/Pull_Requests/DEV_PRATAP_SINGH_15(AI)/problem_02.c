#include<stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    int sum = 0;
    for(int i=1;i<num;i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    printf("%d\n",sum);
    
    return 0;
}