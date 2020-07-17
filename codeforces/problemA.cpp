#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    vector <int> v;
    vector <int> temp;
    int n,number;
    cin >> n;
    n = n*2;
    for(int i=0;i<n;i++)
    {
        cin >> number;
        v.push_back(number);
    }

    sort(v.begin(),v.end());
    for(int i=0;i<n;i+=2)
    {
        temp.push_back(v[i]);
    }
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