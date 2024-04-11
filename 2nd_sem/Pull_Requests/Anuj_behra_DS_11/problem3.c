#include<stdio.h>

int main(){
    int n,count=0;
    int starttime[50];
    int endtime[50];
    printf("enter the no. of movies\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
printf("enter the start time of movie\n");
scanf("%d",&starttime[i]);
printf("enter the end time of movie\n");
scanf("%d",&endtime[i]);}
for(int i=0;i<n;i++){ 
if(i==0||starttime[i]>=endtime[i-1]){
count++;
}
    }
    printf("the number of movies watched is %d",count);
    return 0;
}
