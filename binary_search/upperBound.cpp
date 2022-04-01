#include <iostream>
#include <vector>
using namespace std;

int findUpperBound(vector <int> arr, int k)
{
    int lo=0,hi = arr.size()-1,mid,ans=-1;
    while(lo<=hi)
    {
        mid = lo + (hi-lo)/2;
        if(arr[mid]>k)
        {
            ans = arr[mid];
            hi = mid-1;
        }
        else
        {
            lo = mid+1;
        }
    }
    return ans;
}

int main()
{
    int n,i,element,k;
    vector <int> elements;
    cin >> n;
    cin >> k;
    for(i=0;i<n;i++)
    {
        cin >> element;
        elements.push_back(element);
    }
    cout << findUpperBound(elements,k) << "\n";
    return 0;
}
