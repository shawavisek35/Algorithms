#include <iostream>
using namespace std;

void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int f1,f2,s1,s2;
    if(a>b){
        f1 = a;
        s1 = b;
    }
    else{
        f1 = b;
        s1 = a;
    }
    if(c>d){
        f2 = c;
        s2 = d;
    }
    else{
        f2 = d;
        s2 = c;
    }

    if(f1>s2 && f2>s1){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
    return;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}