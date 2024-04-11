//Anoushka chatterjee
//anoushka19c@gmail.com
#include <bits/stdc++.h>
using namespace std;

struct customer {
  int a;
  int b;
};
bool compare(customer c1, customer c2){
  return  (c1.a > c2.a);
}
int main() {
  int  n; cin >> n;


  customer customers[n];
  for(int i=0;i<n;i++){
    cin >> customers[i].a >> customers[i].b;
}
sort(customers, customers+n, compare);
int r =1;
int rassign[n];
for(int i=0;i<n;++i){
  if(i>0 && customers[i].a<customers[i-1].b){
    rassign[i] = rassign[i-1];
  }
  else {
      rassign[i]=r++;
  }
}


  cout<<r-1<<endl;
  for(int i=0; i<n;++i){
    cout<<rassign[i]<<" ";
  }

  return 0;
}