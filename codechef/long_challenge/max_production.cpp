#include <bits/stdc++.h>
using namespace std;

void solve(){
    int d,x,y,z;
    cin >> d >> x >> y >> z;
    int res = max(7*x, (y*d) + ((7-d)*z));
    cout << res << "\n";
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