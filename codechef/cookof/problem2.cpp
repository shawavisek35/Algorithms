#include <iostream>
using namespace std;
typedef long long ll;

void solve()
{
    string a, b;
    ll i,count=0;
    cin >> a >> b;
    if(a==b)
    {
        cout << 0 << "\n";
        return;
    }

    for(i=0;i<a.length();i++)
    {
        if(a[i]!=b[i])
        {
            count ++;
        }
    }
    cout << count - 1 << "\n";
    return;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}