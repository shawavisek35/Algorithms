#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,m,q,sum=0, x,i, j, count=0;
    cin >> n >> m >> k;
    for(i=0;i<n;i++)
    {
        sum = 0;
        for(j=0;j<k;j++)
        {
            cin >> x;
            sum += x;
        }
        cin >> q;
        if(sum>=m && q<=10)
        {
            count ++;
        }
    }
    cout << count << "\n";
    return 0;
}