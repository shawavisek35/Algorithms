#include <iostream>
using namespace std;

void solve()
{
    long long l,r,n,ans;
    cin >> l >> r;
    n = (r-l)+1;
    ans = n + (n*(n-1)/2);
    cout << ans << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}