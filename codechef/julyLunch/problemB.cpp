#include <iostream>
#include <vector>
using namespace std;
typedef long long  ll;

void solve()
{
    ll n,m,x,y,i,j,sum=0;
    cin >> n >> m >> x >> y;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i%2==0)
            {

                if(j%2!=0)
                {
                    if(y<=x){
                        sum += 1;
                    }
                    else{
                        sum += y-x;
                    }
                }
                else{
                    if(y<=x){
                        sum += y-1;
                    }
                    else{
                        sum += x;
                    }
                }
            }
            else{
                if(j%2!=0)
                {
                    if(y<=x){
                        sum += y-1;
                    }
                    else{
                        sum += x;
                    }
                }
                else{
                    if(y<=x){
                        sum += 1;
                    }
                    else{
                        sum += y-x;
                    }
                }
                
            }
        }
    }
    cout << sum << "\n";

}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}