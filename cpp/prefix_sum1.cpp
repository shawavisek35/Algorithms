#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int i, n, a[100000], m, q[100000], prefix[100000], position;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for(i=0;i<m;i++)
    {
        cin >> q[i];
    } 
    prefix[0] = a[0];
    for(i=1;i<n;i++)
    {
        prefix[i] = prefix[i-1] + a[i];
    }

    for(i=0;i<m;i++)
    {
        position = lower_bound(prefix, prefix+n, q[i]) - prefix;
        cout << position + 1 << "\n";
    }
    return 0;
}