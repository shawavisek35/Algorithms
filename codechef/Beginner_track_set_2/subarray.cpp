#include <iostream>
using namespace std;

int main()
{
    int n, arr[1000000],l,r;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    } 
    cin >> l >> r;
    for(int i=l-1;i<r;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}