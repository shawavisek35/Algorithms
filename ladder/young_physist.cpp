#include <iostream>
using namespace std;
int forces[101][4];
int force[4];

void solve(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        force[0]+=forces[i][0];
        force[1]+=forces[i][1];
        force[2]+=forces[i][2];
    }
    
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j;
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin >> forces[i][j];
        }
    }
    solve(n);
    if(!force[0] && !force[1] && !force[2])
    {
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
    return 0;
}