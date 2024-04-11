#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
int k=n*2;
int arr[k];
for(int i=0;i<k;i++){
    scanf("%d",&arr[i]);
}
    int sum=1;
    int j=1;
    while(j<k){
        for(int m=0;m<k;m=m+2){
        if(m!=j)
            if(arr[j]==arr[m])
                sum++;
        
        }
        j=j+2;
    }
    printf("%d",sum);

    return 0;
}