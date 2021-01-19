#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

void solve()
{
    map <int, pair <int, int>> corners;
    ll n,k,x,y,val;
    cin >> n >> k >> x >> y;
    if(x==y)
    {
        cout << 5 << 5 << "\n";
        return;
    }  
    if(k%4 == 0)
    {
        val = 4;
    }
    else{
        val = k%4;
    }
    if(x>y)
    {
        corners.insert(make_pair(1, make_pair(n, y+n-x)));
        corners.insert(make_pair(2, make_pair(y+n-x, n)));
        corners.insert(make_pair(3, make_pair(0,x-y)));
        corners.insert(make_pair(4, make_pair(x-y, 0)));
        pair <int, int> ans = corners[val];
        cout << ans.first << ans.second << "\n";
        return;
    }
    corners.insert(make_pair(1, make_pair(x+n-y,n)));
    corners.insert(make_pair(2, make_pair(n,x+n-y)));
    corners.insert(make_pair(3, make_pair(y-x,0)));
    corners.insert(make_pair(4, make_pair(0,x-y)));   
    pair <int, int> ans = corners[val];
    cout << ans.first << ans.second << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}