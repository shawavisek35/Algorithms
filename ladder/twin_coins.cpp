#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n,coin, i, sum=0, sum1=0, count=0;
    vector <int> coins;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> coin;
        coins.push_back(coin);
    }
    sort(coins.begin(), coins.end());
    for(i=0;i<n;i++)
    {
        sum += coins[i];
    }
    i=0;
    while(sum1<=sum/2)
    {
        count++;
        sum1 += coins[i];
        i++;
        if(i==n)
        {
            break;
        }
    }
    cout << count << "\n";

    return 0;
}