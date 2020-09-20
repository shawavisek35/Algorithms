#include <iostream>
using namespace std;

void Add1()
{
    int i,n,k,arr[1001],prefixSum[1001],j;
    cin >> n >> k;
    for(i=1;i<=n;i++)
    {
        arr[i] = 0; 
    }
    for(i=0;i<k;i++)
    {
        cin >> prefixSum[i];
    }
    for(i=0;i<k;i++)
    {
        for(j=prefixSum[i];j<=n;j++)
        {
            arr[j] += 1;
        }
    }
    for(i=1;i<=n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        Add1();
    }
    return 0;
}