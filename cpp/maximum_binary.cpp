#include <iostream>
using namespace std;

double Maximum(int arr[], int n)
{
    int lo = 0,mid, hi=n-1, answer=-1;
    while(lo<=hi)
    {
        mid = lo + (hi-lo)/2;
        if(arr[mid]>arr[mid-1])
        {
            answer = arr[mid];
            lo = mid+1;
        }
        else if(arr[mid]<arr[mid-1])
        {
            hi = mid-1;
        }
    }
    return answer;
}

int main()
{
    int n, arr[100];
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << Maximum(arr,n) << "\n";
    return 0;
}