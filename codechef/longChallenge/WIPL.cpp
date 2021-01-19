#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{
    int n,k, i,count=0;
    ll a[4000], sum_a = 0, sum_b = 0;
    cin >> n >> k;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    i=0;
    while(sum_a<k && sum_b<k)
    {
        if(i>=n)
        {
            cout << -1 << "\n";
            return;

        }
        sum_a += a[i];
        sum_b += a[i+1];
        count+=2;
        i+=2;
    }
    while(sum_a<k)
    {
        if(i==n)
        {
            cout << -1 << "\n";
            return;

        }
        sum_a += a[i];
        count++;
        i++;
    }
    while(sum_b<k)
    {
        if(i==n)
        {
            cout << -1 << "\n";
            return;

        }
        sum_b+=a[i];
        count++;
        i++;
    }
    cout << count << "\n";
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