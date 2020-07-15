#include <iostream>
using namespace std;

void solve(int n)
{
    long long int rev=0;
    while(n>0)
    {
        rev = rev*10 + n%10;
        n = n/10;
    }
    cout << rev << "\n";
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n;
        solve(n);
    }
    return 0;
}