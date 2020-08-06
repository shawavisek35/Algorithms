#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{
    ll i, s, m, count_coins = 0;
    ll a[100];
    cin >> s >> m;
    for(i=0;i<m;i++)
    {
        cin >> a[i];
    }
    sort(a, a+m, greater<ll>());
    i=0;
    while(s > 0)
    {
        while(s<a[i])
        {
            i++;
        }
        s -= a[i];
        count_coins++;
    }
    cout << count_coins << "\n";
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}