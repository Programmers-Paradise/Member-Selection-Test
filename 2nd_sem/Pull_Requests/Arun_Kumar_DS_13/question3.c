#include<stdio.h>
int movies(int start[],int end[],int n){
    int count =1;
    for(int i=0; i<n; i++){
        start[i]=end[i];
        if(start[i]>=start[i+1]){
            return count+1;
        }
    }
}
int main(){
    int n;
    printf("Enter the value of n(1-2*10^5) : ");
    scanf("%d",&n);
    
    int start[n],end[n];
    printf("Enter Starting of each movies : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&start[i]);
    }
    printf("Enter Ending of each movies : \n");
    for(int j=0;j<n;j++){
        scanf("%d",&end[j]);
    }
    printf("Showing Starting & Ending Time of movies : \n");
    for(int i=0;i<n;i++){
        printf("%d\t%d\n",start[i],end[i]);
   }
   int result=movies(start,end,n);
   printf("The max. number of movies one can watch continuosly is : %d",result);
    return 0;
}
