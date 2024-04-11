
#include <bits/stdc++.h>
using namespace std;

vector<int> fact(long int n){  //O(n*n)
    vector<int> f(1,1);
    int i=2;
    for(;i<=n;i++){
        int c=0;
        int multi;
        for(auto & it:f){
            multi=c+it*i;
            c=multi/10;
            it=multi%10;
            
        }
        
        while(c){
            f.push_back(c%10);
            c/=10;
        }
    }
    return f;
    
}

// long int factRecurr(long int n){
//     if(n==1) return n;
    
//     return n*factRecurr(n-1);
// }

long int  sumFactDigit(long int n){
    long int sum=0;
    for(auto it:fact(n)) sum+=it;  
    //for much smaller n TC:O(n+log10(n!)) equiv to O(nlogn)
    // long int fct=factRecurr(n);
    // while(fct){  
    //     sum+=fct%10;
    //     fct/=10;
    // }
    return sum;
}
//driver code
int main() {
    
    long int n;
    cin>>n;
    cout<<sumFactDigit(n);
    
    return 0;
}
