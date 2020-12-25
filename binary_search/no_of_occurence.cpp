#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 5, 10, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, left, right, key;
    cout << "Enter a key element : ";
    cin >> key;
    if(arr[n]<key || arr[0]>key)
    {
        cout << "Element not present..." << "\n";
    }
    left = lower_bound(arr, arr+n, key) - arr;
    right = upper_bound(arr, arr+n, key) - arr;
    cout << right-left << "\n";
    return 0;
}