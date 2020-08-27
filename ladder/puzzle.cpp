#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m,i,puzzle[101],min2=INT64_MAX;
    cin >> n >> m;
    for(i=0;i<m;i++)
    {
        cin >> puzzle[i];
    }
    sort(puzzle, puzzle+m);
    for(i=0;i<=m-n;i++)
    {
        min2 = min(min2,(puzzle[i+n-1]-puzzle[i]));
    }
    cout << min2 << "\n";
    return 0;
}