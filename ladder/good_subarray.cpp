#include <iostream>
#include <vector>
using namespace std;

int findSum(int x, int y, vector <int> arr)
{
    
    int sum = 0,i;
    for(i=x;i<=y;i++)
    {
        sum += arr[i];
    }
    return sum;

}

void solve()
{
    int n,i,count=0;
    string s;
    vector <int> el;
    cin >> n;
    cin >> s;
    for(i=0;i<n;i++)
    {
        el.push_back(s[i]='0');
    }
    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum = findSum(i,j,el);
            if(sum==j-i+1)
            {
                count++;
            }

        }
    }
    cout << count << "\n";
    return;

}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}