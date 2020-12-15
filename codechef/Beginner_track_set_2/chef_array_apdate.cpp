#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,arr[1000000],i;
    cin >> n >> k;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    k-min >= 0 ? cout << k-min << "\n" : cout << 0 << "\n";
    return 0;
}