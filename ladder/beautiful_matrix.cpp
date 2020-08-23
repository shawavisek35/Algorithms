#include <iostream>
using namespace std;

int arr[6][6];

int solve()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(arr[i][j] == 1)
            {
                break;
            }
        }
        if(arr[i][j]==1)
        {
            break;
        }
    }
    return (abs(3-i)+abs(3-j));
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << solve() << "\n";
    return 0;
}