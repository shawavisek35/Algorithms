#include <iostream>
#include <map>
using namespace std;

void solve()
{
    string s;
    map <char, int> frequency;
    long long count = 0;
    cin >> s;
    if(s.empty())
    {
        cout << 0 << "\n";
        return;
    }
    for(auto ch : s)
    {
        frequency[ch]++;
    }

    for(auto c : frequency)
    {
        if(c.second > 1)
        {
            count += c.second-1;
        }
    }

    cout << count << "\n";
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