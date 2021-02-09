#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    long long n,arr[100000],ans=INT64_MIN;
    int i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(i=1;i<n-1;i++)
    {
        ans = max(ans, abs(arr[0]-arr[i])+abs(arr[i]-arr[n-1])+abs(arr[n-1]-arr[0]));
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}