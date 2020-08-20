#include <iostream>
#include <map>
using namespace std;


void solve()
{
    map <char, int> q;
    int n, i;
    string query;
    cin >> n;
    cin >> query;
    int mask = 0;
    for(auto ch : query)
    {
        mask^=1<<(ch-'a');
    }
    if(mask)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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