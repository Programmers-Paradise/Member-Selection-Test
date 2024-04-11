#include<stdio.h>

int main() {
    int n;
    int count = 0;

    printf("Enter the number of movies: ");
    scanf("%d", &n);

    int movies[n][2];

    printf("Enter the starting and ending time of each movie:\n");
    for(int i = 0; i < n; i++) {
        printf("Movie %d:\n", i + 1);
        printf("Starting time: ");
        scanf("%d", &movies[i][0]); 
        printf("Ending time: ");
        scanf("%d", &movies[i][1]); 
    }

    
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(movies[j][1] > movies[j + 1][1]) {
                // Swap end times
                int tempEnd = movies[j][1];
                movies[j][1] = movies[j + 1][1];
                movies[j + 1][1] = tempEnd;

                // Swap start times
                int tempStart = movies[j][0];
                movies[j][0] = movies[j + 1][0];
                movies[j + 1][0] = tempStart;
            }
        }
    }

    int lastEndTime = 0;
    for(int i = 0; i < n; i++) {
        if(movies[i][0] >= lastEndTime) {
            count++;
            lastEndTime = movies[i][1];
        }
    }

    printf("Maximum number of movies that can be watched are: %d\n", count);

    return 0;
}
