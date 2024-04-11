#include<stdio.h> 

int main(){ 
  
    int n = 7;  //Initialize  n = 7
  
    printf ("Sequence is: ");
  
    while(n!=1) // while loop that continues until  n  becomes 1
    {
      printf(" %d ",n); 
      
    if(n%2!=0)
    {
      n = n*3+1;
    } 
      
    else{ 
        n = n/2;
        } 
        
    } 
  
    printf(" 1 \n");
  
    return 0;
}
