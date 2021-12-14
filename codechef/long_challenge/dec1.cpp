#include<bits/stdc++.h>
using namespace std;

void solve() {
  char company[4];
  char offers[3];

  for(int i=0;i<3;i++){
    cin >> company[i];
  }

  for(int i=0;i<2;i++){
    cin >> offers[i];
  }

  for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
      if(company[i] == offers[j]){
        cout << offers[j] <<"\n";
        return;
      }
    }
  }
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}