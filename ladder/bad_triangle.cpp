#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int i, n, element;
    cin >> n;
    vector <int> elements;
    for(i=0;i<n;i++)
    {
        cin >> element;
        elements.push_back(element);
    }
    if(elements[0]+elements[1]>elements[n-1])
    {
        cout << -1 << "\n";
        return;
    }
    cout << 1 << " " << 2 << " " << n << "\n";
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