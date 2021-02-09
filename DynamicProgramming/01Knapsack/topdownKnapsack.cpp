#include <bits/stdc++.h>
using namespace std;
int t[1000][1000];

void knapSack(int w[], int v[], int c, int n)
{
    int i,j;

    //matrix initialization 
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=c;j++)
        {
            if(i==0 || j==0)
            {
                t[i][j] = 0;
            }
        }
    }

    //top down approach
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=c;j++)
        
            if(w[i]<=j)
            {
                t[i][j] = max(v[i]+t[i-1][j-1],t[i-1][j]);
            }
            else{
                t[i][j] = t[i-1][j];
        }
    }
}
int main()
{
    int i,j;
    int n,c,w[10000],v[10000];
    cin >> n >> c;
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(i=0;i<n;i++)
    {
        cin >> w[i];
    }
    knapSack(w,v,c,n);
    cout << t[n][c] <<  "\n";
    
    return 0;
}