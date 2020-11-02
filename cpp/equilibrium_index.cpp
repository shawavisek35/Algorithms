//Finding an index from where the left sum is equal to right sum
#include <iostream>
using namespace std;

int findEquilibrium(int arr[], int n)
{
    int i, sum = 0, lsum = 0;
    for(i=0;i<n;i++)
    {
        sum += arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum -= arr[i];
        if(lsum == sum)
        {
            return i;
        }
        lsum += arr[i];
    }
    return -1;
}

int main()
{
    int arr[20], i, n;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int ans = findEquilibrium(arr, n);
    cout << "The equilibrium index is : " << ans << "\n";
    return 0;
}