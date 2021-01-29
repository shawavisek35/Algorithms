#include <iostream>
using namespace std;

void solve()
{
    int i,q,d;
    bool flag=false;
    long long a[100];
    cin >> q >> d;
    for(i=0;i<q;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<q;i++)
    {
        for(auto j : to_string(a[i]))
        {
            if((j-'0') == d)
            {
                cout << "YES" << "\n";
                flag=true;
                break;
            }
        }
        if(flag)
        {
            flag=false;
            continue;
        }
        else{
            int t=a[i];
            while(t>=0)
            {
                for(auto j : to_string(t-7))
                {
                    if((j-'0') == d)
                    {
                        cout << "YES" << "\n";
                        flag=true;
                        break;
                    }
                }
                if(flag)
                {
                    flag = false;
                    break;
                }
                t-=7;
            }
            if(!flag && t<0)
            {
                cout << "NO" << "\n";
            }
        }

    }
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