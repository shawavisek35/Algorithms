#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    vector <int> arr(n), lis(n);
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        lis[i] = 1;
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]>arr[j] && lis[i]<=lis[j])
            {
                lis[i] = 1 + lis[j];
            }
        }
    }
    sort(lis.begin(),lis.end());
    cout << lis[lis.size()-1] << "\n";
    return 0;
}