#include <iostream>
using namespace std;

void solve()
{
    int k,n,p=-1;
    cin >> n >> k;
    int *a = new int(k),i;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    while(k!=0)
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                a[i] ++;
                if(k==1)
                {
                    p=i;
                }
                break;
            }
        }
        k--;
    }
    if(p==-1)
    {
        cout << -1 << "\n";
        return;
    }
    cout << p+1 << "\n";
    return;
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