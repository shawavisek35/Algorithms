#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector <int> arr, int n,int key)
{
    int i, lo=0,hi=n-1,mid;
    while(lo<=hi)
    {
        mid = lo+(hi-lo)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]>arr[lo])
        {
            if(arr[mid]>key && arr[lo]<key)
            {
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        else{
            lo = mid + 1;
        }

    }
    return -1;
}

int main()
{
    vector <int> arr;
    int i,n,a;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    cout << findPivot(arr,n,6) << "\n";
    return 0;
}