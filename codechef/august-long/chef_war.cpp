#include <iostream>
using namespace std;

int solve()
{
    int h, p, i;
    cin >> h >> p;
    while(p>0)
    {
        if(p>=h)
        {
            return 1;
        }   
        h -= p;
        p /= 2;
    }
    return 0;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t, ans;
    cin >> t;
    for(int i=0 ;i<t; i++)
    {
        cout << solve() << "\n";
    }
    return 0;
}