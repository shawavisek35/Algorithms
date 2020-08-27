#include <iostream>
#include <vector>
using namespace std;


void solve()
{
    int n,k,i, element,temp_weight=0,count=0;
    vector <int> arr;
    cin >> n >> k;
    for(i=0;i<n;i++)
    {
        cin >> element;
        arr.push_back(element);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>k)
        {
            cout << -1 << "\n";
            return;
        }
        if(temp_weight+arr[i]>k)
        {
            count++;
            temp_weight = arr[i];
        }
        else{
            temp_weight += arr[i];
        }
    }
    count++;
    cout << count << "\n";
    return;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}