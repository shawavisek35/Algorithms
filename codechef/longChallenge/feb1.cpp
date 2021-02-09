#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans,i;
    cin >> n;
    for(i=1;i<=10;i++)
    {
        if(n%i==0)
        {
            ans = i;
        }
    }
    cout << ans << "\n";
    return 0;
}