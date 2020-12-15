#include <iostream>
using namespace std;
typedef long long ll;

ll solve(ll x, ll n, ll arr[])
{
    ll i,j,sum=0, count=0;
    for(i=0;i<n;i++)
    {
        sum = 0;
        for(j=i;j<n;j++)
        {
            if(sum + arr[j] <= x)
            {
                sum += arr[j];
                if(sum == x)
                {
                    count ++;
                }
            }
            else{
                break;
            }
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,sum=0,i,j,arr[100],q;
    ll x;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> x;
        cout << solve(x,n,arr) << "\n";
    }
    
}