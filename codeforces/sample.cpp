#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

void solve()
{
    ll n,m,a,b,temp,temp2;
    vector <ll> a_arr,b_arr;
    register int i;
    cin >> n >> m;
    for(i=0;i<n;i++)
    {
        cin >> a;
        a_arr.push_back(a);

    }
    for(i=0;i<m;i++)
    {
        cin >> b;
        b_arr.push_back(b);
    }
    if(n>m)
    {
        temp=m;
        temp2 = n;
    }
    else{
        temp=n;
        temp2=m;
    }
    

}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for(register int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}