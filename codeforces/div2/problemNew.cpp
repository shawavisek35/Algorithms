#include <iostream>
#include<map>
using namespace std;

void solve()
{
    map<char,int> point;
    int x,y;
    bool count1=false,count2=false;
    string s;
    cin >> x >> y;
    cin >> s;
    for(auto ch : s)
    {
        point[ch]++;
    }
    if(x>0)
    {
        if(point['R']>=x)
        {
            count1=true;
        }
    }
    else{
        if(point['L']>=abs(x))
        {
            count1=true;
        }
    }

    if(y>0)
    {
        if(point['U']>=y)
        {
            count2=true;
        }
    }
    else
    {
        if(point['D']>=abs(y))
        {
            count2=true;
        }
    }
    if(count1&&count2)
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
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}