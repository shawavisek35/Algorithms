#include <iostream>
using namespace std;
typedef long long ll; 


void solve()
{
    ll n,ans;
    cin >> n;
    ans = (n*n + n +2)/2;
    cout << ans << "\n";
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for(register int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}