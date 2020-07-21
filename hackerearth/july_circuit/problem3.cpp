#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll; 

int gcd(ll n1,ll n2)
{
    if(n2==0)
    {
        return n1;
    }
    return gcd(n2,n1%n2);
}

int lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}

void solve()
{
    ll n ,m, k, number, temp ;
    register int i;
    vector <ll> arr;
    cin >> n >> m >> k;
    for(i=0;i<n;i++)
    {
        cin >> number;
        temp = pow(number,k);
        arr.push_back(temp);
    }
    ll res = arr[0];
    for(i=1;i<n;i++)
    {
        res = lcm(res,arr[i])%m;
    }
    cout << res << "\n";

}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(register int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}