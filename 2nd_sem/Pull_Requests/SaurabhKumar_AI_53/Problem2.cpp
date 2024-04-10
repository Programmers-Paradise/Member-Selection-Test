#include<iostream>
using namespace std;

int main () {

  int n;
  cin >> n;

  int i = 1;
  int sum = 0;
  while ( i < n) {
    if ( i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
    i++;
  }

  cout << sum << endl;

  return 0;
}