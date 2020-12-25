#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[10], i, key, ans;
    cout << "Enter number of elements : ";
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    } 
    cout << "Enter Key value to find the floor : ";
    cin >> key;
    ans = lower_bound(a, a+n, key) - a;
    cout << a[ans-1] << "\n";
    return 0;
}