#include <iostream>
using namespace std;
typedef long long ll;

void solve()
{
    int n,i,j, count=0;
    char a[105];
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]&a[j] == a[i])
            {
                count ++;
            }
        }
    }
    cout << count << "\n";
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