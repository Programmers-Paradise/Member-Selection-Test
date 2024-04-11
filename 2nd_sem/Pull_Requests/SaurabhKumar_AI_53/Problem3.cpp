#include <bits/stdc++.h>
using namespace std;


int main () {

  int n;
  cin >> n;

  int s, e;
  vector < pair <int , int > > movies_times;
  for (int i= 0 ; i < n; i++) {
    cin >> s >> e;
    movies_times.push_back({e , s});
  }

  sort (movies_times.begin(), movies_times.end());
  
  int start = movies_times[0].first;
  int moviesWatched = 1;
  for (int i = 1; i < n; i++) {
    if (movies_times[i].second >= start) {
      start = movies_times[i].first;
      moviesWatched++;
    }
  }

  cout << moviesWatched <<endl;

  return 0;
}