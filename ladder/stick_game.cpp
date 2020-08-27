#include <iostream>
using namespace std;


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    if(n&1)
    {
        cout << "Akshat" << "\n";
    }
    else
    {
        if(n<=m)
        {
            cout << "Malvika" << "\n";
        }
        else{
            cout << "Akshat" << "\n";
        }
    }
    return 0;
}