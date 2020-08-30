#include <iostream>
using namespace std;

int FindMin(int arr[], int n)
{
    int lo = 0, hi = n-1, answer=0, mid;
    while(lo<=hi)
    {
        mid = lo+(hi-lo)/2;
        if(arr[mid]>=arr[n-1])
        {
            lo = mid+1;
        }
        else if(arr[mid]<=arr[n-1])
        {
            answer = arr[mid];
            hi = mid-1;
        }
    }
    return answer;
}

int main()
{
    int n,arr[100];
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << FindMin(arr,n) << "\n";
    return 0;
}