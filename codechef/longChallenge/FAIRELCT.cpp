#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{
    int n,m, i, j, count=0;
    ll sum_a=0, sum_b=0, a[1000], b[1000];
    cin >> n >> m;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<m;i++)
    {
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    for(i=0;i<n;i++)
    {
        sum_a += a[i];
    }

    for(i=0;i<m;i++)
    {
        sum_b += b[i];
    }
    i=0;
    j=m-1;
    while(sum_a<=sum_b)
    {
        if(i==n || j==0)
        {
            cout << -1 << "\n";
            return;
        }
        count++;
        sum_a += (b[j]-a[i]);
        sum_b += (a[i]-b[j]);
        i++;
        j--;
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