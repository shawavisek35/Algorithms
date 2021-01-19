#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if(n&1 || n==2)
    {
        cout << "NO" << "\n";
    }
    else{
        cout << "YES" << "\n";
    }
    return 0;
}