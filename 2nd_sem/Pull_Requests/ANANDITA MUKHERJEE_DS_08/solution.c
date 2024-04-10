#include <stdio.h>

int main() {
int n;
printf("enter number:");
scanf("%d",&n);
int m=n*2;
int arr[m];
for(int i=0;i<m;i++){
    printf("enter array elements:");
    scanf("%d",&arr[i]);
}
    int sum=1;
    int j=1;
    while(j<m){
        for(int h=0;h<m;h=h+2){
        if(h!=j)
            if(arr[j]==arr[h])
                sum++;
        
        }
        j=j+2;
    }
    printf("%d",sum);

    return 0;
}