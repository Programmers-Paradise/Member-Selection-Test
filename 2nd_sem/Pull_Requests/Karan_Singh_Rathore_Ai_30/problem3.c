#include<stdio.h>

int main(){

// Declaration of variables//
int number;
int count=0;
int starttime[20];
int endtime[20];
printf("Enter the number of movies u want to watch : ");
scanf("%d",&number);

// Taking input from the user//
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

// Checking the condition //
for(int i=0;i<=number;i++){
  if(starttime[i] != endtime[i]){
    if(endtime[i] <= starttime[i+1]){
      if(starttime[i] != starttime[i+1]){
        count++;
      }
    }
  }
}
// Printing the output //
printf("You can watch a maximun of %d movies",count);
return 0;
}   