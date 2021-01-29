#include <iostream>
#include <set>
using namespace std;

void solve()
{
    int n,temp,a[100],i,count=1;
    set <int> s;
    s.insert(1);
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    a[0] = a[0]+1;
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            s.insert(a[i-1]-a[i]+1);
            a[i] += a[i-1]-a[i]+1;
        }
    }
    cout << s.size() << "\n";
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