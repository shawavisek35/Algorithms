#include <iostream>
using namespace std;

int main()
{
    int n,i,arr[100], prefix_sum[100];
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    prefix_sum[0] = arr[0];
    for(i=1;i<n;i++)
    {
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }

    for(i=0;i<n;i++)
    {
        cout << arr[i] << "\t" << prefix_sum[i] << "\n";
    }
    return 0;
}