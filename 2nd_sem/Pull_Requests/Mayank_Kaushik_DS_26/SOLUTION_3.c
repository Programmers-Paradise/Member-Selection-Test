#include <stdio.h>

int movies(int start[], int end[], int n) {
    int count = 1;
    int maxEnd = end[0]; // Initialize maxEnd with the ending time of the first movie

    for (int i = 1; i < n; i++) {
        if (start[i] >= maxEnd) {
            count++; // Increment count if the next movie starts after or at the same time as the previous movie ends
            maxEnd = end[i]; // Update maxEnd to the ending time of the current movie
        }
    }

    return count;
}

int main() {
    int n;
    printf("Enter the number of movies: ");
    scanf("%d", &n);

    int start[n], end[n];
    printf("Enter the starting times of each movie:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &start[i]);
    }

    printf("Enter the ending times of each movie:\n");
    for (int j = 0; j < n; j++) {
        scanf("%d", &end[j]);
    }

    int result = movies(start, end, n);
    printf("The max. number of movies one can watch continuously is: %d\n", result);
    return 0;
}