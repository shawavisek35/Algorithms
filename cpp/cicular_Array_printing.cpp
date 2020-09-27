#include <iostream>
using namespace std;

int main()
{
    int arr[10], key, n, i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a number to start printing from : ";
    cin >> key;
    i = key;
    int j = 0;
    while(j<n)
    {
        cout << arr[i] << "\t";
        i = (i+1)%n;
        j++;
    }
    cout << "\n";
    return 0;
}