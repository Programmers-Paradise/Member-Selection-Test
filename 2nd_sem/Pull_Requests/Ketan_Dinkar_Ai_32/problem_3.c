#include<stdio.h>
int main(){
    int n;
    printf("enter the number for movie shown : ");
    scanf("%d",&n);
    int st[n],et[n];
    printf("\nenter the startinf time of movies : ");
    for(int x=0;x<n;x++){
        scanf("%d %d\n",&st[x],&et[x]);
    }
    printf("sorting the list of movies : ");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(et[i]>et[j]){
                int temp=et[i];
                et[i]=et[j];
                et[j]=temp;

                temp=st[i];
                st[i]=st[j];
                st[j]=temp;
            }
        }
    }
    for(int x=0;x<n;x++){
        printf("%d %d\n",st[x],et[x]);
    }
    int c=0,end=et[0];
    for(int x=0;x<n;x++){
        if(st[x]>=end){
            c++;
            end=et[x];
        }
    }
    printf("\nmaximum number can be watch : %d",c);
    return 0;
}