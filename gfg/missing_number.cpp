#include <iostream>
#include <algorithm>
using namespace std;

int arr[10000005];
int findSum(int n)
{
    int answer = (n*(n+1))/2;
    return answer;
}

void solve(int n)
{
    sort(arr, arr+n-1);
    int sum = 0,i;
    for(i=0;i<n-1;i++)
    {
        sum += arr[i];
        int temp_sum = findSum(i+1);
        if(temp_sum-sum!=0)
        {
            cout << i+1 << "\n";
            return;
        }
    }
    cout << i+1 << "\n";
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n;
        for(int j=0;j<n-1;j++)
        {
            cin >> arr[j];
        }
        solve(n);
    }
    return 0;
}