#include <iostream>
#include <vector>
using namespace std;
typedef long long  ll;

void solve()
{
    ll n,k,element;
    int i;
    vector <ll> elements;
    cin >> n >> k;
    for(i=0;i<n;i++)
    {
        cin >> element;
        elements.push_back(element);
    }   
    for(auto t : elements)
    {
        if(t%k==0)
        {
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
    cout << "\n";
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}