#include <iostream>
using namespace std;

void solve()
{
    int n,k,x,y,i=0,a;
    cin >> n >> k >> x >> y;
    a = x;
    while(i<=n)
    {
        a = (a+k)%n;
        i ++;
        if(a==y)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
	int t, i;
    cin >> t;
	for(i=0;i<t;i++)
	{
	    solve();
	}
	return 0;
}
