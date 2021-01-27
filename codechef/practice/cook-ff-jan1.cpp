#include <iostream>
using namespace std;

void solve()
{
    int i;
    int flag=0;
    string s;
    cin >> s;
    if(s.length()<10)
    {
        cout << "NO" << "\n";
        return;
    }
    flag++;
    for(auto i : "0123456789")
    {
        if(s.find(i)>0 && s.find(i)<s.length()-1)
        {
            flag++;
            break;
        }
    }

    for(auto ch : "@#%&?")
    {
        if(s.find(ch)>0 && s.find(ch)<s.length()-1)
        {
            flag++;
            break;
        }
    }

    for(auto ch : s)
    {
        if(islower(ch))
        {
            flag++;
            break;
        }
    }

    for(i=1;i<s.length()-1;i++)
    {
        if(isupper(s[i]))
        {
            flag++;
            break;
        }
    }
    if(flag==5)
    {
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
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