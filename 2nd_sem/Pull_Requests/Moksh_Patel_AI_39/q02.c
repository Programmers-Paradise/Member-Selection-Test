int main(){
    int n;
    printf("enter n :- ");
    scanf("%d",&n);
    int t=0;
    for(int i=0;i<n;i++){
        if (i%3==0 || i%5==0){
            // printf("%d\n",i);
            t=t+i;
        }
    }
    printf("%d\n",t);
}