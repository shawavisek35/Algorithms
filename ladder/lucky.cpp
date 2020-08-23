#include <iostream>
#include <sstream>
using namespace std;

bool isLucky(string n)
{
    for(auto c : n)
    {
        if(c!='4' && c!='7')
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        if(isLucky(to_string(i)))
        {
            if(n%i==0)
            {
                cout << "YES\n"; 
                return;
            }
        }
    }
    cout << "NO\n";
    return;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}