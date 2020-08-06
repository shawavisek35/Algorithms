#include <iostream>
#include <vector>
using namespace std;
typedef long long  ll;

void solve()
{
    ll k,n,w,dollar=0;
    cin >> k >> n >> w;
    register int i;
    for(i=1;i<=w;i++)
    {
        dollar += i*k;
    }
    if((n-dollar)>=0)
    {
        cout << 0 << "\n";
        return;
    }
    cout << dollar-n << "\n";
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}