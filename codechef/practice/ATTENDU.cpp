#include <iostream>
using namespace std;

void solve()
{
    int n;
    float per_req = 75.0, per_hav,count=0;
    string att;
    cin >> n >> att;
    for(auto ch : att)
    {
        if(ch == '1')
        {
            count++;
        }
    }
    per_hav = ((count + (120-n))*100)/120;
    if(per_hav>=per_req)
    {
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
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