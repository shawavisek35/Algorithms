#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int convertBinary(string s)
{
    int a, prod=0;
    for(int i=0;i<4;i++)
    {
        if(s[i]=='1')
        {
            prod += pow(2,(3-i));
        }
    }
    return prod;
}

void solve()
{
    int i,n,val;
    map <char,int> values;
    string s,inter="", ans="";
    cin >> n >> s;
    values.insert(pair<int, char>(0,'a'));
    values.insert(pair<int, char>(1,'b'));
    values.insert(pair<int, char>(2,'c'));
    values.insert(pair<int, char>(3,'d'));
    values.insert(pair<int, char>(4,'e'));
    values.insert(pair<int, char>(5,'f'));
    values.insert(pair<int, char>(6,'g'));
    values.insert(pair<int, char>(7,'h'));
    values.insert(pair<int, char>(8,'i'));
    values.insert(pair<int, char>(9,'j'));
    values.insert(pair<int, char>(10,'k'));
    values.insert(pair<int, char>(11,'l'));
    values.insert(pair<int, char>(12,'m'));
    values.insert(pair<int, char>(13,'n'));
    values.insert(pair<int, char>(14,'o'));
    values.insert(pair<int, char>(15,'p'));
    for(i=0;i<=n;i++)
    {
        if(i%4==0 && i!=0)
        {   
            val = convertBinary(inter);
            ans += values[val];
            inter = "";
        }
        inter += s[i];
    }
    cout << ans << "\n";
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