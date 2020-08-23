#include <iostream>
using namespace std;

int arr[102];

int solve(int n)
{
    int i,j;
    int max=0, min=0;
    for(i=1;i<n;i++)
    {
        if(arr[i] > arr[max])
        {
            max = i;
        }
        if(arr[min]>=arr[i])
        {
            min = i;
        }
    }
    min++;

    if(max>=min)
    {
        return (max+(n-min)-1);
    }
    return (max+n-min);
    
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, n;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << solve(n) << "\n";
    return 0;
}