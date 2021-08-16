
#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long long n, ans;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        if(n<=6){
            ans = 15;
        }
        else{
            if(n%2 !=0){
                n++;
            }
            ans = (n*5)/2;
        }
        cout << ans << "\n";
    }

    return 0;
}