#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve()
{
    ll i, element,n, sum, sum1=0, j, start, stop;
    vector <ll> arr;
    cin >> n >> sum;
    for(i=0;i<n;i++)
    {
        cin >> element;
        arr.push_back(element);
    }
    for(i=0;i<n;i++)
    {
        start = i;
        sum1=0;
        for(j=i;j<n;j++)
        {
            if(arr[j]+sum1 <= sum)
            {
                sum1 = sum1 + arr[j];
                stop = j;
            }
            else{
                break;
            }
        }
        if(sum1==sum){
            cout << start+1 << " " << stop+1 << "\n";
            return;
        }
    }
    cout << -1 << "\n";
    return;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int i, t;
    cin >> t;
    for(i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}