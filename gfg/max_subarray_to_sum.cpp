#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;



void solve()
{
    ll n,s,midSum=0;
    int j,i;

    cin >> n >> s;
    vector <ll> number(n,0);
    for(i=0;i<n;i++)
    {
        cin >> number[i];
    }
    for(i=0;i<n;i++)
    {
        midSum = 0;
        for(j=i;j<n;j++)
        {
            if((midSum + number[j])<=s)
            {
                midSum += number[j];
                if(midSum==s){
                    break;
                }
            }
            
            else{
                break;
            }
        }
        if(midSum==s){
            break;
        }
    }
    if(midSum!=s)
    {
        cout << -1 << "\n";
    }
    else{
        cout << i+1 << " " << j+1 << "\n";
    }
    

}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t ;
    for(register int i=0;i<t;i++)
    {
        solve();
    }

    return 0;
}