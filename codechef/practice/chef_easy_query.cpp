#include <iostream>
using namespace std;

void solve()
{
    int arr[100], n, k, i, temp;
    cin >> n >> k;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<k)
        {
            cout << i+1 << "\n";
            return;
        }
        arr[i] = arr[i]-k;
        if(i==n-1 && arr[i]>=k)
        {
            cout << (arr[i]+k)/k + 1 << "\n";
        }
        arr[i+1] += arr[i];
    }
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