#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of movies: ");
    scanf("%d",&n);
    int starttime[30];
    int endtime[30];
    int count=0;
    for(int i=0;i<n;i++){
        printf("Enter start time of %dth movie ",i,starttime[i]);
        scanf("%d",&starttime[i]);
        printf("Enter endtime of %dth movie ",i,endtime[i]);
        scanf("%d",&endtime[i]);
    }
    for(int i=0;i<n;i++){
        if(starttime[i] !=endtime[i]){
            if(starttime[i]<=endtime[i+1]){
                if(endtime[i]!=starttime[i+1]){
                    count++;
                }
            }
        }
    }
    printf("Number of movies you can watch is:%d",count);
    return 0;
}