#include <iostream>
using namespace std;

void solve(int n)
{
    if(n<10){
        cout << n << "\n";
        return;
    }
    int last_digit = n%10;
    int i = n;
    int sum;
    while(i>=10)
    {
        i = i/10;
    }
    sum = i+last_digit;
    cout << sum << "\n";

}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int t;
    cin >> t;
    for(int i=0 ; i<t ; i++)
    {
        cin >> n;
        solve(n);
    }
    return 0;
}