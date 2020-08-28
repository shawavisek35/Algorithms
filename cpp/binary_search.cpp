#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int l=0, hi = n-1,mid;
    while(l<=hi)
    {
        mid = l+(hi-l)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            hi = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[100],i,n,key;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cin >> key;
    cout << binarySearch(arr,n,key) << "\n";
    return 0;
}