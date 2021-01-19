#include <iostream>
using namespace std;
typedef long long ll;

void solve()
{
    ll n,k,d,arr[101],sum=0, ans;
    int i;
    cin >> n >> k >> d;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for(i=0;i<n;i++)
    {
        sum += arr[i];
    }
    ans = sum/k;
    if(ans>=d)
    {
        cout << d << "\n";
        return;
    }
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