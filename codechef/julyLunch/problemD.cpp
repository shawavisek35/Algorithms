#include <iostream>
using namespace std;
typedef long long  ll;
ll seq(ll);

void solve()
{
    ll l,r,m,n,i,sum = 0;
    cin >> l >> r;
    ;
    for(i=l;i<=r;i++)
    {
        sum = (sum + (seq(i)^2)) % (1000000007);
    }
    cout << sum << "\n";

}
ll seq(ll n)
{
    ll dp[n + 1]; 
    ll i;
    dp[1] = 1;
    if(n==1){
        return 1;
    } 
    for (i = 2; i <= n; i++)  
    { 
        dp[i] = 1 + dp[i - dp[dp[i - 1]]]; 
    } 
    
    return dp[i-1];
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