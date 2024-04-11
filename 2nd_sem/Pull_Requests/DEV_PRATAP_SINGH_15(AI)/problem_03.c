#include <stdio.h>

int main() {
    int n;
    int start, end;
    printf("Enter a number of movies : ");
    scanf("%d", &n);
    
    printf("Enter a starting time of 1st movie : ");
    scanf("%d", &start);
    
    printf("Enter a end time of 1st movie : ");
    scanf("%d", &end);

    int end_time = 0;
    int count = 1;

    for (int i = 1; i < n; i++) {
       
        printf("Enter next movie start time : ");
        scanf("%d",&start);
        printf("Enter next movie end time : ");
        scanf("%d",&end);
        
        if (start >= end_time) {
            count++;
            end_time = end;
        }
    }

    printf("Max number of movie : %d\n", count);

    return 0;
}
