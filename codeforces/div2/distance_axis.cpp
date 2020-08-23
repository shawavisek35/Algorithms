#include <iostream>
#include <vector>
using namespace std;
typedef long long  ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    k>=n ? cout << k-n : cout << (n-k)%2;
    cout << "\n";
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}