/*
    Lower bound : finding the first numebr that is greater than a given number
*/
#include <iostream>
using namespace std;

int lowerBound(int arr[], int n, int key)
{
    int lower = 0, higher = n-1, answer = INT32_MAX, mid;
    while(lower<=higher)
    {
        mid = (lower+higher)/2;
        if(arr[mid] >= key)
        {
            answer = min(answer,arr[mid]);
            higher = mid-1;
        }
        else{
            lower = mid+1;
        }
    }
    return answer;
}

int main()
{
    int n, arr[100], key;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cin >> key;
    cout << lowerBound(arr,n,key) << "\n";
    return 0;
}