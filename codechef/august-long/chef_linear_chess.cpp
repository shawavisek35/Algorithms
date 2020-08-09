#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;

ll solve()
{
    ll n, k, element;
    vector <ll> pos;
    priority_queue <pair<ll,ll>, vector<pair<ll,ll>>, greater<pair <ll,ll>>> current;
    cin >> n >> k;
    for(int i=0; i<n ;i++)
    {
        cin >> element;
        pos.push_back(element);
    }
    for(auto t : pos)
    {
        if(k%t==0)
        {
            current.push(make_pair(k/t-1,t));
        }
    }
    if(current.empty())
    {
        return -1;
    }
    else{
        return current.top().second;
    }
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0 ;i<t; i++)
    {
        cout << solve() << "\n";
    }
    return 0;
}