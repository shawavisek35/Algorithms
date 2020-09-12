#include <iostream>
#include <vector>
using namespace std;

int findMin(vector <int> arr, int n)
{
    int i, lo=0,hi=n-1,mid,ans = INT16_MAX;
    while(lo<=hi)
    {
       mid = lo+(hi-lo)/2;
       if(arr[mid]>arr[lo] && arr[mid]>arr[hi])
       {
           lo = mid+1;
           if(arr[mid]<ans)
           {
               ans = arr[mid];
           }
       }
       else{
           if(arr[mid]<ans)
           {
               ans = arr[mid];
           }
           hi = mid-1;
       }

    }
    return ans;
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
    cout << findMin(arr,n) << "\n";
    return 0;
}