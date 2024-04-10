/*  
    Name - Abhay singh sisoodiya 
    branch - 2nd sem (AI)
    roll no. - 01
    discribtion - The following code is written in c-programming language.
*/
#include<stdio.h>

int main(){
    int number;
    int count=0;
    int starttime[20];
    int endtime[20];
    printf("Enter the number of movies u want to watch : ");
    scanf("%d",&number);
    printf("Enter the starting time of first movie : ");
    scanf(" %d",&starttime[0]);  
    printf("Enter the end  time of first movie : ");
    scanf(" %d",&endtime[0]);  

    for(int i=1;i<number;i++){
        printf("Enter the starting time of next movie : ");
        scanf(" %d",&starttime[i]);  
        printf("Enter the end  time of next movie : ");
        scanf(" %d",&endtime[i]);  
    }
    for(int i=0;i<=number;i++){
        if(starttime[i] != endtime[i]){
            if(endtime[i] <= starttime[i+1]){
                if(starttime[i] != starttime[i+1]){
                    count++;
                }
            }
        }
    }
    printf("You can watch a maximun of %d movies",count);
    return 0;
}