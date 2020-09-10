#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    vector <string> strings;
    map <char,int> m;
    string s;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        strings.push_back(s);
    }

    for(auto t : strings)
    {
        for(auto ch : t)
        {
            m[ch]++;
        }
    }
    for(auto t : m)
    {
        if(t.second%n!=0)
        {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
    return;

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