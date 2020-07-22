#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i, n, element, k, maxSum = 0, windowSum = 0, max_index=0;
    vector <int> arr;
    cout << "Enter the no. of elements you want to enter : ";
    cin >> n;
    cout << "Enter the length of the window : ";
    cin >> k;
    for(i=0;i<n;i++)
    {
        cout << "Enter element at index " << i << " : ";
        cin >> element;
        arr.push_back(element);
    }
    for(i=0;i<k;i++)
    {
        windowSum += arr[i];
    }
    maxSum = windowSum;
    for(i=1;i<=arr.size()-k;i++)
    {
        windowSum = windowSum-arr[i-1]+arr[i+3];
        if(maxSum<windowSum)
        {
            maxSum = windowSum;
            max_index = i;
        }
    }
    cout << "\nThe maximum sum is : " << maxSum << "\n";
    cout << "\nThe subarray is : \n";
    i=0;
    while(i<k)
    {
        cout << arr[max_index] << "  ";
        max_index++;
        i++;
    }
    cout << "\n";
    return 0;
}