#include <iostream>
#include <vector>
#include <map>
using namespace std;
int arr[11];


void solve()
{
    int i,n,element;
    vector <int> elements;
    map <int,int> m;
    vector <int> frequency;
    cin >> n;
    for(i=0;i<=10;i++)
    {
        arr[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        cin >> element;
        elements.push_back(element);
    }
    for(auto t : elements)
    {
        arr[t] = arr[t] + 1;
    }
    for(i=1;i<=10;i++)
    {
        if(arr[i]!=0)
        {
            m[arr[i]]++;
        }
    }
    int max = INT16_MIN;
    for(auto l : m)
    {
        if(l.second>max)
        {
            max = l.second;
        }
    }

    for(auto l : m)
    {
        if(l.second==max)
        {
            frequency.push_back(l.first);
        }
    }
    int min = INT32_MAX;
    for(auto g : frequency)
    {
        if(g<min)
        {
            min = g;
        }
    }
    cout << min << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}
