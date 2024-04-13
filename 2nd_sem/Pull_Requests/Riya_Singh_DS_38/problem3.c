#include <stdio.h>

int main() 
{
    int n, t1, t2, x, y, movie = 1, endt;
    

    printf("Enter the number of movies : ");
    scanf("%d", &n);
    
    printf("Enter the starting time of the 1st movie : ");
    scanf("%d", &t1);
    
    printf("Enter the ending time of the 1st movie : ");
    scanf("%d", &t2);
    endt=t2;

    for (int i = 1; i < n; i++) {
       
        printf("Enter starting time of the next movie : ");
        scanf("%d",&x);

        printf("Enter the endig time of the next movie : ");
        scanf("%d",&y);
        
        if (endt<=x) {
            movie++;
            endt = y;
        }
    }

    printf("Maximum number of movies that can be watched are : %d\n", movie);

    return 0;
}
