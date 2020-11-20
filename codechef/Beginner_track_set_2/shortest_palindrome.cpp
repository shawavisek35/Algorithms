#include <iostream>
using namespace std;

void solve()
{
    char c = 'A';
    int n;
    string ch;
    cin >> n >> ch;
    for(auto s : ch)
    {
        if(c=='A')
        {
            c = s;
        }
        else if(c>s)
        {
            c = s;
        }
    }
    cout << c << "\n";
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