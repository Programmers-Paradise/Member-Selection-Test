//This code wroks only on 24 hrs clock
//Here we want to see maximum number of movies in the given time frame.
#include <stdio.h>

int main(){
    int n;
    printf("Total number of movies\n");
    scanf("%d",&n);
    int start[50];
    int end[50];
    int sum = 1;

    for (int i = 0; i < n; i++)
    {
        printf("Enter your starting time of %d movie: ",i+1);
        scanf("%d", &start[i]);
        printf("Enter your ending time of %d movie: ",i+1);
        scanf("%d", &end[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if ((end[i] == start[i+1])||(end[i] < start[i+1]))
    {
        sum = sum+1;
    }
    
    }
    printf("You can watch %d number of movies", sum);

    return 0;
}