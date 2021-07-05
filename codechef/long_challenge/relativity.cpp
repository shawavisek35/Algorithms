#include <bits/stdc++.h>
using namespace std;

void solve(){
    int g,c;
    cin >> g >> c;
    int height = ceil((c*c)/(2*g));
    cout << height << "\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}